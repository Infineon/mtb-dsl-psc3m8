/***************************************************************************//**
* \file IfxCANFD_reg.h
*
* \brief
* CANFD address
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
* \defgroup IfxSfr_CANFD_Registers_Cfg CANFD address
* \ingroup IfxSfr_CANFD_Registers
*
*******************************************************************************/

#ifndef _IFXCANFD_REG_H_
#define _IFXCANFD_REG_H_ 1

/******************************************************************************/
#include "IfxCANFD_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_CANFD_Registers_Cfg_BaseAddress
 * \{  */

/** \brief CANFD object */
#define MODULE_CANFD0                           /*lint --e(923, 9078)*/ ((*(Ifx_CANFD*)(0x42800000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CANFD0_CH0                       /*lint --e(923, 9078)*/ ((*(Ifx_CANFD_CH*)(0x42800000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CANFD0_CH1                       /*lint --e(923, 9078)*/ ((*(Ifx_CANFD_CH*)(0x42800200u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CANFD0_CH0_M_TTCAN               /*lint --e(923, 9078)*/ ((*(Ifx_CANFD_CH_M_TTCAN*)(0x42800000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_CANFD0_CH1_M_TTCAN               /*lint --e(923, 9078)*/ ((*(Ifx_CANFD_CH_M_TTCAN*)(0x42800200u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CANFD_Registers_Cfg_CANFD
 * \{  */
/** \brief 0, Core Release Register */
#define REG_CANFD0_CH0_M_TTCAN_CREL             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_CREL*)(0x42800000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Endian Register */
#define REG_CANFD0_CH0_M_TTCAN_ENDN             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_ENDN*)(0x42800004u + PPCA_REMAP_OFFSET_2))
/** \brief C, Data Bit Timing & Prescaler Register */
#define REG_CANFD0_CH0_M_TTCAN_DBTP             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_DBTP*)(0x4280000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Test Register */
#define REG_CANFD0_CH0_M_TTCAN_TEST             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TEST*)(0x42800010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, RAM Watchdog */
#define REG_CANFD0_CH0_M_TTCAN_RWD              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RWD*)(0x42800014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, CC Control Register */
#define REG_CANFD0_CH0_M_TTCAN_CCCR             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_CCCR*)(0x42800018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Nominal Bit Timing & Prescaler Register */
#define REG_CANFD0_CH0_M_TTCAN_NBTP             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_NBTP*)(0x4280001Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Timestamp Counter Configuration */
#define REG_CANFD0_CH0_M_TTCAN_TSCC             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TSCC*)(0x42800020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Timestamp Counter Value */
#define REG_CANFD0_CH0_M_TTCAN_TSCV             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TSCV*)(0x42800024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, Timeout Counter Configuration */
#define REG_CANFD0_CH0_M_TTCAN_TOCC             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TOCC*)(0x42800028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, Timeout Counter Value */
#define REG_CANFD0_CH0_M_TTCAN_TOCV             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TOCV*)(0x4280002Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Error Counter Register */
#define REG_CANFD0_CH0_M_TTCAN_ECR              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_ECR*)(0x42800040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Protocol Status Register */
#define REG_CANFD0_CH0_M_TTCAN_PSR              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_PSR*)(0x42800044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Transmitter Delay Compensation Register */
#define REG_CANFD0_CH0_M_TTCAN_TDCR             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TDCR*)(0x42800048u + PPCA_REMAP_OFFSET_2))
/** \brief 50, Interrupt Register */
#define REG_CANFD0_CH0_M_TTCAN_IR               /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_IR*)(0x42800050u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Interrupt Enable */
#define REG_CANFD0_CH0_M_TTCAN_IE               /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_IE*)(0x42800054u + PPCA_REMAP_OFFSET_2))
/** \brief 58, Interrupt Line Select */
#define REG_CANFD0_CH0_M_TTCAN_ILS              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_ILS*)(0x42800058u + PPCA_REMAP_OFFSET_2))
/** \brief 5C, Interrupt Line Enable */
#define REG_CANFD0_CH0_M_TTCAN_ILE              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_ILE*)(0x4280005Cu + PPCA_REMAP_OFFSET_2))
/** \brief 80, Global Filter Configuration */
#define REG_CANFD0_CH0_M_TTCAN_GFC              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_GFC*)(0x42800080u + PPCA_REMAP_OFFSET_2))
/** \brief 84, Standard ID Filter Configuration */
#define REG_CANFD0_CH0_M_TTCAN_SIDFC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_SIDFC*)(0x42800084u + PPCA_REMAP_OFFSET_2))
/** \brief 88, Extended ID Filter Configuration */
#define REG_CANFD0_CH0_M_TTCAN_XIDFC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_XIDFC*)(0x42800088u + PPCA_REMAP_OFFSET_2))
/** \brief 90, Extended ID AND Mask */
#define REG_CANFD0_CH0_M_TTCAN_XIDAM            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_XIDAM*)(0x42800090u + PPCA_REMAP_OFFSET_2))
/** \brief 94, High Priority Message Status */
#define REG_CANFD0_CH0_M_TTCAN_HPMS             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_HPMS*)(0x42800094u + PPCA_REMAP_OFFSET_2))
/** \brief 98, New Data 1 */
#define REG_CANFD0_CH0_M_TTCAN_NDAT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_NDAT1*)(0x42800098u + PPCA_REMAP_OFFSET_2))
/** \brief 9C, New Data 2 */
#define REG_CANFD0_CH0_M_TTCAN_NDAT2            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_NDAT2*)(0x4280009Cu + PPCA_REMAP_OFFSET_2))
/** \brief A0, Rx FIFO 0 Configuration */
#define REG_CANFD0_CH0_M_TTCAN_RXF0C            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF0C*)(0x428000A0u + PPCA_REMAP_OFFSET_2))
/** \brief A4, Rx FIFO 0 Status */
#define REG_CANFD0_CH0_M_TTCAN_RXF0S            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF0S*)(0x428000A4u + PPCA_REMAP_OFFSET_2))
/** \brief A8, Rx FIFO 0 Acknowledge */
#define REG_CANFD0_CH0_M_TTCAN_RXF0A            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF0A*)(0x428000A8u + PPCA_REMAP_OFFSET_2))
/** \brief AC, Rx Buffer Configuration */
#define REG_CANFD0_CH0_M_TTCAN_RXBC             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXBC*)(0x428000ACu + PPCA_REMAP_OFFSET_2))
/** \brief B0, Rx FIFO 1 Configuration */
#define REG_CANFD0_CH0_M_TTCAN_RXF1C            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF1C*)(0x428000B0u + PPCA_REMAP_OFFSET_2))
/** \brief B4, Rx FIFO 1 Status */
#define REG_CANFD0_CH0_M_TTCAN_RXF1S            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF1S*)(0x428000B4u + PPCA_REMAP_OFFSET_2))
/** \brief B8, Rx FIFO 1 Acknowledge */
#define REG_CANFD0_CH0_M_TTCAN_RXF1A            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF1A*)(0x428000B8u + PPCA_REMAP_OFFSET_2))
/** \brief BC, Rx Buffer / FIFO Element Size Configuration */
#define REG_CANFD0_CH0_M_TTCAN_RXESC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXESC*)(0x428000BCu + PPCA_REMAP_OFFSET_2))
/** \brief C0, Tx Buffer Configuration */
#define REG_CANFD0_CH0_M_TTCAN_TXBC             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBC*)(0x428000C0u + PPCA_REMAP_OFFSET_2))
/** \brief C4, Tx FIFO/Queue Status */
#define REG_CANFD0_CH0_M_TTCAN_TXFQS            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXFQS*)(0x428000C4u + PPCA_REMAP_OFFSET_2))
/** \brief C8, Tx Buffer Element Size Configuration */
#define REG_CANFD0_CH0_M_TTCAN_TXESC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXESC*)(0x428000C8u + PPCA_REMAP_OFFSET_2))
/** \brief CC, Tx Buffer Request Pending */
#define REG_CANFD0_CH0_M_TTCAN_TXBRP            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBRP*)(0x428000CCu + PPCA_REMAP_OFFSET_2))
/** \brief D0, Tx Buffer Add Request */
#define REG_CANFD0_CH0_M_TTCAN_TXBAR            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBAR*)(0x428000D0u + PPCA_REMAP_OFFSET_2))
/** \brief D4, Tx Buffer Cancellation Request */
#define REG_CANFD0_CH0_M_TTCAN_TXBCR            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBCR*)(0x428000D4u + PPCA_REMAP_OFFSET_2))
/** \brief D8, Tx Buffer Transmission Occurred */
#define REG_CANFD0_CH0_M_TTCAN_TXBTO            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBTO*)(0x428000D8u + PPCA_REMAP_OFFSET_2))
/** \brief DC, Tx Buffer Cancellation Finished */
#define REG_CANFD0_CH0_M_TTCAN_TXBCF            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBCF*)(0x428000DCu + PPCA_REMAP_OFFSET_2))
/** \brief E0, Tx Buffer Transmission Interrupt Enable */
#define REG_CANFD0_CH0_M_TTCAN_TXBTIE           /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBTIE*)(0x428000E0u + PPCA_REMAP_OFFSET_2))
/** \brief E4, Tx Buffer Cancellation Finished Interrupt Enable */
#define REG_CANFD0_CH0_M_TTCAN_TXBCIE           /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBCIE*)(0x428000E4u + PPCA_REMAP_OFFSET_2))
/** \brief F0, Tx Event FIFO Configuration */
#define REG_CANFD0_CH0_M_TTCAN_TXEFC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXEFC*)(0x428000F0u + PPCA_REMAP_OFFSET_2))
/** \brief F4, Tx Event FIFO Status */
#define REG_CANFD0_CH0_M_TTCAN_TXEFS            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXEFS*)(0x428000F4u + PPCA_REMAP_OFFSET_2))
/** \brief F8, Tx Event FIFO Acknowledge */
#define REG_CANFD0_CH0_M_TTCAN_TXEFA            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXEFA*)(0x428000F8u + PPCA_REMAP_OFFSET_2))
/** \brief 100, TT Trigger Memory Configuration */
#define REG_CANFD0_CH0_M_TTCAN_TTTMC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTTMC*)(0x42800100u + PPCA_REMAP_OFFSET_2))
/** \brief 104, TT Reference Message Configuration */
#define REG_CANFD0_CH0_M_TTCAN_TTRMC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTRMC*)(0x42800104u + PPCA_REMAP_OFFSET_2))
/** \brief 108, TT Operation Configuration */
#define REG_CANFD0_CH0_M_TTCAN_TTOCF            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTOCF*)(0x42800108u + PPCA_REMAP_OFFSET_2))
/** \brief 10C, TT Matrix Limits */
#define REG_CANFD0_CH0_M_TTCAN_TTMLM            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTMLM*)(0x4280010Cu + PPCA_REMAP_OFFSET_2))
/** \brief 110, TUR Configuration */
#define REG_CANFD0_CH0_M_TTCAN_TURCF            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TURCF*)(0x42800110u + PPCA_REMAP_OFFSET_2))
/** \brief 114, TT Operation Control */
#define REG_CANFD0_CH0_M_TTCAN_TTOCN            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTOCN*)(0x42800114u + PPCA_REMAP_OFFSET_2))
/** \brief 118, TT Global Time Preset */
#define REG_CANFD0_CH0_M_TTCAN_TTGTP            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTGTP*)(0x42800118u + PPCA_REMAP_OFFSET_2))
/** \brief 11C, TT Time Mark */
#define REG_CANFD0_CH0_M_TTCAN_TTTMK            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTTMK*)(0x4280011Cu + PPCA_REMAP_OFFSET_2))
/** \brief 120, TT Interrupt Register */
#define REG_CANFD0_CH0_M_TTCAN_TTIR             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTIR*)(0x42800120u + PPCA_REMAP_OFFSET_2))
/** \brief 124, TT Interrupt Enable */
#define REG_CANFD0_CH0_M_TTCAN_TTIE             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTIE*)(0x42800124u + PPCA_REMAP_OFFSET_2))
/** \brief 128, TT Interrupt Line Select */
#define REG_CANFD0_CH0_M_TTCAN_TTILS            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTILS*)(0x42800128u + PPCA_REMAP_OFFSET_2))
/** \brief 12C, TT Operation Status */
#define REG_CANFD0_CH0_M_TTCAN_TTOST            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTOST*)(0x4280012Cu + PPCA_REMAP_OFFSET_2))
/** \brief 130, TUR Numerator Actual */
#define REG_CANFD0_CH0_M_TTCAN_TURNA            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TURNA*)(0x42800130u + PPCA_REMAP_OFFSET_2))
/** \brief 134, TT Local & Global Time */
#define REG_CANFD0_CH0_M_TTCAN_TTLGT            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTLGT*)(0x42800134u + PPCA_REMAP_OFFSET_2))
/** \brief 138, TT Cycle Time & Count */
#define REG_CANFD0_CH0_M_TTCAN_TTCTC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTCTC*)(0x42800138u + PPCA_REMAP_OFFSET_2))
/** \brief 13C, TT Capture Time */
#define REG_CANFD0_CH0_M_TTCAN_TTCPT            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTCPT*)(0x4280013Cu + PPCA_REMAP_OFFSET_2))
/** \brief 140, TT Cycle Sync Mark */
#define REG_CANFD0_CH0_M_TTCAN_TTCSM            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTCSM*)(0x42800140u + PPCA_REMAP_OFFSET_2))
/** \brief 180, Receive FIFO Top control */
#define REG_CANFD0_CH0_RXFTOP_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXFTOP_CTL*)(0x42800180u + PPCA_REMAP_OFFSET_2))
/** \brief 1A0, Receive FIFO 0 Top Status */
#define REG_CANFD0_CH0_RXFTOP0_STAT             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXFTOP0_STAT*)(0x428001A0u + PPCA_REMAP_OFFSET_2))
/** \brief 1A8, Receive FIFO 0 Top Data */
#define REG_CANFD0_CH0_RXFTOP0_DATA             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXFTOP0_DATA*)(0x428001A8u + PPCA_REMAP_OFFSET_2))
/** \brief 1B0, Receive FIFO 1 Top Status */
#define REG_CANFD0_CH0_RXFTOP1_STAT             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXFTOP1_STAT*)(0x428001B0u + PPCA_REMAP_OFFSET_2))
/** \brief 1B8, Receive FIFO 1 Top Data */
#define REG_CANFD0_CH0_RXFTOP1_DATA             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXFTOP1_DATA*)(0x428001B8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Core Release Register */
#define REG_CANFD0_CH1_M_TTCAN_CREL             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_CREL*)(0x42800200u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Endian Register */
#define REG_CANFD0_CH1_M_TTCAN_ENDN             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_ENDN*)(0x42800204u + PPCA_REMAP_OFFSET_2))
/** \brief C, Data Bit Timing & Prescaler Register */
#define REG_CANFD0_CH1_M_TTCAN_DBTP             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_DBTP*)(0x4280020Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Test Register */
#define REG_CANFD0_CH1_M_TTCAN_TEST             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TEST*)(0x42800210u + PPCA_REMAP_OFFSET_2))
/** \brief 14, RAM Watchdog */
#define REG_CANFD0_CH1_M_TTCAN_RWD              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RWD*)(0x42800214u + PPCA_REMAP_OFFSET_2))
/** \brief 18, CC Control Register */
#define REG_CANFD0_CH1_M_TTCAN_CCCR             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_CCCR*)(0x42800218u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Nominal Bit Timing & Prescaler Register */
#define REG_CANFD0_CH1_M_TTCAN_NBTP             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_NBTP*)(0x4280021Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Timestamp Counter Configuration */
#define REG_CANFD0_CH1_M_TTCAN_TSCC             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TSCC*)(0x42800220u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Timestamp Counter Value */
#define REG_CANFD0_CH1_M_TTCAN_TSCV             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TSCV*)(0x42800224u + PPCA_REMAP_OFFSET_2))
/** \brief 28, Timeout Counter Configuration */
#define REG_CANFD0_CH1_M_TTCAN_TOCC             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TOCC*)(0x42800228u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, Timeout Counter Value */
#define REG_CANFD0_CH1_M_TTCAN_TOCV             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TOCV*)(0x4280022Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, Error Counter Register */
#define REG_CANFD0_CH1_M_TTCAN_ECR              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_ECR*)(0x42800240u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Protocol Status Register */
#define REG_CANFD0_CH1_M_TTCAN_PSR              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_PSR*)(0x42800244u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Transmitter Delay Compensation Register */
#define REG_CANFD0_CH1_M_TTCAN_TDCR             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TDCR*)(0x42800248u + PPCA_REMAP_OFFSET_2))
/** \brief 50, Interrupt Register */
#define REG_CANFD0_CH1_M_TTCAN_IR               /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_IR*)(0x42800250u + PPCA_REMAP_OFFSET_2))
/** \brief 54, Interrupt Enable */
#define REG_CANFD0_CH1_M_TTCAN_IE               /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_IE*)(0x42800254u + PPCA_REMAP_OFFSET_2))
/** \brief 58, Interrupt Line Select */
#define REG_CANFD0_CH1_M_TTCAN_ILS              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_ILS*)(0x42800258u + PPCA_REMAP_OFFSET_2))
/** \brief 5C, Interrupt Line Enable */
#define REG_CANFD0_CH1_M_TTCAN_ILE              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_ILE*)(0x4280025Cu + PPCA_REMAP_OFFSET_2))
/** \brief 80, Global Filter Configuration */
#define REG_CANFD0_CH1_M_TTCAN_GFC              /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_GFC*)(0x42800280u + PPCA_REMAP_OFFSET_2))
/** \brief 84, Standard ID Filter Configuration */
#define REG_CANFD0_CH1_M_TTCAN_SIDFC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_SIDFC*)(0x42800284u + PPCA_REMAP_OFFSET_2))
/** \brief 88, Extended ID Filter Configuration */
#define REG_CANFD0_CH1_M_TTCAN_XIDFC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_XIDFC*)(0x42800288u + PPCA_REMAP_OFFSET_2))
/** \brief 90, Extended ID AND Mask */
#define REG_CANFD0_CH1_M_TTCAN_XIDAM            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_XIDAM*)(0x42800290u + PPCA_REMAP_OFFSET_2))
/** \brief 94, High Priority Message Status */
#define REG_CANFD0_CH1_M_TTCAN_HPMS             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_HPMS*)(0x42800294u + PPCA_REMAP_OFFSET_2))
/** \brief 98, New Data 1 */
#define REG_CANFD0_CH1_M_TTCAN_NDAT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_NDAT1*)(0x42800298u + PPCA_REMAP_OFFSET_2))
/** \brief 9C, New Data 2 */
#define REG_CANFD0_CH1_M_TTCAN_NDAT2            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_NDAT2*)(0x4280029Cu + PPCA_REMAP_OFFSET_2))
/** \brief A0, Rx FIFO 0 Configuration */
#define REG_CANFD0_CH1_M_TTCAN_RXF0C            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF0C*)(0x428002A0u + PPCA_REMAP_OFFSET_2))
/** \brief A4, Rx FIFO 0 Status */
#define REG_CANFD0_CH1_M_TTCAN_RXF0S            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF0S*)(0x428002A4u + PPCA_REMAP_OFFSET_2))
/** \brief A8, Rx FIFO 0 Acknowledge */
#define REG_CANFD0_CH1_M_TTCAN_RXF0A            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF0A*)(0x428002A8u + PPCA_REMAP_OFFSET_2))
/** \brief AC, Rx Buffer Configuration */
#define REG_CANFD0_CH1_M_TTCAN_RXBC             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXBC*)(0x428002ACu + PPCA_REMAP_OFFSET_2))
/** \brief B0, Rx FIFO 1 Configuration */
#define REG_CANFD0_CH1_M_TTCAN_RXF1C            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF1C*)(0x428002B0u + PPCA_REMAP_OFFSET_2))
/** \brief B4, Rx FIFO 1 Status */
#define REG_CANFD0_CH1_M_TTCAN_RXF1S            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF1S*)(0x428002B4u + PPCA_REMAP_OFFSET_2))
/** \brief B8, Rx FIFO 1 Acknowledge */
#define REG_CANFD0_CH1_M_TTCAN_RXF1A            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXF1A*)(0x428002B8u + PPCA_REMAP_OFFSET_2))
/** \brief BC, Rx Buffer / FIFO Element Size Configuration */
#define REG_CANFD0_CH1_M_TTCAN_RXESC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXESC*)(0x428002BCu + PPCA_REMAP_OFFSET_2))
/** \brief C0, Tx Buffer Configuration */
#define REG_CANFD0_CH1_M_TTCAN_TXBC             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBC*)(0x428002C0u + PPCA_REMAP_OFFSET_2))
/** \brief C4, Tx FIFO/Queue Status */
#define REG_CANFD0_CH1_M_TTCAN_TXFQS            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXFQS*)(0x428002C4u + PPCA_REMAP_OFFSET_2))
/** \brief C8, Tx Buffer Element Size Configuration */
#define REG_CANFD0_CH1_M_TTCAN_TXESC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXESC*)(0x428002C8u + PPCA_REMAP_OFFSET_2))
/** \brief CC, Tx Buffer Request Pending */
#define REG_CANFD0_CH1_M_TTCAN_TXBRP            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBRP*)(0x428002CCu + PPCA_REMAP_OFFSET_2))
/** \brief D0, Tx Buffer Add Request */
#define REG_CANFD0_CH1_M_TTCAN_TXBAR            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBAR*)(0x428002D0u + PPCA_REMAP_OFFSET_2))
/** \brief D4, Tx Buffer Cancellation Request */
#define REG_CANFD0_CH1_M_TTCAN_TXBCR            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBCR*)(0x428002D4u + PPCA_REMAP_OFFSET_2))
/** \brief D8, Tx Buffer Transmission Occurred */
#define REG_CANFD0_CH1_M_TTCAN_TXBTO            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBTO*)(0x428002D8u + PPCA_REMAP_OFFSET_2))
/** \brief DC, Tx Buffer Cancellation Finished */
#define REG_CANFD0_CH1_M_TTCAN_TXBCF            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBCF*)(0x428002DCu + PPCA_REMAP_OFFSET_2))
/** \brief E0, Tx Buffer Transmission Interrupt Enable */
#define REG_CANFD0_CH1_M_TTCAN_TXBTIE           /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBTIE*)(0x428002E0u + PPCA_REMAP_OFFSET_2))
/** \brief E4, Tx Buffer Cancellation Finished Interrupt Enable */
#define REG_CANFD0_CH1_M_TTCAN_TXBCIE           /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXBCIE*)(0x428002E4u + PPCA_REMAP_OFFSET_2))
/** \brief F0, Tx Event FIFO Configuration */
#define REG_CANFD0_CH1_M_TTCAN_TXEFC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXEFC*)(0x428002F0u + PPCA_REMAP_OFFSET_2))
/** \brief F4, Tx Event FIFO Status */
#define REG_CANFD0_CH1_M_TTCAN_TXEFS            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXEFS*)(0x428002F4u + PPCA_REMAP_OFFSET_2))
/** \brief F8, Tx Event FIFO Acknowledge */
#define REG_CANFD0_CH1_M_TTCAN_TXEFA            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TXEFA*)(0x428002F8u + PPCA_REMAP_OFFSET_2))
/** \brief 100, TT Trigger Memory Configuration */
#define REG_CANFD0_CH1_M_TTCAN_TTTMC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTTMC*)(0x42800300u + PPCA_REMAP_OFFSET_2))
/** \brief 104, TT Reference Message Configuration */
#define REG_CANFD0_CH1_M_TTCAN_TTRMC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTRMC*)(0x42800304u + PPCA_REMAP_OFFSET_2))
/** \brief 108, TT Operation Configuration */
#define REG_CANFD0_CH1_M_TTCAN_TTOCF            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTOCF*)(0x42800308u + PPCA_REMAP_OFFSET_2))
/** \brief 10C, TT Matrix Limits */
#define REG_CANFD0_CH1_M_TTCAN_TTMLM            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTMLM*)(0x4280030Cu + PPCA_REMAP_OFFSET_2))
/** \brief 110, TUR Configuration */
#define REG_CANFD0_CH1_M_TTCAN_TURCF            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TURCF*)(0x42800310u + PPCA_REMAP_OFFSET_2))
/** \brief 114, TT Operation Control */
#define REG_CANFD0_CH1_M_TTCAN_TTOCN            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTOCN*)(0x42800314u + PPCA_REMAP_OFFSET_2))
/** \brief 118, TT Global Time Preset */
#define REG_CANFD0_CH1_M_TTCAN_TTGTP            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTGTP*)(0x42800318u + PPCA_REMAP_OFFSET_2))
/** \brief 11C, TT Time Mark */
#define REG_CANFD0_CH1_M_TTCAN_TTTMK            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTTMK*)(0x4280031Cu + PPCA_REMAP_OFFSET_2))
/** \brief 120, TT Interrupt Register */
#define REG_CANFD0_CH1_M_TTCAN_TTIR             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTIR*)(0x42800320u + PPCA_REMAP_OFFSET_2))
/** \brief 124, TT Interrupt Enable */
#define REG_CANFD0_CH1_M_TTCAN_TTIE             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTIE*)(0x42800324u + PPCA_REMAP_OFFSET_2))
/** \brief 128, TT Interrupt Line Select */
#define REG_CANFD0_CH1_M_TTCAN_TTILS            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTILS*)(0x42800328u + PPCA_REMAP_OFFSET_2))
/** \brief 12C, TT Operation Status */
#define REG_CANFD0_CH1_M_TTCAN_TTOST            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTOST*)(0x4280032Cu + PPCA_REMAP_OFFSET_2))
/** \brief 130, TUR Numerator Actual */
#define REG_CANFD0_CH1_M_TTCAN_TURNA            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TURNA*)(0x42800330u + PPCA_REMAP_OFFSET_2))
/** \brief 134, TT Local & Global Time */
#define REG_CANFD0_CH1_M_TTCAN_TTLGT            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTLGT*)(0x42800334u + PPCA_REMAP_OFFSET_2))
/** \brief 138, TT Cycle Time & Count */
#define REG_CANFD0_CH1_M_TTCAN_TTCTC            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTCTC*)(0x42800338u + PPCA_REMAP_OFFSET_2))
/** \brief 13C, TT Capture Time */
#define REG_CANFD0_CH1_M_TTCAN_TTCPT            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTCPT*)(0x4280033Cu + PPCA_REMAP_OFFSET_2))
/** \brief 140, TT Cycle Sync Mark */
#define REG_CANFD0_CH1_M_TTCAN_TTCSM            /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_TTCSM*)(0x42800340u + PPCA_REMAP_OFFSET_2))
/** \brief 180, Receive FIFO Top control */
#define REG_CANFD0_CH1_RXFTOP_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXFTOP_CTL*)(0x42800380u + PPCA_REMAP_OFFSET_2))
/** \brief 1A0, Receive FIFO 0 Top Status */
#define REG_CANFD0_CH1_RXFTOP0_STAT             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXFTOP0_STAT*)(0x428003A0u + PPCA_REMAP_OFFSET_2))
/** \brief 1A8, Receive FIFO 0 Top Data */
#define REG_CANFD0_CH1_RXFTOP0_DATA             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXFTOP0_DATA*)(0x428003A8u + PPCA_REMAP_OFFSET_2))
/** \brief 1B0, Receive FIFO 1 Top Status */
#define REG_CANFD0_CH1_RXFTOP1_STAT             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXFTOP1_STAT*)(0x428003B0u + PPCA_REMAP_OFFSET_2))
/** \brief 1B8, Receive FIFO 1 Top Data */
#define REG_CANFD0_CH1_RXFTOP1_DATA             /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CH_RXFTOP1_DATA*)(0x428003B8u + PPCA_REMAP_OFFSET_2))
/** \brief 1000, Global CAN control register */
#define REG_CANFD0_CTL                          /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_CTL*)(0x42801000u + PPCA_REMAP_OFFSET_2))
/** \brief 1004, Global CAN status register */
#define REG_CANFD0_STATUS                       /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_STATUS*)(0x42801004u + PPCA_REMAP_OFFSET_2))
/** \brief 1010, Consolidated interrupt0 cause register */
#define REG_CANFD0_INTR0_CAUSE                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_INTR0_CAUSE*)(0x42801010u + PPCA_REMAP_OFFSET_2))
/** \brief 1014, Consolidated interrupt1 cause register */
#define REG_CANFD0_INTR1_CAUSE                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_INTR1_CAUSE*)(0x42801014u + PPCA_REMAP_OFFSET_2))
/** \brief 1020, Time Stamp control register */
#define REG_CANFD0_TS_CTL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_TS_CTL*)(0x42801020u + PPCA_REMAP_OFFSET_2))
/** \brief 1024, Time Stamp counter value */
#define REG_CANFD0_TS_CNT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_CANFD_TS_CNT*)(0x42801024u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCANFD_REG_H_ */
