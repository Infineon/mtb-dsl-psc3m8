/***************************************************************************//**
* \file IfxLPCOMP_bf.h
*
* \brief
* LPCOMP Bitfields mask and offset
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
* \defgroup IfxSfr_LPCOMP_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_LPCOMP_Registers
*
*******************************************************************************/

#ifndef _IFXLPCOMP_BF_H_
#define _IFXLPCOMP_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_LPCOMP_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_LPCOMP_CONFIG_Bits.LPREF_EN */
#define IFX_LPCOMP_CONFIG_LPREF_EN_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CONFIG_Bits.LPREF_EN */
#define IFX_LPCOMP_CONFIG_LPREF_EN_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CONFIG_Bits.LPREF_EN */
#define IFX_LPCOMP_CONFIG_LPREF_EN_OFF (30u)

/** \brief Length for Ifx_LPCOMP_CONFIG_Bits.ENABLED */
#define IFX_LPCOMP_CONFIG_ENABLED_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CONFIG_Bits.ENABLED */
#define IFX_LPCOMP_CONFIG_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CONFIG_Bits.ENABLED */
#define IFX_LPCOMP_CONFIG_ENABLED_OFF (31u)

/** \brief Length for Ifx_LPCOMP_STATUS_Bits.OUT0 */
#define IFX_LPCOMP_STATUS_OUT0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_STATUS_Bits.OUT0 */
#define IFX_LPCOMP_STATUS_OUT0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_STATUS_Bits.OUT0 */
#define IFX_LPCOMP_STATUS_OUT0_OFF (0u)

/** \brief Length for Ifx_LPCOMP_STATUS_Bits.OUT1 */
#define IFX_LPCOMP_STATUS_OUT1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_STATUS_Bits.OUT1 */
#define IFX_LPCOMP_STATUS_OUT1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_STATUS_Bits.OUT1 */
#define IFX_LPCOMP_STATUS_OUT1_OFF (16u)

/** \brief Length for Ifx_LPCOMP_INTR_Bits.COMP0 */
#define IFX_LPCOMP_INTR_COMP0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_INTR_Bits.COMP0 */
#define IFX_LPCOMP_INTR_COMP0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_INTR_Bits.COMP0 */
#define IFX_LPCOMP_INTR_COMP0_OFF (0u)

/** \brief Length for Ifx_LPCOMP_INTR_Bits.COMP1 */
#define IFX_LPCOMP_INTR_COMP1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_INTR_Bits.COMP1 */
#define IFX_LPCOMP_INTR_COMP1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_INTR_Bits.COMP1 */
#define IFX_LPCOMP_INTR_COMP1_OFF (1u)

/** \brief Length for Ifx_LPCOMP_INTR_SET_Bits.COMP0 */
#define IFX_LPCOMP_INTR_SET_COMP0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_INTR_SET_Bits.COMP0 */
#define IFX_LPCOMP_INTR_SET_COMP0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_INTR_SET_Bits.COMP0 */
#define IFX_LPCOMP_INTR_SET_COMP0_OFF (0u)

/** \brief Length for Ifx_LPCOMP_INTR_SET_Bits.COMP1 */
#define IFX_LPCOMP_INTR_SET_COMP1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_INTR_SET_Bits.COMP1 */
#define IFX_LPCOMP_INTR_SET_COMP1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_INTR_SET_Bits.COMP1 */
#define IFX_LPCOMP_INTR_SET_COMP1_OFF (1u)

/** \brief Length for Ifx_LPCOMP_INTR_MASK_Bits.COMP0_MASK */
#define IFX_LPCOMP_INTR_MASK_COMP0_MASK_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_INTR_MASK_Bits.COMP0_MASK */
#define IFX_LPCOMP_INTR_MASK_COMP0_MASK_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_INTR_MASK_Bits.COMP0_MASK */
#define IFX_LPCOMP_INTR_MASK_COMP0_MASK_OFF (0u)

/** \brief Length for Ifx_LPCOMP_INTR_MASK_Bits.COMP1_MASK */
#define IFX_LPCOMP_INTR_MASK_COMP1_MASK_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_INTR_MASK_Bits.COMP1_MASK */
#define IFX_LPCOMP_INTR_MASK_COMP1_MASK_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_INTR_MASK_Bits.COMP1_MASK */
#define IFX_LPCOMP_INTR_MASK_COMP1_MASK_OFF (1u)

/** \brief Length for Ifx_LPCOMP_INTR_MASKED_Bits.COMP0_MASKED */
#define IFX_LPCOMP_INTR_MASKED_COMP0_MASKED_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_INTR_MASKED_Bits.COMP0_MASKED */
#define IFX_LPCOMP_INTR_MASKED_COMP0_MASKED_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_INTR_MASKED_Bits.COMP0_MASKED */
#define IFX_LPCOMP_INTR_MASKED_COMP0_MASKED_OFF (0u)

/** \brief Length for Ifx_LPCOMP_INTR_MASKED_Bits.COMP1_MASKED */
#define IFX_LPCOMP_INTR_MASKED_COMP1_MASKED_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_INTR_MASKED_Bits.COMP1_MASKED */
#define IFX_LPCOMP_INTR_MASKED_COMP1_MASKED_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_INTR_MASKED_Bits.COMP1_MASKED */
#define IFX_LPCOMP_INTR_MASKED_COMP1_MASKED_OFF (1u)

/** \brief Length for Ifx_LPCOMP_CMP0_CTRL_Bits.MODE0 */
#define IFX_LPCOMP_CMP0_CTRL_MODE0_LEN (2u)

/** \brief Mask for Ifx_LPCOMP_CMP0_CTRL_Bits.MODE0 */
#define IFX_LPCOMP_CMP0_CTRL_MODE0_MSK (0x3u)

/** \brief Offset for Ifx_LPCOMP_CMP0_CTRL_Bits.MODE0 */
#define IFX_LPCOMP_CMP0_CTRL_MODE0_OFF (0u)

/** \brief Length for Ifx_LPCOMP_CMP0_CTRL_Bits.HYST0 */
#define IFX_LPCOMP_CMP0_CTRL_HYST0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_CTRL_Bits.HYST0 */
#define IFX_LPCOMP_CMP0_CTRL_HYST0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_CTRL_Bits.HYST0 */
#define IFX_LPCOMP_CMP0_CTRL_HYST0_OFF (5u)

/** \brief Length for Ifx_LPCOMP_CMP0_CTRL_Bits.INTTYPE0 */
#define IFX_LPCOMP_CMP0_CTRL_INTTYPE0_LEN (2u)

/** \brief Mask for Ifx_LPCOMP_CMP0_CTRL_Bits.INTTYPE0 */
#define IFX_LPCOMP_CMP0_CTRL_INTTYPE0_MSK (0x3u)

/** \brief Offset for Ifx_LPCOMP_CMP0_CTRL_Bits.INTTYPE0 */
#define IFX_LPCOMP_CMP0_CTRL_INTTYPE0_OFF (6u)

/** \brief Length for Ifx_LPCOMP_CMP0_CTRL_Bits.DSI_BYPASS0 */
#define IFX_LPCOMP_CMP0_CTRL_DSI_BYPASS0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_CTRL_Bits.DSI_BYPASS0 */
#define IFX_LPCOMP_CMP0_CTRL_DSI_BYPASS0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_CTRL_Bits.DSI_BYPASS0 */
#define IFX_LPCOMP_CMP0_CTRL_DSI_BYPASS0_OFF (10u)

/** \brief Length for Ifx_LPCOMP_CMP0_CTRL_Bits.DSI_LEVEL0 */
#define IFX_LPCOMP_CMP0_CTRL_DSI_LEVEL0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_CTRL_Bits.DSI_LEVEL0 */
#define IFX_LPCOMP_CMP0_CTRL_DSI_LEVEL0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_CTRL_Bits.DSI_LEVEL0 */
#define IFX_LPCOMP_CMP0_CTRL_DSI_LEVEL0_OFF (11u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_IP0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_IP0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_IP0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_IP0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_IP0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_IP0_OFF (0u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_AP0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_AP0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_AP0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_AP0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_AP0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_AP0_OFF (1u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_BP0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_BP0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_BP0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_BP0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_BP0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_BP0_OFF (2u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_IN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_IN0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_IN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_IN0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_IN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_IN0_OFF (4u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_AN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_AN0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_AN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_AN0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_AN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_AN0_OFF (5u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_BN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_BN0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_BN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_BN0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_BN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_BN0_OFF (6u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_VN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_VN0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_VN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_VN0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_Bits.CMP0_VN0 */
#define IFX_LPCOMP_CMP0_SW_CMP0_VN0_OFF (7u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_IP0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_IP0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_IP0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_IP0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_IP0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_IP0_OFF (0u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_AP0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_AP0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_AP0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_AP0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_AP0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_AP0_OFF (1u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_BP0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_BP0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_BP0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_BP0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_BP0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_BP0_OFF (2u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_IN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_IN0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_IN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_IN0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_IN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_IN0_OFF (4u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_AN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_AN0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_AN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_AN0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_AN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_AN0_OFF (5u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_BN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_BN0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_BN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_BN0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_BN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_BN0_OFF (6u)

/** \brief Length for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_VN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_VN0_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_VN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_VN0_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP0_SW_CLEAR_Bits.CMP0_VN0 */
#define IFX_LPCOMP_CMP0_SW_CLEAR_CMP0_VN0_OFF (7u)

/** \brief Length for Ifx_LPCOMP_CMP1_CTRL_Bits.MODE1 */
#define IFX_LPCOMP_CMP1_CTRL_MODE1_LEN (2u)

/** \brief Mask for Ifx_LPCOMP_CMP1_CTRL_Bits.MODE1 */
#define IFX_LPCOMP_CMP1_CTRL_MODE1_MSK (0x3u)

/** \brief Offset for Ifx_LPCOMP_CMP1_CTRL_Bits.MODE1 */
#define IFX_LPCOMP_CMP1_CTRL_MODE1_OFF (0u)

/** \brief Length for Ifx_LPCOMP_CMP1_CTRL_Bits.HYST1 */
#define IFX_LPCOMP_CMP1_CTRL_HYST1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_CTRL_Bits.HYST1 */
#define IFX_LPCOMP_CMP1_CTRL_HYST1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_CTRL_Bits.HYST1 */
#define IFX_LPCOMP_CMP1_CTRL_HYST1_OFF (5u)

/** \brief Length for Ifx_LPCOMP_CMP1_CTRL_Bits.INTTYPE1 */
#define IFX_LPCOMP_CMP1_CTRL_INTTYPE1_LEN (2u)

/** \brief Mask for Ifx_LPCOMP_CMP1_CTRL_Bits.INTTYPE1 */
#define IFX_LPCOMP_CMP1_CTRL_INTTYPE1_MSK (0x3u)

/** \brief Offset for Ifx_LPCOMP_CMP1_CTRL_Bits.INTTYPE1 */
#define IFX_LPCOMP_CMP1_CTRL_INTTYPE1_OFF (6u)

/** \brief Length for Ifx_LPCOMP_CMP1_CTRL_Bits.DSI_BYPASS1 */
#define IFX_LPCOMP_CMP1_CTRL_DSI_BYPASS1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_CTRL_Bits.DSI_BYPASS1 */
#define IFX_LPCOMP_CMP1_CTRL_DSI_BYPASS1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_CTRL_Bits.DSI_BYPASS1 */
#define IFX_LPCOMP_CMP1_CTRL_DSI_BYPASS1_OFF (10u)

/** \brief Length for Ifx_LPCOMP_CMP1_CTRL_Bits.DSI_LEVEL1 */
#define IFX_LPCOMP_CMP1_CTRL_DSI_LEVEL1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_CTRL_Bits.DSI_LEVEL1 */
#define IFX_LPCOMP_CMP1_CTRL_DSI_LEVEL1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_CTRL_Bits.DSI_LEVEL1 */
#define IFX_LPCOMP_CMP1_CTRL_DSI_LEVEL1_OFF (11u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_IP1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_IP1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_IP1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_IP1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_IP1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_IP1_OFF (0u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_AP1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_AP1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_AP1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_AP1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_AP1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_AP1_OFF (1u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_BP1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_BP1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_BP1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_BP1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_BP1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_BP1_OFF (2u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_IN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_IN1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_IN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_IN1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_IN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_IN1_OFF (4u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_AN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_AN1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_AN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_AN1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_AN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_AN1_OFF (5u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_BN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_BN1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_BN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_BN1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_BN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_BN1_OFF (6u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_VN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_VN1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_VN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_VN1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_Bits.CMP1_VN1 */
#define IFX_LPCOMP_CMP1_SW_CMP1_VN1_OFF (7u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_IP1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_IP1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_IP1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_IP1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_IP1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_IP1_OFF (0u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_AP1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_AP1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_AP1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_AP1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_AP1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_AP1_OFF (1u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_BP1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_BP1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_BP1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_BP1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_BP1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_BP1_OFF (2u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_IN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_IN1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_IN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_IN1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_IN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_IN1_OFF (4u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_AN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_AN1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_AN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_AN1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_AN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_AN1_OFF (5u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_BN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_BN1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_BN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_BN1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_BN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_BN1_OFF (6u)

/** \brief Length for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_VN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_VN1_LEN (1u)

/** \brief Mask for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_VN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_VN1_MSK (0x1u)

/** \brief Offset for Ifx_LPCOMP_CMP1_SW_CLEAR_Bits.CMP1_VN1 */
#define IFX_LPCOMP_CMP1_SW_CLEAR_CMP1_VN1_OFF (7u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXLPCOMP_BF_H_ */
