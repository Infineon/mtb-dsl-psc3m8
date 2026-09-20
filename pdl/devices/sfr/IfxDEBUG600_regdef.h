/***************************************************************************//**
* \file IfxDEBUG600_regdef.h
*
* \brief
* DEBUG600 Registers
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
* \defgroup IfxSfr_DEBUG600_Registers DEBUG600 Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_DEBUG600_Registers_Bitfields Bitfields
* \ingroup IfxSfr_DEBUG600_Registers
*
* \defgroup IfxSfr_DEBUG600_Registers_union Register unions
* \ingroup IfxSfr_DEBUG600_Registers
*
* \defgroup IfxSfr_DEBUG600_Registers_struct Memory map
* \ingroup IfxSfr_DEBUG600_Registers
*
*******************************************************************************/

#ifndef _IFXDEBUG600_REGDEF_H_
#define _IFXDEBUG600_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_DEBUG600_Registers_Bitfields
 * \{  */
/** \brief IP Version Information */
typedef struct _Ifx_DEBUG600_VERSION_Bits
{
    __I  Ifx_UReg_32Bit MINOR:8;                /**< \brief [7:0]   IP Minor Revision Number (r) */
    __I  Ifx_UReg_32Bit MAJOR:8;                /**< \brief [15:8]  IP Major Revision Number (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_DEBUG600_VERSION_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_DEBUG600_Registers_union
 * \{   */
/** \brief IP Version Information */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DEBUG600_VERSION_Bits B;                /**< \brief Bitfield access */
} Ifx_DEBUG600_VERSION;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_DEBUG600_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief DEBUG600 object */
typedef volatile struct _Ifx_DEBUG600
{
       __I  Ifx_DEBUG600_VERSION                VERSION;                /**< \brief 0, IP Version Information*/
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
} Ifx_DEBUG600;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXDEBUG600_REGDEF_H_ */
