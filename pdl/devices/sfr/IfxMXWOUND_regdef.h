/***************************************************************************//**
* \file IfxMXWOUND_regdef.h
*
* \brief
* MXWOUND Registers
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
* \defgroup IfxSfr_MXWOUND_Registers MXWOUND Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_MXWOUND_Registers_Bitfields Bitfields
* \ingroup IfxSfr_MXWOUND_Registers
*
* \defgroup IfxSfr_MXWOUND_Registers_union Register unions
* \ingroup IfxSfr_MXWOUND_Registers
*
* \defgroup IfxSfr_MXWOUND_Registers_struct Memory map
* \ingroup IfxSfr_MXWOUND_Registers
*
*******************************************************************************/

#ifndef _IFXMXWOUND_REGDEF_H_
#define _IFXMXWOUND_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_MXWOUND_Registers_Bitfields
 * \{  */
/** \brief MXWOUND Control Reg */
typedef struct _Ifx_MXWOUND_CTL_Bits
{
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [30:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [31:31] IP enable:
                                                                    '0': Disabled.
                                                                    IP SC logic is not clocked (but does not change the state).
                                                                    '1': Enabled. IP SC logic is clocked. (rw) */
} Ifx_MXWOUND_CTL_Bits;

/** \brief Property value register */
typedef struct _Ifx_MXWOUND_MXWOUND_PROP_PROP_Bits
{
    __IO Ifx_UReg_32Bit PROP:32;                /**< \brief [31:0]  Property bit value (rw) */
} Ifx_MXWOUND_MXWOUND_PROP_PROP_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXWOUND_Registers_union
 * \{   */
/** \brief MXWOUND Control Reg */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXWOUND_CTL_Bits B;                     /**< \brief Bitfield access */
} Ifx_MXWOUND_CTL;

/** \brief Property value register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXWOUND_MXWOUND_PROP_PROP_Bits B;       /**< \brief Bitfield access */
} Ifx_MXWOUND_MXWOUND_PROP_PROP;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXWOUND_MXWOUND_PROP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MXWOUND_PROP object */
typedef volatile struct _Ifx_MXWOUND_MXWOUND_PROP
{
       __IO Ifx_MXWOUND_MXWOUND_PROP_PROP       PROP;                   /**< \brief 0, Property value register*/
       __I  Ifx_UReg_8Bit                       reserved_4[60];         /**< \brief 4, */
} Ifx_MXWOUND_MXWOUND_PROP;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXWOUND_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief MXWOUND object */
typedef volatile struct _Ifx_MXWOUND
{
       __IO Ifx_MXWOUND_CTL                     CTL;                    /**< \brief 0, MXWOUND Control Reg*/
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
       __IO Ifx_MXWOUND_MXWOUND_PROP            MXWOUND_PROP[8];        /**< \brief 100, 0*/
       __I  Ifx_UReg_8Bit                       reserved_300[3328];     /**< \brief 300, */
} Ifx_MXWOUND;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXMXWOUND_REGDEF_H_ */
