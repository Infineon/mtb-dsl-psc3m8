/***************************************************************************//**
* \file IfxMXCM33_reg.h
*
* \brief
* MXCM33 address
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
* \defgroup IfxSfr_MXCM33_Registers_Cfg MXCM33 address
* \ingroup IfxSfr_MXCM33_Registers
*
*******************************************************************************/

#ifndef _IFXMXCM33_REG_H_
#define _IFXMXCM33_REG_H_ 1

/******************************************************************************/
#include "IfxMXCM33_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_MXCM33_Registers_Cfg_BaseAddress
 * \{  */

/** \brief MXCM33 object */
#define MODULE_MXCM33                           /*lint --e(923, 9078)*/ ((*(Ifx_MXCM33*)(0x42160000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXCM33_Registers_Cfg_MXCM33
 * \{  */
/** \brief 0, Control */
#define REG_MXCM33_CM33_CTL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_CTL*)(0x42160000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Command */
#define REG_MXCM33_CM33_CMD                     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_CMD*)(0x42160004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Status */
#define REG_MXCM33_CM33_STATUS                  /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_STATUS*)(0x42160008u + PPCA_REMAP_OFFSET_2))
/** \brief 80, CM33 NMI control */
#define REG_MXCM33_CM33_NMI_CTL0                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_NMI_CTL*)(0x42160080u + PPCA_REMAP_OFFSET_2))
/** \brief 84, CM33 NMI control */
#define REG_MXCM33_CM33_NMI_CTL1                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_NMI_CTL*)(0x42160084u + PPCA_REMAP_OFFSET_2))
/** \brief 88, CM33 NMI control */
#define REG_MXCM33_CM33_NMI_CTL2                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_NMI_CTL*)(0x42160088u + PPCA_REMAP_OFFSET_2))
/** \brief 8C, CM33 NMI control */
#define REG_MXCM33_CM33_NMI_CTL3                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_NMI_CTL*)(0x4216008Cu + PPCA_REMAP_OFFSET_2))
/** \brief C0, CM33 event control */
#define REG_MXCM33_CM33_EVENT_CTL               /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_EVENT_CTL*)(0x421600C0u + PPCA_REMAP_OFFSET_2))
/** \brief 1000, CM33 secure vector table base */
#define REG_MXCM33_CM33_S_VECTOR_TABLE_BASE     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_S_VECTOR_TABLE_BASE*)(0x42161000u + PPCA_REMAP_OFFSET_2))
/** \brief 1004, CM33 non-secure vector table base */
#define REG_MXCM33_CM33_NS_VECTOR_TABLE_BASE    /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_NS_VECTOR_TABLE_BASE*)(0x42161004u + PPCA_REMAP_OFFSET_2))
/** \brief 2000, CM33 protection context control */
#define REG_MXCM33_CM33_PC_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_PC_CTL*)(0x42162000u + PPCA_REMAP_OFFSET_2))
/** \brief 2040, CM33 protection context 0 handler */
#define REG_MXCM33_CM33_PC0_HANDLER             /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_PC0_HANDLER*)(0x42162040u + PPCA_REMAP_OFFSET_2))
/** \brief 2100, CM33 protection context 1 handler */
#define REG_MXCM33_CM33_PC1_HANDLER             /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_PC1_HANDLER*)(0x42162100u + PPCA_REMAP_OFFSET_2))
/** \brief 2140, CM33 protection context 2 handler */
#define REG_MXCM33_CM33_PC2_HANDLER             /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_PC2_HANDLER*)(0x42162140u + PPCA_REMAP_OFFSET_2))
/** \brief 2180, CM33 protection context 3 handler */
#define REG_MXCM33_CM33_PC3_HANDLER             /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCM33_CM33_PC3_HANDLER*)(0x42162180u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXMXCM33_REG_H_ */
