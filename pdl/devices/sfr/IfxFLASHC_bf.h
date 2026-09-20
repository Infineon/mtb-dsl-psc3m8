/***************************************************************************//**
* \file IfxFLASHC_bf.h
*
* \brief
* FLASHC Bitfields mask and offset
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
* \defgroup IfxSfr_FLASHC_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_FLASHC_Registers
*
*******************************************************************************/

#ifndef _IFXFLASHC_BF_H_
#define _IFXFLASHC_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_FLASHC_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_FLASHC_FLASH_CTL_Bits.RBUS_WS */
#define IFX_FLASHC_FLASH_CTL_RBUS_WS_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FLASH_CTL_Bits.RBUS_WS */
#define IFX_FLASHC_FLASH_CTL_RBUS_WS_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FLASH_CTL_Bits.RBUS_WS */
#define IFX_FLASHC_FLASH_CTL_RBUS_WS_OFF (0u)

/** \brief Length for Ifx_FLASHC_FLASH_CTL_Bits.BANK_MAPPING */
#define IFX_FLASHC_FLASH_CTL_BANK_MAPPING_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FLASH_CTL_Bits.BANK_MAPPING */
#define IFX_FLASHC_FLASH_CTL_BANK_MAPPING_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FLASH_CTL_Bits.BANK_MAPPING */
#define IFX_FLASHC_FLASH_CTL_BANK_MAPPING_OFF (8u)

/** \brief Length for Ifx_FLASHC_FLASH_CTL_Bits.BANK_MODE */
#define IFX_FLASHC_FLASH_CTL_BANK_MODE_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_CTL_Bits.BANK_MODE */
#define IFX_FLASHC_FLASH_CTL_BANK_MODE_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_CTL_Bits.BANK_MODE */
#define IFX_FLASHC_FLASH_CTL_BANK_MODE_OFF (12u)

/** \brief Length for Ifx_FLASHC_FLASH_CTL_Bits.ECC_EN */
#define IFX_FLASHC_FLASH_CTL_ECC_EN_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_CTL_Bits.ECC_EN */
#define IFX_FLASHC_FLASH_CTL_ECC_EN_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_CTL_Bits.ECC_EN */
#define IFX_FLASHC_FLASH_CTL_ECC_EN_OFF (16u)

/** \brief Length for Ifx_FLASHC_FLASH_CTL_Bits.RBUS_ERR_SILENT */
#define IFX_FLASHC_FLASH_CTL_RBUS_ERR_SILENT_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_CTL_Bits.RBUS_ERR_SILENT */
#define IFX_FLASHC_FLASH_CTL_RBUS_ERR_SILENT_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_CTL_Bits.RBUS_ERR_SILENT */
#define IFX_FLASHC_FLASH_CTL_RBUS_ERR_SILENT_OFF (18u)

/** \brief Length for Ifx_FLASHC_FLASH_CTL_Bits.ENFORCE_PC_LOCK */
#define IFX_FLASHC_FLASH_CTL_ENFORCE_PC_LOCK_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_CTL_Bits.ENFORCE_PC_LOCK */
#define IFX_FLASHC_FLASH_CTL_ENFORCE_PC_LOCK_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_CTL_Bits.ENFORCE_PC_LOCK */
#define IFX_FLASHC_FLASH_CTL_ENFORCE_PC_LOCK_OFF (24u)

/** \brief Length for Ifx_FLASHC_FLASH_CTL_Bits.BLOCK_SECTOR_OPERATIONS */
#define IFX_FLASHC_FLASH_CTL_BLOCK_SECTOR_OPERATIONS_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_CTL_Bits.BLOCK_SECTOR_OPERATIONS */
#define IFX_FLASHC_FLASH_CTL_BLOCK_SECTOR_OPERATIONS_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_CTL_Bits.BLOCK_SECTOR_OPERATIONS */
#define IFX_FLASHC_FLASH_CTL_BLOCK_SECTOR_OPERATIONS_OFF (25u)

/** \brief Length for Ifx_FLASHC_FLASH_CTL_Bits.BLOCK_SUBSECTOR_OPERATIONS */
#define IFX_FLASHC_FLASH_CTL_BLOCK_SUBSECTOR_OPERATIONS_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_CTL_Bits.BLOCK_SUBSECTOR_OPERATIONS */
#define IFX_FLASHC_FLASH_CTL_BLOCK_SUBSECTOR_OPERATIONS_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_CTL_Bits.BLOCK_SUBSECTOR_OPERATIONS */
#define IFX_FLASHC_FLASH_CTL_BLOCK_SUBSECTOR_OPERATIONS_OFF (26u)

/** \brief Length for Ifx_FLASHC_FLASH_CTL_Bits.BLOCK_BULK_OPERATIONS */
#define IFX_FLASHC_FLASH_CTL_BLOCK_BULK_OPERATIONS_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_CTL_Bits.BLOCK_BULK_OPERATIONS */
#define IFX_FLASHC_FLASH_CTL_BLOCK_BULK_OPERATIONS_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_CTL_Bits.BLOCK_BULK_OPERATIONS */
#define IFX_FLASHC_FLASH_CTL_BLOCK_BULK_OPERATIONS_OFF (27u)

/** \brief Length for Ifx_FLASHC_FLASH_SECTOR_M_Bits.SECTOR_M */
#define IFX_FLASHC_FLASH_SECTOR_M_SECTOR_M_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FLASH_SECTOR_M_Bits.SECTOR_M */
#define IFX_FLASHC_FLASH_SECTOR_M_SECTOR_M_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FLASH_SECTOR_M_Bits.SECTOR_M */
#define IFX_FLASHC_FLASH_SECTOR_M_SECTOR_M_OFF (0u)

/** \brief Length for Ifx_FLASHC_FLASH_MAIN_N_Bits.MAIN_N */
#define IFX_FLASHC_FLASH_MAIN_N_MAIN_N_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FLASH_MAIN_N_Bits.MAIN_N */
#define IFX_FLASHC_FLASH_MAIN_N_MAIN_N_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FLASH_MAIN_N_Bits.MAIN_N */
#define IFX_FLASHC_FLASH_MAIN_N_MAIN_N_OFF (0u)

/** \brief Length for Ifx_FLASHC_FLASH_WORK_Z_Bits.WORK_Z */
#define IFX_FLASHC_FLASH_WORK_Z_WORK_Z_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FLASH_WORK_Z_Bits.WORK_Z */
#define IFX_FLASHC_FLASH_WORK_Z_WORK_Z_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FLASH_WORK_Z_Bits.WORK_Z */
#define IFX_FLASHC_FLASH_WORK_Z_WORK_Z_OFF (0u)

/** \brief Length for Ifx_FLASHC_FLASH_SFLASH_Y_Bits.SFLASH_Y */
#define IFX_FLASHC_FLASH_SFLASH_Y_SFLASH_Y_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FLASH_SFLASH_Y_Bits.SFLASH_Y */
#define IFX_FLASHC_FLASH_SFLASH_Y_SFLASH_Y_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FLASH_SFLASH_Y_Bits.SFLASH_Y */
#define IFX_FLASHC_FLASH_SFLASH_Y_SFLASH_Y_OFF (0u)

/** \brief Length for Ifx_FLASHC_FLASH_SFLASH_Y_Bits.SFLASH_SECNUM */
#define IFX_FLASHC_FLASH_SFLASH_Y_SFLASH_SECNUM_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_SFLASH_Y_Bits.SFLASH_SECNUM */
#define IFX_FLASHC_FLASH_SFLASH_Y_SFLASH_SECNUM_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_SFLASH_Y_Bits.SFLASH_SECNUM */
#define IFX_FLASHC_FLASH_SFLASH_Y_SFLASH_SECNUM_OFF (31u)

/** \brief Length for Ifx_FLASHC_FLASH_REFRESH_ROW_Bits.REFRESH_ROW */
#define IFX_FLASHC_FLASH_REFRESH_ROW_REFRESH_ROW_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FLASH_REFRESH_ROW_Bits.REFRESH_ROW */
#define IFX_FLASHC_FLASH_REFRESH_ROW_REFRESH_ROW_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FLASH_REFRESH_ROW_Bits.REFRESH_ROW */
#define IFX_FLASHC_FLASH_REFRESH_ROW_REFRESH_ROW_OFF (0u)

/** \brief Length for Ifx_FLASHC_FLASH_CMD_Bits.BUFF_INV */
#define IFX_FLASHC_FLASH_CMD_BUFF_INV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_CMD_Bits.BUFF_INV */
#define IFX_FLASHC_FLASH_CMD_BUFF_INV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_CMD_Bits.BUFF_INV */
#define IFX_FLASHC_FLASH_CMD_BUFF_INV_OFF (1u)

/** \brief Length for Ifx_FLASHC_FLASH_LOCK_Bits.PC */
#define IFX_FLASHC_FLASH_LOCK_PC_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FLASH_LOCK_Bits.PC */
#define IFX_FLASHC_FLASH_LOCK_PC_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FLASH_LOCK_Bits.PC */
#define IFX_FLASHC_FLASH_LOCK_PC_OFF (0u)

/** \brief Length for Ifx_FLASHC_FLASH_LOCK_Bits.LOCKED */
#define IFX_FLASHC_FLASH_LOCK_LOCKED_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_LOCK_Bits.LOCKED */
#define IFX_FLASHC_FLASH_LOCK_LOCKED_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_LOCK_Bits.LOCKED */
#define IFX_FLASHC_FLASH_LOCK_LOCKED_OFF (31u)

/** \brief Length for Ifx_FLASHC_FLASH_PWR_CTL_Bits.ENABLE */
#define IFX_FLASHC_FLASH_PWR_CTL_ENABLE_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_PWR_CTL_Bits.ENABLE */
#define IFX_FLASHC_FLASH_PWR_CTL_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_PWR_CTL_Bits.ENABLE */
#define IFX_FLASHC_FLASH_PWR_CTL_ENABLE_OFF (0u)

/** \brief Length for Ifx_FLASHC_FLASH_PWR_CTL_Bits.ENABLE_HV */
#define IFX_FLASHC_FLASH_PWR_CTL_ENABLE_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FLASH_PWR_CTL_Bits.ENABLE_HV */
#define IFX_FLASHC_FLASH_PWR_CTL_ENABLE_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FLASH_PWR_CTL_Bits.ENABLE_HV */
#define IFX_FLASHC_FLASH_PWR_CTL_ENABLE_HV_OFF (1u)

/** \brief Length for Ifx_FLASHC_ENFORCE_PC_LOCK_SHADOW_Bits.PC_LOCK_SHADOW */
#define IFX_FLASHC_ENFORCE_PC_LOCK_SHADOW_PC_LOCK_SHADOW_LEN (1u)

/** \brief Mask for Ifx_FLASHC_ENFORCE_PC_LOCK_SHADOW_Bits.PC_LOCK_SHADOW */
#define IFX_FLASHC_ENFORCE_PC_LOCK_SHADOW_PC_LOCK_SHADOW_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_ENFORCE_PC_LOCK_SHADOW_Bits.PC_LOCK_SHADOW */
#define IFX_FLASHC_ENFORCE_PC_LOCK_SHADOW_PC_LOCK_SHADOW_OFF (0u)

/** \brief Length for Ifx_FLASHC_ECC_INJ_EN_Bits.ECC_INJ_ENABLE */
#define IFX_FLASHC_ECC_INJ_EN_ECC_INJ_ENABLE_LEN (1u)

/** \brief Mask for Ifx_FLASHC_ECC_INJ_EN_Bits.ECC_INJ_ENABLE */
#define IFX_FLASHC_ECC_INJ_EN_ECC_INJ_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_ECC_INJ_EN_Bits.ECC_INJ_ENABLE */
#define IFX_FLASHC_ECC_INJ_EN_ECC_INJ_ENABLE_OFF (0u)

/** \brief Length for Ifx_FLASHC_ECC_INJ_EN_Bits.ECC_ERROR */
#define IFX_FLASHC_ECC_INJ_EN_ECC_ERROR_LEN (1u)

/** \brief Mask for Ifx_FLASHC_ECC_INJ_EN_Bits.ECC_ERROR */
#define IFX_FLASHC_ECC_INJ_EN_ECC_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_ECC_INJ_EN_Bits.ECC_ERROR */
#define IFX_FLASHC_ECC_INJ_EN_ECC_ERROR_OFF (8u)

/** \brief Length for Ifx_FLASHC_ECC_INJ_EN_Bits.ECC_INJ_PC */
#define IFX_FLASHC_ECC_INJ_EN_ECC_INJ_PC_LEN (4u)

/** \brief Mask for Ifx_FLASHC_ECC_INJ_EN_Bits.ECC_INJ_PC */
#define IFX_FLASHC_ECC_INJ_EN_ECC_INJ_PC_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_ECC_INJ_EN_Bits.ECC_INJ_PC */
#define IFX_FLASHC_ECC_INJ_EN_ECC_INJ_PC_OFF (28u)

/** \brief Length for Ifx_FLASHC_ECC_INJ_CTL_Bits.WORD_ADDR */
#define IFX_FLASHC_ECC_INJ_CTL_WORD_ADDR_LEN (23u)

/** \brief Mask for Ifx_FLASHC_ECC_INJ_CTL_Bits.WORD_ADDR */
#define IFX_FLASHC_ECC_INJ_CTL_WORD_ADDR_MSK (0x7fffffu)

/** \brief Offset for Ifx_FLASHC_ECC_INJ_CTL_Bits.WORD_ADDR */
#define IFX_FLASHC_ECC_INJ_CTL_WORD_ADDR_OFF (0u)

/** \brief Length for Ifx_FLASHC_ECC_INJ_CTL_Bits.PARITY */
#define IFX_FLASHC_ECC_INJ_CTL_PARITY_LEN (9u)

/** \brief Mask for Ifx_FLASHC_ECC_INJ_CTL_Bits.PARITY */
#define IFX_FLASHC_ECC_INJ_CTL_PARITY_MSK (0x1ffu)

/** \brief Offset for Ifx_FLASHC_ECC_INJ_CTL_Bits.PARITY */
#define IFX_FLASHC_ECC_INJ_CTL_PARITY_OFF (23u)

/** \brief Length for Ifx_FLASHC_ECC_LOGIR_Bits.ECCTHRESHOLD */
#define IFX_FLASHC_ECC_LOGIR_ECCTHRESHOLD_LEN (16u)

/** \brief Mask for Ifx_FLASHC_ECC_LOGIR_Bits.ECCTHRESHOLD */
#define IFX_FLASHC_ECC_LOGIR_ECCTHRESHOLD_MSK (0xffffu)

/** \brief Offset for Ifx_FLASHC_ECC_LOGIR_Bits.ECCTHRESHOLD */
#define IFX_FLASHC_ECC_LOGIR_ECCTHRESHOLD_OFF (0u)

/** \brief Length for Ifx_FLASHC_ECC_LOGIR_Bits.ECC1CNT */
#define IFX_FLASHC_ECC_LOGIR_ECC1CNT_LEN (16u)

/** \brief Mask for Ifx_FLASHC_ECC_LOGIR_Bits.ECC1CNT */
#define IFX_FLASHC_ECC_LOGIR_ECC1CNT_MSK (0xffffu)

/** \brief Offset for Ifx_FLASHC_ECC_LOGIR_Bits.ECC1CNT */
#define IFX_FLASHC_ECC_LOGIR_ECC1CNT_OFF (16u)

/** \brief Length for Ifx_FLASHC_MPC_CFG_Bits.RESPONSE */
#define IFX_FLASHC_MPC_CFG_RESPONSE_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_CFG_Bits.RESPONSE */
#define IFX_FLASHC_MPC_CFG_RESPONSE_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_CFG_Bits.RESPONSE */
#define IFX_FLASHC_MPC_CFG_RESPONSE_OFF (4u)

/** \brief Length for Ifx_FLASHC_MPC_CTRL_Bits.AUTO_INC */
#define IFX_FLASHC_MPC_CTRL_AUTO_INC_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_CTRL_Bits.AUTO_INC */
#define IFX_FLASHC_MPC_CTRL_AUTO_INC_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_CTRL_Bits.AUTO_INC */
#define IFX_FLASHC_MPC_CTRL_AUTO_INC_OFF (8u)

/** \brief Length for Ifx_FLASHC_MPC_CTRL_Bits.LOCK */
#define IFX_FLASHC_MPC_CTRL_LOCK_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_CTRL_Bits.LOCK */
#define IFX_FLASHC_MPC_CTRL_LOCK_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_CTRL_Bits.LOCK */
#define IFX_FLASHC_MPC_CTRL_LOCK_OFF (31u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_MAX_Bits.VALUE */
#define IFX_FLASHC_MPC_BLK_MAX_VALUE_LEN (32u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_MAX_Bits.VALUE */
#define IFX_FLASHC_MPC_BLK_MAX_VALUE_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_MAX_Bits.VALUE */
#define IFX_FLASHC_MPC_BLK_MAX_VALUE_OFF (0u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_FLASHC_MPC_BLK_CFG_BLOCK_SIZE_LEN (4u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_FLASHC_MPC_BLK_CFG_BLOCK_SIZE_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_FLASHC_MPC_BLK_CFG_BLOCK_SIZE_OFF (0u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_FLASHC_MPC_BLK_CFG_INIT_IN_PROGRESS_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_FLASHC_MPC_BLK_CFG_INIT_IN_PROGRESS_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_FLASHC_MPC_BLK_CFG_INIT_IN_PROGRESS_OFF (31u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_IDX_Bits.VALUE */
#define IFX_FLASHC_MPC_BLK_IDX_VALUE_LEN (32u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_IDX_Bits.VALUE */
#define IFX_FLASHC_MPC_BLK_IDX_VALUE_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_IDX_Bits.VALUE */
#define IFX_FLASHC_MPC_BLK_IDX_VALUE_OFF (0u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS0 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS0_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS0 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS0_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS0 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS0_OFF (0u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS1 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS1_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS1 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS1_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS1 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS1_OFF (1u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS2 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS2_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS2 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS2_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS2 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS2_OFF (2u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS3 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS3_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS3 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS3_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS3 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS3_OFF (3u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS4 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS4_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS4 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS4_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS4 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS4_OFF (4u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS5 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS5_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS5 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS5_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS5 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS5_OFF (5u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS6 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS6_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS6 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS6_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS6 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS6_OFF (6u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS7 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS7_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS7 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS7_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS7 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS7_OFF (7u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS8 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS8_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS8 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS8_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS8 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS8_OFF (8u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS9 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS9_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS9 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS9_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS9 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS9_OFF (9u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS10 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS10_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS10 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS10_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS10 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS10_OFF (10u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS11 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS11_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS11 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS11_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS11 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS11_OFF (11u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS12 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS12_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS12 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS12_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS12 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS12_OFF (12u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS13 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS13_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS13 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS13_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS13 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS13_OFF (13u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS14 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS14_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS14 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS14_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS14 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS14_OFF (14u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS15 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS15_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS15 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS15_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS15 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS15_OFF (15u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS16 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS16_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS16 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS16_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS16 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS16_OFF (16u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS17 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS17_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS17 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS17_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS17 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS17_OFF (17u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS18 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS18_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS18 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS18_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS18 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS18_OFF (18u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS19 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS19_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS19 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS19_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS19 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS19_OFF (19u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS20 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS20_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS20 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS20_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS20 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS20_OFF (20u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS21 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS21_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS21 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS21_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS21 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS21_OFF (21u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS22 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS22_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS22 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS22_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS22 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS22_OFF (22u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS23 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS23_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS23 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS23_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS23 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS23_OFF (23u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS24 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS24_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS24 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS24_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS24 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS24_OFF (24u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS25 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS25_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS25 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS25_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS25 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS25_OFF (25u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS26 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS26_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS26 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS26_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS26 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS26_OFF (26u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS27 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS27_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS27 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS27_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS27 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS27_OFF (27u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS28 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS28_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS28 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS28_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS28 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS28_OFF (28u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS29 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS29_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS29 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS29_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS29 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS29_OFF (29u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS30 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS30_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS30 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS30_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS30 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS30_OFF (30u)

/** \brief Length for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS31 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS31_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS31 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS31_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_BLK_LUT_Bits.ATTR_NS31 */
#define IFX_FLASHC_MPC_BLK_LUT_ATTR_NS31_OFF (31u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_CTRL_Bits.AUTO_INC */
#define IFX_FLASHC_MPC_ROT_CTRL_AUTO_INC_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_CTRL_Bits.AUTO_INC */
#define IFX_FLASHC_MPC_ROT_CTRL_AUTO_INC_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_CTRL_Bits.AUTO_INC */
#define IFX_FLASHC_MPC_ROT_CTRL_AUTO_INC_OFF (8u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_CTRL_Bits.LOCK */
#define IFX_FLASHC_MPC_ROT_CTRL_LOCK_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_CTRL_Bits.LOCK */
#define IFX_FLASHC_MPC_ROT_CTRL_LOCK_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_CTRL_Bits.LOCK */
#define IFX_FLASHC_MPC_ROT_CTRL_LOCK_OFF (31u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_MAX_Bits.VALUE */
#define IFX_FLASHC_MPC_ROT_BLK_MAX_VALUE_LEN (32u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_MAX_Bits.VALUE */
#define IFX_FLASHC_MPC_ROT_BLK_MAX_VALUE_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_MAX_Bits.VALUE */
#define IFX_FLASHC_MPC_ROT_BLK_MAX_VALUE_OFF (0u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_FLASHC_MPC_ROT_BLK_CFG_BLOCK_SIZE_LEN (4u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_FLASHC_MPC_ROT_BLK_CFG_BLOCK_SIZE_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_CFG_Bits.BLOCK_SIZE */
#define IFX_FLASHC_MPC_ROT_BLK_CFG_BLOCK_SIZE_OFF (0u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_FLASHC_MPC_ROT_BLK_CFG_INIT_IN_PROGRESS_LEN (1u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_FLASHC_MPC_ROT_BLK_CFG_INIT_IN_PROGRESS_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_CFG_Bits.INIT_IN_PROGRESS */
#define IFX_FLASHC_MPC_ROT_BLK_CFG_INIT_IN_PROGRESS_OFF (31u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_IDX_Bits.VALUE */
#define IFX_FLASHC_MPC_ROT_BLK_IDX_VALUE_LEN (32u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_IDX_Bits.VALUE */
#define IFX_FLASHC_MPC_ROT_BLK_IDX_VALUE_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_IDX_Bits.VALUE */
#define IFX_FLASHC_MPC_ROT_BLK_IDX_VALUE_OFF (0u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_PC_Bits.PC */
#define IFX_FLASHC_MPC_ROT_BLK_PC_PC_LEN (4u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_PC_Bits.PC */
#define IFX_FLASHC_MPC_ROT_BLK_PC_PC_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_PC_Bits.PC */
#define IFX_FLASHC_MPC_ROT_BLK_PC_PC_OFF (0u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR0 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR0_LEN (3u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR0 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR0_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR0 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR0_OFF (0u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR1 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR1_LEN (3u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR1 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR1_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR1 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR1_OFF (4u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR2 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR2_LEN (3u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR2 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR2_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR2 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR2_OFF (8u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR3 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR3_LEN (3u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR3 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR3_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR3 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR3_OFF (12u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR4 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR4_LEN (3u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR4 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR4_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR4 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR4_OFF (16u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR5 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR5_LEN (3u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR5 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR5_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR5 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR5_OFF (20u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR6 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR6_LEN (3u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR6 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR6_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR6 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR6_OFF (24u)

/** \brief Length for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR7 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR7_LEN (3u)

/** \brief Mask for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR7 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR7_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_MPC_ROT_BLK_LUT_Bits.ATTR7 */
#define IFX_FLASHC_MPC_ROT_BLK_LUT_ATTR7_OFF (28u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_ADDR_0 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_ADDR_0_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_ADDR_0 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_ADDR_0_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_ADDR_0 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_ADDR_0_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_EN_0 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_EN_0_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_EN_0 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_EN_0_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_EN_0 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_EN_0_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_ADDR_1 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_ADDR_1_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_ADDR_1 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_ADDR_1_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_ADDR_1 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_ADDR_1_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_EN_1 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_EN_1_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_EN_1 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_EN_1_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_EN_1 */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_EN_1_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_AXA */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_AXA_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_AXA */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_AXA_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RED_CTL01_Bits.RED_AXA */
#define IFX_FLASHC_FM_CTL_RED_CTL01_RED_AXA_OFF (25u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_ADDR_2 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_ADDR_2_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_ADDR_2 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_ADDR_2_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_ADDR_2 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_ADDR_2_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_EN_2 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_EN_2_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_EN_2 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_EN_2_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_EN_2 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_EN_2_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_ADDR_3 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_ADDR_3_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_ADDR_3 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_ADDR_3_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_ADDR_3 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_ADDR_3_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_EN_3 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_EN_3_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_EN_3 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_EN_3_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RED_CTL23_Bits.RED_EN_3 */
#define IFX_FLASHC_FM_CTL_RED_CTL23_RED_EN_3_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_PL_DATA_Bits.DATA32 */
#define IFX_FLASHC_FM_CTL_FM_PL_DATA_DATA32_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_PL_DATA_Bits.DATA32 */
#define IFX_FLASHC_FM_CTL_FM_PL_DATA_DATA32_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_PL_DATA_Bits.DATA32 */
#define IFX_FLASHC_FM_CTL_FM_PL_DATA_DATA32_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.FM_MODE */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_FM_MODE_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.FM_MODE */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_FM_MODE_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.FM_MODE */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_FM_MODE_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.FM_SEQ */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_FM_SEQ_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.FM_SEQ */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_FM_SEQ_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.FM_SEQ */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_FM_SEQ_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.DAA_MUX_SEL */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_DAA_MUX_SEL_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.DAA_MUX_SEL */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_DAA_MUX_SEL_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.DAA_MUX_SEL */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_DAA_MUX_SEL_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.IF_SEL */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_IF_SEL_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.IF_SEL */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_IF_SEL_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.IF_SEL */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_IF_SEL_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.WR_EN */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_WR_EN_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.WR_EN */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_WR_EN_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FLASH_MACRO_CTL_Bits.WR_EN */
#define IFX_FLASHC_FM_CTL_FLASH_MACRO_CTL_WR_EN_OFF (25u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.TIMER_STATUS */
#define IFX_FLASHC_FM_CTL_STATUS_TIMER_STATUS_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.TIMER_STATUS */
#define IFX_FLASHC_FM_CTL_STATUS_TIMER_STATUS_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.TIMER_STATUS */
#define IFX_FLASHC_FM_CTL_STATUS_TIMER_STATUS_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.HV_REGS_ISOLATED */
#define IFX_FLASHC_FM_CTL_STATUS_HV_REGS_ISOLATED_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.HV_REGS_ISOLATED */
#define IFX_FLASHC_FM_CTL_STATUS_HV_REGS_ISOLATED_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.HV_REGS_ISOLATED */
#define IFX_FLASHC_FM_CTL_STATUS_HV_REGS_ISOLATED_OFF (1u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.ILLEGAL_HVOP */
#define IFX_FLASHC_FM_CTL_STATUS_ILLEGAL_HVOP_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.ILLEGAL_HVOP */
#define IFX_FLASHC_FM_CTL_STATUS_ILLEGAL_HVOP_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.ILLEGAL_HVOP */
#define IFX_FLASHC_FM_CTL_STATUS_ILLEGAL_HVOP_OFF (2u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.TURBO_N */
#define IFX_FLASHC_FM_CTL_STATUS_TURBO_N_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.TURBO_N */
#define IFX_FLASHC_FM_CTL_STATUS_TURBO_N_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.TURBO_N */
#define IFX_FLASHC_FM_CTL_STATUS_TURBO_N_OFF (3u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.WR_EN_MON */
#define IFX_FLASHC_FM_CTL_STATUS_WR_EN_MON_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.WR_EN_MON */
#define IFX_FLASHC_FM_CTL_STATUS_WR_EN_MON_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.WR_EN_MON */
#define IFX_FLASHC_FM_CTL_STATUS_WR_EN_MON_OFF (4u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.IF_SEL_MON */
#define IFX_FLASHC_FM_CTL_STATUS_IF_SEL_MON_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.IF_SEL_MON */
#define IFX_FLASHC_FM_CTL_STATUS_IF_SEL_MON_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.IF_SEL_MON */
#define IFX_FLASHC_FM_CTL_STATUS_IF_SEL_MON_OFF (5u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.TIMER_PE_SYNC */
#define IFX_FLASHC_FM_CTL_STATUS_TIMER_PE_SYNC_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.TIMER_PE_SYNC */
#define IFX_FLASHC_FM_CTL_STATUS_TIMER_PE_SYNC_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.TIMER_PE_SYNC */
#define IFX_FLASHC_FM_CTL_STATUS_TIMER_PE_SYNC_OFF (6u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.R_GRANT_DELAY_STATUS */
#define IFX_FLASHC_FM_CTL_STATUS_R_GRANT_DELAY_STATUS_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.R_GRANT_DELAY_STATUS */
#define IFX_FLASHC_FM_CTL_STATUS_R_GRANT_DELAY_STATUS_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.R_GRANT_DELAY_STATUS */
#define IFX_FLASHC_FM_CTL_STATUS_R_GRANT_DELAY_STATUS_OFF (7u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.FM_BUSY */
#define IFX_FLASHC_FM_CTL_STATUS_FM_BUSY_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.FM_BUSY */
#define IFX_FLASHC_FM_CTL_STATUS_FM_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.FM_BUSY */
#define IFX_FLASHC_FM_CTL_STATUS_FM_BUSY_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.FM_READY */
#define IFX_FLASHC_FM_CTL_STATUS_FM_READY_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.FM_READY */
#define IFX_FLASHC_FM_CTL_STATUS_FM_READY_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.FM_READY */
#define IFX_FLASHC_FM_CTL_STATUS_FM_READY_OFF (9u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.POS_PUMP_VLO */
#define IFX_FLASHC_FM_CTL_STATUS_POS_PUMP_VLO_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.POS_PUMP_VLO */
#define IFX_FLASHC_FM_CTL_STATUS_POS_PUMP_VLO_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.POS_PUMP_VLO */
#define IFX_FLASHC_FM_CTL_STATUS_POS_PUMP_VLO_OFF (10u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.NEG_PUMP_VHI */
#define IFX_FLASHC_FM_CTL_STATUS_NEG_PUMP_VHI_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.NEG_PUMP_VHI */
#define IFX_FLASHC_FM_CTL_STATUS_NEG_PUMP_VHI_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.NEG_PUMP_VHI */
#define IFX_FLASHC_FM_CTL_STATUS_NEG_PUMP_VHI_OFF (11u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.RWW */
#define IFX_FLASHC_FM_CTL_STATUS_RWW_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.RWW */
#define IFX_FLASHC_FM_CTL_STATUS_RWW_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.RWW */
#define IFX_FLASHC_FM_CTL_STATUS_RWW_OFF (12u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.ECC_CFG */
#define IFX_FLASHC_FM_CTL_STATUS_ECC_CFG_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.ECC_CFG */
#define IFX_FLASHC_FM_CTL_STATUS_ECC_CFG_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.ECC_CFG */
#define IFX_FLASHC_FM_CTL_STATUS_ECC_CFG_OFF (13u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.SECTOR1_SR */
#define IFX_FLASHC_FM_CTL_STATUS_SECTOR1_SR_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.SECTOR1_SR */
#define IFX_FLASHC_FM_CTL_STATUS_SECTOR1_SR_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.SECTOR1_SR */
#define IFX_FLASHC_FM_CTL_STATUS_SECTOR1_SR_OFF (14u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.RESET_MM */
#define IFX_FLASHC_FM_CTL_STATUS_RESET_MM_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.RESET_MM */
#define IFX_FLASHC_FM_CTL_STATUS_RESET_MM_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.RESET_MM */
#define IFX_FLASHC_FM_CTL_STATUS_RESET_MM_OFF (15u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.ROW_ODD */
#define IFX_FLASHC_FM_CTL_STATUS_ROW_ODD_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.ROW_ODD */
#define IFX_FLASHC_FM_CTL_STATUS_ROW_ODD_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.ROW_ODD */
#define IFX_FLASHC_FM_CTL_STATUS_ROW_ODD_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.ROW_EVEN */
#define IFX_FLASHC_FM_CTL_STATUS_ROW_EVEN_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.ROW_EVEN */
#define IFX_FLASHC_FM_CTL_STATUS_ROW_EVEN_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.ROW_EVEN */
#define IFX_FLASHC_FM_CTL_STATUS_ROW_EVEN_OFF (17u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.HVOP_SUB_SECTOR_N */
#define IFX_FLASHC_FM_CTL_STATUS_HVOP_SUB_SECTOR_N_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.HVOP_SUB_SECTOR_N */
#define IFX_FLASHC_FM_CTL_STATUS_HVOP_SUB_SECTOR_N_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.HVOP_SUB_SECTOR_N */
#define IFX_FLASHC_FM_CTL_STATUS_HVOP_SUB_SECTOR_N_OFF (18u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.HVOP_SECTOR */
#define IFX_FLASHC_FM_CTL_STATUS_HVOP_SECTOR_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.HVOP_SECTOR */
#define IFX_FLASHC_FM_CTL_STATUS_HVOP_SECTOR_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.HVOP_SECTOR */
#define IFX_FLASHC_FM_CTL_STATUS_HVOP_SECTOR_OFF (19u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.HVOP_BULK_ALL */
#define IFX_FLASHC_FM_CTL_STATUS_HVOP_BULK_ALL_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.HVOP_BULK_ALL */
#define IFX_FLASHC_FM_CTL_STATUS_HVOP_BULK_ALL_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.HVOP_BULK_ALL */
#define IFX_FLASHC_FM_CTL_STATUS_HVOP_BULK_ALL_OFF (20u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.CBUS_RA_MATCH */
#define IFX_FLASHC_FM_CTL_STATUS_CBUS_RA_MATCH_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.CBUS_RA_MATCH */
#define IFX_FLASHC_FM_CTL_STATUS_CBUS_RA_MATCH_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.CBUS_RA_MATCH */
#define IFX_FLASHC_FM_CTL_STATUS_CBUS_RA_MATCH_OFF (21u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.CBUS_RED_ROW_EN */
#define IFX_FLASHC_FM_CTL_STATUS_CBUS_RED_ROW_EN_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.CBUS_RED_ROW_EN */
#define IFX_FLASHC_FM_CTL_STATUS_CBUS_RED_ROW_EN_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.CBUS_RED_ROW_EN */
#define IFX_FLASHC_FM_CTL_STATUS_CBUS_RED_ROW_EN_OFF (22u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.RQ_ERROR */
#define IFX_FLASHC_FM_CTL_STATUS_RQ_ERROR_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.RQ_ERROR */
#define IFX_FLASHC_FM_CTL_STATUS_RQ_ERROR_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.RQ_ERROR */
#define IFX_FLASHC_FM_CTL_STATUS_RQ_ERROR_OFF (23u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.PUMP_PDAC */
#define IFX_FLASHC_FM_CTL_STATUS_PUMP_PDAC_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.PUMP_PDAC */
#define IFX_FLASHC_FM_CTL_STATUS_PUMP_PDAC_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.PUMP_PDAC */
#define IFX_FLASHC_FM_CTL_STATUS_PUMP_PDAC_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_STATUS_Bits.PUMP_NDAC */
#define IFX_FLASHC_FM_CTL_STATUS_PUMP_NDAC_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_STATUS_Bits.PUMP_NDAC */
#define IFX_FLASHC_FM_CTL_STATUS_PUMP_NDAC_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_STATUS_Bits.PUMP_NDAC */
#define IFX_FLASHC_FM_CTL_STATUS_PUMP_NDAC_OFF (28u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_ADDR_Bits.RA */
#define IFX_FLASHC_FM_CTL_FM_ADDR_RA_LEN (16u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_ADDR_Bits.RA */
#define IFX_FLASHC_FM_CTL_FM_ADDR_RA_MSK (0xffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_ADDR_Bits.RA */
#define IFX_FLASHC_FM_CTL_FM_ADDR_RA_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_ADDR_Bits.BA */
#define IFX_FLASHC_FM_CTL_FM_ADDR_BA_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_ADDR_Bits.BA */
#define IFX_FLASHC_FM_CTL_FM_ADDR_BA_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_ADDR_Bits.BA */
#define IFX_FLASHC_FM_CTL_FM_ADDR_BA_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_ADDR_Bits.AXA */
#define IFX_FLASHC_FM_CTL_FM_ADDR_AXA_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_ADDR_Bits.AXA */
#define IFX_FLASHC_FM_CTL_FM_ADDR_AXA_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_ADDR_Bits.AXA */
#define IFX_FLASHC_FM_CTL_FM_ADDR_AXA_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_BOOKMARK_Bits.BOOKMARK */
#define IFX_FLASHC_FM_CTL_BOOKMARK_BOOKMARK_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_BOOKMARK_Bits.BOOKMARK */
#define IFX_FLASHC_FM_CTL_BOOKMARK_BOOKMARK_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_BOOKMARK_Bits.BOOKMARK */
#define IFX_FLASHC_FM_CTL_BOOKMARK_BOOKMARK_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.ROW_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_ROW_COUNT_LEN (16u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.ROW_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_ROW_COUNT_MSK (0xffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.ROW_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_ROW_COUNT_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.BANK_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_BANK_COUNT_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.BANK_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_BANK_COUNT_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.BANK_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_BANK_COUNT_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.WORD_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_WORD_SIZE_LOG2_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.WORD_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_WORD_SIZE_LOG2_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.WORD_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_WORD_SIZE_LOG2_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.PAGE_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_PAGE_SIZE_LOG2_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.PAGE_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_PAGE_SIZE_LOG2_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_GEOMETRY_Bits.PAGE_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_PAGE_SIZE_LOG2_OFF (28u)

/** \brief Length for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.ROW_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_ROW_COUNT_LEN (16u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.ROW_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_ROW_COUNT_MSK (0xffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.ROW_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_ROW_COUNT_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.BANK_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_BANK_COUNT_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.BANK_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_BANK_COUNT_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.BANK_COUNT */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_BANK_COUNT_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.WORD_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_WORD_SIZE_LOG2_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.WORD_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_WORD_SIZE_LOG2_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.WORD_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_WORD_SIZE_LOG2_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.PAGE_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_PAGE_SIZE_LOG2_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.PAGE_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_PAGE_SIZE_LOG2_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_Bits.PAGE_SIZE_LOG2 */
#define IFX_FLASHC_FM_CTL_GEOMETRY_SUPERVISORY_PAGE_SIZE_LOG2_OFF (28u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.MDAC */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_MDAC_LEN (7u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.MDAC */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_MDAC_MSK (0x7fu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.MDAC */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_MDAC_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SPARE_ANA_CTL0 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SPARE_ANA_CTL0_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SPARE_ANA_CTL0 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SPARE_ANA_CTL0_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SPARE_ANA_CTL0 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SPARE_ANA_CTL0_OFF (7u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.ECC_ENC_DIS */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_ECC_ENC_DIS_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.ECC_ENC_DIS */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_ECC_ENC_DIS_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.ECC_ENC_DIS */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_ECC_ENC_DIS_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.DNU_2_TM_ECC_DIS */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_DNU_2_TM_ECC_DIS_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.DNU_2_TM_ECC_DIS */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_DNU_2_TM_ECC_DIS_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.DNU_2_TM_ECC_DIS */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_DNU_2_TM_ECC_DIS_OFF (9u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.RST_SFT_HVPL */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_RST_SFT_HVPL_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.RST_SFT_HVPL */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_RST_SFT_HVPL_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.RST_SFT_HVPL */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_RST_SFT_HVPL_OFF (10u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.FLIP_AMUXBUS_AB */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_FLIP_AMUXBUS_AB_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.FLIP_AMUXBUS_AB */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_FLIP_AMUXBUS_AB_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.FLIP_AMUXBUS_AB */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_FLIP_AMUXBUS_AB_OFF (11u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.NDAC_MIN */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_NDAC_MIN_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.NDAC_MIN */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_NDAC_MIN_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.NDAC_MIN */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_NDAC_MIN_OFF (12u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.PDAC_MIN */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_PDAC_MIN_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.PDAC_MIN */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_PDAC_MIN_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.PDAC_MIN */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_PDAC_MIN_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_SEQ01 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_SEQ01_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_SEQ01 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_SEQ01_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_SEQ01 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_SEQ01_OFF (20u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_SEQ12 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_SEQ12_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_SEQ12 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_SEQ12_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_SEQ12 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_SEQ12_OFF (22u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_SEQ23 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_SEQ23_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_SEQ23 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_SEQ23_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_SEQ23 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_SEQ23_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_SEQ30 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_SEQ30_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_SEQ30 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_SEQ30_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_SEQ30 */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_SEQ30_OFF (26u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_PEON */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_PEON_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_PEON */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_PEON_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_PEON */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_PEON_OFF (28u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_PEOFF */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_PEOFF_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_PEOFF */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_PEOFF_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL0_Bits.SCALE_PRG_PEOFF */
#define IFX_FLASHC_FM_CTL_ANA_CTL0_SCALE_PRG_PEOFF_OFF (30u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NDAC_MAX */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NDAC_MAX_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NDAC_MAX */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NDAC_MAX_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NDAC_MAX */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NDAC_MAX_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NDAC_STEP */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NDAC_STEP_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NDAC_STEP */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NDAC_STEP_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NDAC_STEP */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NDAC_STEP_OFF (4u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.PDAC_MAX */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_PDAC_MAX_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.PDAC_MAX */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_PDAC_MAX_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.PDAC_MAX */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_PDAC_MAX_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.PDAC_STEP */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_PDAC_STEP_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.PDAC_STEP */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_PDAC_STEP_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.PDAC_STEP */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_PDAC_STEP_OFF (12u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NPDAC_STEP_TIME */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NPDAC_STEP_TIME_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NPDAC_STEP_TIME */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NPDAC_STEP_TIME_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NPDAC_STEP_TIME */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NPDAC_STEP_TIME_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NPDAC_ZERO_TIME */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NPDAC_ZERO_TIME_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NPDAC_ZERO_TIME */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NPDAC_ZERO_TIME_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ANA_CTL1_Bits.NPDAC_ZERO_TIME */
#define IFX_FLASHC_FM_CTL_ANA_CTL1_NPDAC_ZERO_TIME_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_PL_WRDATA_ALL_Bits.DATA32 */
#define IFX_FLASHC_FM_CTL_FM_PL_WRDATA_ALL_DATA32_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_PL_WRDATA_ALL_Bits.DATA32 */
#define IFX_FLASHC_FM_CTL_FM_PL_WRDATA_ALL_DATA32_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_PL_WRDATA_ALL_Bits.DATA32 */
#define IFX_FLASHC_FM_CTL_FM_PL_WRDATA_ALL_DATA32_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR_Bits.FM_BXA */
#define IFX_FLASHC_FM_CTL_FM_REFRESH_ADDR_FM_BXA_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR_Bits.FM_BXA */
#define IFX_FLASHC_FM_CTL_FM_REFRESH_ADDR_FM_BXA_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR_Bits.FM_BXA */
#define IFX_FLASHC_FM_CTL_FM_REFRESH_ADDR_FM_BXA_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR_Bits.FM_CXA */
#define IFX_FLASHC_FM_CTL_FM_REFRESH_ADDR_FM_CXA_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR_Bits.FM_CXA */
#define IFX_FLASHC_FM_CTL_FM_REFRESH_ADDR_FM_CXA_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_REFRESH_ADDR_Bits.FM_CXA */
#define IFX_FLASHC_FM_CTL_FM_REFRESH_ADDR_FM_CXA_OFF (4u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits.RGRANT_DELAY_ERS_SEQ01 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_ERS_RGRANT_DELAY_ERS_SEQ01_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits.RGRANT_DELAY_ERS_SEQ01 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_ERS_RGRANT_DELAY_ERS_SEQ01_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits.RGRANT_DELAY_ERS_SEQ01 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_ERS_RGRANT_DELAY_ERS_SEQ01_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits.RGRANT_DELAY_ERS_SEQ12 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_ERS_RGRANT_DELAY_ERS_SEQ12_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits.RGRANT_DELAY_ERS_SEQ12 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_ERS_RGRANT_DELAY_ERS_SEQ12_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits.RGRANT_DELAY_ERS_SEQ12 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_ERS_RGRANT_DELAY_ERS_SEQ12_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits.RGRANT_DELAY_ERS_SEQ23 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_ERS_RGRANT_DELAY_ERS_SEQ23_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits.RGRANT_DELAY_ERS_SEQ23 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_ERS_RGRANT_DELAY_ERS_SEQ23_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_ERS_Bits.RGRANT_DELAY_ERS_SEQ23 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_ERS_RGRANT_DELAY_ERS_SEQ23_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_SEQ01 */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_SEQ01_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_SEQ01 */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_SEQ01_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_SEQ01 */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_SEQ01_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_SEQ12 */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_SEQ12_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_SEQ12 */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_SEQ12_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_SEQ12 */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_SEQ12_OFF (2u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_SEQ23 */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_SEQ23_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_SEQ23 */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_SEQ23_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_SEQ23 */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_SEQ23_OFF (4u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_PEON */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_PEON_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_PEON */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_PEON_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_PEON */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_PEON_OFF (6u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_PEOFF */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_PEOFF_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_PEOFF */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_PEOFF_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.SCALE_ERS_PEOFF */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_SCALE_ERS_PEOFF_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.RGRANT_DELAY_ERS_PEON */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_RGRANT_DELAY_ERS_PEON_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.RGRANT_DELAY_ERS_PEON */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_RGRANT_DELAY_ERS_PEON_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.RGRANT_DELAY_ERS_PEON */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_RGRANT_DELAY_ERS_PEON_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.RGRANT_DELAY_ERS_PEOFF */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_RGRANT_DELAY_ERS_PEOFF_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.RGRANT_DELAY_ERS_PEOFF */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_RGRANT_DELAY_ERS_PEOFF_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_SCALE_ERS_Bits.RGRANT_DELAY_ERS_PEOFF */
#define IFX_FLASHC_FM_CTL_RGRANT_SCALE_ERS_RGRANT_DELAY_ERS_PEOFF_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_PW_SEQ23_Bits.PW_SEQ2_POST */
#define IFX_FLASHC_FM_CTL_PW_SEQ23_PW_SEQ2_POST_LEN (16u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_PW_SEQ23_Bits.PW_SEQ2_POST */
#define IFX_FLASHC_FM_CTL_PW_SEQ23_PW_SEQ2_POST_MSK (0xffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_PW_SEQ23_Bits.PW_SEQ2_POST */
#define IFX_FLASHC_FM_CTL_PW_SEQ23_PW_SEQ2_POST_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_PW_SEQ23_Bits.PW_SEQ3 */
#define IFX_FLASHC_FM_CTL_PW_SEQ23_PW_SEQ3_LEN (16u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_PW_SEQ23_Bits.PW_SEQ3 */
#define IFX_FLASHC_FM_CTL_PW_SEQ23_PW_SEQ3_MSK (0xffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_PW_SEQ23_Bits.PW_SEQ3 */
#define IFX_FLASHC_FM_CTL_PW_SEQ23_PW_SEQ3_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_PW_SEQ12_Bits.PW_SEQ1 */
#define IFX_FLASHC_FM_CTL_PW_SEQ12_PW_SEQ1_LEN (16u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_PW_SEQ12_Bits.PW_SEQ1 */
#define IFX_FLASHC_FM_CTL_PW_SEQ12_PW_SEQ1_MSK (0xffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_PW_SEQ12_Bits.PW_SEQ1 */
#define IFX_FLASHC_FM_CTL_PW_SEQ12_PW_SEQ1_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_PW_SEQ12_Bits.PW_SEQ2_PRE */
#define IFX_FLASHC_FM_CTL_PW_SEQ12_PW_SEQ2_PRE_LEN (16u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_PW_SEQ12_Bits.PW_SEQ2_PRE */
#define IFX_FLASHC_FM_CTL_PW_SEQ12_PW_SEQ2_PRE_MSK (0xffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_PW_SEQ12_Bits.PW_SEQ2_PRE */
#define IFX_FLASHC_FM_CTL_PW_SEQ12_PW_SEQ2_PRE_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.WAIT_FM_MEM_RD */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_WAIT_FM_MEM_RD_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.WAIT_FM_MEM_RD */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_WAIT_FM_MEM_RD_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.WAIT_FM_MEM_RD */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_WAIT_FM_MEM_RD_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.WAIT_FM_HV_RD */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_WAIT_FM_HV_RD_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.WAIT_FM_HV_RD */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_WAIT_FM_HV_RD_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.WAIT_FM_HV_RD */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_WAIT_FM_HV_RD_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.WAIT_FM_HV_WR */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_WAIT_FM_HV_WR_LEN (3u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.WAIT_FM_HV_WR */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_WAIT_FM_HV_WR_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.WAIT_FM_HV_WR */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_WAIT_FM_HV_WR_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.FM_RWW_MODE */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_FM_RWW_MODE_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.FM_RWW_MODE */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_FM_RWW_MODE_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.FM_RWW_MODE */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_FM_RWW_MODE_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.LV_SPARE_1 */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_LV_SPARE_1_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.LV_SPARE_1 */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_LV_SPARE_1_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.LV_SPARE_1 */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_LV_SPARE_1_OFF (26u)

/** \brief Length for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.PL_SOFT_SET_EN */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_PL_SOFT_SET_EN_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.PL_SOFT_SET_EN */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_PL_SOFT_SET_EN_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_WAIT_CTL_Bits.PL_SOFT_SET_EN */
#define IFX_FLASHC_FM_CTL_WAIT_CTL_PL_SOFT_SET_EN_OFF (29u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_PRG_SEQ12 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_PRG_SEQ12_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_PRG_SEQ12 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_PRG_SEQ12_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_PRG_SEQ12 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_PRG_SEQ12_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_PRG_SEQ23 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_PRG_SEQ23_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_PRG_SEQ23 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_PRG_SEQ23_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_PRG_SEQ23 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_PRG_SEQ23_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_SEQ30 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_SEQ30_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_SEQ30 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_SEQ30_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_SEQ30 */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_SEQ30_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_CLK */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_CLK_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_CLK */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_CLK_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.RGRANT_DELAY_CLK */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_RGRANT_DELAY_CLK_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.HV_PARAMS_LOADED */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_HV_PARAMS_LOADED_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.HV_PARAMS_LOADED */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_HV_PARAMS_LOADED_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_RGRANT_DELAY_PRG_Bits.HV_PARAMS_LOADED */
#define IFX_FLASHC_FM_CTL_RGRANT_DELAY_PRG_HV_PARAMS_LOADED_OFF (31u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.TIMER_CLOCK_FREQ */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_TIMER_CLOCK_FREQ_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.TIMER_CLOCK_FREQ */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_TIMER_CLOCK_FREQ_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.TIMER_CLOCK_FREQ */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_TIMER_CLOCK_FREQ_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.RGRANT_DELAY_PRG_PEON */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_RGRANT_DELAY_PRG_PEON_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.RGRANT_DELAY_PRG_PEON */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_RGRANT_DELAY_PRG_PEON_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.RGRANT_DELAY_PRG_PEON */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_RGRANT_DELAY_PRG_PEON_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.RGRANT_DELAY_PRG_PEOFF */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_RGRANT_DELAY_PRG_PEOFF_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.RGRANT_DELAY_PRG_PEOFF */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_RGRANT_DELAY_PRG_PEOFF_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.RGRANT_DELAY_PRG_PEOFF */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_RGRANT_DELAY_PRG_PEOFF_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.RGRANT_DELAY_PRG_SEQ01 */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_RGRANT_DELAY_PRG_SEQ01_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.RGRANT_DELAY_PRG_SEQ01 */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_RGRANT_DELAY_PRG_SEQ01_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CLK_CTL_Bits.RGRANT_DELAY_PRG_SEQ01 */
#define IFX_FLASHC_FM_CTL_TIMER_CLK_CTL_RGRANT_DELAY_PRG_SEQ01_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PERIOD */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PERIOD_LEN (15u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PERIOD */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PERIOD_MSK (0x7fffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PERIOD */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PERIOD_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.SCALE */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_SCALE_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.SCALE */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_SCALE_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.SCALE */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_SCALE_OFF (15u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.AUTO_SEQUENCE */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_AUTO_SEQUENCE_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.AUTO_SEQUENCE */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_AUTO_SEQUENCE_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.AUTO_SEQUENCE */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_AUTO_SEQUENCE_OFF (24u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PRE_PROG */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PRE_PROG_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PRE_PROG */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PRE_PROG_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PRE_PROG */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PRE_PROG_OFF (25u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PRE_PROG_CSL */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PRE_PROG_CSL_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PRE_PROG_CSL */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PRE_PROG_CSL_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PRE_PROG_CSL */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PRE_PROG_CSL_OFF (26u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PUMP_EN */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PUMP_EN_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PUMP_EN */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PUMP_EN_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.PUMP_EN */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_PUMP_EN_OFF (29u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.ACLK_EN */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_ACLK_EN_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.ACLK_EN */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_ACLK_EN_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.ACLK_EN */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_ACLK_EN_OFF (30u)

/** \brief Length for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.TIMER_EN */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_TIMER_EN_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.TIMER_EN */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_TIMER_EN_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_TIMER_CTL_Bits.TIMER_EN */
#define IFX_FLASHC_FM_CTL_TIMER_CTL_TIMER_EN_OFF (31u)

/** \brief Length for Ifx_FLASHC_FM_CTL_ACLK_CTL_Bits.ACLK_GEN */
#define IFX_FLASHC_FM_CTL_ACLK_CTL_ACLK_GEN_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_ACLK_CTL_Bits.ACLK_GEN */
#define IFX_FLASHC_FM_CTL_ACLK_CTL_ACLK_GEN_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_ACLK_CTL_Bits.ACLK_GEN */
#define IFX_FLASHC_FM_CTL_ACLK_CTL_ACLK_GEN_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_INTR_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_TIMER_EXPIRED_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_INTR_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_TIMER_EXPIRED_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_INTR_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_TIMER_EXPIRED_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_INTR_SET_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_SET_TIMER_EXPIRED_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_INTR_SET_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_SET_TIMER_EXPIRED_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_INTR_SET_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_SET_TIMER_EXPIRED_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_INTR_MASK_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_MASK_TIMER_EXPIRED_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_INTR_MASK_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_MASK_TIMER_EXPIRED_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_INTR_MASK_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_MASK_TIMER_EXPIRED_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_INTR_MASKED_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_MASKED_TIMER_EXPIRED_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_INTR_MASKED_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_MASKED_TIMER_EXPIRED_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_INTR_MASKED_Bits.TIMER_EXPIRED */
#define IFX_FLASHC_FM_CTL_INTR_MASKED_TIMER_EXPIRED_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.VCT_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_VCT_TRIM_HV_LEN (5u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.VCT_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_VCT_TRIM_HV_MSK (0x1fu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.VCT_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_VCT_TRIM_HV_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.CDAC_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_CDAC_HV_LEN (3u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.CDAC_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_CDAC_HV_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.CDAC_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_CDAC_HV_OFF (5u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.VBG_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_VBG_TRIM_HV_LEN (6u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.VBG_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_VBG_TRIM_HV_MSK (0x3fu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.VBG_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_VBG_TRIM_HV_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.VBG_TC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_VBG_TC_TRIM_HV_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.VBG_TC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_VBG_TC_TRIM_HV_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.VBG_TC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_VBG_TC_TRIM_HV_OFF (14u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.IPREF_TRIMA_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_IPREF_TRIMA_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.IPREF_TRIMA_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_IPREF_TRIMA_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.IPREF_TRIMA_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_IPREF_TRIMA_HV_OFF (18u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.SPARE_CTL0_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_SPARE_CTL0_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.SPARE_CTL0_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_SPARE_CTL0_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL0_Bits.SPARE_CTL0_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL0_SPARE_CTL0_HV_OFF (19u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.ICREF_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_ICREF_TRIM_HV_LEN (6u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.ICREF_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_ICREF_TRIM_HV_MSK (0x3fu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.ICREF_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_ICREF_TRIM_HV_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.ICREF_TC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_ICREF_TC_TRIM_HV_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.ICREF_TC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_ICREF_TC_TRIM_HV_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.ICREF_TC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_ICREF_TC_TRIM_HV_OFF (6u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.IPREF_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_IPREF_TRIM_HV_LEN (5u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.IPREF_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_IPREF_TRIM_HV_MSK (0x1fu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.IPREF_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_IPREF_TRIM_HV_OFF (10u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.IPREF_TC_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_IPREF_TC_HV_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.IPREF_TC_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_IPREF_TC_HV_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.IPREF_TC_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_IPREF_TC_HV_OFF (15u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.SPARE_CTL1_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_SPARE_CTL1_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.SPARE_CTL1_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_SPARE_CTL1_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL1_Bits.SPARE_CTL1_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL1_SPARE_CTL1_HV_OFF (19u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.IDAC_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_IDAC_ULP_HV_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.IDAC_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_IDAC_ULP_HV_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.IDAC_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_IDAC_ULP_HV_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.SPARE_ULP_CTL2_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_SPARE_ULP_CTL2_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.SPARE_ULP_CTL2_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_SPARE_ULP_CTL2_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.SPARE_ULP_CTL2_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_SPARE_ULP_CTL2_HV_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.VREF_SEL_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_VREF_SEL_ULP_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.VREF_SEL_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_VREF_SEL_ULP_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.VREF_SEL_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_VREF_SEL_ULP_HV_OFF (9u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.IDAC_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_IDAC_LP_HV_LEN (8u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.IDAC_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_IDAC_LP_HV_MSK (0xffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.IDAC_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_IDAC_LP_HV_OFF (10u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.SPARE_LP_CTL2_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_SPARE_LP_CTL2_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.SPARE_LP_CTL2_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_SPARE_LP_CTL2_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.SPARE_LP_CTL2_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_SPARE_LP_CTL2_HV_OFF (18u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.VREF_SEL_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_VREF_SEL_LP_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.VREF_SEL_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_VREF_SEL_LP_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL2_Bits.VREF_SEL_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL2_VREF_SEL_LP_HV_OFF (19u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.OSC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_OSC_TRIM_HV_LEN (4u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.OSC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_OSC_TRIM_HV_MSK (0xfu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.OSC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_OSC_TRIM_HV_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.OSC_RANGE_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_OSC_RANGE_TRIM_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.OSC_RANGE_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_OSC_RANGE_TRIM_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.OSC_RANGE_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_OSC_RANGE_TRIM_HV_OFF (4u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.VPROT_ACT_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_VPROT_ACT_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.VPROT_ACT_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_VPROT_ACT_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.VPROT_ACT_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_VPROT_ACT_HV_OFF (5u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.OSC_TEMPCO_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_OSC_TEMPCO_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.OSC_TEMPCO_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_OSC_TEMPCO_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.OSC_TEMPCO_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_OSC_TEMPCO_HV_OFF (6u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.LAT_DIS3_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_LAT_DIS3_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.LAT_DIS3_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_LAT_DIS3_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.LAT_DIS3_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_LAT_DIS3_HV_OFF (7u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.PM_EN_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_PM_EN_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.PM_EN_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_PM_EN_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.PM_EN_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_PM_EN_HV_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.REG_ACT_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_REG_ACT_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.REG_ACT_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_REG_ACT_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.REG_ACT_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_REG_ACT_HV_OFF (9u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.FDIV_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_FDIV_TRIM_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.FDIV_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_FDIV_TRIM_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.FDIV_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_FDIV_TRIM_HV_OFF (10u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.VDDHI_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_VDDHI_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.VDDHI_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_VDDHI_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.VDDHI_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_VDDHI_HV_OFF (12u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.TURBO_PULSEW_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_TURBO_PULSEW_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.TURBO_PULSEW_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_TURBO_PULSEW_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.TURBO_PULSEW_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_TURBO_PULSEW_HV_OFF (13u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.IOSC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_IOSC_TRIM_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.IOSC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_IOSC_TRIM_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.IOSC_TRIM_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_IOSC_TRIM_HV_OFF (15u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.CL_ISO_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_CL_ISO_DIS_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.CL_ISO_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_CL_ISO_DIS_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.CL_ISO_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_CL_ISO_DIS_HV_OFF (17u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.R_GRANT_EN_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_R_GRANT_EN_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.R_GRANT_EN_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_R_GRANT_EN_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.R_GRANT_EN_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_R_GRANT_EN_HV_OFF (18u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.LP_ULP_SW_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_LP_ULP_SW_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.LP_ULP_SW_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_LP_ULP_SW_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL3_Bits.LP_ULP_SW_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL3_LP_ULP_SW_HV_OFF (19u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.VLIM_TRIM_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_VLIM_TRIM_ULP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.VLIM_TRIM_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_VLIM_TRIM_ULP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.VLIM_TRIM_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_VLIM_TRIM_ULP_HV_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.SPARE_CTL4_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_SPARE_CTL4_ULP_HV_LEN (3u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.SPARE_CTL4_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_SPARE_CTL4_ULP_HV_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.SPARE_CTL4_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_SPARE_CTL4_ULP_HV_OFF (2u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.SDAC_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_SDAC_ULP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.SDAC_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_SDAC_ULP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.SDAC_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_SDAC_ULP_HV_OFF (5u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.ITIM_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_ITIM_ULP_HV_LEN (6u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.ITIM_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_ITIM_ULP_HV_MSK (0x3fu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.ITIM_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_ITIM_ULP_HV_OFF (7u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.FM_READY_DEL_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_FM_READY_DEL_ULP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.FM_READY_DEL_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_FM_READY_DEL_ULP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.FM_READY_DEL_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_FM_READY_DEL_ULP_HV_OFF (13u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.SA_CTL_TRIM_T8_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_SA_CTL_TRIM_T8_ULP_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.SA_CTL_TRIM_T8_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_SA_CTL_TRIM_T8_ULP_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.SA_CTL_TRIM_T8_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_SA_CTL_TRIM_T8_ULP_HV_OFF (15u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.READY_RESTART_N_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_READY_RESTART_N_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.READY_RESTART_N_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_READY_RESTART_N_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.READY_RESTART_N_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_READY_RESTART_N_HV_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.VBST_S_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_VBST_S_DIS_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.VBST_S_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_VBST_S_DIS_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.VBST_S_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_VBST_S_DIS_HV_OFF (17u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.AUTO_HVPULSE_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_AUTO_HVPULSE_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.AUTO_HVPULSE_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_AUTO_HVPULSE_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.AUTO_HVPULSE_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_AUTO_HVPULSE_HV_OFF (18u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.UGB_EN_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_UGB_EN_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.UGB_EN_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_UGB_EN_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL4_Bits.UGB_EN_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL4_UGB_EN_HV_OFF (19u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.VLIM_TRIM_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_VLIM_TRIM_LP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.VLIM_TRIM_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_VLIM_TRIM_LP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.VLIM_TRIM_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_VLIM_TRIM_LP_HV_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SPARE_CTL5_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SPARE_CTL5_LP_HV_LEN (3u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SPARE_CTL5_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SPARE_CTL5_LP_HV_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SPARE_CTL5_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SPARE_CTL5_LP_HV_OFF (2u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SDAC_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SDAC_LP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SDAC_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SDAC_LP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SDAC_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SDAC_LP_HV_OFF (5u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.ITIM_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_ITIM_LP_HV_LEN (6u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.ITIM_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_ITIM_LP_HV_MSK (0x3fu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.ITIM_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_ITIM_LP_HV_OFF (7u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.FM_READY_DEL_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_FM_READY_DEL_LP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.FM_READY_DEL_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_FM_READY_DEL_LP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.FM_READY_DEL_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_FM_READY_DEL_LP_HV_OFF (13u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SA_CTL_TRIM_T8_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SA_CTL_TRIM_T8_LP_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SA_CTL_TRIM_T8_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SA_CTL_TRIM_T8_LP_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SA_CTL_TRIM_T8_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SA_CTL_TRIM_T8_LP_HV_OFF (15u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SPARE2_CTL5_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SPARE2_CTL5_LP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SPARE2_CTL5_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SPARE2_CTL5_LP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.SPARE2_CTL5_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_SPARE2_CTL5_LP_HV_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.AMUX_SEL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_AMUX_SEL_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.AMUX_SEL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_AMUX_SEL_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL5_Bits.AMUX_SEL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL5_AMUX_SEL_HV_OFF (18u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T1_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T1_ULP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T1_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T1_ULP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T1_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T1_ULP_HV_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T4_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T4_ULP_HV_LEN (3u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T4_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T4_ULP_HV_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T4_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T4_ULP_HV_OFF (2u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T5_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T5_ULP_HV_LEN (3u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T5_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T5_ULP_HV_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T5_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T5_ULP_HV_OFF (5u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T6_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T6_ULP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T6_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T6_ULP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T6_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T6_ULP_HV_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T1_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T1_LP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T1_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T1_LP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T1_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T1_LP_HV_OFF (10u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T4_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T4_LP_HV_LEN (3u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T4_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T4_LP_HV_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T4_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T4_LP_HV_OFF (12u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T5_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T5_LP_HV_LEN (3u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T5_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T5_LP_HV_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T5_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T5_LP_HV_OFF (15u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T6_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T6_LP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T6_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T6_LP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL6_Bits.SA_CTL_TRIM_T6_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL6_SA_CTL_TRIM_T6_LP_HV_OFF (18u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.ERSX8_CLK_SEL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_ERSX8_CLK_SEL_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.ERSX8_CLK_SEL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_ERSX8_CLK_SEL_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.ERSX8_CLK_SEL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_ERSX8_CLK_SEL_HV_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.FM_ACTIVE_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_FM_ACTIVE_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.FM_ACTIVE_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_FM_ACTIVE_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.FM_ACTIVE_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_FM_ACTIVE_HV_OFF (2u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.TURBO_EXT_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_TURBO_EXT_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.TURBO_EXT_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_TURBO_EXT_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.TURBO_EXT_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_TURBO_EXT_HV_OFF (3u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.NPDAC_HWCTL_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_NPDAC_HWCTL_DIS_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.NPDAC_HWCTL_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_NPDAC_HWCTL_DIS_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.NPDAC_HWCTL_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_NPDAC_HWCTL_DIS_HV_OFF (4u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.FM_READY_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_FM_READY_DIS_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.FM_READY_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_FM_READY_DIS_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.FM_READY_DIS_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_FM_READY_DIS_HV_OFF (5u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.ERSX8_EN_ALL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_ERSX8_EN_ALL_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.ERSX8_EN_ALL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_ERSX8_EN_ALL_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.ERSX8_EN_ALL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_ERSX8_EN_ALL_HV_OFF (6u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.READY_DEL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_READY_DEL_HV_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.READY_DEL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_READY_DEL_HV_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.READY_DEL_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_READY_DEL_HV_OFF (7u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.SPARE_CTL7_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_SPARE_CTL7_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.SPARE_CTL7_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_SPARE_CTL7_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.SPARE_CTL7_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_SPARE_CTL7_HV_OFF (8u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.PTRIM_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_PTRIM_ULP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.PTRIM_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_PTRIM_ULP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.PTRIM_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_PTRIM_ULP_HV_OFF (10u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.SPARE2_CTL7_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_SPARE2_CTL7_ULP_HV_LEN (3u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.SPARE2_CTL7_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_SPARE2_CTL7_ULP_HV_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.SPARE2_CTL7_ULP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_SPARE2_CTL7_ULP_HV_OFF (12u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.PTRIM_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_PTRIM_LP_HV_LEN (2u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.PTRIM_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_PTRIM_LP_HV_MSK (0x3u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.PTRIM_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_PTRIM_LP_HV_OFF (15u)

/** \brief Length for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.SPARE3_CTL7_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_SPARE3_CTL7_LP_HV_LEN (3u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.SPARE3_CTL7_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_SPARE3_CTL7_LP_HV_MSK (0x7u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_CAL_CTL7_Bits.SPARE3_CTL7_LP_HV */
#define IFX_FLASHC_FM_CTL_CAL_CTL7_SPARE3_CTL7_LP_HV_OFF (17u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_PL_ECC_Bits.DATA9 */
#define IFX_FLASHC_FM_CTL_FM_PL_ECC_DATA9_LEN (9u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_PL_ECC_Bits.DATA9 */
#define IFX_FLASHC_FM_CTL_FM_PL_ECC_DATA9_MSK (0x1ffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_PL_ECC_Bits.DATA9 */
#define IFX_FLASHC_FM_CTL_FM_PL_ECC_DATA9_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_PL_ECC_Bits.DATA9_1 */
#define IFX_FLASHC_FM_CTL_FM_PL_ECC_DATA9_1_LEN (9u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_PL_ECC_Bits.DATA9_1 */
#define IFX_FLASHC_FM_CTL_FM_PL_ECC_DATA9_1_MSK (0x1ffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_PL_ECC_Bits.DATA9_1 */
#define IFX_FLASHC_FM_CTL_FM_PL_ECC_DATA9_1_OFF (16u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_MEM_DATA_Bits.DATA32 */
#define IFX_FLASHC_FM_CTL_FM_MEM_DATA_DATA32_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_MEM_DATA_Bits.DATA32 */
#define IFX_FLASHC_FM_CTL_FM_MEM_DATA_DATA32_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_MEM_DATA_Bits.DATA32 */
#define IFX_FLASHC_FM_CTL_FM_MEM_DATA_DATA32_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_MEM_ECC_Bits.ECC_PARITY */
#define IFX_FLASHC_FM_CTL_FM_MEM_ECC_ECC_PARITY_LEN (9u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_MEM_ECC_Bits.ECC_PARITY */
#define IFX_FLASHC_FM_CTL_FM_MEM_ECC_ECC_PARITY_MSK (0x1ffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_MEM_ECC_Bits.ECC_PARITY */
#define IFX_FLASHC_FM_CTL_FM_MEM_ECC_ECC_PARITY_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_ECC_CTL_ADDR_Bits.ECC_CTL_ADDR */
#define IFX_FLASHC_FM_CTL_FM_ECC_CTL_ADDR_ECC_CTL_ADDR_LEN (1u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_ECC_CTL_ADDR_Bits.ECC_CTL_ADDR */
#define IFX_FLASHC_FM_CTL_FM_ECC_CTL_ADDR_ECC_CTL_ADDR_MSK (0x1u)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_ECC_CTL_ADDR_Bits.ECC_CTL_ADDR */
#define IFX_FLASHC_FM_CTL_FM_ECC_CTL_ADDR_ECC_CTL_ADDR_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR_Bits.FM_RED_CTL_SM01_ADDR */
#define IFX_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR_FM_RED_CTL_SM01_ADDR_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR_Bits.FM_RED_CTL_SM01_ADDR */
#define IFX_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR_FM_RED_CTL_SM01_ADDR_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR_Bits.FM_RED_CTL_SM01_ADDR */
#define IFX_FLASHC_FM_CTL_FM_RED_CTL_SM01_ADDR_FM_RED_CTL_SM01_ADDR_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_RED_CTL67_ADDR_Bits.FM_RED_CTL67_ADDR */
#define IFX_FLASHC_FM_CTL_FM_RED_CTL67_ADDR_FM_RED_CTL67_ADDR_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_RED_CTL67_ADDR_Bits.FM_RED_CTL67_ADDR */
#define IFX_FLASHC_FM_CTL_FM_RED_CTL67_ADDR_FM_RED_CTL67_ADDR_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_RED_CTL67_ADDR_Bits.FM_RED_CTL67_ADDR */
#define IFX_FLASHC_FM_CTL_FM_RED_CTL67_ADDR_FM_RED_CTL67_ADDR_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_RED_CTL45_ADDR_Bits.FM_RED_CTL45_ADDR */
#define IFX_FLASHC_FM_CTL_FM_RED_CTL45_ADDR_FM_RED_CTL45_ADDR_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_RED_CTL45_ADDR_Bits.FM_RED_CTL45_ADDR */
#define IFX_FLASHC_FM_CTL_FM_RED_CTL45_ADDR_FM_RED_CTL45_ADDR_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_RED_CTL45_ADDR_Bits.FM_RED_CTL45_ADDR */
#define IFX_FLASHC_FM_CTL_FM_RED_CTL45_ADDR_FM_RED_CTL45_ADDR_OFF (0u)

/** \brief Length for Ifx_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR_Bits.FM_CAL_CTL8_ADDR */
#define IFX_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR_FM_CAL_CTL8_ADDR_LEN (32u)

/** \brief Mask for Ifx_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR_Bits.FM_CAL_CTL8_ADDR */
#define IFX_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR_FM_CAL_CTL8_ADDR_MSK (0xffffffffu)

/** \brief Offset for Ifx_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR_Bits.FM_CAL_CTL8_ADDR */
#define IFX_FLASHC_FM_CTL_FM_CAL_CTL8_ADDR_FM_CAL_CTL8_ADDR_OFF (0u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXFLASHC_BF_H_ */
