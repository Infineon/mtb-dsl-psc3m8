/***************************************************************************//**
* \file IfxPERI_regdef.h
*
* \brief
* PERI Registers
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
* \defgroup IfxSfr_PERI_Registers PERI Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_PERI_Registers_Bitfields Bitfields
* \ingroup IfxSfr_PERI_Registers
*
* \defgroup IfxSfr_PERI_Registers_union Register unions
* \ingroup IfxSfr_PERI_Registers
*
* \defgroup IfxSfr_PERI_Registers_struct Memory map
* \ingroup IfxSfr_PERI_Registers
*
*******************************************************************************/

#ifndef _IFXPERI_REGDEF_H_
#define _IFXPERI_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_PERI_Registers_Bitfields
 * \{  */
/** \brief Timeout control */
typedef struct _Ifx_PERI_TIMEOUT_CTL_Bits
{
    __IO Ifx_UReg_32Bit TIMEOUT:16;             /**< \brief [15:0]  This field specifies a number of peripheral
                                                                    group root undivided (clk_group_root[i]) clock cycles.
                                                                    If an AHB-Lite bus transfer takes more than the
                                                                    specified number of cycles (timeout detection), the
                                                                    bus transfer is terminated with an AHB5 bus error
                                                                    and a timeout status is set.
                                                                    '0x0000'-'0xfffe': Number of peripheral group clock cycles.
                                                                    '0xffff': This value is the default/reset value and
                                                                    specifies that no timeout detection is performed: a
                                                                    bus transfer will never be terminated, and a
                                                                    interrupt will never be generated.
                                                                    Note that TIMEOUT_CTL.TIMEOUT[15:0] in
                                                                    clk_pclk0_root (clk_hf0) is used directly in
                                                                    peripheral group clock domain clk_group_root[i],
                                                                    even if clk_group_root[i] is async to clk_pclk0_root.
                                                                    This is on the assumption that this register is
                                                                    programmed once by SW, remain constant.
                                                                    Following SW programming restrictions apply to
                                                                    TIMEOUT_CTL.TIMEOUT[15:0].
                                                                    SW should make sure that no other AHB transactions
                                                                    are initiated through PERI before programming this
                                                                    register.
                                                                    SW should make sure that write to
                                                                    TIMEOUT_CTL.TIMEOUT[15:0] is completed by doing a
                                                                    readback.
                                                                    Note that peripheral group-0 slaves are excluded
                                                                    from timeout (Refer Timeout section in mxsperi.1
                                                                    BROS for more details). (rw) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [30:16] \internal Reserved */
    __IO Ifx_UReg_32Bit HWRST_DISABLE:1;        /**< \brief [31:31] This field provides control for HW to reset
                                                                    the slave that is causing the timeout to occur.
                                                                    1 - no HW reset during timeout.
                                                                    0 - HW resets the corresponding slave during timeout.
                                                                    This ensures the AHB bus not to be hung after a
                                                                    timeout has occurred.
                                                                    HW asserts the reset along with fault request
                                                                    (peri_gp'i'_mmio_timeout_vio_req) and holds it
                                                                    until fault acknowledge
                                                                    (mmio_peri_gp'i'_timeout_vio_ack) is received from
                                                                    centralized fault infrastructure.
                                                                    Note, SW needs to take care of the implication when
                                                                    clearing this bit when a HW reset has occurred as
                                                                    clearing this bit will cause HW reset de-assert.
                                                                    Note that peripheral group-0 slaves are excluded
                                                                    from timeout (Refer Timeout section in mxsperi.1
                                                                    BROS for more details). (rw) */
} Ifx_PERI_TIMEOUT_CTL_Bits;

/** \brief Trigger command */
typedef struct _Ifx_PERI_TR_CMD_Bits
{
    __IO Ifx_UReg_32Bit TR_SEL:8;               /**< \brief [7:0]   Specifies the activated trigger when
                                                                    ACTIVATE is '1'.
                                                                    If the specified trigger is not present, the
                                                                    trigger activation has no effect. (rw) */
    __IO Ifx_UReg_32Bit GROUP_SEL:5;            /**< \brief [12:8]  Specifies the trigger group:
                                                                    '0'-'15': trigger multiplexer groups.
                                                                    '16'-'31': trigger 1-to-1 groups. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [28:13] \internal Reserved */
    __IO Ifx_UReg_32Bit TR_EDGE:1;              /**< \brief [29:29] Specifies if the activated  trigger is
                                                                    treated as a level sensitive or edge sensitive trigger.
                                                                    '0': level sensitive.
                                                                    The trigger reflects TR_CMD.ACTIVATE.
                                                                    '1': edge sensitive trigger.
                                                                    The trigger is activated for two clk_peri cycles. (rw) */
    __IO Ifx_UReg_32Bit OUT_SEL:1;              /**< \brief [30:30] Specifies whether trigger activation is for
                                                                    a specific input or output trigger of the trigger
                                                                    multiplexer.
                                                                    Activation of a specific input trigger, will result
                                                                    in activation of all output triggers that have the
                                                                    specific input trigger selected through their
                                                                    TR_CTL.TR_SEL  field.
                                                                    Activation of a specific output trigger, will
                                                                    result in activation of the specified TR_SEL output
                                                                    trigger only.
                                                                    '0': TR_SEL selection and trigger activation is for
                                                                    an input trigger to the trigger multiplexer.
                                                                    '1': TR_SEL selection and trigger activation is for
                                                                    an output trigger from the trigger multiplexer.
                                                                    Note: this field is not used for trigger 1-to-1 groups. (rw) */
    __IO Ifx_UReg_32Bit ACTIVATE:1;             /**< \brief [31:31] SW sets this field to '1' to activate (set
                                                                    to '1') a trigger as identified by TR_SEL, TR_EDGE
                                                                    and OUT_SEL.
                                                                    HW sets this field to '0' for edge sensitive
                                                                    triggers AFTER the selected trigger is activated
                                                                    for two clk_peri cycles.
                                                                    Note: when ACTIVATE is '1', SW should not modify
                                                                    the other register fields.
                                                                    SW MUST NOT set ACTIVATE bit to '1' while updating
                                                                    the other register bits simultaneously.
                                                                    At first the SW MUST update the other register bits
                                                                    as needed, and then set ACTIVATE to '1' with a new
                                                                    register write. (rw) */
} Ifx_PERI_TR_CMD_Bits;

/** \brief Infrastructure clock force enable */
typedef struct _Ifx_PERI_INFRA_CLK_FORCE_Bits
{
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [0:0]   Infrastructure clock force enable.
                                                                    0: Disabled
                                                                    1: Enabled (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PERI_INFRA_CLK_FORCE_Bits;

/** \brief Clock control */
typedef struct _Ifx_PERI_GR_CLOCK_CTL_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit INT8_DIV:8;             /**< \brief [15:8]  Specifies a group clock divider (from the
                                                                    peripheral clock 'clk_peri' to the group clock
                                                                    'clk_group[1/2/3/4/5/...15]').
                                                                    Integer division by (1+INT8_DIV).
                                                                    Allows for integer divisions in the range [1, 256].

                                                                    Note that this field is retained.
                                                                    However, the counter that is used to implement the
                                                                    division is not and will be initialized by HW to
                                                                    '0' when transitioning from DeepSleep to Active power mode. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PERI_GR_CLOCK_CTL_Bits;

/** \brief Slave control */
typedef struct _Ifx_PERI_GR_SL_CTL_Bits
{
    __IO Ifx_UReg_32Bit ENABLED:32;             /**< \brief [31:0]  Slave Enable.
                                                                    Each bit indicates whether the respective slave is enabled.
                                                                    If the slave is disabled, its clock is gated off
                                                                    (constant '0').
                                                                    Note: For peripheral group 0 slave 0,1, and 2 (the
                                                                    peripheral interconnect MMIO registers), this field
                                                                    is a constant '1' (SW: R): the slave can NOT be
                                                                    disabled.
                                                                    The peripheral IP that drives the Q-Channel back to
                                                                    Clock Controllers need to ensure that it has clock
                                                                    (usually driven by Clk_hf1~N that is only available
                                                                    after CPU configures their roots in the SRSS) to
                                                                    provide back the Q-Channel handshake, if not the
                                                                    deadlock situation will procure.
                                                                    To avoid deadlock mentioned above, all IPs in all
                                                                    groups other than group-0 are disabled
                                                                    (SL_CTL.ENABLED is set to '0') by default after POR
                                                                    (cold boot) (i.e.
                                                                    PERI HW hardcodes local parameter SL_CTL_DEFAULT to
                                                                    32'hFFFFFFFF for group-0 and to 32'h00000000 for
                                                                    other groups (group-1 to group-15)).
                                                                    Once CPU is up and running & Clk_hf1~N configured,
                                                                    CPU can enable them.
                                                                    The SL_CTL.ENABLED are retained during DEEPSLEEP to
                                                                    avoid enabling configuration after wakeup. (rw) */
} Ifx_PERI_GR_SL_CTL_Bits;

/** \brief Slave control2 */
typedef struct _Ifx_PERI_GR_SL_CTL2_Bits
{
    __IO Ifx_UReg_32Bit RST:32;                 /**< \brief [31:0]  Slave reset.
                                                                    Each bit indicates whether the respective slave is enabled.
                                                                    If the slave is under reset, its clock is gated off
                                                                    (constant '0') and its resets are activated.
                                                                    Note: For peripheral group 0 slave 0,1, and 2 (the
                                                                    peripheral interconnect MMIO registers), this field
                                                                    is a constant '0' (SW: R): the slave can NOT be in reset. (rw) */
} Ifx_PERI_GR_SL_CTL2_Bits;

/** \brief Slave wounding */
typedef struct _Ifx_PERI_GR_SL_WOUND_Bits
{
    __IO Ifx_UReg_32Bit DISABLED:32;            /**< \brief [31:0]  Slave disabled.
                                                                    Each bit indicates whether the respective slave is
                                                                    disabled.
                                                                    Setting this bit to 1 has the same effect as
                                                                    setting SL_CTL.ENABLED_0 to 0.
                                                                    However, once set to 1, this bit cannot be changed
                                                                    back to 0 anymore.
                                                                    Note: For peripheral group 0 slave 0,1, and 2 (the
                                                                    peripheral interconnect MMIO registers), this field
                                                                    is a constant '0' (SW: R): the slave can NOT be disabled. (rw) */
} Ifx_PERI_GR_SL_WOUND_Bits;

/** \brief Trigger control register */
typedef struct _Ifx_PERI_TR_GR_TR_CTL_Bits
{
    __IO Ifx_UReg_32Bit TR_SEL:8;               /**< \brief [7:0]   Specifies input trigger.
                                                                    This field is typically set during the setup of a
                                                                    chip use case scenario.
                                                                    Changing this field while activated triggers are
                                                                    present on the input triggers may result in
                                                                    unpredictable behavior.
                                                                    Note that input trigger 0 (default value) is
                                                                    typically connected to a constant signal level of
                                                                    '0', and as a result will not cause HW activation
                                                                    of the output trigger. (rw) */
    __IO Ifx_UReg_32Bit TR_INV:1;               /**< \brief [8:8]   Specifies if the output trigger is inverted. (rw) */
    __IO Ifx_UReg_32Bit TR_EDGE:1;              /**< \brief [9:9]   Specifies if the (inverted) output trigger
                                                                    is treated as a level sensitive or edge sensitive trigger.
                                                                    '0': level sensitive.
                                                                    '1': edge sensitive trigger.
                                                                    The (inverted) output trigger duration needs to be
                                                                    at least 2 cycles on the consumer clock.
                                                                    the(inverted) output trigger is synchronized to the
                                                                    consumer clock and a two cycle pulse is generated
                                                                    on the consumer clock. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [11:10] \internal Reserved */
    __IO Ifx_UReg_32Bit DBG_FREEZE_EN:1;        /**< \brief [12:12] Specifies if the output trigger is blocked
                                                                    in debug mode.
                                                                    When set high tr_dbg_freeze will block the output
                                                                    trigger generation. (rw) */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [31:13] \internal Reserved */
} Ifx_PERI_TR_GR_TR_CTL_Bits;

/** \brief Trigger control register */
typedef struct _Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits
{
    __IO Ifx_UReg_32Bit TR_SEL:1;               /**< \brief [0:0]   Specifies input trigger:
                                                                    '0'': constant signal level '0'.
                                                                    '1': input trigger. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [7:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit TR_INV:1;               /**< \brief [8:8]   Specifies if the output trigger is inverted. (rw) */
    __IO Ifx_UReg_32Bit TR_EDGE:1;              /**< \brief [9:9]   Specifies if the (inverted) output trigger
                                                                    is treated as a level sensitive or edge sensitive trigger.
                                                                    '0': level sensitive.
                                                                    '1': edge sensitive trigger.
                                                                    The (inverted) output trigger duration needs to be
                                                                    at least 2 cycles on the consumer clock.
                                                                    the(inverted) output trigger is synchronized to the
                                                                    consumer clock and a two cycle pulse is generated
                                                                    on the consumer clock. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [11:10] \internal Reserved */
    __IO Ifx_UReg_32Bit DBG_FREEZE_EN:1;        /**< \brief [12:12] Specifies if the output trigger is blocked
                                                                    in debug mode.
                                                                    When set high tr_dbg_freeze will block the output
                                                                    trigger generation. (rw) */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [31:13] \internal Reserved */
} Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PERI_Registers_union
 * \{   */
/** \brief Timeout control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_TIMEOUT_CTL_Bits B;                /**< \brief Bitfield access */
} Ifx_PERI_TIMEOUT_CTL;

/** \brief Trigger command */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_TR_CMD_Bits B;                     /**< \brief Bitfield access */
} Ifx_PERI_TR_CMD;

/** \brief Infrastructure clock force enable */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_INFRA_CLK_FORCE_Bits B;            /**< \brief Bitfield access */
} Ifx_PERI_INFRA_CLK_FORCE;

/** \brief Clock control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_GR_CLOCK_CTL_Bits B;               /**< \brief Bitfield access */
} Ifx_PERI_GR_CLOCK_CTL;

/** \brief Slave control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_GR_SL_CTL_Bits B;                  /**< \brief Bitfield access */
} Ifx_PERI_GR_SL_CTL;

/** \brief Slave control2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_GR_SL_CTL2_Bits B;                 /**< \brief Bitfield access */
} Ifx_PERI_GR_SL_CTL2;

/** \brief Slave wounding */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_GR_SL_WOUND_Bits B;                /**< \brief Bitfield access */
} Ifx_PERI_GR_SL_WOUND;

/** \brief Trigger control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_TR_GR_TR_CTL_Bits B;               /**< \brief Bitfield access */
} Ifx_PERI_TR_GR_TR_CTL;

/** \brief Trigger control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits B;          /**< \brief Bitfield access */
} Ifx_PERI_TR_1TO1_GR_TR_CTL;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PERI_GR_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief GR object */
typedef volatile struct _Ifx_PERI_GR
{
       __IO Ifx_PERI_GR_CLOCK_CTL               CLOCK_CTL;              /**< \brief 0, Clock control*/
       __I  Ifx_UReg_8Bit                       reserved_4[12];         /**< \brief 4, */
       __IO Ifx_PERI_GR_SL_CTL                  SL_CTL;                 /**< \brief 10, Slave control*/
       __IO Ifx_PERI_GR_SL_CTL2                 SL_CTL2;                /**< \brief 14, Slave control2*/
       __I  Ifx_UReg_8Bit                       reserved_18[8];         /**< \brief 18, */
       __IO Ifx_PERI_GR_SL_WOUND                SL_WOUND;               /**< \brief 20, Slave wounding*/
       __I  Ifx_UReg_8Bit                       reserved_24[28];        /**< \brief 24, */
} Ifx_PERI_GR;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PERI_TR_GR_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TR_GR object */
typedef volatile struct _Ifx_PERI_TR_GR
{
       __IO Ifx_PERI_TR_GR_TR_CTL               TR_CTL[256];            /**< \brief 0, Trigger control register*/
} Ifx_PERI_TR_GR;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PERI_TR_1TO1_GR_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TR_1TO1_GR object */
typedef volatile struct _Ifx_PERI_TR_1TO1_GR
{
       __IO Ifx_PERI_TR_1TO1_GR_TR_CTL          TR_CTL[256];            /**< \brief 0, Trigger control register*/
} Ifx_PERI_TR_1TO1_GR;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PERI_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief PERI object */
typedef volatile struct _Ifx_PERI
{
       __I  Ifx_UReg_8Bit                       reserved_0[512];        /**< \brief 0, */
       __IO Ifx_PERI_TIMEOUT_CTL                TIMEOUT_CTL;            /**< \brief 200, Timeout control*/
       __I  Ifx_UReg_8Bit                       reserved_204[7676];     /**< \brief 204, */
       __IO Ifx_PERI_TR_CMD                     TR_CMD;                 /**< \brief 2000, Trigger command*/
       __IO Ifx_PERI_INFRA_CLK_FORCE            INFRA_CLK_FORCE;        /**< \brief 2004, Infrastructure clock force enable*/
       __I  Ifx_UReg_8Bit                       reserved_2008[8184];    /**< \brief 2008, */
       __IO Ifx_PERI_GR                         GR[16];                 /**< \brief 4000, Peripheral group structure*/
       __I  Ifx_UReg_8Bit                       reserved_4400[15360];   /**< \brief 4400, */
       __IO Ifx_PERI_TR_GR                      TR_GR[16];              /**< \brief 8000, Trigger group*/
       __IO Ifx_PERI_TR_1TO1_GR                 TR_1TO1_GR[16];         /**< \brief C000, Trigger 1-to-1 group*/
} Ifx_PERI;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPERI_REGDEF_H_ */
