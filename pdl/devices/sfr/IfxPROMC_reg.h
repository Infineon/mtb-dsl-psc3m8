/***************************************************************************//**
* \file IfxPROMC_reg.h
*
* \brief
* PROMC address
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
* \defgroup IfxSfr_PROMC_Registers_Cfg PROMC address
* \ingroup IfxSfr_PROMC_Registers
*
*******************************************************************************/

#ifndef _IFXPROMC_REG_H_
#define _IFXPROMC_REG_H_ 1

/******************************************************************************/
#include "IfxPROMC_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_PROMC_Registers_Cfg_BaseAddress
 * \{  */

/** \brief PROMC object */
#define MODULE_PROMC                            /*lint --e(923, 9078)*/ ((*(Ifx_PROMC*)(0x42140000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PROMC_MPC0                       /*lint --e(923, 9078)*/ ((*(Ifx_PROMC_MPC*)(0x42141000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PROMC_Registers_Cfg_PROMC
 * \{  */
/** \brief 0, Control */
#define REG_PROMC_CTL                           /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_CTL*)(0x42140000u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
#define REG_PROMC_MPC0_CFG                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_CFG*)(0x42141000u + PPCA_REMAP_OFFSET_2))
/** \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
#define REG_PROMC_MPC0_CTRL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_CTRL*)(0x42141100u + PPCA_REMAP_OFFSET_2))
/** \brief 104, Max value of block-based index register */
#define REG_PROMC_MPC0_BLK_MAX                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_BLK_MAX*)(0x42141104u + PPCA_REMAP_OFFSET_2))
/** \brief 108, Block size & initialization in progress */
#define REG_PROMC_MPC0_BLK_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_BLK_CFG*)(0x42141108u + PPCA_REMAP_OFFSET_2))
/** \brief 10C, Index of 32-block group accessed through BLK_LUT (Separate IDX for each PC depending on access_pc) */
#define REG_PROMC_MPC0_BLK_IDX                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_BLK_IDX*)(0x4214110Cu + PPCA_REMAP_OFFSET_2))
/** \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
#define REG_PROMC_MPC0_BLK_LUT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_BLK_LUT*)(0x42141110u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Control register with lock bit and auto-increment only */
#define REG_PROMC_MPC0_ROT_CTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_ROT_CTRL*)(0x42141200u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Max value of block-based index register for ROT */
#define REG_PROMC_MPC0_ROT_BLK_MAX              /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_ROT_BLK_MAX*)(0x42141208u + PPCA_REMAP_OFFSET_2))
/** \brief 20C, Same as BLK_CFG */
#define REG_PROMC_MPC0_ROT_BLK_CFG              /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_ROT_BLK_CFG*)(0x4214120Cu + PPCA_REMAP_OFFSET_2))
/** \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_* */
#define REG_PROMC_MPC0_ROT_BLK_IDX              /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_ROT_BLK_IDX*)(0x42141210u + PPCA_REMAP_OFFSET_2))
/** \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT */
#define REG_PROMC_MPC0_ROT_BLK_PC               /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_ROT_BLK_PC*)(0x42141214u + PPCA_REMAP_OFFSET_2))
/** \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
#define REG_PROMC_MPC0_ROT_BLK_LUT              /*lint --e(923, 9078)*/ (*(volatile Ifx_PROMC_MPC_ROT_BLK_LUT*)(0x42141218u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPROMC_REG_H_ */
