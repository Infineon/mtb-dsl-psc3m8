/***************************************************************************//**
* \file IfxPERI_PCLK_reg.h
*
* \brief
* PERI_PCLK address
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
* \defgroup IfxSfr_PERI_PCLK_Registers_Cfg PERI_PCLK address
* \ingroup IfxSfr_PERI_PCLK_Registers
*
*******************************************************************************/

#ifndef _IFXPERI_PCLK_REG_H_
#define _IFXPERI_PCLK_REG_H_ 1

/******************************************************************************/
#include "IfxPERI_PCLK_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_PERI_PCLK_Registers_Cfg_BaseAddress
 * \{  */

/** \brief PERI_PCLK object */
#define MODULE_PERI_PCLK                        /*lint --e(923, 9078)*/ ((*(Ifx_PERI_PCLK*)(0x42040000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_PCLK_GR0                    /*lint --e(923, 9078)*/ ((*(Ifx_PERI_PCLK_GR*)(0x42040000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_PCLK_GR1                    /*lint --e(923, 9078)*/ ((*(Ifx_PERI_PCLK_GR*)(0x42042000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_PCLK_GR2                    /*lint --e(923, 9078)*/ ((*(Ifx_PERI_PCLK_GR*)(0x42044000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_PCLK_GR3                    /*lint --e(923, 9078)*/ ((*(Ifx_PERI_PCLK_GR*)(0x42046000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_PCLK_GR4                    /*lint --e(923, 9078)*/ ((*(Ifx_PERI_PCLK_GR*)(0x42048000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PERI_PCLK_GR5                    /*lint --e(923, 9078)*/ ((*(Ifx_PERI_PCLK_GR*)(0x4204A000u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PERI_PCLK_Registers_Cfg_PERI_PCLK
 * \{  */
/** \brief 0, Divider command */
#define REG_PERI_PCLK_GR0_DIV_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_CMD*)(0x42040000u + PPCA_REMAP_OFFSET_2))
/** \brief C00, Clock control */
#define REG_PERI_PCLK_GR0_CLOCK_CTL0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42040C00u + PPCA_REMAP_OFFSET_2))
/** \brief 1C00, Divider control (for 24.5 divider) */
#define REG_PERI_PCLK_GR0_DIV_24_5_CTL0         /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_24_5_CTL*)(0x42041C00u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Divider command */
#define REG_PERI_PCLK_GR2_DIV_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_CMD*)(0x42044000u + PPCA_REMAP_OFFSET_2))
/** \brief C00, Clock control */
#define REG_PERI_PCLK_GR2_CLOCK_CTL0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42044C00u + PPCA_REMAP_OFFSET_2))
/** \brief C04, Clock control */
#define REG_PERI_PCLK_GR2_CLOCK_CTL1            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42044C04u + PPCA_REMAP_OFFSET_2))
/** \brief C08, Clock control */
#define REG_PERI_PCLK_GR2_CLOCK_CTL2            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42044C08u + PPCA_REMAP_OFFSET_2))
/** \brief C0C, Clock control */
#define REG_PERI_PCLK_GR2_CLOCK_CTL3            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42044C0Cu + PPCA_REMAP_OFFSET_2))
/** \brief C10, Clock control */
#define REG_PERI_PCLK_GR2_CLOCK_CTL4            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42044C10u + PPCA_REMAP_OFFSET_2))
/** \brief 1000, Divider control (for 8.0 divider) */
#define REG_PERI_PCLK_GR2_DIV_8_CTL0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_8_CTL*)(0x42045000u + PPCA_REMAP_OFFSET_2))
/** \brief 1400, Divider control (for 16.0 divider) */
#define REG_PERI_PCLK_GR2_DIV_16_CTL0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_CTL*)(0x42045400u + PPCA_REMAP_OFFSET_2))
/** \brief 1404, Divider control (for 16.0 divider) */
#define REG_PERI_PCLK_GR2_DIV_16_CTL1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_CTL*)(0x42045404u + PPCA_REMAP_OFFSET_2))
/** \brief 1408, Divider control (for 16.0 divider) */
#define REG_PERI_PCLK_GR2_DIV_16_CTL2           /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_CTL*)(0x42045408u + PPCA_REMAP_OFFSET_2))
/** \brief 140C, Divider control (for 16.0 divider) */
#define REG_PERI_PCLK_GR2_DIV_16_CTL3           /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_CTL*)(0x4204540Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Divider command */
#define REG_PERI_PCLK_GR3_DIV_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_CMD*)(0x42046000u + PPCA_REMAP_OFFSET_2))
/** \brief C00, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C00u + PPCA_REMAP_OFFSET_2))
/** \brief C04, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL1            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C04u + PPCA_REMAP_OFFSET_2))
/** \brief C08, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL2            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C08u + PPCA_REMAP_OFFSET_2))
/** \brief C0C, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL3            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C0Cu + PPCA_REMAP_OFFSET_2))
/** \brief C10, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL4            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C10u + PPCA_REMAP_OFFSET_2))
/** \brief C14, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL5            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C14u + PPCA_REMAP_OFFSET_2))
/** \brief C18, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL6            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C18u + PPCA_REMAP_OFFSET_2))
/** \brief C1C, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL7            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C1Cu + PPCA_REMAP_OFFSET_2))
/** \brief C20, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL8            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C20u + PPCA_REMAP_OFFSET_2))
/** \brief C24, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL9            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C24u + PPCA_REMAP_OFFSET_2))
/** \brief C28, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL10           /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C28u + PPCA_REMAP_OFFSET_2))
/** \brief C2C, Clock control */
#define REG_PERI_PCLK_GR3_CLOCK_CTL11           /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x42046C2Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1000, Divider control (for 8.0 divider) */
#define REG_PERI_PCLK_GR3_DIV_8_CTL0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_8_CTL*)(0x42047000u + PPCA_REMAP_OFFSET_2))
/** \brief 1400, Divider control (for 16.0 divider) */
#define REG_PERI_PCLK_GR3_DIV_16_CTL0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_CTL*)(0x42047400u + PPCA_REMAP_OFFSET_2))
/** \brief 1404, Divider control (for 16.0 divider) */
#define REG_PERI_PCLK_GR3_DIV_16_CTL1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_CTL*)(0x42047404u + PPCA_REMAP_OFFSET_2))
/** \brief 1800, Divider control (for 16.5 divider) */
#define REG_PERI_PCLK_GR3_DIV_16_5_CTL0         /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_5_CTL*)(0x42047800u + PPCA_REMAP_OFFSET_2))
/** \brief 1804, Divider control (for 16.5 divider) */
#define REG_PERI_PCLK_GR3_DIV_16_5_CTL1         /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_5_CTL*)(0x42047804u + PPCA_REMAP_OFFSET_2))
/** \brief 1808, Divider control (for 16.5 divider) */
#define REG_PERI_PCLK_GR3_DIV_16_5_CTL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_5_CTL*)(0x42047808u + PPCA_REMAP_OFFSET_2))
/** \brief 180C, Divider control (for 16.5 divider) */
#define REG_PERI_PCLK_GR3_DIV_16_5_CTL3         /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_5_CTL*)(0x4204780Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1C00, Divider control (for 24.5 divider) */
#define REG_PERI_PCLK_GR3_DIV_24_5_CTL0         /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_24_5_CTL*)(0x42047C00u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Divider command */
#define REG_PERI_PCLK_GR5_DIV_CMD               /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_CMD*)(0x4204A000u + PPCA_REMAP_OFFSET_2))
/** \brief C00, Clock control */
#define REG_PERI_PCLK_GR5_CLOCK_CTL0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x4204AC00u + PPCA_REMAP_OFFSET_2))
/** \brief C04, Clock control */
#define REG_PERI_PCLK_GR5_CLOCK_CTL1            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x4204AC04u + PPCA_REMAP_OFFSET_2))
/** \brief C08, Clock control */
#define REG_PERI_PCLK_GR5_CLOCK_CTL2            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x4204AC08u + PPCA_REMAP_OFFSET_2))
/** \brief C0C, Clock control */
#define REG_PERI_PCLK_GR5_CLOCK_CTL3            /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_CLOCK_CTL*)(0x4204AC0Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1400, Divider control (for 16.0 divider) */
#define REG_PERI_PCLK_GR5_DIV_16_CTL0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_CTL*)(0x4204B400u + PPCA_REMAP_OFFSET_2))
/** \brief 1800, Divider control (for 16.5 divider) */
#define REG_PERI_PCLK_GR5_DIV_16_5_CTL0         /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_5_CTL*)(0x4204B800u + PPCA_REMAP_OFFSET_2))
/** \brief 1804, Divider control (for 16.5 divider) */
#define REG_PERI_PCLK_GR5_DIV_16_5_CTL1         /*lint --e(923, 9078)*/ (*(volatile Ifx_PERI_PCLK_GR_DIV_16_5_CTL*)(0x4204B804u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPERI_PCLK_REG_H_ */
