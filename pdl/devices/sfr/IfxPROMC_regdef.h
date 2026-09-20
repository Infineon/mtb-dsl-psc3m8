/***************************************************************************//**
* \file IfxPROMC_regdef.h
*
* \brief
* PROMC Registers
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
* \defgroup IfxSfr_PROMC_Registers PROMC Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_PROMC_Registers_Bitfields Bitfields
* \ingroup IfxSfr_PROMC_Registers
*
* \defgroup IfxSfr_PROMC_Registers_union Register unions
* \ingroup IfxSfr_PROMC_Registers
*
* \defgroup IfxSfr_PROMC_Registers_struct Memory map
* \ingroup IfxSfr_PROMC_Registers
*
*******************************************************************************/

#ifndef _IFXPROMC_REGDEF_H_
#define _IFXPROMC_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_PROMC_Registers_Bitfields
 * \{  */
/** \brief Control */
typedef struct _Ifx_PROMC_CTL_Bits
{
    __IO Ifx_UReg_32Bit ROM_WS:2;               /**< \brief [1:0]   Wait states. (rw)
                                                WS_0          : 0u
                                                WS_1          : 1u
                                                WS_2          : 2u
                                                WS_3          : 3u    */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PROMC_CTL_Bits;

/* PROMC_CTL.ROM_WS enumerated values */
#define IFX_PROMC_CTL_ROM_WS_WS_0 (0u)
#define IFX_PROMC_CTL_ROM_WS_WS_1 (1u)
#define IFX_PROMC_CTL_ROM_WS_WS_2 (2u)
#define IFX_PROMC_CTL_ROM_WS_WS_3 (3u)

/** \brief Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
typedef struct _Ifx_PROMC_MPC_CFG_Bits
{
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [3:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit RESPONSE:1;             /**< \brief [4:4]   Response Configuration for Security and PC
                                                                    violations
                                                                    0: Read-Zero Write Ignore (RAZ/WI)
                                                                    1: Bus Error (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_PROMC_MPC_CFG_Bits;

/** \brief Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
typedef struct _Ifx_PROMC_MPC_CTRL_Bits
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
} Ifx_PROMC_MPC_CTRL_Bits;

/** \brief Max value of block-based index register */
typedef struct _Ifx_PROMC_MPC_BLK_MAX_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  Maximum value of block-based index register.
                                                                    The number and size blocks in an MPC is design time
                                                                    configurable and for embedded memories defaults to
                                                                    covering the entire memory using 4kB blocks; See
                                                                    product datasheet for details on protection of
                                                                    external memories. (r) */
} Ifx_PROMC_MPC_BLK_MAX_Bits;

/** \brief Block size & initialization in progress */
typedef struct _Ifx_PROMC_MPC_BLK_CFG_Bits
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
} Ifx_PROMC_MPC_BLK_CFG_Bits;

/** \brief Index of 32-block group accessed through BLK_LUT (Separate IDX for each PC depending on access_pc) */
typedef struct _Ifx_PROMC_MPC_BLK_IDX_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  Index value for accessing block-based
                                                                    lookup table using BLK_LUT.
                                                                    Programming out of LUT range is an user error and
                                                                    it loops back to '0' once overflow occurs. (rw) */
} Ifx_PROMC_MPC_BLK_IDX_Bits;

/** \brief NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
typedef struct _Ifx_PROMC_MPC_BLK_LUT_Bits
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
} Ifx_PROMC_MPC_BLK_LUT_Bits;

/** \brief Control register with lock bit and auto-increment only */
typedef struct _Ifx_PROMC_MPC_ROT_CTRL_Bits
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
} Ifx_PROMC_MPC_ROT_CTRL_Bits;

/** \brief Max value of block-based index register for ROT */
typedef struct _Ifx_PROMC_MPC_ROT_BLK_MAX_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  Maximum value of block-based index register.
                                                                    The number and size blocks in an MPC is design time
                                                                    configurable and for embedded memories defaults to
                                                                    covering the entire memory using 4kB blocks; see
                                                                    product datasheet for details on protection of
                                                                    external memories. (r) */
} Ifx_PROMC_MPC_ROT_BLK_MAX_Bits;

/** \brief Same as BLK_CFG */
typedef struct _Ifx_PROMC_MPC_ROT_BLK_CFG_Bits
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
} Ifx_PROMC_MPC_ROT_BLK_CFG_Bits;

/** \brief Index of 8-block group accessed through ROT_BLK_LUT_* */
typedef struct _Ifx_PROMC_MPC_ROT_BLK_IDX_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  Index value for accessing block-based
                                                                    lookup table using ROT_BLK_LUT.
                                                                    Programming out of LUT range is an user error and
                                                                    it loops back to '0' once overflow occurs. (rw) */
} Ifx_PROMC_MPC_ROT_BLK_IDX_Bits;

/** \brief Protection context of 8-block group accesses through ROT_BLK_LUT */
typedef struct _Ifx_PROMC_MPC_ROT_BLK_PC_Bits
{
    __IO Ifx_UReg_32Bit PC:4;                   /**< \brief [3:0]   Specify PC values for ROT_BLK_IDX and
                                                                    ROT_BLK_LUT (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_PROMC_MPC_ROT_BLK_PC_Bits;

/** \brief (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
typedef struct _Ifx_PROMC_MPC_ROT_BLK_LUT_Bits
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
} Ifx_PROMC_MPC_ROT_BLK_LUT_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PROMC_Registers_union
 * \{   */
/** \brief Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_CTL_Bits B;                       /**< \brief Bitfield access */
} Ifx_PROMC_CTL;

/** \brief Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_CFG_Bits B;                   /**< \brief Bitfield access */
} Ifx_PROMC_MPC_CFG;

/** \brief Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_CTRL_Bits B;                  /**< \brief Bitfield access */
} Ifx_PROMC_MPC_CTRL;

/** \brief Max value of block-based index register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_BLK_MAX_Bits B;               /**< \brief Bitfield access */
} Ifx_PROMC_MPC_BLK_MAX;

/** \brief Block size & initialization in progress */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_BLK_CFG_Bits B;               /**< \brief Bitfield access */
} Ifx_PROMC_MPC_BLK_CFG;

/** \brief Index of 32-block group accessed through BLK_LUT (Separate IDX for each PC depending on access_pc) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_BLK_IDX_Bits B;               /**< \brief Bitfield access */
} Ifx_PROMC_MPC_BLK_IDX;

/** \brief NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_BLK_LUT_Bits B;               /**< \brief Bitfield access */
} Ifx_PROMC_MPC_BLK_LUT;

/** \brief Control register with lock bit and auto-increment only */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_ROT_CTRL_Bits B;              /**< \brief Bitfield access */
} Ifx_PROMC_MPC_ROT_CTRL;

/** \brief Max value of block-based index register for ROT */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_ROT_BLK_MAX_Bits B;           /**< \brief Bitfield access */
} Ifx_PROMC_MPC_ROT_BLK_MAX;

/** \brief Same as BLK_CFG */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_ROT_BLK_CFG_Bits B;           /**< \brief Bitfield access */
} Ifx_PROMC_MPC_ROT_BLK_CFG;

/** \brief Index of 8-block group accessed through ROT_BLK_LUT_* */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_ROT_BLK_IDX_Bits B;           /**< \brief Bitfield access */
} Ifx_PROMC_MPC_ROT_BLK_IDX;

/** \brief Protection context of 8-block group accesses through ROT_BLK_LUT */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_ROT_BLK_PC_Bits B;            /**< \brief Bitfield access */
} Ifx_PROMC_MPC_ROT_BLK_PC;

/** \brief (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PROMC_MPC_ROT_BLK_LUT_Bits B;           /**< \brief Bitfield access */
} Ifx_PROMC_MPC_ROT_BLK_LUT;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PROMC_MPC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MPC object */
typedef volatile struct _Ifx_PROMC_MPC
{
       __IO Ifx_PROMC_MPC_CFG                   CFG;                    /**< \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system.*/
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
       __IO Ifx_PROMC_MPC_CTRL                  CTRL;                   /**< \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc)*/
       __I  Ifx_PROMC_MPC_BLK_MAX               BLK_MAX;                /**< \brief 104, Max value of block-based index register*/
       __I  Ifx_PROMC_MPC_BLK_CFG               BLK_CFG;                /**< \brief 108, Block size & initialization in progress*/
       __IO Ifx_PROMC_MPC_BLK_IDX               BLK_IDX;                /**< \brief 10C, Index of 32-block group accessed through BLK_LUT (Separate IDX for each PC depending on access_pc)*/
       __IO Ifx_PROMC_MPC_BLK_LUT               BLK_LUT;                /**< \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc>*/
       __I  Ifx_UReg_8Bit                       reserved_114[236];      /**< \brief 114, */
       __IO Ifx_PROMC_MPC_ROT_CTRL              ROT_CTRL;               /**< \brief 200, Control register with lock bit and auto-increment only*/
       __I  Ifx_UReg_8Bit                       reserved_204[4];        /**< \brief 204, */
       __I  Ifx_PROMC_MPC_ROT_BLK_MAX           ROT_BLK_MAX;            /**< \brief 208, Max value of block-based index register for ROT*/
       __I  Ifx_PROMC_MPC_ROT_BLK_CFG           ROT_BLK_CFG;            /**< \brief 20C, Same as BLK_CFG*/
       __IO Ifx_PROMC_MPC_ROT_BLK_IDX           ROT_BLK_IDX;            /**< \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_**/
       __IO Ifx_PROMC_MPC_ROT_BLK_PC            ROT_BLK_PC;             /**< \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT*/
       __IO Ifx_PROMC_MPC_ROT_BLK_LUT           ROT_BLK_LUT;            /**< \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC*/
       __I  Ifx_UReg_8Bit                       reserved_21C[3556];     /**< \brief 21C, */
} Ifx_PROMC_MPC;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PROMC_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief PROMC object */
typedef volatile struct _Ifx_PROMC
{
       __IO Ifx_PROMC_CTL                       CTL;                    /**< \brief 0, Control*/
       __I  Ifx_UReg_8Bit                       reserved_4[4092];       /**< \brief 4, */
       __IO Ifx_PROMC_MPC                       MPC[1];                 /**< \brief 1000, MPC Memory Protection Controller registers*/
       __I  Ifx_UReg_8Bit                       reserved_2000[57344];   /**< \brief 2000, */
} Ifx_PROMC;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPROMC_REGDEF_H_ */
