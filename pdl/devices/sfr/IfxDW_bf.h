/***************************************************************************//**
* \file IfxDW_bf.h
*
* \brief
* DW Bitfields mask and offset
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
* \defgroup IfxSfr_DW_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_DW_Registers
*
*******************************************************************************/

#ifndef _IFXDW_BF_H_
#define _IFXDW_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_DW_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_DW_CTL_Bits.ENABLED */
#define IFX_DW_CTL_ENABLED_LEN (1u)

/** \brief Mask for Ifx_DW_CTL_Bits.ENABLED */
#define IFX_DW_CTL_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_DW_CTL_Bits.ENABLED */
#define IFX_DW_CTL_ENABLED_OFF (31u)

/** \brief Length for Ifx_DW_STATUS_Bits.P */
#define IFX_DW_STATUS_P_LEN (1u)

/** \brief Mask for Ifx_DW_STATUS_Bits.P */
#define IFX_DW_STATUS_P_MSK (0x1u)

/** \brief Offset for Ifx_DW_STATUS_Bits.P */
#define IFX_DW_STATUS_P_OFF (0u)

/** \brief Length for Ifx_DW_STATUS_Bits.NS */
#define IFX_DW_STATUS_NS_LEN (1u)

/** \brief Mask for Ifx_DW_STATUS_Bits.NS */
#define IFX_DW_STATUS_NS_MSK (0x1u)

/** \brief Offset for Ifx_DW_STATUS_Bits.NS */
#define IFX_DW_STATUS_NS_OFF (1u)

/** \brief Length for Ifx_DW_STATUS_Bits.B */
#define IFX_DW_STATUS_B_LEN (1u)

/** \brief Mask for Ifx_DW_STATUS_Bits.B */
#define IFX_DW_STATUS_B_MSK (0x1u)

/** \brief Offset for Ifx_DW_STATUS_Bits.B */
#define IFX_DW_STATUS_B_OFF (2u)

/** \brief Length for Ifx_DW_STATUS_Bits.PC */
#define IFX_DW_STATUS_PC_LEN (4u)

/** \brief Mask for Ifx_DW_STATUS_Bits.PC */
#define IFX_DW_STATUS_PC_MSK (0xfu)

/** \brief Offset for Ifx_DW_STATUS_Bits.PC */
#define IFX_DW_STATUS_PC_OFF (4u)

/** \brief Length for Ifx_DW_STATUS_Bits.PRIO */
#define IFX_DW_STATUS_PRIO_LEN (2u)

/** \brief Mask for Ifx_DW_STATUS_Bits.PRIO */
#define IFX_DW_STATUS_PRIO_MSK (0x3u)

/** \brief Offset for Ifx_DW_STATUS_Bits.PRIO */
#define IFX_DW_STATUS_PRIO_OFF (8u)

/** \brief Length for Ifx_DW_STATUS_Bits.PREEMPTABLE */
#define IFX_DW_STATUS_PREEMPTABLE_LEN (1u)

/** \brief Mask for Ifx_DW_STATUS_Bits.PREEMPTABLE */
#define IFX_DW_STATUS_PREEMPTABLE_MSK (0x1u)

/** \brief Offset for Ifx_DW_STATUS_Bits.PREEMPTABLE */
#define IFX_DW_STATUS_PREEMPTABLE_OFF (11u)

/** \brief Length for Ifx_DW_STATUS_Bits.CH_IDX */
#define IFX_DW_STATUS_CH_IDX_LEN (9u)

/** \brief Mask for Ifx_DW_STATUS_Bits.CH_IDX */
#define IFX_DW_STATUS_CH_IDX_MSK (0x1ffu)

/** \brief Offset for Ifx_DW_STATUS_Bits.CH_IDX */
#define IFX_DW_STATUS_CH_IDX_OFF (16u)

/** \brief Length for Ifx_DW_STATUS_Bits.STATE */
#define IFX_DW_STATUS_STATE_LEN (3u)

/** \brief Mask for Ifx_DW_STATUS_Bits.STATE */
#define IFX_DW_STATUS_STATE_MSK (0x7u)

/** \brief Offset for Ifx_DW_STATUS_Bits.STATE */
#define IFX_DW_STATUS_STATE_OFF (28u)

/** \brief Length for Ifx_DW_STATUS_Bits.ACTIVE */
#define IFX_DW_STATUS_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_DW_STATUS_Bits.ACTIVE */
#define IFX_DW_STATUS_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_DW_STATUS_Bits.ACTIVE */
#define IFX_DW_STATUS_ACTIVE_OFF (31u)

/** \brief Length for Ifx_DW_ACT_DESCR_CTL_Bits.DATA */
#define IFX_DW_ACT_DESCR_CTL_DATA_LEN (32u)

/** \brief Mask for Ifx_DW_ACT_DESCR_CTL_Bits.DATA */
#define IFX_DW_ACT_DESCR_CTL_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_ACT_DESCR_CTL_Bits.DATA */
#define IFX_DW_ACT_DESCR_CTL_DATA_OFF (0u)

/** \brief Length for Ifx_DW_ACT_DESCR_SRC_Bits.DATA */
#define IFX_DW_ACT_DESCR_SRC_DATA_LEN (32u)

/** \brief Mask for Ifx_DW_ACT_DESCR_SRC_Bits.DATA */
#define IFX_DW_ACT_DESCR_SRC_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_ACT_DESCR_SRC_Bits.DATA */
#define IFX_DW_ACT_DESCR_SRC_DATA_OFF (0u)

/** \brief Length for Ifx_DW_ACT_DESCR_DST_Bits.DATA */
#define IFX_DW_ACT_DESCR_DST_DATA_LEN (32u)

/** \brief Mask for Ifx_DW_ACT_DESCR_DST_Bits.DATA */
#define IFX_DW_ACT_DESCR_DST_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_ACT_DESCR_DST_Bits.DATA */
#define IFX_DW_ACT_DESCR_DST_DATA_OFF (0u)

/** \brief Length for Ifx_DW_ACT_DESCR_X_CTL_Bits.DATA */
#define IFX_DW_ACT_DESCR_X_CTL_DATA_LEN (32u)

/** \brief Mask for Ifx_DW_ACT_DESCR_X_CTL_Bits.DATA */
#define IFX_DW_ACT_DESCR_X_CTL_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_ACT_DESCR_X_CTL_Bits.DATA */
#define IFX_DW_ACT_DESCR_X_CTL_DATA_OFF (0u)

/** \brief Length for Ifx_DW_ACT_DESCR_Y_CTL_Bits.DATA */
#define IFX_DW_ACT_DESCR_Y_CTL_DATA_LEN (32u)

/** \brief Mask for Ifx_DW_ACT_DESCR_Y_CTL_Bits.DATA */
#define IFX_DW_ACT_DESCR_Y_CTL_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_ACT_DESCR_Y_CTL_Bits.DATA */
#define IFX_DW_ACT_DESCR_Y_CTL_DATA_OFF (0u)

/** \brief Length for Ifx_DW_ACT_DESCR_NEXT_PTR_Bits.ADDR */
#define IFX_DW_ACT_DESCR_NEXT_PTR_ADDR_LEN (30u)

/** \brief Mask for Ifx_DW_ACT_DESCR_NEXT_PTR_Bits.ADDR */
#define IFX_DW_ACT_DESCR_NEXT_PTR_ADDR_MSK (0x3fffffffu)

/** \brief Offset for Ifx_DW_ACT_DESCR_NEXT_PTR_Bits.ADDR */
#define IFX_DW_ACT_DESCR_NEXT_PTR_ADDR_OFF (2u)

/** \brief Length for Ifx_DW_ACT_SRC_Bits.SRC_ADDR */
#define IFX_DW_ACT_SRC_SRC_ADDR_LEN (32u)

/** \brief Mask for Ifx_DW_ACT_SRC_Bits.SRC_ADDR */
#define IFX_DW_ACT_SRC_SRC_ADDR_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_ACT_SRC_Bits.SRC_ADDR */
#define IFX_DW_ACT_SRC_SRC_ADDR_OFF (0u)

/** \brief Length for Ifx_DW_ACT_DST_Bits.DST_ADDR */
#define IFX_DW_ACT_DST_DST_ADDR_LEN (32u)

/** \brief Mask for Ifx_DW_ACT_DST_Bits.DST_ADDR */
#define IFX_DW_ACT_DST_DST_ADDR_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_ACT_DST_Bits.DST_ADDR */
#define IFX_DW_ACT_DST_DST_ADDR_OFF (0u)

/** \brief Length for Ifx_DW_CRC_CTL_Bits.DATA_REVERSE */
#define IFX_DW_CRC_CTL_DATA_REVERSE_LEN (1u)

/** \brief Mask for Ifx_DW_CRC_CTL_Bits.DATA_REVERSE */
#define IFX_DW_CRC_CTL_DATA_REVERSE_MSK (0x1u)

/** \brief Offset for Ifx_DW_CRC_CTL_Bits.DATA_REVERSE */
#define IFX_DW_CRC_CTL_DATA_REVERSE_OFF (0u)

/** \brief Length for Ifx_DW_CRC_CTL_Bits.REM_REVERSE */
#define IFX_DW_CRC_CTL_REM_REVERSE_LEN (1u)

/** \brief Mask for Ifx_DW_CRC_CTL_Bits.REM_REVERSE */
#define IFX_DW_CRC_CTL_REM_REVERSE_MSK (0x1u)

/** \brief Offset for Ifx_DW_CRC_CTL_Bits.REM_REVERSE */
#define IFX_DW_CRC_CTL_REM_REVERSE_OFF (8u)

/** \brief Length for Ifx_DW_CRC_DATA_CTL_Bits.DATA_XOR */
#define IFX_DW_CRC_DATA_CTL_DATA_XOR_LEN (8u)

/** \brief Mask for Ifx_DW_CRC_DATA_CTL_Bits.DATA_XOR */
#define IFX_DW_CRC_DATA_CTL_DATA_XOR_MSK (0xffu)

/** \brief Offset for Ifx_DW_CRC_DATA_CTL_Bits.DATA_XOR */
#define IFX_DW_CRC_DATA_CTL_DATA_XOR_OFF (0u)

/** \brief Length for Ifx_DW_CRC_POL_CTL_Bits.POLYNOMIAL */
#define IFX_DW_CRC_POL_CTL_POLYNOMIAL_LEN (32u)

/** \brief Mask for Ifx_DW_CRC_POL_CTL_Bits.POLYNOMIAL */
#define IFX_DW_CRC_POL_CTL_POLYNOMIAL_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_CRC_POL_CTL_Bits.POLYNOMIAL */
#define IFX_DW_CRC_POL_CTL_POLYNOMIAL_OFF (0u)

/** \brief Length for Ifx_DW_CRC_LFSR_CTL_Bits.LFSR32 */
#define IFX_DW_CRC_LFSR_CTL_LFSR32_LEN (32u)

/** \brief Mask for Ifx_DW_CRC_LFSR_CTL_Bits.LFSR32 */
#define IFX_DW_CRC_LFSR_CTL_LFSR32_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_CRC_LFSR_CTL_Bits.LFSR32 */
#define IFX_DW_CRC_LFSR_CTL_LFSR32_OFF (0u)

/** \brief Length for Ifx_DW_CRC_REM_CTL_Bits.REM_XOR */
#define IFX_DW_CRC_REM_CTL_REM_XOR_LEN (32u)

/** \brief Mask for Ifx_DW_CRC_REM_CTL_Bits.REM_XOR */
#define IFX_DW_CRC_REM_CTL_REM_XOR_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_CRC_REM_CTL_Bits.REM_XOR */
#define IFX_DW_CRC_REM_CTL_REM_XOR_OFF (0u)

/** \brief Length for Ifx_DW_CRC_REM_RESULT_Bits.REM */
#define IFX_DW_CRC_REM_RESULT_REM_LEN (32u)

/** \brief Mask for Ifx_DW_CRC_REM_RESULT_Bits.REM */
#define IFX_DW_CRC_REM_RESULT_REM_MSK (0xffffffffu)

/** \brief Offset for Ifx_DW_CRC_REM_RESULT_Bits.REM */
#define IFX_DW_CRC_REM_RESULT_REM_OFF (0u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_CTL_Bits.P */
#define IFX_DW_CH_STRUCT_CH_CTL_P_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_CTL_Bits.P */
#define IFX_DW_CH_STRUCT_CH_CTL_P_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_CTL_Bits.P */
#define IFX_DW_CH_STRUCT_CH_CTL_P_OFF (0u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_CTL_Bits.NS */
#define IFX_DW_CH_STRUCT_CH_CTL_NS_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_CTL_Bits.NS */
#define IFX_DW_CH_STRUCT_CH_CTL_NS_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_CTL_Bits.NS */
#define IFX_DW_CH_STRUCT_CH_CTL_NS_OFF (1u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_CTL_Bits.B */
#define IFX_DW_CH_STRUCT_CH_CTL_B_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_CTL_Bits.B */
#define IFX_DW_CH_STRUCT_CH_CTL_B_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_CTL_Bits.B */
#define IFX_DW_CH_STRUCT_CH_CTL_B_OFF (2u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_CTL_Bits.PC */
#define IFX_DW_CH_STRUCT_CH_CTL_PC_LEN (4u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_CTL_Bits.PC */
#define IFX_DW_CH_STRUCT_CH_CTL_PC_MSK (0xfu)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_CTL_Bits.PC */
#define IFX_DW_CH_STRUCT_CH_CTL_PC_OFF (4u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_CTL_Bits.PRIO */
#define IFX_DW_CH_STRUCT_CH_CTL_PRIO_LEN (2u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_CTL_Bits.PRIO */
#define IFX_DW_CH_STRUCT_CH_CTL_PRIO_MSK (0x3u)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_CTL_Bits.PRIO */
#define IFX_DW_CH_STRUCT_CH_CTL_PRIO_OFF (8u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_CTL_Bits.PREEMPTABLE */
#define IFX_DW_CH_STRUCT_CH_CTL_PREEMPTABLE_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_CTL_Bits.PREEMPTABLE */
#define IFX_DW_CH_STRUCT_CH_CTL_PREEMPTABLE_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_CTL_Bits.PREEMPTABLE */
#define IFX_DW_CH_STRUCT_CH_CTL_PREEMPTABLE_OFF (11u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_CTL_Bits.ENABLED */
#define IFX_DW_CH_STRUCT_CH_CTL_ENABLED_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_CTL_Bits.ENABLED */
#define IFX_DW_CH_STRUCT_CH_CTL_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_CTL_Bits.ENABLED */
#define IFX_DW_CH_STRUCT_CH_CTL_ENABLED_OFF (31u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_STATUS_Bits.INTR_CAUSE */
#define IFX_DW_CH_STRUCT_CH_STATUS_INTR_CAUSE_LEN (4u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_STATUS_Bits.INTR_CAUSE */
#define IFX_DW_CH_STRUCT_CH_STATUS_INTR_CAUSE_MSK (0xfu)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_STATUS_Bits.INTR_CAUSE */
#define IFX_DW_CH_STRUCT_CH_STATUS_INTR_CAUSE_OFF (0u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_STATUS_Bits.PENDING */
#define IFX_DW_CH_STRUCT_CH_STATUS_PENDING_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_STATUS_Bits.PENDING */
#define IFX_DW_CH_STRUCT_CH_STATUS_PENDING_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_STATUS_Bits.PENDING */
#define IFX_DW_CH_STRUCT_CH_STATUS_PENDING_OFF (31u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_IDX_Bits.X_IDX */
#define IFX_DW_CH_STRUCT_CH_IDX_X_IDX_LEN (8u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_IDX_Bits.X_IDX */
#define IFX_DW_CH_STRUCT_CH_IDX_X_IDX_MSK (0xffu)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_IDX_Bits.X_IDX */
#define IFX_DW_CH_STRUCT_CH_IDX_X_IDX_OFF (0u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_IDX_Bits.Y_IDX */
#define IFX_DW_CH_STRUCT_CH_IDX_Y_IDX_LEN (8u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_IDX_Bits.Y_IDX */
#define IFX_DW_CH_STRUCT_CH_IDX_Y_IDX_MSK (0xffu)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_IDX_Bits.Y_IDX */
#define IFX_DW_CH_STRUCT_CH_IDX_Y_IDX_OFF (8u)

/** \brief Length for Ifx_DW_CH_STRUCT_CH_CURR_PTR_Bits.ADDR */
#define IFX_DW_CH_STRUCT_CH_CURR_PTR_ADDR_LEN (30u)

/** \brief Mask for Ifx_DW_CH_STRUCT_CH_CURR_PTR_Bits.ADDR */
#define IFX_DW_CH_STRUCT_CH_CURR_PTR_ADDR_MSK (0x3fffffffu)

/** \brief Offset for Ifx_DW_CH_STRUCT_CH_CURR_PTR_Bits.ADDR */
#define IFX_DW_CH_STRUCT_CH_CURR_PTR_ADDR_OFF (2u)

/** \brief Length for Ifx_DW_CH_STRUCT_INTR_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_CH_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_INTR_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_CH_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_INTR_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_CH_OFF (0u)

/** \brief Length for Ifx_DW_CH_STRUCT_INTR_SET_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_SET_CH_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_INTR_SET_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_SET_CH_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_INTR_SET_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_SET_CH_OFF (0u)

/** \brief Length for Ifx_DW_CH_STRUCT_INTR_MASK_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_MASK_CH_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_INTR_MASK_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_MASK_CH_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_INTR_MASK_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_MASK_CH_OFF (0u)

/** \brief Length for Ifx_DW_CH_STRUCT_INTR_MASKED_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_MASKED_CH_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_INTR_MASKED_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_MASKED_CH_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_INTR_MASKED_Bits.CH */
#define IFX_DW_CH_STRUCT_INTR_MASKED_CH_OFF (0u)

/** \brief Length for Ifx_DW_CH_STRUCT_TR_CMD_Bits.ACTIVATE */
#define IFX_DW_CH_STRUCT_TR_CMD_ACTIVATE_LEN (1u)

/** \brief Mask for Ifx_DW_CH_STRUCT_TR_CMD_Bits.ACTIVATE */
#define IFX_DW_CH_STRUCT_TR_CMD_ACTIVATE_MSK (0x1u)

/** \brief Offset for Ifx_DW_CH_STRUCT_TR_CMD_Bits.ACTIVATE */
#define IFX_DW_CH_STRUCT_TR_CMD_ACTIVATE_OFF (0u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXDW_BF_H_ */
