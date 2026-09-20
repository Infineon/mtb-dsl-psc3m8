/***************************************************************************//**
* \file IfxPPC_regdef.h
*
* \brief
* PPC Registers
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
* \defgroup IfxSfr_PPC_Registers PPC Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_PPC_Registers_Bitfields Bitfields
* \ingroup IfxSfr_PPC_Registers
*
* \defgroup IfxSfr_PPC_Registers_union Register unions
* \ingroup IfxSfr_PPC_Registers
*
* \defgroup IfxSfr_PPC_Registers_struct Memory map
* \ingroup IfxSfr_PPC_Registers
*
*******************************************************************************/

#ifndef _IFXPPC_REGDEF_H_
#define _IFXPPC_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_PPC_Registers_Bitfields
 * \{  */
/** \brief PPC Control Registers */
typedef struct _Ifx_PPC_CTL_Bits
{
    __IO Ifx_UReg_32Bit RESP_CFG:1;             /**< \brief [0:0]   Response Configuration.
                                                                    This field configures the security violation
                                                                    response.
                                                                    0 - Read-Zero Write Ignore (RZWI)
                                                                    1 - Bus Error (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPC_CTL_Bits;

/** \brief Locked Mask */
typedef struct _Ifx_PPC_LOCK_MASK_Bits
{
    __IO Ifx_UReg_32Bit LOCK_MASK:32;           /**< \brief [31:0]  A mask that indicates which protection
                                                                    contexts are 'locked'.
                                                                    Once locked, a protection context cannot be
                                                                    unlocked until the next reset or power cycle.
                                                                    Bit i specifies the locked status for protection
                                                                    context i.
                                                                    0: The protection context is unlocked.
                                                                    1: The protection context is locked.
                                                                    When a PC is locked, the PPC_PC_MASK, PPC_NS_ATT
                                                                    and PPC_S_P_ATT register bits for peripheral
                                                                    regions to which this PC has access can no longer
                                                                    be modified (PPC_NS_P_ATT is not subject to these
                                                                    restrictions).
                                                                    The one exception to this is that PPC_PC_MASK bits
                                                                    associated with other protection contexts that are
                                                                    not themselves locked can still be cleared (but not set). (rw) */
} Ifx_PPC_LOCK_MASK_Bits;

/** \brief Protection Context Mask */
typedef struct _Ifx_PPC_PC_MASK_Bits
{
    __IO Ifx_UReg_32Bit PC_MASK:32;             /**< \brief [31:0]  A mask that indicates which protection
                                                                    contexts have access to a peripheral region.
                                                                    Bit i specifies the access for protection context i.
                                                                    0: The protection context has no access to this region.
                                                                    1: The protection context has access to this
                                                                    region, subject to secure and privilege attribute
                                                                    constraints setup in PPC_NS_ATT, PPC_S_P_ATT,
                                                                    PPC_NS_P_ATT registers) (rw) */
} Ifx_PPC_PC_MASK_Bits;

/** \brief Non-secure attribute */
typedef struct _Ifx_PPC_NS_ATT_Bits
{
    __IO Ifx_UReg_32Bit NS:32;                  /**< \brief [31:0]  Non-Secure.
                                                                    Each bit indicates whether access to a peripheral
                                                                    region must be secure or non-secure:
                                                                    IF SECURITY_AWARE=0
                                                                    0 - allow only secure access to respective
                                                                    peripheral region.
                                                                    1 - allow only non-secure access to respective
                                                                    peripheral region.
                                                                    IF SECURITY_AWARE=1
                                                                    0 - allow only secure access to respective
                                                                    peripheral region.
                                                                    1 - allows both secure and non-secure access to
                                                                    respective peripheral region.
                                                                    (Note that, depending on this setting the privilege
                                                                    access requirement for this region is specified in
                                                                    the corresponding PPC_S_P_ATT or PPC_NS_P_ATT
                                                                    register) (rw) */
} Ifx_PPC_NS_ATT_Bits;

/** \brief Secure Privilege Attribute */
typedef struct _Ifx_PPC_S_P_ATT_Bits
{
    __IO Ifx_UReg_32Bit S_P:32;                 /**< \brief [31:0]  Secure Privilege.
                                                                    Each bit indicates whether access to a secure
                                                                    peripheral region requires privilege:
                                                                    0 - allow only secure privileged access to
                                                                    respective peripheral region.
                                                                    1 - allow only secure unprivileged or privileged
                                                                    access to respective peripheral region. (rw) */
} Ifx_PPC_S_P_ATT_Bits;

/** \brief Non-secure Privilege Attribute */
typedef struct _Ifx_PPC_NS_P_ATT_Bits
{
    __IO Ifx_UReg_32Bit NS_P:32;                /**< \brief [31:0]  Non-Secure Privilege.
                                                                    Each bit indicates whether access to a non-secure
                                                                    peripheral region requires privilege:
                                                                    0 - allow only non-secure privileged access to
                                                                    respective peripheral region.
                                                                    1 - allow only non-secure unprivileged or
                                                                    privileged access to respective peripheral region. (rw) */
} Ifx_PPC_NS_P_ATT_Bits;

/** \brief Region Address */
typedef struct _Ifx_PPC_R_ADDR_R_ADDR_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit R_ADDR:30;              /**< \brief [31:2]  This field specifies the base address of
                                                                    the peripheral region.
                                                                    The region size is defined by R_ATTR.R_SIZE.
                                                                    A region of n Bytes mus be n Byte aligned.
                                                                    Therefore, some of the lesser significant address
                                                                    bits of ADDR must be '0's.
                                                                    E.g., a 64KB address region (R_SIZE is '15') must
                                                                    be 64 KByte aligned, and R_ADDR[13:0] must be '0's. (r) */
} Ifx_PPC_R_ADDR_R_ADDR_Bits;

/** \brief Region Attribute */
typedef struct _Ifx_PPC_R_ATT_R_ATT_Bits
{
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [23:0]  \internal Reserved */
    __I  Ifx_UReg_32Bit R_SIZE:5;               /**< \brief [28:24] This field specifies the size of the
                                                                    peripheral region:
                                                                    '0': Undefined.
                                                                    '1': 4 B region (this is the smallest region size).
                                                                    '2': 8 B region
                                                                    '3': 16 B region
                                                                    '4': 32 B region
                                                                    '5': 64 B region
                                                                    '6': 128 B region
                                                                    '7': 256 B region
                                                                    '8': 512 B region
                                                                    '9': 1 KB region
                                                                    '10': 2 KB region
                                                                    '11': 4 KB region
                                                                    '12': 8 KB region
                                                                    '13': 16 KB region
                                                                    '14': 32 KB region
                                                                    '15': 64 KB region
                                                                    '16': 128 KB region
                                                                    '17': 256 KB region
                                                                    '18': 512 KB region
                                                                    '19': 1 MB region
                                                                    '20': 2 MB region
                                                                    '21': 4 MB region
                                                                    '22': 8 MB region
                                                                    '23': 16 MB region
                                                                    '24': 32 MB region
                                                                    '25': 64 MB region
                                                                    '26': 128 MB region
                                                                    '27': 256 MB region
                                                                    '28': 512 MB region
                                                                    '29': 1 GB region
                                                                    '30': 2 GB region
                                                                    '31': 4 GB region (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [31:29] \internal Reserved */
} Ifx_PPC_R_ATT_R_ATT_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPC_Registers_union
 * \{   */
/** \brief PPC Control Registers */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPC_CTL_Bits B;                         /**< \brief Bitfield access */
} Ifx_PPC_CTL;

/** \brief Locked Mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPC_LOCK_MASK_Bits B;                   /**< \brief Bitfield access */
} Ifx_PPC_LOCK_MASK;

/** \brief Protection Context Mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPC_PC_MASK_Bits B;                     /**< \brief Bitfield access */
} Ifx_PPC_PC_MASK;

/** \brief Non-secure attribute */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPC_NS_ATT_Bits B;                      /**< \brief Bitfield access */
} Ifx_PPC_NS_ATT;

/** \brief Secure Privilege Attribute */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPC_S_P_ATT_Bits B;                     /**< \brief Bitfield access */
} Ifx_PPC_S_P_ATT;

/** \brief Non-secure Privilege Attribute */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPC_NS_P_ATT_Bits B;                    /**< \brief Bitfield access */
} Ifx_PPC_NS_P_ATT;

/** \brief Region Address */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPC_R_ADDR_R_ADDR_Bits B;               /**< \brief Bitfield access */
} Ifx_PPC_R_ADDR_R_ADDR;

/** \brief Region Attribute */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPC_R_ATT_R_ATT_Bits B;                 /**< \brief Bitfield access */
} Ifx_PPC_R_ATT_R_ATT;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPC_R_ADDR_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief R_ADDR object */
typedef volatile struct _Ifx_PPC_R_ADDR
{
       __I  Ifx_PPC_R_ADDR_R_ADDR               R_ADDR;                 /**< \brief 0, Region Address*/
} Ifx_PPC_R_ADDR;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPC_R_ATT_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief R_ATT object */
typedef volatile struct _Ifx_PPC_R_ATT
{
       __I  Ifx_PPC_R_ATT_R_ATT                 R_ATT;                  /**< \brief 0, Region Attribute*/
} Ifx_PPC_R_ATT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPC_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief PPC object */
typedef volatile struct _Ifx_PPC
{
       __IO Ifx_PPC_CTL                         CTL;                    /**< \brief 0, PPC Control Registers*/
       __I  Ifx_UReg_8Bit                       reserved_4[8];          /**< \brief 4, */
       __IO Ifx_PPC_LOCK_MASK                   LOCK_MASK;              /**< \brief C, Locked Mask*/
       __I  Ifx_UReg_8Bit                       reserved_10[4080];      /**< \brief 10, */
       __IO Ifx_PPC_PC_MASK                     PC_MASK[1024];          /**< \brief 1000, Protection Context Mask*/
       __IO Ifx_PPC_NS_ATT                      NS_ATT[32];             /**< \brief 2000, Non-secure attribute*/
       __I  Ifx_UReg_8Bit                       reserved_2080[896];     /**< \brief 2080, */
       __IO Ifx_PPC_S_P_ATT                     S_P_ATT[32];            /**< \brief 2400, Secure Privilege Attribute*/
       __I  Ifx_UReg_8Bit                       reserved_2480[7040];    /**< \brief 2480, */
       __IO Ifx_PPC_NS_P_ATT                    NS_P_ATT[32];           /**< \brief 4000, Non-secure Privilege Attribute*/
       __I  Ifx_UReg_8Bit                       reserved_4080[3968];    /**< \brief 4080, */
       __IO Ifx_PPC_R_ADDR                      R_ADDR[1024];           /**< \brief 5000, Region Address*/
       __IO Ifx_PPC_R_ATT                       R_ATT[1024];            /**< \brief 6000, Region Attribute*/
       __I  Ifx_UReg_8Bit                       reserved_7000[36864];   /**< \brief 7000, */
} Ifx_PPC;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPPC_REGDEF_H_ */
