/***************************************************************************//**
* \file IfxTCPWM_reg.h
*
* \brief
* TCPWM address
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
* \defgroup IfxSfr_TCPWM_Registers_Cfg TCPWM address
* \ingroup IfxSfr_TCPWM_Registers
*
*******************************************************************************/

#ifndef _IFXTCPWM_REG_H_
#define _IFXTCPWM_REG_H_ 1

/******************************************************************************/
#include "IfxTCPWM_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_TCPWM_Registers_Cfg_BaseAddress
 * \{  */

/** \brief TCPWM object */
#define MODULE_TCPWM0                           /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM*)(0x42500000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_TCPWM0_GRP0                      /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM_GRP*)(0x42500000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_TCPWM0_GRP1                      /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM_GRP*)(0x42510000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_TCPWM0_GRP0_CNT0                 /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM_GRP_CNT*)(0x42500000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_TCPWM0_GRP0_CNT1                 /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM_GRP_CNT*)(0x42500100u + PPCA_REMAP_OFFSET_2)))
#define MODULE_TCPWM0_GRP1_CNT0                 /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM_GRP_CNT*)(0x42510000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_TCPWM0_GRP1_CNT1                 /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM_GRP_CNT*)(0x42510100u + PPCA_REMAP_OFFSET_2)))
#define MODULE_TCPWM0_TR_ALL_GF                 /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM_TR_ALL_GF*)(0x42580000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_TCPWM0_TR_ALL_SYNC_BYPASS        /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM_TR_ALL_SYNC_BYPASS*)(0x42590000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_TCPWM0_MOTIF_GRP0                /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM_MOTIF_GRP*)(0x425A0000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_TCPWM0_MOTIF_GRP1                /*lint --e(923, 9078)*/ ((*(Ifx_TCPWM_MOTIF_GRP*)(0x425A4000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_TCPWM_Registers_Cfg_TCPWM
 * \{  */
/** \brief 0, Counter control register */
#define REG_TCPWM0_GRP0_CNT0_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CTRL*)(0x42500000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Counter status register */
#define REG_TCPWM0_GRP0_CNT0_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_STATUS*)(0x42500004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Counter count register */
#define REG_TCPWM0_GRP0_CNT0_COUNTER            /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_COUNTER*)(0x42500008u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Counter compare/capture 0 register */
#define REG_TCPWM0_GRP0_CNT0_CC0                /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CC0*)(0x42500010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_TCPWM0_GRP0_CNT0_CC0_BUFF           /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CC0_BUFF*)(0x42500014u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Counter period register */
#define REG_TCPWM0_GRP0_CNT0_PERIOD             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PERIOD*)(0x42500020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Counter buffered period register */
#define REG_TCPWM0_GRP0_CNT0_PERIOD_BUFF        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PERIOD_BUFF*)(0x42500024u + PPCA_REMAP_OFFSET_2))
/** \brief 30, Counter PWM dead time register */
#define REG_TCPWM0_GRP0_CNT0_DT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_DT*)(0x42500030u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Counter buffered PWM dead time register */
#define REG_TCPWM0_GRP0_CNT0_DT_BUFF            /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_DT_BUFF*)(0x42500034u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Counter prescalar register */
#define REG_TCPWM0_GRP0_CNT0_PS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PS*)(0x42500038u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Counter trigger command register */
#define REG_TCPWM0_GRP0_CNT0_TR_CMD             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_CMD*)(0x42500040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Counter input trigger selection register 0 */
#define REG_TCPWM0_GRP0_CNT0_TR_IN_SEL0         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_SEL0*)(0x42500044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Counter input trigger selection register 1 */
#define REG_TCPWM0_GRP0_CNT0_TR_IN_SEL1         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_SEL1*)(0x42500048u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Counter input trigger edge selection register */
#define REG_TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL     /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)(0x4250004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, Counter trigger PWM control register */
#define REG_TCPWM0_GRP0_CNT0_TR_PWM_CTRL        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL*)(0x42500050u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Counter output trigger selection register */
#define REG_TCPWM0_GRP0_CNT0_TR_OUT_SEL         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_OUT_SEL*)(0x42500054u + PPCA_REMAP_OFFSET_2))
/** \brief 70, Interrupt request register */
#define REG_TCPWM0_GRP0_CNT0_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR*)(0x42500070u + PPCA_REMAP_OFFSET_2))
/** \brief 74, Interrupt set request register */
#define REG_TCPWM0_GRP0_CNT0_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_SET*)(0x42500074u + PPCA_REMAP_OFFSET_2))
/** \brief 78, Interrupt mask register */
#define REG_TCPWM0_GRP0_CNT0_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_MASK*)(0x42500078u + PPCA_REMAP_OFFSET_2))
/** \brief 7C, Interrupt masked request register */
#define REG_TCPWM0_GRP0_CNT0_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_MASKED*)(0x4250007Cu + PPCA_REMAP_OFFSET_2))
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_TCPWM0_GRP0_CNT0_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)(0x425000A4u + PPCA_REMAP_OFFSET_2))
/** \brief B4, Counter control register 2 */
#define REG_TCPWM0_GRP0_CNT0_CTRL2              /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CTRL2*)(0x425000B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Counter control register */
#define REG_TCPWM0_GRP0_CNT1_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CTRL*)(0x42500100u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Counter status register */
#define REG_TCPWM0_GRP0_CNT1_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_STATUS*)(0x42500104u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Counter count register */
#define REG_TCPWM0_GRP0_CNT1_COUNTER            /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_COUNTER*)(0x42500108u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Counter compare/capture 0 register */
#define REG_TCPWM0_GRP0_CNT1_CC0                /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CC0*)(0x42500110u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_TCPWM0_GRP0_CNT1_CC0_BUFF           /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CC0_BUFF*)(0x42500114u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Counter period register */
#define REG_TCPWM0_GRP0_CNT1_PERIOD             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PERIOD*)(0x42500120u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Counter buffered period register */
#define REG_TCPWM0_GRP0_CNT1_PERIOD_BUFF        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PERIOD_BUFF*)(0x42500124u + PPCA_REMAP_OFFSET_2))
/** \brief 30, Counter PWM dead time register */
#define REG_TCPWM0_GRP0_CNT1_DT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_DT*)(0x42500130u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Counter buffered PWM dead time register */
#define REG_TCPWM0_GRP0_CNT1_DT_BUFF            /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_DT_BUFF*)(0x42500134u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Counter prescalar register */
#define REG_TCPWM0_GRP0_CNT1_PS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PS*)(0x42500138u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Counter trigger command register */
#define REG_TCPWM0_GRP0_CNT1_TR_CMD             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_CMD*)(0x42500140u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Counter input trigger selection register 0 */
#define REG_TCPWM0_GRP0_CNT1_TR_IN_SEL0         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_SEL0*)(0x42500144u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Counter input trigger selection register 1 */
#define REG_TCPWM0_GRP0_CNT1_TR_IN_SEL1         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_SEL1*)(0x42500148u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Counter input trigger edge selection register */
#define REG_TCPWM0_GRP0_CNT1_TR_IN_EDGE_SEL     /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)(0x4250014Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, Counter trigger PWM control register */
#define REG_TCPWM0_GRP0_CNT1_TR_PWM_CTRL        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL*)(0x42500150u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Counter output trigger selection register */
#define REG_TCPWM0_GRP0_CNT1_TR_OUT_SEL         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_OUT_SEL*)(0x42500154u + PPCA_REMAP_OFFSET_2))
/** \brief 70, Interrupt request register */
#define REG_TCPWM0_GRP0_CNT1_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR*)(0x42500170u + PPCA_REMAP_OFFSET_2))
/** \brief 74, Interrupt set request register */
#define REG_TCPWM0_GRP0_CNT1_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_SET*)(0x42500174u + PPCA_REMAP_OFFSET_2))
/** \brief 78, Interrupt mask register */
#define REG_TCPWM0_GRP0_CNT1_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_MASK*)(0x42500178u + PPCA_REMAP_OFFSET_2))
/** \brief 7C, Interrupt masked request register */
#define REG_TCPWM0_GRP0_CNT1_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_MASKED*)(0x4250017Cu + PPCA_REMAP_OFFSET_2))
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_TCPWM0_GRP0_CNT1_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)(0x425001A4u + PPCA_REMAP_OFFSET_2))
/** \brief B4, Counter control register 2 */
#define REG_TCPWM0_GRP0_CNT1_CTRL2              /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CTRL2*)(0x425001B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Counter control register */
#define REG_TCPWM0_GRP1_CNT0_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CTRL*)(0x42510000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Counter status register */
#define REG_TCPWM0_GRP1_CNT0_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_STATUS*)(0x42510004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Counter count register */
#define REG_TCPWM0_GRP1_CNT0_COUNTER            /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_COUNTER*)(0x42510008u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Counter compare/capture 0 register */
#define REG_TCPWM0_GRP1_CNT0_CC0                /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CC0*)(0x42510010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_TCPWM0_GRP1_CNT0_CC0_BUFF           /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CC0_BUFF*)(0x42510014u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Counter period register */
#define REG_TCPWM0_GRP1_CNT0_PERIOD             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PERIOD*)(0x42510020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Counter buffered period register */
#define REG_TCPWM0_GRP1_CNT0_PERIOD_BUFF        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PERIOD_BUFF*)(0x42510024u + PPCA_REMAP_OFFSET_2))
/** \brief 30, Counter PWM dead time register */
#define REG_TCPWM0_GRP1_CNT0_DT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_DT*)(0x42510030u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Counter buffered PWM dead time register */
#define REG_TCPWM0_GRP1_CNT0_DT_BUFF            /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_DT_BUFF*)(0x42510034u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Counter prescalar register */
#define REG_TCPWM0_GRP1_CNT0_PS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PS*)(0x42510038u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Counter trigger command register */
#define REG_TCPWM0_GRP1_CNT0_TR_CMD             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_CMD*)(0x42510040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Counter input trigger selection register 0 */
#define REG_TCPWM0_GRP1_CNT0_TR_IN_SEL0         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_SEL0*)(0x42510044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Counter input trigger selection register 1 */
#define REG_TCPWM0_GRP1_CNT0_TR_IN_SEL1         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_SEL1*)(0x42510048u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Counter input trigger edge selection register */
#define REG_TCPWM0_GRP1_CNT0_TR_IN_EDGE_SEL     /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)(0x4251004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, Counter trigger PWM control register */
#define REG_TCPWM0_GRP1_CNT0_TR_PWM_CTRL        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL*)(0x42510050u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Counter output trigger selection register */
#define REG_TCPWM0_GRP1_CNT0_TR_OUT_SEL         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_OUT_SEL*)(0x42510054u + PPCA_REMAP_OFFSET_2))
/** \brief 70, Interrupt request register */
#define REG_TCPWM0_GRP1_CNT0_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR*)(0x42510070u + PPCA_REMAP_OFFSET_2))
/** \brief 74, Interrupt set request register */
#define REG_TCPWM0_GRP1_CNT0_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_SET*)(0x42510074u + PPCA_REMAP_OFFSET_2))
/** \brief 78, Interrupt mask register */
#define REG_TCPWM0_GRP1_CNT0_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_MASK*)(0x42510078u + PPCA_REMAP_OFFSET_2))
/** \brief 7C, Interrupt masked request register */
#define REG_TCPWM0_GRP1_CNT0_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_MASKED*)(0x4251007Cu + PPCA_REMAP_OFFSET_2))
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_TCPWM0_GRP1_CNT0_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)(0x425100A4u + PPCA_REMAP_OFFSET_2))
/** \brief B4, Counter control register 2 */
#define REG_TCPWM0_GRP1_CNT0_CTRL2              /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CTRL2*)(0x425100B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Counter control register */
#define REG_TCPWM0_GRP1_CNT1_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CTRL*)(0x42510100u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Counter status register */
#define REG_TCPWM0_GRP1_CNT1_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_STATUS*)(0x42510104u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Counter count register */
#define REG_TCPWM0_GRP1_CNT1_COUNTER            /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_COUNTER*)(0x42510108u + PPCA_REMAP_OFFSET_2))
/** \brief 10, Counter compare/capture 0 register */
#define REG_TCPWM0_GRP1_CNT1_CC0                /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CC0*)(0x42510110u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_TCPWM0_GRP1_CNT1_CC0_BUFF           /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CC0_BUFF*)(0x42510114u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Counter period register */
#define REG_TCPWM0_GRP1_CNT1_PERIOD             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PERIOD*)(0x42510120u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Counter buffered period register */
#define REG_TCPWM0_GRP1_CNT1_PERIOD_BUFF        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PERIOD_BUFF*)(0x42510124u + PPCA_REMAP_OFFSET_2))
/** \brief 30, Counter PWM dead time register */
#define REG_TCPWM0_GRP1_CNT1_DT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_DT*)(0x42510130u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Counter buffered PWM dead time register */
#define REG_TCPWM0_GRP1_CNT1_DT_BUFF            /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_DT_BUFF*)(0x42510134u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Counter prescalar register */
#define REG_TCPWM0_GRP1_CNT1_PS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_PS*)(0x42510138u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Counter trigger command register */
#define REG_TCPWM0_GRP1_CNT1_TR_CMD             /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_CMD*)(0x42510140u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Counter input trigger selection register 0 */
#define REG_TCPWM0_GRP1_CNT1_TR_IN_SEL0         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_SEL0*)(0x42510144u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Counter input trigger selection register 1 */
#define REG_TCPWM0_GRP1_CNT1_TR_IN_SEL1         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_SEL1*)(0x42510148u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Counter input trigger edge selection register */
#define REG_TCPWM0_GRP1_CNT1_TR_IN_EDGE_SEL     /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)(0x4251014Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, Counter trigger PWM control register */
#define REG_TCPWM0_GRP1_CNT1_TR_PWM_CTRL        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL*)(0x42510150u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Counter output trigger selection register */
#define REG_TCPWM0_GRP1_CNT1_TR_OUT_SEL         /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_OUT_SEL*)(0x42510154u + PPCA_REMAP_OFFSET_2))
/** \brief 70, Interrupt request register */
#define REG_TCPWM0_GRP1_CNT1_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR*)(0x42510170u + PPCA_REMAP_OFFSET_2))
/** \brief 74, Interrupt set request register */
#define REG_TCPWM0_GRP1_CNT1_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_SET*)(0x42510174u + PPCA_REMAP_OFFSET_2))
/** \brief 78, Interrupt mask register */
#define REG_TCPWM0_GRP1_CNT1_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_MASK*)(0x42510178u + PPCA_REMAP_OFFSET_2))
/** \brief 7C, Interrupt masked request register */
#define REG_TCPWM0_GRP1_CNT1_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_INTR_MASKED*)(0x4251017Cu + PPCA_REMAP_OFFSET_2))
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_TCPWM0_GRP1_CNT1_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)(0x425101A4u + PPCA_REMAP_OFFSET_2))
/** \brief B4, Counter control register 2 */
#define REG_TCPWM0_GRP1_CNT1_CTRL2              /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_GRP_CNT_CTRL2*)(0x425101B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Trigger Sync bypass for group trigger */
#define REG_TCPWM0_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS*)(0x42590000u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXTCPWM_REG_H_ */
