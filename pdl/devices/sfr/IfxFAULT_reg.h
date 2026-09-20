/***************************************************************************//**
* \file IfxFAULT_reg.h
*
* \brief
* FAULT address
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
* \defgroup IfxSfr_FAULT_Registers_Cfg FAULT address
* \ingroup IfxSfr_FAULT_Registers
*
*******************************************************************************/

#ifndef _IFXFAULT_REG_H_
#define _IFXFAULT_REG_H_ 1

/******************************************************************************/
#include "IfxFAULT_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_FAULT_Registers_Cfg_BaseAddress
 * \{  */

/** \brief FAULT object */
#define MODULE_FAULT                            /*lint --e(923, 9078)*/ ((*(Ifx_FAULT*)(0x421E0000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_FAULT_STRUCT0                    /*lint --e(923, 9078)*/ ((*(Ifx_FAULT_STRUCT*)(0x421E0000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_FAULT_Registers_Cfg_FAULT
 * \{  */
/** \brief 0, Fault control */
#define REG_FAULT_STRUCT0_CTL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_CTL*)(0x421E0000u + PPCA_REMAP_OFFSET_2))
/** \brief C, Fault status */
#define REG_FAULT_STRUCT0_STATUS                /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_STATUS*)(0x421E000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Fault data */
#define REG_FAULT_STRUCT0_DATA0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_DATA*)(0x421E0010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Fault data */
#define REG_FAULT_STRUCT0_DATA1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_DATA*)(0x421E0014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Fault data */
#define REG_FAULT_STRUCT0_DATA2                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_DATA*)(0x421E0018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Fault data */
#define REG_FAULT_STRUCT0_DATA3                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_DATA*)(0x421E001Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Fault pending 0 */
#define REG_FAULT_STRUCT0_PENDING0              /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_PENDING0*)(0x421E0040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Fault pending 1 */
#define REG_FAULT_STRUCT0_PENDING1              /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_PENDING1*)(0x421E0044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Fault pending 2 */
#define REG_FAULT_STRUCT0_PENDING2              /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_PENDING2*)(0x421E0048u + PPCA_REMAP_OFFSET_2))
/** \brief 50, Fault mask 0 */
#define REG_FAULT_STRUCT0_MASK0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_MASK0*)(0x421E0050u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Fault mask 1 */
#define REG_FAULT_STRUCT0_MASK1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_MASK1*)(0x421E0054u + PPCA_REMAP_OFFSET_2))
/** \brief 58, Fault mask 2 */
#define REG_FAULT_STRUCT0_MASK2                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_MASK2*)(0x421E0058u + PPCA_REMAP_OFFSET_2))
/** \brief C0, Interrupt */
#define REG_FAULT_STRUCT0_INTR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_INTR*)(0x421E00C0u + PPCA_REMAP_OFFSET_2))
/** \brief C4, Interrupt set */
#define REG_FAULT_STRUCT0_INTR_SET              /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_INTR_SET*)(0x421E00C4u + PPCA_REMAP_OFFSET_2))
/** \brief C8, Interrupt mask */
#define REG_FAULT_STRUCT0_INTR_MASK             /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_INTR_MASK*)(0x421E00C8u + PPCA_REMAP_OFFSET_2))
/** \brief CC, Interrupt masked */
#define REG_FAULT_STRUCT0_INTR_MASKED           /*lint --e(923, 9078)*/ (*(volatile Ifx_FAULT_STRUCT_INTR_MASKED*)(0x421E00CCu + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXFAULT_REG_H_ */
