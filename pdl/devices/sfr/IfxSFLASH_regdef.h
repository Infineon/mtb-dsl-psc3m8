/***************************************************************************//**
* \file IfxSFLASH_regdef.h
*
* \brief
* SFLASH Registers
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
* \defgroup IfxSfr_SFLASH_Registers SFLASH Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_SFLASH_Registers_Bitfields Bitfields
* \ingroup IfxSfr_SFLASH_Registers
*
* \defgroup IfxSfr_SFLASH_Registers_union Register unions
* \ingroup IfxSfr_SFLASH_Registers
*
* \defgroup IfxSfr_SFLASH_Registers_struct Memory map
* \ingroup IfxSfr_SFLASH_Registers
*
*******************************************************************************/

#ifndef _IFXSFLASH_REGDEF_H_
#define _IFXSFLASH_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_SFLASH_Registers_Bitfields
 * \{  */
/** \brief Indicates Silicon Revision ID of the device */
typedef struct _Ifx_SFLASH_SI_REVISION_ID_Bits
{
    __IO Ifx_UReg_8Bit SI_REVISION_ID:8;        /**< \brief [7:0]   Silicon Revision ID (rw) */
} Ifx_SFLASH_SI_REVISION_ID_Bits;

/** \brief Indicates Silicon ID of the device */
typedef struct _Ifx_SFLASH_SILICON_ID_Bits
{
    __IO Ifx_UReg_16Bit ID:16;                  /**< \brief [15:0]  Silicon ID (rw) */
} Ifx_SFLASH_SILICON_ID_Bits;

/** \brief Indicates Family ID of the device */
typedef struct _Ifx_SFLASH_FAMILY_ID_Bits
{
    __IO Ifx_UReg_16Bit FAMILY_ID:16;           /**< \brief [15:0]  Indicates Family ID of the device (rw) */
} Ifx_SFLASH_FAMILY_ID_Bits;

/** \brief SFLASH Subversion -- Manually read from 'show log' of repo root */
typedef struct _Ifx_SFLASH_SFLASH_SVN_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  SFLASH Subversion -- Manually read from
                                                                    'show log' of repo root (rw) */
} Ifx_SFLASH_SFLASH_SVN_Bits;

/** \brief Trim value to load into the SVGS Comparator Configuration register */
typedef struct _Ifx_SFLASH_SVGS_CMP_CFG_Bits
{
    __IO Ifx_UReg_32Bit UVC_EN:1;               /**< \brief [0:0]   1 = Enable UVC (Under Voltage Comparison
                                                                    function) (rw) */
    __IO Ifx_UReg_32Bit OVC_EN:1;               /**< \brief [1:1]   1 = Enable OVC (Over Voltage Comparison
                                                                    function) (rw) */
    __IO Ifx_UReg_32Bit UVFC_EN:1;              /**< \brief [2:2]   1 = Enable UVFC (Under Voltage (Filtered)
                                                                    Comparison function) (rw) */
    __IO Ifx_UReg_32Bit NVC_EN:1;               /**< \brief [3:3]   1 = Enable NVC (Noise Voltage Comparison
                                                                    function) (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit UVC_PWR:1;              /**< \brief [8:8]   1 = UVC in full power else half power mode (rw) */
    __IO Ifx_UReg_32Bit OVC_PWR:1;              /**< \brief [9:9]   1 = OVC in full power else half power mode (rw) */
    __IO Ifx_UReg_32Bit UVFC_PWR:1;             /**< \brief [10:10] 1 = UVFC in full power else half power mode (rw) */
    __IO Ifx_UReg_32Bit NVC_PWR:1;              /**< \brief [11:11] 1 = NVC in full power else half power mode (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __IO Ifx_UReg_32Bit UVC_MASK:1;             /**< \brief [16:16] 1 = UVC masked from affecting
                                                                    svgs_glitch_event_hv (rw) */
    __IO Ifx_UReg_32Bit OVC_MASK:1;             /**< \brief [17:17] 1 = OVC masked from affecting
                                                                    svgs_glitch_event_hv (rw) */
    __IO Ifx_UReg_32Bit UVFC_MASK:1;            /**< \brief [18:18] 1 = UVFC masked from affecting
                                                                    svgs_glitch_event_hv (rw) */
    __IO Ifx_UReg_32Bit NVC_MASK:1;             /**< \brief [19:19] 1 = NVC masked from affecting
                                                                    svgs_glitch_event_hv (rw) */
    __IO Ifx_UReg_32Bit HVC_MASK:1;             /**< \brief [20:20] 1 = HVC masked from affecting
                                                                    svgs_glitch_event_hv (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [23:21] \internal Reserved */
    __IO Ifx_UReg_32Bit SVGS_UVFC_TC:4;         /**< \brief [27:24] Configures the time constant of the UVFC
                                                                    functionality.
                                                                    Each increment in setting sets increment
                                                                    (logarithmically equi-spaced) in time constant
                                                                    0'h sets time constant 20ns
                                                                    1'h sets time constant 24.4ns
                                                                    2'h sets time constant 29.8ns
                                                                    3'h sets time constant 36.4ns
                                                                    4'h sets time constant 44.4ns
                                                                    5'h sets time constant 54.3ns
                                                                    6'h sets time constant 66.2ns
                                                                    7'h sets time constant 81ns
                                                                    8'h sets time constant 98.8ns
                                                                    A'h sets time constant 147.3ns
                                                                    B'h sets time constant 179.9ns
                                                                    C'h sets time constant 219.7ns
                                                                    D'h sets time constant 268.3ns
                                                                    E'h sets time constant 327.5ns
                                                                    F'h sets time constant 400ns (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [31:28] \internal Reserved */
} Ifx_SFLASH_SVGS_CMP_CFG_Bits;

/** \brief Trim value to load into the  SVGS Comparator trip-point configuration register */
typedef struct _Ifx_SFLASH_SVGS_CMP_TRIP_Bits
{
    __IO Ifx_UReg_32Bit SVGS_UVC_TRIP:6;        /**< \brief [5:0]   Configures the threshold of UVC
                                                                    functionality in steps of 6.2mV.
                                                                    000000 = 760.00mV
                                                                    000001 = 766.2mV
                                                                    ....
                                                                    111111 = 1150mV (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit SVGS_OVC_TRIP:2;        /**< \brief [9:8]   Configures the threshold of OVC
                                                                    functionality in steps of 25mV.
                                                                    00 = 1250mV
                                                                    01 = 1275mV
                                                                    10 = 1300mV
                                                                    11 = 1325mV (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit SVGS_UVFC_TRIP:6;       /**< \brief [21:16] Configures the threshold of UVFC
                                                                    functionality in steps of 6.2mV.
                                                                    000000 = 760.00mV
                                                                    000001 = 766.2mV
                                                                    ....
                                                                    111111 = 1150mV (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __IO Ifx_UReg_32Bit SVGS_NVC_TRIP:4;        /**< \brief [27:24] Configures the threshold of NVC
                                                                    functionality in steps of 10mV.
                                                                    0000 = 30mV
                                                                    0001 = 40mV
                                                                    ....
                                                                    1111 = 180mV (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [31:28] \internal Reserved */
} Ifx_SFLASH_SVGS_CMP_TRIP_Bits;

/** \brief Trim value to load into the SVGS Trim Register */
typedef struct _Ifx_SFLASH_SVGS_TRIM_Bits
{
    __IO Ifx_UReg_32Bit SVGS_VREG_TRIM:4;       /**< \brief [3:0]   Regulator output voltage trim (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit SVGS_IBIAS_TRIM:4;      /**< \brief [11:8]  Bias current output trim (rw) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_SFLASH_SVGS_TRIM_Bits;

/** \brief Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
typedef struct _Ifx_SFLASH_SAR_INFRA_TRIM_TABLE_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]   (rw) */
} Ifx_SFLASH_SAR_INFRA_TRIM_TABLE_Bits;

/** \brief Lot Number (3 bytes) */
typedef struct _Ifx_SFLASH_DIE_LOT_Bits
{
    __IO Ifx_UReg_8Bit LOT:8;                   /**< \brief [7:0]   Lot Number Byte (rw) */
} Ifx_SFLASH_DIE_LOT_Bits;

/** \brief Wafer Number */
typedef struct _Ifx_SFLASH_DIE_WAFER_Bits
{
    __IO Ifx_UReg_8Bit WAFER:8;                 /**< \brief [7:0]   Wafer Number (rw) */
} Ifx_SFLASH_DIE_WAFER_Bits;

/** \brief X Position on Wafer, CRI Pass/Fail Bin */
typedef struct _Ifx_SFLASH_DIE_X_Bits
{
    __IO Ifx_UReg_8Bit X:8;                     /**< \brief [7:0]   X Position (rw) */
} Ifx_SFLASH_DIE_X_Bits;

/** \brief Y Position on Wafer, CHI Pass/Fail Bin */
typedef struct _Ifx_SFLASH_DIE_Y_Bits
{
    __IO Ifx_UReg_8Bit Y:8;                     /**< \brief [7:0]   Y Position (rw) */
} Ifx_SFLASH_DIE_Y_Bits;

/** \brief Sort1/2/3 Pass/Fail Bin */
typedef struct _Ifx_SFLASH_DIE_SORT_Bits
{
    __IO Ifx_UReg_8Bit S1_PASS:1;               /**< \brief [0:0]   SORT1 Pass Bin (1) or 0 (Fail Bin) (rw) */
    __IO Ifx_UReg_8Bit S2_PASS:1;               /**< \brief [1:1]   SORT2 Pass Bin (1) or 0 (Fail Bin) (rw) */
    __IO Ifx_UReg_8Bit S3_PASS:1;               /**< \brief [2:2]   SORT3 Pass Bin (1) or 0 (Fail Bin) (rw) */
    __IO Ifx_UReg_8Bit CRI_PASS:1;              /**< \brief [3:3]   CRI Pass Bin (1) or 0 (Fail Bin) (rw) */
    __IO Ifx_UReg_8Bit CHI_PASS:1;              /**< \brief [4:4]   CHI Pass Bin (1) or 0 (Fail Bin) (rw) */
    __IO Ifx_UReg_8Bit ENG_PASS:1;              /**< \brief [5:5]   ENG Pass Bin (rw) */
    __I  Ifx_UReg_8Bit :2;                      /**< \brief [7:6]   \internal Reserved */
} Ifx_SFLASH_DIE_SORT_Bits;

/** \brief Minor Revision Number */
typedef struct _Ifx_SFLASH_DIE_MINOR_Bits
{
    __IO Ifx_UReg_8Bit MINOR:8;                 /**< \brief [7:0]   Minor revision number (rw) */
} Ifx_SFLASH_DIE_MINOR_Bits;

/** \brief Day number */
typedef struct _Ifx_SFLASH_DIE_DAY_Bits
{
    __IO Ifx_UReg_8Bit MINOR:8;                 /**< \brief [7:0]   Day number (rw) */
} Ifx_SFLASH_DIE_DAY_Bits;

/** \brief Month number */
typedef struct _Ifx_SFLASH_DIE_MONTH_Bits
{
    __IO Ifx_UReg_8Bit MINOR:8;                 /**< \brief [7:0]   Month number (rw) */
} Ifx_SFLASH_DIE_MONTH_Bits;

/** \brief Year number */
typedef struct _Ifx_SFLASH_DIE_YEAR_Bits
{
    __IO Ifx_UReg_8Bit MINOR:8;                 /**< \brief [7:0]   Year number (rw) */
} Ifx_SFLASH_DIE_YEAR_Bits;

/** \brief CSP Panel Id to record panel ID of CSP die */
typedef struct _Ifx_SFLASH_CSP_PANEL_ID_Bits
{
    __IO Ifx_UReg_32Bit CSP_X:8;                /**< \brief [7:0]    (rw) */
    __IO Ifx_UReg_32Bit CSP_Y:8;                /**< \brief [15:8]   (rw) */
    __IO Ifx_UReg_32Bit CSP_LOT:8;              /**< \brief [23:16]  (rw) */
    __IO Ifx_UReg_32Bit PAD:8;                  /**< \brief [31:24]  (rw) */
} Ifx_SFLASH_CSP_PANEL_ID_Bits;

/** \brief SARADC STARTUP Control Register */
typedef struct _Ifx_SFLASH_GRP0_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits
{
    __IO Ifx_UReg_8Bit TIMCAL_ON:1;             /**< \brief [0:0]   Timing sucal triggered during startup (rw) */
    __IO Ifx_UReg_8Bit OFFCAL_ON:1;             /**< \brief [1:1]   Offset sucal triggered during startup (rw) */
    __IO Ifx_UReg_8Bit GAICAL_ON:1;             /**< \brief [2:2]   Gain sucal triggered during startup (rw) */
    __I  Ifx_UReg_8Bit :5;                      /**< \brief [7:3]   \internal Reserved */
} Ifx_SFLASH_GRP0_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits;

/** \brief SARADC CAL offset per channel */
typedef struct _Ifx_SFLASH_GRP0_ADC_CALOFFSET_Bits
{
    __IO Ifx_UReg_32Bit OFFSET_SE:8;            /**< \brief [7:0]   Signed offset calibration value for sampler
                                                                    in single ended mode (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit OFFSET_DIFF:8;          /**< \brief [23:16] Signed offset calibration value for sampler
                                                                    in differential mode (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP0_ADC_CALOFFSET_Bits;

/** \brief Loaded to the ADC_CALGAIN registers (8 in group 0) */
typedef struct _Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1_Bits
{
    __IO Ifx_UReg_32Bit GAINx1_SE_mode:11;      /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit GAINx1_DIFF_mode:11;    /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1_Bits;

/** \brief Trim value for AFE_CALGAINAFE_1 register */
typedef struct _Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_1_Bits
{
    __IO Ifx_UReg_32Bit HFLG2_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG2_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_1_Bits;

/** \brief Trim value for AFE_CALGAINAFE_2 register */
typedef struct _Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_2_Bits
{
    __IO Ifx_UReg_32Bit HFLG3_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For HFLG3_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG3_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG3_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_2_Bits;

/** \brief Trim value for AFE_CALGAINAFE_3 register */
typedef struct _Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_3_Bits
{
    __IO Ifx_UReg_32Bit LFHG1_12:11;            /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For LFHG1_12). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit LFHG1_24:11;            /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For LFHG1_24). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_3_Bits;

/** \brief Trim value for AFE_CALGAINAFE_4 register */
typedef struct _Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_4_Bits
{
    __IO Ifx_UReg_32Bit HFLG1_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For HFLG1_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG1_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG1_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_4_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_1 register */
typedef struct _Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_1_Bits
{
    __IO Ifx_UReg_32Bit HFLG2_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG2_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_1_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_2 register */
typedef struct _Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_2_Bits
{
    __IO Ifx_UReg_32Bit HFLG3_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG3_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG3_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HFLG3_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_2_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_3 register */
typedef struct _Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_3_Bits
{
    __IO Ifx_UReg_32Bit LFHG1_12_OS:8;          /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For LFHG1_12). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit LFHG1_24_OS:8;          /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For LFHG1_24). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_3_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_4 register */
typedef struct _Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_4_Bits
{
    __IO Ifx_UReg_32Bit HFLG1_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG1_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG1_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HLLG1_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_4_Bits;

/** \brief SARADC STARTUP Control Register */
typedef struct _Ifx_SFLASH_GRP1_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits
{
    __IO Ifx_UReg_8Bit TIMCAL_ON:1;             /**< \brief [0:0]   Timing sucal triggered during startup (rw) */
    __IO Ifx_UReg_8Bit OFFCAL_ON:1;             /**< \brief [1:1]   Offset sucal triggered during startup (rw) */
    __IO Ifx_UReg_8Bit GAICAL_ON:1;             /**< \brief [2:2]   Gain sucal triggered during startup (rw) */
    __I  Ifx_UReg_8Bit :5;                      /**< \brief [7:3]   \internal Reserved */
} Ifx_SFLASH_GRP1_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits;

/** \brief SARADC CAL offset per channel */
typedef struct _Ifx_SFLASH_GRP1_ADC_CALOFFSET_Bits
{
    __IO Ifx_UReg_32Bit OFFSET_SE:8;            /**< \brief [7:0]   Signed offset calibration value for sampler
                                                                    in single ended mode (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit OFFSET_DIFF:8;          /**< \brief [23:16] Signed offset calibration value for sampler
                                                                    in differential mode (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP1_ADC_CALOFFSET_Bits;

/** \brief Loaded to the ADC_CALGAIN registers (8 in group 0) */
typedef struct _Ifx_SFLASH_GRP1_ADC_CALGAIN_GAINX1_Bits
{
    __IO Ifx_UReg_32Bit GAINx1_SE_mode:11;      /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit GAINx1_DIFF_mode:11;    /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP1_ADC_CALGAIN_GAINX1_Bits;

/** \brief Trim value for AFE_CALGAINAFE_1 register */
typedef struct _Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_1_Bits
{
    __IO Ifx_UReg_32Bit HFLG2_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG2_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_1_Bits;

/** \brief Trim value for AFE_CALGAINAFE_2 register */
typedef struct _Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_2_Bits
{
    __IO Ifx_UReg_32Bit HFLG3_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For HFLG3_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG3_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG3_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_2_Bits;

/** \brief Trim value for AFE_CALGAINAFE_3 register */
typedef struct _Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_3_Bits
{
    __IO Ifx_UReg_32Bit LFHG1_12:11;            /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For LFHG1_12). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit LFHG1_24:11;            /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For LFHG1_24). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_3_Bits;

/** \brief Trim value for AFE_CALGAINAFE_4 register */
typedef struct _Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_4_Bits
{
    __IO Ifx_UReg_32Bit HFLG1_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For HFLG1_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG1_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG1_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_4_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_1 register */
typedef struct _Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_1_Bits
{
    __IO Ifx_UReg_32Bit HFLG2_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG2_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_1_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_2 register */
typedef struct _Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_2_Bits
{
    __IO Ifx_UReg_32Bit HFLG3_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG3_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG3_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HFLG3_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_2_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_3 register */
typedef struct _Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_3_Bits
{
    __IO Ifx_UReg_32Bit LFHG1_12_OS:8;          /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For LFHG1_12). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit LFHG1_24_OS:8;          /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For LFHG1_24). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_3_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_4 register */
typedef struct _Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_4_Bits
{
    __IO Ifx_UReg_32Bit HFLG1_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG1_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG1_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HLLG1_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_4_Bits;

/** \brief SARADC STARTUP Control Register */
typedef struct _Ifx_SFLASH_GRP2_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits
{
    __IO Ifx_UReg_8Bit TIMCAL_ON:1;             /**< \brief [0:0]   Timing sucal triggered during startup (rw) */
    __IO Ifx_UReg_8Bit OFFCAL_ON:1;             /**< \brief [1:1]   Offset sucal triggered during startup (rw) */
    __IO Ifx_UReg_8Bit GAICAL_ON:1;             /**< \brief [2:2]   Gain sucal triggered during startup (rw) */
    __I  Ifx_UReg_8Bit :5;                      /**< \brief [7:3]   \internal Reserved */
} Ifx_SFLASH_GRP2_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits;

/** \brief SARADC CAL offset per channel */
typedef struct _Ifx_SFLASH_GRP2_ADC_CALOFFSET_Bits
{
    __IO Ifx_UReg_32Bit OFFSET_SE:8;            /**< \brief [7:0]   Signed offset calibration value for sampler
                                                                    in single ended mode (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit OFFSET_DIFF:8;          /**< \brief [23:16] Signed offset calibration value for sampler
                                                                    in differential mode (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP2_ADC_CALOFFSET_Bits;

/** \brief Loaded to the ADC_CALGAIN registers (8 in group 0) */
typedef struct _Ifx_SFLASH_GRP2_ADC_CALGAIN_GAINX1_Bits
{
    __IO Ifx_UReg_32Bit GAINx1_SE_mode:11;      /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit GAINx1_DIFF_mode:11;    /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP2_ADC_CALGAIN_GAINX1_Bits;

/** \brief Trim value for AFE_CALGAINAFE_1 register */
typedef struct _Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_1_Bits
{
    __IO Ifx_UReg_32Bit HFLG2_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG2_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_1_Bits;

/** \brief Trim value for AFE_CALGAINAFE_2 register */
typedef struct _Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_2_Bits
{
    __IO Ifx_UReg_32Bit HFLG3_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For HFLG3_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG3_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG3_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_2_Bits;

/** \brief Trim value for AFE_CALGAINAFE_3 register */
typedef struct _Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_3_Bits
{
    __IO Ifx_UReg_32Bit LFHG1_12:11;            /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For LFHG1_12). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit LFHG1_24:11;            /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For LFHG1_24). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_3_Bits;

/** \brief Trim value for AFE_CALGAINAFE_4 register */
typedef struct _Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_4_Bits
{
    __IO Ifx_UReg_32Bit HFLG1_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For HFLG1_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG1_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG1_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_4_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_1 register */
typedef struct _Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_1_Bits
{
    __IO Ifx_UReg_32Bit HFLG2_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG2_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_1_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_2 register */
typedef struct _Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_2_Bits
{
    __IO Ifx_UReg_32Bit HFLG3_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG3_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG3_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HFLG3_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_2_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_3 register */
typedef struct _Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_3_Bits
{
    __IO Ifx_UReg_32Bit LFHG1_12_OS:8;          /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For LFHG1_12). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit LFHG1_24_OS:8;          /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For LFHG1_24). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_3_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_4 register */
typedef struct _Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_4_Bits
{
    __IO Ifx_UReg_32Bit HFLG1_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG1_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG1_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HLLG1_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_4_Bits;

/** \brief SARADC STARTUP Control Register */
typedef struct _Ifx_SFLASH_GRP3_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits
{
    __IO Ifx_UReg_8Bit TIMCAL_ON:1;             /**< \brief [0:0]   Timing sucal triggered during startup (rw) */
    __IO Ifx_UReg_8Bit OFFCAL_ON:1;             /**< \brief [1:1]   Offset sucal triggered during startup (rw) */
    __IO Ifx_UReg_8Bit GAICAL_ON:1;             /**< \brief [2:2]   Gain sucal triggered during startup (rw) */
    __I  Ifx_UReg_8Bit :5;                      /**< \brief [7:3]   \internal Reserved */
} Ifx_SFLASH_GRP3_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits;

/** \brief SARADC CAL offset per channel */
typedef struct _Ifx_SFLASH_GRP3_ADC_CALOFFSET_Bits
{
    __IO Ifx_UReg_32Bit OFFSET_SE:8;            /**< \brief [7:0]   Signed offset calibration value for sampler
                                                                    in single ended mode (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit OFFSET_DIFF:8;          /**< \brief [23:16] Signed offset calibration value for sampler
                                                                    in differential mode (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP3_ADC_CALOFFSET_Bits;

/** \brief Loaded to the ADC_CALGAIN registers (8 in group 0) */
typedef struct _Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1_Bits
{
    __IO Ifx_UReg_32Bit GAINx1_SE_mode:11;      /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit GAINx1_DIFF_mode:11;    /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1_Bits;

/** \brief Trim value for AFE_CALGAINAFE_1 register */
typedef struct _Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_1_Bits
{
    __IO Ifx_UReg_32Bit HFLG2_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG2_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_1_Bits;

/** \brief Trim value for AFE_CALGAINAFE_2 register */
typedef struct _Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_2_Bits
{
    __IO Ifx_UReg_32Bit HFLG3_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For HFLG3_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG3_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG3_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_2_Bits;

/** \brief Trim value for AFE_CALGAINAFE_3 register */
typedef struct _Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_3_Bits
{
    __IO Ifx_UReg_32Bit LFHG1_12:11;            /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For LFHG1_12). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit LFHG1_24:11;            /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For LFHG1_24). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_3_Bits;

/** \brief Trim value for AFE_CALGAINAFE_4 register */
typedef struct _Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_4_Bits
{
    __IO Ifx_UReg_32Bit HFLG1_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For HFLG1_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG1_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG1_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_4_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_1 register */
typedef struct _Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_1_Bits
{
    __IO Ifx_UReg_32Bit HFLG2_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG2_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_1_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_2 register */
typedef struct _Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_2_Bits
{
    __IO Ifx_UReg_32Bit HFLG3_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG3_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG3_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HFLG3_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_2_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_3 register */
typedef struct _Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_3_Bits
{
    __IO Ifx_UReg_32Bit LFHG1_12_OS:8;          /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For LFHG1_12). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit LFHG1_24_OS:8;          /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For LFHG1_24). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_3_Bits;

/** \brief Trim value for AFE_CALOFFSETAFE_4 register */
typedef struct _Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_4_Bits
{
    __IO Ifx_UReg_32Bit HFLG1_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG1_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG1_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HLLG1_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_4_Bits;

/** \brief Trim value to load into the Analog Comparator Differential Mode Calibration register */
typedef struct _Ifx_SFLASH_GRP0_DCSG_TEST_VREF_TRIM_Bits
{
    __IO Ifx_UReg_32Bit VREF_TRIM:6;            /**< \brief [5:0]   Signed offset calibration value for sampler
                                                                    in differential mode in DIFF_ER (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_SFLASH_GRP0_DCSG_TEST_VREF_TRIM_Bits;

/** \brief Trim value to load into the Analog Comparator Differential Mode Calibration register */
typedef struct _Ifx_SFLASH_GRP0_DCSG_DIFF_CALOFFSET_Bits
{
    __IO Ifx_UReg_32Bit OFFSET_DIFF_ER:10;      /**< \brief [9:0]   Signed offset calibration value for sampler
                                                                    in differential mode in DIFF_ER (rw) */
    __IO Ifx_UReg_32Bit OFFSET_DIFF_FR:10;      /**< \brief [19:10] Signed offset calibration value for sampler
                                                                    in differential mode in DIFF_FR (rw) */
    __IO Ifx_UReg_32Bit OFFSET_DIFF_RR:10;      /**< \brief [29:20] Signed offset calibration value for sampler
                                                                    in differential mode in DIFF_RR (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_SFLASH_GRP0_DCSG_DIFF_CALOFFSET_Bits;

/** \brief Trim value to load into the Analog Comparator Single Ended Mode Calibration register */
typedef struct _Ifx_SFLASH_GRP0_DCSG_SE_CALOFFSET_Bits
{
    __IO Ifx_UReg_32Bit OFFSET_SE_SP:10;        /**< \brief [9:0]   Signed offset calibration value for sampler
                                                                    in single ended P mode (rw) */
    __IO Ifx_UReg_32Bit OFFSET_SE_SN:10;        /**< \brief [19:10] Signed offset calibration value for sampler
                                                                    in single ended N mode (rw) */
    __IO Ifx_UReg_32Bit OFFSET_A_VS_B:10;       /**< \brief [29:20] Signed offset calibration value for sampler
                                                                    in A vs B mode (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_SFLASH_GRP0_DCSG_SE_CALOFFSET_Bits;

/** \brief Trim value to load into the Analog Comparator Differential Mode Gain 1 register */
typedef struct _Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_1_Bits
{
    __IO Ifx_UReg_32Bit GAIN_DIFF_ER:11;        /**< \brief [10:0]  Signed gain calibration value for sampler
                                                                    in differential mode in DIFF_ER (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit GAIN_DIFF_FR:11;        /**< \brief [26:16] Signed gain calibration value for sampler
                                                                    in differential mode in DIFF_FR (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_1_Bits;

/** \brief Trim value to load into the Analog Comparator Differential Mode Gain 2 register */
typedef struct _Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_2_Bits
{
    __IO Ifx_UReg_32Bit GAIN_DIFF_RR:11;        /**< \brief [10:0]  Signed gain calibration value for sampler
                                                                    in differential mode in DIFF_RR (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_2_Bits;

/** \brief Trim value to load into the Analog Comparator Single Ended Mode Gain register */
typedef struct _Ifx_SFLASH_GRP0_DCSG_SE_CALGAIN_Bits
{
    __IO Ifx_UReg_32Bit GAIN_SE_SP:11;          /**< \brief [10:0]  Signed gain calibration value for sampler
                                                                    in single ended P mode (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit GAIN_SE_SN:11;          /**< \brief [26:16] Signed gain calibration value for sampler
                                                                    in single ended N mode (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP0_DCSG_SE_CALGAIN_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG1_Bits
{
    __IO Ifx_UReg_16Bit DAC_OFFSET_CNFG1:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG1 (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG1_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG2_Bits
{
    __IO Ifx_UReg_16Bit DAC_OFFSET_CNFG2:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG2 (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG2_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG3_Bits
{
    __IO Ifx_UReg_16Bit DAC_OFFSET_CNFG3:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG3 (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG3_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG4_Bits
{
    __IO Ifx_UReg_16Bit DAC_OFFSET_CNFG4:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG4 (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG4_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG5_Bits
{
    __IO Ifx_UReg_16Bit DAC_OFFSET_CNFG5:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG5 (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG5_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_DAC_GAIN_CNFG1_Bits
{
    __IO Ifx_UReg_16Bit DAC_GAIN_CNFG1:11;      /**< \brief [10:0]  DAC GAIN CNFG1 (rw) */
    __I  Ifx_UReg_16Bit :5;                     /**< \brief [15:11] \internal Reserved */
} Ifx_SFLASH_GRP0_DAC_GAIN_CNFG1_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_DAC_GAIN_CNFG2_Bits
{
    __IO Ifx_UReg_16Bit DAC_GAIN_CNFG2:11;      /**< \brief [10:0]  DAC GAIN CNFG2 (rw) */
    __I  Ifx_UReg_16Bit :5;                     /**< \brief [15:11] \internal Reserved */
} Ifx_SFLASH_GRP0_DAC_GAIN_CNFG2_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_DAC_GAIN_CNFG3_Bits
{
    __IO Ifx_UReg_16Bit DAC_GAIN_CNFG3:11;      /**< \brief [10:0]  DAC GAIN CNFG3 (rw) */
    __I  Ifx_UReg_16Bit :5;                     /**< \brief [15:11] \internal Reserved */
} Ifx_SFLASH_GRP0_DAC_GAIN_CNFG3_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_DAC_GAIN_CNFG4_Bits
{
    __IO Ifx_UReg_16Bit DAC_GAIN_CNFG4:11;      /**< \brief [10:0]  DAC GAIN CNFG4 (rw) */
    __I  Ifx_UReg_16Bit :5;                     /**< \brief [15:11] \internal Reserved */
} Ifx_SFLASH_GRP0_DAC_GAIN_CNFG4_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_DAC_GAIN_CNFG5_Bits
{
    __IO Ifx_UReg_16Bit DAC_GAIN_CNFG5:11;      /**< \brief [10:0]  DAC GAIN CNFG5 (rw) */
    __I  Ifx_UReg_16Bit :5;                     /**< \brief [15:11] \internal Reserved */
} Ifx_SFLASH_GRP0_DAC_GAIN_CNFG5_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_BUFFER_OFFSET_1_Bits
{
    __IO Ifx_UReg_16Bit BUFFER_OFFSET_1:10;     /**< \brief [9:0]   Signed offset calibration value for Buffer
                                                                    in 1.2 Full Range (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP0_BUFFER_OFFSET_1_Bits;

/** \brief 0 */
typedef struct _Ifx_SFLASH_GRP0_BUFFER_OFFSET_2_Bits
{
    __IO Ifx_UReg_16Bit BUFFER_OFFSET_2:10;     /**< \brief [9:0]   Signed offset calibration value for Buffer
                                                                    in VDDA/2 Full Range (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP0_BUFFER_OFFSET_2_Bits;

/** \brief Note:  There are three sets of 6 DCSG registers in GRP1, one for each DCSG in the group
Trim values to load into the lower 6 bits of the TEST register in the DCSG */
typedef struct _Ifx_SFLASH_GRP1_DCSG_TEST_VREF_TRIM_Bits
{
    __IO Ifx_UReg_32Bit VREF_TRIM:6;            /**< \brief [5:0]   Signed offset calibration value for sampler
                                                                    in differential mode in DIFF_ER (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_SFLASH_GRP1_DCSG_TEST_VREF_TRIM_Bits;

/** \brief Trim value to load into the Analog Comparator Differential Mode Calibration register */
typedef struct _Ifx_SFLASH_GRP1_DCSG_DIFF_CALOFFSET_Bits
{
    __IO Ifx_UReg_32Bit OFFSET_DIFF_ER:10;      /**< \brief [9:0]   Signed offset calibration value for sampler
                                                                    in differential mode in DIFF_ER (rw) */
    __IO Ifx_UReg_32Bit OFFSET_DIFF_FR:10;      /**< \brief [19:10] Signed offset calibration value for sampler
                                                                    in differential mode in DIFF_FR (rw) */
    __IO Ifx_UReg_32Bit OFFSET_DIFF_RR:10;      /**< \brief [29:20] Signed offset calibration value for sampler
                                                                    in differential mode in DIFF_RR (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_SFLASH_GRP1_DCSG_DIFF_CALOFFSET_Bits;

/** \brief Trim value to load into the Analog Comparator Single Ended Mode Calibration register */
typedef struct _Ifx_SFLASH_GRP1_DCSG_SE_CALOFFSET_Bits
{
    __IO Ifx_UReg_32Bit OFFSET_SE_SP:10;        /**< \brief [9:0]   Signed offset calibration value for sampler
                                                                    in single ended P mode (rw) */
    __IO Ifx_UReg_32Bit OFFSET_SE_SN:10;        /**< \brief [19:10] Signed offset calibration value for sampler
                                                                    in single ended N mode (rw) */
    __IO Ifx_UReg_32Bit OFFSET_A_VS_B:10;       /**< \brief [29:20] Signed offset calibration value for sampler
                                                                    in A vs B mode (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_SFLASH_GRP1_DCSG_SE_CALOFFSET_Bits;

/** \brief Trim value to load into the Analog Comparator Differential Mode Gain 1 register */
typedef struct _Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_1_Bits
{
    __IO Ifx_UReg_32Bit GAIN_DIFF_ER:11;        /**< \brief [10:0]  Signed gain calibration value for sampler
                                                                    in differential mode in DIFF_ER (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit GAIN_DIFF_FR:11;        /**< \brief [26:16] Signed gain calibration value for sampler
                                                                    in differential mode in DIFF_FR (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_1_Bits;

/** \brief Trim value to load into the Analog Comparator Differential Mode Gain 2 register */
typedef struct _Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_2_Bits
{
    __IO Ifx_UReg_32Bit GAIN_DIFF_RR:11;        /**< \brief [10:0]  Signed gain calibration value for sampler
                                                                    in differential mode in DIFF_RR (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_2_Bits;

/** \brief Trim value to load into the Analog Comparator Single Ended Mode Gain register */
typedef struct _Ifx_SFLASH_GRP1_DCSG_SE_CALGAIN_Bits
{
    __IO Ifx_UReg_32Bit GAIN_SE_SP:11;          /**< \brief [10:0]  Signed gain calibration value for sampler
                                                                    in single ended P mode (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit GAIN_SE_SN:11;          /**< \brief [26:16] Signed gain calibration value for sampler
                                                                    in single ended N mode (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_SFLASH_GRP1_DCSG_SE_CALGAIN_Bits;

/** \brief Trim value to load into the DAC Offset CNFG1 register */
typedef struct _Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG1_Bits
{
    __IO Ifx_UReg_16Bit DAC_OFFSET_CNFG1:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG1 (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG1_Bits;

/** \brief Trim value to load into the DAC Offset CNFG2 register */
typedef struct _Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG2_Bits
{
    __IO Ifx_UReg_16Bit DAC_OFFSET_CNFG2:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG2 (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG2_Bits;

/** \brief Trim value to load into the DAC Offset CNFG3 register */
typedef struct _Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG3_Bits
{
    __IO Ifx_UReg_16Bit DAC_OFFSET_CNFG3:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG3 (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG3_Bits;

/** \brief Trim value to load into the DAC Offset CNFG4 register */
typedef struct _Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG4_Bits
{
    __IO Ifx_UReg_16Bit DAC_OFFSET_CNFG4:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG4 (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG4_Bits;

/** \brief Trim value to load into the DAC Offset CNFG5 register */
typedef struct _Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG5_Bits
{
    __IO Ifx_UReg_16Bit DAC_OFFSET_CNFG5:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG5 (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG5_Bits;

/** \brief Trim value to load into the DAC Gain CNFG1 register */
typedef struct _Ifx_SFLASH_GRP1_DAC_GAIN_CNFG1_Bits
{
    __IO Ifx_UReg_16Bit DAC_GAIN_CNFG1:11;      /**< \brief [10:0]  DAC GAIN CNFG1 (rw) */
    __I  Ifx_UReg_16Bit :5;                     /**< \brief [15:11] \internal Reserved */
} Ifx_SFLASH_GRP1_DAC_GAIN_CNFG1_Bits;

/** \brief Trim value to load into the DAC Gain CNFG2 register */
typedef struct _Ifx_SFLASH_GRP1_DAC_GAIN_CNFG2_Bits
{
    __IO Ifx_UReg_16Bit DAC_GAIN_CNFG2:11;      /**< \brief [10:0]  DAC GAIN CNFG2 (rw) */
    __I  Ifx_UReg_16Bit :5;                     /**< \brief [15:11] \internal Reserved */
} Ifx_SFLASH_GRP1_DAC_GAIN_CNFG2_Bits;

/** \brief Trim value to load into the DAC Gain CNFG3 register */
typedef struct _Ifx_SFLASH_GRP1_DAC_GAIN_CNFG3_Bits
{
    __IO Ifx_UReg_16Bit DAC_GAIN_CNFG3:11;      /**< \brief [10:0]  DAC GAIN CNFG3 (rw) */
    __I  Ifx_UReg_16Bit :5;                     /**< \brief [15:11] \internal Reserved */
} Ifx_SFLASH_GRP1_DAC_GAIN_CNFG3_Bits;

/** \brief Trim value to load into the DAC Gain CNFG4 register */
typedef struct _Ifx_SFLASH_GRP1_DAC_GAIN_CNFG4_Bits
{
    __IO Ifx_UReg_16Bit DAC_GAIN_CNFG4:11;      /**< \brief [10:0]  DAC GAIN CNFG4 (rw) */
    __I  Ifx_UReg_16Bit :5;                     /**< \brief [15:11] \internal Reserved */
} Ifx_SFLASH_GRP1_DAC_GAIN_CNFG4_Bits;

/** \brief Trim value to load into the DAC Gain CNFG5 register */
typedef struct _Ifx_SFLASH_GRP1_DAC_GAIN_CNFG5_Bits
{
    __IO Ifx_UReg_16Bit DAC_GAIN_CNFG5:11;      /**< \brief [10:0]  DAC GAIN CNFG5 (rw) */
    __I  Ifx_UReg_16Bit :5;                     /**< \brief [15:11] \internal Reserved */
} Ifx_SFLASH_GRP1_DAC_GAIN_CNFG5_Bits;

/** \brief Trim value to load into the Buffer Offset 1 register */
typedef struct _Ifx_SFLASH_GRP1_BUFFER_OFFSET_1_Bits
{
    __IO Ifx_UReg_16Bit BUFFER_OFFSET_1:10;     /**< \brief [9:0]   Trim value to load into the Buffer Offset 1
                                                                    register (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP1_BUFFER_OFFSET_1_Bits;

/** \brief Trim value to load into the Buffer Offset 2 register */
typedef struct _Ifx_SFLASH_GRP1_BUFFER_OFFSET_2_Bits
{
    __IO Ifx_UReg_16Bit BUFFER_OFFSET_2:10;     /**< \brief [9:0]   Trim value to load into the Buffer Offset 2
                                                                    register (rw) */
    __I  Ifx_UReg_16Bit :6;                     /**< \brief [15:10] \internal Reserved */
} Ifx_SFLASH_GRP1_BUFFER_OFFSET_2_Bits;

/** \brief Trim value to convert counts to degrees C using the formula temp = VBE * A - B.  VBE is a floating point voltage. */
typedef struct _Ifx_SFLASH_SAR_TEMP_COEF_A_Bits
{
    __IO Ifx_UReg_16Bit DATA16:16;              /**< \brief [15:0]  Trim value to convert counts to degrees C
                                                                    using the formula temp = VBE * A - B.
                                                                    VBE is a floating point voltage. (rw) */
} Ifx_SFLASH_SAR_TEMP_COEF_A_Bits;

/** \brief Trim value to convert counts to degrees C using the formula temp = VBE * A - B.  VBE is a floating point voltage. */
typedef struct _Ifx_SFLASH_SAR_TEMP_COEF_B_Bits
{
    __IO Ifx_UReg_16Bit DATA16:16;              /**< \brief [15:0]  Trim value to convert counts to degrees C
                                                                    using the formula temp = VBE * A - B.
                                                                    VBE is a floating point voltage. (rw) */
} Ifx_SFLASH_SAR_TEMP_COEF_B_Bits;

/** \brief LDO trim value for 0.9V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
typedef struct _Ifx_SFLASH_LDO_0P9V_TRIM_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]   (rw) */
} Ifx_SFLASH_LDO_0P9V_TRIM_Bits;

/** \brief LDO trim value for 1.0V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
typedef struct _Ifx_SFLASH_LDO_1P0V_TRIM_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]   (rw) */
} Ifx_SFLASH_LDO_1P0V_TRIM_Bits;

/** \brief LDO trim value for 1.1V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
typedef struct _Ifx_SFLASH_LDO_1P1V_TRIM_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]   (rw) */
} Ifx_SFLASH_LDO_1P1V_TRIM_Bits;

/** \brief LDO trim value for 1.2V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
typedef struct _Ifx_SFLASH_LDO_1P2V_TRIM_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]   (rw) */
} Ifx_SFLASH_LDO_1P2V_TRIM_Bits;

/** \brief Wakeup delay values for ULP, LP, MF and OD modes (4 values) loaded to the PWR_TRIM_WAKE_CTL register */
typedef struct _Ifx_SFLASH_PWR_TRIM_WAKE_CTL_Bits
{
    __IO Ifx_UReg_32Bit WAKE_DELAY_0P9V:8;      /**< \brief [7:0]   When changing power modes, thie appropriate
                                                                    byte within this structure needs to be copied into
                                                                    SRSS.PWR_TRIM_WAKE_CTL.WAKE_DELAY.CDT 290172 (rw) */
    __IO Ifx_UReg_32Bit WAKE_DELAY_1P0V:8;      /**< \brief [15:8]  When changing power modes, thie appropriate
                                                                    byte within this structure needs to be copied into
                                                                    SRSS.PWR_TRIM_WAKE_CTL.WAKE_DELAY.CDT 290172 (rw) */
    __IO Ifx_UReg_32Bit WAKE_DELAY_1P1V:8;      /**< \brief [23:16] When changing power modes, thie appropriate
                                                                    byte within this structure needs to be copied into
                                                                    SRSS.PWR_TRIM_WAKE_CTL.WAKE_DELAY.CDT 290172 (rw) */
    __IO Ifx_UReg_32Bit WAKE_DELAY_1P2V:8;      /**< \brief [31:24] When changing power modes, thie appropriate
                                                                    byte within this structure needs to be copied into
                                                                    SRSS.PWR_TRIM_WAKE_CTL.WAKE_DELAY.CDT 290172 (rw) */
} Ifx_SFLASH_PWR_TRIM_WAKE_CTL_Bits;

/** \brief Signature that indicates that the sort trims are valid = 0x631A_1FAC */
typedef struct _Ifx_SFLASH_BASIC_TRIMS_SORT_FLAG_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Signature that indicates that the sort
                                                                    trims are valid = 0x631A_1FAC (rw) */
} Ifx_SFLASH_BASIC_TRIMS_SORT_FLAG_Bits;

/** \brief Copy of the BASIC_TRIM values from EFUSE.  Used in SORT and PROVISIONED life cycles before BASIC_TRIM values are written to the efuses */
typedef struct _Ifx_SFLASH_BASIC_TRIM_SORT_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Copy of the BASIC_TRIM values from EFUSE.
                                                                    Used in SORT and PROVISIONED life cycles before
                                                                    BASIC_TRIM values are written to the efuses (rw) */
} Ifx_SFLASH_BASIC_TRIM_SORT_Bits;

/** \brief Write counter for working copy of counter page */
typedef struct _Ifx_SFLASH_COUNTER_FLASH_ROW6_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]   (rw) */
} Ifx_SFLASH_COUNTER_FLASH_ROW6_Bits;

/** \brief CRC of the BOOTROW -- See Boot SAS 12.1 'Security Requirements' item #5 */
typedef struct _Ifx_SFLASH_BOOTROW_CRC_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]   (rw) */
} Ifx_SFLASH_BOOTROW_CRC_Bits;

/** \brief IFX RMA Key Revocation to allow for using the second key if the first key is revoked due to compromised. The pattern of 1-byte state that indicate the key has been revoked can be any numbers but not all zeros or all ones */
typedef struct _Ifx_SFLASH_IFX_RMA_MASTER_KEY_REVOCATION_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   IFX RMA Key Revocation to allow for using
                                                                    the second key if the first key is revoked due to
                                                                    compromised.
                                                                    The pattern of 1-byte state that indicate the key
                                                                    has been revoked can be any numbers but not all
                                                                    zeros or all ones (rw) */
} Ifx_SFLASH_IFX_RMA_MASTER_KEY_REVOCATION_Bits;

/** \brief OEM Root Of Trust Key Revocation to allow for using the second key if the first key is revoked due to compromised. The pattern of 1-byte state that indicate the key has been revoked can be any numbers but not all zeros or all ones */
typedef struct _Ifx_SFLASH_OEM_ROT_KEY_REVOCATION_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   8-bit ANTI_ROLLBACK_COUNTER is used to
                                                                    prevent rollback of first image - OEM_S or PROT_FW (rw) */
} Ifx_SFLASH_OEM_ROT_KEY_REVOCATION_Bits;

/** \brief 8-bit ANTI_ROLLBACK_COUNTER for RAM Apps */
typedef struct _Ifx_SFLASH_NV_COUNTER_RAMAPP_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   8-bit ANTI_ROLLBACK_COUNTER for RAM Apps (rw) */
} Ifx_SFLASH_NV_COUNTER_RAMAPP_Bits;

/** \brief 8-bit ANTI_ROLLBACK_COUNTER is used to prevent rollback of first image - OEM_S or PROT_FW */
typedef struct _Ifx_SFLASH_NV_COUNTER_A1_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   8-bit ANTI_ROLLBACK_COUNTER is used to
                                                                    prevent rollback of first image - OEM_S or PROT_FW (rw) */
} Ifx_SFLASH_NV_COUNTER_A1_Bits;

/** \brief 8-bit ANTI_ROLLBACK_COUNTER is used to prevent rollback of second image */
typedef struct _Ifx_SFLASH_NV_COUNTER_A2_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   8-bit ANTI_ROLLBACK_COUNTER is used to
                                                                    prevent rollback of second image (rw) */
} Ifx_SFLASH_NV_COUNTER_A2_Bits;

/** \brief OEM assets are finalized in SFLASH, no further update is allowed vs. further updates are allowed */
typedef struct _Ifx_SFLASH_PROV_OEM_COMPLETE_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  OEM assets are finalized in SFLASH, no
                                                                    further update is allowed vs.
                                                                    further updates are allowed (rw) */
} Ifx_SFLASH_PROV_OEM_COMPLETE_Bits;

/** \brief Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
typedef struct _Ifx_SFLASH_HASH_SLOT_1_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   SHA-256 hash of L1 image.
                                                                    Updated after signature check succeeds. (rw) */
} Ifx_SFLASH_HASH_SLOT_1_Bits;

/** \brief Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
typedef struct _Ifx_SFLASH_HASH_SLOT_2_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   SHA-256 hash of L2 image.
                                                                    Updated after signature check succeeds. (rw) */
} Ifx_SFLASH_HASH_SLOT_2_Bits;

/** \brief Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
typedef struct _Ifx_SFLASH_HASH_SLOT_3_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]    (rw) */
} Ifx_SFLASH_HASH_SLOT_3_Bits;

/** \brief Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
typedef struct _Ifx_SFLASH_HASH_SLOT_4_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]    (rw) */
} Ifx_SFLASH_HASH_SLOT_4_Bits;

/** \brief Secure hash list - Count of active entries followed by address/length pairs */
typedef struct _Ifx_SFLASH_SECURE_HASH_LIST_Bits
{
    __IO Ifx_UReg_32Bit DATA8:8;                /**< \brief [7:0]   SHA-256 hash of L2 image.
                                                                    Updated after signature check succeeds. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_SFLASH_SECURE_HASH_LIST_Bits;

/** \brief Protected FW hash list - Count of active entries followed by address / length pairs */
typedef struct _Ifx_SFLASH_PROT_FW_HASH_LIST_Bits
{
    __IO Ifx_UReg_32Bit DATA8:8;                /**< \brief [7:0]    (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_SFLASH_PROT_FW_HASH_LIST_Bits;

/** \brief 6 failed signature counters - 0 = RAM Apps, 1 = loaded image 1, etc. */
typedef struct _Ifx_SFLASH_FAILED_SIGNATURE_COUNTER_Bits
{
    __IO Ifx_UReg_16Bit DATA8:8;                /**< \brief [7:0]   SHA-256 hash of L2 image.
                                                                    Updated after signature check succeeds. (rw) */
    __I  Ifx_UReg_16Bit :8;                     /**< \brief [15:8]  \internal Reserved */
} Ifx_SFLASH_FAILED_SIGNATURE_COUNTER_Bits;

/** \brief Truncated hash of assets in the SECURE_HASH_LIST */
typedef struct _Ifx_SFLASH_SECURE_HASH_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]    (rw) */
} Ifx_SFLASH_SECURE_HASH_Bits;

/** \brief Truncated hash of assets in the PROT_FW_HASH_LIST */
typedef struct _Ifx_SFLASH_PROT_FW_HASH_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]    (rw) */
} Ifx_SFLASH_PROT_FW_HASH_Bits;

/** \brief Tear safe counter for this flash row */
typedef struct _Ifx_SFLASH_COUNTER_FLASH_ROW7_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Tear safe counter for this flash row (rw) */
} Ifx_SFLASH_COUNTER_FLASH_ROW7_Bits;

/** \brief A debug policy, bits are the same as CPUSS.AP_CTL register
When PROT_FW is enabled, Secure debug cannot be updated by OEM policy.
PROT_FW is responsible for disabling the debug ports on the PPCA */
typedef struct _Ifx_SFLASH_ACCESS_RESTRICT_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  A debug policy, bits are the same as
                                                                    CPUSS.AP_CTL register
                                                                    When PROT_FW is enabled, Secure debug cannot be
                                                                    updated by OEM policy.
                                                                    PROT_FW is responsible for disabling the debug
                                                                    ports on the PPCA (rw) */
} Ifx_SFLASH_ACCESS_RESTRICT_Bits;

/** \brief Additional debug policies.  See _Regs tab for details */
typedef struct _Ifx_SFLASH_ACCESS_RESTRICT_2_Bits
{
    __IO Ifx_UReg_32Bit SYS_AP_MMIO:2;          /**< \brief [1:0]   2b'00 - No additional MMIO restrictions for SYS_AP.
                                                                    2b'01 - SYS_AP may access only SRSS_GENERAL2
                                                                    peripherals.
                                                                    It includes BOOT_STATUS, BOOT_DLM_CTL,
                                                                    RES_SOFT_CTL, etc.
                                                                    2b'11 - SYS_AP cannot access any peripherals. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit DEBUG_PINS:4;           /**< \brief [7:4]   0000 - 2 pins (TMS, TCLK), JTAG disabled
                                                                    (MXDFT IP is disabled).
                                                                    0011 - 2 pins (TMS, TCLK), JTAG enabled (MXDFT IP
                                                                    is enabled).
                                                                    0101 - 4 pins (TMS, TCLK, TDO, TDI), JTAG enabled.
                                                                    0110 - 5 pins (TMS, TCLK, TDO, TDI), JTAG enabled.
                                                                    1001 - SWJ pins disabled, JTAG enabled.
                                                                    1010 - SWJ pins disabled, JTAG disabled
                                                                    The 4-bit values here are from a list (0, 3, 5, 6,
                                                                    9, A, C, F) a hamming distance among any pair of
                                                                    values is 2 bits. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [23:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit DEBUG_TAG:8;            /**< \brief [31:24] 0xA3 - valid.
                                                                    Other value - invalid.' (rw) */
} Ifx_SFLASH_ACCESS_RESTRICT_2_Bits;

/** \brief 0xC39D_0001 - 100 ms.
0xC39D_0002 - 20 ms.
0xC39D_0003 - 2 ms.
0x151D_D9BB  (SEC_FALSE) - 0 ms listen window, the feature is disabled.
Other - invalid data.Other - invalid data. */
typedef struct _Ifx_SFLASH_LISTEN_WINDOW_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  0xC39D_0001 - 100 ms.
                                                                    0xC39D_0002 - 20 ms.
                                                                    0xC39D_0003 - 2 ms.
                                                                    0x151D_D9BB  (SEC_FALSE) - 0 ms listen window, the
                                                                    feature is disabled.
                                                                    Other - invalid data.Other - invalid data. (rw) */
} Ifx_SFLASH_LISTEN_WINDOW_Bits;

/** \brief 0x9ADC8D08 (SIMPLE_APP)
0x4FBEEF63 (SECURE_APP)
0xECDB4B1F ( EPB )
0x39B92974 (DUAL_BANK_SIMPLE_APP)
0x77D56A80 (DUAL_BANK_SECURE_APP)
0x4A656DBD (PROT_FW)
0xA155E76E (BOOT_IDLE), no app is expected.
An internal state for a validation of MPC policy.
Other - Boot policy is invalid. */
typedef struct _Ifx_SFLASH_BOOT_CFG_ID_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  0x9ADC8D08 (SIMPLE_APP)
                                                                    0x4FBEEF63 (SECURE_APP)
                                                                    0xECDB4B1F ( EPB )
                                                                    0x39B92974 (DUAL_BANK_SIMPLE_APP)
                                                                    0x77D56A80 (DUAL_BANK_SECURE_APP)
                                                                    0x4A656DBD (PROT_FW)
                                                                    0xA155E76E (BOOT_IDLE), no app is expected.
                                                                    An internal state for a validation of MPC policy.
                                                                    Other - Boot policy is invalid. (rw) */
} Ifx_SFLASH_BOOT_CFG_ID_Bits;

/** \brief An offset from a start of a Flash bank (for flash dual-bank mode) to a 32-bit counter that indicates the valid bank.
Each flash bank must contain this counter. This counter is updated by DFU.
Flash bank is selected to be the lower address range (a start of flash address) if:
* It has a valid counter.
* Its counter value is bigger than for the other flash-bank, if both counters are valid.

For each dual-bank counter, bits [31:16] should be a fixed value (0x5A3C), otherwise counter is invalid. */
typedef struct _Ifx_SFLASH_BOOT_BANK_CTR_OFFSET_Bits
{
    __IO Ifx_UReg_32Bit DATA8:8;                /**< \brief [7:0]   An offset from a start of a Flash bank (for
                                                                    flash dual-bank mode) to a 32-bit counter that
                                                                    indicates the valid bank.
                                                                    Each flash bank must contain this counter.
                                                                    This counter is updated by DFU.
                                                                    Flash bank is selected to be the lower address
                                                                    range (a start of flash address) if:
                                                                    * It has a valid counter.
                                                                    * Its counter value is bigger than for the other
                                                                    flash-bank, if both counters are valid.
                                                                    For each dual-bank counter, bits [31:16] should be
                                                                    a fixed value (0x5A3C), otherwise counter is invalid. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_SFLASH_BOOT_BANK_CTR_OFFSET_Bits;

/** \brief 0xC39D_5455 - Enable hash locking
0x151D_D9BB - Disable hash locking . */
typedef struct _Ifx_SFLASH_BOOT_HASH_LOCKING_Bits
{
    __IO Ifx_UReg_32Bit DATA8:8;                /**< \brief [7:0]   0xC39D_5455 - Enable hash locking
                                                                    0x151D_D9BB - Disable hash locking . (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_SFLASH_BOOT_HASH_LOCKING_Bits;

/** \brief What will be authenticated, or moved from a Shared Secondary Slot after a DFU update.

0x16FF363E (BOOT_AUTH_ALL_MOVE) - Authenticate all images, move from a shared secondary slot on a successful DFU update.
0xEAE22644 (BOOT_AUTH_ALL) - Authenticate all images.
0xFE2D5368 (BOOT_AUTH_ONE) - Authenticate the first image, ignore the other images.
0x71EC07DB (BOOT_AUTH_NONE) - Disable all authentications for LCS=NORMAL_P when ASSET_HASH is not computed. In other cases an invalid combination.
Other - invalid. */
typedef struct _Ifx_SFLASH_BOOT_AUTH_Bits
{
    __IO Ifx_UReg_32Bit DATA8:8;                /**< \brief [7:0]   What will be authenticated, or moved from a
                                                                    Shared Secondary Slot after a DFU update.
                                                                    0x16FF363E (BOOT_AUTH_ALL_MOVE) - Authenticate all
                                                                    images, move from a shared secondary slot on a
                                                                    successful DFU update.
                                                                    0xEAE22644 (BOOT_AUTH_ALL) - Authenticate all images.
                                                                    0xFE2D5368 (BOOT_AUTH_ONE) - Authenticate the first
                                                                    image, ignore the other images.
                                                                    0x71EC07DB (BOOT_AUTH_NONE) - Disable all
                                                                    authentications for LCS=NORMAL_P when ASSET_HASH is
                                                                    not computed. In other cases an invalid combination.
                                                                    Other - invalid. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_SFLASH_BOOT_AUTH_Bits;

/** \brief A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
typedef struct _Ifx_SFLASH_BOOT_APP_LAYOUT_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  A layout of the applications in FLASH.
                                                                    Consists of (addr, size)*5 which may define a
                                                                    layout up to four applications + Shared Secondary Slot. (rw) */
} Ifx_SFLASH_BOOT_APP_LAYOUT_Bits;

/** \brief 4-bit Bitfield - Bits 0-1 are unused, Bits 2-3 control PC2-3 handlers

1 = PCx can only be entered via PCx interrupt handler (Sets CM33_PC_CTL.VALID[bit x] = 1)

0 = PCx is not 'special'.  PC may be switched to this value without CM33_PCx_HANDLER interrupt vector

When Protected FW is active, bit 2 cannot be set from OEM policy */
typedef struct _Ifx_SFLASH_PC_CTL_VALID_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   4-bit Bitfield - Bits 0-1 are unused, Bits
                                                                    2-3 control PC2-3 handlers
                                                                    1 = PCx can only be entered via PCx interrupt
                                                                    handler (Sets CM33_PC_CTL.VALID[bit x] = 1)
                                                                    0 = PCx is not 'special'.
                                                                    PC may be switched to this value without
                                                                    CM33_PCx_HANDLER interrupt vector
                                                                    When Protected FW is active, bit 2 cannot be set
                                                                    from OEM policy (rw) */
} Ifx_SFLASH_PC_CTL_VALID_Bits;

/** \brief Number of 2K blocks to protect at PC0 for OEM_DEVICE_CERT */
typedef struct _Ifx_SFLASH_OEM_DEVICE_CERT_BLOCKS_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   Number of 2K blocks to protect at PC0 for
                                                                    OEM_DEVICE_CERT (rw) */
} Ifx_SFLASH_OEM_DEVICE_CERT_BLOCKS_Bits;

/** \brief PC2_HANDLER is used to switch to PC2 when it is a 'Special' PC */
typedef struct _Ifx_SFLASH_PC2_HANDLER_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  PC2_HANDLER is used to switch to PC2 when
                                                                    it is a 'Special' PC (rw) */
} Ifx_SFLASH_PC2_HANDLER_Bits;

/** \brief PC3_HANDLER is used to switch to PC3 when it is a 'Special' PC */
typedef struct _Ifx_SFLASH_PC3_HANDLER_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  PC3_HANDLER is used to switch to PC3 when
                                                                    it is a 'Special' PC (rw) */
} Ifx_SFLASH_PC3_HANDLER_Bits;

/** \brief DFU policy */
typedef struct _Ifx_SFLASH_DFU_POLICY_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  DFU policy (rw) */
} Ifx_SFLASH_DFU_POLICY_Bits;

/** \brief Pointer to OEM device certificate in user flash -- Protected for PC=0 access only */
typedef struct _Ifx_SFLASH_OEM_DEVICE_CERT_ADDR_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Pointer to OEM device certificate in user
                                                                    flash -- Protected for PC=0 access only (rw) */
} Ifx_SFLASH_OEM_DEVICE_CERT_ADDR_Bits;

/** \brief Boundary Scan policy:
-	0x151DD9BB (default), Boundary scan is disabled.
-	0xC39D5455, Boundary scan is enabled. */
typedef struct _Ifx_SFLASH_BOUNDARY_SCAN_EN_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Boundary Scan policy:
                                                                    -	0x151DD9BB (default), Boundary scan is disabled.
                                                                    -	0xC39D5455, Boundary scan is enabled. (rw) */
} Ifx_SFLASH_BOUNDARY_SCAN_EN_Bits;

/** \brief Reserved for OEM_POLICY expansion */
typedef struct _Ifx_SFLASH_OEM_POLICY_RESERVED_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Reserved for OEM_POLICY expansion (rw) */
} Ifx_SFLASH_OEM_POLICY_RESERVED_Bits;

/** \brief Primary OEM_ROT_KEY */
typedef struct _Ifx_SFLASH_OEM_ROT_KEY_0_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   Primary OEM_ROT_KEY (rw) */
} Ifx_SFLASH_OEM_ROT_KEY_0_Bits;

/** \brief Secondary OEM_ROT_KEY */
typedef struct _Ifx_SFLASH_OEM_ROT_KEY_1_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   Secondary OEM_ROT_KEY (rw) */
} Ifx_SFLASH_OEM_ROT_KEY_1_Bits;

/** \brief Tear safe counter for this flash row */
typedef struct _Ifx_SFLASH_COUNTER_FLASH_ROW8_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Tear safe counter for this flash row (rw) */
} Ifx_SFLASH_COUNTER_FLASH_ROW8_Bits;

/** \brief Unused */
typedef struct _Ifx_SFLASH_UNUSED_2_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   Unused (rw) */
} Ifx_SFLASH_UNUSED_2_Bits;

/** \brief Number of flash MPC structs in the following table */
typedef struct _Ifx_SFLASH_N_FLASH_MPC_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   Number of flash MPC structs in the
                                                                    following table (rw) */
} Ifx_SFLASH_N_FLASH_MPC_Bits;

/** \brief RAM MPC structs followed by Flash MPC structs */
typedef struct _Ifx_SFLASH_MPC_STRUCT_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  RAM MPC structs followed by Flash MPC
                                                                    structs (rw) */
} Ifx_SFLASH_MPC_STRUCT_Bits;

/** \brief Start address of protected FW - Used to set MPC policy */
typedef struct _Ifx_SFLASH_PROT_FW_ADDR_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Size of protected FW RW area in flash (rw) */
} Ifx_SFLASH_PROT_FW_ADDR_Bits;

/** \brief Size of protected FW */
typedef struct _Ifx_SFLASH_PROT_FW_SIZE_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Start of protected FW RAM - Used to set MPC
                                                                    policy (rw) */
} Ifx_SFLASH_PROT_FW_SIZE_Bits;

/** \brief Start of protected FW RW area in flash - Used to set MPC policy */
typedef struct _Ifx_SFLASH_PROT_FW_RW_ADDR_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Size of protected FW RAM (rw) */
} Ifx_SFLASH_PROT_FW_RW_ADDR_Bits;

/** \brief Size of protected FW RW area in flash */
typedef struct _Ifx_SFLASH_PROT_FW_RW_SIZE_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Size of protected FW RW area in flash (rw) */
} Ifx_SFLASH_PROT_FW_RW_SIZE_Bits;

/** \brief Start of protected FW RAM - Used to set MPC policy */
typedef struct _Ifx_SFLASH_PROT_FW_RAM_ADDR_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Start of protected FW RAM - Used to set MPC
                                                                    policy (rw) */
} Ifx_SFLASH_PROT_FW_RAM_ADDR_Bits;

/** \brief Size of protected FW RAM */
typedef struct _Ifx_SFLASH_PROT_FW_RAM_SIZE_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Size of protected FW RAM (rw) */
} Ifx_SFLASH_PROT_FW_RAM_SIZE_Bits;

/** \brief 0xC39D_5455 (SEC_TRUE), the assets are finalized in SFLASH, no further update is allowed.
0x151D_D9BB (SEC_FALSE), cyapp_prot_fw_policy may be called multiple times to rewrite the PROT_FW assets in SFLASH.
Other, the same as SEC_TRUE. */
typedef struct _Ifx_SFLASH_PROT_FW_COMPLETE_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  0xC39D_5455 (SEC_TRUE), the assets are
                                                                    finalized in SFLASH, no further update is allowed.
                                                                    0x151D_D9BB (SEC_FALSE), cyapp_prot_fw_policy may
                                                                    be called multiple times to rewrite the PROT_FW
                                                                    assets in SFLASH.
                                                                    Other, the same as SEC_TRUE. (rw) */
} Ifx_SFLASH_PROT_FW_COMPLETE_Bits;

/** \brief Tear safe counter for this flash row */
typedef struct _Ifx_SFLASH_COUNTER_FLASH_ROW9_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Tear safe counter for this flash row (rw) */
} Ifx_SFLASH_COUNTER_FLASH_ROW9_Bits;

/** \brief Infineon Root of Trust Key 0 */
typedef struct _Ifx_SFLASH_IFX_ROT_KEY_0_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   Infineon Root of Trust Key 0 (rw) */
} Ifx_SFLASH_IFX_ROT_KEY_0_Bits;

/** \brief Infineon Root of Trust Key 1 */
typedef struct _Ifx_SFLASH_IFX_ROT_KEY_1_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   Infineon Root of Trust Key 1 (rw) */
} Ifx_SFLASH_IFX_ROT_KEY_1_Bits;

/** \brief Infineon RMA Key 0 */
typedef struct _Ifx_SFLASH_IFX_RMA_MASTER_KEY_0_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   Infineon RMA Key 0 (rw) */
} Ifx_SFLASH_IFX_RMA_MASTER_KEY_0_Bits;

/** \brief Infineon RMA Key 1 */
typedef struct _Ifx_SFLASH_IFX_RMA_MASTER_KEY_1_Bits
{
    __IO Ifx_UReg_8Bit DATA8:8;                 /**< \brief [7:0]   Infineon RMA Key 1 (rw) */
} Ifx_SFLASH_IFX_RMA_MASTER_KEY_1_Bits;

/** \brief TOC1 - See SAS for definition */
typedef struct _Ifx_SFLASH_TOC1_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  TOC1 - See SAS for definition (rw) */
} Ifx_SFLASH_TOC1_Bits;

/** \brief TOC2 - See SAS for definition */
typedef struct _Ifx_SFLASH_TOC2_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  TOC2 - See SAS for definition (rw) */
} Ifx_SFLASH_TOC2_Bits;

/** \brief See SAS table 3.22 AND 5.1.5 */
typedef struct _Ifx_SFLASH_ASSET_HASH_LIST_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  See SAS table 3.22 AND 5.1.5 (rw) */
} Ifx_SFLASH_ASSET_HASH_LIST_Bits;

/** \brief See SAS table 3.22 AND 5.1.5 */
typedef struct _Ifx_SFLASH_FACTORY_HASH_LIST_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  See SAS table 3.22 AND 5.1.5 (rw) */
} Ifx_SFLASH_FACTORY_HASH_LIST_Bits;

/** \brief Flash Boot - Object Size */
typedef struct _Ifx_SFLASH_FLASH_BOOT_OBJECT_SIZE_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Flash Boot - Object Size (rw) */
} Ifx_SFLASH_FLASH_BOOT_OBJECT_SIZE_Bits;

/** \brief Flash Boot - Major Version */
typedef struct _Ifx_SFLASH_FLASH_BOOT_VERSION_HIGH_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Flash Boot - Major Version (rw) */
} Ifx_SFLASH_FLASH_BOOT_VERSION_HIGH_Bits;

/** \brief Flash Boot - Minor version */
typedef struct _Ifx_SFLASH_FLASH_BOOT_VERSION_LOW_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Flash Boot - Minor version (rw) */
} Ifx_SFLASH_FLASH_BOOT_VERSION_LOW_Bits;

/** \brief Flash Boot - Stack Addr */
typedef struct _Ifx_SFLASH_FB_STACK_ADDR_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Flash Boot - Stack Addr (rw) */
} Ifx_SFLASH_FB_STACK_ADDR_Bits;

/** \brief Flash Boot - Reset vector */
typedef struct _Ifx_SFLASH_FB_RESET_HANDLER_ADDR_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Flash Boot - Reset vector (rw) */
} Ifx_SFLASH_FB_RESET_HANDLER_ADDR_Bits;

/** \brief Flash Boot - Function pointer table */
typedef struct _Ifx_SFLASH_FB_FUNC_LIST_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Flash Boot - Function pointer table (rw) */
} Ifx_SFLASH_FB_FUNC_LIST_Bits;

/** \brief Write counter for HUK flash row + tag indicating HUK flash row */
typedef struct _Ifx_SFLASH_COUNTER_FLASH_HUK_Bits
{
    __IO Ifx_UReg_32Bit DATA32:32;              /**< \brief [31:0]  Write counter for HUK flash row + tag
                                                                    indicating HUK flash row (rw) */
} Ifx_SFLASH_COUNTER_FLASH_HUK_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SFLASH_Registers_union
 * \{   */
/** \brief Indicates Silicon Revision ID of the device */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_SI_REVISION_ID_Bits B;           /**< \brief Bitfield access */
} Ifx_SFLASH_SI_REVISION_ID;

/** \brief Indicates Silicon ID of the device */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_SILICON_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_SFLASH_SILICON_ID;

/** \brief Indicates Family ID of the device */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_FAMILY_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_SFLASH_FAMILY_ID;

/** \brief SFLASH Subversion -- Manually read from 'show log' of repo root */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_SFLASH_SVN_Bits B;               /**< \brief Bitfield access */
} Ifx_SFLASH_SFLASH_SVN;

/** \brief Trim value to load into the SVGS Comparator Configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_SVGS_CMP_CFG_Bits B;             /**< \brief Bitfield access */
} Ifx_SFLASH_SVGS_CMP_CFG;

/** \brief Trim value to load into the  SVGS Comparator trip-point configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_SVGS_CMP_TRIP_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_SVGS_CMP_TRIP;

/** \brief Trim value to load into the SVGS Trim Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_SVGS_TRIM_Bits B;                /**< \brief Bitfield access */
} Ifx_SFLASH_SVGS_TRIM;

/** \brief Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_SAR_INFRA_TRIM_TABLE_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_SAR_INFRA_TRIM_TABLE;

/** \brief Lot Number (3 bytes) */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_DIE_LOT_Bits B;                  /**< \brief Bitfield access */
} Ifx_SFLASH_DIE_LOT;

/** \brief Wafer Number */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_DIE_WAFER_Bits B;                /**< \brief Bitfield access */
} Ifx_SFLASH_DIE_WAFER;

/** \brief X Position on Wafer, CRI Pass/Fail Bin */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_DIE_X_Bits B;                    /**< \brief Bitfield access */
} Ifx_SFLASH_DIE_X;

/** \brief Y Position on Wafer, CHI Pass/Fail Bin */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_DIE_Y_Bits B;                    /**< \brief Bitfield access */
} Ifx_SFLASH_DIE_Y;

/** \brief Sort1/2/3 Pass/Fail Bin */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_DIE_SORT_Bits B;                 /**< \brief Bitfield access */
} Ifx_SFLASH_DIE_SORT;

/** \brief Minor Revision Number */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_DIE_MINOR_Bits B;                /**< \brief Bitfield access */
} Ifx_SFLASH_DIE_MINOR;

/** \brief Day number */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_DIE_DAY_Bits B;                  /**< \brief Bitfield access */
} Ifx_SFLASH_DIE_DAY;

/** \brief Month number */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_DIE_MONTH_Bits B;                /**< \brief Bitfield access */
} Ifx_SFLASH_DIE_MONTH;

/** \brief Year number */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_DIE_YEAR_Bits B;                 /**< \brief Bitfield access */
} Ifx_SFLASH_DIE_YEAR;

/** \brief CSP Panel Id to record panel ID of CSP die */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_CSP_PANEL_ID_Bits B;             /**< \brief Bitfield access */
} Ifx_SFLASH_CSP_PANEL_ID;

/** \brief SARADC STARTUP Control Register */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_GRP0_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_ADC_STARTUPCTRL_VTOICAL_TRIM;

/** \brief SARADC CAL offset per channel */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_ADC_CALOFFSET_Bits B;       /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_ADC_CALOFFSET;

/** \brief Loaded to the ADC_CALGAIN registers (8 in group 0) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1_Bits B;  /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1;

/** \brief Trim value for AFE_CALGAINAFE_1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_1_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_1;

/** \brief Trim value for AFE_CALGAINAFE_2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_2_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_2;

/** \brief Trim value for AFE_CALGAINAFE_3 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_3_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_3;

/** \brief Trim value for AFE_CALGAINAFE_4 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_4_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_4;

/** \brief Trim value for AFE_CALOFFSETAFE_1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_1_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_1;

/** \brief Trim value for AFE_CALOFFSETAFE_2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_2_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_2;

/** \brief Trim value for AFE_CALOFFSETAFE_3 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_3_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_3;

/** \brief Trim value for AFE_CALOFFSETAFE_4 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_4_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_4;

/** \brief SARADC STARTUP Control Register */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_GRP1_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_ADC_STARTUPCTRL_VTOICAL_TRIM;

/** \brief SARADC CAL offset per channel */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_ADC_CALOFFSET_Bits B;       /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_ADC_CALOFFSET;

/** \brief Loaded to the ADC_CALGAIN registers (8 in group 0) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_ADC_CALGAIN_GAINX1_Bits B;  /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_ADC_CALGAIN_GAINX1;

/** \brief Trim value for AFE_CALGAINAFE_1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_1_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_1;

/** \brief Trim value for AFE_CALGAINAFE_2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_2_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_2;

/** \brief Trim value for AFE_CALGAINAFE_3 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_3_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_3;

/** \brief Trim value for AFE_CALGAINAFE_4 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_4_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_4;

/** \brief Trim value for AFE_CALOFFSETAFE_1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_1_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_1;

/** \brief Trim value for AFE_CALOFFSETAFE_2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_2_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_2;

/** \brief Trim value for AFE_CALOFFSETAFE_3 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_3_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_3;

/** \brief Trim value for AFE_CALOFFSETAFE_4 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_4_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_4;

/** \brief SARADC STARTUP Control Register */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_GRP2_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_ADC_STARTUPCTRL_VTOICAL_TRIM;

/** \brief SARADC CAL offset per channel */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP2_ADC_CALOFFSET_Bits B;       /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_ADC_CALOFFSET;

/** \brief Loaded to the ADC_CALGAIN registers (8 in group 0) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP2_ADC_CALGAIN_GAINX1_Bits B;  /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_ADC_CALGAIN_GAINX1;

/** \brief Trim value for AFE_CALGAINAFE_1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_1_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_1;

/** \brief Trim value for AFE_CALGAINAFE_2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_2_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_2;

/** \brief Trim value for AFE_CALGAINAFE_3 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_3_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_3;

/** \brief Trim value for AFE_CALGAINAFE_4 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_4_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_4;

/** \brief Trim value for AFE_CALOFFSETAFE_1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_1_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_1;

/** \brief Trim value for AFE_CALOFFSETAFE_2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_2_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_2;

/** \brief Trim value for AFE_CALOFFSETAFE_3 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_3_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_3;

/** \brief Trim value for AFE_CALOFFSETAFE_4 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_4_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_4;

/** \brief SARADC STARTUP Control Register */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_GRP3_ADC_STARTUPCTRL_VTOICAL_TRIM_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_ADC_STARTUPCTRL_VTOICAL_TRIM;

/** \brief SARADC CAL offset per channel */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP3_ADC_CALOFFSET_Bits B;       /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_ADC_CALOFFSET;

/** \brief Loaded to the ADC_CALGAIN registers (8 in group 0) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1_Bits B;  /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1;

/** \brief Trim value for AFE_CALGAINAFE_1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_1_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_1;

/** \brief Trim value for AFE_CALGAINAFE_2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_2_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_2;

/** \brief Trim value for AFE_CALGAINAFE_3 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_3_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_3;

/** \brief Trim value for AFE_CALGAINAFE_4 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_4_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_4;

/** \brief Trim value for AFE_CALOFFSETAFE_1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_1_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_1;

/** \brief Trim value for AFE_CALOFFSETAFE_2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_2_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_2;

/** \brief Trim value for AFE_CALOFFSETAFE_3 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_3_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_3;

/** \brief Trim value for AFE_CALOFFSETAFE_4 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_4_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_4;

/** \brief Trim value to load into the Analog Comparator Differential Mode Calibration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DCSG_TEST_VREF_TRIM_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DCSG_TEST_VREF_TRIM;

/** \brief Trim value to load into the Analog Comparator Differential Mode Calibration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DCSG_DIFF_CALOFFSET_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DCSG_DIFF_CALOFFSET;

/** \brief Trim value to load into the Analog Comparator Single Ended Mode Calibration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DCSG_SE_CALOFFSET_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DCSG_SE_CALOFFSET;

/** \brief Trim value to load into the Analog Comparator Differential Mode Gain 1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_1_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_1;

/** \brief Trim value to load into the Analog Comparator Differential Mode Gain 2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_2_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_2;

/** \brief Trim value to load into the Analog Comparator Single Ended Mode Gain register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DCSG_SE_CALGAIN_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DCSG_SE_CALGAIN;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG1_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG1;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG2_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG2;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG3_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG3;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG4_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG4;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG5_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG5;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DAC_GAIN_CNFG1_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DAC_GAIN_CNFG1;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DAC_GAIN_CNFG2_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DAC_GAIN_CNFG2;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DAC_GAIN_CNFG3_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DAC_GAIN_CNFG3;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DAC_GAIN_CNFG4_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DAC_GAIN_CNFG4;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_DAC_GAIN_CNFG5_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_DAC_GAIN_CNFG5;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_BUFFER_OFFSET_1_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_BUFFER_OFFSET_1;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP0_BUFFER_OFFSET_2_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_GRP0_BUFFER_OFFSET_2;

/** \brief Note:  There are three sets of 6 DCSG registers in GRP1, one for each DCSG in the group
Trim values to load into the lower 6 bits of the TEST register in the DCSG */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DCSG_TEST_VREF_TRIM_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DCSG_TEST_VREF_TRIM;

/** \brief Trim value to load into the Analog Comparator Differential Mode Calibration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DCSG_DIFF_CALOFFSET_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DCSG_DIFF_CALOFFSET;

/** \brief Trim value to load into the Analog Comparator Single Ended Mode Calibration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DCSG_SE_CALOFFSET_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DCSG_SE_CALOFFSET;

/** \brief Trim value to load into the Analog Comparator Differential Mode Gain 1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_1_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_1;

/** \brief Trim value to load into the Analog Comparator Differential Mode Gain 2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_2_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_2;

/** \brief Trim value to load into the Analog Comparator Single Ended Mode Gain register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DCSG_SE_CALGAIN_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DCSG_SE_CALGAIN;

/** \brief Trim value to load into the DAC Offset CNFG1 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG1_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG1;

/** \brief Trim value to load into the DAC Offset CNFG2 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG2_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG2;

/** \brief Trim value to load into the DAC Offset CNFG3 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG3_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG3;

/** \brief Trim value to load into the DAC Offset CNFG4 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG4_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG4;

/** \brief Trim value to load into the DAC Offset CNFG5 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG5_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG5;

/** \brief Trim value to load into the DAC Gain CNFG1 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DAC_GAIN_CNFG1_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DAC_GAIN_CNFG1;

/** \brief Trim value to load into the DAC Gain CNFG2 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DAC_GAIN_CNFG2_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DAC_GAIN_CNFG2;

/** \brief Trim value to load into the DAC Gain CNFG3 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DAC_GAIN_CNFG3_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DAC_GAIN_CNFG3;

/** \brief Trim value to load into the DAC Gain CNFG4 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DAC_GAIN_CNFG4_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DAC_GAIN_CNFG4;

/** \brief Trim value to load into the DAC Gain CNFG5 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_DAC_GAIN_CNFG5_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_DAC_GAIN_CNFG5;

/** \brief Trim value to load into the Buffer Offset 1 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_BUFFER_OFFSET_1_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_BUFFER_OFFSET_1;

/** \brief Trim value to load into the Buffer Offset 2 register */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_GRP1_BUFFER_OFFSET_2_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_GRP1_BUFFER_OFFSET_2;

/** \brief Trim value to convert counts to degrees C using the formula temp = VBE * A - B.  VBE is a floating point voltage. */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_SAR_TEMP_COEF_A_Bits B;          /**< \brief Bitfield access */
} Ifx_SFLASH_SAR_TEMP_COEF_A;

/** \brief Trim value to convert counts to degrees C using the formula temp = VBE * A - B.  VBE is a floating point voltage. */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_SAR_TEMP_COEF_B_Bits B;          /**< \brief Bitfield access */
} Ifx_SFLASH_SAR_TEMP_COEF_B;

/** \brief LDO trim value for 0.9V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_LDO_0P9V_TRIM_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_LDO_0P9V_TRIM;

/** \brief LDO trim value for 1.0V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_LDO_1P0V_TRIM_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_LDO_1P0V_TRIM;

/** \brief LDO trim value for 1.1V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_LDO_1P1V_TRIM_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_LDO_1P1V_TRIM;

/** \brief LDO trim value for 1.2V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_LDO_1P2V_TRIM_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_LDO_1P2V_TRIM;

/** \brief Wakeup delay values for ULP, LP, MF and OD modes (4 values) loaded to the PWR_TRIM_WAKE_CTL register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PWR_TRIM_WAKE_CTL_Bits B;        /**< \brief Bitfield access */
} Ifx_SFLASH_PWR_TRIM_WAKE_CTL;

/** \brief Signature that indicates that the sort trims are valid = 0x631A_1FAC */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_BASIC_TRIMS_SORT_FLAG_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_BASIC_TRIMS_SORT_FLAG;

/** \brief Copy of the BASIC_TRIM values from EFUSE.  Used in SORT and PROVISIONED life cycles before BASIC_TRIM values are written to the efuses */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_BASIC_TRIM_SORT_Bits B;          /**< \brief Bitfield access */
} Ifx_SFLASH_BASIC_TRIM_SORT;

/** \brief Write counter for working copy of counter page */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_COUNTER_FLASH_ROW6_Bits B;       /**< \brief Bitfield access */
} Ifx_SFLASH_COUNTER_FLASH_ROW6;

/** \brief CRC of the BOOTROW -- See Boot SAS 12.1 'Security Requirements' item #5 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_BOOTROW_CRC_Bits B;              /**< \brief Bitfield access */
} Ifx_SFLASH_BOOTROW_CRC;

/** \brief IFX RMA Key Revocation to allow for using the second key if the first key is revoked due to compromised. The pattern of 1-byte state that indicate the key has been revoked can be any numbers but not all zeros or all ones */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_IFX_RMA_MASTER_KEY_REVOCATION_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_IFX_RMA_MASTER_KEY_REVOCATION;

/** \brief OEM Root Of Trust Key Revocation to allow for using the second key if the first key is revoked due to compromised. The pattern of 1-byte state that indicate the key has been revoked can be any numbers but not all zeros or all ones */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_OEM_ROT_KEY_REVOCATION_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_OEM_ROT_KEY_REVOCATION;

/** \brief 8-bit ANTI_ROLLBACK_COUNTER for RAM Apps */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_NV_COUNTER_RAMAPP_Bits B;        /**< \brief Bitfield access */
} Ifx_SFLASH_NV_COUNTER_RAMAPP;

/** \brief 8-bit ANTI_ROLLBACK_COUNTER is used to prevent rollback of first image - OEM_S or PROT_FW */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_NV_COUNTER_A1_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_NV_COUNTER_A1;

/** \brief 8-bit ANTI_ROLLBACK_COUNTER is used to prevent rollback of second image */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_NV_COUNTER_A2_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_NV_COUNTER_A2;

/** \brief OEM assets are finalized in SFLASH, no further update is allowed vs. further updates are allowed */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PROV_OEM_COMPLETE_Bits B;        /**< \brief Bitfield access */
} Ifx_SFLASH_PROV_OEM_COMPLETE;

/** \brief Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds. */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_HASH_SLOT_1_Bits B;              /**< \brief Bitfield access */
} Ifx_SFLASH_HASH_SLOT_1;

/** \brief Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds. */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_HASH_SLOT_2_Bits B;              /**< \brief Bitfield access */
} Ifx_SFLASH_HASH_SLOT_2;

/** \brief Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds. */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_HASH_SLOT_3_Bits B;              /**< \brief Bitfield access */
} Ifx_SFLASH_HASH_SLOT_3;

/** \brief Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds. */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_HASH_SLOT_4_Bits B;              /**< \brief Bitfield access */
} Ifx_SFLASH_HASH_SLOT_4;

/** \brief Secure hash list - Count of active entries followed by address/length pairs */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_SECURE_HASH_LIST_Bits B;         /**< \brief Bitfield access */
} Ifx_SFLASH_SECURE_HASH_LIST;

/** \brief Protected FW hash list - Count of active entries followed by address / length pairs */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PROT_FW_HASH_LIST_Bits B;        /**< \brief Bitfield access */
} Ifx_SFLASH_PROT_FW_HASH_LIST;

/** \brief 6 failed signature counters - 0 = RAM Apps, 1 = loaded image 1, etc. */
typedef union
{
    __IO Ifx_UReg_16Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_16Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_FAILED_SIGNATURE_COUNTER_Bits B; /**< \brief Bitfield access */
} Ifx_SFLASH_FAILED_SIGNATURE_COUNTER;

/** \brief Truncated hash of assets in the SECURE_HASH_LIST */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_SECURE_HASH_Bits B;              /**< \brief Bitfield access */
} Ifx_SFLASH_SECURE_HASH;

/** \brief Truncated hash of assets in the PROT_FW_HASH_LIST */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_PROT_FW_HASH_Bits B;             /**< \brief Bitfield access */
} Ifx_SFLASH_PROT_FW_HASH;

/** \brief Tear safe counter for this flash row */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_COUNTER_FLASH_ROW7_Bits B;       /**< \brief Bitfield access */
} Ifx_SFLASH_COUNTER_FLASH_ROW7;

/** \brief A debug policy, bits are the same as CPUSS.AP_CTL register
When PROT_FW is enabled, Secure debug cannot be updated by OEM policy.
PROT_FW is responsible for disabling the debug ports on the PPCA */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_ACCESS_RESTRICT_Bits B;          /**< \brief Bitfield access */
} Ifx_SFLASH_ACCESS_RESTRICT;

/** \brief Additional debug policies.  See _Regs tab for details */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_ACCESS_RESTRICT_2_Bits B;        /**< \brief Bitfield access */
} Ifx_SFLASH_ACCESS_RESTRICT_2;

/** \brief 0xC39D_0001 - 100 ms.
0xC39D_0002 - 20 ms.
0xC39D_0003 - 2 ms.
0x151D_D9BB  (SEC_FALSE) - 0 ms listen window, the feature is disabled.
Other - invalid data.Other - invalid data. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_LISTEN_WINDOW_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_LISTEN_WINDOW;

/** \brief 0x9ADC8D08 (SIMPLE_APP)
0x4FBEEF63 (SECURE_APP)
0xECDB4B1F ( EPB )
0x39B92974 (DUAL_BANK_SIMPLE_APP)
0x77D56A80 (DUAL_BANK_SECURE_APP)
0x4A656DBD (PROT_FW)
0xA155E76E (BOOT_IDLE), no app is expected.
An internal state for a validation of MPC policy.
Other - Boot policy is invalid. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_BOOT_CFG_ID_Bits B;              /**< \brief Bitfield access */
} Ifx_SFLASH_BOOT_CFG_ID;

/** \brief An offset from a start of a Flash bank (for flash dual-bank mode) to a 32-bit counter that indicates the valid bank.
Each flash bank must contain this counter. This counter is updated by DFU.
Flash bank is selected to be the lower address range (a start of flash address) if:
* It has a valid counter.
* Its counter value is bigger than for the other flash-bank, if both counters are valid.

For each dual-bank counter, bits [31:16] should be a fixed value (0x5A3C), otherwise counter is invalid. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_BOOT_BANK_CTR_OFFSET_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_BOOT_BANK_CTR_OFFSET;

/** \brief 0xC39D_5455 - Enable hash locking
0x151D_D9BB - Disable hash locking . */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_BOOT_HASH_LOCKING_Bits B;        /**< \brief Bitfield access */
} Ifx_SFLASH_BOOT_HASH_LOCKING;

/** \brief What will be authenticated, or moved from a Shared Secondary Slot after a DFU update.

0x16FF363E (BOOT_AUTH_ALL_MOVE) - Authenticate all images, move from a shared secondary slot on a successful DFU update.
0xEAE22644 (BOOT_AUTH_ALL) - Authenticate all images.
0xFE2D5368 (BOOT_AUTH_ONE) - Authenticate the first image, ignore the other images.
0x71EC07DB (BOOT_AUTH_NONE) - Disable all authentications for LCS=NORMAL_P when ASSET_HASH is not computed. In other cases an invalid combination.
Other - invalid. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_BOOT_AUTH_Bits B;                /**< \brief Bitfield access */
} Ifx_SFLASH_BOOT_AUTH;

/** \brief A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_BOOT_APP_LAYOUT_Bits B;          /**< \brief Bitfield access */
} Ifx_SFLASH_BOOT_APP_LAYOUT;

/** \brief 4-bit Bitfield - Bits 0-1 are unused, Bits 2-3 control PC2-3 handlers

1 = PCx can only be entered via PCx interrupt handler (Sets CM33_PC_CTL.VALID[bit x] = 1)

0 = PCx is not 'special'.  PC may be switched to this value without CM33_PCx_HANDLER interrupt vector

When Protected FW is active, bit 2 cannot be set from OEM policy */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_PC_CTL_VALID_Bits B;             /**< \brief Bitfield access */
} Ifx_SFLASH_PC_CTL_VALID;

/** \brief Number of 2K blocks to protect at PC0 for OEM_DEVICE_CERT */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_OEM_DEVICE_CERT_BLOCKS_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_OEM_DEVICE_CERT_BLOCKS;

/** \brief PC2_HANDLER is used to switch to PC2 when it is a 'Special' PC */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PC2_HANDLER_Bits B;              /**< \brief Bitfield access */
} Ifx_SFLASH_PC2_HANDLER;

/** \brief PC3_HANDLER is used to switch to PC3 when it is a 'Special' PC */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PC3_HANDLER_Bits B;              /**< \brief Bitfield access */
} Ifx_SFLASH_PC3_HANDLER;

/** \brief DFU policy */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_DFU_POLICY_Bits B;               /**< \brief Bitfield access */
} Ifx_SFLASH_DFU_POLICY;

/** \brief Pointer to OEM device certificate in user flash -- Protected for PC=0 access only */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_OEM_DEVICE_CERT_ADDR_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_OEM_DEVICE_CERT_ADDR;

/** \brief Boundary Scan policy:
-	0x151DD9BB (default), Boundary scan is disabled.
-	0xC39D5455, Boundary scan is enabled. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_BOUNDARY_SCAN_EN_Bits B;         /**< \brief Bitfield access */
} Ifx_SFLASH_BOUNDARY_SCAN_EN;

/** \brief Reserved for OEM_POLICY expansion */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_OEM_POLICY_RESERVED_Bits B;      /**< \brief Bitfield access */
} Ifx_SFLASH_OEM_POLICY_RESERVED;

/** \brief Primary OEM_ROT_KEY */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_OEM_ROT_KEY_0_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_OEM_ROT_KEY_0;

/** \brief Secondary OEM_ROT_KEY */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_OEM_ROT_KEY_1_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_OEM_ROT_KEY_1;

/** \brief Tear safe counter for this flash row */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_COUNTER_FLASH_ROW8_Bits B;       /**< \brief Bitfield access */
} Ifx_SFLASH_COUNTER_FLASH_ROW8;

/** \brief Unused */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_UNUSED_2_Bits B;                 /**< \brief Bitfield access */
} Ifx_SFLASH_UNUSED_2;

/** \brief Number of flash MPC structs in the following table */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_N_FLASH_MPC_Bits B;              /**< \brief Bitfield access */
} Ifx_SFLASH_N_FLASH_MPC;

/** \brief RAM MPC structs followed by Flash MPC structs */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_MPC_STRUCT_Bits B;               /**< \brief Bitfield access */
} Ifx_SFLASH_MPC_STRUCT;

/** \brief Start address of protected FW - Used to set MPC policy */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PROT_FW_ADDR_Bits B;             /**< \brief Bitfield access */
} Ifx_SFLASH_PROT_FW_ADDR;

/** \brief Size of protected FW */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PROT_FW_SIZE_Bits B;             /**< \brief Bitfield access */
} Ifx_SFLASH_PROT_FW_SIZE;

/** \brief Start of protected FW RW area in flash - Used to set MPC policy */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PROT_FW_RW_ADDR_Bits B;          /**< \brief Bitfield access */
} Ifx_SFLASH_PROT_FW_RW_ADDR;

/** \brief Size of protected FW RW area in flash */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PROT_FW_RW_SIZE_Bits B;          /**< \brief Bitfield access */
} Ifx_SFLASH_PROT_FW_RW_SIZE;

/** \brief Start of protected FW RAM - Used to set MPC policy */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PROT_FW_RAM_ADDR_Bits B;         /**< \brief Bitfield access */
} Ifx_SFLASH_PROT_FW_RAM_ADDR;

/** \brief Size of protected FW RAM */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PROT_FW_RAM_SIZE_Bits B;         /**< \brief Bitfield access */
} Ifx_SFLASH_PROT_FW_RAM_SIZE;

/** \brief 0xC39D_5455 (SEC_TRUE), the assets are finalized in SFLASH, no further update is allowed.
0x151D_D9BB (SEC_FALSE), cyapp_prot_fw_policy may be called multiple times to rewrite the PROT_FW assets in SFLASH.
Other, the same as SEC_TRUE. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_PROT_FW_COMPLETE_Bits B;         /**< \brief Bitfield access */
} Ifx_SFLASH_PROT_FW_COMPLETE;

/** \brief Tear safe counter for this flash row */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_COUNTER_FLASH_ROW9_Bits B;       /**< \brief Bitfield access */
} Ifx_SFLASH_COUNTER_FLASH_ROW9;

/** \brief Infineon Root of Trust Key 0 */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_IFX_ROT_KEY_0_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_IFX_ROT_KEY_0;

/** \brief Infineon Root of Trust Key 1 */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_IFX_ROT_KEY_1_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_IFX_ROT_KEY_1;

/** \brief Infineon RMA Key 0 */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_IFX_RMA_MASTER_KEY_0_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_IFX_RMA_MASTER_KEY_0;

/** \brief Infineon RMA Key 1 */
typedef union
{
    __IO Ifx_UReg_8Bit U;                       /**< \brief Unsigned access */
    __IO Ifx_UReg_8Bit I;                       /**< \brief Signed access */
    Ifx_SFLASH_IFX_RMA_MASTER_KEY_1_Bits B;     /**< \brief Bitfield access */
} Ifx_SFLASH_IFX_RMA_MASTER_KEY_1;

/** \brief TOC1 - See SAS for definition */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_TOC1_Bits B;                     /**< \brief Bitfield access */
} Ifx_SFLASH_TOC1;

/** \brief TOC2 - See SAS for definition */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_TOC2_Bits B;                     /**< \brief Bitfield access */
} Ifx_SFLASH_TOC2;

/** \brief See SAS table 3.22 AND 5.1.5 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_ASSET_HASH_LIST_Bits B;          /**< \brief Bitfield access */
} Ifx_SFLASH_ASSET_HASH_LIST;

/** \brief See SAS table 3.22 AND 5.1.5 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_FACTORY_HASH_LIST_Bits B;        /**< \brief Bitfield access */
} Ifx_SFLASH_FACTORY_HASH_LIST;

/** \brief Flash Boot - Object Size */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_FLASH_BOOT_OBJECT_SIZE_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_FLASH_BOOT_OBJECT_SIZE;

/** \brief Flash Boot - Major Version */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_FLASH_BOOT_VERSION_HIGH_Bits B;  /**< \brief Bitfield access */
} Ifx_SFLASH_FLASH_BOOT_VERSION_HIGH;

/** \brief Flash Boot - Minor version */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_FLASH_BOOT_VERSION_LOW_Bits B;   /**< \brief Bitfield access */
} Ifx_SFLASH_FLASH_BOOT_VERSION_LOW;

/** \brief Flash Boot - Stack Addr */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_FB_STACK_ADDR_Bits B;            /**< \brief Bitfield access */
} Ifx_SFLASH_FB_STACK_ADDR;

/** \brief Flash Boot - Reset vector */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_FB_RESET_HANDLER_ADDR_Bits B;    /**< \brief Bitfield access */
} Ifx_SFLASH_FB_RESET_HANDLER_ADDR;

/** \brief Flash Boot - Function pointer table */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_FB_FUNC_LIST_Bits B;             /**< \brief Bitfield access */
} Ifx_SFLASH_FB_FUNC_LIST;

/** \brief Write counter for HUK flash row + tag indicating HUK flash row */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SFLASH_COUNTER_FLASH_HUK_Bits B;        /**< \brief Bitfield access */
} Ifx_SFLASH_COUNTER_FLASH_HUK;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SFLASH_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief SFLASH object */
typedef volatile struct _Ifx_SFLASH
{
       __I  Ifx_UReg_8Bit                       reserved_0[1];          /**< \brief 0, */
       __IO Ifx_SFLASH_SI_REVISION_ID           SI_REVISION_ID;         /**< \brief 1, Indicates Silicon Revision ID of the device*/
       __IO Ifx_SFLASH_SILICON_ID               SILICON_ID;             /**< \brief 2, Indicates Silicon ID of the device*/
       __IO Ifx_SFLASH_FAMILY_ID                FAMILY_ID;              /**< \brief 4, Indicates Family ID of the device*/
       __I  Ifx_UReg_8Bit                       reserved_6[18];         /**< \brief 6, */
       __IO Ifx_SFLASH_SFLASH_SVN               SFLASH_SVN;             /**< \brief 18, SFLASH Subversion -- Manually read from 'show log' of repo root*/
       __I  Ifx_UReg_8Bit                       reserved_1C[848];       /**< \brief 1C, */
       __IO Ifx_SFLASH_SVGS_CMP_CFG             SVGS_CMP_CFG;           /**< \brief 36C, Trim value to load into the SVGS Comparator Configuration register*/
       __IO Ifx_SFLASH_SVGS_CMP_TRIP            SVGS_CMP_TRIP;          /**< \brief 370, Trim value to load into the  SVGS Comparator trip-point configuration register*/
       __IO Ifx_SFLASH_SVGS_TRIM                SVGS_TRIM;              /**< \brief 374, Trim value to load into the SVGS Trim Register*/
       __IO Ifx_SFLASH_SAR_INFRA_TRIM_TABLE     SAR_INFRA_TRIM_TABLE[17]; /**< \brief 378, Table of trim values loaded to SAR by the mcpass init function.  The table format is as follows:
[32-bits] n_trim_pairs
[32-bits list] (mmio_addr, mmio_value) x (n_trim_pairs)*/
       __I  Ifx_UReg_8Bit                       reserved_3BC[580];      /**< \brief 3BC, */
       __IO Ifx_SFLASH_DIE_LOT                  DIE_LOT[3];             /**< \brief 600, Lot Number (3 bytes)*/
       __IO Ifx_SFLASH_DIE_WAFER                DIE_WAFER;              /**< \brief 603, Wafer Number*/
       __IO Ifx_SFLASH_DIE_X                    DIE_X;                  /**< \brief 604, X Position on Wafer, CRI Pass/Fail Bin*/
       __IO Ifx_SFLASH_DIE_Y                    DIE_Y;                  /**< \brief 605, Y Position on Wafer, CHI Pass/Fail Bin*/
       __IO Ifx_SFLASH_DIE_SORT                 DIE_SORT;               /**< \brief 606, Sort1/2/3 Pass/Fail Bin*/
       __IO Ifx_SFLASH_DIE_MINOR                DIE_MINOR;              /**< \brief 607, Minor Revision Number*/
       __IO Ifx_SFLASH_DIE_DAY                  DIE_DAY;                /**< \brief 608, Day number*/
       __IO Ifx_SFLASH_DIE_MONTH                DIE_MONTH;              /**< \brief 609, Month number*/
       __IO Ifx_SFLASH_DIE_YEAR                 DIE_YEAR;               /**< \brief 60A, Year number*/
       __I  Ifx_UReg_8Bit                       reserved_60B[1];        /**< \brief 60B, */
       __IO Ifx_SFLASH_CSP_PANEL_ID             CSP_PANEL_ID;           /**< \brief 60C, CSP Panel Id to record panel ID of CSP die*/
       __IO Ifx_SFLASH_GRP0_ADC_STARTUPCTRL_VTOICAL_TRIM GRP0_ADC_STARTUPCTRL_VTOICAL_TRIM; /**< \brief 610, SARADC STARTUP Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_611[3];        /**< \brief 611, */
       __IO Ifx_SFLASH_GRP0_ADC_CALOFFSET       GRP0_ADC_CALOFFSET[8];  /**< \brief 614, SARADC CAL offset per channel*/
       __IO Ifx_SFLASH_GRP0_ADC_CALGAIN_GAINX1  GRP0_ADC_CALGAIN_GAINX1[8]; /**< \brief 634, Loaded to the ADC_CALGAIN registers (8 in group 0)*/
       __IO Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_1   GRP0_AFE_CALGAIN_AFE_1; /**< \brief 654, Trim value for AFE_CALGAINAFE_1 register*/
       __IO Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_2   GRP0_AFE_CALGAIN_AFE_2; /**< \brief 658, Trim value for AFE_CALGAINAFE_2 register*/
       __IO Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_3   GRP0_AFE_CALGAIN_AFE_3; /**< \brief 65C, Trim value for AFE_CALGAINAFE_3 register*/
       __IO Ifx_SFLASH_GRP0_AFE_CALGAIN_AFE_4   GRP0_AFE_CALGAIN_AFE_4; /**< \brief 660, Trim value for AFE_CALGAINAFE_4 register*/
       __IO Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_1 GRP0_AFE_CALOFFSET_AFE_1; /**< \brief 664, Trim value for AFE_CALOFFSETAFE_1 register*/
       __IO Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_2 GRP0_AFE_CALOFFSET_AFE_2; /**< \brief 668, Trim value for AFE_CALOFFSETAFE_2 register*/
       __IO Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_3 GRP0_AFE_CALOFFSET_AFE_3; /**< \brief 66C, Trim value for AFE_CALOFFSETAFE_3 register*/
       __IO Ifx_SFLASH_GRP0_AFE_CALOFFSET_AFE_4 GRP0_AFE_CALOFFSET_AFE_4; /**< \brief 670, Trim value for AFE_CALOFFSETAFE_4 register*/
       __IO Ifx_SFLASH_GRP1_ADC_STARTUPCTRL_VTOICAL_TRIM GRP1_ADC_STARTUPCTRL_VTOICAL_TRIM; /**< \brief 674, SARADC STARTUP Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_675[3];        /**< \brief 675, */
       __IO Ifx_SFLASH_GRP1_ADC_CALOFFSET       GRP1_ADC_CALOFFSET[4];  /**< \brief 678, SARADC CAL offset per channel*/
       __IO Ifx_SFLASH_GRP1_ADC_CALGAIN_GAINX1  GRP1_ADC_CALGAIN_GAINX1[4]; /**< \brief 688, Loaded to the ADC_CALGAIN registers (8 in group 0)*/
       __IO Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_1   GRP1_AFE_CALGAIN_AFE_1; /**< \brief 698, Trim value for AFE_CALGAINAFE_1 register*/
       __IO Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_2   GRP1_AFE_CALGAIN_AFE_2; /**< \brief 69C, Trim value for AFE_CALGAINAFE_2 register*/
       __IO Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_3   GRP1_AFE_CALGAIN_AFE_3; /**< \brief 6A0, Trim value for AFE_CALGAINAFE_3 register*/
       __IO Ifx_SFLASH_GRP1_AFE_CALGAIN_AFE_4   GRP1_AFE_CALGAIN_AFE_4; /**< \brief 6A4, Trim value for AFE_CALGAINAFE_4 register*/
       __IO Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_1 GRP1_AFE_CALOFFSET_AFE_1; /**< \brief 6A8, Trim value for AFE_CALOFFSETAFE_1 register*/
       __IO Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_2 GRP1_AFE_CALOFFSET_AFE_2; /**< \brief 6AC, Trim value for AFE_CALOFFSETAFE_2 register*/
       __IO Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_3 GRP1_AFE_CALOFFSET_AFE_3; /**< \brief 6B0, Trim value for AFE_CALOFFSETAFE_3 register*/
       __IO Ifx_SFLASH_GRP1_AFE_CALOFFSET_AFE_4 GRP1_AFE_CALOFFSET_AFE_4; /**< \brief 6B4, Trim value for AFE_CALOFFSETAFE_4 register*/
       __IO Ifx_SFLASH_GRP2_ADC_STARTUPCTRL_VTOICAL_TRIM GRP2_ADC_STARTUPCTRL_VTOICAL_TRIM; /**< \brief 6B8, SARADC STARTUP Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_6B9[3];        /**< \brief 6B9, */
       __IO Ifx_SFLASH_GRP2_ADC_CALOFFSET       GRP2_ADC_CALOFFSET[4];  /**< \brief 6BC, SARADC CAL offset per channel*/
       __IO Ifx_SFLASH_GRP2_ADC_CALGAIN_GAINX1  GRP2_ADC_CALGAIN_GAINX1[4]; /**< \brief 6CC, Loaded to the ADC_CALGAIN registers (8 in group 0)*/
       __IO Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_1   GRP2_AFE_CALGAIN_AFE_1; /**< \brief 6DC, Trim value for AFE_CALGAINAFE_1 register*/
       __IO Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_2   GRP2_AFE_CALGAIN_AFE_2; /**< \brief 6E0, Trim value for AFE_CALGAINAFE_2 register*/
       __IO Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_3   GRP2_AFE_CALGAIN_AFE_3; /**< \brief 6E4, Trim value for AFE_CALGAINAFE_3 register*/
       __IO Ifx_SFLASH_GRP2_AFE_CALGAIN_AFE_4   GRP2_AFE_CALGAIN_AFE_4; /**< \brief 6E8, Trim value for AFE_CALGAINAFE_4 register*/
       __IO Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_1 GRP2_AFE_CALOFFSET_AFE_1; /**< \brief 6EC, Trim value for AFE_CALOFFSETAFE_1 register*/
       __IO Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_2 GRP2_AFE_CALOFFSET_AFE_2; /**< \brief 6F0, Trim value for AFE_CALOFFSETAFE_2 register*/
       __IO Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_3 GRP2_AFE_CALOFFSET_AFE_3; /**< \brief 6F4, Trim value for AFE_CALOFFSETAFE_3 register*/
       __IO Ifx_SFLASH_GRP2_AFE_CALOFFSET_AFE_4 GRP2_AFE_CALOFFSET_AFE_4; /**< \brief 6F8, Trim value for AFE_CALOFFSETAFE_4 register*/
       __IO Ifx_SFLASH_GRP3_ADC_STARTUPCTRL_VTOICAL_TRIM GRP3_ADC_STARTUPCTRL_VTOICAL_TRIM; /**< \brief 6FC, SARADC STARTUP Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_6FD[3];        /**< \brief 6FD, */
       __IO Ifx_SFLASH_GRP3_ADC_CALOFFSET       GRP3_ADC_CALOFFSET[8];  /**< \brief 700, SARADC CAL offset per channel*/
       __IO Ifx_SFLASH_GRP3_ADC_CALGAIN_GAINX1  GRP3_ADC_CALGAIN_GAINX1[8]; /**< \brief 720, Loaded to the ADC_CALGAIN registers (8 in group 0)*/
       __IO Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_1   GRP3_AFE_CALGAIN_AFE_1; /**< \brief 740, Trim value for AFE_CALGAINAFE_1 register*/
       __IO Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_2   GRP3_AFE_CALGAIN_AFE_2; /**< \brief 744, Trim value for AFE_CALGAINAFE_2 register*/
       __IO Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_3   GRP3_AFE_CALGAIN_AFE_3; /**< \brief 748, Trim value for AFE_CALGAINAFE_3 register*/
       __IO Ifx_SFLASH_GRP3_AFE_CALGAIN_AFE_4   GRP3_AFE_CALGAIN_AFE_4; /**< \brief 74C, Trim value for AFE_CALGAINAFE_4 register*/
       __IO Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_1 GRP3_AFE_CALOFFSET_AFE_1; /**< \brief 750, Trim value for AFE_CALOFFSETAFE_1 register*/
       __IO Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_2 GRP3_AFE_CALOFFSET_AFE_2; /**< \brief 754, Trim value for AFE_CALOFFSETAFE_2 register*/
       __IO Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_3 GRP3_AFE_CALOFFSET_AFE_3; /**< \brief 758, Trim value for AFE_CALOFFSETAFE_3 register*/
       __IO Ifx_SFLASH_GRP3_AFE_CALOFFSET_AFE_4 GRP3_AFE_CALOFFSET_AFE_4; /**< \brief 75C, Trim value for AFE_CALOFFSETAFE_4 register*/
       __IO Ifx_SFLASH_GRP0_DCSG_TEST_VREF_TRIM GRP0_DCSG_TEST_VREF_TRIM; /**< \brief 760, Trim value to load into the Analog Comparator Differential Mode Calibration register*/
       __IO Ifx_SFLASH_GRP0_DCSG_DIFF_CALOFFSET GRP0_DCSG_DIFF_CALOFFSET; /**< \brief 764, Trim value to load into the Analog Comparator Differential Mode Calibration register*/
       __IO Ifx_SFLASH_GRP0_DCSG_SE_CALOFFSET   GRP0_DCSG_SE_CALOFFSET; /**< \brief 768, Trim value to load into the Analog Comparator Single Ended Mode Calibration register*/
       __IO Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_1 GRP0_DCSG_DIFF_CALGAIN_1; /**< \brief 76C, Trim value to load into the Analog Comparator Differential Mode Gain 1 register*/
       __IO Ifx_SFLASH_GRP0_DCSG_DIFF_CALGAIN_2 GRP0_DCSG_DIFF_CALGAIN_2; /**< \brief 770, Trim value to load into the Analog Comparator Differential Mode Gain 2 register*/
       __IO Ifx_SFLASH_GRP0_DCSG_SE_CALGAIN     GRP0_DCSG_SE_CALGAIN;   /**< \brief 774, Trim value to load into the Analog Comparator Single Ended Mode Gain register*/
       __I  Ifx_UReg_8Bit                       reserved_778[120];      /**< \brief 778, */
       __IO Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG1    GRP0_DAC_OFFSET_CNFG1;  /**< \brief 7F0, 0*/
       __IO Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG2    GRP0_DAC_OFFSET_CNFG2;  /**< \brief 7F2, 0*/
       __IO Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG3    GRP0_DAC_OFFSET_CNFG3;  /**< \brief 7F4, 0*/
       __IO Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG4    GRP0_DAC_OFFSET_CNFG4;  /**< \brief 7F6, 0*/
       __IO Ifx_SFLASH_GRP0_DAC_OFFSET_CNFG5    GRP0_DAC_OFFSET_CNFG5;  /**< \brief 7F8, 0*/
       __IO Ifx_SFLASH_GRP0_DAC_GAIN_CNFG1      GRP0_DAC_GAIN_CNFG1;    /**< \brief 7FA, 0*/
       __IO Ifx_SFLASH_GRP0_DAC_GAIN_CNFG2      GRP0_DAC_GAIN_CNFG2;    /**< \brief 7FC, 0*/
       __IO Ifx_SFLASH_GRP0_DAC_GAIN_CNFG3      GRP0_DAC_GAIN_CNFG3;    /**< \brief 7FE, 0*/
       __IO Ifx_SFLASH_GRP0_DAC_GAIN_CNFG4      GRP0_DAC_GAIN_CNFG4;    /**< \brief 800, 0*/
       __IO Ifx_SFLASH_GRP0_DAC_GAIN_CNFG5      GRP0_DAC_GAIN_CNFG5;    /**< \brief 802, 0*/
       __IO Ifx_SFLASH_GRP0_BUFFER_OFFSET_1     GRP0_BUFFER_OFFSET_1;   /**< \brief 804, 0*/
       __IO Ifx_SFLASH_GRP0_BUFFER_OFFSET_2     GRP0_BUFFER_OFFSET_2;   /**< \brief 806, 0*/
       __IO Ifx_SFLASH_GRP1_DCSG_TEST_VREF_TRIM GRP1_DCSG_TEST_VREF_TRIM; /**< \brief 808, Note:  There are three sets of 6 DCSG registers in GRP1, one for each DCSG in the group
Trim values to load into the lower 6 bits of the TEST register in the DCSG*/
       __IO Ifx_SFLASH_GRP1_DCSG_DIFF_CALOFFSET GRP1_DCSG_DIFF_CALOFFSET; /**< \brief 80C, Trim value to load into the Analog Comparator Differential Mode Calibration register*/
       __IO Ifx_SFLASH_GRP1_DCSG_SE_CALOFFSET   GRP1_DCSG_SE_CALOFFSET; /**< \brief 810, Trim value to load into the Analog Comparator Single Ended Mode Calibration register*/
       __IO Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_1 GRP1_DCSG_DIFF_CALGAIN_1; /**< \brief 814, Trim value to load into the Analog Comparator Differential Mode Gain 1 register*/
       __IO Ifx_SFLASH_GRP1_DCSG_DIFF_CALGAIN_2 GRP1_DCSG_DIFF_CALGAIN_2; /**< \brief 818, Trim value to load into the Analog Comparator Differential Mode Gain 2 register*/
       __IO Ifx_SFLASH_GRP1_DCSG_SE_CALGAIN     GRP1_DCSG_SE_CALGAIN;   /**< \brief 81C, Trim value to load into the Analog Comparator Single Ended Mode Gain register*/
       __I  Ifx_UReg_8Bit                       reserved_820[48];       /**< \brief 820, */
       __IO Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG1    GRP1_DAC_OFFSET_CNFG1;  /**< \brief 850, Trim value to load into the DAC Offset CNFG1 register*/
       __IO Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG2    GRP1_DAC_OFFSET_CNFG2;  /**< \brief 852, Trim value to load into the DAC Offset CNFG2 register*/
       __IO Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG3    GRP1_DAC_OFFSET_CNFG3;  /**< \brief 854, Trim value to load into the DAC Offset CNFG3 register*/
       __IO Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG4    GRP1_DAC_OFFSET_CNFG4;  /**< \brief 856, Trim value to load into the DAC Offset CNFG4 register*/
       __IO Ifx_SFLASH_GRP1_DAC_OFFSET_CNFG5    GRP1_DAC_OFFSET_CNFG5;  /**< \brief 858, Trim value to load into the DAC Offset CNFG5 register*/
       __IO Ifx_SFLASH_GRP1_DAC_GAIN_CNFG1      GRP1_DAC_GAIN_CNFG1;    /**< \brief 85A, Trim value to load into the DAC Gain CNFG1 register*/
       __IO Ifx_SFLASH_GRP1_DAC_GAIN_CNFG2      GRP1_DAC_GAIN_CNFG2;    /**< \brief 85C, Trim value to load into the DAC Gain CNFG2 register*/
       __IO Ifx_SFLASH_GRP1_DAC_GAIN_CNFG3      GRP1_DAC_GAIN_CNFG3;    /**< \brief 85E, Trim value to load into the DAC Gain CNFG3 register*/
       __IO Ifx_SFLASH_GRP1_DAC_GAIN_CNFG4      GRP1_DAC_GAIN_CNFG4;    /**< \brief 860, Trim value to load into the DAC Gain CNFG4 register*/
       __IO Ifx_SFLASH_GRP1_DAC_GAIN_CNFG5      GRP1_DAC_GAIN_CNFG5;    /**< \brief 862, Trim value to load into the DAC Gain CNFG5 register*/
       __IO Ifx_SFLASH_GRP1_BUFFER_OFFSET_1     GRP1_BUFFER_OFFSET_1;   /**< \brief 864, Trim value to load into the Buffer Offset 1 register*/
       __IO Ifx_SFLASH_GRP1_BUFFER_OFFSET_2     GRP1_BUFFER_OFFSET_2;   /**< \brief 866, Trim value to load into the Buffer Offset 2 register*/
       __I  Ifx_UReg_8Bit                       reserved_868[624];      /**< \brief 868, */
       __IO Ifx_SFLASH_SAR_TEMP_COEF_A          SAR_TEMP_COEF_A;        /**< \brief AD8, Trim value to convert counts to degrees C using the formula temp = VBE * A - B.  VBE is a floating point voltage.*/
       __IO Ifx_SFLASH_SAR_TEMP_COEF_B          SAR_TEMP_COEF_B;        /**< \brief ADA, Trim value to convert counts to degrees C using the formula temp = VBE * A - B.  VBE is a floating point voltage.*/
       __I  Ifx_UReg_8Bit                       reserved_ADC[16];       /**< \brief ADC, */
       __IO Ifx_SFLASH_LDO_0P9V_TRIM            LDO_0P9V_TRIM;          /**< \brief AEC, LDO trim value for 0.9V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings.*/
       __IO Ifx_SFLASH_LDO_1P0V_TRIM            LDO_1P0V_TRIM;          /**< \brief AF0, LDO trim value for 1.0V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings.*/
       __IO Ifx_SFLASH_LDO_1P1V_TRIM            LDO_1P1V_TRIM;          /**< \brief AF4, LDO trim value for 1.1V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings.*/
       __IO Ifx_SFLASH_LDO_1P2V_TRIM            LDO_1P2V_TRIM;          /**< \brief AF8, LDO trim value for 1.2V.  Loaded to the SRSS_PWR_TRIM_PWRSYS_CTL register when changing LDO regulator settings.*/
       __IO Ifx_SFLASH_PWR_TRIM_WAKE_CTL        PWR_TRIM_WAKE_CTL;      /**< \brief AFC, Wakeup delay values for ULP, LP, MF and OD modes (4 values) loaded to the PWR_TRIM_WAKE_CTL register*/
       __I  Ifx_UReg_8Bit                       reserved_B00[64];       /**< \brief B00, */
       __IO Ifx_SFLASH_BASIC_TRIMS_SORT_FLAG    BASIC_TRIMS_SORT_FLAG;  /**< \brief B40, Signature that indicates that the sort trims are valid = 0x631A_1FAC*/
       __IO Ifx_SFLASH_BASIC_TRIM_SORT          BASIC_TRIM_SORT[6];     /**< \brief B44, Copy of the BASIC_TRIM values from EFUSE.  Used in SORT and PROVISIONED life cycles before BASIC_TRIM values are written to the efuses*/
       __I  Ifx_UReg_8Bit                       reserved_B5C[164];      /**< \brief B5C, */
       __IO Ifx_SFLASH_COUNTER_FLASH_ROW6       COUNTER_FLASH_ROW6;     /**< \brief C00, Write counter for working copy of counter page*/
       __IO Ifx_SFLASH_BOOTROW_CRC              BOOTROW_CRC;            /**< \brief C04, CRC of the BOOTROW -- See Boot SAS 12.1 'Security Requirements' item #5*/
       __I  Ifx_UReg_8Bit                       reserved_C08[1];        /**< \brief C08, */
       __IO Ifx_SFLASH_IFX_RMA_MASTER_KEY_REVOCATION IFX_RMA_MASTER_KEY_REVOCATION; /**< \brief C09, IFX RMA Key Revocation to allow for using the second key if the first key is revoked due to compromised. The pattern of 1-byte state that indicate the key has been revoked can be any numbers but not all zeros or all ones*/
       __I  Ifx_UReg_8Bit                       reserved_C0A[1];        /**< \brief C0A, */
       __IO Ifx_SFLASH_OEM_ROT_KEY_REVOCATION   OEM_ROT_KEY_REVOCATION; /**< \brief C0B, OEM Root Of Trust Key Revocation to allow for using the second key if the first key is revoked due to compromised. The pattern of 1-byte state that indicate the key has been revoked can be any numbers but not all zeros or all ones*/
       __IO Ifx_SFLASH_NV_COUNTER_RAMAPP        NV_COUNTER_RAMAPP;      /**< \brief C0C, 8-bit ANTI_ROLLBACK_COUNTER for RAM Apps*/
       __IO Ifx_SFLASH_NV_COUNTER_A1            NV_COUNTER_A1;          /**< \brief C0D, 8-bit ANTI_ROLLBACK_COUNTER is used to prevent rollback of first image - OEM_S or PROT_FW*/
       __IO Ifx_SFLASH_NV_COUNTER_A2            NV_COUNTER_A2;          /**< \brief C0E, 8-bit ANTI_ROLLBACK_COUNTER is used to prevent rollback of second image*/
       __I  Ifx_UReg_8Bit                       reserved_C0F[5];        /**< \brief C0F, */
       __IO Ifx_SFLASH_PROV_OEM_COMPLETE        PROV_OEM_COMPLETE;      /**< \brief C14, OEM assets are finalized in SFLASH, no further update is allowed vs. further updates are allowed*/
       __IO Ifx_SFLASH_HASH_SLOT_1              HASH_SLOT_1[32];        /**< \brief C18, Truncated SHA-512 hash of L1 image.  Updated after signature check succeeds.*/
       __IO Ifx_SFLASH_HASH_SLOT_2              HASH_SLOT_2[32];        /**< \brief C38, Truncated SHA-512 hash of L2 image.  Updated after signature check succeeds.*/
       __IO Ifx_SFLASH_HASH_SLOT_3              HASH_SLOT_3[32];        /**< \brief C58, Truncated SHA-512 hash of third FW image.  Updated after signature check succeeds.*/
       __IO Ifx_SFLASH_HASH_SLOT_4              HASH_SLOT_4[32];        /**< \brief C78, Truncated SHA-512 hash of fourth FW image.  Updated after signature check succeeds.*/
       __IO Ifx_SFLASH_SECURE_HASH_LIST         SECURE_HASH_LIST[31];   /**< \brief C98, Secure hash list - Count of active entries followed by address/length pairs*/
       __IO Ifx_SFLASH_PROT_FW_HASH_LIST        PROT_FW_HASH_LIST[31];  /**< \brief D14, Protected FW hash list - Count of active entries followed by address / length pairs*/
       __IO Ifx_SFLASH_FAILED_SIGNATURE_COUNTER FAILED_SIGNATURE_COUNTER[6]; /**< \brief D90, 6 failed signature counters - 0 = RAM Apps, 1 = loaded image 1, etc.*/
       __IO Ifx_SFLASH_SECURE_HASH              SECURE_HASH[32];        /**< \brief D9C, Truncated hash of assets in the SECURE_HASH_LIST*/
       __IO Ifx_SFLASH_PROT_FW_HASH             PROT_FW_HASH[32];       /**< \brief DBC, Truncated hash of assets in the PROT_FW_HASH_LIST*/
       __I  Ifx_UReg_8Bit                       reserved_DDC[36];       /**< \brief DDC, */
       __IO Ifx_SFLASH_COUNTER_FLASH_ROW7       COUNTER_FLASH_ROW7;     /**< \brief E00, Tear safe counter for this flash row*/
       __IO Ifx_SFLASH_ACCESS_RESTRICT          ACCESS_RESTRICT;        /**< \brief E04, A debug policy, bits are the same as CPUSS.AP_CTL register
When PROT_FW is enabled, Secure debug cannot be updated by OEM policy.
PROT_FW is responsible for disabling the debug ports on the PPCA*/
       __IO Ifx_SFLASH_ACCESS_RESTRICT_2        ACCESS_RESTRICT_2;      /**< \brief E08, Additional debug policies.  See _Regs tab for details*/
       __IO Ifx_SFLASH_LISTEN_WINDOW            LISTEN_WINDOW;          /**< \brief E0C, 0xC39D_0001 - 100 ms.
0xC39D_0002 - 20 ms.
0xC39D_0003 - 2 ms.
0x151D_D9BB  (SEC_FALSE) - 0 ms listen window, the feature is disabled.
Other - invalid data.Other - invalid data.*/
       __IO Ifx_SFLASH_BOOT_CFG_ID              BOOT_CFG_ID;            /**< \brief E10, 0x9ADC8D08 (SIMPLE_APP)
0x4FBEEF63 (SECURE_APP)
0xECDB4B1F ( EPB )
0x39B92974 (DUAL_BANK_SIMPLE_APP)
0x77D56A80 (DUAL_BANK_SECURE_APP)
0x4A656DBD (PROT_FW)
0xA155E76E (BOOT_IDLE), no app is expected.
An internal state for a validation of MPC policy.
Other - Boot policy is invalid.*/
       __IO Ifx_SFLASH_BOOT_BANK_CTR_OFFSET     BOOT_BANK_CTR_OFFSET;   /**< \brief E14, An offset from a start of a Flash bank (for flash dual-bank mode) to a 32-bit counter that indicates the valid bank.
Each flash bank must contain this counter. This counter is updated by DFU.
Flash bank is selected to be the lower address range (a start of flash address) if:
* It has a valid counter.
* Its counter value is bigger than for the other flash-bank, if both counters are valid.

For each dual-bank counter, bits [31:16] should be a fixed value (0x5A3C), otherwise counter is invalid.*/
       __IO Ifx_SFLASH_BOOT_HASH_LOCKING        BOOT_HASH_LOCKING;      /**< \brief E18, 0xC39D_5455 - Enable hash locking
0x151D_D9BB - Disable hash locking .*/
       __IO Ifx_SFLASH_BOOT_AUTH                BOOT_AUTH;              /**< \brief E1C, What will be authenticated, or moved from a Shared Secondary Slot after a DFU update.

0x16FF363E (BOOT_AUTH_ALL_MOVE) - Authenticate all images, move from a shared secondary slot on a successful DFU update.
0xEAE22644 (BOOT_AUTH_ALL) - Authenticate all images.
0xFE2D5368 (BOOT_AUTH_ONE) - Authenticate the first image, ignore the other images.
0x71EC07DB (BOOT_AUTH_NONE) - Disable all authentications for LCS=NORMAL_P when ASSET_HASH is not computed. In other cases an invalid combination.
Other - invalid.*/
       __IO Ifx_SFLASH_BOOT_APP_LAYOUT          BOOT_APP_LAYOUT[10];    /**< \brief E20, A layout of the applications in FLASH.
Consists of (addr, size)*5 which may define a layout up to four applications + Shared Secondary Slot.*/
       __I  Ifx_UReg_8Bit                       reserved_E48[1];        /**< \brief E48, */
       __IO Ifx_SFLASH_PC_CTL_VALID             PC_CTL_VALID;           /**< \brief E49, 4-bit Bitfield - Bits 0-1 are unused, Bits 2-3 control PC2-3 handlers

1 = PCx can only be entered via PCx interrupt handler (Sets CM33_PC_CTL.VALID[bit x] = 1)

0 = PCx is not 'special'.  PC may be switched to this value without CM33_PCx_HANDLER interrupt vector

When Protected FW is active, bit 2 cannot be set from OEM policy*/
       __IO Ifx_SFLASH_OEM_DEVICE_CERT_BLOCKS   OEM_DEVICE_CERT_BLOCKS; /**< \brief E4A, Number of 2K blocks to protect at PC0 for OEM_DEVICE_CERT*/
       __I  Ifx_UReg_8Bit                       reserved_E4B[1];        /**< \brief E4B, */
       __IO Ifx_SFLASH_PC2_HANDLER              PC2_HANDLER;            /**< \brief E4C, PC2_HANDLER is used to switch to PC2 when it is a 'Special' PC*/
       __IO Ifx_SFLASH_PC3_HANDLER              PC3_HANDLER;            /**< \brief E50, PC3_HANDLER is used to switch to PC3 when it is a 'Special' PC*/
       __IO Ifx_SFLASH_DFU_POLICY               DFU_POLICY;             /**< \brief E54, DFU policy*/
       __IO Ifx_SFLASH_OEM_DEVICE_CERT_ADDR     OEM_DEVICE_CERT_ADDR;   /**< \brief E58, Pointer to OEM device certificate in user flash -- Protected for PC=0 access only*/
       __IO Ifx_SFLASH_BOUNDARY_SCAN_EN         BOUNDARY_SCAN_EN;       /**< \brief E5C, Boundary Scan policy:
-	0x151DD9BB (default), Boundary scan is disabled.
-	0xC39D5455, Boundary scan is enabled.*/
       __IO Ifx_SFLASH_OEM_POLICY_RESERVED      OEM_POLICY_RESERVED[2]; /**< \brief E60, Reserved for OEM_POLICY expansion*/
       __IO Ifx_SFLASH_OEM_ROT_KEY_0            OEM_ROT_KEY_0[136];     /**< \brief E68, Primary OEM_ROT_KEY*/
       __IO Ifx_SFLASH_OEM_ROT_KEY_1            OEM_ROT_KEY_1[136];     /**< \brief EF0, Secondary OEM_ROT_KEY*/
       __I  Ifx_UReg_8Bit                       reserved_F78[136];      /**< \brief F78, */
       __IO Ifx_SFLASH_COUNTER_FLASH_ROW8       COUNTER_FLASH_ROW8;     /**< \brief 1000, Tear safe counter for this flash row*/
       __IO Ifx_SFLASH_UNUSED_2                 UNUSED_2;               /**< \brief 1004, Unused*/
       __IO Ifx_SFLASH_N_FLASH_MPC              N_FLASH_MPC;            /**< \brief 1005, Number of flash MPC structs in the following table*/
       __I  Ifx_UReg_8Bit                       reserved_1006[2];       /**< \brief 1006, */
       __IO Ifx_SFLASH_MPC_STRUCT               MPC_STRUCT[20];         /**< \brief 1008, RAM MPC structs followed by Flash MPC structs*/
       __I  Ifx_UReg_8Bit                       reserved_1058[272];     /**< \brief 1058, */
       __IO Ifx_SFLASH_PROT_FW_ADDR             PROT_FW_ADDR;           /**< \brief 1168, Start address of protected FW - Used to set MPC policy*/
       __IO Ifx_SFLASH_PROT_FW_SIZE             PROT_FW_SIZE;           /**< \brief 116C, Size of protected FW*/
       __IO Ifx_SFLASH_PROT_FW_RW_ADDR          PROT_FW_RW_ADDR;        /**< \brief 1170, Start of protected FW RW area in flash - Used to set MPC policy*/
       __IO Ifx_SFLASH_PROT_FW_RW_SIZE          PROT_FW_RW_SIZE;        /**< \brief 1174, Size of protected FW RW area in flash*/
       __IO Ifx_SFLASH_PROT_FW_RAM_ADDR         PROT_FW_RAM_ADDR;       /**< \brief 1178, Start of protected FW RAM - Used to set MPC policy*/
       __IO Ifx_SFLASH_PROT_FW_RAM_SIZE         PROT_FW_RAM_SIZE;       /**< \brief 117C, Size of protected FW RAM*/
       __IO Ifx_SFLASH_PROT_FW_COMPLETE         PROT_FW_COMPLETE;       /**< \brief 1180, 0xC39D_5455 (SEC_TRUE), the assets are finalized in SFLASH, no further update is allowed.
0x151D_D9BB (SEC_FALSE), cyapp_prot_fw_policy may be called multiple times to rewrite the PROT_FW assets in SFLASH.
Other, the same as SEC_TRUE.*/
       __I  Ifx_UReg_8Bit                       reserved_1184[124];     /**< \brief 1184, */
       __IO Ifx_SFLASH_COUNTER_FLASH_ROW9       COUNTER_FLASH_ROW9;     /**< \brief 1200, Tear safe counter for this flash row*/
       __I  Ifx_UReg_8Bit                       reserved_1204[544];     /**< \brief 1204, */
       __IO Ifx_SFLASH_IFX_ROT_KEY_0            IFX_ROT_KEY_0[136];     /**< \brief 1424, Infineon Root of Trust Key 0*/
       __IO Ifx_SFLASH_IFX_ROT_KEY_1            IFX_ROT_KEY_1[136];     /**< \brief 14AC, Infineon Root of Trust Key 1*/
       __IO Ifx_SFLASH_IFX_RMA_MASTER_KEY_0     IFX_RMA_MASTER_KEY_0[136]; /**< \brief 1534, Infineon RMA Key 0*/
       __IO Ifx_SFLASH_IFX_RMA_MASTER_KEY_1     IFX_RMA_MASTER_KEY_1[136]; /**< \brief 15BC, Infineon RMA Key 1*/
       __IO Ifx_SFLASH_TOC1                     TOC1[16];               /**< \brief 1644, TOC1 - See SAS for definition*/
       __IO Ifx_SFLASH_TOC2                     TOC2[8];                /**< \brief 1684, TOC2 - See SAS for definition*/
       __IO Ifx_SFLASH_ASSET_HASH_LIST          ASSET_HASH_LIST[31];    /**< \brief 16A4, See SAS table 3.22 AND 5.1.5*/
       __IO Ifx_SFLASH_FACTORY_HASH_LIST        FACTORY_HASH_LIST[45];  /**< \brief 1720, See SAS table 3.22 AND 5.1.5*/
       __I  Ifx_UReg_8Bit                       reserved_17D4[3116];    /**< \brief 17D4, */
       __IO Ifx_SFLASH_FLASH_BOOT_OBJECT_SIZE   FLASH_BOOT_OBJECT_SIZE; /**< \brief 2400, Flash Boot - Object Size*/
       __IO Ifx_SFLASH_FLASH_BOOT_VERSION_HIGH  FLASH_BOOT_VERSION_HIGH; /**< \brief 2404, Flash Boot - Major Version*/
       __IO Ifx_SFLASH_FLASH_BOOT_VERSION_LOW   FLASH_BOOT_VERSION_LOW; /**< \brief 2408, Flash Boot - Minor version*/
       __IO Ifx_SFLASH_FB_STACK_ADDR            FB_STACK_ADDR;          /**< \brief 240C, Flash Boot - Stack Addr*/
       __IO Ifx_SFLASH_FB_RESET_HANDLER_ADDR    FB_RESET_HANDLER_ADDR;  /**< \brief 2410, Flash Boot - Reset vector*/
       __IO Ifx_SFLASH_FB_FUNC_LIST             FB_FUNC_LIST[8];        /**< \brief 2414, Flash Boot - Function pointer table*/
       __I  Ifx_UReg_8Bit                       reserved_2434[20940];   /**< \brief 2434, */
       __IO Ifx_SFLASH_COUNTER_FLASH_HUK        COUNTER_FLASH_HUK;      /**< \brief 7600, Write counter for HUK flash row + tag indicating HUK flash row*/
       __I  Ifx_UReg_8Bit                       reserved_7604[2556];    /**< \brief 7604, */
} Ifx_SFLASH;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXSFLASH_REGDEF_H_ */
