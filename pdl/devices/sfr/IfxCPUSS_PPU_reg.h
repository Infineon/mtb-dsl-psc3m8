/***************************************************************************//**
* \file IfxCPUSS_PPU_reg.h
*
* \brief
* CPUSS_PPU address
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
* \defgroup IfxSfr_CPUSS_PPU_Registers_Cfg CPUSS_PPU address
* \ingroup IfxSfr_CPUSS_PPU_Registers
*
*******************************************************************************/

#ifndef _IFXCPUSS_PPU_REG_H_
#define _IFXCPUSS_PPU_REG_H_ 1

/******************************************************************************/
#include "IfxCPUSS_PPU_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_CPUSS_PPU_Registers_Cfg_BaseAddress
 * \{  */

/** \brief CPUSS_PPU object */
#define MODULE_CPUSS_PPU                        /*lint --e(923, 9078)*/ ((*(Ifx_CPUSS_PPU*)(0x42105000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CPUSS_PPU_Registers_Cfg_CPUSS_PPU
 * \{  */
/** \brief 0, Power Policy Register */
#define REG_CPUSS_PPU_PWPR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_PWPR*)(0x42105000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Power Mode Emulation Register */
#define REG_CPUSS_PPU_PMER                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_PMER*)(0x42105004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Power Status Register */
#define REG_CPUSS_PPU_PWSR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_PWSR*)(0x42105008u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Device Interface Input Current Status Register */
#define REG_CPUSS_PPU_DISR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_DISR*)(0x42105010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Miscellaneous Input Current Status Register */
#define REG_CPUSS_PPU_MISR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_MISR*)(0x42105014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Stored Status Register */
#define REG_CPUSS_PPU_STSR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_STSR*)(0x42105018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Unlock register */
#define REG_CPUSS_PPU_UNLK                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_UNLK*)(0x4210501Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Power Configuration Register */
#define REG_CPUSS_PPU_PWCR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_PWCR*)(0x42105020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Power Mode Transition Configuration Register */
#define REG_CPUSS_PPU_PTCR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_PTCR*)(0x42105024u + PPCA_REMAP_OFFSET_2))
/** \brief 30, Interrupt Mask Register */
#define REG_CPUSS_PPU_IMR                       /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_IMR*)(0x42105030u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Additional Interrupt Mask Register */
#define REG_CPUSS_PPU_AIMR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_AIMR*)(0x42105034u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Interrupt Status Register */
#define REG_CPUSS_PPU_ISR                       /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_ISR*)(0x42105038u + PPCA_REMAP_OFFSET_2))
/** \brief 3C, Additional Interrupt Status Register */
#define REG_CPUSS_PPU_AISR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_AISR*)(0x4210503Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Input Edge Sensitivity Register */
#define REG_CPUSS_PPU_IESR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_IESR*)(0x42105040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Operating Mode Active Edge Sensitivity Register */
#define REG_CPUSS_PPU_OPSR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_OPSR*)(0x42105044u + PPCA_REMAP_OFFSET_2))
/** \brief 50, Functional Retention RAM Configuration Register */
#define REG_CPUSS_PPU_FUNRR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_FUNRR*)(0x42105050u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Full Retention RAM Configuration Register */
#define REG_CPUSS_PPU_FULRR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_FULRR*)(0x42105054u + PPCA_REMAP_OFFSET_2))
/** \brief 58, Memory Retention RAM Configuration Register */
#define REG_CPUSS_PPU_MEMRR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_MEMRR*)(0x42105058u + PPCA_REMAP_OFFSET_2))
/** \brief 160, Power Mode Entry Delay Register 0 */
#define REG_CPUSS_PPU_EDTR0                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_EDTR0*)(0x42105160u + PPCA_REMAP_OFFSET_2))
/** \brief 164, Power Mode Entry Delay Register 1 */
#define REG_CPUSS_PPU_EDTR1                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_EDTR1*)(0x42105164u + PPCA_REMAP_OFFSET_2))
/** \brief 170, Device Control Delay Configuration Register 0 */
#define REG_CPUSS_PPU_DCDR0                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_DCDR0*)(0x42105170u + PPCA_REMAP_OFFSET_2))
/** \brief 174, Device Control Delay Configuration Register 1 */
#define REG_CPUSS_PPU_DCDR1                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_DCDR1*)(0x42105174u + PPCA_REMAP_OFFSET_2))
/** \brief FB0, PPU Identification Register 0 */
#define REG_CPUSS_PPU_IDR0                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_IDR0*)(0x42105FB0u + PPCA_REMAP_OFFSET_2))
/** \brief FB4, PPU Identification Register 1 */
#define REG_CPUSS_PPU_IDR1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_IDR1*)(0x42105FB4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Implementation Identification Register */
#define REG_CPUSS_PPU_IIDR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_IIDR*)(0x42105FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Architecture Identification Register */
#define REG_CPUSS_PPU_AIDR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_AIDR*)(0x42105FCCu + PPCA_REMAP_OFFSET_2))
/** \brief FD0, Implementation Defined Identification Register (PID4) */
#define REG_CPUSS_PPU_PID4                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_PID4*)(0x42105FD0u + PPCA_REMAP_OFFSET_2))
/** \brief FE0, Implementation Defined Identification Register (PID0) */
#define REG_CPUSS_PPU_PID0                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_PID0*)(0x42105FE0u + PPCA_REMAP_OFFSET_2))
/** \brief FE4, Implementation Defined Identification Register (PID1) */
#define REG_CPUSS_PPU_PID1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_PID1*)(0x42105FE4u + PPCA_REMAP_OFFSET_2))
/** \brief FE8, Implementation Defined Identification Register (PID2) */
#define REG_CPUSS_PPU_PID2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_PID2*)(0x42105FE8u + PPCA_REMAP_OFFSET_2))
/** \brief FEC, Implementation Defined Identification Register (PID3) */
#define REG_CPUSS_PPU_PID3                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_PID3*)(0x42105FECu + PPCA_REMAP_OFFSET_2))
/** \brief FF0, Implementation Defined Identification Register (ID0) */
#define REG_CPUSS_PPU_ID0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_ID0*)(0x42105FF0u + PPCA_REMAP_OFFSET_2))
/** \brief FF4, Implementation Defined Identification Register (ID1) */
#define REG_CPUSS_PPU_ID1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_ID1*)(0x42105FF4u + PPCA_REMAP_OFFSET_2))
/** \brief FF8, Implementation Defined Identification Register (ID2) */
#define REG_CPUSS_PPU_ID2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_ID2*)(0x42105FF8u + PPCA_REMAP_OFFSET_2))
/** \brief FFC, Implementation Defined Identification Register (ID3) */
#define REG_CPUSS_PPU_ID3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_CPUSS_PPU_ID3*)(0x42105FFCu + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCPUSS_PPU_REG_H_ */
