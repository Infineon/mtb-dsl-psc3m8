/***************************************************************************//**
* \file IfxMS_CTL_2_1_regdef.h
*
* \brief
* MS_CTL_2_1 Registers
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
* \defgroup IfxSfr_MS_CTL_2_1_Registers MS_CTL_2_1 Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_MS_CTL_2_1_Registers_Bitfields Bitfields
* \ingroup IfxSfr_MS_CTL_2_1_Registers
*
* \defgroup IfxSfr_MS_CTL_2_1_Registers_union Register unions
* \ingroup IfxSfr_MS_CTL_2_1_Registers
*
* \defgroup IfxSfr_MS_CTL_2_1_Registers_struct Memory map
* \ingroup IfxSfr_MS_CTL_2_1_Registers
*
*******************************************************************************/

#ifndef _IFXMS_CTL_2_1_REGDEF_H_
#define _IFXMS_CTL_2_1_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_MS_CTL_2_1_Registers_Bitfields
 * \{  */
/** \brief SYS_MS0  master security Controller & ACG configuration */
typedef struct _Ifx_SYS_MS0_MSC_ACG_CTL_Bits
{
    __IO Ifx_UReg_32Bit CFG_GATE_RESP:1;        /**< \brief [0:0]   Response type when the ACG is blocking the
                                                                    incoming transfers:
                                                                    0: Waited transfer
                                                                    1: Error response (rw) */
    __IO Ifx_UReg_32Bit SEC_RESP:1;             /**< \brief [1:1]   Reseponse type when transfers are not
                                                                    allowed by MSC.
                                                                    0: Read as zero, write ignore.
                                                                    1: Error response. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_SYS_MS0_MSC_ACG_CTL_Bits;

/** \brief EXP_MS  master security Controller & ACG configuration */
typedef struct _Ifx_EXP_MS_MSC_ACG_CTL_Bits
{
    __IO Ifx_UReg_32Bit CFG_GATE_RESP:1;        /**< \brief [0:0]   Response type when the ACG is blocking the
                                                                    incoming transfers:
                                                                    0: Waited transfer
                                                                    1: Error response (rw) */
    __IO Ifx_UReg_32Bit SEC_RESP:1;             /**< \brief [1:1]   Reseponse type when transfers are not
                                                                    allowed by MSC.
                                                                    0: Read as zero, write ignore.
                                                                    1: Error response. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_EXP_MS_MSC_ACG_CTL_Bits;

/** \brief Master 'x' protection context control */
typedef struct _Ifx_MS_CTL_Bits
{
    __IO Ifx_UReg_32Bit P:1;                    /**< \brief [0:0]   Privileged setting ('0': user mode; '1':
                                                                    privileged mode).
                                                                    Notes:
                                                                    This field is ONLY used for masters that do NOT
                                                                    provide their own user/privileged access control
                                                                    attribute.
                                                                    The default/reset field value provides privileged
                                                                    mode access capabilities. (rw) */
    __IO Ifx_UReg_32Bit NS:1;                   /**< \brief [1:1]   Master security controller configuration.
                                                                    0: Bus master is secure.
                                                                    Master can send both secure and non-secure transfers.
                                                                    Accesses to secure addresses are not blocked and
                                                                    the security flag, HNONSEC, is set accordingly.
                                                                    1: Bus master is non-secure.
                                                                    Master can send only non-secure
                                                                    transfers.
                                                                    Access to secure addresses, that is, outside the
                                                                    Uncheck regions, are blocked. (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [15:2]  \internal Reserved */
    __IO Ifx_UReg_32Bit PC_MASK:16;             /**< \brief [31:16] Protection context mask for protection
                                                                    contexts '15' down to '0'.
                                                                    Bit PC_MASK[i] indicates if the
                                                                    MS_PC_STRUCT[x].PC[3:0] protection context field
                                                                    can be set to the value 'i':
                                                                    - PC_MASK[i] is '0': MS_PC_STRUCT[x].PC[3:0] can
                                                                    NOT be set to 'i'; and PC[3:0] is not changed.
                                                                    - PC_MASK[i] is '1': MS_PC_STRUCT[x].PC[3:0] can be
                                                                    set to 'i'.
                                                                    Note: When CM33_0 CM33_PC_CTL.VALID[i] is '1' (the
                                                                    associated protection context handler is valid),
                                                                    write transfers to PC_MASK[i] always write '0',
                                                                    regardless of data written.
                                                                    This ensures that when valid protection context
                                                                    handlers are used to enter protection contexts 0,
                                                                    1, 2 or 3 through HW (HW modifies
                                                                    MS_PC_STRUCT[x].PC[3:0] on entry of the handler).
                                                                    If PC_MASK[i] is written ahead of
                                                                    CM33_PC_CTL.VALID[i], it must be consistent
                                                                    (corresponding PC_MASK[i] = 0 for those
                                                                    CM33_PC_CTL.VALID[i] = 1).
                                                                    MS_CTL_STRUCT.CTL.PC_MASK[19:16] relevant bits must
                                                                    be cleared (as 0) when respective
                                                                    CM33_PC_CTL.VALID[3:0] bits are set to 1. (rw) */
} Ifx_MS_CTL_Bits;

/** \brief Master 'x' protection context value */
typedef struct _Ifx_MS_PC_PC_Bits
{
    __IO Ifx_UReg_32Bit PC:4;                   /**< \brief [3:0]   Active protection context (PC).
                                                                    Modifications to this field are constrained by the
                                                                    associated  MS_CTL_STRUCT[x].CTL.PC_MASK value.
                                                                    PC[3:0] can be set to 'i' only if the corresponding
                                                                    mask bit (PC_MASK[i]) is '1'.
                                                                    The CM33_0 PC register is special: the PC field is
                                                                    modifiable by BOTH HW and SW (for all other
                                                                    masters, the PC field is modifiable by SW ONLY.
                                                                    For CM33_0 PC field HW modifications, the following holds:
                                                                    * On entry of a CM33_PC0/1/2/3_HANDLER
                                                                    exception/interrupt handler:
                                                                       IF (the new PC is the same as MS_PC_STRUCT[0].PC)
                                                                           PC is not affected; PC_SAVED is not affected.
                                                                       ELSE IF (CM33_PC_CTL.VALID[MS_PC_STRUCT[0].PC])
                                                                    An AHB5 bus error is generated for the
                                                                    exception handler fetch;
                                                                           PC is not affected; PC_SAVED is not affected.
                                                                       ELSE
                                                                    PC = 'new PC'; PC_SAVED = PC (push
                                                                    operation).
                                                                    * On entry of any other exception/interrupt handler:
                                                                    PC = PC_SAVED; PC_SAVED is not affected (pop
                                                                    operation).
                                                                    Note: this field is NOT used by the DW controllers,
                                                                    DMA controllers as they inherit the protection
                                                                    context from master that configures the
                                                                    corresponding channel. (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [15:4]  \internal Reserved */
    __IO Ifx_UReg_32Bit PC_SAVED:4;             /**< \brief [19:16]  (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_MS_PC_PC_Bits;

/** \brief Master 'x' protection context value read mirror register */
typedef struct _Ifx_MS_PC_PC_READ_MIR_Bits
{
    __I  Ifx_UReg_32Bit PC:4;                   /**< \brief [3:0]   Read-only mirror of PC.PC (r) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [15:4]  \internal Reserved */
    __I  Ifx_UReg_32Bit PC_SAVED:4;             /**< \brief [19:16] Read-only mirror of PC.PC_SAVED (r) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_MS_PC_PC_READ_MIR_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MS_CTL_2_1_Registers_union
 * \{   */
/** \brief SYS_MS0  master security Controller & ACG configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SYS_MS0_MSC_ACG_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_SYS_MS0_MSC_ACG_CTL;

/** \brief EXP_MS  master security Controller & ACG configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_EXP_MS_MSC_ACG_CTL_Bits B;              /**< \brief Bitfield access */
} Ifx_EXP_MS_MSC_ACG_CTL;

/** \brief Master 'x' protection context control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MS_CTL_Bits B;                          /**< \brief Bitfield access */
} Ifx_MS_CTL;

/** \brief Master 'x' protection context value */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MS_PC_PC_Bits B;                        /**< \brief Bitfield access */
} Ifx_MS_PC_PC;

/** \brief Master 'x' protection context value read mirror register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MS_PC_PC_READ_MIR_Bits B;               /**< \brief Bitfield access */
} Ifx_MS_PC_PC_READ_MIR;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MS_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MS object */
typedef volatile struct _Ifx_MS
{
       __IO Ifx_MS_CTL                          CTL;                    /**< \brief 0, Master 'x' protection context control*/
       __I  Ifx_UReg_8Bit                       reserved_4[12];         /**< \brief 4, */
} Ifx_MS;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MS_PC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MS_PC object */
typedef volatile struct _Ifx_MS_PC
{
       __IO Ifx_MS_PC_PC                        PC;                     /**< \brief 0, Master 'x' protection context value*/
       __I  Ifx_MS_PC_PC_READ_MIR               PC_READ_MIR;            /**< \brief 4, Master 'x' protection context value read mirror register*/
       __I  Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, */
} Ifx_MS_PC;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MS_CTL_2_1_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief MS_CTL_2_1 object */
typedef volatile struct _Ifx_MS_CTL_2_1
{
       __IO Ifx_MS                              MS[32];                 /**< \brief 0, Master protection context control*/
       __I  Ifx_UReg_8Bit                       reserved_200[3584];     /**< \brief 200, */
       __IO Ifx_MS_PC                           MS_PC[32];              /**< \brief 1000, Master protection context value*/
       __I  Ifx_UReg_8Bit                       reserved_1200[3600];    /**< \brief 1200, */
       __IO Ifx_SYS_MS0_MSC_ACG_CTL             SYS_MS0_MSC_ACG_CTL;    /**< \brief 2010, SYS_MS0  master security Controller & ACG configuration*/
       __I  Ifx_UReg_8Bit                       reserved_2014[12];      /**< \brief 2014, */
       __IO Ifx_EXP_MS_MSC_ACG_CTL              EXP_MS_MSC_ACG_CTL;     /**< \brief 2020, EXP_MS  master security Controller & ACG configuration*/
       __I  Ifx_UReg_8Bit                       reserved_2024[8156];    /**< \brief 2024, */
} Ifx_MS_CTL_2_1;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXMS_CTL_2_1_REGDEF_H_ */
