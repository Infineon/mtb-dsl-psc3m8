/***************************************************************************//**
* \file IfxPWRMODE_reg.h
*
* \brief
* PWRMODE address
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
* \defgroup IfxSfr_PWRMODE_Registers_Cfg PWRMODE address
* \ingroup IfxSfr_PWRMODE_Registers
*
*******************************************************************************/

#ifndef _IFXPWRMODE_REG_H_
#define _IFXPWRMODE_REG_H_ 1

/******************************************************************************/
#include "IfxPWRMODE_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_PWRMODE_Registers_Cfg_BaseAddress
 * \{  */

/** \brief PWRMODE object */
#define MODULE_PWRMODE                          /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE*)(0x42210000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD0                      /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x42210000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD1                      /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x42210010u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD2                      /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x42210020u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD3                      /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x42210030u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD4                      /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x42210040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD5                      /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x42210050u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD6                      /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x42210060u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD7                      /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x42210070u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD8                      /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x42210080u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD9                      /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x42210090u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD10                     /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x422100A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD11                     /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x422100B0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD12                     /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x422100C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD13                     /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x422100D0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD14                     /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x422100E0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PD15                     /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PD*)(0x422100F0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PPU_MAIN                 /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PPU_MAIN*)(0x42211000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PWRMODE_PPU_MAIN_PPU_MAIN        /*lint --e(923, 9078)*/ ((*(Ifx_PWRMODE_PPU_MAIN_PPU_MAIN*)(0x42211000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PWRMODE_Registers_Cfg_PWRMODE
 * \{  */
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD0_PD_SENSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x42210000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD0_PD_SPT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x42210004u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD1_PD_SENSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x42210010u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD1_PD_SPT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x42210014u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD2_PD_SENSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x42210020u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD2_PD_SPT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x42210024u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD3_PD_SENSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x42210030u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD3_PD_SPT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x42210034u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD4_PD_SENSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x42210040u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD4_PD_SPT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x42210044u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD5_PD_SENSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x42210050u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD5_PD_SPT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x42210054u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD6_PD_SENSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x42210060u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD6_PD_SPT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x42210064u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD7_PD_SENSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x42210070u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD7_PD_SPT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x42210074u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD8_PD_SENSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x42210080u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD8_PD_SPT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x42210084u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD9_PD_SENSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x42210090u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD9_PD_SPT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x42210094u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD10_PD_SENSE               /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x422100A0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD10_PD_SPT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x422100A4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD11_PD_SENSE               /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x422100B0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD11_PD_SPT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x422100B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD12_PD_SENSE               /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x422100C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD12_PD_SPT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x422100C4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD13_PD_SENSE               /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x422100D0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD13_PD_SPT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x422100D4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD14_PD_SENSE               /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x422100E0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD14_PD_SPT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x422100E4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Dependency Sense Register */
#define REG_PWRMODE_PD15_PD_SENSE               /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SENSE*)(0x422100F0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Dependency Support Register */
#define REG_PWRMODE_PD15_PD_SPT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PD_PD_SPT*)(0x422100F4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Power Policy Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_PWPR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_PWPR*)(0x42211000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Power Mode Emulation Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_PMER      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_PMER*)(0x42211004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Power Status Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_PWSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_PWSR*)(0x42211008u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Device Interface Input Current Status Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_DISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_DISR*)(0x42211010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Miscellaneous Input Current Status Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_MISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_MISR*)(0x42211014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Stored Status Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_STSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_STSR*)(0x42211018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Unlock register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_UNLK      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_UNLK*)(0x4221101Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Power Configuration Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_PWCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_PWCR*)(0x42211020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Power Mode Transition Configuration Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_PTCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_PTCR*)(0x42211024u + PPCA_REMAP_OFFSET_2))
/** \brief 30, Interrupt Mask Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_IMR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_IMR*)(0x42211030u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Additional Interrupt Mask Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_AIMR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_AIMR*)(0x42211034u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Interrupt Status Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_ISR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_ISR*)(0x42211038u + PPCA_REMAP_OFFSET_2))
/** \brief 3C, Additional Interrupt Status Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_AISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_AISR*)(0x4221103Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Input Edge Sensitivity Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_IESR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_IESR*)(0x42211040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Operating Mode Active Edge Sensitivity Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_OPSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_OPSR*)(0x42211044u + PPCA_REMAP_OFFSET_2))
/** \brief 50, Functional Retention RAM Configuration Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_FUNRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_FUNRR*)(0x42211050u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Full Retention RAM Configuration Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_FULRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_FULRR*)(0x42211054u + PPCA_REMAP_OFFSET_2))
/** \brief 58, Memory Retention RAM Configuration Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_MEMRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_MEMRR*)(0x42211058u + PPCA_REMAP_OFFSET_2))
/** \brief 160, Power Mode Entry Delay Register 0 */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_EDTR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_EDTR0*)(0x42211160u + PPCA_REMAP_OFFSET_2))
/** \brief 164, Power Mode Entry Delay Register 1 */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_EDTR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_EDTR1*)(0x42211164u + PPCA_REMAP_OFFSET_2))
/** \brief 170, Device Control Delay Configuration Register 0 */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_DCDR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_DCDR0*)(0x42211170u + PPCA_REMAP_OFFSET_2))
/** \brief 174, Device Control Delay Configuration Register 1 */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_DCDR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_DCDR1*)(0x42211174u + PPCA_REMAP_OFFSET_2))
/** \brief FB0, PPU Identification Register 0 */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_IDR0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_IDR0*)(0x42211FB0u + PPCA_REMAP_OFFSET_2))
/** \brief FB4, PPU Identification Register 1 */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_IDR1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_IDR1*)(0x42211FB4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Implementation Identification Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_IIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_IIDR*)(0x42211FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Architecture Identification Register */
#define REG_PWRMODE_PPU_MAIN_PPU_MAIN_AIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_PPU_MAIN_PPU_MAIN_AIDR*)(0x42211FCCu + PPCA_REMAP_OFFSET_2))
/** \brief 2000, Clock Selection for Power Mode Components */
#define REG_PWRMODE_CLK_SELECT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWRMODE_CLK_SELECT*)(0x42212000u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPWRMODE_REG_H_ */
