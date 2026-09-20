/***************************************************************************//**
* \file IfxDEBUG600_reg.h
*
* \brief
* DEBUG600 address
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
* \defgroup IfxSfr_DEBUG600_Registers_Cfg DEBUG600 address
* \ingroup IfxSfr_DEBUG600_Registers
*
*******************************************************************************/

#ifndef _IFXDEBUG600_REG_H_
#define _IFXDEBUG600_REG_H_ 1

/******************************************************************************/
#include "IfxDEBUG600_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_DEBUG600_Registers_Cfg_BaseAddress
 * \{  */

/** \brief DEBUG600 object */
#define MODULE_DEBUG600                         /*lint --e(923, 9078)*/ ((*(Ifx_DEBUG600*)(0x42250000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_DEBUG600_Registers_Cfg_DEBUG600
 * \{  */
/** \brief 0, IP Version Information */
#define REG_DEBUG600_VERSION                    /*lint --e(923, 9078)*/ (*(volatile Ifx_DEBUG600_VERSION*)(0x42250000u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXDEBUG600_REG_H_ */
