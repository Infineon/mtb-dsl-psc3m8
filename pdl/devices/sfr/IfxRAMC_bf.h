/***************************************************************************//**
* \file IfxRAMC_bf.h
*
* \brief
* RAMC Bitfields mask and offset
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
* \defgroup IfxSfr_RAMC_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_RAMC_Registers
*
*******************************************************************************/

#ifndef _IFXRAMC_BF_H_
#define _IFXRAMC_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_RAMC_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_RAMC_CTL_Bits.SRAM_WS */
#define IFX_RAMC_CTL_SRAM_WS_LEN (2u)

/** \brief Mask for Ifx_RAMC_CTL_Bits.SRAM_WS */
#define IFX_RAMC_CTL_SRAM_WS_MSK (0x3u)

/** \brief Offset for Ifx_RAMC_CTL_Bits.SRAM_WS */
#define IFX_RAMC_CTL_SRAM_WS_OFF (0u)

/** \brief Length for Ifx_RAMC_CTL_Bits.CLOCK_FORCE */
#define IFX_RAMC_CTL_CLOCK_FORCE_LEN (1u)

/** \brief Mask for Ifx_RAMC_CTL_Bits.CLOCK_FORCE */
#define IFX_RAMC_CTL_CLOCK_FORCE_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_CTL_Bits.CLOCK_FORCE */
#define IFX_RAMC_CTL_CLOCK_FORCE_OFF (16u)

/** \brief Length for Ifx_RAMC_STATUS_Bits.WB_EMPTY */
#define IFX_RAMC_STATUS_WB_EMPTY_LEN (1u)

/** \brief Mask for Ifx_RAMC_STATUS_Bits.WB_EMPTY */
#define IFX_RAMC_STATUS_WB_EMPTY_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_STATUS_Bits.WB_EMPTY */
#define IFX_RAMC_STATUS_WB_EMPTY_OFF (0u)

/** \brief Length for Ifx_RAMC_STATUS_Bits.PWR_DONE */
#define IFX_RAMC_STATUS_PWR_DONE_LEN (1u)

/** \brief Mask for Ifx_RAMC_STATUS_Bits.PWR_DONE */
#define IFX_RAMC_STATUS_PWR_DONE_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_STATUS_Bits.PWR_DONE */
#define IFX_RAMC_STATUS_PWR_DONE_OFF (4u)

/** \brief Length for Ifx_RAMC_ECC_CTL_Bits.EN */
#define IFX_RAMC_ECC_CTL_EN_LEN (1u)

/** \brief Mask for Ifx_RAMC_ECC_CTL_Bits.EN */
#define IFX_RAMC_ECC_CTL_EN_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_ECC_CTL_Bits.EN */
#define IFX_RAMC_ECC_CTL_EN_OFF (0u)

/** \brief Length for Ifx_RAMC_ECC_CTL_Bits.AUTO_CORRECT */
#define IFX_RAMC_ECC_CTL_AUTO_CORRECT_LEN (1u)

/** \brief Mask for Ifx_RAMC_ECC_CTL_Bits.AUTO_CORRECT */
#define IFX_RAMC_ECC_CTL_AUTO_CORRECT_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_ECC_CTL_Bits.AUTO_CORRECT */
#define IFX_RAMC_ECC_CTL_AUTO_CORRECT_OFF (1u)

/** \brief Length for Ifx_RAMC_ECC_CTL_Bits.INJ_EN */
#define IFX_RAMC_ECC_CTL_INJ_EN_LEN (1u)

/** \brief Mask for Ifx_RAMC_ECC_CTL_Bits.INJ_EN */
#define IFX_RAMC_ECC_CTL_INJ_EN_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_ECC_CTL_Bits.INJ_EN */
#define IFX_RAMC_ECC_CTL_INJ_EN_OFF (2u)

/** \brief Length for Ifx_RAMC_ECC_CTL_Bits.CHECK_EN */
#define IFX_RAMC_ECC_CTL_CHECK_EN_LEN (1u)

/** \brief Mask for Ifx_RAMC_ECC_CTL_Bits.CHECK_EN */
#define IFX_RAMC_ECC_CTL_CHECK_EN_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_ECC_CTL_Bits.CHECK_EN */
#define IFX_RAMC_ECC_CTL_CHECK_EN_OFF (3u)

/** \brief Length for Ifx_RAMC_ECC_CTL_Bits.PARITY */
#define IFX_RAMC_ECC_CTL_PARITY_LEN (7u)

/** \brief Mask for Ifx_RAMC_ECC_CTL_Bits.PARITY */
#define IFX_RAMC_ECC_CTL_PARITY_MSK (0x7fu)

/** \brief Offset for Ifx_RAMC_ECC_CTL_Bits.PARITY */
#define IFX_RAMC_ECC_CTL_PARITY_OFF (16u)

/** \brief Length for Ifx_RAMC_ECC_STATUS0_Bits.ADDR */
#define IFX_RAMC_ECC_STATUS0_ADDR_LEN (32u)

/** \brief Mask for Ifx_RAMC_ECC_STATUS0_Bits.ADDR */
#define IFX_RAMC_ECC_STATUS0_ADDR_MSK (0xffffffffu)

/** \brief Offset for Ifx_RAMC_ECC_STATUS0_Bits.ADDR */
#define IFX_RAMC_ECC_STATUS0_ADDR_OFF (0u)

/** \brief Length for Ifx_RAMC_ECC_STATUS1_Bits.SYNDROME */
#define IFX_RAMC_ECC_STATUS1_SYNDROME_LEN (7u)

/** \brief Mask for Ifx_RAMC_ECC_STATUS1_Bits.SYNDROME */
#define IFX_RAMC_ECC_STATUS1_SYNDROME_MSK (0x7fu)

/** \brief Offset for Ifx_RAMC_ECC_STATUS1_Bits.SYNDROME */
#define IFX_RAMC_ECC_STATUS1_SYNDROME_OFF (0u)

/** \brief Length for Ifx_RAMC_ECC_MATCH_Bits.WORD_ADDR */
#define IFX_RAMC_ECC_MATCH_WORD_ADDR_LEN (25u)

/** \brief Mask for Ifx_RAMC_ECC_MATCH_Bits.WORD_ADDR */
#define IFX_RAMC_ECC_MATCH_WORD_ADDR_MSK (0x1ffffffu)

/** \brief Offset for Ifx_RAMC_ECC_MATCH_Bits.WORD_ADDR */
#define IFX_RAMC_ECC_MATCH_WORD_ADDR_OFF (0u)

/** \brief Length for Ifx_RAMC_PWR_MACRO_CTL_Bits.OFF */
#define IFX_RAMC_PWR_MACRO_CTL_OFF_LEN (32u)

/** \brief Mask for Ifx_RAMC_PWR_MACRO_CTL_Bits.OFF */
#define IFX_RAMC_PWR_MACRO_CTL_OFF_MSK (0xffffffffu)

/** \brief Offset for Ifx_RAMC_PWR_MACRO_CTL_Bits.OFF */
#define IFX_RAMC_PWR_MACRO_CTL_OFF_OFF (0u)

/** \brief Length for Ifx_RAMC_PWR_MACRO_CTL_LOCK_Bits.PWR_MACRO_CTL_LOCK */
#define IFX_RAMC_PWR_MACRO_CTL_LOCK_PWR_MACRO_CTL_LOCK_LEN (2u)

/** \brief Mask for Ifx_RAMC_PWR_MACRO_CTL_LOCK_Bits.PWR_MACRO_CTL_LOCK */
#define IFX_RAMC_PWR_MACRO_CTL_LOCK_PWR_MACRO_CTL_LOCK_MSK (0x3u)

/** \brief Offset for Ifx_RAMC_PWR_MACRO_CTL_LOCK_Bits.PWR_MACRO_CTL_LOCK */
#define IFX_RAMC_PWR_MACRO_CTL_LOCK_PWR_MACRO_CTL_LOCK_OFF (0u)

/** \brief Length for Ifx_RAMC_PWR_DELAY_CTL_Bits.UP */
#define IFX_RAMC_PWR_DELAY_CTL_UP_LEN (10u)

/** \brief Mask for Ifx_RAMC_PWR_DELAY_CTL_Bits.UP */
#define IFX_RAMC_PWR_DELAY_CTL_UP_MSK (0x3ffu)

/** \brief Offset for Ifx_RAMC_PWR_DELAY_CTL_Bits.UP */
#define IFX_RAMC_PWR_DELAY_CTL_UP_OFF (0u)

/** \brief Length for Ifx_RAMC_PWR_DELAY_CTL_Bits.SEQ0_DELAY */
#define IFX_RAMC_PWR_DELAY_CTL_SEQ0_DELAY_LEN (8u)

/** \brief Mask for Ifx_RAMC_PWR_DELAY_CTL_Bits.SEQ0_DELAY */
#define IFX_RAMC_PWR_DELAY_CTL_SEQ0_DELAY_MSK (0xffu)

/** \brief Offset for Ifx_RAMC_PWR_DELAY_CTL_Bits.SEQ0_DELAY */
#define IFX_RAMC_PWR_DELAY_CTL_SEQ0_DELAY_OFF (16u)

/** \brief Length for Ifx_RAMC_PWR_DELAY_CTL_Bits.SEQ1_DELAY */
#define IFX_RAMC_PWR_DELAY_CTL_SEQ1_DELAY_LEN (8u)

/** \brief Mask for Ifx_RAMC_PWR_DELAY_CTL_Bits.SEQ1_DELAY */
#define IFX_RAMC_PWR_DELAY_CTL_SEQ1_DELAY_MSK (0xffu)

/** \brief Offset for Ifx_RAMC_PWR_DELAY_CTL_Bits.SEQ1_DELAY */
#define IFX_RAMC_PWR_DELAY_CTL_SEQ1_DELAY_OFF (24u)

/** \brief Length for Ifx_RAMC_MPC_CFG_Bits.RESPONSE */
#define IFX_RAMC_MPC_CFG_RESPONSE_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_CFG_Bits.RESPONSE */
#define IFX_RAMC_MPC_CFG_RESPONSE_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_CFG_Bits.RESPONSE */
#define IFX_RAMC_MPC_CFG_RESPONSE_OFF (4u)

/** \brief Length for Ifx_RAMC_MPC_CTRL_Bits.AUTO_INC */
#define IFX_RAMC_MPC_CTRL_AUTO_INC_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_CTRL_Bits.AUTO_INC */
#define IFX_RAMC_MPC_CTRL_AUTO_INC_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_CTRL_Bits.AUTO_INC */
#define IFX_RAMC_MPC_CTRL_AUTO_INC_OFF (8u)

/** \brief Length for Ifx_RAMC_MPC_CTRL_Bits.LOCK */
#define IFX_RAMC_MPC_CTRL_LOCK_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_CTRL_Bits.LOCK */
#define IFX_RAMC_MPC_CTRL_LOCK_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_CTRL_Bits.LOCK */
#define IFX_RAMC_MPC_CTRL_LOCK_OFF (31u)

/** \brief Length for Ifx_RAMC_MPC_BLK_MAX_Bits.VALUE */
#define IFX_RAMC_MPC_BLK_MAX_VALUE_LEN (32u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_MAX_Bits.VALUE */
#define IFX_RAMC_MPC_BLK_MAX_VALUE_MSK (0xffffffffu)

/** \brief Offset for Ifx_RAMC_MPC_BLK_MAX_Bits.VALUE */
#define IFX_RAMC_MPC_BLK_MAX_VALUE_OFF (0u)

/** \brief Length for Ifx_RAMC_MPC_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_RAMC_MPC_BLK_CFG_BLOCK_SIZE_LEN (4u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_RAMC_MPC_BLK_CFG_BLOCK_SIZE_MSK (0xfu)

/** \brief Offset for Ifx_RAMC_MPC_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_RAMC_MPC_BLK_CFG_BLOCK_SIZE_OFF (0u)

/** \brief Length for Ifx_RAMC_MPC_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_RAMC_MPC_BLK_CFG_INIT_IN_PROGRESS_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_RAMC_MPC_BLK_CFG_INIT_IN_PROGRESS_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_RAMC_MPC_BLK_CFG_INIT_IN_PROGRESS_OFF (31u)

/** \brief Length for Ifx_RAMC_MPC_BLK_IDX_Bits.VALUE */
#define IFX_RAMC_MPC_BLK_IDX_VALUE_LEN (32u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_IDX_Bits.VALUE */
#define IFX_RAMC_MPC_BLK_IDX_VALUE_MSK (0xffffffffu)

/** \brief Offset for Ifx_RAMC_MPC_BLK_IDX_Bits.VALUE */
#define IFX_RAMC_MPC_BLK_IDX_VALUE_OFF (0u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS0 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS0_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS0 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS0_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS0 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS0_OFF (0u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS1 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS1_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS1 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS1_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS1 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS1_OFF (1u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS2 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS2_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS2 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS2_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS2 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS2_OFF (2u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS3 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS3_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS3 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS3_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS3 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS3_OFF (3u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS4 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS4_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS4 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS4_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS4 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS4_OFF (4u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS5 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS5_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS5 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS5_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS5 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS5_OFF (5u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS6 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS6_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS6 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS6_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS6 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS6_OFF (6u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS7 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS7_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS7 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS7_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS7 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS7_OFF (7u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS8 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS8_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS8 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS8_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS8 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS8_OFF (8u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS9 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS9_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS9 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS9_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS9 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS9_OFF (9u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS10 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS10_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS10 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS10_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS10 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS10_OFF (10u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS11 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS11_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS11 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS11_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS11 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS11_OFF (11u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS12 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS12_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS12 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS12_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS12 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS12_OFF (12u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS13 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS13_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS13 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS13_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS13 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS13_OFF (13u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS14 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS14_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS14 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS14_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS14 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS14_OFF (14u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS15 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS15_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS15 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS15_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS15 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS15_OFF (15u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS16 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS16_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS16 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS16_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS16 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS16_OFF (16u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS17 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS17_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS17 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS17_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS17 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS17_OFF (17u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS18 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS18_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS18 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS18_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS18 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS18_OFF (18u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS19 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS19_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS19 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS19_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS19 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS19_OFF (19u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS20 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS20_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS20 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS20_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS20 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS20_OFF (20u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS21 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS21_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS21 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS21_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS21 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS21_OFF (21u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS22 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS22_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS22 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS22_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS22 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS22_OFF (22u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS23 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS23_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS23 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS23_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS23 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS23_OFF (23u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS24 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS24_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS24 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS24_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS24 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS24_OFF (24u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS25 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS25_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS25 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS25_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS25 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS25_OFF (25u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS26 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS26_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS26 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS26_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS26 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS26_OFF (26u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS27 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS27_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS27 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS27_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS27 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS27_OFF (27u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS28 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS28_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS28 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS28_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS28 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS28_OFF (28u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS29 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS29_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS29 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS29_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS29 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS29_OFF (29u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS30 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS30_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS30 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS30_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS30 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS30_OFF (30u)

/** \brief Length for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS31 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS31_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS31 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS31_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_BLK_LUT_Bits.ATTR_NS31 */
#define IFX_RAMC_MPC_BLK_LUT_ATTR_NS31_OFF (31u)

/** \brief Length for Ifx_RAMC_MPC_ROT_CTRL_Bits.AUTO_INC */
#define IFX_RAMC_MPC_ROT_CTRL_AUTO_INC_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_CTRL_Bits.AUTO_INC */
#define IFX_RAMC_MPC_ROT_CTRL_AUTO_INC_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_CTRL_Bits.AUTO_INC */
#define IFX_RAMC_MPC_ROT_CTRL_AUTO_INC_OFF (8u)

/** \brief Length for Ifx_RAMC_MPC_ROT_CTRL_Bits.LOCK */
#define IFX_RAMC_MPC_ROT_CTRL_LOCK_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_CTRL_Bits.LOCK */
#define IFX_RAMC_MPC_ROT_CTRL_LOCK_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_CTRL_Bits.LOCK */
#define IFX_RAMC_MPC_ROT_CTRL_LOCK_OFF (31u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_MAX_Bits.VALUE */
#define IFX_RAMC_MPC_ROT_BLK_MAX_VALUE_LEN (32u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_MAX_Bits.VALUE */
#define IFX_RAMC_MPC_ROT_BLK_MAX_VALUE_MSK (0xffffffffu)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_MAX_Bits.VALUE */
#define IFX_RAMC_MPC_ROT_BLK_MAX_VALUE_OFF (0u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_RAMC_MPC_ROT_BLK_CFG_BLOCK_SIZE_LEN (4u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_RAMC_MPC_ROT_BLK_CFG_BLOCK_SIZE_MSK (0xfu)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_RAMC_MPC_ROT_BLK_CFG_BLOCK_SIZE_OFF (0u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_RAMC_MPC_ROT_BLK_CFG_INIT_IN_PROGRESS_LEN (1u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_RAMC_MPC_ROT_BLK_CFG_INIT_IN_PROGRESS_MSK (0x1u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_RAMC_MPC_ROT_BLK_CFG_INIT_IN_PROGRESS_OFF (31u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_IDX_Bits.VALUE */
#define IFX_RAMC_MPC_ROT_BLK_IDX_VALUE_LEN (32u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_IDX_Bits.VALUE */
#define IFX_RAMC_MPC_ROT_BLK_IDX_VALUE_MSK (0xffffffffu)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_IDX_Bits.VALUE */
#define IFX_RAMC_MPC_ROT_BLK_IDX_VALUE_OFF (0u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_PC_Bits.PC */
#define IFX_RAMC_MPC_ROT_BLK_PC_PC_LEN (4u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_PC_Bits.PC */
#define IFX_RAMC_MPC_ROT_BLK_PC_PC_MSK (0xfu)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_PC_Bits.PC */
#define IFX_RAMC_MPC_ROT_BLK_PC_PC_OFF (0u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR0 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR0_LEN (3u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR0 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR0_MSK (0x7u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR0 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR0_OFF (0u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR1 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR1_LEN (3u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR1 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR1_MSK (0x7u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR1 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR1_OFF (4u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR2 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR2_LEN (3u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR2 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR2_MSK (0x7u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR2 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR2_OFF (8u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR3 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR3_LEN (3u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR3 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR3_MSK (0x7u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR3 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR3_OFF (12u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR4 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR4_LEN (3u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR4 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR4_MSK (0x7u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR4 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR4_OFF (16u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR5 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR5_LEN (3u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR5 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR5_MSK (0x7u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR5 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR5_OFF (20u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR6 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR6_LEN (3u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR6 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR6_MSK (0x7u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR6 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR6_OFF (24u)

/** \brief Length for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR7 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR7_LEN (3u)

/** \brief Mask for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR7 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR7_MSK (0x7u)

/** \brief Offset for Ifx_RAMC_MPC_ROT_BLK_LUT_Bits.ATTR7 */
#define IFX_RAMC_MPC_ROT_BLK_LUT_ATTR7_OFF (28u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXRAMC_BF_H_ */
