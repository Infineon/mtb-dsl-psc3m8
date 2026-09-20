/***************************************************************************//**
* \file IfxMXCM33_regdef.h
*
* \brief
* MXCM33 Registers
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
* \defgroup IfxSfr_MXCM33_Registers MXCM33 Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_MXCM33_Registers_Bitfields Bitfields
* \ingroup IfxSfr_MXCM33_Registers
*
* \defgroup IfxSfr_MXCM33_Registers_union Register unions
* \ingroup IfxSfr_MXCM33_Registers
*
* \defgroup IfxSfr_MXCM33_Registers_struct Memory map
* \ingroup IfxSfr_MXCM33_Registers
*
*******************************************************************************/

#ifndef _IFXMXCM33_REGDEF_H_
#define _IFXMXCM33_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_MXCM33_Registers_Bitfields
 * \{  */
/** \brief Control */
typedef struct _Ifx_MXCM33_CM33_CTL_Bits
{
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [3:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit CPU_WAIT:1;             /**< \brief [4:4]    (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit LOCKNSVTOR:1;           /**< \brief [8:8]    (rw) */
    __IO Ifx_UReg_32Bit LOCKSVTAIRCR:1;         /**< \brief [9:9]    (rw) */
    __IO Ifx_UReg_32Bit LOCKSMPU:1;             /**< \brief [10:10]  (rw) */
    __IO Ifx_UReg_32Bit LOCKNSMPU:1;            /**< \brief [11:11]  (rw) */
    __IO Ifx_UReg_32Bit LOCKSAU:1;              /**< \brief [12:12]  (rw) */
    __I  Ifx_UReg_32Bit :11;                    /**< \brief [23:13] \internal Reserved */
    __IO Ifx_UReg_32Bit IOC_MASK:1;             /**< \brief [24:24] CPU floating point unit (FPU) exception
                                                                    mask for the CPU's FPCSR.IOC 'invalid operation'
                                                                    exception condition:
                                                                    '0': The CPU's exception condition does NOT
                                                                    activate the CPU's floating point interrupt.
                                                                    '1': the CPU's exception condition activates the
                                                                    CPU's floating point interrupt.
                                                                    Note: the ARM architecture does NOT support FPU
                                                                    exceptions; i.e. there is no precise FPU exception handler.
                                                                    Instead, FPU conditions are captured in the CPU's
                                                                    FPCSR register and the conditions are provided as
                                                                    CPU interface signals.
                                                                    The interface signals are 'masked' with the fields
                                                                    provided by this register (CM33_CTL).
                                                                    The 'masked' signals are reduced/OR-ed into a
                                                                    single CPU floating point interrupt signal.
                                                                    The associated CPU interrupt handler allows for
                                                                    imprecise handling of FPU exception conditions.
                                                                    Note: the CPU's FPCSR exception conditions are 'sticky'.
                                                                    Typically, the CPU FPU interrupt handler will clear
                                                                    the exception condition(s) to '0'.
                                                                    Note: by default, the FPU exception masks are '0'.
                                                                    Therefore, FPU exception conditions will NOT
                                                                    activate the CPU's floating point interrupt. (rw) */
    __IO Ifx_UReg_32Bit DZC_MASK:1;             /**< \brief [25:25]  (rw) */
    __IO Ifx_UReg_32Bit OFC_MASK:1;             /**< \brief [26:26]  (rw) */
    __IO Ifx_UReg_32Bit UFC_MASK:1;             /**< \brief [27:27]  (rw) */
    __IO Ifx_UReg_32Bit IXC_MASK:1;             /**< \brief [28:28]  (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [30:29] \internal Reserved */
    __IO Ifx_UReg_32Bit IDC_MASK:1;             /**< \brief [31:31]  (rw) */
} Ifx_MXCM33_CM33_CTL_Bits;

/** \brief Command */
typedef struct _Ifx_MXCM33_CM33_CMD_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [1:1]   Processor enable:
                                                                    '0': Disabled.
                                                                    Processor clock is turned off and reset is activated.
                                                                    After SW clears this field to '0', HW automatically
                                                                    sets this field to '1'.
                                                                    This effectively results in a CM33 reset, followed
                                                                    by a CM33 warm boot.
                                                                    '1': Enabled.
                                                                    Note: The intent is that this bit is modified only
                                                                    through an external probe or by the other CM33
                                                                    while this CM33 is in Sleep or DeepSleep power mode.
                                                                    If this field is cleared to '0' by this CM33
                                                                    itself, it should be done under controlled
                                                                    conditions (such that undesirable side effects can
                                                                    be prevented).
                                                                    Note: The CM33 CPU has a AIRCR.SYSRESETREQ register
                                                                    field that allows the CM33 to reset the complete
                                                                    device (ENABLED only disables/enables the CM33),
                                                                    resulting in a warm boot.
                                                                    This CPU register field has similar 'built-in
                                                                    protection' as this register to prevent accidental
                                                                    system writes (the upper 16-bits of the register
                                                                    need to be written with a 0x05fa key value; see CPU
                                                                    user manual for more details). (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [15:2]  \internal Reserved */
    __I  Ifx_UReg_32Bit VECTKEYSTAT:16;         /**< \brief [31:16] Register key (to prevent accidental writes).
                                                                    - Should be written with a 0x05fa key value for the
                                                                    write to take effect.
                                                                    - Always reads as 0xfa05. (r) */
} Ifx_MXCM33_CM33_CMD_Bits;

/** \brief Status */
typedef struct _Ifx_MXCM33_CM33_STATUS_Bits
{
    __I  Ifx_UReg_32Bit SLEEPING:1;             /**< \brief [0:0]   Specifies if the CPU is in Active, Sleep or
                                                                    DeepSleep power mode:
                                                                    - Active power mode: SLEEPING is '0'.
                                                                    - Sleep power mode: SLEEPING is '1' and SLEEPDEEP is '0'.
                                                                    - DeepSleep power mode: SLEEPING is '1' and
                                                                    SLEEPDEEP is '1'. (r) */
    __I  Ifx_UReg_32Bit SLEEPDEEP:1;            /**< \brief [1:1]   Specifies if the CPU is in Sleep or
                                                                    DeepSleep power mode. See SLEEPING field. (r) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_MXCM33_CM33_STATUS_Bits;

/** \brief CM33 NMI control */
typedef struct _Ifx_MXCM33_CM33_NMI_CTL_Bits
{
    __IO Ifx_UReg_32Bit SYSTEM_INT_IDX:10;      /**< \brief [9:0]   System interrupt select for CPU NMI.
                                                                    The reset value ('1023') ensures that the CPU NMI
                                                                    is NOT connected to any system interrupt after
                                                                    DeepSleep reset. (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_MXCM33_CM33_NMI_CTL_Bits;

/** \brief CM33 event control */
typedef struct _Ifx_MXCM33_CM33_EVENT_CTL_Bits
{
    __IO Ifx_UReg_32Bit MASK:5;                 /**< \brief [4:0]   One mask bit for each CPU (other than itself).
                                                                    0: Mask is not set.
                                                                    1: RX event from the corresponding CPU is masked.
                                                                    Bit 0: Other CM33 CPU event
                                                                    Bit 1: CM55_0 CPU event
                                                                    Bit 2: CM55_1 CPU event
                                                                    Bit 3: CM55_2 CPU event
                                                                    Bit 4: CM55_3 CPU event (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_MXCM33_CM33_EVENT_CTL_Bits;

/** \brief CM33 secure vector table base */
typedef struct _Ifx_MXCM33_CM33_S_VECTOR_TABLE_BASE_Bits
{
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [6:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit ADDR25:25;              /**< \brief [31:7]  Address of CM33 secure vector table to be
                                                                    used at reset.
                                                                    Default value:
                                                                    ADDR25: 0x0200000 if PROM is present (points to
                                                                    Secure ROM start address i.e. 0x1000_0000).
                                                                    ADDR25: 0x0680000 if PROM is not present (points to
                                                                    Secure RAMC0 start address i.e. 0x3400_0000). (rw) */
} Ifx_MXCM33_CM33_S_VECTOR_TABLE_BASE_Bits;

/** \brief CM33 non-secure vector table base */
typedef struct _Ifx_MXCM33_CM33_NS_VECTOR_TABLE_BASE_Bits
{
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [6:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit ADDR25:25;              /**< \brief [31:7]  Address of CM33 non-secure vector table to
                                                                    be used at reset.  Default value:
                                                                    ADDR25: 0x0000000 if PROM is present (points to
                                                                    Non-Secure ROM start address i.e. 0x0000_0000).
                                                                    ADDR25: 0x0480000 if PROM is not present (points to
                                                                    Non-Secure RAMC0 start address i.e. 0x2400_0000). (rw) */
} Ifx_MXCM33_CM33_NS_VECTOR_TABLE_BASE_Bits;

/** \brief CM33 protection context control */
typedef struct _Ifx_MXCM33_CM33_PC_CTL_Bits
{
    __IO Ifx_UReg_32Bit VALID:4;                /**< \brief [3:0]   Valid fields for the protection context
                                                                    handler CM33_PCi_HANDLER registers:
                                                                    Bit 0: Valid field for CM33_PC0_HANDLER.
                                                                    Bit 1: Valid field for CM33_PC1_HANDLER.
                                                                    Bit 2: Valid field for CM33_PC2_HANDLER.
                                                                    Bit 3: Valid field for CM33_PC3_HANDLER. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_MXCM33_CM33_PC_CTL_Bits;

/** \brief CM33 protection context 0 handler */
typedef struct _Ifx_MXCM33_CM33_PC0_HANDLER_Bits
{
    __IO Ifx_UReg_32Bit ADDR:32;                /**< \brief [31:0]  Address of the protection context 0 handler.
                                                                    This field is used to detect entry to Cypress
                                                                    'trusted' code through an exception/interrupt. (rw) */
} Ifx_MXCM33_CM33_PC0_HANDLER_Bits;

/** \brief CM33 protection context 1 handler */
typedef struct _Ifx_MXCM33_CM33_PC1_HANDLER_Bits
{
    __IO Ifx_UReg_32Bit ADDR:32;                /**< \brief [31:0]  Address of the protection context 1 handler. (rw) */
} Ifx_MXCM33_CM33_PC1_HANDLER_Bits;

/** \brief CM33 protection context 2 handler */
typedef struct _Ifx_MXCM33_CM33_PC2_HANDLER_Bits
{
    __IO Ifx_UReg_32Bit ADDR:32;                /**< \brief [31:0]  Address of the protection context 2 handler. (rw) */
} Ifx_MXCM33_CM33_PC2_HANDLER_Bits;

/** \brief CM33 protection context 3 handler */
typedef struct _Ifx_MXCM33_CM33_PC3_HANDLER_Bits
{
    __IO Ifx_UReg_32Bit ADDR:32;                /**< \brief [31:0]  Address of the protection context 3 handler. (rw) */
} Ifx_MXCM33_CM33_PC3_HANDLER_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXCM33_Registers_union
 * \{   */
/** \brief Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_CTL_Bits B;                 /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_CTL;

/** \brief Command */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_CMD_Bits B;                 /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_CMD;

/** \brief Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_STATUS_Bits B;              /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_STATUS;

/** \brief CM33 NMI control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_NMI_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_NMI_CTL;

/** \brief CM33 event control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_EVENT_CTL_Bits B;           /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_EVENT_CTL;

/** \brief CM33 secure vector table base */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_S_VECTOR_TABLE_BASE_Bits B; /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_S_VECTOR_TABLE_BASE;

/** \brief CM33 non-secure vector table base */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_NS_VECTOR_TABLE_BASE_Bits B; /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_NS_VECTOR_TABLE_BASE;

/** \brief CM33 protection context control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_PC_CTL_Bits B;              /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_PC_CTL;

/** \brief CM33 protection context 0 handler */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_PC0_HANDLER_Bits B;         /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_PC0_HANDLER;

/** \brief CM33 protection context 1 handler */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_PC1_HANDLER_Bits B;         /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_PC1_HANDLER;

/** \brief CM33 protection context 2 handler */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_PC2_HANDLER_Bits B;         /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_PC2_HANDLER;

/** \brief CM33 protection context 3 handler */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCM33_CM33_PC3_HANDLER_Bits B;         /**< \brief Bitfield access */
} Ifx_MXCM33_CM33_PC3_HANDLER;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXCM33_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief MXCM33 object */
typedef volatile struct _Ifx_MXCM33
{
       __IO Ifx_MXCM33_CM33_CTL                 CM33_CTL;               /**< \brief 0, Control*/
       __IO Ifx_MXCM33_CM33_CMD                 CM33_CMD;               /**< \brief 4, Command*/
       __I  Ifx_MXCM33_CM33_STATUS              CM33_STATUS;            /**< \brief 8, Status*/
       __I  Ifx_UReg_8Bit                       reserved_C[116];        /**< \brief C, */
       __IO Ifx_MXCM33_CM33_NMI_CTL             CM33_NMI_CTL[4];        /**< \brief 80, CM33 NMI control*/
       __I  Ifx_UReg_8Bit                       reserved_90[48];        /**< \brief 90, */
       __IO Ifx_MXCM33_CM33_EVENT_CTL           CM33_EVENT_CTL;         /**< \brief C0, CM33 event control*/
       __I  Ifx_UReg_8Bit                       reserved_C4[3900];      /**< \brief C4, */
       __IO Ifx_MXCM33_CM33_S_VECTOR_TABLE_BASE CM33_S_VECTOR_TABLE_BASE; /**< \brief 1000, CM33 secure vector table base*/
       __IO Ifx_MXCM33_CM33_NS_VECTOR_TABLE_BASE CM33_NS_VECTOR_TABLE_BASE; /**< \brief 1004, CM33 non-secure vector table base*/
       __I  Ifx_UReg_8Bit                       reserved_1008[4088];    /**< \brief 1008, */
       __IO Ifx_MXCM33_CM33_PC_CTL              CM33_PC_CTL;            /**< \brief 2000, CM33 protection context control*/
       __I  Ifx_UReg_8Bit                       reserved_2004[60];      /**< \brief 2004, */
       __IO Ifx_MXCM33_CM33_PC0_HANDLER         CM33_PC0_HANDLER;       /**< \brief 2040, CM33 protection context 0 handler*/
       __I  Ifx_UReg_8Bit                       reserved_2044[188];     /**< \brief 2044, */
       __IO Ifx_MXCM33_CM33_PC1_HANDLER         CM33_PC1_HANDLER;       /**< \brief 2100, CM33 protection context 1 handler*/
       __I  Ifx_UReg_8Bit                       reserved_2104[60];      /**< \brief 2104, */
       __IO Ifx_MXCM33_CM33_PC2_HANDLER         CM33_PC2_HANDLER;       /**< \brief 2140, CM33 protection context 2 handler*/
       __I  Ifx_UReg_8Bit                       reserved_2144[60];      /**< \brief 2144, */
       __IO Ifx_MXCM33_CM33_PC3_HANDLER         CM33_PC3_HANDLER;       /**< \brief 2180, CM33 protection context 3 handler*/
       __I  Ifx_UReg_8Bit                       reserved_2184[56956];   /**< \brief 2184, */
} Ifx_MXCM33;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXMXCM33_REGDEF_H_ */
