/***************************************************************************//**
* \file IfxSFLASH_reg.h
*
* \brief
* SFLASH address
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
* \defgroup IfxSfr_SFLASH_Registers_Cfg SFLASH address
* \ingroup IfxSfr_SFLASH_Registers
*
*******************************************************************************/

#ifndef _IFXSFLASH_REG_H_
#define _IFXSFLASH_REG_H_ 1

/******************************************************************************/
#include "IfxSFLASH_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_SFLASH_Registers_Cfg_BaseAddress
 * \{  */

/** \brief SFLASH object */
#define MODULE_SFLASH                           /*lint --e(923, 9078)*/ ((*(Ifx_SFLASH*)(0x03400000u + PPCA_REMAP_OFFSET_0)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SFLASH_Registers_Cfg_SFLASH
 * \{  */
/** \brief 1, Indicates Silicon Revision ID of the device */
#define REG_SFLASH_SI_REVISION_ID               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SI_REVISION_ID*)(0x03400001u + PPCA_REMAP_OFFSET_0))
/** \brief 2, Indicates Silicon ID of the device */
#define REG_SFLASH_SILICON_ID                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SILICON_ID*)(0x03400002u + PPCA_REMAP_OFFSET_0))
/** \brief 4, Indicates Family ID of the device */
#define REG_SFLASH_FAMILY_ID                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FAMILY_ID*)(0x03400004u + PPCA_REMAP_OFFSET_0))
/** \brief 18, SFLASH Subversion -- Manually read from 'show log' of repo root */
#define REG_SFLASH_SFLASH_SVN                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SFLASH_SVN*)(0x03400018u + PPCA_REMAP_OFFSET_0))
/** \brief 36C, Trim value to load into the SVGS Comparator Configuration register */
#define REG_SFLASH_SVGS_CMP_CFG                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SVGS_CMP_CFG*)(0x0340036Cu + PPCA_REMAP_OFFSET_0))
/** \brief 370, Trim value to load into the  SVGS Comparator trip-point configuration register */
#define REG_SFLASH_SVGS_CMP_TRIP                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SVGS_CMP_TRIP*)(0x03400370u + PPCA_REMAP_OFFSET_0))
/** \brief 374, Trim value to load into the SVGS Trim Register */
#define REG_SFLASH_SVGS_TRIM                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SVGS_TRIM*)(0x03400374u + PPCA_REMAP_OFFSET_0))
/** \brief 378, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE0        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x03400378u + PPCA_REMAP_OFFSET_0))
/** \brief 37C, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE1        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x0340037Cu + PPCA_REMAP_OFFSET_0))
/** \brief 380, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE2        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x03400380u + PPCA_REMAP_OFFSET_0))
/** \brief 384, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE3        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x03400384u + PPCA_REMAP_OFFSET_0))
/** \brief 388, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE4        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x03400388u + PPCA_REMAP_OFFSET_0))
/** \brief 38C, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE5        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x0340038Cu + PPCA_REMAP_OFFSET_0))
/** \brief 390, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE6        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x03400390u + PPCA_REMAP_OFFSET_0))
/** \brief 394, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE7        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x03400394u + PPCA_REMAP_OFFSET_0))
/** \brief 398, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE8        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x03400398u + PPCA_REMAP_OFFSET_0))
/** \brief 39C, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE9        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x0340039Cu + PPCA_REMAP_OFFSET_0))
/** \brief 3A0, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE10       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x034003A0u + PPCA_REMAP_OFFSET_0))
/** \brief 3A4, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE11       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x034003A4u + PPCA_REMAP_OFFSET_0))
/** \brief 3A8, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE12       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x034003A8u + PPCA_REMAP_OFFSET_0))
/** \brief 3AC, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE13       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x034003ACu + PPCA_REMAP_OFFSET_0))
/** \brief 3B0, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE14       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x034003B0u + PPCA_REMAP_OFFSET_0))
/** \brief 3B4, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE15       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x034003B4u + PPCA_REMAP_OFFSET_0))
/** \brief 3B8, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
#define REG_SFLASH_SAR_INFRA_TRIM_TABLE16       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_INFRA_TRIM_TABLE*)(0x034003B8u + PPCA_REMAP_OFFSET_0))
/** \brief 600, Lot Number (3 bytes) */
#define REG_SFLASH_DIE_LOT0                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_LOT*)(0x03400600u + PPCA_REMAP_OFFSET_0))
/** \brief 601, Lot Number (3 bytes) */
#define REG_SFLASH_DIE_LOT1                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_LOT*)(0x03400601u + PPCA_REMAP_OFFSET_0))
/** \brief 602, Lot Number (3 bytes) */
#define REG_SFLASH_DIE_LOT2                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_LOT*)(0x03400602u + PPCA_REMAP_OFFSET_0))
/** \brief 603, Wafer Number */
#define REG_SFLASH_DIE_WAFER                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_WAFER*)(0x03400603u + PPCA_REMAP_OFFSET_0))
/** \brief 604, X Position on Wafer, CRI Pass/Fail Bin */
#define REG_SFLASH_DIE_X                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_X*)(0x03400604u + PPCA_REMAP_OFFSET_0))
/** \brief 605, Y Position on Wafer, CHI Pass/Fail Bin */
#define REG_SFLASH_DIE_Y                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_Y*)(0x03400605u + PPCA_REMAP_OFFSET_0))
/** \brief 606, Sort1/2/3 Pass/Fail Bin */
#define REG_SFLASH_DIE_SORT                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_SORT*)(0x03400606u + PPCA_REMAP_OFFSET_0))
/** \brief 607, Minor Revision Number */
#define REG_SFLASH_DIE_MINOR                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_MINOR*)(0x03400607u + PPCA_REMAP_OFFSET_0))
/** \brief 608, Day number */
#define REG_SFLASH_DIE_DAY                      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_DAY*)(0x03400608u + PPCA_REMAP_OFFSET_0))
/** \brief 609, Month number */
#define REG_SFLASH_DIE_MONTH                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_MONTH*)(0x03400609u + PPCA_REMAP_OFFSET_0))
/** \brief 60A, Year number */
#define REG_SFLASH_DIE_YEAR                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DIE_YEAR*)(0x0340060Au + PPCA_REMAP_OFFSET_0))
/** \brief 60C, CSP Panel Id to record panel ID of CSP die */
#define REG_SFLASH_CSP_PANEL_ID                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_CSP_PANEL_ID*)(0x0340060Cu + PPCA_REMAP_OFFSET_0))
/** \brief 610, SARADC STARTUP Control Register */
#define REG_SFLASH_GRP0_ADC_STARTUPCTRL_VTOICAL_TRIM /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_STARTUPCTRL_VTOICAL_TRIM*)(0x03400610u + PPCA_REMAP_OFFSET_0))
/** \brief 614, SARADC CAL offset per channel */
#define REG_SFLASH_GRP0_ADC_CALOFFSET0          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALOFFSET*)(0x03400614u + PPCA_REMAP_OFFSET_0))
/** \brief 618, SARADC CAL offset per channel */
#define REG_SFLASH_GRP0_ADC_CALOFFSET1          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALOFFSET*)(0x03400618u + PPCA_REMAP_OFFSET_0))
/** \brief 61C, SARADC CAL offset per channel */
#define REG_SFLASH_GRP0_ADC_CALOFFSET2          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALOFFSET*)(0x0340061Cu + PPCA_REMAP_OFFSET_0))
/** \brief 620, SARADC CAL offset per channel */
#define REG_SFLASH_GRP0_ADC_CALOFFSET3          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALOFFSET*)(0x03400620u + PPCA_REMAP_OFFSET_0))
/** \brief 624, SARADC CAL offset per channel */
#define REG_SFLASH_GRP0_ADC_CALOFFSET4          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALOFFSET*)(0x03400624u + PPCA_REMAP_OFFSET_0))
/** \brief 628, SARADC CAL offset per channel */
#define REG_SFLASH_GRP0_ADC_CALOFFSET5          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALOFFSET*)(0x03400628u + PPCA_REMAP_OFFSET_0))
/** \brief 62C, SARADC CAL offset per channel */
#define REG_SFLASH_GRP0_ADC_CALOFFSET6          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALOFFSET*)(0x0340062Cu + PPCA_REMAP_OFFSET_0))
/** \brief 630, SARADC CAL offset per channel */
#define REG_SFLASH_GRP0_ADC_CALOFFSET7          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALOFFSET*)(0x03400630u + PPCA_REMAP_OFFSET_0))
/** \brief 634, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP0_ADC_CALGAIN_GAINX10     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1*)(0x03400634u + PPCA_REMAP_OFFSET_0))
/** \brief 638, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP0_ADC_CALGAIN_GAINX11     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1*)(0x03400638u + PPCA_REMAP_OFFSET_0))
/** \brief 63C, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP0_ADC_CALGAIN_GAINX12     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1*)(0x0340063Cu + PPCA_REMAP_OFFSET_0))
/** \brief 640, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP0_ADC_CALGAIN_GAINX13     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1*)(0x03400640u + PPCA_REMAP_OFFSET_0))
/** \brief 644, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP0_ADC_CALGAIN_GAINX14     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1*)(0x03400644u + PPCA_REMAP_OFFSET_0))
/** \brief 648, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP0_ADC_CALGAIN_GAINX15     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1*)(0x03400648u + PPCA_REMAP_OFFSET_0))
/** \brief 64C, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP0_ADC_CALGAIN_GAINX16     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1*)(0x0340064Cu + PPCA_REMAP_OFFSET_0))
/** \brief 650, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP0_ADC_CALGAIN_GAINX17     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1*)(0x03400650u + PPCA_REMAP_OFFSET_0))
/** \brief 654, Trim value for AFE_CALGAINAFE_1 register */
#define REG_SFLASH_GRP0_AFE_CALGAIN_AFE_1       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_1*)(0x03400654u + PPCA_REMAP_OFFSET_0))
/** \brief 658, Trim value for AFE_CALGAINAFE_2 register */
#define REG_SFLASH_GRP0_AFE_CALGAIN_AFE_2       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_2*)(0x03400658u + PPCA_REMAP_OFFSET_0))
/** \brief 65C, Trim value for AFE_CALGAINAFE_3 register */
#define REG_SFLASH_GRP0_AFE_CALGAIN_AFE_3       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_3*)(0x0340065Cu + PPCA_REMAP_OFFSET_0))
/** \brief 660, Trim value for AFE_CALGAINAFE_4 register */
#define REG_SFLASH_GRP0_AFE_CALGAIN_AFE_4       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_4*)(0x03400660u + PPCA_REMAP_OFFSET_0))
/** \brief 664, Trim value for AFE_CALOFFSETAFE_1 register */
#define REG_SFLASH_GRP0_AFE_CALOFFSET_AFE_1     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_1*)(0x03400664u + PPCA_REMAP_OFFSET_0))
/** \brief 668, Trim value for AFE_CALOFFSETAFE_2 register */
#define REG_SFLASH_GRP0_AFE_CALOFFSET_AFE_2     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_2*)(0x03400668u + PPCA_REMAP_OFFSET_0))
/** \brief 66C, Trim value for AFE_CALOFFSETAFE_3 register */
#define REG_SFLASH_GRP0_AFE_CALOFFSET_AFE_3     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_3*)(0x0340066Cu + PPCA_REMAP_OFFSET_0))
/** \brief 670, Trim value for AFE_CALOFFSETAFE_4 register */
#define REG_SFLASH_GRP0_AFE_CALOFFSET_AFE_4     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_4*)(0x03400670u + PPCA_REMAP_OFFSET_0))
/** \brief 674, SARADC STARTUP Control Register */
#define REG_SFLASH_GRP1_ADC_STARTUPCTRL_VTOICAL_TRIM /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_ADC_STARTUPCTRL_VTOICAL_TRIM*)(0x03400674u + PPCA_REMAP_OFFSET_0))
/** \brief 678, SARADC CAL offset per channel */
#define REG_SFLASH_GRP1_ADC_CALOFFSET0          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_ADC_CALOFFSET*)(0x03400678u + PPCA_REMAP_OFFSET_0))
/** \brief 67C, SARADC CAL offset per channel */
#define REG_SFLASH_GRP1_ADC_CALOFFSET1          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_ADC_CALOFFSET*)(0x0340067Cu + PPCA_REMAP_OFFSET_0))
/** \brief 680, SARADC CAL offset per channel */
#define REG_SFLASH_GRP1_ADC_CALOFFSET2          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_ADC_CALOFFSET*)(0x03400680u + PPCA_REMAP_OFFSET_0))
/** \brief 684, SARADC CAL offset per channel */
#define REG_SFLASH_GRP1_ADC_CALOFFSET3          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_ADC_CALOFFSET*)(0x03400684u + PPCA_REMAP_OFFSET_0))
/** \brief 688, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP1_ADC_CALGAIN_GAINX10     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_ADC_CALGAIN_GAINX1*)(0x03400688u + PPCA_REMAP_OFFSET_0))
/** \brief 68C, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP1_ADC_CALGAIN_GAINX11     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_ADC_CALGAIN_GAINX1*)(0x0340068Cu + PPCA_REMAP_OFFSET_0))
/** \brief 690, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP1_ADC_CALGAIN_GAINX12     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_ADC_CALGAIN_GAINX1*)(0x03400690u + PPCA_REMAP_OFFSET_0))
/** \brief 694, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP1_ADC_CALGAIN_GAINX13     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_ADC_CALGAIN_GAINX1*)(0x03400694u + PPCA_REMAP_OFFSET_0))
/** \brief 698, Trim value for AFE_CALGAINAFE_1 register */
#define REG_SFLASH_GRP1_AFE_CALGAIN_AFE_1       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_1*)(0x03400698u + PPCA_REMAP_OFFSET_0))
/** \brief 69C, Trim value for AFE_CALGAINAFE_2 register */
#define REG_SFLASH_GRP1_AFE_CALGAIN_AFE_2       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_2*)(0x0340069Cu + PPCA_REMAP_OFFSET_0))
/** \brief 6A0, Trim value for AFE_CALGAINAFE_3 register */
#define REG_SFLASH_GRP1_AFE_CALGAIN_AFE_3       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_3*)(0x034006A0u + PPCA_REMAP_OFFSET_0))
/** \brief 6A4, Trim value for AFE_CALGAINAFE_4 register */
#define REG_SFLASH_GRP1_AFE_CALGAIN_AFE_4       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_4*)(0x034006A4u + PPCA_REMAP_OFFSET_0))
/** \brief 6A8, Trim value for AFE_CALOFFSETAFE_1 register */
#define REG_SFLASH_GRP1_AFE_CALOFFSET_AFE_1     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_1*)(0x034006A8u + PPCA_REMAP_OFFSET_0))
/** \brief 6AC, Trim value for AFE_CALOFFSETAFE_2 register */
#define REG_SFLASH_GRP1_AFE_CALOFFSET_AFE_2     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_2*)(0x034006ACu + PPCA_REMAP_OFFSET_0))
/** \brief 6B0, Trim value for AFE_CALOFFSETAFE_3 register */
#define REG_SFLASH_GRP1_AFE_CALOFFSET_AFE_3     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_3*)(0x034006B0u + PPCA_REMAP_OFFSET_0))
/** \brief 6B4, Trim value for AFE_CALOFFSETAFE_4 register */
#define REG_SFLASH_GRP1_AFE_CALOFFSET_AFE_4     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_4*)(0x034006B4u + PPCA_REMAP_OFFSET_0))
/** \brief 6B8, SARADC STARTUP Control Register */
#define REG_SFLASH_GRP2_ADC_STARTUPCTRL_VTOICAL_TRIM /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_ADC_STARTUPCTRL_VTOICAL_TRIM*)(0x034006B8u + PPCA_REMAP_OFFSET_0))
/** \brief 6BC, SARADC CAL offset per channel */
#define REG_SFLASH_GRP2_ADC_CALOFFSET0          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_ADC_CALOFFSET*)(0x034006BCu + PPCA_REMAP_OFFSET_0))
/** \brief 6C0, SARADC CAL offset per channel */
#define REG_SFLASH_GRP2_ADC_CALOFFSET1          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_ADC_CALOFFSET*)(0x034006C0u + PPCA_REMAP_OFFSET_0))
/** \brief 6C4, SARADC CAL offset per channel */
#define REG_SFLASH_GRP2_ADC_CALOFFSET2          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_ADC_CALOFFSET*)(0x034006C4u + PPCA_REMAP_OFFSET_0))
/** \brief 6C8, SARADC CAL offset per channel */
#define REG_SFLASH_GRP2_ADC_CALOFFSET3          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_ADC_CALOFFSET*)(0x034006C8u + PPCA_REMAP_OFFSET_0))
/** \brief 6CC, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP2_ADC_CALGAIN_GAINX10     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_ADC_CALGAIN_GAINX1*)(0x034006CCu + PPCA_REMAP_OFFSET_0))
/** \brief 6D0, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP2_ADC_CALGAIN_GAINX11     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_ADC_CALGAIN_GAINX1*)(0x034006D0u + PPCA_REMAP_OFFSET_0))
/** \brief 6D4, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP2_ADC_CALGAIN_GAINX12     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_ADC_CALGAIN_GAINX1*)(0x034006D4u + PPCA_REMAP_OFFSET_0))
/** \brief 6D8, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP2_ADC_CALGAIN_GAINX13     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_ADC_CALGAIN_GAINX1*)(0x034006D8u + PPCA_REMAP_OFFSET_0))
/** \brief 6DC, Trim value for AFE_CALGAINAFE_1 register */
#define REG_SFLASH_GRP2_AFE_CALGAIN_AFE_1       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_1*)(0x034006DCu + PPCA_REMAP_OFFSET_0))
/** \brief 6E0, Trim value for AFE_CALGAINAFE_2 register */
#define REG_SFLASH_GRP2_AFE_CALGAIN_AFE_2       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_2*)(0x034006E0u + PPCA_REMAP_OFFSET_0))
/** \brief 6E4, Trim value for AFE_CALGAINAFE_3 register */
#define REG_SFLASH_GRP2_AFE_CALGAIN_AFE_3       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_3*)(0x034006E4u + PPCA_REMAP_OFFSET_0))
/** \brief 6E8, Trim value for AFE_CALGAINAFE_4 register */
#define REG_SFLASH_GRP2_AFE_CALGAIN_AFE_4       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_4*)(0x034006E8u + PPCA_REMAP_OFFSET_0))
/** \brief 6EC, Trim value for AFE_CALOFFSETAFE_1 register */
#define REG_SFLASH_GRP2_AFE_CALOFFSET_AFE_1     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_1*)(0x034006ECu + PPCA_REMAP_OFFSET_0))
/** \brief 6F0, Trim value for AFE_CALOFFSETAFE_2 register */
#define REG_SFLASH_GRP2_AFE_CALOFFSET_AFE_2     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_2*)(0x034006F0u + PPCA_REMAP_OFFSET_0))
/** \brief 6F4, Trim value for AFE_CALOFFSETAFE_3 register */
#define REG_SFLASH_GRP2_AFE_CALOFFSET_AFE_3     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_3*)(0x034006F4u + PPCA_REMAP_OFFSET_0))
/** \brief 6F8, Trim value for AFE_CALOFFSETAFE_4 register */
#define REG_SFLASH_GRP2_AFE_CALOFFSET_AFE_4     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_4*)(0x034006F8u + PPCA_REMAP_OFFSET_0))
/** \brief 6FC, SARADC STARTUP Control Register */
#define REG_SFLASH_GRP3_ADC_STARTUPCTRL_VTOICAL_TRIM /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_STARTUPCTRL_VTOICAL_TRIM*)(0x034006FCu + PPCA_REMAP_OFFSET_0))
/** \brief 700, SARADC CAL offset per channel */
#define REG_SFLASH_GRP3_ADC_CALOFFSET0          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALOFFSET*)(0x03400700u + PPCA_REMAP_OFFSET_0))
/** \brief 704, SARADC CAL offset per channel */
#define REG_SFLASH_GRP3_ADC_CALOFFSET1          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALOFFSET*)(0x03400704u + PPCA_REMAP_OFFSET_0))
/** \brief 708, SARADC CAL offset per channel */
#define REG_SFLASH_GRP3_ADC_CALOFFSET2          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALOFFSET*)(0x03400708u + PPCA_REMAP_OFFSET_0))
/** \brief 70C, SARADC CAL offset per channel */
#define REG_SFLASH_GRP3_ADC_CALOFFSET3          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALOFFSET*)(0x0340070Cu + PPCA_REMAP_OFFSET_0))
/** \brief 710, SARADC CAL offset per channel */
#define REG_SFLASH_GRP3_ADC_CALOFFSET4          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALOFFSET*)(0x03400710u + PPCA_REMAP_OFFSET_0))
/** \brief 714, SARADC CAL offset per channel */
#define REG_SFLASH_GRP3_ADC_CALOFFSET5          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALOFFSET*)(0x03400714u + PPCA_REMAP_OFFSET_0))
/** \brief 718, SARADC CAL offset per channel */
#define REG_SFLASH_GRP3_ADC_CALOFFSET6          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALOFFSET*)(0x03400718u + PPCA_REMAP_OFFSET_0))
/** \brief 71C, SARADC CAL offset per channel */
#define REG_SFLASH_GRP3_ADC_CALOFFSET7          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALOFFSET*)(0x0340071Cu + PPCA_REMAP_OFFSET_0))
/** \brief 720, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP3_ADC_CALGAIN_GAINX10     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1*)(0x03400720u + PPCA_REMAP_OFFSET_0))
/** \brief 724, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP3_ADC_CALGAIN_GAINX11     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1*)(0x03400724u + PPCA_REMAP_OFFSET_0))
/** \brief 728, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP3_ADC_CALGAIN_GAINX12     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1*)(0x03400728u + PPCA_REMAP_OFFSET_0))
/** \brief 72C, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP3_ADC_CALGAIN_GAINX13     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1*)(0x0340072Cu + PPCA_REMAP_OFFSET_0))
/** \brief 730, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP3_ADC_CALGAIN_GAINX14     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1*)(0x03400730u + PPCA_REMAP_OFFSET_0))
/** \brief 734, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP3_ADC_CALGAIN_GAINX15     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1*)(0x03400734u + PPCA_REMAP_OFFSET_0))
/** \brief 738, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP3_ADC_CALGAIN_GAINX16     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1*)(0x03400738u + PPCA_REMAP_OFFSET_0))
/** \brief 73C, Loaded to the ADC_CALGAIN registers (8 in group 0) */
#define REG_SFLASH_GRP3_ADC_CALGAIN_GAINX17     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1*)(0x0340073Cu + PPCA_REMAP_OFFSET_0))
/** \brief 740, Trim value for AFE_CALGAINAFE_1 register */
#define REG_SFLASH_GRP3_AFE_CALGAIN_AFE_1       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_1*)(0x03400740u + PPCA_REMAP_OFFSET_0))
/** \brief 744, Trim value for AFE_CALGAINAFE_2 register */
#define REG_SFLASH_GRP3_AFE_CALGAIN_AFE_2       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_2*)(0x03400744u + PPCA_REMAP_OFFSET_0))
/** \brief 748, Trim value for AFE_CALGAINAFE_3 register */
#define REG_SFLASH_GRP3_AFE_CALGAIN_AFE_3       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_3*)(0x03400748u + PPCA_REMAP_OFFSET_0))
/** \brief 74C, Trim value for AFE_CALGAINAFE_4 register */
#define REG_SFLASH_GRP3_AFE_CALGAIN_AFE_4       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_4*)(0x0340074Cu + PPCA_REMAP_OFFSET_0))
/** \brief 750, Trim value for AFE_CALOFFSETAFE_1 register */
#define REG_SFLASH_GRP3_AFE_CALOFFSET_AFE_1     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_1*)(0x03400750u + PPCA_REMAP_OFFSET_0))
/** \brief 754, Trim value for AFE_CALOFFSETAFE_2 register */
#define REG_SFLASH_GRP3_AFE_CALOFFSET_AFE_2     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_2*)(0x03400754u + PPCA_REMAP_OFFSET_0))
/** \brief 758, Trim value for AFE_CALOFFSETAFE_3 register */
#define REG_SFLASH_GRP3_AFE_CALOFFSET_AFE_3     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_3*)(0x03400758u + PPCA_REMAP_OFFSET_0))
/** \brief 75C, Trim value for AFE_CALOFFSETAFE_4 register */
#define REG_SFLASH_GRP3_AFE_CALOFFSET_AFE_4     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_4*)(0x0340075Cu + PPCA_REMAP_OFFSET_0))
/** \brief 760, Trim value to load into the Analog Comparator Differential Mode Calibration register */
#define REG_SFLASH_GRP0_DCSG_TEST_VREF_TRIM     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DCSG_TEST_VREF_TRIM*)(0x03400760u + PPCA_REMAP_OFFSET_0))
/** \brief 764, Trim value to load into the Analog Comparator Differential Mode Calibration register */
#define REG_SFLASH_GRP0_DCSG_DIFF_CALOFFSET     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DCSG_DIFF_CALOFFSET*)(0x03400764u + PPCA_REMAP_OFFSET_0))
/** \brief 768, Trim value to load into the Analog Comparator Single Ended Mode Calibration register */
#define REG_SFLASH_GRP0_DCSG_SE_CALOFFSET       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DCSG_SE_CALOFFSET*)(0x03400768u + PPCA_REMAP_OFFSET_0))
/** \brief 76C, Trim value to load into the Analog Comparator Differential Mode Gain 1 register */
#define REG_SFLASH_GRP0_DCSG_DIFF_CALGAIN_1     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_1*)(0x0340076Cu + PPCA_REMAP_OFFSET_0))
/** \brief 770, Trim value to load into the Analog Comparator Differential Mode Gain 2 register */
#define REG_SFLASH_GRP0_DCSG_DIFF_CALGAIN_2     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_2*)(0x03400770u + PPCA_REMAP_OFFSET_0))
/** \brief 774, Trim value to load into the Analog Comparator Single Ended Mode Gain register */
#define REG_SFLASH_GRP0_DCSG_SE_CALGAIN         /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DCSG_SE_CALGAIN*)(0x03400774u + PPCA_REMAP_OFFSET_0))
/** \brief 7F0, 0 */
#define REG_SFLASH_GRP0_DAC_OFFSET_CNFG1        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG1*)(0x034007F0u + PPCA_REMAP_OFFSET_0))
/** \brief 7F2, 0 */
#define REG_SFLASH_GRP0_DAC_OFFSET_CNFG2        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG2*)(0x034007F2u + PPCA_REMAP_OFFSET_0))
/** \brief 7F4, 0 */
#define REG_SFLASH_GRP0_DAC_OFFSET_CNFG3        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG3*)(0x034007F4u + PPCA_REMAP_OFFSET_0))
/** \brief 7F6, 0 */
#define REG_SFLASH_GRP0_DAC_OFFSET_CNFG4        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG4*)(0x034007F6u + PPCA_REMAP_OFFSET_0))
/** \brief 7F8, 0 */
#define REG_SFLASH_GRP0_DAC_OFFSET_CNFG5        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG5*)(0x034007F8u + PPCA_REMAP_OFFSET_0))
/** \brief 7FA, 0 */
#define REG_SFLASH_GRP0_DAC_GAIN_CNFG1          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DAC_GAIN_CNFG1*)(0x034007FAu + PPCA_REMAP_OFFSET_0))
/** \brief 7FC, 0 */
#define REG_SFLASH_GRP0_DAC_GAIN_CNFG2          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DAC_GAIN_CNFG2*)(0x034007FCu + PPCA_REMAP_OFFSET_0))
/** \brief 7FE, 0 */
#define REG_SFLASH_GRP0_DAC_GAIN_CNFG3          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DAC_GAIN_CNFG3*)(0x034007FEu + PPCA_REMAP_OFFSET_0))
/** \brief 800, 0 */
#define REG_SFLASH_GRP0_DAC_GAIN_CNFG4          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DAC_GAIN_CNFG4*)(0x03400800u + PPCA_REMAP_OFFSET_0))
/** \brief 802, 0 */
#define REG_SFLASH_GRP0_DAC_GAIN_CNFG5          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_DAC_GAIN_CNFG5*)(0x03400802u + PPCA_REMAP_OFFSET_0))
/** \brief 804, 0 */
#define REG_SFLASH_GRP0_BUFFER_OFFSET_1         /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_BUFFER_OFFSET_1*)(0x03400804u + PPCA_REMAP_OFFSET_0))
/** \brief 806, 0 */
#define REG_SFLASH_GRP0_BUFFER_OFFSET_2         /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP0_BUFFER_OFFSET_2*)(0x03400806u + PPCA_REMAP_OFFSET_0))
/** \brief 808, Note:  There are three sets of 6 DCSG registers in GRP1, one for each DCSG in the group
Trim values to load into the lower 6 bits of the TEST register in the DCSG */
#define REG_SFLASH_GRP1_DCSG_TEST_VREF_TRIM     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DCSG_TEST_VREF_TRIM*)(0x03400808u + PPCA_REMAP_OFFSET_0))
/** \brief 80C, Trim value to load into the Analog Comparator Differential Mode Calibration register */
#define REG_SFLASH_GRP1_DCSG_DIFF_CALOFFSET     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DCSG_DIFF_CALOFFSET*)(0x0340080Cu + PPCA_REMAP_OFFSET_0))
/** \brief 810, Trim value to load into the Analog Comparator Single Ended Mode Calibration register */
#define REG_SFLASH_GRP1_DCSG_SE_CALOFFSET       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DCSG_SE_CALOFFSET*)(0x03400810u + PPCA_REMAP_OFFSET_0))
/** \brief 814, Trim value to load into the Analog Comparator Differential Mode Gain 1 register */
#define REG_SFLASH_GRP1_DCSG_DIFF_CALGAIN_1     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_1*)(0x03400814u + PPCA_REMAP_OFFSET_0))
/** \brief 818, Trim value to load into the Analog Comparator Differential Mode Gain 2 register */
#define REG_SFLASH_GRP1_DCSG_DIFF_CALGAIN_2     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_2*)(0x03400818u + PPCA_REMAP_OFFSET_0))
/** \brief 81C, Trim value to load into the Analog Comparator Single Ended Mode Gain register */
#define REG_SFLASH_GRP1_DCSG_SE_CALGAIN         /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DCSG_SE_CALGAIN*)(0x0340081Cu + PPCA_REMAP_OFFSET_0))
/** \brief 850, Trim value to load into the DAC Offset CNFG1 register */
#define REG_SFLASH_GRP1_DAC_OFFSET_CNFG1        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG1*)(0x03400850u + PPCA_REMAP_OFFSET_0))
/** \brief 852, Trim value to load into the DAC Offset CNFG2 register */
#define REG_SFLASH_GRP1_DAC_OFFSET_CNFG2        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG2*)(0x03400852u + PPCA_REMAP_OFFSET_0))
/** \brief 854, Trim value to load into the DAC Offset CNFG3 register */
#define REG_SFLASH_GRP1_DAC_OFFSET_CNFG3        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG3*)(0x03400854u + PPCA_REMAP_OFFSET_0))
/** \brief 856, Trim value to load into the DAC Offset CNFG4 register */
#define REG_SFLASH_GRP1_DAC_OFFSET_CNFG4        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG4*)(0x03400856u + PPCA_REMAP_OFFSET_0))
/** \brief 858, Trim value to load into the DAC Offset CNFG5 register */
#define REG_SFLASH_GRP1_DAC_OFFSET_CNFG5        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG5*)(0x03400858u + PPCA_REMAP_OFFSET_0))
/** \brief 85A, Trim value to load into the DAC Gain CNFG1 register */
#define REG_SFLASH_GRP1_DAC_GAIN_CNFG1          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DAC_GAIN_CNFG1*)(0x0340085Au + PPCA_REMAP_OFFSET_0))
/** \brief 85C, Trim value to load into the DAC Gain CNFG2 register */
#define REG_SFLASH_GRP1_DAC_GAIN_CNFG2          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DAC_GAIN_CNFG2*)(0x0340085Cu + PPCA_REMAP_OFFSET_0))
/** \brief 85E, Trim value to load into the DAC Gain CNFG3 register */
#define REG_SFLASH_GRP1_DAC_GAIN_CNFG3          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DAC_GAIN_CNFG3*)(0x0340085Eu + PPCA_REMAP_OFFSET_0))
/** \brief 860, Trim value to load into the DAC Gain CNFG4 register */
#define REG_SFLASH_GRP1_DAC_GAIN_CNFG4          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DAC_GAIN_CNFG4*)(0x03400860u + PPCA_REMAP_OFFSET_0))
/** \brief 862, Trim value to load into the DAC Gain CNFG5 register */
#define REG_SFLASH_GRP1_DAC_GAIN_CNFG5          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_DAC_GAIN_CNFG5*)(0x03400862u + PPCA_REMAP_OFFSET_0))
/** \brief 864, Trim value to load into the Buffer Offset 1 register */
#define REG_SFLASH_GRP1_BUFFER_OFFSET_1         /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_BUFFER_OFFSET_1*)(0x03400864u + PPCA_REMAP_OFFSET_0))
/** \brief 866, Trim value to load into the Buffer Offset 2 register */
#define REG_SFLASH_GRP1_BUFFER_OFFSET_2         /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_GRP1_BUFFER_OFFSET_2*)(0x03400866u + PPCA_REMAP_OFFSET_0))
/** \brief AD8, Trim value to convert counts to degrees C using the formula temp = VBE * A - B.  VBE is a floating point voltage. */
#define REG_SFLASH_SAR_TEMP_COEF_A              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_TEMP_COEF_A*)(0x03400AD8u + PPCA_REMAP_OFFSET_0))
/** \brief ADA, Trim value to convert counts to degrees C using the formula temp = VBE * A - B.  VBE is a floating point voltage. */
#define REG_SFLASH_SAR_TEMP_COEF_B              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SAR_TEMP_COEF_B*)(0x03400ADAu + PPCA_REMAP_OFFSET_0))
/** \brief AEC, LDO trim value for 0.9V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
#define REG_SFLASH_LDO_0P9V_TRIM                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_LDO_0P9V_TRIM*)(0x03400AECu + PPCA_REMAP_OFFSET_0))
/** \brief AF0, LDO trim value for 1.0V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
#define REG_SFLASH_LDO_1P0V_TRIM                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_LDO_1P0V_TRIM*)(0x03400AF0u + PPCA_REMAP_OFFSET_0))
/** \brief AF4, LDO trim value for 1.1V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
#define REG_SFLASH_LDO_1P1V_TRIM                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_LDO_1P1V_TRIM*)(0x03400AF4u + PPCA_REMAP_OFFSET_0))
/** \brief AF8, LDO trim value for 1.2V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
#define REG_SFLASH_LDO_1P2V_TRIM                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_LDO_1P2V_TRIM*)(0x03400AF8u + PPCA_REMAP_OFFSET_0))
/** \brief AFC, Wakeup delay values for ULP, LP, MF and OD modes (4 values) loaded to the PWR_TRIM_WAKE_CTL register */
#define REG_SFLASH_PWR_TRIM_WAKE_CTL            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PWR_TRIM_WAKE_CTL*)(0x03400AFCu + PPCA_REMAP_OFFSET_0))
/** \brief B40, Signature that indicates that the sort trims are valid = 0x631A_1FAC */
#define REG_SFLASH_BASIC_TRIMS_SORT_FLAG        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BASIC_TRIMS_SORT_FLAG*)(0x03400B40u + PPCA_REMAP_OFFSET_0))
/** \brief B44, Copy of the BASIC_TRIM values from EFUSE.  Used in SORT and PROVISIONED life cycles before BASIC_TRIM values are written to the efuses */
#define REG_SFLASH_BASIC_TRIM_SORT0             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BASIC_TRIM_SORT*)(0x03400B44u + PPCA_REMAP_OFFSET_0))
/** \brief B48, Copy of the BASIC_TRIM values from EFUSE.  Used in SORT and PROVISIONED life cycles before BASIC_TRIM values are written to the efuses */
#define REG_SFLASH_BASIC_TRIM_SORT1             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BASIC_TRIM_SORT*)(0x03400B48u + PPCA_REMAP_OFFSET_0))
/** \brief B4C, Copy of the BASIC_TRIM values from EFUSE.  Used in SORT and PROVISIONED life cycles before BASIC_TRIM values are written to the efuses */
#define REG_SFLASH_BASIC_TRIM_SORT2             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BASIC_TRIM_SORT*)(0x03400B4Cu + PPCA_REMAP_OFFSET_0))
/** \brief B50, Copy of the BASIC_TRIM values from EFUSE.  Used in SORT and PROVISIONED life cycles before BASIC_TRIM values are written to the efuses */
#define REG_SFLASH_BASIC_TRIM_SORT3             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BASIC_TRIM_SORT*)(0x03400B50u + PPCA_REMAP_OFFSET_0))
/** \brief B54, Copy of the BASIC_TRIM values from EFUSE.  Used in SORT and PROVISIONED life cycles before BASIC_TRIM values are written to the efuses */
#define REG_SFLASH_BASIC_TRIM_SORT4             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BASIC_TRIM_SORT*)(0x03400B54u + PPCA_REMAP_OFFSET_0))
/** \brief B58, Copy of the BASIC_TRIM values from EFUSE.  Used in SORT and PROVISIONED life cycles before BASIC_TRIM values are written to the efuses */
#define REG_SFLASH_BASIC_TRIM_SORT5             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BASIC_TRIM_SORT*)(0x03400B58u + PPCA_REMAP_OFFSET_0))
/** \brief C00, Write counter for working copy of counter page */
#define REG_SFLASH_COUNTER_FLASH_ROW6           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_COUNTER_FLASH_ROW6*)(0x03400C00u + PPCA_REMAP_OFFSET_0))
/** \brief C04, CRC of the BOOTROW -- See Boot SAS 12.1 'Security Requirements' item #5 */
#define REG_SFLASH_BOOTROW_CRC                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOTROW_CRC*)(0x03400C04u + PPCA_REMAP_OFFSET_0))
/** \brief C09, IFX RMA Key Revocation to allow for using the second key if the first key is revoked due to compromised. The pattern of 1-byte state that indicate the key has been revoked can be any numbers but not all zeros or all ones */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_REVOCATION /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_REVOCATION*)(0x03400C09u + PPCA_REMAP_OFFSET_0))
/** \brief C0B, OEM Root Of Trust Key Revocation to allow for using the second key if the first key is revoked due to compromised. The pattern of 1-byte state that indicate the key has been revoked can be any numbers but not all zeros or all ones */
#define REG_SFLASH_OEM_ROT_KEY_REVOCATION       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_REVOCATION*)(0x03400C0Bu + PPCA_REMAP_OFFSET_0))
/** \brief C0C, 8-bit ANTI_ROLLBACK_COUNTER for RAM Apps */
#define REG_SFLASH_NV_COUNTER_RAMAPP            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_NV_COUNTER_RAMAPP*)(0x03400C0Cu + PPCA_REMAP_OFFSET_0))
/** \brief C0D, 8-bit ANTI_ROLLBACK_COUNTER is used to prevent rollback of first image - OEM_S or PROT_FW */
#define REG_SFLASH_NV_COUNTER_A1                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_NV_COUNTER_A1*)(0x03400C0Du + PPCA_REMAP_OFFSET_0))
/** \brief C0E, 8-bit ANTI_ROLLBACK_COUNTER is used to prevent rollback of second image */
#define REG_SFLASH_NV_COUNTER_A2                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_NV_COUNTER_A2*)(0x03400C0Eu + PPCA_REMAP_OFFSET_0))
/** \brief C14, OEM assets are finalized in SFLASH, no further update is allowed vs. further updates are allowed */
#define REG_SFLASH_PROV_OEM_COMPLETE            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROV_OEM_COMPLETE*)(0x03400C14u + PPCA_REMAP_OFFSET_0))
/** \brief C18, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_10                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C18u + PPCA_REMAP_OFFSET_0))
/** \brief C19, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_11                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C19u + PPCA_REMAP_OFFSET_0))
/** \brief C1A, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_12                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C1Au + PPCA_REMAP_OFFSET_0))
/** \brief C1B, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_13                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C1Bu + PPCA_REMAP_OFFSET_0))
/** \brief C1C, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_14                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C1Cu + PPCA_REMAP_OFFSET_0))
/** \brief C1D, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_15                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C1Du + PPCA_REMAP_OFFSET_0))
/** \brief C1E, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_16                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C1Eu + PPCA_REMAP_OFFSET_0))
/** \brief C1F, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_17                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C1Fu + PPCA_REMAP_OFFSET_0))
/** \brief C20, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_18                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C20u + PPCA_REMAP_OFFSET_0))
/** \brief C21, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_19                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C21u + PPCA_REMAP_OFFSET_0))
/** \brief C22, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_110                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C22u + PPCA_REMAP_OFFSET_0))
/** \brief C23, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_111                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C23u + PPCA_REMAP_OFFSET_0))
/** \brief C24, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_112                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C24u + PPCA_REMAP_OFFSET_0))
/** \brief C25, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_113                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C25u + PPCA_REMAP_OFFSET_0))
/** \brief C26, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_114                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C26u + PPCA_REMAP_OFFSET_0))
/** \brief C27, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_115                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C27u + PPCA_REMAP_OFFSET_0))
/** \brief C28, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_116                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C28u + PPCA_REMAP_OFFSET_0))
/** \brief C29, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_117                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C29u + PPCA_REMAP_OFFSET_0))
/** \brief C2A, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_118                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C2Au + PPCA_REMAP_OFFSET_0))
/** \brief C2B, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_119                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C2Bu + PPCA_REMAP_OFFSET_0))
/** \brief C2C, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_120                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C2Cu + PPCA_REMAP_OFFSET_0))
/** \brief C2D, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_121                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C2Du + PPCA_REMAP_OFFSET_0))
/** \brief C2E, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_122                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C2Eu + PPCA_REMAP_OFFSET_0))
/** \brief C2F, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_123                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C2Fu + PPCA_REMAP_OFFSET_0))
/** \brief C30, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_124                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C30u + PPCA_REMAP_OFFSET_0))
/** \brief C31, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_125                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C31u + PPCA_REMAP_OFFSET_0))
/** \brief C32, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_126                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C32u + PPCA_REMAP_OFFSET_0))
/** \brief C33, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_127                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C33u + PPCA_REMAP_OFFSET_0))
/** \brief C34, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_128                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C34u + PPCA_REMAP_OFFSET_0))
/** \brief C35, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_129                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C35u + PPCA_REMAP_OFFSET_0))
/** \brief C36, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_130                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C36u + PPCA_REMAP_OFFSET_0))
/** \brief C37, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_131                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_1*)(0x03400C37u + PPCA_REMAP_OFFSET_0))
/** \brief C38, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_20                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C38u + PPCA_REMAP_OFFSET_0))
/** \brief C39, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_21                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C39u + PPCA_REMAP_OFFSET_0))
/** \brief C3A, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_22                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C3Au + PPCA_REMAP_OFFSET_0))
/** \brief C3B, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_23                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C3Bu + PPCA_REMAP_OFFSET_0))
/** \brief C3C, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_24                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C3Cu + PPCA_REMAP_OFFSET_0))
/** \brief C3D, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_25                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C3Du + PPCA_REMAP_OFFSET_0))
/** \brief C3E, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_26                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C3Eu + PPCA_REMAP_OFFSET_0))
/** \brief C3F, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_27                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C3Fu + PPCA_REMAP_OFFSET_0))
/** \brief C40, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_28                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C40u + PPCA_REMAP_OFFSET_0))
/** \brief C41, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_29                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C41u + PPCA_REMAP_OFFSET_0))
/** \brief C42, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_210                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C42u + PPCA_REMAP_OFFSET_0))
/** \brief C43, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_211                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C43u + PPCA_REMAP_OFFSET_0))
/** \brief C44, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_212                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C44u + PPCA_REMAP_OFFSET_0))
/** \brief C45, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_213                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C45u + PPCA_REMAP_OFFSET_0))
/** \brief C46, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_214                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C46u + PPCA_REMAP_OFFSET_0))
/** \brief C47, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_215                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C47u + PPCA_REMAP_OFFSET_0))
/** \brief C48, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_216                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C48u + PPCA_REMAP_OFFSET_0))
/** \brief C49, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_217                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C49u + PPCA_REMAP_OFFSET_0))
/** \brief C4A, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_218                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C4Au + PPCA_REMAP_OFFSET_0))
/** \brief C4B, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_219                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C4Bu + PPCA_REMAP_OFFSET_0))
/** \brief C4C, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_220                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C4Cu + PPCA_REMAP_OFFSET_0))
/** \brief C4D, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_221                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C4Du + PPCA_REMAP_OFFSET_0))
/** \brief C4E, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_222                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C4Eu + PPCA_REMAP_OFFSET_0))
/** \brief C4F, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_223                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C4Fu + PPCA_REMAP_OFFSET_0))
/** \brief C50, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_224                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C50u + PPCA_REMAP_OFFSET_0))
/** \brief C51, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_225                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C51u + PPCA_REMAP_OFFSET_0))
/** \brief C52, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_226                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C52u + PPCA_REMAP_OFFSET_0))
/** \brief C53, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_227                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C53u + PPCA_REMAP_OFFSET_0))
/** \brief C54, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_228                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C54u + PPCA_REMAP_OFFSET_0))
/** \brief C55, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_229                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C55u + PPCA_REMAP_OFFSET_0))
/** \brief C56, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_230                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C56u + PPCA_REMAP_OFFSET_0))
/** \brief C57, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_231                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_2*)(0x03400C57u + PPCA_REMAP_OFFSET_0))
/** \brief C58, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_30                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C58u + PPCA_REMAP_OFFSET_0))
/** \brief C59, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_31                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C59u + PPCA_REMAP_OFFSET_0))
/** \brief C5A, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_32                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C5Au + PPCA_REMAP_OFFSET_0))
/** \brief C5B, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_33                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C5Bu + PPCA_REMAP_OFFSET_0))
/** \brief C5C, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_34                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C5Cu + PPCA_REMAP_OFFSET_0))
/** \brief C5D, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_35                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C5Du + PPCA_REMAP_OFFSET_0))
/** \brief C5E, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_36                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C5Eu + PPCA_REMAP_OFFSET_0))
/** \brief C5F, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_37                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C5Fu + PPCA_REMAP_OFFSET_0))
/** \brief C60, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_38                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C60u + PPCA_REMAP_OFFSET_0))
/** \brief C61, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_39                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C61u + PPCA_REMAP_OFFSET_0))
/** \brief C62, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_310                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C62u + PPCA_REMAP_OFFSET_0))
/** \brief C63, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_311                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C63u + PPCA_REMAP_OFFSET_0))
/** \brief C64, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_312                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C64u + PPCA_REMAP_OFFSET_0))
/** \brief C65, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_313                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C65u + PPCA_REMAP_OFFSET_0))
/** \brief C66, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_314                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C66u + PPCA_REMAP_OFFSET_0))
/** \brief C67, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_315                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C67u + PPCA_REMAP_OFFSET_0))
/** \brief C68, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_316                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C68u + PPCA_REMAP_OFFSET_0))
/** \brief C69, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_317                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C69u + PPCA_REMAP_OFFSET_0))
/** \brief C6A, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_318                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C6Au + PPCA_REMAP_OFFSET_0))
/** \brief C6B, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_319                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C6Bu + PPCA_REMAP_OFFSET_0))
/** \brief C6C, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_320                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C6Cu + PPCA_REMAP_OFFSET_0))
/** \brief C6D, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_321                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C6Du + PPCA_REMAP_OFFSET_0))
/** \brief C6E, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_322                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C6Eu + PPCA_REMAP_OFFSET_0))
/** \brief C6F, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_323                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C6Fu + PPCA_REMAP_OFFSET_0))
/** \brief C70, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_324                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C70u + PPCA_REMAP_OFFSET_0))
/** \brief C71, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_325                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C71u + PPCA_REMAP_OFFSET_0))
/** \brief C72, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_326                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C72u + PPCA_REMAP_OFFSET_0))
/** \brief C73, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_327                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C73u + PPCA_REMAP_OFFSET_0))
/** \brief C74, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_328                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C74u + PPCA_REMAP_OFFSET_0))
/** \brief C75, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_329                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C75u + PPCA_REMAP_OFFSET_0))
/** \brief C76, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_330                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C76u + PPCA_REMAP_OFFSET_0))
/** \brief C77, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_331                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_3*)(0x03400C77u + PPCA_REMAP_OFFSET_0))
/** \brief C78, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_40                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C78u + PPCA_REMAP_OFFSET_0))
/** \brief C79, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_41                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C79u + PPCA_REMAP_OFFSET_0))
/** \brief C7A, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_42                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C7Au + PPCA_REMAP_OFFSET_0))
/** \brief C7B, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_43                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C7Bu + PPCA_REMAP_OFFSET_0))
/** \brief C7C, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_44                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C7Cu + PPCA_REMAP_OFFSET_0))
/** \brief C7D, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_45                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C7Du + PPCA_REMAP_OFFSET_0))
/** \brief C7E, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_46                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C7Eu + PPCA_REMAP_OFFSET_0))
/** \brief C7F, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_47                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C7Fu + PPCA_REMAP_OFFSET_0))
/** \brief C80, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_48                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C80u + PPCA_REMAP_OFFSET_0))
/** \brief C81, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_49                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C81u + PPCA_REMAP_OFFSET_0))
/** \brief C82, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_410                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C82u + PPCA_REMAP_OFFSET_0))
/** \brief C83, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_411                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C83u + PPCA_REMAP_OFFSET_0))
/** \brief C84, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_412                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C84u + PPCA_REMAP_OFFSET_0))
/** \brief C85, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_413                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C85u + PPCA_REMAP_OFFSET_0))
/** \brief C86, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_414                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C86u + PPCA_REMAP_OFFSET_0))
/** \brief C87, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_415                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C87u + PPCA_REMAP_OFFSET_0))
/** \brief C88, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_416                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C88u + PPCA_REMAP_OFFSET_0))
/** \brief C89, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_417                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C89u + PPCA_REMAP_OFFSET_0))
/** \brief C8A, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_418                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C8Au + PPCA_REMAP_OFFSET_0))
/** \brief C8B, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_419                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C8Bu + PPCA_REMAP_OFFSET_0))
/** \brief C8C, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_420                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C8Cu + PPCA_REMAP_OFFSET_0))
/** \brief C8D, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_421                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C8Du + PPCA_REMAP_OFFSET_0))
/** \brief C8E, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_422                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C8Eu + PPCA_REMAP_OFFSET_0))
/** \brief C8F, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_423                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C8Fu + PPCA_REMAP_OFFSET_0))
/** \brief C90, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_424                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C90u + PPCA_REMAP_OFFSET_0))
/** \brief C91, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_425                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C91u + PPCA_REMAP_OFFSET_0))
/** \brief C92, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_426                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C92u + PPCA_REMAP_OFFSET_0))
/** \brief C93, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_427                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C93u + PPCA_REMAP_OFFSET_0))
/** \brief C94, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_428                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C94u + PPCA_REMAP_OFFSET_0))
/** \brief C95, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_429                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C95u + PPCA_REMAP_OFFSET_0))
/** \brief C96, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_430                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C96u + PPCA_REMAP_OFFSET_0))
/** \brief C97, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
#define REG_SFLASH_HASH_SLOT_431                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_HASH_SLOT_4*)(0x03400C97u + PPCA_REMAP_OFFSET_0))
/** \brief C98, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST0            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400C98u + PPCA_REMAP_OFFSET_0))
/** \brief C9C, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST1            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400C9Cu + PPCA_REMAP_OFFSET_0))
/** \brief CA0, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST2            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CA0u + PPCA_REMAP_OFFSET_0))
/** \brief CA4, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST3            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CA4u + PPCA_REMAP_OFFSET_0))
/** \brief CA8, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST4            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CA8u + PPCA_REMAP_OFFSET_0))
/** \brief CAC, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST5            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CACu + PPCA_REMAP_OFFSET_0))
/** \brief CB0, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST6            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CB0u + PPCA_REMAP_OFFSET_0))
/** \brief CB4, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST7            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CB4u + PPCA_REMAP_OFFSET_0))
/** \brief CB8, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST8            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CB8u + PPCA_REMAP_OFFSET_0))
/** \brief CBC, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST9            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CBCu + PPCA_REMAP_OFFSET_0))
/** \brief CC0, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST10           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CC0u + PPCA_REMAP_OFFSET_0))
/** \brief CC4, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST11           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CC4u + PPCA_REMAP_OFFSET_0))
/** \brief CC8, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST12           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CC8u + PPCA_REMAP_OFFSET_0))
/** \brief CCC, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST13           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CCCu + PPCA_REMAP_OFFSET_0))
/** \brief CD0, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST14           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CD0u + PPCA_REMAP_OFFSET_0))
/** \brief CD4, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST15           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CD4u + PPCA_REMAP_OFFSET_0))
/** \brief CD8, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST16           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CD8u + PPCA_REMAP_OFFSET_0))
/** \brief CDC, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST17           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CDCu + PPCA_REMAP_OFFSET_0))
/** \brief CE0, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST18           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CE0u + PPCA_REMAP_OFFSET_0))
/** \brief CE4, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST19           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CE4u + PPCA_REMAP_OFFSET_0))
/** \brief CE8, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST20           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CE8u + PPCA_REMAP_OFFSET_0))
/** \brief CEC, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST21           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CECu + PPCA_REMAP_OFFSET_0))
/** \brief CF0, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST22           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CF0u + PPCA_REMAP_OFFSET_0))
/** \brief CF4, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST23           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CF4u + PPCA_REMAP_OFFSET_0))
/** \brief CF8, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST24           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CF8u + PPCA_REMAP_OFFSET_0))
/** \brief CFC, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST25           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400CFCu + PPCA_REMAP_OFFSET_0))
/** \brief D00, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST26           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400D00u + PPCA_REMAP_OFFSET_0))
/** \brief D04, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST27           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400D04u + PPCA_REMAP_OFFSET_0))
/** \brief D08, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST28           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400D08u + PPCA_REMAP_OFFSET_0))
/** \brief D0C, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST29           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400D0Cu + PPCA_REMAP_OFFSET_0))
/** \brief D10, Secure hash list - Count of active entries followed by address/length pairs */
#define REG_SFLASH_SECURE_HASH_LIST30           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH_LIST*)(0x03400D10u + PPCA_REMAP_OFFSET_0))
/** \brief D14, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST0           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D14u + PPCA_REMAP_OFFSET_0))
/** \brief D18, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST1           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D18u + PPCA_REMAP_OFFSET_0))
/** \brief D1C, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST2           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D1Cu + PPCA_REMAP_OFFSET_0))
/** \brief D20, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST3           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D20u + PPCA_REMAP_OFFSET_0))
/** \brief D24, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST4           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D24u + PPCA_REMAP_OFFSET_0))
/** \brief D28, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST5           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D28u + PPCA_REMAP_OFFSET_0))
/** \brief D2C, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST6           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D2Cu + PPCA_REMAP_OFFSET_0))
/** \brief D30, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST7           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D30u + PPCA_REMAP_OFFSET_0))
/** \brief D34, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST8           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D34u + PPCA_REMAP_OFFSET_0))
/** \brief D38, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST9           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D38u + PPCA_REMAP_OFFSET_0))
/** \brief D3C, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST10          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D3Cu + PPCA_REMAP_OFFSET_0))
/** \brief D40, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST11          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D40u + PPCA_REMAP_OFFSET_0))
/** \brief D44, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST12          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D44u + PPCA_REMAP_OFFSET_0))
/** \brief D48, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST13          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D48u + PPCA_REMAP_OFFSET_0))
/** \brief D4C, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST14          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D4Cu + PPCA_REMAP_OFFSET_0))
/** \brief D50, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST15          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D50u + PPCA_REMAP_OFFSET_0))
/** \brief D54, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST16          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D54u + PPCA_REMAP_OFFSET_0))
/** \brief D58, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST17          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D58u + PPCA_REMAP_OFFSET_0))
/** \brief D5C, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST18          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D5Cu + PPCA_REMAP_OFFSET_0))
/** \brief D60, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST19          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D60u + PPCA_REMAP_OFFSET_0))
/** \brief D64, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST20          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D64u + PPCA_REMAP_OFFSET_0))
/** \brief D68, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST21          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D68u + PPCA_REMAP_OFFSET_0))
/** \brief D6C, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST22          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D6Cu + PPCA_REMAP_OFFSET_0))
/** \brief D70, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST23          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D70u + PPCA_REMAP_OFFSET_0))
/** \brief D74, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST24          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D74u + PPCA_REMAP_OFFSET_0))
/** \brief D78, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST25          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D78u + PPCA_REMAP_OFFSET_0))
/** \brief D7C, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST26          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D7Cu + PPCA_REMAP_OFFSET_0))
/** \brief D80, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST27          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D80u + PPCA_REMAP_OFFSET_0))
/** \brief D84, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST28          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D84u + PPCA_REMAP_OFFSET_0))
/** \brief D88, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST29          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D88u + PPCA_REMAP_OFFSET_0))
/** \brief D8C, Protected FW hash list - Count of active entries followed by address / length pairs */
#define REG_SFLASH_PROT_FW_HASH_LIST30          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH_LIST*)(0x03400D8Cu + PPCA_REMAP_OFFSET_0))
/** \brief D90, 6 failed signature counters - 0 = RAM Apps, 1 = loaded image 1, etc. */
#define REG_SFLASH_FAILED_SIGNATURE_COUNTER0    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FAILED_SIGNATURE_COUNTER*)(0x03400D90u + PPCA_REMAP_OFFSET_0))
/** \brief D92, 6 failed signature counters - 0 = RAM Apps, 1 = loaded image 1, etc. */
#define REG_SFLASH_FAILED_SIGNATURE_COUNTER1    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FAILED_SIGNATURE_COUNTER*)(0x03400D92u + PPCA_REMAP_OFFSET_0))
/** \brief D94, 6 failed signature counters - 0 = RAM Apps, 1 = loaded image 1, etc. */
#define REG_SFLASH_FAILED_SIGNATURE_COUNTER2    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FAILED_SIGNATURE_COUNTER*)(0x03400D94u + PPCA_REMAP_OFFSET_0))
/** \brief D96, 6 failed signature counters - 0 = RAM Apps, 1 = loaded image 1, etc. */
#define REG_SFLASH_FAILED_SIGNATURE_COUNTER3    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FAILED_SIGNATURE_COUNTER*)(0x03400D96u + PPCA_REMAP_OFFSET_0))
/** \brief D98, 6 failed signature counters - 0 = RAM Apps, 1 = loaded image 1, etc. */
#define REG_SFLASH_FAILED_SIGNATURE_COUNTER4    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FAILED_SIGNATURE_COUNTER*)(0x03400D98u + PPCA_REMAP_OFFSET_0))
/** \brief D9A, 6 failed signature counters - 0 = RAM Apps, 1 = loaded image 1, etc. */
#define REG_SFLASH_FAILED_SIGNATURE_COUNTER5    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FAILED_SIGNATURE_COUNTER*)(0x03400D9Au + PPCA_REMAP_OFFSET_0))
/** \brief D9C, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH0                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400D9Cu + PPCA_REMAP_OFFSET_0))
/** \brief D9D, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH1                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400D9Du + PPCA_REMAP_OFFSET_0))
/** \brief D9E, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH2                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400D9Eu + PPCA_REMAP_OFFSET_0))
/** \brief D9F, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH3                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400D9Fu + PPCA_REMAP_OFFSET_0))
/** \brief DA0, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH4                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DA0u + PPCA_REMAP_OFFSET_0))
/** \brief DA1, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH5                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DA1u + PPCA_REMAP_OFFSET_0))
/** \brief DA2, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH6                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DA2u + PPCA_REMAP_OFFSET_0))
/** \brief DA3, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH7                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DA3u + PPCA_REMAP_OFFSET_0))
/** \brief DA4, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH8                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DA4u + PPCA_REMAP_OFFSET_0))
/** \brief DA5, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH9                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DA5u + PPCA_REMAP_OFFSET_0))
/** \brief DA6, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH10                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DA6u + PPCA_REMAP_OFFSET_0))
/** \brief DA7, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH11                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DA7u + PPCA_REMAP_OFFSET_0))
/** \brief DA8, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH12                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DA8u + PPCA_REMAP_OFFSET_0))
/** \brief DA9, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH13                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DA9u + PPCA_REMAP_OFFSET_0))
/** \brief DAA, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH14                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DAAu + PPCA_REMAP_OFFSET_0))
/** \brief DAB, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH15                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DABu + PPCA_REMAP_OFFSET_0))
/** \brief DAC, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH16                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DACu + PPCA_REMAP_OFFSET_0))
/** \brief DAD, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH17                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DADu + PPCA_REMAP_OFFSET_0))
/** \brief DAE, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH18                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DAEu + PPCA_REMAP_OFFSET_0))
/** \brief DAF, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH19                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DAFu + PPCA_REMAP_OFFSET_0))
/** \brief DB0, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH20                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DB0u + PPCA_REMAP_OFFSET_0))
/** \brief DB1, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH21                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DB1u + PPCA_REMAP_OFFSET_0))
/** \brief DB2, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH22                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DB2u + PPCA_REMAP_OFFSET_0))
/** \brief DB3, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH23                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DB3u + PPCA_REMAP_OFFSET_0))
/** \brief DB4, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH24                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DB4u + PPCA_REMAP_OFFSET_0))
/** \brief DB5, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH25                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DB5u + PPCA_REMAP_OFFSET_0))
/** \brief DB6, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH26                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DB6u + PPCA_REMAP_OFFSET_0))
/** \brief DB7, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH27                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DB7u + PPCA_REMAP_OFFSET_0))
/** \brief DB8, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH28                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DB8u + PPCA_REMAP_OFFSET_0))
/** \brief DB9, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH29                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DB9u + PPCA_REMAP_OFFSET_0))
/** \brief DBA, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH30                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DBAu + PPCA_REMAP_OFFSET_0))
/** \brief DBB, Truncated hash of assets in the SECURE_HASH_LIST */
#define REG_SFLASH_SECURE_HASH31                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_SECURE_HASH*)(0x03400DBBu + PPCA_REMAP_OFFSET_0))
/** \brief DBC, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH0                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DBCu + PPCA_REMAP_OFFSET_0))
/** \brief DBD, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH1                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DBDu + PPCA_REMAP_OFFSET_0))
/** \brief DBE, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH2                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DBEu + PPCA_REMAP_OFFSET_0))
/** \brief DBF, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH3                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DBFu + PPCA_REMAP_OFFSET_0))
/** \brief DC0, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH4                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DC0u + PPCA_REMAP_OFFSET_0))
/** \brief DC1, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH5                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DC1u + PPCA_REMAP_OFFSET_0))
/** \brief DC2, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH6                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DC2u + PPCA_REMAP_OFFSET_0))
/** \brief DC3, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH7                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DC3u + PPCA_REMAP_OFFSET_0))
/** \brief DC4, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH8                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DC4u + PPCA_REMAP_OFFSET_0))
/** \brief DC5, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH9                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DC5u + PPCA_REMAP_OFFSET_0))
/** \brief DC6, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH10               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DC6u + PPCA_REMAP_OFFSET_0))
/** \brief DC7, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH11               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DC7u + PPCA_REMAP_OFFSET_0))
/** \brief DC8, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH12               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DC8u + PPCA_REMAP_OFFSET_0))
/** \brief DC9, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH13               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DC9u + PPCA_REMAP_OFFSET_0))
/** \brief DCA, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH14               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DCAu + PPCA_REMAP_OFFSET_0))
/** \brief DCB, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH15               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DCBu + PPCA_REMAP_OFFSET_0))
/** \brief DCC, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH16               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DCCu + PPCA_REMAP_OFFSET_0))
/** \brief DCD, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH17               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DCDu + PPCA_REMAP_OFFSET_0))
/** \brief DCE, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH18               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DCEu + PPCA_REMAP_OFFSET_0))
/** \brief DCF, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH19               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DCFu + PPCA_REMAP_OFFSET_0))
/** \brief DD0, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH20               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DD0u + PPCA_REMAP_OFFSET_0))
/** \brief DD1, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH21               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DD1u + PPCA_REMAP_OFFSET_0))
/** \brief DD2, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH22               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DD2u + PPCA_REMAP_OFFSET_0))
/** \brief DD3, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH23               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DD3u + PPCA_REMAP_OFFSET_0))
/** \brief DD4, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH24               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DD4u + PPCA_REMAP_OFFSET_0))
/** \brief DD5, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH25               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DD5u + PPCA_REMAP_OFFSET_0))
/** \brief DD6, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH26               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DD6u + PPCA_REMAP_OFFSET_0))
/** \brief DD7, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH27               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DD7u + PPCA_REMAP_OFFSET_0))
/** \brief DD8, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH28               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DD8u + PPCA_REMAP_OFFSET_0))
/** \brief DD9, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH29               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DD9u + PPCA_REMAP_OFFSET_0))
/** \brief DDA, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH30               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DDAu + PPCA_REMAP_OFFSET_0))
/** \brief DDB, Truncated hash of assets in the PROT_FW_HASH_LIST */
#define REG_SFLASH_PROT_FW_HASH31               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_HASH*)(0x03400DDBu + PPCA_REMAP_OFFSET_0))
/** \brief E00, Tear safe counter for this flash row */
#define REG_SFLASH_COUNTER_FLASH_ROW7           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_COUNTER_FLASH_ROW7*)(0x03400E00u + PPCA_REMAP_OFFSET_0))
/** \brief E04, A debug policy, bits are the same as CPUSS.AP_CTL register
When PROT_FW is enabled, Secure debug cannot be updated by OEM policy.
PROT_FW is responsible for disabling the debug ports on the PPCA */
#define REG_SFLASH_ACCESS_RESTRICT              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ACCESS_RESTRICT*)(0x03400E04u + PPCA_REMAP_OFFSET_0))
/** \brief E08, Additional debug policies.  See _Regs tab for details */
#define REG_SFLASH_ACCESS_RESTRICT_2            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ACCESS_RESTRICT_2*)(0x03400E08u + PPCA_REMAP_OFFSET_0))
/** \brief E0C, 0xC39D_0001 - 100 ms.
0xC39D_0002 - 20 ms.
0xC39D_0003 - 2 ms.
0x151D_D9BB  (SEC_FALSE) - 0 ms listen window, the feature is disabled.
Other - invalid data.Other - invalid data. */
#define REG_SFLASH_LISTEN_WINDOW                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_LISTEN_WINDOW*)(0x03400E0Cu + PPCA_REMAP_OFFSET_0))
/** \brief E10, 0x9ADC8D08 (SIMPLE_APP)
0x4FBEEF63 (SECURE_APP)
0xECDB4B1F ( EPB )
0x39B92974 (DUAL_BANK_SIMPLE_APP)
0x77D56A80 (DUAL_BANK_SECURE_APP)
0x4A656DBD (PROT_FW)
0xA155E76E (BOOT_IDLE), no app is expected.
An internal state for a validation of MPC policy.
Other - Boot policy is invalid. */
#define REG_SFLASH_BOOT_CFG_ID                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_CFG_ID*)(0x03400E10u + PPCA_REMAP_OFFSET_0))
/** \brief E14, An offset from a start of a Flash bank (for flash dual-bank mode) to a 32-bit counter that indicates the valid bank.
Each flash bank must contain this counter. This counter is updated by DFU.
Flash bank is selected to be the lower address range (a start of flash address) if:
* It has a valid counter.
* Its counter value is bigger than for the other flash-bank, if both counters are valid.

For each dual-bank counter, bits [31:16] should be a fixed value (0x5A3C), otherwise counter is invalid. */
#define REG_SFLASH_BOOT_BANK_CTR_OFFSET         /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_BANK_CTR_OFFSET*)(0x03400E14u + PPCA_REMAP_OFFSET_0))
/** \brief E18, 0xC39D_5455 - Enable hash locking
0x151D_D9BB - Disable hash locking . */
#define REG_SFLASH_BOOT_HASH_LOCKING            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_HASH_LOCKING*)(0x03400E18u + PPCA_REMAP_OFFSET_0))
/** \brief E1C, What will be authenticated, or moved from a Shared Secondary Slot after a DFU update.

0x16FF363E (BOOT_AUTH_ALL_MOVE) - Authenticate all images, move from a shared secondary slot on a successful DFU update.
0xEAE22644 (BOOT_AUTH_ALL) - Authenticate all images.
0xFE2D5368 (BOOT_AUTH_ONE) - Authenticate the first image, ignore the other images.
0x71EC07DB (BOOT_AUTH_NONE) - Disable all authentications for LCS=NORMAL_P when ASSET_HASH is not computed. In other cases an invalid combination.
Other - invalid. */
#define REG_SFLASH_BOOT_AUTH                    /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_AUTH*)(0x03400E1Cu + PPCA_REMAP_OFFSET_0))
/** \brief E20, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
#define REG_SFLASH_BOOT_APP_LAYOUT0             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_APP_LAYOUT*)(0x03400E20u + PPCA_REMAP_OFFSET_0))
/** \brief E24, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
#define REG_SFLASH_BOOT_APP_LAYOUT1             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_APP_LAYOUT*)(0x03400E24u + PPCA_REMAP_OFFSET_0))
/** \brief E28, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
#define REG_SFLASH_BOOT_APP_LAYOUT2             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_APP_LAYOUT*)(0x03400E28u + PPCA_REMAP_OFFSET_0))
/** \brief E2C, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
#define REG_SFLASH_BOOT_APP_LAYOUT3             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_APP_LAYOUT*)(0x03400E2Cu + PPCA_REMAP_OFFSET_0))
/** \brief E30, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
#define REG_SFLASH_BOOT_APP_LAYOUT4             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_APP_LAYOUT*)(0x03400E30u + PPCA_REMAP_OFFSET_0))
/** \brief E34, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
#define REG_SFLASH_BOOT_APP_LAYOUT5             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_APP_LAYOUT*)(0x03400E34u + PPCA_REMAP_OFFSET_0))
/** \brief E38, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
#define REG_SFLASH_BOOT_APP_LAYOUT6             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_APP_LAYOUT*)(0x03400E38u + PPCA_REMAP_OFFSET_0))
/** \brief E3C, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
#define REG_SFLASH_BOOT_APP_LAYOUT7             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_APP_LAYOUT*)(0x03400E3Cu + PPCA_REMAP_OFFSET_0))
/** \brief E40, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
#define REG_SFLASH_BOOT_APP_LAYOUT8             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_APP_LAYOUT*)(0x03400E40u + PPCA_REMAP_OFFSET_0))
/** \brief E44, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
#define REG_SFLASH_BOOT_APP_LAYOUT9             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOOT_APP_LAYOUT*)(0x03400E44u + PPCA_REMAP_OFFSET_0))
/** \brief E49, 4-bit Bitfield - Bits 0-1 are unused, Bits 2-3 control PC2-3 handlers

1 = PCx can only be entered via PCx interrupt handler (Sets CM33_PC_CTL.VALID[bit x] = 1)

0 = PCx is not 'special'.  PC may be switched to this value without CM33_PCx_HANDLER interrupt vector

When Protected FW is active, bit 2 cannot be set from OEM policy */
#define REG_SFLASH_PC_CTL_VALID                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PC_CTL_VALID*)(0x03400E49u + PPCA_REMAP_OFFSET_0))
/** \brief E4A, Number of 2K blocks to protect at PC0 for OEM_DEVICE_CERT */
#define REG_SFLASH_OEM_DEVICE_CERT_BLOCKS       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_DEVICE_CERT_BLOCKS*)(0x03400E4Au + PPCA_REMAP_OFFSET_0))
/** \brief E4C, PC2_HANDLER is used to switch to PC2 when it is a 'Special' PC */
#define REG_SFLASH_PC2_HANDLER                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PC2_HANDLER*)(0x03400E4Cu + PPCA_REMAP_OFFSET_0))
/** \brief E50, PC3_HANDLER is used to switch to PC3 when it is a 'Special' PC */
#define REG_SFLASH_PC3_HANDLER                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PC3_HANDLER*)(0x03400E50u + PPCA_REMAP_OFFSET_0))
/** \brief E54, DFU policy */
#define REG_SFLASH_DFU_POLICY                   /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_DFU_POLICY*)(0x03400E54u + PPCA_REMAP_OFFSET_0))
/** \brief E58, Pointer to OEM device certificate in user flash -- Protected for PC=0 access only */
#define REG_SFLASH_OEM_DEVICE_CERT_ADDR         /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_DEVICE_CERT_ADDR*)(0x03400E58u + PPCA_REMAP_OFFSET_0))
/** \brief E5C, Boundary Scan policy:
-	0x151DD9BB (default), Boundary scan is disabled.
-	0xC39D5455, Boundary scan is enabled. */
#define REG_SFLASH_BOUNDARY_SCAN_EN             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_BOUNDARY_SCAN_EN*)(0x03400E5Cu + PPCA_REMAP_OFFSET_0))
/** \brief E60, Reserved for OEM_POLICY expansion */
#define REG_SFLASH_OEM_POLICY_RESERVED0         /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_POLICY_RESERVED*)(0x03400E60u + PPCA_REMAP_OFFSET_0))
/** \brief E64, Reserved for OEM_POLICY expansion */
#define REG_SFLASH_OEM_POLICY_RESERVED1         /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_POLICY_RESERVED*)(0x03400E64u + PPCA_REMAP_OFFSET_0))
/** \brief E68, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_00               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E68u + PPCA_REMAP_OFFSET_0))
/** \brief E69, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_01               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E69u + PPCA_REMAP_OFFSET_0))
/** \brief E6A, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_02               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E6Au + PPCA_REMAP_OFFSET_0))
/** \brief E6B, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_03               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E6Bu + PPCA_REMAP_OFFSET_0))
/** \brief E6C, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_04               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E6Cu + PPCA_REMAP_OFFSET_0))
/** \brief E6D, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_05               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E6Du + PPCA_REMAP_OFFSET_0))
/** \brief E6E, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_06               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E6Eu + PPCA_REMAP_OFFSET_0))
/** \brief E6F, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_07               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E6Fu + PPCA_REMAP_OFFSET_0))
/** \brief E70, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_08               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E70u + PPCA_REMAP_OFFSET_0))
/** \brief E71, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_09               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E71u + PPCA_REMAP_OFFSET_0))
/** \brief E72, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_010              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E72u + PPCA_REMAP_OFFSET_0))
/** \brief E73, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_011              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E73u + PPCA_REMAP_OFFSET_0))
/** \brief E74, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_012              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E74u + PPCA_REMAP_OFFSET_0))
/** \brief E75, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_013              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E75u + PPCA_REMAP_OFFSET_0))
/** \brief E76, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_014              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E76u + PPCA_REMAP_OFFSET_0))
/** \brief E77, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_015              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E77u + PPCA_REMAP_OFFSET_0))
/** \brief E78, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_016              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E78u + PPCA_REMAP_OFFSET_0))
/** \brief E79, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_017              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E79u + PPCA_REMAP_OFFSET_0))
/** \brief E7A, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_018              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E7Au + PPCA_REMAP_OFFSET_0))
/** \brief E7B, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_019              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E7Bu + PPCA_REMAP_OFFSET_0))
/** \brief E7C, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_020              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E7Cu + PPCA_REMAP_OFFSET_0))
/** \brief E7D, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_021              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E7Du + PPCA_REMAP_OFFSET_0))
/** \brief E7E, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_022              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E7Eu + PPCA_REMAP_OFFSET_0))
/** \brief E7F, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_023              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E7Fu + PPCA_REMAP_OFFSET_0))
/** \brief E80, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_024              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E80u + PPCA_REMAP_OFFSET_0))
/** \brief E81, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_025              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E81u + PPCA_REMAP_OFFSET_0))
/** \brief E82, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_026              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E82u + PPCA_REMAP_OFFSET_0))
/** \brief E83, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_027              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E83u + PPCA_REMAP_OFFSET_0))
/** \brief E84, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_028              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E84u + PPCA_REMAP_OFFSET_0))
/** \brief E85, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_029              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E85u + PPCA_REMAP_OFFSET_0))
/** \brief E86, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_030              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E86u + PPCA_REMAP_OFFSET_0))
/** \brief E87, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_031              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E87u + PPCA_REMAP_OFFSET_0))
/** \brief E88, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_032              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E88u + PPCA_REMAP_OFFSET_0))
/** \brief E89, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_033              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E89u + PPCA_REMAP_OFFSET_0))
/** \brief E8A, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_034              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E8Au + PPCA_REMAP_OFFSET_0))
/** \brief E8B, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_035              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E8Bu + PPCA_REMAP_OFFSET_0))
/** \brief E8C, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_036              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E8Cu + PPCA_REMAP_OFFSET_0))
/** \brief E8D, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_037              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E8Du + PPCA_REMAP_OFFSET_0))
/** \brief E8E, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_038              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E8Eu + PPCA_REMAP_OFFSET_0))
/** \brief E8F, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_039              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E8Fu + PPCA_REMAP_OFFSET_0))
/** \brief E90, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_040              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E90u + PPCA_REMAP_OFFSET_0))
/** \brief E91, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_041              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E91u + PPCA_REMAP_OFFSET_0))
/** \brief E92, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_042              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E92u + PPCA_REMAP_OFFSET_0))
/** \brief E93, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_043              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E93u + PPCA_REMAP_OFFSET_0))
/** \brief E94, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_044              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E94u + PPCA_REMAP_OFFSET_0))
/** \brief E95, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_045              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E95u + PPCA_REMAP_OFFSET_0))
/** \brief E96, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_046              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E96u + PPCA_REMAP_OFFSET_0))
/** \brief E97, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_047              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E97u + PPCA_REMAP_OFFSET_0))
/** \brief E98, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_048              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E98u + PPCA_REMAP_OFFSET_0))
/** \brief E99, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_049              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E99u + PPCA_REMAP_OFFSET_0))
/** \brief E9A, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_050              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E9Au + PPCA_REMAP_OFFSET_0))
/** \brief E9B, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_051              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E9Bu + PPCA_REMAP_OFFSET_0))
/** \brief E9C, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_052              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E9Cu + PPCA_REMAP_OFFSET_0))
/** \brief E9D, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_053              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E9Du + PPCA_REMAP_OFFSET_0))
/** \brief E9E, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_054              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E9Eu + PPCA_REMAP_OFFSET_0))
/** \brief E9F, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_055              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400E9Fu + PPCA_REMAP_OFFSET_0))
/** \brief EA0, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_056              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EA0u + PPCA_REMAP_OFFSET_0))
/** \brief EA1, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_057              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EA1u + PPCA_REMAP_OFFSET_0))
/** \brief EA2, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_058              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EA2u + PPCA_REMAP_OFFSET_0))
/** \brief EA3, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_059              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EA3u + PPCA_REMAP_OFFSET_0))
/** \brief EA4, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_060              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EA4u + PPCA_REMAP_OFFSET_0))
/** \brief EA5, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_061              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EA5u + PPCA_REMAP_OFFSET_0))
/** \brief EA6, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_062              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EA6u + PPCA_REMAP_OFFSET_0))
/** \brief EA7, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_063              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EA7u + PPCA_REMAP_OFFSET_0))
/** \brief EA8, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_064              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EA8u + PPCA_REMAP_OFFSET_0))
/** \brief EA9, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_065              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EA9u + PPCA_REMAP_OFFSET_0))
/** \brief EAA, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_066              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EAAu + PPCA_REMAP_OFFSET_0))
/** \brief EAB, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_067              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EABu + PPCA_REMAP_OFFSET_0))
/** \brief EAC, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_068              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EACu + PPCA_REMAP_OFFSET_0))
/** \brief EAD, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_069              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EADu + PPCA_REMAP_OFFSET_0))
/** \brief EAE, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_070              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EAEu + PPCA_REMAP_OFFSET_0))
/** \brief EAF, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_071              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EAFu + PPCA_REMAP_OFFSET_0))
/** \brief EB0, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_072              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EB0u + PPCA_REMAP_OFFSET_0))
/** \brief EB1, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_073              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EB1u + PPCA_REMAP_OFFSET_0))
/** \brief EB2, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_074              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EB2u + PPCA_REMAP_OFFSET_0))
/** \brief EB3, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_075              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EB3u + PPCA_REMAP_OFFSET_0))
/** \brief EB4, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_076              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EB4u + PPCA_REMAP_OFFSET_0))
/** \brief EB5, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_077              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EB5u + PPCA_REMAP_OFFSET_0))
/** \brief EB6, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_078              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EB6u + PPCA_REMAP_OFFSET_0))
/** \brief EB7, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_079              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EB7u + PPCA_REMAP_OFFSET_0))
/** \brief EB8, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_080              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EB8u + PPCA_REMAP_OFFSET_0))
/** \brief EB9, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_081              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EB9u + PPCA_REMAP_OFFSET_0))
/** \brief EBA, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_082              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EBAu + PPCA_REMAP_OFFSET_0))
/** \brief EBB, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_083              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EBBu + PPCA_REMAP_OFFSET_0))
/** \brief EBC, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_084              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EBCu + PPCA_REMAP_OFFSET_0))
/** \brief EBD, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_085              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EBDu + PPCA_REMAP_OFFSET_0))
/** \brief EBE, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_086              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EBEu + PPCA_REMAP_OFFSET_0))
/** \brief EBF, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_087              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EBFu + PPCA_REMAP_OFFSET_0))
/** \brief EC0, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_088              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EC0u + PPCA_REMAP_OFFSET_0))
/** \brief EC1, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_089              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EC1u + PPCA_REMAP_OFFSET_0))
/** \brief EC2, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_090              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EC2u + PPCA_REMAP_OFFSET_0))
/** \brief EC3, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_091              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EC3u + PPCA_REMAP_OFFSET_0))
/** \brief EC4, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_092              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EC4u + PPCA_REMAP_OFFSET_0))
/** \brief EC5, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_093              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EC5u + PPCA_REMAP_OFFSET_0))
/** \brief EC6, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_094              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EC6u + PPCA_REMAP_OFFSET_0))
/** \brief EC7, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_095              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EC7u + PPCA_REMAP_OFFSET_0))
/** \brief EC8, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_096              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EC8u + PPCA_REMAP_OFFSET_0))
/** \brief EC9, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_097              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EC9u + PPCA_REMAP_OFFSET_0))
/** \brief ECA, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_098              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ECAu + PPCA_REMAP_OFFSET_0))
/** \brief ECB, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_099              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ECBu + PPCA_REMAP_OFFSET_0))
/** \brief ECC, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0100             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ECCu + PPCA_REMAP_OFFSET_0))
/** \brief ECD, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0101             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ECDu + PPCA_REMAP_OFFSET_0))
/** \brief ECE, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0102             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ECEu + PPCA_REMAP_OFFSET_0))
/** \brief ECF, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0103             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ECFu + PPCA_REMAP_OFFSET_0))
/** \brief ED0, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0104             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ED0u + PPCA_REMAP_OFFSET_0))
/** \brief ED1, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0105             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ED1u + PPCA_REMAP_OFFSET_0))
/** \brief ED2, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0106             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ED2u + PPCA_REMAP_OFFSET_0))
/** \brief ED3, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0107             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ED3u + PPCA_REMAP_OFFSET_0))
/** \brief ED4, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0108             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ED4u + PPCA_REMAP_OFFSET_0))
/** \brief ED5, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0109             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ED5u + PPCA_REMAP_OFFSET_0))
/** \brief ED6, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0110             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ED6u + PPCA_REMAP_OFFSET_0))
/** \brief ED7, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0111             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ED7u + PPCA_REMAP_OFFSET_0))
/** \brief ED8, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0112             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ED8u + PPCA_REMAP_OFFSET_0))
/** \brief ED9, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0113             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400ED9u + PPCA_REMAP_OFFSET_0))
/** \brief EDA, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0114             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EDAu + PPCA_REMAP_OFFSET_0))
/** \brief EDB, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0115             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EDBu + PPCA_REMAP_OFFSET_0))
/** \brief EDC, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0116             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EDCu + PPCA_REMAP_OFFSET_0))
/** \brief EDD, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0117             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EDDu + PPCA_REMAP_OFFSET_0))
/** \brief EDE, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0118             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EDEu + PPCA_REMAP_OFFSET_0))
/** \brief EDF, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0119             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EDFu + PPCA_REMAP_OFFSET_0))
/** \brief EE0, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0120             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EE0u + PPCA_REMAP_OFFSET_0))
/** \brief EE1, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0121             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EE1u + PPCA_REMAP_OFFSET_0))
/** \brief EE2, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0122             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EE2u + PPCA_REMAP_OFFSET_0))
/** \brief EE3, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0123             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EE3u + PPCA_REMAP_OFFSET_0))
/** \brief EE4, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0124             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EE4u + PPCA_REMAP_OFFSET_0))
/** \brief EE5, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0125             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EE5u + PPCA_REMAP_OFFSET_0))
/** \brief EE6, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0126             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EE6u + PPCA_REMAP_OFFSET_0))
/** \brief EE7, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0127             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EE7u + PPCA_REMAP_OFFSET_0))
/** \brief EE8, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0128             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EE8u + PPCA_REMAP_OFFSET_0))
/** \brief EE9, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0129             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EE9u + PPCA_REMAP_OFFSET_0))
/** \brief EEA, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0130             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EEAu + PPCA_REMAP_OFFSET_0))
/** \brief EEB, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0131             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EEBu + PPCA_REMAP_OFFSET_0))
/** \brief EEC, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0132             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EECu + PPCA_REMAP_OFFSET_0))
/** \brief EED, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0133             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EEDu + PPCA_REMAP_OFFSET_0))
/** \brief EEE, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0134             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EEEu + PPCA_REMAP_OFFSET_0))
/** \brief EEF, Primary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_0135             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_0*)(0x03400EEFu + PPCA_REMAP_OFFSET_0))
/** \brief EF0, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_10               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EF0u + PPCA_REMAP_OFFSET_0))
/** \brief EF1, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_11               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EF1u + PPCA_REMAP_OFFSET_0))
/** \brief EF2, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_12               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EF2u + PPCA_REMAP_OFFSET_0))
/** \brief EF3, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_13               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EF3u + PPCA_REMAP_OFFSET_0))
/** \brief EF4, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_14               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EF4u + PPCA_REMAP_OFFSET_0))
/** \brief EF5, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_15               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EF5u + PPCA_REMAP_OFFSET_0))
/** \brief EF6, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_16               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EF6u + PPCA_REMAP_OFFSET_0))
/** \brief EF7, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_17               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EF7u + PPCA_REMAP_OFFSET_0))
/** \brief EF8, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_18               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EF8u + PPCA_REMAP_OFFSET_0))
/** \brief EF9, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_19               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EF9u + PPCA_REMAP_OFFSET_0))
/** \brief EFA, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_110              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EFAu + PPCA_REMAP_OFFSET_0))
/** \brief EFB, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_111              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EFBu + PPCA_REMAP_OFFSET_0))
/** \brief EFC, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_112              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EFCu + PPCA_REMAP_OFFSET_0))
/** \brief EFD, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_113              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EFDu + PPCA_REMAP_OFFSET_0))
/** \brief EFE, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_114              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EFEu + PPCA_REMAP_OFFSET_0))
/** \brief EFF, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_115              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400EFFu + PPCA_REMAP_OFFSET_0))
/** \brief F00, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_116              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F00u + PPCA_REMAP_OFFSET_0))
/** \brief F01, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_117              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F01u + PPCA_REMAP_OFFSET_0))
/** \brief F02, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_118              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F02u + PPCA_REMAP_OFFSET_0))
/** \brief F03, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_119              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F03u + PPCA_REMAP_OFFSET_0))
/** \brief F04, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_120              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F04u + PPCA_REMAP_OFFSET_0))
/** \brief F05, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_121              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F05u + PPCA_REMAP_OFFSET_0))
/** \brief F06, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_122              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F06u + PPCA_REMAP_OFFSET_0))
/** \brief F07, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_123              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F07u + PPCA_REMAP_OFFSET_0))
/** \brief F08, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_124              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F08u + PPCA_REMAP_OFFSET_0))
/** \brief F09, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_125              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F09u + PPCA_REMAP_OFFSET_0))
/** \brief F0A, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_126              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F0Au + PPCA_REMAP_OFFSET_0))
/** \brief F0B, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_127              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F0Bu + PPCA_REMAP_OFFSET_0))
/** \brief F0C, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_128              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F0Cu + PPCA_REMAP_OFFSET_0))
/** \brief F0D, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_129              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F0Du + PPCA_REMAP_OFFSET_0))
/** \brief F0E, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_130              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F0Eu + PPCA_REMAP_OFFSET_0))
/** \brief F0F, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_131              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F0Fu + PPCA_REMAP_OFFSET_0))
/** \brief F10, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_132              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F10u + PPCA_REMAP_OFFSET_0))
/** \brief F11, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_133              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F11u + PPCA_REMAP_OFFSET_0))
/** \brief F12, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_134              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F12u + PPCA_REMAP_OFFSET_0))
/** \brief F13, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_135              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F13u + PPCA_REMAP_OFFSET_0))
/** \brief F14, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_136              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F14u + PPCA_REMAP_OFFSET_0))
/** \brief F15, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_137              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F15u + PPCA_REMAP_OFFSET_0))
/** \brief F16, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_138              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F16u + PPCA_REMAP_OFFSET_0))
/** \brief F17, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_139              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F17u + PPCA_REMAP_OFFSET_0))
/** \brief F18, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_140              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F18u + PPCA_REMAP_OFFSET_0))
/** \brief F19, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_141              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F19u + PPCA_REMAP_OFFSET_0))
/** \brief F1A, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_142              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F1Au + PPCA_REMAP_OFFSET_0))
/** \brief F1B, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_143              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F1Bu + PPCA_REMAP_OFFSET_0))
/** \brief F1C, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_144              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F1Cu + PPCA_REMAP_OFFSET_0))
/** \brief F1D, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_145              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F1Du + PPCA_REMAP_OFFSET_0))
/** \brief F1E, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_146              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F1Eu + PPCA_REMAP_OFFSET_0))
/** \brief F1F, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_147              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F1Fu + PPCA_REMAP_OFFSET_0))
/** \brief F20, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_148              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F20u + PPCA_REMAP_OFFSET_0))
/** \brief F21, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_149              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F21u + PPCA_REMAP_OFFSET_0))
/** \brief F22, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_150              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F22u + PPCA_REMAP_OFFSET_0))
/** \brief F23, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_151              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F23u + PPCA_REMAP_OFFSET_0))
/** \brief F24, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_152              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F24u + PPCA_REMAP_OFFSET_0))
/** \brief F25, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_153              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F25u + PPCA_REMAP_OFFSET_0))
/** \brief F26, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_154              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F26u + PPCA_REMAP_OFFSET_0))
/** \brief F27, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_155              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F27u + PPCA_REMAP_OFFSET_0))
/** \brief F28, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_156              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F28u + PPCA_REMAP_OFFSET_0))
/** \brief F29, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_157              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F29u + PPCA_REMAP_OFFSET_0))
/** \brief F2A, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_158              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F2Au + PPCA_REMAP_OFFSET_0))
/** \brief F2B, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_159              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F2Bu + PPCA_REMAP_OFFSET_0))
/** \brief F2C, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_160              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F2Cu + PPCA_REMAP_OFFSET_0))
/** \brief F2D, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_161              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F2Du + PPCA_REMAP_OFFSET_0))
/** \brief F2E, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_162              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F2Eu + PPCA_REMAP_OFFSET_0))
/** \brief F2F, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_163              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F2Fu + PPCA_REMAP_OFFSET_0))
/** \brief F30, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_164              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F30u + PPCA_REMAP_OFFSET_0))
/** \brief F31, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_165              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F31u + PPCA_REMAP_OFFSET_0))
/** \brief F32, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_166              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F32u + PPCA_REMAP_OFFSET_0))
/** \brief F33, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_167              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F33u + PPCA_REMAP_OFFSET_0))
/** \brief F34, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_168              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F34u + PPCA_REMAP_OFFSET_0))
/** \brief F35, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_169              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F35u + PPCA_REMAP_OFFSET_0))
/** \brief F36, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_170              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F36u + PPCA_REMAP_OFFSET_0))
/** \brief F37, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_171              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F37u + PPCA_REMAP_OFFSET_0))
/** \brief F38, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_172              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F38u + PPCA_REMAP_OFFSET_0))
/** \brief F39, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_173              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F39u + PPCA_REMAP_OFFSET_0))
/** \brief F3A, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_174              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F3Au + PPCA_REMAP_OFFSET_0))
/** \brief F3B, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_175              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F3Bu + PPCA_REMAP_OFFSET_0))
/** \brief F3C, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_176              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F3Cu + PPCA_REMAP_OFFSET_0))
/** \brief F3D, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_177              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F3Du + PPCA_REMAP_OFFSET_0))
/** \brief F3E, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_178              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F3Eu + PPCA_REMAP_OFFSET_0))
/** \brief F3F, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_179              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F3Fu + PPCA_REMAP_OFFSET_0))
/** \brief F40, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_180              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F40u + PPCA_REMAP_OFFSET_0))
/** \brief F41, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_181              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F41u + PPCA_REMAP_OFFSET_0))
/** \brief F42, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_182              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F42u + PPCA_REMAP_OFFSET_0))
/** \brief F43, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_183              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F43u + PPCA_REMAP_OFFSET_0))
/** \brief F44, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_184              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F44u + PPCA_REMAP_OFFSET_0))
/** \brief F45, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_185              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F45u + PPCA_REMAP_OFFSET_0))
/** \brief F46, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_186              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F46u + PPCA_REMAP_OFFSET_0))
/** \brief F47, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_187              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F47u + PPCA_REMAP_OFFSET_0))
/** \brief F48, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_188              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F48u + PPCA_REMAP_OFFSET_0))
/** \brief F49, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_189              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F49u + PPCA_REMAP_OFFSET_0))
/** \brief F4A, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_190              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F4Au + PPCA_REMAP_OFFSET_0))
/** \brief F4B, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_191              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F4Bu + PPCA_REMAP_OFFSET_0))
/** \brief F4C, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_192              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F4Cu + PPCA_REMAP_OFFSET_0))
/** \brief F4D, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_193              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F4Du + PPCA_REMAP_OFFSET_0))
/** \brief F4E, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_194              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F4Eu + PPCA_REMAP_OFFSET_0))
/** \brief F4F, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_195              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F4Fu + PPCA_REMAP_OFFSET_0))
/** \brief F50, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_196              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F50u + PPCA_REMAP_OFFSET_0))
/** \brief F51, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_197              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F51u + PPCA_REMAP_OFFSET_0))
/** \brief F52, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_198              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F52u + PPCA_REMAP_OFFSET_0))
/** \brief F53, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_199              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F53u + PPCA_REMAP_OFFSET_0))
/** \brief F54, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1100             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F54u + PPCA_REMAP_OFFSET_0))
/** \brief F55, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1101             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F55u + PPCA_REMAP_OFFSET_0))
/** \brief F56, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1102             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F56u + PPCA_REMAP_OFFSET_0))
/** \brief F57, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1103             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F57u + PPCA_REMAP_OFFSET_0))
/** \brief F58, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1104             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F58u + PPCA_REMAP_OFFSET_0))
/** \brief F59, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1105             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F59u + PPCA_REMAP_OFFSET_0))
/** \brief F5A, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1106             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F5Au + PPCA_REMAP_OFFSET_0))
/** \brief F5B, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1107             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F5Bu + PPCA_REMAP_OFFSET_0))
/** \brief F5C, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1108             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F5Cu + PPCA_REMAP_OFFSET_0))
/** \brief F5D, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1109             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F5Du + PPCA_REMAP_OFFSET_0))
/** \brief F5E, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1110             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F5Eu + PPCA_REMAP_OFFSET_0))
/** \brief F5F, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1111             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F5Fu + PPCA_REMAP_OFFSET_0))
/** \brief F60, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1112             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F60u + PPCA_REMAP_OFFSET_0))
/** \brief F61, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1113             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F61u + PPCA_REMAP_OFFSET_0))
/** \brief F62, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1114             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F62u + PPCA_REMAP_OFFSET_0))
/** \brief F63, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1115             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F63u + PPCA_REMAP_OFFSET_0))
/** \brief F64, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1116             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F64u + PPCA_REMAP_OFFSET_0))
/** \brief F65, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1117             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F65u + PPCA_REMAP_OFFSET_0))
/** \brief F66, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1118             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F66u + PPCA_REMAP_OFFSET_0))
/** \brief F67, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1119             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F67u + PPCA_REMAP_OFFSET_0))
/** \brief F68, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1120             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F68u + PPCA_REMAP_OFFSET_0))
/** \brief F69, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1121             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F69u + PPCA_REMAP_OFFSET_0))
/** \brief F6A, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1122             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F6Au + PPCA_REMAP_OFFSET_0))
/** \brief F6B, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1123             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F6Bu + PPCA_REMAP_OFFSET_0))
/** \brief F6C, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1124             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F6Cu + PPCA_REMAP_OFFSET_0))
/** \brief F6D, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1125             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F6Du + PPCA_REMAP_OFFSET_0))
/** \brief F6E, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1126             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F6Eu + PPCA_REMAP_OFFSET_0))
/** \brief F6F, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1127             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F6Fu + PPCA_REMAP_OFFSET_0))
/** \brief F70, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1128             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F70u + PPCA_REMAP_OFFSET_0))
/** \brief F71, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1129             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F71u + PPCA_REMAP_OFFSET_0))
/** \brief F72, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1130             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F72u + PPCA_REMAP_OFFSET_0))
/** \brief F73, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1131             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F73u + PPCA_REMAP_OFFSET_0))
/** \brief F74, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1132             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F74u + PPCA_REMAP_OFFSET_0))
/** \brief F75, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1133             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F75u + PPCA_REMAP_OFFSET_0))
/** \brief F76, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1134             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F76u + PPCA_REMAP_OFFSET_0))
/** \brief F77, Secondary OEM_ROT_KEY */
#define REG_SFLASH_OEM_ROT_KEY_1135             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_OEM_ROT_KEY_1*)(0x03400F77u + PPCA_REMAP_OFFSET_0))
/** \brief 1000, Tear safe counter for this flash row */
#define REG_SFLASH_COUNTER_FLASH_ROW8           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_COUNTER_FLASH_ROW8*)(0x03401000u + PPCA_REMAP_OFFSET_0))
/** \brief 1004, Unused */
#define REG_SFLASH_UNUSED_2                     /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_UNUSED_2*)(0x03401004u + PPCA_REMAP_OFFSET_0))
/** \brief 1005, Number of flash MPC structs in the following table */
#define REG_SFLASH_N_FLASH_MPC                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_N_FLASH_MPC*)(0x03401005u + PPCA_REMAP_OFFSET_0))
/** \brief 1008, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT0                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401008u + PPCA_REMAP_OFFSET_0))
/** \brief 100C, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT1                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x0340100Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1010, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT2                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401010u + PPCA_REMAP_OFFSET_0))
/** \brief 1014, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT3                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401014u + PPCA_REMAP_OFFSET_0))
/** \brief 1018, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT4                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401018u + PPCA_REMAP_OFFSET_0))
/** \brief 101C, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT5                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x0340101Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1020, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT6                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401020u + PPCA_REMAP_OFFSET_0))
/** \brief 1024, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT7                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401024u + PPCA_REMAP_OFFSET_0))
/** \brief 1028, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT8                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401028u + PPCA_REMAP_OFFSET_0))
/** \brief 102C, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT9                  /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x0340102Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1030, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT10                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401030u + PPCA_REMAP_OFFSET_0))
/** \brief 1034, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT11                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401034u + PPCA_REMAP_OFFSET_0))
/** \brief 1038, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT12                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401038u + PPCA_REMAP_OFFSET_0))
/** \brief 103C, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT13                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x0340103Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1040, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT14                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401040u + PPCA_REMAP_OFFSET_0))
/** \brief 1044, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT15                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401044u + PPCA_REMAP_OFFSET_0))
/** \brief 1048, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT16                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401048u + PPCA_REMAP_OFFSET_0))
/** \brief 104C, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT17                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x0340104Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1050, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT18                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401050u + PPCA_REMAP_OFFSET_0))
/** \brief 1054, RAM MPC structs followed by Flash MPC structs */
#define REG_SFLASH_MPC_STRUCT19                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_MPC_STRUCT*)(0x03401054u + PPCA_REMAP_OFFSET_0))
/** \brief 1168, Start address of protected FW - Used to set MPC policy */
#define REG_SFLASH_PROT_FW_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_ADDR*)(0x03401168u + PPCA_REMAP_OFFSET_0))
/** \brief 116C, Size of protected FW */
#define REG_SFLASH_PROT_FW_SIZE                 /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_SIZE*)(0x0340116Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1170, Start of protected FW RW area in flash - Used to set MPC policy */
#define REG_SFLASH_PROT_FW_RW_ADDR              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_RW_ADDR*)(0x03401170u + PPCA_REMAP_OFFSET_0))
/** \brief 1174, Size of protected FW RW area in flash */
#define REG_SFLASH_PROT_FW_RW_SIZE              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_RW_SIZE*)(0x03401174u + PPCA_REMAP_OFFSET_0))
/** \brief 1178, Start of protected FW RAM - Used to set MPC policy */
#define REG_SFLASH_PROT_FW_RAM_ADDR             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_RAM_ADDR*)(0x03401178u + PPCA_REMAP_OFFSET_0))
/** \brief 117C, Size of protected FW RAM */
#define REG_SFLASH_PROT_FW_RAM_SIZE             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_RAM_SIZE*)(0x0340117Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1180, 0xC39D_5455 (SEC_TRUE), the assets are finalized in SFLASH, no further update is allowed.
0x151D_D9BB (SEC_FALSE), cyapp_prot_fw_policy may be called multiple times to rewrite the PROT_FW assets in SFLASH.
Other, the same as SEC_TRUE. */
#define REG_SFLASH_PROT_FW_COMPLETE             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_PROT_FW_COMPLETE*)(0x03401180u + PPCA_REMAP_OFFSET_0))
/** \brief 1200, Tear safe counter for this flash row */
#define REG_SFLASH_COUNTER_FLASH_ROW9           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_COUNTER_FLASH_ROW9*)(0x03401200u + PPCA_REMAP_OFFSET_0))
/** \brief 1424, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_00               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401424u + PPCA_REMAP_OFFSET_0))
/** \brief 1425, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_01               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401425u + PPCA_REMAP_OFFSET_0))
/** \brief 1426, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_02               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401426u + PPCA_REMAP_OFFSET_0))
/** \brief 1427, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_03               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401427u + PPCA_REMAP_OFFSET_0))
/** \brief 1428, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_04               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401428u + PPCA_REMAP_OFFSET_0))
/** \brief 1429, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_05               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401429u + PPCA_REMAP_OFFSET_0))
/** \brief 142A, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_06               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340142Au + PPCA_REMAP_OFFSET_0))
/** \brief 142B, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_07               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340142Bu + PPCA_REMAP_OFFSET_0))
/** \brief 142C, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_08               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340142Cu + PPCA_REMAP_OFFSET_0))
/** \brief 142D, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_09               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340142Du + PPCA_REMAP_OFFSET_0))
/** \brief 142E, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_010              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340142Eu + PPCA_REMAP_OFFSET_0))
/** \brief 142F, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_011              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340142Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1430, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_012              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401430u + PPCA_REMAP_OFFSET_0))
/** \brief 1431, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_013              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401431u + PPCA_REMAP_OFFSET_0))
/** \brief 1432, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_014              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401432u + PPCA_REMAP_OFFSET_0))
/** \brief 1433, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_015              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401433u + PPCA_REMAP_OFFSET_0))
/** \brief 1434, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_016              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401434u + PPCA_REMAP_OFFSET_0))
/** \brief 1435, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_017              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401435u + PPCA_REMAP_OFFSET_0))
/** \brief 1436, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_018              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401436u + PPCA_REMAP_OFFSET_0))
/** \brief 1437, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_019              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401437u + PPCA_REMAP_OFFSET_0))
/** \brief 1438, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_020              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401438u + PPCA_REMAP_OFFSET_0))
/** \brief 1439, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_021              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401439u + PPCA_REMAP_OFFSET_0))
/** \brief 143A, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_022              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340143Au + PPCA_REMAP_OFFSET_0))
/** \brief 143B, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_023              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340143Bu + PPCA_REMAP_OFFSET_0))
/** \brief 143C, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_024              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340143Cu + PPCA_REMAP_OFFSET_0))
/** \brief 143D, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_025              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340143Du + PPCA_REMAP_OFFSET_0))
/** \brief 143E, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_026              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340143Eu + PPCA_REMAP_OFFSET_0))
/** \brief 143F, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_027              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340143Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1440, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_028              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401440u + PPCA_REMAP_OFFSET_0))
/** \brief 1441, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_029              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401441u + PPCA_REMAP_OFFSET_0))
/** \brief 1442, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_030              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401442u + PPCA_REMAP_OFFSET_0))
/** \brief 1443, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_031              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401443u + PPCA_REMAP_OFFSET_0))
/** \brief 1444, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_032              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401444u + PPCA_REMAP_OFFSET_0))
/** \brief 1445, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_033              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401445u + PPCA_REMAP_OFFSET_0))
/** \brief 1446, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_034              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401446u + PPCA_REMAP_OFFSET_0))
/** \brief 1447, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_035              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401447u + PPCA_REMAP_OFFSET_0))
/** \brief 1448, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_036              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401448u + PPCA_REMAP_OFFSET_0))
/** \brief 1449, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_037              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401449u + PPCA_REMAP_OFFSET_0))
/** \brief 144A, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_038              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340144Au + PPCA_REMAP_OFFSET_0))
/** \brief 144B, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_039              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340144Bu + PPCA_REMAP_OFFSET_0))
/** \brief 144C, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_040              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340144Cu + PPCA_REMAP_OFFSET_0))
/** \brief 144D, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_041              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340144Du + PPCA_REMAP_OFFSET_0))
/** \brief 144E, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_042              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340144Eu + PPCA_REMAP_OFFSET_0))
/** \brief 144F, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_043              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340144Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1450, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_044              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401450u + PPCA_REMAP_OFFSET_0))
/** \brief 1451, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_045              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401451u + PPCA_REMAP_OFFSET_0))
/** \brief 1452, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_046              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401452u + PPCA_REMAP_OFFSET_0))
/** \brief 1453, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_047              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401453u + PPCA_REMAP_OFFSET_0))
/** \brief 1454, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_048              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401454u + PPCA_REMAP_OFFSET_0))
/** \brief 1455, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_049              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401455u + PPCA_REMAP_OFFSET_0))
/** \brief 1456, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_050              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401456u + PPCA_REMAP_OFFSET_0))
/** \brief 1457, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_051              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401457u + PPCA_REMAP_OFFSET_0))
/** \brief 1458, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_052              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401458u + PPCA_REMAP_OFFSET_0))
/** \brief 1459, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_053              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401459u + PPCA_REMAP_OFFSET_0))
/** \brief 145A, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_054              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340145Au + PPCA_REMAP_OFFSET_0))
/** \brief 145B, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_055              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340145Bu + PPCA_REMAP_OFFSET_0))
/** \brief 145C, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_056              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340145Cu + PPCA_REMAP_OFFSET_0))
/** \brief 145D, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_057              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340145Du + PPCA_REMAP_OFFSET_0))
/** \brief 145E, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_058              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340145Eu + PPCA_REMAP_OFFSET_0))
/** \brief 145F, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_059              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340145Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1460, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_060              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401460u + PPCA_REMAP_OFFSET_0))
/** \brief 1461, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_061              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401461u + PPCA_REMAP_OFFSET_0))
/** \brief 1462, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_062              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401462u + PPCA_REMAP_OFFSET_0))
/** \brief 1463, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_063              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401463u + PPCA_REMAP_OFFSET_0))
/** \brief 1464, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_064              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401464u + PPCA_REMAP_OFFSET_0))
/** \brief 1465, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_065              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401465u + PPCA_REMAP_OFFSET_0))
/** \brief 1466, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_066              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401466u + PPCA_REMAP_OFFSET_0))
/** \brief 1467, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_067              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401467u + PPCA_REMAP_OFFSET_0))
/** \brief 1468, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_068              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401468u + PPCA_REMAP_OFFSET_0))
/** \brief 1469, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_069              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401469u + PPCA_REMAP_OFFSET_0))
/** \brief 146A, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_070              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340146Au + PPCA_REMAP_OFFSET_0))
/** \brief 146B, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_071              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340146Bu + PPCA_REMAP_OFFSET_0))
/** \brief 146C, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_072              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340146Cu + PPCA_REMAP_OFFSET_0))
/** \brief 146D, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_073              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340146Du + PPCA_REMAP_OFFSET_0))
/** \brief 146E, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_074              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340146Eu + PPCA_REMAP_OFFSET_0))
/** \brief 146F, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_075              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340146Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1470, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_076              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401470u + PPCA_REMAP_OFFSET_0))
/** \brief 1471, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_077              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401471u + PPCA_REMAP_OFFSET_0))
/** \brief 1472, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_078              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401472u + PPCA_REMAP_OFFSET_0))
/** \brief 1473, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_079              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401473u + PPCA_REMAP_OFFSET_0))
/** \brief 1474, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_080              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401474u + PPCA_REMAP_OFFSET_0))
/** \brief 1475, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_081              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401475u + PPCA_REMAP_OFFSET_0))
/** \brief 1476, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_082              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401476u + PPCA_REMAP_OFFSET_0))
/** \brief 1477, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_083              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401477u + PPCA_REMAP_OFFSET_0))
/** \brief 1478, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_084              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401478u + PPCA_REMAP_OFFSET_0))
/** \brief 1479, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_085              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401479u + PPCA_REMAP_OFFSET_0))
/** \brief 147A, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_086              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340147Au + PPCA_REMAP_OFFSET_0))
/** \brief 147B, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_087              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340147Bu + PPCA_REMAP_OFFSET_0))
/** \brief 147C, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_088              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340147Cu + PPCA_REMAP_OFFSET_0))
/** \brief 147D, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_089              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340147Du + PPCA_REMAP_OFFSET_0))
/** \brief 147E, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_090              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340147Eu + PPCA_REMAP_OFFSET_0))
/** \brief 147F, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_091              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340147Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1480, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_092              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401480u + PPCA_REMAP_OFFSET_0))
/** \brief 1481, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_093              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401481u + PPCA_REMAP_OFFSET_0))
/** \brief 1482, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_094              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401482u + PPCA_REMAP_OFFSET_0))
/** \brief 1483, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_095              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401483u + PPCA_REMAP_OFFSET_0))
/** \brief 1484, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_096              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401484u + PPCA_REMAP_OFFSET_0))
/** \brief 1485, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_097              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401485u + PPCA_REMAP_OFFSET_0))
/** \brief 1486, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_098              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401486u + PPCA_REMAP_OFFSET_0))
/** \brief 1487, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_099              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401487u + PPCA_REMAP_OFFSET_0))
/** \brief 1488, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0100             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401488u + PPCA_REMAP_OFFSET_0))
/** \brief 1489, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0101             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401489u + PPCA_REMAP_OFFSET_0))
/** \brief 148A, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0102             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340148Au + PPCA_REMAP_OFFSET_0))
/** \brief 148B, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0103             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340148Bu + PPCA_REMAP_OFFSET_0))
/** \brief 148C, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0104             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340148Cu + PPCA_REMAP_OFFSET_0))
/** \brief 148D, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0105             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340148Du + PPCA_REMAP_OFFSET_0))
/** \brief 148E, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0106             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340148Eu + PPCA_REMAP_OFFSET_0))
/** \brief 148F, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0107             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340148Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1490, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0108             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401490u + PPCA_REMAP_OFFSET_0))
/** \brief 1491, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0109             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401491u + PPCA_REMAP_OFFSET_0))
/** \brief 1492, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0110             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401492u + PPCA_REMAP_OFFSET_0))
/** \brief 1493, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0111             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401493u + PPCA_REMAP_OFFSET_0))
/** \brief 1494, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0112             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401494u + PPCA_REMAP_OFFSET_0))
/** \brief 1495, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0113             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401495u + PPCA_REMAP_OFFSET_0))
/** \brief 1496, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0114             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401496u + PPCA_REMAP_OFFSET_0))
/** \brief 1497, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0115             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401497u + PPCA_REMAP_OFFSET_0))
/** \brief 1498, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0116             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401498u + PPCA_REMAP_OFFSET_0))
/** \brief 1499, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0117             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x03401499u + PPCA_REMAP_OFFSET_0))
/** \brief 149A, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0118             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340149Au + PPCA_REMAP_OFFSET_0))
/** \brief 149B, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0119             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340149Bu + PPCA_REMAP_OFFSET_0))
/** \brief 149C, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0120             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340149Cu + PPCA_REMAP_OFFSET_0))
/** \brief 149D, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0121             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340149Du + PPCA_REMAP_OFFSET_0))
/** \brief 149E, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0122             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340149Eu + PPCA_REMAP_OFFSET_0))
/** \brief 149F, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0123             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x0340149Fu + PPCA_REMAP_OFFSET_0))
/** \brief 14A0, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0124             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014A0u + PPCA_REMAP_OFFSET_0))
/** \brief 14A1, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0125             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014A1u + PPCA_REMAP_OFFSET_0))
/** \brief 14A2, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0126             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014A2u + PPCA_REMAP_OFFSET_0))
/** \brief 14A3, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0127             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014A3u + PPCA_REMAP_OFFSET_0))
/** \brief 14A4, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0128             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014A4u + PPCA_REMAP_OFFSET_0))
/** \brief 14A5, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0129             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014A5u + PPCA_REMAP_OFFSET_0))
/** \brief 14A6, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0130             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014A6u + PPCA_REMAP_OFFSET_0))
/** \brief 14A7, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0131             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014A7u + PPCA_REMAP_OFFSET_0))
/** \brief 14A8, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0132             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014A8u + PPCA_REMAP_OFFSET_0))
/** \brief 14A9, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0133             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014A9u + PPCA_REMAP_OFFSET_0))
/** \brief 14AA, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0134             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014AAu + PPCA_REMAP_OFFSET_0))
/** \brief 14AB, Infineon Root of Trust Key 0 */
#define REG_SFLASH_IFX_ROT_KEY_0135             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_0*)(0x034014ABu + PPCA_REMAP_OFFSET_0))
/** \brief 14AC, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_10               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014ACu + PPCA_REMAP_OFFSET_0))
/** \brief 14AD, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_11               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014ADu + PPCA_REMAP_OFFSET_0))
/** \brief 14AE, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_12               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014AEu + PPCA_REMAP_OFFSET_0))
/** \brief 14AF, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_13               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014AFu + PPCA_REMAP_OFFSET_0))
/** \brief 14B0, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_14               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014B0u + PPCA_REMAP_OFFSET_0))
/** \brief 14B1, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_15               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014B1u + PPCA_REMAP_OFFSET_0))
/** \brief 14B2, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_16               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014B2u + PPCA_REMAP_OFFSET_0))
/** \brief 14B3, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_17               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014B3u + PPCA_REMAP_OFFSET_0))
/** \brief 14B4, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_18               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014B4u + PPCA_REMAP_OFFSET_0))
/** \brief 14B5, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_19               /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014B5u + PPCA_REMAP_OFFSET_0))
/** \brief 14B6, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_110              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014B6u + PPCA_REMAP_OFFSET_0))
/** \brief 14B7, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_111              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014B7u + PPCA_REMAP_OFFSET_0))
/** \brief 14B8, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_112              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014B8u + PPCA_REMAP_OFFSET_0))
/** \brief 14B9, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_113              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014B9u + PPCA_REMAP_OFFSET_0))
/** \brief 14BA, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_114              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014BAu + PPCA_REMAP_OFFSET_0))
/** \brief 14BB, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_115              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014BBu + PPCA_REMAP_OFFSET_0))
/** \brief 14BC, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_116              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014BCu + PPCA_REMAP_OFFSET_0))
/** \brief 14BD, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_117              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014BDu + PPCA_REMAP_OFFSET_0))
/** \brief 14BE, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_118              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014BEu + PPCA_REMAP_OFFSET_0))
/** \brief 14BF, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_119              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014BFu + PPCA_REMAP_OFFSET_0))
/** \brief 14C0, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_120              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014C0u + PPCA_REMAP_OFFSET_0))
/** \brief 14C1, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_121              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014C1u + PPCA_REMAP_OFFSET_0))
/** \brief 14C2, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_122              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014C2u + PPCA_REMAP_OFFSET_0))
/** \brief 14C3, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_123              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014C3u + PPCA_REMAP_OFFSET_0))
/** \brief 14C4, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_124              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014C4u + PPCA_REMAP_OFFSET_0))
/** \brief 14C5, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_125              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014C5u + PPCA_REMAP_OFFSET_0))
/** \brief 14C6, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_126              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014C6u + PPCA_REMAP_OFFSET_0))
/** \brief 14C7, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_127              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014C7u + PPCA_REMAP_OFFSET_0))
/** \brief 14C8, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_128              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014C8u + PPCA_REMAP_OFFSET_0))
/** \brief 14C9, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_129              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014C9u + PPCA_REMAP_OFFSET_0))
/** \brief 14CA, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_130              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014CAu + PPCA_REMAP_OFFSET_0))
/** \brief 14CB, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_131              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014CBu + PPCA_REMAP_OFFSET_0))
/** \brief 14CC, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_132              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014CCu + PPCA_REMAP_OFFSET_0))
/** \brief 14CD, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_133              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014CDu + PPCA_REMAP_OFFSET_0))
/** \brief 14CE, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_134              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014CEu + PPCA_REMAP_OFFSET_0))
/** \brief 14CF, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_135              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014CFu + PPCA_REMAP_OFFSET_0))
/** \brief 14D0, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_136              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014D0u + PPCA_REMAP_OFFSET_0))
/** \brief 14D1, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_137              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014D1u + PPCA_REMAP_OFFSET_0))
/** \brief 14D2, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_138              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014D2u + PPCA_REMAP_OFFSET_0))
/** \brief 14D3, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_139              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014D3u + PPCA_REMAP_OFFSET_0))
/** \brief 14D4, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_140              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014D4u + PPCA_REMAP_OFFSET_0))
/** \brief 14D5, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_141              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014D5u + PPCA_REMAP_OFFSET_0))
/** \brief 14D6, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_142              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014D6u + PPCA_REMAP_OFFSET_0))
/** \brief 14D7, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_143              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014D7u + PPCA_REMAP_OFFSET_0))
/** \brief 14D8, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_144              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014D8u + PPCA_REMAP_OFFSET_0))
/** \brief 14D9, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_145              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014D9u + PPCA_REMAP_OFFSET_0))
/** \brief 14DA, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_146              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014DAu + PPCA_REMAP_OFFSET_0))
/** \brief 14DB, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_147              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014DBu + PPCA_REMAP_OFFSET_0))
/** \brief 14DC, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_148              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014DCu + PPCA_REMAP_OFFSET_0))
/** \brief 14DD, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_149              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014DDu + PPCA_REMAP_OFFSET_0))
/** \brief 14DE, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_150              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014DEu + PPCA_REMAP_OFFSET_0))
/** \brief 14DF, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_151              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014DFu + PPCA_REMAP_OFFSET_0))
/** \brief 14E0, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_152              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014E0u + PPCA_REMAP_OFFSET_0))
/** \brief 14E1, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_153              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014E1u + PPCA_REMAP_OFFSET_0))
/** \brief 14E2, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_154              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014E2u + PPCA_REMAP_OFFSET_0))
/** \brief 14E3, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_155              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014E3u + PPCA_REMAP_OFFSET_0))
/** \brief 14E4, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_156              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014E4u + PPCA_REMAP_OFFSET_0))
/** \brief 14E5, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_157              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014E5u + PPCA_REMAP_OFFSET_0))
/** \brief 14E6, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_158              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014E6u + PPCA_REMAP_OFFSET_0))
/** \brief 14E7, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_159              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014E7u + PPCA_REMAP_OFFSET_0))
/** \brief 14E8, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_160              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014E8u + PPCA_REMAP_OFFSET_0))
/** \brief 14E9, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_161              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014E9u + PPCA_REMAP_OFFSET_0))
/** \brief 14EA, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_162              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014EAu + PPCA_REMAP_OFFSET_0))
/** \brief 14EB, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_163              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014EBu + PPCA_REMAP_OFFSET_0))
/** \brief 14EC, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_164              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014ECu + PPCA_REMAP_OFFSET_0))
/** \brief 14ED, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_165              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014EDu + PPCA_REMAP_OFFSET_0))
/** \brief 14EE, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_166              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014EEu + PPCA_REMAP_OFFSET_0))
/** \brief 14EF, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_167              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014EFu + PPCA_REMAP_OFFSET_0))
/** \brief 14F0, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_168              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014F0u + PPCA_REMAP_OFFSET_0))
/** \brief 14F1, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_169              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014F1u + PPCA_REMAP_OFFSET_0))
/** \brief 14F2, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_170              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014F2u + PPCA_REMAP_OFFSET_0))
/** \brief 14F3, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_171              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014F3u + PPCA_REMAP_OFFSET_0))
/** \brief 14F4, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_172              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014F4u + PPCA_REMAP_OFFSET_0))
/** \brief 14F5, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_173              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014F5u + PPCA_REMAP_OFFSET_0))
/** \brief 14F6, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_174              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014F6u + PPCA_REMAP_OFFSET_0))
/** \brief 14F7, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_175              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014F7u + PPCA_REMAP_OFFSET_0))
/** \brief 14F8, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_176              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014F8u + PPCA_REMAP_OFFSET_0))
/** \brief 14F9, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_177              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014F9u + PPCA_REMAP_OFFSET_0))
/** \brief 14FA, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_178              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014FAu + PPCA_REMAP_OFFSET_0))
/** \brief 14FB, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_179              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014FBu + PPCA_REMAP_OFFSET_0))
/** \brief 14FC, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_180              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014FCu + PPCA_REMAP_OFFSET_0))
/** \brief 14FD, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_181              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014FDu + PPCA_REMAP_OFFSET_0))
/** \brief 14FE, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_182              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014FEu + PPCA_REMAP_OFFSET_0))
/** \brief 14FF, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_183              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x034014FFu + PPCA_REMAP_OFFSET_0))
/** \brief 1500, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_184              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401500u + PPCA_REMAP_OFFSET_0))
/** \brief 1501, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_185              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401501u + PPCA_REMAP_OFFSET_0))
/** \brief 1502, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_186              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401502u + PPCA_REMAP_OFFSET_0))
/** \brief 1503, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_187              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401503u + PPCA_REMAP_OFFSET_0))
/** \brief 1504, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_188              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401504u + PPCA_REMAP_OFFSET_0))
/** \brief 1505, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_189              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401505u + PPCA_REMAP_OFFSET_0))
/** \brief 1506, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_190              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401506u + PPCA_REMAP_OFFSET_0))
/** \brief 1507, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_191              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401507u + PPCA_REMAP_OFFSET_0))
/** \brief 1508, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_192              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401508u + PPCA_REMAP_OFFSET_0))
/** \brief 1509, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_193              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401509u + PPCA_REMAP_OFFSET_0))
/** \brief 150A, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_194              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340150Au + PPCA_REMAP_OFFSET_0))
/** \brief 150B, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_195              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340150Bu + PPCA_REMAP_OFFSET_0))
/** \brief 150C, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_196              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340150Cu + PPCA_REMAP_OFFSET_0))
/** \brief 150D, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_197              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340150Du + PPCA_REMAP_OFFSET_0))
/** \brief 150E, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_198              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340150Eu + PPCA_REMAP_OFFSET_0))
/** \brief 150F, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_199              /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340150Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1510, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1100             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401510u + PPCA_REMAP_OFFSET_0))
/** \brief 1511, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1101             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401511u + PPCA_REMAP_OFFSET_0))
/** \brief 1512, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1102             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401512u + PPCA_REMAP_OFFSET_0))
/** \brief 1513, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1103             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401513u + PPCA_REMAP_OFFSET_0))
/** \brief 1514, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1104             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401514u + PPCA_REMAP_OFFSET_0))
/** \brief 1515, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1105             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401515u + PPCA_REMAP_OFFSET_0))
/** \brief 1516, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1106             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401516u + PPCA_REMAP_OFFSET_0))
/** \brief 1517, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1107             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401517u + PPCA_REMAP_OFFSET_0))
/** \brief 1518, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1108             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401518u + PPCA_REMAP_OFFSET_0))
/** \brief 1519, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1109             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401519u + PPCA_REMAP_OFFSET_0))
/** \brief 151A, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1110             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340151Au + PPCA_REMAP_OFFSET_0))
/** \brief 151B, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1111             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340151Bu + PPCA_REMAP_OFFSET_0))
/** \brief 151C, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1112             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340151Cu + PPCA_REMAP_OFFSET_0))
/** \brief 151D, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1113             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340151Du + PPCA_REMAP_OFFSET_0))
/** \brief 151E, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1114             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340151Eu + PPCA_REMAP_OFFSET_0))
/** \brief 151F, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1115             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340151Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1520, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1116             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401520u + PPCA_REMAP_OFFSET_0))
/** \brief 1521, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1117             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401521u + PPCA_REMAP_OFFSET_0))
/** \brief 1522, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1118             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401522u + PPCA_REMAP_OFFSET_0))
/** \brief 1523, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1119             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401523u + PPCA_REMAP_OFFSET_0))
/** \brief 1524, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1120             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401524u + PPCA_REMAP_OFFSET_0))
/** \brief 1525, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1121             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401525u + PPCA_REMAP_OFFSET_0))
/** \brief 1526, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1122             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401526u + PPCA_REMAP_OFFSET_0))
/** \brief 1527, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1123             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401527u + PPCA_REMAP_OFFSET_0))
/** \brief 1528, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1124             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401528u + PPCA_REMAP_OFFSET_0))
/** \brief 1529, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1125             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401529u + PPCA_REMAP_OFFSET_0))
/** \brief 152A, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1126             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340152Au + PPCA_REMAP_OFFSET_0))
/** \brief 152B, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1127             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340152Bu + PPCA_REMAP_OFFSET_0))
/** \brief 152C, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1128             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340152Cu + PPCA_REMAP_OFFSET_0))
/** \brief 152D, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1129             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340152Du + PPCA_REMAP_OFFSET_0))
/** \brief 152E, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1130             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340152Eu + PPCA_REMAP_OFFSET_0))
/** \brief 152F, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1131             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x0340152Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1530, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1132             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401530u + PPCA_REMAP_OFFSET_0))
/** \brief 1531, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1133             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401531u + PPCA_REMAP_OFFSET_0))
/** \brief 1532, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1134             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401532u + PPCA_REMAP_OFFSET_0))
/** \brief 1533, Infineon Root of Trust Key 1 */
#define REG_SFLASH_IFX_ROT_KEY_1135             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_ROT_KEY_1*)(0x03401533u + PPCA_REMAP_OFFSET_0))
/** \brief 1534, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_00        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401534u + PPCA_REMAP_OFFSET_0))
/** \brief 1535, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_01        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401535u + PPCA_REMAP_OFFSET_0))
/** \brief 1536, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_02        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401536u + PPCA_REMAP_OFFSET_0))
/** \brief 1537, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_03        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401537u + PPCA_REMAP_OFFSET_0))
/** \brief 1538, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_04        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401538u + PPCA_REMAP_OFFSET_0))
/** \brief 1539, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_05        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401539u + PPCA_REMAP_OFFSET_0))
/** \brief 153A, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_06        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340153Au + PPCA_REMAP_OFFSET_0))
/** \brief 153B, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_07        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340153Bu + PPCA_REMAP_OFFSET_0))
/** \brief 153C, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_08        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340153Cu + PPCA_REMAP_OFFSET_0))
/** \brief 153D, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_09        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340153Du + PPCA_REMAP_OFFSET_0))
/** \brief 153E, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_010       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340153Eu + PPCA_REMAP_OFFSET_0))
/** \brief 153F, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_011       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340153Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1540, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_012       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401540u + PPCA_REMAP_OFFSET_0))
/** \brief 1541, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_013       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401541u + PPCA_REMAP_OFFSET_0))
/** \brief 1542, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_014       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401542u + PPCA_REMAP_OFFSET_0))
/** \brief 1543, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_015       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401543u + PPCA_REMAP_OFFSET_0))
/** \brief 1544, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_016       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401544u + PPCA_REMAP_OFFSET_0))
/** \brief 1545, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_017       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401545u + PPCA_REMAP_OFFSET_0))
/** \brief 1546, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_018       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401546u + PPCA_REMAP_OFFSET_0))
/** \brief 1547, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_019       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401547u + PPCA_REMAP_OFFSET_0))
/** \brief 1548, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_020       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401548u + PPCA_REMAP_OFFSET_0))
/** \brief 1549, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_021       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401549u + PPCA_REMAP_OFFSET_0))
/** \brief 154A, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_022       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340154Au + PPCA_REMAP_OFFSET_0))
/** \brief 154B, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_023       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340154Bu + PPCA_REMAP_OFFSET_0))
/** \brief 154C, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_024       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340154Cu + PPCA_REMAP_OFFSET_0))
/** \brief 154D, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_025       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340154Du + PPCA_REMAP_OFFSET_0))
/** \brief 154E, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_026       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340154Eu + PPCA_REMAP_OFFSET_0))
/** \brief 154F, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_027       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340154Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1550, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_028       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401550u + PPCA_REMAP_OFFSET_0))
/** \brief 1551, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_029       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401551u + PPCA_REMAP_OFFSET_0))
/** \brief 1552, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_030       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401552u + PPCA_REMAP_OFFSET_0))
/** \brief 1553, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_031       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401553u + PPCA_REMAP_OFFSET_0))
/** \brief 1554, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_032       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401554u + PPCA_REMAP_OFFSET_0))
/** \brief 1555, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_033       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401555u + PPCA_REMAP_OFFSET_0))
/** \brief 1556, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_034       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401556u + PPCA_REMAP_OFFSET_0))
/** \brief 1557, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_035       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401557u + PPCA_REMAP_OFFSET_0))
/** \brief 1558, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_036       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401558u + PPCA_REMAP_OFFSET_0))
/** \brief 1559, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_037       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401559u + PPCA_REMAP_OFFSET_0))
/** \brief 155A, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_038       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340155Au + PPCA_REMAP_OFFSET_0))
/** \brief 155B, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_039       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340155Bu + PPCA_REMAP_OFFSET_0))
/** \brief 155C, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_040       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340155Cu + PPCA_REMAP_OFFSET_0))
/** \brief 155D, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_041       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340155Du + PPCA_REMAP_OFFSET_0))
/** \brief 155E, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_042       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340155Eu + PPCA_REMAP_OFFSET_0))
/** \brief 155F, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_043       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340155Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1560, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_044       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401560u + PPCA_REMAP_OFFSET_0))
/** \brief 1561, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_045       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401561u + PPCA_REMAP_OFFSET_0))
/** \brief 1562, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_046       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401562u + PPCA_REMAP_OFFSET_0))
/** \brief 1563, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_047       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401563u + PPCA_REMAP_OFFSET_0))
/** \brief 1564, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_048       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401564u + PPCA_REMAP_OFFSET_0))
/** \brief 1565, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_049       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401565u + PPCA_REMAP_OFFSET_0))
/** \brief 1566, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_050       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401566u + PPCA_REMAP_OFFSET_0))
/** \brief 1567, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_051       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401567u + PPCA_REMAP_OFFSET_0))
/** \brief 1568, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_052       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401568u + PPCA_REMAP_OFFSET_0))
/** \brief 1569, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_053       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401569u + PPCA_REMAP_OFFSET_0))
/** \brief 156A, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_054       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340156Au + PPCA_REMAP_OFFSET_0))
/** \brief 156B, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_055       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340156Bu + PPCA_REMAP_OFFSET_0))
/** \brief 156C, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_056       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340156Cu + PPCA_REMAP_OFFSET_0))
/** \brief 156D, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_057       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340156Du + PPCA_REMAP_OFFSET_0))
/** \brief 156E, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_058       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340156Eu + PPCA_REMAP_OFFSET_0))
/** \brief 156F, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_059       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340156Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1570, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_060       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401570u + PPCA_REMAP_OFFSET_0))
/** \brief 1571, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_061       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401571u + PPCA_REMAP_OFFSET_0))
/** \brief 1572, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_062       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401572u + PPCA_REMAP_OFFSET_0))
/** \brief 1573, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_063       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401573u + PPCA_REMAP_OFFSET_0))
/** \brief 1574, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_064       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401574u + PPCA_REMAP_OFFSET_0))
/** \brief 1575, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_065       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401575u + PPCA_REMAP_OFFSET_0))
/** \brief 1576, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_066       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401576u + PPCA_REMAP_OFFSET_0))
/** \brief 1577, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_067       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401577u + PPCA_REMAP_OFFSET_0))
/** \brief 1578, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_068       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401578u + PPCA_REMAP_OFFSET_0))
/** \brief 1579, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_069       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401579u + PPCA_REMAP_OFFSET_0))
/** \brief 157A, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_070       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340157Au + PPCA_REMAP_OFFSET_0))
/** \brief 157B, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_071       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340157Bu + PPCA_REMAP_OFFSET_0))
/** \brief 157C, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_072       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340157Cu + PPCA_REMAP_OFFSET_0))
/** \brief 157D, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_073       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340157Du + PPCA_REMAP_OFFSET_0))
/** \brief 157E, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_074       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340157Eu + PPCA_REMAP_OFFSET_0))
/** \brief 157F, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_075       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340157Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1580, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_076       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401580u + PPCA_REMAP_OFFSET_0))
/** \brief 1581, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_077       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401581u + PPCA_REMAP_OFFSET_0))
/** \brief 1582, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_078       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401582u + PPCA_REMAP_OFFSET_0))
/** \brief 1583, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_079       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401583u + PPCA_REMAP_OFFSET_0))
/** \brief 1584, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_080       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401584u + PPCA_REMAP_OFFSET_0))
/** \brief 1585, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_081       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401585u + PPCA_REMAP_OFFSET_0))
/** \brief 1586, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_082       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401586u + PPCA_REMAP_OFFSET_0))
/** \brief 1587, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_083       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401587u + PPCA_REMAP_OFFSET_0))
/** \brief 1588, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_084       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401588u + PPCA_REMAP_OFFSET_0))
/** \brief 1589, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_085       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401589u + PPCA_REMAP_OFFSET_0))
/** \brief 158A, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_086       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340158Au + PPCA_REMAP_OFFSET_0))
/** \brief 158B, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_087       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340158Bu + PPCA_REMAP_OFFSET_0))
/** \brief 158C, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_088       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340158Cu + PPCA_REMAP_OFFSET_0))
/** \brief 158D, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_089       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340158Du + PPCA_REMAP_OFFSET_0))
/** \brief 158E, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_090       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340158Eu + PPCA_REMAP_OFFSET_0))
/** \brief 158F, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_091       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340158Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1590, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_092       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401590u + PPCA_REMAP_OFFSET_0))
/** \brief 1591, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_093       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401591u + PPCA_REMAP_OFFSET_0))
/** \brief 1592, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_094       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401592u + PPCA_REMAP_OFFSET_0))
/** \brief 1593, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_095       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401593u + PPCA_REMAP_OFFSET_0))
/** \brief 1594, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_096       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401594u + PPCA_REMAP_OFFSET_0))
/** \brief 1595, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_097       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401595u + PPCA_REMAP_OFFSET_0))
/** \brief 1596, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_098       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401596u + PPCA_REMAP_OFFSET_0))
/** \brief 1597, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_099       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401597u + PPCA_REMAP_OFFSET_0))
/** \brief 1598, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0100      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401598u + PPCA_REMAP_OFFSET_0))
/** \brief 1599, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0101      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x03401599u + PPCA_REMAP_OFFSET_0))
/** \brief 159A, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0102      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340159Au + PPCA_REMAP_OFFSET_0))
/** \brief 159B, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0103      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340159Bu + PPCA_REMAP_OFFSET_0))
/** \brief 159C, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0104      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340159Cu + PPCA_REMAP_OFFSET_0))
/** \brief 159D, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0105      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340159Du + PPCA_REMAP_OFFSET_0))
/** \brief 159E, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0106      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340159Eu + PPCA_REMAP_OFFSET_0))
/** \brief 159F, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0107      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x0340159Fu + PPCA_REMAP_OFFSET_0))
/** \brief 15A0, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0108      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015A0u + PPCA_REMAP_OFFSET_0))
/** \brief 15A1, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0109      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015A1u + PPCA_REMAP_OFFSET_0))
/** \brief 15A2, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0110      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015A2u + PPCA_REMAP_OFFSET_0))
/** \brief 15A3, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0111      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015A3u + PPCA_REMAP_OFFSET_0))
/** \brief 15A4, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0112      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015A4u + PPCA_REMAP_OFFSET_0))
/** \brief 15A5, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0113      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015A5u + PPCA_REMAP_OFFSET_0))
/** \brief 15A6, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0114      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015A6u + PPCA_REMAP_OFFSET_0))
/** \brief 15A7, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0115      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015A7u + PPCA_REMAP_OFFSET_0))
/** \brief 15A8, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0116      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015A8u + PPCA_REMAP_OFFSET_0))
/** \brief 15A9, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0117      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015A9u + PPCA_REMAP_OFFSET_0))
/** \brief 15AA, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0118      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015AAu + PPCA_REMAP_OFFSET_0))
/** \brief 15AB, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0119      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015ABu + PPCA_REMAP_OFFSET_0))
/** \brief 15AC, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0120      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015ACu + PPCA_REMAP_OFFSET_0))
/** \brief 15AD, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0121      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015ADu + PPCA_REMAP_OFFSET_0))
/** \brief 15AE, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0122      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015AEu + PPCA_REMAP_OFFSET_0))
/** \brief 15AF, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0123      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015AFu + PPCA_REMAP_OFFSET_0))
/** \brief 15B0, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0124      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015B0u + PPCA_REMAP_OFFSET_0))
/** \brief 15B1, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0125      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015B1u + PPCA_REMAP_OFFSET_0))
/** \brief 15B2, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0126      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015B2u + PPCA_REMAP_OFFSET_0))
/** \brief 15B3, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0127      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015B3u + PPCA_REMAP_OFFSET_0))
/** \brief 15B4, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0128      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015B4u + PPCA_REMAP_OFFSET_0))
/** \brief 15B5, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0129      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015B5u + PPCA_REMAP_OFFSET_0))
/** \brief 15B6, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0130      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015B6u + PPCA_REMAP_OFFSET_0))
/** \brief 15B7, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0131      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015B7u + PPCA_REMAP_OFFSET_0))
/** \brief 15B8, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0132      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015B8u + PPCA_REMAP_OFFSET_0))
/** \brief 15B9, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0133      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015B9u + PPCA_REMAP_OFFSET_0))
/** \brief 15BA, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0134      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015BAu + PPCA_REMAP_OFFSET_0))
/** \brief 15BB, Infineon RMA Key 0 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_0135      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_0*)(0x034015BBu + PPCA_REMAP_OFFSET_0))
/** \brief 15BC, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_10        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015BCu + PPCA_REMAP_OFFSET_0))
/** \brief 15BD, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_11        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015BDu + PPCA_REMAP_OFFSET_0))
/** \brief 15BE, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_12        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015BEu + PPCA_REMAP_OFFSET_0))
/** \brief 15BF, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_13        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015BFu + PPCA_REMAP_OFFSET_0))
/** \brief 15C0, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_14        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015C0u + PPCA_REMAP_OFFSET_0))
/** \brief 15C1, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_15        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015C1u + PPCA_REMAP_OFFSET_0))
/** \brief 15C2, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_16        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015C2u + PPCA_REMAP_OFFSET_0))
/** \brief 15C3, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_17        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015C3u + PPCA_REMAP_OFFSET_0))
/** \brief 15C4, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_18        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015C4u + PPCA_REMAP_OFFSET_0))
/** \brief 15C5, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_19        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015C5u + PPCA_REMAP_OFFSET_0))
/** \brief 15C6, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_110       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015C6u + PPCA_REMAP_OFFSET_0))
/** \brief 15C7, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_111       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015C7u + PPCA_REMAP_OFFSET_0))
/** \brief 15C8, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_112       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015C8u + PPCA_REMAP_OFFSET_0))
/** \brief 15C9, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_113       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015C9u + PPCA_REMAP_OFFSET_0))
/** \brief 15CA, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_114       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015CAu + PPCA_REMAP_OFFSET_0))
/** \brief 15CB, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_115       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015CBu + PPCA_REMAP_OFFSET_0))
/** \brief 15CC, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_116       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015CCu + PPCA_REMAP_OFFSET_0))
/** \brief 15CD, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_117       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015CDu + PPCA_REMAP_OFFSET_0))
/** \brief 15CE, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_118       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015CEu + PPCA_REMAP_OFFSET_0))
/** \brief 15CF, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_119       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015CFu + PPCA_REMAP_OFFSET_0))
/** \brief 15D0, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_120       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015D0u + PPCA_REMAP_OFFSET_0))
/** \brief 15D1, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_121       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015D1u + PPCA_REMAP_OFFSET_0))
/** \brief 15D2, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_122       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015D2u + PPCA_REMAP_OFFSET_0))
/** \brief 15D3, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_123       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015D3u + PPCA_REMAP_OFFSET_0))
/** \brief 15D4, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_124       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015D4u + PPCA_REMAP_OFFSET_0))
/** \brief 15D5, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_125       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015D5u + PPCA_REMAP_OFFSET_0))
/** \brief 15D6, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_126       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015D6u + PPCA_REMAP_OFFSET_0))
/** \brief 15D7, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_127       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015D7u + PPCA_REMAP_OFFSET_0))
/** \brief 15D8, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_128       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015D8u + PPCA_REMAP_OFFSET_0))
/** \brief 15D9, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_129       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015D9u + PPCA_REMAP_OFFSET_0))
/** \brief 15DA, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_130       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015DAu + PPCA_REMAP_OFFSET_0))
/** \brief 15DB, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_131       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015DBu + PPCA_REMAP_OFFSET_0))
/** \brief 15DC, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_132       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015DCu + PPCA_REMAP_OFFSET_0))
/** \brief 15DD, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_133       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015DDu + PPCA_REMAP_OFFSET_0))
/** \brief 15DE, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_134       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015DEu + PPCA_REMAP_OFFSET_0))
/** \brief 15DF, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_135       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015DFu + PPCA_REMAP_OFFSET_0))
/** \brief 15E0, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_136       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015E0u + PPCA_REMAP_OFFSET_0))
/** \brief 15E1, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_137       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015E1u + PPCA_REMAP_OFFSET_0))
/** \brief 15E2, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_138       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015E2u + PPCA_REMAP_OFFSET_0))
/** \brief 15E3, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_139       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015E3u + PPCA_REMAP_OFFSET_0))
/** \brief 15E4, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_140       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015E4u + PPCA_REMAP_OFFSET_0))
/** \brief 15E5, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_141       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015E5u + PPCA_REMAP_OFFSET_0))
/** \brief 15E6, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_142       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015E6u + PPCA_REMAP_OFFSET_0))
/** \brief 15E7, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_143       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015E7u + PPCA_REMAP_OFFSET_0))
/** \brief 15E8, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_144       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015E8u + PPCA_REMAP_OFFSET_0))
/** \brief 15E9, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_145       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015E9u + PPCA_REMAP_OFFSET_0))
/** \brief 15EA, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_146       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015EAu + PPCA_REMAP_OFFSET_0))
/** \brief 15EB, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_147       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015EBu + PPCA_REMAP_OFFSET_0))
/** \brief 15EC, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_148       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015ECu + PPCA_REMAP_OFFSET_0))
/** \brief 15ED, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_149       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015EDu + PPCA_REMAP_OFFSET_0))
/** \brief 15EE, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_150       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015EEu + PPCA_REMAP_OFFSET_0))
/** \brief 15EF, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_151       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015EFu + PPCA_REMAP_OFFSET_0))
/** \brief 15F0, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_152       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015F0u + PPCA_REMAP_OFFSET_0))
/** \brief 15F1, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_153       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015F1u + PPCA_REMAP_OFFSET_0))
/** \brief 15F2, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_154       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015F2u + PPCA_REMAP_OFFSET_0))
/** \brief 15F3, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_155       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015F3u + PPCA_REMAP_OFFSET_0))
/** \brief 15F4, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_156       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015F4u + PPCA_REMAP_OFFSET_0))
/** \brief 15F5, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_157       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015F5u + PPCA_REMAP_OFFSET_0))
/** \brief 15F6, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_158       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015F6u + PPCA_REMAP_OFFSET_0))
/** \brief 15F7, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_159       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015F7u + PPCA_REMAP_OFFSET_0))
/** \brief 15F8, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_160       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015F8u + PPCA_REMAP_OFFSET_0))
/** \brief 15F9, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_161       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015F9u + PPCA_REMAP_OFFSET_0))
/** \brief 15FA, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_162       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015FAu + PPCA_REMAP_OFFSET_0))
/** \brief 15FB, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_163       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015FBu + PPCA_REMAP_OFFSET_0))
/** \brief 15FC, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_164       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015FCu + PPCA_REMAP_OFFSET_0))
/** \brief 15FD, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_165       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015FDu + PPCA_REMAP_OFFSET_0))
/** \brief 15FE, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_166       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015FEu + PPCA_REMAP_OFFSET_0))
/** \brief 15FF, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_167       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x034015FFu + PPCA_REMAP_OFFSET_0))
/** \brief 1600, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_168       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401600u + PPCA_REMAP_OFFSET_0))
/** \brief 1601, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_169       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401601u + PPCA_REMAP_OFFSET_0))
/** \brief 1602, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_170       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401602u + PPCA_REMAP_OFFSET_0))
/** \brief 1603, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_171       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401603u + PPCA_REMAP_OFFSET_0))
/** \brief 1604, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_172       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401604u + PPCA_REMAP_OFFSET_0))
/** \brief 1605, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_173       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401605u + PPCA_REMAP_OFFSET_0))
/** \brief 1606, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_174       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401606u + PPCA_REMAP_OFFSET_0))
/** \brief 1607, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_175       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401607u + PPCA_REMAP_OFFSET_0))
/** \brief 1608, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_176       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401608u + PPCA_REMAP_OFFSET_0))
/** \brief 1609, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_177       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401609u + PPCA_REMAP_OFFSET_0))
/** \brief 160A, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_178       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340160Au + PPCA_REMAP_OFFSET_0))
/** \brief 160B, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_179       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340160Bu + PPCA_REMAP_OFFSET_0))
/** \brief 160C, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_180       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340160Cu + PPCA_REMAP_OFFSET_0))
/** \brief 160D, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_181       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340160Du + PPCA_REMAP_OFFSET_0))
/** \brief 160E, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_182       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340160Eu + PPCA_REMAP_OFFSET_0))
/** \brief 160F, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_183       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340160Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1610, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_184       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401610u + PPCA_REMAP_OFFSET_0))
/** \brief 1611, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_185       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401611u + PPCA_REMAP_OFFSET_0))
/** \brief 1612, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_186       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401612u + PPCA_REMAP_OFFSET_0))
/** \brief 1613, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_187       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401613u + PPCA_REMAP_OFFSET_0))
/** \brief 1614, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_188       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401614u + PPCA_REMAP_OFFSET_0))
/** \brief 1615, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_189       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401615u + PPCA_REMAP_OFFSET_0))
/** \brief 1616, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_190       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401616u + PPCA_REMAP_OFFSET_0))
/** \brief 1617, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_191       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401617u + PPCA_REMAP_OFFSET_0))
/** \brief 1618, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_192       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401618u + PPCA_REMAP_OFFSET_0))
/** \brief 1619, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_193       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401619u + PPCA_REMAP_OFFSET_0))
/** \brief 161A, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_194       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340161Au + PPCA_REMAP_OFFSET_0))
/** \brief 161B, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_195       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340161Bu + PPCA_REMAP_OFFSET_0))
/** \brief 161C, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_196       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340161Cu + PPCA_REMAP_OFFSET_0))
/** \brief 161D, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_197       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340161Du + PPCA_REMAP_OFFSET_0))
/** \brief 161E, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_198       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340161Eu + PPCA_REMAP_OFFSET_0))
/** \brief 161F, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_199       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340161Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1620, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1100      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401620u + PPCA_REMAP_OFFSET_0))
/** \brief 1621, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1101      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401621u + PPCA_REMAP_OFFSET_0))
/** \brief 1622, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1102      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401622u + PPCA_REMAP_OFFSET_0))
/** \brief 1623, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1103      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401623u + PPCA_REMAP_OFFSET_0))
/** \brief 1624, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1104      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401624u + PPCA_REMAP_OFFSET_0))
/** \brief 1625, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1105      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401625u + PPCA_REMAP_OFFSET_0))
/** \brief 1626, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1106      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401626u + PPCA_REMAP_OFFSET_0))
/** \brief 1627, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1107      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401627u + PPCA_REMAP_OFFSET_0))
/** \brief 1628, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1108      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401628u + PPCA_REMAP_OFFSET_0))
/** \brief 1629, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1109      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401629u + PPCA_REMAP_OFFSET_0))
/** \brief 162A, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1110      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340162Au + PPCA_REMAP_OFFSET_0))
/** \brief 162B, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1111      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340162Bu + PPCA_REMAP_OFFSET_0))
/** \brief 162C, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1112      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340162Cu + PPCA_REMAP_OFFSET_0))
/** \brief 162D, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1113      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340162Du + PPCA_REMAP_OFFSET_0))
/** \brief 162E, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1114      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340162Eu + PPCA_REMAP_OFFSET_0))
/** \brief 162F, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1115      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340162Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1630, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1116      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401630u + PPCA_REMAP_OFFSET_0))
/** \brief 1631, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1117      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401631u + PPCA_REMAP_OFFSET_0))
/** \brief 1632, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1118      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401632u + PPCA_REMAP_OFFSET_0))
/** \brief 1633, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1119      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401633u + PPCA_REMAP_OFFSET_0))
/** \brief 1634, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1120      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401634u + PPCA_REMAP_OFFSET_0))
/** \brief 1635, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1121      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401635u + PPCA_REMAP_OFFSET_0))
/** \brief 1636, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1122      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401636u + PPCA_REMAP_OFFSET_0))
/** \brief 1637, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1123      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401637u + PPCA_REMAP_OFFSET_0))
/** \brief 1638, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1124      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401638u + PPCA_REMAP_OFFSET_0))
/** \brief 1639, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1125      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401639u + PPCA_REMAP_OFFSET_0))
/** \brief 163A, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1126      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340163Au + PPCA_REMAP_OFFSET_0))
/** \brief 163B, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1127      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340163Bu + PPCA_REMAP_OFFSET_0))
/** \brief 163C, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1128      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340163Cu + PPCA_REMAP_OFFSET_0))
/** \brief 163D, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1129      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340163Du + PPCA_REMAP_OFFSET_0))
/** \brief 163E, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1130      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340163Eu + PPCA_REMAP_OFFSET_0))
/** \brief 163F, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1131      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x0340163Fu + PPCA_REMAP_OFFSET_0))
/** \brief 1640, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1132      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401640u + PPCA_REMAP_OFFSET_0))
/** \brief 1641, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1133      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401641u + PPCA_REMAP_OFFSET_0))
/** \brief 1642, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1134      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401642u + PPCA_REMAP_OFFSET_0))
/** \brief 1643, Infineon RMA Key 1 */
#define REG_SFLASH_IFX_RMA_MASTER_KEY_1135      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_IFX_RMA_MASTER_KEY_1*)(0x03401643u + PPCA_REMAP_OFFSET_0))
/** \brief 1644, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC10                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401644u + PPCA_REMAP_OFFSET_0))
/** \brief 1648, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC11                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401648u + PPCA_REMAP_OFFSET_0))
/** \brief 164C, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC12                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x0340164Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1650, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC13                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401650u + PPCA_REMAP_OFFSET_0))
/** \brief 1654, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC14                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401654u + PPCA_REMAP_OFFSET_0))
/** \brief 1658, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC15                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401658u + PPCA_REMAP_OFFSET_0))
/** \brief 165C, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC16                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x0340165Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1660, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC17                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401660u + PPCA_REMAP_OFFSET_0))
/** \brief 1664, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC18                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401664u + PPCA_REMAP_OFFSET_0))
/** \brief 1668, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC19                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401668u + PPCA_REMAP_OFFSET_0))
/** \brief 166C, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC110                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x0340166Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1670, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC111                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401670u + PPCA_REMAP_OFFSET_0))
/** \brief 1674, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC112                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401674u + PPCA_REMAP_OFFSET_0))
/** \brief 1678, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC113                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401678u + PPCA_REMAP_OFFSET_0))
/** \brief 167C, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC114                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x0340167Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1680, TOC1 - See SAS for definition */
#define REG_SFLASH_TOC115                       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC1*)(0x03401680u + PPCA_REMAP_OFFSET_0))
/** \brief 1684, TOC2 - See SAS for definition */
#define REG_SFLASH_TOC20                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC2*)(0x03401684u + PPCA_REMAP_OFFSET_0))
/** \brief 1688, TOC2 - See SAS for definition */
#define REG_SFLASH_TOC21                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC2*)(0x03401688u + PPCA_REMAP_OFFSET_0))
/** \brief 168C, TOC2 - See SAS for definition */
#define REG_SFLASH_TOC22                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC2*)(0x0340168Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1690, TOC2 - See SAS for definition */
#define REG_SFLASH_TOC23                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC2*)(0x03401690u + PPCA_REMAP_OFFSET_0))
/** \brief 1694, TOC2 - See SAS for definition */
#define REG_SFLASH_TOC24                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC2*)(0x03401694u + PPCA_REMAP_OFFSET_0))
/** \brief 1698, TOC2 - See SAS for definition */
#define REG_SFLASH_TOC25                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC2*)(0x03401698u + PPCA_REMAP_OFFSET_0))
/** \brief 169C, TOC2 - See SAS for definition */
#define REG_SFLASH_TOC26                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC2*)(0x0340169Cu + PPCA_REMAP_OFFSET_0))
/** \brief 16A0, TOC2 - See SAS for definition */
#define REG_SFLASH_TOC27                        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_TOC2*)(0x034016A0u + PPCA_REMAP_OFFSET_0))
/** \brief 16A4, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST0             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016A4u + PPCA_REMAP_OFFSET_0))
/** \brief 16A8, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST1             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016A8u + PPCA_REMAP_OFFSET_0))
/** \brief 16AC, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST2             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016ACu + PPCA_REMAP_OFFSET_0))
/** \brief 16B0, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST3             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016B0u + PPCA_REMAP_OFFSET_0))
/** \brief 16B4, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST4             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016B4u + PPCA_REMAP_OFFSET_0))
/** \brief 16B8, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST5             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016B8u + PPCA_REMAP_OFFSET_0))
/** \brief 16BC, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST6             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016BCu + PPCA_REMAP_OFFSET_0))
/** \brief 16C0, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST7             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016C0u + PPCA_REMAP_OFFSET_0))
/** \brief 16C4, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST8             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016C4u + PPCA_REMAP_OFFSET_0))
/** \brief 16C8, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST9             /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016C8u + PPCA_REMAP_OFFSET_0))
/** \brief 16CC, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST10            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016CCu + PPCA_REMAP_OFFSET_0))
/** \brief 16D0, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST11            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016D0u + PPCA_REMAP_OFFSET_0))
/** \brief 16D4, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST12            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016D4u + PPCA_REMAP_OFFSET_0))
/** \brief 16D8, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST13            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016D8u + PPCA_REMAP_OFFSET_0))
/** \brief 16DC, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST14            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016DCu + PPCA_REMAP_OFFSET_0))
/** \brief 16E0, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST15            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016E0u + PPCA_REMAP_OFFSET_0))
/** \brief 16E4, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST16            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016E4u + PPCA_REMAP_OFFSET_0))
/** \brief 16E8, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST17            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016E8u + PPCA_REMAP_OFFSET_0))
/** \brief 16EC, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST18            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016ECu + PPCA_REMAP_OFFSET_0))
/** \brief 16F0, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST19            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016F0u + PPCA_REMAP_OFFSET_0))
/** \brief 16F4, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST20            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016F4u + PPCA_REMAP_OFFSET_0))
/** \brief 16F8, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST21            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016F8u + PPCA_REMAP_OFFSET_0))
/** \brief 16FC, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST22            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x034016FCu + PPCA_REMAP_OFFSET_0))
/** \brief 1700, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST23            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x03401700u + PPCA_REMAP_OFFSET_0))
/** \brief 1704, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST24            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x03401704u + PPCA_REMAP_OFFSET_0))
/** \brief 1708, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST25            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x03401708u + PPCA_REMAP_OFFSET_0))
/** \brief 170C, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST26            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x0340170Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1710, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST27            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x03401710u + PPCA_REMAP_OFFSET_0))
/** \brief 1714, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST28            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x03401714u + PPCA_REMAP_OFFSET_0))
/** \brief 1718, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST29            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x03401718u + PPCA_REMAP_OFFSET_0))
/** \brief 171C, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_ASSET_HASH_LIST30            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_ASSET_HASH_LIST*)(0x0340171Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1720, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST0           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401720u + PPCA_REMAP_OFFSET_0))
/** \brief 1724, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST1           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401724u + PPCA_REMAP_OFFSET_0))
/** \brief 1728, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST2           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401728u + PPCA_REMAP_OFFSET_0))
/** \brief 172C, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST3           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x0340172Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1730, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST4           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401730u + PPCA_REMAP_OFFSET_0))
/** \brief 1734, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST5           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401734u + PPCA_REMAP_OFFSET_0))
/** \brief 1738, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST6           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401738u + PPCA_REMAP_OFFSET_0))
/** \brief 173C, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST7           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x0340173Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1740, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST8           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401740u + PPCA_REMAP_OFFSET_0))
/** \brief 1744, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST9           /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401744u + PPCA_REMAP_OFFSET_0))
/** \brief 1748, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST10          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401748u + PPCA_REMAP_OFFSET_0))
/** \brief 174C, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST11          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x0340174Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1750, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST12          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401750u + PPCA_REMAP_OFFSET_0))
/** \brief 1754, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST13          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401754u + PPCA_REMAP_OFFSET_0))
/** \brief 1758, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST14          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401758u + PPCA_REMAP_OFFSET_0))
/** \brief 175C, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST15          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x0340175Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1760, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST16          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401760u + PPCA_REMAP_OFFSET_0))
/** \brief 1764, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST17          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401764u + PPCA_REMAP_OFFSET_0))
/** \brief 1768, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST18          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401768u + PPCA_REMAP_OFFSET_0))
/** \brief 176C, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST19          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x0340176Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1770, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST20          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401770u + PPCA_REMAP_OFFSET_0))
/** \brief 1774, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST21          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401774u + PPCA_REMAP_OFFSET_0))
/** \brief 1778, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST22          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401778u + PPCA_REMAP_OFFSET_0))
/** \brief 177C, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST23          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x0340177Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1780, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST24          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401780u + PPCA_REMAP_OFFSET_0))
/** \brief 1784, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST25          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401784u + PPCA_REMAP_OFFSET_0))
/** \brief 1788, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST26          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401788u + PPCA_REMAP_OFFSET_0))
/** \brief 178C, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST27          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x0340178Cu + PPCA_REMAP_OFFSET_0))
/** \brief 1790, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST28          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401790u + PPCA_REMAP_OFFSET_0))
/** \brief 1794, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST29          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401794u + PPCA_REMAP_OFFSET_0))
/** \brief 1798, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST30          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x03401798u + PPCA_REMAP_OFFSET_0))
/** \brief 179C, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST31          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x0340179Cu + PPCA_REMAP_OFFSET_0))
/** \brief 17A0, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST32          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017A0u + PPCA_REMAP_OFFSET_0))
/** \brief 17A4, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST33          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017A4u + PPCA_REMAP_OFFSET_0))
/** \brief 17A8, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST34          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017A8u + PPCA_REMAP_OFFSET_0))
/** \brief 17AC, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST35          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017ACu + PPCA_REMAP_OFFSET_0))
/** \brief 17B0, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST36          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017B0u + PPCA_REMAP_OFFSET_0))
/** \brief 17B4, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST37          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017B4u + PPCA_REMAP_OFFSET_0))
/** \brief 17B8, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST38          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017B8u + PPCA_REMAP_OFFSET_0))
/** \brief 17BC, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST39          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017BCu + PPCA_REMAP_OFFSET_0))
/** \brief 17C0, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST40          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017C0u + PPCA_REMAP_OFFSET_0))
/** \brief 17C4, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST41          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017C4u + PPCA_REMAP_OFFSET_0))
/** \brief 17C8, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST42          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017C8u + PPCA_REMAP_OFFSET_0))
/** \brief 17CC, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST43          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017CCu + PPCA_REMAP_OFFSET_0))
/** \brief 17D0, See SAS table 3.22 AND 5.1.5 */
#define REG_SFLASH_FACTORY_HASH_LIST44          /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FACTORY_HASH_LIST*)(0x034017D0u + PPCA_REMAP_OFFSET_0))
/** \brief 2400, Flash Boot - Object Size */
#define REG_SFLASH_FLASH_BOOT_OBJECT_SIZE       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FLASH_BOOT_OBJECT_SIZE*)(0x03402400u + PPCA_REMAP_OFFSET_0))
/** \brief 2404, Flash Boot - Major Version */
#define REG_SFLASH_FLASH_BOOT_VERSION_HIGH      /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FLASH_BOOT_VERSION_HIGH*)(0x03402404u + PPCA_REMAP_OFFSET_0))
/** \brief 2408, Flash Boot - Minor version */
#define REG_SFLASH_FLASH_BOOT_VERSION_LOW       /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FLASH_BOOT_VERSION_LOW*)(0x03402408u + PPCA_REMAP_OFFSET_0))
/** \brief 240C, Flash Boot - Stack Addr */
#define REG_SFLASH_FB_STACK_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FB_STACK_ADDR*)(0x0340240Cu + PPCA_REMAP_OFFSET_0))
/** \brief 2410, Flash Boot - Reset vector */
#define REG_SFLASH_FB_RESET_HANDLER_ADDR        /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FB_RESET_HANDLER_ADDR*)(0x03402410u + PPCA_REMAP_OFFSET_0))
/** \brief 2414, Flash Boot - Function pointer table */
#define REG_SFLASH_FB_FUNC_LIST0                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FB_FUNC_LIST*)(0x03402414u + PPCA_REMAP_OFFSET_0))
/** \brief 2418, Flash Boot - Function pointer table */
#define REG_SFLASH_FB_FUNC_LIST1                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FB_FUNC_LIST*)(0x03402418u + PPCA_REMAP_OFFSET_0))
/** \brief 241C, Flash Boot - Function pointer table */
#define REG_SFLASH_FB_FUNC_LIST2                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FB_FUNC_LIST*)(0x0340241Cu + PPCA_REMAP_OFFSET_0))
/** \brief 2420, Flash Boot - Function pointer table */
#define REG_SFLASH_FB_FUNC_LIST3                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FB_FUNC_LIST*)(0x03402420u + PPCA_REMAP_OFFSET_0))
/** \brief 2424, Flash Boot - Function pointer table */
#define REG_SFLASH_FB_FUNC_LIST4                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FB_FUNC_LIST*)(0x03402424u + PPCA_REMAP_OFFSET_0))
/** \brief 2428, Flash Boot - Function pointer table */
#define REG_SFLASH_FB_FUNC_LIST5                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FB_FUNC_LIST*)(0x03402428u + PPCA_REMAP_OFFSET_0))
/** \brief 242C, Flash Boot - Function pointer table */
#define REG_SFLASH_FB_FUNC_LIST6                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FB_FUNC_LIST*)(0x0340242Cu + PPCA_REMAP_OFFSET_0))
/** \brief 2430, Flash Boot - Function pointer table */
#define REG_SFLASH_FB_FUNC_LIST7                /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_FB_FUNC_LIST*)(0x03402430u + PPCA_REMAP_OFFSET_0))
/** \brief 7600, Write counter for HUK flash row + tag indicating HUK flash row */
#define REG_SFLASH_COUNTER_FLASH_HUK            /*lint --e(923, 9078)*/ (*(volatile Ifx_SFLASH_COUNTER_FLASH_HUK*)(0x03407600u + PPCA_REMAP_OFFSET_0))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXSFLASH_REG_H_ */
