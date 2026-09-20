/***************************************************************************//**
* \file IfxSRSS_reg.h
*
* \brief
* SRSS address
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
* \defgroup IfxSfr_SRSS_Registers_Cfg SRSS address
* \ingroup IfxSfr_SRSS_Registers
*
*******************************************************************************/

#ifndef _IFXSRSS_REG_H_
#define _IFXSRSS_REG_H_ 1

/******************************************************************************/
#include "IfxSRSS_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_SRSS_Registers_Cfg_BaseAddress
 * \{  */

/** \brief SRSS object */
#define MODULE_SRSS                             /*lint --e(923, 9078)*/ ((*(Ifx_SRSS*)(0x42200000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_HF                           /*lint --e(923, 9078)*/ ((*(Ifx_CSV_HF*)(0x42201400u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_HF_CSV0                      /*lint --e(923, 9078)*/ ((*(Ifx_CSV_HF_CSV*)(0x42201400u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_HF_CSV1                      /*lint --e(923, 9078)*/ ((*(Ifx_CSV_HF_CSV*)(0x42201410u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_HF_CSV2                      /*lint --e(923, 9078)*/ ((*(Ifx_CSV_HF_CSV*)(0x42201420u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_HF_CSV3                      /*lint --e(923, 9078)*/ ((*(Ifx_CSV_HF_CSV*)(0x42201430u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_HF_CSV4                      /*lint --e(923, 9078)*/ ((*(Ifx_CSV_HF_CSV*)(0x42201440u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_HF_CSV5                      /*lint --e(923, 9078)*/ ((*(Ifx_CSV_HF_CSV*)(0x42201450u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_HF_CSV6                      /*lint --e(923, 9078)*/ ((*(Ifx_CSV_HF_CSV*)(0x42201460u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_REF                          /*lint --e(923, 9078)*/ ((*(Ifx_CSV_REF*)(0x42201710u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_REF_CSV                      /*lint --e(923, 9078)*/ ((*(Ifx_CSV_REF_CSV*)(0x42201710u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_LF                           /*lint --e(923, 9078)*/ ((*(Ifx_CSV_LF*)(0x42201720u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_LF_CSV                       /*lint --e(923, 9078)*/ ((*(Ifx_CSV_LF_CSV*)(0x42201720u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_ILO                          /*lint --e(923, 9078)*/ ((*(Ifx_CSV_ILO*)(0x42201730u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CSV_ILO_CSV                      /*lint --e(923, 9078)*/ ((*(Ifx_CSV_ILO_CSV*)(0x42201730u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CLK_DPLL_LP0                     /*lint --e(923, 9078)*/ ((*(Ifx_CLK_DPLL_LP*)(0x42201A00u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CLK_DPLL_LP1                     /*lint --e(923, 9078)*/ ((*(Ifx_CLK_DPLL_LP*)(0x42201A20u + PPCA_REMAP_OFFSET_2)))
#define MODULE_RAM_TRIM                         /*lint --e(923, 9078)*/ ((*(Ifx_RAM_TRIM*)(0x42204000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CLK_TRIM_DPLL_LP0                /*lint --e(923, 9078)*/ ((*(Ifx_CLK_TRIM_DPLL_LP*)(0x42204200u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CLK_TRIM_DPLL_LP1                /*lint --e(923, 9078)*/ ((*(Ifx_CLK_TRIM_DPLL_LP*)(0x42204220u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MCWDT_STRUCT0                    /*lint --e(923, 9078)*/ ((*(Ifx_MCWDT_STRUCT*)(0x4220D000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SRSS_Registers_Cfg_SRSS
 * \{  */
/** \brief 40, High Voltage / Low Voltage Detector (HVLVD) Status Register */
#define REG_PWR_LVD_STATUS                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PWR_LVD_STATUS*)(0x42200040u + PPCA_REMAP_OFFSET_2))
/** \brief 100, Clock DSI Select Register */
#define REG_CLK_DSI_SELECT0                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DSI_SELECT*)(0x42200100u + PPCA_REMAP_OFFSET_2))
/** \brief 104, Clock DSI Select Register */
#define REG_CLK_DSI_SELECT1                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DSI_SELECT*)(0x42200104u + PPCA_REMAP_OFFSET_2))
/** \brief 108, Clock DSI Select Register */
#define REG_CLK_DSI_SELECT2                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DSI_SELECT*)(0x42200108u + PPCA_REMAP_OFFSET_2))
/** \brief 10C, Clock DSI Select Register */
#define REG_CLK_DSI_SELECT3                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DSI_SELECT*)(0x4220010Cu + PPCA_REMAP_OFFSET_2))
/** \brief 110, Clock DSI Select Register */
#define REG_CLK_DSI_SELECT4                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DSI_SELECT*)(0x42200110u + PPCA_REMAP_OFFSET_2))
/** \brief 114, Clock DSI Select Register */
#define REG_CLK_DSI_SELECT5                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DSI_SELECT*)(0x42200114u + PPCA_REMAP_OFFSET_2))
/** \brief 118, Clock DSI Select Register */
#define REG_CLK_DSI_SELECT6                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DSI_SELECT*)(0x42200118u + PPCA_REMAP_OFFSET_2))
/** \brief 140, Fast Clock Output Select Register */
#define REG_CLK_OUTPUT_FAST                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_OUTPUT_FAST*)(0x42200140u + PPCA_REMAP_OFFSET_2))
/** \brief 144, Slow Clock Output Select Register */
#define REG_CLK_OUTPUT_SLOW                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_OUTPUT_SLOW*)(0x42200144u + PPCA_REMAP_OFFSET_2))
/** \brief 148, Clock Calibration Counter 1 */
#define REG_CLK_CAL_CNT1                        /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_CAL_CNT1*)(0x42200148u + PPCA_REMAP_OFFSET_2))
/** \brief 14C, Clock Calibration Counter 2 */
#define REG_CLK_CAL_CNT2                        /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_CAL_CNT2*)(0x4220014Cu + PPCA_REMAP_OFFSET_2))
/** \brief 200, SRSS Interrupt Register */
#define REG_SRSS_INTR                           /*lint --e(923, 9078)*/ (*(volatile Ifx_SRSS_INTR*)(0x42200200u + PPCA_REMAP_OFFSET_2))
/** \brief 204, SRSS Interrupt Set Register */
#define REG_SRSS_INTR_SET                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SRSS_INTR_SET*)(0x42200204u + PPCA_REMAP_OFFSET_2))
/** \brief 208, SRSS Interrupt Mask Register */
#define REG_SRSS_INTR_MASK                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SRSS_INTR_MASK*)(0x42200208u + PPCA_REMAP_OFFSET_2))
/** \brief 20C, SRSS Interrupt Masked Register */
#define REG_SRSS_INTR_MASKED                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SRSS_INTR_MASKED*)(0x4220020Cu + PPCA_REMAP_OFFSET_2))
/** \brief 300, SRSS Additional Interrupt Register */
#define REG_SRSS_AINTR                          /*lint --e(923, 9078)*/ (*(volatile Ifx_SRSS_AINTR*)(0x42200300u + PPCA_REMAP_OFFSET_2))
/** \brief 304, SRSS Additional Interrupt Set Register */
#define REG_SRSS_AINTR_SET                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SRSS_AINTR_SET*)(0x42200304u + PPCA_REMAP_OFFSET_2))
/** \brief 308, SRSS Additional Interrupt Mask Register */
#define REG_SRSS_AINTR_MASK                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SRSS_AINTR_MASK*)(0x42200308u + PPCA_REMAP_OFFSET_2))
/** \brief 30C, SRSS Additional Interrupt Masked Register */
#define REG_SRSS_AINTR_MASKED                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SRSS_AINTR_MASKED*)(0x4220030Cu + PPCA_REMAP_OFFSET_2))
/** \brief 404, Debug Control Register */
#define REG_BOOT_DLM_CTL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_BOOT_DLM_CTL*)(0x42200404u + PPCA_REMAP_OFFSET_2))
/** \brief 408, Debug Control Register 2 */
#define REG_BOOT_DLM_CTL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_BOOT_DLM_CTL2*)(0x42200408u + PPCA_REMAP_OFFSET_2))
/** \brief 40C, Debug Status Register */
#define REG_BOOT_DLM_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_BOOT_DLM_STATUS*)(0x4220040Cu + PPCA_REMAP_OFFSET_2))
/** \brief 410, Soft Reset Trigger Register */
#define REG_RES_SOFT_CTL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_RES_SOFT_CTL*)(0x42200410u + PPCA_REMAP_OFFSET_2))
/** \brief 418, Boot Execution Status Register */
#define REG_BOOT_STATUS                         /*lint --e(923, 9078)*/ (*(volatile Ifx_BOOT_STATUS*)(0x42200418u + PPCA_REMAP_OFFSET_2))
/** \brief 430, Warm Boot Entry Address */
#define REG_BOOT_ENTRY                          /*lint --e(923, 9078)*/ (*(volatile Ifx_BOOT_ENTRY*)(0x42200430u + PPCA_REMAP_OFFSET_2))
/** \brief 8A0, Hibernate Wakeup Mask Register */
#define REG_PWR_HIB_WAKE_CTL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PWR_HIB_WAKE_CTL*)(0x422008A0u + PPCA_REMAP_OFFSET_2))
/** \brief 8A4, Hibernate Wakeup Polarity Register */
#define REG_PWR_HIB_WAKE_CTL2                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PWR_HIB_WAKE_CTL2*)(0x422008A4u + PPCA_REMAP_OFFSET_2))
/** \brief 8AC, Hibernate Wakeup Cause Register */
#define REG_PWR_HIB_WAKE_CAUSE                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PWR_HIB_WAKE_CAUSE*)(0x422008ACu + PPCA_REMAP_OFFSET_2))
/** \brief 1000, Power Mode Control */
#define REG_PWR_CTL                             /*lint --e(923, 9078)*/ (*(volatile Ifx_PWR_CTL*)(0x42201000u + PPCA_REMAP_OFFSET_2))
/** \brief 1004, Power Mode Control 2 */
#define REG_PWR_CTL2                            /*lint --e(923, 9078)*/ (*(volatile Ifx_PWR_CTL2*)(0x42201004u + PPCA_REMAP_OFFSET_2))
/** \brief 1008, HIBERNATE Mode Register */
#define REG_PWR_HIBERNATE                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PWR_HIBERNATE*)(0x42201008u + PPCA_REMAP_OFFSET_2))
/** \brief 1020, High Voltage / Low Voltage Detector (HVLVD) Configuration Register */
#define REG_PWR_LVD_CTL                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PWR_LVD_CTL*)(0x42201020u + PPCA_REMAP_OFFSET_2))
/** \brief 1200, Clock Path Select Register */
#define REG_CLK_PATH_SELECT0                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_PATH_SELECT*)(0x42201200u + PPCA_REMAP_OFFSET_2))
/** \brief 1204, Clock Path Select Register */
#define REG_CLK_PATH_SELECT1                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_PATH_SELECT*)(0x42201204u + PPCA_REMAP_OFFSET_2))
/** \brief 1208, Clock Path Select Register */
#define REG_CLK_PATH_SELECT2                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_PATH_SELECT*)(0x42201208u + PPCA_REMAP_OFFSET_2))
/** \brief 120C, Clock Path Select Register */
#define REG_CLK_PATH_SELECT3                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_PATH_SELECT*)(0x4220120Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1210, Clock Path Select Register */
#define REG_CLK_PATH_SELECT4                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_PATH_SELECT*)(0x42201210u + PPCA_REMAP_OFFSET_2))
/** \brief 1214, Clock Path Select Register */
#define REG_CLK_PATH_SELECT5                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_PATH_SELECT*)(0x42201214u + PPCA_REMAP_OFFSET_2))
/** \brief 1218, Clock Path Select Register */
#define REG_CLK_PATH_SELECT6                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_PATH_SELECT*)(0x42201218u + PPCA_REMAP_OFFSET_2))
/** \brief 1240, Clock Root Select Register */
#define REG_CLK_ROOT_SELECT0                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ROOT_SELECT*)(0x42201240u + PPCA_REMAP_OFFSET_2))
/** \brief 1244, Clock Root Select Register */
#define REG_CLK_ROOT_SELECT1                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ROOT_SELECT*)(0x42201244u + PPCA_REMAP_OFFSET_2))
/** \brief 1248, Clock Root Select Register */
#define REG_CLK_ROOT_SELECT2                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ROOT_SELECT*)(0x42201248u + PPCA_REMAP_OFFSET_2))
/** \brief 124C, Clock Root Select Register */
#define REG_CLK_ROOT_SELECT3                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ROOT_SELECT*)(0x4220124Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1250, Clock Root Select Register */
#define REG_CLK_ROOT_SELECT4                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ROOT_SELECT*)(0x42201250u + PPCA_REMAP_OFFSET_2))
/** \brief 1254, Clock Root Select Register */
#define REG_CLK_ROOT_SELECT5                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ROOT_SELECT*)(0x42201254u + PPCA_REMAP_OFFSET_2))
/** \brief 1258, Clock Root Select Register */
#define REG_CLK_ROOT_SELECT6                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ROOT_SELECT*)(0x42201258u + PPCA_REMAP_OFFSET_2))
/** \brief 1280, Clock Root Direct Select Register */
#define REG_CLK_DIRECT_SELECT0                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DIRECT_SELECT*)(0x42201280u + PPCA_REMAP_OFFSET_2))
/** \brief 1284, Clock Root Direct Select Register */
#define REG_CLK_DIRECT_SELECT1                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DIRECT_SELECT*)(0x42201284u + PPCA_REMAP_OFFSET_2))
/** \brief 1288, Clock Root Direct Select Register */
#define REG_CLK_DIRECT_SELECT2                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DIRECT_SELECT*)(0x42201288u + PPCA_REMAP_OFFSET_2))
/** \brief 128C, Clock Root Direct Select Register */
#define REG_CLK_DIRECT_SELECT3                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DIRECT_SELECT*)(0x4220128Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1290, Clock Root Direct Select Register */
#define REG_CLK_DIRECT_SELECT4                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DIRECT_SELECT*)(0x42201290u + PPCA_REMAP_OFFSET_2))
/** \brief 1294, Clock Root Direct Select Register */
#define REG_CLK_DIRECT_SELECT5                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DIRECT_SELECT*)(0x42201294u + PPCA_REMAP_OFFSET_2))
/** \brief 1298, Clock Root Direct Select Register */
#define REG_CLK_DIRECT_SELECT6                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DIRECT_SELECT*)(0x42201298u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock Supervision Reference Control */
#define REG_CSV_HF_CSV0_REF_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_CTL*)(0x42201400u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Clock Supervision Reference Limits */
#define REG_CSV_HF_CSV0_REF_LIMIT               /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_LIMIT*)(0x42201404u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Clock Supervision Monitor Control */
#define REG_CSV_HF_CSV0_MON_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_MON_CTL*)(0x42201408u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock Supervision Reference Control */
#define REG_CSV_HF_CSV1_REF_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_CTL*)(0x42201410u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Clock Supervision Reference Limits */
#define REG_CSV_HF_CSV1_REF_LIMIT               /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_LIMIT*)(0x42201414u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Clock Supervision Monitor Control */
#define REG_CSV_HF_CSV1_MON_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_MON_CTL*)(0x42201418u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock Supervision Reference Control */
#define REG_CSV_HF_CSV2_REF_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_CTL*)(0x42201420u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Clock Supervision Reference Limits */
#define REG_CSV_HF_CSV2_REF_LIMIT               /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_LIMIT*)(0x42201424u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Clock Supervision Monitor Control */
#define REG_CSV_HF_CSV2_MON_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_MON_CTL*)(0x42201428u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock Supervision Reference Control */
#define REG_CSV_HF_CSV3_REF_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_CTL*)(0x42201430u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Clock Supervision Reference Limits */
#define REG_CSV_HF_CSV3_REF_LIMIT               /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_LIMIT*)(0x42201434u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Clock Supervision Monitor Control */
#define REG_CSV_HF_CSV3_MON_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_MON_CTL*)(0x42201438u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock Supervision Reference Control */
#define REG_CSV_HF_CSV4_REF_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_CTL*)(0x42201440u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Clock Supervision Reference Limits */
#define REG_CSV_HF_CSV4_REF_LIMIT               /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_LIMIT*)(0x42201444u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Clock Supervision Monitor Control */
#define REG_CSV_HF_CSV4_MON_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_MON_CTL*)(0x42201448u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock Supervision Reference Control */
#define REG_CSV_HF_CSV5_REF_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_CTL*)(0x42201450u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Clock Supervision Reference Limits */
#define REG_CSV_HF_CSV5_REF_LIMIT               /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_LIMIT*)(0x42201454u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Clock Supervision Monitor Control */
#define REG_CSV_HF_CSV5_MON_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_MON_CTL*)(0x42201458u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock Supervision Reference Control */
#define REG_CSV_HF_CSV6_REF_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_CTL*)(0x42201460u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Clock Supervision Reference Limits */
#define REG_CSV_HF_CSV6_REF_LIMIT               /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_REF_LIMIT*)(0x42201464u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Clock Supervision Monitor Control */
#define REG_CSV_HF_CSV6_MON_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_HF_CSV_MON_CTL*)(0x42201468u + PPCA_REMAP_OFFSET_2))
/** \brief 1500, Clock selection register */
#define REG_CLK_SELECT                          /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_SELECT*)(0x42201500u + PPCA_REMAP_OFFSET_2))
/** \brief 1518, IMO Configuration */
#define REG_CLK_IMO_CONFIG                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_IMO_CONFIG*)(0x42201518u + PPCA_REMAP_OFFSET_2))
/** \brief 151C, ECO Configuration Register */
#define REG_CLK_ECO_CONFIG                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ECO_CONFIG*)(0x4220151Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1520, ECO Prescaler Configuration Register */
#define REG_CLK_ECO_PRESCALE                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ECO_PRESCALE*)(0x42201520u + PPCA_REMAP_OFFSET_2))
/** \brief 1524, ECO Status Register */
#define REG_CLK_ECO_STATUS                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ECO_STATUS*)(0x42201524u + PPCA_REMAP_OFFSET_2))
/** \brief 1530, FLL Configuration Register */
#define REG_CLK_FLL_CONFIG                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_FLL_CONFIG*)(0x42201530u + PPCA_REMAP_OFFSET_2))
/** \brief 1534, FLL Configuration Register 2 */
#define REG_CLK_FLL_CONFIG2                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_FLL_CONFIG2*)(0x42201534u + PPCA_REMAP_OFFSET_2))
/** \brief 1538, FLL Configuration Register 3 */
#define REG_CLK_FLL_CONFIG3                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_FLL_CONFIG3*)(0x42201538u + PPCA_REMAP_OFFSET_2))
/** \brief 153C, FLL Configuration Register 4 */
#define REG_CLK_FLL_CONFIG4                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_FLL_CONFIG4*)(0x4220153Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1540, FLL Status Register */
#define REG_CLK_FLL_STATUS                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_FLL_STATUS*)(0x42201540u + PPCA_REMAP_OFFSET_2))
/** \brief 1544, ECO Configuration Register 2 */
#define REG_CLK_ECO_CONFIG2                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ECO_CONFIG2*)(0x42201544u + PPCA_REMAP_OFFSET_2))
/** \brief 1548, ILO Configuration */
#define REG_CLK_ILO_CONFIG                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_ILO_CONFIG*)(0x42201548u + PPCA_REMAP_OFFSET_2))
/** \brief 154C, ILO Trim Register */
#define REG_CLK_TRIM_ILO_CTL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_TRIM_ILO_CTL*)(0x4220154Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1554, Medium Frequency Clock Select Register */
#define REG_CLK_MF_SELECT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_MF_SELECT*)(0x42201554u + PPCA_REMAP_OFFSET_2))
/** \brief 1558, MFO Configuration Register */
#define REG_CLK_MFO_CONFIG                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_MFO_CONFIG*)(0x42201558u + PPCA_REMAP_OFFSET_2))
/** \brief 1560, IHO Configuration Register */
#define REG_CLK_IHO_CONFIG                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_IHO_CONFIG*)(0x42201560u + PPCA_REMAP_OFFSET_2))
/** \brief 1700, Select CSV Reference clock for Active domain */
#define REG_CSV_REF_SEL                         /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_REF_SEL*)(0x42201700u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock Supervision Reference Control */
#define REG_CSV_REF_CSV_REF_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_REF_CSV_REF_CTL*)(0x42201710u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Clock Supervision Reference Limits */
#define REG_CSV_REF_CSV_REF_LIMIT               /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_REF_CSV_REF_LIMIT*)(0x42201714u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Clock Supervision Monitor Control */
#define REG_CSV_REF_CSV_MON_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_REF_CSV_MON_CTL*)(0x42201718u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock Supervision Reference Control */
#define REG_CSV_LF_CSV_REF_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_LF_CSV_REF_CTL*)(0x42201720u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Clock Supervision Reference Limits */
#define REG_CSV_LF_CSV_REF_LIMIT                /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_LF_CSV_REF_LIMIT*)(0x42201724u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Clock Supervision Monitor Control */
#define REG_CSV_LF_CSV_MON_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_LF_CSV_MON_CTL*)(0x42201728u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Clock Supervision Reference Control */
#define REG_CSV_ILO_CSV_REF_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_ILO_CSV_REF_CTL*)(0x42201730u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Clock Supervision Reference Limits */
#define REG_CSV_ILO_CSV_REF_LIMIT               /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_ILO_CSV_REF_LIMIT*)(0x42201734u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Clock Supervision Monitor Control */
#define REG_CSV_ILO_CSV_MON_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CSV_ILO_CSV_MON_CTL*)(0x42201738u + PPCA_REMAP_OFFSET_2))
/** \brief 1800, Reset Cause Observation Register */
#define REG_RES_CAUSE                           /*lint --e(923, 9078)*/ (*(volatile Ifx_RES_CAUSE*)(0x42201800u + PPCA_REMAP_OFFSET_2))
/** \brief 1804, Reset Cause Observation Register 2 */
#define REG_RES_CAUSE2                          /*lint --e(923, 9078)*/ (*(volatile Ifx_RES_CAUSE2*)(0x42201804u + PPCA_REMAP_OFFSET_2))
/** \brief 1814, Programmable XRES Control Register */
#define REG_RES_PXRES_CTL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_RES_PXRES_CTL*)(0x42201814u + PPCA_REMAP_OFFSET_2))
/** \brief 0, DPLL_LP Configuration Register */
#define REG_CLK_DPLL_LP0_CONFIG                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG*)(0x42201A00u + PPCA_REMAP_OFFSET_2))
/** \brief 4, DPLL_LP Configuration Register 2 */
#define REG_CLK_DPLL_LP0_CONFIG2                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG2*)(0x42201A04u + PPCA_REMAP_OFFSET_2))
/** \brief 8, DPLL_LP Configuration Register 3 */
#define REG_CLK_DPLL_LP0_CONFIG3                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG3*)(0x42201A08u + PPCA_REMAP_OFFSET_2))
/** \brief C, DPLL_LP Configuration Register 4 */
#define REG_CLK_DPLL_LP0_CONFIG4                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG4*)(0x42201A0Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, DPLL_LP Configuration Register 5 */
#define REG_CLK_DPLL_LP0_CONFIG5                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG5*)(0x42201A10u + PPCA_REMAP_OFFSET_2))
/** \brief 14, DPLL_LP Configuration Register 6 */
#define REG_CLK_DPLL_LP0_CONFIG6                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG6*)(0x42201A14u + PPCA_REMAP_OFFSET_2))
/** \brief 18, DPLL_LP Configuration Register 7 */
#define REG_CLK_DPLL_LP0_CONFIG7                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG7*)(0x42201A18u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, DPLL_LP Status Register */
#define REG_CLK_DPLL_LP0_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_STATUS*)(0x42201A1Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, DPLL_LP Configuration Register */
#define REG_CLK_DPLL_LP1_CONFIG                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG*)(0x42201A20u + PPCA_REMAP_OFFSET_2))
/** \brief 4, DPLL_LP Configuration Register 2 */
#define REG_CLK_DPLL_LP1_CONFIG2                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG2*)(0x42201A24u + PPCA_REMAP_OFFSET_2))
/** \brief 8, DPLL_LP Configuration Register 3 */
#define REG_CLK_DPLL_LP1_CONFIG3                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG3*)(0x42201A28u + PPCA_REMAP_OFFSET_2))
/** \brief C, DPLL_LP Configuration Register 4 */
#define REG_CLK_DPLL_LP1_CONFIG4                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG4*)(0x42201A2Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, DPLL_LP Configuration Register 5 */
#define REG_CLK_DPLL_LP1_CONFIG5                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG5*)(0x42201A30u + PPCA_REMAP_OFFSET_2))
/** \brief 14, DPLL_LP Configuration Register 6 */
#define REG_CLK_DPLL_LP1_CONFIG6                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG6*)(0x42201A34u + PPCA_REMAP_OFFSET_2))
/** \brief 18, DPLL_LP Configuration Register 7 */
#define REG_CLK_DPLL_LP1_CONFIG7                /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_CONFIG7*)(0x42201A38u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, DPLL_LP Status Register */
#define REG_CLK_DPLL_LP1_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_DPLL_LP_STATUS*)(0x42201A3Cu + PPCA_REMAP_OFFSET_2))
/** \brief 2054, SECURE TEST and FIRMWARE TEST Key control register */
#define REG_TST_XRES_SECURE                     /*lint --e(923, 9078)*/ (*(volatile Ifx_TST_XRES_SECURE*)(0x42202054u + PPCA_REMAP_OFFSET_2))
/** \brief 20E0, Power System Trim Register */
#define REG_PWR_TRIM_PWRSYS_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PWR_TRIM_PWRSYS_CTL*)(0x422020E0u + PPCA_REMAP_OFFSET_2))
/** \brief 20E4, Power System Trim Register 2 */
#define REG_PWR_TRIM_PWRSYS_CTL2                /*lint --e(923, 9078)*/ (*(volatile Ifx_PWR_TRIM_PWRSYS_CTL2*)(0x422020E4u + PPCA_REMAP_OFFSET_2))
/** \brief 301C, ECO Trim Register */
#define REG_CLK_TRIM_ECO_CTL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_TRIM_ECO_CTL*)(0x4220301Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trim Register for RAM Type 0 */
#define REG_RAM_TRIM_TRIM_RAM_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_RAM_TRIM_TRIM_RAM_CTL*)(0x42204000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Trim Register for ROM */
#define REG_RAM_TRIM_TRIM_ROM_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_RAM_TRIM_TRIM_ROM_CTL*)(0x42204004u + PPCA_REMAP_OFFSET_2))
/** \brief 0, DPLL LP Trim Register */
#define REG_CLK_TRIM_DPLL_LP0_DPLL_LP_CTL       /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL*)(0x42204200u + PPCA_REMAP_OFFSET_2))
/** \brief 8, DPLL LP Trim Register 3 */
#define REG_CLK_TRIM_DPLL_LP0_DPLL_LP_CTL3      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL3*)(0x42204208u + PPCA_REMAP_OFFSET_2))
/** \brief C, DPLL LP Trim Register 4 */
#define REG_CLK_TRIM_DPLL_LP0_DPLL_LP_CTL4      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL4*)(0x4220420Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1C, DPLL LP Test Register 4 */
#define REG_CLK_TRIM_DPLL_LP0_DPLL_LP_TEST4     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_TEST4*)(0x4220421Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, DPLL LP Trim Register */
#define REG_CLK_TRIM_DPLL_LP1_DPLL_LP_CTL       /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL*)(0x42204220u + PPCA_REMAP_OFFSET_2))
/** \brief 8, DPLL LP Trim Register 3 */
#define REG_CLK_TRIM_DPLL_LP1_DPLL_LP_CTL3      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL3*)(0x42204228u + PPCA_REMAP_OFFSET_2))
/** \brief C, DPLL LP Trim Register 4 */
#define REG_CLK_TRIM_DPLL_LP1_DPLL_LP_CTL4      /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_CTL4*)(0x4220422Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1C, DPLL LP Test Register 4 */
#define REG_CLK_TRIM_DPLL_LP1_DPLL_LP_TEST4     /*lint --e(923, 9078)*/ (*(volatile Ifx_CLK_TRIM_DPLL_LP_DPLL_LP_TEST4*)(0x4220423Cu + PPCA_REMAP_OFFSET_2))
/** \brief C000, Watchdog Counter Control Register (Type A) */
#define REG_WDT_CTL                             /*lint --e(923, 9078)*/ (*(volatile Ifx_WDT_CTL*)(0x4220C000u + PPCA_REMAP_OFFSET_2))
/** \brief C004, Watchdog Counter Count Register (Type A) */
#define REG_WDT_CNT                             /*lint --e(923, 9078)*/ (*(volatile Ifx_WDT_CNT*)(0x4220C004u + PPCA_REMAP_OFFSET_2))
/** \brief C008, Watchdog Counter Match Register (Type A) */
#define REG_WDT_MATCH                           /*lint --e(923, 9078)*/ (*(volatile Ifx_WDT_MATCH*)(0x4220C008u + PPCA_REMAP_OFFSET_2))
/** \brief C00C, Watchdog Counter Match Register 2 (Type A) */
#define REG_WDT_MATCH2                          /*lint --e(923, 9078)*/ (*(volatile Ifx_WDT_MATCH2*)(0x4220C00Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4, Multi-Counter Watchdog Sub-counters 0/1 */
#define REG_MCWDT_STRUCT0_MCWDT_CNTLOW          /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_CNTLOW*)(0x4220D004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Multi-Counter Watchdog Sub-counter 2 */
#define REG_MCWDT_STRUCT0_MCWDT_CNTHIGH         /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_CNTHIGH*)(0x4220D008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Multi-Counter Watchdog Counter Match Register */
#define REG_MCWDT_STRUCT0_MCWDT_MATCH           /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_MATCH*)(0x4220D00Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Multi-Counter Watchdog Counter Configuration */
#define REG_MCWDT_STRUCT0_MCWDT_CONFIG          /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_CONFIG*)(0x4220D010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Multi-Counter Watchdog Counter Control */
#define REG_MCWDT_STRUCT0_MCWDT_CTL             /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_CTL*)(0x4220D014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Multi-Counter Watchdog Counter Interrupt Register */
#define REG_MCWDT_STRUCT0_MCWDT_INTR            /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_INTR*)(0x4220D018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Multi-Counter Watchdog Counter Interrupt Set Register */
#define REG_MCWDT_STRUCT0_MCWDT_INTR_SET        /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_INTR_SET*)(0x4220D01Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Multi-Counter Watchdog Counter Interrupt Mask Register */
#define REG_MCWDT_STRUCT0_MCWDT_INTR_MASK       /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_INTR_MASK*)(0x4220D020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Multi-Counter Watchdog Counter Interrupt Masked Register */
#define REG_MCWDT_STRUCT0_MCWDT_INTR_MASKED     /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_INTR_MASKED*)(0x4220D024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, Multi-Counter Watchdog Counter Lock Register */
#define REG_MCWDT_STRUCT0_MCWDT_LOCK            /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_LOCK*)(0x4220D028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, Multi-Counter Watchdog Counter Lower Limit Register */
#define REG_MCWDT_STRUCT0_MCWDT_LOWER_LIMIT     /*lint --e(923, 9078)*/ (*(volatile Ifx_MCWDT_STRUCT_MCWDT_LOWER_LIMIT*)(0x4220D02Cu + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXSRSS_REG_H_ */
