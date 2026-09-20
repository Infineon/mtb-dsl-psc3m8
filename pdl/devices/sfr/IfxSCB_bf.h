/***************************************************************************//**
* \file IfxSCB_bf.h
*
* \brief
* SCB Bitfields mask and offset
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
* \defgroup IfxSfr_SCB_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_SCB_Registers
*
*******************************************************************************/

#ifndef _IFXSCB_BF_H_
#define _IFXSCB_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_SCB_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_SCB_CTRL_Bits.OVS */
#define IFX_SCB_CTRL_OVS_LEN (4u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.OVS */
#define IFX_SCB_CTRL_OVS_MSK (0xfu)

/** \brief Offset for Ifx_SCB_CTRL_Bits.OVS */
#define IFX_SCB_CTRL_OVS_OFF (0u)

/** \brief Length for Ifx_SCB_CTRL_Bits.EC_AM_MODE */
#define IFX_SCB_CTRL_EC_AM_MODE_LEN (1u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.EC_AM_MODE */
#define IFX_SCB_CTRL_EC_AM_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_CTRL_Bits.EC_AM_MODE */
#define IFX_SCB_CTRL_EC_AM_MODE_OFF (8u)

/** \brief Length for Ifx_SCB_CTRL_Bits.EC_OP_MODE */
#define IFX_SCB_CTRL_EC_OP_MODE_LEN (1u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.EC_OP_MODE */
#define IFX_SCB_CTRL_EC_OP_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_CTRL_Bits.EC_OP_MODE */
#define IFX_SCB_CTRL_EC_OP_MODE_OFF (9u)

/** \brief Length for Ifx_SCB_CTRL_Bits.EZ_MODE */
#define IFX_SCB_CTRL_EZ_MODE_LEN (1u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.EZ_MODE */
#define IFX_SCB_CTRL_EZ_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_CTRL_Bits.EZ_MODE */
#define IFX_SCB_CTRL_EZ_MODE_OFF (10u)

/** \brief Length for Ifx_SCB_CTRL_Bits.CMD_RESP_MODE */
#define IFX_SCB_CTRL_CMD_RESP_MODE_LEN (1u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.CMD_RESP_MODE */
#define IFX_SCB_CTRL_CMD_RESP_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_CTRL_Bits.CMD_RESP_MODE */
#define IFX_SCB_CTRL_CMD_RESP_MODE_OFF (12u)

/** \brief Length for Ifx_SCB_CTRL_Bits.MEM_WIDTH */
#define IFX_SCB_CTRL_MEM_WIDTH_LEN (2u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.MEM_WIDTH */
#define IFX_SCB_CTRL_MEM_WIDTH_MSK (0x3u)

/** \brief Offset for Ifx_SCB_CTRL_Bits.MEM_WIDTH */
#define IFX_SCB_CTRL_MEM_WIDTH_OFF (14u)

/** \brief Length for Ifx_SCB_CTRL_Bits.ADDR_ACCEPT */
#define IFX_SCB_CTRL_ADDR_ACCEPT_LEN (1u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.ADDR_ACCEPT */
#define IFX_SCB_CTRL_ADDR_ACCEPT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_CTRL_Bits.ADDR_ACCEPT */
#define IFX_SCB_CTRL_ADDR_ACCEPT_OFF (16u)

/** \brief Length for Ifx_SCB_CTRL_Bits.BLOCK */
#define IFX_SCB_CTRL_BLOCK_LEN (1u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.BLOCK */
#define IFX_SCB_CTRL_BLOCK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_CTRL_Bits.BLOCK */
#define IFX_SCB_CTRL_BLOCK_OFF (17u)

/** \brief Length for Ifx_SCB_CTRL_Bits.MODE */
#define IFX_SCB_CTRL_MODE_LEN (2u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.MODE */
#define IFX_SCB_CTRL_MODE_MSK (0x3u)

/** \brief Offset for Ifx_SCB_CTRL_Bits.MODE */
#define IFX_SCB_CTRL_MODE_OFF (24u)

/** \brief Length for Ifx_SCB_CTRL_Bits.EC_ACCESS */
#define IFX_SCB_CTRL_EC_ACCESS_LEN (1u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.EC_ACCESS */
#define IFX_SCB_CTRL_EC_ACCESS_MSK (0x1u)

/** \brief Offset for Ifx_SCB_CTRL_Bits.EC_ACCESS */
#define IFX_SCB_CTRL_EC_ACCESS_OFF (28u)

/** \brief Length for Ifx_SCB_CTRL_Bits.ENABLED */
#define IFX_SCB_CTRL_ENABLED_LEN (1u)

/** \brief Mask for Ifx_SCB_CTRL_Bits.ENABLED */
#define IFX_SCB_CTRL_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_CTRL_Bits.ENABLED */
#define IFX_SCB_CTRL_ENABLED_OFF (31u)

/** \brief Length for Ifx_SCB_STATUS_Bits.EC_BUSY */
#define IFX_SCB_STATUS_EC_BUSY_LEN (1u)

/** \brief Mask for Ifx_SCB_STATUS_Bits.EC_BUSY */
#define IFX_SCB_STATUS_EC_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_STATUS_Bits.EC_BUSY */
#define IFX_SCB_STATUS_EC_BUSY_OFF (0u)

/** \brief Length for Ifx_SCB_CMD_RESP_CTRL_Bits.BASE_RD_ADDR */
#define IFX_SCB_CMD_RESP_CTRL_BASE_RD_ADDR_LEN (9u)

/** \brief Mask for Ifx_SCB_CMD_RESP_CTRL_Bits.BASE_RD_ADDR */
#define IFX_SCB_CMD_RESP_CTRL_BASE_RD_ADDR_MSK (0x1ffu)

/** \brief Offset for Ifx_SCB_CMD_RESP_CTRL_Bits.BASE_RD_ADDR */
#define IFX_SCB_CMD_RESP_CTRL_BASE_RD_ADDR_OFF (0u)

/** \brief Length for Ifx_SCB_CMD_RESP_CTRL_Bits.BASE_WR_ADDR */
#define IFX_SCB_CMD_RESP_CTRL_BASE_WR_ADDR_LEN (9u)

/** \brief Mask for Ifx_SCB_CMD_RESP_CTRL_Bits.BASE_WR_ADDR */
#define IFX_SCB_CMD_RESP_CTRL_BASE_WR_ADDR_MSK (0x1ffu)

/** \brief Offset for Ifx_SCB_CMD_RESP_CTRL_Bits.BASE_WR_ADDR */
#define IFX_SCB_CMD_RESP_CTRL_BASE_WR_ADDR_OFF (16u)

/** \brief Length for Ifx_SCB_CMD_RESP_STATUS_Bits.CURR_RD_ADDR */
#define IFX_SCB_CMD_RESP_STATUS_CURR_RD_ADDR_LEN (9u)

/** \brief Mask for Ifx_SCB_CMD_RESP_STATUS_Bits.CURR_RD_ADDR */
#define IFX_SCB_CMD_RESP_STATUS_CURR_RD_ADDR_MSK (0x1ffu)

/** \brief Offset for Ifx_SCB_CMD_RESP_STATUS_Bits.CURR_RD_ADDR */
#define IFX_SCB_CMD_RESP_STATUS_CURR_RD_ADDR_OFF (0u)

/** \brief Length for Ifx_SCB_CMD_RESP_STATUS_Bits.CURR_WR_ADDR */
#define IFX_SCB_CMD_RESP_STATUS_CURR_WR_ADDR_LEN (9u)

/** \brief Mask for Ifx_SCB_CMD_RESP_STATUS_Bits.CURR_WR_ADDR */
#define IFX_SCB_CMD_RESP_STATUS_CURR_WR_ADDR_MSK (0x1ffu)

/** \brief Offset for Ifx_SCB_CMD_RESP_STATUS_Bits.CURR_WR_ADDR */
#define IFX_SCB_CMD_RESP_STATUS_CURR_WR_ADDR_OFF (16u)

/** \brief Length for Ifx_SCB_CMD_RESP_STATUS_Bits.CMD_RESP_EC_BUS_BUSY */
#define IFX_SCB_CMD_RESP_STATUS_CMD_RESP_EC_BUS_BUSY_LEN (1u)

/** \brief Mask for Ifx_SCB_CMD_RESP_STATUS_Bits.CMD_RESP_EC_BUS_BUSY */
#define IFX_SCB_CMD_RESP_STATUS_CMD_RESP_EC_BUS_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_CMD_RESP_STATUS_Bits.CMD_RESP_EC_BUS_BUSY */
#define IFX_SCB_CMD_RESP_STATUS_CMD_RESP_EC_BUS_BUSY_OFF (30u)

/** \brief Length for Ifx_SCB_CMD_RESP_STATUS_Bits.CMD_RESP_EC_BUSY */
#define IFX_SCB_CMD_RESP_STATUS_CMD_RESP_EC_BUSY_LEN (1u)

/** \brief Mask for Ifx_SCB_CMD_RESP_STATUS_Bits.CMD_RESP_EC_BUSY */
#define IFX_SCB_CMD_RESP_STATUS_CMD_RESP_EC_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_CMD_RESP_STATUS_Bits.CMD_RESP_EC_BUSY */
#define IFX_SCB_CMD_RESP_STATUS_CMD_RESP_EC_BUSY_OFF (31u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SSEL_CONTINUOUS */
#define IFX_SCB_SPI_CTRL_SSEL_CONTINUOUS_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SSEL_CONTINUOUS */
#define IFX_SCB_SPI_CTRL_SSEL_CONTINUOUS_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SSEL_CONTINUOUS */
#define IFX_SCB_SPI_CTRL_SSEL_CONTINUOUS_OFF (0u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SELECT_PRECEDE */
#define IFX_SCB_SPI_CTRL_SELECT_PRECEDE_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SELECT_PRECEDE */
#define IFX_SCB_SPI_CTRL_SELECT_PRECEDE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SELECT_PRECEDE */
#define IFX_SCB_SPI_CTRL_SELECT_PRECEDE_OFF (1u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.CPHA */
#define IFX_SCB_SPI_CTRL_CPHA_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.CPHA */
#define IFX_SCB_SPI_CTRL_CPHA_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.CPHA */
#define IFX_SCB_SPI_CTRL_CPHA_OFF (2u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.CPOL */
#define IFX_SCB_SPI_CTRL_CPOL_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.CPOL */
#define IFX_SCB_SPI_CTRL_CPOL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.CPOL */
#define IFX_SCB_SPI_CTRL_CPOL_OFF (3u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.LATE_SAMPLE */
#define IFX_SCB_SPI_CTRL_LATE_SAMPLE_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.LATE_SAMPLE */
#define IFX_SCB_SPI_CTRL_LATE_SAMPLE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.LATE_SAMPLE */
#define IFX_SCB_SPI_CTRL_LATE_SAMPLE_OFF (4u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SCLK_CONTINUOUS */
#define IFX_SCB_SPI_CTRL_SCLK_CONTINUOUS_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SCLK_CONTINUOUS */
#define IFX_SCB_SPI_CTRL_SCLK_CONTINUOUS_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SCLK_CONTINUOUS */
#define IFX_SCB_SPI_CTRL_SCLK_CONTINUOUS_OFF (5u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY0 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY0_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY0 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY0_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY0 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY0_OFF (8u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY1 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY1_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY1 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY1_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY1 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY1_OFF (9u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY2 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY2_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY2 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY2_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY2 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY2_OFF (10u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY3 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY3_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY3 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY3_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SSEL_POLARITY3 */
#define IFX_SCB_SPI_CTRL_SSEL_POLARITY3_OFF (11u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SSEL_SETUP_DEL */
#define IFX_SCB_SPI_CTRL_SSEL_SETUP_DEL_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SSEL_SETUP_DEL */
#define IFX_SCB_SPI_CTRL_SSEL_SETUP_DEL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SSEL_SETUP_DEL */
#define IFX_SCB_SPI_CTRL_SSEL_SETUP_DEL_OFF (12u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SSEL_HOLD_DEL */
#define IFX_SCB_SPI_CTRL_SSEL_HOLD_DEL_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SSEL_HOLD_DEL */
#define IFX_SCB_SPI_CTRL_SSEL_HOLD_DEL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SSEL_HOLD_DEL */
#define IFX_SCB_SPI_CTRL_SSEL_HOLD_DEL_OFF (13u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SSEL_INTER_FRAME_DEL */
#define IFX_SCB_SPI_CTRL_SSEL_INTER_FRAME_DEL_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SSEL_INTER_FRAME_DEL */
#define IFX_SCB_SPI_CTRL_SSEL_INTER_FRAME_DEL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SSEL_INTER_FRAME_DEL */
#define IFX_SCB_SPI_CTRL_SSEL_INTER_FRAME_DEL_OFF (14u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.LOOPBACK */
#define IFX_SCB_SPI_CTRL_LOOPBACK_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.LOOPBACK */
#define IFX_SCB_SPI_CTRL_LOOPBACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.LOOPBACK */
#define IFX_SCB_SPI_CTRL_LOOPBACK_OFF (16u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.MODE */
#define IFX_SCB_SPI_CTRL_MODE_LEN (2u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.MODE */
#define IFX_SCB_SPI_CTRL_MODE_MSK (0x3u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.MODE */
#define IFX_SCB_SPI_CTRL_MODE_OFF (24u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.SSEL */
#define IFX_SCB_SPI_CTRL_SSEL_LEN (2u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.SSEL */
#define IFX_SCB_SPI_CTRL_SSEL_MSK (0x3u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.SSEL */
#define IFX_SCB_SPI_CTRL_SSEL_OFF (26u)

/** \brief Length for Ifx_SCB_SPI_CTRL_Bits.MASTER_MODE */
#define IFX_SCB_SPI_CTRL_MASTER_MODE_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_CTRL_Bits.MASTER_MODE */
#define IFX_SCB_SPI_CTRL_MASTER_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_CTRL_Bits.MASTER_MODE */
#define IFX_SCB_SPI_CTRL_MASTER_MODE_OFF (31u)

/** \brief Length for Ifx_SCB_SPI_STATUS_Bits.BUS_BUSY */
#define IFX_SCB_SPI_STATUS_BUS_BUSY_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_STATUS_Bits.BUS_BUSY */
#define IFX_SCB_SPI_STATUS_BUS_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_STATUS_Bits.BUS_BUSY */
#define IFX_SCB_SPI_STATUS_BUS_BUSY_OFF (0u)

/** \brief Length for Ifx_SCB_SPI_STATUS_Bits.SPI_EC_BUSY */
#define IFX_SCB_SPI_STATUS_SPI_EC_BUSY_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_STATUS_Bits.SPI_EC_BUSY */
#define IFX_SCB_SPI_STATUS_SPI_EC_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_STATUS_Bits.SPI_EC_BUSY */
#define IFX_SCB_SPI_STATUS_SPI_EC_BUSY_OFF (1u)

/** \brief Length for Ifx_SCB_SPI_STATUS_Bits.CURR_EZ_ADDR */
#define IFX_SCB_SPI_STATUS_CURR_EZ_ADDR_LEN (8u)

/** \brief Mask for Ifx_SCB_SPI_STATUS_Bits.CURR_EZ_ADDR */
#define IFX_SCB_SPI_STATUS_CURR_EZ_ADDR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_SPI_STATUS_Bits.CURR_EZ_ADDR */
#define IFX_SCB_SPI_STATUS_CURR_EZ_ADDR_OFF (8u)

/** \brief Length for Ifx_SCB_SPI_STATUS_Bits.BASE_EZ_ADDR */
#define IFX_SCB_SPI_STATUS_BASE_EZ_ADDR_LEN (8u)

/** \brief Mask for Ifx_SCB_SPI_STATUS_Bits.BASE_EZ_ADDR */
#define IFX_SCB_SPI_STATUS_BASE_EZ_ADDR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_SPI_STATUS_Bits.BASE_EZ_ADDR */
#define IFX_SCB_SPI_STATUS_BASE_EZ_ADDR_OFF (16u)

/** \brief Length for Ifx_SCB_SPI_TX_CTRL_Bits.PARITY */
#define IFX_SCB_SPI_TX_CTRL_PARITY_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_TX_CTRL_Bits.PARITY */
#define IFX_SCB_SPI_TX_CTRL_PARITY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_TX_CTRL_Bits.PARITY */
#define IFX_SCB_SPI_TX_CTRL_PARITY_OFF (4u)

/** \brief Length for Ifx_SCB_SPI_TX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_SPI_TX_CTRL_PARITY_ENABLED_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_TX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_SPI_TX_CTRL_PARITY_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_TX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_SPI_TX_CTRL_PARITY_ENABLED_OFF (5u)

/** \brief Length for Ifx_SCB_SPI_TX_CTRL_Bits.MOSI_IDLE_HIGH */
#define IFX_SCB_SPI_TX_CTRL_MOSI_IDLE_HIGH_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_TX_CTRL_Bits.MOSI_IDLE_HIGH */
#define IFX_SCB_SPI_TX_CTRL_MOSI_IDLE_HIGH_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_TX_CTRL_Bits.MOSI_IDLE_HIGH */
#define IFX_SCB_SPI_TX_CTRL_MOSI_IDLE_HIGH_OFF (16u)

/** \brief Length for Ifx_SCB_SPI_RX_CTRL_Bits.PARITY */
#define IFX_SCB_SPI_RX_CTRL_PARITY_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_RX_CTRL_Bits.PARITY */
#define IFX_SCB_SPI_RX_CTRL_PARITY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_RX_CTRL_Bits.PARITY */
#define IFX_SCB_SPI_RX_CTRL_PARITY_OFF (4u)

/** \brief Length for Ifx_SCB_SPI_RX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_SPI_RX_CTRL_PARITY_ENABLED_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_RX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_SPI_RX_CTRL_PARITY_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_RX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_SPI_RX_CTRL_PARITY_ENABLED_OFF (5u)

/** \brief Length for Ifx_SCB_SPI_RX_CTRL_Bits.DROP_ON_PARITY_ERROR */
#define IFX_SCB_SPI_RX_CTRL_DROP_ON_PARITY_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_SPI_RX_CTRL_Bits.DROP_ON_PARITY_ERROR */
#define IFX_SCB_SPI_RX_CTRL_DROP_ON_PARITY_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_SPI_RX_CTRL_Bits.DROP_ON_PARITY_ERROR */
#define IFX_SCB_SPI_RX_CTRL_DROP_ON_PARITY_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_UART_CTRL_Bits.LOOPBACK */
#define IFX_SCB_UART_CTRL_LOOPBACK_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_CTRL_Bits.LOOPBACK */
#define IFX_SCB_UART_CTRL_LOOPBACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_CTRL_Bits.LOOPBACK */
#define IFX_SCB_UART_CTRL_LOOPBACK_OFF (16u)

/** \brief Length for Ifx_SCB_UART_CTRL_Bits.MODE */
#define IFX_SCB_UART_CTRL_MODE_LEN (2u)

/** \brief Mask for Ifx_SCB_UART_CTRL_Bits.MODE */
#define IFX_SCB_UART_CTRL_MODE_MSK (0x3u)

/** \brief Offset for Ifx_SCB_UART_CTRL_Bits.MODE */
#define IFX_SCB_UART_CTRL_MODE_OFF (24u)

/** \brief Length for Ifx_SCB_UART_TX_CTRL_Bits.STOP_BITS */
#define IFX_SCB_UART_TX_CTRL_STOP_BITS_LEN (3u)

/** \brief Mask for Ifx_SCB_UART_TX_CTRL_Bits.STOP_BITS */
#define IFX_SCB_UART_TX_CTRL_STOP_BITS_MSK (0x7u)

/** \brief Offset for Ifx_SCB_UART_TX_CTRL_Bits.STOP_BITS */
#define IFX_SCB_UART_TX_CTRL_STOP_BITS_OFF (0u)

/** \brief Length for Ifx_SCB_UART_TX_CTRL_Bits.PARITY */
#define IFX_SCB_UART_TX_CTRL_PARITY_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_TX_CTRL_Bits.PARITY */
#define IFX_SCB_UART_TX_CTRL_PARITY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_TX_CTRL_Bits.PARITY */
#define IFX_SCB_UART_TX_CTRL_PARITY_OFF (4u)

/** \brief Length for Ifx_SCB_UART_TX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_UART_TX_CTRL_PARITY_ENABLED_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_TX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_UART_TX_CTRL_PARITY_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_TX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_UART_TX_CTRL_PARITY_ENABLED_OFF (5u)

/** \brief Length for Ifx_SCB_UART_TX_CTRL_Bits.RETRY_ON_NACK */
#define IFX_SCB_UART_TX_CTRL_RETRY_ON_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_TX_CTRL_Bits.RETRY_ON_NACK */
#define IFX_SCB_UART_TX_CTRL_RETRY_ON_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_TX_CTRL_Bits.RETRY_ON_NACK */
#define IFX_SCB_UART_TX_CTRL_RETRY_ON_NACK_OFF (8u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.STOP_BITS */
#define IFX_SCB_UART_RX_CTRL_STOP_BITS_LEN (3u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.STOP_BITS */
#define IFX_SCB_UART_RX_CTRL_STOP_BITS_MSK (0x7u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.STOP_BITS */
#define IFX_SCB_UART_RX_CTRL_STOP_BITS_OFF (0u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.PARITY */
#define IFX_SCB_UART_RX_CTRL_PARITY_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.PARITY */
#define IFX_SCB_UART_RX_CTRL_PARITY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.PARITY */
#define IFX_SCB_UART_RX_CTRL_PARITY_OFF (4u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_UART_RX_CTRL_PARITY_ENABLED_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_UART_RX_CTRL_PARITY_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.PARITY_ENABLED */
#define IFX_SCB_UART_RX_CTRL_PARITY_ENABLED_OFF (5u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.POLARITY */
#define IFX_SCB_UART_RX_CTRL_POLARITY_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.POLARITY */
#define IFX_SCB_UART_RX_CTRL_POLARITY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.POLARITY */
#define IFX_SCB_UART_RX_CTRL_POLARITY_OFF (6u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.DROP_ON_PARITY_ERROR */
#define IFX_SCB_UART_RX_CTRL_DROP_ON_PARITY_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.DROP_ON_PARITY_ERROR */
#define IFX_SCB_UART_RX_CTRL_DROP_ON_PARITY_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.DROP_ON_PARITY_ERROR */
#define IFX_SCB_UART_RX_CTRL_DROP_ON_PARITY_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.DROP_ON_FRAME_ERROR */
#define IFX_SCB_UART_RX_CTRL_DROP_ON_FRAME_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.DROP_ON_FRAME_ERROR */
#define IFX_SCB_UART_RX_CTRL_DROP_ON_FRAME_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.DROP_ON_FRAME_ERROR */
#define IFX_SCB_UART_RX_CTRL_DROP_ON_FRAME_ERROR_OFF (9u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.MP_MODE */
#define IFX_SCB_UART_RX_CTRL_MP_MODE_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.MP_MODE */
#define IFX_SCB_UART_RX_CTRL_MP_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.MP_MODE */
#define IFX_SCB_UART_RX_CTRL_MP_MODE_OFF (10u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.LIN_MODE */
#define IFX_SCB_UART_RX_CTRL_LIN_MODE_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.LIN_MODE */
#define IFX_SCB_UART_RX_CTRL_LIN_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.LIN_MODE */
#define IFX_SCB_UART_RX_CTRL_LIN_MODE_OFF (12u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.SKIP_START */
#define IFX_SCB_UART_RX_CTRL_SKIP_START_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.SKIP_START */
#define IFX_SCB_UART_RX_CTRL_SKIP_START_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.SKIP_START */
#define IFX_SCB_UART_RX_CTRL_SKIP_START_OFF (13u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.HDRXEN */
#define IFX_SCB_UART_RX_CTRL_HDRXEN_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.HDRXEN */
#define IFX_SCB_UART_RX_CTRL_HDRXEN_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.HDRXEN */
#define IFX_SCB_UART_RX_CTRL_HDRXEN_OFF (14u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.BREAK_WIDTH */
#define IFX_SCB_UART_RX_CTRL_BREAK_WIDTH_LEN (4u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.BREAK_WIDTH */
#define IFX_SCB_UART_RX_CTRL_BREAK_WIDTH_MSK (0xfu)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.BREAK_WIDTH */
#define IFX_SCB_UART_RX_CTRL_BREAK_WIDTH_OFF (16u)

/** \brief Length for Ifx_SCB_UART_RX_CTRL_Bits.BREAK_LEVEL */
#define IFX_SCB_UART_RX_CTRL_BREAK_LEVEL_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_RX_CTRL_Bits.BREAK_LEVEL */
#define IFX_SCB_UART_RX_CTRL_BREAK_LEVEL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_RX_CTRL_Bits.BREAK_LEVEL */
#define IFX_SCB_UART_RX_CTRL_BREAK_LEVEL_OFF (24u)

/** \brief Length for Ifx_SCB_UART_RX_STATUS_Bits.BR_COUNTER */
#define IFX_SCB_UART_RX_STATUS_BR_COUNTER_LEN (12u)

/** \brief Mask for Ifx_SCB_UART_RX_STATUS_Bits.BR_COUNTER */
#define IFX_SCB_UART_RX_STATUS_BR_COUNTER_MSK (0xfffu)

/** \brief Offset for Ifx_SCB_UART_RX_STATUS_Bits.BR_COUNTER */
#define IFX_SCB_UART_RX_STATUS_BR_COUNTER_OFF (0u)

/** \brief Length for Ifx_SCB_UART_FLOW_CTRL_Bits.TRIGGER_LEVEL */
#define IFX_SCB_UART_FLOW_CTRL_TRIGGER_LEVEL_LEN (8u)

/** \brief Mask for Ifx_SCB_UART_FLOW_CTRL_Bits.TRIGGER_LEVEL */
#define IFX_SCB_UART_FLOW_CTRL_TRIGGER_LEVEL_MSK (0xffu)

/** \brief Offset for Ifx_SCB_UART_FLOW_CTRL_Bits.TRIGGER_LEVEL */
#define IFX_SCB_UART_FLOW_CTRL_TRIGGER_LEVEL_OFF (0u)

/** \brief Length for Ifx_SCB_UART_FLOW_CTRL_Bits.RTS_POLARITY */
#define IFX_SCB_UART_FLOW_CTRL_RTS_POLARITY_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_FLOW_CTRL_Bits.RTS_POLARITY */
#define IFX_SCB_UART_FLOW_CTRL_RTS_POLARITY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_FLOW_CTRL_Bits.RTS_POLARITY */
#define IFX_SCB_UART_FLOW_CTRL_RTS_POLARITY_OFF (16u)

/** \brief Length for Ifx_SCB_UART_FLOW_CTRL_Bits.CTS_POLARITY */
#define IFX_SCB_UART_FLOW_CTRL_CTS_POLARITY_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_FLOW_CTRL_Bits.CTS_POLARITY */
#define IFX_SCB_UART_FLOW_CTRL_CTS_POLARITY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_FLOW_CTRL_Bits.CTS_POLARITY */
#define IFX_SCB_UART_FLOW_CTRL_CTS_POLARITY_OFF (24u)

/** \brief Length for Ifx_SCB_UART_FLOW_CTRL_Bits.CTS_ENABLED */
#define IFX_SCB_UART_FLOW_CTRL_CTS_ENABLED_LEN (1u)

/** \brief Mask for Ifx_SCB_UART_FLOW_CTRL_Bits.CTS_ENABLED */
#define IFX_SCB_UART_FLOW_CTRL_CTS_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_UART_FLOW_CTRL_Bits.CTS_ENABLED */
#define IFX_SCB_UART_FLOW_CTRL_CTS_ENABLED_OFF (25u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.HIGH_PHASE_OVS */
#define IFX_SCB_I2C_CTRL_HIGH_PHASE_OVS_LEN (4u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.HIGH_PHASE_OVS */
#define IFX_SCB_I2C_CTRL_HIGH_PHASE_OVS_MSK (0xfu)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.HIGH_PHASE_OVS */
#define IFX_SCB_I2C_CTRL_HIGH_PHASE_OVS_OFF (0u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.LOW_PHASE_OVS */
#define IFX_SCB_I2C_CTRL_LOW_PHASE_OVS_LEN (4u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.LOW_PHASE_OVS */
#define IFX_SCB_I2C_CTRL_LOW_PHASE_OVS_MSK (0xfu)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.LOW_PHASE_OVS */
#define IFX_SCB_I2C_CTRL_LOW_PHASE_OVS_OFF (4u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.M_READY_DATA_ACK */
#define IFX_SCB_I2C_CTRL_M_READY_DATA_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.M_READY_DATA_ACK */
#define IFX_SCB_I2C_CTRL_M_READY_DATA_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.M_READY_DATA_ACK */
#define IFX_SCB_I2C_CTRL_M_READY_DATA_ACK_OFF (8u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.M_NOT_READY_DATA_NACK */
#define IFX_SCB_I2C_CTRL_M_NOT_READY_DATA_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.M_NOT_READY_DATA_NACK */
#define IFX_SCB_I2C_CTRL_M_NOT_READY_DATA_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.M_NOT_READY_DATA_NACK */
#define IFX_SCB_I2C_CTRL_M_NOT_READY_DATA_NACK_OFF (9u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.S_GENERAL_IGNORE */
#define IFX_SCB_I2C_CTRL_S_GENERAL_IGNORE_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.S_GENERAL_IGNORE */
#define IFX_SCB_I2C_CTRL_S_GENERAL_IGNORE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.S_GENERAL_IGNORE */
#define IFX_SCB_I2C_CTRL_S_GENERAL_IGNORE_OFF (11u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.S_READY_ADDR_ACK */
#define IFX_SCB_I2C_CTRL_S_READY_ADDR_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.S_READY_ADDR_ACK */
#define IFX_SCB_I2C_CTRL_S_READY_ADDR_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.S_READY_ADDR_ACK */
#define IFX_SCB_I2C_CTRL_S_READY_ADDR_ACK_OFF (12u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.S_READY_DATA_ACK */
#define IFX_SCB_I2C_CTRL_S_READY_DATA_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.S_READY_DATA_ACK */
#define IFX_SCB_I2C_CTRL_S_READY_DATA_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.S_READY_DATA_ACK */
#define IFX_SCB_I2C_CTRL_S_READY_DATA_ACK_OFF (13u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.S_NOT_READY_ADDR_NACK */
#define IFX_SCB_I2C_CTRL_S_NOT_READY_ADDR_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.S_NOT_READY_ADDR_NACK */
#define IFX_SCB_I2C_CTRL_S_NOT_READY_ADDR_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.S_NOT_READY_ADDR_NACK */
#define IFX_SCB_I2C_CTRL_S_NOT_READY_ADDR_NACK_OFF (14u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.S_NOT_READY_DATA_NACK */
#define IFX_SCB_I2C_CTRL_S_NOT_READY_DATA_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.S_NOT_READY_DATA_NACK */
#define IFX_SCB_I2C_CTRL_S_NOT_READY_DATA_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.S_NOT_READY_DATA_NACK */
#define IFX_SCB_I2C_CTRL_S_NOT_READY_DATA_NACK_OFF (15u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.LOOPBACK */
#define IFX_SCB_I2C_CTRL_LOOPBACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.LOOPBACK */
#define IFX_SCB_I2C_CTRL_LOOPBACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.LOOPBACK */
#define IFX_SCB_I2C_CTRL_LOOPBACK_OFF (16u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.SLAVE_MODE */
#define IFX_SCB_I2C_CTRL_SLAVE_MODE_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.SLAVE_MODE */
#define IFX_SCB_I2C_CTRL_SLAVE_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.SLAVE_MODE */
#define IFX_SCB_I2C_CTRL_SLAVE_MODE_OFF (30u)

/** \brief Length for Ifx_SCB_I2C_CTRL_Bits.MASTER_MODE */
#define IFX_SCB_I2C_CTRL_MASTER_MODE_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CTRL_Bits.MASTER_MODE */
#define IFX_SCB_I2C_CTRL_MASTER_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CTRL_Bits.MASTER_MODE */
#define IFX_SCB_I2C_CTRL_MASTER_MODE_OFF (31u)

/** \brief Length for Ifx_SCB_I2C_STATUS_Bits.BUS_BUSY */
#define IFX_SCB_I2C_STATUS_BUS_BUSY_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_STATUS_Bits.BUS_BUSY */
#define IFX_SCB_I2C_STATUS_BUS_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_STATUS_Bits.BUS_BUSY */
#define IFX_SCB_I2C_STATUS_BUS_BUSY_OFF (0u)

/** \brief Length for Ifx_SCB_I2C_STATUS_Bits.I2C_EC_BUSY */
#define IFX_SCB_I2C_STATUS_I2C_EC_BUSY_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_STATUS_Bits.I2C_EC_BUSY */
#define IFX_SCB_I2C_STATUS_I2C_EC_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_STATUS_Bits.I2C_EC_BUSY */
#define IFX_SCB_I2C_STATUS_I2C_EC_BUSY_OFF (1u)

/** \brief Length for Ifx_SCB_I2C_STATUS_Bits.I2CS_IC_BUSY */
#define IFX_SCB_I2C_STATUS_I2CS_IC_BUSY_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_STATUS_Bits.I2CS_IC_BUSY */
#define IFX_SCB_I2C_STATUS_I2CS_IC_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_STATUS_Bits.I2CS_IC_BUSY */
#define IFX_SCB_I2C_STATUS_I2CS_IC_BUSY_OFF (2u)

/** \brief Length for Ifx_SCB_I2C_STATUS_Bits.S_READ */
#define IFX_SCB_I2C_STATUS_S_READ_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_STATUS_Bits.S_READ */
#define IFX_SCB_I2C_STATUS_S_READ_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_STATUS_Bits.S_READ */
#define IFX_SCB_I2C_STATUS_S_READ_OFF (4u)

/** \brief Length for Ifx_SCB_I2C_STATUS_Bits.M_READ */
#define IFX_SCB_I2C_STATUS_M_READ_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_STATUS_Bits.M_READ */
#define IFX_SCB_I2C_STATUS_M_READ_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_STATUS_Bits.M_READ */
#define IFX_SCB_I2C_STATUS_M_READ_OFF (5u)

/** \brief Length for Ifx_SCB_I2C_STATUS_Bits.CURR_EZ_ADDR */
#define IFX_SCB_I2C_STATUS_CURR_EZ_ADDR_LEN (8u)

/** \brief Mask for Ifx_SCB_I2C_STATUS_Bits.CURR_EZ_ADDR */
#define IFX_SCB_I2C_STATUS_CURR_EZ_ADDR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_I2C_STATUS_Bits.CURR_EZ_ADDR */
#define IFX_SCB_I2C_STATUS_CURR_EZ_ADDR_OFF (8u)

/** \brief Length for Ifx_SCB_I2C_STATUS_Bits.BASE_EZ_ADDR */
#define IFX_SCB_I2C_STATUS_BASE_EZ_ADDR_LEN (8u)

/** \brief Mask for Ifx_SCB_I2C_STATUS_Bits.BASE_EZ_ADDR */
#define IFX_SCB_I2C_STATUS_BASE_EZ_ADDR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_I2C_STATUS_Bits.BASE_EZ_ADDR */
#define IFX_SCB_I2C_STATUS_BASE_EZ_ADDR_OFF (16u)

/** \brief Length for Ifx_SCB_I2C_M_CMD_Bits.M_START */
#define IFX_SCB_I2C_M_CMD_M_START_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_M_CMD_Bits.M_START */
#define IFX_SCB_I2C_M_CMD_M_START_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_M_CMD_Bits.M_START */
#define IFX_SCB_I2C_M_CMD_M_START_OFF (0u)

/** \brief Length for Ifx_SCB_I2C_M_CMD_Bits.M_START_ON_IDLE */
#define IFX_SCB_I2C_M_CMD_M_START_ON_IDLE_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_M_CMD_Bits.M_START_ON_IDLE */
#define IFX_SCB_I2C_M_CMD_M_START_ON_IDLE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_M_CMD_Bits.M_START_ON_IDLE */
#define IFX_SCB_I2C_M_CMD_M_START_ON_IDLE_OFF (1u)

/** \brief Length for Ifx_SCB_I2C_M_CMD_Bits.M_ACK */
#define IFX_SCB_I2C_M_CMD_M_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_M_CMD_Bits.M_ACK */
#define IFX_SCB_I2C_M_CMD_M_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_M_CMD_Bits.M_ACK */
#define IFX_SCB_I2C_M_CMD_M_ACK_OFF (2u)

/** \brief Length for Ifx_SCB_I2C_M_CMD_Bits.M_NACK */
#define IFX_SCB_I2C_M_CMD_M_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_M_CMD_Bits.M_NACK */
#define IFX_SCB_I2C_M_CMD_M_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_M_CMD_Bits.M_NACK */
#define IFX_SCB_I2C_M_CMD_M_NACK_OFF (3u)

/** \brief Length for Ifx_SCB_I2C_M_CMD_Bits.M_STOP */
#define IFX_SCB_I2C_M_CMD_M_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_M_CMD_Bits.M_STOP */
#define IFX_SCB_I2C_M_CMD_M_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_M_CMD_Bits.M_STOP */
#define IFX_SCB_I2C_M_CMD_M_STOP_OFF (4u)

/** \brief Length for Ifx_SCB_I2C_S_CMD_Bits.S_ACK */
#define IFX_SCB_I2C_S_CMD_S_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_S_CMD_Bits.S_ACK */
#define IFX_SCB_I2C_S_CMD_S_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_S_CMD_Bits.S_ACK */
#define IFX_SCB_I2C_S_CMD_S_ACK_OFF (0u)

/** \brief Length for Ifx_SCB_I2C_S_CMD_Bits.S_NACK */
#define IFX_SCB_I2C_S_CMD_S_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_S_CMD_Bits.S_NACK */
#define IFX_SCB_I2C_S_CMD_S_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_S_CMD_Bits.S_NACK */
#define IFX_SCB_I2C_S_CMD_S_NACK_OFF (1u)

/** \brief Length for Ifx_SCB_I2C_S_CMD_Bits.S_TX_ONES_ON_EMPTY */
#define IFX_SCB_I2C_S_CMD_S_TX_ONES_ON_EMPTY_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_S_CMD_Bits.S_TX_ONES_ON_EMPTY */
#define IFX_SCB_I2C_S_CMD_S_TX_ONES_ON_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_S_CMD_Bits.S_TX_ONES_ON_EMPTY */
#define IFX_SCB_I2C_S_CMD_S_TX_ONES_ON_EMPTY_OFF (2u)

/** \brief Length for Ifx_SCB_I2C_CFG_Bits.SDA_IN_FILT_TRIM */
#define IFX_SCB_I2C_CFG_SDA_IN_FILT_TRIM_LEN (2u)

/** \brief Mask for Ifx_SCB_I2C_CFG_Bits.SDA_IN_FILT_TRIM */
#define IFX_SCB_I2C_CFG_SDA_IN_FILT_TRIM_MSK (0x3u)

/** \brief Offset for Ifx_SCB_I2C_CFG_Bits.SDA_IN_FILT_TRIM */
#define IFX_SCB_I2C_CFG_SDA_IN_FILT_TRIM_OFF (0u)

/** \brief Length for Ifx_SCB_I2C_CFG_Bits.SDA_IN_FILT_SEL */
#define IFX_SCB_I2C_CFG_SDA_IN_FILT_SEL_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CFG_Bits.SDA_IN_FILT_SEL */
#define IFX_SCB_I2C_CFG_SDA_IN_FILT_SEL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CFG_Bits.SDA_IN_FILT_SEL */
#define IFX_SCB_I2C_CFG_SDA_IN_FILT_SEL_OFF (4u)

/** \brief Length for Ifx_SCB_I2C_CFG_Bits.SCL_IN_FILT_TRIM */
#define IFX_SCB_I2C_CFG_SCL_IN_FILT_TRIM_LEN (2u)

/** \brief Mask for Ifx_SCB_I2C_CFG_Bits.SCL_IN_FILT_TRIM */
#define IFX_SCB_I2C_CFG_SCL_IN_FILT_TRIM_MSK (0x3u)

/** \brief Offset for Ifx_SCB_I2C_CFG_Bits.SCL_IN_FILT_TRIM */
#define IFX_SCB_I2C_CFG_SCL_IN_FILT_TRIM_OFF (8u)

/** \brief Length for Ifx_SCB_I2C_CFG_Bits.SCL_IN_FILT_SEL */
#define IFX_SCB_I2C_CFG_SCL_IN_FILT_SEL_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_CFG_Bits.SCL_IN_FILT_SEL */
#define IFX_SCB_I2C_CFG_SCL_IN_FILT_SEL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_CFG_Bits.SCL_IN_FILT_SEL */
#define IFX_SCB_I2C_CFG_SCL_IN_FILT_SEL_OFF (12u)

/** \brief Length for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT0_TRIM */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT0_TRIM_LEN (2u)

/** \brief Mask for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT0_TRIM */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT0_TRIM_MSK (0x3u)

/** \brief Offset for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT0_TRIM */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT0_TRIM_OFF (16u)

/** \brief Length for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT1_TRIM */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT1_TRIM_LEN (2u)

/** \brief Mask for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT1_TRIM */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT1_TRIM_MSK (0x3u)

/** \brief Offset for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT1_TRIM */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT1_TRIM_OFF (18u)

/** \brief Length for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT2_TRIM */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT2_TRIM_LEN (2u)

/** \brief Mask for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT2_TRIM */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT2_TRIM_MSK (0x3u)

/** \brief Offset for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT2_TRIM */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT2_TRIM_OFF (20u)

/** \brief Length for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT_SEL */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT_SEL_LEN (2u)

/** \brief Mask for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT_SEL */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT_SEL_MSK (0x3u)

/** \brief Offset for Ifx_SCB_I2C_CFG_Bits.SDA_OUT_FILT_SEL */
#define IFX_SCB_I2C_CFG_SDA_OUT_FILT_SEL_OFF (28u)

/** \brief Length for Ifx_SCB_I2C_STRETCH_CTRL_Bits.STRETCH_THRESHOLD */
#define IFX_SCB_I2C_STRETCH_CTRL_STRETCH_THRESHOLD_LEN (4u)

/** \brief Mask for Ifx_SCB_I2C_STRETCH_CTRL_Bits.STRETCH_THRESHOLD */
#define IFX_SCB_I2C_STRETCH_CTRL_STRETCH_THRESHOLD_MSK (0xfu)

/** \brief Offset for Ifx_SCB_I2C_STRETCH_CTRL_Bits.STRETCH_THRESHOLD */
#define IFX_SCB_I2C_STRETCH_CTRL_STRETCH_THRESHOLD_OFF (0u)

/** \brief Length for Ifx_SCB_I2C_STRETCH_STATUS_Bits.STRETCH_COUNT */
#define IFX_SCB_I2C_STRETCH_STATUS_STRETCH_COUNT_LEN (4u)

/** \brief Mask for Ifx_SCB_I2C_STRETCH_STATUS_Bits.STRETCH_COUNT */
#define IFX_SCB_I2C_STRETCH_STATUS_STRETCH_COUNT_MSK (0xfu)

/** \brief Offset for Ifx_SCB_I2C_STRETCH_STATUS_Bits.STRETCH_COUNT */
#define IFX_SCB_I2C_STRETCH_STATUS_STRETCH_COUNT_OFF (0u)

/** \brief Length for Ifx_SCB_I2C_STRETCH_STATUS_Bits.STRETCH_DETECTED */
#define IFX_SCB_I2C_STRETCH_STATUS_STRETCH_DETECTED_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_STRETCH_STATUS_Bits.STRETCH_DETECTED */
#define IFX_SCB_I2C_STRETCH_STATUS_STRETCH_DETECTED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_STRETCH_STATUS_Bits.STRETCH_DETECTED */
#define IFX_SCB_I2C_STRETCH_STATUS_STRETCH_DETECTED_OFF (4u)

/** \brief Length for Ifx_SCB_I2C_STRETCH_STATUS_Bits.SYNC_DETECTED */
#define IFX_SCB_I2C_STRETCH_STATUS_SYNC_DETECTED_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_STRETCH_STATUS_Bits.SYNC_DETECTED */
#define IFX_SCB_I2C_STRETCH_STATUS_SYNC_DETECTED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_STRETCH_STATUS_Bits.SYNC_DETECTED */
#define IFX_SCB_I2C_STRETCH_STATUS_SYNC_DETECTED_OFF (5u)

/** \brief Length for Ifx_SCB_I2C_STRETCH_STATUS_Bits.STRETCHING */
#define IFX_SCB_I2C_STRETCH_STATUS_STRETCHING_LEN (1u)

/** \brief Mask for Ifx_SCB_I2C_STRETCH_STATUS_Bits.STRETCHING */
#define IFX_SCB_I2C_STRETCH_STATUS_STRETCHING_MSK (0x1u)

/** \brief Offset for Ifx_SCB_I2C_STRETCH_STATUS_Bits.STRETCHING */
#define IFX_SCB_I2C_STRETCH_STATUS_STRETCHING_OFF (8u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_TXFIFO */
#define IFX_SCB_TGS_CTL0_TR_TXFIFO_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_TXFIFO */
#define IFX_SCB_TGS_CTL0_TR_TXFIFO_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_TXFIFO */
#define IFX_SCB_TGS_CTL0_TR_TXFIFO_OFF (0u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_RXFIFO */
#define IFX_SCB_TGS_CTL0_TR_RXFIFO_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_RXFIFO */
#define IFX_SCB_TGS_CTL0_TR_RXFIFO_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_RXFIFO */
#define IFX_SCB_TGS_CTL0_TR_RXFIFO_OFF (1u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_FCLK */
#define IFX_SCB_TGS_CTL0_TR_FCLK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_FCLK */
#define IFX_SCB_TGS_CTL0_TR_FCLK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_FCLK */
#define IFX_SCB_TGS_CTL0_TR_FCLK_OFF (2u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_RCLK */
#define IFX_SCB_TGS_CTL0_TR_RCLK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_RCLK */
#define IFX_SCB_TGS_CTL0_TR_RCLK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_RCLK */
#define IFX_SCB_TGS_CTL0_TR_RCLK_OFF (3u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_UART_S */
#define IFX_SCB_TGS_CTL0_TR_UART_S_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_UART_S */
#define IFX_SCB_TGS_CTL0_TR_UART_S_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_UART_S */
#define IFX_SCB_TGS_CTL0_TR_UART_S_OFF (4u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_SPI_S */
#define IFX_SCB_TGS_CTL0_TR_SPI_S_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_SPI_S */
#define IFX_SCB_TGS_CTL0_TR_SPI_S_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_SPI_S */
#define IFX_SCB_TGS_CTL0_TR_SPI_S_OFF (5u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_I2C_S */
#define IFX_SCB_TGS_CTL0_TR_I2C_S_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_I2C_S */
#define IFX_SCB_TGS_CTL0_TR_I2C_S_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_I2C_S */
#define IFX_SCB_TGS_CTL0_TR_I2C_S_OFF (6u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_RI2CACK */
#define IFX_SCB_TGS_CTL0_TR_RI2CACK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_RI2CACK */
#define IFX_SCB_TGS_CTL0_TR_RI2CACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_RI2CACK */
#define IFX_SCB_TGS_CTL0_TR_RI2CACK_OFF (7u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_FI2CACK */
#define IFX_SCB_TGS_CTL0_TR_FI2CACK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_FI2CACK */
#define IFX_SCB_TGS_CTL0_TR_FI2CACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_FI2CACK */
#define IFX_SCB_TGS_CTL0_TR_FI2CACK_OFF (8u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_DPSLP2ACT */
#define IFX_SCB_TGS_CTL0_TR_DPSLP2ACT_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_DPSLP2ACT */
#define IFX_SCB_TGS_CTL0_TR_DPSLP2ACT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_DPSLP2ACT */
#define IFX_SCB_TGS_CTL0_TR_DPSLP2ACT_OFF (9u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_CLK_H */
#define IFX_SCB_TGS_CTL0_TR_CLK_H_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_CLK_H */
#define IFX_SCB_TGS_CTL0_TR_CLK_H_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_CLK_H */
#define IFX_SCB_TGS_CTL0_TR_CLK_H_OFF (16u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_CLK_L */
#define IFX_SCB_TGS_CTL0_TR_CLK_L_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_CLK_L */
#define IFX_SCB_TGS_CTL0_TR_CLK_L_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_CLK_L */
#define IFX_SCB_TGS_CTL0_TR_CLK_L_OFF (17u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_FRAME */
#define IFX_SCB_TGS_CTL0_TR_FRAME_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_FRAME */
#define IFX_SCB_TGS_CTL0_TR_FRAME_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_FRAME */
#define IFX_SCB_TGS_CTL0_TR_FRAME_OFF (18u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_FRAME_N */
#define IFX_SCB_TGS_CTL0_TR_FRAME_N_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_FRAME_N */
#define IFX_SCB_TGS_CTL0_TR_FRAME_N_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_FRAME_N */
#define IFX_SCB_TGS_CTL0_TR_FRAME_N_OFF (19u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_FCLK_P */
#define IFX_SCB_TGS_CTL0_TR_FCLK_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_FCLK_P */
#define IFX_SCB_TGS_CTL0_TR_FCLK_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_FCLK_P */
#define IFX_SCB_TGS_CTL0_TR_FCLK_P_OFF (22u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_RCLK_P */
#define IFX_SCB_TGS_CTL0_TR_RCLK_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_RCLK_P */
#define IFX_SCB_TGS_CTL0_TR_RCLK_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_RCLK_P */
#define IFX_SCB_TGS_CTL0_TR_RCLK_P_OFF (23u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_UART_P */
#define IFX_SCB_TGS_CTL0_TR_UART_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_UART_P */
#define IFX_SCB_TGS_CTL0_TR_UART_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_UART_P */
#define IFX_SCB_TGS_CTL0_TR_UART_P_OFF (24u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_SPI_NS */
#define IFX_SCB_TGS_CTL0_TR_SPI_NS_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_SPI_NS */
#define IFX_SCB_TGS_CTL0_TR_SPI_NS_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_SPI_NS */
#define IFX_SCB_TGS_CTL0_TR_SPI_NS_OFF (25u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.TR_I2C_P */
#define IFX_SCB_TGS_CTL0_TR_I2C_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.TR_I2C_P */
#define IFX_SCB_TGS_CTL0_TR_I2C_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.TR_I2C_P */
#define IFX_SCB_TGS_CTL0_TR_I2C_P_OFF (26u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.SEL_UART_TX */
#define IFX_SCB_TGS_CTL0_SEL_UART_TX_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.SEL_UART_TX */
#define IFX_SCB_TGS_CTL0_SEL_UART_TX_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.SEL_UART_TX */
#define IFX_SCB_TGS_CTL0_SEL_UART_TX_OFF (29u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.STATE_RST */
#define IFX_SCB_TGS_CTL0_STATE_RST_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.STATE_RST */
#define IFX_SCB_TGS_CTL0_STATE_RST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.STATE_RST */
#define IFX_SCB_TGS_CTL0_STATE_RST_OFF (30u)

/** \brief Length for Ifx_SCB_TGS_CTL0_Bits.ENABLE */
#define IFX_SCB_TGS_CTL0_ENABLE_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL0_Bits.ENABLE */
#define IFX_SCB_TGS_CTL0_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL0_Bits.ENABLE */
#define IFX_SCB_TGS_CTL0_ENABLE_OFF (31u)

/** \brief Length for Ifx_SCB_TGS_CNT0_Bits.COUNT */
#define IFX_SCB_TGS_CNT0_COUNT_LEN (18u)

/** \brief Mask for Ifx_SCB_TGS_CNT0_Bits.COUNT */
#define IFX_SCB_TGS_CNT0_COUNT_MSK (0x3ffffu)

/** \brief Offset for Ifx_SCB_TGS_CNT0_Bits.COUNT */
#define IFX_SCB_TGS_CNT0_COUNT_OFF (0u)

/** \brief Length for Ifx_SCB_TGS_REL0_Bits.RELOAD */
#define IFX_SCB_TGS_REL0_RELOAD_LEN (18u)

/** \brief Mask for Ifx_SCB_TGS_REL0_Bits.RELOAD */
#define IFX_SCB_TGS_REL0_RELOAD_MSK (0x3ffffu)

/** \brief Offset for Ifx_SCB_TGS_REL0_Bits.RELOAD */
#define IFX_SCB_TGS_REL0_RELOAD_OFF (0u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_TXFIFO */
#define IFX_SCB_TGS_CTL1_TR_TXFIFO_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_TXFIFO */
#define IFX_SCB_TGS_CTL1_TR_TXFIFO_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_TXFIFO */
#define IFX_SCB_TGS_CTL1_TR_TXFIFO_OFF (0u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_RXFIFO */
#define IFX_SCB_TGS_CTL1_TR_RXFIFO_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_RXFIFO */
#define IFX_SCB_TGS_CTL1_TR_RXFIFO_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_RXFIFO */
#define IFX_SCB_TGS_CTL1_TR_RXFIFO_OFF (1u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_FCLK */
#define IFX_SCB_TGS_CTL1_TR_FCLK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_FCLK */
#define IFX_SCB_TGS_CTL1_TR_FCLK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_FCLK */
#define IFX_SCB_TGS_CTL1_TR_FCLK_OFF (2u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_RCLK */
#define IFX_SCB_TGS_CTL1_TR_RCLK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_RCLK */
#define IFX_SCB_TGS_CTL1_TR_RCLK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_RCLK */
#define IFX_SCB_TGS_CTL1_TR_RCLK_OFF (3u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_UART_S */
#define IFX_SCB_TGS_CTL1_TR_UART_S_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_UART_S */
#define IFX_SCB_TGS_CTL1_TR_UART_S_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_UART_S */
#define IFX_SCB_TGS_CTL1_TR_UART_S_OFF (4u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_SPI_S */
#define IFX_SCB_TGS_CTL1_TR_SPI_S_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_SPI_S */
#define IFX_SCB_TGS_CTL1_TR_SPI_S_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_SPI_S */
#define IFX_SCB_TGS_CTL1_TR_SPI_S_OFF (5u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_I2C_S */
#define IFX_SCB_TGS_CTL1_TR_I2C_S_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_I2C_S */
#define IFX_SCB_TGS_CTL1_TR_I2C_S_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_I2C_S */
#define IFX_SCB_TGS_CTL1_TR_I2C_S_OFF (6u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_RI2CACK */
#define IFX_SCB_TGS_CTL1_TR_RI2CACK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_RI2CACK */
#define IFX_SCB_TGS_CTL1_TR_RI2CACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_RI2CACK */
#define IFX_SCB_TGS_CTL1_TR_RI2CACK_OFF (7u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_FI2CACK */
#define IFX_SCB_TGS_CTL1_TR_FI2CACK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_FI2CACK */
#define IFX_SCB_TGS_CTL1_TR_FI2CACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_FI2CACK */
#define IFX_SCB_TGS_CTL1_TR_FI2CACK_OFF (8u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_DPSLP2ACT */
#define IFX_SCB_TGS_CTL1_TR_DPSLP2ACT_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_DPSLP2ACT */
#define IFX_SCB_TGS_CTL1_TR_DPSLP2ACT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_DPSLP2ACT */
#define IFX_SCB_TGS_CTL1_TR_DPSLP2ACT_OFF (9u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_CLK_H */
#define IFX_SCB_TGS_CTL1_TR_CLK_H_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_CLK_H */
#define IFX_SCB_TGS_CTL1_TR_CLK_H_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_CLK_H */
#define IFX_SCB_TGS_CTL1_TR_CLK_H_OFF (16u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_CLK_L */
#define IFX_SCB_TGS_CTL1_TR_CLK_L_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_CLK_L */
#define IFX_SCB_TGS_CTL1_TR_CLK_L_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_CLK_L */
#define IFX_SCB_TGS_CTL1_TR_CLK_L_OFF (17u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_FRAME */
#define IFX_SCB_TGS_CTL1_TR_FRAME_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_FRAME */
#define IFX_SCB_TGS_CTL1_TR_FRAME_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_FRAME */
#define IFX_SCB_TGS_CTL1_TR_FRAME_OFF (18u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_FRAME_N */
#define IFX_SCB_TGS_CTL1_TR_FRAME_N_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_FRAME_N */
#define IFX_SCB_TGS_CTL1_TR_FRAME_N_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_FRAME_N */
#define IFX_SCB_TGS_CTL1_TR_FRAME_N_OFF (19u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_FCLK_P */
#define IFX_SCB_TGS_CTL1_TR_FCLK_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_FCLK_P */
#define IFX_SCB_TGS_CTL1_TR_FCLK_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_FCLK_P */
#define IFX_SCB_TGS_CTL1_TR_FCLK_P_OFF (22u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_RCLK_P */
#define IFX_SCB_TGS_CTL1_TR_RCLK_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_RCLK_P */
#define IFX_SCB_TGS_CTL1_TR_RCLK_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_RCLK_P */
#define IFX_SCB_TGS_CTL1_TR_RCLK_P_OFF (23u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_UART_P */
#define IFX_SCB_TGS_CTL1_TR_UART_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_UART_P */
#define IFX_SCB_TGS_CTL1_TR_UART_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_UART_P */
#define IFX_SCB_TGS_CTL1_TR_UART_P_OFF (24u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_SPI_NS */
#define IFX_SCB_TGS_CTL1_TR_SPI_NS_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_SPI_NS */
#define IFX_SCB_TGS_CTL1_TR_SPI_NS_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_SPI_NS */
#define IFX_SCB_TGS_CTL1_TR_SPI_NS_OFF (25u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.TR_I2C_P */
#define IFX_SCB_TGS_CTL1_TR_I2C_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.TR_I2C_P */
#define IFX_SCB_TGS_CTL1_TR_I2C_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.TR_I2C_P */
#define IFX_SCB_TGS_CTL1_TR_I2C_P_OFF (26u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.SEL_UART_TX */
#define IFX_SCB_TGS_CTL1_SEL_UART_TX_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.SEL_UART_TX */
#define IFX_SCB_TGS_CTL1_SEL_UART_TX_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.SEL_UART_TX */
#define IFX_SCB_TGS_CTL1_SEL_UART_TX_OFF (29u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.STATE_RST */
#define IFX_SCB_TGS_CTL1_STATE_RST_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.STATE_RST */
#define IFX_SCB_TGS_CTL1_STATE_RST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.STATE_RST */
#define IFX_SCB_TGS_CTL1_STATE_RST_OFF (30u)

/** \brief Length for Ifx_SCB_TGS_CTL1_Bits.ENABLE */
#define IFX_SCB_TGS_CTL1_ENABLE_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL1_Bits.ENABLE */
#define IFX_SCB_TGS_CTL1_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL1_Bits.ENABLE */
#define IFX_SCB_TGS_CTL1_ENABLE_OFF (31u)

/** \brief Length for Ifx_SCB_TGS_CNT1_Bits.COUNT */
#define IFX_SCB_TGS_CNT1_COUNT_LEN (18u)

/** \brief Mask for Ifx_SCB_TGS_CNT1_Bits.COUNT */
#define IFX_SCB_TGS_CNT1_COUNT_MSK (0x3ffffu)

/** \brief Offset for Ifx_SCB_TGS_CNT1_Bits.COUNT */
#define IFX_SCB_TGS_CNT1_COUNT_OFF (0u)

/** \brief Length for Ifx_SCB_TGS_REL1_Bits.RELOAD */
#define IFX_SCB_TGS_REL1_RELOAD_LEN (18u)

/** \brief Mask for Ifx_SCB_TGS_REL1_Bits.RELOAD */
#define IFX_SCB_TGS_REL1_RELOAD_MSK (0x3ffffu)

/** \brief Offset for Ifx_SCB_TGS_REL1_Bits.RELOAD */
#define IFX_SCB_TGS_REL1_RELOAD_OFF (0u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_TXFIFO */
#define IFX_SCB_TGS_CTL2_TR_TXFIFO_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_TXFIFO */
#define IFX_SCB_TGS_CTL2_TR_TXFIFO_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_TXFIFO */
#define IFX_SCB_TGS_CTL2_TR_TXFIFO_OFF (0u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_RXFIFO */
#define IFX_SCB_TGS_CTL2_TR_RXFIFO_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_RXFIFO */
#define IFX_SCB_TGS_CTL2_TR_RXFIFO_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_RXFIFO */
#define IFX_SCB_TGS_CTL2_TR_RXFIFO_OFF (1u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_FCLK */
#define IFX_SCB_TGS_CTL2_TR_FCLK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_FCLK */
#define IFX_SCB_TGS_CTL2_TR_FCLK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_FCLK */
#define IFX_SCB_TGS_CTL2_TR_FCLK_OFF (2u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_RCLK */
#define IFX_SCB_TGS_CTL2_TR_RCLK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_RCLK */
#define IFX_SCB_TGS_CTL2_TR_RCLK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_RCLK */
#define IFX_SCB_TGS_CTL2_TR_RCLK_OFF (3u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_UART_S */
#define IFX_SCB_TGS_CTL2_TR_UART_S_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_UART_S */
#define IFX_SCB_TGS_CTL2_TR_UART_S_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_UART_S */
#define IFX_SCB_TGS_CTL2_TR_UART_S_OFF (4u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_SPI_S */
#define IFX_SCB_TGS_CTL2_TR_SPI_S_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_SPI_S */
#define IFX_SCB_TGS_CTL2_TR_SPI_S_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_SPI_S */
#define IFX_SCB_TGS_CTL2_TR_SPI_S_OFF (5u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_I2C_S */
#define IFX_SCB_TGS_CTL2_TR_I2C_S_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_I2C_S */
#define IFX_SCB_TGS_CTL2_TR_I2C_S_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_I2C_S */
#define IFX_SCB_TGS_CTL2_TR_I2C_S_OFF (6u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_RI2CACK */
#define IFX_SCB_TGS_CTL2_TR_RI2CACK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_RI2CACK */
#define IFX_SCB_TGS_CTL2_TR_RI2CACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_RI2CACK */
#define IFX_SCB_TGS_CTL2_TR_RI2CACK_OFF (7u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_FI2CACK */
#define IFX_SCB_TGS_CTL2_TR_FI2CACK_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_FI2CACK */
#define IFX_SCB_TGS_CTL2_TR_FI2CACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_FI2CACK */
#define IFX_SCB_TGS_CTL2_TR_FI2CACK_OFF (8u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_DPSLP2ACT */
#define IFX_SCB_TGS_CTL2_TR_DPSLP2ACT_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_DPSLP2ACT */
#define IFX_SCB_TGS_CTL2_TR_DPSLP2ACT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_DPSLP2ACT */
#define IFX_SCB_TGS_CTL2_TR_DPSLP2ACT_OFF (9u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_CLK_H */
#define IFX_SCB_TGS_CTL2_TR_CLK_H_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_CLK_H */
#define IFX_SCB_TGS_CTL2_TR_CLK_H_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_CLK_H */
#define IFX_SCB_TGS_CTL2_TR_CLK_H_OFF (16u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_CLK_L */
#define IFX_SCB_TGS_CTL2_TR_CLK_L_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_CLK_L */
#define IFX_SCB_TGS_CTL2_TR_CLK_L_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_CLK_L */
#define IFX_SCB_TGS_CTL2_TR_CLK_L_OFF (17u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_FRAME */
#define IFX_SCB_TGS_CTL2_TR_FRAME_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_FRAME */
#define IFX_SCB_TGS_CTL2_TR_FRAME_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_FRAME */
#define IFX_SCB_TGS_CTL2_TR_FRAME_OFF (18u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_FRAME_N */
#define IFX_SCB_TGS_CTL2_TR_FRAME_N_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_FRAME_N */
#define IFX_SCB_TGS_CTL2_TR_FRAME_N_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_FRAME_N */
#define IFX_SCB_TGS_CTL2_TR_FRAME_N_OFF (19u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_FCLK_P */
#define IFX_SCB_TGS_CTL2_TR_FCLK_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_FCLK_P */
#define IFX_SCB_TGS_CTL2_TR_FCLK_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_FCLK_P */
#define IFX_SCB_TGS_CTL2_TR_FCLK_P_OFF (22u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_RCLK_P */
#define IFX_SCB_TGS_CTL2_TR_RCLK_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_RCLK_P */
#define IFX_SCB_TGS_CTL2_TR_RCLK_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_RCLK_P */
#define IFX_SCB_TGS_CTL2_TR_RCLK_P_OFF (23u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_UART_P */
#define IFX_SCB_TGS_CTL2_TR_UART_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_UART_P */
#define IFX_SCB_TGS_CTL2_TR_UART_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_UART_P */
#define IFX_SCB_TGS_CTL2_TR_UART_P_OFF (24u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_SPI_NS */
#define IFX_SCB_TGS_CTL2_TR_SPI_NS_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_SPI_NS */
#define IFX_SCB_TGS_CTL2_TR_SPI_NS_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_SPI_NS */
#define IFX_SCB_TGS_CTL2_TR_SPI_NS_OFF (25u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.TR_I2C_P */
#define IFX_SCB_TGS_CTL2_TR_I2C_P_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.TR_I2C_P */
#define IFX_SCB_TGS_CTL2_TR_I2C_P_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.TR_I2C_P */
#define IFX_SCB_TGS_CTL2_TR_I2C_P_OFF (26u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.SEL_UART_TX */
#define IFX_SCB_TGS_CTL2_SEL_UART_TX_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.SEL_UART_TX */
#define IFX_SCB_TGS_CTL2_SEL_UART_TX_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.SEL_UART_TX */
#define IFX_SCB_TGS_CTL2_SEL_UART_TX_OFF (29u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.STATE_RST */
#define IFX_SCB_TGS_CTL2_STATE_RST_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.STATE_RST */
#define IFX_SCB_TGS_CTL2_STATE_RST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.STATE_RST */
#define IFX_SCB_TGS_CTL2_STATE_RST_OFF (30u)

/** \brief Length for Ifx_SCB_TGS_CTL2_Bits.ENABLE */
#define IFX_SCB_TGS_CTL2_ENABLE_LEN (1u)

/** \brief Mask for Ifx_SCB_TGS_CTL2_Bits.ENABLE */
#define IFX_SCB_TGS_CTL2_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TGS_CTL2_Bits.ENABLE */
#define IFX_SCB_TGS_CTL2_ENABLE_OFF (31u)

/** \brief Length for Ifx_SCB_TGS_CNT2_Bits.COUNT */
#define IFX_SCB_TGS_CNT2_COUNT_LEN (18u)

/** \brief Mask for Ifx_SCB_TGS_CNT2_Bits.COUNT */
#define IFX_SCB_TGS_CNT2_COUNT_MSK (0x3ffffu)

/** \brief Offset for Ifx_SCB_TGS_CNT2_Bits.COUNT */
#define IFX_SCB_TGS_CNT2_COUNT_OFF (0u)

/** \brief Length for Ifx_SCB_TGS_REL2_Bits.RELOAD */
#define IFX_SCB_TGS_REL2_RELOAD_LEN (18u)

/** \brief Mask for Ifx_SCB_TGS_REL2_Bits.RELOAD */
#define IFX_SCB_TGS_REL2_RELOAD_MSK (0x3ffffu)

/** \brief Offset for Ifx_SCB_TGS_REL2_Bits.RELOAD */
#define IFX_SCB_TGS_REL2_RELOAD_OFF (0u)

/** \brief Length for Ifx_SCB_TX_CTRL_Bits.DATA_WIDTH */
#define IFX_SCB_TX_CTRL_DATA_WIDTH_LEN (5u)

/** \brief Mask for Ifx_SCB_TX_CTRL_Bits.DATA_WIDTH */
#define IFX_SCB_TX_CTRL_DATA_WIDTH_MSK (0x1fu)

/** \brief Offset for Ifx_SCB_TX_CTRL_Bits.DATA_WIDTH */
#define IFX_SCB_TX_CTRL_DATA_WIDTH_OFF (0u)

/** \brief Length for Ifx_SCB_TX_CTRL_Bits.MSB_FIRST */
#define IFX_SCB_TX_CTRL_MSB_FIRST_LEN (1u)

/** \brief Mask for Ifx_SCB_TX_CTRL_Bits.MSB_FIRST */
#define IFX_SCB_TX_CTRL_MSB_FIRST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TX_CTRL_Bits.MSB_FIRST */
#define IFX_SCB_TX_CTRL_MSB_FIRST_OFF (8u)

/** \brief Length for Ifx_SCB_TX_CTRL_Bits.OPEN_DRAIN */
#define IFX_SCB_TX_CTRL_OPEN_DRAIN_LEN (1u)

/** \brief Mask for Ifx_SCB_TX_CTRL_Bits.OPEN_DRAIN */
#define IFX_SCB_TX_CTRL_OPEN_DRAIN_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TX_CTRL_Bits.OPEN_DRAIN */
#define IFX_SCB_TX_CTRL_OPEN_DRAIN_OFF (16u)

/** \brief Length for Ifx_SCB_TX_CTRL_Bits.OPEN_DRAIN_SCL */
#define IFX_SCB_TX_CTRL_OPEN_DRAIN_SCL_LEN (1u)

/** \brief Mask for Ifx_SCB_TX_CTRL_Bits.OPEN_DRAIN_SCL */
#define IFX_SCB_TX_CTRL_OPEN_DRAIN_SCL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TX_CTRL_Bits.OPEN_DRAIN_SCL */
#define IFX_SCB_TX_CTRL_OPEN_DRAIN_SCL_OFF (17u)

/** \brief Length for Ifx_SCB_TX_FIFO_CTRL_Bits.TRIGGER_LEVEL */
#define IFX_SCB_TX_FIFO_CTRL_TRIGGER_LEVEL_LEN (8u)

/** \brief Mask for Ifx_SCB_TX_FIFO_CTRL_Bits.TRIGGER_LEVEL */
#define IFX_SCB_TX_FIFO_CTRL_TRIGGER_LEVEL_MSK (0xffu)

/** \brief Offset for Ifx_SCB_TX_FIFO_CTRL_Bits.TRIGGER_LEVEL */
#define IFX_SCB_TX_FIFO_CTRL_TRIGGER_LEVEL_OFF (0u)

/** \brief Length for Ifx_SCB_TX_FIFO_CTRL_Bits.CLEAR */
#define IFX_SCB_TX_FIFO_CTRL_CLEAR_LEN (1u)

/** \brief Mask for Ifx_SCB_TX_FIFO_CTRL_Bits.CLEAR */
#define IFX_SCB_TX_FIFO_CTRL_CLEAR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TX_FIFO_CTRL_Bits.CLEAR */
#define IFX_SCB_TX_FIFO_CTRL_CLEAR_OFF (16u)

/** \brief Length for Ifx_SCB_TX_FIFO_CTRL_Bits.FREEZE */
#define IFX_SCB_TX_FIFO_CTRL_FREEZE_LEN (1u)

/** \brief Mask for Ifx_SCB_TX_FIFO_CTRL_Bits.FREEZE */
#define IFX_SCB_TX_FIFO_CTRL_FREEZE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TX_FIFO_CTRL_Bits.FREEZE */
#define IFX_SCB_TX_FIFO_CTRL_FREEZE_OFF (17u)

/** \brief Length for Ifx_SCB_TX_FIFO_STATUS_Bits.USED */
#define IFX_SCB_TX_FIFO_STATUS_USED_LEN (9u)

/** \brief Mask for Ifx_SCB_TX_FIFO_STATUS_Bits.USED */
#define IFX_SCB_TX_FIFO_STATUS_USED_MSK (0x1ffu)

/** \brief Offset for Ifx_SCB_TX_FIFO_STATUS_Bits.USED */
#define IFX_SCB_TX_FIFO_STATUS_USED_OFF (0u)

/** \brief Length for Ifx_SCB_TX_FIFO_STATUS_Bits.SR_VALID */
#define IFX_SCB_TX_FIFO_STATUS_SR_VALID_LEN (1u)

/** \brief Mask for Ifx_SCB_TX_FIFO_STATUS_Bits.SR_VALID */
#define IFX_SCB_TX_FIFO_STATUS_SR_VALID_MSK (0x1u)

/** \brief Offset for Ifx_SCB_TX_FIFO_STATUS_Bits.SR_VALID */
#define IFX_SCB_TX_FIFO_STATUS_SR_VALID_OFF (15u)

/** \brief Length for Ifx_SCB_TX_FIFO_STATUS_Bits.RD_PTR */
#define IFX_SCB_TX_FIFO_STATUS_RD_PTR_LEN (8u)

/** \brief Mask for Ifx_SCB_TX_FIFO_STATUS_Bits.RD_PTR */
#define IFX_SCB_TX_FIFO_STATUS_RD_PTR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_TX_FIFO_STATUS_Bits.RD_PTR */
#define IFX_SCB_TX_FIFO_STATUS_RD_PTR_OFF (16u)

/** \brief Length for Ifx_SCB_TX_FIFO_STATUS_Bits.WR_PTR */
#define IFX_SCB_TX_FIFO_STATUS_WR_PTR_LEN (8u)

/** \brief Mask for Ifx_SCB_TX_FIFO_STATUS_Bits.WR_PTR */
#define IFX_SCB_TX_FIFO_STATUS_WR_PTR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_TX_FIFO_STATUS_Bits.WR_PTR */
#define IFX_SCB_TX_FIFO_STATUS_WR_PTR_OFF (24u)

/** \brief Length for Ifx_SCB_TX_FIFO_WR_Bits.DATA */
#define IFX_SCB_TX_FIFO_WR_DATA_LEN (32u)

/** \brief Mask for Ifx_SCB_TX_FIFO_WR_Bits.DATA */
#define IFX_SCB_TX_FIFO_WR_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_SCB_TX_FIFO_WR_Bits.DATA */
#define IFX_SCB_TX_FIFO_WR_DATA_OFF (0u)

/** \brief Length for Ifx_SCB_RX_CTRL_Bits.DATA_WIDTH */
#define IFX_SCB_RX_CTRL_DATA_WIDTH_LEN (5u)

/** \brief Mask for Ifx_SCB_RX_CTRL_Bits.DATA_WIDTH */
#define IFX_SCB_RX_CTRL_DATA_WIDTH_MSK (0x1fu)

/** \brief Offset for Ifx_SCB_RX_CTRL_Bits.DATA_WIDTH */
#define IFX_SCB_RX_CTRL_DATA_WIDTH_OFF (0u)

/** \brief Length for Ifx_SCB_RX_CTRL_Bits.MSB_FIRST */
#define IFX_SCB_RX_CTRL_MSB_FIRST_LEN (1u)

/** \brief Mask for Ifx_SCB_RX_CTRL_Bits.MSB_FIRST */
#define IFX_SCB_RX_CTRL_MSB_FIRST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_RX_CTRL_Bits.MSB_FIRST */
#define IFX_SCB_RX_CTRL_MSB_FIRST_OFF (8u)

/** \brief Length for Ifx_SCB_RX_CTRL_Bits.MEDIAN */
#define IFX_SCB_RX_CTRL_MEDIAN_LEN (1u)

/** \brief Mask for Ifx_SCB_RX_CTRL_Bits.MEDIAN */
#define IFX_SCB_RX_CTRL_MEDIAN_MSK (0x1u)

/** \brief Offset for Ifx_SCB_RX_CTRL_Bits.MEDIAN */
#define IFX_SCB_RX_CTRL_MEDIAN_OFF (9u)

/** \brief Length for Ifx_SCB_RX_FIFO_CTRL_Bits.TRIGGER_LEVEL */
#define IFX_SCB_RX_FIFO_CTRL_TRIGGER_LEVEL_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_FIFO_CTRL_Bits.TRIGGER_LEVEL */
#define IFX_SCB_RX_FIFO_CTRL_TRIGGER_LEVEL_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_FIFO_CTRL_Bits.TRIGGER_LEVEL */
#define IFX_SCB_RX_FIFO_CTRL_TRIGGER_LEVEL_OFF (0u)

/** \brief Length for Ifx_SCB_RX_FIFO_CTRL_Bits.CLEAR */
#define IFX_SCB_RX_FIFO_CTRL_CLEAR_LEN (1u)

/** \brief Mask for Ifx_SCB_RX_FIFO_CTRL_Bits.CLEAR */
#define IFX_SCB_RX_FIFO_CTRL_CLEAR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_RX_FIFO_CTRL_Bits.CLEAR */
#define IFX_SCB_RX_FIFO_CTRL_CLEAR_OFF (16u)

/** \brief Length for Ifx_SCB_RX_FIFO_CTRL_Bits.FREEZE */
#define IFX_SCB_RX_FIFO_CTRL_FREEZE_LEN (1u)

/** \brief Mask for Ifx_SCB_RX_FIFO_CTRL_Bits.FREEZE */
#define IFX_SCB_RX_FIFO_CTRL_FREEZE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_RX_FIFO_CTRL_Bits.FREEZE */
#define IFX_SCB_RX_FIFO_CTRL_FREEZE_OFF (17u)

/** \brief Length for Ifx_SCB_RX_FIFO_STATUS_Bits.USED */
#define IFX_SCB_RX_FIFO_STATUS_USED_LEN (9u)

/** \brief Mask for Ifx_SCB_RX_FIFO_STATUS_Bits.USED */
#define IFX_SCB_RX_FIFO_STATUS_USED_MSK (0x1ffu)

/** \brief Offset for Ifx_SCB_RX_FIFO_STATUS_Bits.USED */
#define IFX_SCB_RX_FIFO_STATUS_USED_OFF (0u)

/** \brief Length for Ifx_SCB_RX_FIFO_STATUS_Bits.SR_VALID */
#define IFX_SCB_RX_FIFO_STATUS_SR_VALID_LEN (1u)

/** \brief Mask for Ifx_SCB_RX_FIFO_STATUS_Bits.SR_VALID */
#define IFX_SCB_RX_FIFO_STATUS_SR_VALID_MSK (0x1u)

/** \brief Offset for Ifx_SCB_RX_FIFO_STATUS_Bits.SR_VALID */
#define IFX_SCB_RX_FIFO_STATUS_SR_VALID_OFF (15u)

/** \brief Length for Ifx_SCB_RX_FIFO_STATUS_Bits.RD_PTR */
#define IFX_SCB_RX_FIFO_STATUS_RD_PTR_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_FIFO_STATUS_Bits.RD_PTR */
#define IFX_SCB_RX_FIFO_STATUS_RD_PTR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_FIFO_STATUS_Bits.RD_PTR */
#define IFX_SCB_RX_FIFO_STATUS_RD_PTR_OFF (16u)

/** \brief Length for Ifx_SCB_RX_FIFO_STATUS_Bits.WR_PTR */
#define IFX_SCB_RX_FIFO_STATUS_WR_PTR_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_FIFO_STATUS_Bits.WR_PTR */
#define IFX_SCB_RX_FIFO_STATUS_WR_PTR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_FIFO_STATUS_Bits.WR_PTR */
#define IFX_SCB_RX_FIFO_STATUS_WR_PTR_OFF (24u)

/** \brief Length for Ifx_SCB_RX_MATCH_Bits.ADDR */
#define IFX_SCB_RX_MATCH_ADDR_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH_Bits.ADDR */
#define IFX_SCB_RX_MATCH_ADDR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH_Bits.ADDR */
#define IFX_SCB_RX_MATCH_ADDR_OFF (0u)

/** \brief Length for Ifx_SCB_RX_MATCH_Bits.ADDR1 */
#define IFX_SCB_RX_MATCH_ADDR1_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH_Bits.ADDR1 */
#define IFX_SCB_RX_MATCH_ADDR1_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH_Bits.ADDR1 */
#define IFX_SCB_RX_MATCH_ADDR1_OFF (8u)

/** \brief Length for Ifx_SCB_RX_MATCH_Bits.MASK */
#define IFX_SCB_RX_MATCH_MASK_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH_Bits.MASK */
#define IFX_SCB_RX_MATCH_MASK_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH_Bits.MASK */
#define IFX_SCB_RX_MATCH_MASK_OFF (16u)

/** \brief Length for Ifx_SCB_RX_MATCH_Bits.MASK1 */
#define IFX_SCB_RX_MATCH_MASK1_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH_Bits.MASK1 */
#define IFX_SCB_RX_MATCH_MASK1_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH_Bits.MASK1 */
#define IFX_SCB_RX_MATCH_MASK1_OFF (24u)

/** \brief Length for Ifx_SCB_RX_MATCH1_Bits.ADDR */
#define IFX_SCB_RX_MATCH1_ADDR_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH1_Bits.ADDR */
#define IFX_SCB_RX_MATCH1_ADDR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH1_Bits.ADDR */
#define IFX_SCB_RX_MATCH1_ADDR_OFF (0u)

/** \brief Length for Ifx_SCB_RX_MATCH1_Bits.ADDR1 */
#define IFX_SCB_RX_MATCH1_ADDR1_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH1_Bits.ADDR1 */
#define IFX_SCB_RX_MATCH1_ADDR1_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH1_Bits.ADDR1 */
#define IFX_SCB_RX_MATCH1_ADDR1_OFF (8u)

/** \brief Length for Ifx_SCB_RX_MATCH1_Bits.MASK */
#define IFX_SCB_RX_MATCH1_MASK_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH1_Bits.MASK */
#define IFX_SCB_RX_MATCH1_MASK_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH1_Bits.MASK */
#define IFX_SCB_RX_MATCH1_MASK_OFF (16u)

/** \brief Length for Ifx_SCB_RX_MATCH1_Bits.MASK1 */
#define IFX_SCB_RX_MATCH1_MASK1_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH1_Bits.MASK1 */
#define IFX_SCB_RX_MATCH1_MASK1_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH1_Bits.MASK1 */
#define IFX_SCB_RX_MATCH1_MASK1_OFF (24u)

/** \brief Length for Ifx_SCB_RX_MATCH2_Bits.ADDR */
#define IFX_SCB_RX_MATCH2_ADDR_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH2_Bits.ADDR */
#define IFX_SCB_RX_MATCH2_ADDR_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH2_Bits.ADDR */
#define IFX_SCB_RX_MATCH2_ADDR_OFF (0u)

/** \brief Length for Ifx_SCB_RX_MATCH2_Bits.ADDR1 */
#define IFX_SCB_RX_MATCH2_ADDR1_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH2_Bits.ADDR1 */
#define IFX_SCB_RX_MATCH2_ADDR1_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH2_Bits.ADDR1 */
#define IFX_SCB_RX_MATCH2_ADDR1_OFF (8u)

/** \brief Length for Ifx_SCB_RX_MATCH2_Bits.MASK */
#define IFX_SCB_RX_MATCH2_MASK_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH2_Bits.MASK */
#define IFX_SCB_RX_MATCH2_MASK_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH2_Bits.MASK */
#define IFX_SCB_RX_MATCH2_MASK_OFF (16u)

/** \brief Length for Ifx_SCB_RX_MATCH2_Bits.MASK1 */
#define IFX_SCB_RX_MATCH2_MASK1_LEN (8u)

/** \brief Mask for Ifx_SCB_RX_MATCH2_Bits.MASK1 */
#define IFX_SCB_RX_MATCH2_MASK1_MSK (0xffu)

/** \brief Offset for Ifx_SCB_RX_MATCH2_Bits.MASK1 */
#define IFX_SCB_RX_MATCH2_MASK1_OFF (24u)

/** \brief Length for Ifx_SCB_RX_FIFO_RD_Bits.DATA */
#define IFX_SCB_RX_FIFO_RD_DATA_LEN (32u)

/** \brief Mask for Ifx_SCB_RX_FIFO_RD_Bits.DATA */
#define IFX_SCB_RX_FIFO_RD_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_SCB_RX_FIFO_RD_Bits.DATA */
#define IFX_SCB_RX_FIFO_RD_DATA_OFF (0u)

/** \brief Length for Ifx_SCB_RX_FIFO_RD_SILENT_Bits.DATA */
#define IFX_SCB_RX_FIFO_RD_SILENT_DATA_LEN (32u)

/** \brief Mask for Ifx_SCB_RX_FIFO_RD_SILENT_Bits.DATA */
#define IFX_SCB_RX_FIFO_RD_SILENT_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_SCB_RX_FIFO_RD_SILENT_Bits.DATA */
#define IFX_SCB_RX_FIFO_RD_SILENT_DATA_OFF (0u)

/** \brief Length for Ifx_SCB_EZ_DATA_Bits.EZ_DATA */
#define IFX_SCB_EZ_DATA_EZ_DATA_LEN (8u)

/** \brief Mask for Ifx_SCB_EZ_DATA_Bits.EZ_DATA */
#define IFX_SCB_EZ_DATA_EZ_DATA_MSK (0xffu)

/** \brief Offset for Ifx_SCB_EZ_DATA_Bits.EZ_DATA */
#define IFX_SCB_EZ_DATA_EZ_DATA_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_CAUSE_Bits.M */
#define IFX_SCB_INTR_CAUSE_M_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_CAUSE_Bits.M */
#define IFX_SCB_INTR_CAUSE_M_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_CAUSE_Bits.M */
#define IFX_SCB_INTR_CAUSE_M_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_CAUSE_Bits.S */
#define IFX_SCB_INTR_CAUSE_S_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_CAUSE_Bits.S */
#define IFX_SCB_INTR_CAUSE_S_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_CAUSE_Bits.S */
#define IFX_SCB_INTR_CAUSE_S_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_CAUSE_Bits.TX */
#define IFX_SCB_INTR_CAUSE_TX_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_CAUSE_Bits.TX */
#define IFX_SCB_INTR_CAUSE_TX_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_CAUSE_Bits.TX */
#define IFX_SCB_INTR_CAUSE_TX_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_CAUSE_Bits.RX */
#define IFX_SCB_INTR_CAUSE_RX_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_CAUSE_Bits.RX */
#define IFX_SCB_INTR_CAUSE_RX_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_CAUSE_Bits.RX */
#define IFX_SCB_INTR_CAUSE_RX_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_CAUSE_Bits.I2C_EC */
#define IFX_SCB_INTR_CAUSE_I2C_EC_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_CAUSE_Bits.I2C_EC */
#define IFX_SCB_INTR_CAUSE_I2C_EC_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_CAUSE_Bits.I2C_EC */
#define IFX_SCB_INTR_CAUSE_I2C_EC_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_CAUSE_Bits.SPI_EC */
#define IFX_SCB_INTR_CAUSE_SPI_EC_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_CAUSE_Bits.SPI_EC */
#define IFX_SCB_INTR_CAUSE_SPI_EC_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_CAUSE_Bits.SPI_EC */
#define IFX_SCB_INTR_CAUSE_SPI_EC_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_CAUSE_Bits.TGS */
#define IFX_SCB_INTR_CAUSE_TGS_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_CAUSE_Bits.TGS */
#define IFX_SCB_INTR_CAUSE_TGS_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_CAUSE_Bits.TGS */
#define IFX_SCB_INTR_CAUSE_TGS_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_Bits.WAKE_UP */
#define IFX_SCB_INTR_I2C_EC_WAKE_UP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_Bits.WAKE_UP */
#define IFX_SCB_INTR_I2C_EC_WAKE_UP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_Bits.WAKE_UP */
#define IFX_SCB_INTR_I2C_EC_WAKE_UP_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_Bits.EZ_STOP */
#define IFX_SCB_INTR_I2C_EC_EZ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_Bits.EZ_STOP */
#define IFX_SCB_INTR_I2C_EC_EZ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_Bits.EZ_STOP */
#define IFX_SCB_INTR_I2C_EC_EZ_STOP_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_I2C_EC_EZ_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_I2C_EC_EZ_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_I2C_EC_EZ_WRITE_STOP_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_I2C_EC_EZ_READ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_I2C_EC_EZ_READ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_I2C_EC_EZ_READ_STOP_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_Bits.EZ_STOP_ANY */
#define IFX_SCB_INTR_I2C_EC_EZ_STOP_ANY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_Bits.EZ_STOP_ANY */
#define IFX_SCB_INTR_I2C_EC_EZ_STOP_ANY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_Bits.EZ_STOP_ANY */
#define IFX_SCB_INTR_I2C_EC_EZ_STOP_ANY_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_MASK_Bits.WAKE_UP */
#define IFX_SCB_INTR_I2C_EC_MASK_WAKE_UP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_MASK_Bits.WAKE_UP */
#define IFX_SCB_INTR_I2C_EC_MASK_WAKE_UP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_MASK_Bits.WAKE_UP */
#define IFX_SCB_INTR_I2C_EC_MASK_WAKE_UP_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_STOP_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_WRITE_STOP_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_READ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_READ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_READ_STOP_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_STOP_ANY */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_STOP_ANY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_STOP_ANY */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_STOP_ANY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_MASK_Bits.EZ_STOP_ANY */
#define IFX_SCB_INTR_I2C_EC_MASK_EZ_STOP_ANY_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.WAKE_UP */
#define IFX_SCB_INTR_I2C_EC_MASKED_WAKE_UP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.WAKE_UP */
#define IFX_SCB_INTR_I2C_EC_MASKED_WAKE_UP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.WAKE_UP */
#define IFX_SCB_INTR_I2C_EC_MASKED_WAKE_UP_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_STOP_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_WRITE_STOP_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_READ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_READ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_READ_STOP_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_STOP_ANY */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_STOP_ANY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_STOP_ANY */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_STOP_ANY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_I2C_EC_MASKED_Bits.EZ_STOP_ANY */
#define IFX_SCB_INTR_I2C_EC_MASKED_EZ_STOP_ANY_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_Bits.WAKE_UP */
#define IFX_SCB_INTR_SPI_EC_WAKE_UP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_Bits.WAKE_UP */
#define IFX_SCB_INTR_SPI_EC_WAKE_UP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_Bits.WAKE_UP */
#define IFX_SCB_INTR_SPI_EC_WAKE_UP_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_Bits.EZ_STOP */
#define IFX_SCB_INTR_SPI_EC_EZ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_Bits.EZ_STOP */
#define IFX_SCB_INTR_SPI_EC_EZ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_Bits.EZ_STOP */
#define IFX_SCB_INTR_SPI_EC_EZ_STOP_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_SPI_EC_EZ_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_SPI_EC_EZ_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_SPI_EC_EZ_WRITE_STOP_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_SPI_EC_EZ_READ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_SPI_EC_EZ_READ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_SPI_EC_EZ_READ_STOP_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_MASK_Bits.WAKE_UP */
#define IFX_SCB_INTR_SPI_EC_MASK_WAKE_UP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_MASK_Bits.WAKE_UP */
#define IFX_SCB_INTR_SPI_EC_MASK_WAKE_UP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_MASK_Bits.WAKE_UP */
#define IFX_SCB_INTR_SPI_EC_MASK_WAKE_UP_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_MASK_Bits.EZ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASK_EZ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_MASK_Bits.EZ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASK_EZ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_MASK_Bits.EZ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASK_EZ_STOP_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_MASK_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_SPI_EC_MASK_EZ_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_MASK_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_SPI_EC_MASK_EZ_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_MASK_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_SPI_EC_MASK_EZ_WRITE_STOP_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_MASK_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASK_EZ_READ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_MASK_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASK_EZ_READ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_MASK_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASK_EZ_READ_STOP_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.WAKE_UP */
#define IFX_SCB_INTR_SPI_EC_MASKED_WAKE_UP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.WAKE_UP */
#define IFX_SCB_INTR_SPI_EC_MASKED_WAKE_UP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.WAKE_UP */
#define IFX_SCB_INTR_SPI_EC_MASKED_WAKE_UP_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.EZ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASKED_EZ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.EZ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASKED_EZ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.EZ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASKED_EZ_STOP_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_SPI_EC_MASKED_EZ_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_SPI_EC_MASKED_EZ_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.EZ_WRITE_STOP */
#define IFX_SCB_INTR_SPI_EC_MASKED_EZ_WRITE_STOP_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASKED_EZ_READ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASKED_EZ_READ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_SPI_EC_MASKED_Bits.EZ_READ_STOP */
#define IFX_SCB_INTR_SPI_EC_MASKED_EZ_READ_STOP_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_M_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_I2C_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_I2C_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_I2C_ARB_LOST_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_M_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_I2C_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_I2C_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_I2C_NACK_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_M_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_I2C_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_I2C_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_I2C_ACK_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_M_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_I2C_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_I2C_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_I2C_STOP_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_M_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_I2C_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_I2C_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_I2C_BUS_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_M_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_SPI_DONE_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_SPI_DONE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_SPI_DONE_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_M_SET_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_SET_I2C_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_SET_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_SET_I2C_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_SET_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_SET_I2C_ARB_LOST_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_M_SET_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_SET_I2C_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_SET_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_SET_I2C_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_SET_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_SET_I2C_NACK_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_M_SET_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_SET_I2C_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_SET_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_SET_I2C_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_SET_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_SET_I2C_ACK_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_M_SET_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_SET_I2C_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_SET_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_SET_I2C_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_SET_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_SET_I2C_STOP_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_M_SET_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_SET_I2C_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_SET_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_SET_I2C_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_SET_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_SET_I2C_BUS_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_M_SET_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_SET_SPI_DONE_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_SET_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_SET_SPI_DONE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_SET_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_SET_SPI_DONE_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_M_MASK_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_MASK_I2C_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASK_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_MASK_I2C_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASK_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_MASK_I2C_ARB_LOST_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_M_MASK_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_MASK_I2C_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASK_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_MASK_I2C_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASK_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_MASK_I2C_NACK_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_M_MASK_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_MASK_I2C_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASK_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_MASK_I2C_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASK_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_MASK_I2C_ACK_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_M_MASK_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_MASK_I2C_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASK_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_MASK_I2C_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASK_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_MASK_I2C_STOP_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_M_MASK_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_MASK_I2C_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASK_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_MASK_I2C_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASK_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_MASK_I2C_BUS_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_M_MASK_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_MASK_SPI_DONE_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASK_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_MASK_SPI_DONE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASK_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_MASK_SPI_DONE_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_M_MASKED_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_MASKED_I2C_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASKED_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_MASKED_I2C_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASKED_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_M_MASKED_I2C_ARB_LOST_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_M_MASKED_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_MASKED_I2C_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASKED_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_MASKED_I2C_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASKED_Bits.I2C_NACK */
#define IFX_SCB_INTR_M_MASKED_I2C_NACK_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_M_MASKED_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_MASKED_I2C_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASKED_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_MASKED_I2C_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASKED_Bits.I2C_ACK */
#define IFX_SCB_INTR_M_MASKED_I2C_ACK_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_M_MASKED_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_MASKED_I2C_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASKED_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_MASKED_I2C_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASKED_Bits.I2C_STOP */
#define IFX_SCB_INTR_M_MASKED_I2C_STOP_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_M_MASKED_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_MASKED_I2C_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASKED_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_MASKED_I2C_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASKED_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_M_MASKED_I2C_BUS_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_M_MASKED_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_MASKED_SPI_DONE_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_M_MASKED_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_MASKED_SPI_DONE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_M_MASKED_Bits.SPI_DONE */
#define IFX_SCB_INTR_M_MASKED_SPI_DONE_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_I2C_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_I2C_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_I2C_ARB_LOST_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_I2C_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_I2C_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_I2C_NACK_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_I2C_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_I2C_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_I2C_ACK_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_I2C_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_I2C_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_I2C_WRITE_STOP_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_I2C_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_I2C_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_I2C_STOP_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_START */
#define IFX_SCB_INTR_S_I2C_START_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_START */
#define IFX_SCB_INTR_S_I2C_START_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_START */
#define IFX_SCB_INTR_S_I2C_START_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_I2C_ADDR_MATCH_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_I2C_ADDR_MATCH_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_I2C_ADDR_MATCH_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_I2C_GENERAL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_I2C_GENERAL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_I2C_GENERAL_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_I2C_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_I2C_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_I2C_BUS_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_SPI_EZ_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_SPI_EZ_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_SPI_EZ_WRITE_STOP_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_SPI_EZ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_SPI_EZ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_SPI_EZ_STOP_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_SPI_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_SPI_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_SPI_BUS_ERROR_OFF (11u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_I2C_RESTART_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_I2C_RESTART_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_I2C_RESTART_OFF (16u)

/** \brief Length for Ifx_SCB_INTR_S_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_I2C_STOP_ANY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_I2C_STOP_ANY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_I2C_STOP_ANY_OFF (17u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_SET_I2C_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_SET_I2C_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_SET_I2C_ARB_LOST_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_SET_I2C_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_SET_I2C_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_SET_I2C_NACK_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_SET_I2C_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_SET_I2C_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_SET_I2C_ACK_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_SET_I2C_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_SET_I2C_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_SET_I2C_WRITE_STOP_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_SET_I2C_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_SET_I2C_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_SET_I2C_STOP_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_START */
#define IFX_SCB_INTR_S_SET_I2C_START_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_START */
#define IFX_SCB_INTR_S_SET_I2C_START_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_START */
#define IFX_SCB_INTR_S_SET_I2C_START_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_SET_I2C_ADDR_MATCH_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_SET_I2C_ADDR_MATCH_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_SET_I2C_ADDR_MATCH_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_SET_I2C_GENERAL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_SET_I2C_GENERAL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_SET_I2C_GENERAL_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_SET_I2C_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_SET_I2C_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_SET_I2C_BUS_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_SET_SPI_EZ_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_SET_SPI_EZ_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_SET_SPI_EZ_WRITE_STOP_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_SET_SPI_EZ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_SET_SPI_EZ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_SET_SPI_EZ_STOP_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_SET_SPI_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_SET_SPI_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_SET_SPI_BUS_ERROR_OFF (11u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_SET_I2C_RESTART_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_SET_I2C_RESTART_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_SET_I2C_RESTART_OFF (16u)

/** \brief Length for Ifx_SCB_INTR_S_SET_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_SET_I2C_STOP_ANY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_SET_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_SET_I2C_STOP_ANY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_SET_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_SET_I2C_STOP_ANY_OFF (17u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_MASK_I2C_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_MASK_I2C_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_MASK_I2C_ARB_LOST_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_MASK_I2C_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_MASK_I2C_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_MASK_I2C_NACK_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_MASK_I2C_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_MASK_I2C_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_MASK_I2C_ACK_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_MASK_I2C_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_MASK_I2C_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_MASK_I2C_WRITE_STOP_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_MASK_I2C_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_MASK_I2C_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_MASK_I2C_STOP_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_START */
#define IFX_SCB_INTR_S_MASK_I2C_START_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_START */
#define IFX_SCB_INTR_S_MASK_I2C_START_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_START */
#define IFX_SCB_INTR_S_MASK_I2C_START_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_MASK_I2C_ADDR_MATCH_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_MASK_I2C_ADDR_MATCH_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_MASK_I2C_ADDR_MATCH_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_MASK_I2C_GENERAL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_MASK_I2C_GENERAL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_MASK_I2C_GENERAL_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_MASK_I2C_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_MASK_I2C_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_MASK_I2C_BUS_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_MASK_SPI_EZ_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_MASK_SPI_EZ_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_MASK_SPI_EZ_WRITE_STOP_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_MASK_SPI_EZ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_MASK_SPI_EZ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_MASK_SPI_EZ_STOP_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_MASK_SPI_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_MASK_SPI_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_MASK_SPI_BUS_ERROR_OFF (11u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_MASK_I2C_RESTART_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_MASK_I2C_RESTART_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_MASK_I2C_RESTART_OFF (16u)

/** \brief Length for Ifx_SCB_INTR_S_MASK_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_MASK_I2C_STOP_ANY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASK_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_MASK_I2C_STOP_ANY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASK_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_MASK_I2C_STOP_ANY_OFF (17u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_MASKED_I2C_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_MASKED_I2C_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_ARB_LOST */
#define IFX_SCB_INTR_S_MASKED_I2C_ARB_LOST_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_MASKED_I2C_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_MASKED_I2C_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_NACK */
#define IFX_SCB_INTR_S_MASKED_I2C_NACK_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_MASKED_I2C_ACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_MASKED_I2C_ACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_ACK */
#define IFX_SCB_INTR_S_MASKED_I2C_ACK_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_MASKED_I2C_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_MASKED_I2C_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_WRITE_STOP */
#define IFX_SCB_INTR_S_MASKED_I2C_WRITE_STOP_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_MASKED_I2C_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_MASKED_I2C_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_STOP */
#define IFX_SCB_INTR_S_MASKED_I2C_STOP_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_START */
#define IFX_SCB_INTR_S_MASKED_I2C_START_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_START */
#define IFX_SCB_INTR_S_MASKED_I2C_START_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_START */
#define IFX_SCB_INTR_S_MASKED_I2C_START_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_MASKED_I2C_ADDR_MATCH_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_MASKED_I2C_ADDR_MATCH_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_ADDR_MATCH */
#define IFX_SCB_INTR_S_MASKED_I2C_ADDR_MATCH_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_MASKED_I2C_GENERAL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_MASKED_I2C_GENERAL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_GENERAL */
#define IFX_SCB_INTR_S_MASKED_I2C_GENERAL_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_MASKED_I2C_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_MASKED_I2C_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_BUS_ERROR */
#define IFX_SCB_INTR_S_MASKED_I2C_BUS_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_MASKED_SPI_EZ_WRITE_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_MASKED_SPI_EZ_WRITE_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.SPI_EZ_WRITE_STOP */
#define IFX_SCB_INTR_S_MASKED_SPI_EZ_WRITE_STOP_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_MASKED_SPI_EZ_STOP_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_MASKED_SPI_EZ_STOP_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.SPI_EZ_STOP */
#define IFX_SCB_INTR_S_MASKED_SPI_EZ_STOP_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_MASKED_SPI_BUS_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_MASKED_SPI_BUS_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.SPI_BUS_ERROR */
#define IFX_SCB_INTR_S_MASKED_SPI_BUS_ERROR_OFF (11u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_MASKED_I2C_RESTART_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_MASKED_I2C_RESTART_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_RESTART */
#define IFX_SCB_INTR_S_MASKED_I2C_RESTART_OFF (16u)

/** \brief Length for Ifx_SCB_INTR_S_MASKED_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_MASKED_I2C_STOP_ANY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_S_MASKED_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_MASKED_I2C_STOP_ANY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_S_MASKED_Bits.I2C_STOP_ANY */
#define IFX_SCB_INTR_S_MASKED_I2C_STOP_ANY_OFF (17u)

/** \brief Length for Ifx_SCB_INTR_TX_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_TRIGGER_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_TRIGGER_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_TRIGGER_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_TX_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_NOT_FULL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_NOT_FULL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_NOT_FULL_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_TX_Bits.EMPTY */
#define IFX_SCB_INTR_TX_EMPTY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_Bits.EMPTY */
#define IFX_SCB_INTR_TX_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_Bits.EMPTY */
#define IFX_SCB_INTR_TX_EMPTY_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_TX_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_OVERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_OVERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_OVERFLOW_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_TX_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_UNDERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_UNDERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_UNDERFLOW_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_TX_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_BLOCKED_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_BLOCKED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_BLOCKED_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_TX_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_UART_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_UART_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_UART_NACK_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_TX_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_UART_DONE_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_UART_DONE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_UART_DONE_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_TX_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_UART_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_UART_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_UART_ARB_LOST_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_TX_SET_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_SET_TRIGGER_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_SET_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_SET_TRIGGER_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_SET_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_SET_TRIGGER_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_TX_SET_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_SET_NOT_FULL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_SET_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_SET_NOT_FULL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_SET_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_SET_NOT_FULL_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_TX_SET_Bits.EMPTY */
#define IFX_SCB_INTR_TX_SET_EMPTY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_SET_Bits.EMPTY */
#define IFX_SCB_INTR_TX_SET_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_SET_Bits.EMPTY */
#define IFX_SCB_INTR_TX_SET_EMPTY_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_TX_SET_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_SET_OVERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_SET_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_SET_OVERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_SET_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_SET_OVERFLOW_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_TX_SET_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_SET_UNDERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_SET_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_SET_UNDERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_SET_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_SET_UNDERFLOW_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_TX_SET_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_SET_BLOCKED_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_SET_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_SET_BLOCKED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_SET_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_SET_BLOCKED_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_TX_SET_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_SET_UART_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_SET_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_SET_UART_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_SET_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_SET_UART_NACK_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_TX_SET_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_SET_UART_DONE_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_SET_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_SET_UART_DONE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_SET_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_SET_UART_DONE_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_TX_SET_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_SET_UART_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_SET_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_SET_UART_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_SET_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_SET_UART_ARB_LOST_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_TX_MASK_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_MASK_TRIGGER_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASK_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_MASK_TRIGGER_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASK_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_MASK_TRIGGER_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_TX_MASK_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_MASK_NOT_FULL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASK_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_MASK_NOT_FULL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASK_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_MASK_NOT_FULL_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_TX_MASK_Bits.EMPTY */
#define IFX_SCB_INTR_TX_MASK_EMPTY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASK_Bits.EMPTY */
#define IFX_SCB_INTR_TX_MASK_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASK_Bits.EMPTY */
#define IFX_SCB_INTR_TX_MASK_EMPTY_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_TX_MASK_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_MASK_OVERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASK_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_MASK_OVERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASK_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_MASK_OVERFLOW_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_TX_MASK_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_MASK_UNDERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASK_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_MASK_UNDERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASK_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_MASK_UNDERFLOW_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_TX_MASK_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_MASK_BLOCKED_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASK_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_MASK_BLOCKED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASK_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_MASK_BLOCKED_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_TX_MASK_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_MASK_UART_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASK_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_MASK_UART_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASK_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_MASK_UART_NACK_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_TX_MASK_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_MASK_UART_DONE_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASK_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_MASK_UART_DONE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASK_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_MASK_UART_DONE_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_TX_MASK_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_MASK_UART_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASK_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_MASK_UART_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASK_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_MASK_UART_ARB_LOST_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_TX_MASKED_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_MASKED_TRIGGER_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASKED_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_MASKED_TRIGGER_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASKED_Bits.TRIGGER */
#define IFX_SCB_INTR_TX_MASKED_TRIGGER_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_TX_MASKED_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_MASKED_NOT_FULL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASKED_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_MASKED_NOT_FULL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASKED_Bits.NOT_FULL */
#define IFX_SCB_INTR_TX_MASKED_NOT_FULL_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_TX_MASKED_Bits.EMPTY */
#define IFX_SCB_INTR_TX_MASKED_EMPTY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASKED_Bits.EMPTY */
#define IFX_SCB_INTR_TX_MASKED_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASKED_Bits.EMPTY */
#define IFX_SCB_INTR_TX_MASKED_EMPTY_OFF (4u)

/** \brief Length for Ifx_SCB_INTR_TX_MASKED_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_MASKED_OVERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASKED_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_MASKED_OVERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASKED_Bits.OVERFLOW */
#define IFX_SCB_INTR_TX_MASKED_OVERFLOW_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_TX_MASKED_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_MASKED_UNDERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASKED_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_MASKED_UNDERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASKED_Bits.UNDERFLOW */
#define IFX_SCB_INTR_TX_MASKED_UNDERFLOW_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_TX_MASKED_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_MASKED_BLOCKED_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASKED_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_MASKED_BLOCKED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASKED_Bits.BLOCKED */
#define IFX_SCB_INTR_TX_MASKED_BLOCKED_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_TX_MASKED_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_MASKED_UART_NACK_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASKED_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_MASKED_UART_NACK_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASKED_Bits.UART_NACK */
#define IFX_SCB_INTR_TX_MASKED_UART_NACK_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_TX_MASKED_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_MASKED_UART_DONE_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASKED_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_MASKED_UART_DONE_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASKED_Bits.UART_DONE */
#define IFX_SCB_INTR_TX_MASKED_UART_DONE_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_TX_MASKED_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_MASKED_UART_ARB_LOST_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TX_MASKED_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_MASKED_UART_ARB_LOST_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TX_MASKED_Bits.UART_ARB_LOST */
#define IFX_SCB_INTR_TX_MASKED_UART_ARB_LOST_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_RX_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_TRIGGER_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_TRIGGER_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_TRIGGER_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_RX_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_NOT_EMPTY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_NOT_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_NOT_EMPTY_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_RX_Bits.FULL */
#define IFX_SCB_INTR_RX_FULL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_Bits.FULL */
#define IFX_SCB_INTR_RX_FULL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_Bits.FULL */
#define IFX_SCB_INTR_RX_FULL_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_RX_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_OVERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_OVERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_OVERFLOW_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_RX_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_UNDERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_UNDERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_UNDERFLOW_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_RX_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_BLOCKED_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_BLOCKED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_BLOCKED_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_RX_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_FRAME_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_FRAME_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_FRAME_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_RX_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_PARITY_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_PARITY_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_PARITY_ERROR_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_RX_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_BAUD_DETECT_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_BAUD_DETECT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_BAUD_DETECT_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_RX_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_BREAK_DETECT_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_BREAK_DETECT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_BREAK_DETECT_OFF (11u)

/** \brief Length for Ifx_SCB_INTR_RX_SET_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_SET_TRIGGER_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_SET_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_SET_TRIGGER_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_SET_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_SET_TRIGGER_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_RX_SET_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_SET_NOT_EMPTY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_SET_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_SET_NOT_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_SET_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_SET_NOT_EMPTY_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_RX_SET_Bits.FULL */
#define IFX_SCB_INTR_RX_SET_FULL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_SET_Bits.FULL */
#define IFX_SCB_INTR_RX_SET_FULL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_SET_Bits.FULL */
#define IFX_SCB_INTR_RX_SET_FULL_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_RX_SET_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_SET_OVERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_SET_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_SET_OVERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_SET_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_SET_OVERFLOW_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_RX_SET_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_SET_UNDERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_SET_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_SET_UNDERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_SET_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_SET_UNDERFLOW_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_RX_SET_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_SET_BLOCKED_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_SET_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_SET_BLOCKED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_SET_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_SET_BLOCKED_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_RX_SET_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_SET_FRAME_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_SET_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_SET_FRAME_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_SET_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_SET_FRAME_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_RX_SET_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_SET_PARITY_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_SET_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_SET_PARITY_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_SET_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_SET_PARITY_ERROR_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_RX_SET_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_SET_BAUD_DETECT_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_SET_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_SET_BAUD_DETECT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_SET_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_SET_BAUD_DETECT_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_RX_SET_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_SET_BREAK_DETECT_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_SET_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_SET_BREAK_DETECT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_SET_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_SET_BREAK_DETECT_OFF (11u)

/** \brief Length for Ifx_SCB_INTR_RX_MASK_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_MASK_TRIGGER_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASK_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_MASK_TRIGGER_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASK_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_MASK_TRIGGER_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_RX_MASK_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_MASK_NOT_EMPTY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASK_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_MASK_NOT_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASK_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_MASK_NOT_EMPTY_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_RX_MASK_Bits.FULL */
#define IFX_SCB_INTR_RX_MASK_FULL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASK_Bits.FULL */
#define IFX_SCB_INTR_RX_MASK_FULL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASK_Bits.FULL */
#define IFX_SCB_INTR_RX_MASK_FULL_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_RX_MASK_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_MASK_OVERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASK_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_MASK_OVERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASK_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_MASK_OVERFLOW_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_RX_MASK_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_MASK_UNDERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASK_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_MASK_UNDERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASK_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_MASK_UNDERFLOW_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_RX_MASK_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_MASK_BLOCKED_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASK_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_MASK_BLOCKED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASK_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_MASK_BLOCKED_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_RX_MASK_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_MASK_FRAME_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASK_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_MASK_FRAME_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASK_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_MASK_FRAME_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_RX_MASK_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_MASK_PARITY_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASK_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_MASK_PARITY_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASK_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_MASK_PARITY_ERROR_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_RX_MASK_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_MASK_BAUD_DETECT_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASK_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_MASK_BAUD_DETECT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASK_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_MASK_BAUD_DETECT_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_RX_MASK_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_MASK_BREAK_DETECT_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASK_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_MASK_BREAK_DETECT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASK_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_MASK_BREAK_DETECT_OFF (11u)

/** \brief Length for Ifx_SCB_INTR_RX_MASKED_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_MASKED_TRIGGER_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASKED_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_MASKED_TRIGGER_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASKED_Bits.TRIGGER */
#define IFX_SCB_INTR_RX_MASKED_TRIGGER_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_RX_MASKED_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_MASKED_NOT_EMPTY_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASKED_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_MASKED_NOT_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASKED_Bits.NOT_EMPTY */
#define IFX_SCB_INTR_RX_MASKED_NOT_EMPTY_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_RX_MASKED_Bits.FULL */
#define IFX_SCB_INTR_RX_MASKED_FULL_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASKED_Bits.FULL */
#define IFX_SCB_INTR_RX_MASKED_FULL_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASKED_Bits.FULL */
#define IFX_SCB_INTR_RX_MASKED_FULL_OFF (3u)

/** \brief Length for Ifx_SCB_INTR_RX_MASKED_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_MASKED_OVERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASKED_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_MASKED_OVERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASKED_Bits.OVERFLOW */
#define IFX_SCB_INTR_RX_MASKED_OVERFLOW_OFF (5u)

/** \brief Length for Ifx_SCB_INTR_RX_MASKED_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_MASKED_UNDERFLOW_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASKED_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_MASKED_UNDERFLOW_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASKED_Bits.UNDERFLOW */
#define IFX_SCB_INTR_RX_MASKED_UNDERFLOW_OFF (6u)

/** \brief Length for Ifx_SCB_INTR_RX_MASKED_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_MASKED_BLOCKED_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASKED_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_MASKED_BLOCKED_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASKED_Bits.BLOCKED */
#define IFX_SCB_INTR_RX_MASKED_BLOCKED_OFF (7u)

/** \brief Length for Ifx_SCB_INTR_RX_MASKED_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_MASKED_FRAME_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASKED_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_MASKED_FRAME_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASKED_Bits.FRAME_ERROR */
#define IFX_SCB_INTR_RX_MASKED_FRAME_ERROR_OFF (8u)

/** \brief Length for Ifx_SCB_INTR_RX_MASKED_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_MASKED_PARITY_ERROR_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASKED_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_MASKED_PARITY_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASKED_Bits.PARITY_ERROR */
#define IFX_SCB_INTR_RX_MASKED_PARITY_ERROR_OFF (9u)

/** \brief Length for Ifx_SCB_INTR_RX_MASKED_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_MASKED_BAUD_DETECT_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASKED_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_MASKED_BAUD_DETECT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASKED_Bits.BAUD_DETECT */
#define IFX_SCB_INTR_RX_MASKED_BAUD_DETECT_OFF (10u)

/** \brief Length for Ifx_SCB_INTR_RX_MASKED_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_MASKED_BREAK_DETECT_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_RX_MASKED_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_MASKED_BREAK_DETECT_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_RX_MASKED_Bits.BREAK_DETECT */
#define IFX_SCB_INTR_RX_MASKED_BREAK_DETECT_OFF (11u)

/** \brief Length for Ifx_SCB_INTR_TGS_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_TGS0_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_TGS0_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_TGS0_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_TGS_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_TGS1_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_TGS1_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_TGS1_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_TGS_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_TGS2_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_TGS2_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_TGS2_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_TGS_SET_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_SET_TGS0_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_SET_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_SET_TGS0_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_SET_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_SET_TGS0_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_TGS_SET_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_SET_TGS1_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_SET_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_SET_TGS1_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_SET_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_SET_TGS1_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_TGS_SET_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_SET_TGS2_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_SET_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_SET_TGS2_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_SET_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_SET_TGS2_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_TGS_MASK_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_MASK_TGS0_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_MASK_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_MASK_TGS0_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_MASK_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_MASK_TGS0_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_TGS_MASK_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_MASK_TGS1_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_MASK_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_MASK_TGS1_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_MASK_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_MASK_TGS1_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_TGS_MASK_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_MASK_TGS2_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_MASK_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_MASK_TGS2_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_MASK_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_MASK_TGS2_OFF (2u)

/** \brief Length for Ifx_SCB_INTR_TGS_MASKED_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_MASKED_TGS0_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_MASKED_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_MASKED_TGS0_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_MASKED_Bits.TGS0 */
#define IFX_SCB_INTR_TGS_MASKED_TGS0_OFF (0u)

/** \brief Length for Ifx_SCB_INTR_TGS_MASKED_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_MASKED_TGS1_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_MASKED_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_MASKED_TGS1_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_MASKED_Bits.TGS1 */
#define IFX_SCB_INTR_TGS_MASKED_TGS1_OFF (1u)

/** \brief Length for Ifx_SCB_INTR_TGS_MASKED_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_MASKED_TGS2_LEN (1u)

/** \brief Mask for Ifx_SCB_INTR_TGS_MASKED_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_MASKED_TGS2_MSK (0x1u)

/** \brief Offset for Ifx_SCB_INTR_TGS_MASKED_Bits.TGS2 */
#define IFX_SCB_INTR_TGS_MASKED_TGS2_OFF (2u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXSCB_BF_H_ */
