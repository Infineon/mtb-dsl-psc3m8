/***************************************************************************//**
* \file IfxFLASHC_regdef.h
*
* \brief
* FLASHC Registers
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
* \defgroup IfxSfr_FLASHC_Registers FLASHC Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_FLASHC_Registers_Bitfields Bitfields
* \ingroup IfxSfr_FLASHC_Registers
*
* \defgroup IfxSfr_FLASHC_Registers_union Register unions
* \ingroup IfxSfr_FLASHC_Registers
*
* \defgroup IfxSfr_FLASHC_Registers_struct Memory map
* \ingroup IfxSfr_FLASHC_Registers
*
*******************************************************************************/

#ifndef _IFXFLASHC_REGDEF_H_
#define _IFXFLASHC_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_FLASHC_Registers_Bitfields
 * \{  */
/** \brief Flash control */
typedef struct _Ifx_FLASHC_FLASH_CTL_Bits
{
    __IO Ifx_UReg_32Bit RBUS_WS:4;              /**< \brief [3:0]   FLASH macro main interface (R-bus) wait states:
                                                                    '0': 0 wait states.
                                                                    ...
                                                                    '15': 15 wait states (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit BANK_MAPPING:2;         /**< \brief [9:8]   Specifies mapping of FLASH macro main
                                                                    subregion.
                                                                    00: MAIN (Mapping A), WORK (Mapping A).
                                                                    01: MAIN (Mapping B), WORK (Mapping A).
                                                                    10: MAIN (Mapping A), WORK (Mapping B).
                                                                    11: MAIN (Mapping B), WORK (Mapping B).
                                                                    This field is only used when MAIN_BANK_MODE is '1'
                                                                    (dual bank mode). (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [11:10] \internal Reserved */
    __IO Ifx_UReg_32Bit BANK_MODE:1;            /**< \brief [12:12] Specifies bank mode of FLASH macro main array.
                                                                    0: Single bank mode.
                                                                    1: Dual bank mode. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit ECC_EN:1;               /**< \brief [16:16] Enable ECC checking for FLASH main (R-bus)
                                                                    interface:
                                                                    0: Disabled.
                                                                    ECC checking/reporting on FLASH main interface is disabled.
                                                                    No correctable or non-correctable faults are
                                                                    reported.
                                                                    1: Enabled. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [17:17] \internal Reserved */
    __IO Ifx_UReg_32Bit RBUS_ERR_SILENT:1;      /**< \brief [18:18] Please note that it is SW's responsibility
                                                                    that I$ of M33 must be disabled before setting
                                                                    RBUS_ERR_SILENT HIGH.
                                                                    Otherwise, the erroneous goes to I$ which is NOT desired.
                                                                    Specifies bus transfer behavior for a
                                                                    non-recoverable error on the FLASH macro main
                                                                    interface (either a non-correctable ECC error, a
                                                                    FLASH macro main interface internal error, a FLASH
                                                                    macro main interface memory hole access):
                                                                    0: Bus transfer has a bus error.
                                                                    1: Bus transfer does NOT have a bus error; i.e.
                                                                    the error is 'silent'
                                                                    In either case, the erroneous FLASH macro data is
                                                                    returned to CPU since I$ is disabled.
                                                                    This field is ONLY used by CPU bus transfers.
                                                                    Non-CPU bus transfers always have a bus transfer
                                                                    with a bus error and fault/interrupt, in case of a
                                                                    non-recoverable error.
                                                                    Note: All CPU bus masters have dedicated status
                                                                    registers (CM33 to register the occurrence of FLASH
                                                                    macro main interface (R-bus) internal errors.
                                                                    Note: fault reporting can be used to identify the
                                                                    error that occurred:
                                                                    - FLASH macro main interface internal error.
                                                                    - FLASH macro main interface non-recoverable ECC error.
                                                                    - FLASH macro main interface recoverable ECC error
                                                                    (over its threshold).
                                                                    - FLASH macro main interface memory hole error. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [23:19] \internal Reserved */
    __IO Ifx_UReg_32Bit ENFORCE_PC_LOCK:1;      /**< \brief [24:24] This bit can be set once and not cleared
                                                                    thereafter.
                                                                    When set the PC inheritiance and locking mechanism
                                                                    described with the FLASH_LOCK register is enabled.
                                                                    When cleared, access to the flash controller and
                                                                    flash macro is possible from any protection context
                                                                    with appropriate PPC permissions. (rw) */
    __IO Ifx_UReg_32Bit BLOCK_SECTOR_OPERATIONS:1; /**< \brief [25:25] This bit can be set once and not cleared
                                                                    thereafter.
                                                                    When set it is no longer possible to perform sector
                                                                    erase or sector DFT operations.
                                                                    The flash controller will block any write
                                                                    operations to the FM_CTL register pertaining to
                                                                    such operations. (rw) */
    __IO Ifx_UReg_32Bit BLOCK_SUBSECTOR_OPERATIONS:1; /**< \brief [26:26] This bit can be set once and not cleared
                                                                    thereafter.
                                                                    When set it is no longer possible to perform
                                                                    subsector erase or subsector DFT operations.
                                                                    The flash controller will block any write
                                                                    operations to the FM_CTL register pertaining to
                                                                    such operations. (rw) */
    __IO Ifx_UReg_32Bit BLOCK_BULK_OPERATIONS:1; /**< \brief [27:27] This bit can be set once and not cleared
                                                                    thereafter.
                                                                    When set it is no longer possible to perform bulk
                                                                    erase or bulk DFT operations.
                                                                    The flash controller will block any write
                                                                    operations to the FM_CTL register pertaining to
                                                                    such operations. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [31:28] \internal Reserved */
} Ifx_FLASHC_FLASH_CTL_Bits;

/** \brief # of sector of a FM */
typedef struct _Ifx_FLASHC_FLASH_SECTOR_M_Bits
{
    __I  Ifx_UReg_32Bit SECTOR_M:32;            /**< \brief [31:0]  # of sectors of a FM, must be an even
                                                                    number, same value as RTL parameter SECTOR_M. (r) */
} Ifx_FLASHC_FLASH_SECTOR_M_Bits;

/** \brief Size of MAIN in 8KB block for each pair of sectors */
typedef struct _Ifx_FLASHC_FLASH_MAIN_N_Bits
{
    __I  Ifx_UReg_32Bit MAIN_N:32;              /**< \brief [31:0]  Size of MAIN_NVM in 8KB blocks for each
                                                                    pair of sectors, same value as RTL parameter MAIN_N. (r) */
} Ifx_FLASHC_FLASH_MAIN_N_Bits;

/** \brief Size of WORK in 8KB block for each pair of sectors */
typedef struct _Ifx_FLASHC_FLASH_WORK_Z_Bits
{
    __I  Ifx_UReg_32Bit WORK_Z:32;              /**< \brief [31:0]  Size of WORK_NVM in 8KB blocks for each
                                                                    pair of sectors, same value as RTL parameter
                                                                    WORK_Z, the value WORK_Z can be zero. (r) */
} Ifx_FLASHC_FLASH_WORK_Z_Bits;

/** \brief Size of SLFASH in 8KB block in Sector 1 */
typedef struct _Ifx_FLASHC_FLASH_SFLASH_Y_Bits
{
    __I  Ifx_UReg_32Bit SFLASH_Y:8;             /**< \brief [7:0]   Size of SFLASH_NVM in 8KB blocks in Sector
                                                                    1, same value as RTL parameter SFLASH_Y. (r) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [30:8]  \internal Reserved */
    __I  Ifx_UReg_32Bit SFLASH_SECNUM:1;        /**< \brief [31:31] 0: Not allowed
                                                                    1: SM only in Sector 1 (r) */
} Ifx_FLASHC_FLASH_SFLASH_Y_Bits;

/** \brief Size of refresh rows for each sector */
typedef struct _Ifx_FLASHC_FLASH_REFRESH_ROW_Bits
{
    __I  Ifx_UReg_32Bit REFRESH_ROW:32;         /**< \brief [31:0]  Size of refresh rows for each sector, same
                                                                    value as RTL parameter REFRESH_ROW
                                                                    All sectors of a FM must have the same refresh rows
                                                                    It is 4 per sector for s40flash.3 FM. (r) */
} Ifx_FLASHC_FLASH_REFRESH_ROW_Bits;

/** \brief Command */
typedef struct _Ifx_FLASHC_FLASH_CMD_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit BUFF_INV:1;             /**< \brief [1:1]   Invalidation of ALL buffers.
                                                                    SW writes a '1' to clear the buffers.
                                                                    HW sets this field to '0' when the operation is completed.
                                                                    The operation takes a maximum of three clock cycles. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_FLASHC_FLASH_CMD_Bits;

/** \brief Flash Controller Lock Register */
typedef struct _Ifx_FLASHC_FLASH_LOCK_Bits
{
    __I  Ifx_UReg_32Bit PC:4;                   /**< \brief [3:0]   When FLASH_LOCK is acquired, even PPC
                                                                    allows, further MMIO access is possible only to
                                                                    this FLASH_LOCK.PC (& same HMASTER_ID) irrespective
                                                                    of corresponding PPC attributes.
                                                                    Other PCs or the same PC but different HMASTER_ID
                                                                    violation results in bus error & operation ignored.
                                                                    There is no further interrupt/fault triggered for
                                                                    this violation. (r) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [30:4]  \internal Reserved */
    __IO Ifx_UReg_32Bit LOCKED:1;               /**< \brief [31:31] Software writes this register bit to 1 to
                                                                    'lock' the flash controller to its own protection
                                                                    context (after setting the protection context by
                                                                    writing to a flash memory location).
                                                                    Once set, any subsequent (AHB) writes result in bus
                                                                    error and operation ignored.
                                                                    Software (FLASH.PC) reads back this field to check
                                                                    whether the lock succeeded.
                                                                    Software (FLASH_LOCK.PC) clears this field when it
                                                                    has completed a program/erase operation.
                                                                    To avoid deadlock and for management purpose, HW
                                                                    entitles PC0 the omnipotent capability to read
                                                                    FLASH_LOCK.PC and to release FLASH_LOCK.LOCKED no
                                                                    matter which PC acquires it.
                                                                    All PCs allowed by PPC can access FLASH_LOCK when
                                                                    its LOCKED bit is LOW (not locked). (rw) */
} Ifx_FLASHC_FLASH_LOCK_Bits;

/** \brief Flash power control */
typedef struct _Ifx_FLASHC_FLASH_PWR_CTL_Bits
{
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [0:0]   Controls 'enable' pin of the Flash memory. (rw) */
    __IO Ifx_UReg_32Bit ENABLE_HV:1;            /**< \brief [1:1]   Controls 'enable_hv' pin of the Flash memory. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_FLASHC_FLASH_PWR_CTL_Bits;

/** \brief Shadow bit of FLASH_CTL.ENFORCE_PC_LOCK */
typedef struct _Ifx_FLASHC_ENFORCE_PC_LOCK_SHADOW_Bits
{
    __I  Ifx_UReg_32Bit PC_LOCK_SHADOW:1;       /**< \brief [0:0]   Shadow register of FLASH_CTL.ENFORCE_PC_LOCK.
                                                                    Read only irrespective of PPC's configuration. (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FLASHC_ENFORCE_PC_LOCK_SHADOW_Bits;

/** \brief ECC injection enable on read */
typedef struct _Ifx_FLASHC_ECC_INJ_EN_Bits
{
    __IO Ifx_UReg_32Bit ECC_INJ_ENABLE:1;       /**< \brief [0:0]   Enable ECC error injection for FLASH R-bus
                                                                    interface (while FLASH_CTL.ECC_EN enabled) .
                                                                    1'b0: ECC_INJ_EN is disabled.
                                                                    1'b1: ECC_INJ_EN is enabled.
                                                                    Only the PC specified by ECC_INJ_PC can access
                                                                    (read/write)  ECC_INJ_ENABLE and ECC_ERROR when
                                                                    ECC_INJ_ENABLE is high excpet PC0 which can access
                                                                    it at any time to break the potential deadlock of
                                                                    ECC_INJ_EN. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [7:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit ECC_ERROR:1;            /**< \brief [8:8]   1'b0: If the injected ECC does not trigger
                                                                    any non-recoverable error (ECC errors <= 1).
                                                                    1'b1: If the injected ECC triggers non-recoverable
                                                                    error (ECC errors >= 2).
                                                                    The AHB read transaction results in bus error.
                                                                    There is no additional fault/interrupt trigged.
                                                                    SW writes to this register are ignored if SW writes
                                                                    value other than the real RTL value (there is HW
                                                                    write when value written from SW does not match
                                                                    with the RTL value for this).
                                                                    The mxs40flashc HW clears ECC_INJ_EN.ECC_ERROR when
                                                                    SW clears ECC_INJ_EN.ECC_ERROR or
                                                                    ECC_INJ_EN.ECC_INJ_ENABLE (write value of '0'). (rw) */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [27:9]  \internal Reserved */
    __I  Ifx_UReg_32Bit ECC_INJ_PC:4;           /**< \brief [31:28] The PC is inherited from the master who
                                                                    enabled ECC_INJ_ENABLE (while ECC_INJ_ENABLE is low) (r) */
} Ifx_FLASHC_ECC_INJ_EN_Bits;

/** \brief ECC injection control */
typedef struct _Ifx_FLASHC_ECC_INJ_CTL_Bits
{
    __IO Ifx_UReg_32Bit WORD_ADDR:23;           /**< \brief [22:0]  Specifies the word address where an error
                                                                    will be injected.
                                                                    The word address WORD_ADDR[22:0] is FM column
                                                                    address (module-internal offset), including cxa,
                                                                    bax, axa, sector, row/page definitions.
                                                                    On a FLASH R-bus read and when ECC_INJ_EN bit is
                                                                    '1', and when ECC_INJ_EN.ECC_INJ_PC value matches,
                                                                    the parity (PARITY[8:0]) replaces the FM parity.
                                                                    When ECC_INJ_ENABLE is 1'b1, only PC specified by
                                                                    ECC_INJ_EN.ECC_INJ_PC can access (read/write)
                                                                    WORD_ADDR  and PARITY. (rw) */
    __IO Ifx_UReg_32Bit PARITY:9;               /**< \brief [31:23] ECC parity to use for ECC error injection
                                                                    at address WORD_ADDR.
                                                                    The 9-bit ECC PARITY[8:0] is for a 128bit long word. (rw) */
} Ifx_FLASHC_ECC_INJ_CTL_Bits;

/** \brief Interrupt threshold for number of ECC correctable error */
typedef struct _Ifx_FLASHC_ECC_LOGIR_Bits
{
    __IO Ifx_UReg_32Bit ECCTHRESHOLD:16;        /**< \brief [15:0]  Interrupt/fault threshold for number of ECC
                                                                    single-bit failures detected and corrected
                                                                    indicated in bit[31:16].
                                                                    The # of failures must be one larger than
                                                                    ECCTHRESHOLD to trigger interrupt/fault.'
                                                                    For example, while ECCTHRESHOLD is 0xFF, only upon
                                                                    the 256th failures, the ECC Fault information will
                                                                    be reported on flashc_main_c_ecc_mmio_fault_*
                                                                    output pins (fault will be triggered).
                                                                    After the 256th failures, ECC_LOGIR.ECC1CNT will
                                                                    stay saturated at 0xFF and will not overrun.
                                                                    ECCTHRESHOLD of zero is not supported. (rw) */
    __IO Ifx_UReg_32Bit ECC1CNT:16;             /**< \brief [31:16] Number of ECC single-bit failures detected
                                                                    and corrected during the memory read operations.
                                                                    Write value of 16'b0 is allowed to clear
                                                                    ECC_LOGIR.ECC1CNT (when the number of ECC
                                                                    single-bit failures detected and corrected reaches
                                                                    threshold value).
                                                                    It is recommended that SW should not write any
                                                                    value other than 0 to register ECC_LOGIR.ECC1CNT (rw) */
} Ifx_FLASHC_ECC_LOGIR_Bits;

/** \brief Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
typedef struct _Ifx_FLASHC_MPC_CFG_Bits
{
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [3:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit RESPONSE:1;             /**< \brief [4:4]   Response Configuration for Security and PC
                                                                    violations
                                                                    0: Read-Zero Write Ignore (RAZ/WI)
                                                                    1: Bus Error (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_FLASHC_MPC_CFG_Bits;

/** \brief Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
typedef struct _Ifx_FLASHC_MPC_CTRL_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit AUTO_INC:1;             /**< \brief [8:8]   Auto-increment BLK_IDX by 1 for this
                                                                    protection context as a side effect of each
                                                                    read/write access to BLK_LUT (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [30:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit LOCK:1;                 /**< \brief [31:31] Security lockdown for this protection context.
                                                                    Software can set this bit but not clear it once set.
                                                                    When set, write operations to BLK_LUT are not
                                                                    possible  from this protection context.
                                                                    Setting LOCK also blocks writes to CTRL itself (for
                                                                    that PC copy). All writes are ignored. (rw) */
} Ifx_FLASHC_MPC_CTRL_Bits;

/** \brief Max value of block-based index register */
typedef struct _Ifx_FLASHC_MPC_BLK_MAX_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  Maximum value of block-based index register.
                                                                    The number and size blocks in an MPC is design time
                                                                    configurable and for embedded memories defaults to
                                                                    covering the entire memory using 4kB blocks; See
                                                                    product datasheet for details on protection of
                                                                    external memories. (r) */
} Ifx_FLASHC_MPC_BLK_MAX_Bits;

/** \brief Block size & initialization in progress */
typedef struct _Ifx_FLASHC_MPC_BLK_CFG_Bits
{
    __I  Ifx_UReg_32Bit BLOCK_SIZE:4;           /**< \brief [3:0]   Block size of individually protected blocks
                                                                    (0: 32B, 1: 64B, ... up to 15: 1MB)
                                                                    Block size= (1<<(BLOCK_SIZE+5))
                                                                    The number and size blocks in an MPC is design time
                                                                    configurable and for embedded memories defaults to
                                                                    covering the entire memory using 4kB blocks; see
                                                                    product datasheet for details on protection of
                                                                    external memories. (r) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [30:4]  \internal Reserved */
    __I  Ifx_UReg_32Bit INIT_IN_PROGRESS:1;     /**< \brief [31:31] During initialization INIT_IN_PROGRESS is
                                                                    '1' and MMIO register accesses to BLK_LUT is
                                                                    blocked (BLK_IDX increment is also ignored).
                                                                    The block attributes are retained in DeepSleep (and
                                                                    obviously Active) power mode.
                                                                    Initialization is only required from a power mode
                                                                    in which the block attributes are not retained.
                                                                    E.g., initialization is required for a cold boot
                                                                    (after a Power-on-Reset).
                                                                    HW initializes the block attributes: the NS
                                                                    attributes are set to '0' (secure), the R
                                                                    attributes are set to '1' (read access allowed) and
                                                                    the W attributes are set to '1' (write access allowed).
                                                                    During initialization, the MPC supports memory
                                                                    accesses (memory accesses are NOT blocked) with the
                                                                    initialization block attribute values as mentioned above.
                                                                    This e.g.
                                                                    allows MPC initialization to proceed in parallel
                                                                    with boot program memory accesses (as opposed to
                                                                    serializing the two), improving device boot time. (r) */
} Ifx_FLASHC_MPC_BLK_CFG_Bits;

/** \brief Index of 32-block group accessed through BLK_LUT (Separate IDX for each PC depending on access_pc) */
typedef struct _Ifx_FLASHC_MPC_BLK_IDX_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  Index value for accessing block-based
                                                                    lookup table using BLK_LUT.
                                                                    Programming out of LUT range is an user error and
                                                                    it loops back to '0' once overflow occurs. (rw) */
} Ifx_FLASHC_MPC_BLK_IDX_Bits;

/** \brief NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
typedef struct _Ifx_FLASHC_MPC_BLK_LUT_Bits
{
    __IO Ifx_UReg_32Bit ATTR_NS0:1;             /**< \brief [0:0]   NS bit for block 0 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS1:1;             /**< \brief [1:1]   NS bit for block 1 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS2:1;             /**< \brief [2:2]   NS bit for block 2 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS3:1;             /**< \brief [3:3]   NS bit for block 3 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS4:1;             /**< \brief [4:4]   NS bit for block 4 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS5:1;             /**< \brief [5:5]   NS bit for block 5 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS6:1;             /**< \brief [6:6]   NS bit for block 6 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS7:1;             /**< \brief [7:7]   NS bit for block 7 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS8:1;             /**< \brief [8:8]   NS bit for block 8 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS9:1;             /**< \brief [9:9]   NS bit for block 9 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS10:1;            /**< \brief [10:10] NS bit for block 10 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS11:1;            /**< \brief [11:11] NS bit for block 11 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS12:1;            /**< \brief [12:12] NS bit for block 12 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS13:1;            /**< \brief [13:13] NS bit for block 13 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS14:1;            /**< \brief [14:14] NS bit for block 14 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS15:1;            /**< \brief [15:15] NS bit for block 15 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS16:1;            /**< \brief [16:16] NS bit for block 16 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS17:1;            /**< \brief [17:17] NS bit for block 17 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS18:1;            /**< \brief [18:18] NS bit for block 18 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS19:1;            /**< \brief [19:19] NS bit for block 19 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS20:1;            /**< \brief [20:20] NS bit for block 20 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS21:1;            /**< \brief [21:21] NS bit for block 21 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS22:1;            /**< \brief [22:22] NS bit for block 22 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS23:1;            /**< \brief [23:23] NS bit for block 23 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS24:1;            /**< \brief [24:24] NS bit for block 24 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS25:1;            /**< \brief [25:25] NS bit for block 25 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS26:1;            /**< \brief [26:26] NS bit for block 26 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS27:1;            /**< \brief [27:27] NS bit for block 27 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS28:1;            /**< \brief [28:28] NS bit for block 28 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS29:1;            /**< \brief [29:29] NS bit for block 29 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS30:1;            /**< \brief [30:30] NS bit for block 30 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS31:1;            /**< \brief [31:31] NS bit for block 31 based on BLK_IDX (rw) */
} Ifx_FLASHC_MPC_BLK_LUT_Bits;

/** \brief Control register with lock bit and auto-increment only */
typedef struct _Ifx_FLASHC_MPC_ROT_CTRL_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit AUTO_INC:1;             /**< \brief [8:8]   Auto-increment ROT_BLK_IDX by 1 for each
                                                                    read/write of ROT_BLK_LUT (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [30:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit LOCK:1;                 /**< \brief [31:31] Security lockdown for the root-of-trust
                                                                    configuration registers.
                                                                    Software can set this bit but not clear it once set.
                                                                    When set, write operations to ROT_BLK_LUT are not possible.
                                                                    Write is ignored. (rw) */
} Ifx_FLASHC_MPC_ROT_CTRL_Bits;

/** \brief Max value of block-based index register for ROT */
typedef struct _Ifx_FLASHC_MPC_ROT_BLK_MAX_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  Maximum value of block-based index register.
                                                                    The number and size blocks in an MPC is design time
                                                                    configurable and for embedded memories defaults to
                                                                    covering the entire memory using 4kB blocks; see
                                                                    product datasheet for details on protection of
                                                                    external memories. (r) */
} Ifx_FLASHC_MPC_ROT_BLK_MAX_Bits;

/** \brief Same as BLK_CFG */
typedef struct _Ifx_FLASHC_MPC_ROT_BLK_CFG_Bits
{
    __I  Ifx_UReg_32Bit BLOCK_SIZE:4;           /**< \brief [3:0]   Block size of individually protected blocks
                                                                    (0: 32B, 1: 64B, ...up to 15:1MB)
                                                                    Block size= (1<<(BLOCK_SIZE+5))
                                                                    The number and size blocks in an MPC is design time
                                                                    configurable and for embedded memories defaults to
                                                                    covering the entire memory using 4kB blocks; see
                                                                    product datasheet for details on protection of
                                                                    external memories. (r) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [30:4]  \internal Reserved */
    __I  Ifx_UReg_32Bit INIT_IN_PROGRESS:1;     /**< \brief [31:31] During initialization INIT_IN_PROGRESS is
                                                                    '1' and MMIO register accesses to ROT_BLK_LUT is RAZWI.
                                                                    The block attributes are retained in DeepSleep (and
                                                                    obviously Active) power mode.
                                                                    Initialization is only required from a power mode
                                                                    in which the block attributes are not retained.
                                                                    E.g., initialization is required for a cold boot
                                                                    (after a Power-on-Reset).
                                                                    HW initializes the block attributes: the NS
                                                                    attributes are set to '0' (secure), the R
                                                                    attributes are set to '1' (read access allowed) and
                                                                    the W attributes are set to '1' (write access allowed).
                                                                    During initialization, the MPC supports memory
                                                                    accesses (memory accesses are NOT blocked) with the
                                                                    initialization block attribute values as mentioned above.
                                                                    This e.g.
                                                                    allows MPC initialization to proceed in parallel
                                                                    with boot program memory accesses (as opposed to
                                                                    serializing the two), improving device boot time. (r) */
} Ifx_FLASHC_MPC_ROT_BLK_CFG_Bits;

/** \brief Index of 8-block group accessed through ROT_BLK_LUT_* */
typedef struct _Ifx_FLASHC_MPC_ROT_BLK_IDX_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  Index value for accessing block-based
                                                                    lookup table using ROT_BLK_LUT.
                                                                    Programming out of LUT range is an user error and
                                                                    it loops back to '0' once overflow occurs. (rw) */
} Ifx_FLASHC_MPC_ROT_BLK_IDX_Bits;

/** \brief Protection context of 8-block group accesses through ROT_BLK_LUT */
typedef struct _Ifx_FLASHC_MPC_ROT_BLK_PC_Bits
{
    __IO Ifx_UReg_32Bit PC:4;                   /**< \brief [3:0]   Specify PC values for ROT_BLK_IDX and
                                                                    ROT_BLK_LUT (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_FLASHC_MPC_ROT_BLK_PC_Bits;

/** \brief (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
typedef struct _Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits
{
    __IO Ifx_UReg_32Bit ATTR0:3;                /**< \brief [2:0]   W/R/NS bits for block 0 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR1:3;                /**< \brief [6:4]   W/R/NS bits for block 1 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR2:3;                /**< \brief [10:8]  W/R/NS bits for block 2 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR3:3;                /**< \brief [14:12] W/R/NS bits for block 3 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR4:3;                /**< \brief [18:16] W/R/NS bits for block 4 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR5:3;                /**< \brief [22:20] W/R/NS bits for block 5 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR6:3;                /**< \brief [26:24] W/R/NS bits for block 6 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [27:27] \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR7:3;                /**< \brief [30:28] W/R/NS bits for block 7 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits;

/** \brief Redundancy Control normal sectors 0,1 */
typedef struct _Ifx_FLASHC_FM_CTL_RED_CTL01_Bits
{
    __IO Ifx_UReg_32Bit RED_ADDR_0:8;           /**< \brief [7:0]   Bad Row Pair Address for Sector 0 (rw) */
    __IO Ifx_UReg_32Bit RED_EN_0:1;             /**< \brief [8:8]   '1': Redundancy Enable for Sector 0 (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [15:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit RED_ADDR_1:8;           /**< \brief [23:16] Bad Row Pair Address for Sector 1 (rw) */
    __IO Ifx_UReg_32Bit RED_EN_1:1;             /**< \brief [24:24] '1': Redundancy Enable for Sector 1 (rw) */
    __IO Ifx_UReg_32Bit RED_AXA:1;              /**< \brief [25:25] '1': Redundancy Enable for SM Rows in
                                                                    Sector 1; Uses RED_ADDR_1 bits for Bad Row Pair
                                                                    Address (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [31:26] \internal Reserved */
} Ifx_FLASHC_FM_CTL_RED_CTL01_Bits;

/** \brief Redundancy Control normal sectors 2,3 */
typedef struct _Ifx_FLASHC_FM_CTL_RED_CTL23_Bits
{
    __IO Ifx_UReg_32Bit RED_ADDR_2:8;           /**< \brief [7:0]   Bad Row Pair Address for Sector 2 (rw) */
    __IO Ifx_UReg_32Bit RED_EN_2:1;             /**< \brief [8:8]   1': Redundancy Enable for Sector 2 (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [15:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit RED_ADDR_3:8;           /**< \brief [23:16] Bad Row Pair Address for Sector 3 (rw) */
    __IO Ifx_UReg_32Bit RED_EN_3:1;             /**< \brief [24:24] 1': Redundancy Enable for Sector 3 (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_FLASHC_FM_CTL_RED_CTL23_Bits;

/** \brief Flash macro Page Latches data */
typedef struct _Ifx_FLASHC_FM_CTL_FM_PL_DATA_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Normal PL data read: four page latch Bytes
                                                                    When reading the page latches it requires
                                                                    FM_CTL.IF_SEL to be '1'
                                                                    Note: the high Voltage page latches are readable
                                                                    for test mode functionality. (rw) */
} Ifx_FLASHC_FM_CTL_FM_PL_DATA_Bits;

/** \brief Flash macro control */
typedef struct _Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits
{
    __IO Ifx_UReg_32Bit FM_MODE:4;              /**< \brief [3:0]   Requires (IF_SEL|WR_EN)=1
                                                                    Flash macro mode selection (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit FM_SEQ:2;               /**< \brief [9:8]   Requires (IF_SEL|WR_EN)=1
                                                                    Flash macro sequence selection (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit DAA_MUX_SEL:8;          /**< \brief [23:16] Direct memory cell access address. (rw) */
    __IO Ifx_UReg_32Bit IF_SEL:1;               /**< \brief [24:24] Interface selection.
                                                                    Specifies the interface that is used for flash
                                                                    memory read operations:
                                                                    0: R interface is used (default value).
                                                                    In this case, the flash memory address is provided
                                                                    as part of the R signal interface.
                                                                    1: C interface is used.
                                                                    In this case, the flash memory address is provided
                                                                    by FM_MEM_ADDR (the page address) and by the C
                                                                    interface access offset in the FM_MEM_DATA
                                                                    structure.
                                                                    Note: IF_SEL and WR_EN cannot be changed at the
                                                                    same time (rw) */
    __IO Ifx_UReg_32Bit WR_EN:1;                /**< \brief [25:25] 0: normal mode
                                                                    1: Fm Write Enable
                                                                    Note: IF_SEL and WR_EN cannot be changed at the
                                                                    same time (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [31:26] \internal Reserved */
} Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits;

/** \brief Status */
typedef struct _Ifx_FLASHC_FM_CTL_STATUS_Bits
{
    __I  Ifx_UReg_32Bit TIMER_STATUS:1;         /**< \brief [0:0]   This is the timer_en bit set by writing a
                                                                    '1' in the TIMER_CTL bit 31.
                                                                    It is reset by HW when the timer expires
                                                                    0: timer not running
                                                                    1: Timer is enabled and not expired yet (r) */
    __I  Ifx_UReg_32Bit HV_REGS_ISOLATED:1;     /**< \brief [1:1]   Indicates the isolation status at HV trim
                                                                    and redundancy registers inputs
                                                                    0: Not isolated, writing permitted
                                                                    1: isolated writing disabled (r) */
    __I  Ifx_UReg_32Bit ILLEGAL_HVOP:1;         /**< \brief [2:2]   Indicates a bulk,sector erase, program has
                                                                    been requested when axa=1
                                                                    0: no error
                                                                    1: illegal HV operation error (r) */
    __I  Ifx_UReg_32Bit TURBO_N:1;              /**< \brief [3:3]   After FM power up indicates the analog
                                                                    blocks currents are boosted to faster reach their
                                                                    functional state..
                                                                    Used in the testchip boot only as an 'FM READY' flag.
                                                                    0: turbo mode
                                                                    1: normal mode (r) */
    __I  Ifx_UReg_32Bit WR_EN_MON:1;            /**< \brief [4:4]   FM_CTL.WR_EN bit after being synchronized
                                                                    in clk_r domain (r) */
    __I  Ifx_UReg_32Bit IF_SEL_MON:1;           /**< \brief [5:5]   FM_CTL.IF_SEL bit after being synchronized
                                                                    in clk_r domain (r) */
    __I  Ifx_UReg_32Bit TIMER_PE_SYNC:1;        /**< \brief [6:6]   The actual timer state sync-ed in clk_c domain:
                                                                    0: timer is not running:
                                                                    1: timer is running; (r) */
    __I  Ifx_UReg_32Bit R_GRANT_DELAY_STATUS:1; /**< \brief [7:7]   0: R_GRANT_DELAY timer is not running
                                                                    1: R_GRANT_DELAY timer is running (r) */
    __I  Ifx_UReg_32Bit FM_BUSY:1;              /**< \brief [8:8]   0': FM not busy
                                                                    1: FM BUSY : R_GRANT is 0 as result of a busy
                                                                    request from FM ready, or from HV operations. (r) */
    __I  Ifx_UReg_32Bit FM_READY:1;             /**< \brief [9:9]   0: FM not ready
                                                                    1: FM ready (r) */
    __I  Ifx_UReg_32Bit POS_PUMP_VLO:1;         /**< \brief [10:10] POS pump VLO (r) */
    __I  Ifx_UReg_32Bit NEG_PUMP_VHI:1;         /**< \brief [11:11] NEG pump VHI (r) */
    __I  Ifx_UReg_32Bit RWW:1;                  /**< \brief [12:12] FM Type  (Read While Write or Not Read
                                                                    While Write):
                                                                    0: Non RWW FM Type
                                                                    1:  RWW FM Type (r) */
    __I  Ifx_UReg_32Bit ECC_CFG:1;              /**< \brief [13:13] Geometry ECC configuration:
                                                                    0: FM with No ECC
                                                                    1: FM with ECC (r) */
    __I  Ifx_UReg_32Bit SECTOR1_SR:1;           /**< \brief [14:14] 0:  Sector 1 does not contain special rows.
                                                                    The special rows are located in separate special sectors.
                                                                    1:  Sector 1 contains special rows (r) */
    __I  Ifx_UReg_32Bit RESET_MM:1;             /**< \brief [15:15] Test_only, internal node: mpcon  reset_mm (r) */
    __I  Ifx_UReg_32Bit ROW_ODD:1;              /**< \brief [16:16] Test_only, internal node: mpcon  row_odd (r) */
    __I  Ifx_UReg_32Bit ROW_EVEN:1;             /**< \brief [17:17] Test_only, internal node: mpcon  row_even (r) */
    __I  Ifx_UReg_32Bit HVOP_SUB_SECTOR_N:1;    /**< \brief [18:18] Test_only, internal node: mpcon  bk_subb (r) */
    __I  Ifx_UReg_32Bit HVOP_SECTOR:1;          /**< \brief [19:19] Test_only, internal node: mpcon  bk_sec (r) */
    __I  Ifx_UReg_32Bit HVOP_BULK_ALL:1;        /**< \brief [20:20] Test_only, internal node: mpcon  bk_all (r) */
    __I  Ifx_UReg_32Bit CBUS_RA_MATCH:1;        /**< \brief [21:21] Test_only, internal node: mpcon  ra match (r) */
    __I  Ifx_UReg_32Bit CBUS_RED_ROW_EN:1;      /**< \brief [22:22] Test_only, internal node: mpcon  red_row_en (r) */
    __I  Ifx_UReg_32Bit RQ_ERROR:1;             /**< \brief [23:23] Test_only, internal node:  rq_error
                                                                    sync-de in clk_c domain (r) */
    __I  Ifx_UReg_32Bit PUMP_PDAC:4;            /**< \brief [27:24] Test_only, internal node: regif pdac
                                                                    outputs to pos pump (r) */
    __I  Ifx_UReg_32Bit PUMP_NDAC:4;            /**< \brief [31:28] Test_only, internal node: regif ndac
                                                                    outputs to pos pump (r) */
} Ifx_FLASHC_FM_CTL_STATUS_Bits;

/** \brief Flash macro address */
typedef struct _Ifx_FLASHC_FM_CTL_FM_ADDR_Bits
{
    __IO Ifx_UReg_32Bit RA:16;                  /**< \brief [15:0]  Row address. (rw) */
    __IO Ifx_UReg_32Bit BA:8;                   /**< \brief [23:16] Bank address. (rw) */
    __IO Ifx_UReg_32Bit AXA:1;                  /**< \brief [24:24] Auxiliairy address field:
                                                                    0: regular flash memory.
                                                                    1: supervisory flash memory. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_FLASHC_FM_CTL_FM_ADDR_Bits;

/** \brief Bookmark register - keeps the current FW HV seq */
typedef struct _Ifx_FLASHC_FM_CTL_BOOKMARK_Bits
{
    __IO Ifx_UReg_32Bit BOOKMARK:32;            /**< \brief [31:0]  Used by FW.
                                                                    Keeps the Current HV cycle sequence (rw) */
} Ifx_FLASHC_FM_CTL_BOOKMARK_Bits;

/** \brief Regular flash geometry */
typedef struct _Ifx_FLASHC_FM_CTL_GEOMETRY_Bits
{
    __I  Ifx_UReg_32Bit ROW_COUNT:16;           /**< \brief [15:0]  Number of rows (minus 1):
                                                                    0: 1 row
                                                                    1: 2 rows
                                                                    2: 3 rows
                                                                    ...
                                                                    '65535': 65536 rows
                                                                    For 128kB macro the value of this field  is x7F
                                                                    (128 rows)
                                                                    For 256kB macro the value of this field  is xFF
                                                                    (256 rows)
                                                                    For 512kB macro the value of this field  is x1FF
                                                                    (512 rows)
                                                                    For 1MB macro the value of this field  is x1FF (512
                                                                    rows) (r) */
    __I  Ifx_UReg_32Bit BANK_COUNT:8;           /**< \brief [23:16] Number of banks (minus 1):
                                                                    0: 1 bank
                                                                    1: 2 banks
                                                                    ...
                                                                    '255': 256 banks
                                                                    For 128kB, 256kB and 512kB macros the value of this
                                                                    field  is 1 (2 banks)
                                                                    For 1MB macro the value of this field  is 3 (4
                                                                    banks) (r) */
    __I  Ifx_UReg_32Bit WORD_SIZE_LOG2:4;       /**< \brief [27:24] Number of Bytes per word (log 2).
                                                                    A word is defined as the data that is read from the
                                                                    flash macro over the R interface with a single read access:
                                                                    0: 1 Byte
                                                                    1: 2 Bytes
                                                                    2: 4 Bytes
                                                                    ...
                                                                    3: 128 Bytes
                                                                    The currently planned flash macros have a word size
                                                                    of either 32-bit, 64-bit or 128-bit, resulting in
                                                                    WORD_SIZE_LOG2 settings of 2, 3 and 4 respectively.
                                                                    All 4 macros used in PSC3 family will see this field as 4 (r) */
    __I  Ifx_UReg_32Bit PAGE_SIZE_LOG2:4;       /**< \brief [31:28] Number of Bytes per page (log 2):
                                                                    0: 1 Byte
                                                                    1: 2 Bytes
                                                                    2: 4 Bytes
                                                                    ...
                                                                    15: 32768 Bytes
                                                                    The currently planned flash macros have a page size
                                                                    of either 256 Byte or 512 Byte, resulting in
                                                                    PAGE_SIZE_LOG2 settings of 8 and 9 respectively.
                                                                    All 4 macros used in PSC3 family will see this field as 9 (r) */
} Ifx_FLASHC_FM_CTL_GEOMETRY_Bits;

/** \brief Supervisory flash geometry */
typedef struct _Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits
{
    __I  Ifx_UReg_32Bit ROW_COUNT:16;           /**< \brief [15:0]  Number of rows (minus 1).
                                                                    ROW_COUNT is typically less than GEOMETRY.ROW_COUNT (r) */
    __I  Ifx_UReg_32Bit BANK_COUNT:8;           /**< \brief [23:16] Number of banks (minus 1).
                                                                    BANK_COUNT is less or equal to GEOMETRY.BANK_COUNT. (r) */
    __I  Ifx_UReg_32Bit WORD_SIZE_LOG2:4;       /**< \brief [27:24] Number of Bytes per word (log 2).
                                                                    See GEOMETRY.WORD_SIZE_LOG2.
                                                                    Typically, WORD_SIZE_LOG2 equals GEOMETRY.WORD_SIZE_LOG2. (r) */
    __I  Ifx_UReg_32Bit PAGE_SIZE_LOG2:4;       /**< \brief [31:28] Number of Bytes per page (log 2).
                                                                    See GEOMETRY.PAGE_SIZE_LOG2.
                                                                    Typically, PAGE_SIZE_LOG2 equals GEOMETRY.PAGE_SIZE_LOG2. (r) */
} Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits;

/** \brief Analog control 0 */
typedef struct _Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits
{
    __IO Ifx_UReg_32Bit MDAC:7;                 /**< \brief [6:0]   Trimming of the output margin Voltage as a
                                                                    function of Vpos and Vneg. (rw) */
    __IO Ifx_UReg_32Bit SPARE_ANA_CTL0:1;       /**< \brief [7:7]   Spare bit (rw) */
    __IO Ifx_UReg_32Bit ECC_ENC_DIS:1;          /**< \brief [8:8]   0': ECC encoder is enabled for the FM with
                                                                    ECC feature.
                                                                    The PL ECC bits are loaded automatically
                                                                    '1': ECC encoder disabled.
                                                                    - The Macro needs to be in C-BUS mode - IF_SEL=1 to
                                                                    write and keep this bit at 1 (rw) */
    __I  Ifx_UReg_32Bit DNU_2_TM_ECC_DIS:1;     /**< \brief [9:9]   Do Not Use this bit as it is for test Mode
                                                                    use only.
                                                                    Write only to 0 in normal mode  (tm_ecc_dis in RTL) (r) */
    __IO Ifx_UReg_32Bit RST_SFT_HVPL:1;         /**< \brief [10:10] 1:  Page Latches Soft Reset (rw) */
    __IO Ifx_UReg_32Bit FLIP_AMUXBUS_AB:1;      /**< \brief [11:11] Flips amuxbusa and amuxbusb
                                                                    0: amuxbusa, amuxbusb
                                                                    1:  amuxbusb, amuxbusb (rw) */
    __IO Ifx_UReg_32Bit NDAC_MIN:4;             /**< \brief [15:12] NDAC staircase min value (rw) */
    __IO Ifx_UReg_32Bit PDAC_MIN:4;             /**< \brief [19:16] PDAC staircase min value (rw) */
    __IO Ifx_UReg_32Bit SCALE_PRG_SEQ01:2;      /**< \brief [21:20] PROG&PRE_PROG: Scale for R_GRANT_DELAY on
                                                                    seq0-seq1 transition:
                                                                    00: 0.125uS
                                                                    01: 1uS
                                                                    10: 10uS
                                                                    11: 100uS (rw) */
    __IO Ifx_UReg_32Bit SCALE_PRG_SEQ12:2;      /**< \brief [23:22] PROG&PRE_PROG: Scale for R_GRANT_DELAY on
                                                                    seq1-seq2 transition:
                                                                    00: 0.125uS
                                                                    01: 1uS
                                                                    10: 10uS
                                                                    11: 100uS (rw) */
    __IO Ifx_UReg_32Bit SCALE_PRG_SEQ23:2;      /**< \brief [25:24] PROG&PRE_PROG: Scale for R_GRANT_DELAY on
                                                                    seq2-seq3 transition:
                                                                    00: 0.125uS
                                                                    01: 1uS
                                                                    10: 10uS
                                                                    11: 100uS (rw) */
    __IO Ifx_UReg_32Bit SCALE_SEQ30:2;          /**< \brief [27:26] PROG&PRE_PROG& ERASE: Scale for
                                                                    R_GRANT_DELAY on seq3-seq0 transition:
                                                                    00: 0.125uS
                                                                    01: 1uS
                                                                    10: 10uS
                                                                    11: 100uS (rw) */
    __IO Ifx_UReg_32Bit SCALE_PRG_PEON:2;       /**< \brief [29:28] PROG&PRE_PROG: Scale for R_GRANT_DELAY on
                                                                    PE On transition:
                                                                    00: 0.125uS
                                                                    01: 1uS
                                                                    10: 10uS
                                                                    11: 100uS (rw) */
    __IO Ifx_UReg_32Bit SCALE_PRG_PEOFF:2;      /**< \brief [31:30] PROG&PRE_PROG: Scale for R_GRANT_DELAY on
                                                                    PE OFF transition:
                                                                    00: 0.125uS
                                                                    01: 1uS
                                                                    10: 10uS
                                                                    11: 100uS (rw) */
} Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits;

/** \brief Analog control 1 */
typedef struct _Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits
{
    __IO Ifx_UReg_32Bit NDAC_MAX:4;             /**< \brief [3:0]   Ndac Max Value.Trimming of negative pump
                                                                    output Voltage. (rw) */
    __IO Ifx_UReg_32Bit NDAC_STEP:4;            /**< \brief [7:4]   Ndac step increment (rw) */
    __IO Ifx_UReg_32Bit PDAC_MAX:4;             /**< \brief [11:8]  Pdac Max Value.Trimming of positive pump
                                                                    output Voltage: (rw) */
    __IO Ifx_UReg_32Bit PDAC_STEP:4;            /**< \brief [15:12] Pdac step increment (rw) */
    __IO Ifx_UReg_32Bit NPDAC_STEP_TIME:8;      /**< \brief [23:16] Ndac/Pdac step duration: (1uS .. 255uS) * 8
                                                                    When = 0 N/PDAC_MAX control the pumps (rw) */
    __IO Ifx_UReg_32Bit NPDAC_ZERO_TIME:8;      /**< \brief [31:24] Ndac/Pdac LO duration: (1uS .. 255uS) * 8
                                                                    When 0, N/PDAC don't return to 0 (rw) */
} Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits;

/** \brief Flash macro write page latches all */
typedef struct _Ifx_FLASHC_FM_CTL_FM_PL_WRDATA_ALL_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Write all high Voltage page latches with
                                                                    the same 32-bit data in a single write cycle.
                                                                    In order to also write same lower 8bit from 32-bit
                                                                    data to all the ECC bits in the page latches, set
                                                                    ANA_CTL0.ECC_ENC_DIS=1.
                                                                    Read always returns 0.
                                                                    Used for test mode and sims only (rw) */
} Ifx_FLASHC_FM_CTL_FM_PL_WRDATA_ALL_Bits;

/** \brief Address bit to point to scratch area */
typedef struct _Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR_Bits
{
    __IO Ifx_UReg_32Bit FM_BXA:1;               /**< \brief [0:0]   Address bit to point to scratch area
                                                                    0: Point to normal rows in sector
                                                                    1: Point to scratch rows in sector.
                                                                    For engineering use only. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [3:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit FM_CXA:1;               /**< \brief [4:4]   Address bit to point to Column 33
                                                                    0: Point to normal columns in sector
                                                                    1: Point to Column 33 used for BL Disturb Counter.
                                                                    For engineering use only. (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR_Bits;

/** \brief R-grant delay for erase */
typedef struct _Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits
{
    __IO Ifx_UReg_32Bit RGRANT_DELAY_ERS_SEQ01:8; /**< \brief [7:0]   ERASE: R-grant blocking delay on seq0-seq1
                                                                    transition. Scale = ANA_CTL0.SCALE_SEQ01
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
    __IO Ifx_UReg_32Bit RGRANT_DELAY_ERS_SEQ12:8; /**< \brief [15:8]  ERASE: R-grant blocking delay on seq1-seq2
                                                                    transition. Scale = ANA_CTL0.SCALE_SEQ12
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
    __IO Ifx_UReg_32Bit RGRANT_DELAY_ERS_SEQ23:8; /**< \brief [23:16] ERASE: R-grant blocking delay on seq2-seq3
                                                                    transition. Scale = ANA_CTL0.SCALE_SEQ23
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits;

/** \brief R-grant delay scale for erase */
typedef struct _Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits
{
    __IO Ifx_UReg_32Bit SCALE_ERS_SEQ01:2;      /**< \brief [1:0]   ERASE: Scale for R_GRANT_DELAY on seq0-seq1
                                                                    transition:
                                                                    '00': 0.125uS
                                                                    '01': 1uS
                                                                    '10': 10uS
                                                                    '11': 100uS (rw) */
    __IO Ifx_UReg_32Bit SCALE_ERS_SEQ12:2;      /**< \brief [3:2]   ERASE: Scale for R_GRANT_DELAY on seq1-seq2
                                                                    transition:
                                                                    '00': 0.125uS
                                                                    '01': 1uS
                                                                    '10': 10uS
                                                                    '11': 100uS (rw) */
    __IO Ifx_UReg_32Bit SCALE_ERS_SEQ23:2;      /**< \brief [5:4]   ERASE: Scale for R_GRANT_DELAY on seq2-seq3
                                                                    transition:
                                                                    '00': 0.125uS
                                                                    '01': 1uS
                                                                    '10': 10uS
                                                                    '11': 100uS (rw) */
    __IO Ifx_UReg_32Bit SCALE_ERS_PEON:2;       /**< \brief [7:6]   ERASE: Scale for R_GRANT_DELAY on PE On
                                                                    transition:
                                                                    '00': 0.125uS
                                                                    '01': 1uS
                                                                    '10': 10uS
                                                                    '11': 100uS (rw) */
    __IO Ifx_UReg_32Bit SCALE_ERS_PEOFF:2;      /**< \brief [9:8]   ERASE: Scale for R_GRANT_DELAY on PE OFF
                                                                    transition:
                                                                    '00': 0.125uS
                                                                    '01': 1uS
                                                                    '10': 10uS
                                                                    '11': 100uS (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit RGRANT_DELAY_ERS_PEON:8; /**< \brief [23:16] ERASE: R-grant blocking delay on PE ON.
                                                                    Scale = ANA_CTL0.SCALE_PEON
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
    __IO Ifx_UReg_32Bit RGRANT_DELAY_ERS_PEOFF:8; /**< \brief [31:24] ERASE: R-grant blocking delay on PE OFF.
                                                                    Scale = ANA_CTL0.SCALE_PEOFF
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
} Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits;

/** \brief HV Pulse Delay for seq2 post & seq3 */
typedef struct _Ifx_FLASHC_FM_CTL_PW_SEQ23_Bits
{
    __IO Ifx_UReg_32Bit PW_SEQ2_POST:16;        /**< \brief [15:0]  Seq2 post delay (rw) */
    __IO Ifx_UReg_32Bit PW_SEQ3:16;             /**< \brief [31:16] Seq3 delay (rw) */
} Ifx_FLASHC_FM_CTL_PW_SEQ23_Bits;

/** \brief HV Pulse Delay for seq 1&2 pre */
typedef struct _Ifx_FLASHC_FM_CTL_PW_SEQ12_Bits
{
    __IO Ifx_UReg_32Bit PW_SEQ1:16;             /**< \brief [15:0]  Seq1 delay (rw) */
    __IO Ifx_UReg_32Bit PW_SEQ2_PRE:16;         /**< \brief [31:16] Seq2 pre delay (rw) */
} Ifx_FLASHC_FM_CTL_PW_SEQ12_Bits;

/** \brief Wait State control */
typedef struct _Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits
{
    __IO Ifx_UReg_32Bit WAIT_FM_MEM_RD:4;       /**< \brief [3:0]   Number of C interface wait cycles (on
                                                                    'clk_c') for a read from the memory (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit WAIT_FM_HV_RD:4;        /**< \brief [11:8]  Number of C interface wait cycles (on
                                                                    'clk_c') for a read from the Page Latches.
                                                                    Common for reading HV Page Latches and the
                                                                    DATA_COMP_RESULT bit (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __IO Ifx_UReg_32Bit WAIT_FM_HV_WR:3;        /**< \brief [18:16] Number of C interface wait cycles (on
                                                                    'clk_c') for a write to the Page Latches. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [23:19] \internal Reserved */
    __IO Ifx_UReg_32Bit FM_RWW_MODE:2;          /**< \brief [25:24] 2'b00: Full CBUS MODE
                                                                    2'b01: RWW
                                                                    2'b10: RWW.
                                                                    R_GRANT is stalling r_bus for the whole
                                                                    program/erase duration (rw) */
    __IO Ifx_UReg_32Bit LV_SPARE_1:1;           /**< \brief [26:26] Spare register (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [28:27] \internal Reserved */
    __IO Ifx_UReg_32Bit PL_SOFT_SET_EN:1;       /**< \brief [29:29] Page latch soft set enable, 0 = disabled, 1
                                                                    = enabled (at end of seq_2), taken care in API (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits;

/** \brief R-grant delay for program */
typedef struct _Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits
{
    __IO Ifx_UReg_32Bit RGRANT_DELAY_PRG_SEQ12:8; /**< \brief [7:0]   PROG&PRE_PROG: R-grant blocking delay on
                                                                    seq1-seq2 transition. Scale = ANA_CTL0.SCALE_SEQ12
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
    __IO Ifx_UReg_32Bit RGRANT_DELAY_PRG_SEQ23:8; /**< \brief [15:8]  PROG&PRE_PROG: R-grant blocking delay on
                                                                    seq2-seq3 transition. Scale = ANA_CTL0.SCALE_SEQ23
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
    __IO Ifx_UReg_32Bit RGRANT_DELAY_SEQ30:8;   /**< \brief [23:16] PROG&PRE_PROG & ERASE: R-grant blocking
                                                                    delay on seq3-seq0 transition.
                                                                    Scale = ANA_CTL0.SCALE_SEQ30
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
    __IO Ifx_UReg_32Bit RGRANT_DELAY_CLK:4;     /**< \brief [27:24] Frequency divider from clk_t  to create the
                                                                    8MHz reference clock for R_grant delay.
                                                                    The value of 0 is equivalent with 1.
                                                                    If the clock clk_t = 8MHz the value needs to be 1
                                                                    The value of this field is the integer result of
                                                                    'clk_t frequency / 8'.
                                                                    Example: for clk_t=100 this field is INT(100/8) =12.
                                                                    This field is updated at runtime with the
                                                                    'SW_RGRANT_DELAY_CLK ' value from the HV parameters
                                                                    table (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [30:28] \internal Reserved */
    __IO Ifx_UReg_32Bit HV_PARAMS_LOADED:1;     /**< \brief [31:31] 0': HV Pulse common params not loaded
                                                                    '1': HV Pulse common params  loaded: r-grant
                                                                    delays, r-grant scale, prescaler, timer values for
                                                                    seq1,seq2_pre, seq2_post, seq3 (rw) */
} Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits;

/** \brief Timer prescaler (clk_t to timer clock frequency divider) */
typedef struct _Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits
{
    __IO Ifx_UReg_32Bit TIMER_CLOCK_FREQ:8;     /**< \brief [7:0]   Clk_t frequency divider to provide the 1MHz
                                                                    reference clock for the Regif Timer.
                                                                    Equal to the frequency in MHz of the timer clock 'clk_t'.
                                                                    Example: if 'clk_t' has a frequency of 4 MHz then
                                                                    this field value is '4'
                                                                    Max clk_t frequency = 100MHz.
                                                                    This field is updated at runtime with the
                                                                    'SW_TIMER_CLOCK_FREQ ' value from the HV parameters
                                                                    table (rw) */
    __IO Ifx_UReg_32Bit RGRANT_DELAY_PRG_PEON:8; /**< \brief [15:8]  PROG&PRE_PROG: R-grant blocking delay on PE ON.
                                                                    Scale = ANA_CTL0.SCALE_PEON
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
    __IO Ifx_UReg_32Bit RGRANT_DELAY_PRG_PEOFF:8; /**< \brief [23:16] PROG&PRE_PROG: R-grant blocking delay on PE OFF.
                                                                    Scale = ANA_CTL0.SCALE_PEOFF
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
    __IO Ifx_UReg_32Bit RGRANT_DELAY_PRG_SEQ01:8; /**< \brief [31:24] PROG&PRE_PROG: R-grant blocking delay on
                                                                    seq0-seq1 transition. Scale = ANA_CTL0.SCALE_SEQ01
                                                                    When = 0  R_GRANT_DELAY control is disabled
                                                                    when IF_SEL=1  R_GRANT_DELAY control is disabled (rw) */
} Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits;

/** \brief Timer control */
typedef struct _Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits
{
    __IO Ifx_UReg_32Bit PERIOD:15;              /**< \brief [14:0]  Timer period in either microseconds (SCALE
                                                                    is '0') or 100's of microseconds (SCALE is '1') multiples. (rw) */
    __IO Ifx_UReg_32Bit SCALE:1;                /**< \brief [15:15] Timer tick scale:
                                                                    0: 1 microsecond.
                                                                    1: 100 microseconds. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [23:16] \internal Reserved */
    __IO Ifx_UReg_32Bit AUTO_SEQUENCE:1;        /**< \brief [24:24] 1': Starts1 the HV automatic sequencing
                                                                    Cleared by HW (rw) */
    __IO Ifx_UReg_32Bit PRE_PROG:1;             /**< \brief [25:25] 1 during pre-program operation (rw) */
    __IO Ifx_UReg_32Bit PRE_PROG_CSL:1;         /**< \brief [26:26] 0: CSL lines driven by MDAC
                                                                    1: CSL lines driven by VNEG_G (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [28:27] \internal Reserved */
    __IO Ifx_UReg_32Bit PUMP_EN:1;              /**< \brief [29:29] Pump enable:
                                                                    0: disabled
                                                                    1: enabled (also requires FM_CTL.IF_SEL to be'1',
                                                                    this additional restriction is required to prevent
                                                                    non intentional clearing of the FM).
                                                                    SW sets this field to '1' to generate a single PE pulse.
                                                                    HW clears this field when timer is expired. (rw) */
    __IO Ifx_UReg_32Bit ACLK_EN:1;              /**< \brief [30:30] ACLK enable (generates a single cycle pulse
                                                                    for the FM):
                                                                    0: disabled
                                                                    1: enabled.
                                                                    SW set this field to '1' to generate a single cycle pulse.
                                                                    HW sets this field to '0' when the pulse is generated. (rw) */
    __IO Ifx_UReg_32Bit TIMER_EN:1;             /**< \brief [31:31] Timer enable:
                                                                    0: disabled
                                                                    1: enabled. SW sets this field to '1' to start the timer.
                                                                    HW sets this field to '0' when the timer is expired. (rw) */
} Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits;

/** \brief MPCON clock */
typedef struct _Ifx_FLASHC_FM_CTL_ACLK_CTL_Bits
{
    __O  Ifx_UReg_32Bit ACLK_GEN:1;             /**< \brief [0:0]   Write '1b1'  to generate one clock pulse
                                                                    for HV control registers (mpcon outputs) (w) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FLASHC_FM_CTL_ACLK_CTL_Bits;

/** \brief Interrupt */
typedef struct _Ifx_FLASHC_FM_CTL_INTR_Bits
{
    __IO Ifx_UReg_32Bit TIMER_EXPIRED:1;        /**< \brief [0:0]   Set to '1', when event is detected.
                                                                    Write INTR field with '1', to clear bit.
                                                                    Write INTR_SET field with '1', to set bit. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FLASHC_FM_CTL_INTR_Bits;

/** \brief Interrupt set */
typedef struct _Ifx_FLASHC_FM_CTL_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit TIMER_EXPIRED:1;        /**< \brief [0:0]   Write INTR_SET field with '1' to set
                                                                    corresponding INTR field (a write of '0' has no effect). (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FLASHC_FM_CTL_INTR_SET_Bits;

/** \brief Interrupt mask */
typedef struct _Ifx_FLASHC_FM_CTL_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit TIMER_EXPIRED:1;        /**< \brief [0:0]   Mask for corresponding field in INTR register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FLASHC_FM_CTL_INTR_MASK_Bits;

/** \brief Interrupt masked */
typedef struct _Ifx_FLASHC_FM_CTL_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit TIMER_EXPIRED:1;        /**< \brief [0:0]   Logical and of corresponding request and
                                                                    mask fields. (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FLASHC_FM_CTL_INTR_MASKED_Bits;

/** \brief Cal control - VCT, VBG, CDAC, IPREF */
typedef struct _Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits
{
    __IO Ifx_UReg_32Bit VCT_TRIM_HV:5;          /**< \brief [4:0]   Bandgap Voltage Temperature Compensation
                                                                    trim control. (rw) */
    __IO Ifx_UReg_32Bit CDAC_HV:3;              /**< \brief [7:5]   Temperature compensated trim DAC.
                                                                    To control Vctat slope for VNEG. (rw) */
    __IO Ifx_UReg_32Bit VBG_TRIM_HV:6;          /**< \brief [13:8]  Bandgap Voltage trim control. (rw) */
    __IO Ifx_UReg_32Bit VBG_TC_TRIM_HV:4;       /**< \brief [17:14] Bandgap Voltage Temperature Compensation
                                                                    trim control (rw) */
    __IO Ifx_UReg_32Bit IPREF_TRIMA_HV:1;       /**< \brief [18:18] Adds 100-150nA boost on IPREF (rw) */
    __IO Ifx_UReg_32Bit SPARE_CTL0_HV:1;        /**< \brief [19:19] Spare trim bits, DNU (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits;

/** \brief Cal control - ICREF, IPREF */
typedef struct _Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits
{
    __IO Ifx_UReg_32Bit ICREF_TRIM_HV:6;        /**< \brief [5:0]   Bandgap Current  trim control. (rw) */
    __IO Ifx_UReg_32Bit ICREF_TC_TRIM_HV:4;     /**< \brief [9:6]   Bandgap Current Temperature Compensation
                                                                    trim control (rw) */
    __IO Ifx_UReg_32Bit IPREF_TRIM_HV:5;        /**< \brief [14:10] Bandgap IPTAT trim control. (rw) */
    __IO Ifx_UReg_32Bit IPREF_TC_HV:4;          /**< \brief [18:15] IPREF Slope Control (rw) */
    __IO Ifx_UReg_32Bit SPARE_CTL1_HV:1;        /**< \brief [19:19] Spare trim bit, DNU (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits;

/** \brief Cal control - IDAC, IBS_CTL, LAT_DIS */
typedef struct _Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits
{
    __IO Ifx_UReg_32Bit IDAC_ULP_HV:8;          /**< \brief [7:0]   Sets the sense current reference offset value.
                                                                    Refer to trim tables for details. (rw) */
    __IO Ifx_UReg_32Bit SPARE_ULP_CTL2_HV:1;    /**< \brief [8:8]   Spare bit to be used in ULP configuration (rw) */
    __IO Ifx_UReg_32Bit VREF_SEL_ULP_HV:1;      /**< \brief [9:9]   0: Uses VBG as reference for VLIM - ULP Mode
                                                                    1: Uses VCTAT as reference for VLIM - ULP mode (rw) */
    __IO Ifx_UReg_32Bit IDAC_LP_HV:8;           /**< \brief [17:10] Sets the sense current reference offset value.
                                                                    Refer to trim tables for details. (rw) */
    __IO Ifx_UReg_32Bit SPARE_LP_CTL2_HV:1;     /**< \brief [18:18] Spare bit to be used in LP configuration (rw) */
    __IO Ifx_UReg_32Bit VREF_SEL_LP_HV:1;       /**< \brief [19:19] 0: Uses VBG as reference for VLIM - LP Mode
                                                                    1: Uses VCTAT as reference for VLIM - LP mode (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits;

/** \brief Cal control - OSC trims, FDIV, REG_ACT, TURBO, LP_ULP_SW */
typedef struct _Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits
{
    __IO Ifx_UReg_32Bit OSC_TRIM_HV:4;          /**< \brief [3:0]   Flash macro pump clock trim control. (rw) */
    __IO Ifx_UReg_32Bit OSC_RANGE_TRIM_HV:1;    /**< \brief [4:4]   0: Oscillator Low Frequency range
                                                                    1: Oscillator High Frequency Range (rw) */
    __IO Ifx_UReg_32Bit VPROT_ACT_HV:1;         /**< \brief [5:5]   Forces VPROT in active mode all the time (rw) */
    __IO Ifx_UReg_32Bit OSC_TEMPCO_HV:1;        /**< \brief [6:6]   0: Uses VBG as reference
                                                                    1: Uses VCTAT as reference (rw) */
    __IO Ifx_UReg_32Bit LAT_DIS3_HV:1;          /**< \brief [7:7]   0: Enable saen3 control for data out latches
                                                                    1: Disable saen3 control for data out latches (rw) */
    __IO Ifx_UReg_32Bit PM_EN_HV:1;             /**< \brief [8:8]   0: Sense Amp bias similar to _ver2
                                                                    1: pbias enabled in Sense Amp for Better Margin (rw) */
    __IO Ifx_UReg_32Bit REG_ACT_HV:1;           /**< \brief [9:9]   0: VBST regulator will operate in
                                                                    active/standby mode based on control signal.
                                                                    1: Forces the VBST regulator in active mode all the
                                                                    time (rw) */
    __IO Ifx_UReg_32Bit FDIV_TRIM_HV:2;         /**< \brief [11:10] FDIV_TRIM_HV[1:0]: Assuming oscillator
                                                                    frequency of 8MHz in standby.
                                                                    Following are the clock frequencies seen by doubler
                                                                    00: F = 0.5MHz
                                                                    01: F = 1MHz
                                                                    10: F = 2MHz
                                                                    11: F = 4MHz (rw) */
    __IO Ifx_UReg_32Bit VDDHI_HV:1;             /**< \brief [12:12] 0: vdd < 2.3V
                                                                    1: vdd >= 2.3V
                                                                    '0' setting can used for vdd > 2.3V also, but with
                                                                    a current penalty. (rw) */
    __IO Ifx_UReg_32Bit TURBO_PULSEW_HV:2;      /**< \brief [14:13] Turbo pulse width trim (Typical)
                                                                    00: 40 us
                                                                    01: 20 us
                                                                    10: 15 us
                                                                    11: 8 us (rw) */
    __IO Ifx_UReg_32Bit IOSC_TRIM_HV:2;         /**< \brief [16:15] Oscillator Bias Current Trim during Standby
                                                                    0.33 uA -- 1.65 uA (rw) */
    __IO Ifx_UReg_32Bit CL_ISO_DIS_HV:1;        /**< \brief [17:17] 0: The internal logic controlls the CL
                                                                    isolation
                                                                    1: Forces CL bypass (rw) */
    __IO Ifx_UReg_32Bit R_GRANT_EN_HV:1;        /**< \brief [18:18] 0: r_grant handshake disabled, r_grant
                                                                    always 1.
                                                                    1: r_grant handshake  enabled (rw) */
    __IO Ifx_UReg_32Bit LP_ULP_SW_HV:1;         /**< \brief [19:19] LP<-->ULP switch for trim signals:
                                                                    0: LP
                                                                    1: ULP (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits;

/** \brief Cal control - VLIM, IDAC, SDAC, ITIM ULP trims */
typedef struct _Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits
{
    __IO Ifx_UReg_32Bit VLIM_TRIM_ULP_HV:2;     /**< \brief [1:0]   VLIM_TRIM[1:0]:
                                                                    00: V2 = 650mV
                                                                    01: V2 = 700mV
                                                                    10: V2 = 750mV - Default
                                                                    11: V2 = 800mV (rw) */
    __IO Ifx_UReg_32Bit SPARE_CTL4_ULP_HV:3;    /**< \brief [4:2]    (rw) */
    __IO Ifx_UReg_32Bit SDAC_ULP_HV:2;          /**< \brief [6:5]   Sets the sense current reference temp slope.
                                                                    Refer to trim tables for details. (rw) */
    __IO Ifx_UReg_32Bit ITIM_ULP_HV:6;          /**< \brief [12:7]  Trimming of timing current (rw) */
    __IO Ifx_UReg_32Bit FM_READY_DEL_ULP_HV:2;  /**< \brief [14:13] 00: Default : delay 1ns
                                                                    01: Delayed by 1.5us
                                                                    10: Delayed by 2.0us
                                                                    11: Delayed by 2.5us (rw) */
    __IO Ifx_UReg_32Bit SA_CTL_TRIM_T8_ULP_HV:1; /**< \brief [15:15] saen3 pulse width trim (Current trim) (rw) */
    __IO Ifx_UReg_32Bit READY_RESTART_N_HV:1;   /**< \brief [16:16] Toggle: 1-->0, ready goes low, ready will
                                                                    remain low as long as the bit is low.
                                                                    Toggle the bit back to 1 to activate the ready logic.
                                                                    To be used by API only. (rw) */
    __IO Ifx_UReg_32Bit VBST_S_DIS_HV:1;        /**< \brief [17:17] 0: VBST_S voltage for each sector to allow
                                                                    VBST level to be dropped to VCC during Erase in the
                                                                    selected sector, reducing coupling to GBL.
                                                                    1: VBST_S voltage for each sector stays at VBST
                                                                    level during Erase in the selected sector. (rw) */
    __IO Ifx_UReg_32Bit AUTO_HVPULSE_HV:1;      /**< \brief [18:18] 0: HV Pulse controlled by FW
                                                                    1: HV Pulse controlled by Hardware (rw) */
    __IO Ifx_UReg_32Bit UGB_EN_HV:1;            /**< \brief [19:19] UGB enable in TM control (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits;

/** \brief Cal control - VLIM, IDAC, SDAC, ITIM LP trims */
typedef struct _Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits
{
    __IO Ifx_UReg_32Bit VLIM_TRIM_LP_HV:2;      /**< \brief [1:0]   VLIM_TRIM[1:0]:
                                                                    00: V2 = 650mV
                                                                    01: V2 = 700mV
                                                                    10: V2 = 750mV - Default
                                                                    11: V2 = 800mV (rw) */
    __IO Ifx_UReg_32Bit SPARE_CTL5_LP_HV:3;     /**< \brief [4:2]   Spare Bit, not used (rw) */
    __IO Ifx_UReg_32Bit SDAC_LP_HV:2;           /**< \brief [6:5]   Sets the sense current reference temp slope.
                                                                    Refer to trim tables for details. (rw) */
    __IO Ifx_UReg_32Bit ITIM_LP_HV:6;           /**< \brief [12:7]  Trimming of timing current (rw) */
    __IO Ifx_UReg_32Bit FM_READY_DEL_LP_HV:2;   /**< \brief [14:13] 00: Delayed by 1us
                                                                    01: Delayed by 1.5us
                                                                    10: Delayed by 2.0us
                                                                    11: Delayed by 2.5us (rw) */
    __IO Ifx_UReg_32Bit SA_CTL_TRIM_T8_LP_HV:1; /**< \brief [15:15] saen3 pulse width trim (Current trim) (rw) */
    __IO Ifx_UReg_32Bit SPARE2_CTL5_LP_HV:2;    /**< \brief [17:16] Spare Bit, not used (rw) */
    __IO Ifx_UReg_32Bit AMUX_SEL_HV:2;          /**< \brief [19:18] Amux Select in AMUX_UGB
                                                                    00: Bypass UGB for both amuxbusa and amuxbusb
                                                                    01: Bypass UGB for amuxbusb while passing amuxbusa
                                                                    through UGB.
                                                                    10: Bypass UGB for amuxbusa while passing amuxbusb
                                                                    through UGB.
                                                                    11: UGB Calibrate mode (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits;

/** \brief Cal control - SA CTL LP/ULP trims */
typedef struct _Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits
{
    __IO Ifx_UReg_32Bit SA_CTL_TRIM_T1_ULP_HV:2; /**< \brief [1:0]   clk_trk delay (rw) */
    __IO Ifx_UReg_32Bit SA_CTL_TRIM_T4_ULP_HV:3; /**< \brief [4:2]   SA_CTL_TRIM_T4_ULP_HV<2>= eqi (eq current trim)
                                                                    SA_CTL_TRIM_T4_ULP_HV<1:0> = eqc (eq cap trim) (rw) */
    __IO Ifx_UReg_32Bit SA_CTL_TRIM_T5_ULP_HV:3; /**< \brief [7:5]   SA_CTL_TRIM_T5_ULP_HV<2>= evi (integration
                                                                    current trim)
                                                                    SA_CTL_TRIM_T5_ULP_HV<1:0> = evc (integration cap
                                                                    trim) (rw) */
    __IO Ifx_UReg_32Bit SA_CTL_TRIM_T6_ULP_HV:2; /**< \brief [9:8]   SA_CTL_TRIM_T6_ULP_HV<1>= eni (enable
                                                                    current trim)
                                                                    SA_CTL_TRIM_T6_ULP_HV<0> = ecn (enable cap trim) (rw) */
    __IO Ifx_UReg_32Bit SA_CTL_TRIM_T1_LP_HV:2; /**< \brief [11:10] clk_trk delay (rw) */
    __IO Ifx_UReg_32Bit SA_CTL_TRIM_T4_LP_HV:3; /**< \brief [14:12] SA_CTL_TRIM_T4_LP_HV<2>= eqi (eq current trim)
                                                                    SA_CTL_TRIM_T4_LP_HV<1:0> = eqc (eq cap trim) (rw) */
    __IO Ifx_UReg_32Bit SA_CTL_TRIM_T5_LP_HV:3; /**< \brief [17:15] SA_CTL_TRIM_T5_LP_HV<2>= evi (integration
                                                                    current trim)
                                                                    SA_CTL_TRIM_T5_LP_HV<1:0> = evc (integration cap
                                                                    trim) (rw) */
    __IO Ifx_UReg_32Bit SA_CTL_TRIM_T6_LP_HV:2; /**< \brief [19:18] SA_CTL_TRIM_T6_LP_HV<1>= eni (enable
                                                                    current trim)
                                                                    SA_CTL_TRIM_T6_LP_HV<0> = ecn (enable cap trim) (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits;

/** \brief Cal control - ERSX8_CLK_SEL, FM_ACTIVE, TURBO_EXT */
typedef struct _Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits
{
    __IO Ifx_UReg_32Bit ERSX8_CLK_SEL_HV:2;     /**< \brief [1:0]   Clock frequency into the ersx8 shift
                                                                    register block
                                                                    00: Oscillator clock
                                                                    01: Oscillator clock / 2
                                                                    10: Oscillator clock / 4
                                                                    11: Oscillator clock / 8 (rw) */
    __IO Ifx_UReg_32Bit FM_ACTIVE_HV:1;         /**< \brief [2:2]   0: Normal operation
                                                                    1: Forces FM SYS in active mode (rw) */
    __IO Ifx_UReg_32Bit TURBO_EXT_HV:1;         /**< \brief [3:3]   0: Normal operation
                                                                    1: Uses external turbo pulse (rw) */
    __IO Ifx_UReg_32Bit NPDAC_HWCTL_DIS_HV:1;   /**< \brief [4:4]   0': ndac, pdac staircase hardware controlled
                                                                    1: ndac, pdac staircase disabled. Enables FW control. (rw) */
    __IO Ifx_UReg_32Bit FM_READY_DIS_HV:1;      /**< \brief [5:5]   0': fm ready is enabled
                                                                    1: fm ready is disabled (fm_ready is always '1') (rw) */
    __IO Ifx_UReg_32Bit ERSX8_EN_ALL_HV:1;      /**< \brief [6:6]   0': Staggered turn on/off of GWL
                                                                    1: GWL are turned on/off at the same time (old FM
                                                                    legacy) (rw) */
    __IO Ifx_UReg_32Bit READY_DEL_HV:1;         /**< \brief [7:7]   0: Ready Delay trim.
                                                                    1: Ready Delay trim. (rw) */
    __IO Ifx_UReg_32Bit SPARE_CTL7_HV:2;        /**< \brief [9:8]    (rw) */
    __IO Ifx_UReg_32Bit PTRIM_ULP_HV:2;         /**< \brief [11:10] SA PBIAS Trim for ULP Operation (rw) */
    __IO Ifx_UReg_32Bit SPARE2_CTL7_ULP_HV:3;   /**< \brief [14:12]  (rw) */
    __IO Ifx_UReg_32Bit PTRIM_LP_HV:2;          /**< \brief [16:15] SA PBIAS Trim for LP Operation (rw) */
    __IO Ifx_UReg_32Bit SPARE3_CTL7_LP_HV:3;    /**< \brief [19:17]  (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits;

/** \brief Flash macro Page Latches ECC */
typedef struct _Ifx_FLASHC_FM_CTL_FM_PL_ECC_Bits
{
    __IO Ifx_UReg_32Bit DATA9:9;                /**< \brief [8:0]   if_sel must be 1
                                                                    Normal PL ECC  data read: one page latch Byte
                                                                    When reading the page latches it requires
                                                                    FM_CTL.IF_SEL to be '1'
                                                                    Note: the high Voltage page latches are readable
                                                                    for test mode functionality.
                                                                    Only even addresses, address step =8. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [15:9]  \internal Reserved */
    __I  Ifx_UReg_32Bit DATA9_1:9;              /**< \brief [24:16] ECC encoder output.
                                                                    Can be read any time at address 0xa00 (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_FLASHC_FM_CTL_FM_PL_ECC_Bits;

/** \brief Flash macro memory sense amplifier data */
typedef struct _Ifx_FLASHC_FM_CTL_FM_MEM_DATA_Bits
{
    __I  Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Sense amplifier and column multiplexer
                                                                    structure Bytes.
                                                                    The read data is dependent on FM_CTL.IF_SEL
                                                                    - IF_SEL is 0: data as specified by the R interface
                                                                    address; If accessed when IF_SEL=0, the data read
                                                                    is not valid.
                                                                    - IF_SEL is 1: data as specified by FM_MEM_ADDR and
                                                                    the offset of the accessed FM_MEM_DATA register.
                                                                    Four FM data out Bytes.
                                                                    Each access is a full FM core read through C-BUS.
                                                                    The row address is given by the FM_ADDRESS
                                                                    register, the word and column addresses are driven
                                                                    by c_addr bus. (r) */
} Ifx_FLASHC_FM_CTL_FM_MEM_DATA_Bits;

/** \brief Flash macro memory sense amplifier ECC. */
typedef struct _Ifx_FLASHC_FM_CTL_FM_MEM_ECC_Bits
{
    __I  Ifx_UReg_32Bit ECC_PARITY:9;           /**< \brief [8:0]   Sense amplifier ECC Bits.
                                                                    FM_CTL.IF_SEL must be 1.
                                                                    FM ECC data.
                                                                    Each access is a full FM core read through C-BUS.
                                                                    The row address is given by the FM_ADDRESS
                                                                    register, the word and column addresses are driven
                                                                    by c_addr bus. (r) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_FLASHC_FM_CTL_FM_MEM_ECC_Bits;

/** \brief Internal ECC signal - unused */
typedef struct _Ifx_FLASHC_FM_CTL_FM_ECC_CTL_ADDR_Bits
{
    __I  Ifx_UReg_32Bit ECC_CTL_ADDR:1;         /**< \brief [0:0]   Internal Register - Spare for future use -
                                                                    Read Undefined, Write Ignore (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FLASHC_FM_CTL_FM_ECC_CTL_ADDR_Bits;

/** \brief 0 */
typedef struct _Ifx_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR_Bits
{
    __I  Ifx_UReg_32Bit FM_RED_CTL_SM01_ADDR:32; /**< \brief [31:0]  Internal Register - Spare for future use -
                                                                    Read Undefined, Write Ignore (r) */
} Ifx_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR_Bits;

/** \brief 0 */
typedef struct _Ifx_FLASHC_FM_CTL_FM_RED_CTL67_ADDR_Bits
{
    __I  Ifx_UReg_32Bit FM_RED_CTL67_ADDR:32;   /**< \brief [31:0]  Internal Register - Spare for future use -
                                                                    Read Undefined, Write Ignore (r) */
} Ifx_FLASHC_FM_CTL_FM_RED_CTL67_ADDR_Bits;

/** \brief 0 */
typedef struct _Ifx_FLASHC_FM_CTL_FM_RED_CTL45_ADDR_Bits
{
    __I  Ifx_UReg_32Bit FM_RED_CTL45_ADDR:32;   /**< \brief [31:0]  Internal Register - Spare for future use -
                                                                    Read Undefined, Write Ignore (r) */
} Ifx_FLASHC_FM_CTL_FM_RED_CTL45_ADDR_Bits;

/** \brief 0 */
typedef struct _Ifx_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR_Bits
{
    __I  Ifx_UReg_32Bit FM_CAL_CTL8_ADDR:32;    /**< \brief [31:0]  Internal Register - Spare for future use -
                                                                    Read Undefined, Write Ignore (r) */
} Ifx_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_FLASHC_Registers_union
 * \{   */
/** \brief Flash control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FLASH_CTL_Bits B;                /**< \brief Bitfield access */
} Ifx_FLASHC_FLASH_CTL;

/** \brief # of sector of a FM */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FLASH_SECTOR_M_Bits B;           /**< \brief Bitfield access */
} Ifx_FLASHC_FLASH_SECTOR_M;

/** \brief Size of MAIN in 8KB block for each pair of sectors */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FLASH_MAIN_N_Bits B;             /**< \brief Bitfield access */
} Ifx_FLASHC_FLASH_MAIN_N;

/** \brief Size of WORK in 8KB block for each pair of sectors */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FLASH_WORK_Z_Bits B;             /**< \brief Bitfield access */
} Ifx_FLASHC_FLASH_WORK_Z;

/** \brief Size of SLFASH in 8KB block in Sector 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FLASH_SFLASH_Y_Bits B;           /**< \brief Bitfield access */
} Ifx_FLASHC_FLASH_SFLASH_Y;

/** \brief Size of refresh rows for each sector */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FLASH_REFRESH_ROW_Bits B;        /**< \brief Bitfield access */
} Ifx_FLASHC_FLASH_REFRESH_ROW;

/** \brief Command */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FLASH_CMD_Bits B;                /**< \brief Bitfield access */
} Ifx_FLASHC_FLASH_CMD;

/** \brief Flash Controller Lock Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FLASH_LOCK_Bits B;               /**< \brief Bitfield access */
} Ifx_FLASHC_FLASH_LOCK;

/** \brief Flash power control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FLASH_PWR_CTL_Bits B;            /**< \brief Bitfield access */
} Ifx_FLASHC_FLASH_PWR_CTL;

/** \brief Shadow bit of FLASH_CTL.ENFORCE_PC_LOCK */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_ENFORCE_PC_LOCK_SHADOW_Bits B;   /**< \brief Bitfield access */
} Ifx_FLASHC_ENFORCE_PC_LOCK_SHADOW;

/** \brief ECC injection enable on read */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_ECC_INJ_EN_Bits B;               /**< \brief Bitfield access */
} Ifx_FLASHC_ECC_INJ_EN;

/** \brief ECC injection control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_ECC_INJ_CTL_Bits B;              /**< \brief Bitfield access */
} Ifx_FLASHC_ECC_INJ_CTL;

/** \brief Interrupt threshold for number of ECC correctable error */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_ECC_LOGIR_Bits B;                /**< \brief Bitfield access */
} Ifx_FLASHC_ECC_LOGIR;

/** \brief Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_CFG_Bits B;                  /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_CFG;

/** \brief Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_CTRL_Bits B;                 /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_CTRL;

/** \brief Max value of block-based index register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_BLK_MAX_Bits B;              /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_BLK_MAX;

/** \brief Block size & initialization in progress */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_BLK_CFG_Bits B;              /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_BLK_CFG;

/** \brief Index of 32-block group accessed through BLK_LUT (Separate IDX for each PC depending on access_pc) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_BLK_IDX_Bits B;              /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_BLK_IDX;

/** \brief NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_BLK_LUT_Bits B;              /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_BLK_LUT;

/** \brief Control register with lock bit and auto-increment only */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_ROT_CTRL_Bits B;             /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_ROT_CTRL;

/** \brief Max value of block-based index register for ROT */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_ROT_BLK_MAX_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_ROT_BLK_MAX;

/** \brief Same as BLK_CFG */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_ROT_BLK_CFG_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_ROT_BLK_CFG;

/** \brief Index of 8-block group accessed through ROT_BLK_LUT_* */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_ROT_BLK_IDX_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_ROT_BLK_IDX;

/** \brief Protection context of 8-block group accesses through ROT_BLK_LUT */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_ROT_BLK_PC_Bits B;           /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_ROT_BLK_PC;

/** \brief (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_MPC_ROT_BLK_LUT;

/** \brief Redundancy Control normal sectors 0,1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_RED_CTL01_Bits B;         /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_RED_CTL01;

/** \brief Redundancy Control normal sectors 2,3 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_RED_CTL23_Bits B;         /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_RED_CTL23;

/** \brief Flash macro Page Latches data */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_PL_DATA_Bits B;        /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_PL_DATA;

/** \brief Flash macro control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits B;   /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL;

/** \brief Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_STATUS_Bits B;            /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_STATUS;

/** \brief Flash macro address */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_ADDR_Bits B;           /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_ADDR;

/** \brief Bookmark register - keeps the current FW HV seq */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_BOOKMARK_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_BOOKMARK;

/** \brief Regular flash geometry */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_GEOMETRY_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_GEOMETRY;

/** \brief Supervisory flash geometry */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits B; /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY;

/** \brief Analog control 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_ANA_CTL0;

/** \brief Analog control 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_ANA_CTL1;

/** \brief Flash macro write page latches all */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_PL_WRDATA_ALL_Bits B;  /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_PL_WRDATA_ALL;

/** \brief Address bit to point to scratch area */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR_Bits B;   /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR;

/** \brief R-grant delay for erase */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits B;  /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS;

/** \brief R-grant delay scale for erase */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits B;  /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS;

/** \brief HV Pulse Delay for seq2 post & seq3 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_PW_SEQ23_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_PW_SEQ23;

/** \brief HV Pulse Delay for seq 1&2 pre */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_PW_SEQ12_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_PW_SEQ12;

/** \brief Wait State control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_WAIT_CTL;

/** \brief R-grant delay for program */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits B;  /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG;

/** \brief Timer prescaler (clk_t to timer clock frequency divider) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits B;     /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL;

/** \brief Timer control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits B;         /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_TIMER_CTL;

/** \brief MPCON clock */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_ACLK_CTL_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_ACLK_CTL;

/** \brief Interrupt */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_INTR_Bits B;              /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_INTR;

/** \brief Interrupt set */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_INTR_SET_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_INTR_SET;

/** \brief Interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_INTR_MASK_Bits B;         /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_INTR_MASK;

/** \brief Interrupt masked */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_INTR_MASKED_Bits B;       /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_INTR_MASKED;

/** \brief Cal control - VCT, VBG, CDAC, IPREF */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_CAL_CTL0;

/** \brief Cal control - ICREF, IPREF */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_CAL_CTL1;

/** \brief Cal control - IDAC, IBS_CTL, LAT_DIS */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_CAL_CTL2;

/** \brief Cal control - OSC trims, FDIV, REG_ACT, TURBO, LP_ULP_SW */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_CAL_CTL3;

/** \brief Cal control - VLIM, IDAC, SDAC, ITIM ULP trims */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_CAL_CTL4;

/** \brief Cal control - VLIM, IDAC, SDAC, ITIM LP trims */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_CAL_CTL5;

/** \brief Cal control - SA CTL LP/ULP trims */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_CAL_CTL6;

/** \brief Cal control - ERSX8_CLK_SEL, FM_ACTIVE, TURBO_EXT */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits B;          /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_CAL_CTL7;

/** \brief Flash macro Page Latches ECC */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_PL_ECC_Bits B;         /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_PL_ECC;

/** \brief Flash macro memory sense amplifier data */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_MEM_DATA_Bits B;       /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_MEM_DATA;

/** \brief Flash macro memory sense amplifier ECC. */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_MEM_ECC_Bits B;        /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_MEM_ECC;

/** \brief Internal ECC signal - unused */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_ECC_CTL_ADDR_Bits B;   /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_ECC_CTL_ADDR;

/** \brief 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR_Bits B; /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR;

/** \brief 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_RED_CTL67_ADDR_Bits B; /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_RED_CTL67_ADDR;

/** \brief 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_RED_CTL45_ADDR_Bits B; /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_RED_CTL45_ADDR;

/** \brief 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR_Bits B;  /**< \brief Bitfield access */
} Ifx_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_FLASHC_MPC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MPC object */
typedef volatile struct _Ifx_FLASHC_MPC
{
       __IO Ifx_FLASHC_MPC_CFG                  CFG;                    /**< \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system.*/
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
       __IO Ifx_FLASHC_MPC_CTRL                 CTRL;                   /**< \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc)*/
       __I  Ifx_FLASHC_MPC_BLK_MAX              BLK_MAX;                /**< \brief 104, Max value of block-based index register*/
       __I  Ifx_FLASHC_MPC_BLK_CFG              BLK_CFG;                /**< \brief 108, Block size & initialization in progress*/
       __IO Ifx_FLASHC_MPC_BLK_IDX              BLK_IDX;                /**< \brief 10C, Index of 32-block group accessed through BLK_LUT (Separate IDX for each PC depending on access_pc)*/
       __IO Ifx_FLASHC_MPC_BLK_LUT              BLK_LUT;                /**< \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc>*/
       __I  Ifx_UReg_8Bit                       reserved_114[236];      /**< \brief 114, */
       __IO Ifx_FLASHC_MPC_ROT_CTRL             ROT_CTRL;               /**< \brief 200, Control register with lock bit and auto-increment only*/
       __I  Ifx_UReg_8Bit                       reserved_204[4];        /**< \brief 204, */
       __I  Ifx_FLASHC_MPC_ROT_BLK_MAX          ROT_BLK_MAX;            /**< \brief 208, Max value of block-based index register for ROT*/
       __I  Ifx_FLASHC_MPC_ROT_BLK_CFG          ROT_BLK_CFG;            /**< \brief 20C, Same as BLK_CFG*/
       __IO Ifx_FLASHC_MPC_ROT_BLK_IDX          ROT_BLK_IDX;            /**< \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_**/
       __IO Ifx_FLASHC_MPC_ROT_BLK_PC           ROT_BLK_PC;             /**< \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT*/
       __IO Ifx_FLASHC_MPC_ROT_BLK_LUT          ROT_BLK_LUT;            /**< \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC*/
       __I  Ifx_UReg_8Bit                       reserved_21C[3556];     /**< \brief 21C, */
} Ifx_FLASHC_MPC;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_FLASHC_FM_CTL_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief FM_CTL object */
typedef volatile struct _Ifx_FLASHC_FM_CTL
{
       __I  Ifx_UReg_8Bit                       reserved_0[64];         /**< \brief 0, */
       __IO Ifx_FLASHC_FM_CTL_RED_CTL01         RED_CTL01;              /**< \brief 40, Redundancy Control normal sectors 0,1*/
       __IO Ifx_FLASHC_FM_CTL_RED_CTL23         RED_CTL23;              /**< \brief 44, Redundancy Control normal sectors 2,3*/
       __I  Ifx_UReg_8Bit                       reserved_48[1976];      /**< \brief 48, */
       __IO Ifx_FLASHC_FM_CTL_FM_PL_DATA        FM_PL_DATA[132];        /**< \brief 800, Flash macro Page Latches data*/
       __IO Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL   FLASH_MACRO_CTL;        /**< \brief A10, Flash macro control*/
       __I  Ifx_FLASHC_FM_CTL_STATUS            STATUS;                 /**< \brief A14, Status*/
       __IO Ifx_FLASHC_FM_CTL_FM_ADDR           FM_ADDR;                /**< \brief A18, Flash macro address*/
       __IO Ifx_FLASHC_FM_CTL_BOOKMARK          BOOKMARK;               /**< \brief A1C, Bookmark register - keeps the current FW HV seq*/
       __I  Ifx_FLASHC_FM_CTL_GEOMETRY          GEOMETRY;               /**< \brief A20, Regular flash geometry*/
       __I  Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY GEOMETRY_SUPERVISORY; /**< \brief A24, Supervisory flash geometry*/
       __IO Ifx_FLASHC_FM_CTL_ANA_CTL0          ANA_CTL0;               /**< \brief A28, Analog control 0*/
       __IO Ifx_FLASHC_FM_CTL_ANA_CTL1          ANA_CTL1;               /**< \brief A2C, Analog control 1*/
       __IO Ifx_FLASHC_FM_CTL_FM_PL_WRDATA_ALL  FM_PL_WRDATA_ALL;       /**< \brief A30, Flash macro write page latches all*/
       __IO Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR   FM_REFRESH_ADDR;        /**< \brief A34, Address bit to point to scratch area*/
       __IO Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS  RGRANT_DELAY_ERS;       /**< \brief A38, R-grant delay for erase*/
       __IO Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS  RGRANT_SCALE_ERS;       /**< \brief A3C, R-grant delay scale for erase*/
       __IO Ifx_FLASHC_FM_CTL_PW_SEQ23          PW_SEQ23;               /**< \brief A40, HV Pulse Delay for seq2 post & seq3*/
       __IO Ifx_FLASHC_FM_CTL_PW_SEQ12          PW_SEQ12;               /**< \brief A44, HV Pulse Delay for seq 1&2 pre*/
       __IO Ifx_FLASHC_FM_CTL_WAIT_CTL          WAIT_CTL;               /**< \brief A48, Wait State control*/
       __IO Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG  RGRANT_DELAY_PRG;       /**< \brief A4C, R-grant delay for program*/
       __IO Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL     TIMER_CLK_CTL;          /**< \brief A50, Timer prescaler (clk_t to timer clock frequency divider)*/
       __IO Ifx_FLASHC_FM_CTL_TIMER_CTL         TIMER_CTL;              /**< \brief A54, Timer control*/
       __O  Ifx_FLASHC_FM_CTL_ACLK_CTL          ACLK_CTL;               /**< \brief A58, MPCON clock*/
       __IO Ifx_FLASHC_FM_CTL_INTR              INTR;                   /**< \brief A5C, Interrupt*/
       __IO Ifx_FLASHC_FM_CTL_INTR_SET          INTR_SET;               /**< \brief A60, Interrupt set*/
       __IO Ifx_FLASHC_FM_CTL_INTR_MASK         INTR_MASK;              /**< \brief A64, Interrupt mask*/
       __I  Ifx_FLASHC_FM_CTL_INTR_MASKED       INTR_MASKED;            /**< \brief A68, Interrupt masked*/
       __IO Ifx_FLASHC_FM_CTL_CAL_CTL0          CAL_CTL0;               /**< \brief A6C, Cal control - VCT, VBG, CDAC, IPREF*/
       __IO Ifx_FLASHC_FM_CTL_CAL_CTL1          CAL_CTL1;               /**< \brief A70, Cal control - ICREF, IPREF*/
       __IO Ifx_FLASHC_FM_CTL_CAL_CTL2          CAL_CTL2;               /**< \brief A74, Cal control - IDAC, IBS_CTL, LAT_DIS*/
       __IO Ifx_FLASHC_FM_CTL_CAL_CTL3          CAL_CTL3;               /**< \brief A78, Cal control - OSC trims, FDIV, REG_ACT, TURBO, LP_ULP_SW*/
       __IO Ifx_FLASHC_FM_CTL_CAL_CTL4          CAL_CTL4;               /**< \brief A7C, Cal control - VLIM, IDAC, SDAC, ITIM ULP trims*/
       __IO Ifx_FLASHC_FM_CTL_CAL_CTL5          CAL_CTL5;               /**< \brief A80, Cal control - VLIM, IDAC, SDAC, ITIM LP trims*/
       __IO Ifx_FLASHC_FM_CTL_CAL_CTL6          CAL_CTL6;               /**< \brief A84, Cal control - SA CTL LP/ULP trims*/
       __IO Ifx_FLASHC_FM_CTL_CAL_CTL7          CAL_CTL7;               /**< \brief A88, Cal control - ERSX8_CLK_SEL, FM_ACTIVE, TURBO_EXT*/
       __I  Ifx_UReg_8Bit                       reserved_A8C[116];      /**< \brief A8C, */
       __IO Ifx_FLASHC_FM_CTL_FM_PL_ECC         FM_PL_ECC[33];          /**< \brief B00, Flash macro Page Latches ECC*/
       __I  Ifx_UReg_8Bit                       reserved_B84[124];      /**< \brief B84, */
       __I  Ifx_FLASHC_FM_CTL_FM_MEM_DATA       FM_MEM_DATA[132];       /**< \brief C00, Flash macro memory sense amplifier data*/
       __I  Ifx_UReg_8Bit                       reserved_E10[240];      /**< \brief E10, */
       __I  Ifx_FLASHC_FM_CTL_FM_MEM_ECC        FM_MEM_ECC[33];         /**< \brief F00, Flash macro memory sense amplifier ECC.*/
       __I  Ifx_UReg_8Bit                       reserved_F84[104];      /**< \brief F84, */
       __I  Ifx_FLASHC_FM_CTL_FM_ECC_CTL_ADDR   FM_ECC_CTL_ADDR;        /**< \brief FEC, Internal ECC signal - unused*/
       __I  Ifx_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR FM_RED_CTL_SM01_ADDR; /**< \brief FF0, 0*/
       __I  Ifx_FLASHC_FM_CTL_FM_RED_CTL67_ADDR FM_RED_CTL67_ADDR;      /**< \brief FF4, 0*/
       __I  Ifx_FLASHC_FM_CTL_FM_RED_CTL45_ADDR FM_RED_CTL45_ADDR;      /**< \brief FF8, 0*/
       __I  Ifx_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR  FM_CAL_CTL8_ADDR;       /**< \brief FFC, 0*/
} Ifx_FLASHC_FM_CTL;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_FLASHC_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief FLASHC object */
typedef volatile struct _Ifx_FLASHC
{
       __IO Ifx_FLASHC_FLASH_CTL                FLASH_CTL;              /**< \brief 0, Flash control*/
       __I  Ifx_UReg_8Bit                       reserved_4[256];        /**< \brief 4, */
       __I  Ifx_FLASHC_FLASH_SECTOR_M           FLASH_SECTOR_M;         /**< \brief 104, # of sector of a FM*/
       __I  Ifx_FLASHC_FLASH_MAIN_N             FLASH_MAIN_N;           /**< \brief 108, Size of MAIN in 8KB block for each pair of sectors*/
       __I  Ifx_FLASHC_FLASH_WORK_Z             FLASH_WORK_Z;           /**< \brief 10C, Size of WORK in 8KB block for each pair of sectors*/
       __I  Ifx_FLASHC_FLASH_SFLASH_Y           FLASH_SFLASH_Y;         /**< \brief 110, Size of SLFASH in 8KB block in Sector 1*/
       __I  Ifx_FLASHC_FLASH_REFRESH_ROW        FLASH_REFRESH_ROW;      /**< \brief 114, Size of refresh rows for each sector*/
       __I  Ifx_UReg_8Bit                       reserved_118[232];      /**< \brief 118, */
       __IO Ifx_FLASHC_FLASH_CMD                FLASH_CMD;              /**< \brief 200, Command*/
       __IO Ifx_FLASHC_FLASH_LOCK               FLASH_LOCK;             /**< \brief 204, Flash Controller Lock Register*/
       __IO Ifx_FLASHC_FLASH_PWR_CTL            FLASH_PWR_CTL;          /**< \brief 208, Flash power control*/
       __I  Ifx_FLASHC_ENFORCE_PC_LOCK_SHADOW   ENFORCE_PC_LOCK_SHADOW; /**< \brief 20C, Shadow bit of FLASH_CTL.ENFORCE_PC_LOCK*/
       __I  Ifx_UReg_8Bit                       reserved_210[1520];     /**< \brief 210, */
       __IO Ifx_FLASHC_ECC_INJ_EN               ECC_INJ_EN;             /**< \brief 800, ECC injection enable on read*/
       __IO Ifx_FLASHC_ECC_INJ_CTL              ECC_INJ_CTL;            /**< \brief 804, ECC injection control*/
       __IO Ifx_FLASHC_ECC_LOGIR                ECC_LOGIR;              /**< \brief 808, Interrupt threshold for number of ECC correctable error*/
       __I  Ifx_UReg_8Bit                       reserved_80C[2036];     /**< \brief 80C, */
       __IO Ifx_FLASHC_MPC                      MPC[1];                 /**< \brief 1000, MPC Memory Protection Controller registers*/
       __IO Ifx_FLASHC_FM_CTL                   FM_CTL;                 /**< \brief 2000, Flash Macro Registers are maintained by SONOS FM team. Please read 002-26677 BROS for details.*/
       __I  Ifx_UReg_8Bit                       reserved_3000[53248];   /**< \brief 3000, */
} Ifx_FLASHC;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXFLASHC_REGDEF_H_ */
