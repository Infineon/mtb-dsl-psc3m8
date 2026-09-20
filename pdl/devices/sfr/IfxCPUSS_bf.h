/***************************************************************************//**
* \file IfxCPUSS_bf.h
*
* \brief
* CPUSS Bitfields mask and offset
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
* \defgroup IfxSfr_CPUSS_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_CPUSS_Registers
*
*******************************************************************************/

#ifndef _IFXCPUSS_BF_H_
#define _IFXCPUSS_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_CPUSS_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_CPUSS_IDENTITY_Bits.P */
#define IFX_CPUSS_IDENTITY_P_LEN (1u)

/** \brief Mask for Ifx_CPUSS_IDENTITY_Bits.P */
#define IFX_CPUSS_IDENTITY_P_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_IDENTITY_Bits.P */
#define IFX_CPUSS_IDENTITY_P_OFF (0u)

/** \brief Length for Ifx_CPUSS_IDENTITY_Bits.NS */
#define IFX_CPUSS_IDENTITY_NS_LEN (1u)

/** \brief Mask for Ifx_CPUSS_IDENTITY_Bits.NS */
#define IFX_CPUSS_IDENTITY_NS_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_IDENTITY_Bits.NS */
#define IFX_CPUSS_IDENTITY_NS_OFF (1u)

/** \brief Length for Ifx_CPUSS_IDENTITY_Bits.PC */
#define IFX_CPUSS_IDENTITY_PC_LEN (4u)

/** \brief Mask for Ifx_CPUSS_IDENTITY_Bits.PC */
#define IFX_CPUSS_IDENTITY_PC_MSK (0xfu)

/** \brief Offset for Ifx_CPUSS_IDENTITY_Bits.PC */
#define IFX_CPUSS_IDENTITY_PC_OFF (4u)

/** \brief Length for Ifx_CPUSS_IDENTITY_Bits.MS */
#define IFX_CPUSS_IDENTITY_MS_LEN (8u)

/** \brief Mask for Ifx_CPUSS_IDENTITY_Bits.MS */
#define IFX_CPUSS_IDENTITY_MS_MSK (0xffu)

/** \brief Offset for Ifx_CPUSS_IDENTITY_Bits.MS */
#define IFX_CPUSS_IDENTITY_MS_OFF (8u)

/** \brief Length for Ifx_CPUSS_PRODUCT_ID_Bits.FAMILY_ID */
#define IFX_CPUSS_PRODUCT_ID_FAMILY_ID_LEN (12u)

/** \brief Mask for Ifx_CPUSS_PRODUCT_ID_Bits.FAMILY_ID */
#define IFX_CPUSS_PRODUCT_ID_FAMILY_ID_MSK (0xfffu)

/** \brief Offset for Ifx_CPUSS_PRODUCT_ID_Bits.FAMILY_ID */
#define IFX_CPUSS_PRODUCT_ID_FAMILY_ID_OFF (0u)

/** \brief Length for Ifx_CPUSS_PRODUCT_ID_Bits.MAJOR_REV */
#define IFX_CPUSS_PRODUCT_ID_MAJOR_REV_LEN (4u)

/** \brief Mask for Ifx_CPUSS_PRODUCT_ID_Bits.MAJOR_REV */
#define IFX_CPUSS_PRODUCT_ID_MAJOR_REV_MSK (0xfu)

/** \brief Offset for Ifx_CPUSS_PRODUCT_ID_Bits.MAJOR_REV */
#define IFX_CPUSS_PRODUCT_ID_MAJOR_REV_OFF (16u)

/** \brief Length for Ifx_CPUSS_PRODUCT_ID_Bits.MINOR_REV */
#define IFX_CPUSS_PRODUCT_ID_MINOR_REV_LEN (4u)

/** \brief Mask for Ifx_CPUSS_PRODUCT_ID_Bits.MINOR_REV */
#define IFX_CPUSS_PRODUCT_ID_MINOR_REV_MSK (0xfu)

/** \brief Offset for Ifx_CPUSS_PRODUCT_ID_Bits.MINOR_REV */
#define IFX_CPUSS_PRODUCT_ID_MINOR_REV_OFF (20u)

/** \brief Length for Ifx_CPUSS_DP_STATUS_Bits.SWJ_CONNECTED */
#define IFX_CPUSS_DP_STATUS_SWJ_CONNECTED_LEN (1u)

/** \brief Mask for Ifx_CPUSS_DP_STATUS_Bits.SWJ_CONNECTED */
#define IFX_CPUSS_DP_STATUS_SWJ_CONNECTED_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_DP_STATUS_Bits.SWJ_CONNECTED */
#define IFX_CPUSS_DP_STATUS_SWJ_CONNECTED_OFF (0u)

/** \brief Length for Ifx_CPUSS_DP_STATUS_Bits.SWJ_DEBUG_EN */
#define IFX_CPUSS_DP_STATUS_SWJ_DEBUG_EN_LEN (1u)

/** \brief Mask for Ifx_CPUSS_DP_STATUS_Bits.SWJ_DEBUG_EN */
#define IFX_CPUSS_DP_STATUS_SWJ_DEBUG_EN_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_DP_STATUS_Bits.SWJ_DEBUG_EN */
#define IFX_CPUSS_DP_STATUS_SWJ_DEBUG_EN_OFF (1u)

/** \brief Length for Ifx_CPUSS_DP_STATUS_Bits.SWJ_JTAG_SEL */
#define IFX_CPUSS_DP_STATUS_SWJ_JTAG_SEL_LEN (1u)

/** \brief Mask for Ifx_CPUSS_DP_STATUS_Bits.SWJ_JTAG_SEL */
#define IFX_CPUSS_DP_STATUS_SWJ_JTAG_SEL_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_DP_STATUS_Bits.SWJ_JTAG_SEL */
#define IFX_CPUSS_DP_STATUS_SWJ_JTAG_SEL_OFF (2u)

/** \brief Length for Ifx_CPUSS_DP_STATUS_Bits.SWJ_SWD_SEL */
#define IFX_CPUSS_DP_STATUS_SWJ_SWD_SEL_LEN (1u)

/** \brief Mask for Ifx_CPUSS_DP_STATUS_Bits.SWJ_SWD_SEL */
#define IFX_CPUSS_DP_STATUS_SWJ_SWD_SEL_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_DP_STATUS_Bits.SWJ_SWD_SEL */
#define IFX_CPUSS_DP_STATUS_SWJ_SWD_SEL_OFF (3u)

/** \brief Length for Ifx_CPUSS_BUFF_CTL_Bits.WRITE_BUFF */
#define IFX_CPUSS_BUFF_CTL_WRITE_BUFF_LEN (1u)

/** \brief Mask for Ifx_CPUSS_BUFF_CTL_Bits.WRITE_BUFF */
#define IFX_CPUSS_BUFF_CTL_WRITE_BUFF_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_BUFF_CTL_Bits.WRITE_BUFF */
#define IFX_CPUSS_BUFF_CTL_WRITE_BUFF_OFF (0u)

/** \brief Length for Ifx_CPUSS_CAL_SUP_SET_Bits.DATA */
#define IFX_CPUSS_CAL_SUP_SET_DATA_LEN (32u)

/** \brief Mask for Ifx_CPUSS_CAL_SUP_SET_Bits.DATA */
#define IFX_CPUSS_CAL_SUP_SET_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_CPUSS_CAL_SUP_SET_Bits.DATA */
#define IFX_CPUSS_CAL_SUP_SET_DATA_OFF (0u)

/** \brief Length for Ifx_CPUSS_CAL_SUP_CLR_Bits.DATA */
#define IFX_CPUSS_CAL_SUP_CLR_DATA_LEN (32u)

/** \brief Mask for Ifx_CPUSS_CAL_SUP_CLR_Bits.DATA */
#define IFX_CPUSS_CAL_SUP_CLR_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_CPUSS_CAL_SUP_CLR_Bits.DATA */
#define IFX_CPUSS_CAL_SUP_CLR_DATA_OFF (0u)

/** \brief Length for Ifx_CPUSS_INFRA_CTL_Bits.CLOCK_FORCE */
#define IFX_CPUSS_INFRA_CTL_CLOCK_FORCE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_INFRA_CTL_Bits.CLOCK_FORCE */
#define IFX_CPUSS_INFRA_CTL_CLOCK_FORCE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_INFRA_CTL_Bits.CLOCK_FORCE */
#define IFX_CPUSS_INFRA_CTL_CLOCK_FORCE_OFF (0u)

/** \brief Length for Ifx_CPUSS_SYSTICK_S_CTL_Bits.TENMS */
#define IFX_CPUSS_SYSTICK_S_CTL_TENMS_LEN (24u)

/** \brief Mask for Ifx_CPUSS_SYSTICK_S_CTL_Bits.TENMS */
#define IFX_CPUSS_SYSTICK_S_CTL_TENMS_MSK (0xffffffu)

/** \brief Offset for Ifx_CPUSS_SYSTICK_S_CTL_Bits.TENMS */
#define IFX_CPUSS_SYSTICK_S_CTL_TENMS_OFF (0u)

/** \brief Length for Ifx_CPUSS_SYSTICK_S_CTL_Bits.CLOCK_SOURCE */
#define IFX_CPUSS_SYSTICK_S_CTL_CLOCK_SOURCE_LEN (2u)

/** \brief Mask for Ifx_CPUSS_SYSTICK_S_CTL_Bits.CLOCK_SOURCE */
#define IFX_CPUSS_SYSTICK_S_CTL_CLOCK_SOURCE_MSK (0x3u)

/** \brief Offset for Ifx_CPUSS_SYSTICK_S_CTL_Bits.CLOCK_SOURCE */
#define IFX_CPUSS_SYSTICK_S_CTL_CLOCK_SOURCE_OFF (24u)

/** \brief Length for Ifx_CPUSS_SYSTICK_S_CTL_Bits.SKEW */
#define IFX_CPUSS_SYSTICK_S_CTL_SKEW_LEN (1u)

/** \brief Mask for Ifx_CPUSS_SYSTICK_S_CTL_Bits.SKEW */
#define IFX_CPUSS_SYSTICK_S_CTL_SKEW_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_SYSTICK_S_CTL_Bits.SKEW */
#define IFX_CPUSS_SYSTICK_S_CTL_SKEW_OFF (30u)

/** \brief Length for Ifx_CPUSS_SYSTICK_S_CTL_Bits.NOREF */
#define IFX_CPUSS_SYSTICK_S_CTL_NOREF_LEN (1u)

/** \brief Mask for Ifx_CPUSS_SYSTICK_S_CTL_Bits.NOREF */
#define IFX_CPUSS_SYSTICK_S_CTL_NOREF_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_SYSTICK_S_CTL_Bits.NOREF */
#define IFX_CPUSS_SYSTICK_S_CTL_NOREF_OFF (31u)

/** \brief Length for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.TENMS */
#define IFX_CPUSS_SYSTICK_NS_CTL_TENMS_LEN (24u)

/** \brief Mask for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.TENMS */
#define IFX_CPUSS_SYSTICK_NS_CTL_TENMS_MSK (0xffffffu)

/** \brief Offset for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.TENMS */
#define IFX_CPUSS_SYSTICK_NS_CTL_TENMS_OFF (0u)

/** \brief Length for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.CLOCK_SOURCE */
#define IFX_CPUSS_SYSTICK_NS_CTL_CLOCK_SOURCE_LEN (2u)

/** \brief Mask for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.CLOCK_SOURCE */
#define IFX_CPUSS_SYSTICK_NS_CTL_CLOCK_SOURCE_MSK (0x3u)

/** \brief Offset for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.CLOCK_SOURCE */
#define IFX_CPUSS_SYSTICK_NS_CTL_CLOCK_SOURCE_OFF (24u)

/** \brief Length for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.SKEW */
#define IFX_CPUSS_SYSTICK_NS_CTL_SKEW_LEN (1u)

/** \brief Mask for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.SKEW */
#define IFX_CPUSS_SYSTICK_NS_CTL_SKEW_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.SKEW */
#define IFX_CPUSS_SYSTICK_NS_CTL_SKEW_OFF (30u)

/** \brief Length for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.NOREF */
#define IFX_CPUSS_SYSTICK_NS_CTL_NOREF_LEN (1u)

/** \brief Mask for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.NOREF */
#define IFX_CPUSS_SYSTICK_NS_CTL_NOREF_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_SYSTICK_NS_CTL_Bits.NOREF */
#define IFX_CPUSS_SYSTICK_NS_CTL_NOREF_OFF (31u)

/** \brief Length for Ifx_CPUSS_INTR_MSC_Bits.SYS_MS0_MSC */
#define IFX_CPUSS_INTR_MSC_SYS_MS0_MSC_LEN (1u)

/** \brief Mask for Ifx_CPUSS_INTR_MSC_Bits.SYS_MS0_MSC */
#define IFX_CPUSS_INTR_MSC_SYS_MS0_MSC_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_INTR_MSC_Bits.SYS_MS0_MSC */
#define IFX_CPUSS_INTR_MSC_SYS_MS0_MSC_OFF (1u)

/** \brief Length for Ifx_CPUSS_INTR_MSC_Bits.EXP_MS_MSC */
#define IFX_CPUSS_INTR_MSC_EXP_MS_MSC_LEN (1u)

/** \brief Mask for Ifx_CPUSS_INTR_MSC_Bits.EXP_MS_MSC */
#define IFX_CPUSS_INTR_MSC_EXP_MS_MSC_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_INTR_MSC_Bits.EXP_MS_MSC */
#define IFX_CPUSS_INTR_MSC_EXP_MS_MSC_OFF (3u)

/** \brief Length for Ifx_CPUSS_INTR_MASK_MSC_Bits.SYS_MS0_MSC */
#define IFX_CPUSS_INTR_MASK_MSC_SYS_MS0_MSC_LEN (1u)

/** \brief Mask for Ifx_CPUSS_INTR_MASK_MSC_Bits.SYS_MS0_MSC */
#define IFX_CPUSS_INTR_MASK_MSC_SYS_MS0_MSC_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_INTR_MASK_MSC_Bits.SYS_MS0_MSC */
#define IFX_CPUSS_INTR_MASK_MSC_SYS_MS0_MSC_OFF (1u)

/** \brief Length for Ifx_CPUSS_INTR_MASK_MSC_Bits.EXP_MS_MSC */
#define IFX_CPUSS_INTR_MASK_MSC_EXP_MS_MSC_LEN (1u)

/** \brief Mask for Ifx_CPUSS_INTR_MASK_MSC_Bits.EXP_MS_MSC */
#define IFX_CPUSS_INTR_MASK_MSC_EXP_MS_MSC_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_INTR_MASK_MSC_Bits.EXP_MS_MSC */
#define IFX_CPUSS_INTR_MASK_MSC_EXP_MS_MSC_OFF (3u)

/** \brief Length for Ifx_CPUSS_INTR_MASKED_MSC_Bits.SYS_MS0_MSC */
#define IFX_CPUSS_INTR_MASKED_MSC_SYS_MS0_MSC_LEN (1u)

/** \brief Mask for Ifx_CPUSS_INTR_MASKED_MSC_Bits.SYS_MS0_MSC */
#define IFX_CPUSS_INTR_MASKED_MSC_SYS_MS0_MSC_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_INTR_MASKED_MSC_Bits.SYS_MS0_MSC */
#define IFX_CPUSS_INTR_MASKED_MSC_SYS_MS0_MSC_OFF (1u)

/** \brief Length for Ifx_CPUSS_INTR_MASKED_MSC_Bits.EXP_MS_MSC */
#define IFX_CPUSS_INTR_MASKED_MSC_EXP_MS_MSC_LEN (1u)

/** \brief Mask for Ifx_CPUSS_INTR_MASKED_MSC_Bits.EXP_MS_MSC */
#define IFX_CPUSS_INTR_MASKED_MSC_EXP_MS_MSC_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_INTR_MASKED_MSC_Bits.EXP_MS_MSC */
#define IFX_CPUSS_INTR_MASKED_MSC_EXP_MS_MSC_OFF (3u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_ENABLE_OFF (0u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_1_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_1_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_1_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_ENABLE_OFF (1u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.SYS_ENABLE */
#define IFX_CPUSS_AP_CTL_SYS_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.SYS_ENABLE */
#define IFX_CPUSS_AP_CTL_SYS_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.SYS_ENABLE */
#define IFX_CPUSS_AP_CTL_SYS_ENABLE_OFF (2u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_DBG_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_DBG_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_DBG_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_DBG_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_DBG_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_DBG_ENABLE_OFF (4u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_NID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_NID_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_NID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_NID_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_NID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_NID_ENABLE_OFF (5u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPID_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPID_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPID_ENABLE_OFF (6u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPNID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPNID_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPNID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPNID_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPNID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPNID_ENABLE_OFF (7u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_1_DBG_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_DBG_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_1_DBG_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_DBG_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_1_DBG_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_DBG_ENABLE_OFF (8u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_1_NID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_NID_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_1_NID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_NID_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_1_NID_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_NID_ENABLE_OFF (9u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SECURE_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SECURE_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SECURE_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SECURE_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SECURE_ENABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SECURE_ENABLE_OFF (12u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.SYS_SECURE_ENABLE */
#define IFX_CPUSS_AP_CTL_SYS_SECURE_ENABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.SYS_SECURE_ENABLE */
#define IFX_CPUSS_AP_CTL_SYS_SECURE_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.SYS_SECURE_ENABLE */
#define IFX_CPUSS_AP_CTL_SYS_SECURE_ENABLE_OFF (14u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_DISABLE_OFF (16u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_1_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_1_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_1_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_DISABLE_OFF (17u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.SYS_DISABLE */
#define IFX_CPUSS_AP_CTL_SYS_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.SYS_DISABLE */
#define IFX_CPUSS_AP_CTL_SYS_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.SYS_DISABLE */
#define IFX_CPUSS_AP_CTL_SYS_DISABLE_OFF (18u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_DBG_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_DBG_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_DBG_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_DBG_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_DBG_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_DBG_DISABLE_OFF (20u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_NID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_NID_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_NID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_NID_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_NID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_NID_DISABLE_OFF (21u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPID_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPID_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPID_DISABLE_OFF (22u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPNID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPNID_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPNID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPNID_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SPNID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SPNID_DISABLE_OFF (23u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_1_DBG_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_DBG_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_1_DBG_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_DBG_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_1_DBG_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_DBG_DISABLE_OFF (24u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_1_NID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_NID_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_1_NID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_NID_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_1_NID_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_1_NID_DISABLE_OFF (25u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SECURE_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SECURE_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SECURE_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SECURE_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.CM33_0_SECURE_DISABLE */
#define IFX_CPUSS_AP_CTL_CM33_0_SECURE_DISABLE_OFF (28u)

/** \brief Length for Ifx_CPUSS_AP_CTL_Bits.SYS_SECURE_DISABLE */
#define IFX_CPUSS_AP_CTL_SYS_SECURE_DISABLE_LEN (1u)

/** \brief Mask for Ifx_CPUSS_AP_CTL_Bits.SYS_SECURE_DISABLE */
#define IFX_CPUSS_AP_CTL_SYS_SECURE_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_CPUSS_AP_CTL_Bits.SYS_SECURE_DISABLE */
#define IFX_CPUSS_AP_CTL_SYS_SECURE_DISABLE_OFF (30u)

/** \brief Length for Ifx_CPUSS_PROTECTION_Bits.STATE */
#define IFX_CPUSS_PROTECTION_STATE_LEN (32u)

/** \brief Mask for Ifx_CPUSS_PROTECTION_Bits.STATE */
#define IFX_CPUSS_PROTECTION_STATE_MSK (0xffffffffu)

/** \brief Offset for Ifx_CPUSS_PROTECTION_Bits.STATE */
#define IFX_CPUSS_PROTECTION_STATE_OFF (0u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCPUSS_BF_H_ */
