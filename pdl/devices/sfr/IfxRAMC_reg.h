/***************************************************************************//**
* \file IfxRAMC_reg.h
*
* \brief
* RAMC address
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
* \defgroup IfxSfr_RAMC_Registers_Cfg RAMC address
* \ingroup IfxSfr_RAMC_Registers
*
*******************************************************************************/

#ifndef _IFXRAMC_REG_H_
#define _IFXRAMC_REG_H_ 1

/******************************************************************************/
#include "IfxRAMC_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_RAMC_Registers_Cfg_BaseAddress
 * \{  */

/** \brief RAMC object */
#define MODULE_RAMC0                            /*lint --e(923, 9078)*/ ((*(Ifx_RAMC*)(0x42110000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_RAMC1                            /*lint --e(923, 9078)*/ ((*(Ifx_RAMC*)(0x42120000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_RAMC0_MPC0                       /*lint --e(923, 9078)*/ ((*(Ifx_RAMC_MPC*)(0x42114000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_RAMC1_MPC0                       /*lint --e(923, 9078)*/ ((*(Ifx_RAMC_MPC*)(0x42124000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_RAMC_Registers_Cfg_RAMC
 * \{  */
/** \brief 0, Control */
#define REG_RAMC0_CTL                           /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_CTL*)(0x42110000u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Status */
#define REG_RAMC0_STATUS                        /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_STATUS*)(0x42110008u + PPCA_REMAP_OFFSET_2))
/** \brief 20, ECC control */
#define REG_RAMC0_ECC_CTL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_ECC_CTL*)(0x42110020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, ECC status 0 */
#define REG_RAMC0_ECC_STATUS0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_ECC_STATUS0*)(0x42110024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, ECC status 1 */
#define REG_RAMC0_ECC_STATUS1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_ECC_STATUS1*)(0x42110028u + PPCA_REMAP_OFFSET_2))
/** \brief 104, ECC match */
#define REG_RAMC0_ECC_MATCH                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_ECC_MATCH*)(0x42110104u + PPCA_REMAP_OFFSET_2))
/** \brief 200, SRAM power partition power control */
#define REG_RAMC0_PWR_MACRO_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PWR_MACRO_CTL*)(0x42110200u + PPCA_REMAP_OFFSET_2))
/** \brief 240, SRAM power partition power control Lock */
#define REG_RAMC0_PWR_MACRO_CTL_LOCK            /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PWR_MACRO_CTL_LOCK*)(0x42110240u + PPCA_REMAP_OFFSET_2))
/** \brief 280, SRAM power switch power up & sequence delay */
#define REG_RAMC0_PWR_DELAY_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PWR_DELAY_CTL*)(0x42110280u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
#define REG_RAMC0_MPC0_CFG                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_CFG*)(0x42114000u + PPCA_REMAP_OFFSET_2))
/** \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
#define REG_RAMC0_MPC0_CTRL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_CTRL*)(0x42114100u + PPCA_REMAP_OFFSET_2))
/** \brief 104, Max value of block-based index register */
#define REG_RAMC0_MPC0_BLK_MAX                  /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_BLK_MAX*)(0x42114104u + PPCA_REMAP_OFFSET_2))
/** \brief 108, Block size & initialization in progress */
#define REG_RAMC0_MPC0_BLK_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_BLK_CFG*)(0x42114108u + PPCA_REMAP_OFFSET_2))
/** \brief 10C, Index of 32-block group accessed through BLK_LUT (Separate IDX for each PC depending on access_pc) */
#define REG_RAMC0_MPC0_BLK_IDX                  /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_BLK_IDX*)(0x4211410Cu + PPCA_REMAP_OFFSET_2))
/** \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
#define REG_RAMC0_MPC0_BLK_LUT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_BLK_LUT*)(0x42114110u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Control register with lock bit and auto-increment only */
#define REG_RAMC0_MPC0_ROT_CTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_CTRL*)(0x42114200u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Max value of block-based index register for ROT */
#define REG_RAMC0_MPC0_ROT_BLK_MAX              /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_BLK_MAX*)(0x42114208u + PPCA_REMAP_OFFSET_2))
/** \brief 20C, Same as BLK_CFG */
#define REG_RAMC0_MPC0_ROT_BLK_CFG              /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_BLK_CFG*)(0x4211420Cu + PPCA_REMAP_OFFSET_2))
/** \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_* */
#define REG_RAMC0_MPC0_ROT_BLK_IDX              /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_BLK_IDX*)(0x42114210u + PPCA_REMAP_OFFSET_2))
/** \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT */
#define REG_RAMC0_MPC0_ROT_BLK_PC               /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_BLK_PC*)(0x42114214u + PPCA_REMAP_OFFSET_2))
/** \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
#define REG_RAMC0_MPC0_ROT_BLK_LUT              /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_BLK_LUT*)(0x42114218u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Control */
#define REG_RAMC1_CTL                           /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_CTL*)(0x42120000u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Status */
#define REG_RAMC1_STATUS                        /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_STATUS*)(0x42120008u + PPCA_REMAP_OFFSET_2))
/** \brief 20, ECC control */
#define REG_RAMC1_ECC_CTL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_ECC_CTL*)(0x42120020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, ECC status 0 */
#define REG_RAMC1_ECC_STATUS0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_ECC_STATUS0*)(0x42120024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, ECC status 1 */
#define REG_RAMC1_ECC_STATUS1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_ECC_STATUS1*)(0x42120028u + PPCA_REMAP_OFFSET_2))
/** \brief 104, ECC match */
#define REG_RAMC1_ECC_MATCH                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_ECC_MATCH*)(0x42120104u + PPCA_REMAP_OFFSET_2))
/** \brief 200, SRAM power partition power control */
#define REG_RAMC1_PWR_MACRO_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PWR_MACRO_CTL*)(0x42120200u + PPCA_REMAP_OFFSET_2))
/** \brief 240, SRAM power partition power control Lock */
#define REG_RAMC1_PWR_MACRO_CTL_LOCK            /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PWR_MACRO_CTL_LOCK*)(0x42120240u + PPCA_REMAP_OFFSET_2))
/** \brief 280, SRAM power switch power up & sequence delay */
#define REG_RAMC1_PWR_DELAY_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_PWR_DELAY_CTL*)(0x42120280u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
#define REG_RAMC1_MPC0_CFG                      /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_CFG*)(0x42124000u + PPCA_REMAP_OFFSET_2))
/** \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
#define REG_RAMC1_MPC0_CTRL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_CTRL*)(0x42124100u + PPCA_REMAP_OFFSET_2))
/** \brief 104, Max value of block-based index register */
#define REG_RAMC1_MPC0_BLK_MAX                  /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_BLK_MAX*)(0x42124104u + PPCA_REMAP_OFFSET_2))
/** \brief 108, Block size & initialization in progress */
#define REG_RAMC1_MPC0_BLK_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_BLK_CFG*)(0x42124108u + PPCA_REMAP_OFFSET_2))
/** \brief 10C, Index of 32-block group accessed through BLK_LUT (Separate IDX for each PC depending on access_pc) */
#define REG_RAMC1_MPC0_BLK_IDX                  /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_BLK_IDX*)(0x4212410Cu + PPCA_REMAP_OFFSET_2))
/** \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
#define REG_RAMC1_MPC0_BLK_LUT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_BLK_LUT*)(0x42124110u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Control register with lock bit and auto-increment only */
#define REG_RAMC1_MPC0_ROT_CTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_CTRL*)(0x42124200u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Max value of block-based index register for ROT */
#define REG_RAMC1_MPC0_ROT_BLK_MAX              /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_BLK_MAX*)(0x42124208u + PPCA_REMAP_OFFSET_2))
/** \brief 20C, Same as BLK_CFG */
#define REG_RAMC1_MPC0_ROT_BLK_CFG              /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_BLK_CFG*)(0x4212420Cu + PPCA_REMAP_OFFSET_2))
/** \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_* */
#define REG_RAMC1_MPC0_ROT_BLK_IDX              /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_BLK_IDX*)(0x42124210u + PPCA_REMAP_OFFSET_2))
/** \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT */
#define REG_RAMC1_MPC0_ROT_BLK_PC               /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_BLK_PC*)(0x42124214u + PPCA_REMAP_OFFSET_2))
/** \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
#define REG_RAMC1_MPC0_ROT_BLK_LUT              /*lint --e(923, 9078)*/ (*(volatile Ifx_RAMC_MPC_ROT_BLK_LUT*)(0x42124218u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXRAMC_REG_H_ */
