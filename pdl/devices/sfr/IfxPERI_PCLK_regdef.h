/***************************************************************************//**
* \file IfxPERI_PCLK_regdef.h
*
* \brief
* PERI_PCLK Registers
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
* \defgroup IfxSfr_PERI_PCLK_Registers PERI_PCLK Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_PERI_PCLK_Registers_Bitfields Bitfields
* \ingroup IfxSfr_PERI_PCLK_Registers
*
* \defgroup IfxSfr_PERI_PCLK_Registers_union Register unions
* \ingroup IfxSfr_PERI_PCLK_Registers
*
* \defgroup IfxSfr_PERI_PCLK_Registers_struct Memory map
* \ingroup IfxSfr_PERI_PCLK_Registers
*
*******************************************************************************/

#ifndef _IFXPERI_PCLK_REGDEF_H_
#define _IFXPERI_PCLK_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_PERI_PCLK_Registers_Bitfields
 * \{  */
/** \brief Divider command */
typedef struct _Ifx_PERI_PCLK_GR_DIV_CMD_Bits
{
    __IO Ifx_UReg_32Bit DIV_SEL:8;              /**< \brief [7:0]   (TYPE_SEL, DIV_SEL) specifies the divider
                                                                    on which the command (DISABLE/ENABLE) is performed.

                                                                    If DIV_SEL is '255' and TYPE_SEL is '3'
                                                                    (default/reset value), no divider is specified and
                                                                    no clock signal(s) are generated. (rw) */
    __IO Ifx_UReg_32Bit TYPE_SEL:2;             /**< \brief [9:8]   Specifies the divider type of the divider
                                                                    on which the command is performed:
                                                                    0: 8.0 (integer) clock dividers.
                                                                    1: 16.0 (integer) clock dividers.
                                                                    2: 16.5 (fractional) clock dividers.
                                                                    3: 24.5 (fractional) clock dividers. (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit PA_DIV_SEL:8;           /**< \brief [23:16] (PA_TYPE_SEL, PA_DIV_SEL) specifies the
                                                                    divider to which phase alignment is performed for
                                                                    the clock enable command.
                                                                    Any enabled divider can be used as reference.
                                                                    This allows all dividers to be aligned with each
                                                                    other, even when they are enabled at different times.

                                                                    If PA_DIV_SEL is '255' and PA_TYPE_SEL is '3',
                                                                    'clk_pclk_root[i]' is used as reference. (rw) */
    __IO Ifx_UReg_32Bit PA_TYPE_SEL:2;          /**< \brief [25:24] Specifies the divider type of the divider
                                                                    to which phase alignment is performed for the clock
                                                                    enable command:
                                                                    0: 8.0 (integer) clock dividers.
                                                                    1: 16.0 (integer) clock dividers.
                                                                    2: 16.5 (fractional) clock dividers.
                                                                    3: 24.5 (fractional) clock dividers. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [29:26] \internal Reserved */
    __IO Ifx_UReg_32Bit DISABLE:1;              /**< \brief [30:30] Clock divider disable command (mutually
                                                                    exclusive with ENABLE).
                                                                    SW sets this field to '1' and HW sets this field to '0'.

                                                                    The DIV_SEL and TYPE_SEL fields specify which
                                                                    divider is to be disabled.

                                                                    The HW sets the DISABLE field to '0' immediately
                                                                    and the HW sets the DIV_XXX_CTL.EN field of the
                                                                    divider to '0' immediately. (rw) */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] Clock divider enable command (mutually
                                                                    exclusive with DISABLE).
                                                                    Typically, SW sets this field to '1' to enable a
                                                                    divider and HW sets this field to '0' to indicate
                                                                    that divider enabling has completed.
                                                                    When a divider is enabled, its integer and
                                                                    fractional (if present) counters are initialized to '0'.
                                                                    If a divider is to be re-enabled using different
                                                                    integer and fractional divider values, the SW
                                                                    should follow these steps:
                                                                    0: Disable the divider using the DIV_CMD.DISABLE field.
                                                                    1: Configure the divider's DIV_XXX_CTL register.
                                                                    2: Enable the divider using the DIV_CMD_ENABLE field.

                                                                    The DIV_SEL and TYPE_SEL fields specify which
                                                                    divider is to be enabled.
                                                                    The enabled divider may be phase aligned to either
                                                                    'clk_pclk_root[i]' (typical usage) or to ANY
                                                                    enabled divider.

                                                                    The PA_DIV_SEL and PA_TYPE_SEL fields specify the
                                                                    reference divider.

                                                                    The HW sets the ENABLE field to '0' when the
                                                                    enabling is performed and the HW set the
                                                                    DIV_XXX_CTL.EN field of the divider to '1' when the
                                                                    enabling is performed.
                                                                    Note that enabling with phase alignment to a low
                                                                    frequency divider takes time. E.g.
                                                                    To align to a divider that generates a clock of
                                                                    'clk_pclk_root[i]'/n (with n being the integer
                                                                    divider value INT_DIV+1), up to n cycles may be
                                                                    required to perform alignment.
                                                                    Phase alignment to 'clk_pclk_root[i]' takes affect
                                                                    immediately.
                                                                    SW can set this field to '0' during phase alignment
                                                                    to abort the enabling process. (rw) */
} Ifx_PERI_PCLK_GR_DIV_CMD_Bits;

/** \brief Clock control */
typedef struct _Ifx_PERI_PCLK_GR_CLOCK_CTL_Bits
{
    __IO Ifx_UReg_32Bit DIV_SEL:8;              /**< \brief [7:0]   Specifies one of the dividers of the
                                                                    divider type specified by TYPE_SEL.

                                                                    If DIV_SEL is '255' and TYPE_SEL is '3'
                                                                    (default/reset value), no divider is specified and
                                                                    no clock control signal(s) are generated.

                                                                    When transitioning a clock between two out-of-phase
                                                                    dividers, spurious clock control signals may be
                                                                    generated for one 'clk_pclk_root[i]' cycle during
                                                                    this transition.
                                                                    These clock control signals may cause a single
                                                                    clock period that is smaller than any of the two
                                                                    divider periods.
                                                                    To prevent these spurious clock signals, the clock
                                                                    multiplexer can be disconnected (DIV_SEL is '255'
                                                                    and TYPE_SEL is '3') for a transition time that is
                                                                    larger than the smaller of the two divider periods. (rw) */
    __IO Ifx_UReg_32Bit TYPE_SEL:2;             /**< \brief [9:8]   Specifies divider type:
                                                                    0: 8.0 (integer) clock dividers.
                                                                    1: 16.0 (integer) clock dividers.
                                                                    2: 16.5 (fractional) clock dividers.
                                                                    3: 24.5 (fractional) clock dividers. (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PERI_PCLK_GR_CLOCK_CTL_Bits;

/** \brief Divider control (for 8.0 divider) */
typedef struct _Ifx_PERI_PCLK_GR_DIV_8_CTL_Bits
{
    __I  Ifx_UReg_32Bit EN:1;                   /**< \brief [0:0]   Divider enabled.
                                                                    HW sets this field to '1' as a result of an ENABLE command.
                                                                    HW sets this field to '0' as a result on a DISABLE command.

                                                                    Note that this field is retained.
                                                                    As a result, the divider does NOT have to be
                                                                    re-enabled after transitioning from DeepSleep to
                                                                    Active power mode. (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [7:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit INT8_DIV:8;             /**< \brief [15:8]  Integer division by (1+INT8_DIV).
                                                                    Allows for integer divisions in the range [1, 256].
                                                                    Note: this type of divider does NOT allow for a
                                                                    fractional division.

                                                                    For the generation of a divided clock, the integer
                                                                    division range is restricted to [2, 256].

                                                                    For the generation of a 50/50 percent duty cycle
                                                                    digital divided clock, the integer division range
                                                                    is restricted to even numbers in the range [2, 256].
                                                                    The generation of a 50/50  percent duty cycle
                                                                    analog divided clock has no restrictions.

                                                                    Note that this field is retained.
                                                                    However, the counter that is used to implement the
                                                                    division is not and will be initialized by HW to
                                                                    '0' when transitioning from DeepSleep to Active power mode. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PERI_PCLK_GR_DIV_8_CTL_Bits;

/** \brief Divider control (for 16.0 divider) */
typedef struct _Ifx_PERI_PCLK_GR_DIV_16_CTL_Bits
{
    __I  Ifx_UReg_32Bit EN:1;                   /**< \brief [0:0]   Divider enabled.
                                                                    HW sets this field to '1' as a result of an ENABLE command.
                                                                    HW sets this field to '0' as a result on a DISABLE command.

                                                                    Note that this field is retained.
                                                                    As a result, the divider does NOT have to be
                                                                    re-enabled after transitioning from DeepSleep to
                                                                    Active power mode. (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [7:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit INT16_DIV:16;           /**< \brief [23:8]  Integer division by (1+INT16_DIV).
                                                                    Allows for integer divisions in the range [1, 65,536].
                                                                    Note: this type of divider does NOT allow for a
                                                                    fractional division.

                                                                    For the generation of a divided clock, the integer
                                                                    division range is restricted to [2, 65,536].

                                                                    For the generation of a 50/50 percent duty cycle
                                                                    digital divided clock, the integer division range
                                                                    is restricted to even numbers in the range [2, 65,536].
                                                                    The generation of a 50/50  percent duty cycle
                                                                    analog divided clock has no restrictions.

                                                                    Note that this field is retained.
                                                                    However, the counter that is used to implement the
                                                                    division is not and will be initialized by HW to
                                                                    '0' when transitioning from DeepSleep to Active power mode. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PERI_PCLK_GR_DIV_16_CTL_Bits;

/** \brief Divider control (for 16.5 divider) */
typedef struct _Ifx_PERI_PCLK_GR_DIV_16_5_CTL_Bits
{
    __I  Ifx_UReg_32Bit EN:1;                   /**< \brief [0:0]   Divider enabled.
                                                                    HW sets this field to '1' as a result of an ENABLE command.
                                                                    HW sets this field to '0' as a result on a DISABLE command.

                                                                    Note that this field is retained.
                                                                    As a result, the divider does NOT have to be
                                                                    re-enabled after transitioning from DeepSleep to
                                                                    Active power mode. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [2:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit FRAC5_DIV:5;            /**< \brief [7:3]   Fractional division by (FRAC5_DIV/32).
                                                                    Allows for fractional divisions in the range [0, 31/32].
                                                                    Note that fractional division results in clock
                                                                    jitter as some clock periods may be 1
                                                                    'clk_pclk_root[i]' cycle longer than other clock periods.

                                                                    Note that this field is retained.
                                                                    However, the counter that is used to implement the
                                                                    division is not and will be initialized by HW to
                                                                    '0' when transitioning from DeepSleep to Active power mode. (rw) */
    __IO Ifx_UReg_32Bit INT16_DIV:16;           /**< \brief [23:8]  Integer division by (1+INT16_DIV).
                                                                    Allows for integer divisions in the range [1, 65,536].
                                                                    Note: combined with fractional division, this
                                                                    divider type allows for a division in the range [1,
                                                                    65,536 31/32] in 1/32 increments.

                                                                    For the generation of a divided clock, the division
                                                                    range is restricted to [2, 65,536 31/32].

                                                                    For the generation of a 50/50 percent duty cycle
                                                                    divided clock, the  division range is restricted to
                                                                    [2, 65,536].

                                                                    Note that this field is retained.
                                                                    However, the counter that is used to implement the
                                                                    division is not and will be initialized by HW to
                                                                    '0' when transitioning from DeepSleep to Active power mode. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PERI_PCLK_GR_DIV_16_5_CTL_Bits;

/** \brief Divider control (for 24.5 divider) */
typedef struct _Ifx_PERI_PCLK_GR_DIV_24_5_CTL_Bits
{
    __I  Ifx_UReg_32Bit EN:1;                   /**< \brief [0:0]   Divider enabled.
                                                                    HW sets this field to '1' as a result of an ENABLE command.
                                                                    HW sets this field to '0' as a result on a DISABLE command.

                                                                    Note that this field is retained.
                                                                    As a result, the divider does NOT have to be
                                                                    re-enabled after transitioning from DeepSleep to
                                                                    Active power mode. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [2:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit FRAC5_DIV:5;            /**< \brief [7:3]   Fractional division by (FRAC5_DIV/32).
                                                                    Allows for fractional divisions in the range [0, 31/32].
                                                                    Note that fractional division results in clock
                                                                    jitter as some clock periods may be 1
                                                                    'clk_pclk_root[i]' cycle longer than other clock periods.

                                                                    Note that this field is retained.
                                                                    However, the counter that is used to implement the
                                                                    division is not and will be initialized by HW to
                                                                    '0' when transitioning from DeepSleep to Active power mode. (rw) */
    __IO Ifx_UReg_32Bit INT24_DIV:24;           /**< \brief [31:8]  Integer division by (1+INT24_DIV).
                                                                    Allows for integer divisions in the range [1, 16,777,216].
                                                                    Note: combined with fractional division, this
                                                                    divider type allows for a division in the range [1,
                                                                    16,777,216 31/32] in 1/32 increments.

                                                                    For the generation of a divided clock, the integer
                                                                    division range is restricted to [2, 16,777,216 31/32].

                                                                    For the generation of a 50/50 percent duty cycle
                                                                    divided clock, the  division range is restricted to
                                                                    [2, 16,777,216].

                                                                    Note that this field is retained.
                                                                    However, the counter that is used to implement the
                                                                    division is not and will be initialized by HW to
                                                                    '0' when transitioning from DeepSleep to Active power mode. (rw) */
} Ifx_PERI_PCLK_GR_DIV_24_5_CTL_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PERI_PCLK_Registers_union
 * \{   */
/** \brief Divider command */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_PCLK_GR_DIV_CMD_Bits B;            /**< \brief Bitfield access */
} Ifx_PERI_PCLK_GR_DIV_CMD;

/** \brief Clock control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_PCLK_GR_CLOCK_CTL_Bits B;          /**< \brief Bitfield access */
} Ifx_PERI_PCLK_GR_CLOCK_CTL;

/** \brief Divider control (for 8.0 divider) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_PCLK_GR_DIV_8_CTL_Bits B;          /**< \brief Bitfield access */
} Ifx_PERI_PCLK_GR_DIV_8_CTL;

/** \brief Divider control (for 16.0 divider) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_PCLK_GR_DIV_16_CTL_Bits B;         /**< \brief Bitfield access */
} Ifx_PERI_PCLK_GR_DIV_16_CTL;

/** \brief Divider control (for 16.5 divider) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_PCLK_GR_DIV_16_5_CTL_Bits B;       /**< \brief Bitfield access */
} Ifx_PERI_PCLK_GR_DIV_16_5_CTL;

/** \brief Divider control (for 24.5 divider) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_PCLK_GR_DIV_24_5_CTL_Bits B;       /**< \brief Bitfield access */
} Ifx_PERI_PCLK_GR_DIV_24_5_CTL;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PERI_PCLK_GR_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief GR object */
typedef volatile struct _Ifx_PERI_PCLK_GR
{
       __IO Ifx_PERI_PCLK_GR_DIV_CMD            DIV_CMD;                /**< \brief 0, Divider command*/
       __I  Ifx_UReg_8Bit                       reserved_4[3068];       /**< \brief 4, */
       __IO Ifx_PERI_PCLK_GR_CLOCK_CTL          CLOCK_CTL[256];         /**< \brief C00, Clock control*/
       __IO Ifx_PERI_PCLK_GR_DIV_8_CTL          DIV_8_CTL[256];         /**< \brief 1000, Divider control (for 8.0 divider)*/
       __IO Ifx_PERI_PCLK_GR_DIV_16_CTL         DIV_16_CTL[256];        /**< \brief 1400, Divider control (for 16.0 divider)*/
       __IO Ifx_PERI_PCLK_GR_DIV_16_5_CTL       DIV_16_5_CTL[256];      /**< \brief 1800, Divider control (for 16.5 divider)*/
       __IO Ifx_PERI_PCLK_GR_DIV_24_5_CTL       DIV_24_5_CTL[255];      /**< \brief 1C00, Divider control (for 24.5 divider)*/
       __I  Ifx_UReg_8Bit                       reserved_1FFC[4];       /**< \brief 1FFC, */
} Ifx_PERI_PCLK_GR;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PERI_PCLK_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief PERI_PCLK object */
typedef volatile struct _Ifx_PERI_PCLK
{
       __IO Ifx_PERI_PCLK_GR                    GR[16];                 /**< \brief 0, PERI clock domains*/
} Ifx_PERI_PCLK;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPERI_PCLK_REGDEF_H_ */
