/***************************************************************************//**
* \file IfxBACKUP_reg.h
*
* \brief
* BACKUP address
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
* \defgroup IfxSfr_BACKUP_Registers_Cfg BACKUP address
* \ingroup IfxSfr_BACKUP_Registers
*
*******************************************************************************/

#ifndef _IFXBACKUP_REG_H_
#define _IFXBACKUP_REG_H_ 1

/******************************************************************************/
#include "IfxBACKUP_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_BACKUP_Registers_Cfg_BaseAddress
 * \{  */

/** \brief BACKUP object */
#define MODULE_BACKUP                           /*lint --e(923, 9078)*/ ((*(Ifx_BACKUP*)(0x42220000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_BACKUP_Registers_Cfg_BACKUP
 * \{  */
/** \brief 0, Control */
#define REG_BACKUP_CTL                          /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_CTL*)(0x42220000u + PPCA_REMAP_OFFSET_2))
/** \brief 8, RTC Read Write register */
#define REG_BACKUP_RTC_RW                       /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_RTC_RW*)(0x42220008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Oscillator calibration for absolute frequency */
#define REG_BACKUP_CAL_CTL                      /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_CAL_CTL*)(0x4222000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Status */
#define REG_BACKUP_STATUS                       /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_STATUS*)(0x42220010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Calendar Seconds, Minutes, Hours, Day of Week */
#define REG_BACKUP_RTC_TIME                     /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_RTC_TIME*)(0x42220014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Calendar Day of Month, Month,  Year */
#define REG_BACKUP_RTC_DATE                     /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_RTC_DATE*)(0x42220018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Alarm 1 Seconds, Minute, Hours, Day of Week */
#define REG_BACKUP_ALM1_TIME                    /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_ALM1_TIME*)(0x4222001Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Alarm 1 Day of Month, Month */
#define REG_BACKUP_ALM1_DATE                    /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_ALM1_DATE*)(0x42220020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Alarm 2 Seconds, Minute, Hours, Day of Week */
#define REG_BACKUP_ALM2_TIME                    /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_ALM2_TIME*)(0x42220024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, Alarm 2 Day of Month, Month */
#define REG_BACKUP_ALM2_DATE                    /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_ALM2_DATE*)(0x42220028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, Interrupt request register */
#define REG_BACKUP_INTR                         /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_INTR*)(0x4222002Cu + PPCA_REMAP_OFFSET_2))
/** \brief 30, Interrupt set request register */
#define REG_BACKUP_INTR_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_INTR_SET*)(0x42220030u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Interrupt mask register */
#define REG_BACKUP_INTR_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_INTR_MASK*)(0x42220034u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Interrupt masked request register */
#define REG_BACKUP_INTR_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_INTR_MASKED*)(0x42220038u + PPCA_REMAP_OFFSET_2))
/** \brief 44, PMIC control register */
#define REG_BACKUP_PMIC_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_PMIC_CTL*)(0x42220044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Backup reset register */
#define REG_BACKUP_RESET                        /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_RESET*)(0x42220048u + PPCA_REMAP_OFFSET_2))
/** \brief 90, WCO Status Register */
#define REG_BACKUP_WCO_STATUS                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_WCO_STATUS*)(0x42220090u + PPCA_REMAP_OFFSET_2))
/** \brief 1000, Backup register region 0 */
#define REG_BACKUP_BREG_SET00                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET0*)(0x42221000u + PPCA_REMAP_OFFSET_2))
/** \brief 1004, Backup register region 0 */
#define REG_BACKUP_BREG_SET01                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET0*)(0x42221004u + PPCA_REMAP_OFFSET_2))
/** \brief 1008, Backup register region 0 */
#define REG_BACKUP_BREG_SET02                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET0*)(0x42221008u + PPCA_REMAP_OFFSET_2))
/** \brief 100C, Backup register region 0 */
#define REG_BACKUP_BREG_SET03                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET0*)(0x4222100Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1010, Backup register region 1 */
#define REG_BACKUP_BREG_SET10                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET1*)(0x42221010u + PPCA_REMAP_OFFSET_2))
/** \brief 1014, Backup register region 1 */
#define REG_BACKUP_BREG_SET11                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET1*)(0x42221014u + PPCA_REMAP_OFFSET_2))
/** \brief 1018, Backup register region 1 */
#define REG_BACKUP_BREG_SET12                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET1*)(0x42221018u + PPCA_REMAP_OFFSET_2))
/** \brief 101C, Backup register region 1 */
#define REG_BACKUP_BREG_SET13                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET1*)(0x4222101Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1020, Backup register region 2 */
#define REG_BACKUP_BREG_SET20                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET2*)(0x42221020u + PPCA_REMAP_OFFSET_2))
/** \brief 1024, Backup register region 2 */
#define REG_BACKUP_BREG_SET21                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET2*)(0x42221024u + PPCA_REMAP_OFFSET_2))
/** \brief 1028, Backup register region 2 */
#define REG_BACKUP_BREG_SET22                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET2*)(0x42221028u + PPCA_REMAP_OFFSET_2))
/** \brief 102C, Backup register region 2 */
#define REG_BACKUP_BREG_SET23                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET2*)(0x4222102Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1030, Backup register region 2 */
#define REG_BACKUP_BREG_SET24                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET2*)(0x42221030u + PPCA_REMAP_OFFSET_2))
/** \brief 1034, Backup register region 2 */
#define REG_BACKUP_BREG_SET25                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET2*)(0x42221034u + PPCA_REMAP_OFFSET_2))
/** \brief 1038, Backup register region 2 */
#define REG_BACKUP_BREG_SET26                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET2*)(0x42221038u + PPCA_REMAP_OFFSET_2))
/** \brief 103C, Backup register region 2 */
#define REG_BACKUP_BREG_SET27                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET2*)(0x4222103Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1080, Backup register region 3 */
#define REG_BACKUP_BREG_SET30                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x42221080u + PPCA_REMAP_OFFSET_2))
/** \brief 1084, Backup register region 3 */
#define REG_BACKUP_BREG_SET31                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x42221084u + PPCA_REMAP_OFFSET_2))
/** \brief 1088, Backup register region 3 */
#define REG_BACKUP_BREG_SET32                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x42221088u + PPCA_REMAP_OFFSET_2))
/** \brief 108C, Backup register region 3 */
#define REG_BACKUP_BREG_SET33                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x4222108Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1090, Backup register region 3 */
#define REG_BACKUP_BREG_SET34                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x42221090u + PPCA_REMAP_OFFSET_2))
/** \brief 1094, Backup register region 3 */
#define REG_BACKUP_BREG_SET35                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x42221094u + PPCA_REMAP_OFFSET_2))
/** \brief 1098, Backup register region 3 */
#define REG_BACKUP_BREG_SET36                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x42221098u + PPCA_REMAP_OFFSET_2))
/** \brief 109C, Backup register region 3 */
#define REG_BACKUP_BREG_SET37                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x4222109Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10A0, Backup register region 3 */
#define REG_BACKUP_BREG_SET38                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x422210A0u + PPCA_REMAP_OFFSET_2))
/** \brief 10A4, Backup register region 3 */
#define REG_BACKUP_BREG_SET39                   /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x422210A4u + PPCA_REMAP_OFFSET_2))
/** \brief 10A8, Backup register region 3 */
#define REG_BACKUP_BREG_SET310                  /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x422210A8u + PPCA_REMAP_OFFSET_2))
/** \brief 10AC, Backup register region 3 */
#define REG_BACKUP_BREG_SET311                  /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x422210ACu + PPCA_REMAP_OFFSET_2))
/** \brief 10B0, Backup register region 3 */
#define REG_BACKUP_BREG_SET312                  /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x422210B0u + PPCA_REMAP_OFFSET_2))
/** \brief 10B4, Backup register region 3 */
#define REG_BACKUP_BREG_SET313                  /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x422210B4u + PPCA_REMAP_OFFSET_2))
/** \brief 10B8, Backup register region 3 */
#define REG_BACKUP_BREG_SET314                  /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x422210B8u + PPCA_REMAP_OFFSET_2))
/** \brief 10BC, Backup register region 3 */
#define REG_BACKUP_BREG_SET315                  /*lint --e(923, 9078)*/ (*(volatile Ifx_BACKUP_BREG_SET3*)(0x422210BCu + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXBACKUP_REG_H_ */
