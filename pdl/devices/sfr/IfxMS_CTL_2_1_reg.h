/***************************************************************************//**
* \file IfxMS_CTL_2_1_reg.h
*
* \brief
* MS_CTL_2_1 address
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
* \defgroup IfxSfr_MS_CTL_2_1_Registers_Cfg MS_CTL_2_1 address
* \ingroup IfxSfr_MS_CTL_2_1_Registers
*
*******************************************************************************/

#ifndef _IFXMS_CTL_2_1_REG_H_
#define _IFXMS_CTL_2_1_REG_H_ 1

/******************************************************************************/
#include "IfxMS_CTL_2_1_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_MS_CTL_2_1_Registers_Cfg_BaseAddress
 * \{  */

/** \brief MS_CTL_2_1 object */
#define MODULE_MS_CTL_2_1                       /*lint --e(923, 9078)*/ ((*(Ifx_MS_CTL_2_1*)(0x421C4000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MS0                              /*lint --e(923, 9078)*/ ((*(Ifx_MS*)(0x421C4000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MS4                              /*lint --e(923, 9078)*/ ((*(Ifx_MS*)(0x421C4040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MS7                              /*lint --e(923, 9078)*/ ((*(Ifx_MS*)(0x421C4070u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MS9                              /*lint --e(923, 9078)*/ ((*(Ifx_MS*)(0x421C4090u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MS31                             /*lint --e(923, 9078)*/ ((*(Ifx_MS*)(0x421C41F0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MS_PC0                           /*lint --e(923, 9078)*/ ((*(Ifx_MS_PC*)(0x421C5000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MS_PC4                           /*lint --e(923, 9078)*/ ((*(Ifx_MS_PC*)(0x421C5040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MS_PC7                           /*lint --e(923, 9078)*/ ((*(Ifx_MS_PC*)(0x421C5070u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MS_PC9                           /*lint --e(923, 9078)*/ ((*(Ifx_MS_PC*)(0x421C5090u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MS_PC31                          /*lint --e(923, 9078)*/ ((*(Ifx_MS_PC*)(0x421C51F0u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MS_CTL_2_1_Registers_Cfg_MS_CTL_2_1
 * \{  */
/** \brief 0, Master 'x' protection context control */
#define REG_MS0_CTL                             /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_CTL*)(0x421C4000u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Master 'x' protection context control */
#define REG_MS4_CTL                             /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_CTL*)(0x421C4040u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Master 'x' protection context control */
#define REG_MS7_CTL                             /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_CTL*)(0x421C4070u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Master 'x' protection context control */
#define REG_MS9_CTL                             /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_CTL*)(0x421C4090u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Master 'x' protection context control */
#define REG_MS31_CTL                            /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_CTL*)(0x421C41F0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Master 'x' protection context value */
#define REG_MS_PC0_PC                           /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_PC_PC*)(0x421C5000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Master 'x' protection context value read mirror register */
#define REG_MS_PC0_PC_READ_MIR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_PC_PC_READ_MIR*)(0x421C5004u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Master 'x' protection context value */
#define REG_MS_PC9_PC                           /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_PC_PC*)(0x421C5090u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Master 'x' protection context value read mirror register */
#define REG_MS_PC9_PC_READ_MIR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_PC_PC_READ_MIR*)(0x421C5094u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Master 'x' protection context value */
#define REG_MS_PC31_PC                          /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_PC_PC*)(0x421C51F0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Master 'x' protection context value read mirror register */
#define REG_MS_PC31_PC_READ_MIR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_MS_PC_PC_READ_MIR*)(0x421C51F4u + PPCA_REMAP_OFFSET_2))
/** \brief 2010, SYS_MS0  master security Controller & ACG configuration */
#define REG_SYS_MS0_MSC_ACG_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SYS_MS0_MSC_ACG_CTL*)(0x421C6010u + PPCA_REMAP_OFFSET_2))
/** \brief 2020, EXP_MS  master security Controller & ACG configuration */
#define REG_EXP_MS_MSC_ACG_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_EXP_MS_MSC_ACG_CTL*)(0x421C6020u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXMS_CTL_2_1_REG_H_ */
