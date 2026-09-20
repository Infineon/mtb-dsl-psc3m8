/***************************************************************************//**
* \file mtb_hal_npnz.h
*
* \brief
* Provides a high level interface for interacting with the Infineon Filter.
* This interface abstracts out the chip specific details. If any chip specific
* functionality is necessary, or performance is critical the low level functions
* can be used directly.
*
********************************************************************************
   * \copyright
* Copyright(c) 2024-2026 Infineon Technologies AG or an affiliate of
* Infineon Technologies AG
*
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/**
 * \addtogroup group_hal_npnz NPNZ (N-Pole N-Zero Filter)
 * \ingroup group_hal
 * \{
 * High level interface for interacting with the NPNZ hardware filter.
 *
 * \section group_hal_npnz_overview Overview
 *
 * The NPNZ HAL driver provides a high-level interface to the HW3P3Z - a
 * hardware-accelerated 3-Pole/3-Zero (3P3Z) digital compensator. The HW3P3Z is
 * the digital implementation of an analog Type III controller. It is a Soft IP
 * within the PPCA subsystem that introduces a specific gain and phase boost into
 * the control loop by implementing three poles and three zeroes as a fixed-point
 * IIR filter.
 *
 * The MCU provides several instances of the HW3P3Z filter (the available number
 * depends on the selected MPN). Each instance can operate in one of two modes:
 * - <b>Datapath mode:</b> The HW3P3Z is connected to on-chip ADCs (input) and TCPWM compare
 *   registers (output), enabling autonomous closed-loop control without CPU intervention.
 * - <b>CPU accelerator mode:</b> The CPU writes input values and reads filter output via AHB,
 *   using the HW3P3Z as a fast fixed-point math accelerator for arbitrary control quantities.
 *
 * \section group_hal_npnz_features Features
 *
 * - 3 poles, 3 zeroes (3P3Z IIR filter)
 * - 16-bit input, 24-bit output
 * - 24-bit coefficient registers (1 sign bit + 23 fractional value bits, Q0.23 format,
 *   range [-1, +1))
 * - 40-bit multiplier
 * - 44-bit internal accumulator
 * - Maximum 8 CPU clock cycles execution latency
 * - Saturation operators with configurable min/max output limits
 * - 2's complement arithmetic
 * - Programmable data path
 * - Filter processing triggered by writing into one of the two data registers
 *   (DATA_IN0 or DATA_IN1)
 * - Generates a pulse event at the completion of filter computation
 *
 * \section group_hal_npnz_transfer_function Transfer Function
 *
 * The discrete-time transfer function implemented by the HW3P3Z is:
 *
 * <b>H(z) = k_OUT * (B0 + B1*z^-1 + B2*z^-2 + B3*z^-3) / (1 + A1*z^-1 + A2*z^-2 + A3*z^-3)</b>
 *
 * Where B0..B3 are the numerator (zero) coefficients, A1..A3 are the denominator (pole)
 * coefficients,
 * and k_OUT is the output gain that translates between the ADC and TCPWM domains.
 *
 * The filter difference equations are:
 * - x(n) = x_ref - xin(n)
 * - y(n) = Sum(i=0..3)[bi * x(n-i)] - Sum(j=1..3)[aj * y(n-j)]
 * - y(out) = y(n) + Offset
 * - y(out) = y(n),    if LimMin <= y(n) <= LimMax
 * - y(out) = LimMin,  if y(n) < LimMin
 * - y(out) = LimMax,  if y(n) > LimMax
 *
 * \section group_hal_npnz_fixed_point Fixed-Point Representation
 *
 * The HW3P3Z uses a fixed-point representation:
 * - Inputs are 16-bit values. An internal fixed 8-bit left shift is applied on the input
 *   side (equivalent to multiplication by 256) to bridge the 16-bit input and 24-bit output
 * domains.
 * - Outputs are 24-bit values.
 * - Coefficients are 24-bit signed fixed-point values in Q0.23 format, ranging from -1 to +1.
 *
 * \subsection group_hal_npnz_coeff_scaling Coefficient Scaling
 *
 * If any B (numerator / X) coefficient magnitude exceeds 1.0, divide all B coefficients by 2 and
 * increment the scaleCX factor by 1. Repeat until all B coefficients are in the [-1, +1) range.
 *
 * If any A (denominator / Y) coefficient magnitude exceeds 1.0, divide all A coefficients by 2 and
 * increment the scaleCY factor by 1. Repeat until all A coefficients are in the [-1, +1) range.
 *
 * \note All Y (denominator) coefficients must have their sign swapped (negated) before programming
 * into the hardware, as required by the filter difference equation implementation.
 *
 */

#pragma once

#include <stdint.h>
#include <stdbool.h>
#include "cy_result.h"
#include "mtb_hal_hw_types.h"

// Remove this when added to cy_pdl.h
#include "cy_ppca_hwfilt3p3z.h"

#if defined(__cplusplus)
extern "C" {
#endif

/*******************************************************************************
*                           Defines
*******************************************************************************/

/** \addtogroup group_hal_results_npnz NPNZ HAL Results
 *  NPNZ specific return codes
 *  \ingroup group_hal_results
 *  \{ *//**
 */

/** Bad argument */
#define MTB_HAL_NPNZ_RSLT_ERR_BAD_ARGUMENT \
    (CY_RSLT_CREATE_EX(CY_RSLT_TYPE_ERROR, CY_RSLT_MODULE_ABSTRACTION_HAL, MTB_HAL_RSLT_MODULE_NPNZ, 0))

/**
 * \}
 */

/*******************************************************************************
*                           Enums
*******************************************************************************/

/** NPNZ data input channels.
 * The filter has two data input registers. Writing to the selected trigger
 * register starts the filter computation. In datapath mode, DATA_IN1 can be
 * sourced directly from the ADC filter output. */
typedef enum
{
    MTB_HAL_NPNZ_CH_0    = 0,  //!< DATA_IN0 register - typically CPU-written input
    MTB_HAL_NPNZ_CH_1    = 1   //!< DATA_IN1 register - CPU-written or ADC datapath input
} mtb_hal_npnz_ch_t;

/** NPNZ filter type */
typedef enum
{
    MTB_HAL_NPNZ_3P3Z    = 0   //!< 3-Pole/3-Zero IIR digital compensator (Type III controller)
} mtb_hal_npnz_type_t;

/*******************************************************************************
*                           Structs
*******************************************************************************/

/** 3P3Z filter coefficients.
 * These are 24-bit signed fixed-point values in Q0.23 format (range [-1, +1)).
 * The X (numerator/B) coefficients correspond to the zeros and multiply the input samples.
 * The Y (denominator/A) coefficients correspond to the poles and multiply the previous output
 * samples.
 * \note All Y coefficients must be sign-swapped (negated) before being programmed into
 * the hardware, as required by the filter's internal difference equation implementation. */
typedef struct
{
    uint32_t x0;       /**< B0 (X0) numerator coefficient - multiplies x(n), the current input
                          sample */
    uint32_t x1;       /**< B1 (X1) numerator coefficient - multiplies x(n-1), the previous input
                          sample */
    uint32_t x2;       /**< B2 (X2) numerator coefficient - multiplies x(n-2) */
    uint32_t x3;       /**< B3 (X3) numerator coefficient - multiplies x(n-3) */
    uint32_t y1;       /**< A1 (Y1) denominator coefficient - multiplies y(n-1) (sign-swapped) */
    uint32_t y2;       /**< A2 (Y2) denominator coefficient - multiplies y(n-2) (sign-swapped) */
    uint32_t y3;       /**< A3 (Y3) denominator coefficient - multiplies y(n-3) (sign-swapped) */
} mtb_hal_npnz_3p3z_coefficients_t;

/** Filter coefficients */
typedef struct
{
    mtb_hal_npnz_type_t filter_type; /**< Type of filter */
    union
    {
        mtb_hal_npnz_3p3z_coefficients_t  coeffs_3p3z; /**< 3P3Z coefficients */
    };
} mtb_hal_npnz_coefficients_t;

/*******************************************************************************
*                        Public Function Prototypes
*******************************************************************************/

/**
 * Sets up the HAL instance to use the specified hardware resource. This hardware
 * resource must have already been configured via the PDL.
 *
 * @param[out] obj   The HAL driver instance object. The caller must allocate the
 *                   memory for this object, but the HAL will initialize its contents
 * @param[in] config The configurator-generated HAL config structure for this
 *                   peripheral instance
 * @return the status of the HAL setup
 */
cy_rslt_t mtb_hal_npnz_setup(mtb_hal_npnz_t* obj, const mtb_hal_npnz_configurator_t* config);

/** Enable or disable the filter instance.
 *
 * When enabled, the filter is ready to process data when triggered by a write
 * to a data input register. When disabled, writes to data registers have no
 * effect and any in-progress computation is halted.
 *
 * @param[in] obj          The filter object
 * @param[in] enable       true to enable filter processing, false to disable
 * @return The status of the enable request
 */
cy_rslt_t mtb_hal_npnz_enable(mtb_hal_npnz_t* obj, bool enable);

/** Check if the filter is busy.
 *
 * The filter becomes busy when a computation is triggered (by writing to a
 * data input register) and returns to free state after the computation
 * completes. Maximum computation latency is 8 CPU clock cycles.
 *
 * @param[in] obj          The filter object
 * @return true if the filter is currently computing (output not yet valid),
 *         false if the filter is idle (output data is valid)
 */
bool mtb_hal_npnz_is_busy(mtb_hal_npnz_t* obj);

/** Read the 24-bit filter computation output.
 *
 * The output includes any configured offset addition, output gain (right shift),
 * and saturation clamping to the configured min/max limits.
 *
 * @note Ensure the filter is not busy (mtb_hal_npnz_is_busy() returns false)
 * before reading the output to guarantee valid data.
 *
 * @param[in]  obj          The filter object
 * @param[out] filter_out   Pointer to store the 24-bit filter output value
 * @return The status of the filter output request
 */
cy_rslt_t mtb_hal_npnz_read(mtb_hal_npnz_t* obj, uint32_t* filter_out);

/** Write a 16-bit input sample to a filter data input register.
 *
 * Writing to the data input register that is configured as the trigger source
 * starts the filter computation. The input is internally left-shifted by 8 bits
 * before processing to bridge the 16-bit input and 24-bit output domains.
 *
 * @param[in] obj          The filter object
 * @param[in] channel      Data input channel to write to (MTB_HAL_NPNZ_CH_0 or MTB_HAL_NPNZ_CH_1)
 * @param[in] filter_in    16-bit input sample value
 * @return The status of the filter input request
 */
cy_rslt_t mtb_hal_npnz_write(mtb_hal_npnz_t* obj, mtb_hal_npnz_ch_t channel,
                             uint16_t filter_in);

/** Program all 7 filter coefficients into the hardware registers.
 *
 * Coefficients are 24-bit signed fixed-point values in Q0.23 format, stored
 * in the lower 24 bits of each 32-bit value. The X (numerator/B) coefficients
 * correspond to the zeros and the Y (denominator/A) coefficients correspond to the poles.
 *
 * If any coefficient exceeds the [-1, +1) range, it must be scaled down by dividing
 * by 2 and the corresponding scale factor (scaleCX or scaleCY) incremented.
 *
 * @note Y coefficients must be sign-swapped (negated) before passing to this function,
 * as required by the filter's difference equation.
 *
 * @param[in] obj          The filter object
 * @param[in] type         Filter type (currently only MTB_HAL_NPNZ_3P3Z)
 * @param[in] coeff        Pointer to filter coefficients structure
 * @return The status of the filter coefficients request
 */
cy_rslt_t mtb_hal_npnz_set_coefficients(mtb_hal_npnz_t* obj, mtb_hal_npnz_type_t type,
                                        mtb_hal_npnz_coefficients_t* coeff);

/** Configure the additive output offset.
 *
 * This value is added to the filter computation result before saturation
 * clamping. The offset uses the same fixed-point format (same number of
 * fractional bits) as the filter output.
 *
 * @param[in] obj          The filter object
 * @param[in] offset       Signed offset value to add to the filter output
 * @return The status of the filter data output offset request
 */
cy_rslt_t mtb_hal_npnz_set_offset(mtb_hal_npnz_t* obj, uint32_t offset);

#if defined(__cplusplus)
}
#endif

#ifdef MTB_HAL_NPNZ_IMPL_HEADER
#include MTB_HAL_NPNZ_IMPL_HEADER
#endif /* MTB_HAL_NPNZ_IMPL_HEADER */

/** \} group_hal_npnz */
