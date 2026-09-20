/***************************************************************************//**
* \file IfxMXWOUND_reg.h
*
* \brief
* MXWOUND address
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
* \defgroup IfxSfr_MXWOUND_Registers_Cfg MXWOUND address
* \ingroup IfxSfr_MXWOUND_Registers
*
*******************************************************************************/

#ifndef _IFXMXWOUND_REG_H_
#define _IFXMXWOUND_REG_H_ 1

/******************************************************************************/
#include "IfxMXWOUND_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_MXWOUND_Registers_Cfg_BaseAddress
 * \{  */

/** \brief MXWOUND object */
#define MODULE_MXWOUND                          /*lint --e(923, 9078)*/ ((*(Ifx_MXWOUND*)(0x42240000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MXWOUND_MXWOUND_PROP0            /*lint --e(923, 9078)*/ ((*(Ifx_MXWOUND_MXWOUND_PROP*)(0x42240100u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXWOUND_Registers_Cfg_MXWOUND
 * \{  */
/** \brief 0, MXWOUND Control Reg */
#define REG_MXWOUND_CTL                         /*lint --e(923, 9078)*/ (*(volatile Ifx_MXWOUND_CTL*)(0x42240000u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Property value register */
#define REG_MXWOUND_MXWOUND_PROP0_PROP          /*lint --e(923, 9078)*/ (*(volatile Ifx_MXWOUND_MXWOUND_PROP_PROP*)(0x42240100u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXMXWOUND_REG_H_ */
