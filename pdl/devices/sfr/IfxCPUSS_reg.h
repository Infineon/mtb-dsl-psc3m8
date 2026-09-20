/***************************************************************************//**
* \file IfxCPUSS_reg.h
*
* \brief
* CPUSS address
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
* \defgroup IfxSfr_CPUSS_Registers_Cfg CPUSS address
* \ingroup IfxSfr_CPUSS_Registers
*
*******************************************************************************/

#ifndef _IFXCPUSS_REG_H_
#define _IFXCPUSS_REG_H_ 1

/******************************************************************************/
#include "IfxCPUSS_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_CPUSS_Registers_Cfg_BaseAddress
 * \{  */

/** \brief CPUSS object */
#define MODULE_CPUSS                            /*lint --e(923, 9078)*/ ((*(Ifx_CPUSS*)(0x421C0000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CPUSS_Registers_Cfg_CPUSS
 * \{  */
/** \brief 0, Identity */
#define REG_CPUSS_IDENTITY                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_IDENTITY*)(0x421C0000u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Product identifier and version (same as CoreSight RomTables) */
#define REG_CPUSS_PRODUCT_ID                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PRODUCT_ID*)(0x421C0010u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Debug port status */
#define REG_CPUSS_DP_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_DP_STATUS*)(0x421C0020u + PPCA_REMAP_OFFSET_2))
/** \brief 30, Buffer control */
#define REG_CPUSS_BUFF_CTL                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_BUFF_CTL*)(0x421C0030u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Calibration support set and read */
#define REG_CPUSS_CAL_SUP_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_CAL_SUP_SET*)(0x421C0040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Calibration support clear and reset */
#define REG_CPUSS_CAL_SUP_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_CAL_SUP_CLR*)(0x421C0044u + PPCA_REMAP_OFFSET_2))
/** \brief 50, Infrastructure Control */
#define REG_CPUSS_INFRA_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_INFRA_CTL*)(0x421C0050u + PPCA_REMAP_OFFSET_2))
/** \brief 100, Secure SysTick timer control */
#define REG_CPUSS_SYSTICK_S_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_SYSTICK_S_CTL*)(0x421C0100u + PPCA_REMAP_OFFSET_2))
/** \brief 120, Non Secure SysTick timer control */
#define REG_CPUSS_SYSTICK_NS_CTL                /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_SYSTICK_NS_CTL*)(0x421C0120u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Master security controller Interrupt */
#define REG_CPUSS_INTR_MSC                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_INTR_MSC*)(0x421C0200u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Master security controller Interrupt mask */
#define REG_CPUSS_INTR_MASK_MSC                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_INTR_MASK_MSC*)(0x421C0208u + PPCA_REMAP_OFFSET_2))
/** \brief 20C, Master security controller Interrupt masked */
#define REG_CPUSS_INTR_MASKED_MSC               /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_INTR_MASKED_MSC*)(0x421C020Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1000, Access port control */
#define REG_CPUSS_AP_CTL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_AP_CTL*)(0x421C1000u + PPCA_REMAP_OFFSET_2))
/** \brief 2004, Protection status */
#define REG_CPUSS_PROTECTION                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PROTECTION*)(0x421C2004u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCPUSS_REG_H_ */
