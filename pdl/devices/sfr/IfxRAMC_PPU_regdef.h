/***************************************************************************//**
* \file IfxRAMC_PPU_regdef.h
*
* \brief
* RAMC_PPU Registers
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
* \defgroup IfxSfr_RAMC_PPU_Registers RAMC_PPU Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_RAMC_PPU_Registers_Bitfields Bitfields
* \ingroup IfxSfr_RAMC_PPU_Registers
*
* \defgroup IfxSfr_RAMC_PPU_Registers_union Register unions
* \ingroup IfxSfr_RAMC_PPU_Registers
*
* \defgroup IfxSfr_RAMC_PPU_Registers_struct Memory map
* \ingroup IfxSfr_RAMC_PPU_Registers
*
*******************************************************************************/

#ifndef _IFXRAMC_PPU_REGDEF_H_
#define _IFXRAMC_PPU_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_RAMC_PPU_Registers_Bitfields
 * \{  */
/** \brief Power Policy Register */
typedef struct _Ifx_RAMC_PPU_PWPR_Bits
{
    __IO Ifx_UReg_32Bit PWR_POLICY:4;           /**< \brief [3:0]   Power mode policy.
                                                                    When static power mode transitions are enabled,
                                                                    PWR_DYN_EN is set to 0, this is the target power
                                                                    mode for the PPU.
                                                                    When dynamic power mode transitions are enabled,
                                                                    PWR_DYN_EN is set to 1, this is the minimum power
                                                                    mode for the PPU.
                                                                    This PPU supports the following modes: OFF(0),
                                                                    MEM_RET(2), ON(8).
                                                                    Do not use WARM_RST(9) or other unsupported modes. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit PWR_DYN_EN:1;           /**< \brief [8:8]   Power mode dynamic transition enable.
                                                                    When this bit is set to 1 dynamic transitions are
                                                                    enabled for power modes, allowing transitions to be
                                                                    initiated by changes on power mode DEVACTIVE inputs. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [11:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit LOCK_EN:1;              /**< \brief [12:12] Reserved (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit OP_POLICY:4;            /**< \brief [19:16] Reserved (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [23:20] \internal Reserved */
    __IO Ifx_UReg_32Bit OP_DYN_EN:1;            /**< \brief [24:24] Reserved (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_RAMC_PPU_PWPR_Bits;

/** \brief Power Mode Emulation Register */
typedef struct _Ifx_RAMC_PPU_PMER_Bits
{
    __IO Ifx_UReg_32Bit EMU_EN:1;               /**< \brief [0:0]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_RAMC_PPU_PMER_Bits;

/** \brief Power Status Register */
typedef struct _Ifx_RAMC_PPU_PWSR_Bits
{
    __I  Ifx_UReg_32Bit PWR_STATUS:4;           /**< \brief [3:0]   Power mode status.
                                                                    These bits reflect the current power mode of the PPU.
                                                                    See PPU_PWPR.PWR_POLICY for power mode enumeration. (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __I  Ifx_UReg_32Bit PWR_DYN_STATUS:1;       /**< \brief [8:8]   Power mode dynamic transition status.
                                                                    When set to 1 power mode dynamic transitions are enabled.
                                                                    There might be a delay in dynamic transitions
                                                                    becoming active or inactive if the PPU is
                                                                    transitioning when PWR_DYN_EN is programmed. (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [11:9]  \internal Reserved */
    __I  Ifx_UReg_32Bit LOCK_STATUS:1;          /**< \brief [12:12] Reserved (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __I  Ifx_UReg_32Bit OP_STATUS:4;            /**< \brief [19:16] Reserved (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [23:20] \internal Reserved */
    __I  Ifx_UReg_32Bit OP_DYN_STATUS:1;        /**< \brief [24:24] Reserved (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_RAMC_PPU_PWSR_Bits;

/** \brief Device Interface Input Current Status Register */
typedef struct _Ifx_RAMC_PPU_DISR_Bits
{
    __I  Ifx_UReg_32Bit PWR_DEVACTIVE_STATUS:11; /**< \brief [10:0]  Status of the power mode DEVACTIVE inputs.
                                                                    There is one bit for each device interface
                                                                    Q-Channel DEVQACTIVE.
                                                                    For example, bit 0 is for Q-channel device 0 DEVQACTIVE.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (r) */
    __I  Ifx_UReg_32Bit :13;                    /**< \brief [23:11] \internal Reserved */
    __I  Ifx_UReg_32Bit OP_DEVACTIVE_STATUS:8;  /**< \brief [31:24] Reserved (r) */
} Ifx_RAMC_PPU_DISR_Bits;

/** \brief Miscellaneous Input Current Status Register */
typedef struct _Ifx_RAMC_PPU_MISR_Bits
{
    __I  Ifx_UReg_32Bit PCSMPACCEPT_STATUS:1;   /**< \brief [0:0]   The status of the PCSMPACCEPT input. (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [7:1]   \internal Reserved */
    __I  Ifx_UReg_32Bit DEVACCEPT_STATUS:8;     /**< \brief [15:8]  Status of the device interface DEVACCEPT inputs.
                                                                    There is one bit for each device interface DEVQACCEPTn.
                                                                    For example, bit 8 is for Q-Channel 0 DEVQACCEPTn
                                                                    and bit 9 for Q-Channel 1 DEVQACCEPTn.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (r) */
    __I  Ifx_UReg_32Bit DEVDENY_STATUS:8;       /**< \brief [23:16] Status of the device interface DEVDENY inputs.
                                                                    There is one bit for each device interface DEVQDENY.
                                                                    For example, bit 16 is for Q-Channel 0 DEVQDENY,
                                                                    and bit 17 for Q-Channel 1 DEVQDENY.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (r) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_RAMC_PPU_MISR_Bits;

/** \brief Stored Status Register */
typedef struct _Ifx_RAMC_PPU_STSR_Bits
{
    __I  Ifx_UReg_32Bit STORED_DEVDENY:8;       /**< \brief [7:0]   Reserved (this PPU has a single Q-channel) (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_STSR_Bits;

/** \brief Unlock register */
typedef struct _Ifx_RAMC_PPU_UNLK_Bits
{
    __IO Ifx_UReg_32Bit UNLOCK:1;               /**< \brief [0:0]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_RAMC_PPU_UNLK_Bits;

/** \brief Power Configuration Register */
typedef struct _Ifx_RAMC_PPU_PWCR_Bits
{
    __IO Ifx_UReg_32Bit DEVREQEN:8;             /**< \brief [7:0]   When set to 1 enables the device interface
                                                                    handshake for transitions.
                                                                    All available bits are reset to 1.
                                                                    There is one bit for each device interface channel.
                                                                    For example, bit 0 is for Q-Channel 0, and bit 1 is
                                                                    for Q-Channel 1.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (rw) */
    __IO Ifx_UReg_32Bit PWR_DEVACTIVEEN:11;     /**< \brief [18:8]  These bits enable the power mode DEVACTIVE inputs.
                                                                    When a bit is to 1 the related DEVACTIVE input is
                                                                    enabled, when set to 0 it is disabled.
                                                                    All available bits are reset to 1.
                                                                    There is one bit for each device interface
                                                                    Q-Channel DEVQACTIVE.
                                                                    For example, bit 8 is for the Q-Channel 0
                                                                    DEVQACTIVE, and bit 9 for the Q-Channel 1 DEVQACTIVE.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [23:19] \internal Reserved */
    __IO Ifx_UReg_32Bit OP_DEVACTIVEEN:8;       /**< \brief [31:24] Reserved (rw) */
} Ifx_RAMC_PPU_PWCR_Bits;

/** \brief Power Mode Transition Configuration Register */
typedef struct _Ifx_RAMC_PPU_PTCR_Bits
{
    __IO Ifx_UReg_32Bit WARM_RST_DEVREQEN:1;    /**< \brief [0:0]   Transition behavior between ON and WARM_RST.
                                                                    This bit should not be modified when the PPU is in
                                                                    WARM_RST, or if the PPU is performing a transition,
                                                                    otherwise PPU behavior is UNPREDICTABLE.
                                                                    0:  The PPU does not perform a device interface
                                                                    handshake when transitioning between ON and
                                                                    WARM_RST.
                                                                    1:  The PPU performs a device interface handshake
                                                                    when transitioning between ON and WARM_RST.
                                                                    This disables all Q-Channels for this transition. (rw) */
    __IO Ifx_UReg_32Bit DBG_RECOV_PORST_EN:1;   /**< \brief [1:1]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_RAMC_PPU_PTCR_Bits;

/** \brief Interrupt Mask Register */
typedef struct _Ifx_RAMC_PPU_IMR_Bits
{
    __IO Ifx_UReg_32Bit STA_POLICY_TRN_IRQ_MASK:1; /**< \brief [0:0]   Static full policy transition completion
                                                                    event mask. (rw) */
    __IO Ifx_UReg_32Bit STA_ACCEPT_IRQ_MASK:1;  /**< \brief [1:1]   Static transition acceptance event mask. (rw) */
    __IO Ifx_UReg_32Bit STA_DENY_IRQ_MASK:1;    /**< \brief [2:2]   Static transition denial event mask. (rw) */
    __IO Ifx_UReg_32Bit EMU_ACCEPT_IRQ_MASK:1;  /**< \brief [3:3]   Reserved (rw) */
    __IO Ifx_UReg_32Bit EMU_DENY_IRQ_MASK:1;    /**< \brief [4:4]   Reserved (rw) */
    __IO Ifx_UReg_32Bit LOCKED_IRQ_MASK:1;      /**< \brief [5:5]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_RAMC_PPU_IMR_Bits;

/** \brief Additional Interrupt Mask Register */
typedef struct _Ifx_RAMC_PPU_AIMR_Bits
{
    __IO Ifx_UReg_32Bit UNSPT_POLICY_IRQ_MASK:1; /**< \brief [0:0]   Unsupported Policy event mask. (rw) */
    __IO Ifx_UReg_32Bit DYN_ACCEPT_IRQ_MASK:1;  /**< \brief [1:1]   Dynamic transition acceptance event mask. (rw) */
    __IO Ifx_UReg_32Bit DYN_DENY_IRQ_MASK:1;    /**< \brief [2:2]   Dynamic transition denial event mask. (rw) */
    __IO Ifx_UReg_32Bit STA_POLICY_PWR_IRQ_MASK:1; /**< \brief [3:3]   Reserved (rw) */
    __IO Ifx_UReg_32Bit STA_POLICY_OP_IRQ_MASK:1; /**< \brief [4:4]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_RAMC_PPU_AIMR_Bits;

/** \brief Interrupt Status Register */
typedef struct _Ifx_RAMC_PPU_ISR_Bits
{
    __IO Ifx_UReg_32Bit STA_POLICY_TRN_IRQ:1;   /**< \brief [0:0]   Static full policy transition completion
                                                                    event status. (rw) */
    __IO Ifx_UReg_32Bit STA_ACCEPT_IRQ:1;       /**< \brief [1:1]   Static transition acceptance event status. (rw) */
    __IO Ifx_UReg_32Bit STA_DENY_IRQ:1;         /**< \brief [2:2]   Static transition denial event status. (rw) */
    __IO Ifx_UReg_32Bit EMU_ACCEPT_IRQ:1;       /**< \brief [3:3]   Reserved (rw) */
    __IO Ifx_UReg_32Bit EMU_DENY_IRQ:1;         /**< \brief [4:4]   Reserved (rw) */
    __IO Ifx_UReg_32Bit LOCKED_IRQ:1;           /**< \brief [5:5]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [6:6]   \internal Reserved */
    __I  Ifx_UReg_32Bit OTHER_IRQ:1;            /**< \brief [7:7]   Indicates there is an interrupt event
                                                                    pending in the Additional Interrupt Status Register
                                                                    (PPU_AISR). (r) */
    __IO Ifx_UReg_32Bit PWR_ACTIVE_EDGE_IRQ:11; /**< \brief [18:8]  Indicates which power mode DEVACTIVE inputs
                                                                    caused the input edge event.
                                                                    Bits for unused channels are the MSBs and are
                                                                    reserved.
                                                                    There is one bit for each device Q-Channel DEVQACTIVE.
                                                                    For example, bit 8 is for the Q-Channel 0 DEVQACTIVE.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [23:19] \internal Reserved */
    __IO Ifx_UReg_32Bit OP_ACTIVE_EDGE_IRQ:8;   /**< \brief [31:24] Indicates which operating mode DEVPACTIVE
                                                                    inputs caused the input edge event.
                                                                    When operating modes are not supported this field
                                                                    is reserved. (rw) */
} Ifx_RAMC_PPU_ISR_Bits;

/** \brief Additional Interrupt Status Register */
typedef struct _Ifx_RAMC_PPU_AISR_Bits
{
    __IO Ifx_UReg_32Bit UNSPT_POLICY_IRQ:1;     /**< \brief [0:0]   Unsupported Policy event status. (rw) */
    __IO Ifx_UReg_32Bit DYN_ACCEPT_IRQ:1;       /**< \brief [1:1]   Dynamic transition acceptance event status. (rw) */
    __IO Ifx_UReg_32Bit DYN_DENY_IRQ:1;         /**< \brief [2:2]   Dynamic transition denial event status. (rw) */
    __IO Ifx_UReg_32Bit STA_POLICY_PWR_IRQ:1;   /**< \brief [3:3]   Reserved (rw) */
    __IO Ifx_UReg_32Bit STA_POLICY_OP_IRQ:1;    /**< \brief [4:4]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_RAMC_PPU_AISR_Bits;

/** \brief Input Edge Sensitivity Register */
typedef struct _Ifx_RAMC_PPU_IESR_Bits
{
    __IO Ifx_UReg_32Bit DEVACTIVE00_EDGE:2;     /**< \brief [1:0]   DEVACTIVE 0 edge sensitivity. (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE01_EDGE:2;     /**< \brief [3:2]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE02_EDGE:2;     /**< \brief [5:4]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE03_EDGE:2;     /**< \brief [7:6]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE04_EDGE:2;     /**< \brief [9:8]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE05_EDGE:2;     /**< \brief [11:10] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE06_EDGE:2;     /**< \brief [13:12] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE07_EDGE:2;     /**< \brief [15:14] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE08_EDGE:2;     /**< \brief [17:16] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE09_EDGE:2;     /**< \brief [19:18] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE10_EDGE:2;     /**< \brief [21:20] Reserved (rw) */
    __I  Ifx_UReg_32Bit :10;                    /**< \brief [31:22] \internal Reserved */
} Ifx_RAMC_PPU_IESR_Bits;

/** \brief Operating Mode Active Edge Sensitivity Register */
typedef struct _Ifx_RAMC_PPU_OPSR_Bits
{
    __IO Ifx_UReg_32Bit DEVACTIVE16_EDGE:2;     /**< \brief [1:0]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE17_EDGE:2;     /**< \brief [3:2]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE18_EDGE:2;     /**< \brief [5:4]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE19_EDGE:2;     /**< \brief [7:6]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE20_EDGE:2;     /**< \brief [9:8]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE21_EDGE:2;     /**< \brief [11:10] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE22_EDGE:2;     /**< \brief [13:12] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE23_EDGE:2;     /**< \brief [15:14] Reserved (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_RAMC_PPU_OPSR_Bits;

/** \brief Functional Retention RAM Configuration Register */
typedef struct _Ifx_RAMC_PPU_FUNRR_Bits
{
    __IO Ifx_UReg_32Bit FUNC_RET_RAM_CFG:8;     /**< \brief [7:0]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_FUNRR_Bits;

/** \brief Full Retention RAM Configuration Register */
typedef struct _Ifx_RAMC_PPU_FULRR_Bits
{
    __IO Ifx_UReg_32Bit FULL_RET_RAM_CFG:8;     /**< \brief [7:0]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_FULRR_Bits;

/** \brief Memory Retention RAM Configuration Register */
typedef struct _Ifx_RAMC_PPU_MEMRR_Bits
{
    __IO Ifx_UReg_32Bit MEM_RET_RAM_CFG:8;      /**< \brief [7:0]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_MEMRR_Bits;

/** \brief Power Mode Entry Delay Register 0 */
typedef struct _Ifx_RAMC_PPU_EDTR0_Bits
{
    __IO Ifx_UReg_32Bit OFF_DEL:8;              /**< \brief [7:0]   Reserved (rw) */
    __IO Ifx_UReg_32Bit MEM_RET_DEL:8;          /**< \brief [15:8]  Reserved (rw) */
    __IO Ifx_UReg_32Bit LOGIC_RET_DEL:8;        /**< \brief [23:16] Reserved (rw) */
    __IO Ifx_UReg_32Bit FULL_RET_DEL:8;         /**< \brief [31:24] Reserved (rw) */
} Ifx_RAMC_PPU_EDTR0_Bits;

/** \brief Power Mode Entry Delay Register 1 */
typedef struct _Ifx_RAMC_PPU_EDTR1_Bits
{
    __IO Ifx_UReg_32Bit MEM_OFF_DEL:8;          /**< \brief [7:0]   Reserved (rw) */
    __IO Ifx_UReg_32Bit FUNC_RET_DEL:8;         /**< \brief [15:8]  Reserved (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_RAMC_PPU_EDTR1_Bits;

/** \brief Device Control Delay Configuration Register 0 */
typedef struct _Ifx_RAMC_PPU_DCDR0_Bits
{
    __I  Ifx_UReg_32Bit CLKEN_RST_DLY:8;        /**< \brief [7:0]   Reserved (r) */
    __I  Ifx_UReg_32Bit ISO_CLKEN_DLY:8;        /**< \brief [15:8]  Reserved (r) */
    __I  Ifx_UReg_32Bit RST_HWSTAT_DLY:8;       /**< \brief [23:16] Reserved (r) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_RAMC_PPU_DCDR0_Bits;

/** \brief Device Control Delay Configuration Register 1 */
typedef struct _Ifx_RAMC_PPU_DCDR1_Bits
{
    __I  Ifx_UReg_32Bit ISO_RST_DLY:8;          /**< \brief [7:0]   Reserved (r) */
    __I  Ifx_UReg_32Bit CLKEN_ISO_DLY:8;        /**< \brief [15:8]  Reserved (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_RAMC_PPU_DCDR1_Bits;

/** \brief PPU Identification Register 0 */
typedef struct _Ifx_RAMC_PPU_IDR0_Bits
{
    __I  Ifx_UReg_32Bit DEVCHAN:4;              /**< \brief [3:0]   No. of Device Interface Channels.
                                                                    The device enumeration is:
                                                                    Device 0: PDCM (r) */
    __I  Ifx_UReg_32Bit NUM_OPMODE:4;           /**< \brief [7:4]   No. of operating modes supported is NUM_OPMODE + 1. (r) */
    __I  Ifx_UReg_32Bit STA_OFF_SPT:1;          /**< \brief [8:8]   OFF support. (r) */
    __I  Ifx_UReg_32Bit STA_OFF_EMU_SPT:1;      /**< \brief [9:9]   OFF_EMU support. (r) */
    __I  Ifx_UReg_32Bit STA_MEM_RET_SPT:1;      /**< \brief [10:10] MEM_RET support. (r) */
    __I  Ifx_UReg_32Bit STA_MEM_RET_EMU_SPT:1;  /**< \brief [11:11] MEM_RET_EMU support. (r) */
    __I  Ifx_UReg_32Bit STA_LGC_RET_SPT:1;      /**< \brief [12:12] LOGIC_RET support. (r) */
    __I  Ifx_UReg_32Bit STA_MEM_OFF_SPT:1;      /**< \brief [13:13] MEM_OFF support. (r) */
    __I  Ifx_UReg_32Bit STA_FULL_RET_SPT:1;     /**< \brief [14:14] FULL_RET support. (r) */
    __I  Ifx_UReg_32Bit STA_FUNC_RET_SPT:1;     /**< \brief [15:15] FUNC_RET support. (r) */
    __I  Ifx_UReg_32Bit STA_ON_SPT:1;           /**< \brief [16:16] ON support. (r) */
    __I  Ifx_UReg_32Bit STA_WRM_RST_SPT:1;      /**< \brief [17:17] WARM_RST support.  Ignore this bit.
                                                                    Do not use WARM_RST. (r) */
    __I  Ifx_UReg_32Bit STA_DBG_RECOV_SPT:1;    /**< \brief [18:18] DBG_RECOV support. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __I  Ifx_UReg_32Bit DYN_OFF_SPT:1;          /**< \brief [20:20] Dynamic OFF support. (r) */
    __I  Ifx_UReg_32Bit DYN_OFF_EMU_SPT:1;      /**< \brief [21:21] Dynamic OFF_EMU support. (r) */
    __I  Ifx_UReg_32Bit DYN_MEM_RET_SPT:1;      /**< \brief [22:22] Dynamic MEM_RET support. (r) */
    __I  Ifx_UReg_32Bit DYN_MEM_RET_EMU_SPT:1;  /**< \brief [23:23] Dynamic MEM_RET_EMU support (r) */
    __I  Ifx_UReg_32Bit DYN_LGC_RET_SPT:1;      /**< \brief [24:24] Dynamic LOGIC_RET support. (r) */
    __I  Ifx_UReg_32Bit DYN_MEM_OFF_SPT:1;      /**< \brief [25:25] Dynamic MEM_OFF support. (r) */
    __I  Ifx_UReg_32Bit DYN_FULL_RET_SPT:1;     /**< \brief [26:26] Dynamic FULL_RET support. (r) */
    __I  Ifx_UReg_32Bit DYN_FUNC_RET_SPT:1;     /**< \brief [27:27] Dynamic FUNC_RET support. (r) */
    __I  Ifx_UReg_32Bit DYN_ON_SPT:1;           /**< \brief [28:28] Dynamic ON support. (r) */
    __I  Ifx_UReg_32Bit DYN_WRM_RST_SPT:1;      /**< \brief [29:29] Dynamic WARM_RST support. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_RAMC_PPU_IDR0_Bits;

/** \brief PPU Identification Register 1 */
typedef struct _Ifx_RAMC_PPU_IDR1_Bits
{
    __I  Ifx_UReg_32Bit PWR_MODE_ENTRY_DEL_SPT:1; /**< \brief [0:0]   Power mode entry delay support. (r) */
    __I  Ifx_UReg_32Bit SW_DEV_DEL_SPT:1;       /**< \brief [1:1]   Software device delay control configuration
                                                                    support. (r) */
    __I  Ifx_UReg_32Bit LOCK_SPT:1;             /**< \brief [2:2]   Lock and the lock interrupt event are supported. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __I  Ifx_UReg_32Bit MEM_RET_RAM_REG:1;      /**< \brief [4:4]   Indicates if the PPU_MEMRR register is
                                                                    present or reserved.  0: Reserved.  1: Present. (r) */
    __I  Ifx_UReg_32Bit FULL_RET_RAM_REG:1;     /**< \brief [5:5]   Indicates if the PPU_FULRR register is
                                                                    present or reserved.  0: Reserved.  1: Present. (r) */
    __I  Ifx_UReg_32Bit FUNC_RET_RAM_REG:1;     /**< \brief [6:6]   Indicates if the PPU_FUNRR register is
                                                                    present or reserved.  0: Reserved.  1: Present. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __I  Ifx_UReg_32Bit STA_POLICY_PWR_IRQ_SPT:1; /**< \brief [8:8]   Power policy transition completion event status. (r) */
    __I  Ifx_UReg_32Bit STA_POLICY_OP_IRQ_SPT:1; /**< \brief [9:9]   Operating policy transition completion
                                                                    event status. (r) */
    __I  Ifx_UReg_32Bit OP_ACTIVE:1;            /**< \brief [10:10] Reserved (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __I  Ifx_UReg_32Bit OFF_MEM_RET_TRANS:1;    /**< \brief [12:12] OFF to MEM_RET direct transition.
                                                                    Indicates if direct transitions from OFF to MEM_RET
                                                                    and from OFF_EMU to MEM_RET_EMU are supported. (r) */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [31:13] \internal Reserved */
} Ifx_RAMC_PPU_IDR1_Bits;

/** \brief Implementation Identification Register */
typedef struct _Ifx_RAMC_PPU_IIDR_Bits
{
    __I  Ifx_UReg_32Bit IMPLEMENTER:12;         /**< \brief [11:0]  Implementer identification.
                                                                    [11:8] The JEP106 continuation code of the implementer.
                                                                    [7] Always 0.
                                                                    [6:0] The JEP106 identity code of the implementer.
                                                                    For an Arm implementation, bits [11:0] are 0x43B. (r) */
    __I  Ifx_UReg_32Bit REVISION:4;             /**< \brief [15:12] Minor revision of the product. (r) */
    __I  Ifx_UReg_32Bit VARIANT:4;              /**< \brief [19:16] Major revision of the product. (r) */
    __I  Ifx_UReg_32Bit PRODUCT_ID:12;          /**< \brief [31:20] PPU part identification. (r) */
} Ifx_RAMC_PPU_IIDR_Bits;

/** \brief Architecture Identification Register */
typedef struct _Ifx_RAMC_PPU_AIDR_Bits
{
    __I  Ifx_UReg_32Bit ARCH_REV_MINOR:4;       /**< \brief [3:0]   0x1 - PPU Architecture minor revision 1.
                                                                    Other Values - Reserved. (r) */
    __I  Ifx_UReg_32Bit ARCH_REV_MAJOR:4;       /**< \brief [7:4]   0x1 - PPU architecture major revision 1.
                                                                    Other Values - Reserved. (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_AIDR_Bits;

/** \brief Implementation Defined Identification Register (PID4) */
typedef struct _Ifx_RAMC_PPU_PID4_Bits
{
    __I  Ifx_UReg_32Bit IMPLEMENTER_11_8:4;     /**< \brief [3:0]   The JEP106 continuation code of the
                                                                    implementer, which is 0x4 hardcoded value. (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_RAMC_PPU_PID4_Bits;

/** \brief Implementation Defined Identification Register (PID0) */
typedef struct _Ifx_RAMC_PPU_PID0_Bits
{
    __I  Ifx_UReg_32Bit PRODUCT_ID_7_0:8;       /**< \brief [7:0]   PPU part identification bits [7:0]. (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_PID0_Bits;

/** \brief Implementation Defined Identification Register (PID1) */
typedef struct _Ifx_RAMC_PPU_PID1_Bits
{
    __I  Ifx_UReg_32Bit PRODUCT_ID_11_8:4;      /**< \brief [3:0]   PPU part identification bits [11:8] (r) */
    __I  Ifx_UReg_32Bit IMPLEMENTER_3_0:4;      /**< \brief [7:4]   JEP106_ID bits [3:0] (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_PID1_Bits;

/** \brief Implementation Defined Identification Register (PID2) */
typedef struct _Ifx_RAMC_PPU_PID2_Bits
{
    __I  Ifx_UReg_32Bit IMPLEMENTER_6_4:3;      /**< \brief [2:0]   JEP106_ID bits [6:4] (r) */
    __I  Ifx_UReg_32Bit CONST_HIGH:1;           /**< \brief [3:3]   Constant HIGH (r) */
    __I  Ifx_UReg_32Bit REV_CONST:4;            /**< \brief [7:4]   Constant LOW  Revision (4 bits) (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_PID2_Bits;

/** \brief Implementation Defined Identification Register (PID3) */
typedef struct _Ifx_RAMC_PPU_PID3_Bits
{
    __I  Ifx_UReg_32Bit PID3_REV_CONST:4;       /**< \brief [3:0]   Constant LOW (4 bits) (r) */
    __I  Ifx_UReg_32Bit PID3_REVISION:4;        /**< \brief [7:4]   Minor revision of the product. (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_PID3_Bits;

/** \brief Implementation Defined Identification Register (ID0) */
typedef struct _Ifx_RAMC_PPU_ID0_Bits
{
    __I  Ifx_UReg_32Bit ID0:8;                  /**< \brief [7:0]   ID0 hard coded value (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_ID0_Bits;

/** \brief Implementation Defined Identification Register (ID1) */
typedef struct _Ifx_RAMC_PPU_ID1_Bits
{
    __I  Ifx_UReg_32Bit ID1:8;                  /**< \brief [7:0]   ID1 hardcoded value (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_ID1_Bits;

/** \brief Implementation Defined Identification Register (ID2) */
typedef struct _Ifx_RAMC_PPU_ID2_Bits
{
    __I  Ifx_UReg_32Bit ID2:8;                  /**< \brief [7:0]   ID2 hardcoded value (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_ID2_Bits;

/** \brief Implementation Defined Identification Register (ID3) */
typedef struct _Ifx_RAMC_PPU_ID3_Bits
{
    __I  Ifx_UReg_32Bit ID3:8;                  /**< \brief [7:0]   ID3 hardcoded value (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_RAMC_PPU_ID3_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_RAMC_PPU_Registers_union
 * \{   */
/** \brief Power Policy Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_PWPR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_PWPR;

/** \brief Power Mode Emulation Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_PMER_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_PMER;

/** \brief Power Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_PWSR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_PWSR;

/** \brief Device Interface Input Current Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_DISR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_DISR;

/** \brief Miscellaneous Input Current Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_MISR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_MISR;

/** \brief Stored Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_STSR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_STSR;

/** \brief Unlock register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_UNLK_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_UNLK;

/** \brief Power Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_PWCR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_PWCR;

/** \brief Power Mode Transition Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_PTCR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_PTCR;

/** \brief Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_IMR_Bits B;                    /**< \brief Bitfield access */
} Ifx_RAMC_PPU_IMR;

/** \brief Additional Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_AIMR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_AIMR;

/** \brief Interrupt Status Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_ISR_Bits B;                    /**< \brief Bitfield access */
} Ifx_RAMC_PPU_ISR;

/** \brief Additional Interrupt Status Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_AISR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_AISR;

/** \brief Input Edge Sensitivity Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_IESR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_IESR;

/** \brief Operating Mode Active Edge Sensitivity Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_OPSR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_OPSR;

/** \brief Functional Retention RAM Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_FUNRR_Bits B;                  /**< \brief Bitfield access */
} Ifx_RAMC_PPU_FUNRR;

/** \brief Full Retention RAM Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_FULRR_Bits B;                  /**< \brief Bitfield access */
} Ifx_RAMC_PPU_FULRR;

/** \brief Memory Retention RAM Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_MEMRR_Bits B;                  /**< \brief Bitfield access */
} Ifx_RAMC_PPU_MEMRR;

/** \brief Power Mode Entry Delay Register 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_EDTR0_Bits B;                  /**< \brief Bitfield access */
} Ifx_RAMC_PPU_EDTR0;

/** \brief Power Mode Entry Delay Register 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_EDTR1_Bits B;                  /**< \brief Bitfield access */
} Ifx_RAMC_PPU_EDTR1;

/** \brief Device Control Delay Configuration Register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_DCDR0_Bits B;                  /**< \brief Bitfield access */
} Ifx_RAMC_PPU_DCDR0;

/** \brief Device Control Delay Configuration Register 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_DCDR1_Bits B;                  /**< \brief Bitfield access */
} Ifx_RAMC_PPU_DCDR1;

/** \brief PPU Identification Register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_IDR0_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_IDR0;

/** \brief PPU Identification Register 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_IDR1_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_IDR1;

/** \brief Implementation Identification Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_IIDR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_IIDR;

/** \brief Architecture Identification Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_AIDR_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_AIDR;

/** \brief Implementation Defined Identification Register (PID4) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_PID4_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_PID4;

/** \brief Implementation Defined Identification Register (PID0) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_PID0_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_PID0;

/** \brief Implementation Defined Identification Register (PID1) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_PID1_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_PID1;

/** \brief Implementation Defined Identification Register (PID2) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_PID2_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_PID2;

/** \brief Implementation Defined Identification Register (PID3) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_PID3_Bits B;                   /**< \brief Bitfield access */
} Ifx_RAMC_PPU_PID3;

/** \brief Implementation Defined Identification Register (ID0) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_ID0_Bits B;                    /**< \brief Bitfield access */
} Ifx_RAMC_PPU_ID0;

/** \brief Implementation Defined Identification Register (ID1) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_ID1_Bits B;                    /**< \brief Bitfield access */
} Ifx_RAMC_PPU_ID1;

/** \brief Implementation Defined Identification Register (ID2) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_ID2_Bits B;                    /**< \brief Bitfield access */
} Ifx_RAMC_PPU_ID2;

/** \brief Implementation Defined Identification Register (ID3) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_RAMC_PPU_ID3_Bits B;                    /**< \brief Bitfield access */
} Ifx_RAMC_PPU_ID3;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_RAMC_PPU_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief RAMC_PPU object */
typedef volatile struct _Ifx_RAMC_PPU
{
       __IO Ifx_RAMC_PPU_PWPR                   PWPR;                   /**< \brief 0, Power Policy Register*/
       __IO Ifx_RAMC_PPU_PMER                   PMER;                   /**< \brief 4, Power Mode Emulation Register*/
       __I  Ifx_RAMC_PPU_PWSR                   PWSR;                   /**< \brief 8, Power Status Register*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
       __I  Ifx_RAMC_PPU_DISR                   DISR;                   /**< \brief 10, Device Interface Input Current Status Register*/
       __I  Ifx_RAMC_PPU_MISR                   MISR;                   /**< \brief 14, Miscellaneous Input Current Status Register*/
       __I  Ifx_RAMC_PPU_STSR                   STSR;                   /**< \brief 18, Stored Status Register*/
       __IO Ifx_RAMC_PPU_UNLK                   UNLK;                   /**< \brief 1C, Unlock register*/
       __IO Ifx_RAMC_PPU_PWCR                   PWCR;                   /**< \brief 20, Power Configuration Register*/
       __IO Ifx_RAMC_PPU_PTCR                   PTCR;                   /**< \brief 24, Power Mode Transition Configuration Register*/
       __I  Ifx_UReg_8Bit                       reserved_28[8];         /**< \brief 28, */
       __IO Ifx_RAMC_PPU_IMR                    IMR;                    /**< \brief 30, Interrupt Mask Register*/
       __IO Ifx_RAMC_PPU_AIMR                   AIMR;                   /**< \brief 34, Additional Interrupt Mask Register*/
       __IO Ifx_RAMC_PPU_ISR                    ISR;                    /**< \brief 38, Interrupt Status Register*/
       __IO Ifx_RAMC_PPU_AISR                   AISR;                   /**< \brief 3C, Additional Interrupt Status Register*/
       __IO Ifx_RAMC_PPU_IESR                   IESR;                   /**< \brief 40, Input Edge Sensitivity Register*/
       __IO Ifx_RAMC_PPU_OPSR                   OPSR;                   /**< \brief 44, Operating Mode Active Edge Sensitivity Register*/
       __I  Ifx_UReg_8Bit                       reserved_48[8];         /**< \brief 48, */
       __IO Ifx_RAMC_PPU_FUNRR                  FUNRR;                  /**< \brief 50, Functional Retention RAM Configuration Register*/
       __IO Ifx_RAMC_PPU_FULRR                  FULRR;                  /**< \brief 54, Full Retention RAM Configuration Register*/
       __IO Ifx_RAMC_PPU_MEMRR                  MEMRR;                  /**< \brief 58, Memory Retention RAM Configuration Register*/
       __I  Ifx_UReg_8Bit                       reserved_5C[260];       /**< \brief 5C, */
       __IO Ifx_RAMC_PPU_EDTR0                  EDTR0;                  /**< \brief 160, Power Mode Entry Delay Register 0*/
       __IO Ifx_RAMC_PPU_EDTR1                  EDTR1;                  /**< \brief 164, Power Mode Entry Delay Register 1*/
       __I  Ifx_UReg_8Bit                       reserved_168[8];        /**< \brief 168, */
       __I  Ifx_RAMC_PPU_DCDR0                  DCDR0;                  /**< \brief 170, Device Control Delay Configuration Register 0*/
       __I  Ifx_RAMC_PPU_DCDR1                  DCDR1;                  /**< \brief 174, Device Control Delay Configuration Register 1*/
       __I  Ifx_UReg_8Bit                       reserved_178[3640];     /**< \brief 178, */
       __I  Ifx_RAMC_PPU_IDR0                   IDR0;                   /**< \brief FB0, PPU Identification Register 0*/
       __I  Ifx_RAMC_PPU_IDR1                   IDR1;                   /**< \brief FB4, PPU Identification Register 1*/
       __I  Ifx_UReg_8Bit                       reserved_FB8[16];       /**< \brief FB8, */
       __I  Ifx_RAMC_PPU_IIDR                   IIDR;                   /**< \brief FC8, Implementation Identification Register*/
       __I  Ifx_RAMC_PPU_AIDR                   AIDR;                   /**< \brief FCC, Architecture Identification Register*/
       __I  Ifx_RAMC_PPU_PID4                   PID4;                   /**< \brief FD0, Implementation Defined Identification Register (PID4)*/
       __I  Ifx_UReg_8Bit                       reserved_FD4[12];       /**< \brief FD4, */
       __I  Ifx_RAMC_PPU_PID0                   PID0;                   /**< \brief FE0, Implementation Defined Identification Register (PID0)*/
       __I  Ifx_RAMC_PPU_PID1                   PID1;                   /**< \brief FE4, Implementation Defined Identification Register (PID1)*/
       __I  Ifx_RAMC_PPU_PID2                   PID2;                   /**< \brief FE8, Implementation Defined Identification Register (PID2)*/
       __I  Ifx_RAMC_PPU_PID3                   PID3;                   /**< \brief FEC, Implementation Defined Identification Register (PID3)*/
       __I  Ifx_RAMC_PPU_ID0                    ID0;                    /**< \brief FF0, Implementation Defined Identification Register (ID0)*/
       __I  Ifx_RAMC_PPU_ID1                    ID1;                    /**< \brief FF4, Implementation Defined Identification Register (ID1)*/
       __I  Ifx_RAMC_PPU_ID2                    ID2;                    /**< \brief FF8, Implementation Defined Identification Register (ID2)*/
       __I  Ifx_RAMC_PPU_ID3                    ID3;                    /**< \brief FFC, Implementation Defined Identification Register (ID3)*/
} Ifx_RAMC_PPU;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXRAMC_PPU_REGDEF_H_ */
