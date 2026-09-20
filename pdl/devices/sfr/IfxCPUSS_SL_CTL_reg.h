/***************************************************************************//**
* \file IfxCPUSS_SL_CTL_reg.h
*
* \brief
* CPUSS_SL_CTL address
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
* \defgroup IfxSfr_CPUSS_SL_CTL_Registers_Cfg CPUSS_SL_CTL address
* \ingroup IfxSfr_CPUSS_SL_CTL_Registers
*
*******************************************************************************/

#ifndef _IFXCPUSS_SL_CTL_REG_H_
#define _IFXCPUSS_SL_CTL_REG_H_ 1

/******************************************************************************/
#include "IfxCPUSS_SL_CTL_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_CPUSS_SL_CTL_Registers_Cfg_BaseAddress
 * \{  */

/** \brief CPUSS_SL_CTL object */
#define MODULE_CPUSS_SL_CTL                     /*lint --e(923, 9078)*/ ((*(Ifx_CPUSS_SL_CTL*)(0x421C8000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CPUSS_SL_CTL_Registers_Cfg_CPUSS_SL_CTL
 * \{  */
/** \brief 0, Slave control (Clock enables) */
#define REG_CPUSS_SL_CTL_SL_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_SL_CTL_SL_CTL*)(0x421C8000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Slave control2 (Reset enables) */
#define REG_CPUSS_SL_CTL_SL_CTL2                /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_SL_CTL_SL_CTL2*)(0x421C8004u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCPUSS_SL_CTL_REG_H_ */
