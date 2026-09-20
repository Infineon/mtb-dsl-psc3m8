/***************************************************************************//**
* \file IfxPERI_bf.h
*
* \brief
* PERI Bitfields mask and offset
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
* \defgroup IfxSfr_PERI_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_PERI_Registers
*
*******************************************************************************/

#ifndef _IFXPERI_BF_H_
#define _IFXPERI_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_PERI_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_PERI_TIMEOUT_CTL_Bits.TIMEOUT */
#define IFX_PERI_TIMEOUT_CTL_TIMEOUT_LEN (16u)

/** \brief Mask for Ifx_PERI_TIMEOUT_CTL_Bits.TIMEOUT */
#define IFX_PERI_TIMEOUT_CTL_TIMEOUT_MSK (0xffffu)

/** \brief Offset for Ifx_PERI_TIMEOUT_CTL_Bits.TIMEOUT */
#define IFX_PERI_TIMEOUT_CTL_TIMEOUT_OFF (0u)

/** \brief Length for Ifx_PERI_TIMEOUT_CTL_Bits.HWRST_DISABLE */
#define IFX_PERI_TIMEOUT_CTL_HWRST_DISABLE_LEN (1u)

/** \brief Mask for Ifx_PERI_TIMEOUT_CTL_Bits.HWRST_DISABLE */
#define IFX_PERI_TIMEOUT_CTL_HWRST_DISABLE_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TIMEOUT_CTL_Bits.HWRST_DISABLE */
#define IFX_PERI_TIMEOUT_CTL_HWRST_DISABLE_OFF (31u)

/** \brief Length for Ifx_PERI_TR_CMD_Bits.TR_SEL */
#define IFX_PERI_TR_CMD_TR_SEL_LEN (8u)

/** \brief Mask for Ifx_PERI_TR_CMD_Bits.TR_SEL */
#define IFX_PERI_TR_CMD_TR_SEL_MSK (0xffu)

/** \brief Offset for Ifx_PERI_TR_CMD_Bits.TR_SEL */
#define IFX_PERI_TR_CMD_TR_SEL_OFF (0u)

/** \brief Length for Ifx_PERI_TR_CMD_Bits.GROUP_SEL */
#define IFX_PERI_TR_CMD_GROUP_SEL_LEN (5u)

/** \brief Mask for Ifx_PERI_TR_CMD_Bits.GROUP_SEL */
#define IFX_PERI_TR_CMD_GROUP_SEL_MSK (0x1fu)

/** \brief Offset for Ifx_PERI_TR_CMD_Bits.GROUP_SEL */
#define IFX_PERI_TR_CMD_GROUP_SEL_OFF (8u)

/** \brief Length for Ifx_PERI_TR_CMD_Bits.TR_EDGE */
#define IFX_PERI_TR_CMD_TR_EDGE_LEN (1u)

/** \brief Mask for Ifx_PERI_TR_CMD_Bits.TR_EDGE */
#define IFX_PERI_TR_CMD_TR_EDGE_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TR_CMD_Bits.TR_EDGE */
#define IFX_PERI_TR_CMD_TR_EDGE_OFF (29u)

/** \brief Length for Ifx_PERI_TR_CMD_Bits.OUT_SEL */
#define IFX_PERI_TR_CMD_OUT_SEL_LEN (1u)

/** \brief Mask for Ifx_PERI_TR_CMD_Bits.OUT_SEL */
#define IFX_PERI_TR_CMD_OUT_SEL_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TR_CMD_Bits.OUT_SEL */
#define IFX_PERI_TR_CMD_OUT_SEL_OFF (30u)

/** \brief Length for Ifx_PERI_TR_CMD_Bits.ACTIVATE */
#define IFX_PERI_TR_CMD_ACTIVATE_LEN (1u)

/** \brief Mask for Ifx_PERI_TR_CMD_Bits.ACTIVATE */
#define IFX_PERI_TR_CMD_ACTIVATE_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TR_CMD_Bits.ACTIVATE */
#define IFX_PERI_TR_CMD_ACTIVATE_OFF (31u)

/** \brief Length for Ifx_PERI_INFRA_CLK_FORCE_Bits.ENABLED */
#define IFX_PERI_INFRA_CLK_FORCE_ENABLED_LEN (1u)

/** \brief Mask for Ifx_PERI_INFRA_CLK_FORCE_Bits.ENABLED */
#define IFX_PERI_INFRA_CLK_FORCE_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_PERI_INFRA_CLK_FORCE_Bits.ENABLED */
#define IFX_PERI_INFRA_CLK_FORCE_ENABLED_OFF (0u)

/** \brief Length for Ifx_PERI_GR_CLOCK_CTL_Bits.INT8_DIV */
#define IFX_PERI_GR_CLOCK_CTL_INT8_DIV_LEN (8u)

/** \brief Mask for Ifx_PERI_GR_CLOCK_CTL_Bits.INT8_DIV */
#define IFX_PERI_GR_CLOCK_CTL_INT8_DIV_MSK (0xffu)

/** \brief Offset for Ifx_PERI_GR_CLOCK_CTL_Bits.INT8_DIV */
#define IFX_PERI_GR_CLOCK_CTL_INT8_DIV_OFF (8u)

/** \brief Length for Ifx_PERI_GR_SL_CTL_Bits.ENABLED */
#define IFX_PERI_GR_SL_CTL_ENABLED_LEN (32u)

/** \brief Mask for Ifx_PERI_GR_SL_CTL_Bits.ENABLED */
#define IFX_PERI_GR_SL_CTL_ENABLED_MSK (0xffffffffu)

/** \brief Offset for Ifx_PERI_GR_SL_CTL_Bits.ENABLED */
#define IFX_PERI_GR_SL_CTL_ENABLED_OFF (0u)

/** \brief Length for Ifx_PERI_GR_SL_CTL2_Bits.RST */
#define IFX_PERI_GR_SL_CTL2_RST_LEN (32u)

/** \brief Mask for Ifx_PERI_GR_SL_CTL2_Bits.RST */
#define IFX_PERI_GR_SL_CTL2_RST_MSK (0xffffffffu)

/** \brief Offset for Ifx_PERI_GR_SL_CTL2_Bits.RST */
#define IFX_PERI_GR_SL_CTL2_RST_OFF (0u)

/** \brief Length for Ifx_PERI_GR_SL_WOUND_Bits.DISABLED */
#define IFX_PERI_GR_SL_WOUND_DISABLED_LEN (32u)

/** \brief Mask for Ifx_PERI_GR_SL_WOUND_Bits.DISABLED */
#define IFX_PERI_GR_SL_WOUND_DISABLED_MSK (0xffffffffu)

/** \brief Offset for Ifx_PERI_GR_SL_WOUND_Bits.DISABLED */
#define IFX_PERI_GR_SL_WOUND_DISABLED_OFF (0u)

/** \brief Length for Ifx_PERI_TR_GR_TR_CTL_Bits.TR_SEL */
#define IFX_PERI_TR_GR_TR_CTL_TR_SEL_LEN (8u)

/** \brief Mask for Ifx_PERI_TR_GR_TR_CTL_Bits.TR_SEL */
#define IFX_PERI_TR_GR_TR_CTL_TR_SEL_MSK (0xffu)

/** \brief Offset for Ifx_PERI_TR_GR_TR_CTL_Bits.TR_SEL */
#define IFX_PERI_TR_GR_TR_CTL_TR_SEL_OFF (0u)

/** \brief Length for Ifx_PERI_TR_GR_TR_CTL_Bits.TR_INV */
#define IFX_PERI_TR_GR_TR_CTL_TR_INV_LEN (1u)

/** \brief Mask for Ifx_PERI_TR_GR_TR_CTL_Bits.TR_INV */
#define IFX_PERI_TR_GR_TR_CTL_TR_INV_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TR_GR_TR_CTL_Bits.TR_INV */
#define IFX_PERI_TR_GR_TR_CTL_TR_INV_OFF (8u)

/** \brief Length for Ifx_PERI_TR_GR_TR_CTL_Bits.TR_EDGE */
#define IFX_PERI_TR_GR_TR_CTL_TR_EDGE_LEN (1u)

/** \brief Mask for Ifx_PERI_TR_GR_TR_CTL_Bits.TR_EDGE */
#define IFX_PERI_TR_GR_TR_CTL_TR_EDGE_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TR_GR_TR_CTL_Bits.TR_EDGE */
#define IFX_PERI_TR_GR_TR_CTL_TR_EDGE_OFF (9u)

/** \brief Length for Ifx_PERI_TR_GR_TR_CTL_Bits.DBG_FREEZE_EN */
#define IFX_PERI_TR_GR_TR_CTL_DBG_FREEZE_EN_LEN (1u)

/** \brief Mask for Ifx_PERI_TR_GR_TR_CTL_Bits.DBG_FREEZE_EN */
#define IFX_PERI_TR_GR_TR_CTL_DBG_FREEZE_EN_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TR_GR_TR_CTL_Bits.DBG_FREEZE_EN */
#define IFX_PERI_TR_GR_TR_CTL_DBG_FREEZE_EN_OFF (12u)

/** \brief Length for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.TR_SEL */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_TR_SEL_LEN (1u)

/** \brief Mask for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.TR_SEL */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_TR_SEL_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.TR_SEL */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_TR_SEL_OFF (0u)

/** \brief Length for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.TR_INV */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_TR_INV_LEN (1u)

/** \brief Mask for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.TR_INV */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_TR_INV_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.TR_INV */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_TR_INV_OFF (8u)

/** \brief Length for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.TR_EDGE */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_TR_EDGE_LEN (1u)

/** \brief Mask for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.TR_EDGE */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_TR_EDGE_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.TR_EDGE */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_TR_EDGE_OFF (9u)

/** \brief Length for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.DBG_FREEZE_EN */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_DBG_FREEZE_EN_LEN (1u)

/** \brief Mask for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.DBG_FREEZE_EN */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_DBG_FREEZE_EN_MSK (0x1u)

/** \brief Offset for Ifx_PERI_TR_1TO1_GR_TR_CTL_Bits.DBG_FREEZE_EN */
#define IFX_PERI_TR_1TO1_GR_TR_CTL_DBG_FREEZE_EN_OFF (12u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPERI_BF_H_ */
