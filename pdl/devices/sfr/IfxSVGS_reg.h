/***************************************************************************//**
* \file IfxSVGS_reg.h
*
* \brief
* SVGS address
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
* \defgroup IfxSfr_SVGS_Registers_Cfg SVGS address
* \ingroup IfxSfr_SVGS_Registers
*
*******************************************************************************/

#ifndef _IFXSVGS_REG_H_
#define _IFXSVGS_REG_H_ 1

/******************************************************************************/
#include "IfxSVGS_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_SVGS_Registers_Cfg_BaseAddress
 * \{  */

/** \brief SVGS object */
#define MODULE_SVGS                             /*lint --e(923, 9078)*/ ((*(Ifx_SVGS*)(0x42260000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_SVGS_SVGS_MAIN                   /*lint --e(923, 9078)*/ ((*(Ifx_SVGS_SVGS_MAIN*)(0x42260000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SVGS_Registers_Cfg_SVGS
 * \{  */
/** \brief 0, SVGS Control Register */
#define REG_SVGS_SVGS_MAIN_SVGS_CTL             /*lint --e(923, 9078)*/ (*(volatile Ifx_SVGS_SVGS_MAIN_SVGS_CTL*)(0x42260000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, SVGS Status Register */
#define REG_SVGS_SVGS_MAIN_SVGS_STATUS          /*lint --e(923, 9078)*/ (*(volatile Ifx_SVGS_SVGS_MAIN_SVGS_STATUS*)(0x42260004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, SVGS Comparator Configuration */
#define REG_SVGS_SVGS_MAIN_SVGS_CMP_CFG_RO      /*lint --e(923, 9078)*/ (*(volatile Ifx_SVGS_SVGS_MAIN_SVGS_CMP_CFG_RO*)(0x42260008u + PPCA_REMAP_OFFSET_2))
/** \brief C, SVGS Comparator trip-point configuration */
#define REG_SVGS_SVGS_MAIN_SVGS_CMP_TRIP_RO     /*lint --e(923, 9078)*/ (*(volatile Ifx_SVGS_SVGS_MAIN_SVGS_CMP_TRIP_RO*)(0x4226000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, SVGS Trim Register */
#define REG_SVGS_SVGS_MAIN_SVGS_TRIM_RO         /*lint --e(923, 9078)*/ (*(volatile Ifx_SVGS_SVGS_MAIN_SVGS_TRIM_RO*)(0x42260010u + PPCA_REMAP_OFFSET_2))
/** \brief 20, SVGS Interrupt Register */
#define REG_SVGS_SVGS_MAIN_SVGS_INTR            /*lint --e(923, 9078)*/ (*(volatile Ifx_SVGS_SVGS_MAIN_SVGS_INTR*)(0x42260020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, SVGS Interrupt Set Register */
#define REG_SVGS_SVGS_MAIN_SVGS_INTR_SET        /*lint --e(923, 9078)*/ (*(volatile Ifx_SVGS_SVGS_MAIN_SVGS_INTR_SET*)(0x42260024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, SVGS Interrupt Mask Register */
#define REG_SVGS_SVGS_MAIN_SVGS_INTR_MASK       /*lint --e(923, 9078)*/ (*(volatile Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASK*)(0x42260028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, SVGS Interrupt Masked Register */
#define REG_SVGS_SVGS_MAIN_SVGS_INTR_MASKED     /*lint --e(923, 9078)*/ (*(volatile Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASKED*)(0x4226002Cu + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXSVGS_REG_H_ */
