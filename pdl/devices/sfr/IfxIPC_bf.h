/***************************************************************************//**
* \file IfxIPC_bf.h
*
* \brief
* IPC Bitfields mask and offset
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
* \defgroup IfxSfr_IPC_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_IPC_Registers
*
*******************************************************************************/

#ifndef _IFXIPC_BF_H_
#define _IFXIPC_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_IPC_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_IPC_STRUCT_ACQUIRE_Bits.P */
#define IFX_IPC_STRUCT_ACQUIRE_P_LEN (1u)

/** \brief Mask for Ifx_IPC_STRUCT_ACQUIRE_Bits.P */
#define IFX_IPC_STRUCT_ACQUIRE_P_MSK (0x1u)

/** \brief Offset for Ifx_IPC_STRUCT_ACQUIRE_Bits.P */
#define IFX_IPC_STRUCT_ACQUIRE_P_OFF (0u)

/** \brief Length for Ifx_IPC_STRUCT_ACQUIRE_Bits.NS */
#define IFX_IPC_STRUCT_ACQUIRE_NS_LEN (1u)

/** \brief Mask for Ifx_IPC_STRUCT_ACQUIRE_Bits.NS */
#define IFX_IPC_STRUCT_ACQUIRE_NS_MSK (0x1u)

/** \brief Offset for Ifx_IPC_STRUCT_ACQUIRE_Bits.NS */
#define IFX_IPC_STRUCT_ACQUIRE_NS_OFF (1u)

/** \brief Length for Ifx_IPC_STRUCT_ACQUIRE_Bits.PC */
#define IFX_IPC_STRUCT_ACQUIRE_PC_LEN (4u)

/** \brief Mask for Ifx_IPC_STRUCT_ACQUIRE_Bits.PC */
#define IFX_IPC_STRUCT_ACQUIRE_PC_MSK (0xfu)

/** \brief Offset for Ifx_IPC_STRUCT_ACQUIRE_Bits.PC */
#define IFX_IPC_STRUCT_ACQUIRE_PC_OFF (4u)

/** \brief Length for Ifx_IPC_STRUCT_ACQUIRE_Bits.MS */
#define IFX_IPC_STRUCT_ACQUIRE_MS_LEN (8u)

/** \brief Mask for Ifx_IPC_STRUCT_ACQUIRE_Bits.MS */
#define IFX_IPC_STRUCT_ACQUIRE_MS_MSK (0xffu)

/** \brief Offset for Ifx_IPC_STRUCT_ACQUIRE_Bits.MS */
#define IFX_IPC_STRUCT_ACQUIRE_MS_OFF (8u)

/** \brief Length for Ifx_IPC_STRUCT_ACQUIRE_Bits.SUCCESS */
#define IFX_IPC_STRUCT_ACQUIRE_SUCCESS_LEN (1u)

/** \brief Mask for Ifx_IPC_STRUCT_ACQUIRE_Bits.SUCCESS */
#define IFX_IPC_STRUCT_ACQUIRE_SUCCESS_MSK (0x1u)

/** \brief Offset for Ifx_IPC_STRUCT_ACQUIRE_Bits.SUCCESS */
#define IFX_IPC_STRUCT_ACQUIRE_SUCCESS_OFF (31u)

/** \brief Length for Ifx_IPC_STRUCT_RELEASE_Bits.INTR_RELEASE */
#define IFX_IPC_STRUCT_RELEASE_INTR_RELEASE_LEN (16u)

/** \brief Mask for Ifx_IPC_STRUCT_RELEASE_Bits.INTR_RELEASE */
#define IFX_IPC_STRUCT_RELEASE_INTR_RELEASE_MSK (0xffffu)

/** \brief Offset for Ifx_IPC_STRUCT_RELEASE_Bits.INTR_RELEASE */
#define IFX_IPC_STRUCT_RELEASE_INTR_RELEASE_OFF (0u)

/** \brief Length for Ifx_IPC_STRUCT_NOTIFY_Bits.INTR_NOTIFY */
#define IFX_IPC_STRUCT_NOTIFY_INTR_NOTIFY_LEN (16u)

/** \brief Mask for Ifx_IPC_STRUCT_NOTIFY_Bits.INTR_NOTIFY */
#define IFX_IPC_STRUCT_NOTIFY_INTR_NOTIFY_MSK (0xffffu)

/** \brief Offset for Ifx_IPC_STRUCT_NOTIFY_Bits.INTR_NOTIFY */
#define IFX_IPC_STRUCT_NOTIFY_INTR_NOTIFY_OFF (0u)

/** \brief Length for Ifx_IPC_STRUCT_DATA0_Bits.DATA */
#define IFX_IPC_STRUCT_DATA0_DATA_LEN (32u)

/** \brief Mask for Ifx_IPC_STRUCT_DATA0_Bits.DATA */
#define IFX_IPC_STRUCT_DATA0_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_IPC_STRUCT_DATA0_Bits.DATA */
#define IFX_IPC_STRUCT_DATA0_DATA_OFF (0u)

/** \brief Length for Ifx_IPC_STRUCT_DATA1_Bits.DATA */
#define IFX_IPC_STRUCT_DATA1_DATA_LEN (32u)

/** \brief Mask for Ifx_IPC_STRUCT_DATA1_Bits.DATA */
#define IFX_IPC_STRUCT_DATA1_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_IPC_STRUCT_DATA1_Bits.DATA */
#define IFX_IPC_STRUCT_DATA1_DATA_OFF (0u)

/** \brief Length for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.P */
#define IFX_IPC_STRUCT_LOCK_STATUS_P_LEN (1u)

/** \brief Mask for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.P */
#define IFX_IPC_STRUCT_LOCK_STATUS_P_MSK (0x1u)

/** \brief Offset for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.P */
#define IFX_IPC_STRUCT_LOCK_STATUS_P_OFF (0u)

/** \brief Length for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.NS */
#define IFX_IPC_STRUCT_LOCK_STATUS_NS_LEN (1u)

/** \brief Mask for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.NS */
#define IFX_IPC_STRUCT_LOCK_STATUS_NS_MSK (0x1u)

/** \brief Offset for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.NS */
#define IFX_IPC_STRUCT_LOCK_STATUS_NS_OFF (1u)

/** \brief Length for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.PC */
#define IFX_IPC_STRUCT_LOCK_STATUS_PC_LEN (4u)

/** \brief Mask for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.PC */
#define IFX_IPC_STRUCT_LOCK_STATUS_PC_MSK (0xfu)

/** \brief Offset for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.PC */
#define IFX_IPC_STRUCT_LOCK_STATUS_PC_OFF (4u)

/** \brief Length for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.MS */
#define IFX_IPC_STRUCT_LOCK_STATUS_MS_LEN (8u)

/** \brief Mask for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.MS */
#define IFX_IPC_STRUCT_LOCK_STATUS_MS_MSK (0xffu)

/** \brief Offset for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.MS */
#define IFX_IPC_STRUCT_LOCK_STATUS_MS_OFF (8u)

/** \brief Length for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.ACQUIRED */
#define IFX_IPC_STRUCT_LOCK_STATUS_ACQUIRED_LEN (1u)

/** \brief Mask for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.ACQUIRED */
#define IFX_IPC_STRUCT_LOCK_STATUS_ACQUIRED_MSK (0x1u)

/** \brief Offset for Ifx_IPC_STRUCT_LOCK_STATUS_Bits.ACQUIRED */
#define IFX_IPC_STRUCT_LOCK_STATUS_ACQUIRED_OFF (31u)

/** \brief Length for Ifx_IPC_INTR_STRUCT_INTR_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_RELEASE_LEN (16u)

/** \brief Mask for Ifx_IPC_INTR_STRUCT_INTR_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_RELEASE_MSK (0xffffu)

/** \brief Offset for Ifx_IPC_INTR_STRUCT_INTR_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_RELEASE_OFF (0u)

/** \brief Length for Ifx_IPC_INTR_STRUCT_INTR_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_NOTIFY_LEN (16u)

/** \brief Mask for Ifx_IPC_INTR_STRUCT_INTR_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_NOTIFY_MSK (0xffffu)

/** \brief Offset for Ifx_IPC_INTR_STRUCT_INTR_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_NOTIFY_OFF (16u)

/** \brief Length for Ifx_IPC_INTR_STRUCT_INTR_SET_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_SET_RELEASE_LEN (16u)

/** \brief Mask for Ifx_IPC_INTR_STRUCT_INTR_SET_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_SET_RELEASE_MSK (0xffffu)

/** \brief Offset for Ifx_IPC_INTR_STRUCT_INTR_SET_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_SET_RELEASE_OFF (0u)

/** \brief Length for Ifx_IPC_INTR_STRUCT_INTR_SET_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_SET_NOTIFY_LEN (16u)

/** \brief Mask for Ifx_IPC_INTR_STRUCT_INTR_SET_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_SET_NOTIFY_MSK (0xffffu)

/** \brief Offset for Ifx_IPC_INTR_STRUCT_INTR_SET_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_SET_NOTIFY_OFF (16u)

/** \brief Length for Ifx_IPC_INTR_STRUCT_INTR_MASK_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_MASK_RELEASE_LEN (16u)

/** \brief Mask for Ifx_IPC_INTR_STRUCT_INTR_MASK_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_MASK_RELEASE_MSK (0xffffu)

/** \brief Offset for Ifx_IPC_INTR_STRUCT_INTR_MASK_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_MASK_RELEASE_OFF (0u)

/** \brief Length for Ifx_IPC_INTR_STRUCT_INTR_MASK_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_MASK_NOTIFY_LEN (16u)

/** \brief Mask for Ifx_IPC_INTR_STRUCT_INTR_MASK_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_MASK_NOTIFY_MSK (0xffffu)

/** \brief Offset for Ifx_IPC_INTR_STRUCT_INTR_MASK_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_MASK_NOTIFY_OFF (16u)

/** \brief Length for Ifx_IPC_INTR_STRUCT_INTR_MASKED_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_MASKED_RELEASE_LEN (16u)

/** \brief Mask for Ifx_IPC_INTR_STRUCT_INTR_MASKED_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_MASKED_RELEASE_MSK (0xffffu)

/** \brief Offset for Ifx_IPC_INTR_STRUCT_INTR_MASKED_Bits.RELEASE */
#define IFX_IPC_INTR_STRUCT_INTR_MASKED_RELEASE_OFF (0u)

/** \brief Length for Ifx_IPC_INTR_STRUCT_INTR_MASKED_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_MASKED_NOTIFY_LEN (16u)

/** \brief Mask for Ifx_IPC_INTR_STRUCT_INTR_MASKED_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_MASKED_NOTIFY_MSK (0xffffu)

/** \brief Offset for Ifx_IPC_INTR_STRUCT_INTR_MASKED_Bits.NOTIFY */
#define IFX_IPC_INTR_STRUCT_INTR_MASKED_NOTIFY_OFF (16u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXIPC_BF_H_ */
