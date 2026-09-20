/***************************************************************************//**
* \file IfxLPCOMP_reg.h
*
* \brief
* LPCOMP address
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
* \defgroup IfxSfr_LPCOMP_Registers_Cfg LPCOMP address
* \ingroup IfxSfr_LPCOMP_Registers
*
*******************************************************************************/

#ifndef _IFXLPCOMP_REG_H_
#define _IFXLPCOMP_REG_H_ 1

/******************************************************************************/
#include "IfxLPCOMP_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_LPCOMP_Registers_Cfg_BaseAddress
 * \{  */

/** \brief LPCOMP object */
#define MODULE_LPCOMP                           /*lint --e(923, 9078)*/ ((*(Ifx_LPCOMP*)(0x42430000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_LPCOMP_Registers_Cfg_LPCOMP
 * \{  */
/** \brief 0, LPCOMP Configuration Register */
#define REG_LPCOMP_CONFIG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_CONFIG*)(0x42430000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, LPCOMP Status Register */
#define REG_LPCOMP_STATUS                       /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_STATUS*)(0x42430004u + PPCA_REMAP_OFFSET_2))
/** \brief 10, LPCOMP Interrupt request register */
#define REG_LPCOMP_INTR                         /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_INTR*)(0x42430010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, LPCOMP Interrupt set register */
#define REG_LPCOMP_INTR_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_INTR_SET*)(0x42430014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, LPCOMP Interrupt request mask */
#define REG_LPCOMP_INTR_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_INTR_MASK*)(0x42430018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, LPCOMP Interrupt request masked */
#define REG_LPCOMP_INTR_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_INTR_MASKED*)(0x4243001Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Comparator 0 control Register */
#define REG_LPCOMP_CMP0_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_CMP0_CTRL*)(0x42430040u + PPCA_REMAP_OFFSET_2))
/** \brief 50, Comparator 0 switch control */
#define REG_LPCOMP_CMP0_SW                      /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_CMP0_SW*)(0x42430050u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Comparator 0 switch control clear */
#define REG_LPCOMP_CMP0_SW_CLEAR                /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_CMP0_SW_CLEAR*)(0x42430054u + PPCA_REMAP_OFFSET_2))
/** \brief 80, Comparator 1 control Register */
#define REG_LPCOMP_CMP1_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_CMP1_CTRL*)(0x42430080u + PPCA_REMAP_OFFSET_2))
/** \brief 90, Comparator 1 switch control */
#define REG_LPCOMP_CMP1_SW                      /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_CMP1_SW*)(0x42430090u + PPCA_REMAP_OFFSET_2))
/** \brief 94, Comparator 1 switch control clear */
#define REG_LPCOMP_CMP1_SW_CLEAR                /*lint --e(923, 9078)*/ (*(volatile Ifx_LPCOMP_CMP1_SW_CLEAR*)(0x42430094u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXLPCOMP_REG_H_ */
