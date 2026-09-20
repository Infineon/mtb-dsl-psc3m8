/***************************************************************************//**
* \file IfxHSIOM_reg.h
*
* \brief
* HSIOM address
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
* \defgroup IfxSfr_HSIOM_Registers_Cfg HSIOM address
* \ingroup IfxSfr_HSIOM_Registers
*
*******************************************************************************/

#ifndef _IFXHSIOM_REG_H_
#define _IFXHSIOM_REG_H_ 1

/******************************************************************************/
#include "IfxHSIOM_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_HSIOM_Registers_Cfg_BaseAddress
 * \{  */

/** \brief HSIOM object */
#define MODULE_HSIOM                            /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM*)(0x42400000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_PRT0                       /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_PRT*)(0x42400000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_PRT1                       /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_PRT*)(0x42400010u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_PRT2                       /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_PRT*)(0x42400020u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_PRT3                       /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_PRT*)(0x42400030u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_PRT4                       /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_PRT*)(0x42400040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_PRT5                       /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_PRT*)(0x42400050u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_PRT6                       /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_PRT*)(0x42400060u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_PRT7                       /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_PRT*)(0x42400070u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_PRT8                       /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_PRT*)(0x42400080u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_PRT9                       /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_PRT*)(0x42400090u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_SECURE_PRT0                /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_SECURE_PRT*)(0x42401000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_SECURE_PRT1                /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_SECURE_PRT*)(0x42401010u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_SECURE_PRT2                /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_SECURE_PRT*)(0x42401020u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_SECURE_PRT3                /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_SECURE_PRT*)(0x42401030u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_SECURE_PRT4                /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_SECURE_PRT*)(0x42401040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_SECURE_PRT5                /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_SECURE_PRT*)(0x42401050u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_SECURE_PRT6                /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_SECURE_PRT*)(0x42401060u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_SECURE_PRT7                /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_SECURE_PRT*)(0x42401070u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_SECURE_PRT8                /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_SECURE_PRT*)(0x42401080u + PPCA_REMAP_OFFSET_2)))
#define MODULE_HSIOM_SECURE_PRT9                /*lint --e(923, 9078)*/ ((*(Ifx_HSIOM_SECURE_PRT*)(0x42401090u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_HSIOM_Registers_Cfg_HSIOM
 * \{  */
/** \brief 0, Port selection 0 */
#define REG_HSIOM_PRT0_PORT_SEL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL0*)(0x42400000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port selection 1 */
#define REG_HSIOM_PRT0_PORT_SEL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL1*)(0x42400004u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port selection 0 */
#define REG_HSIOM_PRT1_PORT_SEL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL0*)(0x42400010u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port selection 1 */
#define REG_HSIOM_PRT1_PORT_SEL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL1*)(0x42400014u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port selection 0 */
#define REG_HSIOM_PRT2_PORT_SEL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL0*)(0x42400020u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port selection 1 */
#define REG_HSIOM_PRT2_PORT_SEL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL1*)(0x42400024u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port selection 0 */
#define REG_HSIOM_PRT3_PORT_SEL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL0*)(0x42400030u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port selection 1 */
#define REG_HSIOM_PRT3_PORT_SEL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL1*)(0x42400034u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port selection 0 */
#define REG_HSIOM_PRT4_PORT_SEL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL0*)(0x42400040u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port selection 1 */
#define REG_HSIOM_PRT4_PORT_SEL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL1*)(0x42400044u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port selection 0 */
#define REG_HSIOM_PRT5_PORT_SEL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL0*)(0x42400050u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port selection 1 */
#define REG_HSIOM_PRT5_PORT_SEL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL1*)(0x42400054u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port selection 0 */
#define REG_HSIOM_PRT6_PORT_SEL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL0*)(0x42400060u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port selection 1 */
#define REG_HSIOM_PRT6_PORT_SEL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL1*)(0x42400064u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port selection 0 */
#define REG_HSIOM_PRT7_PORT_SEL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL0*)(0x42400070u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port selection 1 */
#define REG_HSIOM_PRT7_PORT_SEL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL1*)(0x42400074u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port selection 0 */
#define REG_HSIOM_PRT8_PORT_SEL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL0*)(0x42400080u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port selection 1 */
#define REG_HSIOM_PRT8_PORT_SEL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL1*)(0x42400084u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port selection 0 */
#define REG_HSIOM_PRT9_PORT_SEL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL0*)(0x42400090u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port selection 1 */
#define REG_HSIOM_PRT9_PORT_SEL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_PRT_PORT_SEL1*)(0x42400094u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Non-Secure Mask */
#define REG_HSIOM_SECURE_PRT0_NONSECURE_MASK    /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK*)(0x42401000u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Non-Secure Mask */
#define REG_HSIOM_SECURE_PRT1_NONSECURE_MASK    /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK*)(0x42401010u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Non-Secure Mask */
#define REG_HSIOM_SECURE_PRT2_NONSECURE_MASK    /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK*)(0x42401020u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Non-Secure Mask */
#define REG_HSIOM_SECURE_PRT3_NONSECURE_MASK    /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK*)(0x42401030u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Non-Secure Mask */
#define REG_HSIOM_SECURE_PRT4_NONSECURE_MASK    /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK*)(0x42401040u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Non-Secure Mask */
#define REG_HSIOM_SECURE_PRT5_NONSECURE_MASK    /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK*)(0x42401050u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Non-Secure Mask */
#define REG_HSIOM_SECURE_PRT6_NONSECURE_MASK    /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK*)(0x42401060u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Non-Secure Mask */
#define REG_HSIOM_SECURE_PRT7_NONSECURE_MASK    /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK*)(0x42401070u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Non-Secure Mask */
#define REG_HSIOM_SECURE_PRT8_NONSECURE_MASK    /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK*)(0x42401080u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Non-Secure Mask */
#define REG_HSIOM_SECURE_PRT9_NONSECURE_MASK    /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK*)(0x42401090u + PPCA_REMAP_OFFSET_2))
/** \brief 2000, AMUX splitter cell control */
#define REG_HSIOM_AMUX_SPLIT_CTL0               /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_AMUX_SPLIT_CTL*)(0x42402000u + PPCA_REMAP_OFFSET_2))
/** \brief 2004, AMUX splitter cell control */
#define REG_HSIOM_AMUX_SPLIT_CTL1               /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_AMUX_SPLIT_CTL*)(0x42402004u + PPCA_REMAP_OFFSET_2))
/** \brief 2008, AMUX splitter cell control */
#define REG_HSIOM_AMUX_SPLIT_CTL2               /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_AMUX_SPLIT_CTL*)(0x42402008u + PPCA_REMAP_OFFSET_2))
/** \brief 200C, AMUX splitter cell control */
#define REG_HSIOM_AMUX_SPLIT_CTL3               /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_AMUX_SPLIT_CTL*)(0x4240200Cu + PPCA_REMAP_OFFSET_2))
/** \brief 2010, AMUX splitter cell control */
#define REG_HSIOM_AMUX_SPLIT_CTL4               /*lint --e(923, 9078)*/ (*(volatile Ifx_HSIOM_AMUX_SPLIT_CTL*)(0x42402010u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXHSIOM_REG_H_ */
