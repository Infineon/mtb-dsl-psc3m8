/***************************************************************************//**
* \file IfxBACKUP_bf.h
*
* \brief
* BACKUP Bitfields mask and offset
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
* \defgroup IfxSfr_BACKUP_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_BACKUP_Registers
*
*******************************************************************************/

#ifndef _IFXBACKUP_BF_H_
#define _IFXBACKUP_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_BACKUP_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_BACKUP_CTL_Bits.WCO_EN */
#define IFX_BACKUP_CTL_WCO_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_CTL_Bits.WCO_EN */
#define IFX_BACKUP_CTL_WCO_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_CTL_Bits.WCO_EN */
#define IFX_BACKUP_CTL_WCO_EN_OFF (3u)

/** \brief Length for Ifx_BACKUP_CTL_Bits.CLK_SEL */
#define IFX_BACKUP_CTL_CLK_SEL_LEN (3u)

/** \brief Mask for Ifx_BACKUP_CTL_Bits.CLK_SEL */
#define IFX_BACKUP_CTL_CLK_SEL_MSK (0x7u)

/** \brief Offset for Ifx_BACKUP_CTL_Bits.CLK_SEL */
#define IFX_BACKUP_CTL_CLK_SEL_OFF (8u)

/** \brief Length for Ifx_BACKUP_CTL_Bits.PRESCALER */
#define IFX_BACKUP_CTL_PRESCALER_LEN (2u)

/** \brief Mask for Ifx_BACKUP_CTL_Bits.PRESCALER */
#define IFX_BACKUP_CTL_PRESCALER_MSK (0x3u)

/** \brief Offset for Ifx_BACKUP_CTL_Bits.PRESCALER */
#define IFX_BACKUP_CTL_PRESCALER_OFF (12u)

/** \brief Length for Ifx_BACKUP_CTL_Bits.WCO_BYPASS */
#define IFX_BACKUP_CTL_WCO_BYPASS_LEN (1u)

/** \brief Mask for Ifx_BACKUP_CTL_Bits.WCO_BYPASS */
#define IFX_BACKUP_CTL_WCO_BYPASS_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_CTL_Bits.WCO_BYPASS */
#define IFX_BACKUP_CTL_WCO_BYPASS_OFF (16u)

/** \brief Length for Ifx_BACKUP_CTL_Bits.RESERVED */
#define IFX_BACKUP_CTL_RESERVED_LEN (2u)

/** \brief Mask for Ifx_BACKUP_CTL_Bits.RESERVED */
#define IFX_BACKUP_CTL_RESERVED_MSK (0x3u)

/** \brief Offset for Ifx_BACKUP_CTL_Bits.RESERVED */
#define IFX_BACKUP_CTL_RESERVED_OFF (17u)

/** \brief Length for Ifx_BACKUP_CTL_Bits.VBACKUP_MEAS */
#define IFX_BACKUP_CTL_VBACKUP_MEAS_LEN (1u)

/** \brief Mask for Ifx_BACKUP_CTL_Bits.VBACKUP_MEAS */
#define IFX_BACKUP_CTL_VBACKUP_MEAS_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_CTL_Bits.VBACKUP_MEAS */
#define IFX_BACKUP_CTL_VBACKUP_MEAS_OFF (19u)

/** \brief Length for Ifx_BACKUP_CTL_Bits.EN_CHARGE_KEY */
#define IFX_BACKUP_CTL_EN_CHARGE_KEY_LEN (8u)

/** \brief Mask for Ifx_BACKUP_CTL_Bits.EN_CHARGE_KEY */
#define IFX_BACKUP_CTL_EN_CHARGE_KEY_MSK (0xffu)

/** \brief Offset for Ifx_BACKUP_CTL_Bits.EN_CHARGE_KEY */
#define IFX_BACKUP_CTL_EN_CHARGE_KEY_OFF (24u)

/** \brief Length for Ifx_BACKUP_RTC_RW_Bits.READ */
#define IFX_BACKUP_RTC_RW_READ_LEN (1u)

/** \brief Mask for Ifx_BACKUP_RTC_RW_Bits.READ */
#define IFX_BACKUP_RTC_RW_READ_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_RTC_RW_Bits.READ */
#define IFX_BACKUP_RTC_RW_READ_OFF (0u)

/** \brief Length for Ifx_BACKUP_RTC_RW_Bits.WRITE */
#define IFX_BACKUP_RTC_RW_WRITE_LEN (1u)

/** \brief Mask for Ifx_BACKUP_RTC_RW_Bits.WRITE */
#define IFX_BACKUP_RTC_RW_WRITE_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_RTC_RW_Bits.WRITE */
#define IFX_BACKUP_RTC_RW_WRITE_OFF (1u)

/** \brief Length for Ifx_BACKUP_CAL_CTL_Bits.CALIB_VAL */
#define IFX_BACKUP_CAL_CTL_CALIB_VAL_LEN (6u)

/** \brief Mask for Ifx_BACKUP_CAL_CTL_Bits.CALIB_VAL */
#define IFX_BACKUP_CAL_CTL_CALIB_VAL_MSK (0x3fu)

/** \brief Offset for Ifx_BACKUP_CAL_CTL_Bits.CALIB_VAL */
#define IFX_BACKUP_CAL_CTL_CALIB_VAL_OFF (0u)

/** \brief Length for Ifx_BACKUP_CAL_CTL_Bits.CALIB_SIGN */
#define IFX_BACKUP_CAL_CTL_CALIB_SIGN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_CAL_CTL_Bits.CALIB_SIGN */
#define IFX_BACKUP_CAL_CTL_CALIB_SIGN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_CAL_CTL_Bits.CALIB_SIGN */
#define IFX_BACKUP_CAL_CTL_CALIB_SIGN_OFF (6u)

/** \brief Length for Ifx_BACKUP_CAL_CTL_Bits.CAL_COMP_PER_MIN */
#define IFX_BACKUP_CAL_CTL_CAL_COMP_PER_MIN_LEN (2u)

/** \brief Mask for Ifx_BACKUP_CAL_CTL_Bits.CAL_COMP_PER_MIN */
#define IFX_BACKUP_CAL_CTL_CAL_COMP_PER_MIN_MSK (0x3u)

/** \brief Offset for Ifx_BACKUP_CAL_CTL_Bits.CAL_COMP_PER_MIN */
#define IFX_BACKUP_CAL_CTL_CAL_COMP_PER_MIN_OFF (16u)

/** \brief Length for Ifx_BACKUP_CAL_CTL_Bits.CAL_SEL */
#define IFX_BACKUP_CAL_CTL_CAL_SEL_LEN (2u)

/** \brief Mask for Ifx_BACKUP_CAL_CTL_Bits.CAL_SEL */
#define IFX_BACKUP_CAL_CTL_CAL_SEL_MSK (0x3u)

/** \brief Offset for Ifx_BACKUP_CAL_CTL_Bits.CAL_SEL */
#define IFX_BACKUP_CAL_CTL_CAL_SEL_OFF (28u)

/** \brief Length for Ifx_BACKUP_CAL_CTL_Bits.CAL_OUT */
#define IFX_BACKUP_CAL_CTL_CAL_OUT_LEN (1u)

/** \brief Mask for Ifx_BACKUP_CAL_CTL_Bits.CAL_OUT */
#define IFX_BACKUP_CAL_CTL_CAL_OUT_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_CAL_CTL_Bits.CAL_OUT */
#define IFX_BACKUP_CAL_CTL_CAL_OUT_OFF (31u)

/** \brief Length for Ifx_BACKUP_STATUS_Bits.RTC_BUSY */
#define IFX_BACKUP_STATUS_RTC_BUSY_LEN (1u)

/** \brief Mask for Ifx_BACKUP_STATUS_Bits.RTC_BUSY */
#define IFX_BACKUP_STATUS_RTC_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_STATUS_Bits.RTC_BUSY */
#define IFX_BACKUP_STATUS_RTC_BUSY_OFF (0u)

/** \brief Length for Ifx_BACKUP_STATUS_Bits.WCO_OK */
#define IFX_BACKUP_STATUS_WCO_OK_LEN (1u)

/** \brief Mask for Ifx_BACKUP_STATUS_Bits.WCO_OK */
#define IFX_BACKUP_STATUS_WCO_OK_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_STATUS_Bits.WCO_OK */
#define IFX_BACKUP_STATUS_WCO_OK_OFF (2u)

/** \brief Length for Ifx_BACKUP_RTC_TIME_Bits.RTC_SEC */
#define IFX_BACKUP_RTC_TIME_RTC_SEC_LEN (6u)

/** \brief Mask for Ifx_BACKUP_RTC_TIME_Bits.RTC_SEC */
#define IFX_BACKUP_RTC_TIME_RTC_SEC_MSK (0x3fu)

/** \brief Offset for Ifx_BACKUP_RTC_TIME_Bits.RTC_SEC */
#define IFX_BACKUP_RTC_TIME_RTC_SEC_OFF (0u)

/** \brief Length for Ifx_BACKUP_RTC_TIME_Bits.RTC_MIN */
#define IFX_BACKUP_RTC_TIME_RTC_MIN_LEN (6u)

/** \brief Mask for Ifx_BACKUP_RTC_TIME_Bits.RTC_MIN */
#define IFX_BACKUP_RTC_TIME_RTC_MIN_MSK (0x3fu)

/** \brief Offset for Ifx_BACKUP_RTC_TIME_Bits.RTC_MIN */
#define IFX_BACKUP_RTC_TIME_RTC_MIN_OFF (8u)

/** \brief Length for Ifx_BACKUP_RTC_TIME_Bits.RTC_HOUR */
#define IFX_BACKUP_RTC_TIME_RTC_HOUR_LEN (5u)

/** \brief Mask for Ifx_BACKUP_RTC_TIME_Bits.RTC_HOUR */
#define IFX_BACKUP_RTC_TIME_RTC_HOUR_MSK (0x1fu)

/** \brief Offset for Ifx_BACKUP_RTC_TIME_Bits.RTC_HOUR */
#define IFX_BACKUP_RTC_TIME_RTC_HOUR_OFF (16u)

/** \brief Length for Ifx_BACKUP_RTC_TIME_Bits.CTRL_12HR */
#define IFX_BACKUP_RTC_TIME_CTRL_12HR_LEN (1u)

/** \brief Mask for Ifx_BACKUP_RTC_TIME_Bits.CTRL_12HR */
#define IFX_BACKUP_RTC_TIME_CTRL_12HR_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_RTC_TIME_Bits.CTRL_12HR */
#define IFX_BACKUP_RTC_TIME_CTRL_12HR_OFF (22u)

/** \brief Length for Ifx_BACKUP_RTC_TIME_Bits.RTC_DAY */
#define IFX_BACKUP_RTC_TIME_RTC_DAY_LEN (3u)

/** \brief Mask for Ifx_BACKUP_RTC_TIME_Bits.RTC_DAY */
#define IFX_BACKUP_RTC_TIME_RTC_DAY_MSK (0x7u)

/** \brief Offset for Ifx_BACKUP_RTC_TIME_Bits.RTC_DAY */
#define IFX_BACKUP_RTC_TIME_RTC_DAY_OFF (24u)

/** \brief Length for Ifx_BACKUP_RTC_DATE_Bits.RTC_DATE */
#define IFX_BACKUP_RTC_DATE_RTC_DATE_LEN (5u)

/** \brief Mask for Ifx_BACKUP_RTC_DATE_Bits.RTC_DATE */
#define IFX_BACKUP_RTC_DATE_RTC_DATE_MSK (0x1fu)

/** \brief Offset for Ifx_BACKUP_RTC_DATE_Bits.RTC_DATE */
#define IFX_BACKUP_RTC_DATE_RTC_DATE_OFF (0u)

/** \brief Length for Ifx_BACKUP_RTC_DATE_Bits.RTC_MON */
#define IFX_BACKUP_RTC_DATE_RTC_MON_LEN (4u)

/** \brief Mask for Ifx_BACKUP_RTC_DATE_Bits.RTC_MON */
#define IFX_BACKUP_RTC_DATE_RTC_MON_MSK (0xfu)

/** \brief Offset for Ifx_BACKUP_RTC_DATE_Bits.RTC_MON */
#define IFX_BACKUP_RTC_DATE_RTC_MON_OFF (8u)

/** \brief Length for Ifx_BACKUP_RTC_DATE_Bits.RTC_YEAR */
#define IFX_BACKUP_RTC_DATE_RTC_YEAR_LEN (7u)

/** \brief Mask for Ifx_BACKUP_RTC_DATE_Bits.RTC_YEAR */
#define IFX_BACKUP_RTC_DATE_RTC_YEAR_MSK (0x7fu)

/** \brief Offset for Ifx_BACKUP_RTC_DATE_Bits.RTC_YEAR */
#define IFX_BACKUP_RTC_DATE_RTC_YEAR_OFF (16u)

/** \brief Length for Ifx_BACKUP_ALM1_TIME_Bits.ALM_SEC */
#define IFX_BACKUP_ALM1_TIME_ALM_SEC_LEN (6u)

/** \brief Mask for Ifx_BACKUP_ALM1_TIME_Bits.ALM_SEC */
#define IFX_BACKUP_ALM1_TIME_ALM_SEC_MSK (0x3fu)

/** \brief Offset for Ifx_BACKUP_ALM1_TIME_Bits.ALM_SEC */
#define IFX_BACKUP_ALM1_TIME_ALM_SEC_OFF (0u)

/** \brief Length for Ifx_BACKUP_ALM1_TIME_Bits.ALM_SEC_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_SEC_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM1_TIME_Bits.ALM_SEC_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_SEC_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM1_TIME_Bits.ALM_SEC_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_SEC_EN_OFF (7u)

/** \brief Length for Ifx_BACKUP_ALM1_TIME_Bits.ALM_MIN */
#define IFX_BACKUP_ALM1_TIME_ALM_MIN_LEN (6u)

/** \brief Mask for Ifx_BACKUP_ALM1_TIME_Bits.ALM_MIN */
#define IFX_BACKUP_ALM1_TIME_ALM_MIN_MSK (0x3fu)

/** \brief Offset for Ifx_BACKUP_ALM1_TIME_Bits.ALM_MIN */
#define IFX_BACKUP_ALM1_TIME_ALM_MIN_OFF (8u)

/** \brief Length for Ifx_BACKUP_ALM1_TIME_Bits.ALM_MIN_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_MIN_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM1_TIME_Bits.ALM_MIN_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_MIN_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM1_TIME_Bits.ALM_MIN_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_MIN_EN_OFF (15u)

/** \brief Length for Ifx_BACKUP_ALM1_TIME_Bits.ALM_HOUR */
#define IFX_BACKUP_ALM1_TIME_ALM_HOUR_LEN (5u)

/** \brief Mask for Ifx_BACKUP_ALM1_TIME_Bits.ALM_HOUR */
#define IFX_BACKUP_ALM1_TIME_ALM_HOUR_MSK (0x1fu)

/** \brief Offset for Ifx_BACKUP_ALM1_TIME_Bits.ALM_HOUR */
#define IFX_BACKUP_ALM1_TIME_ALM_HOUR_OFF (16u)

/** \brief Length for Ifx_BACKUP_ALM1_TIME_Bits.ALM_HOUR_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_HOUR_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM1_TIME_Bits.ALM_HOUR_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_HOUR_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM1_TIME_Bits.ALM_HOUR_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_HOUR_EN_OFF (23u)

/** \brief Length for Ifx_BACKUP_ALM1_TIME_Bits.ALM_DAY */
#define IFX_BACKUP_ALM1_TIME_ALM_DAY_LEN (3u)

/** \brief Mask for Ifx_BACKUP_ALM1_TIME_Bits.ALM_DAY */
#define IFX_BACKUP_ALM1_TIME_ALM_DAY_MSK (0x7u)

/** \brief Offset for Ifx_BACKUP_ALM1_TIME_Bits.ALM_DAY */
#define IFX_BACKUP_ALM1_TIME_ALM_DAY_OFF (24u)

/** \brief Length for Ifx_BACKUP_ALM1_TIME_Bits.ALM_DAY_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_DAY_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM1_TIME_Bits.ALM_DAY_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_DAY_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM1_TIME_Bits.ALM_DAY_EN */
#define IFX_BACKUP_ALM1_TIME_ALM_DAY_EN_OFF (31u)

/** \brief Length for Ifx_BACKUP_ALM1_DATE_Bits.ALM_DATE */
#define IFX_BACKUP_ALM1_DATE_ALM_DATE_LEN (5u)

/** \brief Mask for Ifx_BACKUP_ALM1_DATE_Bits.ALM_DATE */
#define IFX_BACKUP_ALM1_DATE_ALM_DATE_MSK (0x1fu)

/** \brief Offset for Ifx_BACKUP_ALM1_DATE_Bits.ALM_DATE */
#define IFX_BACKUP_ALM1_DATE_ALM_DATE_OFF (0u)

/** \brief Length for Ifx_BACKUP_ALM1_DATE_Bits.ALM_DATE_EN */
#define IFX_BACKUP_ALM1_DATE_ALM_DATE_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM1_DATE_Bits.ALM_DATE_EN */
#define IFX_BACKUP_ALM1_DATE_ALM_DATE_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM1_DATE_Bits.ALM_DATE_EN */
#define IFX_BACKUP_ALM1_DATE_ALM_DATE_EN_OFF (7u)

/** \brief Length for Ifx_BACKUP_ALM1_DATE_Bits.ALM_MON */
#define IFX_BACKUP_ALM1_DATE_ALM_MON_LEN (4u)

/** \brief Mask for Ifx_BACKUP_ALM1_DATE_Bits.ALM_MON */
#define IFX_BACKUP_ALM1_DATE_ALM_MON_MSK (0xfu)

/** \brief Offset for Ifx_BACKUP_ALM1_DATE_Bits.ALM_MON */
#define IFX_BACKUP_ALM1_DATE_ALM_MON_OFF (8u)

/** \brief Length for Ifx_BACKUP_ALM1_DATE_Bits.ALM_MON_EN */
#define IFX_BACKUP_ALM1_DATE_ALM_MON_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM1_DATE_Bits.ALM_MON_EN */
#define IFX_BACKUP_ALM1_DATE_ALM_MON_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM1_DATE_Bits.ALM_MON_EN */
#define IFX_BACKUP_ALM1_DATE_ALM_MON_EN_OFF (15u)

/** \brief Length for Ifx_BACKUP_ALM1_DATE_Bits.ALM_EN */
#define IFX_BACKUP_ALM1_DATE_ALM_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM1_DATE_Bits.ALM_EN */
#define IFX_BACKUP_ALM1_DATE_ALM_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM1_DATE_Bits.ALM_EN */
#define IFX_BACKUP_ALM1_DATE_ALM_EN_OFF (31u)

/** \brief Length for Ifx_BACKUP_ALM2_TIME_Bits.ALM_SEC */
#define IFX_BACKUP_ALM2_TIME_ALM_SEC_LEN (6u)

/** \brief Mask for Ifx_BACKUP_ALM2_TIME_Bits.ALM_SEC */
#define IFX_BACKUP_ALM2_TIME_ALM_SEC_MSK (0x3fu)

/** \brief Offset for Ifx_BACKUP_ALM2_TIME_Bits.ALM_SEC */
#define IFX_BACKUP_ALM2_TIME_ALM_SEC_OFF (0u)

/** \brief Length for Ifx_BACKUP_ALM2_TIME_Bits.ALM_SEC_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_SEC_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM2_TIME_Bits.ALM_SEC_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_SEC_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM2_TIME_Bits.ALM_SEC_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_SEC_EN_OFF (7u)

/** \brief Length for Ifx_BACKUP_ALM2_TIME_Bits.ALM_MIN */
#define IFX_BACKUP_ALM2_TIME_ALM_MIN_LEN (6u)

/** \brief Mask for Ifx_BACKUP_ALM2_TIME_Bits.ALM_MIN */
#define IFX_BACKUP_ALM2_TIME_ALM_MIN_MSK (0x3fu)

/** \brief Offset for Ifx_BACKUP_ALM2_TIME_Bits.ALM_MIN */
#define IFX_BACKUP_ALM2_TIME_ALM_MIN_OFF (8u)

/** \brief Length for Ifx_BACKUP_ALM2_TIME_Bits.ALM_MIN_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_MIN_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM2_TIME_Bits.ALM_MIN_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_MIN_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM2_TIME_Bits.ALM_MIN_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_MIN_EN_OFF (15u)

/** \brief Length for Ifx_BACKUP_ALM2_TIME_Bits.ALM_HOUR */
#define IFX_BACKUP_ALM2_TIME_ALM_HOUR_LEN (5u)

/** \brief Mask for Ifx_BACKUP_ALM2_TIME_Bits.ALM_HOUR */
#define IFX_BACKUP_ALM2_TIME_ALM_HOUR_MSK (0x1fu)

/** \brief Offset for Ifx_BACKUP_ALM2_TIME_Bits.ALM_HOUR */
#define IFX_BACKUP_ALM2_TIME_ALM_HOUR_OFF (16u)

/** \brief Length for Ifx_BACKUP_ALM2_TIME_Bits.ALM_HOUR_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_HOUR_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM2_TIME_Bits.ALM_HOUR_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_HOUR_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM2_TIME_Bits.ALM_HOUR_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_HOUR_EN_OFF (23u)

/** \brief Length for Ifx_BACKUP_ALM2_TIME_Bits.ALM_DAY */
#define IFX_BACKUP_ALM2_TIME_ALM_DAY_LEN (3u)

/** \brief Mask for Ifx_BACKUP_ALM2_TIME_Bits.ALM_DAY */
#define IFX_BACKUP_ALM2_TIME_ALM_DAY_MSK (0x7u)

/** \brief Offset for Ifx_BACKUP_ALM2_TIME_Bits.ALM_DAY */
#define IFX_BACKUP_ALM2_TIME_ALM_DAY_OFF (24u)

/** \brief Length for Ifx_BACKUP_ALM2_TIME_Bits.ALM_DAY_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_DAY_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM2_TIME_Bits.ALM_DAY_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_DAY_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM2_TIME_Bits.ALM_DAY_EN */
#define IFX_BACKUP_ALM2_TIME_ALM_DAY_EN_OFF (31u)

/** \brief Length for Ifx_BACKUP_ALM2_DATE_Bits.ALM_DATE */
#define IFX_BACKUP_ALM2_DATE_ALM_DATE_LEN (5u)

/** \brief Mask for Ifx_BACKUP_ALM2_DATE_Bits.ALM_DATE */
#define IFX_BACKUP_ALM2_DATE_ALM_DATE_MSK (0x1fu)

/** \brief Offset for Ifx_BACKUP_ALM2_DATE_Bits.ALM_DATE */
#define IFX_BACKUP_ALM2_DATE_ALM_DATE_OFF (0u)

/** \brief Length for Ifx_BACKUP_ALM2_DATE_Bits.ALM_DATE_EN */
#define IFX_BACKUP_ALM2_DATE_ALM_DATE_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM2_DATE_Bits.ALM_DATE_EN */
#define IFX_BACKUP_ALM2_DATE_ALM_DATE_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM2_DATE_Bits.ALM_DATE_EN */
#define IFX_BACKUP_ALM2_DATE_ALM_DATE_EN_OFF (7u)

/** \brief Length for Ifx_BACKUP_ALM2_DATE_Bits.ALM_MON */
#define IFX_BACKUP_ALM2_DATE_ALM_MON_LEN (4u)

/** \brief Mask for Ifx_BACKUP_ALM2_DATE_Bits.ALM_MON */
#define IFX_BACKUP_ALM2_DATE_ALM_MON_MSK (0xfu)

/** \brief Offset for Ifx_BACKUP_ALM2_DATE_Bits.ALM_MON */
#define IFX_BACKUP_ALM2_DATE_ALM_MON_OFF (8u)

/** \brief Length for Ifx_BACKUP_ALM2_DATE_Bits.ALM_MON_EN */
#define IFX_BACKUP_ALM2_DATE_ALM_MON_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM2_DATE_Bits.ALM_MON_EN */
#define IFX_BACKUP_ALM2_DATE_ALM_MON_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM2_DATE_Bits.ALM_MON_EN */
#define IFX_BACKUP_ALM2_DATE_ALM_MON_EN_OFF (15u)

/** \brief Length for Ifx_BACKUP_ALM2_DATE_Bits.ALM_EN */
#define IFX_BACKUP_ALM2_DATE_ALM_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_ALM2_DATE_Bits.ALM_EN */
#define IFX_BACKUP_ALM2_DATE_ALM_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_ALM2_DATE_Bits.ALM_EN */
#define IFX_BACKUP_ALM2_DATE_ALM_EN_OFF (31u)

/** \brief Length for Ifx_BACKUP_INTR_Bits.ALARM1 */
#define IFX_BACKUP_INTR_ALARM1_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_Bits.ALARM1 */
#define IFX_BACKUP_INTR_ALARM1_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_Bits.ALARM1 */
#define IFX_BACKUP_INTR_ALARM1_OFF (0u)

/** \brief Length for Ifx_BACKUP_INTR_Bits.ALARM2 */
#define IFX_BACKUP_INTR_ALARM2_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_Bits.ALARM2 */
#define IFX_BACKUP_INTR_ALARM2_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_Bits.ALARM2 */
#define IFX_BACKUP_INTR_ALARM2_OFF (1u)

/** \brief Length for Ifx_BACKUP_INTR_Bits.CENTURY */
#define IFX_BACKUP_INTR_CENTURY_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_Bits.CENTURY */
#define IFX_BACKUP_INTR_CENTURY_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_Bits.CENTURY */
#define IFX_BACKUP_INTR_CENTURY_OFF (2u)

/** \brief Length for Ifx_BACKUP_INTR_SET_Bits.ALARM1 */
#define IFX_BACKUP_INTR_SET_ALARM1_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_SET_Bits.ALARM1 */
#define IFX_BACKUP_INTR_SET_ALARM1_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_SET_Bits.ALARM1 */
#define IFX_BACKUP_INTR_SET_ALARM1_OFF (0u)

/** \brief Length for Ifx_BACKUP_INTR_SET_Bits.ALARM2 */
#define IFX_BACKUP_INTR_SET_ALARM2_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_SET_Bits.ALARM2 */
#define IFX_BACKUP_INTR_SET_ALARM2_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_SET_Bits.ALARM2 */
#define IFX_BACKUP_INTR_SET_ALARM2_OFF (1u)

/** \brief Length for Ifx_BACKUP_INTR_SET_Bits.CENTURY */
#define IFX_BACKUP_INTR_SET_CENTURY_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_SET_Bits.CENTURY */
#define IFX_BACKUP_INTR_SET_CENTURY_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_SET_Bits.CENTURY */
#define IFX_BACKUP_INTR_SET_CENTURY_OFF (2u)

/** \brief Length for Ifx_BACKUP_INTR_MASK_Bits.ALARM1 */
#define IFX_BACKUP_INTR_MASK_ALARM1_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_MASK_Bits.ALARM1 */
#define IFX_BACKUP_INTR_MASK_ALARM1_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_MASK_Bits.ALARM1 */
#define IFX_BACKUP_INTR_MASK_ALARM1_OFF (0u)

/** \brief Length for Ifx_BACKUP_INTR_MASK_Bits.ALARM2 */
#define IFX_BACKUP_INTR_MASK_ALARM2_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_MASK_Bits.ALARM2 */
#define IFX_BACKUP_INTR_MASK_ALARM2_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_MASK_Bits.ALARM2 */
#define IFX_BACKUP_INTR_MASK_ALARM2_OFF (1u)

/** \brief Length for Ifx_BACKUP_INTR_MASK_Bits.CENTURY */
#define IFX_BACKUP_INTR_MASK_CENTURY_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_MASK_Bits.CENTURY */
#define IFX_BACKUP_INTR_MASK_CENTURY_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_MASK_Bits.CENTURY */
#define IFX_BACKUP_INTR_MASK_CENTURY_OFF (2u)

/** \brief Length for Ifx_BACKUP_INTR_MASKED_Bits.ALARM1 */
#define IFX_BACKUP_INTR_MASKED_ALARM1_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_MASKED_Bits.ALARM1 */
#define IFX_BACKUP_INTR_MASKED_ALARM1_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_MASKED_Bits.ALARM1 */
#define IFX_BACKUP_INTR_MASKED_ALARM1_OFF (0u)

/** \brief Length for Ifx_BACKUP_INTR_MASKED_Bits.ALARM2 */
#define IFX_BACKUP_INTR_MASKED_ALARM2_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_MASKED_Bits.ALARM2 */
#define IFX_BACKUP_INTR_MASKED_ALARM2_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_MASKED_Bits.ALARM2 */
#define IFX_BACKUP_INTR_MASKED_ALARM2_OFF (1u)

/** \brief Length for Ifx_BACKUP_INTR_MASKED_Bits.CENTURY */
#define IFX_BACKUP_INTR_MASKED_CENTURY_LEN (1u)

/** \brief Mask for Ifx_BACKUP_INTR_MASKED_Bits.CENTURY */
#define IFX_BACKUP_INTR_MASKED_CENTURY_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_INTR_MASKED_Bits.CENTURY */
#define IFX_BACKUP_INTR_MASKED_CENTURY_OFF (2u)

/** \brief Length for Ifx_BACKUP_PMIC_CTL_Bits.UNLOCK */
#define IFX_BACKUP_PMIC_CTL_UNLOCK_LEN (8u)

/** \brief Mask for Ifx_BACKUP_PMIC_CTL_Bits.UNLOCK */
#define IFX_BACKUP_PMIC_CTL_UNLOCK_MSK (0xffu)

/** \brief Offset for Ifx_BACKUP_PMIC_CTL_Bits.UNLOCK */
#define IFX_BACKUP_PMIC_CTL_UNLOCK_OFF (8u)

/** \brief Length for Ifx_BACKUP_PMIC_CTL_Bits.POLARITY */
#define IFX_BACKUP_PMIC_CTL_POLARITY_LEN (1u)

/** \brief Mask for Ifx_BACKUP_PMIC_CTL_Bits.POLARITY */
#define IFX_BACKUP_PMIC_CTL_POLARITY_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_PMIC_CTL_Bits.POLARITY */
#define IFX_BACKUP_PMIC_CTL_POLARITY_OFF (16u)

/** \brief Length for Ifx_BACKUP_PMIC_CTL_Bits.PMIC_EN_OUTEN */
#define IFX_BACKUP_PMIC_CTL_PMIC_EN_OUTEN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_PMIC_CTL_Bits.PMIC_EN_OUTEN */
#define IFX_BACKUP_PMIC_CTL_PMIC_EN_OUTEN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_PMIC_CTL_Bits.PMIC_EN_OUTEN */
#define IFX_BACKUP_PMIC_CTL_PMIC_EN_OUTEN_OFF (29u)

/** \brief Length for Ifx_BACKUP_PMIC_CTL_Bits.PMIC_ALWAYSEN */
#define IFX_BACKUP_PMIC_CTL_PMIC_ALWAYSEN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_PMIC_CTL_Bits.PMIC_ALWAYSEN */
#define IFX_BACKUP_PMIC_CTL_PMIC_ALWAYSEN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_PMIC_CTL_Bits.PMIC_ALWAYSEN */
#define IFX_BACKUP_PMIC_CTL_PMIC_ALWAYSEN_OFF (30u)

/** \brief Length for Ifx_BACKUP_PMIC_CTL_Bits.PMIC_EN */
#define IFX_BACKUP_PMIC_CTL_PMIC_EN_LEN (1u)

/** \brief Mask for Ifx_BACKUP_PMIC_CTL_Bits.PMIC_EN */
#define IFX_BACKUP_PMIC_CTL_PMIC_EN_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_PMIC_CTL_Bits.PMIC_EN */
#define IFX_BACKUP_PMIC_CTL_PMIC_EN_OFF (31u)

/** \brief Length for Ifx_BACKUP_RESET_Bits.RESET */
#define IFX_BACKUP_RESET_RESET_LEN (1u)

/** \brief Mask for Ifx_BACKUP_RESET_Bits.RESET */
#define IFX_BACKUP_RESET_RESET_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_RESET_Bits.RESET */
#define IFX_BACKUP_RESET_RESET_OFF (31u)

/** \brief Length for Ifx_BACKUP_WCO_STATUS_Bits.WCO_OK */
#define IFX_BACKUP_WCO_STATUS_WCO_OK_LEN (1u)

/** \brief Mask for Ifx_BACKUP_WCO_STATUS_Bits.WCO_OK */
#define IFX_BACKUP_WCO_STATUS_WCO_OK_MSK (0x1u)

/** \brief Offset for Ifx_BACKUP_WCO_STATUS_Bits.WCO_OK */
#define IFX_BACKUP_WCO_STATUS_WCO_OK_OFF (2u)

/** \brief Length for Ifx_BACKUP_BREG_SET0_Bits.BREG */
#define IFX_BACKUP_BREG_SET0_BREG_LEN (32u)

/** \brief Mask for Ifx_BACKUP_BREG_SET0_Bits.BREG */
#define IFX_BACKUP_BREG_SET0_BREG_MSK (0xffffffffu)

/** \brief Offset for Ifx_BACKUP_BREG_SET0_Bits.BREG */
#define IFX_BACKUP_BREG_SET0_BREG_OFF (0u)

/** \brief Length for Ifx_BACKUP_BREG_SET1_Bits.BREG */
#define IFX_BACKUP_BREG_SET1_BREG_LEN (32u)

/** \brief Mask for Ifx_BACKUP_BREG_SET1_Bits.BREG */
#define IFX_BACKUP_BREG_SET1_BREG_MSK (0xffffffffu)

/** \brief Offset for Ifx_BACKUP_BREG_SET1_Bits.BREG */
#define IFX_BACKUP_BREG_SET1_BREG_OFF (0u)

/** \brief Length for Ifx_BACKUP_BREG_SET2_Bits.BREG */
#define IFX_BACKUP_BREG_SET2_BREG_LEN (32u)

/** \brief Mask for Ifx_BACKUP_BREG_SET2_Bits.BREG */
#define IFX_BACKUP_BREG_SET2_BREG_MSK (0xffffffffu)

/** \brief Offset for Ifx_BACKUP_BREG_SET2_Bits.BREG */
#define IFX_BACKUP_BREG_SET2_BREG_OFF (0u)

/** \brief Length for Ifx_BACKUP_BREG_SET3_Bits.BREG */
#define IFX_BACKUP_BREG_SET3_BREG_LEN (32u)

/** \brief Mask for Ifx_BACKUP_BREG_SET3_Bits.BREG */
#define IFX_BACKUP_BREG_SET3_BREG_MSK (0xffffffffu)

/** \brief Offset for Ifx_BACKUP_BREG_SET3_Bits.BREG */
#define IFX_BACKUP_BREG_SET3_BREG_OFF (0u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXBACKUP_BF_H_ */
