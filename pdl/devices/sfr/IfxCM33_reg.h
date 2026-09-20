/***************************************************************************//**
* \file IfxCM33_reg.h
*
* \brief
* CM33 address
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
* \defgroup IfxSfr_CM33_Registers_Cfg CM33 address
* \ingroup IfxSfr_CM33_Registers
*
*******************************************************************************/

#ifndef _IFXCM33_REG_H_
#define _IFXCM33_REG_H_ 1

/******************************************************************************/
#include "IfxCM33_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_CM33_Registers_Cfg_BaseAddress
 * \{  */

/** \brief CM33 object */
#define MODULE_CM33                             /*lint --e(923, 9078)*/ ((*(Ifx_CM33*)0xE0000000u))
#define MODULE_CM33_CTI                         /*lint --e(923, 9078)*/ ((*(Ifx_CM33_CTI*)0xE0042000u))
#define MODULE_CM33_TRC                         /*lint --e(923, 9078)*/ ((*(Ifx_CM33_TRC*)0xE0080000u))
#define MODULE_CM33_TRC_CTI                     /*lint --e(923, 9078)*/ ((*(Ifx_CM33_TRC_CTI*)0xE0080000u))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CM33_Registers_Cfg_CM33
 * \{  */
/** \brief 0, CTI Control Register */
#define REG_CM33_CTI_CTICONTROL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTICONTROL*)0xE0042000u)
/** \brief 10, CTI Interrupt Acknowledge Register */
#define REG_CM33_CTI_CTIINTACK                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIINTACK*)0xE0042010u)
/** \brief 14, CTI Application Trigger Set Register */
#define REG_CM33_CTI_CTIAPPSET                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIAPPSET*)0xE0042014u)
/** \brief 18, CTI Application Trigger Clear Register */
#define REG_CM33_CTI_CTIAPPCLEAR                /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIAPPCLEAR*)0xE0042018u)
/** \brief 1C, CTI Application Pulse Register */
#define REG_CM33_CTI_CTIAPPPULSE                /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIAPPPULSE*)0xE004201Cu)
/** \brief 20, CTI Trigger to Channel Enable Registers */
#define REG_CM33_CTI_CTIINEN0                   /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIINEN*)0xE0042020u)
/** \brief 24, CTI Trigger to Channel Enable Registers */
#define REG_CM33_CTI_CTIINEN1                   /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIINEN*)0xE0042024u)
/** \brief 28, CTI Trigger to Channel Enable Registers */
#define REG_CM33_CTI_CTIINEN2                   /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIINEN*)0xE0042028u)
/** \brief 2C, CTI Trigger to Channel Enable Registers */
#define REG_CM33_CTI_CTIINEN3                   /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIINEN*)0xE004202Cu)
/** \brief 30, CTI Trigger to Channel Enable Registers */
#define REG_CM33_CTI_CTIINEN4                   /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIINEN*)0xE0042030u)
/** \brief 34, CTI Trigger to Channel Enable Registers */
#define REG_CM33_CTI_CTIINEN5                   /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIINEN*)0xE0042034u)
/** \brief 38, CTI Trigger to Channel Enable Registers */
#define REG_CM33_CTI_CTIINEN6                   /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIINEN*)0xE0042038u)
/** \brief 3C, CTI Trigger to Channel Enable Registers */
#define REG_CM33_CTI_CTIINEN7                   /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIINEN*)0xE004203Cu)
/** \brief A0, CTI Channel to Trigger Enable Registers */
#define REG_CM33_CTI_CTIOUTEN0                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIOUTEN*)0xE00420A0u)
/** \brief A4, CTI Channel to Trigger Enable Registers */
#define REG_CM33_CTI_CTIOUTEN1                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIOUTEN*)0xE00420A4u)
/** \brief A8, CTI Channel to Trigger Enable Registers */
#define REG_CM33_CTI_CTIOUTEN2                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIOUTEN*)0xE00420A8u)
/** \brief AC, CTI Channel to Trigger Enable Registers */
#define REG_CM33_CTI_CTIOUTEN3                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIOUTEN*)0xE00420ACu)
/** \brief B0, CTI Channel to Trigger Enable Registers */
#define REG_CM33_CTI_CTIOUTEN4                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIOUTEN*)0xE00420B0u)
/** \brief B4, CTI Channel to Trigger Enable Registers */
#define REG_CM33_CTI_CTIOUTEN5                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIOUTEN*)0xE00420B4u)
/** \brief B8, CTI Channel to Trigger Enable Registers */
#define REG_CM33_CTI_CTIOUTEN6                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIOUTEN*)0xE00420B8u)
/** \brief BC, CTI Channel to Trigger Enable Registers */
#define REG_CM33_CTI_CTIOUTEN7                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIOUTEN*)0xE00420BCu)
/** \brief 130, CTI Trigger In Status Register */
#define REG_CM33_CTI_CTITRIGINSTATUS            /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTITRIGINSTATUS*)0xE0042130u)
/** \brief 134, CTI Trigger Out Status Register */
#define REG_CM33_CTI_CTITRIGOUTSTATUS           /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTITRIGOUTSTATUS*)0xE0042134u)
/** \brief 138, CTI Channel In Status Register */
#define REG_CM33_CTI_CTICHINSTATUS              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTICHINSTATUS*)0xE0042138u)
/** \brief 140, Enable CTI Channel Gate Register */
#define REG_CM33_CTI_CTIGATE                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CTIGATE*)0xE0042140u)
/** \brief 144, External Multiplexor Control Register */
#define REG_CM33_CTI_ASICCTL                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_ASICCTL*)0xE0042144u)
/** \brief EE4, ITCHOUT Register */
#define REG_CM33_CTI_ITCHOUT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_ITCHOUT*)0xE0042EE4u)
/** \brief EE8, ITTRIGOUT Register */
#define REG_CM33_CTI_ITTRIGOUT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_ITTRIGOUT*)0xE0042EE8u)
/** \brief EF4, ITCHIN Register */
#define REG_CM33_CTI_ITCHIN                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_ITCHIN*)0xE0042EF4u)
/** \brief F00, Integration Mode Control Register */
#define REG_CM33_CTI_ITCTRL                     /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_ITCTRL*)0xE0042F00u)
/** \brief FBC, Device Architecture register */
#define REG_CM33_CTI_DEVARCH                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_DEVARCH*)0xE0042FBCu)
/** \brief FC8, Device Configuration Register */
#define REG_CM33_CTI_DEVID                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_DEVID*)0xE0042FC8u)
/** \brief FCC, Device Type Identifier Register */
#define REG_CM33_CTI_DEVTYPE                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_DEVTYPE*)0xE0042FCCu)
/** \brief FD0, Peripheral Identification Register 4 */
#define REG_CM33_CTI_PIDR4                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_PIDR4*)0xE0042FD0u)
/** \brief FD4, Peripheral Identification Register 5 */
#define REG_CM33_CTI_PIDR5                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_PIDR5*)0xE0042FD4u)
/** \brief FD8, Peripheral Identification Register 6 */
#define REG_CM33_CTI_PIDR6                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_PIDR6*)0xE0042FD8u)
/** \brief FDC, Peripheral Identification Register 7 */
#define REG_CM33_CTI_PIDR7                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_PIDR7*)0xE0042FDCu)
/** \brief FE0, Peripheral Identification Register 0 */
#define REG_CM33_CTI_PIDR0                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_PIDR0*)0xE0042FE0u)
/** \brief FE4, Peripheral Identification Register 1 */
#define REG_CM33_CTI_PIDR1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_PIDR1*)0xE0042FE4u)
/** \brief FE8, Peripheral Identification Register 2 */
#define REG_CM33_CTI_PIDR2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_PIDR2*)0xE0042FE8u)
/** \brief FEC, Peripheral Identification Register 3 */
#define REG_CM33_CTI_PIDR3                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_PIDR3*)0xE0042FECu)
/** \brief FF0, Component Identification Register 0 */
#define REG_CM33_CTI_CIDR0                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CIDR0*)0xE0042FF0u)
/** \brief FF4, Component Identification Register 1 */
#define REG_CM33_CTI_CIDR1                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CIDR1*)0xE0042FF4u)
/** \brief FF8, Component Identification Register 2 */
#define REG_CM33_CTI_CIDR2                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CIDR2*)0xE0042FF8u)
/** \brief FFC, Component Identification Register 3 */
#define REG_CM33_CTI_CIDR3                      /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_CTI_CIDR3*)0xE0042FFCu)
/** \brief 0, CTI Control Register */
#define REG_CM33_TRC_CTI_CTICONTROL             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTICONTROL*)0xE0080000u)
/** \brief 10, CTI Interrupt Acknowledge Register */
#define REG_CM33_TRC_CTI_CTIINTACK              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINTACK*)0xE0080010u)
/** \brief 14, CTI Application Trigger Set Register */
#define REG_CM33_TRC_CTI_CTIAPPSET              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIAPPSET*)0xE0080014u)
/** \brief 18, CTI Application Trigger Clear Register */
#define REG_CM33_TRC_CTI_CTIAPPCLEAR            /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIAPPCLEAR*)0xE0080018u)
/** \brief 1C, CTI Application Pulse Register */
#define REG_CM33_TRC_CTI_CTIAPPPULSE            /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIAPPPULSE*)0xE008001Cu)
/** \brief 20, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN0               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080020u)
/** \brief 24, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN1               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080024u)
/** \brief 28, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN2               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080028u)
/** \brief 2C, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN3               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE008002Cu)
/** \brief 30, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN4               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080030u)
/** \brief 34, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN5               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080034u)
/** \brief 38, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN6               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080038u)
/** \brief 3C, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN7               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE008003Cu)
/** \brief 40, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN8               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080040u)
/** \brief 44, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN9               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080044u)
/** \brief 48, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN10              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080048u)
/** \brief 4C, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN11              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE008004Cu)
/** \brief 50, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN12              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080050u)
/** \brief 54, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN13              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080054u)
/** \brief 58, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN14              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080058u)
/** \brief 5C, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN15              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE008005Cu)
/** \brief 60, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN16              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080060u)
/** \brief 64, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN17              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080064u)
/** \brief 68, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN18              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080068u)
/** \brief 6C, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN19              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE008006Cu)
/** \brief 70, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN20              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080070u)
/** \brief 74, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN21              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080074u)
/** \brief 78, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN22              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080078u)
/** \brief 7C, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN23              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE008007Cu)
/** \brief 80, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN24              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080080u)
/** \brief 84, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN25              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080084u)
/** \brief 88, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN26              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080088u)
/** \brief 8C, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN27              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE008008Cu)
/** \brief 90, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN28              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080090u)
/** \brief 94, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN29              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080094u)
/** \brief 98, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN30              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE0080098u)
/** \brief 9C, CTI Trigger to Channel Enable Registers */
#define REG_CM33_TRC_CTI_CTIINEN31              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIINEN*)0xE008009Cu)
/** \brief A0, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN0              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800A0u)
/** \brief A4, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN1              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800A4u)
/** \brief A8, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN2              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800A8u)
/** \brief AC, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN3              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800ACu)
/** \brief B0, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN4              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800B0u)
/** \brief B4, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN5              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800B4u)
/** \brief B8, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN6              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800B8u)
/** \brief BC, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN7              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800BCu)
/** \brief C0, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN8              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800C0u)
/** \brief C4, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN9              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800C4u)
/** \brief C8, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN10             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800C8u)
/** \brief CC, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN11             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800CCu)
/** \brief D0, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN12             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800D0u)
/** \brief D4, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN13             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800D4u)
/** \brief D8, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN14             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800D8u)
/** \brief DC, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN15             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800DCu)
/** \brief E0, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN16             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800E0u)
/** \brief E4, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN17             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800E4u)
/** \brief E8, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN18             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800E8u)
/** \brief EC, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN19             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800ECu)
/** \brief F0, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN20             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800F0u)
/** \brief F4, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN21             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800F4u)
/** \brief F8, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN22             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800F8u)
/** \brief FC, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN23             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE00800FCu)
/** \brief 100, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN24             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE0080100u)
/** \brief 104, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN25             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE0080104u)
/** \brief 108, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN26             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE0080108u)
/** \brief 10C, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN27             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE008010Cu)
/** \brief 110, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN28             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE0080110u)
/** \brief 114, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN29             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE0080114u)
/** \brief 118, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN30             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE0080118u)
/** \brief 11C, CTI Channel to Trigger Enable Registers */
#define REG_CM33_TRC_CTI_CTIOUTEN31             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIOUTEN*)0xE008011Cu)
/** \brief 130, CTI Trigger In Status Register */
#define REG_CM33_TRC_CTI_CTITRIGINSTATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTITRIGINSTATUS*)0xE0080130u)
/** \brief 134, CTI Trigger Out Status Register */
#define REG_CM33_TRC_CTI_CTITRIGOUTSTATUS       /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTITRIGOUTSTATUS*)0xE0080134u)
/** \brief 138, CTI Channel In Status Register */
#define REG_CM33_TRC_CTI_CTICHINSTATUS          /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTICHINSTATUS*)0xE0080138u)
/** \brief 13C, CTI Channel Out Status Register */
#define REG_CM33_TRC_CTI_CTICHOUTSTATUS         /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTICHOUTSTATUS*)0xE008013Cu)
/** \brief 140, Enable CTI Channel Gate Register */
#define REG_CM33_TRC_CTI_CTIGATE                /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CTIGATE*)0xE0080140u)
/** \brief 144, External Multiplexor Control Register */
#define REG_CM33_TRC_CTI_ASICCTRL               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_ASICCTRL*)0xE0080144u)
/** \brief EDC, ITCHINACK Register */
#define REG_CM33_TRC_CTI_ITCHINACK              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_ITCHINACK*)0xE0080EDCu)
/** \brief EE0, ITTRIGINACK Register */
#define REG_CM33_TRC_CTI_ITTRIGINACK            /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_ITTRIGINACK*)0xE0080EE0u)
/** \brief EE4, ITCHOUT Register */
#define REG_CM33_TRC_CTI_ITCHOUT                /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_ITCHOUT*)0xE0080EE4u)
/** \brief EE8, ITTRIGOUT Register */
#define REG_CM33_TRC_CTI_ITTRIGOUT              /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_ITTRIGOUT*)0xE0080EE8u)
/** \brief EEC, ITCHOUTACK Register */
#define REG_CM33_TRC_CTI_ITCHOUTACK             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_ITCHOUTACK*)0xE0080EECu)
/** \brief EF0, ITTRIGOUTACK Register */
#define REG_CM33_TRC_CTI_ITTRIGOUTACK           /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_ITTRIGOUTACK*)0xE0080EF0u)
/** \brief EF4, ITCHIN Register */
#define REG_CM33_TRC_CTI_ITCHIN                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_ITCHIN*)0xE0080EF4u)
/** \brief EF8, ITTRIGIN Register */
#define REG_CM33_TRC_CTI_ITTRIGIN               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_ITTRIGIN*)0xE0080EF8u)
/** \brief F00, Integration Mode Control Register */
#define REG_CM33_TRC_CTI_ITCTRL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_ITCTRL*)0xE0080F00u)
/** \brief FA0, Claim Tag Set Register */
#define REG_CM33_TRC_CTI_CLAIMSET               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CLAIMSET*)0xE0080FA0u)
/** \brief FA4, Claim Tag Clear Register */
#define REG_CM33_TRC_CTI_CLAIMCLR               /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CLAIMCLR*)0xE0080FA4u)
/** \brief FA8, Device Affinity Register 0 */
#define REG_CM33_TRC_CTI_DEVAFF0                /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_DEVAFF0*)0xE0080FA8u)
/** \brief FAC, Device Affinity Register 1 */
#define REG_CM33_TRC_CTI_DEVAFF1                /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_DEVAFF1*)0xE0080FACu)
/** \brief FB0, Lock Access Register */
#define REG_CM33_TRC_CTI_LAR                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_LAR*)0xE0080FB0u)
/** \brief FB4, Lock Status Register */
#define REG_CM33_TRC_CTI_LSR                    /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_LSR*)0xE0080FB4u)
/** \brief FB8, Authentication Status Register */
#define REG_CM33_TRC_CTI_AUTHSTATUS             /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_AUTHSTATUS*)0xE0080FB8u)
/** \brief FBC, Device Architecture Register */
#define REG_CM33_TRC_CTI_DEVARCH                /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_DEVARCH*)0xE0080FBCu)
/** \brief FC8, Device Configuration Register */
#define REG_CM33_TRC_CTI_DEVID                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_DEVID*)0xE0080FC8u)
/** \brief FCC, Device Type Identifier Register */
#define REG_CM33_TRC_CTI_DEVTYPE                /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_DEVTYPE*)0xE0080FCCu)
/** \brief FD0, Peripheral Identification Register 4 */
#define REG_CM33_TRC_CTI_PIDR4                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_PIDR4*)0xE0080FD0u)
/** \brief FD4, Peripheral Identification Register 5 */
#define REG_CM33_TRC_CTI_PIDR5                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_PIDR5*)0xE0080FD4u)
/** \brief FD8, Peripheral Identification Register 6 */
#define REG_CM33_TRC_CTI_PIDR6                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_PIDR6*)0xE0080FD8u)
/** \brief FDC, Peripheral Identification Register 7 */
#define REG_CM33_TRC_CTI_PIDR7                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_PIDR7*)0xE0080FDCu)
/** \brief FE0, Peripheral Identification Register 0 */
#define REG_CM33_TRC_CTI_PIDR0                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_PIDR0*)0xE0080FE0u)
/** \brief FE4, Peripheral Identification Register 1 */
#define REG_CM33_TRC_CTI_PIDR1                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_PIDR1*)0xE0080FE4u)
/** \brief FE8, Peripheral Identification Register 2 */
#define REG_CM33_TRC_CTI_PIDR2                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_PIDR2*)0xE0080FE8u)
/** \brief FEC, Peripheral Identification Register 3 */
#define REG_CM33_TRC_CTI_PIDR3                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_PIDR3*)0xE0080FECu)
/** \brief FF0, Component Identification Register 0 */
#define REG_CM33_TRC_CTI_CIDR0                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CIDR0*)0xE0080FF0u)
/** \brief FF4, Component Identification Register 1 */
#define REG_CM33_TRC_CTI_CIDR1                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CIDR1*)0xE0080FF4u)
/** \brief FF8, Component Identification Register 2 */
#define REG_CM33_TRC_CTI_CIDR2                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CIDR2*)0xE0080FF8u)
/** \brief FFC, Component Identification Register 3 */
#define REG_CM33_TRC_CTI_CIDR3                  /*lint --e(923, 9078)*/ (*(volatile Ifx_CM33_TRC_CTI_CIDR3*)0xE0080FFCu)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCM33_REG_H_ */
