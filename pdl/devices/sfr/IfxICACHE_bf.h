/***************************************************************************//**
* \file IfxICACHE_bf.h
*
* \brief
* ICACHE Bitfields mask and offset
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
* \defgroup IfxSfr_ICACHE_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_ICACHE_Registers
*
*******************************************************************************/

#ifndef _IFXICACHE_BF_H_
#define _IFXICACHE_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_ICACHE_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_ICACHE_CTL_Bits.ECC_EN */
#define IFX_ICACHE_CTL_ECC_EN_LEN (1u)

/** \brief Mask for Ifx_ICACHE_CTL_Bits.ECC_EN */
#define IFX_ICACHE_CTL_ECC_EN_MSK (0x1u)

/** \brief Offset for Ifx_ICACHE_CTL_Bits.ECC_EN */
#define IFX_ICACHE_CTL_ECC_EN_OFF (0u)

/** \brief Length for Ifx_ICACHE_CTL_Bits.ECC_INJ_EN */
#define IFX_ICACHE_CTL_ECC_INJ_EN_LEN (1u)

/** \brief Mask for Ifx_ICACHE_CTL_Bits.ECC_INJ_EN */
#define IFX_ICACHE_CTL_ECC_INJ_EN_MSK (0x1u)

/** \brief Offset for Ifx_ICACHE_CTL_Bits.ECC_INJ_EN */
#define IFX_ICACHE_CTL_ECC_INJ_EN_OFF (1u)

/** \brief Length for Ifx_ICACHE_CTL_Bits.WAY */
#define IFX_ICACHE_CTL_WAY_LEN (2u)

/** \brief Mask for Ifx_ICACHE_CTL_Bits.WAY */
#define IFX_ICACHE_CTL_WAY_MSK (0x3u)

/** \brief Offset for Ifx_ICACHE_CTL_Bits.WAY */
#define IFX_ICACHE_CTL_WAY_OFF (16u)

/** \brief Length for Ifx_ICACHE_CTL_Bits.SET_ADDR */
#define IFX_ICACHE_CTL_SET_ADDR_LEN (5u)

/** \brief Mask for Ifx_ICACHE_CTL_Bits.SET_ADDR */
#define IFX_ICACHE_CTL_SET_ADDR_MSK (0x1fu)

/** \brief Offset for Ifx_ICACHE_CTL_Bits.SET_ADDR */
#define IFX_ICACHE_CTL_SET_ADDR_OFF (24u)

/** \brief Length for Ifx_ICACHE_CTL_Bits.PREF_EN */
#define IFX_ICACHE_CTL_PREF_EN_LEN (1u)

/** \brief Mask for Ifx_ICACHE_CTL_Bits.PREF_EN */
#define IFX_ICACHE_CTL_PREF_EN_MSK (0x1u)

/** \brief Offset for Ifx_ICACHE_CTL_Bits.PREF_EN */
#define IFX_ICACHE_CTL_PREF_EN_OFF (30u)

/** \brief Length for Ifx_ICACHE_CTL_Bits.CA_EN */
#define IFX_ICACHE_CTL_CA_EN_LEN (1u)

/** \brief Mask for Ifx_ICACHE_CTL_Bits.CA_EN */
#define IFX_ICACHE_CTL_CA_EN_MSK (0x1u)

/** \brief Offset for Ifx_ICACHE_CTL_Bits.CA_EN */
#define IFX_ICACHE_CTL_CA_EN_OFF (31u)

/** \brief Length for Ifx_ICACHE_CMD_Bits.INV */
#define IFX_ICACHE_CMD_INV_LEN (1u)

/** \brief Mask for Ifx_ICACHE_CMD_Bits.INV */
#define IFX_ICACHE_CMD_INV_MSK (0x1u)

/** \brief Offset for Ifx_ICACHE_CMD_Bits.INV */
#define IFX_ICACHE_CMD_INV_OFF (0u)

/** \brief Length for Ifx_ICACHE_CMD_Bits.BUFF_INV */
#define IFX_ICACHE_CMD_BUFF_INV_LEN (1u)

/** \brief Mask for Ifx_ICACHE_CMD_Bits.BUFF_INV */
#define IFX_ICACHE_CMD_BUFF_INV_MSK (0x1u)

/** \brief Offset for Ifx_ICACHE_CMD_Bits.BUFF_INV */
#define IFX_ICACHE_CMD_BUFF_INV_OFF (1u)

/** \brief Length for Ifx_ICACHE_STATUS0_Bits.VALID32 */
#define IFX_ICACHE_STATUS0_VALID32_LEN (32u)

/** \brief Mask for Ifx_ICACHE_STATUS0_Bits.VALID32 */
#define IFX_ICACHE_STATUS0_VALID32_MSK (0xffffffffu)

/** \brief Offset for Ifx_ICACHE_STATUS0_Bits.VALID32 */
#define IFX_ICACHE_STATUS0_VALID32_OFF (0u)

/** \brief Length for Ifx_ICACHE_STATUS1_Bits.TAG */
#define IFX_ICACHE_STATUS1_TAG_LEN (32u)

/** \brief Mask for Ifx_ICACHE_STATUS1_Bits.TAG */
#define IFX_ICACHE_STATUS1_TAG_MSK (0xffffffffu)

/** \brief Offset for Ifx_ICACHE_STATUS1_Bits.TAG */
#define IFX_ICACHE_STATUS1_TAG_OFF (0u)

/** \brief Length for Ifx_ICACHE_STATUS2_Bits.LRU */
#define IFX_ICACHE_STATUS2_LRU_LEN (6u)

/** \brief Mask for Ifx_ICACHE_STATUS2_Bits.LRU */
#define IFX_ICACHE_STATUS2_LRU_MSK (0x3fu)

/** \brief Offset for Ifx_ICACHE_STATUS2_Bits.LRU */
#define IFX_ICACHE_STATUS2_LRU_OFF (0u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXICACHE_BF_H_ */
