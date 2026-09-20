/***************************************************************************//**
* \file IfxDW_reg.h
*
* \brief
* DW address
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
* \defgroup IfxSfr_DW_Registers_Cfg DW address
* \ingroup IfxSfr_DW_Registers
*
*******************************************************************************/

#ifndef _IFXDW_REG_H_
#define _IFXDW_REG_H_ 1

/******************************************************************************/
#include "IfxDW_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_DW_Registers_Cfg_BaseAddress
 * \{  */

/** \brief DW object */
#define MODULE_DW0                              /*lint --e(923, 9078)*/ ((*(Ifx_DW*)(0x42180000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT0                   /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT1                   /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT2                   /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188080u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT3                   /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x421880C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT4                   /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188100u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT5                   /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188140u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT6                   /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188180u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT7                   /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x421881C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT8                   /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188200u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT9                   /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188240u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT10                  /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188280u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT11                  /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x421882C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT12                  /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188300u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT13                  /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188340u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT14                  /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x42188380u + PPCA_REMAP_OFFSET_2)))
#define MODULE_DW0_CH_STRUCT15                  /*lint --e(923, 9078)*/ ((*(Ifx_DW_CH_STRUCT*)(0x421883C0u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_DW_Registers_Cfg_DW
 * \{  */
/** \brief 0, Control */
#define REG_DW0_CTL                             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CTL*)(0x42180000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Status */
#define REG_DW0_STATUS                          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_STATUS*)(0x42180004u + PPCA_REMAP_OFFSET_2))
/** \brief 20, Active descriptor control */
#define REG_DW0_ACT_DESCR_CTL                   /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_ACT_DESCR_CTL*)(0x42180020u + PPCA_REMAP_OFFSET_2))
/** \brief 24, Active descriptor source */
#define REG_DW0_ACT_DESCR_SRC                   /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_ACT_DESCR_SRC*)(0x42180024u + PPCA_REMAP_OFFSET_2))
/** \brief 28, Active descriptor destination */
#define REG_DW0_ACT_DESCR_DST                   /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_ACT_DESCR_DST*)(0x42180028u + PPCA_REMAP_OFFSET_2))
/** \brief 30, Active descriptor X loop control */
#define REG_DW0_ACT_DESCR_X_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_ACT_DESCR_X_CTL*)(0x42180030u + PPCA_REMAP_OFFSET_2))
/** \brief 34, Active descriptor Y loop control */
#define REG_DW0_ACT_DESCR_Y_CTL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_ACT_DESCR_Y_CTL*)(0x42180034u + PPCA_REMAP_OFFSET_2))
/** \brief 38, Active descriptor next pointer */
#define REG_DW0_ACT_DESCR_NEXT_PTR              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_ACT_DESCR_NEXT_PTR*)(0x42180038u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Active source */
#define REG_DW0_ACT_SRC                         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_ACT_SRC*)(0x42180040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Active destination */
#define REG_DW0_ACT_DST                         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_ACT_DST*)(0x42180044u + PPCA_REMAP_OFFSET_2))
/** \brief 100, CRC control */
#define REG_DW0_CRC_CTL                         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CRC_CTL*)(0x42180100u + PPCA_REMAP_OFFSET_2))
/** \brief 110, CRC data control */
#define REG_DW0_CRC_DATA_CTL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CRC_DATA_CTL*)(0x42180110u + PPCA_REMAP_OFFSET_2))
/** \brief 120, CRC polynomial control */
#define REG_DW0_CRC_POL_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CRC_POL_CTL*)(0x42180120u + PPCA_REMAP_OFFSET_2))
/** \brief 130, CRC LFSR control */
#define REG_DW0_CRC_LFSR_CTL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CRC_LFSR_CTL*)(0x42180130u + PPCA_REMAP_OFFSET_2))
/** \brief 140, CRC remainder control */
#define REG_DW0_CRC_REM_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CRC_REM_CTL*)(0x42180140u + PPCA_REMAP_OFFSET_2))
/** \brief 148, CRC remainder result */
#define REG_DW0_CRC_REM_RESULT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CRC_REM_RESULT*)(0x42180148u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT0_CH_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT0_CH_STATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT0_CH_IDX               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT0_CH_CURR_PTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218800Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT0_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT0_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT0_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT0_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218801Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT0_TR_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x42188028u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT1_CH_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188040u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT1_CH_STATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188044u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT1_CH_IDX               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188048u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT1_CH_CURR_PTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218804Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT1_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188050u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT1_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188054u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT1_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188058u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT1_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218805Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT1_TR_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x42188068u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT2_CH_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188080u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT2_CH_STATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188084u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT2_CH_IDX               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188088u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT2_CH_CURR_PTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218808Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT2_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188090u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT2_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188094u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT2_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188098u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT2_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218809Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT2_TR_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x421880A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT3_CH_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x421880C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT3_CH_STATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x421880C4u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT3_CH_IDX               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x421880C8u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT3_CH_CURR_PTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x421880CCu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT3_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x421880D0u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT3_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x421880D4u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT3_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x421880D8u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT3_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x421880DCu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT3_TR_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x421880E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT4_CH_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188100u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT4_CH_STATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188104u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT4_CH_IDX               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188108u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT4_CH_CURR_PTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218810Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT4_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188110u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT4_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188114u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT4_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188118u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT4_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218811Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT4_TR_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x42188128u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT5_CH_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188140u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT5_CH_STATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188144u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT5_CH_IDX               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188148u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT5_CH_CURR_PTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218814Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT5_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188150u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT5_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188154u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT5_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188158u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT5_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218815Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT5_TR_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x42188168u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT6_CH_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188180u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT6_CH_STATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188184u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT6_CH_IDX               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188188u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT6_CH_CURR_PTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218818Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT6_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188190u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT6_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188194u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT6_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188198u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT6_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218819Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT6_TR_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x421881A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT7_CH_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x421881C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT7_CH_STATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x421881C4u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT7_CH_IDX               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x421881C8u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT7_CH_CURR_PTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x421881CCu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT7_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x421881D0u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT7_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x421881D4u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT7_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x421881D8u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT7_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x421881DCu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT7_TR_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x421881E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT8_CH_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188200u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT8_CH_STATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188204u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT8_CH_IDX               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188208u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT8_CH_CURR_PTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218820Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT8_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188210u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT8_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188214u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT8_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188218u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT8_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218821Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT8_TR_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x42188228u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT9_CH_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188240u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT9_CH_STATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188244u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT9_CH_IDX               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188248u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT9_CH_CURR_PTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218824Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT9_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188250u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT9_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188254u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT9_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188258u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT9_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218825Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT9_TR_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x42188268u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT10_CH_CTL              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188280u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT10_CH_STATUS           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188284u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT10_CH_IDX              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188288u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT10_CH_CURR_PTR         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218828Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT10_INTR                /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188290u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT10_INTR_SET            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188294u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT10_INTR_MASK           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188298u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT10_INTR_MASKED         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218829Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT10_TR_CMD              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x421882A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT11_CH_CTL              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x421882C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT11_CH_STATUS           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x421882C4u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT11_CH_IDX              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x421882C8u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT11_CH_CURR_PTR         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x421882CCu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT11_INTR                /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x421882D0u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT11_INTR_SET            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x421882D4u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT11_INTR_MASK           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x421882D8u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT11_INTR_MASKED         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x421882DCu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT11_TR_CMD              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x421882E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT12_CH_CTL              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188300u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT12_CH_STATUS           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188304u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT12_CH_IDX              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188308u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT12_CH_CURR_PTR         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218830Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT12_INTR                /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188310u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT12_INTR_SET            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188314u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT12_INTR_MASK           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188318u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT12_INTR_MASKED         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218831Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT12_TR_CMD              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x42188328u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT13_CH_CTL              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188340u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT13_CH_STATUS           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188344u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT13_CH_IDX              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188348u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT13_CH_CURR_PTR         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218834Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT13_INTR                /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188350u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT13_INTR_SET            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188354u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT13_INTR_MASK           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188358u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT13_INTR_MASKED         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218835Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT13_TR_CMD              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x42188368u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT14_CH_CTL              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x42188380u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT14_CH_STATUS           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x42188384u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT14_CH_IDX              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x42188388u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT14_CH_CURR_PTR         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x4218838Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT14_INTR                /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x42188390u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT14_INTR_SET            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x42188394u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT14_INTR_MASK           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x42188398u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT14_INTR_MASKED         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x4218839Cu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT14_TR_CMD              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x421883A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Channel control */
#define REG_DW0_CH_STRUCT15_CH_CTL              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CTL*)(0x421883C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Channel status */
#define REG_DW0_CH_STRUCT15_CH_STATUS           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_STATUS*)(0x421883C4u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Channel current indices */
#define REG_DW0_CH_STRUCT15_CH_IDX              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_IDX*)(0x421883C8u + PPCA_REMAP_OFFSET_2))
/** \brief C, Channel current descriptor pointer */
#define REG_DW0_CH_STRUCT15_CH_CURR_PTR         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_CH_CURR_PTR*)(0x421883CCu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Interrupt */
#define REG_DW0_CH_STRUCT15_INTR                /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR*)(0x421883D0u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Interrupt set */
#define REG_DW0_CH_STRUCT15_INTR_SET            /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_SET*)(0x421883D4u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Interrupt mask */
#define REG_DW0_CH_STRUCT15_INTR_MASK           /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASK*)(0x421883D8u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Interrupt masked */
#define REG_DW0_CH_STRUCT15_INTR_MASKED         /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_INTR_MASKED*)(0x421883DCu + PPCA_REMAP_OFFSET_2))
/** \brief 28, Channel software trigger */
#define REG_DW0_CH_STRUCT15_TR_CMD              /*lint --e(923, 9078)*/ (*(volatile Ifx_DW_CH_STRUCT_TR_CMD*)(0x421883E8u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXDW_REG_H_ */
