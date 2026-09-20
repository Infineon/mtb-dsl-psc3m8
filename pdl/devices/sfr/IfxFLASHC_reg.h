/***************************************************************************//**
* \file IfxFLASHC_reg.h
*
* \brief
* FLASHC address
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
* \defgroup IfxSfr_FLASHC_Registers_Cfg FLASHC address
* \ingroup IfxSfr_FLASHC_Registers
*
*******************************************************************************/

#ifndef _IFXFLASHC_REG_H_
#define _IFXFLASHC_REG_H_ 1

/******************************************************************************/
#include "IfxFLASHC_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_FLASHC_Registers_Cfg_BaseAddress
 * \{  */

/** \brief FLASHC object */
#define MODULE_FLASHC                           /*lint --e(923, 9078)*/ ((*(Ifx_FLASHC*)(0x42150000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_FLASHC_MPC0                      /*lint --e(923, 9078)*/ ((*(Ifx_FLASHC_MPC*)(0x42151000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_FLASHC_FM_CTL                    /*lint --e(923, 9078)*/ ((*(Ifx_FLASHC_FM_CTL*)(0x42152000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_FLASHC_Registers_Cfg_FLASHC
 * \{  */
/** \brief 0, Flash control */
#define REG_FLASHC_FLASH_CTL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FLASH_CTL*)(0x42150000u + PPCA_REMAP_OFFSET_2))
/** \brief 104, # of sector of a FM */
#define REG_FLASHC_FLASH_SECTOR_M               /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FLASH_SECTOR_M*)(0x42150104u + PPCA_REMAP_OFFSET_2))
/** \brief 108, Size of MAIN in 8KB block for each pair of sectors */
#define REG_FLASHC_FLASH_MAIN_N                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FLASH_MAIN_N*)(0x42150108u + PPCA_REMAP_OFFSET_2))
/** \brief 10C, Size of WORK in 8KB block for each pair of sectors */
#define REG_FLASHC_FLASH_WORK_Z                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FLASH_WORK_Z*)(0x4215010Cu + PPCA_REMAP_OFFSET_2))
/** \brief 110, Size of SLFASH in 8KB block in Sector 1 */
#define REG_FLASHC_FLASH_SFLASH_Y               /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FLASH_SFLASH_Y*)(0x42150110u + PPCA_REMAP_OFFSET_2))
/** \brief 114, Size of refresh rows for each sector */
#define REG_FLASHC_FLASH_REFRESH_ROW            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FLASH_REFRESH_ROW*)(0x42150114u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Command */
#define REG_FLASHC_FLASH_CMD                    /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FLASH_CMD*)(0x42150200u + PPCA_REMAP_OFFSET_2))
/** \brief 204, Flash Controller Lock Register */
#define REG_FLASHC_FLASH_LOCK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FLASH_LOCK*)(0x42150204u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Flash power control */
#define REG_FLASHC_FLASH_PWR_CTL                /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FLASH_PWR_CTL*)(0x42150208u + PPCA_REMAP_OFFSET_2))
/** \brief 20C, Shadow bit of FLASH_CTL.ENFORCE_PC_LOCK */
#define REG_FLASHC_ENFORCE_PC_LOCK_SHADOW       /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_ENFORCE_PC_LOCK_SHADOW*)(0x4215020Cu + PPCA_REMAP_OFFSET_2))
/** \brief 800, ECC injection enable on read */
#define REG_FLASHC_ECC_INJ_EN                   /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_ECC_INJ_EN*)(0x42150800u + PPCA_REMAP_OFFSET_2))
/** \brief 804, ECC injection control */
#define REG_FLASHC_ECC_INJ_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_ECC_INJ_CTL*)(0x42150804u + PPCA_REMAP_OFFSET_2))
/** \brief 808, Interrupt threshold for number of ECC correctable error */
#define REG_FLASHC_ECC_LOGIR                    /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_ECC_LOGIR*)(0x42150808u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
#define REG_FLASHC_MPC0_CFG                     /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_CFG*)(0x42151000u + PPCA_REMAP_OFFSET_2))
/** \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
#define REG_FLASHC_MPC0_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_CTRL*)(0x42151100u + PPCA_REMAP_OFFSET_2))
/** \brief 104, Max value of block-based index register */
#define REG_FLASHC_MPC0_BLK_MAX                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_BLK_MAX*)(0x42151104u + PPCA_REMAP_OFFSET_2))
/** \brief 108, Block size & initialization in progress */
#define REG_FLASHC_MPC0_BLK_CFG                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_BLK_CFG*)(0x42151108u + PPCA_REMAP_OFFSET_2))
/** \brief 10C, Index of 32-block group accessed through BLK_LUT (Separate IDX for each PC depending on access_pc) */
#define REG_FLASHC_MPC0_BLK_IDX                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_BLK_IDX*)(0x4215110Cu + PPCA_REMAP_OFFSET_2))
/** \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
#define REG_FLASHC_MPC0_BLK_LUT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_BLK_LUT*)(0x42151110u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Control register with lock bit and auto-increment only */
#define REG_FLASHC_MPC0_ROT_CTRL                /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_ROT_CTRL*)(0x42151200u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Max value of block-based index register for ROT */
#define REG_FLASHC_MPC0_ROT_BLK_MAX             /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_ROT_BLK_MAX*)(0x42151208u + PPCA_REMAP_OFFSET_2))
/** \brief 20C, Same as BLK_CFG */
#define REG_FLASHC_MPC0_ROT_BLK_CFG             /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_ROT_BLK_CFG*)(0x4215120Cu + PPCA_REMAP_OFFSET_2))
/** \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_* */
#define REG_FLASHC_MPC0_ROT_BLK_IDX             /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_ROT_BLK_IDX*)(0x42151210u + PPCA_REMAP_OFFSET_2))
/** \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT */
#define REG_FLASHC_MPC0_ROT_BLK_PC              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_ROT_BLK_PC*)(0x42151214u + PPCA_REMAP_OFFSET_2))
/** \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
#define REG_FLASHC_MPC0_ROT_BLK_LUT             /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_MPC_ROT_BLK_LUT*)(0x42151218u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Redundancy Control normal sectors 0,1 */
#define REG_FLASHC_FM_CTL_RED_CTL01             /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_RED_CTL01*)(0x42152040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Redundancy Control normal sectors 2,3 */
#define REG_FLASHC_FM_CTL_RED_CTL23             /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_RED_CTL23*)(0x42152044u + PPCA_REMAP_OFFSET_2))
/** \brief 800, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA0           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152800u + PPCA_REMAP_OFFSET_2))
/** \brief 804, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA1           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152804u + PPCA_REMAP_OFFSET_2))
/** \brief 808, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA2           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152808u + PPCA_REMAP_OFFSET_2))
/** \brief 80C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA3           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215280Cu + PPCA_REMAP_OFFSET_2))
/** \brief 810, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA4           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152810u + PPCA_REMAP_OFFSET_2))
/** \brief 814, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA5           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152814u + PPCA_REMAP_OFFSET_2))
/** \brief 818, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA6           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152818u + PPCA_REMAP_OFFSET_2))
/** \brief 81C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA7           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215281Cu + PPCA_REMAP_OFFSET_2))
/** \brief 820, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA8           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152820u + PPCA_REMAP_OFFSET_2))
/** \brief 824, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA9           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152824u + PPCA_REMAP_OFFSET_2))
/** \brief 828, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA10          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152828u + PPCA_REMAP_OFFSET_2))
/** \brief 82C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA11          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215282Cu + PPCA_REMAP_OFFSET_2))
/** \brief 830, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA12          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152830u + PPCA_REMAP_OFFSET_2))
/** \brief 834, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA13          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152834u + PPCA_REMAP_OFFSET_2))
/** \brief 838, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA14          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152838u + PPCA_REMAP_OFFSET_2))
/** \brief 83C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA15          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215283Cu + PPCA_REMAP_OFFSET_2))
/** \brief 840, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA16          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152840u + PPCA_REMAP_OFFSET_2))
/** \brief 844, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA17          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152844u + PPCA_REMAP_OFFSET_2))
/** \brief 848, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA18          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152848u + PPCA_REMAP_OFFSET_2))
/** \brief 84C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA19          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215284Cu + PPCA_REMAP_OFFSET_2))
/** \brief 850, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA20          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152850u + PPCA_REMAP_OFFSET_2))
/** \brief 854, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA21          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152854u + PPCA_REMAP_OFFSET_2))
/** \brief 858, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA22          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152858u + PPCA_REMAP_OFFSET_2))
/** \brief 85C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA23          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215285Cu + PPCA_REMAP_OFFSET_2))
/** \brief 860, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA24          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152860u + PPCA_REMAP_OFFSET_2))
/** \brief 864, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA25          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152864u + PPCA_REMAP_OFFSET_2))
/** \brief 868, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA26          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152868u + PPCA_REMAP_OFFSET_2))
/** \brief 86C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA27          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215286Cu + PPCA_REMAP_OFFSET_2))
/** \brief 870, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA28          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152870u + PPCA_REMAP_OFFSET_2))
/** \brief 874, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA29          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152874u + PPCA_REMAP_OFFSET_2))
/** \brief 878, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA30          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152878u + PPCA_REMAP_OFFSET_2))
/** \brief 87C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA31          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215287Cu + PPCA_REMAP_OFFSET_2))
/** \brief 880, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA32          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152880u + PPCA_REMAP_OFFSET_2))
/** \brief 884, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA33          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152884u + PPCA_REMAP_OFFSET_2))
/** \brief 888, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA34          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152888u + PPCA_REMAP_OFFSET_2))
/** \brief 88C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA35          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215288Cu + PPCA_REMAP_OFFSET_2))
/** \brief 890, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA36          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152890u + PPCA_REMAP_OFFSET_2))
/** \brief 894, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA37          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152894u + PPCA_REMAP_OFFSET_2))
/** \brief 898, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA38          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152898u + PPCA_REMAP_OFFSET_2))
/** \brief 89C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA39          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215289Cu + PPCA_REMAP_OFFSET_2))
/** \brief 8A0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA40          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528A0u + PPCA_REMAP_OFFSET_2))
/** \brief 8A4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA41          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528A4u + PPCA_REMAP_OFFSET_2))
/** \brief 8A8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA42          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528A8u + PPCA_REMAP_OFFSET_2))
/** \brief 8AC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA43          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528ACu + PPCA_REMAP_OFFSET_2))
/** \brief 8B0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA44          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528B0u + PPCA_REMAP_OFFSET_2))
/** \brief 8B4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA45          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528B4u + PPCA_REMAP_OFFSET_2))
/** \brief 8B8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA46          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528B8u + PPCA_REMAP_OFFSET_2))
/** \brief 8BC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA47          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528BCu + PPCA_REMAP_OFFSET_2))
/** \brief 8C0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA48          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528C0u + PPCA_REMAP_OFFSET_2))
/** \brief 8C4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA49          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528C4u + PPCA_REMAP_OFFSET_2))
/** \brief 8C8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA50          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528C8u + PPCA_REMAP_OFFSET_2))
/** \brief 8CC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA51          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528CCu + PPCA_REMAP_OFFSET_2))
/** \brief 8D0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA52          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528D0u + PPCA_REMAP_OFFSET_2))
/** \brief 8D4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA53          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528D4u + PPCA_REMAP_OFFSET_2))
/** \brief 8D8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA54          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528D8u + PPCA_REMAP_OFFSET_2))
/** \brief 8DC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA55          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528DCu + PPCA_REMAP_OFFSET_2))
/** \brief 8E0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA56          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528E0u + PPCA_REMAP_OFFSET_2))
/** \brief 8E4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA57          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528E4u + PPCA_REMAP_OFFSET_2))
/** \brief 8E8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA58          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528E8u + PPCA_REMAP_OFFSET_2))
/** \brief 8EC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA59          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528ECu + PPCA_REMAP_OFFSET_2))
/** \brief 8F0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA60          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528F0u + PPCA_REMAP_OFFSET_2))
/** \brief 8F4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA61          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528F4u + PPCA_REMAP_OFFSET_2))
/** \brief 8F8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA62          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528F8u + PPCA_REMAP_OFFSET_2))
/** \brief 8FC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA63          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421528FCu + PPCA_REMAP_OFFSET_2))
/** \brief 900, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA64          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152900u + PPCA_REMAP_OFFSET_2))
/** \brief 904, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA65          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152904u + PPCA_REMAP_OFFSET_2))
/** \brief 908, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA66          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152908u + PPCA_REMAP_OFFSET_2))
/** \brief 90C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA67          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215290Cu + PPCA_REMAP_OFFSET_2))
/** \brief 910, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA68          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152910u + PPCA_REMAP_OFFSET_2))
/** \brief 914, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA69          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152914u + PPCA_REMAP_OFFSET_2))
/** \brief 918, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA70          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152918u + PPCA_REMAP_OFFSET_2))
/** \brief 91C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA71          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215291Cu + PPCA_REMAP_OFFSET_2))
/** \brief 920, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA72          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152920u + PPCA_REMAP_OFFSET_2))
/** \brief 924, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA73          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152924u + PPCA_REMAP_OFFSET_2))
/** \brief 928, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA74          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152928u + PPCA_REMAP_OFFSET_2))
/** \brief 92C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA75          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215292Cu + PPCA_REMAP_OFFSET_2))
/** \brief 930, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA76          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152930u + PPCA_REMAP_OFFSET_2))
/** \brief 934, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA77          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152934u + PPCA_REMAP_OFFSET_2))
/** \brief 938, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA78          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152938u + PPCA_REMAP_OFFSET_2))
/** \brief 93C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA79          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215293Cu + PPCA_REMAP_OFFSET_2))
/** \brief 940, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA80          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152940u + PPCA_REMAP_OFFSET_2))
/** \brief 944, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA81          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152944u + PPCA_REMAP_OFFSET_2))
/** \brief 948, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA82          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152948u + PPCA_REMAP_OFFSET_2))
/** \brief 94C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA83          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215294Cu + PPCA_REMAP_OFFSET_2))
/** \brief 950, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA84          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152950u + PPCA_REMAP_OFFSET_2))
/** \brief 954, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA85          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152954u + PPCA_REMAP_OFFSET_2))
/** \brief 958, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA86          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152958u + PPCA_REMAP_OFFSET_2))
/** \brief 95C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA87          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215295Cu + PPCA_REMAP_OFFSET_2))
/** \brief 960, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA88          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152960u + PPCA_REMAP_OFFSET_2))
/** \brief 964, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA89          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152964u + PPCA_REMAP_OFFSET_2))
/** \brief 968, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA90          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152968u + PPCA_REMAP_OFFSET_2))
/** \brief 96C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA91          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215296Cu + PPCA_REMAP_OFFSET_2))
/** \brief 970, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA92          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152970u + PPCA_REMAP_OFFSET_2))
/** \brief 974, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA93          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152974u + PPCA_REMAP_OFFSET_2))
/** \brief 978, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA94          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152978u + PPCA_REMAP_OFFSET_2))
/** \brief 97C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA95          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215297Cu + PPCA_REMAP_OFFSET_2))
/** \brief 980, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA96          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152980u + PPCA_REMAP_OFFSET_2))
/** \brief 984, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA97          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152984u + PPCA_REMAP_OFFSET_2))
/** \brief 988, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA98          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152988u + PPCA_REMAP_OFFSET_2))
/** \brief 98C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA99          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215298Cu + PPCA_REMAP_OFFSET_2))
/** \brief 990, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA100         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152990u + PPCA_REMAP_OFFSET_2))
/** \brief 994, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA101         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152994u + PPCA_REMAP_OFFSET_2))
/** \brief 998, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA102         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152998u + PPCA_REMAP_OFFSET_2))
/** \brief 99C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA103         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x4215299Cu + PPCA_REMAP_OFFSET_2))
/** \brief 9A0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA104         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529A0u + PPCA_REMAP_OFFSET_2))
/** \brief 9A4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA105         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529A4u + PPCA_REMAP_OFFSET_2))
/** \brief 9A8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA106         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529A8u + PPCA_REMAP_OFFSET_2))
/** \brief 9AC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA107         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529ACu + PPCA_REMAP_OFFSET_2))
/** \brief 9B0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA108         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529B0u + PPCA_REMAP_OFFSET_2))
/** \brief 9B4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA109         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529B4u + PPCA_REMAP_OFFSET_2))
/** \brief 9B8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA110         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529B8u + PPCA_REMAP_OFFSET_2))
/** \brief 9BC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA111         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529BCu + PPCA_REMAP_OFFSET_2))
/** \brief 9C0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA112         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529C0u + PPCA_REMAP_OFFSET_2))
/** \brief 9C4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA113         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529C4u + PPCA_REMAP_OFFSET_2))
/** \brief 9C8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA114         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529C8u + PPCA_REMAP_OFFSET_2))
/** \brief 9CC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA115         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529CCu + PPCA_REMAP_OFFSET_2))
/** \brief 9D0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA116         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529D0u + PPCA_REMAP_OFFSET_2))
/** \brief 9D4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA117         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529D4u + PPCA_REMAP_OFFSET_2))
/** \brief 9D8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA118         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529D8u + PPCA_REMAP_OFFSET_2))
/** \brief 9DC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA119         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529DCu + PPCA_REMAP_OFFSET_2))
/** \brief 9E0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA120         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529E0u + PPCA_REMAP_OFFSET_2))
/** \brief 9E4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA121         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529E4u + PPCA_REMAP_OFFSET_2))
/** \brief 9E8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA122         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529E8u + PPCA_REMAP_OFFSET_2))
/** \brief 9EC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA123         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529ECu + PPCA_REMAP_OFFSET_2))
/** \brief 9F0, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA124         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529F0u + PPCA_REMAP_OFFSET_2))
/** \brief 9F4, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA125         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529F4u + PPCA_REMAP_OFFSET_2))
/** \brief 9F8, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA126         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529F8u + PPCA_REMAP_OFFSET_2))
/** \brief 9FC, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA127         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x421529FCu + PPCA_REMAP_OFFSET_2))
/** \brief A00, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA128         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152A00u + PPCA_REMAP_OFFSET_2))
/** \brief A04, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA129         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152A04u + PPCA_REMAP_OFFSET_2))
/** \brief A08, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA130         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152A08u + PPCA_REMAP_OFFSET_2))
/** \brief A0C, Flash macro Page Latches data */
#define REG_FLASHC_FM_CTL_FM_PL_DATA131         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_DATA*)(0x42152A0Cu + PPCA_REMAP_OFFSET_2))
/** \brief A10, Flash macro control */
#define REG_FLASHC_FM_CTL_FLASH_MACRO_CTL       /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL*)(0x42152A10u + PPCA_REMAP_OFFSET_2))
/** \brief A14, Status */
#define REG_FLASHC_FM_CTL_STATUS                /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_STATUS*)(0x42152A14u + PPCA_REMAP_OFFSET_2))
/** \brief A18, Flash macro address */
#define REG_FLASHC_FM_CTL_FM_ADDR               /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_ADDR*)(0x42152A18u + PPCA_REMAP_OFFSET_2))
/** \brief A1C, Bookmark register - keeps the current FW HV seq */
#define REG_FLASHC_FM_CTL_BOOKMARK              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_BOOKMARK*)(0x42152A1Cu + PPCA_REMAP_OFFSET_2))
/** \brief A20, Regular flash geometry */
#define REG_FLASHC_FM_CTL_GEOMETRY              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_GEOMETRY*)(0x42152A20u + PPCA_REMAP_OFFSET_2))
/** \brief A24, Supervisory flash geometry */
#define REG_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY  /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY*)(0x42152A24u + PPCA_REMAP_OFFSET_2))
/** \brief A28, Analog control 0 */
#define REG_FLASHC_FM_CTL_ANA_CTL0              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_ANA_CTL0*)(0x42152A28u + PPCA_REMAP_OFFSET_2))
/** \brief A2C, Analog control 1 */
#define REG_FLASHC_FM_CTL_ANA_CTL1              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_ANA_CTL1*)(0x42152A2Cu + PPCA_REMAP_OFFSET_2))
/** \brief A30, Flash macro write page latches all */
#define REG_FLASHC_FM_CTL_FM_PL_WRDATA_ALL      /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_WRDATA_ALL*)(0x42152A30u + PPCA_REMAP_OFFSET_2))
/** \brief A34, Address bit to point to scratch area */
#define REG_FLASHC_FM_CTL_FM_REFRESH_ADDR       /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR*)(0x42152A34u + PPCA_REMAP_OFFSET_2))
/** \brief A38, R-grant delay for erase */
#define REG_FLASHC_FM_CTL_RGRANT_DELAY_ERS      /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS*)(0x42152A38u + PPCA_REMAP_OFFSET_2))
/** \brief A3C, R-grant delay scale for erase */
#define REG_FLASHC_FM_CTL_RGRANT_SCALE_ERS      /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS*)(0x42152A3Cu + PPCA_REMAP_OFFSET_2))
/** \brief A40, HV Pulse Delay for seq2 post & seq3 */
#define REG_FLASHC_FM_CTL_PW_SEQ23              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_PW_SEQ23*)(0x42152A40u + PPCA_REMAP_OFFSET_2))
/** \brief A44, HV Pulse Delay for seq 1&2 pre */
#define REG_FLASHC_FM_CTL_PW_SEQ12              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_PW_SEQ12*)(0x42152A44u + PPCA_REMAP_OFFSET_2))
/** \brief A48, Wait State control */
#define REG_FLASHC_FM_CTL_WAIT_CTL              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_WAIT_CTL*)(0x42152A48u + PPCA_REMAP_OFFSET_2))
/** \brief A4C, R-grant delay for program */
#define REG_FLASHC_FM_CTL_RGRANT_DELAY_PRG      /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG*)(0x42152A4Cu + PPCA_REMAP_OFFSET_2))
/** \brief A50, Timer prescaler (clk_t to timer clock frequency divider) */
#define REG_FLASHC_FM_CTL_TIMER_CLK_CTL         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL*)(0x42152A50u + PPCA_REMAP_OFFSET_2))
/** \brief A54, Timer control */
#define REG_FLASHC_FM_CTL_TIMER_CTL             /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_TIMER_CTL*)(0x42152A54u + PPCA_REMAP_OFFSET_2))
/** \brief A58, MPCON clock */
#define REG_FLASHC_FM_CTL_ACLK_CTL              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_ACLK_CTL*)(0x42152A58u + PPCA_REMAP_OFFSET_2))
/** \brief A5C, Interrupt */
#define REG_FLASHC_FM_CTL_INTR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_INTR*)(0x42152A5Cu + PPCA_REMAP_OFFSET_2))
/** \brief A60, Interrupt set */
#define REG_FLASHC_FM_CTL_INTR_SET              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_INTR_SET*)(0x42152A60u + PPCA_REMAP_OFFSET_2))
/** \brief A64, Interrupt mask */
#define REG_FLASHC_FM_CTL_INTR_MASK             /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_INTR_MASK*)(0x42152A64u + PPCA_REMAP_OFFSET_2))
/** \brief A68, Interrupt masked */
#define REG_FLASHC_FM_CTL_INTR_MASKED           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_INTR_MASKED*)(0x42152A68u + PPCA_REMAP_OFFSET_2))
/** \brief A6C, Cal control - VCT, VBG, CDAC, IPREF */
#define REG_FLASHC_FM_CTL_CAL_CTL0              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_CAL_CTL0*)(0x42152A6Cu + PPCA_REMAP_OFFSET_2))
/** \brief A70, Cal control - ICREF, IPREF */
#define REG_FLASHC_FM_CTL_CAL_CTL1              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_CAL_CTL1*)(0x42152A70u + PPCA_REMAP_OFFSET_2))
/** \brief A74, Cal control - IDAC, IBS_CTL, LAT_DIS */
#define REG_FLASHC_FM_CTL_CAL_CTL2              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_CAL_CTL2*)(0x42152A74u + PPCA_REMAP_OFFSET_2))
/** \brief A78, Cal control - OSC trims, FDIV, REG_ACT, TURBO, LP_ULP_SW */
#define REG_FLASHC_FM_CTL_CAL_CTL3              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_CAL_CTL3*)(0x42152A78u + PPCA_REMAP_OFFSET_2))
/** \brief A7C, Cal control - VLIM, IDAC, SDAC, ITIM ULP trims */
#define REG_FLASHC_FM_CTL_CAL_CTL4              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_CAL_CTL4*)(0x42152A7Cu + PPCA_REMAP_OFFSET_2))
/** \brief A80, Cal control - VLIM, IDAC, SDAC, ITIM LP trims */
#define REG_FLASHC_FM_CTL_CAL_CTL5              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_CAL_CTL5*)(0x42152A80u + PPCA_REMAP_OFFSET_2))
/** \brief A84, Cal control - SA CTL LP/ULP trims */
#define REG_FLASHC_FM_CTL_CAL_CTL6              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_CAL_CTL6*)(0x42152A84u + PPCA_REMAP_OFFSET_2))
/** \brief A88, Cal control - ERSX8_CLK_SEL, FM_ACTIVE, TURBO_EXT */
#define REG_FLASHC_FM_CTL_CAL_CTL7              /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_CAL_CTL7*)(0x42152A88u + PPCA_REMAP_OFFSET_2))
/** \brief B00, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC0            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B00u + PPCA_REMAP_OFFSET_2))
/** \brief B04, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC1            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B04u + PPCA_REMAP_OFFSET_2))
/** \brief B08, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC2            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B08u + PPCA_REMAP_OFFSET_2))
/** \brief B0C, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC3            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B0Cu + PPCA_REMAP_OFFSET_2))
/** \brief B10, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC4            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B10u + PPCA_REMAP_OFFSET_2))
/** \brief B14, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC5            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B14u + PPCA_REMAP_OFFSET_2))
/** \brief B18, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC6            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B18u + PPCA_REMAP_OFFSET_2))
/** \brief B1C, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC7            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B1Cu + PPCA_REMAP_OFFSET_2))
/** \brief B20, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC8            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B20u + PPCA_REMAP_OFFSET_2))
/** \brief B24, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC9            /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B24u + PPCA_REMAP_OFFSET_2))
/** \brief B28, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC10           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B28u + PPCA_REMAP_OFFSET_2))
/** \brief B2C, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC11           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B2Cu + PPCA_REMAP_OFFSET_2))
/** \brief B30, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC12           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B30u + PPCA_REMAP_OFFSET_2))
/** \brief B34, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC13           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B34u + PPCA_REMAP_OFFSET_2))
/** \brief B38, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC14           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B38u + PPCA_REMAP_OFFSET_2))
/** \brief B3C, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC15           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B3Cu + PPCA_REMAP_OFFSET_2))
/** \brief B40, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC16           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B40u + PPCA_REMAP_OFFSET_2))
/** \brief B44, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC17           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B44u + PPCA_REMAP_OFFSET_2))
/** \brief B48, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC18           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B48u + PPCA_REMAP_OFFSET_2))
/** \brief B4C, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC19           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B4Cu + PPCA_REMAP_OFFSET_2))
/** \brief B50, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC20           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B50u + PPCA_REMAP_OFFSET_2))
/** \brief B54, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC21           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B54u + PPCA_REMAP_OFFSET_2))
/** \brief B58, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC22           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B58u + PPCA_REMAP_OFFSET_2))
/** \brief B5C, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC23           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B5Cu + PPCA_REMAP_OFFSET_2))
/** \brief B60, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC24           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B60u + PPCA_REMAP_OFFSET_2))
/** \brief B64, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC25           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B64u + PPCA_REMAP_OFFSET_2))
/** \brief B68, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC26           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B68u + PPCA_REMAP_OFFSET_2))
/** \brief B6C, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC27           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B6Cu + PPCA_REMAP_OFFSET_2))
/** \brief B70, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC28           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B70u + PPCA_REMAP_OFFSET_2))
/** \brief B74, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC29           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B74u + PPCA_REMAP_OFFSET_2))
/** \brief B78, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC30           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B78u + PPCA_REMAP_OFFSET_2))
/** \brief B7C, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC31           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B7Cu + PPCA_REMAP_OFFSET_2))
/** \brief B80, Flash macro Page Latches ECC */
#define REG_FLASHC_FM_CTL_FM_PL_ECC32           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_PL_ECC*)(0x42152B80u + PPCA_REMAP_OFFSET_2))
/** \brief C00, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA0          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C00u + PPCA_REMAP_OFFSET_2))
/** \brief C04, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA1          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C04u + PPCA_REMAP_OFFSET_2))
/** \brief C08, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA2          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C08u + PPCA_REMAP_OFFSET_2))
/** \brief C0C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA3          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C0Cu + PPCA_REMAP_OFFSET_2))
/** \brief C10, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA4          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C10u + PPCA_REMAP_OFFSET_2))
/** \brief C14, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA5          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C14u + PPCA_REMAP_OFFSET_2))
/** \brief C18, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA6          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C18u + PPCA_REMAP_OFFSET_2))
/** \brief C1C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA7          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C1Cu + PPCA_REMAP_OFFSET_2))
/** \brief C20, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA8          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C20u + PPCA_REMAP_OFFSET_2))
/** \brief C24, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA9          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C24u + PPCA_REMAP_OFFSET_2))
/** \brief C28, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA10         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C28u + PPCA_REMAP_OFFSET_2))
/** \brief C2C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA11         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C2Cu + PPCA_REMAP_OFFSET_2))
/** \brief C30, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA12         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C30u + PPCA_REMAP_OFFSET_2))
/** \brief C34, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA13         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C34u + PPCA_REMAP_OFFSET_2))
/** \brief C38, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA14         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C38u + PPCA_REMAP_OFFSET_2))
/** \brief C3C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA15         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C3Cu + PPCA_REMAP_OFFSET_2))
/** \brief C40, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA16         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C40u + PPCA_REMAP_OFFSET_2))
/** \brief C44, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA17         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C44u + PPCA_REMAP_OFFSET_2))
/** \brief C48, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA18         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C48u + PPCA_REMAP_OFFSET_2))
/** \brief C4C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA19         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C4Cu + PPCA_REMAP_OFFSET_2))
/** \brief C50, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA20         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C50u + PPCA_REMAP_OFFSET_2))
/** \brief C54, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA21         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C54u + PPCA_REMAP_OFFSET_2))
/** \brief C58, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA22         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C58u + PPCA_REMAP_OFFSET_2))
/** \brief C5C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA23         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C5Cu + PPCA_REMAP_OFFSET_2))
/** \brief C60, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA24         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C60u + PPCA_REMAP_OFFSET_2))
/** \brief C64, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA25         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C64u + PPCA_REMAP_OFFSET_2))
/** \brief C68, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA26         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C68u + PPCA_REMAP_OFFSET_2))
/** \brief C6C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA27         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C6Cu + PPCA_REMAP_OFFSET_2))
/** \brief C70, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA28         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C70u + PPCA_REMAP_OFFSET_2))
/** \brief C74, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA29         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C74u + PPCA_REMAP_OFFSET_2))
/** \brief C78, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA30         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C78u + PPCA_REMAP_OFFSET_2))
/** \brief C7C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA31         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C7Cu + PPCA_REMAP_OFFSET_2))
/** \brief C80, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA32         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C80u + PPCA_REMAP_OFFSET_2))
/** \brief C84, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA33         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C84u + PPCA_REMAP_OFFSET_2))
/** \brief C88, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA34         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C88u + PPCA_REMAP_OFFSET_2))
/** \brief C8C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA35         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C8Cu + PPCA_REMAP_OFFSET_2))
/** \brief C90, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA36         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C90u + PPCA_REMAP_OFFSET_2))
/** \brief C94, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA37         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C94u + PPCA_REMAP_OFFSET_2))
/** \brief C98, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA38         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C98u + PPCA_REMAP_OFFSET_2))
/** \brief C9C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA39         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152C9Cu + PPCA_REMAP_OFFSET_2))
/** \brief CA0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA40         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CA0u + PPCA_REMAP_OFFSET_2))
/** \brief CA4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA41         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CA4u + PPCA_REMAP_OFFSET_2))
/** \brief CA8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA42         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CA8u + PPCA_REMAP_OFFSET_2))
/** \brief CAC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA43         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CACu + PPCA_REMAP_OFFSET_2))
/** \brief CB0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA44         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CB0u + PPCA_REMAP_OFFSET_2))
/** \brief CB4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA45         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CB4u + PPCA_REMAP_OFFSET_2))
/** \brief CB8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA46         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CB8u + PPCA_REMAP_OFFSET_2))
/** \brief CBC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA47         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CBCu + PPCA_REMAP_OFFSET_2))
/** \brief CC0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA48         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CC0u + PPCA_REMAP_OFFSET_2))
/** \brief CC4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA49         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CC4u + PPCA_REMAP_OFFSET_2))
/** \brief CC8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA50         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CC8u + PPCA_REMAP_OFFSET_2))
/** \brief CCC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA51         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CCCu + PPCA_REMAP_OFFSET_2))
/** \brief CD0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA52         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CD0u + PPCA_REMAP_OFFSET_2))
/** \brief CD4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA53         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CD4u + PPCA_REMAP_OFFSET_2))
/** \brief CD8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA54         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CD8u + PPCA_REMAP_OFFSET_2))
/** \brief CDC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA55         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CDCu + PPCA_REMAP_OFFSET_2))
/** \brief CE0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA56         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CE0u + PPCA_REMAP_OFFSET_2))
/** \brief CE4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA57         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CE4u + PPCA_REMAP_OFFSET_2))
/** \brief CE8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA58         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CE8u + PPCA_REMAP_OFFSET_2))
/** \brief CEC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA59         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CECu + PPCA_REMAP_OFFSET_2))
/** \brief CF0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA60         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CF0u + PPCA_REMAP_OFFSET_2))
/** \brief CF4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA61         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CF4u + PPCA_REMAP_OFFSET_2))
/** \brief CF8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA62         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CF8u + PPCA_REMAP_OFFSET_2))
/** \brief CFC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA63         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152CFCu + PPCA_REMAP_OFFSET_2))
/** \brief D00, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA64         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D00u + PPCA_REMAP_OFFSET_2))
/** \brief D04, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA65         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D04u + PPCA_REMAP_OFFSET_2))
/** \brief D08, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA66         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D08u + PPCA_REMAP_OFFSET_2))
/** \brief D0C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA67         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D0Cu + PPCA_REMAP_OFFSET_2))
/** \brief D10, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA68         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D10u + PPCA_REMAP_OFFSET_2))
/** \brief D14, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA69         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D14u + PPCA_REMAP_OFFSET_2))
/** \brief D18, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA70         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D18u + PPCA_REMAP_OFFSET_2))
/** \brief D1C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA71         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D1Cu + PPCA_REMAP_OFFSET_2))
/** \brief D20, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA72         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D20u + PPCA_REMAP_OFFSET_2))
/** \brief D24, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA73         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D24u + PPCA_REMAP_OFFSET_2))
/** \brief D28, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA74         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D28u + PPCA_REMAP_OFFSET_2))
/** \brief D2C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA75         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D2Cu + PPCA_REMAP_OFFSET_2))
/** \brief D30, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA76         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D30u + PPCA_REMAP_OFFSET_2))
/** \brief D34, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA77         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D34u + PPCA_REMAP_OFFSET_2))
/** \brief D38, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA78         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D38u + PPCA_REMAP_OFFSET_2))
/** \brief D3C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA79         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D3Cu + PPCA_REMAP_OFFSET_2))
/** \brief D40, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA80         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D40u + PPCA_REMAP_OFFSET_2))
/** \brief D44, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA81         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D44u + PPCA_REMAP_OFFSET_2))
/** \brief D48, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA82         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D48u + PPCA_REMAP_OFFSET_2))
/** \brief D4C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA83         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D4Cu + PPCA_REMAP_OFFSET_2))
/** \brief D50, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA84         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D50u + PPCA_REMAP_OFFSET_2))
/** \brief D54, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA85         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D54u + PPCA_REMAP_OFFSET_2))
/** \brief D58, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA86         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D58u + PPCA_REMAP_OFFSET_2))
/** \brief D5C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA87         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D5Cu + PPCA_REMAP_OFFSET_2))
/** \brief D60, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA88         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D60u + PPCA_REMAP_OFFSET_2))
/** \brief D64, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA89         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D64u + PPCA_REMAP_OFFSET_2))
/** \brief D68, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA90         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D68u + PPCA_REMAP_OFFSET_2))
/** \brief D6C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA91         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D6Cu + PPCA_REMAP_OFFSET_2))
/** \brief D70, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA92         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D70u + PPCA_REMAP_OFFSET_2))
/** \brief D74, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA93         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D74u + PPCA_REMAP_OFFSET_2))
/** \brief D78, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA94         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D78u + PPCA_REMAP_OFFSET_2))
/** \brief D7C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA95         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D7Cu + PPCA_REMAP_OFFSET_2))
/** \brief D80, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA96         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D80u + PPCA_REMAP_OFFSET_2))
/** \brief D84, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA97         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D84u + PPCA_REMAP_OFFSET_2))
/** \brief D88, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA98         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D88u + PPCA_REMAP_OFFSET_2))
/** \brief D8C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA99         /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D8Cu + PPCA_REMAP_OFFSET_2))
/** \brief D90, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA100        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D90u + PPCA_REMAP_OFFSET_2))
/** \brief D94, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA101        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D94u + PPCA_REMAP_OFFSET_2))
/** \brief D98, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA102        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D98u + PPCA_REMAP_OFFSET_2))
/** \brief D9C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA103        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152D9Cu + PPCA_REMAP_OFFSET_2))
/** \brief DA0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA104        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DA0u + PPCA_REMAP_OFFSET_2))
/** \brief DA4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA105        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DA4u + PPCA_REMAP_OFFSET_2))
/** \brief DA8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA106        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DA8u + PPCA_REMAP_OFFSET_2))
/** \brief DAC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA107        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DACu + PPCA_REMAP_OFFSET_2))
/** \brief DB0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA108        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DB0u + PPCA_REMAP_OFFSET_2))
/** \brief DB4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA109        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DB4u + PPCA_REMAP_OFFSET_2))
/** \brief DB8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA110        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DB8u + PPCA_REMAP_OFFSET_2))
/** \brief DBC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA111        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DBCu + PPCA_REMAP_OFFSET_2))
/** \brief DC0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA112        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DC0u + PPCA_REMAP_OFFSET_2))
/** \brief DC4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA113        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DC4u + PPCA_REMAP_OFFSET_2))
/** \brief DC8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA114        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DC8u + PPCA_REMAP_OFFSET_2))
/** \brief DCC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA115        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DCCu + PPCA_REMAP_OFFSET_2))
/** \brief DD0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA116        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DD0u + PPCA_REMAP_OFFSET_2))
/** \brief DD4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA117        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DD4u + PPCA_REMAP_OFFSET_2))
/** \brief DD8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA118        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DD8u + PPCA_REMAP_OFFSET_2))
/** \brief DDC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA119        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DDCu + PPCA_REMAP_OFFSET_2))
/** \brief DE0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA120        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DE0u + PPCA_REMAP_OFFSET_2))
/** \brief DE4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA121        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DE4u + PPCA_REMAP_OFFSET_2))
/** \brief DE8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA122        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DE8u + PPCA_REMAP_OFFSET_2))
/** \brief DEC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA123        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DECu + PPCA_REMAP_OFFSET_2))
/** \brief DF0, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA124        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DF0u + PPCA_REMAP_OFFSET_2))
/** \brief DF4, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA125        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DF4u + PPCA_REMAP_OFFSET_2))
/** \brief DF8, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA126        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DF8u + PPCA_REMAP_OFFSET_2))
/** \brief DFC, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA127        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152DFCu + PPCA_REMAP_OFFSET_2))
/** \brief E00, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA128        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152E00u + PPCA_REMAP_OFFSET_2))
/** \brief E04, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA129        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152E04u + PPCA_REMAP_OFFSET_2))
/** \brief E08, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA130        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152E08u + PPCA_REMAP_OFFSET_2))
/** \brief E0C, Flash macro memory sense amplifier data */
#define REG_FLASHC_FM_CTL_FM_MEM_DATA131        /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_DATA*)(0x42152E0Cu + PPCA_REMAP_OFFSET_2))
/** \brief F00, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F00u + PPCA_REMAP_OFFSET_2))
/** \brief F04, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F04u + PPCA_REMAP_OFFSET_2))
/** \brief F08, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC2           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F08u + PPCA_REMAP_OFFSET_2))
/** \brief F0C, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC3           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F0Cu + PPCA_REMAP_OFFSET_2))
/** \brief F10, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC4           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F10u + PPCA_REMAP_OFFSET_2))
/** \brief F14, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC5           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F14u + PPCA_REMAP_OFFSET_2))
/** \brief F18, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC6           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F18u + PPCA_REMAP_OFFSET_2))
/** \brief F1C, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC7           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F1Cu + PPCA_REMAP_OFFSET_2))
/** \brief F20, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC8           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F20u + PPCA_REMAP_OFFSET_2))
/** \brief F24, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC9           /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F24u + PPCA_REMAP_OFFSET_2))
/** \brief F28, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC10          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F28u + PPCA_REMAP_OFFSET_2))
/** \brief F2C, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC11          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F2Cu + PPCA_REMAP_OFFSET_2))
/** \brief F30, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC12          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F30u + PPCA_REMAP_OFFSET_2))
/** \brief F34, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC13          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F34u + PPCA_REMAP_OFFSET_2))
/** \brief F38, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC14          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F38u + PPCA_REMAP_OFFSET_2))
/** \brief F3C, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC15          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F3Cu + PPCA_REMAP_OFFSET_2))
/** \brief F40, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC16          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F40u + PPCA_REMAP_OFFSET_2))
/** \brief F44, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC17          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F44u + PPCA_REMAP_OFFSET_2))
/** \brief F48, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC18          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F48u + PPCA_REMAP_OFFSET_2))
/** \brief F4C, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC19          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F4Cu + PPCA_REMAP_OFFSET_2))
/** \brief F50, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC20          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F50u + PPCA_REMAP_OFFSET_2))
/** \brief F54, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC21          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F54u + PPCA_REMAP_OFFSET_2))
/** \brief F58, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC22          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F58u + PPCA_REMAP_OFFSET_2))
/** \brief F5C, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC23          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F5Cu + PPCA_REMAP_OFFSET_2))
/** \brief F60, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC24          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F60u + PPCA_REMAP_OFFSET_2))
/** \brief F64, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC25          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F64u + PPCA_REMAP_OFFSET_2))
/** \brief F68, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC26          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F68u + PPCA_REMAP_OFFSET_2))
/** \brief F6C, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC27          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F6Cu + PPCA_REMAP_OFFSET_2))
/** \brief F70, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC28          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F70u + PPCA_REMAP_OFFSET_2))
/** \brief F74, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC29          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F74u + PPCA_REMAP_OFFSET_2))
/** \brief F78, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC30          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F78u + PPCA_REMAP_OFFSET_2))
/** \brief F7C, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC31          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F7Cu + PPCA_REMAP_OFFSET_2))
/** \brief F80, Flash macro memory sense amplifier ECC. */
#define REG_FLASHC_FM_CTL_FM_MEM_ECC32          /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_MEM_ECC*)(0x42152F80u + PPCA_REMAP_OFFSET_2))
/** \brief FEC, Internal ECC signal - unused */
#define REG_FLASHC_FM_CTL_FM_ECC_CTL_ADDR       /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_ECC_CTL_ADDR*)(0x42152FECu + PPCA_REMAP_OFFSET_2))
/** \brief FF0, 0 */
#define REG_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR  /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR*)(0x42152FF0u + PPCA_REMAP_OFFSET_2))
/** \brief FF4, 0 */
#define REG_FLASHC_FM_CTL_FM_RED_CTL67_ADDR     /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_RED_CTL67_ADDR*)(0x42152FF4u + PPCA_REMAP_OFFSET_2))
/** \brief FF8, 0 */
#define REG_FLASHC_FM_CTL_FM_RED_CTL45_ADDR     /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_RED_CTL45_ADDR*)(0x42152FF8u + PPCA_REMAP_OFFSET_2))
/** \brief FFC, 0 */
#define REG_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR*)(0x42152FFCu + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXFLASHC_REG_H_ */
