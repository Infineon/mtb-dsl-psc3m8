/***************************************************************************//**
* \file IfxPERI_reg.h
*
* \brief
* PERI address
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
* \defgroup IfxSfr_PERI_Registers_Cfg PERI address
* \ingroup IfxSfr_PERI_Registers
*
*******************************************************************************/

#ifndef _IFXPERI_REG_H_
#define _IFXPERI_REG_H_ 1

/******************************************************************************/
#include "IfxPERI_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_PERI_Registers_Cfg_BaseAddress
 * \{  */

/** \brief PERI object */
#define MODULE_PERI                             /*lint --e(923, 9078)*/ ((*(Ifx_PERI*)(0x42000000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_GR0                         /*lint --e(923, 9078)*/ ((*(Ifx_PERI_GR*)(0x42004000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_GR1                         /*lint --e(923, 9078)*/ ((*(Ifx_PERI_GR*)(0x42004040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_GR2                         /*lint --e(923, 9078)*/ ((*(Ifx_PERI_GR*)(0x42004080u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_GR3                         /*lint --e(923, 9078)*/ ((*(Ifx_PERI_GR*)(0x420040C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_GR4                         /*lint --e(923, 9078)*/ ((*(Ifx_PERI_GR*)(0x42004100u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_GR5                         /*lint --e(923, 9078)*/ ((*(Ifx_PERI_GR*)(0x42004140u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_TR_GR0                      /*lint --e(923, 9078)*/ ((*(Ifx_PERI_TR_GR*)(0x42008000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_TR_GR1                      /*lint --e(923, 9078)*/ ((*(Ifx_PERI_TR_GR*)(0x42008400u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_TR_GR2                      /*lint --e(923, 9078)*/ ((*(Ifx_PERI_TR_GR*)(0x42008800u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_TR_GR3                      /*lint --e(923, 9078)*/ ((*(Ifx_PERI_TR_GR*)(0x42008C00u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_TR_GR4                      /*lint --e(923, 9078)*/ ((*(Ifx_PERI_TR_GR*)(0x42009000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_TR_GR5                      /*lint --e(923, 9078)*/ ((*(Ifx_PERI_TR_GR*)(0x42009400u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_TR_GR6                      /*lint --e(923, 9078)*/ ((*(Ifx_PERI_TR_GR*)(0x42009800u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_TR_GR7                      /*lint --e(923, 9078)*/ ((*(Ifx_PERI_TR_GR*)(0x42009C00u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_TR_1TO1_GR0                 /*lint --e(923, 9078)*/ ((*(Ifx_PERI_TR_1TO1_GR*)(0x4200C000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PERI_Registers_Cfg_PERI
 * \{  */
/** \brief 200, Timeout control */
#define REG_PERI_TIMEOUT_CTL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TIMEOUT_CTL*)(0x42000200u + PPCA_REMAP_OFFSET_2))
/** \brief 2000, Trigger command */
#define REG_PERI_TR_CMD                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_CMD*)(0x42002000u + PPCA_REMAP_OFFSET_2))
/** \brief 2004, Infrastructure clock force enable */
#define REG_PERI_INFRA_CLK_FORCE                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_INFRA_CLK_FORCE*)(0x42002004u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Slave control */
#define REG_PERI_GR0_SL_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL*)(0x42004010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Slave control2 */
#define REG_PERI_GR0_SL_CTL2                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL2*)(0x42004014u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Slave wounding */
#define REG_PERI_GR0_SL_WOUND                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_WOUND*)(0x42004020u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock control */
#define REG_PERI_GR1_CLOCK_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_CLOCK_CTL*)(0x42004040u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Slave control */
#define REG_PERI_GR1_SL_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL*)(0x42004050u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Slave control2 */
#define REG_PERI_GR1_SL_CTL2                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL2*)(0x42004054u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Slave wounding */
#define REG_PERI_GR1_SL_WOUND                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_WOUND*)(0x42004060u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock control */
#define REG_PERI_GR2_CLOCK_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_CLOCK_CTL*)(0x42004080u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Slave control */
#define REG_PERI_GR2_SL_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL*)(0x42004090u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Slave control2 */
#define REG_PERI_GR2_SL_CTL2                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL2*)(0x42004094u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Slave wounding */
#define REG_PERI_GR2_SL_WOUND                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_WOUND*)(0x420040A0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock control */
#define REG_PERI_GR3_CLOCK_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_CLOCK_CTL*)(0x420040C0u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Slave control */
#define REG_PERI_GR3_SL_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL*)(0x420040D0u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Slave control2 */
#define REG_PERI_GR3_SL_CTL2                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL2*)(0x420040D4u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Slave wounding */
#define REG_PERI_GR3_SL_WOUND                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_WOUND*)(0x420040E0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock control */
#define REG_PERI_GR4_CLOCK_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_CLOCK_CTL*)(0x42004100u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Slave control */
#define REG_PERI_GR4_SL_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL*)(0x42004110u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Slave control2 */
#define REG_PERI_GR4_SL_CTL2                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL2*)(0x42004114u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Slave wounding */
#define REG_PERI_GR4_SL_WOUND                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_WOUND*)(0x42004120u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Slave control */
#define REG_PERI_GR5_SL_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL*)(0x42004150u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Slave control2 */
#define REG_PERI_GR5_SL_CTL2                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_CTL2*)(0x42004154u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Slave wounding */
#define REG_PERI_GR5_SL_WOUND                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_GR_SL_WOUND*)(0x42004160u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL2                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL3                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200800Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL4                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL5                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL6                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL7                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200801Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL8                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL9                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL10                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL11                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200802Cu + PPCA_REMAP_OFFSET_2))
/** \brief 30, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL12                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008030u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL13                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008034u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL14                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008038u + PPCA_REMAP_OFFSET_2))
/** \brief 3C, Trigger control register */
#define REG_PERI_TR_GR0_TR_CTL15                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200803Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008400u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008404u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL2                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008408u + PPCA_REMAP_OFFSET_2))
/** \brief C, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL3                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200840Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL4                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008410u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL5                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008414u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL6                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008418u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL7                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200841Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL8                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008420u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL9                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008424u + PPCA_REMAP_OFFSET_2))
/** \brief 28, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL10                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008428u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL11                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200842Cu + PPCA_REMAP_OFFSET_2))
/** \brief 30, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL12                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008430u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL13                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008434u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL14                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008438u + PPCA_REMAP_OFFSET_2))
/** \brief 3C, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL15                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200843Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL16                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008440u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL17                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008444u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL18                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008448u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL19                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200844Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL20                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008450u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL21                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008454u + PPCA_REMAP_OFFSET_2))
/** \brief 58, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL22                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008458u + PPCA_REMAP_OFFSET_2))
/** \brief 5C, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL23                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200845Cu + PPCA_REMAP_OFFSET_2))
/** \brief 60, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL24                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008460u + PPCA_REMAP_OFFSET_2))
/** \brief 64, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL25                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008464u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL26                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008468u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL27                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200846Cu + PPCA_REMAP_OFFSET_2))
/** \brief 70, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL28                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008470u + PPCA_REMAP_OFFSET_2))
/** \brief 74, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL29                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008474u + PPCA_REMAP_OFFSET_2))
/** \brief 78, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL30                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008478u + PPCA_REMAP_OFFSET_2))
/** \brief 7C, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL31                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200847Cu + PPCA_REMAP_OFFSET_2))
/** \brief 80, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL32                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008480u + PPCA_REMAP_OFFSET_2))
/** \brief 84, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL33                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008484u + PPCA_REMAP_OFFSET_2))
/** \brief 88, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL34                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008488u + PPCA_REMAP_OFFSET_2))
/** \brief 8C, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL35                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200848Cu + PPCA_REMAP_OFFSET_2))
/** \brief 90, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL36                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008490u + PPCA_REMAP_OFFSET_2))
/** \brief 94, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL37                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008494u + PPCA_REMAP_OFFSET_2))
/** \brief 98, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL38                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008498u + PPCA_REMAP_OFFSET_2))
/** \brief 9C, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL39                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200849Cu + PPCA_REMAP_OFFSET_2))
/** \brief A0, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL40                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084A0u + PPCA_REMAP_OFFSET_2))
/** \brief A4, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL41                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084A4u + PPCA_REMAP_OFFSET_2))
/** \brief A8, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL42                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084A8u + PPCA_REMAP_OFFSET_2))
/** \brief AC, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL43                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084ACu + PPCA_REMAP_OFFSET_2))
/** \brief B0, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL44                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084B0u + PPCA_REMAP_OFFSET_2))
/** \brief B4, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL45                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084B4u + PPCA_REMAP_OFFSET_2))
/** \brief B8, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL46                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084B8u + PPCA_REMAP_OFFSET_2))
/** \brief BC, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL47                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084BCu + PPCA_REMAP_OFFSET_2))
/** \brief C0, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL48                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084C0u + PPCA_REMAP_OFFSET_2))
/** \brief C4, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL49                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084C4u + PPCA_REMAP_OFFSET_2))
/** \brief C8, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL50                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084C8u + PPCA_REMAP_OFFSET_2))
/** \brief CC, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL51                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084CCu + PPCA_REMAP_OFFSET_2))
/** \brief D0, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL52                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084D0u + PPCA_REMAP_OFFSET_2))
/** \brief D4, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL53                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084D4u + PPCA_REMAP_OFFSET_2))
/** \brief D8, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL54                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084D8u + PPCA_REMAP_OFFSET_2))
/** \brief DC, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL55                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084DCu + PPCA_REMAP_OFFSET_2))
/** \brief E0, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL56                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084E0u + PPCA_REMAP_OFFSET_2))
/** \brief E4, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL57                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084E4u + PPCA_REMAP_OFFSET_2))
/** \brief E8, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL58                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084E8u + PPCA_REMAP_OFFSET_2))
/** \brief EC, Trigger control register */
#define REG_PERI_TR_GR1_TR_CTL59                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420084ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008800u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008804u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL2                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008808u + PPCA_REMAP_OFFSET_2))
/** \brief C, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL3                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200880Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL4                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008810u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL5                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008814u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL6                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008818u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL7                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200881Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL8                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008820u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL9                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008824u + PPCA_REMAP_OFFSET_2))
/** \brief 28, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL10                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008828u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL11                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200882Cu + PPCA_REMAP_OFFSET_2))
/** \brief 30, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL12                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008830u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL13                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008834u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL14                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008838u + PPCA_REMAP_OFFSET_2))
/** \brief 3C, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL15                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200883Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL16                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008840u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL17                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008844u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL18                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008848u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL19                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200884Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL20                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008850u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL21                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008854u + PPCA_REMAP_OFFSET_2))
/** \brief 58, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL22                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008858u + PPCA_REMAP_OFFSET_2))
/** \brief 5C, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL23                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200885Cu + PPCA_REMAP_OFFSET_2))
/** \brief 60, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL24                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008860u + PPCA_REMAP_OFFSET_2))
/** \brief 64, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL25                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008864u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL26                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008868u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL27                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200886Cu + PPCA_REMAP_OFFSET_2))
/** \brief 70, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL28                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008870u + PPCA_REMAP_OFFSET_2))
/** \brief 74, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL29                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008874u + PPCA_REMAP_OFFSET_2))
/** \brief 78, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL30                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008878u + PPCA_REMAP_OFFSET_2))
/** \brief 7C, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL31                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200887Cu + PPCA_REMAP_OFFSET_2))
/** \brief 80, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL32                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008880u + PPCA_REMAP_OFFSET_2))
/** \brief 84, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL33                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008884u + PPCA_REMAP_OFFSET_2))
/** \brief 88, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL34                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008888u + PPCA_REMAP_OFFSET_2))
/** \brief 8C, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL35                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200888Cu + PPCA_REMAP_OFFSET_2))
/** \brief 90, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL36                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008890u + PPCA_REMAP_OFFSET_2))
/** \brief 94, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL37                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008894u + PPCA_REMAP_OFFSET_2))
/** \brief 98, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL38                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008898u + PPCA_REMAP_OFFSET_2))
/** \brief 9C, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL39                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200889Cu + PPCA_REMAP_OFFSET_2))
/** \brief A0, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL40                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088A0u + PPCA_REMAP_OFFSET_2))
/** \brief A4, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL41                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088A4u + PPCA_REMAP_OFFSET_2))
/** \brief A8, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL42                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088A8u + PPCA_REMAP_OFFSET_2))
/** \brief AC, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL43                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088ACu + PPCA_REMAP_OFFSET_2))
/** \brief B0, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL44                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088B0u + PPCA_REMAP_OFFSET_2))
/** \brief B4, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL45                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088B4u + PPCA_REMAP_OFFSET_2))
/** \brief B8, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL46                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088B8u + PPCA_REMAP_OFFSET_2))
/** \brief BC, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL47                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088BCu + PPCA_REMAP_OFFSET_2))
/** \brief C0, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL48                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088C0u + PPCA_REMAP_OFFSET_2))
/** \brief C4, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL49                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088C4u + PPCA_REMAP_OFFSET_2))
/** \brief C8, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL50                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088C8u + PPCA_REMAP_OFFSET_2))
/** \brief CC, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL51                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088CCu + PPCA_REMAP_OFFSET_2))
/** \brief D0, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL52                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088D0u + PPCA_REMAP_OFFSET_2))
/** \brief D4, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL53                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088D4u + PPCA_REMAP_OFFSET_2))
/** \brief D8, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL54                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088D8u + PPCA_REMAP_OFFSET_2))
/** \brief DC, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL55                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088DCu + PPCA_REMAP_OFFSET_2))
/** \brief E0, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL56                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088E0u + PPCA_REMAP_OFFSET_2))
/** \brief E4, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL57                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088E4u + PPCA_REMAP_OFFSET_2))
/** \brief E8, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL58                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088E8u + PPCA_REMAP_OFFSET_2))
/** \brief EC, Trigger control register */
#define REG_PERI_TR_GR2_TR_CTL59                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x420088ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trigger control register */
#define REG_PERI_TR_GR3_TR_CTL0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008C00u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Trigger control register */
#define REG_PERI_TR_GR3_TR_CTL1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42008C04u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trigger control register */
#define REG_PERI_TR_GR4_TR_CTL0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Trigger control register */
#define REG_PERI_TR_GR4_TR_CTL1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009004u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trigger control register */
#define REG_PERI_TR_GR5_TR_CTL0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009400u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Trigger control register */
#define REG_PERI_TR_GR5_TR_CTL1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009404u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Trigger control register */
#define REG_PERI_TR_GR5_TR_CTL2                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009408u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trigger control register */
#define REG_PERI_TR_GR6_TR_CTL0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009800u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Trigger control register */
#define REG_PERI_TR_GR6_TR_CTL1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009804u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Trigger control register */
#define REG_PERI_TR_GR6_TR_CTL2                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009808u + PPCA_REMAP_OFFSET_2))
/** \brief C, Trigger control register */
#define REG_PERI_TR_GR6_TR_CTL3                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200980Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Trigger control register */
#define REG_PERI_TR_GR6_TR_CTL4                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009810u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Trigger control register */
#define REG_PERI_TR_GR6_TR_CTL5                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009814u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Trigger control register */
#define REG_PERI_TR_GR6_TR_CTL6                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009818u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Trigger control register */
#define REG_PERI_TR_GR6_TR_CTL7                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x4200981Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Trigger control register */
#define REG_PERI_TR_GR6_TR_CTL8                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009820u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Trigger control register */
#define REG_PERI_TR_GR6_TR_CTL9                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009824u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C00u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C04u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL2                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C08u + PPCA_REMAP_OFFSET_2))
/** \brief C, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL3                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C0Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL4                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C10u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL5                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C14u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL6                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C18u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL7                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C1Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL8                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C20u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL9                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C24u + PPCA_REMAP_OFFSET_2))
/** \brief 28, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL10                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C28u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL11                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C2Cu + PPCA_REMAP_OFFSET_2))
/** \brief 30, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL12                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C30u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL13                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C34u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL14                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C38u + PPCA_REMAP_OFFSET_2))
/** \brief 3C, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL15                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C3Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL16                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C40u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL17                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C44u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL18                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C48u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL19                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C4Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL20                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C50u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL21                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C54u + PPCA_REMAP_OFFSET_2))
/** \brief 58, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL22                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C58u + PPCA_REMAP_OFFSET_2))
/** \brief 5C, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL23                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C5Cu + PPCA_REMAP_OFFSET_2))
/** \brief 60, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL24                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C60u + PPCA_REMAP_OFFSET_2))
/** \brief 64, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL25                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C64u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL26                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C68u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL27                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C6Cu + PPCA_REMAP_OFFSET_2))
/** \brief 70, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL28                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C70u + PPCA_REMAP_OFFSET_2))
/** \brief 74, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL29                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C74u + PPCA_REMAP_OFFSET_2))
/** \brief 78, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL30                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C78u + PPCA_REMAP_OFFSET_2))
/** \brief 7C, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL31                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C7Cu + PPCA_REMAP_OFFSET_2))
/** \brief 80, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL32                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C80u + PPCA_REMAP_OFFSET_2))
/** \brief 84, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL33                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C84u + PPCA_REMAP_OFFSET_2))
/** \brief 88, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL34                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C88u + PPCA_REMAP_OFFSET_2))
/** \brief 8C, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL35                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C8Cu + PPCA_REMAP_OFFSET_2))
/** \brief 90, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL36                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C90u + PPCA_REMAP_OFFSET_2))
/** \brief 94, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL37                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C94u + PPCA_REMAP_OFFSET_2))
/** \brief 98, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL38                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C98u + PPCA_REMAP_OFFSET_2))
/** \brief 9C, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL39                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009C9Cu + PPCA_REMAP_OFFSET_2))
/** \brief A0, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL40                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CA0u + PPCA_REMAP_OFFSET_2))
/** \brief A4, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL41                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CA4u + PPCA_REMAP_OFFSET_2))
/** \brief A8, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL42                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CA8u + PPCA_REMAP_OFFSET_2))
/** \brief AC, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL43                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CACu + PPCA_REMAP_OFFSET_2))
/** \brief B0, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL44                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CB0u + PPCA_REMAP_OFFSET_2))
/** \brief B4, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL45                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CB4u + PPCA_REMAP_OFFSET_2))
/** \brief B8, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL46                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CB8u + PPCA_REMAP_OFFSET_2))
/** \brief BC, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL47                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CBCu + PPCA_REMAP_OFFSET_2))
/** \brief C0, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL48                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CC0u + PPCA_REMAP_OFFSET_2))
/** \brief C4, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL49                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CC4u + PPCA_REMAP_OFFSET_2))
/** \brief C8, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL50                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CC8u + PPCA_REMAP_OFFSET_2))
/** \brief CC, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL51                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CCCu + PPCA_REMAP_OFFSET_2))
/** \brief D0, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL52                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CD0u + PPCA_REMAP_OFFSET_2))
/** \brief D4, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL53                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CD4u + PPCA_REMAP_OFFSET_2))
/** \brief D8, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL54                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CD8u + PPCA_REMAP_OFFSET_2))
/** \brief DC, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL55                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CDCu + PPCA_REMAP_OFFSET_2))
/** \brief E0, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL56                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CE0u + PPCA_REMAP_OFFSET_2))
/** \brief E4, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL57                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CE4u + PPCA_REMAP_OFFSET_2))
/** \brief E8, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL58                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CE8u + PPCA_REMAP_OFFSET_2))
/** \brief EC, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL59                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CECu + PPCA_REMAP_OFFSET_2))
/** \brief F0, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL60                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CF0u + PPCA_REMAP_OFFSET_2))
/** \brief F4, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL61                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CF4u + PPCA_REMAP_OFFSET_2))
/** \brief F8, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL62                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CF8u + PPCA_REMAP_OFFSET_2))
/** \brief FC, Trigger control register */
#define REG_PERI_TR_GR7_TR_CTL63                /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_GR_TR_CTL*)(0x42009CFCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trigger control register */
#define REG_PERI_TR_1TO1_GR0_TR_CTL0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_1TO1_GR_TR_CTL*)(0x4200C000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Trigger control register */
#define REG_PERI_TR_1TO1_GR0_TR_CTL1            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_TR_1TO1_GR_TR_CTL*)(0x4200C004u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPERI_REG_H_ */
