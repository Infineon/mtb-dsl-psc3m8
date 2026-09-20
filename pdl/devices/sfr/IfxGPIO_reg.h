/***************************************************************************//**
* \file IfxGPIO_reg.h
*
* \brief
* GPIO address
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
* \defgroup IfxSfr_GPIO_Registers_Cfg GPIO address
* \ingroup IfxSfr_GPIO_Registers
*
*******************************************************************************/

#ifndef _IFXGPIO_REG_H_
#define _IFXGPIO_REG_H_ 1

/******************************************************************************/
#include "IfxGPIO_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_GPIO_Registers_Cfg_BaseAddress
 * \{  */

/** \brief GPIO object */
#define MODULE_GPIO                             /*lint --e(923, 9078)*/ ((*(Ifx_GPIO*)(0x42410000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_GPIO_PRT0                        /*lint --e(923, 9078)*/ ((*(Ifx_GPIO_PRT*)(0x42410000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_GPIO_PRT1                        /*lint --e(923, 9078)*/ ((*(Ifx_GPIO_PRT*)(0x42410080u + PPCA_REMAP_OFFSET_2)))
#define MODULE_GPIO_PRT2                        /*lint --e(923, 9078)*/ ((*(Ifx_GPIO_PRT*)(0x42410100u + PPCA_REMAP_OFFSET_2)))
#define MODULE_GPIO_PRT3                        /*lint --e(923, 9078)*/ ((*(Ifx_GPIO_PRT*)(0x42410180u + PPCA_REMAP_OFFSET_2)))
#define MODULE_GPIO_PRT4                        /*lint --e(923, 9078)*/ ((*(Ifx_GPIO_PRT*)(0x42410200u + PPCA_REMAP_OFFSET_2)))
#define MODULE_GPIO_PRT5                        /*lint --e(923, 9078)*/ ((*(Ifx_GPIO_PRT*)(0x42410280u + PPCA_REMAP_OFFSET_2)))
#define MODULE_GPIO_PRT6                        /*lint --e(923, 9078)*/ ((*(Ifx_GPIO_PRT*)(0x42410300u + PPCA_REMAP_OFFSET_2)))
#define MODULE_GPIO_PRT7                        /*lint --e(923, 9078)*/ ((*(Ifx_GPIO_PRT*)(0x42410380u + PPCA_REMAP_OFFSET_2)))
#define MODULE_GPIO_PRT8                        /*lint --e(923, 9078)*/ ((*(Ifx_GPIO_PRT*)(0x42410400u + PPCA_REMAP_OFFSET_2)))
#define MODULE_GPIO_PRT9                        /*lint --e(923, 9078)*/ ((*(Ifx_GPIO_PRT*)(0x42410480u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_GPIO_Registers_Cfg_GPIO
 * \{  */
/** \brief 0, Port output data register */
#define REG_GPIO_PRT0_OUT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT*)(0x42410000u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port output data clear register */
#define REG_GPIO_PRT0_OUT_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_CLR*)(0x42410004u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Port output data set register */
#define REG_GPIO_PRT0_OUT_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_SET*)(0x42410008u + PPCA_REMAP_OFFSET_2))
/** \brief C, Port output data invert register */
#define REG_GPIO_PRT0_OUT_INV                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_INV*)(0x4241000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Port input state register */
#define REG_GPIO_PRT0_IN                        /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_IN*)(0x42410010u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Port interrupt status register */
#define REG_GPIO_PRT0_INTR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR*)(0x42410014u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Port interrupt mask register */
#define REG_GPIO_PRT0_INTR_MASK                 /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASK*)(0x42410018u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Port interrupt masked status register */
#define REG_GPIO_PRT0_INTR_MASKED               /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASKED*)(0x4241001Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Port interrupt set register */
#define REG_GPIO_PRT0_INTR_SET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_SET*)(0x42410020u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Port interrupt configuration register */
#define REG_GPIO_PRT0_INTR_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_CFG*)(0x42410040u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Port configuration register */
#define REG_GPIO_PRT0_CFG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG*)(0x42410044u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Port input buffer configuration register */
#define REG_GPIO_PRT0_CFG_IN                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_IN*)(0x42410048u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Port output buffer configuration register */
#define REG_GPIO_PRT0_CFG_OUT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_OUT*)(0x4241004Cu + PPCA_REMAP_OFFSET_2))
/** \brief 64, Port output buffer slew extension configuration register */
#define REG_GPIO_PRT0_CFG_SLEW_EXT              /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_SLEW_EXT*)(0x42410064u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT0_CFG_DRIVE_EXT0            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT0*)(0x42410068u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT0_CFG_DRIVE_EXT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT1*)(0x4241006Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port output data register */
#define REG_GPIO_PRT1_OUT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT*)(0x42410080u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port output data clear register */
#define REG_GPIO_PRT1_OUT_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_CLR*)(0x42410084u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Port output data set register */
#define REG_GPIO_PRT1_OUT_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_SET*)(0x42410088u + PPCA_REMAP_OFFSET_2))
/** \brief C, Port output data invert register */
#define REG_GPIO_PRT1_OUT_INV                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_INV*)(0x4241008Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Port input state register */
#define REG_GPIO_PRT1_IN                        /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_IN*)(0x42410090u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Port interrupt status register */
#define REG_GPIO_PRT1_INTR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR*)(0x42410094u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Port interrupt mask register */
#define REG_GPIO_PRT1_INTR_MASK                 /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASK*)(0x42410098u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Port interrupt masked status register */
#define REG_GPIO_PRT1_INTR_MASKED               /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASKED*)(0x4241009Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Port interrupt set register */
#define REG_GPIO_PRT1_INTR_SET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_SET*)(0x424100A0u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Port interrupt configuration register */
#define REG_GPIO_PRT1_INTR_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_CFG*)(0x424100C0u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Port configuration register */
#define REG_GPIO_PRT1_CFG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG*)(0x424100C4u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Port input buffer configuration register */
#define REG_GPIO_PRT1_CFG_IN                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_IN*)(0x424100C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Port output buffer configuration register */
#define REG_GPIO_PRT1_CFG_OUT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_OUT*)(0x424100CCu + PPCA_REMAP_OFFSET_2))
/** \brief 64, Port output buffer slew extension configuration register */
#define REG_GPIO_PRT1_CFG_SLEW_EXT              /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_SLEW_EXT*)(0x424100E4u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT1_CFG_DRIVE_EXT0            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT0*)(0x424100E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT1_CFG_DRIVE_EXT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT1*)(0x424100ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port output data register */
#define REG_GPIO_PRT2_OUT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT*)(0x42410100u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port output data clear register */
#define REG_GPIO_PRT2_OUT_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_CLR*)(0x42410104u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Port output data set register */
#define REG_GPIO_PRT2_OUT_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_SET*)(0x42410108u + PPCA_REMAP_OFFSET_2))
/** \brief C, Port output data invert register */
#define REG_GPIO_PRT2_OUT_INV                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_INV*)(0x4241010Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Port input state register */
#define REG_GPIO_PRT2_IN                        /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_IN*)(0x42410110u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Port interrupt status register */
#define REG_GPIO_PRT2_INTR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR*)(0x42410114u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Port interrupt mask register */
#define REG_GPIO_PRT2_INTR_MASK                 /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASK*)(0x42410118u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Port interrupt masked status register */
#define REG_GPIO_PRT2_INTR_MASKED               /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASKED*)(0x4241011Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Port interrupt set register */
#define REG_GPIO_PRT2_INTR_SET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_SET*)(0x42410120u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Port interrupt configuration register */
#define REG_GPIO_PRT2_INTR_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_CFG*)(0x42410140u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Port configuration register */
#define REG_GPIO_PRT2_CFG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG*)(0x42410144u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Port input buffer configuration register */
#define REG_GPIO_PRT2_CFG_IN                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_IN*)(0x42410148u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Port output buffer configuration register */
#define REG_GPIO_PRT2_CFG_OUT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_OUT*)(0x4241014Cu + PPCA_REMAP_OFFSET_2))
/** \brief 64, Port output buffer slew extension configuration register */
#define REG_GPIO_PRT2_CFG_SLEW_EXT              /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_SLEW_EXT*)(0x42410164u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT2_CFG_DRIVE_EXT0            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT0*)(0x42410168u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT2_CFG_DRIVE_EXT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT1*)(0x4241016Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port output data register */
#define REG_GPIO_PRT3_OUT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT*)(0x42410180u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port output data clear register */
#define REG_GPIO_PRT3_OUT_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_CLR*)(0x42410184u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Port output data set register */
#define REG_GPIO_PRT3_OUT_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_SET*)(0x42410188u + PPCA_REMAP_OFFSET_2))
/** \brief C, Port output data invert register */
#define REG_GPIO_PRT3_OUT_INV                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_INV*)(0x4241018Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Port input state register */
#define REG_GPIO_PRT3_IN                        /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_IN*)(0x42410190u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Port interrupt status register */
#define REG_GPIO_PRT3_INTR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR*)(0x42410194u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Port interrupt mask register */
#define REG_GPIO_PRT3_INTR_MASK                 /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASK*)(0x42410198u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Port interrupt masked status register */
#define REG_GPIO_PRT3_INTR_MASKED               /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASKED*)(0x4241019Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Port interrupt set register */
#define REG_GPIO_PRT3_INTR_SET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_SET*)(0x424101A0u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Port interrupt configuration register */
#define REG_GPIO_PRT3_INTR_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_CFG*)(0x424101C0u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Port configuration register */
#define REG_GPIO_PRT3_CFG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG*)(0x424101C4u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Port input buffer configuration register */
#define REG_GPIO_PRT3_CFG_IN                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_IN*)(0x424101C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Port output buffer configuration register */
#define REG_GPIO_PRT3_CFG_OUT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_OUT*)(0x424101CCu + PPCA_REMAP_OFFSET_2))
/** \brief 64, Port output buffer slew extension configuration register */
#define REG_GPIO_PRT3_CFG_SLEW_EXT              /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_SLEW_EXT*)(0x424101E4u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT3_CFG_DRIVE_EXT0            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT0*)(0x424101E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT3_CFG_DRIVE_EXT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT1*)(0x424101ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port output data register */
#define REG_GPIO_PRT4_OUT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT*)(0x42410200u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port output data clear register */
#define REG_GPIO_PRT4_OUT_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_CLR*)(0x42410204u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Port output data set register */
#define REG_GPIO_PRT4_OUT_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_SET*)(0x42410208u + PPCA_REMAP_OFFSET_2))
/** \brief C, Port output data invert register */
#define REG_GPIO_PRT4_OUT_INV                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_INV*)(0x4241020Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Port input state register */
#define REG_GPIO_PRT4_IN                        /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_IN*)(0x42410210u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Port interrupt status register */
#define REG_GPIO_PRT4_INTR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR*)(0x42410214u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Port interrupt mask register */
#define REG_GPIO_PRT4_INTR_MASK                 /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASK*)(0x42410218u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Port interrupt masked status register */
#define REG_GPIO_PRT4_INTR_MASKED               /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASKED*)(0x4241021Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Port interrupt set register */
#define REG_GPIO_PRT4_INTR_SET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_SET*)(0x42410220u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Port interrupt configuration register */
#define REG_GPIO_PRT4_INTR_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_CFG*)(0x42410240u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Port configuration register */
#define REG_GPIO_PRT4_CFG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG*)(0x42410244u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Port input buffer configuration register */
#define REG_GPIO_PRT4_CFG_IN                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_IN*)(0x42410248u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Port output buffer configuration register */
#define REG_GPIO_PRT4_CFG_OUT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_OUT*)(0x4241024Cu + PPCA_REMAP_OFFSET_2))
/** \brief 64, Port output buffer slew extension configuration register */
#define REG_GPIO_PRT4_CFG_SLEW_EXT              /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_SLEW_EXT*)(0x42410264u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT4_CFG_DRIVE_EXT0            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT0*)(0x42410268u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT4_CFG_DRIVE_EXT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT1*)(0x4241026Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port output data register */
#define REG_GPIO_PRT5_OUT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT*)(0x42410280u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port output data clear register */
#define REG_GPIO_PRT5_OUT_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_CLR*)(0x42410284u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Port output data set register */
#define REG_GPIO_PRT5_OUT_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_SET*)(0x42410288u + PPCA_REMAP_OFFSET_2))
/** \brief C, Port output data invert register */
#define REG_GPIO_PRT5_OUT_INV                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_INV*)(0x4241028Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Port input state register */
#define REG_GPIO_PRT5_IN                        /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_IN*)(0x42410290u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Port interrupt status register */
#define REG_GPIO_PRT5_INTR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR*)(0x42410294u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Port interrupt mask register */
#define REG_GPIO_PRT5_INTR_MASK                 /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASK*)(0x42410298u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Port interrupt masked status register */
#define REG_GPIO_PRT5_INTR_MASKED               /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASKED*)(0x4241029Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Port interrupt set register */
#define REG_GPIO_PRT5_INTR_SET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_SET*)(0x424102A0u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Port interrupt configuration register */
#define REG_GPIO_PRT5_INTR_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_CFG*)(0x424102C0u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Port configuration register */
#define REG_GPIO_PRT5_CFG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG*)(0x424102C4u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Port input buffer configuration register */
#define REG_GPIO_PRT5_CFG_IN                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_IN*)(0x424102C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Port output buffer configuration register */
#define REG_GPIO_PRT5_CFG_OUT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_OUT*)(0x424102CCu + PPCA_REMAP_OFFSET_2))
/** \brief 64, Port output buffer slew extension configuration register */
#define REG_GPIO_PRT5_CFG_SLEW_EXT              /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_SLEW_EXT*)(0x424102E4u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT5_CFG_DRIVE_EXT0            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT0*)(0x424102E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT5_CFG_DRIVE_EXT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT1*)(0x424102ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port output data register */
#define REG_GPIO_PRT6_OUT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT*)(0x42410300u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port output data clear register */
#define REG_GPIO_PRT6_OUT_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_CLR*)(0x42410304u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Port output data set register */
#define REG_GPIO_PRT6_OUT_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_SET*)(0x42410308u + PPCA_REMAP_OFFSET_2))
/** \brief C, Port output data invert register */
#define REG_GPIO_PRT6_OUT_INV                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_INV*)(0x4241030Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Port input state register */
#define REG_GPIO_PRT6_IN                        /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_IN*)(0x42410310u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Port interrupt status register */
#define REG_GPIO_PRT6_INTR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR*)(0x42410314u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Port interrupt mask register */
#define REG_GPIO_PRT6_INTR_MASK                 /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASK*)(0x42410318u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Port interrupt masked status register */
#define REG_GPIO_PRT6_INTR_MASKED               /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASKED*)(0x4241031Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Port interrupt set register */
#define REG_GPIO_PRT6_INTR_SET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_SET*)(0x42410320u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Port interrupt configuration register */
#define REG_GPIO_PRT6_INTR_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_CFG*)(0x42410340u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Port configuration register */
#define REG_GPIO_PRT6_CFG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG*)(0x42410344u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Port input buffer configuration register */
#define REG_GPIO_PRT6_CFG_IN                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_IN*)(0x42410348u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Port output buffer configuration register */
#define REG_GPIO_PRT6_CFG_OUT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_OUT*)(0x4241034Cu + PPCA_REMAP_OFFSET_2))
/** \brief 64, Port output buffer slew extension configuration register */
#define REG_GPIO_PRT6_CFG_SLEW_EXT              /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_SLEW_EXT*)(0x42410364u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT6_CFG_DRIVE_EXT0            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT0*)(0x42410368u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT6_CFG_DRIVE_EXT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT1*)(0x4241036Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port output data register */
#define REG_GPIO_PRT7_OUT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT*)(0x42410380u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port output data clear register */
#define REG_GPIO_PRT7_OUT_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_CLR*)(0x42410384u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Port output data set register */
#define REG_GPIO_PRT7_OUT_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_SET*)(0x42410388u + PPCA_REMAP_OFFSET_2))
/** \brief C, Port output data invert register */
#define REG_GPIO_PRT7_OUT_INV                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_INV*)(0x4241038Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Port input state register */
#define REG_GPIO_PRT7_IN                        /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_IN*)(0x42410390u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Port interrupt status register */
#define REG_GPIO_PRT7_INTR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR*)(0x42410394u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Port interrupt mask register */
#define REG_GPIO_PRT7_INTR_MASK                 /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASK*)(0x42410398u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Port interrupt masked status register */
#define REG_GPIO_PRT7_INTR_MASKED               /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASKED*)(0x4241039Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Port interrupt set register */
#define REG_GPIO_PRT7_INTR_SET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_SET*)(0x424103A0u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Port interrupt configuration register */
#define REG_GPIO_PRT7_INTR_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_CFG*)(0x424103C0u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Port configuration register */
#define REG_GPIO_PRT7_CFG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG*)(0x424103C4u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Port input buffer configuration register */
#define REG_GPIO_PRT7_CFG_IN                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_IN*)(0x424103C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Port output buffer configuration register */
#define REG_GPIO_PRT7_CFG_OUT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_OUT*)(0x424103CCu + PPCA_REMAP_OFFSET_2))
/** \brief 64, Port output buffer slew extension configuration register */
#define REG_GPIO_PRT7_CFG_SLEW_EXT              /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_SLEW_EXT*)(0x424103E4u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT7_CFG_DRIVE_EXT0            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT0*)(0x424103E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT7_CFG_DRIVE_EXT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT1*)(0x424103ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port output data register */
#define REG_GPIO_PRT8_OUT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT*)(0x42410400u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port output data clear register */
#define REG_GPIO_PRT8_OUT_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_CLR*)(0x42410404u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Port output data set register */
#define REG_GPIO_PRT8_OUT_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_SET*)(0x42410408u + PPCA_REMAP_OFFSET_2))
/** \brief C, Port output data invert register */
#define REG_GPIO_PRT8_OUT_INV                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_INV*)(0x4241040Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Port input state register */
#define REG_GPIO_PRT8_IN                        /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_IN*)(0x42410410u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Port interrupt status register */
#define REG_GPIO_PRT8_INTR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR*)(0x42410414u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Port interrupt mask register */
#define REG_GPIO_PRT8_INTR_MASK                 /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASK*)(0x42410418u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Port interrupt masked status register */
#define REG_GPIO_PRT8_INTR_MASKED               /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASKED*)(0x4241041Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Port interrupt set register */
#define REG_GPIO_PRT8_INTR_SET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_SET*)(0x42410420u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Port interrupt configuration register */
#define REG_GPIO_PRT8_INTR_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_CFG*)(0x42410440u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Port configuration register */
#define REG_GPIO_PRT8_CFG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG*)(0x42410444u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Port input buffer configuration register */
#define REG_GPIO_PRT8_CFG_IN                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_IN*)(0x42410448u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Port output buffer configuration register */
#define REG_GPIO_PRT8_CFG_OUT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_OUT*)(0x4241044Cu + PPCA_REMAP_OFFSET_2))
/** \brief 64, Port output buffer slew extension configuration register */
#define REG_GPIO_PRT8_CFG_SLEW_EXT              /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_SLEW_EXT*)(0x42410464u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT8_CFG_DRIVE_EXT0            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT0*)(0x42410468u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT8_CFG_DRIVE_EXT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT1*)(0x4241046Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Port output data register */
#define REG_GPIO_PRT9_OUT                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT*)(0x42410480u + PPCA_REMAP_OFFSET_2))
/** \brief 4, Port output data clear register */
#define REG_GPIO_PRT9_OUT_CLR                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_CLR*)(0x42410484u + PPCA_REMAP_OFFSET_2))
/** \brief 8, Port output data set register */
#define REG_GPIO_PRT9_OUT_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_SET*)(0x42410488u + PPCA_REMAP_OFFSET_2))
/** \brief C, Port output data invert register */
#define REG_GPIO_PRT9_OUT_INV                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_OUT_INV*)(0x4241048Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10, Port input state register */
#define REG_GPIO_PRT9_IN                        /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_IN*)(0x42410490u + PPCA_REMAP_OFFSET_2))
/** \brief 14, Port interrupt status register */
#define REG_GPIO_PRT9_INTR                      /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR*)(0x42410494u + PPCA_REMAP_OFFSET_2))
/** \brief 18, Port interrupt mask register */
#define REG_GPIO_PRT9_INTR_MASK                 /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASK*)(0x42410498u + PPCA_REMAP_OFFSET_2))
/** \brief 1C, Port interrupt masked status register */
#define REG_GPIO_PRT9_INTR_MASKED               /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_MASKED*)(0x4241049Cu + PPCA_REMAP_OFFSET_2))
/** \brief 20, Port interrupt set register */
#define REG_GPIO_PRT9_INTR_SET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_SET*)(0x424104A0u + PPCA_REMAP_OFFSET_2))
/** \brief 40, Port interrupt configuration register */
#define REG_GPIO_PRT9_INTR_CFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_INTR_CFG*)(0x424104C0u + PPCA_REMAP_OFFSET_2))
/** \brief 44, Port configuration register */
#define REG_GPIO_PRT9_CFG                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG*)(0x424104C4u + PPCA_REMAP_OFFSET_2))
/** \brief 48, Port input buffer configuration register */
#define REG_GPIO_PRT9_CFG_IN                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_IN*)(0x424104C8u + PPCA_REMAP_OFFSET_2))
/** \brief 4C, Port output buffer configuration register */
#define REG_GPIO_PRT9_CFG_OUT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_OUT*)(0x424104CCu + PPCA_REMAP_OFFSET_2))
/** \brief 64, Port output buffer slew extension configuration register */
#define REG_GPIO_PRT9_CFG_SLEW_EXT              /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_SLEW_EXT*)(0x424104E4u + PPCA_REMAP_OFFSET_2))
/** \brief 68, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT9_CFG_DRIVE_EXT0            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT0*)(0x424104E8u + PPCA_REMAP_OFFSET_2))
/** \brief 6C, Port output buffer drive sel extension configuration register */
#define REG_GPIO_PRT9_CFG_DRIVE_EXT1            /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_PRT_CFG_DRIVE_EXT1*)(0x424104ECu + PPCA_REMAP_OFFSET_2))
/** \brief 7000, Secure Interrupt port cause register 0 */
#define REG_GPIO_SEC_INTR_CAUSE0                /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_SEC_INTR_CAUSE0*)(0x42417000u + PPCA_REMAP_OFFSET_2))
/** \brief 8000, Interrupt port cause register 0 */
#define REG_GPIO_INTR_CAUSE0                    /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_INTR_CAUSE0*)(0x42418000u + PPCA_REMAP_OFFSET_2))
/** \brief 8010, Extern power supply detection register */
#define REG_GPIO_VDD_ACTIVE                     /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_VDD_ACTIVE*)(0x42418010u + PPCA_REMAP_OFFSET_2))
/** \brief 8014, Supply detection interrupt register */
#define REG_GPIO_VDD_INTR                       /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_VDD_INTR*)(0x42418014u + PPCA_REMAP_OFFSET_2))
/** \brief 8018, Supply detection interrupt mask register */
#define REG_GPIO_VDD_INTR_MASK                  /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_VDD_INTR_MASK*)(0x42418018u + PPCA_REMAP_OFFSET_2))
/** \brief 801C, Supply detection interrupt masked register */
#define REG_GPIO_VDD_INTR_MASKED                /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_VDD_INTR_MASKED*)(0x4241801Cu + PPCA_REMAP_OFFSET_2))
/** \brief 8020, Supply detection interrupt set register */
#define REG_GPIO_VDD_INTR_SET                   /*lint --e(923, 9078)*/ (*(volatile Ifx_GPIO_VDD_INTR_SET*)(0x42418020u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXGPIO_REG_H_ */
