/***************************************************************************//**
* \file IfxIPC_reg.h
*
* \brief
* IPC address
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
* \defgroup IfxSfr_IPC_Registers_Cfg IPC address
* \ingroup IfxSfr_IPC_Registers
*
*******************************************************************************/

#ifndef _IFXIPC_REG_H_
#define _IFXIPC_REG_H_ 1

/******************************************************************************/
#include "IfxIPC_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_IPC_Registers_Cfg_BaseAddress
 * \{  */

/** \brief IPC object */
#define MODULE_IPC                              /*lint --e(923, 9078)*/ ((*(Ifx_IPC*)(0x421D0000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_STRUCT0                      /*lint --e(923, 9078)*/ ((*(Ifx_IPC_STRUCT*)(0x421D0000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_STRUCT1                      /*lint --e(923, 9078)*/ ((*(Ifx_IPC_STRUCT*)(0x421D0020u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_STRUCT2                      /*lint --e(923, 9078)*/ ((*(Ifx_IPC_STRUCT*)(0x421D0040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_STRUCT3                      /*lint --e(923, 9078)*/ ((*(Ifx_IPC_STRUCT*)(0x421D0060u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_STRUCT4                      /*lint --e(923, 9078)*/ ((*(Ifx_IPC_STRUCT*)(0x421D0080u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_STRUCT5                      /*lint --e(923, 9078)*/ ((*(Ifx_IPC_STRUCT*)(0x421D00A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_STRUCT6                      /*lint --e(923, 9078)*/ ((*(Ifx_IPC_STRUCT*)(0x421D00C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_STRUCT7                      /*lint --e(923, 9078)*/ ((*(Ifx_IPC_STRUCT*)(0x421D00E0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_INTR_STRUCT0                 /*lint --e(923, 9078)*/ ((*(Ifx_IPC_INTR_STRUCT*)(0x421D1000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_INTR_STRUCT1                 /*lint --e(923, 9078)*/ ((*(Ifx_IPC_INTR_STRUCT*)(0x421D1020u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_INTR_STRUCT2                 /*lint --e(923, 9078)*/ ((*(Ifx_IPC_INTR_STRUCT*)(0x421D1040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_IPC_INTR_STRUCT3                 /*lint --e(923, 9078)*/ ((*(Ifx_IPC_INTR_STRUCT*)(0x421D1060u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_IPC_Registers_Cfg_IPC
 * \{  */
/** \brief 0, IPC acquire */
#define REG_IPC_STRUCT0_ACQUIRE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_ACQUIRE*)(0x421D0000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, IPC release */
#define REG_IPC_STRUCT0_RELEASE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_RELEASE*)(0x421D0004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, IPC notification */
#define REG_IPC_STRUCT0_NOTIFY                  /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_NOTIFY*)(0x421D0008u + PPCA_REMAP_OFFSET_2))
/** \brief C, IPC data 0 */
#define REG_IPC_STRUCT0_DATA0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA0*)(0x421D000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, IPC data 1 */
#define REG_IPC_STRUCT0_DATA1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA1*)(0x421D0010u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, IPC lock status */
#define REG_IPC_STRUCT0_LOCK_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_LOCK_STATUS*)(0x421D001Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, IPC acquire */
#define REG_IPC_STRUCT1_ACQUIRE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_ACQUIRE*)(0x421D0020u + PPCA_REMAP_OFFSET_2))
/** \brief 4, IPC release */
#define REG_IPC_STRUCT1_RELEASE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_RELEASE*)(0x421D0024u + PPCA_REMAP_OFFSET_2))
/** \brief 8, IPC notification */
#define REG_IPC_STRUCT1_NOTIFY                  /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_NOTIFY*)(0x421D0028u + PPCA_REMAP_OFFSET_2))
/** \brief C, IPC data 0 */
#define REG_IPC_STRUCT1_DATA0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA0*)(0x421D002Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, IPC data 1 */
#define REG_IPC_STRUCT1_DATA1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA1*)(0x421D0030u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, IPC lock status */
#define REG_IPC_STRUCT1_LOCK_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_LOCK_STATUS*)(0x421D003Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, IPC acquire */
#define REG_IPC_STRUCT2_ACQUIRE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_ACQUIRE*)(0x421D0040u + PPCA_REMAP_OFFSET_2))
/** \brief 4, IPC release */
#define REG_IPC_STRUCT2_RELEASE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_RELEASE*)(0x421D0044u + PPCA_REMAP_OFFSET_2))
/** \brief 8, IPC notification */
#define REG_IPC_STRUCT2_NOTIFY                  /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_NOTIFY*)(0x421D0048u + PPCA_REMAP_OFFSET_2))
/** \brief C, IPC data 0 */
#define REG_IPC_STRUCT2_DATA0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA0*)(0x421D004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, IPC data 1 */
#define REG_IPC_STRUCT2_DATA1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA1*)(0x421D0050u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, IPC lock status */
#define REG_IPC_STRUCT2_LOCK_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_LOCK_STATUS*)(0x421D005Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, IPC acquire */
#define REG_IPC_STRUCT3_ACQUIRE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_ACQUIRE*)(0x421D0060u + PPCA_REMAP_OFFSET_2))
/** \brief 4, IPC release */
#define REG_IPC_STRUCT3_RELEASE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_RELEASE*)(0x421D0064u + PPCA_REMAP_OFFSET_2))
/** \brief 8, IPC notification */
#define REG_IPC_STRUCT3_NOTIFY                  /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_NOTIFY*)(0x421D0068u + PPCA_REMAP_OFFSET_2))
/** \brief C, IPC data 0 */
#define REG_IPC_STRUCT3_DATA0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA0*)(0x421D006Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, IPC data 1 */
#define REG_IPC_STRUCT3_DATA1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA1*)(0x421D0070u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, IPC lock status */
#define REG_IPC_STRUCT3_LOCK_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_LOCK_STATUS*)(0x421D007Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, IPC acquire */
#define REG_IPC_STRUCT4_ACQUIRE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_ACQUIRE*)(0x421D0080u + PPCA_REMAP_OFFSET_2))
/** \brief 4, IPC release */
#define REG_IPC_STRUCT4_RELEASE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_RELEASE*)(0x421D0084u + PPCA_REMAP_OFFSET_2))
/** \brief 8, IPC notification */
#define REG_IPC_STRUCT4_NOTIFY                  /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_NOTIFY*)(0x421D0088u + PPCA_REMAP_OFFSET_2))
/** \brief C, IPC data 0 */
#define REG_IPC_STRUCT4_DATA0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA0*)(0x421D008Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, IPC data 1 */
#define REG_IPC_STRUCT4_DATA1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA1*)(0x421D0090u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, IPC lock status */
#define REG_IPC_STRUCT4_LOCK_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_LOCK_STATUS*)(0x421D009Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, IPC acquire */
#define REG_IPC_STRUCT5_ACQUIRE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_ACQUIRE*)(0x421D00A0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, IPC release */
#define REG_IPC_STRUCT5_RELEASE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_RELEASE*)(0x421D00A4u + PPCA_REMAP_OFFSET_2))
/** \brief 8, IPC notification */
#define REG_IPC_STRUCT5_NOTIFY                  /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_NOTIFY*)(0x421D00A8u + PPCA_REMAP_OFFSET_2))
/** \brief C, IPC data 0 */
#define REG_IPC_STRUCT5_DATA0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA0*)(0x421D00ACu + PPCA_REMAP_OFFSET_2))
/** \brief 10, IPC data 1 */
#define REG_IPC_STRUCT5_DATA1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA1*)(0x421D00B0u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, IPC lock status */
#define REG_IPC_STRUCT5_LOCK_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_LOCK_STATUS*)(0x421D00BCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, IPC acquire */
#define REG_IPC_STRUCT6_ACQUIRE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_ACQUIRE*)(0x421D00C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, IPC release */
#define REG_IPC_STRUCT6_RELEASE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_RELEASE*)(0x421D00C4u + PPCA_REMAP_OFFSET_2))
/** \brief 8, IPC notification */
#define REG_IPC_STRUCT6_NOTIFY                  /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_NOTIFY*)(0x421D00C8u + PPCA_REMAP_OFFSET_2))
/** \brief C, IPC data 0 */
#define REG_IPC_STRUCT6_DATA0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA0*)(0x421D00CCu + PPCA_REMAP_OFFSET_2))
/** \brief 10, IPC data 1 */
#define REG_IPC_STRUCT6_DATA1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA1*)(0x421D00D0u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, IPC lock status */
#define REG_IPC_STRUCT6_LOCK_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_LOCK_STATUS*)(0x421D00DCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, IPC acquire */
#define REG_IPC_STRUCT7_ACQUIRE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_ACQUIRE*)(0x421D00E0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, IPC release */
#define REG_IPC_STRUCT7_RELEASE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_RELEASE*)(0x421D00E4u + PPCA_REMAP_OFFSET_2))
/** \brief 8, IPC notification */
#define REG_IPC_STRUCT7_NOTIFY                  /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_NOTIFY*)(0x421D00E8u + PPCA_REMAP_OFFSET_2))
/** \brief C, IPC data 0 */
#define REG_IPC_STRUCT7_DATA0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA0*)(0x421D00ECu + PPCA_REMAP_OFFSET_2))
/** \brief 10, IPC data 1 */
#define REG_IPC_STRUCT7_DATA1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_DATA1*)(0x421D00F0u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, IPC lock status */
#define REG_IPC_STRUCT7_LOCK_STATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_STRUCT_LOCK_STATUS*)(0x421D00FCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Interrupt */
#define REG_IPC_INTR_STRUCT0_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR*)(0x421D1000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Interrupt set */
#define REG_IPC_INTR_STRUCT0_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_SET*)(0x421D1004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Interrupt mask */
#define REG_IPC_INTR_STRUCT0_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_MASK*)(0x421D1008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Interrupt masked */
#define REG_IPC_INTR_STRUCT0_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_MASKED*)(0x421D100Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Interrupt */
#define REG_IPC_INTR_STRUCT1_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR*)(0x421D1020u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Interrupt set */
#define REG_IPC_INTR_STRUCT1_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_SET*)(0x421D1024u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Interrupt mask */
#define REG_IPC_INTR_STRUCT1_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_MASK*)(0x421D1028u + PPCA_REMAP_OFFSET_2))
/** \brief C, Interrupt masked */
#define REG_IPC_INTR_STRUCT1_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_MASKED*)(0x421D102Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Interrupt */
#define REG_IPC_INTR_STRUCT2_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR*)(0x421D1040u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Interrupt set */
#define REG_IPC_INTR_STRUCT2_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_SET*)(0x421D1044u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Interrupt mask */
#define REG_IPC_INTR_STRUCT2_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_MASK*)(0x421D1048u + PPCA_REMAP_OFFSET_2))
/** \brief C, Interrupt masked */
#define REG_IPC_INTR_STRUCT2_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_MASKED*)(0x421D104Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Interrupt */
#define REG_IPC_INTR_STRUCT3_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR*)(0x421D1060u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Interrupt set */
#define REG_IPC_INTR_STRUCT3_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_SET*)(0x421D1064u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Interrupt mask */
#define REG_IPC_INTR_STRUCT3_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_MASK*)(0x421D1068u + PPCA_REMAP_OFFSET_2))
/** \brief C, Interrupt masked */
#define REG_IPC_INTR_STRUCT3_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_IPC_INTR_STRUCT_INTR_MASKED*)(0x421D106Cu + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXIPC_REG_H_ */
