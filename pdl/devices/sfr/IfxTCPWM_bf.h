/***************************************************************************//**
* \file IfxTCPWM_bf.h
*
* \brief
* TCPWM Bitfields mask and offset
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
* \defgroup IfxSfr_TCPWM_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_TCPWM_Registers
*
*******************************************************************************/

#ifndef _IFXTCPWM_BF_H_
#define _IFXTCPWM_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_TCPWM_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.AUTO_RELOAD_CC0 */
#define IFX_TCPWM_GRP_CNT_CTRL_AUTO_RELOAD_CC0_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.AUTO_RELOAD_CC0 */
#define IFX_TCPWM_GRP_CNT_CTRL_AUTO_RELOAD_CC0_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.AUTO_RELOAD_CC0 */
#define IFX_TCPWM_GRP_CNT_CTRL_AUTO_RELOAD_CC0_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.AUTO_RELOAD_PERIOD */
#define IFX_TCPWM_GRP_CNT_CTRL_AUTO_RELOAD_PERIOD_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.AUTO_RELOAD_PERIOD */
#define IFX_TCPWM_GRP_CNT_CTRL_AUTO_RELOAD_PERIOD_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.AUTO_RELOAD_PERIOD */
#define IFX_TCPWM_GRP_CNT_CTRL_AUTO_RELOAD_PERIOD_OFF (2u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_IMM_KILL */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_IMM_KILL_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_IMM_KILL */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_IMM_KILL_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_IMM_KILL */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_IMM_KILL_OFF (8u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_STOP_ON_KILL */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_STOP_ON_KILL_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_STOP_ON_KILL */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_STOP_ON_KILL_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_STOP_ON_KILL */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_STOP_ON_KILL_OFF (9u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_SYNC_KILL */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_SYNC_KILL_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_SYNC_KILL */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_SYNC_KILL_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_SYNC_KILL */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_SYNC_KILL_OFF (10u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.SWAP_ENABLE */
#define IFX_TCPWM_GRP_CNT_CTRL_SWAP_ENABLE_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.SWAP_ENABLE */
#define IFX_TCPWM_GRP_CNT_CTRL_SWAP_ENABLE_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.SWAP_ENABLE */
#define IFX_TCPWM_GRP_CNT_CTRL_SWAP_ENABLE_OFF (11u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_DISABLE_MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_DISABLE_MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_DISABLE_MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_OFF (12u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_TC_SYNC_KILL_DT */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_TC_SYNC_KILL_DT_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_TC_SYNC_KILL_DT */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_TC_SYNC_KILL_DT_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_TC_SYNC_KILL_DT */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_TC_SYNC_KILL_DT_OFF (14u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_SYNC_KILL_DT */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_SYNC_KILL_DT_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_SYNC_KILL_DT */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_SYNC_KILL_DT_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.PWM_SYNC_KILL_DT */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_SYNC_KILL_DT_OFF (15u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.UP_DOWN_MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.UP_DOWN_MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.UP_DOWN_MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_OFF (16u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.ONE_SHOT */
#define IFX_TCPWM_GRP_CNT_CTRL_ONE_SHOT_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.ONE_SHOT */
#define IFX_TCPWM_GRP_CNT_CTRL_ONE_SHOT_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.ONE_SHOT */
#define IFX_TCPWM_GRP_CNT_CTRL_ONE_SHOT_OFF (18u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.QUAD_ENCODING_MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.QUAD_ENCODING_MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.QUAD_ENCODING_MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_OFF (20u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_LEN (3u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_MSK (0x7u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.MODE */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_OFF (24u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.KILL_LINE_POLARITY */
#define IFX_TCPWM_GRP_CNT_CTRL_KILL_LINE_POLARITY_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.KILL_LINE_POLARITY */
#define IFX_TCPWM_GRP_CNT_CTRL_KILL_LINE_POLARITY_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.KILL_LINE_POLARITY */
#define IFX_TCPWM_GRP_CNT_CTRL_KILL_LINE_POLARITY_OFF (27u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.DBG_SUS_EN */
#define IFX_TCPWM_GRP_CNT_CTRL_DBG_SUS_EN_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.DBG_SUS_EN */
#define IFX_TCPWM_GRP_CNT_CTRL_DBG_SUS_EN_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.DBG_SUS_EN */
#define IFX_TCPWM_GRP_CNT_CTRL_DBG_SUS_EN_OFF (29u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.DBG_FREEZE_EN */
#define IFX_TCPWM_GRP_CNT_CTRL_DBG_FREEZE_EN_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.DBG_FREEZE_EN */
#define IFX_TCPWM_GRP_CNT_CTRL_DBG_FREEZE_EN_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.DBG_FREEZE_EN */
#define IFX_TCPWM_GRP_CNT_CTRL_DBG_FREEZE_EN_OFF (30u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL_Bits.ENABLED */
#define IFX_TCPWM_GRP_CNT_CTRL_ENABLED_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL_Bits.ENABLED */
#define IFX_TCPWM_GRP_CNT_CTRL_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL_Bits.ENABLED */
#define IFX_TCPWM_GRP_CNT_CTRL_ENABLED_OFF (31u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.DOWN */
#define IFX_TCPWM_GRP_CNT_STATUS_DOWN_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.DOWN */
#define IFX_TCPWM_GRP_CNT_STATUS_DOWN_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.DOWN */
#define IFX_TCPWM_GRP_CNT_STATUS_DOWN_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.CC0_READ_MISS */
#define IFX_TCPWM_GRP_CNT_STATUS_CC0_READ_MISS_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.CC0_READ_MISS */
#define IFX_TCPWM_GRP_CNT_STATUS_CC0_READ_MISS_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.CC0_READ_MISS */
#define IFX_TCPWM_GRP_CNT_STATUS_CC0_READ_MISS_OFF (1u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.KILL_STATUS */
#define IFX_TCPWM_GRP_CNT_STATUS_KILL_STATUS_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.KILL_STATUS */
#define IFX_TCPWM_GRP_CNT_STATUS_KILL_STATUS_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.KILL_STATUS */
#define IFX_TCPWM_GRP_CNT_STATUS_KILL_STATUS_OFF (3u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_CAPTURE0 */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_CAPTURE0_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_CAPTURE0 */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_CAPTURE0_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_CAPTURE0 */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_CAPTURE0_OFF (4u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_COUNT */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_COUNT_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_COUNT */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_COUNT_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_COUNT */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_COUNT_OFF (5u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_RELOAD */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_RELOAD_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_RELOAD */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_RELOAD_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_RELOAD */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_RELOAD_OFF (6u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_STOP */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_STOP_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_STOP */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_STOP_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_STOP */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_STOP_OFF (7u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_START */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_START_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_START */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_START_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_START */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_START_OFF (8u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.LINE_OUT */
#define IFX_TCPWM_GRP_CNT_STATUS_LINE_OUT_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.LINE_OUT */
#define IFX_TCPWM_GRP_CNT_STATUS_LINE_OUT_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.LINE_OUT */
#define IFX_TCPWM_GRP_CNT_STATUS_LINE_OUT_OFF (10u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.LINE_COMPL_OUT */
#define IFX_TCPWM_GRP_CNT_STATUS_LINE_COMPL_OUT_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.LINE_COMPL_OUT */
#define IFX_TCPWM_GRP_CNT_STATUS_LINE_COMPL_OUT_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.LINE_COMPL_OUT */
#define IFX_TCPWM_GRP_CNT_STATUS_LINE_COMPL_OUT_OFF (11u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_DC */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_DC_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_DC */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_DC_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_DC */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_DC_OFF (12u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_MASK */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_MASK_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_MASK */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_MASK_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.TR_MASK */
#define IFX_TCPWM_GRP_CNT_STATUS_TR_MASK_OFF (13u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.RUNNING */
#define IFX_TCPWM_GRP_CNT_STATUS_RUNNING_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.RUNNING */
#define IFX_TCPWM_GRP_CNT_STATUS_RUNNING_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.RUNNING */
#define IFX_TCPWM_GRP_CNT_STATUS_RUNNING_OFF (15u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_STATUS_Bits.DT_CNT_L */
#define IFX_TCPWM_GRP_CNT_STATUS_DT_CNT_L_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_STATUS_Bits.DT_CNT_L */
#define IFX_TCPWM_GRP_CNT_STATUS_DT_CNT_L_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_STATUS_Bits.DT_CNT_L */
#define IFX_TCPWM_GRP_CNT_STATUS_DT_CNT_L_OFF (16u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_COUNTER_Bits.COUNTER */
#define IFX_TCPWM_GRP_CNT_COUNTER_COUNTER_LEN (32u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_COUNTER_Bits.COUNTER */
#define IFX_TCPWM_GRP_CNT_COUNTER_COUNTER_MSK (0xffffffffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_COUNTER_Bits.COUNTER */
#define IFX_TCPWM_GRP_CNT_COUNTER_COUNTER_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CC0_Bits.CC */
#define IFX_TCPWM_GRP_CNT_CC0_CC_LEN (32u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CC0_Bits.CC */
#define IFX_TCPWM_GRP_CNT_CC0_CC_MSK (0xffffffffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CC0_Bits.CC */
#define IFX_TCPWM_GRP_CNT_CC0_CC_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CC0_BUFF_Bits.CC */
#define IFX_TCPWM_GRP_CNT_CC0_BUFF_CC_LEN (32u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CC0_BUFF_Bits.CC */
#define IFX_TCPWM_GRP_CNT_CC0_BUFF_CC_MSK (0xffffffffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CC0_BUFF_Bits.CC */
#define IFX_TCPWM_GRP_CNT_CC0_BUFF_CC_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_PERIOD_Bits.PERIOD */
#define IFX_TCPWM_GRP_CNT_PERIOD_PERIOD_LEN (32u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_PERIOD_Bits.PERIOD */
#define IFX_TCPWM_GRP_CNT_PERIOD_PERIOD_MSK (0xffffffffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_PERIOD_Bits.PERIOD */
#define IFX_TCPWM_GRP_CNT_PERIOD_PERIOD_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_PERIOD_BUFF_Bits.PERIOD */
#define IFX_TCPWM_GRP_CNT_PERIOD_BUFF_PERIOD_LEN (32u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_PERIOD_BUFF_Bits.PERIOD */
#define IFX_TCPWM_GRP_CNT_PERIOD_BUFF_PERIOD_MSK (0xffffffffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_PERIOD_BUFF_Bits.PERIOD */
#define IFX_TCPWM_GRP_CNT_PERIOD_BUFF_PERIOD_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_DT_Bits.DT_LINE_OUT_L */
#define IFX_TCPWM_GRP_CNT_DT_DT_LINE_OUT_L_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_DT_Bits.DT_LINE_OUT_L */
#define IFX_TCPWM_GRP_CNT_DT_DT_LINE_OUT_L_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_DT_Bits.DT_LINE_OUT_L */
#define IFX_TCPWM_GRP_CNT_DT_DT_LINE_OUT_L_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_DT_BUFF_Bits.DT_LINE_OUT_L */
#define IFX_TCPWM_GRP_CNT_DT_BUFF_DT_LINE_OUT_L_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_DT_BUFF_Bits.DT_LINE_OUT_L */
#define IFX_TCPWM_GRP_CNT_DT_BUFF_DT_LINE_OUT_L_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_DT_BUFF_Bits.DT_LINE_OUT_L */
#define IFX_TCPWM_GRP_CNT_DT_BUFF_DT_LINE_OUT_L_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_PS_Bits.PS_DIV */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_LEN (3u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_PS_Bits.PS_DIV */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_MSK (0x7u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_PS_Bits.PS_DIV */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.CAPTURE0 */
#define IFX_TCPWM_GRP_CNT_TR_CMD_CAPTURE0_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.CAPTURE0 */
#define IFX_TCPWM_GRP_CNT_TR_CMD_CAPTURE0_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.CAPTURE0 */
#define IFX_TCPWM_GRP_CNT_TR_CMD_CAPTURE0_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.RELOAD */
#define IFX_TCPWM_GRP_CNT_TR_CMD_RELOAD_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.RELOAD */
#define IFX_TCPWM_GRP_CNT_TR_CMD_RELOAD_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.RELOAD */
#define IFX_TCPWM_GRP_CNT_TR_CMD_RELOAD_OFF (2u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.STOP */
#define IFX_TCPWM_GRP_CNT_TR_CMD_STOP_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.STOP */
#define IFX_TCPWM_GRP_CNT_TR_CMD_STOP_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.STOP */
#define IFX_TCPWM_GRP_CNT_TR_CMD_STOP_OFF (3u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.START */
#define IFX_TCPWM_GRP_CNT_TR_CMD_START_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.START */
#define IFX_TCPWM_GRP_CNT_TR_CMD_START_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.START */
#define IFX_TCPWM_GRP_CNT_TR_CMD_START_OFF (4u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.DC */
#define IFX_TCPWM_GRP_CNT_TR_CMD_DC_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.DC */
#define IFX_TCPWM_GRP_CNT_TR_CMD_DC_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.DC */
#define IFX_TCPWM_GRP_CNT_TR_CMD_DC_OFF (6u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.MASK */
#define IFX_TCPWM_GRP_CNT_TR_CMD_MASK_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.MASK */
#define IFX_TCPWM_GRP_CNT_TR_CMD_MASK_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_CMD_Bits.MASK */
#define IFX_TCPWM_GRP_CNT_TR_CMD_MASK_OFF (7u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.CAPTURE0_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_CAPTURE0_SEL_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.CAPTURE0_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_CAPTURE0_SEL_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.CAPTURE0_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_CAPTURE0_SEL_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.COUNT_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_COUNT_SEL_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.COUNT_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_COUNT_SEL_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.COUNT_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_COUNT_SEL_OFF (8u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.RELOAD_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_RELOAD_SEL_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.RELOAD_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_RELOAD_SEL_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.RELOAD_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_RELOAD_SEL_OFF (16u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.STOP_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_STOP_SEL_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.STOP_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_STOP_SEL_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits.STOP_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL0_STOP_SEL_OFF (24u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits.START_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL1_START_SEL_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits.START_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL1_START_SEL_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits.START_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL1_START_SEL_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits.DC_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL1_DC_SEL_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits.DC_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL1_DC_SEL_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits.DC_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL1_DC_SEL_OFF (16u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits.MASK_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL1_MASK_SEL_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits.MASK_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL1_MASK_SEL_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits.MASK_SEL */
#define IFX_TCPWM_GRP_CNT_TR_IN_SEL1_MASK_SEL_OFF (24u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.CAPTURE0_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.CAPTURE0_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.CAPTURE0_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.COUNT_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.COUNT_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.COUNT_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_OFF (2u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.RELOAD_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.RELOAD_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.RELOAD_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_OFF (4u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.STOP_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.STOP_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.STOP_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_OFF (6u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.START_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.START_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.START_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_OFF (8u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.DC_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.DC_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.DC_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_OFF (12u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.MASK_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.MASK_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits.MASK_EDGE */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_OFF (14u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits.CC0_MATCH_MODE */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits.CC0_MATCH_MODE */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits.CC0_MATCH_MODE */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits.OVERFLOW_MODE */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits.OVERFLOW_MODE */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits.OVERFLOW_MODE */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_OFF (2u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits.UNDERFLOW_MODE */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_LEN (2u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits.UNDERFLOW_MODE */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_MSK (0x3u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits.UNDERFLOW_MODE */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_OFF (4u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_OUT_SEL_Bits.OUT0 */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_LEN (4u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_OUT_SEL_Bits.OUT0 */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_MSK (0xfu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_OUT_SEL_Bits.OUT0 */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_OUT_SEL_Bits.OUT1 */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_LEN (4u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_OUT_SEL_Bits.OUT1 */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_MSK (0xfu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_OUT_SEL_Bits.OUT1 */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_OFF (4u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_INTR_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_TC_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_INTR_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_TC_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_INTR_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_TC_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_INTR_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_CC0_MATCH_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_INTR_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_CC0_MATCH_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_INTR_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_CC0_MATCH_OFF (1u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_INTR_SET_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_SET_TC_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_INTR_SET_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_SET_TC_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_INTR_SET_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_SET_TC_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_INTR_SET_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_SET_CC0_MATCH_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_INTR_SET_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_SET_CC0_MATCH_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_INTR_SET_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_SET_CC0_MATCH_OFF (1u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_INTR_MASK_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_MASK_TC_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_INTR_MASK_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_MASK_TC_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_INTR_MASK_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_MASK_TC_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_INTR_MASK_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_MASK_CC0_MATCH_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_INTR_MASK_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_MASK_CC0_MATCH_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_INTR_MASK_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_MASK_CC0_MATCH_OFF (1u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_INTR_MASKED_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_MASKED_TC_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_INTR_MASKED_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_MASKED_TC_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_INTR_MASKED_Bits.TC */
#define IFX_TCPWM_GRP_CNT_INTR_MASKED_TC_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_INTR_MASKED_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_MASKED_CC0_MATCH_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_INTR_MASKED_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_MASKED_CC0_MATCH_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_INTR_MASKED_Bits.CC0_MATCH */
#define IFX_TCPWM_GRP_CNT_INTR_MASKED_CC0_MATCH_OFF (1u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_Bits.SYNC_BYPASS */
#define IFX_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_SYNC_BYPASS_LEN (8u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_Bits.SYNC_BYPASS */
#define IFX_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_SYNC_BYPASS_MSK (0xffu)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_Bits.SYNC_BYPASS */
#define IFX_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_SYNC_BYPASS_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL2_Bits.DC_EN */
#define IFX_TCPWM_GRP_CNT_CTRL2_DC_EN_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL2_Bits.DC_EN */
#define IFX_TCPWM_GRP_CNT_CTRL2_DC_EN_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL2_Bits.DC_EN */
#define IFX_TCPWM_GRP_CNT_CTRL2_DC_EN_OFF (0u)

/** \brief Length for Ifx_TCPWM_GRP_CNT_CTRL2_Bits.MASK_EN */
#define IFX_TCPWM_GRP_CNT_CTRL2_MASK_EN_LEN (1u)

/** \brief Mask for Ifx_TCPWM_GRP_CNT_CTRL2_Bits.MASK_EN */
#define IFX_TCPWM_GRP_CNT_CTRL2_MASK_EN_MSK (0x1u)

/** \brief Offset for Ifx_TCPWM_GRP_CNT_CTRL2_Bits.MASK_EN */
#define IFX_TCPWM_GRP_CNT_CTRL2_MASK_EN_OFF (1u)

/** \brief Length for Ifx_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_Bits.SYNC_BYPASS */
#define IFX_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_SYNC_BYPASS_LEN (32u)

/** \brief Mask for Ifx_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_Bits.SYNC_BYPASS */
#define IFX_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_SYNC_BYPASS_MSK (0xffffffffu)

/** \brief Offset for Ifx_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_Bits.SYNC_BYPASS */
#define IFX_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_SYNC_BYPASS_OFF (0u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXTCPWM_BF_H_ */
