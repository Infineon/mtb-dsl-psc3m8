/***************************************************************************//**
* \file IfxICACHE_reg.h
*
* \brief
* ICACHE address
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
* \defgroup IfxSfr_ICACHE_Registers_Cfg ICACHE address
* \ingroup IfxSfr_ICACHE_Registers
*
*******************************************************************************/

#ifndef _IFXICACHE_REG_H_
#define _IFXICACHE_REG_H_ 1

/******************************************************************************/
#include "IfxICACHE_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_ICACHE_Registers_Cfg_BaseAddress
 * \{  */

/** \brief ICACHE object */
#define MODULE_ICACHE0                          /*lint --e(923, 9078)*/ ((*(Ifx_ICACHE*)(0x42103000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_ICACHE_Registers_Cfg_ICACHE
 * \{  */
/** \brief 0, Cache control */
#define REG_ICACHE0_CTL                         /*lint --e(923, 9078)*/ (*(volatile Ifx_ICACHE_CTL*)(0x42103000u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Cache command */
#define REG_ICACHE0_CMD                         /*lint --e(923, 9078)*/ (*(volatile Ifx_ICACHE_CMD*)(0x42103008u + PPCA_REMAP_OFFSET_2))
/** \brief 80, Cache status 0 */
#define REG_ICACHE0_STATUS0                     /*lint --e(923, 9078)*/ (*(volatile Ifx_ICACHE_STATUS0*)(0x42103080u + PPCA_REMAP_OFFSET_2))
/** \brief 84, Cache status 1 */
#define REG_ICACHE0_STATUS1                     /*lint --e(923, 9078)*/ (*(volatile Ifx_ICACHE_STATUS1*)(0x42103084u + PPCA_REMAP_OFFSET_2))
/** \brief 88, Cache status 2 */
#define REG_ICACHE0_STATUS2                     /*lint --e(923, 9078)*/ (*(volatile Ifx_ICACHE_STATUS2*)(0x42103088u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXICACHE_REG_H_ */
