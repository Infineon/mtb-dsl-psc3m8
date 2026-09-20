/***************************************************************************//**
* \file IfxFAULT_bf.h
*
* \brief
* FAULT Bitfields mask and offset
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
* \defgroup IfxSfr_FAULT_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_FAULT_Registers
*
*******************************************************************************/

#ifndef _IFXFAULT_BF_H_
#define _IFXFAULT_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_FAULT_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_FAULT_STRUCT_CTL_Bits.TR_EN */
#define IFX_FAULT_STRUCT_CTL_TR_EN_LEN (1u)

/** \brief Mask for Ifx_FAULT_STRUCT_CTL_Bits.TR_EN */
#define IFX_FAULT_STRUCT_CTL_TR_EN_MSK (0x1u)

/** \brief Offset for Ifx_FAULT_STRUCT_CTL_Bits.TR_EN */
#define IFX_FAULT_STRUCT_CTL_TR_EN_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_CTL_Bits.OUT_EN */
#define IFX_FAULT_STRUCT_CTL_OUT_EN_LEN (1u)

/** \brief Mask for Ifx_FAULT_STRUCT_CTL_Bits.OUT_EN */
#define IFX_FAULT_STRUCT_CTL_OUT_EN_MSK (0x1u)

/** \brief Offset for Ifx_FAULT_STRUCT_CTL_Bits.OUT_EN */
#define IFX_FAULT_STRUCT_CTL_OUT_EN_OFF (1u)

/** \brief Length for Ifx_FAULT_STRUCT_CTL_Bits.RESET_REQ_EN */
#define IFX_FAULT_STRUCT_CTL_RESET_REQ_EN_LEN (1u)

/** \brief Mask for Ifx_FAULT_STRUCT_CTL_Bits.RESET_REQ_EN */
#define IFX_FAULT_STRUCT_CTL_RESET_REQ_EN_MSK (0x1u)

/** \brief Offset for Ifx_FAULT_STRUCT_CTL_Bits.RESET_REQ_EN */
#define IFX_FAULT_STRUCT_CTL_RESET_REQ_EN_OFF (2u)

/** \brief Length for Ifx_FAULT_STRUCT_STATUS_Bits.IDX */
#define IFX_FAULT_STRUCT_STATUS_IDX_LEN (7u)

/** \brief Mask for Ifx_FAULT_STRUCT_STATUS_Bits.IDX */
#define IFX_FAULT_STRUCT_STATUS_IDX_MSK (0x7fu)

/** \brief Offset for Ifx_FAULT_STRUCT_STATUS_Bits.IDX */
#define IFX_FAULT_STRUCT_STATUS_IDX_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_STATUS_Bits.VALID */
#define IFX_FAULT_STRUCT_STATUS_VALID_LEN (1u)

/** \brief Mask for Ifx_FAULT_STRUCT_STATUS_Bits.VALID */
#define IFX_FAULT_STRUCT_STATUS_VALID_MSK (0x1u)

/** \brief Offset for Ifx_FAULT_STRUCT_STATUS_Bits.VALID */
#define IFX_FAULT_STRUCT_STATUS_VALID_OFF (31u)

/** \brief Length for Ifx_FAULT_STRUCT_DATA_Bits.DATA */
#define IFX_FAULT_STRUCT_DATA_DATA_LEN (32u)

/** \brief Mask for Ifx_FAULT_STRUCT_DATA_Bits.DATA */
#define IFX_FAULT_STRUCT_DATA_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_FAULT_STRUCT_DATA_Bits.DATA */
#define IFX_FAULT_STRUCT_DATA_DATA_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_PENDING0_Bits.SOURCE */
#define IFX_FAULT_STRUCT_PENDING0_SOURCE_LEN (32u)

/** \brief Mask for Ifx_FAULT_STRUCT_PENDING0_Bits.SOURCE */
#define IFX_FAULT_STRUCT_PENDING0_SOURCE_MSK (0xffffffffu)

/** \brief Offset for Ifx_FAULT_STRUCT_PENDING0_Bits.SOURCE */
#define IFX_FAULT_STRUCT_PENDING0_SOURCE_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_PENDING1_Bits.SOURCE */
#define IFX_FAULT_STRUCT_PENDING1_SOURCE_LEN (32u)

/** \brief Mask for Ifx_FAULT_STRUCT_PENDING1_Bits.SOURCE */
#define IFX_FAULT_STRUCT_PENDING1_SOURCE_MSK (0xffffffffu)

/** \brief Offset for Ifx_FAULT_STRUCT_PENDING1_Bits.SOURCE */
#define IFX_FAULT_STRUCT_PENDING1_SOURCE_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_PENDING2_Bits.SOURCE */
#define IFX_FAULT_STRUCT_PENDING2_SOURCE_LEN (32u)

/** \brief Mask for Ifx_FAULT_STRUCT_PENDING2_Bits.SOURCE */
#define IFX_FAULT_STRUCT_PENDING2_SOURCE_MSK (0xffffffffu)

/** \brief Offset for Ifx_FAULT_STRUCT_PENDING2_Bits.SOURCE */
#define IFX_FAULT_STRUCT_PENDING2_SOURCE_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_MASK0_Bits.SOURCE */
#define IFX_FAULT_STRUCT_MASK0_SOURCE_LEN (32u)

/** \brief Mask for Ifx_FAULT_STRUCT_MASK0_Bits.SOURCE */
#define IFX_FAULT_STRUCT_MASK0_SOURCE_MSK (0xffffffffu)

/** \brief Offset for Ifx_FAULT_STRUCT_MASK0_Bits.SOURCE */
#define IFX_FAULT_STRUCT_MASK0_SOURCE_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_MASK1_Bits.SOURCE */
#define IFX_FAULT_STRUCT_MASK1_SOURCE_LEN (32u)

/** \brief Mask for Ifx_FAULT_STRUCT_MASK1_Bits.SOURCE */
#define IFX_FAULT_STRUCT_MASK1_SOURCE_MSK (0xffffffffu)

/** \brief Offset for Ifx_FAULT_STRUCT_MASK1_Bits.SOURCE */
#define IFX_FAULT_STRUCT_MASK1_SOURCE_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_MASK2_Bits.SOURCE */
#define IFX_FAULT_STRUCT_MASK2_SOURCE_LEN (32u)

/** \brief Mask for Ifx_FAULT_STRUCT_MASK2_Bits.SOURCE */
#define IFX_FAULT_STRUCT_MASK2_SOURCE_MSK (0xffffffffu)

/** \brief Offset for Ifx_FAULT_STRUCT_MASK2_Bits.SOURCE */
#define IFX_FAULT_STRUCT_MASK2_SOURCE_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_INTR_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR__FAULT_LEN (1u)

/** \brief Mask for Ifx_FAULT_STRUCT_INTR_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR__FAULT_MSK (0x1u)

/** \brief Offset for Ifx_FAULT_STRUCT_INTR_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR__FAULT_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_INTR_SET_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR_SET__FAULT_LEN (1u)

/** \brief Mask for Ifx_FAULT_STRUCT_INTR_SET_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR_SET__FAULT_MSK (0x1u)

/** \brief Offset for Ifx_FAULT_STRUCT_INTR_SET_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR_SET__FAULT_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_INTR_MASK_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR_MASK__FAULT_LEN (1u)

/** \brief Mask for Ifx_FAULT_STRUCT_INTR_MASK_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR_MASK__FAULT_MSK (0x1u)

/** \brief Offset for Ifx_FAULT_STRUCT_INTR_MASK_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR_MASK__FAULT_OFF (0u)

/** \brief Length for Ifx_FAULT_STRUCT_INTR_MASKED_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR_MASKED__FAULT_LEN (1u)

/** \brief Mask for Ifx_FAULT_STRUCT_INTR_MASKED_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR_MASKED__FAULT_MSK (0x1u)

/** \brief Offset for Ifx_FAULT_STRUCT_INTR_MASKED_Bits._FAULT */
#define IFX_FAULT_STRUCT_INTR_MASKED__FAULT_OFF (0u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXFAULT_BF_H_ */
