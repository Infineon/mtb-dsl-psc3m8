/***************************************************************************//**
* \file IfxSRSS_regdef.h
*
* \brief
* SRSS Registers
*
********************************************************************************
* \copyright
* (c) 2025-2026, Infineon Technologies AG or an affiliate of
* Infineon Technologies AG.
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
********************************************************************************
*
* \defgroup IfxSfr_SRSS_Registers SRSS Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_SRSS_Registers_Bitfields Bitfields
* \ingroup IfxSfr_SRSS_Registers
*
* \defgroup IfxSfr_SRSS_Registers_union Register unions
* \ingroup IfxSfr_SRSS_Registers
*
* \defgroup IfxSfr_SRSS_Registers_struct Memory map
* \ingroup IfxSfr_SRSS_Registers
*
*******************************************************************************/

#ifndef _IFXSRSS_REGDEF_H_
#define _IFXSRSS_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_SRSS_Registers_Bitfields
 * \{  */
/** \brief High Voltage / Low Voltage Detector (HVLVD) Status Register */
typedef struct _Ifx_PWR_LVD_STATUS_Bits
{
    __I  Ifx_UReg_32Bit HVLVD1_OK:1;            /**< \brief [0:0]   HVLVD1 output.
                                                                    0: below voltage threshold
                                                                    1: above voltage threshold (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PWR_LVD_STATUS_Bits;

/** \brief Clock DSI Select Register */
typedef struct _Ifx_CLK_DSI_SELECT_Bits
{
    __IO Ifx_UReg_32Bit DSI_MUX:5;              /**< \brief [4:0]   Selects a DSI source or low frequency clock
                                                                    for use in a clock path.
                                                                    The output of this mux can be selected for clock
                                                                    PATH<i> using CLK_SELECT_PATH register.
                                                                    Using the output of this mux as HFCLK source will
                                                                    result in undefined behavior.
                                                                    It can be used to clocks to DSI or as reference
                                                                    inputs for the FLL/PLL, subject to the frequency
                                                                    limits of those circuits.
                                                                    This mux is not glitch free, so do not change the
                                                                    selection while it is an actively selected clock. (rw)
                                                DSI_OUT0      : 0u   DSI0 - dsi_out[0]
                                                DSI_OUT1      : 1u   DSI1 - dsi_out[1]
                                                DSI_OUT2      : 2u   DSI2 - dsi_out[2]
                                                DSI_OUT3      : 3u   DSI3 - dsi_out[3]
                                                DSI_OUT4      : 4u   DSI4 - dsi_out[4]
                                                DSI_OUT5      : 5u   DSI5 - dsi_out[5]
                                                DSI_OUT6      : 6u   DSI6 - dsi_out[6]
                                                DSI_OUT7      : 7u   DSI7 - dsi_out[7]
                                                DSI_OUT8      : 8u   DSI8 - dsi_out[8]
                                                DSI_OUT9      : 9u   DSI9 - dsi_out[9]
                                                DSI_OUT10     : 10u   DSI10 - dsi_out[10]
                                                DSI_OUT11     : 11u   DSI11 - dsi_out[11]
                                                DSI_OUT12     : 12u   DSI12 - dsi_out[12]
                                                DSI_OUT13     : 13u   DSI13 - dsi_out[13]
                                                DSI_OUT14     : 14u   DSI14 - dsi_out[14]
                                                DSI_OUT15     : 15u   DSI15 - dsi_out[15]
                                                ILO           : 16u   ILO - Internal Low-speed Oscillator #0
                                                WCO           : 17u   WCO - Watch-Crystal Oscillator
                                                ALTLF         : 18u   ALTLF - Alternate Low-Frequency Clock
                                                PILO          : 19u   PILO - Precision Internal Low-speed Oscillator
                                                ILO1          : 20u   ILO1 - Internal Low-speed Oscillator #1, if present. */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_CLK_DSI_SELECT_Bits;

/* CLK_DSI_SELECT.DSI_MUX enumerated values */

/** \brief DSI0 - dsi_out[0] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT0 (0u)

/** \brief DSI1 - dsi_out[1] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT1 (1u)

/** \brief DSI2 - dsi_out[2] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT2 (2u)

/** \brief DSI3 - dsi_out[3] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT3 (3u)

/** \brief DSI4 - dsi_out[4] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT4 (4u)

/** \brief DSI5 - dsi_out[5] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT5 (5u)

/** \brief DSI6 - dsi_out[6] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT6 (6u)

/** \brief DSI7 - dsi_out[7] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT7 (7u)

/** \brief DSI8 - dsi_out[8] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT8 (8u)

/** \brief DSI9 - dsi_out[9] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT9 (9u)

/** \brief DSI10 - dsi_out[10] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT10 (10u)

/** \brief DSI11 - dsi_out[11] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT11 (11u)

/** \brief DSI12 - dsi_out[12] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT12 (12u)

/** \brief DSI13 - dsi_out[13] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT13 (13u)

/** \brief DSI14 - dsi_out[14] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT14 (14u)

/** \brief DSI15 - dsi_out[15] */
#define IFX_CLK_DSI_SELECT_DSI_MUX_DSI_OUT15 (15u)

/** \brief ILO - Internal Low-speed Oscillator #0 */
#define IFX_CLK_DSI_SELECT_DSI_MUX_ILO (16u)

/** \brief WCO - Watch-Crystal Oscillator */
#define IFX_CLK_DSI_SELECT_DSI_MUX_WCO (17u)

/** \brief ALTLF - Alternate Low-Frequency Clock */
#define IFX_CLK_DSI_SELECT_DSI_MUX_ALTLF (18u)

/** \brief PILO - Precision Internal Low-speed Oscillator */
#define IFX_CLK_DSI_SELECT_DSI_MUX_PILO (19u)

/** \brief ILO1 - Internal Low-speed Oscillator #1, if present. */
#define IFX_CLK_DSI_SELECT_DSI_MUX_ILO1 (20u)

/** \brief Fast Clock Output Select Register */
typedef struct _Ifx_CLK_OUTPUT_FAST_Bits
{
    __IO Ifx_UReg_32Bit FAST_SEL0:4;            /**< \brief [3:0]   Select signal for fast clock output #0 (rw)
                                                NC            : 0u   Disabled - output is 0.
                                                                    For power savings, clocks are blocked before
                                                                    entering any muxes, including PATH_SEL0 and
                                                                    HFCLK_SEL0.
                                                ECO           : 1u   External Crystal Oscillator (ECO)
                                                EXTCLK        : 2u   External clock input (EXTCLK)
                                                ALTHF         : 3u   Alternate High-Frequency (ALTHF) clock input to SRSS
                                                TIMERCLK      : 4u   Timer clock.
                                                                    It is grouped with the fast clocks because it may
                                                                    be a gated version of a fast clock, and therefore
                                                                    may have a short high pulse.
                                                PATH_SEL0     : 5u   Selects the clock path chosen by PATH_SEL0 field
                                                HFCLK_SEL0    : 6u   Selects the output of the HFCLK_SEL0 mux
                                                SLOW_SEL0     : 7u   Selects the output of CLK_OUTPUT_SLOW.SLOW_SEL0
                                                IHO           : 8u   Internal High-speed Oscillator (IHO).
                                                PWR           : 9u   clk_pwr: used for PPU and related components */
    __IO Ifx_UReg_32Bit PATH_SEL0:4;            /**< \brief [7:4]   Selects a clock path to use in fast clock
                                                                    output #0 logic. (rw) */
    __IO Ifx_UReg_32Bit HFCLK_SEL0:4;           /**< \brief [11:8]  Selects a HFCLK tree for use in fast clock
                                                                    output #0 (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __IO Ifx_UReg_32Bit FAST_SEL1:4;            /**< \brief [19:16] Select signal for fast clock output #1 (rw)
                                                NC            : 0u   Disabled - output is 0.
                                                                    For power savings, clocks are blocked before
                                                                    entering any muxes, including PATH_SEL1 and
                                                                    HFCLK_SEL1.
                                                ECO           : 1u   External Crystal Oscillator (ECO)
                                                EXTCLK        : 2u   External clock input (EXTCLK)
                                                ALTHF         : 3u   Alternate High-Frequency (ALTHF) clock input to SRSS
                                                TIMERCLK      : 4u   Timer clock.
                                                                    It is grouped with the fast clocks because it may
                                                                    be a gated version of a fast clock, and therefore
                                                                    may have a short high pulse.
                                                PATH_SEL1     : 5u   Selects the clock path chosen by PATH_SEL1 field
                                                HFCLK_SEL1    : 6u   Selects the output of the HFCLK_SEL1 mux
                                                SLOW_SEL1     : 7u   Selects the output of CLK_OUTPUT_SLOW.SLOW_SEL1
                                                IHO           : 8u   Internal High-speed Oscillator (IHO).
                                                PWR           : 9u   clk_pwr: used for PPU and related components */
    __IO Ifx_UReg_32Bit PATH_SEL1:4;            /**< \brief [23:20] Selects a clock path to use in fast clock
                                                                    output #1 logic. (rw) */
    __IO Ifx_UReg_32Bit HFCLK_SEL1:4;           /**< \brief [27:24] Selects a HFCLK tree for use in fast clock
                                                                    output #1 logic (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [31:28] \internal Reserved */
} Ifx_CLK_OUTPUT_FAST_Bits;

/* CLK_OUTPUT_FAST.FAST_SEL0 enumerated values */

/** \brief Disabled - output is 0.
For power savings, clocks are blocked before entering any muxes, including
PATH_SEL0 and HFCLK_SEL0. */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL0_NC (0u)

/** \brief External Crystal Oscillator (ECO) */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL0_ECO (1u)

/** \brief External clock input (EXTCLK) */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL0_EXTCLK (2u)

/** \brief Alternate High-Frequency (ALTHF) clock input to SRSS */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL0_ALTHF (3u)

/** \brief Timer clock.
It is grouped with the fast clocks because it may be a gated version of a fast
clock, and therefore may have a short high pulse. */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL0_TIMERCLK (4u)

/** \brief Selects the clock path chosen by PATH_SEL0 field */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL0_PATH_SEL0 (5u)

/** \brief Selects the output of the HFCLK_SEL0 mux */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL0_HFCLK_SEL0 (6u)

/** \brief Selects the output of CLK_OUTPUT_SLOW.SLOW_SEL0 */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL0_SLOW_SEL0 (7u)

/** \brief Internal High-speed Oscillator (IHO). */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL0_IHO (8u)

/** \brief clk_pwr: used for PPU and related components */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL0_PWR (9u)

/* CLK_OUTPUT_FAST.FAST_SEL1 enumerated values */

/** \brief Disabled - output is 0.
For power savings, clocks are blocked before entering any muxes, including
PATH_SEL1 and HFCLK_SEL1. */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL1_NC (0u)

/** \brief External Crystal Oscillator (ECO) */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL1_ECO (1u)

/** \brief External clock input (EXTCLK) */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL1_EXTCLK (2u)

/** \brief Alternate High-Frequency (ALTHF) clock input to SRSS */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL1_ALTHF (3u)

/** \brief Timer clock.
It is grouped with the fast clocks because it may be a gated version of a fast
clock, and therefore may have a short high pulse. */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL1_TIMERCLK (4u)

/** \brief Selects the clock path chosen by PATH_SEL1 field */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL1_PATH_SEL1 (5u)

/** \brief Selects the output of the HFCLK_SEL1 mux */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL1_HFCLK_SEL1 (6u)

/** \brief Selects the output of CLK_OUTPUT_SLOW.SLOW_SEL1 */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL1_SLOW_SEL1 (7u)

/** \brief Internal High-speed Oscillator (IHO). */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL1_IHO (8u)

/** \brief clk_pwr: used for PPU and related components */
#define IFX_CLK_OUTPUT_FAST_FAST_SEL1_PWR (9u)

/** \brief Slow Clock Output Select Register */
typedef struct _Ifx_CLK_OUTPUT_SLOW_Bits
{
    __IO Ifx_UReg_32Bit SLOW_SEL0:4;            /**< \brief [3:0]   Select signal for slow clock output #0 (rw)
                                                NC            : 0u   Disabled - output is 0.
                                                                    For power savings, clocks are blocked before
                                                                    entering any muxes.
                                                ILO           : 1u   Internal Low Speed Oscillator (ILO)
                                                WCO           : 2u   Watch-Crystal Oscillator (WCO)
                                                BAK           : 3u   Root of the Backup domain clock tree (BAK)
                                                ALTLF         : 4u   Alternate low-frequency clock input to SRSS (ALTLF)
                                                LFCLK         : 5u   Root of the low-speed clock tree (LFCLK)
                                                IMO           : 6u   Internal Main Oscillator (IMO).
                                                                    This is grouped with the slow clocks so it can be
                                                                    observed during DEEPSLEEP entry/exit.
                                                SLPCTRL       : 7u   Sleep Controller clock (SLPCTRL).
                                                                    This is grouped with the slow clocks so it can be
                                                                    observed during DEEPSLEEP entry/exit.
                                                PILO          : 8u   Precision Internal Low Speed Oscillator (PILO)
                                                ILO1          : 9u   Internal Low Speed Oscillator (ILO1), if present on
                                                                    the product.
                                                ECO_PRESCALER : 10u   ECO Prescaler (ECO_PRESCALER)
                                                LPECO         : 11u   LPECO
                                                LPECO_PRESCALER: 12u   LPECO Prescaler (LPECO_PRESCALER)
                                                MFO           : 13u   Medium Frequency Oscillator (MFO) */
    __IO Ifx_UReg_32Bit SLOW_SEL1:4;            /**< \brief [7:4]   Select signal for slow clock output #1 (rw)
                                                NC            : 0u   Disabled - output is 0.
                                                                    For power savings, clocks are blocked before
                                                                    entering any muxes.
                                                ILO           : 1u   Internal Low Speed Oscillator (ILO)
                                                WCO           : 2u   Watch-Crystal Oscillator (WCO)
                                                BAK           : 3u   Root of the Backup domain clock tree (BAK)
                                                ALTLF         : 4u   Alternate low-frequency clock input to SRSS (ALTLF)
                                                LFCLK         : 5u   Root of the low-speed clock tree (LFCLK)
                                                IMO           : 6u   Internal Main Oscillator (IMO).
                                                                    This is grouped with the slow clocks so it can be
                                                                    observed during DEEPSLEEP entry/exit.
                                                SLPCTRL       : 7u   Sleep Controller clock (SLPCTRL).
                                                                    This is grouped with the slow clocks so it can be
                                                                    observed during DEEPSLEEP entry/exit.
                                                PILO          : 8u   Precision Internal Low Speed Oscillator (PILO)
                                                ILO1          : 9u   Internal Low Speed Oscillator (ILO1), if present on
                                                                    the product.
                                                ECO_PRESCALER : 10u   ECO Prescaler (ECO_PRESCALER)
                                                LPECO         : 11u   LPECO
                                                LPECO_PRESCALER: 12u   LPECO Prescaler (LPECO_PRESCALER)
                                                MFO           : 13u   Medium Frequency Oscillator (MFO) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CLK_OUTPUT_SLOW_Bits;

/* CLK_OUTPUT_SLOW.SLOW_SEL0 enumerated values */

/** \brief Disabled - output is 0.
For power savings, clocks are blocked before entering any muxes. */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_NC (0u)

/** \brief Internal Low Speed Oscillator (ILO) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_ILO (1u)

/** \brief Watch-Crystal Oscillator (WCO) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_WCO (2u)

/** \brief Root of the Backup domain clock tree (BAK) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_BAK (3u)

/** \brief Alternate low-frequency clock input to SRSS (ALTLF) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_ALTLF (4u)

/** \brief Root of the low-speed clock tree (LFCLK) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_LFCLK (5u)

/** \brief Internal Main Oscillator (IMO).
This is grouped with the slow clocks so it can be observed during DEEPSLEEP
entry/exit. */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_IMO (6u)

/** \brief Sleep Controller clock (SLPCTRL).
This is grouped with the slow clocks so it can be observed during DEEPSLEEP
entry/exit. */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_SLPCTRL (7u)

/** \brief Precision Internal Low Speed Oscillator (PILO) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_PILO (8u)

/** \brief Internal Low Speed Oscillator (ILO1), if present on the product. */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_ILO1 (9u)

/** \brief ECO Prescaler (ECO_PRESCALER) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_ECO_PRESCALER (10u)

/** \brief LPECO */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_LPECO (11u)

/** \brief LPECO Prescaler (LPECO_PRESCALER) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_LPECO_PRESCALER (12u)

/** \brief Medium Frequency Oscillator (MFO) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL0_MFO (13u)

/* CLK_OUTPUT_SLOW.SLOW_SEL1 enumerated values */

/** \brief Disabled - output is 0.
For power savings, clocks are blocked before entering any muxes. */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_NC (0u)

/** \brief Internal Low Speed Oscillator (ILO) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_ILO (1u)

/** \brief Watch-Crystal Oscillator (WCO) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_WCO (2u)

/** \brief Root of the Backup domain clock tree (BAK) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_BAK (3u)

/** \brief Alternate low-frequency clock input to SRSS (ALTLF) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_ALTLF (4u)

/** \brief Root of the low-speed clock tree (LFCLK) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_LFCLK (5u)

/** \brief Internal Main Oscillator (IMO).
This is grouped with the slow clocks so it can be observed during DEEPSLEEP
entry/exit. */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_IMO (6u)

/** \brief Sleep Controller clock (SLPCTRL).
This is grouped with the slow clocks so it can be observed during DEEPSLEEP
entry/exit. */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_SLPCTRL (7u)

/** \brief Precision Internal Low Speed Oscillator (PILO) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_PILO (8u)

/** \brief Internal Low Speed Oscillator (ILO1), if present on the product. */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_ILO1 (9u)

/** \brief ECO Prescaler (ECO_PRESCALER) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_ECO_PRESCALER (10u)

/** \brief LPECO */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_LPECO (11u)

/** \brief LPECO Prescaler (LPECO_PRESCALER) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_LPECO_PRESCALER (12u)

/** \brief Medium Frequency Oscillator (MFO) */
#define IFX_CLK_OUTPUT_SLOW_SLOW_SEL1_MFO (13u)

/** \brief Clock Calibration Counter 1 */
typedef struct _Ifx_CLK_CAL_CNT1_Bits
{
    __IO Ifx_UReg_32Bit CAL_COUNTER1:24;        /**< \brief [23:0]  Down-counter clocked on fast clock output
                                                                    #0 (see CLK_OUTPUT_FAST).
                                                                    This register always reads as zero.
                                                                    Counting starts internally when this register is
                                                                    written with a nonzero value.
                                                                    CAL_COUNTER_DONE goes immediately low to indicate
                                                                    that the counter has started and will be asserted
                                                                    when the counters are done.
                                                                    Do not write this field unless CAL_COUNTER_DONE==1.
                                                                    Both clocks must be running or the measurement will
                                                                    not complete, and this case can be recovered using
                                                                    CAL_RESET. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [28:24] \internal Reserved */
    __IO Ifx_UReg_32Bit CAL_RESET:1;            /**< \brief [29:29] Reset clock calibration logic for window mode.
                                                                    This can be used to recover from unexpected
                                                                    conditions, such as no clock present on counter #1.
                                                                    Set this bit only when
                                                                    CLK_CAL_TEST.CAL_WINDOW_SEL=1 (window mode).
                                                                    It takes 3 clock cycles for reset to propagate. (rw) */
    __I  Ifx_UReg_32Bit CAL_CLK1_PRESENT:1;     /**< \brief [30:30] Status bit indicating that a posedge was
                                                                    detected by counter #1.
                                                                    If this bit never asserts, there is no clock on
                                                                    counter #1 and CAL_COUNTER_DONE will stay low indefinitely.
                                                                    This can be recovered with CAL_RESET. (r) */
    __I  Ifx_UReg_32Bit CAL_COUNTER_DONE:1;     /**< \brief [31:31] Status bit indicating that the internal
                                                                    counter #1 is finished counting and
                                                                    CLK_CAL_CNT2.COUNTER stopped counting up (r) */
} Ifx_CLK_CAL_CNT1_Bits;

/** \brief Clock Calibration Counter 2 */
typedef struct _Ifx_CLK_CAL_CNT2_Bits
{
    __I  Ifx_UReg_32Bit CAL_COUNTER2:24;        /**< \brief [23:0]  Up-counter clocked on fast clock output  #1
                                                                    (see CLK_OUTPUT_FAST).
                                                                    When CLK_CAL_CNT1.CAL_COUNTER_DONE==1, the counter
                                                                    is stopped and can be read by SW.
                                                                    Do not read this value unless CAL_COUNTER_DONE==1.
                                                                    The expected final value is related to the ratio of
                                                                    clock frequencies used for the two counters and the
                                                                    value loaded into counter 1:
                                                                    CLK_CAL_CNT2.COUNTER=(F_cnt2/F_cnt1)*(CLK_CAL_CNT1.COUNTER) (r) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_CLK_CAL_CNT2_Bits;

/** \brief SRSS Interrupt Register */
typedef struct _Ifx_SRSS_INTR_Bits
{
    __IO Ifx_UReg_32Bit WDT_MATCH:1;            /**< \brief [0:0]   WDT Interrupt Request.
                                                                    This bit is set each time WDT_COUNTR==WDT_MATCH.
                                                                    W1C also feeds the watch dog.
                                                                    Missing 2 interrupts in a row will generate a reset.
                                                                    Due to internal synchronization, it takes 2 SYSCLK
                                                                    cycles to update after a W1C.
                                                                    Interrupt state for WDT_MATCH remains valid
                                                                    throughout hibernate. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [4:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit CLK_CAL:1;              /**< \brief [5:5]   Clock calibration counter is done.
                                                                    This field is reset during DEEPSLEEP mode. (rw) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [30:6]  \internal Reserved */
    __I  Ifx_UReg_32Bit AINTR:1;                /**< \brief [31:31] See additional interrupts in SRSS_AINTR. (r) */
} Ifx_SRSS_INTR_Bits;

/** \brief SRSS Interrupt Set Register */
typedef struct _Ifx_SRSS_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit WDT_MATCH:1;            /**< \brief [0:0]   Set interrupt for low voltage detector
                                                                    WDT_MATCH
                                                                    Interrupt state for WDT_MATCH remains valid
                                                                    throughout hibernate. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [4:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit CLK_CAL:1;              /**< \brief [5:5]   Set interrupt for clock calibration counter done.
                                                                    This field is reset during DEEPSLEEP mode. (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_SRSS_INTR_SET_Bits;

/** \brief SRSS Interrupt Mask Register */
typedef struct _Ifx_SRSS_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit WDT_MATCH:1;            /**< \brief [0:0]   Mask for watchdog timer.
                                                                    Clearing this bit will not forward the interrupt to
                                                                    the CPU.
                                                                    It will not, however, disable the WDT reset
                                                                    generation on 2 missed interrupts.
                                                                    When WDT resets the chip, it also internally pends
                                                                    an interrupt that survives the reset.
                                                                    To prevent unintended ISR execution, clear
                                                                    SRSS_INTR.WDT_MATCH before setting this bit. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [4:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit CLK_CAL:1;              /**< \brief [5:5]   Mask for clock calibration done (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_SRSS_INTR_MASK_Bits;

/** \brief SRSS Interrupt Masked Register */
typedef struct _Ifx_SRSS_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit WDT_MATCH:1;            /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [4:1]   \internal Reserved */
    __I  Ifx_UReg_32Bit CLK_CAL:1;              /**< \brief [5:5]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [30:6]  \internal Reserved */
    __I  Ifx_UReg_32Bit AINTR:1;                /**< \brief [31:31] See additional MASKED bits in
                                                                    SRSS_AINTR_MASKED.ADDITIONAL (r) */
} Ifx_SRSS_INTR_MASKED_Bits;

/** \brief SRSS Additional Interrupt Register */
typedef struct _Ifx_SRSS_AINTR_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit HVLVD1:1;               /**< \brief [1:1]   Interrupt for low voltage detector HVLVD1 (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_SRSS_AINTR_Bits;

/** \brief SRSS Additional Interrupt Set Register */
typedef struct _Ifx_SRSS_AINTR_SET_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit HVLVD1:1;               /**< \brief [1:1]   Set interrupt for low voltage detector
                                                                    HVLVD1 (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_SRSS_AINTR_SET_Bits;

/** \brief SRSS Additional Interrupt Mask Register */
typedef struct _Ifx_SRSS_AINTR_MASK_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit HVLVD1:1;               /**< \brief [1:1]   Mask for low voltage detector HVLVD1 (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_SRSS_AINTR_MASK_Bits;

/** \brief SRSS Additional Interrupt Masked Register */
typedef struct _Ifx_SRSS_AINTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit HVLVD1:1;               /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_SRSS_AINTR_MASKED_Bits;

/** \brief Debug Control Register */
typedef struct _Ifx_BOOT_DLM_CTL_Bits
{
    __IO Ifx_UReg_32Bit REQUEST:4;              /**< \brief [3:0]   A request to ROM_BOOT FW to execute
                                                                    particular code.
                                                                    This field survives some resets, including a system reset:
                                                                    * 0 - No request (default).
                                                                    * 1 - ROM_BOOT to wait for DLM app (PC=0).
                                                                    * 2 - ROM_BOOT to wait for an OEM debug token.
                                                                    * 3 - ROM_BOOT to wait for a PROT_FW debug token.
                                                                    * 4, 5 - ignored by ROM_BOOT.
                                                                    * 6 - ROM_BOOT to launch DLM app which has been
                                                                    downloaded by DFU.
                                                                    * 7 - ROM_BOOT to respond to DFU with DLM app status.
                                                                    Other: ignored by ROM_BOOT. (rw) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [28:4]  \internal Reserved */
    __IO Ifx_UReg_32Bit INPUT_AVAIL:1;          /**< \brief [29:29] Notify RAM application that input
                                                                    parameters are valid for processing:
                                                                           0 - the input parameters are not available.
                                                                    1 - the input parameters are available
                                                                    (ready) for processing. (rw) */
    __IO Ifx_UReg_32Bit RESET:1;                /**< \brief [30:30] Request the device reset after RAM
                                                                    application complete input parameters processing.
                                                                    This bit is analyzed with APP_INPUT_AVAIL so to
                                                                    take effect write both.
                                                                    0 - No action, the device waits for input
                                                                    parameters.
                                                                    1 - Reset the device after input parameters
                                                                    processing complete. (rw) */
    __IO Ifx_UReg_32Bit WFA:1;                  /**< \brief [31:31] Wait for Action.
                                                                    Set by BootROM when it waits for application or
                                                                    debug certificate to be loaded into the RAM.
                                                                    The bit must be cleared to continue BootROM operation.
                                                                    It is used by the Sys-AP. (rw) */
} Ifx_BOOT_DLM_CTL_Bits;

/** \brief Debug Control Register 2 */
typedef struct _Ifx_BOOT_DLM_CTL2_Bits
{
    __IO Ifx_UReg_32Bit APP_CTL:32;             /**< \brief [31:0]  Address of application descriptor or debug
                                                                    certificate depends on DEBUG_TST_CTL.REQUEST.
                                                                    The application descriptor provides info about RAM
                                                                    application and its parameters layout in the
                                                                    staging area to BootROM and RAM application itself (rw) */
} Ifx_BOOT_DLM_CTL2_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_BOOT_DLM_STATUS_Bits
{
    __IO Ifx_UReg_32Bit DEBUG_STATUS:32;        /**< \brief [31:0]  RAM application execution status.
                                                                    This status can be read by the debugger using
                                                                    Sys-AP or user application when RAM application
                                                                    completes with system reset.
                                                                    This field survives some resets, including a system reset. (rw) */
} Ifx_BOOT_DLM_STATUS_Bits;

/** \brief Soft Reset Trigger Register */
typedef struct _Ifx_RES_SOFT_CTL_Bits
{
    __IO Ifx_UReg_32Bit TRIGGER_SOFT:1;         /**< \brief [0:0]   Triggers a soft reset.  The reset clears this bit. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_RES_SOFT_CTL_Bits;

/** \brief Boot Execution Status Register */
typedef struct _Ifx_BOOT_STATUS_Bits
{
    __IO Ifx_UReg_32Bit DEBUG_STATUS:32;        /**< \brief [31:0]  Boot execution status.
                                                                    This status register can be used for communication
                                                                    between ROM_BOOT and User Application.
                                                                    This status can be read by the debugger using
                                                                    Sys-AP or User Application.
                                                                    This field survives some resets, including a system reset. (rw) */
} Ifx_BOOT_STATUS_Bits;

/** \brief Warm Boot Entry Address */
typedef struct _Ifx_BOOT_ENTRY_Bits
{
    __IO Ifx_UReg_32Bit WARM_BOOT_ENTRY:32;     /**< \brief [31:0]  Warm boot entry point.
                                                                    This status register can be used for communication
                                                                    between 2 software application before/after DS-RAM,
                                                                    DS-OFF or soft reset.
                                                                    This field survives low voltage resets, including a
                                                                    system reset. (rw) */
} Ifx_BOOT_ENTRY_Bits;

/** \brief Hibernate Wakeup Mask Register */
typedef struct _Ifx_PWR_HIB_WAKE_CTL_Bits
{
    __IO Ifx_UReg_32Bit HIB_WAKE_SRC:24;        /**< \brief [23:0]  When set, HIBERNATE will wakeup for the
                                                                    assigned source. (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [29:24] \internal Reserved */
    __IO Ifx_UReg_32Bit HIB_WAKE_RTC:1;         /**< \brief [30:30] When set, HIBERNATE will wakeup for a
                                                                    pending RTC interrupt. (rw) */
    __IO Ifx_UReg_32Bit HIB_WAKE_WDT:1;         /**< \brief [31:31] When set, HIBERNATE will wakeup for a
                                                                    pending WDT interrupt. (rw) */
} Ifx_PWR_HIB_WAKE_CTL_Bits;

/** \brief Hibernate Wakeup Polarity Register */
typedef struct _Ifx_PWR_HIB_WAKE_CTL2_Bits
{
    __IO Ifx_UReg_32Bit HIB_WAKE_SRC:24;        /**< \brief [23:0]  Each bit selects the polarity for the
                                                                    corresponding HIBERNATE wakeup source.
                                                                    0: Wakes when unmasked input is 0.
                                                                    1: Wakes when unmasked input is 1. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PWR_HIB_WAKE_CTL2_Bits;

/** \brief Hibernate Wakeup Cause Register */
typedef struct _Ifx_PWR_HIB_WAKE_CAUSE_Bits
{
    __IO Ifx_UReg_32Bit HIB_WAKE_SRC:24;        /**< \brief [23:0]  Each bit indicates a HIBERNATE wakeup cause.
                                                                    For each bit, writing a 1 clears the cause flag. (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [29:24] \internal Reserved */
    __IO Ifx_UReg_32Bit HIB_WAKE_RTC:1;         /**< \brief [30:30] Indicates RTC wakeup cause.
                                                                    The RTC interrupt must be cleared before this bit
                                                                    can be cleared. (rw) */
    __IO Ifx_UReg_32Bit HIB_WAKE_WDT:1;         /**< \brief [31:31] Indicates WDT wakeup cause.
                                                                    The WDT interrupt must be cleared before this bit
                                                                    can be cleared. (rw) */
} Ifx_PWR_HIB_WAKE_CAUSE_Bits;

/** \brief Power Mode Control */
typedef struct _Ifx_PWR_CTL_Bits
{
    __I  Ifx_UReg_32Bit POWER_MODE:2;           /**< \brief [1:0]   Current power mode of the device.
                                                                    Note that this field cannot be read in all power
                                                                    modes on actual silicon. (r)
                                                RESET         : 0u   System is resetting.
                                                ACTIVE        : 1u   At least one CPU is running.
                                                SLEEP         : 2u   No CPUs are running.  Peripherals may be running.
                                                DEEPSLEEP     : 3u   Main high-frequency clock is off; low speed clocks
                                                                    are available.
                                                                    Communication interface clocks may be present. */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __I  Ifx_UReg_32Bit DEBUG_SESSION:1;        /**< \brief [4:4]   Indicates whether a debug session is active
                                                                    (CDBGPWRUPREQ signal is 1) (r)
                                                NO_SESSION    : 0u   No debug session active
                                                SESSION_ACTIVE: 1u   Debug session is active.
                                                                    Power modes behave differently to keep the debug
                                                                    session active, and current consumption may be
                                                                    higher than datasheet specification. */
    __I  Ifx_UReg_32Bit LPM_READY:1;            /**< \brief [5:5]   Indicates whether certain low power
                                                                    functions are ready.
                                                                    The low current circuits take longer to startup
                                                                    after XRES, HIBERNATE wakeup, or supply supervision
                                                                    reset wakeup than the normal mode circuits.
                                                                    HIBERNATE mode may be entered regardless of this bit.
                                                                    0: If a low power circuit operation is requested,
                                                                    it will stay in its normal operating mode until it
                                                                    is ready.
                                                                    If DEEPSLEEP is requested by all processors
                                                                    WFI/WFE, the device will instead enter SLEEP.
                                                                    When low power circuits are ready, device will
                                                                    automatically enter the originally requested mode.
                                                                    1: Normal operation.
                                                                    DEEPSLEEP and low power circuits operate as
                                                                    requested in other registers. (r) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_PWR_CTL_Bits;

/* PWR_CTL.POWER_MODE enumerated values */

/** \brief System is resetting. */
#define IFX_PWR_CTL_POWER_MODE_RESET (0u)

/** \brief At least one CPU is running. */
#define IFX_PWR_CTL_POWER_MODE_ACTIVE (1u)

/** \brief No CPUs are running.  Peripherals may be running. */
#define IFX_PWR_CTL_POWER_MODE_SLEEP (2u)

/** \brief Main high-frequency clock is off; low speed clocks are available.
Communication interface clocks may be present. */
#define IFX_PWR_CTL_POWER_MODE_DEEPSLEEP (3u)

/* PWR_CTL.DEBUG_SESSION enumerated values */

/** \brief No debug session active */
#define IFX_PWR_CTL_DEBUG_SESSION_NO_SESSION (0u)

/** \brief Debug session is active.
Power modes behave differently to keep the debug session active, and current
consumption may be higher than datasheet specification. */
#define IFX_PWR_CTL_DEBUG_SESSION_SESSION_ACTIVE (1u)

/** \brief Power Mode Control 2 */
typedef struct _Ifx_PWR_CTL2_Bits
{
    __IO Ifx_UReg_32Bit LINREG_DIS:1;           /**< \brief [0:0]   Explicitly disable the linear Core Regulator.
                                                                    Write zero for Traveo II devices.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    0: Linear Core Regulator is not explicitly disabled.
                                                                    Hardware disables it automatically for internal
                                                                    sequences, including for DEEPSLEEP, HIBERNATE, and
                                                                    XRES low power modes.
                                                                    1: Linear Core Regulator is explicitly disabled.
                                                                    Only use this for special cases when another source
                                                                    supplies vccd during ACTIVE and SLEEP modes.
                                                                    This setting is only legal when another source
                                                                    supplies vccd, but there is no special hardware
                                                                    protection for this case. (rw) */
    __I  Ifx_UReg_32Bit LINREG_OK:1;            /**< \brief [1:1]   Status of the linear Core Regulator. (r) */
    __IO Ifx_UReg_32Bit LINREG_LPMODE:1;        /**< \brief [2:2]   Control the power mode of the Linear Regulator.
                                                                    The value in this register is ignored and normal
                                                                    mode is used until LPM_READY==1.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    0: Linear Regulator operates in normal mode.
                                                                    1: Linear Regulator operates in low power mode.
                                                                    Load current capability is reduced, and firmware
                                                                    must ensure the current is kept within the limit. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit DPSLP_REG_DIS:1;        /**< \brief [4:4]   Explicity disable the DeepSleep regulator,
                                                                    including circuits shared with the Active Regulator.
                                                                    This register must not be set except as part of an
                                                                    Infineon-provided sequence or API.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    0: DeepSleep Regulator is not explicitly disabled.
                                                                    This is the normal setting, and hardware
                                                                    automatically controls the DeepSleep regulator for
                                                                    most sequences, including for HIBERNATE and XRES
                                                                    low power modes.
                                                                    This setting must be used if the Active Linear
                                                                    Regulator is used, because some circuitry is shared.
                                                                    1: DeepSleep Regulator is explicitly disabled.
                                                                    Only use this for special cases as part of an
                                                                    Infineon-provided handoff to another supply source.
                                                                    For example, this setting may be used when another
                                                                    source supplies vccdpslp during DEEPSLEEP mode and
                                                                    the Active Linear Regulator is not usedfor
                                                                    ACTIVE/SLEEP modes. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit RET_REG_DIS:1;          /**< \brief [8:8]   Explicitly disable the Retention regulator.
                                                                    This field should normally be zero, except for
                                                                    special sequences provided by Infineon to use a
                                                                    different regulator.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    0: Retention Regulator is not explicitly disabled.
                                                                    Hardware disables it automatically for internal
                                                                    sequences, including for HIBERNATE and XRES low
                                                                    power modes.
                                                                    Hardware keeps the Retention Regulator enabled
                                                                    during ACTIVE/SLEEP modes, so it is ready to enter
                                                                    DEEPSLEEP at any time.
                                                                    1: Retention Regulator is explicitly disabled.
                                                                    Only use this for special cases when another source
                                                                    supplies vccret during DEEPSLEEP mode.
                                                                    This setting is only legal when another source
                                                                    supplies vccret, but there is no special hardware
                                                                    protection for this case. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [11:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit NWELL_REG_DIS:1;        /**< \brief [12:12] Explicitly disable the Nwell regulator.
                                                                    This register should normally be zero, except for
                                                                    special sequences provided by Infineon to use a
                                                                    different regulator.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    0: Nwell Regulator is on.
                                                                    Hardware disables it automatically for internal
                                                                    sequences, including for HIBERNATE and XRES low
                                                                    power modes.
                                                                    Hardware keeps the Nwell Regulator enabled during
                                                                    ACTIVE/SLEEP modes, so it is ready to enter
                                                                    DEEPSLEEP at any time.
                                                                    1: Nwell Regulator is explicitly disabled.
                                                                    Only use this for special cases when another source
                                                                    supplies vnwell during DEEPSLEEP mode.
                                                                    This setting is only legal when another source
                                                                    supplies vnwell, but there is no special hardware
                                                                    protection for this case. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit REFV_DIS:1;             /**< \brief [16:16] Disables the voltage reference.
                                                                    PSoC products: This disables the Active voltage reference.
                                                                    Firmware must ensure that LPM_READY==1 and
                                                                    BGREF_LPMODE==1 for at least 1us before disabling
                                                                    the Active Reference.
                                                                    When enabling the Active Reference, use REFV_OK
                                                                    indicator to know when it is ready.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    Traveo II products: Reserved.  Write zero. (rw) */
    __I  Ifx_UReg_32Bit REFV_OK:1;              /**< \brief [17:17] Indicates that the normal mode of the
                                                                    voltage reference is ready. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [19:18] \internal Reserved */
    __IO Ifx_UReg_32Bit REFVBUF_DIS:1;          /**< \brief [20:20] Disable the voltage reference buffer.
                                                                    Firmware should only disable the buffer when there
                                                                    is no connected circuit that is using it.
                                                                    SRSS circuits that require it are the PLL and ECO.
                                                                    A particular product may have circuits outside the
                                                                    SRSS that use the buffer.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset. (rw) */
    __I  Ifx_UReg_32Bit REFVBUF_OK:1;           /**< \brief [21:21] Indicates that the voltage reference buffer
                                                                    is ready.
                                                                    Due to synchronization delays, it may take two IMO
                                                                    clock cycles for hardware to clear this bit after
                                                                    asserting REFVBUF_DIS=1. (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [25:22] \internal Reserved */
    __IO Ifx_UReg_32Bit REFI_LPMODE:1;          /**< \brief [26:26] Control the power mode of the reference
                                                                    current generator.
                                                                    The value in this register is ignored and normal
                                                                    mode is used until LPM_READY==1.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    0: Current reference generator operates in normal mode.
                                                                    1: Current reference generator operates in low power mode.
                                                                    Response time is reduced to save current. (rw) */
    __IO Ifx_UReg_32Bit PORBOD_LPMODE:1;        /**< \brief [27:27] Control the power mode of the POR/BOD circuits.
                                                                    The value in this register is ignored and normal
                                                                    mode is used until LPM_READY==1.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    0: POR/BOD circuits operate in normal mode.
                                                                    1: POR/BOD circuits operate in low power mode.
                                                                    Response time is reduced to save current. (rw) */
    __IO Ifx_UReg_32Bit BGREF_LPMODE:1;         /**< \brief [28:28] Control the circuit-level power mode of the
                                                                    Bandgap Reference circuits for higher operating
                                                                    modes than DEEPSLEEP.
                                                                    This selects a second set of bandgap voltage and
                                                                    current generation circuits that are optimized for
                                                                    low current consumption.
                                                                    The low current circuits are automatically used in
                                                                    DEEPSLEEP mode regardless of this bit.
                                                                    The value in this register is ignored and
                                                                    higher-current mode is used until LPM_READY==1.
                                                                    After this bit is set, the Active Reference circuit
                                                                    can be disabled to reduce current (ACT_REF_DIS=0).
                                                                    Firmware is responsible to enable the Active
                                                                    Reference and ensure ACT_REF_OK==1 before changing
                                                                    back to higher current mode.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    0: Bandgap Reference uses the normal settings.
                                                                    1: Bandgap Reference uses the low power DeepSleep circuits.
                                                                    Power supply rejection is reduced to save current. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [29:29] \internal Reserved */
    __IO Ifx_UReg_32Bit FREEZE_DPSLP:1;         /**< \brief [30:30] Controls whether mode and state of GPIOs
                                                                    and SIOs in the system are frozen.
                                                                    This is intended to be used as part of the
                                                                    DEEPSLEEP-RAM and DEEPSLEEP-OFF entry and exit sequences.
                                                                    It is set by HW while entering DEEPSLEEP-RAM and
                                                                    DEEPSLEEP-OFF modes.
                                                                    Writing a 1 clears freeze and GPIOs and SIOs resume
                                                                    normal operation. (rw) */
    __IO Ifx_UReg_32Bit PLL_LS_BYPASS:1;        /**< \brief [31:31] Bypass level shifter inside the PLL.
                                                                    Unused, if no PLL is present in the product.
                                                                    Note that this only applies to PLL200M.
                                                                    0: Do not bypass the level shifter.
                                                                    This setting is ok for all operational modes and
                                                                    vccd target voltage.
                                                                    1: Bypass the level shifter.
                                                                    This may reduce jitter on the PLL output clock, but
                                                                    can only be used when vccd is targeted to 1.1V nominal.
                                                                    Otherwise, it can result in clock degradation and
                                                                    static current. (rw) */
} Ifx_PWR_CTL2_Bits;

/** \brief HIBERNATE Mode Register */
typedef struct _Ifx_PWR_HIBERNATE_Bits
{
    __IO Ifx_UReg_32Bit TOKEN:8;                /**< \brief [7:0]   Contains a 8-bit token that is retained
                                                                    through a HIBERNATE/WAKEUP sequence that can be
                                                                    used by firmware to differentiate WAKEUP from a
                                                                    general RESET event.
                                                                    Note that waking up from HIBERNATE using XRES will
                                                                    reset this register. (rw) */
    __IO Ifx_UReg_32Bit UNLOCK:8;               /**< \brief [15:8]  This byte must be set to 0x3A for FREEZE or
                                                                    HIBERNATE fields to operate.
                                                                    Any other value in this register will cause
                                                                    FREEZE/HIBERNATE to have no effect, except as noted
                                                                    in the FREEZE description. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [16:16] \internal Reserved */
    __IO Ifx_UReg_32Bit FREEZE:1;               /**< \brief [17:17] Controls whether mode and state of GPIOs
                                                                    and SIOs in the system are frozen.
                                                                    This is intended to be used as part of the
                                                                    HIBERNATE entry and exit sequences.
                                                                    When entering HIBERNATE mode, the first write
                                                                    instructs DEEPSLEEP peripherals that they cannot
                                                                    ignore the upcoming freeze command.
                                                                    This occurs even in the illegal condition where
                                                                    UNLOCK is not set.
                                                                    If UNLOCK and HIBERNATE are properly set, the IOs
                                                                    actually freeze on the second write.
                                                                    Supply supervision is disabled during HIBERNATE mode.
                                                                    HIBERNATE peripherals ignore resets (excluding
                                                                    XRES) while FREEZE==1. (rw) */
    __IO Ifx_UReg_32Bit MASK_HIBALARM:1;        /**< \brief [18:18] Reserved.
                                                                    Use PWR_HIB_WAKE_CTL.HIB_WAKE_RTC for new designs. (rw) */
    __IO Ifx_UReg_32Bit MASK_HIBWDT:1;          /**< \brief [19:19] Reserved.
                                                                    Use PWR_HIB_WAKE_CTL.HIB_WAKE_WDT for new designs. (rw) */
    __IO Ifx_UReg_32Bit POLARITY_HIBPIN:4;      /**< \brief [23:20] Reserved.
                                                                    Use PWR_HIB_WAKE_CTL2.HIB_WAKE_SRC for new designs. (rw) */
    __IO Ifx_UReg_32Bit MASK_HIBPIN:4;          /**< \brief [27:24] Reserved.
                                                                    Use PWR_HIB_WAKE_CTL.HIB_WAKE_SRC for new designs. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [28:28] \internal Reserved */
    __IO Ifx_UReg_32Bit SENSE_MODE:1;           /**< \brief [29:29] Power mode when wakeups are sensitive.
                                                                    The default of this field is 0 for software
                                                                    compatibility with other products.
                                                                    It is recommended to set this field to 1 for
                                                                    new/updated software.
                                                                    0: Wakeups are sensitive only during HIBERNATE mode.
                                                                    A wakeup pulse that comes just before HIBERNATE
                                                                    entry may be missed.  Backward compatible.
                                                                    1: Wakeups are sensitive in HIBERNATE and higher modes.
                                                                    Before entering HIBERNATE, software must clear all
                                                                    unmasked, pending wakeups in PWR_HIB_WAKE_CAUSE register.
                                                                    An unmasked, pending wakeup causes HIBERNATE
                                                                    wakeup, even if it was pending from before HIBERNATE entry.
                                                                    This prevents missed wakeups. (rw) */
    __IO Ifx_UReg_32Bit HIBERNATE_DISABLE:1;    /**< \brief [30:30] Hibernate disable bit.
                                                                    0: Normal operation, HIBERNATE works as described
                                                                    1: Further writes to this register are ignored
                                                                    Note: This bit is a write-once bit until the next reset.
                                                                    Avoid changing any other bits in this register
                                                                    while disabling HIBERNATE mode.
                                                                    Also, it is recommended to clear the UNLOCK code,
                                                                    if it was previously written.. (rw) */
    __IO Ifx_UReg_32Bit HIBERNATE:1;            /**< \brief [31:31] Firmware sets this bit to enter HIBERNATE mode.
                                                                    The system will enter HIBERNATE mode immediately
                                                                    after writing to this bit and will wakeup only in
                                                                    response to XRES or WAKEUP.
                                                                    Both UNLOCK and FREEZE must have been set correctly
                                                                    in a previous write operations.
                                                                    Otherwise, it will not enter HIBERNATE.
                                                                    External supplies must have been stable for 250us
                                                                    before entering HIBERNATE mode. (rw) */
} Ifx_PWR_HIBERNATE_Bits;

/** \brief High Voltage / Low Voltage Detector (HVLVD) Configuration Register */
typedef struct _Ifx_PWR_LVD_CTL_Bits
{
    __IO Ifx_UReg_32Bit HVLVD1_TRIPSEL:4;       /**< \brief [3:0]   Threshold selection for HVLVD1.
                                                                    Disable the detector (HVLVD1_EN=0) before changing
                                                                    the threshold.
                                                                    0: rise=1.225V (nom), fall=1.2V (nom)
                                                                    1: rise=1.425V (nom), fall=1.4V (nom)
                                                                    2: rise=1.625V (nom), fall=1.6V (nom)
                                                                    3: rise=1.825V (nom), fall=1.8V (nom)
                                                                    4: rise=2.025V (nom), fall=2V (nom)
                                                                    5: rise=2.125V (nom), fall=2.1V (nom)
                                                                    6: rise=2.225V (nom), fall=2.2V (nom)
                                                                    7: rise=2.325V (nom), fall=2.3V (nom)
                                                                    8: rise=2.425V (nom), fall=2.4V (nom)
                                                                    9: rise=2.525V (nom), fall=2.5V (nom)
                                                                    10: rise=2.625V (nom), fall=2.6V (nom)
                                                                    11: rise=2.725V (nom), fall=2.7V (nom)
                                                                    12: rise=2.825V (nom), fall=2.8V (nom)
                                                                    13: rise=2.925V (nom), fall=2.9V (nom)
                                                                    14: rise=3.025V (nom), fall=3.0V (nom)
                                                                    15: rise=3.125V (nom), fall=3.1V (nom) (rw) */
    __IO Ifx_UReg_32Bit HVLVD1_SRCSEL:3;        /**< \brief [6:4]   Source selection for HVLVD1 (rw)
                                                VDDD          : 0u   Select VDDD
                                                AMUXBUSA      : 1u   Select AMUXBUSA (VDDD branch)
                                                RESERVED      : 2u   Reserved.  Connected AMUXBUSA (VDDD branch)
                                                VDDIO         : 3u   Reserved.  Selects VDDD.
                                                AMUXBUSB      : 4u   Select AMUXBUSB (VDDD branch) */
    __IO Ifx_UReg_32Bit HVLVD1_EN:1;            /**< \brief [7:7]   Enable HVLVD1 voltage monitor.
                                                                    HVLVD1 does not function during DEEPSLEEP, but it
                                                                    automatically returns to its configured setting
                                                                    after DEEPSLEEP wakeup.
                                                                    Do not change other HVLVD1 settings when enabled. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HVLVD1_EDGE_SEL:2;      /**< \brief [17:16] Sets which edge(s) will trigger an action
                                                                    when the threshold is crossed. (rw)
                                                DISABLE       : 0u   Disabled
                                                RISING        : 1u   Rising edge
                                                FALLING       : 2u   Falling edge
                                                BOTH          : 3u   Both rising and falling edges */
    __IO Ifx_UReg_32Bit HVLVD1_ACTION:1;        /**< \brief [18:18] Action taken when the threshold is crossed
                                                                    in the programmed directions(s) (rw)
                                                INTERRUPT     : 0u   Generate an interrupt
                                                FAULT         : 1u   Generate a fault */
    __I  Ifx_UReg_32Bit :13;                    /**< \brief [31:19] \internal Reserved */
} Ifx_PWR_LVD_CTL_Bits;

/* PWR_LVD_CTL.HVLVD1_SRCSEL enumerated values */

/** \brief Select VDDD */
#define IFX_PWR_LVD_CTL_HVLVD1_SRCSEL_VDDD (0u)

/** \brief Select AMUXBUSA (VDDD branch) */
#define IFX_PWR_LVD_CTL_HVLVD1_SRCSEL_AMUXBUSA (1u)

/** \brief Reserved.  Connected AMUXBUSA (VDDD branch) */
#define IFX_PWR_LVD_CTL_HVLVD1_SRCSEL_RESERVED (2u)

/** \brief Reserved.  Selects VDDD. */
#define IFX_PWR_LVD_CTL_HVLVD1_SRCSEL_VDDIO (3u)

/** \brief Select AMUXBUSB (VDDD branch) */
#define IFX_PWR_LVD_CTL_HVLVD1_SRCSEL_AMUXBUSB (4u)

/* PWR_LVD_CTL.HVLVD1_EDGE_SEL enumerated values */

/** \brief Disabled */
#define IFX_PWR_LVD_CTL_HVLVD1_EDGE_SEL_DISABLE (0u)

/** \brief Rising edge */
#define IFX_PWR_LVD_CTL_HVLVD1_EDGE_SEL_RISING (1u)

/** \brief Falling edge */
#define IFX_PWR_LVD_CTL_HVLVD1_EDGE_SEL_FALLING (2u)

/** \brief Both rising and falling edges */
#define IFX_PWR_LVD_CTL_HVLVD1_EDGE_SEL_BOTH (3u)

/* PWR_LVD_CTL.HVLVD1_ACTION enumerated values */

/** \brief Generate an interrupt */
#define IFX_PWR_LVD_CTL_HVLVD1_ACTION_INTERRUPT (0u)

/** \brief Generate a fault */
#define IFX_PWR_LVD_CTL_HVLVD1_ACTION_FAULT (1u)

/** \brief Clock Path Select Register */
typedef struct _Ifx_CLK_PATH_SELECT_Bits
{
    __IO Ifx_UReg_32Bit PATH_MUX:3;             /**< \brief [2:0]   Selects a source for clock PATH<i>.
                                                                    Note that not all products support all clock sources.
                                                                    Selecting a clock source that is not supported will
                                                                    result in undefined behavior.
                                                                    It takes four cycles of the originally selected
                                                                    clock to switch away from it.
                                                                    Do not disable the original clock during this time. (rw)
                                                IMO           : 0u   IMO - Internal R/C Oscillator
                                                EXTCLK        : 1u   EXTCLK - External Clock Pin
                                                ECO           : 2u   ECO - External-Crystal Oscillator
                                                ALTHF         : 3u   ALTHF - Alternate High-Frequency clock input
                                                                    (product-specific clock)
                                                DSI_MUX       : 4u   DSI_MUX - Output of DSI mux for this path.
                                                                    Using a DSI source directly as root of HFCLK will
                                                                    result in undefined behavior.
                                                LPECO         : 5u   LPECO - Low-Power External-Crystal Oscillator
                                                IHO           : 6u   IHO - Internal High-speed Oscillator */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_CLK_PATH_SELECT_Bits;

/* CLK_PATH_SELECT.PATH_MUX enumerated values */

/** \brief IMO - Internal R/C Oscillator */
#define IFX_CLK_PATH_SELECT_PATH_MUX_IMO (0u)

/** \brief EXTCLK - External Clock Pin */
#define IFX_CLK_PATH_SELECT_PATH_MUX_EXTCLK (1u)

/** \brief ECO - External-Crystal Oscillator */
#define IFX_CLK_PATH_SELECT_PATH_MUX_ECO (2u)

/** \brief ALTHF - Alternate High-Frequency clock input (product-specific clock) */
#define IFX_CLK_PATH_SELECT_PATH_MUX_ALTHF (3u)

/** \brief DSI_MUX - Output of DSI mux for this path.
Using a DSI source directly as root of HFCLK will result in undefined behavior. */
#define IFX_CLK_PATH_SELECT_PATH_MUX_DSI_MUX (4u)

/** \brief LPECO - Low-Power External-Crystal Oscillator */
#define IFX_CLK_PATH_SELECT_PATH_MUX_LPECO (5u)

/** \brief IHO - Internal High-speed Oscillator */
#define IFX_CLK_PATH_SELECT_PATH_MUX_IHO (6u)

/** \brief Clock Root Select Register */
typedef struct _Ifx_CLK_ROOT_SELECT_Bits
{
    __IO Ifx_UReg_32Bit ROOT_MUX:4;             /**< \brief [3:0]   Selects a clock path for HFCLK<k> and SRSS
                                                                    DSI input <k>.
                                                                    The output of this mux goes to the direct mux (see
                                                                    CLK_DIRECT_SELECT).
                                                                    Use CLK_SELECT_PATH[i] to configure the desired path.
                                                                    The number of clock paths is product-specific, and
                                                                    selecting an unimplemented path is not supported.
                                                                    Some paths may have FLL or PLL available
                                                                    (product-specific), and the control and bypass mux
                                                                    selections of these are in other registers.
                                                                    Configure the FLL using CLK_FLL_CONFIG register.
                                                                    Configure a PLL using the related CLK_PLL_CONFIG[k]
                                                                    register.
                                                                    Note that not all products support all clock sources.
                                                                    Selecting a clock source that is not supported will
                                                                    result in undefined behavior.
                                                                    It takes four cycles of the originally selected
                                                                    clock to switch away from it.
                                                                    Do not disable the original clock during this time. (rw)
                                                PATH0         : 0u   Select PATH0
                                                PATH1         : 1u   Select PATH1
                                                PATH2         : 2u   Select PATH2
                                                PATH3         : 3u   Select PATH3
                                                PATH4         : 4u   Select PATH4
                                                PATH5         : 5u   Select PATH5
                                                PATH6         : 6u   Select PATH6
                                                PATH7         : 7u   Select PATH7
                                                PATH8         : 8u   Select PATH8
                                                PATH9         : 9u   Select PATH9
                                                PATH10        : 10u   Select PATH10
                                                PATH11        : 11u   Select PATH11
                                                PATH12        : 12u   Select PATH12
                                                PATH13        : 13u   Select PATH13
                                                PATH14        : 14u   Select PATH14
                                                PATH15        : 15u   Select PATH15 */
    __IO Ifx_UReg_32Bit ROOT_DIV:2;             /**< \brief [5:4]   Obsolete.  Do not use in new designs. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit ROOT_DIV_INT:4;         /**< \brief [11:8]  Selects predivider value for this clock
                                                                    root and DSI input.  This divider is after DIRECT_MUX.
                                                                    For products with DSI, the output of this mux is
                                                                    routed to DSI for use as a signal.
                                                                    For products with clock supervision, the output of
                                                                    this mux is the monitored clock for CSV_HF<k>. (rw)
                                                NO_DIV        : 0u   Transparent mode, feed through selected clock
                                                                    source w/o dividing.
                                                DIV_BY_2      : 1u   Divide selected clock source by 2
                                                DIV_BY_3      : 2u   Divide selected clock source by 3
                                                DIV_BY_4      : 3u   Divide selected clock source by 4
                                                DIV_BY_5      : 4u   Divide selected clock source by 5
                                                DIV_BY_6      : 5u   Divide selected clock source by 6
                                                DIV_BY_7      : 6u   Divide selected clock source by 7
                                                DIV_BY_8      : 7u   Divide selected clock source by 8
                                                DIV_BY_9      : 8u   Divide selected clock source by 9
                                                DIV_BY_10     : 9u   Divide selected clock source by 10
                                                DIV_BY_11     : 10u   Divide selected clock source by 11
                                                DIV_BY_12     : 11u   Divide selected clock source by 12
                                                DIV_BY_13     : 12u   Divide selected clock source by 13
                                                DIV_BY_14     : 13u   Divide selected clock source by 14
                                                DIV_BY_15     : 14u   Divide selected clock source by 15
                                                DIV_BY_16     : 15u   Divide selected clock source by 16 */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [30:12] \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] Enable for this clock root.
                                                                    All clock roots default to disabled (ENABLE==0)
                                                                    except HFCLK0, which cannot be disabled. (rw) */
} Ifx_CLK_ROOT_SELECT_Bits;

/* CLK_ROOT_SELECT.ROOT_MUX enumerated values */

/** \brief Select PATH0 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH0 (0u)

/** \brief Select PATH1 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH1 (1u)

/** \brief Select PATH2 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH2 (2u)

/** \brief Select PATH3 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH3 (3u)

/** \brief Select PATH4 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH4 (4u)

/** \brief Select PATH5 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH5 (5u)

/** \brief Select PATH6 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH6 (6u)

/** \brief Select PATH7 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH7 (7u)

/** \brief Select PATH8 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH8 (8u)

/** \brief Select PATH9 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH9 (9u)

/** \brief Select PATH10 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH10 (10u)

/** \brief Select PATH11 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH11 (11u)

/** \brief Select PATH12 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH12 (12u)

/** \brief Select PATH13 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH13 (13u)

/** \brief Select PATH14 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH14 (14u)

/** \brief Select PATH15 */
#define IFX_CLK_ROOT_SELECT_ROOT_MUX_PATH15 (15u)

/* CLK_ROOT_SELECT.ROOT_DIV_INT enumerated values */

/** \brief Transparent mode, feed through selected clock source w/o dividing. */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_NO_DIV (0u)

/** \brief Divide selected clock source by 2 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_2 (1u)

/** \brief Divide selected clock source by 3 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_3 (2u)

/** \brief Divide selected clock source by 4 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_4 (3u)

/** \brief Divide selected clock source by 5 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_5 (4u)

/** \brief Divide selected clock source by 6 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_6 (5u)

/** \brief Divide selected clock source by 7 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_7 (6u)

/** \brief Divide selected clock source by 8 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_8 (7u)

/** \brief Divide selected clock source by 9 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_9 (8u)

/** \brief Divide selected clock source by 10 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_10 (9u)

/** \brief Divide selected clock source by 11 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_11 (10u)

/** \brief Divide selected clock source by 12 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_12 (11u)

/** \brief Divide selected clock source by 13 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_13 (12u)

/** \brief Divide selected clock source by 14 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_14 (13u)

/** \brief Divide selected clock source by 15 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_15 (14u)

/** \brief Divide selected clock source by 16 */
#define IFX_CLK_ROOT_SELECT_ROOT_DIV_INT_DIV_BY_16 (15u)

/** \brief Clock Root Direct Select Register */
typedef struct _Ifx_CLK_DIRECT_SELECT_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit DIRECT_MUX:1;           /**< \brief [8:8]   Direct selection mux that allows IMO to
                                                                    bypass most of the clock mux structure.
                                                                    For products with multiple regulators, this mux can
                                                                    be used to reduce current without requiring
                                                                    significant reconfiguration of the clocking network.
                                                                    The default value of HFCLK<0>==ROOT_MUX, and the
                                                                    default value for other clock trees is product-specific. (rw)
                                                IMO           : 0u   Select IMO
                                                ROOT_MUX      : 1u   Select ROOT_MUX selection */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_CLK_DIRECT_SELECT_Bits;

/* CLK_DIRECT_SELECT.DIRECT_MUX enumerated values */

/** \brief Select IMO */
#define IFX_CLK_DIRECT_SELECT_DIRECT_MUX_IMO (0u)

/** \brief Select ROOT_MUX selection */
#define IFX_CLK_DIRECT_SELECT_DIRECT_MUX_ROOT_MUX (1u)

/** \brief Clock selection register */
typedef struct _Ifx_CLK_SELECT_Bits
{
    __IO Ifx_UReg_32Bit LFCLK_SEL:3;            /**< \brief [2:0]   Select source for LFCLK.
                                                                    Note that not all products support all clock sources.
                                                                    Selecting a clock source that is not supported will
                                                                    result in undefined behavior.
                                                                    Writes to this field are ignored unless the WDT is
                                                                    unlocked using WDT_LOCK register.
                                                                    It takes four cycles of the originally selected
                                                                    clock to switch away from it.
                                                                    Do not disable the original clock during this time. (rw)
                                                ILO           : 0u   ILO - Internal Low-speed Oscillator
                                                WCO           : 1u   WCO - Watch-Crystal Oscillator.
                                                                    Requires Backup domain to be present and properly
                                                                    configured (including external watch crystal, if used).
                                                ALTLF         : 2u   ALTLF - Alternate Low-Frequency Clock.
                                                                    Capability is product-specific
                                                PILO          : 3u   PILO - Precision ILO, if present.
                                                ILO1          : 4u   ILO1 - Internal Low-speed Oscillator #1, if present.
                                                ECO_PRESCALER : 5u   ECO_PRESCALER - External-Crystal Oscillator after
                                                                    prescaling, if present.
                                                                    Does not work in DEEPSLEEP or HIBERNATE modes.
                                                                    Intended for applications that operate in
                                                                    ACTIVE/SLEEP modes only.
                                                                    This option is only valid when ECO is present in
                                                                    the product.
                                                                    Not compatible with an clk_sys frequency <48MHz.
                                                LPECO_PRESCALER: 6u   LPECO_PRESCALER - Low-Power External-Crystal
                                                                    Oscillator after prescaling, if present.
                                                                    This choice works in ACTIVE/SLEEP/DEEPSLEEP modes.
                                                                    This option is only valid when LPECO is present in
                                                                    the product. */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [7:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit PUMP_SEL:4;             /**< \brief [11:8]  Selects clock PATH<k>, where k=PUMP_SEL.
                                                                    The output of this mux goes to the PUMP_DIV to make
                                                                    PUMPCLK  Each product has a specific number of
                                                                    available clock paths.
                                                                    Selecting a path that is not implemented on a
                                                                    product will result in undefined behavior.
                                                                    Note that this is not a glitch free mux. (rw) */
    __IO Ifx_UReg_32Bit PUMP_DIV:3;             /**< \brief [14:12] Division ratio for PUMPCLK.
                                                                    Uses selected PUMP_SEL clock as the source. (rw)
                                                NO_DIV        : 0u   Transparent mode, feed through selected clock
                                                                    source w/o dividing.
                                                DIV_BY_2      : 1u   Divide selected clock source by 2
                                                DIV_BY_4      : 2u   Divide selected clock source by 4
                                                DIV_BY_8      : 3u   Divide selected clock source by 8
                                                DIV_BY_16     : 4u   Divide selected clock source by 16 */
    __IO Ifx_UReg_32Bit PUMP_ENABLE:1;          /**< \brief [15:15] Enable the pump clock.
                                                                    PUMP_ENABLE and the PUMP_SEL mux are not
                                                                    glitch-free to minimize side-effects, avoid
                                                                    changing the PUMP_SEL and PUMP_DIV while changing
                                                                    PUMP_ENABLE.
                                                                    To change the settings, do the following:
                                                                    1) If the pump clock is enabled, write
                                                                    PUMP_ENABLE=0 without changing PUMP_SEL and
                                                                    PUMP_DIV.
                                                                    2) Change PUMP_SEL and PUMP_DIV to desired settings
                                                                    with PUMP_ENABLE=0.
                                                                    3) Write PUMP_ENABLE=1 without changing PUMP_SEL
                                                                    and PUMP_DIV. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CLK_SELECT_Bits;

/* CLK_SELECT.LFCLK_SEL enumerated values */

/** \brief ILO - Internal Low-speed Oscillator */
#define IFX_CLK_SELECT_LFCLK_SEL_ILO (0u)

/** \brief WCO - Watch-Crystal Oscillator.
Requires Backup domain to be present and properly configured (including
external watch crystal, if used). */
#define IFX_CLK_SELECT_LFCLK_SEL_WCO (1u)

/** \brief ALTLF - Alternate Low-Frequency Clock.  Capability is product-specific */
#define IFX_CLK_SELECT_LFCLK_SEL_ALTLF (2u)

/** \brief PILO - Precision ILO, if present. */
#define IFX_CLK_SELECT_LFCLK_SEL_PILO (3u)

/** \brief ILO1 - Internal Low-speed Oscillator #1, if present. */
#define IFX_CLK_SELECT_LFCLK_SEL_ILO1 (4u)

/** \brief ECO_PRESCALER - External-Crystal Oscillator after prescaling, if present.
Does not work in DEEPSLEEP or HIBERNATE modes.
Intended for applications that operate in ACTIVE/SLEEP modes only.
This option is only valid when ECO is present in the product.
Not compatible with an clk_sys frequency <48MHz. */
#define IFX_CLK_SELECT_LFCLK_SEL_ECO_PRESCALER (5u)

/** \brief LPECO_PRESCALER - Low-Power External-Crystal Oscillator after prescaling, if present.
This choice works in ACTIVE/SLEEP/DEEPSLEEP modes.
This option is only valid when LPECO is present in the product. */
#define IFX_CLK_SELECT_LFCLK_SEL_LPECO_PRESCALER (6u)

/* CLK_SELECT.PUMP_DIV enumerated values */

/** \brief Transparent mode, feed through selected clock source w/o dividing. */
#define IFX_CLK_SELECT_PUMP_DIV_NO_DIV (0u)

/** \brief Divide selected clock source by 2 */
#define IFX_CLK_SELECT_PUMP_DIV_DIV_BY_2 (1u)

/** \brief Divide selected clock source by 4 */
#define IFX_CLK_SELECT_PUMP_DIV_DIV_BY_4 (2u)

/** \brief Divide selected clock source by 8 */
#define IFX_CLK_SELECT_PUMP_DIV_DIV_BY_8 (3u)

/** \brief Divide selected clock source by 16 */
#define IFX_CLK_SELECT_PUMP_DIV_DIV_BY_16 (4u)

/** \brief IMO Configuration */
typedef struct _Ifx_CLK_IMO_CONFIG_Bits
{
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [29:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit DPSLP_ENABLE:1;         /**< \brief [30:30] Enable for IMO during DEEPSLEEP.
                                                                    This bit configures IMO behavior during DEEPSLEEP:
                                                                    0: IMO is automatically disabled during DEEPSLEEP
                                                                    and enables upon wakeup;
                                                                    1: IMO is kept enabled throughout DEEPSLEEP (rw) */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] Master enable for IMO oscillator.
                                                                    This bit must be high at all times for all
                                                                    functions to work properly.
                                                                    Hardware will automatically disable the IMO during
                                                                    HIBERNATE and XRES.
                                                                    It will automatically disable during DEEPSLEEP if
                                                                    DPSLP_ENABLE==0. (rw) */
} Ifx_CLK_IMO_CONFIG_Bits;

/** \brief ECO Configuration Register */
typedef struct _Ifx_CLK_ECO_CONFIG_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit AGC_EN:1;               /**< \brief [1:1]   Automatic Gain Control (AGC) enable.
                                                                    When set, the oscillation amplitude is controlled
                                                                    to the level selected by CLK_ECO_CONFIG2.ATRIM.
                                                                    When low, the amplitude is not explicitly
                                                                    controlled and can be as high as the vddd supply.
                                                                    WARNING: use care when disabling AGC because
                                                                    driving a crystal beyond its rated limit can
                                                                    permanently damage the crystal. (rw) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [26:2]  \internal Reserved */
    __IO Ifx_UReg_32Bit ECO_DIV_DISABLE:1;      /**< \brief [27:27] ECO prescaler disable command (mutually
                                                                    exclusive with ECO_DIV_ENABLE).
                                                                    SW sets this field to '1' and HW sets this field to '0'.

                                                                    HW sets ECO_DIV_DISABLE field to '0' immediately
                                                                    and HW sets CLK_ECO_PRESCALE.ECO_DIV_EN field to
                                                                    '0' immediately. (rw) */
    __IO Ifx_UReg_32Bit ECO_DIV_ENABLE:1;       /**< \brief [28:28] ECO prescaler enable command (mutually
                                                                    exclusive with ECO_DIV_DISABLE).
                                                                    ECO Prescaler only works in ACTIVE and SLEEP modes.
                                                                    SW sets this field to '1' to enable the divider and
                                                                    HW sets this field to '0' to indicate that divider
                                                                    enabling has completed.
                                                                    When the divider is enabled, its integer and
                                                                    fractional counters are initialized to '0'.
                                                                    If a divider is to be re-enabled using different
                                                                    integer and fractional divider values, the SW
                                                                    should follow these steps:
                                                                    0: Disable the divider using the ECO_DIV_DISABLE field.
                                                                    1: Configure CLK_ECO_PRESCALE registers.
                                                                    2: Enable the divider using the ECO_DIV_ENABLE field.

                                                                    HW sets the ECO_DIV_ENABLE field to '0' when the
                                                                    enabling is performed and HW set
                                                                    CLK_ECO_PRESCALER.ENABLED to '1' when the enabling
                                                                    is performed. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [30:29] \internal Reserved */
    __IO Ifx_UReg_32Bit ECO_EN:1;               /**< \brief [31:31] Master enable for ECO oscillator.
                                                                    Configure the settings in CLK_ECO_CONFIG2 to work
                                                                    with the selected crystal, before enabling ECO. (rw) */
} Ifx_CLK_ECO_CONFIG_Bits;

/** \brief ECO Prescaler Configuration Register */
typedef struct _Ifx_CLK_ECO_PRESCALE_Bits
{
    __I  Ifx_UReg_32Bit ECO_DIV_ENABLED:1;      /**< \brief [0:0]   ECO prescaler enabled.
                                                                    HW sets this field to '1' as a result of an
                                                                    CLK_ECO_CONFIG.ECO_DIV_ENABLE command.
                                                                    HW sets this field to '0' as a result on a
                                                                    CLK_ECO_CONFIG.ECO_DIV_DISABLE command.
                                                                    ECO prescaler is incompatible with DEEPSLEEP modes,
                                                                    and firmware must disable it before entering DEEPSLEEP. (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [7:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit ECO_FRAC_DIV:8;         /**< \brief [15:8]  8-bit fractional value, sufficient to get
                                                                    prescaler output within the +/-65ppm calibration range.
                                                                    Subtract one from the desired divide value when
                                                                    writing this field.
                                                                    For example, to divide by 1, write ECO_FRAC_DIV=0.
                                                                    Do not change this setting when ECO Prescaler is enabled. (rw) */
    __IO Ifx_UReg_32Bit ECO_INT_DIV:10;         /**< \brief [25:16] 10-bit integer value allows for ECO
                                                                    frequencies up to 33.55MHz.
                                                                    Subtract one from the desired divide value when
                                                                    writing this field.
                                                                    For example, to divide by 1, write ECO_INT_DIV=0.
                                                                    Do not change this setting when ECO Prescaler is enabled. (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [31:26] \internal Reserved */
} Ifx_CLK_ECO_PRESCALE_Bits;

/** \brief ECO Status Register */
typedef struct _Ifx_CLK_ECO_STATUS_Bits
{
    __I  Ifx_UReg_32Bit ECO_OK:1;               /**< \brief [0:0]   Indicates the ECO internal oscillator
                                                                    circuit has sufficient amplitude.
                                                                    It may not meet the PPM accuracy or duty cycle spec. (r) */
    __I  Ifx_UReg_32Bit ECO_READY:1;            /**< \brief [1:1]   Indicates the ECO internal oscillator
                                                                    circuit has had enough time to fully stabilize.
                                                                    This is the output of a counter since ECO was
                                                                    enabled, and it does not check the ECO output.
                                                                    It is recommended to also confirm ECO_OK==1. (r) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_CLK_ECO_STATUS_Bits;

/** \brief FLL Configuration Register */
typedef struct _Ifx_CLK_FLL_CONFIG_Bits
{
    __IO Ifx_UReg_32Bit FLL_MULT:18;            /**< \brief [17:0]  Multiplier to determine CCO frequency in
                                                                    multiples of the frequency of the selected
                                                                    reference clock (Fref).
                                                                    Ffll = (FLL_MULT)  * (Fref / REFERENCE_DIV) /
                                                                    (OUTPUT_DIV+1) (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [23:18] \internal Reserved */
    __IO Ifx_UReg_32Bit FLL_OUTPUT_DIV:1;       /**< \brief [24:24] Control bits for Output divider.
                                                                    Set the divide value before enabling the FLL, and
                                                                    do not change it while FLL is enabled.
                                                                    0: no division
                                                                    1: divide by 2 (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [30:25] \internal Reserved */
    __IO Ifx_UReg_32Bit FLL_ENABLE:1;           /**< \brief [31:31] Master enable for FLL.
                                                                    The FLL requires firmware sequencing when enabling
                                                                    and disabling.
                                                                    Hardware handles sequencing automatically when
                                                                    entering/exiting DEEPSLEEP.
                                                                    To enable the FLL, use the following sequence:
                                                                    1) Configure FLL and CCO settings.
                                                                    Do not modify CLK_FLL_CONFIG3.BYPASS_SEL (must be
                                                                    AUTO) or CLK_FLL_CONFIG.FLL_ENABLE (must be 0).
                                                                    2) Enable the CCO by writing
                                                                    CLK_FLL_CONFIG4.CCO_ENABLE=1
                                                                    3) Wait until CLK_FLL_STATUS.CCO_READY==1.
                                                                    4) Ensure the reference clock has stabilized.
                                                                    5) Write FLL_ENABLE=1.
                                                                    6) Optionally wait until CLK_FLL_STATUS.LOCKED==1.
                                                                    The hardware automatically changes to the FLL
                                                                    output when LOCKED==1.
                                                                    To disable the FLL, use the following sequence:
                                                                    1) Write CLK_FLL_CONFIG3.BYPASS_SEL=FLL_REF.
                                                                    2) Read CLK_FLL_CONFIG3.BYPASS_SEL to ensure the
                                                                    write completes (read is not optional).
                                                                    3) Wait at least ten cycles of either FLL reference
                                                                    clock or FLL output clock, whichever is slower.
                                                                    4) Disable FLL with FLL_ENABLE=0.
                                                                    5) Disable the CCO by writing
                                                                    CLK_FLL_CONFIG4.CCO_ENABLE=0.
                                                                    6) Write CLK_FLL_CONFIG3.BYPASS_SEL=AUTO.
                                                                    7) Read CLK_FLL_CONFIG3.BYPASS_SEL to ensure the
                                                                    write completes (read is not optional).
                                                                    8) Wait three cycles of FLL reference clock.
                                                                    0: Block is powered off
                                                                    1: Block is powered on (rw) */
} Ifx_CLK_FLL_CONFIG_Bits;

/** \brief FLL Configuration Register 2 */
typedef struct _Ifx_CLK_FLL_CONFIG2_Bits
{
    __IO Ifx_UReg_32Bit FLL_REF_DIV:13;         /**< \brief [12:0]  Control bits for reference divider.
                                                                    Set the divide value before enabling the FLL, and
                                                                    do not change it while FLL is enabled.
                                                                    0: illegal (undefined behavior)
                                                                    1: divide by 1
                                                                    ...
                                                                    8191: divide by 8191 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit LOCK_TOL:8;             /**< \brief [23:16] Lock tolerance sets the error threshold for
                                                                    when the FLL output is considered locked to the
                                                                    reference input.
                                                                    A high tolerance can be used to lock more quickly
                                                                    or allow less accuracy.
                                                                    The tolerance is the allowed difference between the
                                                                    count value for the ideal formula and the measured value.
                                                                    0: tolerate error of 1 count value
                                                                    1: tolerate error of 2 count values
                                                                    ...
                                                                    255: tolerate error of 256 count values (rw) */
    __IO Ifx_UReg_32Bit UPDATE_TOL:8;           /**< \brief [31:24] Update tolerance sets the error threshold
                                                                    for when the FLL will update the CCO frequency settings.
                                                                    The update tolerance is the allowed difference
                                                                    between the count value for the ideal formula and
                                                                    the measured value.
                                                                    UPDATE_TOL should be less than LOCK_TOL. (rw) */
} Ifx_CLK_FLL_CONFIG2_Bits;

/** \brief FLL Configuration Register 3 */
typedef struct _Ifx_CLK_FLL_CONFIG3_Bits
{
    __IO Ifx_UReg_32Bit FLL_LF_IGAIN:4;         /**< \brief [3:0]   FLL Loop Filter Gain Setting #1.
                                                                    The proportional gain is the sum of FLL_LF_IGAIN
                                                                    and FLL_LF_PGAIN.
                                                                    0: 1/256
                                                                    1: 1/128
                                                                    2: 1/64
                                                                    3: 1/32
                                                                    4: 1/16
                                                                    5: 1/8
                                                                    6: 1/4
                                                                    7: 1/2
                                                                    8: 1.0
                                                                    9: 2.0
                                                                    10: 4.0
                                                                    11: 8.0
                                                                    >=12: illegal (rw) */
    __IO Ifx_UReg_32Bit FLL_LF_PGAIN:4;         /**< \brief [7:4]   FLL Loop Filter Gain Setting #2.
                                                                    The proportional gain is the sum of FLL_LF_IGAIN
                                                                    and FLL_LF_PGAIN.
                                                                    0: 1/256
                                                                    1: 1/128
                                                                    2: 1/64
                                                                    3: 1/32
                                                                    4: 1/16
                                                                    5: 1/8
                                                                    6: 1/4
                                                                    7: 1/2
                                                                    8: 1.0
                                                                    9: 2.0
                                                                    10: 4.0
                                                                    11: 8.0
                                                                    >=12: illegal (rw) */
    __IO Ifx_UReg_32Bit SETTLING_COUNT:13;      /**< \brief [20:8]  Number of undivided reference clock cycles
                                                                    to wait after changing the CCO trim until the loop
                                                                    measurement restarts.
                                                                    A delay allows the CCO output to settle and gives a
                                                                    more accurate measurement.
                                                                    The default is tuned to an 8MHz reference clock
                                                                    since the IMO is expected to be the most common use case.
                                                                    0: no settling time
                                                                    1: wait one reference clock cycle
                                                                    ...
                                                                    8191: wait 8191 reference clock cycles (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [27:21] \internal Reserved */
    __IO Ifx_UReg_32Bit BYPASS_SEL:2;           /**< \brief [29:28] Bypass mux located just after FLL output.
                                                                    This register can be written while the FLL is enabled.
                                                                    When changing BYPASS_SEL, do not turn off the
                                                                    reference clock or CCO clock for five cycles
                                                                    (whichever is slower).
                                                                    Whenever BYPASS_SEL is changed, it is required to
                                                                    read CLK_FLL_CONFIG3 to ensure the change takes effect. (rw)
                                                AUTO          : 0u   Automatic using lock indicator.
                                                                    When unlocked, automatically selects FLL reference
                                                                    input (bypass mode).
                                                                    When locked, automatically selects FLL output.
                                                                    This can allow some processing to occur while the
                                                                    FLL is locking, such as after DEEPSLEEP wakeup.
                                                                    It is incompatible with clock supervision, because
                                                                    the frequency changes based on the lock signal.
                                                LOCKED_OR_NOTHING: 1u   Similar to AUTO, except the clock is gated off when
                                                                    unlocked.
                                                                    This is compatible with clock supervision, because
                                                                    the supervisors allow no clock during startup
                                                                    (until a timeout occurs), and the clock targets the
                                                                    proper frequency whenever it is running.
                                                FLL_REF       : 2u   Select FLL reference input (bypass mode).
                                                                    Ignores lock indicator
                                                FLL_OUT       : 3u   Select FLL output.  Ignores lock indicator. */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_CLK_FLL_CONFIG3_Bits;

/* CLK_FLL_CONFIG3.BYPASS_SEL enumerated values */

/** \brief Automatic using lock indicator.
When unlocked, automatically selects FLL reference input (bypass mode).
When locked, automatically selects FLL output.
This can allow some processing to occur while the FLL is locking, such as after
DEEPSLEEP wakeup.
It is incompatible with clock supervision, because the frequency changes based
on the lock signal. */
#define IFX_CLK_FLL_CONFIG3_BYPASS_SEL_AUTO (0u)

/** \brief Similar to AUTO, except the clock is gated off when unlocked.
This is compatible with clock supervision, because the supervisors allow no
clock during startup (until a timeout occurs), and the clock targets the proper
frequency whenever it is running. */
#define IFX_CLK_FLL_CONFIG3_BYPASS_SEL_LOCKED_OR_NOTHING (1u)

/** \brief Select FLL reference input (bypass mode).  Ignores lock indicator */
#define IFX_CLK_FLL_CONFIG3_BYPASS_SEL_FLL_REF (2u)

/** \brief Select FLL output.  Ignores lock indicator. */
#define IFX_CLK_FLL_CONFIG3_BYPASS_SEL_FLL_OUT (3u)

/** \brief FLL Configuration Register 4 */
typedef struct _Ifx_CLK_FLL_CONFIG4_Bits
{
    __IO Ifx_UReg_32Bit CCO_LIMIT:8;            /**< \brief [7:0]   Maximum CCO offset allowed (used to prevent
                                                                    FLL dynamics from selecting an CCO frequency that
                                                                    the logic cannot support) (rw) */
    __IO Ifx_UReg_32Bit CCO_RANGE:3;            /**< \brief [10:8]  Frequency range of CCO (rw)
                                                RANGE0        : 0u   Target frequency is in range [48, 64) MHz
                                                RANGE1        : 1u   Target frequency is in range [64, 85) MHz
                                                RANGE2        : 2u   Target frequency is in range [85, 113) MHz
                                                RANGE3        : 3u   Target frequency is in range [113, 150) MHz
                                                RANGE4        : 4u   Target frequency is in range [150, 200] MHz */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit CCO_FREQ:9;             /**< \brief [24:16] CCO frequency code.
                                                                    This is updated by HW when the FLL is enabled.
                                                                    It can be manually updated to use the CCO in an
                                                                    open loop configuration.
                                                                    The meaning of each frequency code depends on the range. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [29:25] \internal Reserved */
    __IO Ifx_UReg_32Bit CCO_HW_UPDATE_DIS:1;    /**< \brief [30:30] Disable CCO frequency update by FLL hardware
                                                                    0: Hardware update of CCO settings is allowed.
                                                                    Use this setting for normal FLL operation.
                                                                    1: Hardware update of CCO settings is disabled.
                                                                    Use this setting for open-loop FLL operation. (rw) */
    __IO Ifx_UReg_32Bit CCO_ENABLE:1;           /**< \brief [31:31] Enable the CCO.
                                                                    It is required to enable the CCO before using the FLL.
                                                                    0: Block is powered off
                                                                    1: Block is powered on (rw) */
} Ifx_CLK_FLL_CONFIG4_Bits;

/* CLK_FLL_CONFIG4.CCO_RANGE enumerated values */

/** \brief Target frequency is in range [48, 64) MHz */
#define IFX_CLK_FLL_CONFIG4_CCO_RANGE_RANGE0 (0u)

/** \brief Target frequency is in range [64, 85) MHz */
#define IFX_CLK_FLL_CONFIG4_CCO_RANGE_RANGE1 (1u)

/** \brief Target frequency is in range [85, 113) MHz */
#define IFX_CLK_FLL_CONFIG4_CCO_RANGE_RANGE2 (2u)

/** \brief Target frequency is in range [113, 150) MHz */
#define IFX_CLK_FLL_CONFIG4_CCO_RANGE_RANGE3 (3u)

/** \brief Target frequency is in range [150, 200] MHz */
#define IFX_CLK_FLL_CONFIG4_CCO_RANGE_RANGE4 (4u)

/** \brief FLL Status Register */
typedef struct _Ifx_CLK_FLL_STATUS_Bits
{
    __I  Ifx_UReg_32Bit LOCKED:1;               /**< \brief [0:0]   FLL Lock Indicator (r) */
    __IO Ifx_UReg_32Bit UNLOCK_OCCURRED:1;      /**< \brief [1:1]   This bit sets whenever the FLL is enabled
                                                                    and goes out of lock.
                                                                    This bit stays set until cleared by firmware.
                                                                    Note: When exiting Deep Sleep with FLL enabled,
                                                                    UNLOCK_OCCURRED will set.
                                                                    Therefore, after FLL successfully locks, FW should
                                                                    clear UNLOCK_OCCURRED flag to prevent a false
                                                                    positive that would indicate that FLL erroneously unlocked. (rw) */
    __I  Ifx_UReg_32Bit CCO_READY:1;            /**< \brief [2:2]   This indicates that the CCO is internally
                                                                    settled and ready to use. (r) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_CLK_FLL_STATUS_Bits;

/** \brief ECO Configuration Register 2 */
typedef struct _Ifx_CLK_ECO_CONFIG2_Bits
{
    __IO Ifx_UReg_32Bit WDTRIM:3;               /**< \brief [2:0]   Watch Dog Trim -  Delta voltage below
                                                                    steady state level
                                                                    0x0 - 50mV
                                                                    0x1 - 75mV
                                                                    0x2 - 100mV
                                                                    0x3 - 125mV
                                                                    0x4 - 150mV
                                                                    0x5 - 175mV
                                                                    0x6 - 200mV
                                                                    0x7 - 225mV (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit ATRIM:4;                /**< \brief [7:4]   Amplitude trim to set the crystal drive
                                                                    level when ECO_CONFIG.AGC_EN=1.
                                                                    WARNING: use care when setting this field because
                                                                    driving a crystal beyond its rated limit can
                                                                    permanently damage the crystal.
                                                                    0x0 - 150mV
                                                                    0x1 - 175mV
                                                                    0x2 - 200mV
                                                                    0x3 - 225mV
                                                                    0x4 - 250mV
                                                                    0x5 - 275mV
                                                                    0x6 - 300mV
                                                                    0x7 - 325mV
                                                                    0x8 - 350mV
                                                                    0x9 - 375mV
                                                                    0xA - 400mV
                                                                    0xB - 425mV
                                                                    0xC - 450mV
                                                                    0xD - 475mV
                                                                    0xE - 500mV
                                                                    0xF - 525mV (rw) */
    __IO Ifx_UReg_32Bit FTRIM:2;                /**< \brief [9:8]   Filter Trim - 3rd harmonic oscillation (rw) */
    __IO Ifx_UReg_32Bit RTRIM:2;                /**< \brief [11:10] Feedback resistor Trim (rw) */
    __IO Ifx_UReg_32Bit GTRIM:3;                /**< \brief [14:12] Gain Trim - Startup time. (rw) */
    __I  Ifx_UReg_32Bit :17;                    /**< \brief [31:15] \internal Reserved */
} Ifx_CLK_ECO_CONFIG2_Bits;

/** \brief ILO Configuration */
typedef struct _Ifx_CLK_ILO_CONFIG_Bits
{
    __IO Ifx_UReg_32Bit ILO_BACKUP:1;           /**< \brief [0:0]   If backup domain is present on this
                                                                    product, this register indicates that ILO should
                                                                    stay enabled for use by backup domain during XRES,
                                                                    HIBERNATE mode, and through power-related resets
                                                                    like BOD on VDDD/VCCD.
                                                                    Writes to this field are ignored unless the WDT is
                                                                    unlocked using WDT_LOCK register.
                                                                    0: ILO turns off at XRES/BOD event or HIBERNATE entry.
                                                                    1: ILO remains on if backup domain is present and
                                                                    powered even for XRES/BOD or HIBERNATE entry. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [30:1]  \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] Master enable for ILO.
                                                                    Writes to this field are ignored unless the WDT is
                                                                    unlocked using WDT_LOCK register.
                                                                    After enabling, it takes at most two cycles to
                                                                    reach the accuracy spec. (rw) */
} Ifx_CLK_ILO_CONFIG_Bits;

/** \brief ILO Trim Register */
typedef struct _Ifx_CLK_TRIM_ILO_CTL_Bits
{
    __IO Ifx_UReg_32Bit ILO_FTRIM:6;            /**< \brief [5:0]   IL0 frequency trims.
                                                                    LSB step size is 1.5 percent (typical) of the frequency. (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_CLK_TRIM_ILO_CTL_Bits;

/** \brief Medium Frequency Clock Select Register */
typedef struct _Ifx_CLK_MF_SELECT_Bits
{
    __IO Ifx_UReg_32Bit MFCLK_SEL:3;            /**< \brief [2:0]   Select source for MFCLK (clk_mf).
                                                                    Note that not all products support all clock sources.
                                                                    Selecting a clock source that is not supported
                                                                    results in undefined behavior. (rw)
                                                MFO           : 0u   MFO - Medium Frequency Oscillator.
                                                                    DEEPSLEEP compatibility is product-specific.
                                                                    See CLK_MFO_CONFIG for capability of this product.
                                                ILO           : 1u   ILO - Internal Low-speed Oscillator.
                                                WCO           : 2u   WCO - Watch-Crystal Oscillator, if present.
                                                ALTLF         : 3u   ALTLF - Alternate Low-Frequency Clock.
                                                                    Capability is product-specific
                                                PILO          : 4u   PILO - Precision ILO, if present.
                                                ILO1          : 5u   ILO1 - Internal Low-speed Oscillator #1, if present.
                                                ECO_PRESCALER : 6u   ECO_PRESCALER - External-Crystal Oscillator, if
                                                                    present, after prescaling in CLK_ECO_PRESCALE.
                                                                    Intended for applications that operate in
                                                                    ACTIVE/SLEEP modes only.
                                                                    Does not work in DEEPSLEEP mode.
                                                LPECO         : 7u   LPECO - Low Power External Crystal Oscillator, if present. */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [7:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit MFCLK_DIV:8;            /**< \brief [15:8]  Divide selected clock source by (1+MFCLK_DIV).
                                                                    The output of this divider is MFCLK (clk_mf).
                                                                    Allows for integer divisions in the range [1, 256].
                                                                    Do not change this setting while ENABLE==1. (rw) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [30:16] \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] Enable for MFCLK (clk_mf).
                                                                    When disabling clk_mf, do not disable the source
                                                                    until after 5 clk_mf periods.
                                                                    clk_mf continues to operate in DEEPSLEEP for
                                                                    compatible sources.
                                                                    Firmware must disable clk_mf before entering
                                                                    DEEPSLEEP if the source is not compatible with
                                                                    DEEPSLEEP mode. (rw) */
} Ifx_CLK_MF_SELECT_Bits;

/* CLK_MF_SELECT.MFCLK_SEL enumerated values */

/** \brief MFO - Medium Frequency Oscillator.  DEEPSLEEP compatibility is product-specific.
See CLK_MFO_CONFIG for capability of this product. */
#define IFX_CLK_MF_SELECT_MFCLK_SEL_MFO (0u)

/** \brief ILO - Internal Low-speed Oscillator. */
#define IFX_CLK_MF_SELECT_MFCLK_SEL_ILO (1u)

/** \brief WCO - Watch-Crystal Oscillator, if present. */
#define IFX_CLK_MF_SELECT_MFCLK_SEL_WCO (2u)

/** \brief ALTLF - Alternate Low-Frequency Clock.  Capability is product-specific */
#define IFX_CLK_MF_SELECT_MFCLK_SEL_ALTLF (3u)

/** \brief PILO - Precision ILO, if present. */
#define IFX_CLK_MF_SELECT_MFCLK_SEL_PILO (4u)

/** \brief ILO1 - Internal Low-speed Oscillator #1, if present. */
#define IFX_CLK_MF_SELECT_MFCLK_SEL_ILO1 (5u)

/** \brief ECO_PRESCALER - External-Crystal Oscillator, if present, after prescaling in
CLK_ECO_PRESCALE.  Intended for applications that operate in ACTIVE/SLEEP modes only.
Does not work in DEEPSLEEP mode. */
#define IFX_CLK_MF_SELECT_MFCLK_SEL_ECO_PRESCALER (6u)

/** \brief LPECO - Low Power External Crystal Oscillator, if present. */
#define IFX_CLK_MF_SELECT_MFCLK_SEL_LPECO (7u)

/** \brief MFO Configuration Register */
typedef struct _Ifx_CLK_MFO_CONFIG_Bits
{
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [29:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit DPSLP_ENABLE:1;         /**< \brief [30:30] Enable for MFO during DEEPSLEEP.
                                                                    This bit is ignored when ENABLE==0.  When ENABLE==1:
                                                                    0: MFO is automatically disabled during DEEPSLEEP
                                                                    and enables upon wakeup;
                                                                    1: MFO is kept enabled throughout DEEPSLEEP (rw) */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] Enable for Medium Frequency Oscillator
                                                                    (MFO) to generate clk_mf.
                                                                    It is product-specific whether this is a separate
                                                                    component or implemented as a divided version of
                                                                    another clock (eg. IMO). (rw) */
} Ifx_CLK_MFO_CONFIG_Bits;

/** \brief IHO Configuration Register */
typedef struct _Ifx_CLK_IHO_CONFIG_Bits
{
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [30:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] Enable for Internal High-speed Oscillator
                                                                    (IHO) to generate clk_iho. (rw) */
} Ifx_CLK_IHO_CONFIG_Bits;

/** \brief Select CSV Reference clock for Active domain */
typedef struct _Ifx_CSV_REF_SEL_Bits
{
    __IO Ifx_UReg_32Bit REF_MUX:3;              /**< \brief [2:0]   Selects a source for clock clk_ref_hf.
                                                                    Note that not all products support all clock sources.
                                                                    Selecting a clock source that is not supported will
                                                                    result in undefined behavior.
                                                                    It takes four cycles of the originally selected
                                                                    clock to switch away from it.
                                                                    Do not disable the original clock during this time. (rw)
                                                IMO           : 0u   IMO - Internal R/C Oscillator
                                                EXTCLK        : 1u   EXTCLK - External Clock Pin
                                                ECO           : 2u   ECO - External-Crystal Oscillator
                                                ALTHF         : 3u   ALTHF - Alternate High-Frequency clock input
                                                                    (product-specific clock)
                                                IHO           : 4u   IHO - Internal High-speed Oscillator */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_CSV_REF_SEL_Bits;

/* CSV_REF_SEL.REF_MUX enumerated values */

/** \brief IMO - Internal R/C Oscillator */
#define IFX_CSV_REF_SEL_REF_MUX_IMO (0u)

/** \brief EXTCLK - External Clock Pin */
#define IFX_CSV_REF_SEL_REF_MUX_EXTCLK (1u)

/** \brief ECO - External-Crystal Oscillator */
#define IFX_CSV_REF_SEL_REF_MUX_ECO (2u)

/** \brief ALTHF - Alternate High-Frequency clock input (product-specific clock) */
#define IFX_CSV_REF_SEL_REF_MUX_ALTHF (3u)

/** \brief IHO - Internal High-speed Oscillator */
#define IFX_CSV_REF_SEL_REF_MUX_IHO (4u)

/** \brief Reset Cause Observation Register */
typedef struct _Ifx_RES_CAUSE_Bits
{
    __IO Ifx_UReg_32Bit RESET_WDT:1;            /**< \brief [0:0]   A basic WatchDog Timer (WDT) reset has
                                                                    occurred since last power cycle.
                                                                    ULP products: This is a low-voltage cause bit that
                                                                    hardware clears when the low-voltage supply is
                                                                    initialized (see comments above).
                                                                    For products that support high-voltage cause
                                                                    detection, this bit blocks recording of other
                                                                    high-voltage cause bits, except RESET_PORVDDD.
                                                                    Hardware clears this bit during POR.
                                                                    This bit is not blocked by other HV cause bits. (rw) */
    __IO Ifx_UReg_32Bit RESET_ACT_FAULT:1;      /**< \brief [1:1]   Reserved (rw) */
    __IO Ifx_UReg_32Bit RESET_DPSLP_FAULT:1;    /**< \brief [2:2]   Reserved (rw) */
    __IO Ifx_UReg_32Bit RESET_TC_DBGRESET:1;    /**< \brief [3:3]   Test controller or debugger asserted reset.
                                                                    Only resets debug domain.
                                                                    This is a low-voltage cause bit that hardware
                                                                    clears when the low-voltage supply is initialized
                                                                    (see comments above). (rw) */
    __IO Ifx_UReg_32Bit RESET_SOFT:1;           /**< \brief [4:4]   CPU[0] requested a system reset through
                                                                    it's SYSRESETREQ.
                                                                    This can be done via a debugger probe or in firmware.
                                                                    This is a low-voltage cause bit that hardware
                                                                    clears when the low-voltage supply is initialized
                                                                    (see comments above). (rw) */
    __IO Ifx_UReg_32Bit RESET_MCWDT0:1;         /**< \brief [5:5]   Multi-Counter Watchdog timer reset #0.
                                                                    This is a low-voltage cause bit that hardware
                                                                    clears when the low-voltage supply is initialized
                                                                    (see comments above).
                                                                    This bit is only valid when parameter NUM_MCWDT>0 (rw) */
    __IO Ifx_UReg_32Bit RESET_MCWDT1:1;         /**< \brief [6:6]   Multi-Counter Watchdog timer reset #1.
                                                                    This is a low-voltage cause bit that hardware
                                                                    clears when the low-voltage supply is initialized
                                                                    (see comments above).
                                                                    This bit is only valid when parameter NUM_MCWDT>1 (rw) */
    __IO Ifx_UReg_32Bit RESET_MCWDT2:1;         /**< \brief [7:7]   Multi-Counter Watchdog timer reset #2.
                                                                    This is a low-voltage cause bit that hardware
                                                                    clears when the low-voltage supply is initialized
                                                                    (see comments above).
                                                                    This bit is only valid when parameter NUM_MCWDT>2 (rw) */
    __IO Ifx_UReg_32Bit RESET_MCWDT3:1;         /**< \brief [8:8]   Multi-Counter Watchdog timer reset #3.
                                                                    This is a low-voltage cause bit that hardware
                                                                    clears when the low-voltage supply is initialized
                                                                    (see comments above).
                                                                    This bit is only valid when parameter NUM_MCWDT>3 (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [12:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit RESET_SOFT1:1;          /**< \brief [13:13] CPU[1] requested a system reset through
                                                                    it's SYSRESETREQ.
                                                                    This can be done via a debugger probe or in firmware.
                                                                    This is a low-voltage cause bit that hardware
                                                                    clears when the low-voltage supply is initialized
                                                                    (see comments above). (rw) */
    __IO Ifx_UReg_32Bit RESET_SOFT2:1;          /**< \brief [14:14] CPU[2] requested a system reset through
                                                                    it's SYSRESETREQ.
                                                                    This can be done via a debugger probe or in firmware.
                                                                    This is a low-voltage cause bit that hardware
                                                                    clears when the low-voltage supply is initialized
                                                                    (see comments above). (rw) */
    __IO Ifx_UReg_32Bit RESET_SOFT3:1;          /**< \brief [15:15] CPU[3] requested a system reset through
                                                                    it's SYSRESETREQ.
                                                                    This can be done via a debugger probe or in firmware.
                                                                    This is a low-voltage cause bit that hardware
                                                                    clears when the low-voltage supply is initialized
                                                                    (see comments above). (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_RES_CAUSE_Bits;

/** \brief Reset Cause Observation Register 2 */
typedef struct _Ifx_RES_CAUSE2_Bits
{
    __IO Ifx_UReg_32Bit RESET_CSV_HF:16;        /**< \brief [15:0]  Clock supervision logic requested a reset
                                                                    due to loss or frequency violation of a
                                                                    high-frequency clock.
                                                                    Each bit index K corresponds to a HFCLK<K>.
                                                                    Unimplemented clock bits return zero.
                                                                    Each bit is only valid when the corresponding bit
                                                                    in parameter MASK_HFCSV is 1 and CSV_PRESENT is set. (rw) */
    __IO Ifx_UReg_32Bit RESET_CSV_REF:1;        /**< \brief [16:16] Clock supervision logic requested a reset
                                                                    due to loss or frequency violation of the reference
                                                                    clock source that is used to monitor the other HF
                                                                    clock sources.
                                                                    This bit is only valid when parameter CSV_PRESENT is set. (rw) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [31:17] \internal Reserved */
} Ifx_RES_CAUSE2_Bits;

/** \brief Programmable XRES Control Register */
typedef struct _Ifx_RES_PXRES_CTL_Bits
{
    __O  Ifx_UReg_32Bit PXRES_TRIGGER:1;        /**< \brief [0:0]   Triggers PXRES.
                                                                    This causes a full-scope reset and reboot. (w) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_RES_PXRES_CTL_Bits;

/** \brief SECURE TEST and FIRMWARE TEST Key control register */
typedef struct _Ifx_TST_XRES_SECURE_Bits
{
    __IO Ifx_UReg_32Bit DATA8:8;                /**< \brief [7:0]   Data byte to be set into either SECURE TEST
                                                                    or FIRMWARE TEST key.
                                                                    Must not be changed in the same write that is
                                                                    toggling any of the *_WR bits below, (rw) */
    __IO Ifx_UReg_32Bit FW_WR:4;                /**< \brief [11:8]  Latch enables for each of the 4 bytes in
                                                                    the 32-bit FIRMWARE TEST key.
                                                                    Must be toggled high and then low while keeping
                                                                    DATA8 to the correct value. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __IO Ifx_UReg_32Bit SECURE_WR:4;            /**< \brief [19:16] Latch enables for each of the 4 bytes in
                                                                    the 32-bit SECURE TEST key.
                                                                    Must be toggled high and then low while keeping
                                                                    DATA8 to the correct value. (rw) */
    __I  Ifx_UReg_32Bit :9;                     /**< \brief [28:20] \internal Reserved */
    __I  Ifx_UReg_32Bit FW_KEY_OK:1;            /**< \brief [29:29] Indicates that the 32-bit FIRMWARE TEST key
                                                                    is observing the correct key.
                                                                    Firmware key is reset by (A)XRES and STRUCT_XRES. (r) */
    __I  Ifx_UReg_32Bit SECURE_KEY_OK:1;        /**< \brief [30:30] Indicates that the 32-bit SECURE TEST key
                                                                    is observing the correct key.
                                                                    Secure key is not reset, but it will establish low
                                                                    after a deep power cycle that causes it to lose its
                                                                    written state. (r) */
    __IO Ifx_UReg_32Bit SECURE_DISABLE:1;       /**< \brief [31:31] Disables the SECURE TEST key entry
                                                                    capability until next reset.
                                                                    Must not be set in the same write when any of the
                                                                    above *_WR bits are set or toggling. (rw) */
} Ifx_TST_XRES_SECURE_Bits;

/** \brief Power System Trim Register */
typedef struct _Ifx_PWR_TRIM_PWRSYS_CTL_Bits
{
    __IO Ifx_UReg_32Bit ACT_REG_TRIM:5;         /**< \brief [4:0]   Trim for the Active-Regulator.
                                                                    This sets the output voltage level.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    The nominal output voltage is vccd=850mV +
                                                                    ACT_REG_TRIM*12.5mV.
                                                                    The actual output voltage will vary depending on
                                                                    conditions and load.
                                                                    The following settings are explicitly shown for
                                                                    convenience, and other values may be calculated
                                                                    using the formula:
                                                                    5'h04: 900mV (nominal)
                                                                    5'h0C: 1000mV (nominal)
                                                                    5'h14: 1100mV (nominal)
                                                                    5'h1C: 1200mV (nominal) (rw) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [29:5]  \internal Reserved */
    __IO Ifx_UReg_32Bit ACT_REG_BOOST:2;        /**< \brief [31:30] Controls the tradeoff between output
                                                                    current and internal operating current for the
                                                                    Active Regulator.
                                                                    The maximum output current depends on the silicon
                                                                    implementation, but an application may limit its
                                                                    maximum current to less than that.
                                                                    This may allow a reduction in the internal
                                                                    operating current of the regulator.
                                                                    The regulator internal operating current depends on
                                                                    the boost setting:
                                                                    2'b00: 50uA
                                                                    2'b01: 100uA
                                                                    2'b10: 150uA
                                                                    2'b11: 200uA
                                                                    The allowed setting is a lookup table based on the
                                                                    chip-specific maximum (set in factory) and an
                                                                    application-specific maximum (set by customer).
                                                                    The defaults are set assuming the application
                                                                    consumes the maximum allowed by the chip.
                                                                    50mA chip: 2'b00 (default);
                                                                    100mA chip: 2'b00 (default);
                                                                    150mA chip: 50..100mA app => 2'b00, 150mA app =>
                                                                    2'b01 (default);
                                                                    200mA chip: 50mA app => 2'b00, 100..150mA app =>
                                                                    2'b01,  200mA app => 2'b10 (default);
                                                                    250mA chip: 50mA app => 2'b00, 100..150mA app =>
                                                                    2'b01,  200..250mA app => 2'b10 (default);
                                                                    300mA chip: 50mA app => 2'b00, 100..150mA app =>
                                                                    2'b01, 200..250mA app => 2'b10, 300mA app => 2'b11
                                                                    (default);
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset. (rw) */
} Ifx_PWR_TRIM_PWRSYS_CTL_Bits;

/** \brief Power System Trim Register 2 */
typedef struct _Ifx_PWR_TRIM_PWRSYS_CTL2_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit DPSLP_REG_TRIM:3;       /**< \brief [10:8]  Trim for the DeepSleep-Regulator applied
                                                                    during DEEPSLEEP mode.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset.
                                                                    0: 0.825V
                                                                    1: 0.850V
                                                                    2: 0.875V
                                                                    3: 0.900V
                                                                    4: 0.925V
                                                                    5: 1.050V
                                                                    6: 1.100V
                                                                    7: 1.150V (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __IO Ifx_UReg_32Bit RET_REG_TRIM:3;         /**< \brief [14:12] Trim for the Retention-Regulator (if
                                                                    present) applied during DEEPSLEEP mode.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit NWELL_REG_TRIM:3;       /**< \brief [18:16] Trim for the Nwell-Regulator (if present)
                                                                    applied during DEEPSLEEP mode.
                                                                    Nwell trim is always forced to zero during
                                                                    (LP)ACTIVE/(LP)SLEEP modes.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit DPSLP_REG_ACT_TRIM:3;   /**< \brief [22:20] Trim for the DeepSleep-Regulator applied
                                                                    during (LP)ACTIVE/(LP)SLEEP modes.
                                                                    These are expected to be constant but provided as
                                                                    registers for risk mitigation.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit RET_REG_ACT_TRIM:3;     /**< \brief [26:24] Trim for the Retention-Regulator (if
                                                                    present) applied during (LP)ACTIVE/(LP)SLEEP modes.
                                                                    These are expected to be constant but provided as
                                                                    registers for risk mitigation.
                                                                    This register is only reset by XRES, HIBERNATE
                                                                    wakeup, or supply supervision reset. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_PWR_TRIM_PWRSYS_CTL2_Bits;

/** \brief ECO Trim Register */
typedef struct _Ifx_CLK_TRIM_ECO_CTL_Bits
{
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [15:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit ITRIM:6;                /**< \brief [21:16] Current Trim (rw) */
    __I  Ifx_UReg_32Bit :10;                    /**< \brief [31:22] \internal Reserved */
} Ifx_CLK_TRIM_ECO_CTL_Bits;

/** \brief Watchdog Counter Control Register (Type A) */
typedef struct _Ifx_WDT_CTL_Bits
{
    __IO Ifx_UReg_32Bit WDT_EN:1;               /**< \brief [0:0]   Enable this watchdog timer.
                                                                    This field is retained during DEEPSLEEP and
                                                                    HIBERNATE modes. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [3:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit WDT_CLK_SEL:2;          /**< \brief [5:4]   Select source for WDT.
                                                                    Not all products support all clock sources.
                                                                    Selecting a clock source that is not supported will
                                                                    result in undefined behavior.
                                                                    Writes to this field are ignored unless the WDT is
                                                                    unlock using WDT_LOCK register.
                                                                    It takes four cycles of the originally selected
                                                                    clock to switch away from it.
                                                                    Do not disable the original clock during this time. (rw)
                                                ILO           : 0u   ILO - Internal Low-speed Oscillator
                                                PILO          : 1u   PILO - Precision ILO. If present, if present
                                                BAK           : 2u   BAK - Selected clk_bak source, if present.  See BACKUP_CTL.
                                                                    This choice is not recommended for applications
                                                                    that rely upon the watchdog timer for safety or
                                                                    security, unless the product supports clock
                                                                    supervision of clk_bak (CSV_BAK).
                                                                    Generation of clk_bak is not protected by WDT_LOCK
                                                                    and is in a different memory region with
                                                                    potentially different security attributes. */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [29:6]  \internal Reserved */
    __IO Ifx_UReg_32Bit WDT_LOCK:2;             /**< \brief [31:30] Prohibits writing to WDT_*, CLK_ILO_CONFIG,
                                                                    CLK_SELECT.LFCLK_SEL, and CLK_TRIM_ILO_CTL
                                                                    registers when not equal 0.
                                                                    Requires at least two different writes to unlock.
                                                                    A change in WDT_LOCK takes effect beginning with
                                                                    the next write cycle.
                                                                    Note that this field is 2 bits to force multiple
                                                                    writes only.
                                                                    It represents only a single write protect signal
                                                                    protecting all those registers at the same time.
                                                                    WDT will lock on any reset.
                                                                    This field is not retained during DEEPSLEEP or
                                                                    HIBERNATE mode, so the WDT will be locked after
                                                                    wakeup from these modes. (rw)
                                                NO_CHG        : 0u   No effect
                                                CLR0          : 1u   Clears bit 0
                                                CLR1          : 2u   Clears bit 1
                                                SET01         : 3u   Sets both bits 0 and 1 */
} Ifx_WDT_CTL_Bits;

/* WDT_CTL.WDT_CLK_SEL enumerated values */

/** \brief ILO - Internal Low-speed Oscillator */
#define IFX_WDT_CTL_WDT_CLK_SEL_ILO (0u)

/** \brief PILO - Precision ILO. If present, if present */
#define IFX_WDT_CTL_WDT_CLK_SEL_PILO (1u)

/** \brief BAK - Selected clk_bak source, if present.  See BACKUP_CTL.
This choice is not recommended for applications that rely upon the watchdog
timer for safety or security, unless the product supports clock supervision of
clk_bak (CSV_BAK).
Generation of clk_bak is not protected by WDT_LOCK and is in a different memory
region with potentially different security attributes. */
#define IFX_WDT_CTL_WDT_CLK_SEL_BAK (2u)

/* WDT_CTL.WDT_LOCK enumerated values */

/** \brief No effect */
#define IFX_WDT_CTL_WDT_LOCK_NO_CHG (0u)

/** \brief Clears bit 0 */
#define IFX_WDT_CTL_WDT_LOCK_CLR0 (1u)

/** \brief Clears bit 1 */
#define IFX_WDT_CTL_WDT_LOCK_CLR1 (2u)

/** \brief Sets both bits 0 and 1 */
#define IFX_WDT_CTL_WDT_LOCK_SET01 (3u)

/** \brief Watchdog Counter Count Register (Type A) */
typedef struct _Ifx_WDT_CNT_Bits
{
    __IO Ifx_UReg_32Bit COUNTER:32;             /**< \brief [31:0]  Current value of WDT Counter.
                                                                    The write feature of this register is for
                                                                    engineering use (DfV), have no synchronization, and
                                                                    can only be applied when the WDT is fully off.
                                                                    When writing, the value is updated immediately in
                                                                    the WDT counter, but it will read back as the old
                                                                    value until this register resynchronizes just after
                                                                    the negedge of ILO.
                                                                    Writes will be ignored if they occur when the WDT
                                                                    is enabled. (rw) */
} Ifx_WDT_CNT_Bits;

/** \brief Watchdog Counter Match Register (Type A) */
typedef struct _Ifx_WDT_MATCH_Bits
{
    __IO Ifx_UReg_32Bit MATCH:32;               /**< \brief [31:0]  Match value for Watchdog counter.
                                                                    Every time WDT_COUNTER reaches MATCH an interrupt
                                                                    is generated.
                                                                    Two unserviced interrupts will lead to a system reset (i.e.
                                                                    at the third match). (rw) */
} Ifx_WDT_MATCH_Bits;

/** \brief Watchdog Counter Match Register 2 (Type A) */
typedef struct _Ifx_WDT_MATCH2_Bits
{
    __IO Ifx_UReg_32Bit IGNORE_BITS_ABOVE:5;    /**< \brief [4:0]   The bit index to be considered the MSB for
                                                                    matching.
                                                                    Bit indices above this setting are NOT checked
                                                                    against MATCH.
                                                                    This value provides control over the time-to-reset
                                                                    of the watchdog (which happens after 3 successive matches).
                                                                    The four LSBs cannot be ignored for matching.
                                                                    Settings <3 behave like a setting of 3.
                                                                    If the setting is higher than the number of bits in
                                                                    the WDT counter, all actual bits in the counter are
                                                                    matched. (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_WDT_MATCH2_Bits;

/** \brief Clock Supervision Reference Control */
typedef struct _Ifx_CSV_HF_CSV_REF_CTL_Bits
{
    __IO Ifx_UReg_32Bit STARTUP:16;             /**< \brief [15:0]  Startup delay time -1 (in reference clock
                                                                    cycles), after enable or DeepSleep wakeup, from
                                                                    reference clock start to monitored clock start.
                                                                    At a minimum (both clocks running): STARTUP >=
                                                                    (PERIOD +3) * FREQ_RATIO - UPPER, with FREQ_RATIO =
                                                                    (Reference frequency / Monitored frequency)
                                                                    On top of that the actual clock startup delay and
                                                                    the margin for accuracy of both clocks must be added. (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [29:16] \internal Reserved */
    __IO Ifx_UReg_32Bit CSV_ACTION:1;           /**< \brief [30:30] Specifies the action taken when an anomaly
                                                                    is detected on the monitored clock.
                                                                    CSV in DeepSleep domain always do a Fault report
                                                                    (which also wakes up the system). (rw)
                                                FAULT         : 0u   Generate a fault
                                                RESET         : 1u   Cause a power reset.
                                                                    This should only be used for clk_hf0. */
    __IO Ifx_UReg_32Bit CSV_EN:1;               /**< \brief [31:31] Enables clock supervision, both frequency and loss.
                                                                    CSV in Active domain: Clock supervision is reset
                                                                    during DeepSleep and Hibernate modes.
                                                                    When enabled it begins operating automatically
                                                                    after a DeepSleep wakeup, but it must be
                                                                    reconfigured after Hibernate wakeup.
                                                                    CSV in DeepSleep domain: Clock supervision is reset
                                                                    during Hibernate mode.
                                                                    It must be reconfigured after Hibernate wakeup.
                                                                    A CSV error detection is reported to the Fault
                                                                    structure, or instead it can generate a power reset. (rw) */
} Ifx_CSV_HF_CSV_REF_CTL_Bits;

/* CSV_HF_CSV_REF_CTL.CSV_ACTION enumerated values */

/** \brief Generate a fault */
#define IFX_CSV_HF_CSV_REF_CTL_CSV_ACTION_FAULT (0u)

/** \brief Cause a power reset. This should only be used for clk_hf0. */
#define IFX_CSV_HF_CSV_REF_CTL_CSV_ACTION_RESET (1u)

/** \brief Clock Supervision Reference Limits */
typedef struct _Ifx_CSV_HF_CSV_REF_LIMIT_Bits
{
    __IO Ifx_UReg_32Bit LOWER:16;               /**< \brief [15:0]  Cycle time lower limit.
                                                                    Set the lower limit -1, in reference clock cycles,
                                                                    before the next monitored clock event is allowed to happen.
                                                                    If a monitored clock event happens before this
                                                                    limit is reached a CSV error is detected.
                                                                    LOWER must be at least 1 less than UPPER.
                                                                    In case the clocks are asynchronous LOWER must be
                                                                    at least 3 less than UPPER. (rw) */
    __IO Ifx_UReg_32Bit UPPER:16;               /**< \brief [31:16] Cycle time upper limit.
                                                                    Set the upper limit -1, in reference clock cycles,
                                                                    before (or same time) the next monitored clock
                                                                    event must happen.
                                                                    If a monitored clock event does not happen before
                                                                    this limit is reached, or does not happen at all
                                                                    (clock loss), a CSV error is detected. (rw) */
} Ifx_CSV_HF_CSV_REF_LIMIT_Bits;

/** \brief Clock Supervision Monitor Control */
typedef struct _Ifx_CSV_HF_CSV_MON_CTL_Bits
{
    __IO Ifx_UReg_32Bit PERIOD:16;              /**< \brief [15:0]  Period time.
                                                                    Set the Period -1, in monitored clock cycles,
                                                                    before the next monitored clock event happens.
                                                                    PERIOD <=  (UPPER+1) / FREQ_RATIO -1, with
                                                                    FREQ_RATIO = (Reference frequency / Monitored
                                                                    frequency)
                                                                    In case the clocks are asynchronous: PERIOD <=
                                                                    UPPER / FREQ_RATIO -1
                                                                    Additionally margin must be added for accuracy of
                                                                    both clocks. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CSV_HF_CSV_MON_CTL_Bits;

/** \brief Clock Supervision Reference Control */
typedef struct _Ifx_CSV_REF_CSV_REF_CTL_Bits
{
    __IO Ifx_UReg_32Bit STARTUP:16;             /**< \brief [15:0]  Startup delay time -1 (in reference clock
                                                                    cycles), after enable or DeepSleep wakeup, from
                                                                    reference clock start to monitored clock start.
                                                                    At a minimum (both clocks running): STARTUP >=
                                                                    (PERIOD +3) * FREQ_RATIO - UPPER, with FREQ_RATIO =
                                                                    (Reference frequency / Monitored frequency)
                                                                    On top of that the actual clock startup delay and
                                                                    the margin for accuracy of both clocks must be added. (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [29:16] \internal Reserved */
    __IO Ifx_UReg_32Bit CSV_ACTION:1;           /**< \brief [30:30] Specifies the action taken when an anomaly
                                                                    is detected on the monitored clock.
                                                                    CSV in DeepSleep domain always do a Fault report
                                                                    (which also wakes up the system). (rw)
                                                FAULT         : 0u   Generate a fault
                                                RESET         : 1u   Cause a power reset.
                                                                    This should only be used for clk_hf0. */
    __IO Ifx_UReg_32Bit CSV_EN:1;               /**< \brief [31:31] Enables clock supervision, both frequency and loss.
                                                                    CSV in Active domain: Clock supervision is reset
                                                                    during DeepSleep and Hibernate modes.
                                                                    When enabled it begins operating automatically
                                                                    after a DeepSleep wakeup, but it must be
                                                                    reconfigured after Hibernate wakeup.
                                                                    CSV in DeepSleep domain: Clock supervision is reset
                                                                    during Hibernate mode.
                                                                    It must be reconfigured after Hibernate wakeup.
                                                                    A CSV error detection is reported to the Fault
                                                                    structure, or instead it can generate a power reset. (rw) */
} Ifx_CSV_REF_CSV_REF_CTL_Bits;

/* CSV_REF_CSV_REF_CTL.CSV_ACTION enumerated values */

/** \brief Generate a fault */
#define IFX_CSV_REF_CSV_REF_CTL_CSV_ACTION_FAULT (0u)

/** \brief Cause a power reset. This should only be used for clk_hf0. */
#define IFX_CSV_REF_CSV_REF_CTL_CSV_ACTION_RESET (1u)

/** \brief Clock Supervision Reference Limits */
typedef struct _Ifx_CSV_REF_CSV_REF_LIMIT_Bits
{
    __IO Ifx_UReg_32Bit LOWER:16;               /**< \brief [15:0]  Cycle time lower limit.
                                                                    Set the lower limit -1, in reference clock cycles,
                                                                    before the next monitored clock event is allowed to happen.
                                                                    If a monitored clock event happens before this
                                                                    limit is reached a CSV error is detected.
                                                                    LOWER must be at least 1 less than UPPER.
                                                                    In case the clocks are asynchronous LOWER must be
                                                                    at least 3 less than UPPER. (rw) */
    __IO Ifx_UReg_32Bit UPPER:16;               /**< \brief [31:16] Cycle time upper limit.
                                                                    Set the upper limit -1, in reference clock cycles,
                                                                    before (or same time) the next monitored clock
                                                                    event must happen.
                                                                    If a monitored clock event does not happen before
                                                                    this limit is reached, or does not happen at all
                                                                    (clock loss), a CSV error is detected. (rw) */
} Ifx_CSV_REF_CSV_REF_LIMIT_Bits;

/** \brief Clock Supervision Monitor Control */
typedef struct _Ifx_CSV_REF_CSV_MON_CTL_Bits
{
    __IO Ifx_UReg_32Bit PERIOD:16;              /**< \brief [15:0]  Period time.
                                                                    Set the Period -1, in monitored clock cycles,
                                                                    before the next monitored clock event happens.
                                                                    PERIOD <=  (UPPER+1) / FREQ_RATIO -1, with
                                                                    FREQ_RATIO = (Reference frequency / Monitored
                                                                    frequency)
                                                                    In case the clocks are asynchronous: PERIOD <=
                                                                    UPPER / FREQ_RATIO -1
                                                                    Additionally margin must be added for accuracy of
                                                                    both clocks. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CSV_REF_CSV_MON_CTL_Bits;

/** \brief Clock Supervision Reference Control */
typedef struct _Ifx_CSV_LF_CSV_REF_CTL_Bits
{
    __IO Ifx_UReg_32Bit STARTUP:8;              /**< \brief [7:0]   Startup delay time -1 (in reference clock
                                                                    cycles), after enable, from reference clock start
                                                                    to monitored clock start.
                                                                    At a minimum (both clocks running): STARTUP >=
                                                                    (PERIOD +3) * FREQ_RATIO - UPPER, with FREQ_RATIO =
                                                                    (Reference frequency / Monitored frequency)
                                                                    On top of that the actual clock startup delay and
                                                                    the margin for accuracy of both clocks must be added. (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [30:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit CSV_EN:1;               /**< \brief [31:31] Enables clock supervision, both frequency and loss.
                                                                    CSV in Active domain: Clock supervision is reset
                                                                    during DeepSleep and Hibernate modes.
                                                                    When enabled it begins operating automatically
                                                                    after a DeepSleep wakeup, but it must be
                                                                    reconfigured after Hibernate wakeup.
                                                                    CSV in DeepSleep domain: Clock supervision is reset
                                                                    during Hibernate mode.
                                                                    It must be reconfigured after Hibernate wakeup.
                                                                    CSV in Backup domain: Clock supervision operates
                                                                    during Hibernate mode, can be configured to wake
                                                                    from Hibernate, and continues operating during reboot.
                                                                    A CSV error detection is reported to the Fault structure. (rw) */
} Ifx_CSV_LF_CSV_REF_CTL_Bits;

/** \brief Clock Supervision Reference Limits */
typedef struct _Ifx_CSV_LF_CSV_REF_LIMIT_Bits
{
    __IO Ifx_UReg_32Bit LOWER:8;                /**< \brief [7:0]   Cycle time lower limit.
                                                                    Set the lower limit -1, in reference clock cycles,
                                                                    before the next monitored clock event is allowed to happen.
                                                                    If a monitored clock event happens before this
                                                                    limit is reached a CSV error is detected.
                                                                    LOWER must be at least 1 less than UPPER.
                                                                    In case the clocks are asynchronous LOWER must be
                                                                    at least 3 less than UPPER. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit UPPER:8;                /**< \brief [23:16] Cycle time upper limit.
                                                                    Set the upper limit -1, in reference clock cycles,
                                                                    before (or same time) the next monitored clock
                                                                    event must happen.
                                                                    If a monitored clock event does not happen before
                                                                    this limit is reached, or does not happen at all
                                                                    (clock loss), a CSV error is detected. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_CSV_LF_CSV_REF_LIMIT_Bits;

/** \brief Clock Supervision Monitor Control */
typedef struct _Ifx_CSV_LF_CSV_MON_CTL_Bits
{
    __IO Ifx_UReg_32Bit PERIOD:8;               /**< \brief [7:0]   Period time.
                                                                    Set the Period -1, in monitored clock cycles,
                                                                    before the next monitored clock event happens.
                                                                    PERIOD <=  (UPPER+1) / FREQ_RATIO -1, with
                                                                    FREQ_RATIO = (Reference frequency / Monitored
                                                                    frequency)
                                                                    In case the clocks are asynchronous: PERIOD <=
                                                                    UPPER / FREQ_RATIO -1
                                                                    Additionally margin must be added for accuracy of
                                                                    both clocks. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CSV_LF_CSV_MON_CTL_Bits;

/** \brief Clock Supervision Reference Control */
typedef struct _Ifx_CSV_ILO_CSV_REF_CTL_Bits
{
    __IO Ifx_UReg_32Bit STARTUP:8;              /**< \brief [7:0]   Startup delay time -1 (in reference clock
                                                                    cycles), after enable, from reference clock start
                                                                    to monitored clock start.
                                                                    At a minimum (both clocks running): STARTUP >=
                                                                    (PERIOD +3) * FREQ_RATIO - UPPER, with FREQ_RATIO =
                                                                    (Reference frequency / Monitored frequency)
                                                                    On top of that the actual clock startup delay and
                                                                    the margin for accuracy of both clocks must be added. (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [30:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit CSV_EN:1;               /**< \brief [31:31] Enables clock supervision, both frequency and loss.
                                                                    CSV in Active domain: Clock supervision is reset
                                                                    during DeepSleep and Hibernate modes.
                                                                    When enabled it begins operating automatically
                                                                    after a DeepSleep wakeup, but it must be
                                                                    reconfigured after Hibernate wakeup.
                                                                    CSV in DeepSleep domain: Clock supervision is reset
                                                                    during Hibernate mode.
                                                                    It must be reconfigured after Hibernate wakeup.
                                                                    CSV in Backup domain: Clock supervision operates
                                                                    during Hibernate mode, can be configured to wake
                                                                    from Hibernate, and continues operating during reboot.
                                                                    A CSV error detection is reported to the Fault structure. (rw) */
} Ifx_CSV_ILO_CSV_REF_CTL_Bits;

/** \brief Clock Supervision Reference Limits */
typedef struct _Ifx_CSV_ILO_CSV_REF_LIMIT_Bits
{
    __IO Ifx_UReg_32Bit LOWER:8;                /**< \brief [7:0]   Cycle time lower limit.
                                                                    Set the lower limit -1, in reference clock cycles,
                                                                    before the next monitored clock event is allowed to happen.
                                                                    If a monitored clock event happens before this
                                                                    limit is reached a CSV error is detected.
                                                                    LOWER must be at least 1 less than UPPER.
                                                                    In case the clocks are asynchronous LOWER must be
                                                                    at least 3 less than UPPER. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit UPPER:8;                /**< \brief [23:16] Cycle time upper limit.
                                                                    Set the upper limit -1, in reference clock cycles,
                                                                    before (or same time) the next monitored clock
                                                                    event must happen.
                                                                    If a monitored clock event does not happen before
                                                                    this limit is reached, or does not happen at all
                                                                    (clock loss), a CSV error is detected. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_CSV_ILO_CSV_REF_LIMIT_Bits;

/** \brief Clock Supervision Monitor Control */
typedef struct _Ifx_CSV_ILO_CSV_MON_CTL_Bits
{
    __IO Ifx_UReg_32Bit PERIOD:8;               /**< \brief [7:0]   Period time.
                                                                    Set the Period -1, in monitored clock cycles,
                                                                    before the next monitored clock event happens.
                                                                    PERIOD <=  (UPPER+1) / FREQ_RATIO -1, with
                                                                    FREQ_RATIO = (Reference frequency / Monitored
                                                                    frequency)
                                                                    In case the clocks are asynchronous: PERIOD <=
                                                                    UPPER / FREQ_RATIO -1
                                                                    Additionally margin must be added for accuracy of
                                                                    both clocks. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CSV_ILO_CSV_MON_CTL_Bits;

/** \brief DPLL_LP Configuration Register */
typedef struct _Ifx_CLK_DPLL_LP_CONFIG_Bits
{
    __IO Ifx_UReg_32Bit FEEDBACK_DIV:8;         /**< \brief [7:0]   Control bits for feedback divider.
                                                                    Set the divide value before enabling the PLL, and
                                                                    do not change it while PLL is enabled.
                                                                    0-15: illegal (undefined behavior)
                                                                    16: divide by 16
                                                                    ...
                                                                    125: divide by 125
                                                                    >125: illegal (undefined behavior) (rw) */
    __IO Ifx_UReg_32Bit REFERENCE_DIV:5;        /**< \brief [12:8]  Control bits for reference divider.
                                                                    Set the divide value before enabling the PLL, and
                                                                    do not change it while PLL is enabled.
                                                                    0: illegal (undefined behavior)
                                                                    1: divide by 1
                                                                    ...
                                                                    16: divide by 16
                                                                    others: illegal (undefined behavior) (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit OUTPUT_DIV:5;           /**< \brief [20:16] Control bits for Output divider.
                                                                    Set the divide value before enabling the PLL, and
                                                                    do not change it while PLL is enabled.
                                                                    0: illegal (undefined behavior)
                                                                    1: divide by 1.
                                                                    Suitable for direct usage as HFCLK source.
                                                                    2: divide by 2.
                                                                    Suitable for direct usage as HFCLK source.
                                                                    ...
                                                                    16: divide by 16.
                                                                    Suitable for direct usage as HFCLK source.
                                                                    >16: illegal (undefined behavior) (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [26:21] \internal Reserved */
    __IO Ifx_UReg_32Bit PLL_DCO_CODE_MULT:1;    /**< \brief [27:27] DCO code coefficient during SAR operation;
                                                                    this trim bit is Fpfd frequency dependent
                                                                    0: multilply by 16, Fpfd <= 8MHZ
                                                                    1: mulitply by 28, Fpfd > 8MHz (rw) */
    __IO Ifx_UReg_32Bit BYPASS_SEL:2;           /**< \brief [29:28] Bypass mux located just after PLL output.
                                                                    This selection is glitch-free and can be changed
                                                                    while the PLL is running.
                                                                    When changing BYPASS_SEL, do not turn off the
                                                                    reference clock or PLL clock for five cycles
                                                                    (whichever is slower). (rw)
                                                AUTO          : 0u   Automatic using lock indicator.
                                                                    When unlocked, automatically selects PLL reference
                                                                    input (bypass mode).
                                                                    When locked, automatically selects PLL output.
                                                                    If ENABLE=0, automatically selects PLL reference input.
                                                LOCKED_OR_NOTHING: 1u   Similar to AUTO, except the clock is gated off when
                                                                    unlocked.
                                                                    This is compatible with clock supervision, because
                                                                    the supervisors allow no clock during startup
                                                                    (until a timeout occurs), and the clock targets the
                                                                    proper frequency whenever it is running.
                                                                    If ENABLE=0, no clock is output.
                                                PLL_BYPASS    : 2u   Select PLL reference input (bypass mode).
                                                                    Ignores lock indicator
                                                PLL_OUT       : 3u   Select PLL output.  Ignores lock indicator.
                                                                    If ENABLE=0, no clock is output. */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [30:30] \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] Master enable for PLL.
                                                                    Setup FEEDBACK_DIV, REFERENCE_DIV, and OUTPUT_DIV
                                                                    at least one cycle before setting ENABLE=1.
                                                                    fOUT = (FEEDBACK_DIV + FRAC_EN*FRAC_DIV/2^24)  *
                                                                    (fREF / REFERENCE_DIV) / (OUTPUT_DIV)
                                                                    0: Block is disabled.
                                                                    When the PLL disables, hardware controls the bypass
                                                                    mux as described in BYPASS_SEL, before disabling
                                                                    the PLL circuit.
                                                                    1: Block is enabled (rw) */
} Ifx_CLK_DPLL_LP_CONFIG_Bits;

/* CLK_DPLL_LP_CONFIG.BYPASS_SEL enumerated values */

/** \brief Automatic using lock indicator.
When unlocked, automatically selects PLL reference input (bypass mode).
When locked, automatically selects PLL output.
If ENABLE=0, automatically selects PLL reference input. */
#define IFX_CLK_DPLL_LP_CONFIG_BYPASS_SEL_AUTO (0u)

/** \brief Similar to AUTO, except the clock is gated off when unlocked.
This is compatible with clock supervision, because the supervisors allow no
clock during startup (until a timeout occurs), and the clock targets the proper
frequency whenever it is running.  If ENABLE=0, no clock is output. */
#define IFX_CLK_DPLL_LP_CONFIG_BYPASS_SEL_LOCKED_OR_NOTHING (1u)

/** \brief Select PLL reference input (bypass mode).  Ignores lock indicator */
#define IFX_CLK_DPLL_LP_CONFIG_BYPASS_SEL_PLL_BYPASS (2u)

/** \brief Select PLL output.  Ignores lock indicator.  If ENABLE=0, no clock is output. */
#define IFX_CLK_DPLL_LP_CONFIG_BYPASS_SEL_PLL_OUT (3u)

/** \brief DPLL_LP Configuration Register 2 */
typedef struct _Ifx_CLK_DPLL_LP_CONFIG2_Bits
{
    __IO Ifx_UReg_32Bit FRAC_DIV:24;            /**< \brief [23:0]  Control bits for fractional divider.
                                                                    This value is interpreted as a fraction of the PFD
                                                                    frequency, i.e. fPFD * (FRAC_DIV/2^24).
                                                                    This field can be dynamically updated within the
                                                                    1000ppm control limit.
                                                                    It takes up to 115 AHB cycles to transfer the
                                                                    setting to the PLL, and writes that occur faster
                                                                    may be silently ignored and require the application
                                                                    to write again after the previous update has finished.
                                                                    Reading the register returns the accepted value.
                                                                    The PLL will start targeting the new value, but it
                                                                    may take significant time (milliseconds) to
                                                                    stabilize at the new average value.
                                                                    Do not change the FRAC_DIV setting while the PLL is
                                                                    initially locking. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [27:24] \internal Reserved */
    __IO Ifx_UReg_32Bit FRAC_DITHER_EN:3;       /**< \brief [30:28] Enables dithering during fractional
                                                                    operation.
                                                                    3'b000: disables dithering;
                                                                    3'b001: enables dithering;
                                                                    others: reserved (rw) */
    __IO Ifx_UReg_32Bit FRAC_EN:1;              /**< \brief [31:31] Enables fractional division mode. (rw) */
} Ifx_CLK_DPLL_LP_CONFIG2_Bits;

/** \brief DPLL_LP Configuration Register 3 */
typedef struct _Ifx_CLK_DPLL_LP_CONFIG3_Bits
{
    __IO Ifx_UReg_32Bit SSCG_DEPTH:10;          /**< \brief [9:0]   Control bits for SSCG modulation depth as a
                                                                    percentage of the non-modulated clock.
                                                                    The following choices are supported, and all others
                                                                    are reserved:
                                                                    10'h029: -0.5 percent (down-spread),
                                                                    10'h052: -1 percent (down-spread),
                                                                    10'h0a4: -2 percent (down-spread),
                                                                    10'h0f6: -3 percent (down-spread) (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit SSCG_RATE:3;            /**< \brief [18:16] Control bits for SSCG modulation rate as a
                                                                    factor of fPFD clock frequency.
                                                                    Audio applications should choose a setting that
                                                                    results in a modulation rate that is greater than
                                                                    20kHz, so fPFD/512 or fPFD/256 is recommended.
                                                                    Note: All modulation rate trims are valid as long
                                                                    as the fPFD/<divide_number> is less than 32KHz,
                                                                    which is the max modulation rate defined at spec.
                                                                    0: Modulation rate = fPFD/4096,
                                                                    1: Modulation rate = fPFD/2048,
                                                                    2: Modulation rate = fPFD/1024,
                                                                    3: Modulation rate = fPFD/512,
                                                                    4: Modulation rate = fPFD/256,
                                                                    5: Modulation rate = pPFD/128,
                                                                    6: Modulation rate = pPFD/744
                                                                    others: reserved (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [23:19] \internal Reserved */
    __IO Ifx_UReg_32Bit SSCG_DITHER_EN:1;       /**< \brief [24:24] Reserved. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [27:25] \internal Reserved */
    __IO Ifx_UReg_32Bit SSCG_MODE:1;            /**< \brief [28:28] Reserved.  Write zero always. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [30:29] \internal Reserved */
    __IO Ifx_UReg_32Bit SSCG_EN:1;              /**< \brief [31:31] Enables spreading mode.
                                                                    When SSCG mode is enabled,
                                                                    DPLL_LP_TEST4.PLL_DIS_FAST_LOCK should be set to 1
                                                                    to disable fast re-lock. (rw) */
} Ifx_CLK_DPLL_LP_CONFIG3_Bits;

/** \brief DPLL_LP Configuration Register 4 */
typedef struct _Ifx_CLK_DPLL_LP_CONFIG4_Bits
{
    __IO Ifx_UReg_32Bit DCO_CODE:11;            /**< \brief [10:0]  Initial DCO code.
                                                                    It is recommended to leave this at the default setting.
                                                                    This setting only has effect in open loop mode.
                                                                    See DPLL BROS regarding test modes. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit ACC_MODE:2;             /**< \brief [17:16] bit 17: Reserved  - always write 0
                                                                    bit 16: see description of
                                                                    DPLL_LP_TRIM_STRUCT_Regs.DPLL_LP_CTL.PLL_FRAC_ORDER (rw) */
    __IO Ifx_UReg_32Bit TDC_MODE:2;             /**< \brief [19:18] 0: TDC crude mode - Active only TDC MSB
                                                                    1: TDC accurate  mode - Active TDC MSB,LSB
                                                                    2: Reserved
                                                                    3: TDC accurate  mode - Active TDC MSB,LSB (clip
                                                                    M3,M2) (rw) */
    __IO Ifx_UReg_32Bit PLL_TG:2;               /**< \brief [21:20] This value is a number of PFD clocks in
                                                                    relation to the DCO count.
                                                                    Can change the number of counts, set by p_div in
                                                                    integer mode, by the values of -1, +1, or +2.
                                                                    0: 0
                                                                    1: -1
                                                                    2: +1
                                                                    3: +2
                                                                    In integer and SSCG mode, PLL_TG must be set to 0.
                                                                    If in fractional mode, PLL_TG must be 0 if
                                                                    frac_ratio <= 0.5 (pll_frac <= 2^23), PLL_TG must
                                                                    be 2 if frac_ratio > 0.5 (pll_frac > 2^23). (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __IO Ifx_UReg_32Bit ACC_CNT_LOCK:1;         /**< \brief [24:24] Control signal for switching to stable
                                                                    filter coefficients (PLL_KP_TRIM/PLL_KI_TRIM)
                                                                    0: PLL_ACC_PHASE_CNT_DONE
                                                                    1: PLL_LOCK (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_CLK_DPLL_LP_CONFIG4_Bits;

/** \brief DPLL_LP Configuration Register 5 */
typedef struct _Ifx_CLK_DPLL_LP_CONFIG5_Bits
{
    __IO Ifx_UReg_32Bit KI_INT:7;               /**< \brief [6:0]   Gain of P/I loop filter integrator path for
                                                                    INT operation.  Gain coefficient is 2^KI, eg.
                                                                    0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit KP_INT:7;               /**< \brief [14:8]  Gain of P/I loop filter integrator path for
                                                                    INT operation.  Gain coefficient is 2^KP, eg.
                                                                    0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit KI_ACC_INT:7;           /**< \brief [22:16] Gain of P/I loop filter integrator path
                                                                    during cold start for INT operation.
                                                                    Gain coefficient is 2^KI, eg. 0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit KP_ACC_INT:7;           /**< \brief [30:24] Gain of P/I loop filter integrator path
                                                                    during cold start for INT operation.
                                                                    Gain coefficient is 2^KP, eg. 0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_CLK_DPLL_LP_CONFIG5_Bits;

/** \brief DPLL_LP Configuration Register 6 */
typedef struct _Ifx_CLK_DPLL_LP_CONFIG6_Bits
{
    __IO Ifx_UReg_32Bit KI_FRACT:7;             /**< \brief [6:0]   Gain of P/I loop filter proportional path
                                                                    for FRACT operation.  Gain coefficient is 2^KI, eg.
                                                                    0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit KP_FRACT:7;             /**< \brief [14:8]  Gain of P/I loop filter proportional path
                                                                    for FRACT operation.  Gain coefficient is 2^KP, eg.
                                                                    0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit KI_ACC_FRACT:7;         /**< \brief [22:16] Gain of P/I loop filter integrator path
                                                                    during cold start for FRACT operation.
                                                                    Gain coefficient is 2^KI, eg. 0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit KP_ACC_FRACT:7;         /**< \brief [30:24] Gain of P/I loop filter integrator path
                                                                    during cold start for FRACT operation.
                                                                    Gain coefficient is 2^KP, eg. 0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_CLK_DPLL_LP_CONFIG6_Bits;

/** \brief DPLL_LP Configuration Register 7 */
typedef struct _Ifx_CLK_DPLL_LP_CONFIG7_Bits
{
    __IO Ifx_UReg_32Bit KI_SSCG:7;              /**< \brief [6:0]   Gain of P/I loop filter proportional path
                                                                    for SSCG operation.  Gain coefficient is 2^KI, eg.
                                                                    0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit KP_SSCG:7;              /**< \brief [14:8]  Gain of P/I loop filter proportional path
                                                                    for SSCG operation.  Gain coefficient is 2^KP, eg.
                                                                    0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit KI_ACC_SSCG:7;          /**< \brief [22:16] Gain of P/I loop filter integrator path
                                                                    during cold start for SSCG operation.
                                                                    Gain coefficient is 2^KI, eg. 0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit KP_ACC_SSCG:7;          /**< \brief [30:24] Gain of P/I loop filter integrator path
                                                                    during cold start for SSCG operation.
                                                                    Gain coefficient is 2^KP, eg. 0=>1, 15=>32768. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_CLK_DPLL_LP_CONFIG7_Bits;

/** \brief DPLL_LP Status Register */
typedef struct _Ifx_CLK_DPLL_LP_STATUS_Bits
{
    __I  Ifx_UReg_32Bit LOCKED:1;               /**< \brief [0:0]   PLL Lock Indicator (r) */
    __IO Ifx_UReg_32Bit UNLOCK_OCCURRED:1;      /**< \brief [1:1]   This bit sets whenever the PLL Lock bit
                                                                    goes low, and stays set until cleared by firmware.
                                                                    Note: When disabling DPLL via register write,
                                                                    UNLOCK_OCCURRED will set.
                                                                    Therefore, after enabling DPLL and DPLL
                                                                    successfully locks, FW should clear UNLOCK_OCCURRED
                                                                    flag to prevent a false positive that would
                                                                    indicate that DPLL erroneously unlocked. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_CLK_DPLL_LP_STATUS_Bits;

/** \brief Trim Register for RAM Type 0 */
typedef struct _Ifx_RAM_TRIM_TRIM_RAM_CTL_Bits
{
    __IO Ifx_UReg_32Bit TRIM:32;                /**< \brief [31:0]  For Synopsys RAMs the bits are defined as follows:
                                                                    [3:0] Read-Write margin control.
                                                                    This is used for setting the Read-Write margin.
                                                                    It programs the sense amplifier differential
                                                                    setting and allows the trade off between speed and
                                                                    robustness.
                                                                    - RM[1:0] values control access time and cycle time
                                                                    of the memory.
                                                                    RM[1:0] = '0' is the slowest possible mode of
                                                                    operation for the memory.
                                                                    This setting is required for VDDMIN operation.
                                                                    - RM[3:2] are factory pins reserved for debug mode
                                                                    and should be set to '0'.
                                                                    [4] RME: Read-Write margin enable control.
                                                                    This selects between the default Read-Write margin
                                                                    setting, and the external RM[3:0] Read-Write margin setting.
                                                                    [7:5] WPULSE: Write Assist Pulse to control pulse
                                                                    width of negative voltage on SRAM bitline.
                                                                    [9:8] RA: Read Assist control for WL under-drive.
                                                                    [14:12] WA: Write assist enable control (Active High).
                                                                    - WA[2:0] Write Assist pins to control negative
                                                                    voltage on SRAM bitline.
                                                                    Recommended default value for LP: WA=4, RA=0,
                                                                    WPULSE=0, RME=1, RM=3
                                                                    (RAM_TRIM_DEFAULT=0x0000_4013, RAM_TRIM_WIDTH=15)
                                                                    Recommended default value for ULP: WA=6, RA=0,
                                                                    WPULSE=0, RME=1, RM=2
                                                                    (RAM_TRIM_DEFAULT=0x0000_6012, RAM_TRIM_WIDTH=15) (rw) */
} Ifx_RAM_TRIM_TRIM_RAM_CTL_Bits;

/** \brief Trim Register for ROM */
typedef struct _Ifx_RAM_TRIM_TRIM_ROM_CTL_Bits
{
    __IO Ifx_UReg_32Bit TRIM:32;                /**< \brief [31:0]  For Synopsys ROMs the bits are defined as follows:
                                                                    [3:0] RM: Read-Write margin control.
                                                                    This is used for setting the Read-Write margin.
                                                                    It programs the sense amplifier differential
                                                                    setting and allows the trade off between speed and
                                                                    robustness.
                                                                    - RM[1:0] values control access time and cycle time
                                                                    of the memory.
                                                                    RM[1:0] = '0' is the slowest possible mode of
                                                                    operation for the memory.
                                                                    This setting is required for VDDMIN operation.
                                                                    - RM[3:2] are factory pins reserved for debug mode
                                                                    and should be set to '0'.
                                                                    [4] RME: Read-Write margin enable control.
                                                                    This selects between the default Read-Write margin
                                                                    setting, and the external pin Read-Write margin setting.
                                                                    Recommended default value for ULP: RME=1, RM=2
                                                                    (ROM_TRIM_DEFAULT=0x0000_0012, ROM_TRIM_WIDTH=5)
                                                                    Recommended default value for LP: RME=1, RM=3
                                                                    (ROM_TRIM_DEFAULT=0x0000_0013, ROM_TRIM_WIDTH=5) (rw) */
} Ifx_RAM_TRIM_TRIM_ROM_CTL_Bits;

/** \brief DPLL LP Trim Register */
typedef struct _Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL_Bits
{
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [3:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit SAR_CYCLE_STOP:4;       /**< \brief [7:4]   Successive Approximation Register (SAR)
                                                                    configuration.  Ignored when SAR_DIS==1.
                                                                    0x1...0xB: Number of cycles until SAR stops.
                                                                    others: illegal
                                                                    Note: For initial lock, default should be left at 0x3.
                                                                    After successful lock with code write = 0, FW
                                                                    should set to 0x1 to improve recovery time for
                                                                    successive locks. (rw) */
    __IO Ifx_UReg_32Bit SAR_DIS:1;              /**< \brief [8:8]   Disable Successive Approximation Register
                                                                    during locking.
                                                                    0: Use SAR.
                                                                    1: Disable SAR. (rw) */
    __IO Ifx_UReg_32Bit PLL_SAR_FSM_EN:1;       /**< \brief [9:9]   SAR FSM enable.
                                                                    Always set to 1 for functional mode.
                                                                    This register was kept in the design (and moved to
                                                                    hidden trim register) to increase coverage on the
                                                                    hard IP, and could be removed once the hard IP
                                                                    input is removed. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [11:10] \internal Reserved */
    __IO Ifx_UReg_32Bit LDO_DCO_TRIM:3;         /**< \brief [14:12] Trim for PLL local regulator for DCO
                                                                    0 0.906V
                                                                    1 0.786V
                                                                    2 0.846V
                                                                    3 0.876V
                                                                    4 0.936V
                                                                    5 0.966V (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit PLL_DCO_SD_SEL:2;       /**< \brief [17:16] 00': disable, '01' first order SigmaDelta
                                                                    enabled;'10' third order SigmaDelta enabled;'11'
                                                                    RSVD (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [18:18] \internal Reserved */
    __IO Ifx_UReg_32Bit LDO_PERI_TRIM:3;        /**< \brief [21:19] pll ldo peripheri voltage trim (scan mode -
                                                                    can be '0' or '1' - not High Z) (rw) */
    __IO Ifx_UReg_32Bit PLL_FRAC_ORDER:1;       /**< \brief [22:22] Order of the delta-sigma modulator used for
                                                                    fractional mode.
                                                                    If DPLL_LP_STRUCT_Regs.CONFIG4.ACC_MODE = 00b:
                                                                    0: 4th order
                                                                    1: 3rd order
                                                                    If DPLL_LP_STRUCT_Regs.CONFIG4.ACC_MODE = 01b:
                                                                    0: 2nd order
                                                                    1: 1st order (rw) */
    __IO Ifx_UReg_32Bit ISOLATE_N:1;            /**< \brief [23:23] Manual isolation control for PLL .
                                                                    This field is ignored when ENABLE_CNT==1.
                                                                    When controlling manually, de-assert >= 3us after ENABLE=1.
                                                                    Assertion can happen in cycle just before ENABLE=0.
                                                                    0: Isolate outputs
                                                                    1: Do not isolate outputs (rw) */
    __IO Ifx_UReg_32Bit ISOLATE_CNT:6;          /**< \brief [29:24] Terminal count for the stabilization
                                                                    counter handles PLL_ISOLATE_N (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [30:30] \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLE_CNT:1;           /**< \brief [31:31] Enable for the PLL hardware sequencer.
                                                                    0: Disables the hardware sequencer.
                                                                    Before enabling the DPLL manually make sure to have
                                                                    DPLL_LP_STRUCT_Regs->CONFIG->BYPASS_SEL at default
                                                                    value to avoid unwanted glitch on clock HF root.
                                                                    When disabling the PLL, first deselect it using
                                                                    .BYPASS_SEL=PLL_REF, wait at least six PLL clock
                                                                    cycles, and then disable it with .ENABLE=0.
                                                                    Before entering DEEPSLEEP, firmware must switch to
                                                                    another clock source and disable the PLL.
                                                                    1: Enables the hardware sequencer.
                                                                    The sequencer handles all PLL enable/disable
                                                                    transitions, including around DEEPSLEEP entry/exit. (rw) */
} Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL_Bits;

/** \brief DPLL LP Trim Register 3 */
typedef struct _Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL3_Bits
{
    __IO Ifx_UReg_32Bit PHASE_ACC_CNT:10;       /**< \brief [9:0]   counter for phase accelerate cycles during
                                                                    PLL wakeup for INT and FRAC modes
                                                                    Optimal settings:
                                                                    4 --> 5 MHz: 127
                                                                    5-->6 MHz: 157
                                                                    6-->7 MHz: 187
                                                                    7-->8 MHz: 217
                                                                    8-->9 MHz: 255
                                                                    9-->10 MHz: 286
                                                                    10-->11 MHz: 317
                                                                    11-->12 MHz: 348
                                                                    12-->13 MHz: 379
                                                                    13-->14 MHz: 410
                                                                    14-->15 MHz: 441
                                                                    15-->16 MHz: 472
                                                                    16 MHz: 	511 (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit PHASE_ACC_CNT_SSCG:10;  /**< \brief [25:16] counter for phase accelerate cycles during
                                                                    PLL wakeup SSCG mode
                                                                    Optimal settings:
                                                                    4 --> 5 MHz: 127
                                                                    5-->6 MHz: 157
                                                                    6-->7 MHz: 187
                                                                    7-->8 MHz: 217
                                                                    8-->9 MHz: 255
                                                                    9-->10 MHz: 286
                                                                    10-->11 MHz: 317
                                                                    11-->12 MHz: 348
                                                                    12-->13 MHz: 379
                                                                    13-->14 MHz: 410
                                                                    14-->15 MHz: 441
                                                                    15-->16 MHz: 472
                                                                    16 MHz: 	511 (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [31:26] \internal Reserved */
} Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL3_Bits;

/** \brief DPLL LP Trim Register 4 */
typedef struct _Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL4_Bits
{
    __IO Ifx_UReg_32Bit LOCK_WAIT_FALL:2;       /**< \brief [1:0]   Wait time from when static phase error is
                                                                    within the lock window until lock signal asserts.
                                                                    0: 0 PFD clocks
                                                                    1: 2 PFD clocks
                                                                    2: 3 PFD clocks
                                                                    3: 4 PFD clocks (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit LOCK_WAIT_RISE:10;      /**< \brief [13:4]  Wait time from when static phase error is
                                                                    within the lock window until lock signal asserts.
                                                                    0: Illegal
                                                                    1: 1 PFD clocks
                                                                    2: 2 PFD clocks
                                                                    ...
                                                                    1023: 1023 PFD clocks
                                                                    Optimal settings
                                                                    f, MHz         With Code Write
                                                                    Without Code Write
                                                                    ---------      ------------------------------------
                                                                    ------------------------------------
                                                                    4-->5                      6 33
                                                                    5-->6                      6 40
                                                                    6-->7                      6 49
                                                                    7-->8                      8 60
                                                                    8-->9                      8 85
                                                                    9-->10                   11 95
                                                                    10-->11                  12 105
                                                                    11-->12                  14 115
                                                                    12-->13                  15 125
                                                                    13-->14                  17 135
                                                                    14-->15                  18 145
                                                                    15-->16                  20 155
                                                                    16                  21 165
                                                                    Notes:
                                                                    1.
                                                                    For initial DPLL locking or when DPLL Fast Lock is
                                                                    disabled (PLL_DIS_FAST_LOCK=1), user must program
                                                                    DPLL_CTL4.LOCK_WAIT_RISE using appropriate value
                                                                    for 'Without Code Write' for corresponding
                                                                    frequency range.
                                                                    2.
                                                                    After initial DPLL locking, when DPLL Fast Lock is
                                                                    enabled (PLL_DIS_FAST_LOCK=0), before DEEPSLEEP
                                                                    entry, FW must poll the DPLL_LP.STATUS.LOCKED bit
                                                                    to acknowledge successful DPLL lock, then must
                                                                    program DPLL_LP_CTL4.LOCK_WAIT_RISE using
                                                                    appropriate value for 'With Code Write' for
                                                                    corresponding frequency range. (rw) */
    __I  Ifx_UReg_32Bit :18;                    /**< \brief [31:14] \internal Reserved */
} Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL4_Bits;

/** \brief DPLL LP Test Register 4 */
typedef struct _Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_TEST4_Bits
{
    __IO Ifx_UReg_32Bit PLL_USER_DCO_CODE:14;   /**< \brief [13:0]  FW can read the code saved by the DPLL
                                                                    before deepsleep.Use PLL_READ_EN to get updated
                                                                    DCO_CODE from the DPLL: To read properly please
                                                                    refer to PLL_USER_DCO_CODE_RD_EN/PLL_READ_EN.
                                                                    Before any read, FW should check first that
                                                                    PLL_READ_EN is 0.
                                                                    To account for Clock Domain Crossings, FW should
                                                                    wait at least 3 CLK_IMO cycles (3*125ns=375ns)
                                                                    between SW write and SW read operation. (rw) */
    __IO Ifx_UReg_32Bit PLL_DIS_FAST_LOCK:1;    /**< \brief [14:14] 0: Enables DPLL Fast Lock
                                                                    1: Disables DPLL Fast Lock
                                                                    When PLL_DIS_FAST_LOCK=0, if DPLL successfully
                                                                    locks prior to a DEEPSLEEP entry:
                                                                    - HW will read the DCO code before DEEPSLEEP entry,
                                                                    then write the DCO code upon DEEPSLEEP exit, to
                                                                    reduce DPLL lock time.
                                                                    - FW must follow the procedure described under
                                                                    DPLL_LP_CTL4.LOCK_WAIT_RISE Notes: 2 (rw) */
    __IO Ifx_UReg_32Bit PLL_READ_EN:1;          /**< \brief [15:15] This bit is a self clear bit.
                                                                    The FW writes 1 to get an updated value in
                                                                    PLL_USER_DCO_CODE.HW will self clear this bit to
                                                                    indicate that the PLL_USER_DCO_CODE be read. (rw) */
    __IO Ifx_UReg_32Bit PHASE_ACC_USER_WRITE_INT:7; /**< \brief [22:16] Reduce KI,KP coefficient during PLL
                                                                    deepsleep wakeup integer. (rw) */
    __IO Ifx_UReg_32Bit PHASE_ACC_USER_WRITE_FRACT:7; /**< \brief [29:23] reduce KI,KP coefficient during PLL
                                                                    deepsleep wakeup fract. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_TEST4_Bits;

/** \brief Multi-Counter Watchdog Sub-counters 0/1 */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_CNTLOW_Bits
{
    __IO Ifx_UReg_32Bit WDT_CTR0:16;            /**< \brief [15:0]  Current value of sub-counter 0 for this MCWDT.
                                                                    Software writes are ignored when the sub-counter is
                                                                    enabled. (rw) */
    __IO Ifx_UReg_32Bit WDT_CTR1:16;            /**< \brief [31:16] Current value of sub-counter 1 for this MCWDT.
                                                                    Software writes are ignored when the sub-counter is
                                                                    enabled (rw) */
} Ifx_MCWDT_STRUCT_MCWDT_CNTLOW_Bits;

/** \brief Multi-Counter Watchdog Sub-counter 2 */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_CNTHIGH_Bits
{
    __IO Ifx_UReg_32Bit WDT_CTR2:32;            /**< \brief [31:0]  Current value of sub-counter 2 for this MCWDT.
                                                                    Software writes are ignored when the sub-counter is
                                                                    enabled (rw) */
} Ifx_MCWDT_STRUCT_MCWDT_CNTHIGH_Bits;

/** \brief Multi-Counter Watchdog Counter Match Register */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_MATCH_Bits
{
    __IO Ifx_UReg_32Bit WDT_MATCH0:16;          /**< \brief [15:0]  Match value for sub-counter 0 of this MCWDT (rw) */
    __IO Ifx_UReg_32Bit WDT_MATCH1:16;          /**< \brief [31:16] Match value for sub-counter 1 of this MCWDT (rw) */
} Ifx_MCWDT_STRUCT_MCWDT_MATCH_Bits;

/** \brief Multi-Counter Watchdog Counter Configuration */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_CONFIG_Bits
{
    __IO Ifx_UReg_32Bit WDT_MODE0:2;            /**< \brief [1:0]   Watchdog Counter Action on Match.
                                                                    Action is taken on the next increment after the
                                                                    values match (WDT_CTR0=WDT_MATCH0). (rw)
                                                NOTHING       : 0u   Do nothing
                                                INT           : 1u   Assert WDT_INTx
                                                RESET         : 2u   Assert WDT Reset
                                                INT_THEN_RESET: 3u   Assert WDT_INTx, assert WDT Reset after 3rd
                                                                    unhandled interrupt */
    __IO Ifx_UReg_32Bit WDT_CLEAR0:1;           /**< \brief [2:2]   Clear Watchdog Counter when WDT_CTR0=WDT_MATCH0.
                                                                    In other words WDT_CTR0 divides LFCLK by
                                                                    (WDT_MATCH0+1).
                                                                    0: Free running counter
                                                                    1: Clear on match.
                                                                    In this mode, the minimum legal setting of WDT_MATCH0 is 1. (rw) */
    __IO Ifx_UReg_32Bit WDT_CASCADE0_1:1;       /**< \brief [3:3]   Cascade Watchdog Counters 0,1.
                                                                    Counter 1 increments the cycle after
                                                                    WDT_CTR0=WDT_MATCH0.
                                                                    0: Independent counters
                                                                    1: Cascaded counters (rw) */
    __IO Ifx_UReg_32Bit WDT_LOWER_MODE0:2;      /**< \brief [5:4]   Watchdog Counter Action on service before
                                                                    lower limit. (rw)
                                                NOTHING       : 0u   Do nothing
                                                INT           : 1u   Assert WDT_INTx
                                                RESET         : 2u   Assert WDT Reset */
    __IO Ifx_UReg_32Bit WDT_CARRY0_1:1;         /**< \brief [6:6]   Carry out behavior that applies when
                                                                    WDT_CASCADE0_1==1.
                                                                    This bit is not used when WDT_CASCADE0_1==0.
                                                                    0: carry out on counter 0 match.
                                                                    1: carry out on counter 0 roll-over. (rw) */
    __IO Ifx_UReg_32Bit WDT_MATCH0_1:1;         /**< \brief [7:7]   Specifies matching behavior when WDT_CASCADE0_1==1.
                                                                    When WDT_CASCADE0_1==0, this bit is not used and
                                                                    match is based on counter 1 alone.
                                                                    0: Match based on counter 1 alone.
                                                                    1: Match based on counter 1 and counter 0 matching
                                                                    simultaneously. (rw) */
    __IO Ifx_UReg_32Bit WDT_MODE1:2;            /**< \brief [9:8]   Watchdog Counter Action on Match.
                                                                    Action is taken on the next increment after the
                                                                    values match (WDT_CTR1=WDT_MATCH1). (rw)
                                                NOTHING       : 0u   Do nothing
                                                INT           : 1u   Assert WDT_INTx
                                                RESET         : 2u   Assert WDT Reset
                                                INT_THEN_RESET: 3u   Assert WDT_INTx, assert WDT Reset after 3rd
                                                                    unhandled interrupt */
    __IO Ifx_UReg_32Bit WDT_CLEAR1:1;           /**< \brief [10:10] Clear Watchdog Counter when WDT_CTR1==WDT_MATCH1.
                                                                    In other words WDT_CTR1 divides LFCLK by
                                                                    (WDT_MATCH1+1).
                                                                    0: Free running counter
                                                                    1: Clear on match.
                                                                    In this mode, the minimum legal setting of WDT_MATCH1 is 1. (rw) */
    __IO Ifx_UReg_32Bit WDT_CASCADE1_2:1;       /**< \brief [11:11] Cascade Watchdog Counters 1,2.
                                                                    Counter 2 increments the cycle after WDT_CTR1=WDT_MATCH1.
                                                                    It is allowed to cascade all three WDT counters.
                                                                    0: Independent counters
                                                                    1: Cascaded counters.
                                                                    When cascading all three counters, WDT_CLEAR1 must be 1. (rw) */
    __IO Ifx_UReg_32Bit WDT_LOWER_MODE1:2;      /**< \brief [13:12] Watchdog Counter Action on service before
                                                                    lower limit. (rw)
                                                NOTHING       : 0u   Do nothing
                                                INT           : 1u   Assert WDT_INTx
                                                RESET         : 2u   Assert WDT Reset */
    __IO Ifx_UReg_32Bit WDT_CARRY1_2:1;         /**< \brief [14:14] Carry out behavior that applies when
                                                                    WDT_CASCADE1_2==1.
                                                                    This bit is not used when WDT_CASCADE1_2==0.
                                                                    0: carry out on counter 1 match.
                                                                    1: carry out on counter 1 roll-over. (rw) */
    __IO Ifx_UReg_32Bit WDT_MATCH1_2:1;         /**< \brief [15:15] Specifies matching behavior when WDT_CASCADE1_2==1.
                                                                    When WDT_CASCADE1_2==0, this bit is not used and
                                                                    match is based on counter 2 alone.
                                                                    0: Match based on counter 2 alone.
                                                                    1: Match based on counter 2 and counter 1 matching
                                                                    simultaneously. (rw) */
    __IO Ifx_UReg_32Bit WDT_MODE2:1;            /**< \brief [16:16] Watchdog Counter 2 Mode. (rw)
                                                NOTHING       : 0u   Free running counter with no interrupt requests
                                                INT           : 1u   Free running counter with interrupt request that
                                                                    occurs one LFCLK cycle after the specified bit in
                                                                    CTR2 toggles (see WDT_BITS2). */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [23:17] \internal Reserved */
    __IO Ifx_UReg_32Bit WDT_BITS2:5;            /**< \brief [28:24] Bit to observe for WDT_INT2:
                                                                    0: Assert after bit0 of WDT_CTR2 toggles (one int
                                                                    every tick)
                                                                    ...
                                                                    31: Assert after bit31 of WDT_CTR2 toggles (one int
                                                                    every 2^31 ticks) (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [31:29] \internal Reserved */
} Ifx_MCWDT_STRUCT_MCWDT_CONFIG_Bits;

/* MCWDT_STRUCT_MCWDT_CONFIG.WDT_MODE0 enumerated values */

/** \brief Do nothing */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_MODE0_NOTHING (0u)

/** \brief Assert WDT_INTx */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_MODE0_INT (1u)

/** \brief Assert WDT Reset */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_MODE0_RESET (2u)

/** \brief Assert WDT_INTx, assert WDT Reset after 3rd unhandled interrupt */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_MODE0_INT_THEN_RESET (3u)

/* MCWDT_STRUCT_MCWDT_CONFIG.WDT_LOWER_MODE0 enumerated values */

/** \brief Do nothing */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_LOWER_MODE0_NOTHING (0u)

/** \brief Assert WDT_INTx */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_LOWER_MODE0_INT (1u)

/** \brief Assert WDT Reset */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_LOWER_MODE0_RESET (2u)

/* MCWDT_STRUCT_MCWDT_CONFIG.WDT_MODE1 enumerated values */

/** \brief Do nothing */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_MODE1_NOTHING (0u)

/** \brief Assert WDT_INTx */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_MODE1_INT (1u)

/** \brief Assert WDT Reset */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_MODE1_RESET (2u)

/** \brief Assert WDT_INTx, assert WDT Reset after 3rd unhandled interrupt */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_MODE1_INT_THEN_RESET (3u)

/* MCWDT_STRUCT_MCWDT_CONFIG.WDT_LOWER_MODE1 enumerated values */

/** \brief Do nothing */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_LOWER_MODE1_NOTHING (0u)

/** \brief Assert WDT_INTx */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_LOWER_MODE1_INT (1u)

/** \brief Assert WDT Reset */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_LOWER_MODE1_RESET (2u)

/* MCWDT_STRUCT_MCWDT_CONFIG.WDT_MODE2 enumerated values */

/** \brief Free running counter with no interrupt requests */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_MODE2_NOTHING (0u)

/** \brief Free running counter with interrupt request that occurs one LFCLK cycle after
the specified bit in CTR2 toggles (see WDT_BITS2). */
#define IFX_MCWDT_STRUCT_MCWDT_CONFIG_WDT_MODE2_INT (1u)

/** \brief Multi-Counter Watchdog Counter Control */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_CTL_Bits
{
    __IO Ifx_UReg_32Bit WDT_ENABLE0:1;          /**< \brief [0:0]   Enable subcounter 0.
                                                                    May take up to 2 LFCLK cycles to take effect.
                                                                    0: Counter is disabled (not clocked)
                                                                    1: Counter is enabled (counting up) (rw) */
    __I  Ifx_UReg_32Bit WDT_ENABLED0:1;         /**< \brief [1:1]   Indicates actual state of counter.
                                                                    May lag WDT_ENABLE0 by up to two LFCLK cycles. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [2:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit WDT_RESET0:1;           /**< \brief [3:3]   Resets counter 0 back to 0000.
                                                                    Hardware will reset this bit after counter was reset.
                                                                    This will take up to one LFCLK cycle to take effect. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit WDT_ENABLE1:1;          /**< \brief [8:8]   Enable subcounter 1.
                                                                    May take up to 2 LFCLK cycles to take effect.
                                                                    0: Counter is disabled (not clocked)
                                                                    1: Counter is enabled (counting up) (rw) */
    __I  Ifx_UReg_32Bit WDT_ENABLED1:1;         /**< \brief [9:9]   Indicates actual state of counter.
                                                                    May lag WDT_ENABLE1 by up to two LFCLK cycles. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [10:10] \internal Reserved */
    __IO Ifx_UReg_32Bit WDT_RESET1:1;           /**< \brief [11:11] Resets counter 1 back to 0000.
                                                                    Hardware will reset this bit after counter was reset.
                                                                    This will take up to one LFCLK cycle to take effect. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __IO Ifx_UReg_32Bit WDT_ENABLE2:1;          /**< \brief [16:16] Enable subcounter 2.
                                                                    May take up to 2 LFCLK cycles to take effect.
                                                                    0: Counter is disabled (not clocked)
                                                                    1: Counter is enabled (counting up) (rw) */
    __I  Ifx_UReg_32Bit WDT_ENABLED2:1;         /**< \brief [17:17] Indicates actual state of counter.
                                                                    May lag WDT_ENABLE2 by up to two LFCLK cycles. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [18:18] \internal Reserved */
    __IO Ifx_UReg_32Bit WDT_RESET2:1;           /**< \brief [19:19] Resets counter 2 back to 0000.
                                                                    Hardware will reset this bit after counter was reset.
                                                                    This will take up to one LFCLK cycle to take effect. (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_MCWDT_STRUCT_MCWDT_CTL_Bits;

/** \brief Multi-Counter Watchdog Counter Interrupt Register */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_INTR_Bits
{
    __IO Ifx_UReg_32Bit MCWDT_INT0:1;           /**< \brief [0:0]   MCWDT Interrupt Request for sub-counter 0.
                                                                    This bit is set by hardware as configured by this
                                                                    registers.  This bit must be cleared by firmware.
                                                                    Clearing this bit also prevents Reset from
                                                                    happening when WDT_MODE0=3. (rw) */
    __IO Ifx_UReg_32Bit MCWDT_INT1:1;           /**< \brief [1:1]   MCWDT Interrupt Request for sub-counter 1.
                                                                    This bit is set by hardware as configured by this
                                                                    registers.  This bit must be cleared by firmware.
                                                                    Clearing this bit also prevents Reset from
                                                                    happening when WDT_MODE1=3. (rw) */
    __IO Ifx_UReg_32Bit MCWDT_INT2:1;           /**< \brief [2:2]   MCWDT Interrupt Request for sub-counter 2.
                                                                    This bit is set by hardware as configured by this
                                                                    registers.  This bit must be cleared by firmware.
                                                                    Clearing this bit also prevents Reset from
                                                                    happening when WDT_MODE2=3. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_MCWDT_STRUCT_MCWDT_INTR_Bits;

/** \brief Multi-Counter Watchdog Counter Interrupt Set Register */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit MCWDT_INT0:1;           /**< \brief [0:0]   Set interrupt for MCWDT_INT0 (rw) */
    __IO Ifx_UReg_32Bit MCWDT_INT1:1;           /**< \brief [1:1]   Set interrupt for MCWDT_INT1 (rw) */
    __IO Ifx_UReg_32Bit MCWDT_INT2:1;           /**< \brief [2:2]   Set interrupt for MCWDT_INT2 (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_MCWDT_STRUCT_MCWDT_INTR_SET_Bits;

/** \brief Multi-Counter Watchdog Counter Interrupt Mask Register */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit MCWDT_INT0:1;           /**< \brief [0:0]   Mask for sub-counter 0.
                                                                    This controls if the interrupt is forwarded to the CPU.
                                                                    0: Interrupt is masked (not forwarded).
                                                                    1: Interrupt is forwarded. (rw) */
    __IO Ifx_UReg_32Bit MCWDT_INT1:1;           /**< \brief [1:1]   Mask for sub-counter 1.
                                                                    This controls if the interrupt is forwarded to the CPU.
                                                                    0: Interrupt is masked (not forwarded).
                                                                    1: Interrupt is forwarded. (rw) */
    __IO Ifx_UReg_32Bit MCWDT_INT2:1;           /**< \brief [2:2]   Mask for sub-counter 2.
                                                                    This controls if the interrupt is forwarded to the CPU.
                                                                    0: Interrupt is masked (not forwarded).
                                                                    1: Interrupt is forwarded. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_MCWDT_STRUCT_MCWDT_INTR_MASK_Bits;

/** \brief Multi-Counter Watchdog Counter Interrupt Masked Register */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit MCWDT_INT0:1;           /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit MCWDT_INT1:1;           /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit MCWDT_INT2:1;           /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_MCWDT_STRUCT_MCWDT_INTR_MASKED_Bits;

/** \brief Multi-Counter Watchdog Counter Lock Register */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_LOCK_Bits
{
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [29:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit MCWDT_LOCK:2;           /**< \brief [31:30] Prohibits writing control and configuration
                                                                    registers related to this MCWDT when not equal 0
                                                                    (as specified in the other register descriptions).
                                                                    Requires at least two different writes to unlock.
                                                                    Note that this field is 2 bits to force multiple
                                                                    writes only.  Each MCWDT has a separate local lock.
                                                                    LFCLK settings are locked by the global WDT_LOCK
                                                                    register, and this register has no effect on that. (rw)
                                                NO_CHG        : 0u   No effect
                                                CLR0          : 1u   Clears bit 0
                                                CLR1          : 2u   Clears bit 1
                                                SET01         : 3u   Sets both bits 0 and 1 */
} Ifx_MCWDT_STRUCT_MCWDT_LOCK_Bits;

/* MCWDT_STRUCT_MCWDT_LOCK.MCWDT_LOCK enumerated values */

/** \brief No effect */
#define IFX_MCWDT_STRUCT_MCWDT_LOCK_MCWDT_LOCK_NO_CHG (0u)

/** \brief Clears bit 0 */
#define IFX_MCWDT_STRUCT_MCWDT_LOCK_MCWDT_LOCK_CLR0 (1u)

/** \brief Clears bit 1 */
#define IFX_MCWDT_STRUCT_MCWDT_LOCK_MCWDT_LOCK_CLR1 (2u)

/** \brief Sets both bits 0 and 1 */
#define IFX_MCWDT_STRUCT_MCWDT_LOCK_MCWDT_LOCK_SET01 (3u)

/** \brief Multi-Counter Watchdog Counter Lower Limit Register */
typedef struct _Ifx_MCWDT_STRUCT_MCWDT_LOWER_LIMIT_Bits
{
    __IO Ifx_UReg_32Bit WDT_LOWER_LIMIT0:16;    /**< \brief [15:0]  Lower limit for sub-counter 0 of this MCWDT (rw) */
    __IO Ifx_UReg_32Bit WDT_LOWER_LIMIT1:16;    /**< \brief [31:16] Lower limit for sub-counter 1 of this MCWDT (rw) */
} Ifx_MCWDT_STRUCT_MCWDT_LOWER_LIMIT_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SRSS_Registers_union
 * \{   */
/** \brief High Voltage / Low Voltage Detector (HVLVD) Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PWR_LVD_STATUS_Bits B;                  /**< \brief Bitfield access */
} Ifx_PWR_LVD_STATUS;

/** \brief Clock DSI Select Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_DSI_SELECT_Bits B;                  /**< \brief Bitfield access */
} Ifx_CLK_DSI_SELECT;

/** \brief Fast Clock Output Select Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_OUTPUT_FAST_Bits B;                 /**< \brief Bitfield access */
} Ifx_CLK_OUTPUT_FAST;

/** \brief Slow Clock Output Select Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_OUTPUT_SLOW_Bits B;                 /**< \brief Bitfield access */
} Ifx_CLK_OUTPUT_SLOW;

/** \brief Clock Calibration Counter 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_CAL_CNT1_Bits B;                    /**< \brief Bitfield access */
} Ifx_CLK_CAL_CNT1;

/** \brief Clock Calibration Counter 2 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_CAL_CNT2_Bits B;                    /**< \brief Bitfield access */
} Ifx_CLK_CAL_CNT2;

/** \brief SRSS Interrupt Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SRSS_INTR_Bits B;                       /**< \brief Bitfield access */
} Ifx_SRSS_INTR;

/** \brief SRSS Interrupt Set Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SRSS_INTR_SET_Bits B;                   /**< \brief Bitfield access */
} Ifx_SRSS_INTR_SET;

/** \brief SRSS Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SRSS_INTR_MASK_Bits B;                  /**< \brief Bitfield access */
} Ifx_SRSS_INTR_MASK;

/** \brief SRSS Interrupt Masked Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SRSS_INTR_MASKED_Bits B;                /**< \brief Bitfield access */
} Ifx_SRSS_INTR_MASKED;

/** \brief SRSS Additional Interrupt Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SRSS_AINTR_Bits B;                      /**< \brief Bitfield access */
} Ifx_SRSS_AINTR;

/** \brief SRSS Additional Interrupt Set Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SRSS_AINTR_SET_Bits B;                  /**< \brief Bitfield access */
} Ifx_SRSS_AINTR_SET;

/** \brief SRSS Additional Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SRSS_AINTR_MASK_Bits B;                 /**< \brief Bitfield access */
} Ifx_SRSS_AINTR_MASK;

/** \brief SRSS Additional Interrupt Masked Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SRSS_AINTR_MASKED_Bits B;               /**< \brief Bitfield access */
} Ifx_SRSS_AINTR_MASKED;

/** \brief Debug Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BOOT_DLM_CTL_Bits B;                    /**< \brief Bitfield access */
} Ifx_BOOT_DLM_CTL;

/** \brief Debug Control Register 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BOOT_DLM_CTL2_Bits B;                   /**< \brief Bitfield access */
} Ifx_BOOT_DLM_CTL2;

/** \brief Debug Status Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BOOT_DLM_STATUS_Bits B;                 /**< \brief Bitfield access */
} Ifx_BOOT_DLM_STATUS;

/** \brief Soft Reset Trigger Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RES_SOFT_CTL_Bits B;                    /**< \brief Bitfield access */
} Ifx_RES_SOFT_CTL;

/** \brief Boot Execution Status Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BOOT_STATUS_Bits B;                     /**< \brief Bitfield access */
} Ifx_BOOT_STATUS;

/** \brief Warm Boot Entry Address */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BOOT_ENTRY_Bits B;                      /**< \brief Bitfield access */
} Ifx_BOOT_ENTRY;

/** \brief Hibernate Wakeup Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PWR_HIB_WAKE_CTL_Bits B;                /**< \brief Bitfield access */
} Ifx_PWR_HIB_WAKE_CTL;

/** \brief Hibernate Wakeup Polarity Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PWR_HIB_WAKE_CTL2_Bits B;               /**< \brief Bitfield access */
} Ifx_PWR_HIB_WAKE_CTL2;

/** \brief Hibernate Wakeup Cause Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PWR_HIB_WAKE_CAUSE_Bits B;              /**< \brief Bitfield access */
} Ifx_PWR_HIB_WAKE_CAUSE;

/** \brief Power Mode Control */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PWR_CTL_Bits B;                         /**< \brief Bitfield access */
} Ifx_PWR_CTL;

/** \brief Power Mode Control 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PWR_CTL2_Bits B;                        /**< \brief Bitfield access */
} Ifx_PWR_CTL2;

/** \brief HIBERNATE Mode Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PWR_HIBERNATE_Bits B;                   /**< \brief Bitfield access */
} Ifx_PWR_HIBERNATE;

/** \brief High Voltage / Low Voltage Detector (HVLVD) Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PWR_LVD_CTL_Bits B;                     /**< \brief Bitfield access */
} Ifx_PWR_LVD_CTL;

/** \brief Clock Path Select Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_PATH_SELECT_Bits B;                 /**< \brief Bitfield access */
} Ifx_CLK_PATH_SELECT;

/** \brief Clock Root Select Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_ROOT_SELECT_Bits B;                 /**< \brief Bitfield access */
} Ifx_CLK_ROOT_SELECT;

/** \brief Clock Root Direct Select Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_DIRECT_SELECT_Bits B;               /**< \brief Bitfield access */
} Ifx_CLK_DIRECT_SELECT;

/** \brief Clock selection register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_SELECT_Bits B;                      /**< \brief Bitfield access */
} Ifx_CLK_SELECT;

/** \brief IMO Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_IMO_CONFIG_Bits B;                  /**< \brief Bitfield access */
} Ifx_CLK_IMO_CONFIG;

/** \brief ECO Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_ECO_CONFIG_Bits B;                  /**< \brief Bitfield access */
} Ifx_CLK_ECO_CONFIG;

/** \brief ECO Prescaler Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_ECO_PRESCALE_Bits B;                /**< \brief Bitfield access */
} Ifx_CLK_ECO_PRESCALE;

/** \brief ECO Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_ECO_STATUS_Bits B;                  /**< \brief Bitfield access */
} Ifx_CLK_ECO_STATUS;

/** \brief FLL Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_FLL_CONFIG_Bits B;                  /**< \brief Bitfield access */
} Ifx_CLK_FLL_CONFIG;

/** \brief FLL Configuration Register 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_FLL_CONFIG2_Bits B;                 /**< \brief Bitfield access */
} Ifx_CLK_FLL_CONFIG2;

/** \brief FLL Configuration Register 3 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_FLL_CONFIG3_Bits B;                 /**< \brief Bitfield access */
} Ifx_CLK_FLL_CONFIG3;

/** \brief FLL Configuration Register 4 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_FLL_CONFIG4_Bits B;                 /**< \brief Bitfield access */
} Ifx_CLK_FLL_CONFIG4;

/** \brief FLL Status Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_FLL_STATUS_Bits B;                  /**< \brief Bitfield access */
} Ifx_CLK_FLL_STATUS;

/** \brief ECO Configuration Register 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_ECO_CONFIG2_Bits B;                 /**< \brief Bitfield access */
} Ifx_CLK_ECO_CONFIG2;

/** \brief ILO Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_ILO_CONFIG_Bits B;                  /**< \brief Bitfield access */
} Ifx_CLK_ILO_CONFIG;

/** \brief ILO Trim Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_TRIM_ILO_CTL_Bits B;                /**< \brief Bitfield access */
} Ifx_CLK_TRIM_ILO_CTL;

/** \brief Medium Frequency Clock Select Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_MF_SELECT_Bits B;                   /**< \brief Bitfield access */
} Ifx_CLK_MF_SELECT;

/** \brief MFO Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_MFO_CONFIG_Bits B;                  /**< \brief Bitfield access */
} Ifx_CLK_MFO_CONFIG;

/** \brief IHO Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_IHO_CONFIG_Bits B;                  /**< \brief Bitfield access */
} Ifx_CLK_IHO_CONFIG;

/** \brief Select CSV Reference clock for Active domain */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_REF_SEL_Bits B;                     /**< \brief Bitfield access */
} Ifx_CSV_REF_SEL;

/** \brief Reset Cause Observation Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RES_CAUSE_Bits B;                       /**< \brief Bitfield access */
} Ifx_RES_CAUSE;

/** \brief Reset Cause Observation Register 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RES_CAUSE2_Bits B;                      /**< \brief Bitfield access */
} Ifx_RES_CAUSE2;

/** \brief Programmable XRES Control Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RES_PXRES_CTL_Bits B;                   /**< \brief Bitfield access */
} Ifx_RES_PXRES_CTL;

/** \brief SECURE TEST and FIRMWARE TEST Key control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TST_XRES_SECURE_Bits B;                 /**< \brief Bitfield access */
} Ifx_TST_XRES_SECURE;

/** \brief Power System Trim Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PWR_TRIM_PWRSYS_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_PWR_TRIM_PWRSYS_CTL;

/** \brief Power System Trim Register 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PWR_TRIM_PWRSYS_CTL2_Bits B;            /**< \brief Bitfield access */
} Ifx_PWR_TRIM_PWRSYS_CTL2;

/** \brief ECO Trim Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_TRIM_ECO_CTL_Bits B;                /**< \brief Bitfield access */
} Ifx_CLK_TRIM_ECO_CTL;

/** \brief Watchdog Counter Control Register (Type A) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_WDT_CTL_Bits B;                         /**< \brief Bitfield access */
} Ifx_WDT_CTL;

/** \brief Watchdog Counter Count Register (Type A) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_WDT_CNT_Bits B;                         /**< \brief Bitfield access */
} Ifx_WDT_CNT;

/** \brief Watchdog Counter Match Register (Type A) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_WDT_MATCH_Bits B;                       /**< \brief Bitfield access */
} Ifx_WDT_MATCH;

/** \brief Watchdog Counter Match Register 2 (Type A) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_WDT_MATCH2_Bits B;                      /**< \brief Bitfield access */
} Ifx_WDT_MATCH2;

/** \brief Clock Supervision Reference Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_HF_CSV_REF_CTL_Bits B;              /**< \brief Bitfield access */
} Ifx_CSV_HF_CSV_REF_CTL;

/** \brief Clock Supervision Reference Limits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_HF_CSV_REF_LIMIT_Bits B;            /**< \brief Bitfield access */
} Ifx_CSV_HF_CSV_REF_LIMIT;

/** \brief Clock Supervision Monitor Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_HF_CSV_MON_CTL_Bits B;              /**< \brief Bitfield access */
} Ifx_CSV_HF_CSV_MON_CTL;

/** \brief Clock Supervision Reference Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_REF_CSV_REF_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_CSV_REF_CSV_REF_CTL;

/** \brief Clock Supervision Reference Limits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_REF_CSV_REF_LIMIT_Bits B;           /**< \brief Bitfield access */
} Ifx_CSV_REF_CSV_REF_LIMIT;

/** \brief Clock Supervision Monitor Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_REF_CSV_MON_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_CSV_REF_CSV_MON_CTL;

/** \brief Clock Supervision Reference Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_LF_CSV_REF_CTL_Bits B;              /**< \brief Bitfield access */
} Ifx_CSV_LF_CSV_REF_CTL;

/** \brief Clock Supervision Reference Limits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_LF_CSV_REF_LIMIT_Bits B;            /**< \brief Bitfield access */
} Ifx_CSV_LF_CSV_REF_LIMIT;

/** \brief Clock Supervision Monitor Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_LF_CSV_MON_CTL_Bits B;              /**< \brief Bitfield access */
} Ifx_CSV_LF_CSV_MON_CTL;

/** \brief Clock Supervision Reference Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_ILO_CSV_REF_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_CSV_ILO_CSV_REF_CTL;

/** \brief Clock Supervision Reference Limits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_ILO_CSV_REF_LIMIT_Bits B;           /**< \brief Bitfield access */
} Ifx_CSV_ILO_CSV_REF_LIMIT;

/** \brief Clock Supervision Monitor Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CSV_ILO_CSV_MON_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_CSV_ILO_CSV_MON_CTL;

/** \brief DPLL_LP Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_DPLL_LP_CONFIG_Bits B;              /**< \brief Bitfield access */
} Ifx_CLK_DPLL_LP_CONFIG;

/** \brief DPLL_LP Configuration Register 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_DPLL_LP_CONFIG2_Bits B;             /**< \brief Bitfield access */
} Ifx_CLK_DPLL_LP_CONFIG2;

/** \brief DPLL_LP Configuration Register 3 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_DPLL_LP_CONFIG3_Bits B;             /**< \brief Bitfield access */
} Ifx_CLK_DPLL_LP_CONFIG3;

/** \brief DPLL_LP Configuration Register 4 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_DPLL_LP_CONFIG4_Bits B;             /**< \brief Bitfield access */
} Ifx_CLK_DPLL_LP_CONFIG4;

/** \brief DPLL_LP Configuration Register 5 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_DPLL_LP_CONFIG5_Bits B;             /**< \brief Bitfield access */
} Ifx_CLK_DPLL_LP_CONFIG5;

/** \brief DPLL_LP Configuration Register 6 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_DPLL_LP_CONFIG6_Bits B;             /**< \brief Bitfield access */
} Ifx_CLK_DPLL_LP_CONFIG6;

/** \brief DPLL_LP Configuration Register 7 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_DPLL_LP_CONFIG7_Bits B;             /**< \brief Bitfield access */
} Ifx_CLK_DPLL_LP_CONFIG7;

/** \brief DPLL_LP Status Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_DPLL_LP_STATUS_Bits B;              /**< \brief Bitfield access */
} Ifx_CLK_DPLL_LP_STATUS;

/** \brief Trim Register for RAM Type 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAM_TRIM_TRIM_RAM_CTL_Bits B;           /**< \brief Bitfield access */
} Ifx_RAM_TRIM_TRIM_RAM_CTL;

/** \brief Trim Register for ROM */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAM_TRIM_TRIM_ROM_CTL_Bits B;           /**< \brief Bitfield access */
} Ifx_RAM_TRIM_TRIM_ROM_CTL;

/** \brief DPLL LP Trim Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL_Bits B;    /**< \brief Bitfield access */
} Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL;

/** \brief DPLL LP Trim Register 3 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL3_Bits B;   /**< \brief Bitfield access */
} Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL3;

/** \brief DPLL LP Trim Register 4 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL4_Bits B;   /**< \brief Bitfield access */
} Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL4;

/** \brief DPLL LP Test Register 4 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_TEST4_Bits B;  /**< \brief Bitfield access */
} Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_TEST4;

/** \brief Multi-Counter Watchdog Sub-counters 0/1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_CNTLOW_Bits B;       /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_CNTLOW;

/** \brief Multi-Counter Watchdog Sub-counter 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_CNTHIGH_Bits B;      /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_CNTHIGH;

/** \brief Multi-Counter Watchdog Counter Match Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_MATCH_Bits B;        /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_MATCH;

/** \brief Multi-Counter Watchdog Counter Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_CONFIG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_CONFIG;

/** \brief Multi-Counter Watchdog Counter Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_CTL_Bits B;          /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_CTL;

/** \brief Multi-Counter Watchdog Counter Interrupt Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_INTR_Bits B;         /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_INTR;

/** \brief Multi-Counter Watchdog Counter Interrupt Set Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_INTR_SET_Bits B;     /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_INTR_SET;

/** \brief Multi-Counter Watchdog Counter Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_INTR_MASK_Bits B;    /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_INTR_MASK;

/** \brief Multi-Counter Watchdog Counter Interrupt Masked Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_INTR_MASKED_Bits B;  /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_INTR_MASKED;

/** \brief Multi-Counter Watchdog Counter Lock Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_LOCK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_LOCK;

/** \brief Multi-Counter Watchdog Counter Lower Limit Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MCWDT_STRUCT_MCWDT_LOWER_LIMIT_Bits B;  /**< \brief Bitfield access */
} Ifx_MCWDT_STRUCT_MCWDT_LOWER_LIMIT;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CSV_HF_CSV_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief CSV object */
typedef volatile struct _Ifx_CSV_HF_CSV
{
       __IO Ifx_CSV_HF_CSV_REF_CTL              REF_CTL;                /**< \brief 0, Clock Supervision Reference Control*/
       __IO Ifx_CSV_HF_CSV_REF_LIMIT            REF_LIMIT;              /**< \brief 4, Clock Supervision Reference Limits*/
       __IO Ifx_CSV_HF_CSV_MON_CTL              MON_CTL;                /**< \brief 8, Clock Supervision Monitor Control*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
} Ifx_CSV_HF_CSV;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CSV_HF_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CSV_HF object */
typedef volatile struct _Ifx_CSV_HF
{
       __IO Ifx_CSV_HF_CSV                      CSV[16];                /**< \brief 0, Active domain Clock Supervisor (CSV) registers*/
} Ifx_CSV_HF;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CSV_REF_CSV_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief CSV object */
typedef volatile struct _Ifx_CSV_REF_CSV
{
       __IO Ifx_CSV_REF_CSV_REF_CTL             REF_CTL;                /**< \brief 0, Clock Supervision Reference Control*/
       __IO Ifx_CSV_REF_CSV_REF_LIMIT           REF_LIMIT;              /**< \brief 4, Clock Supervision Reference Limits*/
       __IO Ifx_CSV_REF_CSV_MON_CTL             MON_CTL;                /**< \brief 8, Clock Supervision Monitor Control*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
} Ifx_CSV_REF_CSV;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CSV_REF_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CSV_REF object */
typedef volatile struct _Ifx_CSV_REF
{
       __IO Ifx_CSV_REF_CSV                     CSV;                    /**< \brief 0, Active domain Clock Supervisor (CSV) registers for CSV Reference clock*/
} Ifx_CSV_REF;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CSV_LF_CSV_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief CSV object */
typedef volatile struct _Ifx_CSV_LF_CSV
{
       __IO Ifx_CSV_LF_CSV_REF_CTL              REF_CTL;                /**< \brief 0, Clock Supervision Reference Control*/
       __IO Ifx_CSV_LF_CSV_REF_LIMIT            REF_LIMIT;              /**< \brief 4, Clock Supervision Reference Limits*/
       __IO Ifx_CSV_LF_CSV_MON_CTL              MON_CTL;                /**< \brief 8, Clock Supervision Monitor Control*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
} Ifx_CSV_LF_CSV;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CSV_LF_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CSV_LF object */
typedef volatile struct _Ifx_CSV_LF
{
       __IO Ifx_CSV_LF_CSV                      CSV;                    /**< \brief 0, LF clock Clock Supervisor registers*/
} Ifx_CSV_LF;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CSV_ILO_CSV_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief CSV object */
typedef volatile struct _Ifx_CSV_ILO_CSV
{
       __IO Ifx_CSV_ILO_CSV_REF_CTL             REF_CTL;                /**< \brief 0, Clock Supervision Reference Control*/
       __IO Ifx_CSV_ILO_CSV_REF_LIMIT           REF_LIMIT;              /**< \brief 4, Clock Supervision Reference Limits*/
       __IO Ifx_CSV_ILO_CSV_MON_CTL             MON_CTL;                /**< \brief 8, Clock Supervision Monitor Control*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
} Ifx_CSV_ILO_CSV;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CSV_ILO_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CSV_ILO object */
typedef volatile struct _Ifx_CSV_ILO
{
       __IO Ifx_CSV_ILO_CSV                     CSV;                    /**< \brief 0, HVILO clock DeepSleep domain Clock Supervisor registers*/
} Ifx_CSV_ILO;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CLK_DPLL_LP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CLK_DPLL_LP object */
typedef volatile struct _Ifx_CLK_DPLL_LP
{
       __IO Ifx_CLK_DPLL_LP_CONFIG              CONFIG;                 /**< \brief 0, DPLL_LP Configuration Register*/
       __IO Ifx_CLK_DPLL_LP_CONFIG2             CONFIG2;                /**< \brief 4, DPLL_LP Configuration Register 2*/
       __IO Ifx_CLK_DPLL_LP_CONFIG3             CONFIG3;                /**< \brief 8, DPLL_LP Configuration Register 3*/
       __IO Ifx_CLK_DPLL_LP_CONFIG4             CONFIG4;                /**< \brief C, DPLL_LP Configuration Register 4*/
       __IO Ifx_CLK_DPLL_LP_CONFIG5             CONFIG5;                /**< \brief 10, DPLL_LP Configuration Register 5*/
       __IO Ifx_CLK_DPLL_LP_CONFIG6             CONFIG6;                /**< \brief 14, DPLL_LP Configuration Register 6*/
       __IO Ifx_CLK_DPLL_LP_CONFIG7             CONFIG7;                /**< \brief 18, DPLL_LP Configuration Register 7*/
       __IO Ifx_CLK_DPLL_LP_STATUS              STATUS;                 /**< \brief 1C, DPLL_LP Status Register*/
} Ifx_CLK_DPLL_LP;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_RAM_TRIM_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief RAM_TRIM object */
typedef volatile struct _Ifx_RAM_TRIM
{
       __IO Ifx_RAM_TRIM_TRIM_RAM_CTL           TRIM_RAM_CTL;           /**< \brief 0, Trim Register for RAM Type 0*/
       __IO Ifx_RAM_TRIM_TRIM_ROM_CTL           TRIM_ROM_CTL;           /**< \brief 4, Trim Register for ROM*/
} Ifx_RAM_TRIM;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CLK_TRIM_DPLL_LP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CLK_TRIM_DPLL_LP object */
typedef volatile struct _Ifx_CLK_TRIM_DPLL_LP
{
       __IO Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL    DPLL_LP_CTL;            /**< \brief 0, DPLL LP Trim Register*/
       __I  Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, */
       __IO Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL3   DPLL_LP_CTL3;           /**< \brief 8, DPLL LP Trim Register 3*/
       __IO Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL4   DPLL_LP_CTL4;           /**< \brief C, DPLL LP Trim Register 4*/
       __I  Ifx_UReg_8Bit                       reserved_10[12];        /**< \brief 10, */
       __IO Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_TEST4  DPLL_LP_TEST4;          /**< \brief 1C, DPLL LP Test Register 4*/
} Ifx_CLK_TRIM_DPLL_LP;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MCWDT_STRUCT_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MCWDT_STRUCT object */
typedef volatile struct _Ifx_MCWDT_STRUCT
{
       __I  Ifx_UReg_8Bit                       reserved_0[4];          /**< \brief 0, */
       __IO Ifx_MCWDT_STRUCT_MCWDT_CNTLOW       MCWDT_CNTLOW;           /**< \brief 4, Multi-Counter Watchdog Sub-counters 0/1*/
       __IO Ifx_MCWDT_STRUCT_MCWDT_CNTHIGH      MCWDT_CNTHIGH;          /**< \brief 8, Multi-Counter Watchdog Sub-counter 2*/
       __IO Ifx_MCWDT_STRUCT_MCWDT_MATCH        MCWDT_MATCH;            /**< \brief C, Multi-Counter Watchdog Counter Match Register*/
       __IO Ifx_MCWDT_STRUCT_MCWDT_CONFIG       MCWDT_CONFIG;           /**< \brief 10, Multi-Counter Watchdog Counter Configuration*/
       __IO Ifx_MCWDT_STRUCT_MCWDT_CTL          MCWDT_CTL;              /**< \brief 14, Multi-Counter Watchdog Counter Control*/
       __IO Ifx_MCWDT_STRUCT_MCWDT_INTR         MCWDT_INTR;             /**< \brief 18, Multi-Counter Watchdog Counter Interrupt Register*/
       __IO Ifx_MCWDT_STRUCT_MCWDT_INTR_SET     MCWDT_INTR_SET;         /**< \brief 1C, Multi-Counter Watchdog Counter Interrupt Set Register*/
       __IO Ifx_MCWDT_STRUCT_MCWDT_INTR_MASK    MCWDT_INTR_MASK;        /**< \brief 20, Multi-Counter Watchdog Counter Interrupt Mask Register*/
       __I  Ifx_MCWDT_STRUCT_MCWDT_INTR_MASKED  MCWDT_INTR_MASKED;      /**< \brief 24, Multi-Counter Watchdog Counter Interrupt Masked Register*/
       __IO Ifx_MCWDT_STRUCT_MCWDT_LOCK         MCWDT_LOCK;             /**< \brief 28, Multi-Counter Watchdog Counter Lock Register*/
       __IO Ifx_MCWDT_STRUCT_MCWDT_LOWER_LIMIT  MCWDT_LOWER_LIMIT;      /**< \brief 2C, Multi-Counter Watchdog Counter Lower Limit Register*/
       __I  Ifx_UReg_8Bit                       reserved_30[16];        /**< \brief 30, */
} Ifx_MCWDT_STRUCT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SRSS_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief SRSS object */
typedef volatile struct _Ifx_SRSS
{
       __I  Ifx_UReg_8Bit                       reserved_0[64];         /**< \brief 0, */
       __I  Ifx_PWR_LVD_STATUS                  PWR_LVD_STATUS;         /**< \brief 40, High Voltage / Low Voltage Detector (HVLVD) Status Register*/
       __I  Ifx_UReg_8Bit                       reserved_44[188];       /**< \brief 44, */
       __IO Ifx_CLK_DSI_SELECT                  CLK_DSI_SELECT[16];     /**< \brief 100, Clock DSI Select Register*/
       __IO Ifx_CLK_OUTPUT_FAST                 CLK_OUTPUT_FAST;        /**< \brief 140, Fast Clock Output Select Register*/
       __IO Ifx_CLK_OUTPUT_SLOW                 CLK_OUTPUT_SLOW;        /**< \brief 144, Slow Clock Output Select Register*/
       __IO Ifx_CLK_CAL_CNT1                    CLK_CAL_CNT1;           /**< \brief 148, Clock Calibration Counter 1*/
       __I  Ifx_CLK_CAL_CNT2                    CLK_CAL_CNT2;           /**< \brief 14C, Clock Calibration Counter 2*/
       __I  Ifx_UReg_8Bit                       reserved_150[176];      /**< \brief 150, */
       __IO Ifx_SRSS_INTR                       SRSS_INTR;              /**< \brief 200, SRSS Interrupt Register*/
       __IO Ifx_SRSS_INTR_SET                   SRSS_INTR_SET;          /**< \brief 204, SRSS Interrupt Set Register*/
       __IO Ifx_SRSS_INTR_MASK                  SRSS_INTR_MASK;         /**< \brief 208, SRSS Interrupt Mask Register*/
       __I  Ifx_SRSS_INTR_MASKED                SRSS_INTR_MASKED;       /**< \brief 20C, SRSS Interrupt Masked Register*/
       __I  Ifx_UReg_8Bit                       reserved_210[240];      /**< \brief 210, */
       __IO Ifx_SRSS_AINTR                      SRSS_AINTR;             /**< \brief 300, SRSS Additional Interrupt Register*/
       __IO Ifx_SRSS_AINTR_SET                  SRSS_AINTR_SET;         /**< \brief 304, SRSS Additional Interrupt Set Register*/
       __IO Ifx_SRSS_AINTR_MASK                 SRSS_AINTR_MASK;        /**< \brief 308, SRSS Additional Interrupt Mask Register*/
       __I  Ifx_SRSS_AINTR_MASKED               SRSS_AINTR_MASKED;      /**< \brief 30C, SRSS Additional Interrupt Masked Register*/
       __I  Ifx_UReg_8Bit                       reserved_310[244];      /**< \brief 310, */
       __IO Ifx_BOOT_DLM_CTL                    BOOT_DLM_CTL;           /**< \brief 404, Debug Control Register*/
       __IO Ifx_BOOT_DLM_CTL2                   BOOT_DLM_CTL2;          /**< \brief 408, Debug Control Register 2*/
       __IO Ifx_BOOT_DLM_STATUS                 BOOT_DLM_STATUS;        /**< \brief 40C, Debug Status Register*/
       __IO Ifx_RES_SOFT_CTL                    RES_SOFT_CTL;           /**< \brief 410, Soft Reset Trigger Register*/
       __I  Ifx_UReg_8Bit                       reserved_414[4];        /**< \brief 414, */
       __IO Ifx_BOOT_STATUS                     BOOT_STATUS;            /**< \brief 418, Boot Execution Status Register*/
       __I  Ifx_UReg_8Bit                       reserved_41C[20];       /**< \brief 41C, */
       __IO Ifx_BOOT_ENTRY                      BOOT_ENTRY;             /**< \brief 430, Warm Boot Entry Address*/
       __I  Ifx_UReg_8Bit                       reserved_434[1132];     /**< \brief 434, */
       __IO Ifx_PWR_HIB_WAKE_CTL                PWR_HIB_WAKE_CTL;       /**< \brief 8A0, Hibernate Wakeup Mask Register*/
       __IO Ifx_PWR_HIB_WAKE_CTL2               PWR_HIB_WAKE_CTL2;      /**< \brief 8A4, Hibernate Wakeup Polarity Register*/
       __I  Ifx_UReg_8Bit                       reserved_8A8[4];        /**< \brief 8A8, */
       __IO Ifx_PWR_HIB_WAKE_CAUSE              PWR_HIB_WAKE_CAUSE;     /**< \brief 8AC, Hibernate Wakeup Cause Register*/
       __I  Ifx_UReg_8Bit                       reserved_8B0[1872];     /**< \brief 8B0, */
       __I  Ifx_PWR_CTL                         PWR_CTL;                /**< \brief 1000, Power Mode Control*/
       __IO Ifx_PWR_CTL2                        PWR_CTL2;               /**< \brief 1004, Power Mode Control 2*/
       __IO Ifx_PWR_HIBERNATE                   PWR_HIBERNATE;          /**< \brief 1008, HIBERNATE Mode Register*/
       __I  Ifx_UReg_8Bit                       reserved_100C[20];      /**< \brief 100C, */
       __IO Ifx_PWR_LVD_CTL                     PWR_LVD_CTL;            /**< \brief 1020, High Voltage / Low Voltage Detector (HVLVD) Configuration Register*/
       __I  Ifx_UReg_8Bit                       reserved_1024[476];     /**< \brief 1024, */
       __IO Ifx_CLK_PATH_SELECT                 CLK_PATH_SELECT[16];    /**< \brief 1200, Clock Path Select Register*/
       __IO Ifx_CLK_ROOT_SELECT                 CLK_ROOT_SELECT[16];    /**< \brief 1240, Clock Root Select Register*/
       __IO Ifx_CLK_DIRECT_SELECT               CLK_DIRECT_SELECT[16];  /**< \brief 1280, Clock Root Direct Select Register*/
       __I  Ifx_UReg_8Bit                       reserved_12C0[320];     /**< \brief 12C0, */
       __IO Ifx_CSV_HF                          CSV_HF_STRUCT;          /**< \brief 1400, Clock Supervisor (CSV) registers for Root clocks*/
       __IO Ifx_CLK_SELECT                      CLK_SELECT;             /**< \brief 1500, Clock selection register*/
       __I  Ifx_UReg_8Bit                       reserved_1504[20];      /**< \brief 1504, */
       __IO Ifx_CLK_IMO_CONFIG                  CLK_IMO_CONFIG;         /**< \brief 1518, IMO Configuration*/
       __IO Ifx_CLK_ECO_CONFIG                  CLK_ECO_CONFIG;         /**< \brief 151C, ECO Configuration Register*/
       __IO Ifx_CLK_ECO_PRESCALE                CLK_ECO_PRESCALE;       /**< \brief 1520, ECO Prescaler Configuration Register*/
       __I  Ifx_CLK_ECO_STATUS                  CLK_ECO_STATUS;         /**< \brief 1524, ECO Status Register*/
       __I  Ifx_UReg_8Bit                       reserved_1528[8];       /**< \brief 1528, */
       __IO Ifx_CLK_FLL_CONFIG                  CLK_FLL_CONFIG;         /**< \brief 1530, FLL Configuration Register*/
       __IO Ifx_CLK_FLL_CONFIG2                 CLK_FLL_CONFIG2;        /**< \brief 1534, FLL Configuration Register 2*/
       __IO Ifx_CLK_FLL_CONFIG3                 CLK_FLL_CONFIG3;        /**< \brief 1538, FLL Configuration Register 3*/
       __IO Ifx_CLK_FLL_CONFIG4                 CLK_FLL_CONFIG4;        /**< \brief 153C, FLL Configuration Register 4*/
       __IO Ifx_CLK_FLL_STATUS                  CLK_FLL_STATUS;         /**< \brief 1540, FLL Status Register*/
       __IO Ifx_CLK_ECO_CONFIG2                 CLK_ECO_CONFIG2;        /**< \brief 1544, ECO Configuration Register 2*/
       __IO Ifx_CLK_ILO_CONFIG                  CLK_ILO_CONFIG;         /**< \brief 1548, ILO Configuration*/
       __IO Ifx_CLK_TRIM_ILO_CTL                CLK_TRIM_ILO_CTL;       /**< \brief 154C, ILO Trim Register*/
       __I  Ifx_UReg_8Bit                       reserved_1550[4];       /**< \brief 1550, */
       __IO Ifx_CLK_MF_SELECT                   CLK_MF_SELECT;          /**< \brief 1554, Medium Frequency Clock Select Register*/
       __IO Ifx_CLK_MFO_CONFIG                  CLK_MFO_CONFIG;         /**< \brief 1558, MFO Configuration Register*/
       __I  Ifx_UReg_8Bit                       reserved_155C[4];       /**< \brief 155C, */
       __IO Ifx_CLK_IHO_CONFIG                  CLK_IHO_CONFIG;         /**< \brief 1560, IHO Configuration Register*/
       __I  Ifx_UReg_8Bit                       reserved_1564[412];     /**< \brief 1564, */
       __IO Ifx_CSV_REF_SEL                     CSV_REF_SEL;            /**< \brief 1700, Select CSV Reference clock for Active domain*/
       __I  Ifx_UReg_8Bit                       reserved_1704[12];      /**< \brief 1704, */
       __IO Ifx_CSV_REF                         CSV_REF_STRUCT;         /**< \brief 1710, CSV registers for the CSV Reference clock*/
       __IO Ifx_CSV_LF                          CSV_LF_STRUCT;          /**< \brief 1720, CSV registers for LF clock*/
       __IO Ifx_CSV_ILO                         CSV_ILO_STRUCT;         /**< \brief 1730, CSV registers for ILO clock*/
       __I  Ifx_UReg_8Bit                       reserved_1740[192];     /**< \brief 1740, */
       __IO Ifx_RES_CAUSE                       RES_CAUSE;              /**< \brief 1800, Reset Cause Observation Register*/
       __IO Ifx_RES_CAUSE2                      RES_CAUSE2;             /**< \brief 1804, Reset Cause Observation Register 2*/
       __I  Ifx_UReg_8Bit                       reserved_1808[12];      /**< \brief 1808, */
       __O  Ifx_RES_PXRES_CTL                   RES_PXRES_CTL;          /**< \brief 1814, Programmable XRES Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_1818[488];     /**< \brief 1818, */
       __IO Ifx_CLK_DPLL_LP                     CLK_DPLL_LP[15];        /**< \brief 1A00, DPLL LP Configuration Register*/
       __I  Ifx_UReg_8Bit                       reserved_1BE0[1140];    /**< \brief 1BE0, */
       __IO Ifx_TST_XRES_SECURE                 TST_XRES_SECURE;        /**< \brief 2054, SECURE TEST and FIRMWARE TEST Key control register*/
       __I  Ifx_UReg_8Bit                       reserved_2058[136];     /**< \brief 2058, */
       __IO Ifx_PWR_TRIM_PWRSYS_CTL             PWR_TRIM_PWRSYS_CTL;    /**< \brief 20E0, Power System Trim Register*/
       __IO Ifx_PWR_TRIM_PWRSYS_CTL2            PWR_TRIM_PWRSYS_CTL2;   /**< \brief 20E4, Power System Trim Register 2*/
       __I  Ifx_UReg_8Bit                       reserved_20E8[3892];    /**< \brief 20E8, */
       __IO Ifx_CLK_TRIM_ECO_CTL                CLK_TRIM_ECO_CTL;       /**< \brief 301C, ECO Trim Register*/
       __I  Ifx_UReg_8Bit                       reserved_3020[4064];    /**< \brief 3020, */
       __IO Ifx_RAM_TRIM                        RAM_TRIM_STRUCT;        /**< \brief 4000, SRAM Trim registers*/
       __I  Ifx_UReg_8Bit                       reserved_4008[504];     /**< \brief 4008, */
       __IO Ifx_CLK_TRIM_DPLL_LP                CLK_TRIM_DPLL_LP[15];   /**< \brief 4200, DPLL LP Trims*/
       __I  Ifx_UReg_8Bit                       reserved_43E0[31776];   /**< \brief 43E0, */
       __IO Ifx_WDT_CTL                         WDT_CTL;                /**< \brief C000, Watchdog Counter Control Register (Type A)*/
       __IO Ifx_WDT_CNT                         WDT_CNT;                /**< \brief C004, Watchdog Counter Count Register (Type A)*/
       __IO Ifx_WDT_MATCH                       WDT_MATCH;              /**< \brief C008, Watchdog Counter Match Register (Type A)*/
       __IO Ifx_WDT_MATCH2                      WDT_MATCH2;             /**< \brief C00C, Watchdog Counter Match Register 2 (Type A)*/
       __I  Ifx_UReg_8Bit                       reserved_C010[4080];    /**< \brief C010, */
       __IO Ifx_MCWDT_STRUCT                    MCWDT_STRUCT[4];        /**< \brief D000, Multi-Counter Watchdog Timer (Type A)*/
       __I  Ifx_UReg_8Bit                       reserved_D100[12032];   /**< \brief D100, */
} Ifx_SRSS;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXSRSS_REGDEF_H_ */
