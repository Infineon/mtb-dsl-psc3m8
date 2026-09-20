/***************************************************************************//**
* \file IfxICACHE_regdef.h
*
* \brief
* ICACHE Registers
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
* \defgroup IfxSfr_ICACHE_Registers ICACHE Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_ICACHE_Registers_Bitfields Bitfields
* \ingroup IfxSfr_ICACHE_Registers
*
* \defgroup IfxSfr_ICACHE_Registers_union Register unions
* \ingroup IfxSfr_ICACHE_Registers
*
* \defgroup IfxSfr_ICACHE_Registers_struct Memory map
* \ingroup IfxSfr_ICACHE_Registers
*
*******************************************************************************/

#ifndef _IFXICACHE_REGDEF_H_
#define _IFXICACHE_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_ICACHE_Registers_Bitfields
 * \{  */
/** \brief Cache control */
typedef struct _Ifx_ICACHE_CTL_Bits
{
    __IO Ifx_UReg_32Bit ECC_EN:1;               /**< \brief [0:0]   Enable ECC checking for cache accesses:
                                                                    0: Disabled.
                                                                    1: Enabled. (rw) */
    __IO Ifx_UReg_32Bit ECC_INJ_EN:1;           /**< \brief [1:1]   Enable error injection for cache.
                                                                    When '1', the parity (ECC_CTL.PARITY[6:0]) is used
                                                                    when a cache refill is done to the
                                                                    ECC_CTL.WORD_ADDR[23:0] word address. (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [15:2]  \internal Reserved */
    __IO Ifx_UReg_32Bit WAY:2;                  /**< \brief [17:16] Specifies the cache way for which cache
                                                                    information is provided in STATUS0/1/2. (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [23:18] \internal Reserved */
    __IO Ifx_UReg_32Bit SET_ADDR:5;             /**< \brief [28:24] Specifies the cache set for which cache
                                                                    information is provided in STATUS0/1/2. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [29:29] \internal Reserved */
    __IO Ifx_UReg_32Bit PREF_EN:1;              /**< \brief [30:30] Prefetch enable:
                                                                    0: Disabled.
                                                                    1: Enabled.
                                                                    Prefetching requires the cache to be enabled; i.e.
                                                                    ENABLED is '1'. (rw) */
    __IO Ifx_UReg_32Bit CA_EN:1;                /**< \brief [31:31] Cache enable:
                                                                    0: Disabled.
                                                                    The cache tag valid bits are reset to '0's and the
                                                                    cache LRU information is set to '1's (making way 0
                                                                    the LRU way and way 3 the MRU way).
                                                                    1: Enabled. (rw) */
} Ifx_ICACHE_CTL_Bits;

/** \brief Cache command */
typedef struct _Ifx_ICACHE_CMD_Bits
{
    __IO Ifx_UReg_32Bit INV:1;                  /**< \brief [0:0]   Invalidation of cahce and buffer.
                                                                    SW writes a '1' to clear the caches.
                                                                    HW sets this field to '0' when the operation is completed.
                                                                    The caches' LRU structures are also reset to their
                                                                    default state. (rw) */
    __IO Ifx_UReg_32Bit BUFF_INV:1;             /**< \brief [1:1]   Invalidation of  buffers (does not
                                                                    invalidate the caches).
                                                                    SW writes a '1' to clear the buffers.
                                                                    HW sets this field to '0' when the operation is completed. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_ICACHE_CMD_Bits;

/** \brief Cache status 0 */
typedef struct _Ifx_ICACHE_STATUS0_Bits
{
    __I  Ifx_UReg_32Bit VALID32:32;             /**< \brief [31:0]  Sixteen valid bits of the cache line
                                                                    specified by CTL.WAY and CTL.SET_ADDR. (r) */
} Ifx_ICACHE_STATUS0_Bits;

/** \brief Cache status 1 */
typedef struct _Ifx_ICACHE_STATUS1_Bits
{
    __I  Ifx_UReg_32Bit TAG:32;                 /**< \brief [31:0]  Cache line address of the cache line
                                                                    specified by CTL.WAY and CTL.SET_ADDR. (r) */
} Ifx_ICACHE_STATUS1_Bits;

/** \brief Cache status 2 */
typedef struct _Ifx_ICACHE_STATUS2_Bits
{
    __I  Ifx_UReg_32Bit LRU:6;                  /**< \brief [5:0]   Six bit LRU representation of the cache set
                                                                    specified by CTL.SET_ADDR.
                                                                    The encoding of the field is as follows ('X_LRU_Y'
                                                                    indicates that way X is Less Recently Used than way Y):
                                                                    Bit 5: 0_LRU_1: way 0 less recently used than way 1.
                                                                    Bit 4: 0_LRU_2.
                                                                    Bit 3: 0_LRU_3.
                                                                    Bit 2: 1_LRU_2.
                                                                    Bit 1: 1_LRU_3.
                                                                    Bit 0: 2_LRU_3. (r) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_ICACHE_STATUS2_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_ICACHE_Registers_union
 * \{   */
/** \brief Cache control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_ICACHE_CTL_Bits B;                      /**< \brief Bitfield access */
} Ifx_ICACHE_CTL;

/** \brief Cache command */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_ICACHE_CMD_Bits B;                      /**< \brief Bitfield access */
} Ifx_ICACHE_CMD;

/** \brief Cache status 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_ICACHE_STATUS0_Bits B;                  /**< \brief Bitfield access */
} Ifx_ICACHE_STATUS0;

/** \brief Cache status 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_ICACHE_STATUS1_Bits B;                  /**< \brief Bitfield access */
} Ifx_ICACHE_STATUS1;

/** \brief Cache status 2 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_ICACHE_STATUS2_Bits B;                  /**< \brief Bitfield access */
} Ifx_ICACHE_STATUS2;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_ICACHE_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief ICACHE object */
typedef volatile struct _Ifx_ICACHE
{
       __IO Ifx_ICACHE_CTL                      CTL;                    /**< \brief 0, Cache control*/
       __I  Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, */
       __IO Ifx_ICACHE_CMD                      CMD;                    /**< \brief 8, Cache command*/
       __I  Ifx_UReg_8Bit                       reserved_C[116];        /**< \brief C, */
       __I  Ifx_ICACHE_STATUS0                  STATUS0;                /**< \brief 80, Cache status 0*/
       __I  Ifx_ICACHE_STATUS1                  STATUS1;                /**< \brief 84, Cache status 1*/
       __I  Ifx_ICACHE_STATUS2                  STATUS2;                /**< \brief 88, Cache status 2*/
       __I  Ifx_UReg_8Bit                       reserved_8C[3956];      /**< \brief 8C, */
} Ifx_ICACHE;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXICACHE_REGDEF_H_ */
