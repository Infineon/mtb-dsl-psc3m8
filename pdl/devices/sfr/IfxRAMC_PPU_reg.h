/***************************************************************************//**
* \file IfxRAMC_PPU_reg.h
*
* \brief
* RAMC_PPU address
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
* \defgroup IfxSfr_RAMC_PPU_Registers_Cfg RAMC_PPU address
* \ingroup IfxSfr_RAMC_PPU_Registers
*
*******************************************************************************/

#ifndef _IFXRAMC_PPU_REG_H_
#define _IFXRAMC_PPU_REG_H_ 1

/******************************************************************************/
#include "IfxRAMC_PPU_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_RAMC_PPU_Registers_Cfg_BaseAddress
 * \{  */

/** \brief RAMC_PPU object */
#define MODULE_RAMC_PPU0                        /*lint --e(923, 9078)*/ ((*(Ifx_RAMC_PPU*)(0x42100000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_RAMC_PPU1                        /*lint --e(923, 9078)*/ ((*(Ifx_RAMC_PPU*)(0x42101000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_RAMC_PPU_Registers_Cfg_RAMC_PPU
 * \{  */
/** \brief 0, Power Policy Register */
#define REG_RAMC_PPU0_PWPR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PWPR*)(0x42100000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Power Mode Emulation Register */
#define REG_RAMC_PPU0_PMER                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PMER*)(0x42100004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Power Status Register */
#define REG_RAMC_PPU0_PWSR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PWSR*)(0x42100008u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Device Interface Input Current Status Register */
#define REG_RAMC_PPU0_DISR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_DISR*)(0x42100010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Miscellaneous Input Current Status Register */
#define REG_RAMC_PPU0_MISR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_MISR*)(0x42100014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Stored Status Register */
#define REG_RAMC_PPU0_STSR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_STSR*)(0x42100018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Unlock register */
#define REG_RAMC_PPU0_UNLK                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_UNLK*)(0x4210001Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Power Configuration Register */
#define REG_RAMC_PPU0_PWCR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PWCR*)(0x42100020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Power Mode Transition Configuration Register */
#define REG_RAMC_PPU0_PTCR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PTCR*)(0x42100024u + PPCA_REMAP_OFFSET_2))
/** \brief 30, Interrupt Mask Register */
#define REG_RAMC_PPU0_IMR                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_IMR*)(0x42100030u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Additional Interrupt Mask Register */
#define REG_RAMC_PPU0_AIMR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_AIMR*)(0x42100034u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Interrupt Status Register */
#define REG_RAMC_PPU0_ISR                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_ISR*)(0x42100038u + PPCA_REMAP_OFFSET_2))
/** \brief 3C, Additional Interrupt Status Register */
#define REG_RAMC_PPU0_AISR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_AISR*)(0x4210003Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Input Edge Sensitivity Register */
#define REG_RAMC_PPU0_IESR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_IESR*)(0x42100040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Operating Mode Active Edge Sensitivity Register */
#define REG_RAMC_PPU0_OPSR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_OPSR*)(0x42100044u + PPCA_REMAP_OFFSET_2))
/** \brief 50, Functional Retention RAM Configuration Register */
#define REG_RAMC_PPU0_FUNRR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_FUNRR*)(0x42100050u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Full Retention RAM Configuration Register */
#define REG_RAMC_PPU0_FULRR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_FULRR*)(0x42100054u + PPCA_REMAP_OFFSET_2))
/** \brief 58, Memory Retention RAM Configuration Register */
#define REG_RAMC_PPU0_MEMRR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_MEMRR*)(0x42100058u + PPCA_REMAP_OFFSET_2))
/** \brief 160, Power Mode Entry Delay Register 0 */
#define REG_RAMC_PPU0_EDTR0                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_EDTR0*)(0x42100160u + PPCA_REMAP_OFFSET_2))
/** \brief 164, Power Mode Entry Delay Register 1 */
#define REG_RAMC_PPU0_EDTR1                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_EDTR1*)(0x42100164u + PPCA_REMAP_OFFSET_2))
/** \brief 170, Device Control Delay Configuration Register 0 */
#define REG_RAMC_PPU0_DCDR0                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_DCDR0*)(0x42100170u + PPCA_REMAP_OFFSET_2))
/** \brief 174, Device Control Delay Configuration Register 1 */
#define REG_RAMC_PPU0_DCDR1                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_DCDR1*)(0x42100174u + PPCA_REMAP_OFFSET_2))
/** \brief FB0, PPU Identification Register 0 */
#define REG_RAMC_PPU0_IDR0                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_IDR0*)(0x42100FB0u + PPCA_REMAP_OFFSET_2))
/** \brief FB4, PPU Identification Register 1 */
#define REG_RAMC_PPU0_IDR1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_IDR1*)(0x42100FB4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Implementation Identification Register */
#define REG_RAMC_PPU0_IIDR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_IIDR*)(0x42100FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Architecture Identification Register */
#define REG_RAMC_PPU0_AIDR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_AIDR*)(0x42100FCCu + PPCA_REMAP_OFFSET_2))
/** \brief FD0, Implementation Defined Identification Register (PID4) */
#define REG_RAMC_PPU0_PID4                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PID4*)(0x42100FD0u + PPCA_REMAP_OFFSET_2))
/** \brief FE0, Implementation Defined Identification Register (PID0) */
#define REG_RAMC_PPU0_PID0                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PID0*)(0x42100FE0u + PPCA_REMAP_OFFSET_2))
/** \brief FE4, Implementation Defined Identification Register (PID1) */
#define REG_RAMC_PPU0_PID1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PID1*)(0x42100FE4u + PPCA_REMAP_OFFSET_2))
/** \brief FE8, Implementation Defined Identification Register (PID2) */
#define REG_RAMC_PPU0_PID2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PID2*)(0x42100FE8u + PPCA_REMAP_OFFSET_2))
/** \brief FEC, Implementation Defined Identification Register (PID3) */
#define REG_RAMC_PPU0_PID3                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PID3*)(0x42100FECu + PPCA_REMAP_OFFSET_2))
/** \brief FF0, Implementation Defined Identification Register (ID0) */
#define REG_RAMC_PPU0_ID0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_ID0*)(0x42100FF0u + PPCA_REMAP_OFFSET_2))
/** \brief FF4, Implementation Defined Identification Register (ID1) */
#define REG_RAMC_PPU0_ID1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_ID1*)(0x42100FF4u + PPCA_REMAP_OFFSET_2))
/** \brief FF8, Implementation Defined Identification Register (ID2) */
#define REG_RAMC_PPU0_ID2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_ID2*)(0x42100FF8u + PPCA_REMAP_OFFSET_2))
/** \brief FFC, Implementation Defined Identification Register (ID3) */
#define REG_RAMC_PPU0_ID3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_ID3*)(0x42100FFCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Power Policy Register */
#define REG_RAMC_PPU1_PWPR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PWPR*)(0x42101000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Power Mode Emulation Register */
#define REG_RAMC_PPU1_PMER                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PMER*)(0x42101004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Power Status Register */
#define REG_RAMC_PPU1_PWSR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PWSR*)(0x42101008u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Device Interface Input Current Status Register */
#define REG_RAMC_PPU1_DISR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_DISR*)(0x42101010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Miscellaneous Input Current Status Register */
#define REG_RAMC_PPU1_MISR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_MISR*)(0x42101014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Stored Status Register */
#define REG_RAMC_PPU1_STSR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_STSR*)(0x42101018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Unlock register */
#define REG_RAMC_PPU1_UNLK                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_UNLK*)(0x4210101Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Power Configuration Register */
#define REG_RAMC_PPU1_PWCR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PWCR*)(0x42101020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Power Mode Transition Configuration Register */
#define REG_RAMC_PPU1_PTCR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PTCR*)(0x42101024u + PPCA_REMAP_OFFSET_2))
/** \brief 30, Interrupt Mask Register */
#define REG_RAMC_PPU1_IMR                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_IMR*)(0x42101030u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Additional Interrupt Mask Register */
#define REG_RAMC_PPU1_AIMR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_AIMR*)(0x42101034u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Interrupt Status Register */
#define REG_RAMC_PPU1_ISR                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_ISR*)(0x42101038u + PPCA_REMAP_OFFSET_2))
/** \brief 3C, Additional Interrupt Status Register */
#define REG_RAMC_PPU1_AISR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_AISR*)(0x4210103Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Input Edge Sensitivity Register */
#define REG_RAMC_PPU1_IESR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_IESR*)(0x42101040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Operating Mode Active Edge Sensitivity Register */
#define REG_RAMC_PPU1_OPSR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_OPSR*)(0x42101044u + PPCA_REMAP_OFFSET_2))
/** \brief 50, Functional Retention RAM Configuration Register */
#define REG_RAMC_PPU1_FUNRR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_FUNRR*)(0x42101050u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Full Retention RAM Configuration Register */
#define REG_RAMC_PPU1_FULRR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_FULRR*)(0x42101054u + PPCA_REMAP_OFFSET_2))
/** \brief 58, Memory Retention RAM Configuration Register */
#define REG_RAMC_PPU1_MEMRR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_MEMRR*)(0x42101058u + PPCA_REMAP_OFFSET_2))
/** \brief 160, Power Mode Entry Delay Register 0 */
#define REG_RAMC_PPU1_EDTR0                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_EDTR0*)(0x42101160u + PPCA_REMAP_OFFSET_2))
/** \brief 164, Power Mode Entry Delay Register 1 */
#define REG_RAMC_PPU1_EDTR1                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_EDTR1*)(0x42101164u + PPCA_REMAP_OFFSET_2))
/** \brief 170, Device Control Delay Configuration Register 0 */
#define REG_RAMC_PPU1_DCDR0                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_DCDR0*)(0x42101170u + PPCA_REMAP_OFFSET_2))
/** \brief 174, Device Control Delay Configuration Register 1 */
#define REG_RAMC_PPU1_DCDR1                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_DCDR1*)(0x42101174u + PPCA_REMAP_OFFSET_2))
/** \brief FB0, PPU Identification Register 0 */
#define REG_RAMC_PPU1_IDR0                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_IDR0*)(0x42101FB0u + PPCA_REMAP_OFFSET_2))
/** \brief FB4, PPU Identification Register 1 */
#define REG_RAMC_PPU1_IDR1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_IDR1*)(0x42101FB4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Implementation Identification Register */
#define REG_RAMC_PPU1_IIDR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_IIDR*)(0x42101FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Architecture Identification Register */
#define REG_RAMC_PPU1_AIDR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_AIDR*)(0x42101FCCu + PPCA_REMAP_OFFSET_2))
/** \brief FD0, Implementation Defined Identification Register (PID4) */
#define REG_RAMC_PPU1_PID4                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PID4*)(0x42101FD0u + PPCA_REMAP_OFFSET_2))
/** \brief FE0, Implementation Defined Identification Register (PID0) */
#define REG_RAMC_PPU1_PID0                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PID0*)(0x42101FE0u + PPCA_REMAP_OFFSET_2))
/** \brief FE4, Implementation Defined Identification Register (PID1) */
#define REG_RAMC_PPU1_PID1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PID1*)(0x42101FE4u + PPCA_REMAP_OFFSET_2))
/** \brief FE8, Implementation Defined Identification Register (PID2) */
#define REG_RAMC_PPU1_PID2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PID2*)(0x42101FE8u + PPCA_REMAP_OFFSET_2))
/** \brief FEC, Implementation Defined Identification Register (PID3) */
#define REG_RAMC_PPU1_PID3                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_PID3*)(0x42101FECu + PPCA_REMAP_OFFSET_2))
/** \brief FF0, Implementation Defined Identification Register (ID0) */
#define REG_RAMC_PPU1_ID0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_ID0*)(0x42101FF0u + PPCA_REMAP_OFFSET_2))
/** \brief FF4, Implementation Defined Identification Register (ID1) */
#define REG_RAMC_PPU1_ID1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_ID1*)(0x42101FF4u + PPCA_REMAP_OFFSET_2))
/** \brief FF8, Implementation Defined Identification Register (ID2) */
#define REG_RAMC_PPU1_ID2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_ID2*)(0x42101FF8u + PPCA_REMAP_OFFSET_2))
/** \brief FFC, Implementation Defined Identification Register (ID3) */
#define REG_RAMC_PPU1_ID3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PPU_ID3*)(0x42101FFCu + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXRAMC_PPU_REG_H_ */
