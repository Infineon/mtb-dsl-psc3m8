/***************************************************************************//**
* \file IfxSCB_reg.h
*
* \brief
* SCB address
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
* \defgroup IfxSfr_SCB_Registers_Cfg SCB address
* \ingroup IfxSfr_SCB_Registers
*
*******************************************************************************/

#ifndef _IFXSCB_REG_H_
#define _IFXSCB_REG_H_ 1

/******************************************************************************/
#include "IfxSCB_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_SCB_Registers_Cfg_BaseAddress
 * \{  */

/** \brief SCB object */
#define MODULE_SCB0                             /*lint --e(923, 9078)*/ ((*(Ifx_SCB*)(0x42820000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_SCB1                             /*lint --e(923, 9078)*/ ((*(Ifx_SCB*)(0x42840000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_SCB2                             /*lint --e(923, 9078)*/ ((*(Ifx_SCB*)(0x42850000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_SCB3                             /*lint --e(923, 9078)*/ ((*(Ifx_SCB*)(0x42860000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_SCB4                             /*lint --e(923, 9078)*/ ((*(Ifx_SCB*)(0x42870000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_SCB5                             /*lint --e(923, 9078)*/ ((*(Ifx_SCB*)(0x43800000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_SCB6                             /*lint --e(923, 9078)*/ ((*(Ifx_SCB*)(0x43810000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SCB_Registers_Cfg_SCB
 * \{  */
/** \brief 0, Generic control */
#define REG_SCB0_CTRL                           /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CTRL*)(0x42820000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Generic status */
#define REG_SCB0_STATUS                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_STATUS*)(0x42820004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Command/response control */
#define REG_SCB0_CMD_RESP_CTRL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_CTRL*)(0x42820008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Command/response status */
#define REG_SCB0_CMD_RESP_STATUS                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_STATUS*)(0x4282000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, SPI control */
#define REG_SCB0_SPI_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_CTRL*)(0x42820020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, SPI status */
#define REG_SCB0_SPI_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_STATUS*)(0x42820024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, SPI transmitter control */
#define REG_SCB0_SPI_TX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_TX_CTRL*)(0x42820028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, SPI receiver control */
#define REG_SCB0_SPI_RX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_RX_CTRL*)(0x4282002Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, UART control */
#define REG_SCB0_UART_CTRL                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_CTRL*)(0x42820040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, UART transmitter control */
#define REG_SCB0_UART_TX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_TX_CTRL*)(0x42820044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, UART receiver control */
#define REG_SCB0_UART_RX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_CTRL*)(0x42820048u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, UART receiver status */
#define REG_SCB0_UART_RX_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_STATUS*)(0x4282004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, UART flow control */
#define REG_SCB0_UART_FLOW_CTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_FLOW_CTRL*)(0x42820050u + PPCA_REMAP_OFFSET_2))
/** \brief 60, I2C control */
#define REG_SCB0_I2C_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CTRL*)(0x42820060u + PPCA_REMAP_OFFSET_2))
/** \brief 64, I2C status */
#define REG_SCB0_I2C_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STATUS*)(0x42820064u + PPCA_REMAP_OFFSET_2))
/** \brief 68, I2C master command */
#define REG_SCB0_I2C_M_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_M_CMD*)(0x42820068u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, I2C slave command */
#define REG_SCB0_I2C_S_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_S_CMD*)(0x4282006Cu + PPCA_REMAP_OFFSET_2))
/** \brief 70, I2C configuration */
#define REG_SCB0_I2C_CFG                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CFG*)(0x42820070u + PPCA_REMAP_OFFSET_2))
/** \brief 74, I2C stretch control */
#define REG_SCB0_I2C_STRETCH_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_CTRL*)(0x42820074u + PPCA_REMAP_OFFSET_2))
/** \brief 78, I2C stretch status */
#define REG_SCB0_I2C_STRETCH_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_STATUS*)(0x42820078u + PPCA_REMAP_OFFSET_2))
/** \brief 120, Timeout generation support 0 control */
#define REG_SCB0_TGS_CTL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL0*)(0x42820120u + PPCA_REMAP_OFFSET_2))
/** \brief 124, Timeout generation support 0 counter */
#define REG_SCB0_TGS_CNT0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT0*)(0x42820124u + PPCA_REMAP_OFFSET_2))
/** \brief 128, Timeout generation support 0 reload */
#define REG_SCB0_TGS_REL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL0*)(0x42820128u + PPCA_REMAP_OFFSET_2))
/** \brief 12C, Timeout generation support 1 control */
#define REG_SCB0_TGS_CTL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL1*)(0x4282012Cu + PPCA_REMAP_OFFSET_2))
/** \brief 130, Timeout generation support 1 counter */
#define REG_SCB0_TGS_CNT1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT1*)(0x42820130u + PPCA_REMAP_OFFSET_2))
/** \brief 134, Timeout generation support 1 reload */
#define REG_SCB0_TGS_REL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL1*)(0x42820134u + PPCA_REMAP_OFFSET_2))
/** \brief 138, Timeout generation support 2 control */
#define REG_SCB0_TGS_CTL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL2*)(0x42820138u + PPCA_REMAP_OFFSET_2))
/** \brief 13C, Timeout generation support 2 counter */
#define REG_SCB0_TGS_CNT2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT2*)(0x4282013Cu + PPCA_REMAP_OFFSET_2))
/** \brief 140, Timeout generation support 2 reload */
#define REG_SCB0_TGS_REL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL2*)(0x42820140u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Transmitter control */
#define REG_SCB0_TX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_CTRL*)(0x42820200u + PPCA_REMAP_OFFSET_2))
/** \brief 204, Transmitter FIFO control */
#define REG_SCB0_TX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_CTRL*)(0x42820204u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Transmitter FIFO status */
#define REG_SCB0_TX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_STATUS*)(0x42820208u + PPCA_REMAP_OFFSET_2))
/** \brief 240, Transmitter FIFO write */
#define REG_SCB0_TX_FIFO_WR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_WR*)(0x42820240u + PPCA_REMAP_OFFSET_2))
/** \brief 300, Receiver control */
#define REG_SCB0_RX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_CTRL*)(0x42820300u + PPCA_REMAP_OFFSET_2))
/** \brief 304, Receiver FIFO control */
#define REG_SCB0_RX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_CTRL*)(0x42820304u + PPCA_REMAP_OFFSET_2))
/** \brief 308, Receiver FIFO status */
#define REG_SCB0_RX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_STATUS*)(0x42820308u + PPCA_REMAP_OFFSET_2))
/** \brief 310, Slave address and mask */
#define REG_SCB0_RX_MATCH                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH*)(0x42820310u + PPCA_REMAP_OFFSET_2))
/** \brief 314, Slave address and mask */
#define REG_SCB0_RX_MATCH1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH1*)(0x42820314u + PPCA_REMAP_OFFSET_2))
/** \brief 318, Slave address and mask */
#define REG_SCB0_RX_MATCH2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH2*)(0x42820318u + PPCA_REMAP_OFFSET_2))
/** \brief 340, Receiver FIFO read */
#define REG_SCB0_RX_FIFO_RD                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD*)(0x42820340u + PPCA_REMAP_OFFSET_2))
/** \brief 344, Receiver FIFO read silent */
#define REG_SCB0_RX_FIFO_RD_SILENT              /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD_SILENT*)(0x42820344u + PPCA_REMAP_OFFSET_2))
/** \brief 400, Memory buffer */
#define REG_SCB0_EZ_DATA0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820400u + PPCA_REMAP_OFFSET_2))
/** \brief 404, Memory buffer */
#define REG_SCB0_EZ_DATA1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820404u + PPCA_REMAP_OFFSET_2))
/** \brief 408, Memory buffer */
#define REG_SCB0_EZ_DATA2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820408u + PPCA_REMAP_OFFSET_2))
/** \brief 40C, Memory buffer */
#define REG_SCB0_EZ_DATA3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282040Cu + PPCA_REMAP_OFFSET_2))
/** \brief 410, Memory buffer */
#define REG_SCB0_EZ_DATA4                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820410u + PPCA_REMAP_OFFSET_2))
/** \brief 414, Memory buffer */
#define REG_SCB0_EZ_DATA5                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820414u + PPCA_REMAP_OFFSET_2))
/** \brief 418, Memory buffer */
#define REG_SCB0_EZ_DATA6                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820418u + PPCA_REMAP_OFFSET_2))
/** \brief 41C, Memory buffer */
#define REG_SCB0_EZ_DATA7                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282041Cu + PPCA_REMAP_OFFSET_2))
/** \brief 420, Memory buffer */
#define REG_SCB0_EZ_DATA8                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820420u + PPCA_REMAP_OFFSET_2))
/** \brief 424, Memory buffer */
#define REG_SCB0_EZ_DATA9                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820424u + PPCA_REMAP_OFFSET_2))
/** \brief 428, Memory buffer */
#define REG_SCB0_EZ_DATA10                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820428u + PPCA_REMAP_OFFSET_2))
/** \brief 42C, Memory buffer */
#define REG_SCB0_EZ_DATA11                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282042Cu + PPCA_REMAP_OFFSET_2))
/** \brief 430, Memory buffer */
#define REG_SCB0_EZ_DATA12                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820430u + PPCA_REMAP_OFFSET_2))
/** \brief 434, Memory buffer */
#define REG_SCB0_EZ_DATA13                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820434u + PPCA_REMAP_OFFSET_2))
/** \brief 438, Memory buffer */
#define REG_SCB0_EZ_DATA14                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820438u + PPCA_REMAP_OFFSET_2))
/** \brief 43C, Memory buffer */
#define REG_SCB0_EZ_DATA15                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282043Cu + PPCA_REMAP_OFFSET_2))
/** \brief 440, Memory buffer */
#define REG_SCB0_EZ_DATA16                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820440u + PPCA_REMAP_OFFSET_2))
/** \brief 444, Memory buffer */
#define REG_SCB0_EZ_DATA17                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820444u + PPCA_REMAP_OFFSET_2))
/** \brief 448, Memory buffer */
#define REG_SCB0_EZ_DATA18                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820448u + PPCA_REMAP_OFFSET_2))
/** \brief 44C, Memory buffer */
#define REG_SCB0_EZ_DATA19                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282044Cu + PPCA_REMAP_OFFSET_2))
/** \brief 450, Memory buffer */
#define REG_SCB0_EZ_DATA20                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820450u + PPCA_REMAP_OFFSET_2))
/** \brief 454, Memory buffer */
#define REG_SCB0_EZ_DATA21                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820454u + PPCA_REMAP_OFFSET_2))
/** \brief 458, Memory buffer */
#define REG_SCB0_EZ_DATA22                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820458u + PPCA_REMAP_OFFSET_2))
/** \brief 45C, Memory buffer */
#define REG_SCB0_EZ_DATA23                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282045Cu + PPCA_REMAP_OFFSET_2))
/** \brief 460, Memory buffer */
#define REG_SCB0_EZ_DATA24                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820460u + PPCA_REMAP_OFFSET_2))
/** \brief 464, Memory buffer */
#define REG_SCB0_EZ_DATA25                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820464u + PPCA_REMAP_OFFSET_2))
/** \brief 468, Memory buffer */
#define REG_SCB0_EZ_DATA26                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820468u + PPCA_REMAP_OFFSET_2))
/** \brief 46C, Memory buffer */
#define REG_SCB0_EZ_DATA27                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282046Cu + PPCA_REMAP_OFFSET_2))
/** \brief 470, Memory buffer */
#define REG_SCB0_EZ_DATA28                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820470u + PPCA_REMAP_OFFSET_2))
/** \brief 474, Memory buffer */
#define REG_SCB0_EZ_DATA29                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820474u + PPCA_REMAP_OFFSET_2))
/** \brief 478, Memory buffer */
#define REG_SCB0_EZ_DATA30                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820478u + PPCA_REMAP_OFFSET_2))
/** \brief 47C, Memory buffer */
#define REG_SCB0_EZ_DATA31                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282047Cu + PPCA_REMAP_OFFSET_2))
/** \brief 480, Memory buffer */
#define REG_SCB0_EZ_DATA32                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820480u + PPCA_REMAP_OFFSET_2))
/** \brief 484, Memory buffer */
#define REG_SCB0_EZ_DATA33                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820484u + PPCA_REMAP_OFFSET_2))
/** \brief 488, Memory buffer */
#define REG_SCB0_EZ_DATA34                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820488u + PPCA_REMAP_OFFSET_2))
/** \brief 48C, Memory buffer */
#define REG_SCB0_EZ_DATA35                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282048Cu + PPCA_REMAP_OFFSET_2))
/** \brief 490, Memory buffer */
#define REG_SCB0_EZ_DATA36                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820490u + PPCA_REMAP_OFFSET_2))
/** \brief 494, Memory buffer */
#define REG_SCB0_EZ_DATA37                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820494u + PPCA_REMAP_OFFSET_2))
/** \brief 498, Memory buffer */
#define REG_SCB0_EZ_DATA38                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820498u + PPCA_REMAP_OFFSET_2))
/** \brief 49C, Memory buffer */
#define REG_SCB0_EZ_DATA39                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282049Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4A0, Memory buffer */
#define REG_SCB0_EZ_DATA40                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204A0u + PPCA_REMAP_OFFSET_2))
/** \brief 4A4, Memory buffer */
#define REG_SCB0_EZ_DATA41                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204A4u + PPCA_REMAP_OFFSET_2))
/** \brief 4A8, Memory buffer */
#define REG_SCB0_EZ_DATA42                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204A8u + PPCA_REMAP_OFFSET_2))
/** \brief 4AC, Memory buffer */
#define REG_SCB0_EZ_DATA43                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204ACu + PPCA_REMAP_OFFSET_2))
/** \brief 4B0, Memory buffer */
#define REG_SCB0_EZ_DATA44                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204B0u + PPCA_REMAP_OFFSET_2))
/** \brief 4B4, Memory buffer */
#define REG_SCB0_EZ_DATA45                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204B4u + PPCA_REMAP_OFFSET_2))
/** \brief 4B8, Memory buffer */
#define REG_SCB0_EZ_DATA46                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204B8u + PPCA_REMAP_OFFSET_2))
/** \brief 4BC, Memory buffer */
#define REG_SCB0_EZ_DATA47                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204BCu + PPCA_REMAP_OFFSET_2))
/** \brief 4C0, Memory buffer */
#define REG_SCB0_EZ_DATA48                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4C4, Memory buffer */
#define REG_SCB0_EZ_DATA49                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204C4u + PPCA_REMAP_OFFSET_2))
/** \brief 4C8, Memory buffer */
#define REG_SCB0_EZ_DATA50                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4CC, Memory buffer */
#define REG_SCB0_EZ_DATA51                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204CCu + PPCA_REMAP_OFFSET_2))
/** \brief 4D0, Memory buffer */
#define REG_SCB0_EZ_DATA52                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204D0u + PPCA_REMAP_OFFSET_2))
/** \brief 4D4, Memory buffer */
#define REG_SCB0_EZ_DATA53                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204D4u + PPCA_REMAP_OFFSET_2))
/** \brief 4D8, Memory buffer */
#define REG_SCB0_EZ_DATA54                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204D8u + PPCA_REMAP_OFFSET_2))
/** \brief 4DC, Memory buffer */
#define REG_SCB0_EZ_DATA55                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204DCu + PPCA_REMAP_OFFSET_2))
/** \brief 4E0, Memory buffer */
#define REG_SCB0_EZ_DATA56                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204E0u + PPCA_REMAP_OFFSET_2))
/** \brief 4E4, Memory buffer */
#define REG_SCB0_EZ_DATA57                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204E4u + PPCA_REMAP_OFFSET_2))
/** \brief 4E8, Memory buffer */
#define REG_SCB0_EZ_DATA58                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204E8u + PPCA_REMAP_OFFSET_2))
/** \brief 4EC, Memory buffer */
#define REG_SCB0_EZ_DATA59                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204ECu + PPCA_REMAP_OFFSET_2))
/** \brief 4F0, Memory buffer */
#define REG_SCB0_EZ_DATA60                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204F0u + PPCA_REMAP_OFFSET_2))
/** \brief 4F4, Memory buffer */
#define REG_SCB0_EZ_DATA61                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204F4u + PPCA_REMAP_OFFSET_2))
/** \brief 4F8, Memory buffer */
#define REG_SCB0_EZ_DATA62                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204F8u + PPCA_REMAP_OFFSET_2))
/** \brief 4FC, Memory buffer */
#define REG_SCB0_EZ_DATA63                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428204FCu + PPCA_REMAP_OFFSET_2))
/** \brief 500, Memory buffer */
#define REG_SCB0_EZ_DATA64                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820500u + PPCA_REMAP_OFFSET_2))
/** \brief 504, Memory buffer */
#define REG_SCB0_EZ_DATA65                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820504u + PPCA_REMAP_OFFSET_2))
/** \brief 508, Memory buffer */
#define REG_SCB0_EZ_DATA66                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820508u + PPCA_REMAP_OFFSET_2))
/** \brief 50C, Memory buffer */
#define REG_SCB0_EZ_DATA67                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282050Cu + PPCA_REMAP_OFFSET_2))
/** \brief 510, Memory buffer */
#define REG_SCB0_EZ_DATA68                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820510u + PPCA_REMAP_OFFSET_2))
/** \brief 514, Memory buffer */
#define REG_SCB0_EZ_DATA69                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820514u + PPCA_REMAP_OFFSET_2))
/** \brief 518, Memory buffer */
#define REG_SCB0_EZ_DATA70                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820518u + PPCA_REMAP_OFFSET_2))
/** \brief 51C, Memory buffer */
#define REG_SCB0_EZ_DATA71                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282051Cu + PPCA_REMAP_OFFSET_2))
/** \brief 520, Memory buffer */
#define REG_SCB0_EZ_DATA72                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820520u + PPCA_REMAP_OFFSET_2))
/** \brief 524, Memory buffer */
#define REG_SCB0_EZ_DATA73                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820524u + PPCA_REMAP_OFFSET_2))
/** \brief 528, Memory buffer */
#define REG_SCB0_EZ_DATA74                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820528u + PPCA_REMAP_OFFSET_2))
/** \brief 52C, Memory buffer */
#define REG_SCB0_EZ_DATA75                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282052Cu + PPCA_REMAP_OFFSET_2))
/** \brief 530, Memory buffer */
#define REG_SCB0_EZ_DATA76                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820530u + PPCA_REMAP_OFFSET_2))
/** \brief 534, Memory buffer */
#define REG_SCB0_EZ_DATA77                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820534u + PPCA_REMAP_OFFSET_2))
/** \brief 538, Memory buffer */
#define REG_SCB0_EZ_DATA78                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820538u + PPCA_REMAP_OFFSET_2))
/** \brief 53C, Memory buffer */
#define REG_SCB0_EZ_DATA79                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282053Cu + PPCA_REMAP_OFFSET_2))
/** \brief 540, Memory buffer */
#define REG_SCB0_EZ_DATA80                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820540u + PPCA_REMAP_OFFSET_2))
/** \brief 544, Memory buffer */
#define REG_SCB0_EZ_DATA81                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820544u + PPCA_REMAP_OFFSET_2))
/** \brief 548, Memory buffer */
#define REG_SCB0_EZ_DATA82                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820548u + PPCA_REMAP_OFFSET_2))
/** \brief 54C, Memory buffer */
#define REG_SCB0_EZ_DATA83                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282054Cu + PPCA_REMAP_OFFSET_2))
/** \brief 550, Memory buffer */
#define REG_SCB0_EZ_DATA84                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820550u + PPCA_REMAP_OFFSET_2))
/** \brief 554, Memory buffer */
#define REG_SCB0_EZ_DATA85                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820554u + PPCA_REMAP_OFFSET_2))
/** \brief 558, Memory buffer */
#define REG_SCB0_EZ_DATA86                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820558u + PPCA_REMAP_OFFSET_2))
/** \brief 55C, Memory buffer */
#define REG_SCB0_EZ_DATA87                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282055Cu + PPCA_REMAP_OFFSET_2))
/** \brief 560, Memory buffer */
#define REG_SCB0_EZ_DATA88                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820560u + PPCA_REMAP_OFFSET_2))
/** \brief 564, Memory buffer */
#define REG_SCB0_EZ_DATA89                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820564u + PPCA_REMAP_OFFSET_2))
/** \brief 568, Memory buffer */
#define REG_SCB0_EZ_DATA90                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820568u + PPCA_REMAP_OFFSET_2))
/** \brief 56C, Memory buffer */
#define REG_SCB0_EZ_DATA91                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282056Cu + PPCA_REMAP_OFFSET_2))
/** \brief 570, Memory buffer */
#define REG_SCB0_EZ_DATA92                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820570u + PPCA_REMAP_OFFSET_2))
/** \brief 574, Memory buffer */
#define REG_SCB0_EZ_DATA93                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820574u + PPCA_REMAP_OFFSET_2))
/** \brief 578, Memory buffer */
#define REG_SCB0_EZ_DATA94                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820578u + PPCA_REMAP_OFFSET_2))
/** \brief 57C, Memory buffer */
#define REG_SCB0_EZ_DATA95                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282057Cu + PPCA_REMAP_OFFSET_2))
/** \brief 580, Memory buffer */
#define REG_SCB0_EZ_DATA96                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820580u + PPCA_REMAP_OFFSET_2))
/** \brief 584, Memory buffer */
#define REG_SCB0_EZ_DATA97                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820584u + PPCA_REMAP_OFFSET_2))
/** \brief 588, Memory buffer */
#define REG_SCB0_EZ_DATA98                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820588u + PPCA_REMAP_OFFSET_2))
/** \brief 58C, Memory buffer */
#define REG_SCB0_EZ_DATA99                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282058Cu + PPCA_REMAP_OFFSET_2))
/** \brief 590, Memory buffer */
#define REG_SCB0_EZ_DATA100                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820590u + PPCA_REMAP_OFFSET_2))
/** \brief 594, Memory buffer */
#define REG_SCB0_EZ_DATA101                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820594u + PPCA_REMAP_OFFSET_2))
/** \brief 598, Memory buffer */
#define REG_SCB0_EZ_DATA102                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820598u + PPCA_REMAP_OFFSET_2))
/** \brief 59C, Memory buffer */
#define REG_SCB0_EZ_DATA103                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282059Cu + PPCA_REMAP_OFFSET_2))
/** \brief 5A0, Memory buffer */
#define REG_SCB0_EZ_DATA104                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205A0u + PPCA_REMAP_OFFSET_2))
/** \brief 5A4, Memory buffer */
#define REG_SCB0_EZ_DATA105                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205A4u + PPCA_REMAP_OFFSET_2))
/** \brief 5A8, Memory buffer */
#define REG_SCB0_EZ_DATA106                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205A8u + PPCA_REMAP_OFFSET_2))
/** \brief 5AC, Memory buffer */
#define REG_SCB0_EZ_DATA107                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205ACu + PPCA_REMAP_OFFSET_2))
/** \brief 5B0, Memory buffer */
#define REG_SCB0_EZ_DATA108                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205B0u + PPCA_REMAP_OFFSET_2))
/** \brief 5B4, Memory buffer */
#define REG_SCB0_EZ_DATA109                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205B4u + PPCA_REMAP_OFFSET_2))
/** \brief 5B8, Memory buffer */
#define REG_SCB0_EZ_DATA110                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205B8u + PPCA_REMAP_OFFSET_2))
/** \brief 5BC, Memory buffer */
#define REG_SCB0_EZ_DATA111                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205BCu + PPCA_REMAP_OFFSET_2))
/** \brief 5C0, Memory buffer */
#define REG_SCB0_EZ_DATA112                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205C0u + PPCA_REMAP_OFFSET_2))
/** \brief 5C4, Memory buffer */
#define REG_SCB0_EZ_DATA113                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205C4u + PPCA_REMAP_OFFSET_2))
/** \brief 5C8, Memory buffer */
#define REG_SCB0_EZ_DATA114                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205C8u + PPCA_REMAP_OFFSET_2))
/** \brief 5CC, Memory buffer */
#define REG_SCB0_EZ_DATA115                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205CCu + PPCA_REMAP_OFFSET_2))
/** \brief 5D0, Memory buffer */
#define REG_SCB0_EZ_DATA116                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205D0u + PPCA_REMAP_OFFSET_2))
/** \brief 5D4, Memory buffer */
#define REG_SCB0_EZ_DATA117                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205D4u + PPCA_REMAP_OFFSET_2))
/** \brief 5D8, Memory buffer */
#define REG_SCB0_EZ_DATA118                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205D8u + PPCA_REMAP_OFFSET_2))
/** \brief 5DC, Memory buffer */
#define REG_SCB0_EZ_DATA119                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205DCu + PPCA_REMAP_OFFSET_2))
/** \brief 5E0, Memory buffer */
#define REG_SCB0_EZ_DATA120                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205E0u + PPCA_REMAP_OFFSET_2))
/** \brief 5E4, Memory buffer */
#define REG_SCB0_EZ_DATA121                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205E4u + PPCA_REMAP_OFFSET_2))
/** \brief 5E8, Memory buffer */
#define REG_SCB0_EZ_DATA122                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205E8u + PPCA_REMAP_OFFSET_2))
/** \brief 5EC, Memory buffer */
#define REG_SCB0_EZ_DATA123                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205ECu + PPCA_REMAP_OFFSET_2))
/** \brief 5F0, Memory buffer */
#define REG_SCB0_EZ_DATA124                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205F0u + PPCA_REMAP_OFFSET_2))
/** \brief 5F4, Memory buffer */
#define REG_SCB0_EZ_DATA125                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205F4u + PPCA_REMAP_OFFSET_2))
/** \brief 5F8, Memory buffer */
#define REG_SCB0_EZ_DATA126                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205F8u + PPCA_REMAP_OFFSET_2))
/** \brief 5FC, Memory buffer */
#define REG_SCB0_EZ_DATA127                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428205FCu + PPCA_REMAP_OFFSET_2))
/** \brief 600, Memory buffer */
#define REG_SCB0_EZ_DATA128                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820600u + PPCA_REMAP_OFFSET_2))
/** \brief 604, Memory buffer */
#define REG_SCB0_EZ_DATA129                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820604u + PPCA_REMAP_OFFSET_2))
/** \brief 608, Memory buffer */
#define REG_SCB0_EZ_DATA130                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820608u + PPCA_REMAP_OFFSET_2))
/** \brief 60C, Memory buffer */
#define REG_SCB0_EZ_DATA131                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282060Cu + PPCA_REMAP_OFFSET_2))
/** \brief 610, Memory buffer */
#define REG_SCB0_EZ_DATA132                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820610u + PPCA_REMAP_OFFSET_2))
/** \brief 614, Memory buffer */
#define REG_SCB0_EZ_DATA133                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820614u + PPCA_REMAP_OFFSET_2))
/** \brief 618, Memory buffer */
#define REG_SCB0_EZ_DATA134                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820618u + PPCA_REMAP_OFFSET_2))
/** \brief 61C, Memory buffer */
#define REG_SCB0_EZ_DATA135                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282061Cu + PPCA_REMAP_OFFSET_2))
/** \brief 620, Memory buffer */
#define REG_SCB0_EZ_DATA136                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820620u + PPCA_REMAP_OFFSET_2))
/** \brief 624, Memory buffer */
#define REG_SCB0_EZ_DATA137                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820624u + PPCA_REMAP_OFFSET_2))
/** \brief 628, Memory buffer */
#define REG_SCB0_EZ_DATA138                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820628u + PPCA_REMAP_OFFSET_2))
/** \brief 62C, Memory buffer */
#define REG_SCB0_EZ_DATA139                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282062Cu + PPCA_REMAP_OFFSET_2))
/** \brief 630, Memory buffer */
#define REG_SCB0_EZ_DATA140                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820630u + PPCA_REMAP_OFFSET_2))
/** \brief 634, Memory buffer */
#define REG_SCB0_EZ_DATA141                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820634u + PPCA_REMAP_OFFSET_2))
/** \brief 638, Memory buffer */
#define REG_SCB0_EZ_DATA142                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820638u + PPCA_REMAP_OFFSET_2))
/** \brief 63C, Memory buffer */
#define REG_SCB0_EZ_DATA143                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282063Cu + PPCA_REMAP_OFFSET_2))
/** \brief 640, Memory buffer */
#define REG_SCB0_EZ_DATA144                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820640u + PPCA_REMAP_OFFSET_2))
/** \brief 644, Memory buffer */
#define REG_SCB0_EZ_DATA145                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820644u + PPCA_REMAP_OFFSET_2))
/** \brief 648, Memory buffer */
#define REG_SCB0_EZ_DATA146                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820648u + PPCA_REMAP_OFFSET_2))
/** \brief 64C, Memory buffer */
#define REG_SCB0_EZ_DATA147                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282064Cu + PPCA_REMAP_OFFSET_2))
/** \brief 650, Memory buffer */
#define REG_SCB0_EZ_DATA148                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820650u + PPCA_REMAP_OFFSET_2))
/** \brief 654, Memory buffer */
#define REG_SCB0_EZ_DATA149                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820654u + PPCA_REMAP_OFFSET_2))
/** \brief 658, Memory buffer */
#define REG_SCB0_EZ_DATA150                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820658u + PPCA_REMAP_OFFSET_2))
/** \brief 65C, Memory buffer */
#define REG_SCB0_EZ_DATA151                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282065Cu + PPCA_REMAP_OFFSET_2))
/** \brief 660, Memory buffer */
#define REG_SCB0_EZ_DATA152                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820660u + PPCA_REMAP_OFFSET_2))
/** \brief 664, Memory buffer */
#define REG_SCB0_EZ_DATA153                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820664u + PPCA_REMAP_OFFSET_2))
/** \brief 668, Memory buffer */
#define REG_SCB0_EZ_DATA154                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820668u + PPCA_REMAP_OFFSET_2))
/** \brief 66C, Memory buffer */
#define REG_SCB0_EZ_DATA155                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282066Cu + PPCA_REMAP_OFFSET_2))
/** \brief 670, Memory buffer */
#define REG_SCB0_EZ_DATA156                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820670u + PPCA_REMAP_OFFSET_2))
/** \brief 674, Memory buffer */
#define REG_SCB0_EZ_DATA157                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820674u + PPCA_REMAP_OFFSET_2))
/** \brief 678, Memory buffer */
#define REG_SCB0_EZ_DATA158                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820678u + PPCA_REMAP_OFFSET_2))
/** \brief 67C, Memory buffer */
#define REG_SCB0_EZ_DATA159                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282067Cu + PPCA_REMAP_OFFSET_2))
/** \brief 680, Memory buffer */
#define REG_SCB0_EZ_DATA160                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820680u + PPCA_REMAP_OFFSET_2))
/** \brief 684, Memory buffer */
#define REG_SCB0_EZ_DATA161                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820684u + PPCA_REMAP_OFFSET_2))
/** \brief 688, Memory buffer */
#define REG_SCB0_EZ_DATA162                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820688u + PPCA_REMAP_OFFSET_2))
/** \brief 68C, Memory buffer */
#define REG_SCB0_EZ_DATA163                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282068Cu + PPCA_REMAP_OFFSET_2))
/** \brief 690, Memory buffer */
#define REG_SCB0_EZ_DATA164                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820690u + PPCA_REMAP_OFFSET_2))
/** \brief 694, Memory buffer */
#define REG_SCB0_EZ_DATA165                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820694u + PPCA_REMAP_OFFSET_2))
/** \brief 698, Memory buffer */
#define REG_SCB0_EZ_DATA166                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820698u + PPCA_REMAP_OFFSET_2))
/** \brief 69C, Memory buffer */
#define REG_SCB0_EZ_DATA167                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282069Cu + PPCA_REMAP_OFFSET_2))
/** \brief 6A0, Memory buffer */
#define REG_SCB0_EZ_DATA168                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206A0u + PPCA_REMAP_OFFSET_2))
/** \brief 6A4, Memory buffer */
#define REG_SCB0_EZ_DATA169                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206A4u + PPCA_REMAP_OFFSET_2))
/** \brief 6A8, Memory buffer */
#define REG_SCB0_EZ_DATA170                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206A8u + PPCA_REMAP_OFFSET_2))
/** \brief 6AC, Memory buffer */
#define REG_SCB0_EZ_DATA171                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206ACu + PPCA_REMAP_OFFSET_2))
/** \brief 6B0, Memory buffer */
#define REG_SCB0_EZ_DATA172                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206B0u + PPCA_REMAP_OFFSET_2))
/** \brief 6B4, Memory buffer */
#define REG_SCB0_EZ_DATA173                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206B4u + PPCA_REMAP_OFFSET_2))
/** \brief 6B8, Memory buffer */
#define REG_SCB0_EZ_DATA174                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206B8u + PPCA_REMAP_OFFSET_2))
/** \brief 6BC, Memory buffer */
#define REG_SCB0_EZ_DATA175                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206BCu + PPCA_REMAP_OFFSET_2))
/** \brief 6C0, Memory buffer */
#define REG_SCB0_EZ_DATA176                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206C0u + PPCA_REMAP_OFFSET_2))
/** \brief 6C4, Memory buffer */
#define REG_SCB0_EZ_DATA177                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206C4u + PPCA_REMAP_OFFSET_2))
/** \brief 6C8, Memory buffer */
#define REG_SCB0_EZ_DATA178                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206C8u + PPCA_REMAP_OFFSET_2))
/** \brief 6CC, Memory buffer */
#define REG_SCB0_EZ_DATA179                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206CCu + PPCA_REMAP_OFFSET_2))
/** \brief 6D0, Memory buffer */
#define REG_SCB0_EZ_DATA180                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206D0u + PPCA_REMAP_OFFSET_2))
/** \brief 6D4, Memory buffer */
#define REG_SCB0_EZ_DATA181                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206D4u + PPCA_REMAP_OFFSET_2))
/** \brief 6D8, Memory buffer */
#define REG_SCB0_EZ_DATA182                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206D8u + PPCA_REMAP_OFFSET_2))
/** \brief 6DC, Memory buffer */
#define REG_SCB0_EZ_DATA183                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206DCu + PPCA_REMAP_OFFSET_2))
/** \brief 6E0, Memory buffer */
#define REG_SCB0_EZ_DATA184                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206E0u + PPCA_REMAP_OFFSET_2))
/** \brief 6E4, Memory buffer */
#define REG_SCB0_EZ_DATA185                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206E4u + PPCA_REMAP_OFFSET_2))
/** \brief 6E8, Memory buffer */
#define REG_SCB0_EZ_DATA186                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6EC, Memory buffer */
#define REG_SCB0_EZ_DATA187                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206ECu + PPCA_REMAP_OFFSET_2))
/** \brief 6F0, Memory buffer */
#define REG_SCB0_EZ_DATA188                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206F0u + PPCA_REMAP_OFFSET_2))
/** \brief 6F4, Memory buffer */
#define REG_SCB0_EZ_DATA189                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206F4u + PPCA_REMAP_OFFSET_2))
/** \brief 6F8, Memory buffer */
#define REG_SCB0_EZ_DATA190                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206F8u + PPCA_REMAP_OFFSET_2))
/** \brief 6FC, Memory buffer */
#define REG_SCB0_EZ_DATA191                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428206FCu + PPCA_REMAP_OFFSET_2))
/** \brief 700, Memory buffer */
#define REG_SCB0_EZ_DATA192                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820700u + PPCA_REMAP_OFFSET_2))
/** \brief 704, Memory buffer */
#define REG_SCB0_EZ_DATA193                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820704u + PPCA_REMAP_OFFSET_2))
/** \brief 708, Memory buffer */
#define REG_SCB0_EZ_DATA194                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820708u + PPCA_REMAP_OFFSET_2))
/** \brief 70C, Memory buffer */
#define REG_SCB0_EZ_DATA195                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282070Cu + PPCA_REMAP_OFFSET_2))
/** \brief 710, Memory buffer */
#define REG_SCB0_EZ_DATA196                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820710u + PPCA_REMAP_OFFSET_2))
/** \brief 714, Memory buffer */
#define REG_SCB0_EZ_DATA197                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820714u + PPCA_REMAP_OFFSET_2))
/** \brief 718, Memory buffer */
#define REG_SCB0_EZ_DATA198                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820718u + PPCA_REMAP_OFFSET_2))
/** \brief 71C, Memory buffer */
#define REG_SCB0_EZ_DATA199                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282071Cu + PPCA_REMAP_OFFSET_2))
/** \brief 720, Memory buffer */
#define REG_SCB0_EZ_DATA200                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820720u + PPCA_REMAP_OFFSET_2))
/** \brief 724, Memory buffer */
#define REG_SCB0_EZ_DATA201                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820724u + PPCA_REMAP_OFFSET_2))
/** \brief 728, Memory buffer */
#define REG_SCB0_EZ_DATA202                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820728u + PPCA_REMAP_OFFSET_2))
/** \brief 72C, Memory buffer */
#define REG_SCB0_EZ_DATA203                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282072Cu + PPCA_REMAP_OFFSET_2))
/** \brief 730, Memory buffer */
#define REG_SCB0_EZ_DATA204                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820730u + PPCA_REMAP_OFFSET_2))
/** \brief 734, Memory buffer */
#define REG_SCB0_EZ_DATA205                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820734u + PPCA_REMAP_OFFSET_2))
/** \brief 738, Memory buffer */
#define REG_SCB0_EZ_DATA206                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820738u + PPCA_REMAP_OFFSET_2))
/** \brief 73C, Memory buffer */
#define REG_SCB0_EZ_DATA207                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282073Cu + PPCA_REMAP_OFFSET_2))
/** \brief 740, Memory buffer */
#define REG_SCB0_EZ_DATA208                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820740u + PPCA_REMAP_OFFSET_2))
/** \brief 744, Memory buffer */
#define REG_SCB0_EZ_DATA209                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820744u + PPCA_REMAP_OFFSET_2))
/** \brief 748, Memory buffer */
#define REG_SCB0_EZ_DATA210                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820748u + PPCA_REMAP_OFFSET_2))
/** \brief 74C, Memory buffer */
#define REG_SCB0_EZ_DATA211                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282074Cu + PPCA_REMAP_OFFSET_2))
/** \brief 750, Memory buffer */
#define REG_SCB0_EZ_DATA212                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820750u + PPCA_REMAP_OFFSET_2))
/** \brief 754, Memory buffer */
#define REG_SCB0_EZ_DATA213                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820754u + PPCA_REMAP_OFFSET_2))
/** \brief 758, Memory buffer */
#define REG_SCB0_EZ_DATA214                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820758u + PPCA_REMAP_OFFSET_2))
/** \brief 75C, Memory buffer */
#define REG_SCB0_EZ_DATA215                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282075Cu + PPCA_REMAP_OFFSET_2))
/** \brief 760, Memory buffer */
#define REG_SCB0_EZ_DATA216                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820760u + PPCA_REMAP_OFFSET_2))
/** \brief 764, Memory buffer */
#define REG_SCB0_EZ_DATA217                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820764u + PPCA_REMAP_OFFSET_2))
/** \brief 768, Memory buffer */
#define REG_SCB0_EZ_DATA218                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820768u + PPCA_REMAP_OFFSET_2))
/** \brief 76C, Memory buffer */
#define REG_SCB0_EZ_DATA219                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282076Cu + PPCA_REMAP_OFFSET_2))
/** \brief 770, Memory buffer */
#define REG_SCB0_EZ_DATA220                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820770u + PPCA_REMAP_OFFSET_2))
/** \brief 774, Memory buffer */
#define REG_SCB0_EZ_DATA221                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820774u + PPCA_REMAP_OFFSET_2))
/** \brief 778, Memory buffer */
#define REG_SCB0_EZ_DATA222                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820778u + PPCA_REMAP_OFFSET_2))
/** \brief 77C, Memory buffer */
#define REG_SCB0_EZ_DATA223                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282077Cu + PPCA_REMAP_OFFSET_2))
/** \brief 780, Memory buffer */
#define REG_SCB0_EZ_DATA224                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820780u + PPCA_REMAP_OFFSET_2))
/** \brief 784, Memory buffer */
#define REG_SCB0_EZ_DATA225                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820784u + PPCA_REMAP_OFFSET_2))
/** \brief 788, Memory buffer */
#define REG_SCB0_EZ_DATA226                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820788u + PPCA_REMAP_OFFSET_2))
/** \brief 78C, Memory buffer */
#define REG_SCB0_EZ_DATA227                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282078Cu + PPCA_REMAP_OFFSET_2))
/** \brief 790, Memory buffer */
#define REG_SCB0_EZ_DATA228                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820790u + PPCA_REMAP_OFFSET_2))
/** \brief 794, Memory buffer */
#define REG_SCB0_EZ_DATA229                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820794u + PPCA_REMAP_OFFSET_2))
/** \brief 798, Memory buffer */
#define REG_SCB0_EZ_DATA230                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42820798u + PPCA_REMAP_OFFSET_2))
/** \brief 79C, Memory buffer */
#define REG_SCB0_EZ_DATA231                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4282079Cu + PPCA_REMAP_OFFSET_2))
/** \brief 7A0, Memory buffer */
#define REG_SCB0_EZ_DATA232                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207A0u + PPCA_REMAP_OFFSET_2))
/** \brief 7A4, Memory buffer */
#define REG_SCB0_EZ_DATA233                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207A4u + PPCA_REMAP_OFFSET_2))
/** \brief 7A8, Memory buffer */
#define REG_SCB0_EZ_DATA234                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207A8u + PPCA_REMAP_OFFSET_2))
/** \brief 7AC, Memory buffer */
#define REG_SCB0_EZ_DATA235                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207ACu + PPCA_REMAP_OFFSET_2))
/** \brief 7B0, Memory buffer */
#define REG_SCB0_EZ_DATA236                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207B0u + PPCA_REMAP_OFFSET_2))
/** \brief 7B4, Memory buffer */
#define REG_SCB0_EZ_DATA237                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207B4u + PPCA_REMAP_OFFSET_2))
/** \brief 7B8, Memory buffer */
#define REG_SCB0_EZ_DATA238                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207B8u + PPCA_REMAP_OFFSET_2))
/** \brief 7BC, Memory buffer */
#define REG_SCB0_EZ_DATA239                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207BCu + PPCA_REMAP_OFFSET_2))
/** \brief 7C0, Memory buffer */
#define REG_SCB0_EZ_DATA240                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207C0u + PPCA_REMAP_OFFSET_2))
/** \brief 7C4, Memory buffer */
#define REG_SCB0_EZ_DATA241                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207C4u + PPCA_REMAP_OFFSET_2))
/** \brief 7C8, Memory buffer */
#define REG_SCB0_EZ_DATA242                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207C8u + PPCA_REMAP_OFFSET_2))
/** \brief 7CC, Memory buffer */
#define REG_SCB0_EZ_DATA243                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207CCu + PPCA_REMAP_OFFSET_2))
/** \brief 7D0, Memory buffer */
#define REG_SCB0_EZ_DATA244                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207D0u + PPCA_REMAP_OFFSET_2))
/** \brief 7D4, Memory buffer */
#define REG_SCB0_EZ_DATA245                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207D4u + PPCA_REMAP_OFFSET_2))
/** \brief 7D8, Memory buffer */
#define REG_SCB0_EZ_DATA246                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207D8u + PPCA_REMAP_OFFSET_2))
/** \brief 7DC, Memory buffer */
#define REG_SCB0_EZ_DATA247                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207DCu + PPCA_REMAP_OFFSET_2))
/** \brief 7E0, Memory buffer */
#define REG_SCB0_EZ_DATA248                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207E0u + PPCA_REMAP_OFFSET_2))
/** \brief 7E4, Memory buffer */
#define REG_SCB0_EZ_DATA249                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207E4u + PPCA_REMAP_OFFSET_2))
/** \brief 7E8, Memory buffer */
#define REG_SCB0_EZ_DATA250                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207E8u + PPCA_REMAP_OFFSET_2))
/** \brief 7EC, Memory buffer */
#define REG_SCB0_EZ_DATA251                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207ECu + PPCA_REMAP_OFFSET_2))
/** \brief 7F0, Memory buffer */
#define REG_SCB0_EZ_DATA252                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207F0u + PPCA_REMAP_OFFSET_2))
/** \brief 7F4, Memory buffer */
#define REG_SCB0_EZ_DATA253                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207F4u + PPCA_REMAP_OFFSET_2))
/** \brief 7F8, Memory buffer */
#define REG_SCB0_EZ_DATA254                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207F8u + PPCA_REMAP_OFFSET_2))
/** \brief 7FC, Memory buffer */
#define REG_SCB0_EZ_DATA255                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428207FCu + PPCA_REMAP_OFFSET_2))
/** \brief E00, Active clocked interrupt signal */
#define REG_SCB0_INTR_CAUSE                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_CAUSE*)(0x42820E00u + PPCA_REMAP_OFFSET_2))
/** \brief E80, Externally clocked I2C interrupt request */
#define REG_SCB0_INTR_I2C_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC*)(0x42820E80u + PPCA_REMAP_OFFSET_2))
/** \brief E88, Externally clocked I2C interrupt mask */
#define REG_SCB0_INTR_I2C_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASK*)(0x42820E88u + PPCA_REMAP_OFFSET_2))
/** \brief E8C, Externally clocked I2C interrupt masked */
#define REG_SCB0_INTR_I2C_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASKED*)(0x42820E8Cu + PPCA_REMAP_OFFSET_2))
/** \brief EC0, Externally clocked SPI interrupt request */
#define REG_SCB0_INTR_SPI_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC*)(0x42820EC0u + PPCA_REMAP_OFFSET_2))
/** \brief EC8, Externally clocked SPI interrupt mask */
#define REG_SCB0_INTR_SPI_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASK*)(0x42820EC8u + PPCA_REMAP_OFFSET_2))
/** \brief ECC, Externally clocked SPI interrupt masked */
#define REG_SCB0_INTR_SPI_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASKED*)(0x42820ECCu + PPCA_REMAP_OFFSET_2))
/** \brief F00, Master interrupt request */
#define REG_SCB0_INTR_M                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M*)(0x42820F00u + PPCA_REMAP_OFFSET_2))
/** \brief F04, Master interrupt set request */
#define REG_SCB0_INTR_M_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_SET*)(0x42820F04u + PPCA_REMAP_OFFSET_2))
/** \brief F08, Master interrupt mask */
#define REG_SCB0_INTR_M_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASK*)(0x42820F08u + PPCA_REMAP_OFFSET_2))
/** \brief F0C, Master interrupt masked request */
#define REG_SCB0_INTR_M_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASKED*)(0x42820F0Cu + PPCA_REMAP_OFFSET_2))
/** \brief F40, Slave interrupt request */
#define REG_SCB0_INTR_S                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S*)(0x42820F40u + PPCA_REMAP_OFFSET_2))
/** \brief F44, Slave interrupt set request */
#define REG_SCB0_INTR_S_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_SET*)(0x42820F44u + PPCA_REMAP_OFFSET_2))
/** \brief F48, Slave interrupt mask */
#define REG_SCB0_INTR_S_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASK*)(0x42820F48u + PPCA_REMAP_OFFSET_2))
/** \brief F4C, Slave interrupt masked request */
#define REG_SCB0_INTR_S_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASKED*)(0x42820F4Cu + PPCA_REMAP_OFFSET_2))
/** \brief F80, Transmitter interrupt request */
#define REG_SCB0_INTR_TX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX*)(0x42820F80u + PPCA_REMAP_OFFSET_2))
/** \brief F84, Transmitter interrupt set request */
#define REG_SCB0_INTR_TX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_SET*)(0x42820F84u + PPCA_REMAP_OFFSET_2))
/** \brief F88, Transmitter interrupt mask */
#define REG_SCB0_INTR_TX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASK*)(0x42820F88u + PPCA_REMAP_OFFSET_2))
/** \brief F8C, Transmitter interrupt masked request */
#define REG_SCB0_INTR_TX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASKED*)(0x42820F8Cu + PPCA_REMAP_OFFSET_2))
/** \brief FC0, Receiver interrupt request */
#define REG_SCB0_INTR_RX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX*)(0x42820FC0u + PPCA_REMAP_OFFSET_2))
/** \brief FC4, Receiver interrupt set request */
#define REG_SCB0_INTR_RX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_SET*)(0x42820FC4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Receiver interrupt mask */
#define REG_SCB0_INTR_RX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASK*)(0x42820FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Receiver interrupt masked request */
#define REG_SCB0_INTR_RX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASKED*)(0x42820FCCu + PPCA_REMAP_OFFSET_2))
/** \brief FD0, Receiver interrupt request */
#define REG_SCB0_INTR_TGS                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS*)(0x42820FD0u + PPCA_REMAP_OFFSET_2))
/** \brief FD4, Receiver interrupt set request */
#define REG_SCB0_INTR_TGS_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_SET*)(0x42820FD4u + PPCA_REMAP_OFFSET_2))
/** \brief FD8, Receiver interrupt mask */
#define REG_SCB0_INTR_TGS_MASK                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASK*)(0x42820FD8u + PPCA_REMAP_OFFSET_2))
/** \brief FDC, Receiver interrupt masked request */
#define REG_SCB0_INTR_TGS_MASKED                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASKED*)(0x42820FDCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Generic control */
#define REG_SCB1_CTRL                           /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CTRL*)(0x42840000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Generic status */
#define REG_SCB1_STATUS                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_STATUS*)(0x42840004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Command/response control */
#define REG_SCB1_CMD_RESP_CTRL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_CTRL*)(0x42840008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Command/response status */
#define REG_SCB1_CMD_RESP_STATUS                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_STATUS*)(0x4284000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, SPI control */
#define REG_SCB1_SPI_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_CTRL*)(0x42840020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, SPI status */
#define REG_SCB1_SPI_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_STATUS*)(0x42840024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, SPI transmitter control */
#define REG_SCB1_SPI_TX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_TX_CTRL*)(0x42840028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, SPI receiver control */
#define REG_SCB1_SPI_RX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_RX_CTRL*)(0x4284002Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, UART control */
#define REG_SCB1_UART_CTRL                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_CTRL*)(0x42840040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, UART transmitter control */
#define REG_SCB1_UART_TX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_TX_CTRL*)(0x42840044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, UART receiver control */
#define REG_SCB1_UART_RX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_CTRL*)(0x42840048u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, UART receiver status */
#define REG_SCB1_UART_RX_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_STATUS*)(0x4284004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, UART flow control */
#define REG_SCB1_UART_FLOW_CTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_FLOW_CTRL*)(0x42840050u + PPCA_REMAP_OFFSET_2))
/** \brief 60, I2C control */
#define REG_SCB1_I2C_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CTRL*)(0x42840060u + PPCA_REMAP_OFFSET_2))
/** \brief 64, I2C status */
#define REG_SCB1_I2C_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STATUS*)(0x42840064u + PPCA_REMAP_OFFSET_2))
/** \brief 68, I2C master command */
#define REG_SCB1_I2C_M_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_M_CMD*)(0x42840068u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, I2C slave command */
#define REG_SCB1_I2C_S_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_S_CMD*)(0x4284006Cu + PPCA_REMAP_OFFSET_2))
/** \brief 70, I2C configuration */
#define REG_SCB1_I2C_CFG                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CFG*)(0x42840070u + PPCA_REMAP_OFFSET_2))
/** \brief 74, I2C stretch control */
#define REG_SCB1_I2C_STRETCH_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_CTRL*)(0x42840074u + PPCA_REMAP_OFFSET_2))
/** \brief 78, I2C stretch status */
#define REG_SCB1_I2C_STRETCH_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_STATUS*)(0x42840078u + PPCA_REMAP_OFFSET_2))
/** \brief 120, Timeout generation support 0 control */
#define REG_SCB1_TGS_CTL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL0*)(0x42840120u + PPCA_REMAP_OFFSET_2))
/** \brief 124, Timeout generation support 0 counter */
#define REG_SCB1_TGS_CNT0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT0*)(0x42840124u + PPCA_REMAP_OFFSET_2))
/** \brief 128, Timeout generation support 0 reload */
#define REG_SCB1_TGS_REL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL0*)(0x42840128u + PPCA_REMAP_OFFSET_2))
/** \brief 12C, Timeout generation support 1 control */
#define REG_SCB1_TGS_CTL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL1*)(0x4284012Cu + PPCA_REMAP_OFFSET_2))
/** \brief 130, Timeout generation support 1 counter */
#define REG_SCB1_TGS_CNT1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT1*)(0x42840130u + PPCA_REMAP_OFFSET_2))
/** \brief 134, Timeout generation support 1 reload */
#define REG_SCB1_TGS_REL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL1*)(0x42840134u + PPCA_REMAP_OFFSET_2))
/** \brief 138, Timeout generation support 2 control */
#define REG_SCB1_TGS_CTL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL2*)(0x42840138u + PPCA_REMAP_OFFSET_2))
/** \brief 13C, Timeout generation support 2 counter */
#define REG_SCB1_TGS_CNT2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT2*)(0x4284013Cu + PPCA_REMAP_OFFSET_2))
/** \brief 140, Timeout generation support 2 reload */
#define REG_SCB1_TGS_REL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL2*)(0x42840140u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Transmitter control */
#define REG_SCB1_TX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_CTRL*)(0x42840200u + PPCA_REMAP_OFFSET_2))
/** \brief 204, Transmitter FIFO control */
#define REG_SCB1_TX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_CTRL*)(0x42840204u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Transmitter FIFO status */
#define REG_SCB1_TX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_STATUS*)(0x42840208u + PPCA_REMAP_OFFSET_2))
/** \brief 240, Transmitter FIFO write */
#define REG_SCB1_TX_FIFO_WR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_WR*)(0x42840240u + PPCA_REMAP_OFFSET_2))
/** \brief 300, Receiver control */
#define REG_SCB1_RX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_CTRL*)(0x42840300u + PPCA_REMAP_OFFSET_2))
/** \brief 304, Receiver FIFO control */
#define REG_SCB1_RX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_CTRL*)(0x42840304u + PPCA_REMAP_OFFSET_2))
/** \brief 308, Receiver FIFO status */
#define REG_SCB1_RX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_STATUS*)(0x42840308u + PPCA_REMAP_OFFSET_2))
/** \brief 310, Slave address and mask */
#define REG_SCB1_RX_MATCH                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH*)(0x42840310u + PPCA_REMAP_OFFSET_2))
/** \brief 314, Slave address and mask */
#define REG_SCB1_RX_MATCH1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH1*)(0x42840314u + PPCA_REMAP_OFFSET_2))
/** \brief 318, Slave address and mask */
#define REG_SCB1_RX_MATCH2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH2*)(0x42840318u + PPCA_REMAP_OFFSET_2))
/** \brief 340, Receiver FIFO read */
#define REG_SCB1_RX_FIFO_RD                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD*)(0x42840340u + PPCA_REMAP_OFFSET_2))
/** \brief 344, Receiver FIFO read silent */
#define REG_SCB1_RX_FIFO_RD_SILENT              /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD_SILENT*)(0x42840344u + PPCA_REMAP_OFFSET_2))
/** \brief 400, Memory buffer */
#define REG_SCB1_EZ_DATA0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840400u + PPCA_REMAP_OFFSET_2))
/** \brief 404, Memory buffer */
#define REG_SCB1_EZ_DATA1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840404u + PPCA_REMAP_OFFSET_2))
/** \brief 408, Memory buffer */
#define REG_SCB1_EZ_DATA2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840408u + PPCA_REMAP_OFFSET_2))
/** \brief 40C, Memory buffer */
#define REG_SCB1_EZ_DATA3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284040Cu + PPCA_REMAP_OFFSET_2))
/** \brief 410, Memory buffer */
#define REG_SCB1_EZ_DATA4                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840410u + PPCA_REMAP_OFFSET_2))
/** \brief 414, Memory buffer */
#define REG_SCB1_EZ_DATA5                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840414u + PPCA_REMAP_OFFSET_2))
/** \brief 418, Memory buffer */
#define REG_SCB1_EZ_DATA6                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840418u + PPCA_REMAP_OFFSET_2))
/** \brief 41C, Memory buffer */
#define REG_SCB1_EZ_DATA7                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284041Cu + PPCA_REMAP_OFFSET_2))
/** \brief 420, Memory buffer */
#define REG_SCB1_EZ_DATA8                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840420u + PPCA_REMAP_OFFSET_2))
/** \brief 424, Memory buffer */
#define REG_SCB1_EZ_DATA9                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840424u + PPCA_REMAP_OFFSET_2))
/** \brief 428, Memory buffer */
#define REG_SCB1_EZ_DATA10                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840428u + PPCA_REMAP_OFFSET_2))
/** \brief 42C, Memory buffer */
#define REG_SCB1_EZ_DATA11                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284042Cu + PPCA_REMAP_OFFSET_2))
/** \brief 430, Memory buffer */
#define REG_SCB1_EZ_DATA12                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840430u + PPCA_REMAP_OFFSET_2))
/** \brief 434, Memory buffer */
#define REG_SCB1_EZ_DATA13                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840434u + PPCA_REMAP_OFFSET_2))
/** \brief 438, Memory buffer */
#define REG_SCB1_EZ_DATA14                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840438u + PPCA_REMAP_OFFSET_2))
/** \brief 43C, Memory buffer */
#define REG_SCB1_EZ_DATA15                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284043Cu + PPCA_REMAP_OFFSET_2))
/** \brief 440, Memory buffer */
#define REG_SCB1_EZ_DATA16                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840440u + PPCA_REMAP_OFFSET_2))
/** \brief 444, Memory buffer */
#define REG_SCB1_EZ_DATA17                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840444u + PPCA_REMAP_OFFSET_2))
/** \brief 448, Memory buffer */
#define REG_SCB1_EZ_DATA18                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840448u + PPCA_REMAP_OFFSET_2))
/** \brief 44C, Memory buffer */
#define REG_SCB1_EZ_DATA19                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284044Cu + PPCA_REMAP_OFFSET_2))
/** \brief 450, Memory buffer */
#define REG_SCB1_EZ_DATA20                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840450u + PPCA_REMAP_OFFSET_2))
/** \brief 454, Memory buffer */
#define REG_SCB1_EZ_DATA21                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840454u + PPCA_REMAP_OFFSET_2))
/** \brief 458, Memory buffer */
#define REG_SCB1_EZ_DATA22                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840458u + PPCA_REMAP_OFFSET_2))
/** \brief 45C, Memory buffer */
#define REG_SCB1_EZ_DATA23                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284045Cu + PPCA_REMAP_OFFSET_2))
/** \brief 460, Memory buffer */
#define REG_SCB1_EZ_DATA24                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840460u + PPCA_REMAP_OFFSET_2))
/** \brief 464, Memory buffer */
#define REG_SCB1_EZ_DATA25                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840464u + PPCA_REMAP_OFFSET_2))
/** \brief 468, Memory buffer */
#define REG_SCB1_EZ_DATA26                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840468u + PPCA_REMAP_OFFSET_2))
/** \brief 46C, Memory buffer */
#define REG_SCB1_EZ_DATA27                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284046Cu + PPCA_REMAP_OFFSET_2))
/** \brief 470, Memory buffer */
#define REG_SCB1_EZ_DATA28                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840470u + PPCA_REMAP_OFFSET_2))
/** \brief 474, Memory buffer */
#define REG_SCB1_EZ_DATA29                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840474u + PPCA_REMAP_OFFSET_2))
/** \brief 478, Memory buffer */
#define REG_SCB1_EZ_DATA30                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840478u + PPCA_REMAP_OFFSET_2))
/** \brief 47C, Memory buffer */
#define REG_SCB1_EZ_DATA31                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284047Cu + PPCA_REMAP_OFFSET_2))
/** \brief 480, Memory buffer */
#define REG_SCB1_EZ_DATA32                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840480u + PPCA_REMAP_OFFSET_2))
/** \brief 484, Memory buffer */
#define REG_SCB1_EZ_DATA33                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840484u + PPCA_REMAP_OFFSET_2))
/** \brief 488, Memory buffer */
#define REG_SCB1_EZ_DATA34                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840488u + PPCA_REMAP_OFFSET_2))
/** \brief 48C, Memory buffer */
#define REG_SCB1_EZ_DATA35                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284048Cu + PPCA_REMAP_OFFSET_2))
/** \brief 490, Memory buffer */
#define REG_SCB1_EZ_DATA36                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840490u + PPCA_REMAP_OFFSET_2))
/** \brief 494, Memory buffer */
#define REG_SCB1_EZ_DATA37                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840494u + PPCA_REMAP_OFFSET_2))
/** \brief 498, Memory buffer */
#define REG_SCB1_EZ_DATA38                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840498u + PPCA_REMAP_OFFSET_2))
/** \brief 49C, Memory buffer */
#define REG_SCB1_EZ_DATA39                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284049Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4A0, Memory buffer */
#define REG_SCB1_EZ_DATA40                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404A0u + PPCA_REMAP_OFFSET_2))
/** \brief 4A4, Memory buffer */
#define REG_SCB1_EZ_DATA41                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404A4u + PPCA_REMAP_OFFSET_2))
/** \brief 4A8, Memory buffer */
#define REG_SCB1_EZ_DATA42                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404A8u + PPCA_REMAP_OFFSET_2))
/** \brief 4AC, Memory buffer */
#define REG_SCB1_EZ_DATA43                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404ACu + PPCA_REMAP_OFFSET_2))
/** \brief 4B0, Memory buffer */
#define REG_SCB1_EZ_DATA44                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404B0u + PPCA_REMAP_OFFSET_2))
/** \brief 4B4, Memory buffer */
#define REG_SCB1_EZ_DATA45                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404B4u + PPCA_REMAP_OFFSET_2))
/** \brief 4B8, Memory buffer */
#define REG_SCB1_EZ_DATA46                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404B8u + PPCA_REMAP_OFFSET_2))
/** \brief 4BC, Memory buffer */
#define REG_SCB1_EZ_DATA47                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404BCu + PPCA_REMAP_OFFSET_2))
/** \brief 4C0, Memory buffer */
#define REG_SCB1_EZ_DATA48                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4C4, Memory buffer */
#define REG_SCB1_EZ_DATA49                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404C4u + PPCA_REMAP_OFFSET_2))
/** \brief 4C8, Memory buffer */
#define REG_SCB1_EZ_DATA50                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4CC, Memory buffer */
#define REG_SCB1_EZ_DATA51                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404CCu + PPCA_REMAP_OFFSET_2))
/** \brief 4D0, Memory buffer */
#define REG_SCB1_EZ_DATA52                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404D0u + PPCA_REMAP_OFFSET_2))
/** \brief 4D4, Memory buffer */
#define REG_SCB1_EZ_DATA53                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404D4u + PPCA_REMAP_OFFSET_2))
/** \brief 4D8, Memory buffer */
#define REG_SCB1_EZ_DATA54                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404D8u + PPCA_REMAP_OFFSET_2))
/** \brief 4DC, Memory buffer */
#define REG_SCB1_EZ_DATA55                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404DCu + PPCA_REMAP_OFFSET_2))
/** \brief 4E0, Memory buffer */
#define REG_SCB1_EZ_DATA56                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404E0u + PPCA_REMAP_OFFSET_2))
/** \brief 4E4, Memory buffer */
#define REG_SCB1_EZ_DATA57                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404E4u + PPCA_REMAP_OFFSET_2))
/** \brief 4E8, Memory buffer */
#define REG_SCB1_EZ_DATA58                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404E8u + PPCA_REMAP_OFFSET_2))
/** \brief 4EC, Memory buffer */
#define REG_SCB1_EZ_DATA59                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404ECu + PPCA_REMAP_OFFSET_2))
/** \brief 4F0, Memory buffer */
#define REG_SCB1_EZ_DATA60                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404F0u + PPCA_REMAP_OFFSET_2))
/** \brief 4F4, Memory buffer */
#define REG_SCB1_EZ_DATA61                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404F4u + PPCA_REMAP_OFFSET_2))
/** \brief 4F8, Memory buffer */
#define REG_SCB1_EZ_DATA62                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404F8u + PPCA_REMAP_OFFSET_2))
/** \brief 4FC, Memory buffer */
#define REG_SCB1_EZ_DATA63                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428404FCu + PPCA_REMAP_OFFSET_2))
/** \brief 500, Memory buffer */
#define REG_SCB1_EZ_DATA64                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840500u + PPCA_REMAP_OFFSET_2))
/** \brief 504, Memory buffer */
#define REG_SCB1_EZ_DATA65                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840504u + PPCA_REMAP_OFFSET_2))
/** \brief 508, Memory buffer */
#define REG_SCB1_EZ_DATA66                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840508u + PPCA_REMAP_OFFSET_2))
/** \brief 50C, Memory buffer */
#define REG_SCB1_EZ_DATA67                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284050Cu + PPCA_REMAP_OFFSET_2))
/** \brief 510, Memory buffer */
#define REG_SCB1_EZ_DATA68                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840510u + PPCA_REMAP_OFFSET_2))
/** \brief 514, Memory buffer */
#define REG_SCB1_EZ_DATA69                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840514u + PPCA_REMAP_OFFSET_2))
/** \brief 518, Memory buffer */
#define REG_SCB1_EZ_DATA70                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840518u + PPCA_REMAP_OFFSET_2))
/** \brief 51C, Memory buffer */
#define REG_SCB1_EZ_DATA71                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284051Cu + PPCA_REMAP_OFFSET_2))
/** \brief 520, Memory buffer */
#define REG_SCB1_EZ_DATA72                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840520u + PPCA_REMAP_OFFSET_2))
/** \brief 524, Memory buffer */
#define REG_SCB1_EZ_DATA73                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840524u + PPCA_REMAP_OFFSET_2))
/** \brief 528, Memory buffer */
#define REG_SCB1_EZ_DATA74                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840528u + PPCA_REMAP_OFFSET_2))
/** \brief 52C, Memory buffer */
#define REG_SCB1_EZ_DATA75                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284052Cu + PPCA_REMAP_OFFSET_2))
/** \brief 530, Memory buffer */
#define REG_SCB1_EZ_DATA76                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840530u + PPCA_REMAP_OFFSET_2))
/** \brief 534, Memory buffer */
#define REG_SCB1_EZ_DATA77                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840534u + PPCA_REMAP_OFFSET_2))
/** \brief 538, Memory buffer */
#define REG_SCB1_EZ_DATA78                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840538u + PPCA_REMAP_OFFSET_2))
/** \brief 53C, Memory buffer */
#define REG_SCB1_EZ_DATA79                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284053Cu + PPCA_REMAP_OFFSET_2))
/** \brief 540, Memory buffer */
#define REG_SCB1_EZ_DATA80                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840540u + PPCA_REMAP_OFFSET_2))
/** \brief 544, Memory buffer */
#define REG_SCB1_EZ_DATA81                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840544u + PPCA_REMAP_OFFSET_2))
/** \brief 548, Memory buffer */
#define REG_SCB1_EZ_DATA82                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840548u + PPCA_REMAP_OFFSET_2))
/** \brief 54C, Memory buffer */
#define REG_SCB1_EZ_DATA83                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284054Cu + PPCA_REMAP_OFFSET_2))
/** \brief 550, Memory buffer */
#define REG_SCB1_EZ_DATA84                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840550u + PPCA_REMAP_OFFSET_2))
/** \brief 554, Memory buffer */
#define REG_SCB1_EZ_DATA85                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840554u + PPCA_REMAP_OFFSET_2))
/** \brief 558, Memory buffer */
#define REG_SCB1_EZ_DATA86                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840558u + PPCA_REMAP_OFFSET_2))
/** \brief 55C, Memory buffer */
#define REG_SCB1_EZ_DATA87                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284055Cu + PPCA_REMAP_OFFSET_2))
/** \brief 560, Memory buffer */
#define REG_SCB1_EZ_DATA88                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840560u + PPCA_REMAP_OFFSET_2))
/** \brief 564, Memory buffer */
#define REG_SCB1_EZ_DATA89                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840564u + PPCA_REMAP_OFFSET_2))
/** \brief 568, Memory buffer */
#define REG_SCB1_EZ_DATA90                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840568u + PPCA_REMAP_OFFSET_2))
/** \brief 56C, Memory buffer */
#define REG_SCB1_EZ_DATA91                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284056Cu + PPCA_REMAP_OFFSET_2))
/** \brief 570, Memory buffer */
#define REG_SCB1_EZ_DATA92                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840570u + PPCA_REMAP_OFFSET_2))
/** \brief 574, Memory buffer */
#define REG_SCB1_EZ_DATA93                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840574u + PPCA_REMAP_OFFSET_2))
/** \brief 578, Memory buffer */
#define REG_SCB1_EZ_DATA94                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840578u + PPCA_REMAP_OFFSET_2))
/** \brief 57C, Memory buffer */
#define REG_SCB1_EZ_DATA95                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284057Cu + PPCA_REMAP_OFFSET_2))
/** \brief 580, Memory buffer */
#define REG_SCB1_EZ_DATA96                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840580u + PPCA_REMAP_OFFSET_2))
/** \brief 584, Memory buffer */
#define REG_SCB1_EZ_DATA97                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840584u + PPCA_REMAP_OFFSET_2))
/** \brief 588, Memory buffer */
#define REG_SCB1_EZ_DATA98                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840588u + PPCA_REMAP_OFFSET_2))
/** \brief 58C, Memory buffer */
#define REG_SCB1_EZ_DATA99                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284058Cu + PPCA_REMAP_OFFSET_2))
/** \brief 590, Memory buffer */
#define REG_SCB1_EZ_DATA100                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840590u + PPCA_REMAP_OFFSET_2))
/** \brief 594, Memory buffer */
#define REG_SCB1_EZ_DATA101                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840594u + PPCA_REMAP_OFFSET_2))
/** \brief 598, Memory buffer */
#define REG_SCB1_EZ_DATA102                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840598u + PPCA_REMAP_OFFSET_2))
/** \brief 59C, Memory buffer */
#define REG_SCB1_EZ_DATA103                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284059Cu + PPCA_REMAP_OFFSET_2))
/** \brief 5A0, Memory buffer */
#define REG_SCB1_EZ_DATA104                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405A0u + PPCA_REMAP_OFFSET_2))
/** \brief 5A4, Memory buffer */
#define REG_SCB1_EZ_DATA105                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405A4u + PPCA_REMAP_OFFSET_2))
/** \brief 5A8, Memory buffer */
#define REG_SCB1_EZ_DATA106                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405A8u + PPCA_REMAP_OFFSET_2))
/** \brief 5AC, Memory buffer */
#define REG_SCB1_EZ_DATA107                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405ACu + PPCA_REMAP_OFFSET_2))
/** \brief 5B0, Memory buffer */
#define REG_SCB1_EZ_DATA108                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405B0u + PPCA_REMAP_OFFSET_2))
/** \brief 5B4, Memory buffer */
#define REG_SCB1_EZ_DATA109                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405B4u + PPCA_REMAP_OFFSET_2))
/** \brief 5B8, Memory buffer */
#define REG_SCB1_EZ_DATA110                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405B8u + PPCA_REMAP_OFFSET_2))
/** \brief 5BC, Memory buffer */
#define REG_SCB1_EZ_DATA111                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405BCu + PPCA_REMAP_OFFSET_2))
/** \brief 5C0, Memory buffer */
#define REG_SCB1_EZ_DATA112                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405C0u + PPCA_REMAP_OFFSET_2))
/** \brief 5C4, Memory buffer */
#define REG_SCB1_EZ_DATA113                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405C4u + PPCA_REMAP_OFFSET_2))
/** \brief 5C8, Memory buffer */
#define REG_SCB1_EZ_DATA114                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405C8u + PPCA_REMAP_OFFSET_2))
/** \brief 5CC, Memory buffer */
#define REG_SCB1_EZ_DATA115                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405CCu + PPCA_REMAP_OFFSET_2))
/** \brief 5D0, Memory buffer */
#define REG_SCB1_EZ_DATA116                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405D0u + PPCA_REMAP_OFFSET_2))
/** \brief 5D4, Memory buffer */
#define REG_SCB1_EZ_DATA117                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405D4u + PPCA_REMAP_OFFSET_2))
/** \brief 5D8, Memory buffer */
#define REG_SCB1_EZ_DATA118                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405D8u + PPCA_REMAP_OFFSET_2))
/** \brief 5DC, Memory buffer */
#define REG_SCB1_EZ_DATA119                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405DCu + PPCA_REMAP_OFFSET_2))
/** \brief 5E0, Memory buffer */
#define REG_SCB1_EZ_DATA120                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405E0u + PPCA_REMAP_OFFSET_2))
/** \brief 5E4, Memory buffer */
#define REG_SCB1_EZ_DATA121                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405E4u + PPCA_REMAP_OFFSET_2))
/** \brief 5E8, Memory buffer */
#define REG_SCB1_EZ_DATA122                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405E8u + PPCA_REMAP_OFFSET_2))
/** \brief 5EC, Memory buffer */
#define REG_SCB1_EZ_DATA123                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405ECu + PPCA_REMAP_OFFSET_2))
/** \brief 5F0, Memory buffer */
#define REG_SCB1_EZ_DATA124                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405F0u + PPCA_REMAP_OFFSET_2))
/** \brief 5F4, Memory buffer */
#define REG_SCB1_EZ_DATA125                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405F4u + PPCA_REMAP_OFFSET_2))
/** \brief 5F8, Memory buffer */
#define REG_SCB1_EZ_DATA126                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405F8u + PPCA_REMAP_OFFSET_2))
/** \brief 5FC, Memory buffer */
#define REG_SCB1_EZ_DATA127                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428405FCu + PPCA_REMAP_OFFSET_2))
/** \brief 600, Memory buffer */
#define REG_SCB1_EZ_DATA128                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840600u + PPCA_REMAP_OFFSET_2))
/** \brief 604, Memory buffer */
#define REG_SCB1_EZ_DATA129                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840604u + PPCA_REMAP_OFFSET_2))
/** \brief 608, Memory buffer */
#define REG_SCB1_EZ_DATA130                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840608u + PPCA_REMAP_OFFSET_2))
/** \brief 60C, Memory buffer */
#define REG_SCB1_EZ_DATA131                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284060Cu + PPCA_REMAP_OFFSET_2))
/** \brief 610, Memory buffer */
#define REG_SCB1_EZ_DATA132                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840610u + PPCA_REMAP_OFFSET_2))
/** \brief 614, Memory buffer */
#define REG_SCB1_EZ_DATA133                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840614u + PPCA_REMAP_OFFSET_2))
/** \brief 618, Memory buffer */
#define REG_SCB1_EZ_DATA134                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840618u + PPCA_REMAP_OFFSET_2))
/** \brief 61C, Memory buffer */
#define REG_SCB1_EZ_DATA135                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284061Cu + PPCA_REMAP_OFFSET_2))
/** \brief 620, Memory buffer */
#define REG_SCB1_EZ_DATA136                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840620u + PPCA_REMAP_OFFSET_2))
/** \brief 624, Memory buffer */
#define REG_SCB1_EZ_DATA137                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840624u + PPCA_REMAP_OFFSET_2))
/** \brief 628, Memory buffer */
#define REG_SCB1_EZ_DATA138                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840628u + PPCA_REMAP_OFFSET_2))
/** \brief 62C, Memory buffer */
#define REG_SCB1_EZ_DATA139                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284062Cu + PPCA_REMAP_OFFSET_2))
/** \brief 630, Memory buffer */
#define REG_SCB1_EZ_DATA140                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840630u + PPCA_REMAP_OFFSET_2))
/** \brief 634, Memory buffer */
#define REG_SCB1_EZ_DATA141                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840634u + PPCA_REMAP_OFFSET_2))
/** \brief 638, Memory buffer */
#define REG_SCB1_EZ_DATA142                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840638u + PPCA_REMAP_OFFSET_2))
/** \brief 63C, Memory buffer */
#define REG_SCB1_EZ_DATA143                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284063Cu + PPCA_REMAP_OFFSET_2))
/** \brief 640, Memory buffer */
#define REG_SCB1_EZ_DATA144                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840640u + PPCA_REMAP_OFFSET_2))
/** \brief 644, Memory buffer */
#define REG_SCB1_EZ_DATA145                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840644u + PPCA_REMAP_OFFSET_2))
/** \brief 648, Memory buffer */
#define REG_SCB1_EZ_DATA146                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840648u + PPCA_REMAP_OFFSET_2))
/** \brief 64C, Memory buffer */
#define REG_SCB1_EZ_DATA147                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284064Cu + PPCA_REMAP_OFFSET_2))
/** \brief 650, Memory buffer */
#define REG_SCB1_EZ_DATA148                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840650u + PPCA_REMAP_OFFSET_2))
/** \brief 654, Memory buffer */
#define REG_SCB1_EZ_DATA149                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840654u + PPCA_REMAP_OFFSET_2))
/** \brief 658, Memory buffer */
#define REG_SCB1_EZ_DATA150                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840658u + PPCA_REMAP_OFFSET_2))
/** \brief 65C, Memory buffer */
#define REG_SCB1_EZ_DATA151                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284065Cu + PPCA_REMAP_OFFSET_2))
/** \brief 660, Memory buffer */
#define REG_SCB1_EZ_DATA152                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840660u + PPCA_REMAP_OFFSET_2))
/** \brief 664, Memory buffer */
#define REG_SCB1_EZ_DATA153                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840664u + PPCA_REMAP_OFFSET_2))
/** \brief 668, Memory buffer */
#define REG_SCB1_EZ_DATA154                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840668u + PPCA_REMAP_OFFSET_2))
/** \brief 66C, Memory buffer */
#define REG_SCB1_EZ_DATA155                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284066Cu + PPCA_REMAP_OFFSET_2))
/** \brief 670, Memory buffer */
#define REG_SCB1_EZ_DATA156                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840670u + PPCA_REMAP_OFFSET_2))
/** \brief 674, Memory buffer */
#define REG_SCB1_EZ_DATA157                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840674u + PPCA_REMAP_OFFSET_2))
/** \brief 678, Memory buffer */
#define REG_SCB1_EZ_DATA158                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840678u + PPCA_REMAP_OFFSET_2))
/** \brief 67C, Memory buffer */
#define REG_SCB1_EZ_DATA159                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284067Cu + PPCA_REMAP_OFFSET_2))
/** \brief 680, Memory buffer */
#define REG_SCB1_EZ_DATA160                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840680u + PPCA_REMAP_OFFSET_2))
/** \brief 684, Memory buffer */
#define REG_SCB1_EZ_DATA161                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840684u + PPCA_REMAP_OFFSET_2))
/** \brief 688, Memory buffer */
#define REG_SCB1_EZ_DATA162                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840688u + PPCA_REMAP_OFFSET_2))
/** \brief 68C, Memory buffer */
#define REG_SCB1_EZ_DATA163                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284068Cu + PPCA_REMAP_OFFSET_2))
/** \brief 690, Memory buffer */
#define REG_SCB1_EZ_DATA164                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840690u + PPCA_REMAP_OFFSET_2))
/** \brief 694, Memory buffer */
#define REG_SCB1_EZ_DATA165                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840694u + PPCA_REMAP_OFFSET_2))
/** \brief 698, Memory buffer */
#define REG_SCB1_EZ_DATA166                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840698u + PPCA_REMAP_OFFSET_2))
/** \brief 69C, Memory buffer */
#define REG_SCB1_EZ_DATA167                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284069Cu + PPCA_REMAP_OFFSET_2))
/** \brief 6A0, Memory buffer */
#define REG_SCB1_EZ_DATA168                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406A0u + PPCA_REMAP_OFFSET_2))
/** \brief 6A4, Memory buffer */
#define REG_SCB1_EZ_DATA169                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406A4u + PPCA_REMAP_OFFSET_2))
/** \brief 6A8, Memory buffer */
#define REG_SCB1_EZ_DATA170                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406A8u + PPCA_REMAP_OFFSET_2))
/** \brief 6AC, Memory buffer */
#define REG_SCB1_EZ_DATA171                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406ACu + PPCA_REMAP_OFFSET_2))
/** \brief 6B0, Memory buffer */
#define REG_SCB1_EZ_DATA172                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406B0u + PPCA_REMAP_OFFSET_2))
/** \brief 6B4, Memory buffer */
#define REG_SCB1_EZ_DATA173                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406B4u + PPCA_REMAP_OFFSET_2))
/** \brief 6B8, Memory buffer */
#define REG_SCB1_EZ_DATA174                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406B8u + PPCA_REMAP_OFFSET_2))
/** \brief 6BC, Memory buffer */
#define REG_SCB1_EZ_DATA175                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406BCu + PPCA_REMAP_OFFSET_2))
/** \brief 6C0, Memory buffer */
#define REG_SCB1_EZ_DATA176                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406C0u + PPCA_REMAP_OFFSET_2))
/** \brief 6C4, Memory buffer */
#define REG_SCB1_EZ_DATA177                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406C4u + PPCA_REMAP_OFFSET_2))
/** \brief 6C8, Memory buffer */
#define REG_SCB1_EZ_DATA178                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406C8u + PPCA_REMAP_OFFSET_2))
/** \brief 6CC, Memory buffer */
#define REG_SCB1_EZ_DATA179                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406CCu + PPCA_REMAP_OFFSET_2))
/** \brief 6D0, Memory buffer */
#define REG_SCB1_EZ_DATA180                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406D0u + PPCA_REMAP_OFFSET_2))
/** \brief 6D4, Memory buffer */
#define REG_SCB1_EZ_DATA181                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406D4u + PPCA_REMAP_OFFSET_2))
/** \brief 6D8, Memory buffer */
#define REG_SCB1_EZ_DATA182                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406D8u + PPCA_REMAP_OFFSET_2))
/** \brief 6DC, Memory buffer */
#define REG_SCB1_EZ_DATA183                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406DCu + PPCA_REMAP_OFFSET_2))
/** \brief 6E0, Memory buffer */
#define REG_SCB1_EZ_DATA184                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406E0u + PPCA_REMAP_OFFSET_2))
/** \brief 6E4, Memory buffer */
#define REG_SCB1_EZ_DATA185                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406E4u + PPCA_REMAP_OFFSET_2))
/** \brief 6E8, Memory buffer */
#define REG_SCB1_EZ_DATA186                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6EC, Memory buffer */
#define REG_SCB1_EZ_DATA187                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406ECu + PPCA_REMAP_OFFSET_2))
/** \brief 6F0, Memory buffer */
#define REG_SCB1_EZ_DATA188                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406F0u + PPCA_REMAP_OFFSET_2))
/** \brief 6F4, Memory buffer */
#define REG_SCB1_EZ_DATA189                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406F4u + PPCA_REMAP_OFFSET_2))
/** \brief 6F8, Memory buffer */
#define REG_SCB1_EZ_DATA190                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406F8u + PPCA_REMAP_OFFSET_2))
/** \brief 6FC, Memory buffer */
#define REG_SCB1_EZ_DATA191                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428406FCu + PPCA_REMAP_OFFSET_2))
/** \brief 700, Memory buffer */
#define REG_SCB1_EZ_DATA192                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840700u + PPCA_REMAP_OFFSET_2))
/** \brief 704, Memory buffer */
#define REG_SCB1_EZ_DATA193                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840704u + PPCA_REMAP_OFFSET_2))
/** \brief 708, Memory buffer */
#define REG_SCB1_EZ_DATA194                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840708u + PPCA_REMAP_OFFSET_2))
/** \brief 70C, Memory buffer */
#define REG_SCB1_EZ_DATA195                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284070Cu + PPCA_REMAP_OFFSET_2))
/** \brief 710, Memory buffer */
#define REG_SCB1_EZ_DATA196                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840710u + PPCA_REMAP_OFFSET_2))
/** \brief 714, Memory buffer */
#define REG_SCB1_EZ_DATA197                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840714u + PPCA_REMAP_OFFSET_2))
/** \brief 718, Memory buffer */
#define REG_SCB1_EZ_DATA198                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840718u + PPCA_REMAP_OFFSET_2))
/** \brief 71C, Memory buffer */
#define REG_SCB1_EZ_DATA199                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284071Cu + PPCA_REMAP_OFFSET_2))
/** \brief 720, Memory buffer */
#define REG_SCB1_EZ_DATA200                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840720u + PPCA_REMAP_OFFSET_2))
/** \brief 724, Memory buffer */
#define REG_SCB1_EZ_DATA201                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840724u + PPCA_REMAP_OFFSET_2))
/** \brief 728, Memory buffer */
#define REG_SCB1_EZ_DATA202                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840728u + PPCA_REMAP_OFFSET_2))
/** \brief 72C, Memory buffer */
#define REG_SCB1_EZ_DATA203                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284072Cu + PPCA_REMAP_OFFSET_2))
/** \brief 730, Memory buffer */
#define REG_SCB1_EZ_DATA204                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840730u + PPCA_REMAP_OFFSET_2))
/** \brief 734, Memory buffer */
#define REG_SCB1_EZ_DATA205                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840734u + PPCA_REMAP_OFFSET_2))
/** \brief 738, Memory buffer */
#define REG_SCB1_EZ_DATA206                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840738u + PPCA_REMAP_OFFSET_2))
/** \brief 73C, Memory buffer */
#define REG_SCB1_EZ_DATA207                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284073Cu + PPCA_REMAP_OFFSET_2))
/** \brief 740, Memory buffer */
#define REG_SCB1_EZ_DATA208                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840740u + PPCA_REMAP_OFFSET_2))
/** \brief 744, Memory buffer */
#define REG_SCB1_EZ_DATA209                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840744u + PPCA_REMAP_OFFSET_2))
/** \brief 748, Memory buffer */
#define REG_SCB1_EZ_DATA210                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840748u + PPCA_REMAP_OFFSET_2))
/** \brief 74C, Memory buffer */
#define REG_SCB1_EZ_DATA211                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284074Cu + PPCA_REMAP_OFFSET_2))
/** \brief 750, Memory buffer */
#define REG_SCB1_EZ_DATA212                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840750u + PPCA_REMAP_OFFSET_2))
/** \brief 754, Memory buffer */
#define REG_SCB1_EZ_DATA213                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840754u + PPCA_REMAP_OFFSET_2))
/** \brief 758, Memory buffer */
#define REG_SCB1_EZ_DATA214                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840758u + PPCA_REMAP_OFFSET_2))
/** \brief 75C, Memory buffer */
#define REG_SCB1_EZ_DATA215                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284075Cu + PPCA_REMAP_OFFSET_2))
/** \brief 760, Memory buffer */
#define REG_SCB1_EZ_DATA216                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840760u + PPCA_REMAP_OFFSET_2))
/** \brief 764, Memory buffer */
#define REG_SCB1_EZ_DATA217                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840764u + PPCA_REMAP_OFFSET_2))
/** \brief 768, Memory buffer */
#define REG_SCB1_EZ_DATA218                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840768u + PPCA_REMAP_OFFSET_2))
/** \brief 76C, Memory buffer */
#define REG_SCB1_EZ_DATA219                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284076Cu + PPCA_REMAP_OFFSET_2))
/** \brief 770, Memory buffer */
#define REG_SCB1_EZ_DATA220                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840770u + PPCA_REMAP_OFFSET_2))
/** \brief 774, Memory buffer */
#define REG_SCB1_EZ_DATA221                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840774u + PPCA_REMAP_OFFSET_2))
/** \brief 778, Memory buffer */
#define REG_SCB1_EZ_DATA222                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840778u + PPCA_REMAP_OFFSET_2))
/** \brief 77C, Memory buffer */
#define REG_SCB1_EZ_DATA223                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284077Cu + PPCA_REMAP_OFFSET_2))
/** \brief 780, Memory buffer */
#define REG_SCB1_EZ_DATA224                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840780u + PPCA_REMAP_OFFSET_2))
/** \brief 784, Memory buffer */
#define REG_SCB1_EZ_DATA225                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840784u + PPCA_REMAP_OFFSET_2))
/** \brief 788, Memory buffer */
#define REG_SCB1_EZ_DATA226                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840788u + PPCA_REMAP_OFFSET_2))
/** \brief 78C, Memory buffer */
#define REG_SCB1_EZ_DATA227                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284078Cu + PPCA_REMAP_OFFSET_2))
/** \brief 790, Memory buffer */
#define REG_SCB1_EZ_DATA228                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840790u + PPCA_REMAP_OFFSET_2))
/** \brief 794, Memory buffer */
#define REG_SCB1_EZ_DATA229                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840794u + PPCA_REMAP_OFFSET_2))
/** \brief 798, Memory buffer */
#define REG_SCB1_EZ_DATA230                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42840798u + PPCA_REMAP_OFFSET_2))
/** \brief 79C, Memory buffer */
#define REG_SCB1_EZ_DATA231                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4284079Cu + PPCA_REMAP_OFFSET_2))
/** \brief 7A0, Memory buffer */
#define REG_SCB1_EZ_DATA232                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407A0u + PPCA_REMAP_OFFSET_2))
/** \brief 7A4, Memory buffer */
#define REG_SCB1_EZ_DATA233                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407A4u + PPCA_REMAP_OFFSET_2))
/** \brief 7A8, Memory buffer */
#define REG_SCB1_EZ_DATA234                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407A8u + PPCA_REMAP_OFFSET_2))
/** \brief 7AC, Memory buffer */
#define REG_SCB1_EZ_DATA235                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407ACu + PPCA_REMAP_OFFSET_2))
/** \brief 7B0, Memory buffer */
#define REG_SCB1_EZ_DATA236                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407B0u + PPCA_REMAP_OFFSET_2))
/** \brief 7B4, Memory buffer */
#define REG_SCB1_EZ_DATA237                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407B4u + PPCA_REMAP_OFFSET_2))
/** \brief 7B8, Memory buffer */
#define REG_SCB1_EZ_DATA238                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407B8u + PPCA_REMAP_OFFSET_2))
/** \brief 7BC, Memory buffer */
#define REG_SCB1_EZ_DATA239                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407BCu + PPCA_REMAP_OFFSET_2))
/** \brief 7C0, Memory buffer */
#define REG_SCB1_EZ_DATA240                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407C0u + PPCA_REMAP_OFFSET_2))
/** \brief 7C4, Memory buffer */
#define REG_SCB1_EZ_DATA241                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407C4u + PPCA_REMAP_OFFSET_2))
/** \brief 7C8, Memory buffer */
#define REG_SCB1_EZ_DATA242                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407C8u + PPCA_REMAP_OFFSET_2))
/** \brief 7CC, Memory buffer */
#define REG_SCB1_EZ_DATA243                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407CCu + PPCA_REMAP_OFFSET_2))
/** \brief 7D0, Memory buffer */
#define REG_SCB1_EZ_DATA244                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407D0u + PPCA_REMAP_OFFSET_2))
/** \brief 7D4, Memory buffer */
#define REG_SCB1_EZ_DATA245                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407D4u + PPCA_REMAP_OFFSET_2))
/** \brief 7D8, Memory buffer */
#define REG_SCB1_EZ_DATA246                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407D8u + PPCA_REMAP_OFFSET_2))
/** \brief 7DC, Memory buffer */
#define REG_SCB1_EZ_DATA247                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407DCu + PPCA_REMAP_OFFSET_2))
/** \brief 7E0, Memory buffer */
#define REG_SCB1_EZ_DATA248                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407E0u + PPCA_REMAP_OFFSET_2))
/** \brief 7E4, Memory buffer */
#define REG_SCB1_EZ_DATA249                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407E4u + PPCA_REMAP_OFFSET_2))
/** \brief 7E8, Memory buffer */
#define REG_SCB1_EZ_DATA250                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407E8u + PPCA_REMAP_OFFSET_2))
/** \brief 7EC, Memory buffer */
#define REG_SCB1_EZ_DATA251                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407ECu + PPCA_REMAP_OFFSET_2))
/** \brief 7F0, Memory buffer */
#define REG_SCB1_EZ_DATA252                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407F0u + PPCA_REMAP_OFFSET_2))
/** \brief 7F4, Memory buffer */
#define REG_SCB1_EZ_DATA253                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407F4u + PPCA_REMAP_OFFSET_2))
/** \brief 7F8, Memory buffer */
#define REG_SCB1_EZ_DATA254                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407F8u + PPCA_REMAP_OFFSET_2))
/** \brief 7FC, Memory buffer */
#define REG_SCB1_EZ_DATA255                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428407FCu + PPCA_REMAP_OFFSET_2))
/** \brief E00, Active clocked interrupt signal */
#define REG_SCB1_INTR_CAUSE                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_CAUSE*)(0x42840E00u + PPCA_REMAP_OFFSET_2))
/** \brief E80, Externally clocked I2C interrupt request */
#define REG_SCB1_INTR_I2C_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC*)(0x42840E80u + PPCA_REMAP_OFFSET_2))
/** \brief E88, Externally clocked I2C interrupt mask */
#define REG_SCB1_INTR_I2C_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASK*)(0x42840E88u + PPCA_REMAP_OFFSET_2))
/** \brief E8C, Externally clocked I2C interrupt masked */
#define REG_SCB1_INTR_I2C_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASKED*)(0x42840E8Cu + PPCA_REMAP_OFFSET_2))
/** \brief EC0, Externally clocked SPI interrupt request */
#define REG_SCB1_INTR_SPI_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC*)(0x42840EC0u + PPCA_REMAP_OFFSET_2))
/** \brief EC8, Externally clocked SPI interrupt mask */
#define REG_SCB1_INTR_SPI_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASK*)(0x42840EC8u + PPCA_REMAP_OFFSET_2))
/** \brief ECC, Externally clocked SPI interrupt masked */
#define REG_SCB1_INTR_SPI_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASKED*)(0x42840ECCu + PPCA_REMAP_OFFSET_2))
/** \brief F00, Master interrupt request */
#define REG_SCB1_INTR_M                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M*)(0x42840F00u + PPCA_REMAP_OFFSET_2))
/** \brief F04, Master interrupt set request */
#define REG_SCB1_INTR_M_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_SET*)(0x42840F04u + PPCA_REMAP_OFFSET_2))
/** \brief F08, Master interrupt mask */
#define REG_SCB1_INTR_M_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASK*)(0x42840F08u + PPCA_REMAP_OFFSET_2))
/** \brief F0C, Master interrupt masked request */
#define REG_SCB1_INTR_M_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASKED*)(0x42840F0Cu + PPCA_REMAP_OFFSET_2))
/** \brief F40, Slave interrupt request */
#define REG_SCB1_INTR_S                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S*)(0x42840F40u + PPCA_REMAP_OFFSET_2))
/** \brief F44, Slave interrupt set request */
#define REG_SCB1_INTR_S_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_SET*)(0x42840F44u + PPCA_REMAP_OFFSET_2))
/** \brief F48, Slave interrupt mask */
#define REG_SCB1_INTR_S_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASK*)(0x42840F48u + PPCA_REMAP_OFFSET_2))
/** \brief F4C, Slave interrupt masked request */
#define REG_SCB1_INTR_S_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASKED*)(0x42840F4Cu + PPCA_REMAP_OFFSET_2))
/** \brief F80, Transmitter interrupt request */
#define REG_SCB1_INTR_TX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX*)(0x42840F80u + PPCA_REMAP_OFFSET_2))
/** \brief F84, Transmitter interrupt set request */
#define REG_SCB1_INTR_TX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_SET*)(0x42840F84u + PPCA_REMAP_OFFSET_2))
/** \brief F88, Transmitter interrupt mask */
#define REG_SCB1_INTR_TX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASK*)(0x42840F88u + PPCA_REMAP_OFFSET_2))
/** \brief F8C, Transmitter interrupt masked request */
#define REG_SCB1_INTR_TX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASKED*)(0x42840F8Cu + PPCA_REMAP_OFFSET_2))
/** \brief FC0, Receiver interrupt request */
#define REG_SCB1_INTR_RX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX*)(0x42840FC0u + PPCA_REMAP_OFFSET_2))
/** \brief FC4, Receiver interrupt set request */
#define REG_SCB1_INTR_RX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_SET*)(0x42840FC4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Receiver interrupt mask */
#define REG_SCB1_INTR_RX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASK*)(0x42840FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Receiver interrupt masked request */
#define REG_SCB1_INTR_RX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASKED*)(0x42840FCCu + PPCA_REMAP_OFFSET_2))
/** \brief FD0, Receiver interrupt request */
#define REG_SCB1_INTR_TGS                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS*)(0x42840FD0u + PPCA_REMAP_OFFSET_2))
/** \brief FD4, Receiver interrupt set request */
#define REG_SCB1_INTR_TGS_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_SET*)(0x42840FD4u + PPCA_REMAP_OFFSET_2))
/** \brief FD8, Receiver interrupt mask */
#define REG_SCB1_INTR_TGS_MASK                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASK*)(0x42840FD8u + PPCA_REMAP_OFFSET_2))
/** \brief FDC, Receiver interrupt masked request */
#define REG_SCB1_INTR_TGS_MASKED                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASKED*)(0x42840FDCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Generic control */
#define REG_SCB2_CTRL                           /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CTRL*)(0x42850000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Generic status */
#define REG_SCB2_STATUS                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_STATUS*)(0x42850004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Command/response control */
#define REG_SCB2_CMD_RESP_CTRL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_CTRL*)(0x42850008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Command/response status */
#define REG_SCB2_CMD_RESP_STATUS                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_STATUS*)(0x4285000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, SPI control */
#define REG_SCB2_SPI_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_CTRL*)(0x42850020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, SPI status */
#define REG_SCB2_SPI_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_STATUS*)(0x42850024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, SPI transmitter control */
#define REG_SCB2_SPI_TX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_TX_CTRL*)(0x42850028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, SPI receiver control */
#define REG_SCB2_SPI_RX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_RX_CTRL*)(0x4285002Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, UART control */
#define REG_SCB2_UART_CTRL                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_CTRL*)(0x42850040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, UART transmitter control */
#define REG_SCB2_UART_TX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_TX_CTRL*)(0x42850044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, UART receiver control */
#define REG_SCB2_UART_RX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_CTRL*)(0x42850048u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, UART receiver status */
#define REG_SCB2_UART_RX_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_STATUS*)(0x4285004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, UART flow control */
#define REG_SCB2_UART_FLOW_CTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_FLOW_CTRL*)(0x42850050u + PPCA_REMAP_OFFSET_2))
/** \brief 60, I2C control */
#define REG_SCB2_I2C_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CTRL*)(0x42850060u + PPCA_REMAP_OFFSET_2))
/** \brief 64, I2C status */
#define REG_SCB2_I2C_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STATUS*)(0x42850064u + PPCA_REMAP_OFFSET_2))
/** \brief 68, I2C master command */
#define REG_SCB2_I2C_M_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_M_CMD*)(0x42850068u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, I2C slave command */
#define REG_SCB2_I2C_S_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_S_CMD*)(0x4285006Cu + PPCA_REMAP_OFFSET_2))
/** \brief 70, I2C configuration */
#define REG_SCB2_I2C_CFG                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CFG*)(0x42850070u + PPCA_REMAP_OFFSET_2))
/** \brief 74, I2C stretch control */
#define REG_SCB2_I2C_STRETCH_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_CTRL*)(0x42850074u + PPCA_REMAP_OFFSET_2))
/** \brief 78, I2C stretch status */
#define REG_SCB2_I2C_STRETCH_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_STATUS*)(0x42850078u + PPCA_REMAP_OFFSET_2))
/** \brief 120, Timeout generation support 0 control */
#define REG_SCB2_TGS_CTL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL0*)(0x42850120u + PPCA_REMAP_OFFSET_2))
/** \brief 124, Timeout generation support 0 counter */
#define REG_SCB2_TGS_CNT0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT0*)(0x42850124u + PPCA_REMAP_OFFSET_2))
/** \brief 128, Timeout generation support 0 reload */
#define REG_SCB2_TGS_REL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL0*)(0x42850128u + PPCA_REMAP_OFFSET_2))
/** \brief 12C, Timeout generation support 1 control */
#define REG_SCB2_TGS_CTL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL1*)(0x4285012Cu + PPCA_REMAP_OFFSET_2))
/** \brief 130, Timeout generation support 1 counter */
#define REG_SCB2_TGS_CNT1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT1*)(0x42850130u + PPCA_REMAP_OFFSET_2))
/** \brief 134, Timeout generation support 1 reload */
#define REG_SCB2_TGS_REL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL1*)(0x42850134u + PPCA_REMAP_OFFSET_2))
/** \brief 138, Timeout generation support 2 control */
#define REG_SCB2_TGS_CTL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL2*)(0x42850138u + PPCA_REMAP_OFFSET_2))
/** \brief 13C, Timeout generation support 2 counter */
#define REG_SCB2_TGS_CNT2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT2*)(0x4285013Cu + PPCA_REMAP_OFFSET_2))
/** \brief 140, Timeout generation support 2 reload */
#define REG_SCB2_TGS_REL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL2*)(0x42850140u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Transmitter control */
#define REG_SCB2_TX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_CTRL*)(0x42850200u + PPCA_REMAP_OFFSET_2))
/** \brief 204, Transmitter FIFO control */
#define REG_SCB2_TX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_CTRL*)(0x42850204u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Transmitter FIFO status */
#define REG_SCB2_TX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_STATUS*)(0x42850208u + PPCA_REMAP_OFFSET_2))
/** \brief 240, Transmitter FIFO write */
#define REG_SCB2_TX_FIFO_WR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_WR*)(0x42850240u + PPCA_REMAP_OFFSET_2))
/** \brief 300, Receiver control */
#define REG_SCB2_RX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_CTRL*)(0x42850300u + PPCA_REMAP_OFFSET_2))
/** \brief 304, Receiver FIFO control */
#define REG_SCB2_RX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_CTRL*)(0x42850304u + PPCA_REMAP_OFFSET_2))
/** \brief 308, Receiver FIFO status */
#define REG_SCB2_RX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_STATUS*)(0x42850308u + PPCA_REMAP_OFFSET_2))
/** \brief 310, Slave address and mask */
#define REG_SCB2_RX_MATCH                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH*)(0x42850310u + PPCA_REMAP_OFFSET_2))
/** \brief 314, Slave address and mask */
#define REG_SCB2_RX_MATCH1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH1*)(0x42850314u + PPCA_REMAP_OFFSET_2))
/** \brief 318, Slave address and mask */
#define REG_SCB2_RX_MATCH2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH2*)(0x42850318u + PPCA_REMAP_OFFSET_2))
/** \brief 340, Receiver FIFO read */
#define REG_SCB2_RX_FIFO_RD                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD*)(0x42850340u + PPCA_REMAP_OFFSET_2))
/** \brief 344, Receiver FIFO read silent */
#define REG_SCB2_RX_FIFO_RD_SILENT              /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD_SILENT*)(0x42850344u + PPCA_REMAP_OFFSET_2))
/** \brief 400, Memory buffer */
#define REG_SCB2_EZ_DATA0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850400u + PPCA_REMAP_OFFSET_2))
/** \brief 404, Memory buffer */
#define REG_SCB2_EZ_DATA1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850404u + PPCA_REMAP_OFFSET_2))
/** \brief 408, Memory buffer */
#define REG_SCB2_EZ_DATA2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850408u + PPCA_REMAP_OFFSET_2))
/** \brief 40C, Memory buffer */
#define REG_SCB2_EZ_DATA3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285040Cu + PPCA_REMAP_OFFSET_2))
/** \brief 410, Memory buffer */
#define REG_SCB2_EZ_DATA4                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850410u + PPCA_REMAP_OFFSET_2))
/** \brief 414, Memory buffer */
#define REG_SCB2_EZ_DATA5                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850414u + PPCA_REMAP_OFFSET_2))
/** \brief 418, Memory buffer */
#define REG_SCB2_EZ_DATA6                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850418u + PPCA_REMAP_OFFSET_2))
/** \brief 41C, Memory buffer */
#define REG_SCB2_EZ_DATA7                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285041Cu + PPCA_REMAP_OFFSET_2))
/** \brief 420, Memory buffer */
#define REG_SCB2_EZ_DATA8                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850420u + PPCA_REMAP_OFFSET_2))
/** \brief 424, Memory buffer */
#define REG_SCB2_EZ_DATA9                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850424u + PPCA_REMAP_OFFSET_2))
/** \brief 428, Memory buffer */
#define REG_SCB2_EZ_DATA10                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850428u + PPCA_REMAP_OFFSET_2))
/** \brief 42C, Memory buffer */
#define REG_SCB2_EZ_DATA11                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285042Cu + PPCA_REMAP_OFFSET_2))
/** \brief 430, Memory buffer */
#define REG_SCB2_EZ_DATA12                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850430u + PPCA_REMAP_OFFSET_2))
/** \brief 434, Memory buffer */
#define REG_SCB2_EZ_DATA13                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850434u + PPCA_REMAP_OFFSET_2))
/** \brief 438, Memory buffer */
#define REG_SCB2_EZ_DATA14                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850438u + PPCA_REMAP_OFFSET_2))
/** \brief 43C, Memory buffer */
#define REG_SCB2_EZ_DATA15                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285043Cu + PPCA_REMAP_OFFSET_2))
/** \brief 440, Memory buffer */
#define REG_SCB2_EZ_DATA16                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850440u + PPCA_REMAP_OFFSET_2))
/** \brief 444, Memory buffer */
#define REG_SCB2_EZ_DATA17                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850444u + PPCA_REMAP_OFFSET_2))
/** \brief 448, Memory buffer */
#define REG_SCB2_EZ_DATA18                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850448u + PPCA_REMAP_OFFSET_2))
/** \brief 44C, Memory buffer */
#define REG_SCB2_EZ_DATA19                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285044Cu + PPCA_REMAP_OFFSET_2))
/** \brief 450, Memory buffer */
#define REG_SCB2_EZ_DATA20                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850450u + PPCA_REMAP_OFFSET_2))
/** \brief 454, Memory buffer */
#define REG_SCB2_EZ_DATA21                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850454u + PPCA_REMAP_OFFSET_2))
/** \brief 458, Memory buffer */
#define REG_SCB2_EZ_DATA22                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850458u + PPCA_REMAP_OFFSET_2))
/** \brief 45C, Memory buffer */
#define REG_SCB2_EZ_DATA23                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285045Cu + PPCA_REMAP_OFFSET_2))
/** \brief 460, Memory buffer */
#define REG_SCB2_EZ_DATA24                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850460u + PPCA_REMAP_OFFSET_2))
/** \brief 464, Memory buffer */
#define REG_SCB2_EZ_DATA25                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850464u + PPCA_REMAP_OFFSET_2))
/** \brief 468, Memory buffer */
#define REG_SCB2_EZ_DATA26                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850468u + PPCA_REMAP_OFFSET_2))
/** \brief 46C, Memory buffer */
#define REG_SCB2_EZ_DATA27                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285046Cu + PPCA_REMAP_OFFSET_2))
/** \brief 470, Memory buffer */
#define REG_SCB2_EZ_DATA28                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850470u + PPCA_REMAP_OFFSET_2))
/** \brief 474, Memory buffer */
#define REG_SCB2_EZ_DATA29                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850474u + PPCA_REMAP_OFFSET_2))
/** \brief 478, Memory buffer */
#define REG_SCB2_EZ_DATA30                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850478u + PPCA_REMAP_OFFSET_2))
/** \brief 47C, Memory buffer */
#define REG_SCB2_EZ_DATA31                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285047Cu + PPCA_REMAP_OFFSET_2))
/** \brief 480, Memory buffer */
#define REG_SCB2_EZ_DATA32                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850480u + PPCA_REMAP_OFFSET_2))
/** \brief 484, Memory buffer */
#define REG_SCB2_EZ_DATA33                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850484u + PPCA_REMAP_OFFSET_2))
/** \brief 488, Memory buffer */
#define REG_SCB2_EZ_DATA34                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850488u + PPCA_REMAP_OFFSET_2))
/** \brief 48C, Memory buffer */
#define REG_SCB2_EZ_DATA35                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285048Cu + PPCA_REMAP_OFFSET_2))
/** \brief 490, Memory buffer */
#define REG_SCB2_EZ_DATA36                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850490u + PPCA_REMAP_OFFSET_2))
/** \brief 494, Memory buffer */
#define REG_SCB2_EZ_DATA37                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850494u + PPCA_REMAP_OFFSET_2))
/** \brief 498, Memory buffer */
#define REG_SCB2_EZ_DATA38                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850498u + PPCA_REMAP_OFFSET_2))
/** \brief 49C, Memory buffer */
#define REG_SCB2_EZ_DATA39                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285049Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4A0, Memory buffer */
#define REG_SCB2_EZ_DATA40                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504A0u + PPCA_REMAP_OFFSET_2))
/** \brief 4A4, Memory buffer */
#define REG_SCB2_EZ_DATA41                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504A4u + PPCA_REMAP_OFFSET_2))
/** \brief 4A8, Memory buffer */
#define REG_SCB2_EZ_DATA42                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504A8u + PPCA_REMAP_OFFSET_2))
/** \brief 4AC, Memory buffer */
#define REG_SCB2_EZ_DATA43                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504ACu + PPCA_REMAP_OFFSET_2))
/** \brief 4B0, Memory buffer */
#define REG_SCB2_EZ_DATA44                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504B0u + PPCA_REMAP_OFFSET_2))
/** \brief 4B4, Memory buffer */
#define REG_SCB2_EZ_DATA45                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504B4u + PPCA_REMAP_OFFSET_2))
/** \brief 4B8, Memory buffer */
#define REG_SCB2_EZ_DATA46                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504B8u + PPCA_REMAP_OFFSET_2))
/** \brief 4BC, Memory buffer */
#define REG_SCB2_EZ_DATA47                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504BCu + PPCA_REMAP_OFFSET_2))
/** \brief 4C0, Memory buffer */
#define REG_SCB2_EZ_DATA48                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4C4, Memory buffer */
#define REG_SCB2_EZ_DATA49                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504C4u + PPCA_REMAP_OFFSET_2))
/** \brief 4C8, Memory buffer */
#define REG_SCB2_EZ_DATA50                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4CC, Memory buffer */
#define REG_SCB2_EZ_DATA51                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504CCu + PPCA_REMAP_OFFSET_2))
/** \brief 4D0, Memory buffer */
#define REG_SCB2_EZ_DATA52                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504D0u + PPCA_REMAP_OFFSET_2))
/** \brief 4D4, Memory buffer */
#define REG_SCB2_EZ_DATA53                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504D4u + PPCA_REMAP_OFFSET_2))
/** \brief 4D8, Memory buffer */
#define REG_SCB2_EZ_DATA54                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504D8u + PPCA_REMAP_OFFSET_2))
/** \brief 4DC, Memory buffer */
#define REG_SCB2_EZ_DATA55                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504DCu + PPCA_REMAP_OFFSET_2))
/** \brief 4E0, Memory buffer */
#define REG_SCB2_EZ_DATA56                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504E0u + PPCA_REMAP_OFFSET_2))
/** \brief 4E4, Memory buffer */
#define REG_SCB2_EZ_DATA57                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504E4u + PPCA_REMAP_OFFSET_2))
/** \brief 4E8, Memory buffer */
#define REG_SCB2_EZ_DATA58                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504E8u + PPCA_REMAP_OFFSET_2))
/** \brief 4EC, Memory buffer */
#define REG_SCB2_EZ_DATA59                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504ECu + PPCA_REMAP_OFFSET_2))
/** \brief 4F0, Memory buffer */
#define REG_SCB2_EZ_DATA60                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504F0u + PPCA_REMAP_OFFSET_2))
/** \brief 4F4, Memory buffer */
#define REG_SCB2_EZ_DATA61                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504F4u + PPCA_REMAP_OFFSET_2))
/** \brief 4F8, Memory buffer */
#define REG_SCB2_EZ_DATA62                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504F8u + PPCA_REMAP_OFFSET_2))
/** \brief 4FC, Memory buffer */
#define REG_SCB2_EZ_DATA63                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428504FCu + PPCA_REMAP_OFFSET_2))
/** \brief 500, Memory buffer */
#define REG_SCB2_EZ_DATA64                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850500u + PPCA_REMAP_OFFSET_2))
/** \brief 504, Memory buffer */
#define REG_SCB2_EZ_DATA65                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850504u + PPCA_REMAP_OFFSET_2))
/** \brief 508, Memory buffer */
#define REG_SCB2_EZ_DATA66                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850508u + PPCA_REMAP_OFFSET_2))
/** \brief 50C, Memory buffer */
#define REG_SCB2_EZ_DATA67                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285050Cu + PPCA_REMAP_OFFSET_2))
/** \brief 510, Memory buffer */
#define REG_SCB2_EZ_DATA68                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850510u + PPCA_REMAP_OFFSET_2))
/** \brief 514, Memory buffer */
#define REG_SCB2_EZ_DATA69                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850514u + PPCA_REMAP_OFFSET_2))
/** \brief 518, Memory buffer */
#define REG_SCB2_EZ_DATA70                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850518u + PPCA_REMAP_OFFSET_2))
/** \brief 51C, Memory buffer */
#define REG_SCB2_EZ_DATA71                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285051Cu + PPCA_REMAP_OFFSET_2))
/** \brief 520, Memory buffer */
#define REG_SCB2_EZ_DATA72                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850520u + PPCA_REMAP_OFFSET_2))
/** \brief 524, Memory buffer */
#define REG_SCB2_EZ_DATA73                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850524u + PPCA_REMAP_OFFSET_2))
/** \brief 528, Memory buffer */
#define REG_SCB2_EZ_DATA74                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850528u + PPCA_REMAP_OFFSET_2))
/** \brief 52C, Memory buffer */
#define REG_SCB2_EZ_DATA75                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285052Cu + PPCA_REMAP_OFFSET_2))
/** \brief 530, Memory buffer */
#define REG_SCB2_EZ_DATA76                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850530u + PPCA_REMAP_OFFSET_2))
/** \brief 534, Memory buffer */
#define REG_SCB2_EZ_DATA77                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850534u + PPCA_REMAP_OFFSET_2))
/** \brief 538, Memory buffer */
#define REG_SCB2_EZ_DATA78                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850538u + PPCA_REMAP_OFFSET_2))
/** \brief 53C, Memory buffer */
#define REG_SCB2_EZ_DATA79                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285053Cu + PPCA_REMAP_OFFSET_2))
/** \brief 540, Memory buffer */
#define REG_SCB2_EZ_DATA80                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850540u + PPCA_REMAP_OFFSET_2))
/** \brief 544, Memory buffer */
#define REG_SCB2_EZ_DATA81                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850544u + PPCA_REMAP_OFFSET_2))
/** \brief 548, Memory buffer */
#define REG_SCB2_EZ_DATA82                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850548u + PPCA_REMAP_OFFSET_2))
/** \brief 54C, Memory buffer */
#define REG_SCB2_EZ_DATA83                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285054Cu + PPCA_REMAP_OFFSET_2))
/** \brief 550, Memory buffer */
#define REG_SCB2_EZ_DATA84                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850550u + PPCA_REMAP_OFFSET_2))
/** \brief 554, Memory buffer */
#define REG_SCB2_EZ_DATA85                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850554u + PPCA_REMAP_OFFSET_2))
/** \brief 558, Memory buffer */
#define REG_SCB2_EZ_DATA86                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850558u + PPCA_REMAP_OFFSET_2))
/** \brief 55C, Memory buffer */
#define REG_SCB2_EZ_DATA87                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285055Cu + PPCA_REMAP_OFFSET_2))
/** \brief 560, Memory buffer */
#define REG_SCB2_EZ_DATA88                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850560u + PPCA_REMAP_OFFSET_2))
/** \brief 564, Memory buffer */
#define REG_SCB2_EZ_DATA89                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850564u + PPCA_REMAP_OFFSET_2))
/** \brief 568, Memory buffer */
#define REG_SCB2_EZ_DATA90                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850568u + PPCA_REMAP_OFFSET_2))
/** \brief 56C, Memory buffer */
#define REG_SCB2_EZ_DATA91                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285056Cu + PPCA_REMAP_OFFSET_2))
/** \brief 570, Memory buffer */
#define REG_SCB2_EZ_DATA92                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850570u + PPCA_REMAP_OFFSET_2))
/** \brief 574, Memory buffer */
#define REG_SCB2_EZ_DATA93                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850574u + PPCA_REMAP_OFFSET_2))
/** \brief 578, Memory buffer */
#define REG_SCB2_EZ_DATA94                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850578u + PPCA_REMAP_OFFSET_2))
/** \brief 57C, Memory buffer */
#define REG_SCB2_EZ_DATA95                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285057Cu + PPCA_REMAP_OFFSET_2))
/** \brief 580, Memory buffer */
#define REG_SCB2_EZ_DATA96                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850580u + PPCA_REMAP_OFFSET_2))
/** \brief 584, Memory buffer */
#define REG_SCB2_EZ_DATA97                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850584u + PPCA_REMAP_OFFSET_2))
/** \brief 588, Memory buffer */
#define REG_SCB2_EZ_DATA98                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850588u + PPCA_REMAP_OFFSET_2))
/** \brief 58C, Memory buffer */
#define REG_SCB2_EZ_DATA99                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285058Cu + PPCA_REMAP_OFFSET_2))
/** \brief 590, Memory buffer */
#define REG_SCB2_EZ_DATA100                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850590u + PPCA_REMAP_OFFSET_2))
/** \brief 594, Memory buffer */
#define REG_SCB2_EZ_DATA101                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850594u + PPCA_REMAP_OFFSET_2))
/** \brief 598, Memory buffer */
#define REG_SCB2_EZ_DATA102                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850598u + PPCA_REMAP_OFFSET_2))
/** \brief 59C, Memory buffer */
#define REG_SCB2_EZ_DATA103                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285059Cu + PPCA_REMAP_OFFSET_2))
/** \brief 5A0, Memory buffer */
#define REG_SCB2_EZ_DATA104                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505A0u + PPCA_REMAP_OFFSET_2))
/** \brief 5A4, Memory buffer */
#define REG_SCB2_EZ_DATA105                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505A4u + PPCA_REMAP_OFFSET_2))
/** \brief 5A8, Memory buffer */
#define REG_SCB2_EZ_DATA106                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505A8u + PPCA_REMAP_OFFSET_2))
/** \brief 5AC, Memory buffer */
#define REG_SCB2_EZ_DATA107                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505ACu + PPCA_REMAP_OFFSET_2))
/** \brief 5B0, Memory buffer */
#define REG_SCB2_EZ_DATA108                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505B0u + PPCA_REMAP_OFFSET_2))
/** \brief 5B4, Memory buffer */
#define REG_SCB2_EZ_DATA109                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505B4u + PPCA_REMAP_OFFSET_2))
/** \brief 5B8, Memory buffer */
#define REG_SCB2_EZ_DATA110                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505B8u + PPCA_REMAP_OFFSET_2))
/** \brief 5BC, Memory buffer */
#define REG_SCB2_EZ_DATA111                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505BCu + PPCA_REMAP_OFFSET_2))
/** \brief 5C0, Memory buffer */
#define REG_SCB2_EZ_DATA112                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505C0u + PPCA_REMAP_OFFSET_2))
/** \brief 5C4, Memory buffer */
#define REG_SCB2_EZ_DATA113                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505C4u + PPCA_REMAP_OFFSET_2))
/** \brief 5C8, Memory buffer */
#define REG_SCB2_EZ_DATA114                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505C8u + PPCA_REMAP_OFFSET_2))
/** \brief 5CC, Memory buffer */
#define REG_SCB2_EZ_DATA115                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505CCu + PPCA_REMAP_OFFSET_2))
/** \brief 5D0, Memory buffer */
#define REG_SCB2_EZ_DATA116                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505D0u + PPCA_REMAP_OFFSET_2))
/** \brief 5D4, Memory buffer */
#define REG_SCB2_EZ_DATA117                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505D4u + PPCA_REMAP_OFFSET_2))
/** \brief 5D8, Memory buffer */
#define REG_SCB2_EZ_DATA118                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505D8u + PPCA_REMAP_OFFSET_2))
/** \brief 5DC, Memory buffer */
#define REG_SCB2_EZ_DATA119                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505DCu + PPCA_REMAP_OFFSET_2))
/** \brief 5E0, Memory buffer */
#define REG_SCB2_EZ_DATA120                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505E0u + PPCA_REMAP_OFFSET_2))
/** \brief 5E4, Memory buffer */
#define REG_SCB2_EZ_DATA121                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505E4u + PPCA_REMAP_OFFSET_2))
/** \brief 5E8, Memory buffer */
#define REG_SCB2_EZ_DATA122                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505E8u + PPCA_REMAP_OFFSET_2))
/** \brief 5EC, Memory buffer */
#define REG_SCB2_EZ_DATA123                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505ECu + PPCA_REMAP_OFFSET_2))
/** \brief 5F0, Memory buffer */
#define REG_SCB2_EZ_DATA124                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505F0u + PPCA_REMAP_OFFSET_2))
/** \brief 5F4, Memory buffer */
#define REG_SCB2_EZ_DATA125                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505F4u + PPCA_REMAP_OFFSET_2))
/** \brief 5F8, Memory buffer */
#define REG_SCB2_EZ_DATA126                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505F8u + PPCA_REMAP_OFFSET_2))
/** \brief 5FC, Memory buffer */
#define REG_SCB2_EZ_DATA127                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428505FCu + PPCA_REMAP_OFFSET_2))
/** \brief 600, Memory buffer */
#define REG_SCB2_EZ_DATA128                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850600u + PPCA_REMAP_OFFSET_2))
/** \brief 604, Memory buffer */
#define REG_SCB2_EZ_DATA129                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850604u + PPCA_REMAP_OFFSET_2))
/** \brief 608, Memory buffer */
#define REG_SCB2_EZ_DATA130                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850608u + PPCA_REMAP_OFFSET_2))
/** \brief 60C, Memory buffer */
#define REG_SCB2_EZ_DATA131                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285060Cu + PPCA_REMAP_OFFSET_2))
/** \brief 610, Memory buffer */
#define REG_SCB2_EZ_DATA132                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850610u + PPCA_REMAP_OFFSET_2))
/** \brief 614, Memory buffer */
#define REG_SCB2_EZ_DATA133                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850614u + PPCA_REMAP_OFFSET_2))
/** \brief 618, Memory buffer */
#define REG_SCB2_EZ_DATA134                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850618u + PPCA_REMAP_OFFSET_2))
/** \brief 61C, Memory buffer */
#define REG_SCB2_EZ_DATA135                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285061Cu + PPCA_REMAP_OFFSET_2))
/** \brief 620, Memory buffer */
#define REG_SCB2_EZ_DATA136                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850620u + PPCA_REMAP_OFFSET_2))
/** \brief 624, Memory buffer */
#define REG_SCB2_EZ_DATA137                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850624u + PPCA_REMAP_OFFSET_2))
/** \brief 628, Memory buffer */
#define REG_SCB2_EZ_DATA138                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850628u + PPCA_REMAP_OFFSET_2))
/** \brief 62C, Memory buffer */
#define REG_SCB2_EZ_DATA139                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285062Cu + PPCA_REMAP_OFFSET_2))
/** \brief 630, Memory buffer */
#define REG_SCB2_EZ_DATA140                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850630u + PPCA_REMAP_OFFSET_2))
/** \brief 634, Memory buffer */
#define REG_SCB2_EZ_DATA141                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850634u + PPCA_REMAP_OFFSET_2))
/** \brief 638, Memory buffer */
#define REG_SCB2_EZ_DATA142                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850638u + PPCA_REMAP_OFFSET_2))
/** \brief 63C, Memory buffer */
#define REG_SCB2_EZ_DATA143                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285063Cu + PPCA_REMAP_OFFSET_2))
/** \brief 640, Memory buffer */
#define REG_SCB2_EZ_DATA144                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850640u + PPCA_REMAP_OFFSET_2))
/** \brief 644, Memory buffer */
#define REG_SCB2_EZ_DATA145                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850644u + PPCA_REMAP_OFFSET_2))
/** \brief 648, Memory buffer */
#define REG_SCB2_EZ_DATA146                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850648u + PPCA_REMAP_OFFSET_2))
/** \brief 64C, Memory buffer */
#define REG_SCB2_EZ_DATA147                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285064Cu + PPCA_REMAP_OFFSET_2))
/** \brief 650, Memory buffer */
#define REG_SCB2_EZ_DATA148                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850650u + PPCA_REMAP_OFFSET_2))
/** \brief 654, Memory buffer */
#define REG_SCB2_EZ_DATA149                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850654u + PPCA_REMAP_OFFSET_2))
/** \brief 658, Memory buffer */
#define REG_SCB2_EZ_DATA150                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850658u + PPCA_REMAP_OFFSET_2))
/** \brief 65C, Memory buffer */
#define REG_SCB2_EZ_DATA151                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285065Cu + PPCA_REMAP_OFFSET_2))
/** \brief 660, Memory buffer */
#define REG_SCB2_EZ_DATA152                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850660u + PPCA_REMAP_OFFSET_2))
/** \brief 664, Memory buffer */
#define REG_SCB2_EZ_DATA153                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850664u + PPCA_REMAP_OFFSET_2))
/** \brief 668, Memory buffer */
#define REG_SCB2_EZ_DATA154                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850668u + PPCA_REMAP_OFFSET_2))
/** \brief 66C, Memory buffer */
#define REG_SCB2_EZ_DATA155                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285066Cu + PPCA_REMAP_OFFSET_2))
/** \brief 670, Memory buffer */
#define REG_SCB2_EZ_DATA156                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850670u + PPCA_REMAP_OFFSET_2))
/** \brief 674, Memory buffer */
#define REG_SCB2_EZ_DATA157                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850674u + PPCA_REMAP_OFFSET_2))
/** \brief 678, Memory buffer */
#define REG_SCB2_EZ_DATA158                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850678u + PPCA_REMAP_OFFSET_2))
/** \brief 67C, Memory buffer */
#define REG_SCB2_EZ_DATA159                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285067Cu + PPCA_REMAP_OFFSET_2))
/** \brief 680, Memory buffer */
#define REG_SCB2_EZ_DATA160                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850680u + PPCA_REMAP_OFFSET_2))
/** \brief 684, Memory buffer */
#define REG_SCB2_EZ_DATA161                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850684u + PPCA_REMAP_OFFSET_2))
/** \brief 688, Memory buffer */
#define REG_SCB2_EZ_DATA162                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850688u + PPCA_REMAP_OFFSET_2))
/** \brief 68C, Memory buffer */
#define REG_SCB2_EZ_DATA163                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285068Cu + PPCA_REMAP_OFFSET_2))
/** \brief 690, Memory buffer */
#define REG_SCB2_EZ_DATA164                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850690u + PPCA_REMAP_OFFSET_2))
/** \brief 694, Memory buffer */
#define REG_SCB2_EZ_DATA165                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850694u + PPCA_REMAP_OFFSET_2))
/** \brief 698, Memory buffer */
#define REG_SCB2_EZ_DATA166                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850698u + PPCA_REMAP_OFFSET_2))
/** \brief 69C, Memory buffer */
#define REG_SCB2_EZ_DATA167                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285069Cu + PPCA_REMAP_OFFSET_2))
/** \brief 6A0, Memory buffer */
#define REG_SCB2_EZ_DATA168                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506A0u + PPCA_REMAP_OFFSET_2))
/** \brief 6A4, Memory buffer */
#define REG_SCB2_EZ_DATA169                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506A4u + PPCA_REMAP_OFFSET_2))
/** \brief 6A8, Memory buffer */
#define REG_SCB2_EZ_DATA170                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506A8u + PPCA_REMAP_OFFSET_2))
/** \brief 6AC, Memory buffer */
#define REG_SCB2_EZ_DATA171                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506ACu + PPCA_REMAP_OFFSET_2))
/** \brief 6B0, Memory buffer */
#define REG_SCB2_EZ_DATA172                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506B0u + PPCA_REMAP_OFFSET_2))
/** \brief 6B4, Memory buffer */
#define REG_SCB2_EZ_DATA173                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506B4u + PPCA_REMAP_OFFSET_2))
/** \brief 6B8, Memory buffer */
#define REG_SCB2_EZ_DATA174                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506B8u + PPCA_REMAP_OFFSET_2))
/** \brief 6BC, Memory buffer */
#define REG_SCB2_EZ_DATA175                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506BCu + PPCA_REMAP_OFFSET_2))
/** \brief 6C0, Memory buffer */
#define REG_SCB2_EZ_DATA176                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506C0u + PPCA_REMAP_OFFSET_2))
/** \brief 6C4, Memory buffer */
#define REG_SCB2_EZ_DATA177                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506C4u + PPCA_REMAP_OFFSET_2))
/** \brief 6C8, Memory buffer */
#define REG_SCB2_EZ_DATA178                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506C8u + PPCA_REMAP_OFFSET_2))
/** \brief 6CC, Memory buffer */
#define REG_SCB2_EZ_DATA179                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506CCu + PPCA_REMAP_OFFSET_2))
/** \brief 6D0, Memory buffer */
#define REG_SCB2_EZ_DATA180                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506D0u + PPCA_REMAP_OFFSET_2))
/** \brief 6D4, Memory buffer */
#define REG_SCB2_EZ_DATA181                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506D4u + PPCA_REMAP_OFFSET_2))
/** \brief 6D8, Memory buffer */
#define REG_SCB2_EZ_DATA182                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506D8u + PPCA_REMAP_OFFSET_2))
/** \brief 6DC, Memory buffer */
#define REG_SCB2_EZ_DATA183                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506DCu + PPCA_REMAP_OFFSET_2))
/** \brief 6E0, Memory buffer */
#define REG_SCB2_EZ_DATA184                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506E0u + PPCA_REMAP_OFFSET_2))
/** \brief 6E4, Memory buffer */
#define REG_SCB2_EZ_DATA185                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506E4u + PPCA_REMAP_OFFSET_2))
/** \brief 6E8, Memory buffer */
#define REG_SCB2_EZ_DATA186                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6EC, Memory buffer */
#define REG_SCB2_EZ_DATA187                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506ECu + PPCA_REMAP_OFFSET_2))
/** \brief 6F0, Memory buffer */
#define REG_SCB2_EZ_DATA188                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506F0u + PPCA_REMAP_OFFSET_2))
/** \brief 6F4, Memory buffer */
#define REG_SCB2_EZ_DATA189                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506F4u + PPCA_REMAP_OFFSET_2))
/** \brief 6F8, Memory buffer */
#define REG_SCB2_EZ_DATA190                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506F8u + PPCA_REMAP_OFFSET_2))
/** \brief 6FC, Memory buffer */
#define REG_SCB2_EZ_DATA191                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428506FCu + PPCA_REMAP_OFFSET_2))
/** \brief 700, Memory buffer */
#define REG_SCB2_EZ_DATA192                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850700u + PPCA_REMAP_OFFSET_2))
/** \brief 704, Memory buffer */
#define REG_SCB2_EZ_DATA193                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850704u + PPCA_REMAP_OFFSET_2))
/** \brief 708, Memory buffer */
#define REG_SCB2_EZ_DATA194                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850708u + PPCA_REMAP_OFFSET_2))
/** \brief 70C, Memory buffer */
#define REG_SCB2_EZ_DATA195                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285070Cu + PPCA_REMAP_OFFSET_2))
/** \brief 710, Memory buffer */
#define REG_SCB2_EZ_DATA196                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850710u + PPCA_REMAP_OFFSET_2))
/** \brief 714, Memory buffer */
#define REG_SCB2_EZ_DATA197                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850714u + PPCA_REMAP_OFFSET_2))
/** \brief 718, Memory buffer */
#define REG_SCB2_EZ_DATA198                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850718u + PPCA_REMAP_OFFSET_2))
/** \brief 71C, Memory buffer */
#define REG_SCB2_EZ_DATA199                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285071Cu + PPCA_REMAP_OFFSET_2))
/** \brief 720, Memory buffer */
#define REG_SCB2_EZ_DATA200                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850720u + PPCA_REMAP_OFFSET_2))
/** \brief 724, Memory buffer */
#define REG_SCB2_EZ_DATA201                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850724u + PPCA_REMAP_OFFSET_2))
/** \brief 728, Memory buffer */
#define REG_SCB2_EZ_DATA202                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850728u + PPCA_REMAP_OFFSET_2))
/** \brief 72C, Memory buffer */
#define REG_SCB2_EZ_DATA203                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285072Cu + PPCA_REMAP_OFFSET_2))
/** \brief 730, Memory buffer */
#define REG_SCB2_EZ_DATA204                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850730u + PPCA_REMAP_OFFSET_2))
/** \brief 734, Memory buffer */
#define REG_SCB2_EZ_DATA205                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850734u + PPCA_REMAP_OFFSET_2))
/** \brief 738, Memory buffer */
#define REG_SCB2_EZ_DATA206                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850738u + PPCA_REMAP_OFFSET_2))
/** \brief 73C, Memory buffer */
#define REG_SCB2_EZ_DATA207                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285073Cu + PPCA_REMAP_OFFSET_2))
/** \brief 740, Memory buffer */
#define REG_SCB2_EZ_DATA208                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850740u + PPCA_REMAP_OFFSET_2))
/** \brief 744, Memory buffer */
#define REG_SCB2_EZ_DATA209                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850744u + PPCA_REMAP_OFFSET_2))
/** \brief 748, Memory buffer */
#define REG_SCB2_EZ_DATA210                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850748u + PPCA_REMAP_OFFSET_2))
/** \brief 74C, Memory buffer */
#define REG_SCB2_EZ_DATA211                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285074Cu + PPCA_REMAP_OFFSET_2))
/** \brief 750, Memory buffer */
#define REG_SCB2_EZ_DATA212                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850750u + PPCA_REMAP_OFFSET_2))
/** \brief 754, Memory buffer */
#define REG_SCB2_EZ_DATA213                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850754u + PPCA_REMAP_OFFSET_2))
/** \brief 758, Memory buffer */
#define REG_SCB2_EZ_DATA214                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850758u + PPCA_REMAP_OFFSET_2))
/** \brief 75C, Memory buffer */
#define REG_SCB2_EZ_DATA215                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285075Cu + PPCA_REMAP_OFFSET_2))
/** \brief 760, Memory buffer */
#define REG_SCB2_EZ_DATA216                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850760u + PPCA_REMAP_OFFSET_2))
/** \brief 764, Memory buffer */
#define REG_SCB2_EZ_DATA217                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850764u + PPCA_REMAP_OFFSET_2))
/** \brief 768, Memory buffer */
#define REG_SCB2_EZ_DATA218                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850768u + PPCA_REMAP_OFFSET_2))
/** \brief 76C, Memory buffer */
#define REG_SCB2_EZ_DATA219                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285076Cu + PPCA_REMAP_OFFSET_2))
/** \brief 770, Memory buffer */
#define REG_SCB2_EZ_DATA220                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850770u + PPCA_REMAP_OFFSET_2))
/** \brief 774, Memory buffer */
#define REG_SCB2_EZ_DATA221                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850774u + PPCA_REMAP_OFFSET_2))
/** \brief 778, Memory buffer */
#define REG_SCB2_EZ_DATA222                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850778u + PPCA_REMAP_OFFSET_2))
/** \brief 77C, Memory buffer */
#define REG_SCB2_EZ_DATA223                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285077Cu + PPCA_REMAP_OFFSET_2))
/** \brief 780, Memory buffer */
#define REG_SCB2_EZ_DATA224                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850780u + PPCA_REMAP_OFFSET_2))
/** \brief 784, Memory buffer */
#define REG_SCB2_EZ_DATA225                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850784u + PPCA_REMAP_OFFSET_2))
/** \brief 788, Memory buffer */
#define REG_SCB2_EZ_DATA226                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850788u + PPCA_REMAP_OFFSET_2))
/** \brief 78C, Memory buffer */
#define REG_SCB2_EZ_DATA227                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285078Cu + PPCA_REMAP_OFFSET_2))
/** \brief 790, Memory buffer */
#define REG_SCB2_EZ_DATA228                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850790u + PPCA_REMAP_OFFSET_2))
/** \brief 794, Memory buffer */
#define REG_SCB2_EZ_DATA229                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850794u + PPCA_REMAP_OFFSET_2))
/** \brief 798, Memory buffer */
#define REG_SCB2_EZ_DATA230                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42850798u + PPCA_REMAP_OFFSET_2))
/** \brief 79C, Memory buffer */
#define REG_SCB2_EZ_DATA231                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4285079Cu + PPCA_REMAP_OFFSET_2))
/** \brief 7A0, Memory buffer */
#define REG_SCB2_EZ_DATA232                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507A0u + PPCA_REMAP_OFFSET_2))
/** \brief 7A4, Memory buffer */
#define REG_SCB2_EZ_DATA233                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507A4u + PPCA_REMAP_OFFSET_2))
/** \brief 7A8, Memory buffer */
#define REG_SCB2_EZ_DATA234                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507A8u + PPCA_REMAP_OFFSET_2))
/** \brief 7AC, Memory buffer */
#define REG_SCB2_EZ_DATA235                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507ACu + PPCA_REMAP_OFFSET_2))
/** \brief 7B0, Memory buffer */
#define REG_SCB2_EZ_DATA236                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507B0u + PPCA_REMAP_OFFSET_2))
/** \brief 7B4, Memory buffer */
#define REG_SCB2_EZ_DATA237                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507B4u + PPCA_REMAP_OFFSET_2))
/** \brief 7B8, Memory buffer */
#define REG_SCB2_EZ_DATA238                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507B8u + PPCA_REMAP_OFFSET_2))
/** \brief 7BC, Memory buffer */
#define REG_SCB2_EZ_DATA239                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507BCu + PPCA_REMAP_OFFSET_2))
/** \brief 7C0, Memory buffer */
#define REG_SCB2_EZ_DATA240                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507C0u + PPCA_REMAP_OFFSET_2))
/** \brief 7C4, Memory buffer */
#define REG_SCB2_EZ_DATA241                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507C4u + PPCA_REMAP_OFFSET_2))
/** \brief 7C8, Memory buffer */
#define REG_SCB2_EZ_DATA242                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507C8u + PPCA_REMAP_OFFSET_2))
/** \brief 7CC, Memory buffer */
#define REG_SCB2_EZ_DATA243                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507CCu + PPCA_REMAP_OFFSET_2))
/** \brief 7D0, Memory buffer */
#define REG_SCB2_EZ_DATA244                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507D0u + PPCA_REMAP_OFFSET_2))
/** \brief 7D4, Memory buffer */
#define REG_SCB2_EZ_DATA245                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507D4u + PPCA_REMAP_OFFSET_2))
/** \brief 7D8, Memory buffer */
#define REG_SCB2_EZ_DATA246                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507D8u + PPCA_REMAP_OFFSET_2))
/** \brief 7DC, Memory buffer */
#define REG_SCB2_EZ_DATA247                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507DCu + PPCA_REMAP_OFFSET_2))
/** \brief 7E0, Memory buffer */
#define REG_SCB2_EZ_DATA248                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507E0u + PPCA_REMAP_OFFSET_2))
/** \brief 7E4, Memory buffer */
#define REG_SCB2_EZ_DATA249                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507E4u + PPCA_REMAP_OFFSET_2))
/** \brief 7E8, Memory buffer */
#define REG_SCB2_EZ_DATA250                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507E8u + PPCA_REMAP_OFFSET_2))
/** \brief 7EC, Memory buffer */
#define REG_SCB2_EZ_DATA251                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507ECu + PPCA_REMAP_OFFSET_2))
/** \brief 7F0, Memory buffer */
#define REG_SCB2_EZ_DATA252                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507F0u + PPCA_REMAP_OFFSET_2))
/** \brief 7F4, Memory buffer */
#define REG_SCB2_EZ_DATA253                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507F4u + PPCA_REMAP_OFFSET_2))
/** \brief 7F8, Memory buffer */
#define REG_SCB2_EZ_DATA254                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507F8u + PPCA_REMAP_OFFSET_2))
/** \brief 7FC, Memory buffer */
#define REG_SCB2_EZ_DATA255                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428507FCu + PPCA_REMAP_OFFSET_2))
/** \brief E00, Active clocked interrupt signal */
#define REG_SCB2_INTR_CAUSE                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_CAUSE*)(0x42850E00u + PPCA_REMAP_OFFSET_2))
/** \brief E80, Externally clocked I2C interrupt request */
#define REG_SCB2_INTR_I2C_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC*)(0x42850E80u + PPCA_REMAP_OFFSET_2))
/** \brief E88, Externally clocked I2C interrupt mask */
#define REG_SCB2_INTR_I2C_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASK*)(0x42850E88u + PPCA_REMAP_OFFSET_2))
/** \brief E8C, Externally clocked I2C interrupt masked */
#define REG_SCB2_INTR_I2C_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASKED*)(0x42850E8Cu + PPCA_REMAP_OFFSET_2))
/** \brief EC0, Externally clocked SPI interrupt request */
#define REG_SCB2_INTR_SPI_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC*)(0x42850EC0u + PPCA_REMAP_OFFSET_2))
/** \brief EC8, Externally clocked SPI interrupt mask */
#define REG_SCB2_INTR_SPI_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASK*)(0x42850EC8u + PPCA_REMAP_OFFSET_2))
/** \brief ECC, Externally clocked SPI interrupt masked */
#define REG_SCB2_INTR_SPI_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASKED*)(0x42850ECCu + PPCA_REMAP_OFFSET_2))
/** \brief F00, Master interrupt request */
#define REG_SCB2_INTR_M                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M*)(0x42850F00u + PPCA_REMAP_OFFSET_2))
/** \brief F04, Master interrupt set request */
#define REG_SCB2_INTR_M_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_SET*)(0x42850F04u + PPCA_REMAP_OFFSET_2))
/** \brief F08, Master interrupt mask */
#define REG_SCB2_INTR_M_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASK*)(0x42850F08u + PPCA_REMAP_OFFSET_2))
/** \brief F0C, Master interrupt masked request */
#define REG_SCB2_INTR_M_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASKED*)(0x42850F0Cu + PPCA_REMAP_OFFSET_2))
/** \brief F40, Slave interrupt request */
#define REG_SCB2_INTR_S                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S*)(0x42850F40u + PPCA_REMAP_OFFSET_2))
/** \brief F44, Slave interrupt set request */
#define REG_SCB2_INTR_S_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_SET*)(0x42850F44u + PPCA_REMAP_OFFSET_2))
/** \brief F48, Slave interrupt mask */
#define REG_SCB2_INTR_S_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASK*)(0x42850F48u + PPCA_REMAP_OFFSET_2))
/** \brief F4C, Slave interrupt masked request */
#define REG_SCB2_INTR_S_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASKED*)(0x42850F4Cu + PPCA_REMAP_OFFSET_2))
/** \brief F80, Transmitter interrupt request */
#define REG_SCB2_INTR_TX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX*)(0x42850F80u + PPCA_REMAP_OFFSET_2))
/** \brief F84, Transmitter interrupt set request */
#define REG_SCB2_INTR_TX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_SET*)(0x42850F84u + PPCA_REMAP_OFFSET_2))
/** \brief F88, Transmitter interrupt mask */
#define REG_SCB2_INTR_TX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASK*)(0x42850F88u + PPCA_REMAP_OFFSET_2))
/** \brief F8C, Transmitter interrupt masked request */
#define REG_SCB2_INTR_TX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASKED*)(0x42850F8Cu + PPCA_REMAP_OFFSET_2))
/** \brief FC0, Receiver interrupt request */
#define REG_SCB2_INTR_RX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX*)(0x42850FC0u + PPCA_REMAP_OFFSET_2))
/** \brief FC4, Receiver interrupt set request */
#define REG_SCB2_INTR_RX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_SET*)(0x42850FC4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Receiver interrupt mask */
#define REG_SCB2_INTR_RX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASK*)(0x42850FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Receiver interrupt masked request */
#define REG_SCB2_INTR_RX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASKED*)(0x42850FCCu + PPCA_REMAP_OFFSET_2))
/** \brief FD0, Receiver interrupt request */
#define REG_SCB2_INTR_TGS                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS*)(0x42850FD0u + PPCA_REMAP_OFFSET_2))
/** \brief FD4, Receiver interrupt set request */
#define REG_SCB2_INTR_TGS_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_SET*)(0x42850FD4u + PPCA_REMAP_OFFSET_2))
/** \brief FD8, Receiver interrupt mask */
#define REG_SCB2_INTR_TGS_MASK                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASK*)(0x42850FD8u + PPCA_REMAP_OFFSET_2))
/** \brief FDC, Receiver interrupt masked request */
#define REG_SCB2_INTR_TGS_MASKED                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASKED*)(0x42850FDCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Generic control */
#define REG_SCB3_CTRL                           /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CTRL*)(0x42860000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Generic status */
#define REG_SCB3_STATUS                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_STATUS*)(0x42860004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Command/response control */
#define REG_SCB3_CMD_RESP_CTRL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_CTRL*)(0x42860008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Command/response status */
#define REG_SCB3_CMD_RESP_STATUS                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_STATUS*)(0x4286000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, SPI control */
#define REG_SCB3_SPI_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_CTRL*)(0x42860020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, SPI status */
#define REG_SCB3_SPI_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_STATUS*)(0x42860024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, SPI transmitter control */
#define REG_SCB3_SPI_TX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_TX_CTRL*)(0x42860028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, SPI receiver control */
#define REG_SCB3_SPI_RX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_RX_CTRL*)(0x4286002Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, UART control */
#define REG_SCB3_UART_CTRL                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_CTRL*)(0x42860040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, UART transmitter control */
#define REG_SCB3_UART_TX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_TX_CTRL*)(0x42860044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, UART receiver control */
#define REG_SCB3_UART_RX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_CTRL*)(0x42860048u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, UART receiver status */
#define REG_SCB3_UART_RX_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_STATUS*)(0x4286004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, UART flow control */
#define REG_SCB3_UART_FLOW_CTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_FLOW_CTRL*)(0x42860050u + PPCA_REMAP_OFFSET_2))
/** \brief 60, I2C control */
#define REG_SCB3_I2C_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CTRL*)(0x42860060u + PPCA_REMAP_OFFSET_2))
/** \brief 64, I2C status */
#define REG_SCB3_I2C_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STATUS*)(0x42860064u + PPCA_REMAP_OFFSET_2))
/** \brief 68, I2C master command */
#define REG_SCB3_I2C_M_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_M_CMD*)(0x42860068u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, I2C slave command */
#define REG_SCB3_I2C_S_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_S_CMD*)(0x4286006Cu + PPCA_REMAP_OFFSET_2))
/** \brief 70, I2C configuration */
#define REG_SCB3_I2C_CFG                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CFG*)(0x42860070u + PPCA_REMAP_OFFSET_2))
/** \brief 74, I2C stretch control */
#define REG_SCB3_I2C_STRETCH_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_CTRL*)(0x42860074u + PPCA_REMAP_OFFSET_2))
/** \brief 78, I2C stretch status */
#define REG_SCB3_I2C_STRETCH_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_STATUS*)(0x42860078u + PPCA_REMAP_OFFSET_2))
/** \brief 120, Timeout generation support 0 control */
#define REG_SCB3_TGS_CTL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL0*)(0x42860120u + PPCA_REMAP_OFFSET_2))
/** \brief 124, Timeout generation support 0 counter */
#define REG_SCB3_TGS_CNT0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT0*)(0x42860124u + PPCA_REMAP_OFFSET_2))
/** \brief 128, Timeout generation support 0 reload */
#define REG_SCB3_TGS_REL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL0*)(0x42860128u + PPCA_REMAP_OFFSET_2))
/** \brief 12C, Timeout generation support 1 control */
#define REG_SCB3_TGS_CTL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL1*)(0x4286012Cu + PPCA_REMAP_OFFSET_2))
/** \brief 130, Timeout generation support 1 counter */
#define REG_SCB3_TGS_CNT1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT1*)(0x42860130u + PPCA_REMAP_OFFSET_2))
/** \brief 134, Timeout generation support 1 reload */
#define REG_SCB3_TGS_REL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL1*)(0x42860134u + PPCA_REMAP_OFFSET_2))
/** \brief 138, Timeout generation support 2 control */
#define REG_SCB3_TGS_CTL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL2*)(0x42860138u + PPCA_REMAP_OFFSET_2))
/** \brief 13C, Timeout generation support 2 counter */
#define REG_SCB3_TGS_CNT2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT2*)(0x4286013Cu + PPCA_REMAP_OFFSET_2))
/** \brief 140, Timeout generation support 2 reload */
#define REG_SCB3_TGS_REL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL2*)(0x42860140u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Transmitter control */
#define REG_SCB3_TX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_CTRL*)(0x42860200u + PPCA_REMAP_OFFSET_2))
/** \brief 204, Transmitter FIFO control */
#define REG_SCB3_TX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_CTRL*)(0x42860204u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Transmitter FIFO status */
#define REG_SCB3_TX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_STATUS*)(0x42860208u + PPCA_REMAP_OFFSET_2))
/** \brief 240, Transmitter FIFO write */
#define REG_SCB3_TX_FIFO_WR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_WR*)(0x42860240u + PPCA_REMAP_OFFSET_2))
/** \brief 300, Receiver control */
#define REG_SCB3_RX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_CTRL*)(0x42860300u + PPCA_REMAP_OFFSET_2))
/** \brief 304, Receiver FIFO control */
#define REG_SCB3_RX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_CTRL*)(0x42860304u + PPCA_REMAP_OFFSET_2))
/** \brief 308, Receiver FIFO status */
#define REG_SCB3_RX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_STATUS*)(0x42860308u + PPCA_REMAP_OFFSET_2))
/** \brief 310, Slave address and mask */
#define REG_SCB3_RX_MATCH                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH*)(0x42860310u + PPCA_REMAP_OFFSET_2))
/** \brief 314, Slave address and mask */
#define REG_SCB3_RX_MATCH1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH1*)(0x42860314u + PPCA_REMAP_OFFSET_2))
/** \brief 318, Slave address and mask */
#define REG_SCB3_RX_MATCH2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH2*)(0x42860318u + PPCA_REMAP_OFFSET_2))
/** \brief 340, Receiver FIFO read */
#define REG_SCB3_RX_FIFO_RD                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD*)(0x42860340u + PPCA_REMAP_OFFSET_2))
/** \brief 344, Receiver FIFO read silent */
#define REG_SCB3_RX_FIFO_RD_SILENT              /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD_SILENT*)(0x42860344u + PPCA_REMAP_OFFSET_2))
/** \brief 400, Memory buffer */
#define REG_SCB3_EZ_DATA0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860400u + PPCA_REMAP_OFFSET_2))
/** \brief 404, Memory buffer */
#define REG_SCB3_EZ_DATA1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860404u + PPCA_REMAP_OFFSET_2))
/** \brief 408, Memory buffer */
#define REG_SCB3_EZ_DATA2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860408u + PPCA_REMAP_OFFSET_2))
/** \brief 40C, Memory buffer */
#define REG_SCB3_EZ_DATA3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286040Cu + PPCA_REMAP_OFFSET_2))
/** \brief 410, Memory buffer */
#define REG_SCB3_EZ_DATA4                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860410u + PPCA_REMAP_OFFSET_2))
/** \brief 414, Memory buffer */
#define REG_SCB3_EZ_DATA5                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860414u + PPCA_REMAP_OFFSET_2))
/** \brief 418, Memory buffer */
#define REG_SCB3_EZ_DATA6                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860418u + PPCA_REMAP_OFFSET_2))
/** \brief 41C, Memory buffer */
#define REG_SCB3_EZ_DATA7                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286041Cu + PPCA_REMAP_OFFSET_2))
/** \brief 420, Memory buffer */
#define REG_SCB3_EZ_DATA8                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860420u + PPCA_REMAP_OFFSET_2))
/** \brief 424, Memory buffer */
#define REG_SCB3_EZ_DATA9                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860424u + PPCA_REMAP_OFFSET_2))
/** \brief 428, Memory buffer */
#define REG_SCB3_EZ_DATA10                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860428u + PPCA_REMAP_OFFSET_2))
/** \brief 42C, Memory buffer */
#define REG_SCB3_EZ_DATA11                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286042Cu + PPCA_REMAP_OFFSET_2))
/** \brief 430, Memory buffer */
#define REG_SCB3_EZ_DATA12                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860430u + PPCA_REMAP_OFFSET_2))
/** \brief 434, Memory buffer */
#define REG_SCB3_EZ_DATA13                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860434u + PPCA_REMAP_OFFSET_2))
/** \brief 438, Memory buffer */
#define REG_SCB3_EZ_DATA14                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860438u + PPCA_REMAP_OFFSET_2))
/** \brief 43C, Memory buffer */
#define REG_SCB3_EZ_DATA15                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286043Cu + PPCA_REMAP_OFFSET_2))
/** \brief 440, Memory buffer */
#define REG_SCB3_EZ_DATA16                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860440u + PPCA_REMAP_OFFSET_2))
/** \brief 444, Memory buffer */
#define REG_SCB3_EZ_DATA17                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860444u + PPCA_REMAP_OFFSET_2))
/** \brief 448, Memory buffer */
#define REG_SCB3_EZ_DATA18                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860448u + PPCA_REMAP_OFFSET_2))
/** \brief 44C, Memory buffer */
#define REG_SCB3_EZ_DATA19                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286044Cu + PPCA_REMAP_OFFSET_2))
/** \brief 450, Memory buffer */
#define REG_SCB3_EZ_DATA20                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860450u + PPCA_REMAP_OFFSET_2))
/** \brief 454, Memory buffer */
#define REG_SCB3_EZ_DATA21                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860454u + PPCA_REMAP_OFFSET_2))
/** \brief 458, Memory buffer */
#define REG_SCB3_EZ_DATA22                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860458u + PPCA_REMAP_OFFSET_2))
/** \brief 45C, Memory buffer */
#define REG_SCB3_EZ_DATA23                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286045Cu + PPCA_REMAP_OFFSET_2))
/** \brief 460, Memory buffer */
#define REG_SCB3_EZ_DATA24                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860460u + PPCA_REMAP_OFFSET_2))
/** \brief 464, Memory buffer */
#define REG_SCB3_EZ_DATA25                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860464u + PPCA_REMAP_OFFSET_2))
/** \brief 468, Memory buffer */
#define REG_SCB3_EZ_DATA26                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860468u + PPCA_REMAP_OFFSET_2))
/** \brief 46C, Memory buffer */
#define REG_SCB3_EZ_DATA27                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286046Cu + PPCA_REMAP_OFFSET_2))
/** \brief 470, Memory buffer */
#define REG_SCB3_EZ_DATA28                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860470u + PPCA_REMAP_OFFSET_2))
/** \brief 474, Memory buffer */
#define REG_SCB3_EZ_DATA29                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860474u + PPCA_REMAP_OFFSET_2))
/** \brief 478, Memory buffer */
#define REG_SCB3_EZ_DATA30                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860478u + PPCA_REMAP_OFFSET_2))
/** \brief 47C, Memory buffer */
#define REG_SCB3_EZ_DATA31                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286047Cu + PPCA_REMAP_OFFSET_2))
/** \brief 480, Memory buffer */
#define REG_SCB3_EZ_DATA32                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860480u + PPCA_REMAP_OFFSET_2))
/** \brief 484, Memory buffer */
#define REG_SCB3_EZ_DATA33                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860484u + PPCA_REMAP_OFFSET_2))
/** \brief 488, Memory buffer */
#define REG_SCB3_EZ_DATA34                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860488u + PPCA_REMAP_OFFSET_2))
/** \brief 48C, Memory buffer */
#define REG_SCB3_EZ_DATA35                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286048Cu + PPCA_REMAP_OFFSET_2))
/** \brief 490, Memory buffer */
#define REG_SCB3_EZ_DATA36                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860490u + PPCA_REMAP_OFFSET_2))
/** \brief 494, Memory buffer */
#define REG_SCB3_EZ_DATA37                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860494u + PPCA_REMAP_OFFSET_2))
/** \brief 498, Memory buffer */
#define REG_SCB3_EZ_DATA38                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860498u + PPCA_REMAP_OFFSET_2))
/** \brief 49C, Memory buffer */
#define REG_SCB3_EZ_DATA39                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286049Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4A0, Memory buffer */
#define REG_SCB3_EZ_DATA40                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604A0u + PPCA_REMAP_OFFSET_2))
/** \brief 4A4, Memory buffer */
#define REG_SCB3_EZ_DATA41                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604A4u + PPCA_REMAP_OFFSET_2))
/** \brief 4A8, Memory buffer */
#define REG_SCB3_EZ_DATA42                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604A8u + PPCA_REMAP_OFFSET_2))
/** \brief 4AC, Memory buffer */
#define REG_SCB3_EZ_DATA43                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604ACu + PPCA_REMAP_OFFSET_2))
/** \brief 4B0, Memory buffer */
#define REG_SCB3_EZ_DATA44                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604B0u + PPCA_REMAP_OFFSET_2))
/** \brief 4B4, Memory buffer */
#define REG_SCB3_EZ_DATA45                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604B4u + PPCA_REMAP_OFFSET_2))
/** \brief 4B8, Memory buffer */
#define REG_SCB3_EZ_DATA46                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604B8u + PPCA_REMAP_OFFSET_2))
/** \brief 4BC, Memory buffer */
#define REG_SCB3_EZ_DATA47                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604BCu + PPCA_REMAP_OFFSET_2))
/** \brief 4C0, Memory buffer */
#define REG_SCB3_EZ_DATA48                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4C4, Memory buffer */
#define REG_SCB3_EZ_DATA49                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604C4u + PPCA_REMAP_OFFSET_2))
/** \brief 4C8, Memory buffer */
#define REG_SCB3_EZ_DATA50                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4CC, Memory buffer */
#define REG_SCB3_EZ_DATA51                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604CCu + PPCA_REMAP_OFFSET_2))
/** \brief 4D0, Memory buffer */
#define REG_SCB3_EZ_DATA52                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604D0u + PPCA_REMAP_OFFSET_2))
/** \brief 4D4, Memory buffer */
#define REG_SCB3_EZ_DATA53                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604D4u + PPCA_REMAP_OFFSET_2))
/** \brief 4D8, Memory buffer */
#define REG_SCB3_EZ_DATA54                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604D8u + PPCA_REMAP_OFFSET_2))
/** \brief 4DC, Memory buffer */
#define REG_SCB3_EZ_DATA55                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604DCu + PPCA_REMAP_OFFSET_2))
/** \brief 4E0, Memory buffer */
#define REG_SCB3_EZ_DATA56                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604E0u + PPCA_REMAP_OFFSET_2))
/** \brief 4E4, Memory buffer */
#define REG_SCB3_EZ_DATA57                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604E4u + PPCA_REMAP_OFFSET_2))
/** \brief 4E8, Memory buffer */
#define REG_SCB3_EZ_DATA58                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604E8u + PPCA_REMAP_OFFSET_2))
/** \brief 4EC, Memory buffer */
#define REG_SCB3_EZ_DATA59                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604ECu + PPCA_REMAP_OFFSET_2))
/** \brief 4F0, Memory buffer */
#define REG_SCB3_EZ_DATA60                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604F0u + PPCA_REMAP_OFFSET_2))
/** \brief 4F4, Memory buffer */
#define REG_SCB3_EZ_DATA61                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604F4u + PPCA_REMAP_OFFSET_2))
/** \brief 4F8, Memory buffer */
#define REG_SCB3_EZ_DATA62                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604F8u + PPCA_REMAP_OFFSET_2))
/** \brief 4FC, Memory buffer */
#define REG_SCB3_EZ_DATA63                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428604FCu + PPCA_REMAP_OFFSET_2))
/** \brief 500, Memory buffer */
#define REG_SCB3_EZ_DATA64                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860500u + PPCA_REMAP_OFFSET_2))
/** \brief 504, Memory buffer */
#define REG_SCB3_EZ_DATA65                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860504u + PPCA_REMAP_OFFSET_2))
/** \brief 508, Memory buffer */
#define REG_SCB3_EZ_DATA66                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860508u + PPCA_REMAP_OFFSET_2))
/** \brief 50C, Memory buffer */
#define REG_SCB3_EZ_DATA67                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286050Cu + PPCA_REMAP_OFFSET_2))
/** \brief 510, Memory buffer */
#define REG_SCB3_EZ_DATA68                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860510u + PPCA_REMAP_OFFSET_2))
/** \brief 514, Memory buffer */
#define REG_SCB3_EZ_DATA69                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860514u + PPCA_REMAP_OFFSET_2))
/** \brief 518, Memory buffer */
#define REG_SCB3_EZ_DATA70                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860518u + PPCA_REMAP_OFFSET_2))
/** \brief 51C, Memory buffer */
#define REG_SCB3_EZ_DATA71                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286051Cu + PPCA_REMAP_OFFSET_2))
/** \brief 520, Memory buffer */
#define REG_SCB3_EZ_DATA72                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860520u + PPCA_REMAP_OFFSET_2))
/** \brief 524, Memory buffer */
#define REG_SCB3_EZ_DATA73                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860524u + PPCA_REMAP_OFFSET_2))
/** \brief 528, Memory buffer */
#define REG_SCB3_EZ_DATA74                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860528u + PPCA_REMAP_OFFSET_2))
/** \brief 52C, Memory buffer */
#define REG_SCB3_EZ_DATA75                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286052Cu + PPCA_REMAP_OFFSET_2))
/** \brief 530, Memory buffer */
#define REG_SCB3_EZ_DATA76                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860530u + PPCA_REMAP_OFFSET_2))
/** \brief 534, Memory buffer */
#define REG_SCB3_EZ_DATA77                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860534u + PPCA_REMAP_OFFSET_2))
/** \brief 538, Memory buffer */
#define REG_SCB3_EZ_DATA78                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860538u + PPCA_REMAP_OFFSET_2))
/** \brief 53C, Memory buffer */
#define REG_SCB3_EZ_DATA79                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286053Cu + PPCA_REMAP_OFFSET_2))
/** \brief 540, Memory buffer */
#define REG_SCB3_EZ_DATA80                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860540u + PPCA_REMAP_OFFSET_2))
/** \brief 544, Memory buffer */
#define REG_SCB3_EZ_DATA81                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860544u + PPCA_REMAP_OFFSET_2))
/** \brief 548, Memory buffer */
#define REG_SCB3_EZ_DATA82                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860548u + PPCA_REMAP_OFFSET_2))
/** \brief 54C, Memory buffer */
#define REG_SCB3_EZ_DATA83                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286054Cu + PPCA_REMAP_OFFSET_2))
/** \brief 550, Memory buffer */
#define REG_SCB3_EZ_DATA84                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860550u + PPCA_REMAP_OFFSET_2))
/** \brief 554, Memory buffer */
#define REG_SCB3_EZ_DATA85                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860554u + PPCA_REMAP_OFFSET_2))
/** \brief 558, Memory buffer */
#define REG_SCB3_EZ_DATA86                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860558u + PPCA_REMAP_OFFSET_2))
/** \brief 55C, Memory buffer */
#define REG_SCB3_EZ_DATA87                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286055Cu + PPCA_REMAP_OFFSET_2))
/** \brief 560, Memory buffer */
#define REG_SCB3_EZ_DATA88                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860560u + PPCA_REMAP_OFFSET_2))
/** \brief 564, Memory buffer */
#define REG_SCB3_EZ_DATA89                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860564u + PPCA_REMAP_OFFSET_2))
/** \brief 568, Memory buffer */
#define REG_SCB3_EZ_DATA90                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860568u + PPCA_REMAP_OFFSET_2))
/** \brief 56C, Memory buffer */
#define REG_SCB3_EZ_DATA91                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286056Cu + PPCA_REMAP_OFFSET_2))
/** \brief 570, Memory buffer */
#define REG_SCB3_EZ_DATA92                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860570u + PPCA_REMAP_OFFSET_2))
/** \brief 574, Memory buffer */
#define REG_SCB3_EZ_DATA93                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860574u + PPCA_REMAP_OFFSET_2))
/** \brief 578, Memory buffer */
#define REG_SCB3_EZ_DATA94                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860578u + PPCA_REMAP_OFFSET_2))
/** \brief 57C, Memory buffer */
#define REG_SCB3_EZ_DATA95                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286057Cu + PPCA_REMAP_OFFSET_2))
/** \brief 580, Memory buffer */
#define REG_SCB3_EZ_DATA96                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860580u + PPCA_REMAP_OFFSET_2))
/** \brief 584, Memory buffer */
#define REG_SCB3_EZ_DATA97                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860584u + PPCA_REMAP_OFFSET_2))
/** \brief 588, Memory buffer */
#define REG_SCB3_EZ_DATA98                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860588u + PPCA_REMAP_OFFSET_2))
/** \brief 58C, Memory buffer */
#define REG_SCB3_EZ_DATA99                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286058Cu + PPCA_REMAP_OFFSET_2))
/** \brief 590, Memory buffer */
#define REG_SCB3_EZ_DATA100                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860590u + PPCA_REMAP_OFFSET_2))
/** \brief 594, Memory buffer */
#define REG_SCB3_EZ_DATA101                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860594u + PPCA_REMAP_OFFSET_2))
/** \brief 598, Memory buffer */
#define REG_SCB3_EZ_DATA102                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860598u + PPCA_REMAP_OFFSET_2))
/** \brief 59C, Memory buffer */
#define REG_SCB3_EZ_DATA103                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286059Cu + PPCA_REMAP_OFFSET_2))
/** \brief 5A0, Memory buffer */
#define REG_SCB3_EZ_DATA104                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605A0u + PPCA_REMAP_OFFSET_2))
/** \brief 5A4, Memory buffer */
#define REG_SCB3_EZ_DATA105                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605A4u + PPCA_REMAP_OFFSET_2))
/** \brief 5A8, Memory buffer */
#define REG_SCB3_EZ_DATA106                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605A8u + PPCA_REMAP_OFFSET_2))
/** \brief 5AC, Memory buffer */
#define REG_SCB3_EZ_DATA107                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605ACu + PPCA_REMAP_OFFSET_2))
/** \brief 5B0, Memory buffer */
#define REG_SCB3_EZ_DATA108                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605B0u + PPCA_REMAP_OFFSET_2))
/** \brief 5B4, Memory buffer */
#define REG_SCB3_EZ_DATA109                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605B4u + PPCA_REMAP_OFFSET_2))
/** \brief 5B8, Memory buffer */
#define REG_SCB3_EZ_DATA110                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605B8u + PPCA_REMAP_OFFSET_2))
/** \brief 5BC, Memory buffer */
#define REG_SCB3_EZ_DATA111                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605BCu + PPCA_REMAP_OFFSET_2))
/** \brief 5C0, Memory buffer */
#define REG_SCB3_EZ_DATA112                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605C0u + PPCA_REMAP_OFFSET_2))
/** \brief 5C4, Memory buffer */
#define REG_SCB3_EZ_DATA113                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605C4u + PPCA_REMAP_OFFSET_2))
/** \brief 5C8, Memory buffer */
#define REG_SCB3_EZ_DATA114                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605C8u + PPCA_REMAP_OFFSET_2))
/** \brief 5CC, Memory buffer */
#define REG_SCB3_EZ_DATA115                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605CCu + PPCA_REMAP_OFFSET_2))
/** \brief 5D0, Memory buffer */
#define REG_SCB3_EZ_DATA116                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605D0u + PPCA_REMAP_OFFSET_2))
/** \brief 5D4, Memory buffer */
#define REG_SCB3_EZ_DATA117                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605D4u + PPCA_REMAP_OFFSET_2))
/** \brief 5D8, Memory buffer */
#define REG_SCB3_EZ_DATA118                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605D8u + PPCA_REMAP_OFFSET_2))
/** \brief 5DC, Memory buffer */
#define REG_SCB3_EZ_DATA119                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605DCu + PPCA_REMAP_OFFSET_2))
/** \brief 5E0, Memory buffer */
#define REG_SCB3_EZ_DATA120                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605E0u + PPCA_REMAP_OFFSET_2))
/** \brief 5E4, Memory buffer */
#define REG_SCB3_EZ_DATA121                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605E4u + PPCA_REMAP_OFFSET_2))
/** \brief 5E8, Memory buffer */
#define REG_SCB3_EZ_DATA122                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605E8u + PPCA_REMAP_OFFSET_2))
/** \brief 5EC, Memory buffer */
#define REG_SCB3_EZ_DATA123                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605ECu + PPCA_REMAP_OFFSET_2))
/** \brief 5F0, Memory buffer */
#define REG_SCB3_EZ_DATA124                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605F0u + PPCA_REMAP_OFFSET_2))
/** \brief 5F4, Memory buffer */
#define REG_SCB3_EZ_DATA125                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605F4u + PPCA_REMAP_OFFSET_2))
/** \brief 5F8, Memory buffer */
#define REG_SCB3_EZ_DATA126                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605F8u + PPCA_REMAP_OFFSET_2))
/** \brief 5FC, Memory buffer */
#define REG_SCB3_EZ_DATA127                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428605FCu + PPCA_REMAP_OFFSET_2))
/** \brief 600, Memory buffer */
#define REG_SCB3_EZ_DATA128                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860600u + PPCA_REMAP_OFFSET_2))
/** \brief 604, Memory buffer */
#define REG_SCB3_EZ_DATA129                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860604u + PPCA_REMAP_OFFSET_2))
/** \brief 608, Memory buffer */
#define REG_SCB3_EZ_DATA130                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860608u + PPCA_REMAP_OFFSET_2))
/** \brief 60C, Memory buffer */
#define REG_SCB3_EZ_DATA131                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286060Cu + PPCA_REMAP_OFFSET_2))
/** \brief 610, Memory buffer */
#define REG_SCB3_EZ_DATA132                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860610u + PPCA_REMAP_OFFSET_2))
/** \brief 614, Memory buffer */
#define REG_SCB3_EZ_DATA133                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860614u + PPCA_REMAP_OFFSET_2))
/** \brief 618, Memory buffer */
#define REG_SCB3_EZ_DATA134                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860618u + PPCA_REMAP_OFFSET_2))
/** \brief 61C, Memory buffer */
#define REG_SCB3_EZ_DATA135                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286061Cu + PPCA_REMAP_OFFSET_2))
/** \brief 620, Memory buffer */
#define REG_SCB3_EZ_DATA136                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860620u + PPCA_REMAP_OFFSET_2))
/** \brief 624, Memory buffer */
#define REG_SCB3_EZ_DATA137                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860624u + PPCA_REMAP_OFFSET_2))
/** \brief 628, Memory buffer */
#define REG_SCB3_EZ_DATA138                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860628u + PPCA_REMAP_OFFSET_2))
/** \brief 62C, Memory buffer */
#define REG_SCB3_EZ_DATA139                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286062Cu + PPCA_REMAP_OFFSET_2))
/** \brief 630, Memory buffer */
#define REG_SCB3_EZ_DATA140                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860630u + PPCA_REMAP_OFFSET_2))
/** \brief 634, Memory buffer */
#define REG_SCB3_EZ_DATA141                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860634u + PPCA_REMAP_OFFSET_2))
/** \brief 638, Memory buffer */
#define REG_SCB3_EZ_DATA142                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860638u + PPCA_REMAP_OFFSET_2))
/** \brief 63C, Memory buffer */
#define REG_SCB3_EZ_DATA143                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286063Cu + PPCA_REMAP_OFFSET_2))
/** \brief 640, Memory buffer */
#define REG_SCB3_EZ_DATA144                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860640u + PPCA_REMAP_OFFSET_2))
/** \brief 644, Memory buffer */
#define REG_SCB3_EZ_DATA145                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860644u + PPCA_REMAP_OFFSET_2))
/** \brief 648, Memory buffer */
#define REG_SCB3_EZ_DATA146                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860648u + PPCA_REMAP_OFFSET_2))
/** \brief 64C, Memory buffer */
#define REG_SCB3_EZ_DATA147                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286064Cu + PPCA_REMAP_OFFSET_2))
/** \brief 650, Memory buffer */
#define REG_SCB3_EZ_DATA148                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860650u + PPCA_REMAP_OFFSET_2))
/** \brief 654, Memory buffer */
#define REG_SCB3_EZ_DATA149                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860654u + PPCA_REMAP_OFFSET_2))
/** \brief 658, Memory buffer */
#define REG_SCB3_EZ_DATA150                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860658u + PPCA_REMAP_OFFSET_2))
/** \brief 65C, Memory buffer */
#define REG_SCB3_EZ_DATA151                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286065Cu + PPCA_REMAP_OFFSET_2))
/** \brief 660, Memory buffer */
#define REG_SCB3_EZ_DATA152                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860660u + PPCA_REMAP_OFFSET_2))
/** \brief 664, Memory buffer */
#define REG_SCB3_EZ_DATA153                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860664u + PPCA_REMAP_OFFSET_2))
/** \brief 668, Memory buffer */
#define REG_SCB3_EZ_DATA154                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860668u + PPCA_REMAP_OFFSET_2))
/** \brief 66C, Memory buffer */
#define REG_SCB3_EZ_DATA155                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286066Cu + PPCA_REMAP_OFFSET_2))
/** \brief 670, Memory buffer */
#define REG_SCB3_EZ_DATA156                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860670u + PPCA_REMAP_OFFSET_2))
/** \brief 674, Memory buffer */
#define REG_SCB3_EZ_DATA157                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860674u + PPCA_REMAP_OFFSET_2))
/** \brief 678, Memory buffer */
#define REG_SCB3_EZ_DATA158                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860678u + PPCA_REMAP_OFFSET_2))
/** \brief 67C, Memory buffer */
#define REG_SCB3_EZ_DATA159                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286067Cu + PPCA_REMAP_OFFSET_2))
/** \brief 680, Memory buffer */
#define REG_SCB3_EZ_DATA160                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860680u + PPCA_REMAP_OFFSET_2))
/** \brief 684, Memory buffer */
#define REG_SCB3_EZ_DATA161                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860684u + PPCA_REMAP_OFFSET_2))
/** \brief 688, Memory buffer */
#define REG_SCB3_EZ_DATA162                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860688u + PPCA_REMAP_OFFSET_2))
/** \brief 68C, Memory buffer */
#define REG_SCB3_EZ_DATA163                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286068Cu + PPCA_REMAP_OFFSET_2))
/** \brief 690, Memory buffer */
#define REG_SCB3_EZ_DATA164                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860690u + PPCA_REMAP_OFFSET_2))
/** \brief 694, Memory buffer */
#define REG_SCB3_EZ_DATA165                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860694u + PPCA_REMAP_OFFSET_2))
/** \brief 698, Memory buffer */
#define REG_SCB3_EZ_DATA166                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860698u + PPCA_REMAP_OFFSET_2))
/** \brief 69C, Memory buffer */
#define REG_SCB3_EZ_DATA167                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286069Cu + PPCA_REMAP_OFFSET_2))
/** \brief 6A0, Memory buffer */
#define REG_SCB3_EZ_DATA168                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606A0u + PPCA_REMAP_OFFSET_2))
/** \brief 6A4, Memory buffer */
#define REG_SCB3_EZ_DATA169                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606A4u + PPCA_REMAP_OFFSET_2))
/** \brief 6A8, Memory buffer */
#define REG_SCB3_EZ_DATA170                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606A8u + PPCA_REMAP_OFFSET_2))
/** \brief 6AC, Memory buffer */
#define REG_SCB3_EZ_DATA171                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606ACu + PPCA_REMAP_OFFSET_2))
/** \brief 6B0, Memory buffer */
#define REG_SCB3_EZ_DATA172                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606B0u + PPCA_REMAP_OFFSET_2))
/** \brief 6B4, Memory buffer */
#define REG_SCB3_EZ_DATA173                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606B4u + PPCA_REMAP_OFFSET_2))
/** \brief 6B8, Memory buffer */
#define REG_SCB3_EZ_DATA174                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606B8u + PPCA_REMAP_OFFSET_2))
/** \brief 6BC, Memory buffer */
#define REG_SCB3_EZ_DATA175                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606BCu + PPCA_REMAP_OFFSET_2))
/** \brief 6C0, Memory buffer */
#define REG_SCB3_EZ_DATA176                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606C0u + PPCA_REMAP_OFFSET_2))
/** \brief 6C4, Memory buffer */
#define REG_SCB3_EZ_DATA177                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606C4u + PPCA_REMAP_OFFSET_2))
/** \brief 6C8, Memory buffer */
#define REG_SCB3_EZ_DATA178                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606C8u + PPCA_REMAP_OFFSET_2))
/** \brief 6CC, Memory buffer */
#define REG_SCB3_EZ_DATA179                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606CCu + PPCA_REMAP_OFFSET_2))
/** \brief 6D0, Memory buffer */
#define REG_SCB3_EZ_DATA180                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606D0u + PPCA_REMAP_OFFSET_2))
/** \brief 6D4, Memory buffer */
#define REG_SCB3_EZ_DATA181                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606D4u + PPCA_REMAP_OFFSET_2))
/** \brief 6D8, Memory buffer */
#define REG_SCB3_EZ_DATA182                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606D8u + PPCA_REMAP_OFFSET_2))
/** \brief 6DC, Memory buffer */
#define REG_SCB3_EZ_DATA183                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606DCu + PPCA_REMAP_OFFSET_2))
/** \brief 6E0, Memory buffer */
#define REG_SCB3_EZ_DATA184                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606E0u + PPCA_REMAP_OFFSET_2))
/** \brief 6E4, Memory buffer */
#define REG_SCB3_EZ_DATA185                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606E4u + PPCA_REMAP_OFFSET_2))
/** \brief 6E8, Memory buffer */
#define REG_SCB3_EZ_DATA186                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6EC, Memory buffer */
#define REG_SCB3_EZ_DATA187                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606ECu + PPCA_REMAP_OFFSET_2))
/** \brief 6F0, Memory buffer */
#define REG_SCB3_EZ_DATA188                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606F0u + PPCA_REMAP_OFFSET_2))
/** \brief 6F4, Memory buffer */
#define REG_SCB3_EZ_DATA189                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606F4u + PPCA_REMAP_OFFSET_2))
/** \brief 6F8, Memory buffer */
#define REG_SCB3_EZ_DATA190                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606F8u + PPCA_REMAP_OFFSET_2))
/** \brief 6FC, Memory buffer */
#define REG_SCB3_EZ_DATA191                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428606FCu + PPCA_REMAP_OFFSET_2))
/** \brief 700, Memory buffer */
#define REG_SCB3_EZ_DATA192                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860700u + PPCA_REMAP_OFFSET_2))
/** \brief 704, Memory buffer */
#define REG_SCB3_EZ_DATA193                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860704u + PPCA_REMAP_OFFSET_2))
/** \brief 708, Memory buffer */
#define REG_SCB3_EZ_DATA194                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860708u + PPCA_REMAP_OFFSET_2))
/** \brief 70C, Memory buffer */
#define REG_SCB3_EZ_DATA195                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286070Cu + PPCA_REMAP_OFFSET_2))
/** \brief 710, Memory buffer */
#define REG_SCB3_EZ_DATA196                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860710u + PPCA_REMAP_OFFSET_2))
/** \brief 714, Memory buffer */
#define REG_SCB3_EZ_DATA197                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860714u + PPCA_REMAP_OFFSET_2))
/** \brief 718, Memory buffer */
#define REG_SCB3_EZ_DATA198                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860718u + PPCA_REMAP_OFFSET_2))
/** \brief 71C, Memory buffer */
#define REG_SCB3_EZ_DATA199                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286071Cu + PPCA_REMAP_OFFSET_2))
/** \brief 720, Memory buffer */
#define REG_SCB3_EZ_DATA200                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860720u + PPCA_REMAP_OFFSET_2))
/** \brief 724, Memory buffer */
#define REG_SCB3_EZ_DATA201                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860724u + PPCA_REMAP_OFFSET_2))
/** \brief 728, Memory buffer */
#define REG_SCB3_EZ_DATA202                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860728u + PPCA_REMAP_OFFSET_2))
/** \brief 72C, Memory buffer */
#define REG_SCB3_EZ_DATA203                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286072Cu + PPCA_REMAP_OFFSET_2))
/** \brief 730, Memory buffer */
#define REG_SCB3_EZ_DATA204                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860730u + PPCA_REMAP_OFFSET_2))
/** \brief 734, Memory buffer */
#define REG_SCB3_EZ_DATA205                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860734u + PPCA_REMAP_OFFSET_2))
/** \brief 738, Memory buffer */
#define REG_SCB3_EZ_DATA206                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860738u + PPCA_REMAP_OFFSET_2))
/** \brief 73C, Memory buffer */
#define REG_SCB3_EZ_DATA207                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286073Cu + PPCA_REMAP_OFFSET_2))
/** \brief 740, Memory buffer */
#define REG_SCB3_EZ_DATA208                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860740u + PPCA_REMAP_OFFSET_2))
/** \brief 744, Memory buffer */
#define REG_SCB3_EZ_DATA209                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860744u + PPCA_REMAP_OFFSET_2))
/** \brief 748, Memory buffer */
#define REG_SCB3_EZ_DATA210                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860748u + PPCA_REMAP_OFFSET_2))
/** \brief 74C, Memory buffer */
#define REG_SCB3_EZ_DATA211                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286074Cu + PPCA_REMAP_OFFSET_2))
/** \brief 750, Memory buffer */
#define REG_SCB3_EZ_DATA212                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860750u + PPCA_REMAP_OFFSET_2))
/** \brief 754, Memory buffer */
#define REG_SCB3_EZ_DATA213                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860754u + PPCA_REMAP_OFFSET_2))
/** \brief 758, Memory buffer */
#define REG_SCB3_EZ_DATA214                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860758u + PPCA_REMAP_OFFSET_2))
/** \brief 75C, Memory buffer */
#define REG_SCB3_EZ_DATA215                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286075Cu + PPCA_REMAP_OFFSET_2))
/** \brief 760, Memory buffer */
#define REG_SCB3_EZ_DATA216                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860760u + PPCA_REMAP_OFFSET_2))
/** \brief 764, Memory buffer */
#define REG_SCB3_EZ_DATA217                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860764u + PPCA_REMAP_OFFSET_2))
/** \brief 768, Memory buffer */
#define REG_SCB3_EZ_DATA218                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860768u + PPCA_REMAP_OFFSET_2))
/** \brief 76C, Memory buffer */
#define REG_SCB3_EZ_DATA219                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286076Cu + PPCA_REMAP_OFFSET_2))
/** \brief 770, Memory buffer */
#define REG_SCB3_EZ_DATA220                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860770u + PPCA_REMAP_OFFSET_2))
/** \brief 774, Memory buffer */
#define REG_SCB3_EZ_DATA221                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860774u + PPCA_REMAP_OFFSET_2))
/** \brief 778, Memory buffer */
#define REG_SCB3_EZ_DATA222                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860778u + PPCA_REMAP_OFFSET_2))
/** \brief 77C, Memory buffer */
#define REG_SCB3_EZ_DATA223                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286077Cu + PPCA_REMAP_OFFSET_2))
/** \brief 780, Memory buffer */
#define REG_SCB3_EZ_DATA224                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860780u + PPCA_REMAP_OFFSET_2))
/** \brief 784, Memory buffer */
#define REG_SCB3_EZ_DATA225                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860784u + PPCA_REMAP_OFFSET_2))
/** \brief 788, Memory buffer */
#define REG_SCB3_EZ_DATA226                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860788u + PPCA_REMAP_OFFSET_2))
/** \brief 78C, Memory buffer */
#define REG_SCB3_EZ_DATA227                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286078Cu + PPCA_REMAP_OFFSET_2))
/** \brief 790, Memory buffer */
#define REG_SCB3_EZ_DATA228                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860790u + PPCA_REMAP_OFFSET_2))
/** \brief 794, Memory buffer */
#define REG_SCB3_EZ_DATA229                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860794u + PPCA_REMAP_OFFSET_2))
/** \brief 798, Memory buffer */
#define REG_SCB3_EZ_DATA230                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42860798u + PPCA_REMAP_OFFSET_2))
/** \brief 79C, Memory buffer */
#define REG_SCB3_EZ_DATA231                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4286079Cu + PPCA_REMAP_OFFSET_2))
/** \brief 7A0, Memory buffer */
#define REG_SCB3_EZ_DATA232                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607A0u + PPCA_REMAP_OFFSET_2))
/** \brief 7A4, Memory buffer */
#define REG_SCB3_EZ_DATA233                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607A4u + PPCA_REMAP_OFFSET_2))
/** \brief 7A8, Memory buffer */
#define REG_SCB3_EZ_DATA234                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607A8u + PPCA_REMAP_OFFSET_2))
/** \brief 7AC, Memory buffer */
#define REG_SCB3_EZ_DATA235                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607ACu + PPCA_REMAP_OFFSET_2))
/** \brief 7B0, Memory buffer */
#define REG_SCB3_EZ_DATA236                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607B0u + PPCA_REMAP_OFFSET_2))
/** \brief 7B4, Memory buffer */
#define REG_SCB3_EZ_DATA237                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607B4u + PPCA_REMAP_OFFSET_2))
/** \brief 7B8, Memory buffer */
#define REG_SCB3_EZ_DATA238                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607B8u + PPCA_REMAP_OFFSET_2))
/** \brief 7BC, Memory buffer */
#define REG_SCB3_EZ_DATA239                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607BCu + PPCA_REMAP_OFFSET_2))
/** \brief 7C0, Memory buffer */
#define REG_SCB3_EZ_DATA240                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607C0u + PPCA_REMAP_OFFSET_2))
/** \brief 7C4, Memory buffer */
#define REG_SCB3_EZ_DATA241                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607C4u + PPCA_REMAP_OFFSET_2))
/** \brief 7C8, Memory buffer */
#define REG_SCB3_EZ_DATA242                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607C8u + PPCA_REMAP_OFFSET_2))
/** \brief 7CC, Memory buffer */
#define REG_SCB3_EZ_DATA243                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607CCu + PPCA_REMAP_OFFSET_2))
/** \brief 7D0, Memory buffer */
#define REG_SCB3_EZ_DATA244                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607D0u + PPCA_REMAP_OFFSET_2))
/** \brief 7D4, Memory buffer */
#define REG_SCB3_EZ_DATA245                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607D4u + PPCA_REMAP_OFFSET_2))
/** \brief 7D8, Memory buffer */
#define REG_SCB3_EZ_DATA246                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607D8u + PPCA_REMAP_OFFSET_2))
/** \brief 7DC, Memory buffer */
#define REG_SCB3_EZ_DATA247                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607DCu + PPCA_REMAP_OFFSET_2))
/** \brief 7E0, Memory buffer */
#define REG_SCB3_EZ_DATA248                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607E0u + PPCA_REMAP_OFFSET_2))
/** \brief 7E4, Memory buffer */
#define REG_SCB3_EZ_DATA249                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607E4u + PPCA_REMAP_OFFSET_2))
/** \brief 7E8, Memory buffer */
#define REG_SCB3_EZ_DATA250                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607E8u + PPCA_REMAP_OFFSET_2))
/** \brief 7EC, Memory buffer */
#define REG_SCB3_EZ_DATA251                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607ECu + PPCA_REMAP_OFFSET_2))
/** \brief 7F0, Memory buffer */
#define REG_SCB3_EZ_DATA252                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607F0u + PPCA_REMAP_OFFSET_2))
/** \brief 7F4, Memory buffer */
#define REG_SCB3_EZ_DATA253                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607F4u + PPCA_REMAP_OFFSET_2))
/** \brief 7F8, Memory buffer */
#define REG_SCB3_EZ_DATA254                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607F8u + PPCA_REMAP_OFFSET_2))
/** \brief 7FC, Memory buffer */
#define REG_SCB3_EZ_DATA255                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428607FCu + PPCA_REMAP_OFFSET_2))
/** \brief E00, Active clocked interrupt signal */
#define REG_SCB3_INTR_CAUSE                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_CAUSE*)(0x42860E00u + PPCA_REMAP_OFFSET_2))
/** \brief E80, Externally clocked I2C interrupt request */
#define REG_SCB3_INTR_I2C_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC*)(0x42860E80u + PPCA_REMAP_OFFSET_2))
/** \brief E88, Externally clocked I2C interrupt mask */
#define REG_SCB3_INTR_I2C_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASK*)(0x42860E88u + PPCA_REMAP_OFFSET_2))
/** \brief E8C, Externally clocked I2C interrupt masked */
#define REG_SCB3_INTR_I2C_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASKED*)(0x42860E8Cu + PPCA_REMAP_OFFSET_2))
/** \brief EC0, Externally clocked SPI interrupt request */
#define REG_SCB3_INTR_SPI_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC*)(0x42860EC0u + PPCA_REMAP_OFFSET_2))
/** \brief EC8, Externally clocked SPI interrupt mask */
#define REG_SCB3_INTR_SPI_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASK*)(0x42860EC8u + PPCA_REMAP_OFFSET_2))
/** \brief ECC, Externally clocked SPI interrupt masked */
#define REG_SCB3_INTR_SPI_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASKED*)(0x42860ECCu + PPCA_REMAP_OFFSET_2))
/** \brief F00, Master interrupt request */
#define REG_SCB3_INTR_M                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M*)(0x42860F00u + PPCA_REMAP_OFFSET_2))
/** \brief F04, Master interrupt set request */
#define REG_SCB3_INTR_M_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_SET*)(0x42860F04u + PPCA_REMAP_OFFSET_2))
/** \brief F08, Master interrupt mask */
#define REG_SCB3_INTR_M_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASK*)(0x42860F08u + PPCA_REMAP_OFFSET_2))
/** \brief F0C, Master interrupt masked request */
#define REG_SCB3_INTR_M_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASKED*)(0x42860F0Cu + PPCA_REMAP_OFFSET_2))
/** \brief F40, Slave interrupt request */
#define REG_SCB3_INTR_S                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S*)(0x42860F40u + PPCA_REMAP_OFFSET_2))
/** \brief F44, Slave interrupt set request */
#define REG_SCB3_INTR_S_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_SET*)(0x42860F44u + PPCA_REMAP_OFFSET_2))
/** \brief F48, Slave interrupt mask */
#define REG_SCB3_INTR_S_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASK*)(0x42860F48u + PPCA_REMAP_OFFSET_2))
/** \brief F4C, Slave interrupt masked request */
#define REG_SCB3_INTR_S_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASKED*)(0x42860F4Cu + PPCA_REMAP_OFFSET_2))
/** \brief F80, Transmitter interrupt request */
#define REG_SCB3_INTR_TX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX*)(0x42860F80u + PPCA_REMAP_OFFSET_2))
/** \brief F84, Transmitter interrupt set request */
#define REG_SCB3_INTR_TX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_SET*)(0x42860F84u + PPCA_REMAP_OFFSET_2))
/** \brief F88, Transmitter interrupt mask */
#define REG_SCB3_INTR_TX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASK*)(0x42860F88u + PPCA_REMAP_OFFSET_2))
/** \brief F8C, Transmitter interrupt masked request */
#define REG_SCB3_INTR_TX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASKED*)(0x42860F8Cu + PPCA_REMAP_OFFSET_2))
/** \brief FC0, Receiver interrupt request */
#define REG_SCB3_INTR_RX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX*)(0x42860FC0u + PPCA_REMAP_OFFSET_2))
/** \brief FC4, Receiver interrupt set request */
#define REG_SCB3_INTR_RX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_SET*)(0x42860FC4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Receiver interrupt mask */
#define REG_SCB3_INTR_RX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASK*)(0x42860FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Receiver interrupt masked request */
#define REG_SCB3_INTR_RX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASKED*)(0x42860FCCu + PPCA_REMAP_OFFSET_2))
/** \brief FD0, Receiver interrupt request */
#define REG_SCB3_INTR_TGS                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS*)(0x42860FD0u + PPCA_REMAP_OFFSET_2))
/** \brief FD4, Receiver interrupt set request */
#define REG_SCB3_INTR_TGS_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_SET*)(0x42860FD4u + PPCA_REMAP_OFFSET_2))
/** \brief FD8, Receiver interrupt mask */
#define REG_SCB3_INTR_TGS_MASK                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASK*)(0x42860FD8u + PPCA_REMAP_OFFSET_2))
/** \brief FDC, Receiver interrupt masked request */
#define REG_SCB3_INTR_TGS_MASKED                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASKED*)(0x42860FDCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Generic control */
#define REG_SCB4_CTRL                           /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CTRL*)(0x42870000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Generic status */
#define REG_SCB4_STATUS                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_STATUS*)(0x42870004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Command/response control */
#define REG_SCB4_CMD_RESP_CTRL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_CTRL*)(0x42870008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Command/response status */
#define REG_SCB4_CMD_RESP_STATUS                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_STATUS*)(0x4287000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, SPI control */
#define REG_SCB4_SPI_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_CTRL*)(0x42870020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, SPI status */
#define REG_SCB4_SPI_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_STATUS*)(0x42870024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, SPI transmitter control */
#define REG_SCB4_SPI_TX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_TX_CTRL*)(0x42870028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, SPI receiver control */
#define REG_SCB4_SPI_RX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_RX_CTRL*)(0x4287002Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, UART control */
#define REG_SCB4_UART_CTRL                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_CTRL*)(0x42870040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, UART transmitter control */
#define REG_SCB4_UART_TX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_TX_CTRL*)(0x42870044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, UART receiver control */
#define REG_SCB4_UART_RX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_CTRL*)(0x42870048u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, UART receiver status */
#define REG_SCB4_UART_RX_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_STATUS*)(0x4287004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, UART flow control */
#define REG_SCB4_UART_FLOW_CTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_FLOW_CTRL*)(0x42870050u + PPCA_REMAP_OFFSET_2))
/** \brief 60, I2C control */
#define REG_SCB4_I2C_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CTRL*)(0x42870060u + PPCA_REMAP_OFFSET_2))
/** \brief 64, I2C status */
#define REG_SCB4_I2C_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STATUS*)(0x42870064u + PPCA_REMAP_OFFSET_2))
/** \brief 68, I2C master command */
#define REG_SCB4_I2C_M_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_M_CMD*)(0x42870068u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, I2C slave command */
#define REG_SCB4_I2C_S_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_S_CMD*)(0x4287006Cu + PPCA_REMAP_OFFSET_2))
/** \brief 70, I2C configuration */
#define REG_SCB4_I2C_CFG                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CFG*)(0x42870070u + PPCA_REMAP_OFFSET_2))
/** \brief 74, I2C stretch control */
#define REG_SCB4_I2C_STRETCH_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_CTRL*)(0x42870074u + PPCA_REMAP_OFFSET_2))
/** \brief 78, I2C stretch status */
#define REG_SCB4_I2C_STRETCH_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_STATUS*)(0x42870078u + PPCA_REMAP_OFFSET_2))
/** \brief 120, Timeout generation support 0 control */
#define REG_SCB4_TGS_CTL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL0*)(0x42870120u + PPCA_REMAP_OFFSET_2))
/** \brief 124, Timeout generation support 0 counter */
#define REG_SCB4_TGS_CNT0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT0*)(0x42870124u + PPCA_REMAP_OFFSET_2))
/** \brief 128, Timeout generation support 0 reload */
#define REG_SCB4_TGS_REL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL0*)(0x42870128u + PPCA_REMAP_OFFSET_2))
/** \brief 12C, Timeout generation support 1 control */
#define REG_SCB4_TGS_CTL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL1*)(0x4287012Cu + PPCA_REMAP_OFFSET_2))
/** \brief 130, Timeout generation support 1 counter */
#define REG_SCB4_TGS_CNT1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT1*)(0x42870130u + PPCA_REMAP_OFFSET_2))
/** \brief 134, Timeout generation support 1 reload */
#define REG_SCB4_TGS_REL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL1*)(0x42870134u + PPCA_REMAP_OFFSET_2))
/** \brief 138, Timeout generation support 2 control */
#define REG_SCB4_TGS_CTL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL2*)(0x42870138u + PPCA_REMAP_OFFSET_2))
/** \brief 13C, Timeout generation support 2 counter */
#define REG_SCB4_TGS_CNT2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT2*)(0x4287013Cu + PPCA_REMAP_OFFSET_2))
/** \brief 140, Timeout generation support 2 reload */
#define REG_SCB4_TGS_REL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL2*)(0x42870140u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Transmitter control */
#define REG_SCB4_TX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_CTRL*)(0x42870200u + PPCA_REMAP_OFFSET_2))
/** \brief 204, Transmitter FIFO control */
#define REG_SCB4_TX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_CTRL*)(0x42870204u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Transmitter FIFO status */
#define REG_SCB4_TX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_STATUS*)(0x42870208u + PPCA_REMAP_OFFSET_2))
/** \brief 240, Transmitter FIFO write */
#define REG_SCB4_TX_FIFO_WR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_WR*)(0x42870240u + PPCA_REMAP_OFFSET_2))
/** \brief 300, Receiver control */
#define REG_SCB4_RX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_CTRL*)(0x42870300u + PPCA_REMAP_OFFSET_2))
/** \brief 304, Receiver FIFO control */
#define REG_SCB4_RX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_CTRL*)(0x42870304u + PPCA_REMAP_OFFSET_2))
/** \brief 308, Receiver FIFO status */
#define REG_SCB4_RX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_STATUS*)(0x42870308u + PPCA_REMAP_OFFSET_2))
/** \brief 310, Slave address and mask */
#define REG_SCB4_RX_MATCH                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH*)(0x42870310u + PPCA_REMAP_OFFSET_2))
/** \brief 314, Slave address and mask */
#define REG_SCB4_RX_MATCH1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH1*)(0x42870314u + PPCA_REMAP_OFFSET_2))
/** \brief 318, Slave address and mask */
#define REG_SCB4_RX_MATCH2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH2*)(0x42870318u + PPCA_REMAP_OFFSET_2))
/** \brief 340, Receiver FIFO read */
#define REG_SCB4_RX_FIFO_RD                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD*)(0x42870340u + PPCA_REMAP_OFFSET_2))
/** \brief 344, Receiver FIFO read silent */
#define REG_SCB4_RX_FIFO_RD_SILENT              /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD_SILENT*)(0x42870344u + PPCA_REMAP_OFFSET_2))
/** \brief 400, Memory buffer */
#define REG_SCB4_EZ_DATA0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870400u + PPCA_REMAP_OFFSET_2))
/** \brief 404, Memory buffer */
#define REG_SCB4_EZ_DATA1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870404u + PPCA_REMAP_OFFSET_2))
/** \brief 408, Memory buffer */
#define REG_SCB4_EZ_DATA2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870408u + PPCA_REMAP_OFFSET_2))
/** \brief 40C, Memory buffer */
#define REG_SCB4_EZ_DATA3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287040Cu + PPCA_REMAP_OFFSET_2))
/** \brief 410, Memory buffer */
#define REG_SCB4_EZ_DATA4                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870410u + PPCA_REMAP_OFFSET_2))
/** \brief 414, Memory buffer */
#define REG_SCB4_EZ_DATA5                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870414u + PPCA_REMAP_OFFSET_2))
/** \brief 418, Memory buffer */
#define REG_SCB4_EZ_DATA6                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870418u + PPCA_REMAP_OFFSET_2))
/** \brief 41C, Memory buffer */
#define REG_SCB4_EZ_DATA7                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287041Cu + PPCA_REMAP_OFFSET_2))
/** \brief 420, Memory buffer */
#define REG_SCB4_EZ_DATA8                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870420u + PPCA_REMAP_OFFSET_2))
/** \brief 424, Memory buffer */
#define REG_SCB4_EZ_DATA9                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870424u + PPCA_REMAP_OFFSET_2))
/** \brief 428, Memory buffer */
#define REG_SCB4_EZ_DATA10                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870428u + PPCA_REMAP_OFFSET_2))
/** \brief 42C, Memory buffer */
#define REG_SCB4_EZ_DATA11                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287042Cu + PPCA_REMAP_OFFSET_2))
/** \brief 430, Memory buffer */
#define REG_SCB4_EZ_DATA12                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870430u + PPCA_REMAP_OFFSET_2))
/** \brief 434, Memory buffer */
#define REG_SCB4_EZ_DATA13                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870434u + PPCA_REMAP_OFFSET_2))
/** \brief 438, Memory buffer */
#define REG_SCB4_EZ_DATA14                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870438u + PPCA_REMAP_OFFSET_2))
/** \brief 43C, Memory buffer */
#define REG_SCB4_EZ_DATA15                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287043Cu + PPCA_REMAP_OFFSET_2))
/** \brief 440, Memory buffer */
#define REG_SCB4_EZ_DATA16                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870440u + PPCA_REMAP_OFFSET_2))
/** \brief 444, Memory buffer */
#define REG_SCB4_EZ_DATA17                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870444u + PPCA_REMAP_OFFSET_2))
/** \brief 448, Memory buffer */
#define REG_SCB4_EZ_DATA18                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870448u + PPCA_REMAP_OFFSET_2))
/** \brief 44C, Memory buffer */
#define REG_SCB4_EZ_DATA19                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287044Cu + PPCA_REMAP_OFFSET_2))
/** \brief 450, Memory buffer */
#define REG_SCB4_EZ_DATA20                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870450u + PPCA_REMAP_OFFSET_2))
/** \brief 454, Memory buffer */
#define REG_SCB4_EZ_DATA21                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870454u + PPCA_REMAP_OFFSET_2))
/** \brief 458, Memory buffer */
#define REG_SCB4_EZ_DATA22                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870458u + PPCA_REMAP_OFFSET_2))
/** \brief 45C, Memory buffer */
#define REG_SCB4_EZ_DATA23                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287045Cu + PPCA_REMAP_OFFSET_2))
/** \brief 460, Memory buffer */
#define REG_SCB4_EZ_DATA24                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870460u + PPCA_REMAP_OFFSET_2))
/** \brief 464, Memory buffer */
#define REG_SCB4_EZ_DATA25                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870464u + PPCA_REMAP_OFFSET_2))
/** \brief 468, Memory buffer */
#define REG_SCB4_EZ_DATA26                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870468u + PPCA_REMAP_OFFSET_2))
/** \brief 46C, Memory buffer */
#define REG_SCB4_EZ_DATA27                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287046Cu + PPCA_REMAP_OFFSET_2))
/** \brief 470, Memory buffer */
#define REG_SCB4_EZ_DATA28                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870470u + PPCA_REMAP_OFFSET_2))
/** \brief 474, Memory buffer */
#define REG_SCB4_EZ_DATA29                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870474u + PPCA_REMAP_OFFSET_2))
/** \brief 478, Memory buffer */
#define REG_SCB4_EZ_DATA30                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870478u + PPCA_REMAP_OFFSET_2))
/** \brief 47C, Memory buffer */
#define REG_SCB4_EZ_DATA31                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287047Cu + PPCA_REMAP_OFFSET_2))
/** \brief 480, Memory buffer */
#define REG_SCB4_EZ_DATA32                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870480u + PPCA_REMAP_OFFSET_2))
/** \brief 484, Memory buffer */
#define REG_SCB4_EZ_DATA33                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870484u + PPCA_REMAP_OFFSET_2))
/** \brief 488, Memory buffer */
#define REG_SCB4_EZ_DATA34                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870488u + PPCA_REMAP_OFFSET_2))
/** \brief 48C, Memory buffer */
#define REG_SCB4_EZ_DATA35                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287048Cu + PPCA_REMAP_OFFSET_2))
/** \brief 490, Memory buffer */
#define REG_SCB4_EZ_DATA36                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870490u + PPCA_REMAP_OFFSET_2))
/** \brief 494, Memory buffer */
#define REG_SCB4_EZ_DATA37                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870494u + PPCA_REMAP_OFFSET_2))
/** \brief 498, Memory buffer */
#define REG_SCB4_EZ_DATA38                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870498u + PPCA_REMAP_OFFSET_2))
/** \brief 49C, Memory buffer */
#define REG_SCB4_EZ_DATA39                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287049Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4A0, Memory buffer */
#define REG_SCB4_EZ_DATA40                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704A0u + PPCA_REMAP_OFFSET_2))
/** \brief 4A4, Memory buffer */
#define REG_SCB4_EZ_DATA41                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704A4u + PPCA_REMAP_OFFSET_2))
/** \brief 4A8, Memory buffer */
#define REG_SCB4_EZ_DATA42                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704A8u + PPCA_REMAP_OFFSET_2))
/** \brief 4AC, Memory buffer */
#define REG_SCB4_EZ_DATA43                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704ACu + PPCA_REMAP_OFFSET_2))
/** \brief 4B0, Memory buffer */
#define REG_SCB4_EZ_DATA44                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704B0u + PPCA_REMAP_OFFSET_2))
/** \brief 4B4, Memory buffer */
#define REG_SCB4_EZ_DATA45                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704B4u + PPCA_REMAP_OFFSET_2))
/** \brief 4B8, Memory buffer */
#define REG_SCB4_EZ_DATA46                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704B8u + PPCA_REMAP_OFFSET_2))
/** \brief 4BC, Memory buffer */
#define REG_SCB4_EZ_DATA47                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704BCu + PPCA_REMAP_OFFSET_2))
/** \brief 4C0, Memory buffer */
#define REG_SCB4_EZ_DATA48                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4C4, Memory buffer */
#define REG_SCB4_EZ_DATA49                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704C4u + PPCA_REMAP_OFFSET_2))
/** \brief 4C8, Memory buffer */
#define REG_SCB4_EZ_DATA50                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4CC, Memory buffer */
#define REG_SCB4_EZ_DATA51                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704CCu + PPCA_REMAP_OFFSET_2))
/** \brief 4D0, Memory buffer */
#define REG_SCB4_EZ_DATA52                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704D0u + PPCA_REMAP_OFFSET_2))
/** \brief 4D4, Memory buffer */
#define REG_SCB4_EZ_DATA53                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704D4u + PPCA_REMAP_OFFSET_2))
/** \brief 4D8, Memory buffer */
#define REG_SCB4_EZ_DATA54                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704D8u + PPCA_REMAP_OFFSET_2))
/** \brief 4DC, Memory buffer */
#define REG_SCB4_EZ_DATA55                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704DCu + PPCA_REMAP_OFFSET_2))
/** \brief 4E0, Memory buffer */
#define REG_SCB4_EZ_DATA56                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704E0u + PPCA_REMAP_OFFSET_2))
/** \brief 4E4, Memory buffer */
#define REG_SCB4_EZ_DATA57                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704E4u + PPCA_REMAP_OFFSET_2))
/** \brief 4E8, Memory buffer */
#define REG_SCB4_EZ_DATA58                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704E8u + PPCA_REMAP_OFFSET_2))
/** \brief 4EC, Memory buffer */
#define REG_SCB4_EZ_DATA59                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704ECu + PPCA_REMAP_OFFSET_2))
/** \brief 4F0, Memory buffer */
#define REG_SCB4_EZ_DATA60                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704F0u + PPCA_REMAP_OFFSET_2))
/** \brief 4F4, Memory buffer */
#define REG_SCB4_EZ_DATA61                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704F4u + PPCA_REMAP_OFFSET_2))
/** \brief 4F8, Memory buffer */
#define REG_SCB4_EZ_DATA62                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704F8u + PPCA_REMAP_OFFSET_2))
/** \brief 4FC, Memory buffer */
#define REG_SCB4_EZ_DATA63                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428704FCu + PPCA_REMAP_OFFSET_2))
/** \brief 500, Memory buffer */
#define REG_SCB4_EZ_DATA64                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870500u + PPCA_REMAP_OFFSET_2))
/** \brief 504, Memory buffer */
#define REG_SCB4_EZ_DATA65                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870504u + PPCA_REMAP_OFFSET_2))
/** \brief 508, Memory buffer */
#define REG_SCB4_EZ_DATA66                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870508u + PPCA_REMAP_OFFSET_2))
/** \brief 50C, Memory buffer */
#define REG_SCB4_EZ_DATA67                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287050Cu + PPCA_REMAP_OFFSET_2))
/** \brief 510, Memory buffer */
#define REG_SCB4_EZ_DATA68                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870510u + PPCA_REMAP_OFFSET_2))
/** \brief 514, Memory buffer */
#define REG_SCB4_EZ_DATA69                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870514u + PPCA_REMAP_OFFSET_2))
/** \brief 518, Memory buffer */
#define REG_SCB4_EZ_DATA70                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870518u + PPCA_REMAP_OFFSET_2))
/** \brief 51C, Memory buffer */
#define REG_SCB4_EZ_DATA71                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287051Cu + PPCA_REMAP_OFFSET_2))
/** \brief 520, Memory buffer */
#define REG_SCB4_EZ_DATA72                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870520u + PPCA_REMAP_OFFSET_2))
/** \brief 524, Memory buffer */
#define REG_SCB4_EZ_DATA73                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870524u + PPCA_REMAP_OFFSET_2))
/** \brief 528, Memory buffer */
#define REG_SCB4_EZ_DATA74                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870528u + PPCA_REMAP_OFFSET_2))
/** \brief 52C, Memory buffer */
#define REG_SCB4_EZ_DATA75                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287052Cu + PPCA_REMAP_OFFSET_2))
/** \brief 530, Memory buffer */
#define REG_SCB4_EZ_DATA76                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870530u + PPCA_REMAP_OFFSET_2))
/** \brief 534, Memory buffer */
#define REG_SCB4_EZ_DATA77                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870534u + PPCA_REMAP_OFFSET_2))
/** \brief 538, Memory buffer */
#define REG_SCB4_EZ_DATA78                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870538u + PPCA_REMAP_OFFSET_2))
/** \brief 53C, Memory buffer */
#define REG_SCB4_EZ_DATA79                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287053Cu + PPCA_REMAP_OFFSET_2))
/** \brief 540, Memory buffer */
#define REG_SCB4_EZ_DATA80                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870540u + PPCA_REMAP_OFFSET_2))
/** \brief 544, Memory buffer */
#define REG_SCB4_EZ_DATA81                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870544u + PPCA_REMAP_OFFSET_2))
/** \brief 548, Memory buffer */
#define REG_SCB4_EZ_DATA82                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870548u + PPCA_REMAP_OFFSET_2))
/** \brief 54C, Memory buffer */
#define REG_SCB4_EZ_DATA83                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287054Cu + PPCA_REMAP_OFFSET_2))
/** \brief 550, Memory buffer */
#define REG_SCB4_EZ_DATA84                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870550u + PPCA_REMAP_OFFSET_2))
/** \brief 554, Memory buffer */
#define REG_SCB4_EZ_DATA85                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870554u + PPCA_REMAP_OFFSET_2))
/** \brief 558, Memory buffer */
#define REG_SCB4_EZ_DATA86                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870558u + PPCA_REMAP_OFFSET_2))
/** \brief 55C, Memory buffer */
#define REG_SCB4_EZ_DATA87                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287055Cu + PPCA_REMAP_OFFSET_2))
/** \brief 560, Memory buffer */
#define REG_SCB4_EZ_DATA88                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870560u + PPCA_REMAP_OFFSET_2))
/** \brief 564, Memory buffer */
#define REG_SCB4_EZ_DATA89                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870564u + PPCA_REMAP_OFFSET_2))
/** \brief 568, Memory buffer */
#define REG_SCB4_EZ_DATA90                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870568u + PPCA_REMAP_OFFSET_2))
/** \brief 56C, Memory buffer */
#define REG_SCB4_EZ_DATA91                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287056Cu + PPCA_REMAP_OFFSET_2))
/** \brief 570, Memory buffer */
#define REG_SCB4_EZ_DATA92                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870570u + PPCA_REMAP_OFFSET_2))
/** \brief 574, Memory buffer */
#define REG_SCB4_EZ_DATA93                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870574u + PPCA_REMAP_OFFSET_2))
/** \brief 578, Memory buffer */
#define REG_SCB4_EZ_DATA94                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870578u + PPCA_REMAP_OFFSET_2))
/** \brief 57C, Memory buffer */
#define REG_SCB4_EZ_DATA95                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287057Cu + PPCA_REMAP_OFFSET_2))
/** \brief 580, Memory buffer */
#define REG_SCB4_EZ_DATA96                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870580u + PPCA_REMAP_OFFSET_2))
/** \brief 584, Memory buffer */
#define REG_SCB4_EZ_DATA97                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870584u + PPCA_REMAP_OFFSET_2))
/** \brief 588, Memory buffer */
#define REG_SCB4_EZ_DATA98                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870588u + PPCA_REMAP_OFFSET_2))
/** \brief 58C, Memory buffer */
#define REG_SCB4_EZ_DATA99                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287058Cu + PPCA_REMAP_OFFSET_2))
/** \brief 590, Memory buffer */
#define REG_SCB4_EZ_DATA100                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870590u + PPCA_REMAP_OFFSET_2))
/** \brief 594, Memory buffer */
#define REG_SCB4_EZ_DATA101                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870594u + PPCA_REMAP_OFFSET_2))
/** \brief 598, Memory buffer */
#define REG_SCB4_EZ_DATA102                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870598u + PPCA_REMAP_OFFSET_2))
/** \brief 59C, Memory buffer */
#define REG_SCB4_EZ_DATA103                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287059Cu + PPCA_REMAP_OFFSET_2))
/** \brief 5A0, Memory buffer */
#define REG_SCB4_EZ_DATA104                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705A0u + PPCA_REMAP_OFFSET_2))
/** \brief 5A4, Memory buffer */
#define REG_SCB4_EZ_DATA105                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705A4u + PPCA_REMAP_OFFSET_2))
/** \brief 5A8, Memory buffer */
#define REG_SCB4_EZ_DATA106                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705A8u + PPCA_REMAP_OFFSET_2))
/** \brief 5AC, Memory buffer */
#define REG_SCB4_EZ_DATA107                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705ACu + PPCA_REMAP_OFFSET_2))
/** \brief 5B0, Memory buffer */
#define REG_SCB4_EZ_DATA108                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705B0u + PPCA_REMAP_OFFSET_2))
/** \brief 5B4, Memory buffer */
#define REG_SCB4_EZ_DATA109                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705B4u + PPCA_REMAP_OFFSET_2))
/** \brief 5B8, Memory buffer */
#define REG_SCB4_EZ_DATA110                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705B8u + PPCA_REMAP_OFFSET_2))
/** \brief 5BC, Memory buffer */
#define REG_SCB4_EZ_DATA111                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705BCu + PPCA_REMAP_OFFSET_2))
/** \brief 5C0, Memory buffer */
#define REG_SCB4_EZ_DATA112                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705C0u + PPCA_REMAP_OFFSET_2))
/** \brief 5C4, Memory buffer */
#define REG_SCB4_EZ_DATA113                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705C4u + PPCA_REMAP_OFFSET_2))
/** \brief 5C8, Memory buffer */
#define REG_SCB4_EZ_DATA114                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705C8u + PPCA_REMAP_OFFSET_2))
/** \brief 5CC, Memory buffer */
#define REG_SCB4_EZ_DATA115                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705CCu + PPCA_REMAP_OFFSET_2))
/** \brief 5D0, Memory buffer */
#define REG_SCB4_EZ_DATA116                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705D0u + PPCA_REMAP_OFFSET_2))
/** \brief 5D4, Memory buffer */
#define REG_SCB4_EZ_DATA117                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705D4u + PPCA_REMAP_OFFSET_2))
/** \brief 5D8, Memory buffer */
#define REG_SCB4_EZ_DATA118                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705D8u + PPCA_REMAP_OFFSET_2))
/** \brief 5DC, Memory buffer */
#define REG_SCB4_EZ_DATA119                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705DCu + PPCA_REMAP_OFFSET_2))
/** \brief 5E0, Memory buffer */
#define REG_SCB4_EZ_DATA120                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705E0u + PPCA_REMAP_OFFSET_2))
/** \brief 5E4, Memory buffer */
#define REG_SCB4_EZ_DATA121                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705E4u + PPCA_REMAP_OFFSET_2))
/** \brief 5E8, Memory buffer */
#define REG_SCB4_EZ_DATA122                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705E8u + PPCA_REMAP_OFFSET_2))
/** \brief 5EC, Memory buffer */
#define REG_SCB4_EZ_DATA123                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705ECu + PPCA_REMAP_OFFSET_2))
/** \brief 5F0, Memory buffer */
#define REG_SCB4_EZ_DATA124                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705F0u + PPCA_REMAP_OFFSET_2))
/** \brief 5F4, Memory buffer */
#define REG_SCB4_EZ_DATA125                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705F4u + PPCA_REMAP_OFFSET_2))
/** \brief 5F8, Memory buffer */
#define REG_SCB4_EZ_DATA126                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705F8u + PPCA_REMAP_OFFSET_2))
/** \brief 5FC, Memory buffer */
#define REG_SCB4_EZ_DATA127                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428705FCu + PPCA_REMAP_OFFSET_2))
/** \brief 600, Memory buffer */
#define REG_SCB4_EZ_DATA128                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870600u + PPCA_REMAP_OFFSET_2))
/** \brief 604, Memory buffer */
#define REG_SCB4_EZ_DATA129                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870604u + PPCA_REMAP_OFFSET_2))
/** \brief 608, Memory buffer */
#define REG_SCB4_EZ_DATA130                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870608u + PPCA_REMAP_OFFSET_2))
/** \brief 60C, Memory buffer */
#define REG_SCB4_EZ_DATA131                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287060Cu + PPCA_REMAP_OFFSET_2))
/** \brief 610, Memory buffer */
#define REG_SCB4_EZ_DATA132                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870610u + PPCA_REMAP_OFFSET_2))
/** \brief 614, Memory buffer */
#define REG_SCB4_EZ_DATA133                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870614u + PPCA_REMAP_OFFSET_2))
/** \brief 618, Memory buffer */
#define REG_SCB4_EZ_DATA134                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870618u + PPCA_REMAP_OFFSET_2))
/** \brief 61C, Memory buffer */
#define REG_SCB4_EZ_DATA135                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287061Cu + PPCA_REMAP_OFFSET_2))
/** \brief 620, Memory buffer */
#define REG_SCB4_EZ_DATA136                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870620u + PPCA_REMAP_OFFSET_2))
/** \brief 624, Memory buffer */
#define REG_SCB4_EZ_DATA137                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870624u + PPCA_REMAP_OFFSET_2))
/** \brief 628, Memory buffer */
#define REG_SCB4_EZ_DATA138                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870628u + PPCA_REMAP_OFFSET_2))
/** \brief 62C, Memory buffer */
#define REG_SCB4_EZ_DATA139                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287062Cu + PPCA_REMAP_OFFSET_2))
/** \brief 630, Memory buffer */
#define REG_SCB4_EZ_DATA140                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870630u + PPCA_REMAP_OFFSET_2))
/** \brief 634, Memory buffer */
#define REG_SCB4_EZ_DATA141                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870634u + PPCA_REMAP_OFFSET_2))
/** \brief 638, Memory buffer */
#define REG_SCB4_EZ_DATA142                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870638u + PPCA_REMAP_OFFSET_2))
/** \brief 63C, Memory buffer */
#define REG_SCB4_EZ_DATA143                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287063Cu + PPCA_REMAP_OFFSET_2))
/** \brief 640, Memory buffer */
#define REG_SCB4_EZ_DATA144                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870640u + PPCA_REMAP_OFFSET_2))
/** \brief 644, Memory buffer */
#define REG_SCB4_EZ_DATA145                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870644u + PPCA_REMAP_OFFSET_2))
/** \brief 648, Memory buffer */
#define REG_SCB4_EZ_DATA146                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870648u + PPCA_REMAP_OFFSET_2))
/** \brief 64C, Memory buffer */
#define REG_SCB4_EZ_DATA147                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287064Cu + PPCA_REMAP_OFFSET_2))
/** \brief 650, Memory buffer */
#define REG_SCB4_EZ_DATA148                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870650u + PPCA_REMAP_OFFSET_2))
/** \brief 654, Memory buffer */
#define REG_SCB4_EZ_DATA149                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870654u + PPCA_REMAP_OFFSET_2))
/** \brief 658, Memory buffer */
#define REG_SCB4_EZ_DATA150                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870658u + PPCA_REMAP_OFFSET_2))
/** \brief 65C, Memory buffer */
#define REG_SCB4_EZ_DATA151                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287065Cu + PPCA_REMAP_OFFSET_2))
/** \brief 660, Memory buffer */
#define REG_SCB4_EZ_DATA152                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870660u + PPCA_REMAP_OFFSET_2))
/** \brief 664, Memory buffer */
#define REG_SCB4_EZ_DATA153                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870664u + PPCA_REMAP_OFFSET_2))
/** \brief 668, Memory buffer */
#define REG_SCB4_EZ_DATA154                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870668u + PPCA_REMAP_OFFSET_2))
/** \brief 66C, Memory buffer */
#define REG_SCB4_EZ_DATA155                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287066Cu + PPCA_REMAP_OFFSET_2))
/** \brief 670, Memory buffer */
#define REG_SCB4_EZ_DATA156                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870670u + PPCA_REMAP_OFFSET_2))
/** \brief 674, Memory buffer */
#define REG_SCB4_EZ_DATA157                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870674u + PPCA_REMAP_OFFSET_2))
/** \brief 678, Memory buffer */
#define REG_SCB4_EZ_DATA158                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870678u + PPCA_REMAP_OFFSET_2))
/** \brief 67C, Memory buffer */
#define REG_SCB4_EZ_DATA159                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287067Cu + PPCA_REMAP_OFFSET_2))
/** \brief 680, Memory buffer */
#define REG_SCB4_EZ_DATA160                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870680u + PPCA_REMAP_OFFSET_2))
/** \brief 684, Memory buffer */
#define REG_SCB4_EZ_DATA161                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870684u + PPCA_REMAP_OFFSET_2))
/** \brief 688, Memory buffer */
#define REG_SCB4_EZ_DATA162                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870688u + PPCA_REMAP_OFFSET_2))
/** \brief 68C, Memory buffer */
#define REG_SCB4_EZ_DATA163                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287068Cu + PPCA_REMAP_OFFSET_2))
/** \brief 690, Memory buffer */
#define REG_SCB4_EZ_DATA164                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870690u + PPCA_REMAP_OFFSET_2))
/** \brief 694, Memory buffer */
#define REG_SCB4_EZ_DATA165                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870694u + PPCA_REMAP_OFFSET_2))
/** \brief 698, Memory buffer */
#define REG_SCB4_EZ_DATA166                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870698u + PPCA_REMAP_OFFSET_2))
/** \brief 69C, Memory buffer */
#define REG_SCB4_EZ_DATA167                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287069Cu + PPCA_REMAP_OFFSET_2))
/** \brief 6A0, Memory buffer */
#define REG_SCB4_EZ_DATA168                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706A0u + PPCA_REMAP_OFFSET_2))
/** \brief 6A4, Memory buffer */
#define REG_SCB4_EZ_DATA169                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706A4u + PPCA_REMAP_OFFSET_2))
/** \brief 6A8, Memory buffer */
#define REG_SCB4_EZ_DATA170                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706A8u + PPCA_REMAP_OFFSET_2))
/** \brief 6AC, Memory buffer */
#define REG_SCB4_EZ_DATA171                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706ACu + PPCA_REMAP_OFFSET_2))
/** \brief 6B0, Memory buffer */
#define REG_SCB4_EZ_DATA172                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706B0u + PPCA_REMAP_OFFSET_2))
/** \brief 6B4, Memory buffer */
#define REG_SCB4_EZ_DATA173                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706B4u + PPCA_REMAP_OFFSET_2))
/** \brief 6B8, Memory buffer */
#define REG_SCB4_EZ_DATA174                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706B8u + PPCA_REMAP_OFFSET_2))
/** \brief 6BC, Memory buffer */
#define REG_SCB4_EZ_DATA175                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706BCu + PPCA_REMAP_OFFSET_2))
/** \brief 6C0, Memory buffer */
#define REG_SCB4_EZ_DATA176                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706C0u + PPCA_REMAP_OFFSET_2))
/** \brief 6C4, Memory buffer */
#define REG_SCB4_EZ_DATA177                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706C4u + PPCA_REMAP_OFFSET_2))
/** \brief 6C8, Memory buffer */
#define REG_SCB4_EZ_DATA178                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706C8u + PPCA_REMAP_OFFSET_2))
/** \brief 6CC, Memory buffer */
#define REG_SCB4_EZ_DATA179                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706CCu + PPCA_REMAP_OFFSET_2))
/** \brief 6D0, Memory buffer */
#define REG_SCB4_EZ_DATA180                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706D0u + PPCA_REMAP_OFFSET_2))
/** \brief 6D4, Memory buffer */
#define REG_SCB4_EZ_DATA181                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706D4u + PPCA_REMAP_OFFSET_2))
/** \brief 6D8, Memory buffer */
#define REG_SCB4_EZ_DATA182                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706D8u + PPCA_REMAP_OFFSET_2))
/** \brief 6DC, Memory buffer */
#define REG_SCB4_EZ_DATA183                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706DCu + PPCA_REMAP_OFFSET_2))
/** \brief 6E0, Memory buffer */
#define REG_SCB4_EZ_DATA184                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706E0u + PPCA_REMAP_OFFSET_2))
/** \brief 6E4, Memory buffer */
#define REG_SCB4_EZ_DATA185                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706E4u + PPCA_REMAP_OFFSET_2))
/** \brief 6E8, Memory buffer */
#define REG_SCB4_EZ_DATA186                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6EC, Memory buffer */
#define REG_SCB4_EZ_DATA187                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706ECu + PPCA_REMAP_OFFSET_2))
/** \brief 6F0, Memory buffer */
#define REG_SCB4_EZ_DATA188                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706F0u + PPCA_REMAP_OFFSET_2))
/** \brief 6F4, Memory buffer */
#define REG_SCB4_EZ_DATA189                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706F4u + PPCA_REMAP_OFFSET_2))
/** \brief 6F8, Memory buffer */
#define REG_SCB4_EZ_DATA190                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706F8u + PPCA_REMAP_OFFSET_2))
/** \brief 6FC, Memory buffer */
#define REG_SCB4_EZ_DATA191                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428706FCu + PPCA_REMAP_OFFSET_2))
/** \brief 700, Memory buffer */
#define REG_SCB4_EZ_DATA192                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870700u + PPCA_REMAP_OFFSET_2))
/** \brief 704, Memory buffer */
#define REG_SCB4_EZ_DATA193                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870704u + PPCA_REMAP_OFFSET_2))
/** \brief 708, Memory buffer */
#define REG_SCB4_EZ_DATA194                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870708u + PPCA_REMAP_OFFSET_2))
/** \brief 70C, Memory buffer */
#define REG_SCB4_EZ_DATA195                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287070Cu + PPCA_REMAP_OFFSET_2))
/** \brief 710, Memory buffer */
#define REG_SCB4_EZ_DATA196                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870710u + PPCA_REMAP_OFFSET_2))
/** \brief 714, Memory buffer */
#define REG_SCB4_EZ_DATA197                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870714u + PPCA_REMAP_OFFSET_2))
/** \brief 718, Memory buffer */
#define REG_SCB4_EZ_DATA198                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870718u + PPCA_REMAP_OFFSET_2))
/** \brief 71C, Memory buffer */
#define REG_SCB4_EZ_DATA199                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287071Cu + PPCA_REMAP_OFFSET_2))
/** \brief 720, Memory buffer */
#define REG_SCB4_EZ_DATA200                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870720u + PPCA_REMAP_OFFSET_2))
/** \brief 724, Memory buffer */
#define REG_SCB4_EZ_DATA201                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870724u + PPCA_REMAP_OFFSET_2))
/** \brief 728, Memory buffer */
#define REG_SCB4_EZ_DATA202                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870728u + PPCA_REMAP_OFFSET_2))
/** \brief 72C, Memory buffer */
#define REG_SCB4_EZ_DATA203                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287072Cu + PPCA_REMAP_OFFSET_2))
/** \brief 730, Memory buffer */
#define REG_SCB4_EZ_DATA204                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870730u + PPCA_REMAP_OFFSET_2))
/** \brief 734, Memory buffer */
#define REG_SCB4_EZ_DATA205                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870734u + PPCA_REMAP_OFFSET_2))
/** \brief 738, Memory buffer */
#define REG_SCB4_EZ_DATA206                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870738u + PPCA_REMAP_OFFSET_2))
/** \brief 73C, Memory buffer */
#define REG_SCB4_EZ_DATA207                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287073Cu + PPCA_REMAP_OFFSET_2))
/** \brief 740, Memory buffer */
#define REG_SCB4_EZ_DATA208                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870740u + PPCA_REMAP_OFFSET_2))
/** \brief 744, Memory buffer */
#define REG_SCB4_EZ_DATA209                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870744u + PPCA_REMAP_OFFSET_2))
/** \brief 748, Memory buffer */
#define REG_SCB4_EZ_DATA210                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870748u + PPCA_REMAP_OFFSET_2))
/** \brief 74C, Memory buffer */
#define REG_SCB4_EZ_DATA211                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287074Cu + PPCA_REMAP_OFFSET_2))
/** \brief 750, Memory buffer */
#define REG_SCB4_EZ_DATA212                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870750u + PPCA_REMAP_OFFSET_2))
/** \brief 754, Memory buffer */
#define REG_SCB4_EZ_DATA213                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870754u + PPCA_REMAP_OFFSET_2))
/** \brief 758, Memory buffer */
#define REG_SCB4_EZ_DATA214                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870758u + PPCA_REMAP_OFFSET_2))
/** \brief 75C, Memory buffer */
#define REG_SCB4_EZ_DATA215                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287075Cu + PPCA_REMAP_OFFSET_2))
/** \brief 760, Memory buffer */
#define REG_SCB4_EZ_DATA216                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870760u + PPCA_REMAP_OFFSET_2))
/** \brief 764, Memory buffer */
#define REG_SCB4_EZ_DATA217                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870764u + PPCA_REMAP_OFFSET_2))
/** \brief 768, Memory buffer */
#define REG_SCB4_EZ_DATA218                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870768u + PPCA_REMAP_OFFSET_2))
/** \brief 76C, Memory buffer */
#define REG_SCB4_EZ_DATA219                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287076Cu + PPCA_REMAP_OFFSET_2))
/** \brief 770, Memory buffer */
#define REG_SCB4_EZ_DATA220                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870770u + PPCA_REMAP_OFFSET_2))
/** \brief 774, Memory buffer */
#define REG_SCB4_EZ_DATA221                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870774u + PPCA_REMAP_OFFSET_2))
/** \brief 778, Memory buffer */
#define REG_SCB4_EZ_DATA222                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870778u + PPCA_REMAP_OFFSET_2))
/** \brief 77C, Memory buffer */
#define REG_SCB4_EZ_DATA223                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287077Cu + PPCA_REMAP_OFFSET_2))
/** \brief 780, Memory buffer */
#define REG_SCB4_EZ_DATA224                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870780u + PPCA_REMAP_OFFSET_2))
/** \brief 784, Memory buffer */
#define REG_SCB4_EZ_DATA225                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870784u + PPCA_REMAP_OFFSET_2))
/** \brief 788, Memory buffer */
#define REG_SCB4_EZ_DATA226                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870788u + PPCA_REMAP_OFFSET_2))
/** \brief 78C, Memory buffer */
#define REG_SCB4_EZ_DATA227                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287078Cu + PPCA_REMAP_OFFSET_2))
/** \brief 790, Memory buffer */
#define REG_SCB4_EZ_DATA228                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870790u + PPCA_REMAP_OFFSET_2))
/** \brief 794, Memory buffer */
#define REG_SCB4_EZ_DATA229                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870794u + PPCA_REMAP_OFFSET_2))
/** \brief 798, Memory buffer */
#define REG_SCB4_EZ_DATA230                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x42870798u + PPCA_REMAP_OFFSET_2))
/** \brief 79C, Memory buffer */
#define REG_SCB4_EZ_DATA231                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4287079Cu + PPCA_REMAP_OFFSET_2))
/** \brief 7A0, Memory buffer */
#define REG_SCB4_EZ_DATA232                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707A0u + PPCA_REMAP_OFFSET_2))
/** \brief 7A4, Memory buffer */
#define REG_SCB4_EZ_DATA233                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707A4u + PPCA_REMAP_OFFSET_2))
/** \brief 7A8, Memory buffer */
#define REG_SCB4_EZ_DATA234                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707A8u + PPCA_REMAP_OFFSET_2))
/** \brief 7AC, Memory buffer */
#define REG_SCB4_EZ_DATA235                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707ACu + PPCA_REMAP_OFFSET_2))
/** \brief 7B0, Memory buffer */
#define REG_SCB4_EZ_DATA236                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707B0u + PPCA_REMAP_OFFSET_2))
/** \brief 7B4, Memory buffer */
#define REG_SCB4_EZ_DATA237                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707B4u + PPCA_REMAP_OFFSET_2))
/** \brief 7B8, Memory buffer */
#define REG_SCB4_EZ_DATA238                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707B8u + PPCA_REMAP_OFFSET_2))
/** \brief 7BC, Memory buffer */
#define REG_SCB4_EZ_DATA239                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707BCu + PPCA_REMAP_OFFSET_2))
/** \brief 7C0, Memory buffer */
#define REG_SCB4_EZ_DATA240                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707C0u + PPCA_REMAP_OFFSET_2))
/** \brief 7C4, Memory buffer */
#define REG_SCB4_EZ_DATA241                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707C4u + PPCA_REMAP_OFFSET_2))
/** \brief 7C8, Memory buffer */
#define REG_SCB4_EZ_DATA242                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707C8u + PPCA_REMAP_OFFSET_2))
/** \brief 7CC, Memory buffer */
#define REG_SCB4_EZ_DATA243                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707CCu + PPCA_REMAP_OFFSET_2))
/** \brief 7D0, Memory buffer */
#define REG_SCB4_EZ_DATA244                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707D0u + PPCA_REMAP_OFFSET_2))
/** \brief 7D4, Memory buffer */
#define REG_SCB4_EZ_DATA245                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707D4u + PPCA_REMAP_OFFSET_2))
/** \brief 7D8, Memory buffer */
#define REG_SCB4_EZ_DATA246                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707D8u + PPCA_REMAP_OFFSET_2))
/** \brief 7DC, Memory buffer */
#define REG_SCB4_EZ_DATA247                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707DCu + PPCA_REMAP_OFFSET_2))
/** \brief 7E0, Memory buffer */
#define REG_SCB4_EZ_DATA248                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707E0u + PPCA_REMAP_OFFSET_2))
/** \brief 7E4, Memory buffer */
#define REG_SCB4_EZ_DATA249                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707E4u + PPCA_REMAP_OFFSET_2))
/** \brief 7E8, Memory buffer */
#define REG_SCB4_EZ_DATA250                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707E8u + PPCA_REMAP_OFFSET_2))
/** \brief 7EC, Memory buffer */
#define REG_SCB4_EZ_DATA251                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707ECu + PPCA_REMAP_OFFSET_2))
/** \brief 7F0, Memory buffer */
#define REG_SCB4_EZ_DATA252                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707F0u + PPCA_REMAP_OFFSET_2))
/** \brief 7F4, Memory buffer */
#define REG_SCB4_EZ_DATA253                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707F4u + PPCA_REMAP_OFFSET_2))
/** \brief 7F8, Memory buffer */
#define REG_SCB4_EZ_DATA254                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707F8u + PPCA_REMAP_OFFSET_2))
/** \brief 7FC, Memory buffer */
#define REG_SCB4_EZ_DATA255                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x428707FCu + PPCA_REMAP_OFFSET_2))
/** \brief E00, Active clocked interrupt signal */
#define REG_SCB4_INTR_CAUSE                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_CAUSE*)(0x42870E00u + PPCA_REMAP_OFFSET_2))
/** \brief E80, Externally clocked I2C interrupt request */
#define REG_SCB4_INTR_I2C_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC*)(0x42870E80u + PPCA_REMAP_OFFSET_2))
/** \brief E88, Externally clocked I2C interrupt mask */
#define REG_SCB4_INTR_I2C_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASK*)(0x42870E88u + PPCA_REMAP_OFFSET_2))
/** \brief E8C, Externally clocked I2C interrupt masked */
#define REG_SCB4_INTR_I2C_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASKED*)(0x42870E8Cu + PPCA_REMAP_OFFSET_2))
/** \brief EC0, Externally clocked SPI interrupt request */
#define REG_SCB4_INTR_SPI_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC*)(0x42870EC0u + PPCA_REMAP_OFFSET_2))
/** \brief EC8, Externally clocked SPI interrupt mask */
#define REG_SCB4_INTR_SPI_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASK*)(0x42870EC8u + PPCA_REMAP_OFFSET_2))
/** \brief ECC, Externally clocked SPI interrupt masked */
#define REG_SCB4_INTR_SPI_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASKED*)(0x42870ECCu + PPCA_REMAP_OFFSET_2))
/** \brief F00, Master interrupt request */
#define REG_SCB4_INTR_M                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M*)(0x42870F00u + PPCA_REMAP_OFFSET_2))
/** \brief F04, Master interrupt set request */
#define REG_SCB4_INTR_M_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_SET*)(0x42870F04u + PPCA_REMAP_OFFSET_2))
/** \brief F08, Master interrupt mask */
#define REG_SCB4_INTR_M_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASK*)(0x42870F08u + PPCA_REMAP_OFFSET_2))
/** \brief F0C, Master interrupt masked request */
#define REG_SCB4_INTR_M_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASKED*)(0x42870F0Cu + PPCA_REMAP_OFFSET_2))
/** \brief F40, Slave interrupt request */
#define REG_SCB4_INTR_S                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S*)(0x42870F40u + PPCA_REMAP_OFFSET_2))
/** \brief F44, Slave interrupt set request */
#define REG_SCB4_INTR_S_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_SET*)(0x42870F44u + PPCA_REMAP_OFFSET_2))
/** \brief F48, Slave interrupt mask */
#define REG_SCB4_INTR_S_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASK*)(0x42870F48u + PPCA_REMAP_OFFSET_2))
/** \brief F4C, Slave interrupt masked request */
#define REG_SCB4_INTR_S_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASKED*)(0x42870F4Cu + PPCA_REMAP_OFFSET_2))
/** \brief F80, Transmitter interrupt request */
#define REG_SCB4_INTR_TX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX*)(0x42870F80u + PPCA_REMAP_OFFSET_2))
/** \brief F84, Transmitter interrupt set request */
#define REG_SCB4_INTR_TX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_SET*)(0x42870F84u + PPCA_REMAP_OFFSET_2))
/** \brief F88, Transmitter interrupt mask */
#define REG_SCB4_INTR_TX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASK*)(0x42870F88u + PPCA_REMAP_OFFSET_2))
/** \brief F8C, Transmitter interrupt masked request */
#define REG_SCB4_INTR_TX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASKED*)(0x42870F8Cu + PPCA_REMAP_OFFSET_2))
/** \brief FC0, Receiver interrupt request */
#define REG_SCB4_INTR_RX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX*)(0x42870FC0u + PPCA_REMAP_OFFSET_2))
/** \brief FC4, Receiver interrupt set request */
#define REG_SCB4_INTR_RX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_SET*)(0x42870FC4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Receiver interrupt mask */
#define REG_SCB4_INTR_RX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASK*)(0x42870FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Receiver interrupt masked request */
#define REG_SCB4_INTR_RX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASKED*)(0x42870FCCu + PPCA_REMAP_OFFSET_2))
/** \brief FD0, Receiver interrupt request */
#define REG_SCB4_INTR_TGS                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS*)(0x42870FD0u + PPCA_REMAP_OFFSET_2))
/** \brief FD4, Receiver interrupt set request */
#define REG_SCB4_INTR_TGS_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_SET*)(0x42870FD4u + PPCA_REMAP_OFFSET_2))
/** \brief FD8, Receiver interrupt mask */
#define REG_SCB4_INTR_TGS_MASK                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASK*)(0x42870FD8u + PPCA_REMAP_OFFSET_2))
/** \brief FDC, Receiver interrupt masked request */
#define REG_SCB4_INTR_TGS_MASKED                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASKED*)(0x42870FDCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Generic control */
#define REG_SCB5_CTRL                           /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CTRL*)(0x43800000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Generic status */
#define REG_SCB5_STATUS                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_STATUS*)(0x43800004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Command/response control */
#define REG_SCB5_CMD_RESP_CTRL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_CTRL*)(0x43800008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Command/response status */
#define REG_SCB5_CMD_RESP_STATUS                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_STATUS*)(0x4380000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, SPI control */
#define REG_SCB5_SPI_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_CTRL*)(0x43800020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, SPI status */
#define REG_SCB5_SPI_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_STATUS*)(0x43800024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, SPI transmitter control */
#define REG_SCB5_SPI_TX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_TX_CTRL*)(0x43800028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, SPI receiver control */
#define REG_SCB5_SPI_RX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_RX_CTRL*)(0x4380002Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, UART control */
#define REG_SCB5_UART_CTRL                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_CTRL*)(0x43800040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, UART transmitter control */
#define REG_SCB5_UART_TX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_TX_CTRL*)(0x43800044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, UART receiver control */
#define REG_SCB5_UART_RX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_CTRL*)(0x43800048u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, UART receiver status */
#define REG_SCB5_UART_RX_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_STATUS*)(0x4380004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, UART flow control */
#define REG_SCB5_UART_FLOW_CTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_FLOW_CTRL*)(0x43800050u + PPCA_REMAP_OFFSET_2))
/** \brief 60, I2C control */
#define REG_SCB5_I2C_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CTRL*)(0x43800060u + PPCA_REMAP_OFFSET_2))
/** \brief 64, I2C status */
#define REG_SCB5_I2C_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STATUS*)(0x43800064u + PPCA_REMAP_OFFSET_2))
/** \brief 68, I2C master command */
#define REG_SCB5_I2C_M_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_M_CMD*)(0x43800068u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, I2C slave command */
#define REG_SCB5_I2C_S_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_S_CMD*)(0x4380006Cu + PPCA_REMAP_OFFSET_2))
/** \brief 70, I2C configuration */
#define REG_SCB5_I2C_CFG                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CFG*)(0x43800070u + PPCA_REMAP_OFFSET_2))
/** \brief 74, I2C stretch control */
#define REG_SCB5_I2C_STRETCH_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_CTRL*)(0x43800074u + PPCA_REMAP_OFFSET_2))
/** \brief 78, I2C stretch status */
#define REG_SCB5_I2C_STRETCH_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_STATUS*)(0x43800078u + PPCA_REMAP_OFFSET_2))
/** \brief 120, Timeout generation support 0 control */
#define REG_SCB5_TGS_CTL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL0*)(0x43800120u + PPCA_REMAP_OFFSET_2))
/** \brief 124, Timeout generation support 0 counter */
#define REG_SCB5_TGS_CNT0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT0*)(0x43800124u + PPCA_REMAP_OFFSET_2))
/** \brief 128, Timeout generation support 0 reload */
#define REG_SCB5_TGS_REL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL0*)(0x43800128u + PPCA_REMAP_OFFSET_2))
/** \brief 12C, Timeout generation support 1 control */
#define REG_SCB5_TGS_CTL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL1*)(0x4380012Cu + PPCA_REMAP_OFFSET_2))
/** \brief 130, Timeout generation support 1 counter */
#define REG_SCB5_TGS_CNT1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT1*)(0x43800130u + PPCA_REMAP_OFFSET_2))
/** \brief 134, Timeout generation support 1 reload */
#define REG_SCB5_TGS_REL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL1*)(0x43800134u + PPCA_REMAP_OFFSET_2))
/** \brief 138, Timeout generation support 2 control */
#define REG_SCB5_TGS_CTL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL2*)(0x43800138u + PPCA_REMAP_OFFSET_2))
/** \brief 13C, Timeout generation support 2 counter */
#define REG_SCB5_TGS_CNT2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT2*)(0x4380013Cu + PPCA_REMAP_OFFSET_2))
/** \brief 140, Timeout generation support 2 reload */
#define REG_SCB5_TGS_REL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL2*)(0x43800140u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Transmitter control */
#define REG_SCB5_TX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_CTRL*)(0x43800200u + PPCA_REMAP_OFFSET_2))
/** \brief 204, Transmitter FIFO control */
#define REG_SCB5_TX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_CTRL*)(0x43800204u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Transmitter FIFO status */
#define REG_SCB5_TX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_STATUS*)(0x43800208u + PPCA_REMAP_OFFSET_2))
/** \brief 240, Transmitter FIFO write */
#define REG_SCB5_TX_FIFO_WR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_WR*)(0x43800240u + PPCA_REMAP_OFFSET_2))
/** \brief 300, Receiver control */
#define REG_SCB5_RX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_CTRL*)(0x43800300u + PPCA_REMAP_OFFSET_2))
/** \brief 304, Receiver FIFO control */
#define REG_SCB5_RX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_CTRL*)(0x43800304u + PPCA_REMAP_OFFSET_2))
/** \brief 308, Receiver FIFO status */
#define REG_SCB5_RX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_STATUS*)(0x43800308u + PPCA_REMAP_OFFSET_2))
/** \brief 310, Slave address and mask */
#define REG_SCB5_RX_MATCH                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH*)(0x43800310u + PPCA_REMAP_OFFSET_2))
/** \brief 314, Slave address and mask */
#define REG_SCB5_RX_MATCH1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH1*)(0x43800314u + PPCA_REMAP_OFFSET_2))
/** \brief 318, Slave address and mask */
#define REG_SCB5_RX_MATCH2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH2*)(0x43800318u + PPCA_REMAP_OFFSET_2))
/** \brief 340, Receiver FIFO read */
#define REG_SCB5_RX_FIFO_RD                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD*)(0x43800340u + PPCA_REMAP_OFFSET_2))
/** \brief 344, Receiver FIFO read silent */
#define REG_SCB5_RX_FIFO_RD_SILENT              /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD_SILENT*)(0x43800344u + PPCA_REMAP_OFFSET_2))
/** \brief 400, Memory buffer */
#define REG_SCB5_EZ_DATA0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800400u + PPCA_REMAP_OFFSET_2))
/** \brief 404, Memory buffer */
#define REG_SCB5_EZ_DATA1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800404u + PPCA_REMAP_OFFSET_2))
/** \brief 408, Memory buffer */
#define REG_SCB5_EZ_DATA2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800408u + PPCA_REMAP_OFFSET_2))
/** \brief 40C, Memory buffer */
#define REG_SCB5_EZ_DATA3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380040Cu + PPCA_REMAP_OFFSET_2))
/** \brief 410, Memory buffer */
#define REG_SCB5_EZ_DATA4                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800410u + PPCA_REMAP_OFFSET_2))
/** \brief 414, Memory buffer */
#define REG_SCB5_EZ_DATA5                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800414u + PPCA_REMAP_OFFSET_2))
/** \brief 418, Memory buffer */
#define REG_SCB5_EZ_DATA6                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800418u + PPCA_REMAP_OFFSET_2))
/** \brief 41C, Memory buffer */
#define REG_SCB5_EZ_DATA7                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380041Cu + PPCA_REMAP_OFFSET_2))
/** \brief 420, Memory buffer */
#define REG_SCB5_EZ_DATA8                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800420u + PPCA_REMAP_OFFSET_2))
/** \brief 424, Memory buffer */
#define REG_SCB5_EZ_DATA9                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800424u + PPCA_REMAP_OFFSET_2))
/** \brief 428, Memory buffer */
#define REG_SCB5_EZ_DATA10                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800428u + PPCA_REMAP_OFFSET_2))
/** \brief 42C, Memory buffer */
#define REG_SCB5_EZ_DATA11                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380042Cu + PPCA_REMAP_OFFSET_2))
/** \brief 430, Memory buffer */
#define REG_SCB5_EZ_DATA12                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800430u + PPCA_REMAP_OFFSET_2))
/** \brief 434, Memory buffer */
#define REG_SCB5_EZ_DATA13                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800434u + PPCA_REMAP_OFFSET_2))
/** \brief 438, Memory buffer */
#define REG_SCB5_EZ_DATA14                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800438u + PPCA_REMAP_OFFSET_2))
/** \brief 43C, Memory buffer */
#define REG_SCB5_EZ_DATA15                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380043Cu + PPCA_REMAP_OFFSET_2))
/** \brief 440, Memory buffer */
#define REG_SCB5_EZ_DATA16                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800440u + PPCA_REMAP_OFFSET_2))
/** \brief 444, Memory buffer */
#define REG_SCB5_EZ_DATA17                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800444u + PPCA_REMAP_OFFSET_2))
/** \brief 448, Memory buffer */
#define REG_SCB5_EZ_DATA18                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800448u + PPCA_REMAP_OFFSET_2))
/** \brief 44C, Memory buffer */
#define REG_SCB5_EZ_DATA19                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380044Cu + PPCA_REMAP_OFFSET_2))
/** \brief 450, Memory buffer */
#define REG_SCB5_EZ_DATA20                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800450u + PPCA_REMAP_OFFSET_2))
/** \brief 454, Memory buffer */
#define REG_SCB5_EZ_DATA21                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800454u + PPCA_REMAP_OFFSET_2))
/** \brief 458, Memory buffer */
#define REG_SCB5_EZ_DATA22                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800458u + PPCA_REMAP_OFFSET_2))
/** \brief 45C, Memory buffer */
#define REG_SCB5_EZ_DATA23                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380045Cu + PPCA_REMAP_OFFSET_2))
/** \brief 460, Memory buffer */
#define REG_SCB5_EZ_DATA24                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800460u + PPCA_REMAP_OFFSET_2))
/** \brief 464, Memory buffer */
#define REG_SCB5_EZ_DATA25                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800464u + PPCA_REMAP_OFFSET_2))
/** \brief 468, Memory buffer */
#define REG_SCB5_EZ_DATA26                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800468u + PPCA_REMAP_OFFSET_2))
/** \brief 46C, Memory buffer */
#define REG_SCB5_EZ_DATA27                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380046Cu + PPCA_REMAP_OFFSET_2))
/** \brief 470, Memory buffer */
#define REG_SCB5_EZ_DATA28                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800470u + PPCA_REMAP_OFFSET_2))
/** \brief 474, Memory buffer */
#define REG_SCB5_EZ_DATA29                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800474u + PPCA_REMAP_OFFSET_2))
/** \brief 478, Memory buffer */
#define REG_SCB5_EZ_DATA30                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800478u + PPCA_REMAP_OFFSET_2))
/** \brief 47C, Memory buffer */
#define REG_SCB5_EZ_DATA31                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380047Cu + PPCA_REMAP_OFFSET_2))
/** \brief 480, Memory buffer */
#define REG_SCB5_EZ_DATA32                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800480u + PPCA_REMAP_OFFSET_2))
/** \brief 484, Memory buffer */
#define REG_SCB5_EZ_DATA33                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800484u + PPCA_REMAP_OFFSET_2))
/** \brief 488, Memory buffer */
#define REG_SCB5_EZ_DATA34                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800488u + PPCA_REMAP_OFFSET_2))
/** \brief 48C, Memory buffer */
#define REG_SCB5_EZ_DATA35                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380048Cu + PPCA_REMAP_OFFSET_2))
/** \brief 490, Memory buffer */
#define REG_SCB5_EZ_DATA36                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800490u + PPCA_REMAP_OFFSET_2))
/** \brief 494, Memory buffer */
#define REG_SCB5_EZ_DATA37                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800494u + PPCA_REMAP_OFFSET_2))
/** \brief 498, Memory buffer */
#define REG_SCB5_EZ_DATA38                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800498u + PPCA_REMAP_OFFSET_2))
/** \brief 49C, Memory buffer */
#define REG_SCB5_EZ_DATA39                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380049Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4A0, Memory buffer */
#define REG_SCB5_EZ_DATA40                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004A0u + PPCA_REMAP_OFFSET_2))
/** \brief 4A4, Memory buffer */
#define REG_SCB5_EZ_DATA41                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004A4u + PPCA_REMAP_OFFSET_2))
/** \brief 4A8, Memory buffer */
#define REG_SCB5_EZ_DATA42                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004A8u + PPCA_REMAP_OFFSET_2))
/** \brief 4AC, Memory buffer */
#define REG_SCB5_EZ_DATA43                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004ACu + PPCA_REMAP_OFFSET_2))
/** \brief 4B0, Memory buffer */
#define REG_SCB5_EZ_DATA44                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004B0u + PPCA_REMAP_OFFSET_2))
/** \brief 4B4, Memory buffer */
#define REG_SCB5_EZ_DATA45                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004B4u + PPCA_REMAP_OFFSET_2))
/** \brief 4B8, Memory buffer */
#define REG_SCB5_EZ_DATA46                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004B8u + PPCA_REMAP_OFFSET_2))
/** \brief 4BC, Memory buffer */
#define REG_SCB5_EZ_DATA47                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004BCu + PPCA_REMAP_OFFSET_2))
/** \brief 4C0, Memory buffer */
#define REG_SCB5_EZ_DATA48                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4C4, Memory buffer */
#define REG_SCB5_EZ_DATA49                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004C4u + PPCA_REMAP_OFFSET_2))
/** \brief 4C8, Memory buffer */
#define REG_SCB5_EZ_DATA50                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4CC, Memory buffer */
#define REG_SCB5_EZ_DATA51                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004CCu + PPCA_REMAP_OFFSET_2))
/** \brief 4D0, Memory buffer */
#define REG_SCB5_EZ_DATA52                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004D0u + PPCA_REMAP_OFFSET_2))
/** \brief 4D4, Memory buffer */
#define REG_SCB5_EZ_DATA53                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004D4u + PPCA_REMAP_OFFSET_2))
/** \brief 4D8, Memory buffer */
#define REG_SCB5_EZ_DATA54                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004D8u + PPCA_REMAP_OFFSET_2))
/** \brief 4DC, Memory buffer */
#define REG_SCB5_EZ_DATA55                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004DCu + PPCA_REMAP_OFFSET_2))
/** \brief 4E0, Memory buffer */
#define REG_SCB5_EZ_DATA56                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004E0u + PPCA_REMAP_OFFSET_2))
/** \brief 4E4, Memory buffer */
#define REG_SCB5_EZ_DATA57                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004E4u + PPCA_REMAP_OFFSET_2))
/** \brief 4E8, Memory buffer */
#define REG_SCB5_EZ_DATA58                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004E8u + PPCA_REMAP_OFFSET_2))
/** \brief 4EC, Memory buffer */
#define REG_SCB5_EZ_DATA59                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004ECu + PPCA_REMAP_OFFSET_2))
/** \brief 4F0, Memory buffer */
#define REG_SCB5_EZ_DATA60                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004F0u + PPCA_REMAP_OFFSET_2))
/** \brief 4F4, Memory buffer */
#define REG_SCB5_EZ_DATA61                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004F4u + PPCA_REMAP_OFFSET_2))
/** \brief 4F8, Memory buffer */
#define REG_SCB5_EZ_DATA62                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004F8u + PPCA_REMAP_OFFSET_2))
/** \brief 4FC, Memory buffer */
#define REG_SCB5_EZ_DATA63                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438004FCu + PPCA_REMAP_OFFSET_2))
/** \brief 500, Memory buffer */
#define REG_SCB5_EZ_DATA64                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800500u + PPCA_REMAP_OFFSET_2))
/** \brief 504, Memory buffer */
#define REG_SCB5_EZ_DATA65                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800504u + PPCA_REMAP_OFFSET_2))
/** \brief 508, Memory buffer */
#define REG_SCB5_EZ_DATA66                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800508u + PPCA_REMAP_OFFSET_2))
/** \brief 50C, Memory buffer */
#define REG_SCB5_EZ_DATA67                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380050Cu + PPCA_REMAP_OFFSET_2))
/** \brief 510, Memory buffer */
#define REG_SCB5_EZ_DATA68                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800510u + PPCA_REMAP_OFFSET_2))
/** \brief 514, Memory buffer */
#define REG_SCB5_EZ_DATA69                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800514u + PPCA_REMAP_OFFSET_2))
/** \brief 518, Memory buffer */
#define REG_SCB5_EZ_DATA70                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800518u + PPCA_REMAP_OFFSET_2))
/** \brief 51C, Memory buffer */
#define REG_SCB5_EZ_DATA71                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380051Cu + PPCA_REMAP_OFFSET_2))
/** \brief 520, Memory buffer */
#define REG_SCB5_EZ_DATA72                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800520u + PPCA_REMAP_OFFSET_2))
/** \brief 524, Memory buffer */
#define REG_SCB5_EZ_DATA73                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800524u + PPCA_REMAP_OFFSET_2))
/** \brief 528, Memory buffer */
#define REG_SCB5_EZ_DATA74                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800528u + PPCA_REMAP_OFFSET_2))
/** \brief 52C, Memory buffer */
#define REG_SCB5_EZ_DATA75                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380052Cu + PPCA_REMAP_OFFSET_2))
/** \brief 530, Memory buffer */
#define REG_SCB5_EZ_DATA76                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800530u + PPCA_REMAP_OFFSET_2))
/** \brief 534, Memory buffer */
#define REG_SCB5_EZ_DATA77                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800534u + PPCA_REMAP_OFFSET_2))
/** \brief 538, Memory buffer */
#define REG_SCB5_EZ_DATA78                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800538u + PPCA_REMAP_OFFSET_2))
/** \brief 53C, Memory buffer */
#define REG_SCB5_EZ_DATA79                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380053Cu + PPCA_REMAP_OFFSET_2))
/** \brief 540, Memory buffer */
#define REG_SCB5_EZ_DATA80                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800540u + PPCA_REMAP_OFFSET_2))
/** \brief 544, Memory buffer */
#define REG_SCB5_EZ_DATA81                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800544u + PPCA_REMAP_OFFSET_2))
/** \brief 548, Memory buffer */
#define REG_SCB5_EZ_DATA82                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800548u + PPCA_REMAP_OFFSET_2))
/** \brief 54C, Memory buffer */
#define REG_SCB5_EZ_DATA83                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380054Cu + PPCA_REMAP_OFFSET_2))
/** \brief 550, Memory buffer */
#define REG_SCB5_EZ_DATA84                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800550u + PPCA_REMAP_OFFSET_2))
/** \brief 554, Memory buffer */
#define REG_SCB5_EZ_DATA85                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800554u + PPCA_REMAP_OFFSET_2))
/** \brief 558, Memory buffer */
#define REG_SCB5_EZ_DATA86                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800558u + PPCA_REMAP_OFFSET_2))
/** \brief 55C, Memory buffer */
#define REG_SCB5_EZ_DATA87                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380055Cu + PPCA_REMAP_OFFSET_2))
/** \brief 560, Memory buffer */
#define REG_SCB5_EZ_DATA88                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800560u + PPCA_REMAP_OFFSET_2))
/** \brief 564, Memory buffer */
#define REG_SCB5_EZ_DATA89                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800564u + PPCA_REMAP_OFFSET_2))
/** \brief 568, Memory buffer */
#define REG_SCB5_EZ_DATA90                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800568u + PPCA_REMAP_OFFSET_2))
/** \brief 56C, Memory buffer */
#define REG_SCB5_EZ_DATA91                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380056Cu + PPCA_REMAP_OFFSET_2))
/** \brief 570, Memory buffer */
#define REG_SCB5_EZ_DATA92                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800570u + PPCA_REMAP_OFFSET_2))
/** \brief 574, Memory buffer */
#define REG_SCB5_EZ_DATA93                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800574u + PPCA_REMAP_OFFSET_2))
/** \brief 578, Memory buffer */
#define REG_SCB5_EZ_DATA94                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800578u + PPCA_REMAP_OFFSET_2))
/** \brief 57C, Memory buffer */
#define REG_SCB5_EZ_DATA95                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380057Cu + PPCA_REMAP_OFFSET_2))
/** \brief 580, Memory buffer */
#define REG_SCB5_EZ_DATA96                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800580u + PPCA_REMAP_OFFSET_2))
/** \brief 584, Memory buffer */
#define REG_SCB5_EZ_DATA97                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800584u + PPCA_REMAP_OFFSET_2))
/** \brief 588, Memory buffer */
#define REG_SCB5_EZ_DATA98                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800588u + PPCA_REMAP_OFFSET_2))
/** \brief 58C, Memory buffer */
#define REG_SCB5_EZ_DATA99                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380058Cu + PPCA_REMAP_OFFSET_2))
/** \brief 590, Memory buffer */
#define REG_SCB5_EZ_DATA100                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800590u + PPCA_REMAP_OFFSET_2))
/** \brief 594, Memory buffer */
#define REG_SCB5_EZ_DATA101                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800594u + PPCA_REMAP_OFFSET_2))
/** \brief 598, Memory buffer */
#define REG_SCB5_EZ_DATA102                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800598u + PPCA_REMAP_OFFSET_2))
/** \brief 59C, Memory buffer */
#define REG_SCB5_EZ_DATA103                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380059Cu + PPCA_REMAP_OFFSET_2))
/** \brief 5A0, Memory buffer */
#define REG_SCB5_EZ_DATA104                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005A0u + PPCA_REMAP_OFFSET_2))
/** \brief 5A4, Memory buffer */
#define REG_SCB5_EZ_DATA105                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005A4u + PPCA_REMAP_OFFSET_2))
/** \brief 5A8, Memory buffer */
#define REG_SCB5_EZ_DATA106                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005A8u + PPCA_REMAP_OFFSET_2))
/** \brief 5AC, Memory buffer */
#define REG_SCB5_EZ_DATA107                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005ACu + PPCA_REMAP_OFFSET_2))
/** \brief 5B0, Memory buffer */
#define REG_SCB5_EZ_DATA108                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005B0u + PPCA_REMAP_OFFSET_2))
/** \brief 5B4, Memory buffer */
#define REG_SCB5_EZ_DATA109                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005B4u + PPCA_REMAP_OFFSET_2))
/** \brief 5B8, Memory buffer */
#define REG_SCB5_EZ_DATA110                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005B8u + PPCA_REMAP_OFFSET_2))
/** \brief 5BC, Memory buffer */
#define REG_SCB5_EZ_DATA111                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005BCu + PPCA_REMAP_OFFSET_2))
/** \brief 5C0, Memory buffer */
#define REG_SCB5_EZ_DATA112                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005C0u + PPCA_REMAP_OFFSET_2))
/** \brief 5C4, Memory buffer */
#define REG_SCB5_EZ_DATA113                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005C4u + PPCA_REMAP_OFFSET_2))
/** \brief 5C8, Memory buffer */
#define REG_SCB5_EZ_DATA114                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005C8u + PPCA_REMAP_OFFSET_2))
/** \brief 5CC, Memory buffer */
#define REG_SCB5_EZ_DATA115                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005CCu + PPCA_REMAP_OFFSET_2))
/** \brief 5D0, Memory buffer */
#define REG_SCB5_EZ_DATA116                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005D0u + PPCA_REMAP_OFFSET_2))
/** \brief 5D4, Memory buffer */
#define REG_SCB5_EZ_DATA117                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005D4u + PPCA_REMAP_OFFSET_2))
/** \brief 5D8, Memory buffer */
#define REG_SCB5_EZ_DATA118                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005D8u + PPCA_REMAP_OFFSET_2))
/** \brief 5DC, Memory buffer */
#define REG_SCB5_EZ_DATA119                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005DCu + PPCA_REMAP_OFFSET_2))
/** \brief 5E0, Memory buffer */
#define REG_SCB5_EZ_DATA120                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005E0u + PPCA_REMAP_OFFSET_2))
/** \brief 5E4, Memory buffer */
#define REG_SCB5_EZ_DATA121                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005E4u + PPCA_REMAP_OFFSET_2))
/** \brief 5E8, Memory buffer */
#define REG_SCB5_EZ_DATA122                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005E8u + PPCA_REMAP_OFFSET_2))
/** \brief 5EC, Memory buffer */
#define REG_SCB5_EZ_DATA123                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005ECu + PPCA_REMAP_OFFSET_2))
/** \brief 5F0, Memory buffer */
#define REG_SCB5_EZ_DATA124                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005F0u + PPCA_REMAP_OFFSET_2))
/** \brief 5F4, Memory buffer */
#define REG_SCB5_EZ_DATA125                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005F4u + PPCA_REMAP_OFFSET_2))
/** \brief 5F8, Memory buffer */
#define REG_SCB5_EZ_DATA126                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005F8u + PPCA_REMAP_OFFSET_2))
/** \brief 5FC, Memory buffer */
#define REG_SCB5_EZ_DATA127                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438005FCu + PPCA_REMAP_OFFSET_2))
/** \brief 600, Memory buffer */
#define REG_SCB5_EZ_DATA128                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800600u + PPCA_REMAP_OFFSET_2))
/** \brief 604, Memory buffer */
#define REG_SCB5_EZ_DATA129                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800604u + PPCA_REMAP_OFFSET_2))
/** \brief 608, Memory buffer */
#define REG_SCB5_EZ_DATA130                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800608u + PPCA_REMAP_OFFSET_2))
/** \brief 60C, Memory buffer */
#define REG_SCB5_EZ_DATA131                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380060Cu + PPCA_REMAP_OFFSET_2))
/** \brief 610, Memory buffer */
#define REG_SCB5_EZ_DATA132                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800610u + PPCA_REMAP_OFFSET_2))
/** \brief 614, Memory buffer */
#define REG_SCB5_EZ_DATA133                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800614u + PPCA_REMAP_OFFSET_2))
/** \brief 618, Memory buffer */
#define REG_SCB5_EZ_DATA134                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800618u + PPCA_REMAP_OFFSET_2))
/** \brief 61C, Memory buffer */
#define REG_SCB5_EZ_DATA135                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380061Cu + PPCA_REMAP_OFFSET_2))
/** \brief 620, Memory buffer */
#define REG_SCB5_EZ_DATA136                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800620u + PPCA_REMAP_OFFSET_2))
/** \brief 624, Memory buffer */
#define REG_SCB5_EZ_DATA137                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800624u + PPCA_REMAP_OFFSET_2))
/** \brief 628, Memory buffer */
#define REG_SCB5_EZ_DATA138                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800628u + PPCA_REMAP_OFFSET_2))
/** \brief 62C, Memory buffer */
#define REG_SCB5_EZ_DATA139                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380062Cu + PPCA_REMAP_OFFSET_2))
/** \brief 630, Memory buffer */
#define REG_SCB5_EZ_DATA140                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800630u + PPCA_REMAP_OFFSET_2))
/** \brief 634, Memory buffer */
#define REG_SCB5_EZ_DATA141                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800634u + PPCA_REMAP_OFFSET_2))
/** \brief 638, Memory buffer */
#define REG_SCB5_EZ_DATA142                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800638u + PPCA_REMAP_OFFSET_2))
/** \brief 63C, Memory buffer */
#define REG_SCB5_EZ_DATA143                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380063Cu + PPCA_REMAP_OFFSET_2))
/** \brief 640, Memory buffer */
#define REG_SCB5_EZ_DATA144                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800640u + PPCA_REMAP_OFFSET_2))
/** \brief 644, Memory buffer */
#define REG_SCB5_EZ_DATA145                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800644u + PPCA_REMAP_OFFSET_2))
/** \brief 648, Memory buffer */
#define REG_SCB5_EZ_DATA146                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800648u + PPCA_REMAP_OFFSET_2))
/** \brief 64C, Memory buffer */
#define REG_SCB5_EZ_DATA147                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380064Cu + PPCA_REMAP_OFFSET_2))
/** \brief 650, Memory buffer */
#define REG_SCB5_EZ_DATA148                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800650u + PPCA_REMAP_OFFSET_2))
/** \brief 654, Memory buffer */
#define REG_SCB5_EZ_DATA149                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800654u + PPCA_REMAP_OFFSET_2))
/** \brief 658, Memory buffer */
#define REG_SCB5_EZ_DATA150                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800658u + PPCA_REMAP_OFFSET_2))
/** \brief 65C, Memory buffer */
#define REG_SCB5_EZ_DATA151                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380065Cu + PPCA_REMAP_OFFSET_2))
/** \brief 660, Memory buffer */
#define REG_SCB5_EZ_DATA152                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800660u + PPCA_REMAP_OFFSET_2))
/** \brief 664, Memory buffer */
#define REG_SCB5_EZ_DATA153                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800664u + PPCA_REMAP_OFFSET_2))
/** \brief 668, Memory buffer */
#define REG_SCB5_EZ_DATA154                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800668u + PPCA_REMAP_OFFSET_2))
/** \brief 66C, Memory buffer */
#define REG_SCB5_EZ_DATA155                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380066Cu + PPCA_REMAP_OFFSET_2))
/** \brief 670, Memory buffer */
#define REG_SCB5_EZ_DATA156                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800670u + PPCA_REMAP_OFFSET_2))
/** \brief 674, Memory buffer */
#define REG_SCB5_EZ_DATA157                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800674u + PPCA_REMAP_OFFSET_2))
/** \brief 678, Memory buffer */
#define REG_SCB5_EZ_DATA158                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800678u + PPCA_REMAP_OFFSET_2))
/** \brief 67C, Memory buffer */
#define REG_SCB5_EZ_DATA159                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380067Cu + PPCA_REMAP_OFFSET_2))
/** \brief 680, Memory buffer */
#define REG_SCB5_EZ_DATA160                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800680u + PPCA_REMAP_OFFSET_2))
/** \brief 684, Memory buffer */
#define REG_SCB5_EZ_DATA161                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800684u + PPCA_REMAP_OFFSET_2))
/** \brief 688, Memory buffer */
#define REG_SCB5_EZ_DATA162                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800688u + PPCA_REMAP_OFFSET_2))
/** \brief 68C, Memory buffer */
#define REG_SCB5_EZ_DATA163                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380068Cu + PPCA_REMAP_OFFSET_2))
/** \brief 690, Memory buffer */
#define REG_SCB5_EZ_DATA164                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800690u + PPCA_REMAP_OFFSET_2))
/** \brief 694, Memory buffer */
#define REG_SCB5_EZ_DATA165                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800694u + PPCA_REMAP_OFFSET_2))
/** \brief 698, Memory buffer */
#define REG_SCB5_EZ_DATA166                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800698u + PPCA_REMAP_OFFSET_2))
/** \brief 69C, Memory buffer */
#define REG_SCB5_EZ_DATA167                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380069Cu + PPCA_REMAP_OFFSET_2))
/** \brief 6A0, Memory buffer */
#define REG_SCB5_EZ_DATA168                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006A0u + PPCA_REMAP_OFFSET_2))
/** \brief 6A4, Memory buffer */
#define REG_SCB5_EZ_DATA169                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006A4u + PPCA_REMAP_OFFSET_2))
/** \brief 6A8, Memory buffer */
#define REG_SCB5_EZ_DATA170                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006A8u + PPCA_REMAP_OFFSET_2))
/** \brief 6AC, Memory buffer */
#define REG_SCB5_EZ_DATA171                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006ACu + PPCA_REMAP_OFFSET_2))
/** \brief 6B0, Memory buffer */
#define REG_SCB5_EZ_DATA172                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006B0u + PPCA_REMAP_OFFSET_2))
/** \brief 6B4, Memory buffer */
#define REG_SCB5_EZ_DATA173                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006B4u + PPCA_REMAP_OFFSET_2))
/** \brief 6B8, Memory buffer */
#define REG_SCB5_EZ_DATA174                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006B8u + PPCA_REMAP_OFFSET_2))
/** \brief 6BC, Memory buffer */
#define REG_SCB5_EZ_DATA175                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006BCu + PPCA_REMAP_OFFSET_2))
/** \brief 6C0, Memory buffer */
#define REG_SCB5_EZ_DATA176                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006C0u + PPCA_REMAP_OFFSET_2))
/** \brief 6C4, Memory buffer */
#define REG_SCB5_EZ_DATA177                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006C4u + PPCA_REMAP_OFFSET_2))
/** \brief 6C8, Memory buffer */
#define REG_SCB5_EZ_DATA178                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006C8u + PPCA_REMAP_OFFSET_2))
/** \brief 6CC, Memory buffer */
#define REG_SCB5_EZ_DATA179                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006CCu + PPCA_REMAP_OFFSET_2))
/** \brief 6D0, Memory buffer */
#define REG_SCB5_EZ_DATA180                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006D0u + PPCA_REMAP_OFFSET_2))
/** \brief 6D4, Memory buffer */
#define REG_SCB5_EZ_DATA181                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006D4u + PPCA_REMAP_OFFSET_2))
/** \brief 6D8, Memory buffer */
#define REG_SCB5_EZ_DATA182                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006D8u + PPCA_REMAP_OFFSET_2))
/** \brief 6DC, Memory buffer */
#define REG_SCB5_EZ_DATA183                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006DCu + PPCA_REMAP_OFFSET_2))
/** \brief 6E0, Memory buffer */
#define REG_SCB5_EZ_DATA184                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006E0u + PPCA_REMAP_OFFSET_2))
/** \brief 6E4, Memory buffer */
#define REG_SCB5_EZ_DATA185                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006E4u + PPCA_REMAP_OFFSET_2))
/** \brief 6E8, Memory buffer */
#define REG_SCB5_EZ_DATA186                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6EC, Memory buffer */
#define REG_SCB5_EZ_DATA187                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006ECu + PPCA_REMAP_OFFSET_2))
/** \brief 6F0, Memory buffer */
#define REG_SCB5_EZ_DATA188                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006F0u + PPCA_REMAP_OFFSET_2))
/** \brief 6F4, Memory buffer */
#define REG_SCB5_EZ_DATA189                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006F4u + PPCA_REMAP_OFFSET_2))
/** \brief 6F8, Memory buffer */
#define REG_SCB5_EZ_DATA190                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006F8u + PPCA_REMAP_OFFSET_2))
/** \brief 6FC, Memory buffer */
#define REG_SCB5_EZ_DATA191                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438006FCu + PPCA_REMAP_OFFSET_2))
/** \brief 700, Memory buffer */
#define REG_SCB5_EZ_DATA192                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800700u + PPCA_REMAP_OFFSET_2))
/** \brief 704, Memory buffer */
#define REG_SCB5_EZ_DATA193                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800704u + PPCA_REMAP_OFFSET_2))
/** \brief 708, Memory buffer */
#define REG_SCB5_EZ_DATA194                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800708u + PPCA_REMAP_OFFSET_2))
/** \brief 70C, Memory buffer */
#define REG_SCB5_EZ_DATA195                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380070Cu + PPCA_REMAP_OFFSET_2))
/** \brief 710, Memory buffer */
#define REG_SCB5_EZ_DATA196                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800710u + PPCA_REMAP_OFFSET_2))
/** \brief 714, Memory buffer */
#define REG_SCB5_EZ_DATA197                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800714u + PPCA_REMAP_OFFSET_2))
/** \brief 718, Memory buffer */
#define REG_SCB5_EZ_DATA198                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800718u + PPCA_REMAP_OFFSET_2))
/** \brief 71C, Memory buffer */
#define REG_SCB5_EZ_DATA199                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380071Cu + PPCA_REMAP_OFFSET_2))
/** \brief 720, Memory buffer */
#define REG_SCB5_EZ_DATA200                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800720u + PPCA_REMAP_OFFSET_2))
/** \brief 724, Memory buffer */
#define REG_SCB5_EZ_DATA201                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800724u + PPCA_REMAP_OFFSET_2))
/** \brief 728, Memory buffer */
#define REG_SCB5_EZ_DATA202                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800728u + PPCA_REMAP_OFFSET_2))
/** \brief 72C, Memory buffer */
#define REG_SCB5_EZ_DATA203                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380072Cu + PPCA_REMAP_OFFSET_2))
/** \brief 730, Memory buffer */
#define REG_SCB5_EZ_DATA204                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800730u + PPCA_REMAP_OFFSET_2))
/** \brief 734, Memory buffer */
#define REG_SCB5_EZ_DATA205                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800734u + PPCA_REMAP_OFFSET_2))
/** \brief 738, Memory buffer */
#define REG_SCB5_EZ_DATA206                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800738u + PPCA_REMAP_OFFSET_2))
/** \brief 73C, Memory buffer */
#define REG_SCB5_EZ_DATA207                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380073Cu + PPCA_REMAP_OFFSET_2))
/** \brief 740, Memory buffer */
#define REG_SCB5_EZ_DATA208                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800740u + PPCA_REMAP_OFFSET_2))
/** \brief 744, Memory buffer */
#define REG_SCB5_EZ_DATA209                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800744u + PPCA_REMAP_OFFSET_2))
/** \brief 748, Memory buffer */
#define REG_SCB5_EZ_DATA210                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800748u + PPCA_REMAP_OFFSET_2))
/** \brief 74C, Memory buffer */
#define REG_SCB5_EZ_DATA211                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380074Cu + PPCA_REMAP_OFFSET_2))
/** \brief 750, Memory buffer */
#define REG_SCB5_EZ_DATA212                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800750u + PPCA_REMAP_OFFSET_2))
/** \brief 754, Memory buffer */
#define REG_SCB5_EZ_DATA213                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800754u + PPCA_REMAP_OFFSET_2))
/** \brief 758, Memory buffer */
#define REG_SCB5_EZ_DATA214                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800758u + PPCA_REMAP_OFFSET_2))
/** \brief 75C, Memory buffer */
#define REG_SCB5_EZ_DATA215                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380075Cu + PPCA_REMAP_OFFSET_2))
/** \brief 760, Memory buffer */
#define REG_SCB5_EZ_DATA216                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800760u + PPCA_REMAP_OFFSET_2))
/** \brief 764, Memory buffer */
#define REG_SCB5_EZ_DATA217                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800764u + PPCA_REMAP_OFFSET_2))
/** \brief 768, Memory buffer */
#define REG_SCB5_EZ_DATA218                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800768u + PPCA_REMAP_OFFSET_2))
/** \brief 76C, Memory buffer */
#define REG_SCB5_EZ_DATA219                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380076Cu + PPCA_REMAP_OFFSET_2))
/** \brief 770, Memory buffer */
#define REG_SCB5_EZ_DATA220                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800770u + PPCA_REMAP_OFFSET_2))
/** \brief 774, Memory buffer */
#define REG_SCB5_EZ_DATA221                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800774u + PPCA_REMAP_OFFSET_2))
/** \brief 778, Memory buffer */
#define REG_SCB5_EZ_DATA222                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800778u + PPCA_REMAP_OFFSET_2))
/** \brief 77C, Memory buffer */
#define REG_SCB5_EZ_DATA223                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380077Cu + PPCA_REMAP_OFFSET_2))
/** \brief 780, Memory buffer */
#define REG_SCB5_EZ_DATA224                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800780u + PPCA_REMAP_OFFSET_2))
/** \brief 784, Memory buffer */
#define REG_SCB5_EZ_DATA225                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800784u + PPCA_REMAP_OFFSET_2))
/** \brief 788, Memory buffer */
#define REG_SCB5_EZ_DATA226                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800788u + PPCA_REMAP_OFFSET_2))
/** \brief 78C, Memory buffer */
#define REG_SCB5_EZ_DATA227                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380078Cu + PPCA_REMAP_OFFSET_2))
/** \brief 790, Memory buffer */
#define REG_SCB5_EZ_DATA228                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800790u + PPCA_REMAP_OFFSET_2))
/** \brief 794, Memory buffer */
#define REG_SCB5_EZ_DATA229                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800794u + PPCA_REMAP_OFFSET_2))
/** \brief 798, Memory buffer */
#define REG_SCB5_EZ_DATA230                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43800798u + PPCA_REMAP_OFFSET_2))
/** \brief 79C, Memory buffer */
#define REG_SCB5_EZ_DATA231                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4380079Cu + PPCA_REMAP_OFFSET_2))
/** \brief 7A0, Memory buffer */
#define REG_SCB5_EZ_DATA232                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007A0u + PPCA_REMAP_OFFSET_2))
/** \brief 7A4, Memory buffer */
#define REG_SCB5_EZ_DATA233                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007A4u + PPCA_REMAP_OFFSET_2))
/** \brief 7A8, Memory buffer */
#define REG_SCB5_EZ_DATA234                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007A8u + PPCA_REMAP_OFFSET_2))
/** \brief 7AC, Memory buffer */
#define REG_SCB5_EZ_DATA235                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007ACu + PPCA_REMAP_OFFSET_2))
/** \brief 7B0, Memory buffer */
#define REG_SCB5_EZ_DATA236                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007B0u + PPCA_REMAP_OFFSET_2))
/** \brief 7B4, Memory buffer */
#define REG_SCB5_EZ_DATA237                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007B4u + PPCA_REMAP_OFFSET_2))
/** \brief 7B8, Memory buffer */
#define REG_SCB5_EZ_DATA238                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007B8u + PPCA_REMAP_OFFSET_2))
/** \brief 7BC, Memory buffer */
#define REG_SCB5_EZ_DATA239                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007BCu + PPCA_REMAP_OFFSET_2))
/** \brief 7C0, Memory buffer */
#define REG_SCB5_EZ_DATA240                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007C0u + PPCA_REMAP_OFFSET_2))
/** \brief 7C4, Memory buffer */
#define REG_SCB5_EZ_DATA241                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007C4u + PPCA_REMAP_OFFSET_2))
/** \brief 7C8, Memory buffer */
#define REG_SCB5_EZ_DATA242                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007C8u + PPCA_REMAP_OFFSET_2))
/** \brief 7CC, Memory buffer */
#define REG_SCB5_EZ_DATA243                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007CCu + PPCA_REMAP_OFFSET_2))
/** \brief 7D0, Memory buffer */
#define REG_SCB5_EZ_DATA244                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007D0u + PPCA_REMAP_OFFSET_2))
/** \brief 7D4, Memory buffer */
#define REG_SCB5_EZ_DATA245                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007D4u + PPCA_REMAP_OFFSET_2))
/** \brief 7D8, Memory buffer */
#define REG_SCB5_EZ_DATA246                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007D8u + PPCA_REMAP_OFFSET_2))
/** \brief 7DC, Memory buffer */
#define REG_SCB5_EZ_DATA247                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007DCu + PPCA_REMAP_OFFSET_2))
/** \brief 7E0, Memory buffer */
#define REG_SCB5_EZ_DATA248                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007E0u + PPCA_REMAP_OFFSET_2))
/** \brief 7E4, Memory buffer */
#define REG_SCB5_EZ_DATA249                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007E4u + PPCA_REMAP_OFFSET_2))
/** \brief 7E8, Memory buffer */
#define REG_SCB5_EZ_DATA250                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007E8u + PPCA_REMAP_OFFSET_2))
/** \brief 7EC, Memory buffer */
#define REG_SCB5_EZ_DATA251                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007ECu + PPCA_REMAP_OFFSET_2))
/** \brief 7F0, Memory buffer */
#define REG_SCB5_EZ_DATA252                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007F0u + PPCA_REMAP_OFFSET_2))
/** \brief 7F4, Memory buffer */
#define REG_SCB5_EZ_DATA253                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007F4u + PPCA_REMAP_OFFSET_2))
/** \brief 7F8, Memory buffer */
#define REG_SCB5_EZ_DATA254                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007F8u + PPCA_REMAP_OFFSET_2))
/** \brief 7FC, Memory buffer */
#define REG_SCB5_EZ_DATA255                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438007FCu + PPCA_REMAP_OFFSET_2))
/** \brief E00, Active clocked interrupt signal */
#define REG_SCB5_INTR_CAUSE                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_CAUSE*)(0x43800E00u + PPCA_REMAP_OFFSET_2))
/** \brief E80, Externally clocked I2C interrupt request */
#define REG_SCB5_INTR_I2C_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC*)(0x43800E80u + PPCA_REMAP_OFFSET_2))
/** \brief E88, Externally clocked I2C interrupt mask */
#define REG_SCB5_INTR_I2C_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASK*)(0x43800E88u + PPCA_REMAP_OFFSET_2))
/** \brief E8C, Externally clocked I2C interrupt masked */
#define REG_SCB5_INTR_I2C_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASKED*)(0x43800E8Cu + PPCA_REMAP_OFFSET_2))
/** \brief EC0, Externally clocked SPI interrupt request */
#define REG_SCB5_INTR_SPI_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC*)(0x43800EC0u + PPCA_REMAP_OFFSET_2))
/** \brief EC8, Externally clocked SPI interrupt mask */
#define REG_SCB5_INTR_SPI_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASK*)(0x43800EC8u + PPCA_REMAP_OFFSET_2))
/** \brief ECC, Externally clocked SPI interrupt masked */
#define REG_SCB5_INTR_SPI_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASKED*)(0x43800ECCu + PPCA_REMAP_OFFSET_2))
/** \brief F00, Master interrupt request */
#define REG_SCB5_INTR_M                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M*)(0x43800F00u + PPCA_REMAP_OFFSET_2))
/** \brief F04, Master interrupt set request */
#define REG_SCB5_INTR_M_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_SET*)(0x43800F04u + PPCA_REMAP_OFFSET_2))
/** \brief F08, Master interrupt mask */
#define REG_SCB5_INTR_M_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASK*)(0x43800F08u + PPCA_REMAP_OFFSET_2))
/** \brief F0C, Master interrupt masked request */
#define REG_SCB5_INTR_M_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASKED*)(0x43800F0Cu + PPCA_REMAP_OFFSET_2))
/** \brief F40, Slave interrupt request */
#define REG_SCB5_INTR_S                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S*)(0x43800F40u + PPCA_REMAP_OFFSET_2))
/** \brief F44, Slave interrupt set request */
#define REG_SCB5_INTR_S_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_SET*)(0x43800F44u + PPCA_REMAP_OFFSET_2))
/** \brief F48, Slave interrupt mask */
#define REG_SCB5_INTR_S_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASK*)(0x43800F48u + PPCA_REMAP_OFFSET_2))
/** \brief F4C, Slave interrupt masked request */
#define REG_SCB5_INTR_S_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASKED*)(0x43800F4Cu + PPCA_REMAP_OFFSET_2))
/** \brief F80, Transmitter interrupt request */
#define REG_SCB5_INTR_TX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX*)(0x43800F80u + PPCA_REMAP_OFFSET_2))
/** \brief F84, Transmitter interrupt set request */
#define REG_SCB5_INTR_TX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_SET*)(0x43800F84u + PPCA_REMAP_OFFSET_2))
/** \brief F88, Transmitter interrupt mask */
#define REG_SCB5_INTR_TX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASK*)(0x43800F88u + PPCA_REMAP_OFFSET_2))
/** \brief F8C, Transmitter interrupt masked request */
#define REG_SCB5_INTR_TX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASKED*)(0x43800F8Cu + PPCA_REMAP_OFFSET_2))
/** \brief FC0, Receiver interrupt request */
#define REG_SCB5_INTR_RX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX*)(0x43800FC0u + PPCA_REMAP_OFFSET_2))
/** \brief FC4, Receiver interrupt set request */
#define REG_SCB5_INTR_RX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_SET*)(0x43800FC4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Receiver interrupt mask */
#define REG_SCB5_INTR_RX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASK*)(0x43800FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Receiver interrupt masked request */
#define REG_SCB5_INTR_RX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASKED*)(0x43800FCCu + PPCA_REMAP_OFFSET_2))
/** \brief FD0, Receiver interrupt request */
#define REG_SCB5_INTR_TGS                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS*)(0x43800FD0u + PPCA_REMAP_OFFSET_2))
/** \brief FD4, Receiver interrupt set request */
#define REG_SCB5_INTR_TGS_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_SET*)(0x43800FD4u + PPCA_REMAP_OFFSET_2))
/** \brief FD8, Receiver interrupt mask */
#define REG_SCB5_INTR_TGS_MASK                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASK*)(0x43800FD8u + PPCA_REMAP_OFFSET_2))
/** \brief FDC, Receiver interrupt masked request */
#define REG_SCB5_INTR_TGS_MASKED                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASKED*)(0x43800FDCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Generic control */
#define REG_SCB6_CTRL                           /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CTRL*)(0x43810000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Generic status */
#define REG_SCB6_STATUS                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_STATUS*)(0x43810004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Command/response control */
#define REG_SCB6_CMD_RESP_CTRL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_CTRL*)(0x43810008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Command/response status */
#define REG_SCB6_CMD_RESP_STATUS                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_CMD_RESP_STATUS*)(0x4381000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, SPI control */
#define REG_SCB6_SPI_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_CTRL*)(0x43810020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, SPI status */
#define REG_SCB6_SPI_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_STATUS*)(0x43810024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, SPI transmitter control */
#define REG_SCB6_SPI_TX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_TX_CTRL*)(0x43810028u + PPCA_REMAP_OFFSET_2))
/** \brief 2C, SPI receiver control */
#define REG_SCB6_SPI_RX_CTRL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_SPI_RX_CTRL*)(0x4381002Cu + PPCA_REMAP_OFFSET_2))
/** \brief 40, UART control */
#define REG_SCB6_UART_CTRL                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_CTRL*)(0x43810040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, UART transmitter control */
#define REG_SCB6_UART_TX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_TX_CTRL*)(0x43810044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, UART receiver control */
#define REG_SCB6_UART_RX_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_CTRL*)(0x43810048u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, UART receiver status */
#define REG_SCB6_UART_RX_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_RX_STATUS*)(0x4381004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 50, UART flow control */
#define REG_SCB6_UART_FLOW_CTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_UART_FLOW_CTRL*)(0x43810050u + PPCA_REMAP_OFFSET_2))
/** \brief 60, I2C control */
#define REG_SCB6_I2C_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CTRL*)(0x43810060u + PPCA_REMAP_OFFSET_2))
/** \brief 64, I2C status */
#define REG_SCB6_I2C_STATUS                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STATUS*)(0x43810064u + PPCA_REMAP_OFFSET_2))
/** \brief 68, I2C master command */
#define REG_SCB6_I2C_M_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_M_CMD*)(0x43810068u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, I2C slave command */
#define REG_SCB6_I2C_S_CMD                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_S_CMD*)(0x4381006Cu + PPCA_REMAP_OFFSET_2))
/** \brief 70, I2C configuration */
#define REG_SCB6_I2C_CFG                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_CFG*)(0x43810070u + PPCA_REMAP_OFFSET_2))
/** \brief 74, I2C stretch control */
#define REG_SCB6_I2C_STRETCH_CTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_CTRL*)(0x43810074u + PPCA_REMAP_OFFSET_2))
/** \brief 78, I2C stretch status */
#define REG_SCB6_I2C_STRETCH_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_I2C_STRETCH_STATUS*)(0x43810078u + PPCA_REMAP_OFFSET_2))
/** \brief 120, Timeout generation support 0 control */
#define REG_SCB6_TGS_CTL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL0*)(0x43810120u + PPCA_REMAP_OFFSET_2))
/** \brief 124, Timeout generation support 0 counter */
#define REG_SCB6_TGS_CNT0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT0*)(0x43810124u + PPCA_REMAP_OFFSET_2))
/** \brief 128, Timeout generation support 0 reload */
#define REG_SCB6_TGS_REL0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL0*)(0x43810128u + PPCA_REMAP_OFFSET_2))
/** \brief 12C, Timeout generation support 1 control */
#define REG_SCB6_TGS_CTL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL1*)(0x4381012Cu + PPCA_REMAP_OFFSET_2))
/** \brief 130, Timeout generation support 1 counter */
#define REG_SCB6_TGS_CNT1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT1*)(0x43810130u + PPCA_REMAP_OFFSET_2))
/** \brief 134, Timeout generation support 1 reload */
#define REG_SCB6_TGS_REL1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL1*)(0x43810134u + PPCA_REMAP_OFFSET_2))
/** \brief 138, Timeout generation support 2 control */
#define REG_SCB6_TGS_CTL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CTL2*)(0x43810138u + PPCA_REMAP_OFFSET_2))
/** \brief 13C, Timeout generation support 2 counter */
#define REG_SCB6_TGS_CNT2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_CNT2*)(0x4381013Cu + PPCA_REMAP_OFFSET_2))
/** \brief 140, Timeout generation support 2 reload */
#define REG_SCB6_TGS_REL2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TGS_REL2*)(0x43810140u + PPCA_REMAP_OFFSET_2))
/** \brief 200, Transmitter control */
#define REG_SCB6_TX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_CTRL*)(0x43810200u + PPCA_REMAP_OFFSET_2))
/** \brief 204, Transmitter FIFO control */
#define REG_SCB6_TX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_CTRL*)(0x43810204u + PPCA_REMAP_OFFSET_2))
/** \brief 208, Transmitter FIFO status */
#define REG_SCB6_TX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_STATUS*)(0x43810208u + PPCA_REMAP_OFFSET_2))
/** \brief 240, Transmitter FIFO write */
#define REG_SCB6_TX_FIFO_WR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_TX_FIFO_WR*)(0x43810240u + PPCA_REMAP_OFFSET_2))
/** \brief 300, Receiver control */
#define REG_SCB6_RX_CTRL                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_CTRL*)(0x43810300u + PPCA_REMAP_OFFSET_2))
/** \brief 304, Receiver FIFO control */
#define REG_SCB6_RX_FIFO_CTRL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_CTRL*)(0x43810304u + PPCA_REMAP_OFFSET_2))
/** \brief 308, Receiver FIFO status */
#define REG_SCB6_RX_FIFO_STATUS                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_STATUS*)(0x43810308u + PPCA_REMAP_OFFSET_2))
/** \brief 310, Slave address and mask */
#define REG_SCB6_RX_MATCH                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH*)(0x43810310u + PPCA_REMAP_OFFSET_2))
/** \brief 314, Slave address and mask */
#define REG_SCB6_RX_MATCH1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH1*)(0x43810314u + PPCA_REMAP_OFFSET_2))
/** \brief 318, Slave address and mask */
#define REG_SCB6_RX_MATCH2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_MATCH2*)(0x43810318u + PPCA_REMAP_OFFSET_2))
/** \brief 340, Receiver FIFO read */
#define REG_SCB6_RX_FIFO_RD                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD*)(0x43810340u + PPCA_REMAP_OFFSET_2))
/** \brief 344, Receiver FIFO read silent */
#define REG_SCB6_RX_FIFO_RD_SILENT              /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_RX_FIFO_RD_SILENT*)(0x43810344u + PPCA_REMAP_OFFSET_2))
/** \brief 400, Memory buffer */
#define REG_SCB6_EZ_DATA0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810400u + PPCA_REMAP_OFFSET_2))
/** \brief 404, Memory buffer */
#define REG_SCB6_EZ_DATA1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810404u + PPCA_REMAP_OFFSET_2))
/** \brief 408, Memory buffer */
#define REG_SCB6_EZ_DATA2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810408u + PPCA_REMAP_OFFSET_2))
/** \brief 40C, Memory buffer */
#define REG_SCB6_EZ_DATA3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381040Cu + PPCA_REMAP_OFFSET_2))
/** \brief 410, Memory buffer */
#define REG_SCB6_EZ_DATA4                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810410u + PPCA_REMAP_OFFSET_2))
/** \brief 414, Memory buffer */
#define REG_SCB6_EZ_DATA5                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810414u + PPCA_REMAP_OFFSET_2))
/** \brief 418, Memory buffer */
#define REG_SCB6_EZ_DATA6                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810418u + PPCA_REMAP_OFFSET_2))
/** \brief 41C, Memory buffer */
#define REG_SCB6_EZ_DATA7                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381041Cu + PPCA_REMAP_OFFSET_2))
/** \brief 420, Memory buffer */
#define REG_SCB6_EZ_DATA8                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810420u + PPCA_REMAP_OFFSET_2))
/** \brief 424, Memory buffer */
#define REG_SCB6_EZ_DATA9                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810424u + PPCA_REMAP_OFFSET_2))
/** \brief 428, Memory buffer */
#define REG_SCB6_EZ_DATA10                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810428u + PPCA_REMAP_OFFSET_2))
/** \brief 42C, Memory buffer */
#define REG_SCB6_EZ_DATA11                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381042Cu + PPCA_REMAP_OFFSET_2))
/** \brief 430, Memory buffer */
#define REG_SCB6_EZ_DATA12                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810430u + PPCA_REMAP_OFFSET_2))
/** \brief 434, Memory buffer */
#define REG_SCB6_EZ_DATA13                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810434u + PPCA_REMAP_OFFSET_2))
/** \brief 438, Memory buffer */
#define REG_SCB6_EZ_DATA14                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810438u + PPCA_REMAP_OFFSET_2))
/** \brief 43C, Memory buffer */
#define REG_SCB6_EZ_DATA15                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381043Cu + PPCA_REMAP_OFFSET_2))
/** \brief 440, Memory buffer */
#define REG_SCB6_EZ_DATA16                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810440u + PPCA_REMAP_OFFSET_2))
/** \brief 444, Memory buffer */
#define REG_SCB6_EZ_DATA17                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810444u + PPCA_REMAP_OFFSET_2))
/** \brief 448, Memory buffer */
#define REG_SCB6_EZ_DATA18                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810448u + PPCA_REMAP_OFFSET_2))
/** \brief 44C, Memory buffer */
#define REG_SCB6_EZ_DATA19                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381044Cu + PPCA_REMAP_OFFSET_2))
/** \brief 450, Memory buffer */
#define REG_SCB6_EZ_DATA20                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810450u + PPCA_REMAP_OFFSET_2))
/** \brief 454, Memory buffer */
#define REG_SCB6_EZ_DATA21                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810454u + PPCA_REMAP_OFFSET_2))
/** \brief 458, Memory buffer */
#define REG_SCB6_EZ_DATA22                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810458u + PPCA_REMAP_OFFSET_2))
/** \brief 45C, Memory buffer */
#define REG_SCB6_EZ_DATA23                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381045Cu + PPCA_REMAP_OFFSET_2))
/** \brief 460, Memory buffer */
#define REG_SCB6_EZ_DATA24                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810460u + PPCA_REMAP_OFFSET_2))
/** \brief 464, Memory buffer */
#define REG_SCB6_EZ_DATA25                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810464u + PPCA_REMAP_OFFSET_2))
/** \brief 468, Memory buffer */
#define REG_SCB6_EZ_DATA26                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810468u + PPCA_REMAP_OFFSET_2))
/** \brief 46C, Memory buffer */
#define REG_SCB6_EZ_DATA27                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381046Cu + PPCA_REMAP_OFFSET_2))
/** \brief 470, Memory buffer */
#define REG_SCB6_EZ_DATA28                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810470u + PPCA_REMAP_OFFSET_2))
/** \brief 474, Memory buffer */
#define REG_SCB6_EZ_DATA29                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810474u + PPCA_REMAP_OFFSET_2))
/** \brief 478, Memory buffer */
#define REG_SCB6_EZ_DATA30                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810478u + PPCA_REMAP_OFFSET_2))
/** \brief 47C, Memory buffer */
#define REG_SCB6_EZ_DATA31                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381047Cu + PPCA_REMAP_OFFSET_2))
/** \brief 480, Memory buffer */
#define REG_SCB6_EZ_DATA32                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810480u + PPCA_REMAP_OFFSET_2))
/** \brief 484, Memory buffer */
#define REG_SCB6_EZ_DATA33                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810484u + PPCA_REMAP_OFFSET_2))
/** \brief 488, Memory buffer */
#define REG_SCB6_EZ_DATA34                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810488u + PPCA_REMAP_OFFSET_2))
/** \brief 48C, Memory buffer */
#define REG_SCB6_EZ_DATA35                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381048Cu + PPCA_REMAP_OFFSET_2))
/** \brief 490, Memory buffer */
#define REG_SCB6_EZ_DATA36                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810490u + PPCA_REMAP_OFFSET_2))
/** \brief 494, Memory buffer */
#define REG_SCB6_EZ_DATA37                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810494u + PPCA_REMAP_OFFSET_2))
/** \brief 498, Memory buffer */
#define REG_SCB6_EZ_DATA38                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810498u + PPCA_REMAP_OFFSET_2))
/** \brief 49C, Memory buffer */
#define REG_SCB6_EZ_DATA39                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381049Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4A0, Memory buffer */
#define REG_SCB6_EZ_DATA40                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104A0u + PPCA_REMAP_OFFSET_2))
/** \brief 4A4, Memory buffer */
#define REG_SCB6_EZ_DATA41                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104A4u + PPCA_REMAP_OFFSET_2))
/** \brief 4A8, Memory buffer */
#define REG_SCB6_EZ_DATA42                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104A8u + PPCA_REMAP_OFFSET_2))
/** \brief 4AC, Memory buffer */
#define REG_SCB6_EZ_DATA43                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104ACu + PPCA_REMAP_OFFSET_2))
/** \brief 4B0, Memory buffer */
#define REG_SCB6_EZ_DATA44                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104B0u + PPCA_REMAP_OFFSET_2))
/** \brief 4B4, Memory buffer */
#define REG_SCB6_EZ_DATA45                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104B4u + PPCA_REMAP_OFFSET_2))
/** \brief 4B8, Memory buffer */
#define REG_SCB6_EZ_DATA46                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104B8u + PPCA_REMAP_OFFSET_2))
/** \brief 4BC, Memory buffer */
#define REG_SCB6_EZ_DATA47                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104BCu + PPCA_REMAP_OFFSET_2))
/** \brief 4C0, Memory buffer */
#define REG_SCB6_EZ_DATA48                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4C4, Memory buffer */
#define REG_SCB6_EZ_DATA49                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104C4u + PPCA_REMAP_OFFSET_2))
/** \brief 4C8, Memory buffer */
#define REG_SCB6_EZ_DATA50                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4CC, Memory buffer */
#define REG_SCB6_EZ_DATA51                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104CCu + PPCA_REMAP_OFFSET_2))
/** \brief 4D0, Memory buffer */
#define REG_SCB6_EZ_DATA52                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104D0u + PPCA_REMAP_OFFSET_2))
/** \brief 4D4, Memory buffer */
#define REG_SCB6_EZ_DATA53                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104D4u + PPCA_REMAP_OFFSET_2))
/** \brief 4D8, Memory buffer */
#define REG_SCB6_EZ_DATA54                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104D8u + PPCA_REMAP_OFFSET_2))
/** \brief 4DC, Memory buffer */
#define REG_SCB6_EZ_DATA55                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104DCu + PPCA_REMAP_OFFSET_2))
/** \brief 4E0, Memory buffer */
#define REG_SCB6_EZ_DATA56                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104E0u + PPCA_REMAP_OFFSET_2))
/** \brief 4E4, Memory buffer */
#define REG_SCB6_EZ_DATA57                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104E4u + PPCA_REMAP_OFFSET_2))
/** \brief 4E8, Memory buffer */
#define REG_SCB6_EZ_DATA58                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104E8u + PPCA_REMAP_OFFSET_2))
/** \brief 4EC, Memory buffer */
#define REG_SCB6_EZ_DATA59                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104ECu + PPCA_REMAP_OFFSET_2))
/** \brief 4F0, Memory buffer */
#define REG_SCB6_EZ_DATA60                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104F0u + PPCA_REMAP_OFFSET_2))
/** \brief 4F4, Memory buffer */
#define REG_SCB6_EZ_DATA61                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104F4u + PPCA_REMAP_OFFSET_2))
/** \brief 4F8, Memory buffer */
#define REG_SCB6_EZ_DATA62                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104F8u + PPCA_REMAP_OFFSET_2))
/** \brief 4FC, Memory buffer */
#define REG_SCB6_EZ_DATA63                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438104FCu + PPCA_REMAP_OFFSET_2))
/** \brief 500, Memory buffer */
#define REG_SCB6_EZ_DATA64                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810500u + PPCA_REMAP_OFFSET_2))
/** \brief 504, Memory buffer */
#define REG_SCB6_EZ_DATA65                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810504u + PPCA_REMAP_OFFSET_2))
/** \brief 508, Memory buffer */
#define REG_SCB6_EZ_DATA66                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810508u + PPCA_REMAP_OFFSET_2))
/** \brief 50C, Memory buffer */
#define REG_SCB6_EZ_DATA67                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381050Cu + PPCA_REMAP_OFFSET_2))
/** \brief 510, Memory buffer */
#define REG_SCB6_EZ_DATA68                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810510u + PPCA_REMAP_OFFSET_2))
/** \brief 514, Memory buffer */
#define REG_SCB6_EZ_DATA69                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810514u + PPCA_REMAP_OFFSET_2))
/** \brief 518, Memory buffer */
#define REG_SCB6_EZ_DATA70                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810518u + PPCA_REMAP_OFFSET_2))
/** \brief 51C, Memory buffer */
#define REG_SCB6_EZ_DATA71                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381051Cu + PPCA_REMAP_OFFSET_2))
/** \brief 520, Memory buffer */
#define REG_SCB6_EZ_DATA72                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810520u + PPCA_REMAP_OFFSET_2))
/** \brief 524, Memory buffer */
#define REG_SCB6_EZ_DATA73                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810524u + PPCA_REMAP_OFFSET_2))
/** \brief 528, Memory buffer */
#define REG_SCB6_EZ_DATA74                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810528u + PPCA_REMAP_OFFSET_2))
/** \brief 52C, Memory buffer */
#define REG_SCB6_EZ_DATA75                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381052Cu + PPCA_REMAP_OFFSET_2))
/** \brief 530, Memory buffer */
#define REG_SCB6_EZ_DATA76                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810530u + PPCA_REMAP_OFFSET_2))
/** \brief 534, Memory buffer */
#define REG_SCB6_EZ_DATA77                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810534u + PPCA_REMAP_OFFSET_2))
/** \brief 538, Memory buffer */
#define REG_SCB6_EZ_DATA78                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810538u + PPCA_REMAP_OFFSET_2))
/** \brief 53C, Memory buffer */
#define REG_SCB6_EZ_DATA79                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381053Cu + PPCA_REMAP_OFFSET_2))
/** \brief 540, Memory buffer */
#define REG_SCB6_EZ_DATA80                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810540u + PPCA_REMAP_OFFSET_2))
/** \brief 544, Memory buffer */
#define REG_SCB6_EZ_DATA81                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810544u + PPCA_REMAP_OFFSET_2))
/** \brief 548, Memory buffer */
#define REG_SCB6_EZ_DATA82                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810548u + PPCA_REMAP_OFFSET_2))
/** \brief 54C, Memory buffer */
#define REG_SCB6_EZ_DATA83                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381054Cu + PPCA_REMAP_OFFSET_2))
/** \brief 550, Memory buffer */
#define REG_SCB6_EZ_DATA84                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810550u + PPCA_REMAP_OFFSET_2))
/** \brief 554, Memory buffer */
#define REG_SCB6_EZ_DATA85                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810554u + PPCA_REMAP_OFFSET_2))
/** \brief 558, Memory buffer */
#define REG_SCB6_EZ_DATA86                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810558u + PPCA_REMAP_OFFSET_2))
/** \brief 55C, Memory buffer */
#define REG_SCB6_EZ_DATA87                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381055Cu + PPCA_REMAP_OFFSET_2))
/** \brief 560, Memory buffer */
#define REG_SCB6_EZ_DATA88                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810560u + PPCA_REMAP_OFFSET_2))
/** \brief 564, Memory buffer */
#define REG_SCB6_EZ_DATA89                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810564u + PPCA_REMAP_OFFSET_2))
/** \brief 568, Memory buffer */
#define REG_SCB6_EZ_DATA90                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810568u + PPCA_REMAP_OFFSET_2))
/** \brief 56C, Memory buffer */
#define REG_SCB6_EZ_DATA91                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381056Cu + PPCA_REMAP_OFFSET_2))
/** \brief 570, Memory buffer */
#define REG_SCB6_EZ_DATA92                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810570u + PPCA_REMAP_OFFSET_2))
/** \brief 574, Memory buffer */
#define REG_SCB6_EZ_DATA93                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810574u + PPCA_REMAP_OFFSET_2))
/** \brief 578, Memory buffer */
#define REG_SCB6_EZ_DATA94                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810578u + PPCA_REMAP_OFFSET_2))
/** \brief 57C, Memory buffer */
#define REG_SCB6_EZ_DATA95                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381057Cu + PPCA_REMAP_OFFSET_2))
/** \brief 580, Memory buffer */
#define REG_SCB6_EZ_DATA96                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810580u + PPCA_REMAP_OFFSET_2))
/** \brief 584, Memory buffer */
#define REG_SCB6_EZ_DATA97                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810584u + PPCA_REMAP_OFFSET_2))
/** \brief 588, Memory buffer */
#define REG_SCB6_EZ_DATA98                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810588u + PPCA_REMAP_OFFSET_2))
/** \brief 58C, Memory buffer */
#define REG_SCB6_EZ_DATA99                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381058Cu + PPCA_REMAP_OFFSET_2))
/** \brief 590, Memory buffer */
#define REG_SCB6_EZ_DATA100                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810590u + PPCA_REMAP_OFFSET_2))
/** \brief 594, Memory buffer */
#define REG_SCB6_EZ_DATA101                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810594u + PPCA_REMAP_OFFSET_2))
/** \brief 598, Memory buffer */
#define REG_SCB6_EZ_DATA102                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810598u + PPCA_REMAP_OFFSET_2))
/** \brief 59C, Memory buffer */
#define REG_SCB6_EZ_DATA103                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381059Cu + PPCA_REMAP_OFFSET_2))
/** \brief 5A0, Memory buffer */
#define REG_SCB6_EZ_DATA104                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105A0u + PPCA_REMAP_OFFSET_2))
/** \brief 5A4, Memory buffer */
#define REG_SCB6_EZ_DATA105                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105A4u + PPCA_REMAP_OFFSET_2))
/** \brief 5A8, Memory buffer */
#define REG_SCB6_EZ_DATA106                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105A8u + PPCA_REMAP_OFFSET_2))
/** \brief 5AC, Memory buffer */
#define REG_SCB6_EZ_DATA107                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105ACu + PPCA_REMAP_OFFSET_2))
/** \brief 5B0, Memory buffer */
#define REG_SCB6_EZ_DATA108                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105B0u + PPCA_REMAP_OFFSET_2))
/** \brief 5B4, Memory buffer */
#define REG_SCB6_EZ_DATA109                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105B4u + PPCA_REMAP_OFFSET_2))
/** \brief 5B8, Memory buffer */
#define REG_SCB6_EZ_DATA110                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105B8u + PPCA_REMAP_OFFSET_2))
/** \brief 5BC, Memory buffer */
#define REG_SCB6_EZ_DATA111                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105BCu + PPCA_REMAP_OFFSET_2))
/** \brief 5C0, Memory buffer */
#define REG_SCB6_EZ_DATA112                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105C0u + PPCA_REMAP_OFFSET_2))
/** \brief 5C4, Memory buffer */
#define REG_SCB6_EZ_DATA113                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105C4u + PPCA_REMAP_OFFSET_2))
/** \brief 5C8, Memory buffer */
#define REG_SCB6_EZ_DATA114                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105C8u + PPCA_REMAP_OFFSET_2))
/** \brief 5CC, Memory buffer */
#define REG_SCB6_EZ_DATA115                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105CCu + PPCA_REMAP_OFFSET_2))
/** \brief 5D0, Memory buffer */
#define REG_SCB6_EZ_DATA116                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105D0u + PPCA_REMAP_OFFSET_2))
/** \brief 5D4, Memory buffer */
#define REG_SCB6_EZ_DATA117                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105D4u + PPCA_REMAP_OFFSET_2))
/** \brief 5D8, Memory buffer */
#define REG_SCB6_EZ_DATA118                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105D8u + PPCA_REMAP_OFFSET_2))
/** \brief 5DC, Memory buffer */
#define REG_SCB6_EZ_DATA119                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105DCu + PPCA_REMAP_OFFSET_2))
/** \brief 5E0, Memory buffer */
#define REG_SCB6_EZ_DATA120                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105E0u + PPCA_REMAP_OFFSET_2))
/** \brief 5E4, Memory buffer */
#define REG_SCB6_EZ_DATA121                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105E4u + PPCA_REMAP_OFFSET_2))
/** \brief 5E8, Memory buffer */
#define REG_SCB6_EZ_DATA122                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105E8u + PPCA_REMAP_OFFSET_2))
/** \brief 5EC, Memory buffer */
#define REG_SCB6_EZ_DATA123                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105ECu + PPCA_REMAP_OFFSET_2))
/** \brief 5F0, Memory buffer */
#define REG_SCB6_EZ_DATA124                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105F0u + PPCA_REMAP_OFFSET_2))
/** \brief 5F4, Memory buffer */
#define REG_SCB6_EZ_DATA125                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105F4u + PPCA_REMAP_OFFSET_2))
/** \brief 5F8, Memory buffer */
#define REG_SCB6_EZ_DATA126                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105F8u + PPCA_REMAP_OFFSET_2))
/** \brief 5FC, Memory buffer */
#define REG_SCB6_EZ_DATA127                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438105FCu + PPCA_REMAP_OFFSET_2))
/** \brief 600, Memory buffer */
#define REG_SCB6_EZ_DATA128                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810600u + PPCA_REMAP_OFFSET_2))
/** \brief 604, Memory buffer */
#define REG_SCB6_EZ_DATA129                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810604u + PPCA_REMAP_OFFSET_2))
/** \brief 608, Memory buffer */
#define REG_SCB6_EZ_DATA130                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810608u + PPCA_REMAP_OFFSET_2))
/** \brief 60C, Memory buffer */
#define REG_SCB6_EZ_DATA131                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381060Cu + PPCA_REMAP_OFFSET_2))
/** \brief 610, Memory buffer */
#define REG_SCB6_EZ_DATA132                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810610u + PPCA_REMAP_OFFSET_2))
/** \brief 614, Memory buffer */
#define REG_SCB6_EZ_DATA133                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810614u + PPCA_REMAP_OFFSET_2))
/** \brief 618, Memory buffer */
#define REG_SCB6_EZ_DATA134                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810618u + PPCA_REMAP_OFFSET_2))
/** \brief 61C, Memory buffer */
#define REG_SCB6_EZ_DATA135                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381061Cu + PPCA_REMAP_OFFSET_2))
/** \brief 620, Memory buffer */
#define REG_SCB6_EZ_DATA136                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810620u + PPCA_REMAP_OFFSET_2))
/** \brief 624, Memory buffer */
#define REG_SCB6_EZ_DATA137                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810624u + PPCA_REMAP_OFFSET_2))
/** \brief 628, Memory buffer */
#define REG_SCB6_EZ_DATA138                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810628u + PPCA_REMAP_OFFSET_2))
/** \brief 62C, Memory buffer */
#define REG_SCB6_EZ_DATA139                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381062Cu + PPCA_REMAP_OFFSET_2))
/** \brief 630, Memory buffer */
#define REG_SCB6_EZ_DATA140                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810630u + PPCA_REMAP_OFFSET_2))
/** \brief 634, Memory buffer */
#define REG_SCB6_EZ_DATA141                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810634u + PPCA_REMAP_OFFSET_2))
/** \brief 638, Memory buffer */
#define REG_SCB6_EZ_DATA142                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810638u + PPCA_REMAP_OFFSET_2))
/** \brief 63C, Memory buffer */
#define REG_SCB6_EZ_DATA143                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381063Cu + PPCA_REMAP_OFFSET_2))
/** \brief 640, Memory buffer */
#define REG_SCB6_EZ_DATA144                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810640u + PPCA_REMAP_OFFSET_2))
/** \brief 644, Memory buffer */
#define REG_SCB6_EZ_DATA145                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810644u + PPCA_REMAP_OFFSET_2))
/** \brief 648, Memory buffer */
#define REG_SCB6_EZ_DATA146                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810648u + PPCA_REMAP_OFFSET_2))
/** \brief 64C, Memory buffer */
#define REG_SCB6_EZ_DATA147                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381064Cu + PPCA_REMAP_OFFSET_2))
/** \brief 650, Memory buffer */
#define REG_SCB6_EZ_DATA148                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810650u + PPCA_REMAP_OFFSET_2))
/** \brief 654, Memory buffer */
#define REG_SCB6_EZ_DATA149                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810654u + PPCA_REMAP_OFFSET_2))
/** \brief 658, Memory buffer */
#define REG_SCB6_EZ_DATA150                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810658u + PPCA_REMAP_OFFSET_2))
/** \brief 65C, Memory buffer */
#define REG_SCB6_EZ_DATA151                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381065Cu + PPCA_REMAP_OFFSET_2))
/** \brief 660, Memory buffer */
#define REG_SCB6_EZ_DATA152                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810660u + PPCA_REMAP_OFFSET_2))
/** \brief 664, Memory buffer */
#define REG_SCB6_EZ_DATA153                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810664u + PPCA_REMAP_OFFSET_2))
/** \brief 668, Memory buffer */
#define REG_SCB6_EZ_DATA154                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810668u + PPCA_REMAP_OFFSET_2))
/** \brief 66C, Memory buffer */
#define REG_SCB6_EZ_DATA155                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381066Cu + PPCA_REMAP_OFFSET_2))
/** \brief 670, Memory buffer */
#define REG_SCB6_EZ_DATA156                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810670u + PPCA_REMAP_OFFSET_2))
/** \brief 674, Memory buffer */
#define REG_SCB6_EZ_DATA157                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810674u + PPCA_REMAP_OFFSET_2))
/** \brief 678, Memory buffer */
#define REG_SCB6_EZ_DATA158                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810678u + PPCA_REMAP_OFFSET_2))
/** \brief 67C, Memory buffer */
#define REG_SCB6_EZ_DATA159                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381067Cu + PPCA_REMAP_OFFSET_2))
/** \brief 680, Memory buffer */
#define REG_SCB6_EZ_DATA160                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810680u + PPCA_REMAP_OFFSET_2))
/** \brief 684, Memory buffer */
#define REG_SCB6_EZ_DATA161                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810684u + PPCA_REMAP_OFFSET_2))
/** \brief 688, Memory buffer */
#define REG_SCB6_EZ_DATA162                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810688u + PPCA_REMAP_OFFSET_2))
/** \brief 68C, Memory buffer */
#define REG_SCB6_EZ_DATA163                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381068Cu + PPCA_REMAP_OFFSET_2))
/** \brief 690, Memory buffer */
#define REG_SCB6_EZ_DATA164                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810690u + PPCA_REMAP_OFFSET_2))
/** \brief 694, Memory buffer */
#define REG_SCB6_EZ_DATA165                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810694u + PPCA_REMAP_OFFSET_2))
/** \brief 698, Memory buffer */
#define REG_SCB6_EZ_DATA166                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810698u + PPCA_REMAP_OFFSET_2))
/** \brief 69C, Memory buffer */
#define REG_SCB6_EZ_DATA167                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381069Cu + PPCA_REMAP_OFFSET_2))
/** \brief 6A0, Memory buffer */
#define REG_SCB6_EZ_DATA168                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106A0u + PPCA_REMAP_OFFSET_2))
/** \brief 6A4, Memory buffer */
#define REG_SCB6_EZ_DATA169                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106A4u + PPCA_REMAP_OFFSET_2))
/** \brief 6A8, Memory buffer */
#define REG_SCB6_EZ_DATA170                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106A8u + PPCA_REMAP_OFFSET_2))
/** \brief 6AC, Memory buffer */
#define REG_SCB6_EZ_DATA171                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106ACu + PPCA_REMAP_OFFSET_2))
/** \brief 6B0, Memory buffer */
#define REG_SCB6_EZ_DATA172                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106B0u + PPCA_REMAP_OFFSET_2))
/** \brief 6B4, Memory buffer */
#define REG_SCB6_EZ_DATA173                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106B4u + PPCA_REMAP_OFFSET_2))
/** \brief 6B8, Memory buffer */
#define REG_SCB6_EZ_DATA174                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106B8u + PPCA_REMAP_OFFSET_2))
/** \brief 6BC, Memory buffer */
#define REG_SCB6_EZ_DATA175                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106BCu + PPCA_REMAP_OFFSET_2))
/** \brief 6C0, Memory buffer */
#define REG_SCB6_EZ_DATA176                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106C0u + PPCA_REMAP_OFFSET_2))
/** \brief 6C4, Memory buffer */
#define REG_SCB6_EZ_DATA177                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106C4u + PPCA_REMAP_OFFSET_2))
/** \brief 6C8, Memory buffer */
#define REG_SCB6_EZ_DATA178                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106C8u + PPCA_REMAP_OFFSET_2))
/** \brief 6CC, Memory buffer */
#define REG_SCB6_EZ_DATA179                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106CCu + PPCA_REMAP_OFFSET_2))
/** \brief 6D0, Memory buffer */
#define REG_SCB6_EZ_DATA180                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106D0u + PPCA_REMAP_OFFSET_2))
/** \brief 6D4, Memory buffer */
#define REG_SCB6_EZ_DATA181                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106D4u + PPCA_REMAP_OFFSET_2))
/** \brief 6D8, Memory buffer */
#define REG_SCB6_EZ_DATA182                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106D8u + PPCA_REMAP_OFFSET_2))
/** \brief 6DC, Memory buffer */
#define REG_SCB6_EZ_DATA183                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106DCu + PPCA_REMAP_OFFSET_2))
/** \brief 6E0, Memory buffer */
#define REG_SCB6_EZ_DATA184                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106E0u + PPCA_REMAP_OFFSET_2))
/** \brief 6E4, Memory buffer */
#define REG_SCB6_EZ_DATA185                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106E4u + PPCA_REMAP_OFFSET_2))
/** \brief 6E8, Memory buffer */
#define REG_SCB6_EZ_DATA186                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6EC, Memory buffer */
#define REG_SCB6_EZ_DATA187                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106ECu + PPCA_REMAP_OFFSET_2))
/** \brief 6F0, Memory buffer */
#define REG_SCB6_EZ_DATA188                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106F0u + PPCA_REMAP_OFFSET_2))
/** \brief 6F4, Memory buffer */
#define REG_SCB6_EZ_DATA189                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106F4u + PPCA_REMAP_OFFSET_2))
/** \brief 6F8, Memory buffer */
#define REG_SCB6_EZ_DATA190                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106F8u + PPCA_REMAP_OFFSET_2))
/** \brief 6FC, Memory buffer */
#define REG_SCB6_EZ_DATA191                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438106FCu + PPCA_REMAP_OFFSET_2))
/** \brief 700, Memory buffer */
#define REG_SCB6_EZ_DATA192                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810700u + PPCA_REMAP_OFFSET_2))
/** \brief 704, Memory buffer */
#define REG_SCB6_EZ_DATA193                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810704u + PPCA_REMAP_OFFSET_2))
/** \brief 708, Memory buffer */
#define REG_SCB6_EZ_DATA194                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810708u + PPCA_REMAP_OFFSET_2))
/** \brief 70C, Memory buffer */
#define REG_SCB6_EZ_DATA195                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381070Cu + PPCA_REMAP_OFFSET_2))
/** \brief 710, Memory buffer */
#define REG_SCB6_EZ_DATA196                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810710u + PPCA_REMAP_OFFSET_2))
/** \brief 714, Memory buffer */
#define REG_SCB6_EZ_DATA197                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810714u + PPCA_REMAP_OFFSET_2))
/** \brief 718, Memory buffer */
#define REG_SCB6_EZ_DATA198                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810718u + PPCA_REMAP_OFFSET_2))
/** \brief 71C, Memory buffer */
#define REG_SCB6_EZ_DATA199                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381071Cu + PPCA_REMAP_OFFSET_2))
/** \brief 720, Memory buffer */
#define REG_SCB6_EZ_DATA200                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810720u + PPCA_REMAP_OFFSET_2))
/** \brief 724, Memory buffer */
#define REG_SCB6_EZ_DATA201                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810724u + PPCA_REMAP_OFFSET_2))
/** \brief 728, Memory buffer */
#define REG_SCB6_EZ_DATA202                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810728u + PPCA_REMAP_OFFSET_2))
/** \brief 72C, Memory buffer */
#define REG_SCB6_EZ_DATA203                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381072Cu + PPCA_REMAP_OFFSET_2))
/** \brief 730, Memory buffer */
#define REG_SCB6_EZ_DATA204                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810730u + PPCA_REMAP_OFFSET_2))
/** \brief 734, Memory buffer */
#define REG_SCB6_EZ_DATA205                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810734u + PPCA_REMAP_OFFSET_2))
/** \brief 738, Memory buffer */
#define REG_SCB6_EZ_DATA206                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810738u + PPCA_REMAP_OFFSET_2))
/** \brief 73C, Memory buffer */
#define REG_SCB6_EZ_DATA207                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381073Cu + PPCA_REMAP_OFFSET_2))
/** \brief 740, Memory buffer */
#define REG_SCB6_EZ_DATA208                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810740u + PPCA_REMAP_OFFSET_2))
/** \brief 744, Memory buffer */
#define REG_SCB6_EZ_DATA209                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810744u + PPCA_REMAP_OFFSET_2))
/** \brief 748, Memory buffer */
#define REG_SCB6_EZ_DATA210                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810748u + PPCA_REMAP_OFFSET_2))
/** \brief 74C, Memory buffer */
#define REG_SCB6_EZ_DATA211                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381074Cu + PPCA_REMAP_OFFSET_2))
/** \brief 750, Memory buffer */
#define REG_SCB6_EZ_DATA212                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810750u + PPCA_REMAP_OFFSET_2))
/** \brief 754, Memory buffer */
#define REG_SCB6_EZ_DATA213                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810754u + PPCA_REMAP_OFFSET_2))
/** \brief 758, Memory buffer */
#define REG_SCB6_EZ_DATA214                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810758u + PPCA_REMAP_OFFSET_2))
/** \brief 75C, Memory buffer */
#define REG_SCB6_EZ_DATA215                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381075Cu + PPCA_REMAP_OFFSET_2))
/** \brief 760, Memory buffer */
#define REG_SCB6_EZ_DATA216                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810760u + PPCA_REMAP_OFFSET_2))
/** \brief 764, Memory buffer */
#define REG_SCB6_EZ_DATA217                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810764u + PPCA_REMAP_OFFSET_2))
/** \brief 768, Memory buffer */
#define REG_SCB6_EZ_DATA218                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810768u + PPCA_REMAP_OFFSET_2))
/** \brief 76C, Memory buffer */
#define REG_SCB6_EZ_DATA219                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381076Cu + PPCA_REMAP_OFFSET_2))
/** \brief 770, Memory buffer */
#define REG_SCB6_EZ_DATA220                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810770u + PPCA_REMAP_OFFSET_2))
/** \brief 774, Memory buffer */
#define REG_SCB6_EZ_DATA221                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810774u + PPCA_REMAP_OFFSET_2))
/** \brief 778, Memory buffer */
#define REG_SCB6_EZ_DATA222                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810778u + PPCA_REMAP_OFFSET_2))
/** \brief 77C, Memory buffer */
#define REG_SCB6_EZ_DATA223                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381077Cu + PPCA_REMAP_OFFSET_2))
/** \brief 780, Memory buffer */
#define REG_SCB6_EZ_DATA224                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810780u + PPCA_REMAP_OFFSET_2))
/** \brief 784, Memory buffer */
#define REG_SCB6_EZ_DATA225                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810784u + PPCA_REMAP_OFFSET_2))
/** \brief 788, Memory buffer */
#define REG_SCB6_EZ_DATA226                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810788u + PPCA_REMAP_OFFSET_2))
/** \brief 78C, Memory buffer */
#define REG_SCB6_EZ_DATA227                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381078Cu + PPCA_REMAP_OFFSET_2))
/** \brief 790, Memory buffer */
#define REG_SCB6_EZ_DATA228                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810790u + PPCA_REMAP_OFFSET_2))
/** \brief 794, Memory buffer */
#define REG_SCB6_EZ_DATA229                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810794u + PPCA_REMAP_OFFSET_2))
/** \brief 798, Memory buffer */
#define REG_SCB6_EZ_DATA230                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x43810798u + PPCA_REMAP_OFFSET_2))
/** \brief 79C, Memory buffer */
#define REG_SCB6_EZ_DATA231                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x4381079Cu + PPCA_REMAP_OFFSET_2))
/** \brief 7A0, Memory buffer */
#define REG_SCB6_EZ_DATA232                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107A0u + PPCA_REMAP_OFFSET_2))
/** \brief 7A4, Memory buffer */
#define REG_SCB6_EZ_DATA233                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107A4u + PPCA_REMAP_OFFSET_2))
/** \brief 7A8, Memory buffer */
#define REG_SCB6_EZ_DATA234                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107A8u + PPCA_REMAP_OFFSET_2))
/** \brief 7AC, Memory buffer */
#define REG_SCB6_EZ_DATA235                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107ACu + PPCA_REMAP_OFFSET_2))
/** \brief 7B0, Memory buffer */
#define REG_SCB6_EZ_DATA236                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107B0u + PPCA_REMAP_OFFSET_2))
/** \brief 7B4, Memory buffer */
#define REG_SCB6_EZ_DATA237                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107B4u + PPCA_REMAP_OFFSET_2))
/** \brief 7B8, Memory buffer */
#define REG_SCB6_EZ_DATA238                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107B8u + PPCA_REMAP_OFFSET_2))
/** \brief 7BC, Memory buffer */
#define REG_SCB6_EZ_DATA239                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107BCu + PPCA_REMAP_OFFSET_2))
/** \brief 7C0, Memory buffer */
#define REG_SCB6_EZ_DATA240                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107C0u + PPCA_REMAP_OFFSET_2))
/** \brief 7C4, Memory buffer */
#define REG_SCB6_EZ_DATA241                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107C4u + PPCA_REMAP_OFFSET_2))
/** \brief 7C8, Memory buffer */
#define REG_SCB6_EZ_DATA242                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107C8u + PPCA_REMAP_OFFSET_2))
/** \brief 7CC, Memory buffer */
#define REG_SCB6_EZ_DATA243                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107CCu + PPCA_REMAP_OFFSET_2))
/** \brief 7D0, Memory buffer */
#define REG_SCB6_EZ_DATA244                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107D0u + PPCA_REMAP_OFFSET_2))
/** \brief 7D4, Memory buffer */
#define REG_SCB6_EZ_DATA245                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107D4u + PPCA_REMAP_OFFSET_2))
/** \brief 7D8, Memory buffer */
#define REG_SCB6_EZ_DATA246                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107D8u + PPCA_REMAP_OFFSET_2))
/** \brief 7DC, Memory buffer */
#define REG_SCB6_EZ_DATA247                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107DCu + PPCA_REMAP_OFFSET_2))
/** \brief 7E0, Memory buffer */
#define REG_SCB6_EZ_DATA248                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107E0u + PPCA_REMAP_OFFSET_2))
/** \brief 7E4, Memory buffer */
#define REG_SCB6_EZ_DATA249                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107E4u + PPCA_REMAP_OFFSET_2))
/** \brief 7E8, Memory buffer */
#define REG_SCB6_EZ_DATA250                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107E8u + PPCA_REMAP_OFFSET_2))
/** \brief 7EC, Memory buffer */
#define REG_SCB6_EZ_DATA251                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107ECu + PPCA_REMAP_OFFSET_2))
/** \brief 7F0, Memory buffer */
#define REG_SCB6_EZ_DATA252                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107F0u + PPCA_REMAP_OFFSET_2))
/** \brief 7F4, Memory buffer */
#define REG_SCB6_EZ_DATA253                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107F4u + PPCA_REMAP_OFFSET_2))
/** \brief 7F8, Memory buffer */
#define REG_SCB6_EZ_DATA254                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107F8u + PPCA_REMAP_OFFSET_2))
/** \brief 7FC, Memory buffer */
#define REG_SCB6_EZ_DATA255                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_EZ_DATA*)(0x438107FCu + PPCA_REMAP_OFFSET_2))
/** \brief E00, Active clocked interrupt signal */
#define REG_SCB6_INTR_CAUSE                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_CAUSE*)(0x43810E00u + PPCA_REMAP_OFFSET_2))
/** \brief E80, Externally clocked I2C interrupt request */
#define REG_SCB6_INTR_I2C_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC*)(0x43810E80u + PPCA_REMAP_OFFSET_2))
/** \brief E88, Externally clocked I2C interrupt mask */
#define REG_SCB6_INTR_I2C_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASK*)(0x43810E88u + PPCA_REMAP_OFFSET_2))
/** \brief E8C, Externally clocked I2C interrupt masked */
#define REG_SCB6_INTR_I2C_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_I2C_EC_MASKED*)(0x43810E8Cu + PPCA_REMAP_OFFSET_2))
/** \brief EC0, Externally clocked SPI interrupt request */
#define REG_SCB6_INTR_SPI_EC                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC*)(0x43810EC0u + PPCA_REMAP_OFFSET_2))
/** \brief EC8, Externally clocked SPI interrupt mask */
#define REG_SCB6_INTR_SPI_EC_MASK               /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASK*)(0x43810EC8u + PPCA_REMAP_OFFSET_2))
/** \brief ECC, Externally clocked SPI interrupt masked */
#define REG_SCB6_INTR_SPI_EC_MASKED             /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_SPI_EC_MASKED*)(0x43810ECCu + PPCA_REMAP_OFFSET_2))
/** \brief F00, Master interrupt request */
#define REG_SCB6_INTR_M                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M*)(0x43810F00u + PPCA_REMAP_OFFSET_2))
/** \brief F04, Master interrupt set request */
#define REG_SCB6_INTR_M_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_SET*)(0x43810F04u + PPCA_REMAP_OFFSET_2))
/** \brief F08, Master interrupt mask */
#define REG_SCB6_INTR_M_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASK*)(0x43810F08u + PPCA_REMAP_OFFSET_2))
/** \brief F0C, Master interrupt masked request */
#define REG_SCB6_INTR_M_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_M_MASKED*)(0x43810F0Cu + PPCA_REMAP_OFFSET_2))
/** \brief F40, Slave interrupt request */
#define REG_SCB6_INTR_S                         /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S*)(0x43810F40u + PPCA_REMAP_OFFSET_2))
/** \brief F44, Slave interrupt set request */
#define REG_SCB6_INTR_S_SET                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_SET*)(0x43810F44u + PPCA_REMAP_OFFSET_2))
/** \brief F48, Slave interrupt mask */
#define REG_SCB6_INTR_S_MASK                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASK*)(0x43810F48u + PPCA_REMAP_OFFSET_2))
/** \brief F4C, Slave interrupt masked request */
#define REG_SCB6_INTR_S_MASKED                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_S_MASKED*)(0x43810F4Cu + PPCA_REMAP_OFFSET_2))
/** \brief F80, Transmitter interrupt request */
#define REG_SCB6_INTR_TX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX*)(0x43810F80u + PPCA_REMAP_OFFSET_2))
/** \brief F84, Transmitter interrupt set request */
#define REG_SCB6_INTR_TX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_SET*)(0x43810F84u + PPCA_REMAP_OFFSET_2))
/** \brief F88, Transmitter interrupt mask */
#define REG_SCB6_INTR_TX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASK*)(0x43810F88u + PPCA_REMAP_OFFSET_2))
/** \brief F8C, Transmitter interrupt masked request */
#define REG_SCB6_INTR_TX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TX_MASKED*)(0x43810F8Cu + PPCA_REMAP_OFFSET_2))
/** \brief FC0, Receiver interrupt request */
#define REG_SCB6_INTR_RX                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX*)(0x43810FC0u + PPCA_REMAP_OFFSET_2))
/** \brief FC4, Receiver interrupt set request */
#define REG_SCB6_INTR_RX_SET                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_SET*)(0x43810FC4u + PPCA_REMAP_OFFSET_2))
/** \brief FC8, Receiver interrupt mask */
#define REG_SCB6_INTR_RX_MASK                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASK*)(0x43810FC8u + PPCA_REMAP_OFFSET_2))
/** \brief FCC, Receiver interrupt masked request */
#define REG_SCB6_INTR_RX_MASKED                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_RX_MASKED*)(0x43810FCCu + PPCA_REMAP_OFFSET_2))
/** \brief FD0, Receiver interrupt request */
#define REG_SCB6_INTR_TGS                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS*)(0x43810FD0u + PPCA_REMAP_OFFSET_2))
/** \brief FD4, Receiver interrupt set request */
#define REG_SCB6_INTR_TGS_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_SET*)(0x43810FD4u + PPCA_REMAP_OFFSET_2))
/** \brief FD8, Receiver interrupt mask */
#define REG_SCB6_INTR_TGS_MASK                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASK*)(0x43810FD8u + PPCA_REMAP_OFFSET_2))
/** \brief FDC, Receiver interrupt masked request */
#define REG_SCB6_INTR_TGS_MASKED                /*lint --e(923, 9078)*/ (*(volatile Ifx_SCB_INTR_TGS_MASKED*)(0x43810FDCu + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXSCB_REG_H_ */
