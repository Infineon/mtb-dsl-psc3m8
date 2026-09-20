/***************************************************************************//**
* \file IfxCPUSS_regdef.h
*
* \brief
* CPUSS Registers
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
* \defgroup IfxSfr_CPUSS_Registers CPUSS Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_CPUSS_Registers_Bitfields Bitfields
* \ingroup IfxSfr_CPUSS_Registers
*
* \defgroup IfxSfr_CPUSS_Registers_union Register unions
* \ingroup IfxSfr_CPUSS_Registers
*
* \defgroup IfxSfr_CPUSS_Registers_struct Memory map
* \ingroup IfxSfr_CPUSS_Registers
*
*******************************************************************************/

#ifndef _IFXCPUSS_REGDEF_H_
#define _IFXCPUSS_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_CPUSS_Registers_Bitfields
 * \{  */
/** \brief Identity */
typedef struct _Ifx_CPUSS_IDENTITY_Bits
{
    __I  Ifx_UReg_32Bit P:1;                    /**< \brief [0:0]   This field specifies the privileged setting
                                                                    ('0': user mode; '1': privileged mode) of the
                                                                    transfer that reads the register. (r) */
    __I  Ifx_UReg_32Bit NS:1;                   /**< \brief [1:1]   This field specifies the security setting
                                                                    ('0': secure mode; '1': non-secure mode) of the
                                                                    transfer that reads the register. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __I  Ifx_UReg_32Bit PC:4;                   /**< \brief [7:4]   This field specifies the protection context
                                                                    of the transfer that reads the register. (r) */
    __I  Ifx_UReg_32Bit MS:8;                   /**< \brief [15:8]  This field specifies the bus master
                                                                    identifier of the transfer that reads the register. (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CPUSS_IDENTITY_Bits;

/** \brief Product identifier and version (same as CoreSight RomTables) */
typedef struct _Ifx_CPUSS_PRODUCT_ID_Bits
{
    __I  Ifx_UReg_32Bit FAMILY_ID:12;           /**< \brief [11:0]  Family ID. Common ID (Partnumber a.k.a.
                                                                    Silicon ID) for a product family. (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __I  Ifx_UReg_32Bit MAJOR_REV:4;            /**< \brief [19:16]  (r) */
    __I  Ifx_UReg_32Bit MINOR_REV:4;            /**< \brief [23:20]  (r) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_CPUSS_PRODUCT_ID_Bits;

/** \brief Debug port status */
typedef struct _Ifx_CPUSS_DP_STATUS_Bits
{
    __I  Ifx_UReg_32Bit SWJ_CONNECTED:1;        /**< \brief [0:0]   Specifies if the SWJ debug port is connected; i.e.
                                                                    debug host interface is active:
                                                                    '0': Not connected/not active.
                                                                    '1': Connected/active. (r) */
    __I  Ifx_UReg_32Bit SWJ_DEBUG_EN:1;         /**< \brief [1:1]   Specifies if SWJ debug is enabled, i.e.
                                                                    CDBGPWRUPACK is '1' and thus debug clocks are on:
                                                                    '0': Disabled.
                                                                    '1': Enabled. (r) */
    __I  Ifx_UReg_32Bit SWJ_JTAG_SEL:1;         /**< \brief [2:2]   Specifies if the JTAG interface is selected.
                                                                    '0': JTAG not selected.
                                                                    '1': JTAG selected. (r) */
    __I  Ifx_UReg_32Bit SWJ_SWD_SEL:1;          /**< \brief [3:3]   Specifies if the SWD interface is selected.
                                                                    '0': SWD not selected.
                                                                    '1': SWD selected. (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CPUSS_DP_STATUS_Bits;

/** \brief Buffer control */
typedef struct _Ifx_CPUSS_BUFF_CTL_Bits
{
    __IO Ifx_UReg_32Bit WRITE_BUFF:1;           /**< \brief [0:0]   Specifies if write transfer can be buffered
                                                                    in the bus infrastructure bridges:
                                                                    '0': Write transfers are not buffered, independent
                                                                    of the transfer's bufferable attribute.
                                                                    '1': Write transfers can be buffered, if the
                                                                    transfer's bufferable attribute indicates that the
                                                                    transfer is a bufferable/posted write.
                                                                    This bit controls buffering only for subsystems
                                                                    that interfaced using the AHB2AHB bridge, not for
                                                                    components utilised from the ARM SIE200, such as
                                                                    the 32-bit SYS interconnect in SYSCPUSS, Peripheral
                                                                    Group0, MSC etc. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CPUSS_BUFF_CTL_Bits;

/** \brief Calibration support set and read */
typedef struct _Ifx_CPUSS_CAL_SUP_SET_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Read without side effect, write 1 to set (rw) */
} Ifx_CPUSS_CAL_SUP_SET_Bits;

/** \brief Calibration support clear and reset */
typedef struct _Ifx_CPUSS_CAL_SUP_CLR_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Read side effect: when read all bits are
                                                                    cleared, write 1 to clear a specific bit
                                                                    Note: no exception for the debug host, it also
                                                                    causes the read side effect (rw) */
} Ifx_CPUSS_CAL_SUP_CLR_Bits;

/** \brief Infrastructure Control */
typedef struct _Ifx_CPUSS_INFRA_CTL_Bits
{
    __IO Ifx_UReg_32Bit CLOCK_FORCE:1;          /**< \brief [0:0]   Force Infrastructure clock gating to be
                                                                    always ON.
                                                                    0: Disabled
                                                                    1: Enabled (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CPUSS_INFRA_CTL_Bits;

/** \brief Secure SysTick timer control */
typedef struct _Ifx_CPUSS_SYSTICK_S_CTL_Bits
{
    __IO Ifx_UReg_32Bit TENMS:24;               /**< \brief [23:0]   (rw) */
    __IO Ifx_UReg_32Bit CLOCK_SOURCE:2;         /**< \brief [25:24] Specifies an external clock source:
                                                                    '0': The low frequency clock 'clk_lf' is selected.
                                                                    The precision of this clock depends on whether the
                                                                    low frequency clock source is a SRSS internal RC
                                                                    oscillator (imprecise) or a device external crystal
                                                                    oscillator (precise).
                                                                    '1': The internal main oscillator (IMO) clock
                                                                    'clk_imo' is selected.
                                                                    o '2': The external crystal oscillator (ECO) clock
                                                                    'clk_eco' is selected.
                                                                    '3': The SRSS 'clk_timer' is selected ('clk_timer'
                                                                    is a divided/gated version of 'clk_hf' or
                                                                    'clk_imo').
                                                                    Note: If NOREF is '1', the CLOCK_SOURCE value is
                                                                    NOT used.
                                                                    Note: It is SW's responsibility to provide the
                                                                    correct NOREF, SKEW and TENMS field values for the
                                                                    selected clock source. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [29:26] \internal Reserved */
    __IO Ifx_UReg_32Bit SKEW:1;                 /**< \brief [30:30]  (rw) */
    __IO Ifx_UReg_32Bit NOREF:1;                /**< \brief [31:31]  (rw) */
} Ifx_CPUSS_SYSTICK_S_CTL_Bits;

/** \brief Non Secure SysTick timer control */
typedef struct _Ifx_CPUSS_SYSTICK_NS_CTL_Bits
{
    __IO Ifx_UReg_32Bit TENMS:24;               /**< \brief [23:0]   (rw) */
    __IO Ifx_UReg_32Bit CLOCK_SOURCE:2;         /**< \brief [25:24] Specifies an external clock source:
                                                                    '0': The low frequency clock 'clk_lf' is selected.
                                                                    The precision of this clock depends on whether the
                                                                    low frequency clock source is a SRSS internal RC
                                                                    oscillator (imprecise) or a device external crystal
                                                                    oscillator (precise).
                                                                    '1': The internal main oscillator (IMO) clock
                                                                    'clk_imo' is selected.
                                                                    o '2': The external crystal oscillator (ECO) clock
                                                                    'clk_eco' is selected.
                                                                    '3': The SRSS 'clk_timer' is selected ('clk_timer'
                                                                    is a divided/gated version of 'clk_hf' or
                                                                    'clk_imo').
                                                                    Note: If NOREF is '1', the CLOCK_SOURCE value is
                                                                    NOT used.
                                                                    Note: It is SW's responsibility to provide the
                                                                    correct NOREF, SKEW and TENMS field values for the
                                                                    selected clock source. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [29:26] \internal Reserved */
    __IO Ifx_UReg_32Bit SKEW:1;                 /**< \brief [30:30]  (rw) */
    __IO Ifx_UReg_32Bit NOREF:1;                /**< \brief [31:31]  (rw) */
} Ifx_CPUSS_SYSTICK_NS_CTL_Bits;

/** \brief Master security controller Interrupt */
typedef struct _Ifx_CPUSS_INTR_MSC_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit SYS_MS0_MSC:1;          /**< \brief [1:1]   This interrupt cause field is activated (HW
                                                                    sets the field to '1') when there is a security
                                                                    violation on SYSCPUSS external SYS AHB5 bus master
                                                                    interface 0.
                                                                    SW writes a '1' to this field to clear the
                                                                    interrupt cause to '0'.
                                                                    The HW captures a new MSC interrupt only after
                                                                    clearing the interrupt cause. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [2:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit EXP_MS_MSC:1;           /**< \brief [3:3]   This interrupt cause field is activated (HW
                                                                    sets the field to '1') when there is a security
                                                                    violation on SYSCPUSS external EXP AHB5 bus master
                                                                    interfaces.
                                                                    SW writes a '1' to this field to clear the
                                                                    interrupt cause to '0'.
                                                                    The HW captures a new MSC interrupt only after
                                                                    clearing the interrupt cause. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CPUSS_INTR_MSC_Bits;

/** \brief Master security controller Interrupt mask */
typedef struct _Ifx_CPUSS_INTR_MASK_MSC_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit SYS_MS0_MSC:1;          /**< \brief [1:1]   Mask bit for the corresponding field in the
                                                                    SYSCPUSS_INTR_MSC register. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [2:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit EXP_MS_MSC:1;           /**< \brief [3:3]   Mask bit for the corresponding field in the
                                                                    SYSCPUSS_INTR_MSC register. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CPUSS_INTR_MASK_MSC_Bits;

/** \brief Master security controller Interrupt masked */
typedef struct _Ifx_CPUSS_INTR_MASKED_MSC_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit SYS_MS0_MSC:1;          /**< \brief [1:1]   Logical AND of corresponding
                                                                    SYSCPUSS_INTR_MSC and SYSCPUSS_INTR_MASK_MSC bit fields. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [2:2]   \internal Reserved */
    __I  Ifx_UReg_32Bit EXP_MS_MSC:1;           /**< \brief [3:3]   Logical AND of corresponding
                                                                    SYSCPUSS_INTR_MSC and SYSCPUSS_INTR_MASK_MSC bit fields. (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CPUSS_INTR_MASKED_MSC_Bits;

/** \brief Access port control */
typedef struct _Ifx_CPUSS_AP_CTL_Bits
{
    __IO Ifx_UReg_32Bit CM33_0_ENABLE:1;        /**< \brief [0:0]    (rw) */
    __IO Ifx_UReg_32Bit CM33_1_ENABLE:1;        /**< \brief [1:1]    (rw) */
    __IO Ifx_UReg_32Bit SYS_ENABLE:1;           /**< \brief [2:2]    (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit CM33_0_DBG_ENABLE:1;    /**< \brief [4:4]    (rw) */
    __IO Ifx_UReg_32Bit CM33_0_NID_ENABLE:1;    /**< \brief [5:5]    (rw) */
    __IO Ifx_UReg_32Bit CM33_0_SPID_ENABLE:1;   /**< \brief [6:6]    (rw) */
    __IO Ifx_UReg_32Bit CM33_0_SPNID_ENABLE:1;  /**< \brief [7:7]    (rw) */
    __IO Ifx_UReg_32Bit CM33_1_DBG_ENABLE:1;    /**< \brief [8:8]   Invasive debug enable for CM33_1.
                                                                    '0': Disables all halt-mode and invasive debug
                                                                    features.
                                                                    '1': Enables invasive debug features. (rw) */
    __IO Ifx_UReg_32Bit CM33_1_NID_ENABLE:1;    /**< \brief [9:9]   Non-invasive debug enable for CM33_1.
                                                                    '0': Disables all trace and non-invasive debug
                                                                    features.
                                                                    '1': Enables all trace and non-invasive debug features. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [11:10] \internal Reserved */
    __IO Ifx_UReg_32Bit CM33_0_SECURE_ENABLE:1; /**< \brief [12:12]  (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [13:13] \internal Reserved */
    __IO Ifx_UReg_32Bit SYS_SECURE_ENABLE:1;    /**< \brief [14:14]  (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit CM33_0_DISABLE:1;       /**< \brief [16:16] Disables the CM33_0 AP interface:
                                                                    '0': Enabled.
                                                                    '1': Disabled.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The access port is only enabled when CM33_0_DISABLE
                                                                    is '0' and CM33_0_ENABLE is '1'. (rw) */
    __IO Ifx_UReg_32Bit CM33_1_DISABLE:1;       /**< \brief [17:17] Disables the CM33_1 AP interface:
                                                                    '0': Enabled.
                                                                    '1': Disabled.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The access port is only enabled when CM33_1_DISABLE
                                                                    is '0' and CM33_1_ENABLE is '1'. (rw) */
    __IO Ifx_UReg_32Bit SYS_DISABLE:1;          /**< \brief [18:18] Disables the system AP interface:
                                                                    '0': Enabled.
                                                                    '1': Disabled.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The access port is only enabled when SYS_DISABLE is
                                                                    '0' and SYS_ENABLE is '1'. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit CM33_0_DBG_DISABLE:1;   /**< \brief [20:20] Disable Invasive debug for CM33_0.
                                                                    '1': Disables all halt-mode and invasive debug
                                                                    features.
                                                                    '0': Enables invasive debug features.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The invasive debug is only enabled when
                                                                    CM33_0_DBG_DISABLE is '0' and CM33_0_DBG_ENABLE is '1'. (rw) */
    __IO Ifx_UReg_32Bit CM33_0_NID_DISABLE:1;   /**< \brief [21:21] Disable Non-invasive debug for CM33_0.
                                                                    '1': Disables all trace and non-invasive debug
                                                                    features.
                                                                    '0': Enables all trace and non-invasive debug
                                                                    features.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The non-invasive debug is only enabled when
                                                                    CM33_0_NID_DISABLE is '0' and CM33_0_NID_ENABLE is '1'. (rw) */
    __IO Ifx_UReg_32Bit CM33_0_SPID_DISABLE:1;  /**< \brief [22:22] Secure invasive debug disable for CM33_0.
                                                                    '1': disables all halt mode and invasive debug
                                                                    features when the processor is in Secure state.
                                                                    '0': Enables all halt mode and invasive debug
                                                                    features when the processor is in Secure state.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The invasive debug in secure state is only enabled
                                                                    when CM33_0_SPID_DISABLE is '0' and
                                                                    CM33_0_SPID_ENABLE is '1'. (rw) */
    __IO Ifx_UReg_32Bit CM33_0_SPNID_DISABLE:1; /**< \brief [23:23] Secure non-invasive debug disable for CM33_0.
                                                                    '1': Disables non-invasive debug features when the
                                                                    processor is in Secure state.
                                                                    '0': Enables non-invasive debug features when the
                                                                    processor is in Secure state.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The non-invasive debug in secure state is only
                                                                    enabled when CM33_0_SPNID_DISABLE is '0' and
                                                                    CM33_0_SPNID_ENABLE is '1'. (rw) */
    __IO Ifx_UReg_32Bit CM33_1_DBG_DISABLE:1;   /**< \brief [24:24] Disable Invasive debug for CM33_1.
                                                                    '1': Disables all halt-mode and invasive debug
                                                                    features.
                                                                    '0': Enables invasive debug features.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The invasive debug is only enabled when
                                                                    CM33_1_DBG_DISABLE is '0' and CM33_1_DBG_ENABLE is '1'. (rw) */
    __IO Ifx_UReg_32Bit CM33_1_NID_DISABLE:1;   /**< \brief [25:25] Disable Non-invasive debug for CM33_1.
                                                                    '1': Disables all trace and non-invasive debug
                                                                    features.
                                                                    '0': Enables all trace and non-invasive debug
                                                                    features.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The non-invasive debug is only enabled when
                                                                    CM33_1_NID_DISABLE is '0' and CM33_1_NID_ENABLE is '1'. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [27:26] \internal Reserved */
    __IO Ifx_UReg_32Bit CM33_0_SECURE_DISABLE:1; /**< \brief [28:28] Disables the CM33_0 secure AP interface:
                                                                    '0': Enabled.
                                                                    '1': Disabled.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The access port is only enabled when CM33_0_DISABLE
                                                                    is '0' and CM33_0_ENABLE is '1'. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [29:29] \internal Reserved */
    __IO Ifx_UReg_32Bit SYS_SECURE_DISABLE:1;   /**< \brief [30:30] Disables the system secure AP interface:
                                                                    '0': Enabled.
                                                                    '1': Disabled.
                                                                    Typically, this field is set by the Infineon boot
                                                                    code with information from OTP memory.
                                                                    The access port is only enabled when
                                                                    SYS_SECURE_DISABLE is '0' and SYS_SECURE_ENABLE is '1'. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_CPUSS_AP_CTL_Bits;

/** \brief Protection status */
typedef struct _Ifx_CPUSS_PROTECTION_Bits
{
    __IO Ifx_UReg_32Bit STATE:32;               /**< \brief [31:0]  Protection state:
                                                                    PROTECTION is '0x5B719A4F': UNKNOWN state.
                                                                    PROTECTION is '0x5D48F714': VIRGIN state.
                                                                                PROTECTION is '0xC39D5455': OPEN state
                                                                    PROTECTION is '0x652372F7': NORMAL state.
                                                                    PROTECTION is '0x8DF117A1': SECURE state.
                                                                                PROTECTION is '0xFBF6D1B6': RMA state
                                                                                PROTECTION is '0x2E94B3DD': DEAD state.
                                                                    PROTECTION is '0x3A5BC6F1': CORRUPTED state.
                                                                    PROTECTION is '0x3F80442F': TESTMODE state.
                                                                    The following state transitions are allowed (and
                                                                    enforced by HW):
                                                                    - UNKNOWN =>
                                                                    VIRGIN/RMA/OPEN/NORMAL/SECURE/DEAD/CORRUPTED
                                                                    - RMA/OPEN/NORMAL/SECURE => DEAD
                                                                    - RMA/OPEN/NORMAL/SECURE => TESTMODE
                                                                    - RMA/OPEN/NORMAL/SECURE => CORRUPTED
                                                                    An attempt to make a NOT allowed state transition
                                                                    will NOT affect this register field. (rw)
                                                UNKNOWN       : 0x5B719A4Fu
                                                VIRGIN        : 0x5D48F714u
                                                OPEN          : 0xC39D5455u
                                                NORMAL        : 0x652372F7u
                                                SECURE        : 0x8DF117A1u
                                                RMA           : 0xFBF6D1B6u
                                                DEAD          : 0x2E94B3DDu
                                                CORRUPTED     : 0x3A5BC6F1u
                                                TESTMODE      : 0x3F80442Fu    */
} Ifx_CPUSS_PROTECTION_Bits;

/* CPUSS_PROTECTION.STATE enumerated values */
#define IFX_CPUSS_PROTECTION_STATE_UNKNOWN (0x5B719A4Fu)
#define IFX_CPUSS_PROTECTION_STATE_VIRGIN (0x5D48F714u)
#define IFX_CPUSS_PROTECTION_STATE_OPEN (0xC39D5455u)
#define IFX_CPUSS_PROTECTION_STATE_NORMAL (0x652372F7u)
#define IFX_CPUSS_PROTECTION_STATE_SECURE (0x8DF117A1u)
#define IFX_CPUSS_PROTECTION_STATE_RMA (0xFBF6D1B6u)
#define IFX_CPUSS_PROTECTION_STATE_DEAD (0x2E94B3DDu)
#define IFX_CPUSS_PROTECTION_STATE_CORRUPTED (0x3A5BC6F1u)
#define IFX_CPUSS_PROTECTION_STATE_TESTMODE (0x3F80442Fu)


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CPUSS_Registers_union
 * \{   */
/** \brief Identity */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_IDENTITY_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPUSS_IDENTITY;

/** \brief Product identifier and version (same as CoreSight RomTables) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_PRODUCT_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_CPUSS_PRODUCT_ID;

/** \brief Debug port status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_DP_STATUS_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPUSS_DP_STATUS;

/** \brief Buffer control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_BUFF_CTL_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPUSS_BUFF_CTL;

/** \brief Calibration support set and read */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_CAL_SUP_SET_Bits B;               /**< \brief Bitfield access */
} Ifx_CPUSS_CAL_SUP_SET;

/** \brief Calibration support clear and reset */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_CAL_SUP_CLR_Bits B;               /**< \brief Bitfield access */
} Ifx_CPUSS_CAL_SUP_CLR;

/** \brief Infrastructure Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_INFRA_CTL_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPUSS_INFRA_CTL;

/** \brief Secure SysTick timer control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_SYSTICK_S_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_CPUSS_SYSTICK_S_CTL;

/** \brief Non Secure SysTick timer control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_SYSTICK_NS_CTL_Bits B;            /**< \brief Bitfield access */
} Ifx_CPUSS_SYSTICK_NS_CTL;

/** \brief Master security controller Interrupt */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_INTR_MSC_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPUSS_INTR_MSC;

/** \brief Master security controller Interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_INTR_MASK_MSC_Bits B;             /**< \brief Bitfield access */
} Ifx_CPUSS_INTR_MASK_MSC;

/** \brief Master security controller Interrupt masked */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_INTR_MASKED_MSC_Bits B;           /**< \brief Bitfield access */
} Ifx_CPUSS_INTR_MASKED_MSC;

/** \brief Access port control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_AP_CTL_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPUSS_AP_CTL;

/** \brief Protection status */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_PROTECTION_Bits B;                /**< \brief Bitfield access */
} Ifx_CPUSS_PROTECTION;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CPUSS_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief CPUSS object */
typedef volatile struct _Ifx_CPUSS
{
       __I  Ifx_CPUSS_IDENTITY                  IDENTITY;               /**< \brief 0, Identity*/
       __I  Ifx_UReg_8Bit                       reserved_4[12];         /**< \brief 4, */
       __I  Ifx_CPUSS_PRODUCT_ID                PRODUCT_ID;             /**< \brief 10, Product identifier and version (same as CoreSight RomTables)*/
       __I  Ifx_UReg_8Bit                       reserved_14[12];        /**< \brief 14, */
       __I  Ifx_CPUSS_DP_STATUS                 DP_STATUS;              /**< \brief 20, Debug port status*/
       __I  Ifx_UReg_8Bit                       reserved_24[12];        /**< \brief 24, */
       __IO Ifx_CPUSS_BUFF_CTL                  BUFF_CTL;               /**< \brief 30, Buffer control*/
       __I  Ifx_UReg_8Bit                       reserved_34[12];        /**< \brief 34, */
       __IO Ifx_CPUSS_CAL_SUP_SET               CAL_SUP_SET;            /**< \brief 40, Calibration support set and read*/
       __IO Ifx_CPUSS_CAL_SUP_CLR               CAL_SUP_CLR;            /**< \brief 44, Calibration support clear and reset*/
       __I  Ifx_UReg_8Bit                       reserved_48[8];         /**< \brief 48, */
       __IO Ifx_CPUSS_INFRA_CTL                 INFRA_CTL;              /**< \brief 50, Infrastructure Control*/
       __I  Ifx_UReg_8Bit                       reserved_54[172];       /**< \brief 54, */
       __IO Ifx_CPUSS_SYSTICK_S_CTL             SYSTICK_S_CTL;          /**< \brief 100, Secure SysTick timer control*/
       __I  Ifx_UReg_8Bit                       reserved_104[28];       /**< \brief 104, */
       __IO Ifx_CPUSS_SYSTICK_NS_CTL            SYSTICK_NS_CTL;         /**< \brief 120, Non Secure SysTick timer control*/
       __I  Ifx_UReg_8Bit                       reserved_124[220];      /**< \brief 124, */
       __IO Ifx_CPUSS_INTR_MSC                  INTR_MSC;               /**< \brief 200, Master security controller Interrupt*/
       __I  Ifx_UReg_8Bit                       reserved_204[4];        /**< \brief 204, */
       __IO Ifx_CPUSS_INTR_MASK_MSC             INTR_MASK_MSC;          /**< \brief 208, Master security controller Interrupt mask*/
       __I  Ifx_CPUSS_INTR_MASKED_MSC           INTR_MASKED_MSC;        /**< \brief 20C, Master security controller Interrupt masked*/
       __I  Ifx_UReg_8Bit                       reserved_210[3568];     /**< \brief 210, */
       __IO Ifx_CPUSS_AP_CTL                    AP_CTL;                 /**< \brief 1000, Access port control*/
       __I  Ifx_UReg_8Bit                       reserved_1004[4096];    /**< \brief 1004, */
       __IO Ifx_CPUSS_PROTECTION                PROTECTION;             /**< \brief 2004, Protection status*/
       __I  Ifx_UReg_8Bit                       reserved_2008[8184];    /**< \brief 2008, */
} Ifx_CPUSS;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCPUSS_REGDEF_H_ */
