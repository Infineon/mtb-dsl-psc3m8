/***************************************************************************//**
* \file IfxBACKUP_regdef.h
*
* \brief
* BACKUP Registers
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
* \defgroup IfxSfr_BACKUP_Registers BACKUP Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_BACKUP_Registers_Bitfields Bitfields
* \ingroup IfxSfr_BACKUP_Registers
*
* \defgroup IfxSfr_BACKUP_Registers_union Register unions
* \ingroup IfxSfr_BACKUP_Registers
*
* \defgroup IfxSfr_BACKUP_Registers_struct Memory map
* \ingroup IfxSfr_BACKUP_Registers
*
*******************************************************************************/

#ifndef _IFXBACKUP_REGDEF_H_
#define _IFXBACKUP_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_BACKUP_Registers_Bitfields
 * \{  */
/** \brief Control */
typedef struct _Ifx_BACKUP_CTL_Bits
{
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [2:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit WCO_EN:1;               /**< \brief [3:3]   Watch-crystal oscillator (WCO) enable.
                                                                    If there is a write in progress when this bit is
                                                                    cleared, the WCO will be internally kept on until
                                                                    the write completes.
                                                                    After enabling the WCO software must wait until
                                                                    STATUS.WCO_OK=1 before configuring any component
                                                                    that depends on clk_lf/clk_bak, like for example
                                                                    RTC or WDTs.
                                                                    Follow the procedure in BACKUP_RTC_RW to access this bit. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit CLK_SEL:3;              /**< \brief [10:8]  Clock select for RTC clock (rw)
                                                WCO           : 0u   Watch-crystal oscillator input, available in
                                                                    Active, DeepSleep, Hibernate, and XRES.
                                                                    For products with an independent vbackup supply, it
                                                                    can continue operating in OFF w/Backup mode.
                                                ALTBAK        : 1u   This allows to use the LFCLK selection as an
                                                                    alternate backup domain clock.
                                                                    Note that LFCLK is only available in Active and
                                                                    DeepSleep power modes.
                                                                    Note that LFCLK clock glitches can propagate into
                                                                    the backup logic when the clock is stopped.
                                                                    For this reason, if the WCO or ILO is intended as
                                                                    the clock source then choose it directly instead of
                                                                    routing through LFCLK.
                                                ILO           : 2u   Internal Low frequency Oscillator, available in
                                                                    Active, DeepSleep, Hibernate, and XRES.
                                                                    For products with an independent vbackup supply, it
                                                                    can continue operating in OFF w/Backup mode.
                                                                    For Hibernate operation CLK_ILO0_CONFIG.
                                                                    ILO_BACKUP must be set.
                                                                    If there are multiple ILO, this is ILO0.
                                                LPECO_PRESCALER: 3u   Low-power external crystal oscillator prescaler
                                                                    output, available in Active, DeepSleep, Hibernate,
                                                                    and XRES.
                                                                    For products with an independent vbackup supply, it
                                                                    can continue operating in OFF w/Backup mode.
                                                PILO          : 4u   Precision internal low-speed oscillator, available
                                                                    in Active, DeepSleep, Hibernate, and XRES.
                                                                    For products with an independent vbackup supply, it
                                                                    can continue operating in OFF w/Backup mode. */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __IO Ifx_UReg_32Bit PRESCALER:2;            /**< \brief [13:12] Prescaler for real time clock used when
                                                                    WCO_BYPASS=1 and CLK_SEL = WCO.
                                                                    Configure this field before enabling the WCO, and
                                                                    do not change this setting when WCO_EN=1.
                                                                    0: 32768 Hz square wave.
                                                                    Connect a 32768 Hz square wave to WCO output pin.
                                                                    Do not connect WCO input pin.
                                                                    1: 60 Hz sine wave.
                                                                    Connect an AC-coupled sine wave to WCO input pin.
                                                                    Do not connect the WCO output pin at the board level.
                                                                    When connecting to 120V, 60Hz mains, use a
                                                                    capacitive divider with 2.2nF (200V) from mains to
                                                                    WCO input and 220nF (6V) from WCO input to ground.
                                                                    2: 50 Hz sine wave.
                                                                    Connect an AC-couple sine wave to WCO input pin.
                                                                    Do not connect the WCO output pin at the board level.
                                                                    When connecting to 220V, 50Hz mains, use a
                                                                    capacitive divider with 1nF (250V) from mains to
                                                                    WCO input and 220nF (6V) from WCO input to ground.
                                                                    3: reserved (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [15:14] \internal Reserved */
    __IO Ifx_UReg_32Bit WCO_BYPASS:1;           /**< \brief [16:16] Configures the WCO for different
                                                                    board-level connections to the WCO pins.
                                                                    For example, this can be used to connect an
                                                                    external watch crystal oscillator instead of a
                                                                    watch crystal.
                                                                    In all cases, the two related GPIO pins (WCO input
                                                                    and output pins) must be configured as analog
                                                                    connections using GPIO registers, and they must be
                                                                    hooked at the board level as described below.
                                                                    Configure this field before enabling the WCO, and
                                                                    do not change this setting when WCO_EN=1.
                                                                    0: Watch crystal.
                                                                    Connect a 32.768 kHz watch crystal between WCO
                                                                    input and output pins.
                                                                    1: Clock signal, either a square wave or sine wave.
                                                                    See PRESCALER field for connection information. (rw) */
    __IO Ifx_UReg_32Bit RESERVED:2;             /**< \brief [18:17] Reserved (rw) */
    __IO Ifx_UReg_32Bit VBACKUP_MEAS:1;         /**< \brief [19:19] Connect vbackup supply to the vbackup_meas
                                                                    output for measurement by an ADC attached to
                                                                    amuxbusa_adft_vddd.
                                                                    The vbackup_meas signal is scaled to 10 percent of
                                                                    vbackup, so it is within the supply range of the ADC. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [23:20] \internal Reserved */
    __IO Ifx_UReg_32Bit EN_CHARGE_KEY:8;        /**< \brief [31:24] When set to 3C, the supercap charger
                                                                    circuit is enabled.
                                                                    Any other code disables the supercap charger.
                                                                    THIS CHARGING CIRCUIT IS FOR A SUPERCAP ONLY AND
                                                                    CANNOT SAFELY CHARGE A BATTERY.
                                                                    DO NOT WRITE THIS KEY WHEN VBACKUP IS CONNECTED TO
                                                                    A BATTERY.
                                                                    Enabling this supercap charger with a depleted
                                                                    supercap can cause a temporary IR drop on the power
                                                                    rail supplying the logic in the backup domain.
                                                                    During cold boot, FW can determine that this
                                                                    condition could exist by seeing that any backup
                                                                    domain register has been reset.
                                                                    The charging time is 2.2*R*C, where R=100Kohm.
                                                                    So for a 100uF supercap, FW should wait for the
                                                                    charging time of 22seconds before issuing
                                                                    BACKUP.RESET and then enabling the WCO/PILO/ILO
                                                                    clock source and expecting data in BREGs to be retained. (rw) */
} Ifx_BACKUP_CTL_Bits;

/* BACKUP_CTL.CLK_SEL enumerated values */

/** \brief Watch-crystal oscillator input, available in Active, DeepSleep, Hibernate, and XRES.
For products with an independent vbackup supply, it can continue operating in
OFF w/Backup mode. */
#define IFX_BACKUP_CTL_CLK_SEL_WCO (0u)

/** \brief This allows to use the LFCLK selection as an alternate backup domain clock.
Note that LFCLK is only available in Active and DeepSleep power modes.
Note that LFCLK clock glitches can propagate into the backup logic when the
clock is stopped.
For this reason, if the WCO or ILO is intended as the clock source then choose
it directly instead of routing through LFCLK. */
#define IFX_BACKUP_CTL_CLK_SEL_ALTBAK (1u)

/** \brief Internal Low frequency Oscillator, available in Active, DeepSleep, Hibernate, and XRES.
For products with an independent vbackup supply, it can continue operating in
OFF w/Backup mode.
For Hibernate operation CLK_ILO0_CONFIG. ILO_BACKUP must be set.
If there are multiple ILO, this is ILO0. */
#define IFX_BACKUP_CTL_CLK_SEL_ILO (2u)

/** \brief Low-power external crystal oscillator prescaler output, available in Active,
DeepSleep, Hibernate, and XRES.
For products with an independent vbackup supply, it can continue operating in
OFF w/Backup mode. */
#define IFX_BACKUP_CTL_CLK_SEL_LPECO_PRESCALER (3u)

/** \brief Precision internal low-speed oscillator, available in Active, DeepSleep,
Hibernate, and XRES.
For products with an independent vbackup supply, it can continue operating in
OFF w/Backup mode. */
#define IFX_BACKUP_CTL_CLK_SEL_PILO (4u)

/** \brief RTC Read Write register */
typedef struct _Ifx_BACKUP_RTC_RW_Bits
{
    __IO Ifx_UReg_32Bit READ:1;                 /**< \brief [0:0]   Read bit
                                                                    When this bit is set the RTC registers will be
                                                                    copied to user registers and frozen so that a
                                                                    coherent RTC value can safely be read.
                                                                    The RTC will keep on running.
                                                                    Do not set the read bit if the RTC is still busy
                                                                    with a previous update (see RTC_BUSY bit) or if the
                                                                    Write bit is set.
                                                                    Do not set the Read bit at the same time that the
                                                                    Write bit is cleared. (rw) */
    __IO Ifx_UReg_32Bit WRITE:1;                /**< \brief [1:1]   Write bit
                                                                    Only when this bit is set can the RTC registers be
                                                                    written to (otherwise writes are ignored).
                                                                    This bit cannot be set if the RTC is still busy
                                                                    with a previous update (see RTC_BUSY bit) or if the
                                                                    Read bit is set or getting set.
                                                                    The user writes to the RTC user registers, when the
                                                                    Write bit is cleared by the user then the user
                                                                    registers content is copied to the actual RTC
                                                                    registers.
                                                                    Only user RTC registers that were written to will
                                                                    get copied, others will not be affected.
                                                                    When the SECONDS field is updated then TICKS will
                                                                    also be reset (WDT is not affected).
                                                                    Do not set the Write bit if the RTC is still busy
                                                                    with a previous update (see RTC_BUSY).
                                                                    Do not set the Write bit at the same time that the
                                                                    Read bit is cleared.
                                                                    FW should NOT permit DeepSleep with a pending WRITE
                                                                    transaction. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_BACKUP_RTC_RW_Bits;

/** \brief Oscillator calibration for absolute frequency */
typedef struct _Ifx_BACKUP_CAL_CTL_Bits
{
    __IO Ifx_UReg_32Bit CALIB_VAL:6;            /**< \brief [5:0]   Calibration value for absolute frequency
                                                                    (at a fixed temperature).
                                                                    Each step causes 128 ticks to be added or removed
                                                                    each hour.
                                                                    Effectively that means that each step is 1.085ppm
                                                                    (= 128/(60*60*32,768)) when CAL_COMP_PER_MIN is set
                                                                    at default value.
                                                                    Positive values 0x01-0x3c (1..60) add pulses,
                                                                    negative values remove pulses, thus giving a range
                                                                    of +/-65.1 ppm (limited by 60 minutes per hour, not
                                                                    the range of this field) when CAL_COMP_PER_MIN is
                                                                    set at default value .
                                                                    Calibration is performed hourly, starting at 59
                                                                    minutes and 59 seconds, and applied as 64 ticks
                                                                    every 30 seconds until there have been 2*CALIB_VAL
                                                                    adjustments when CAL_COMP_PER_MIN is set at default value . (rw) */
    __IO Ifx_UReg_32Bit CALIB_SIGN:1;           /**< \brief [6:6]   Calibration sign:
                                                                    0= Negative sign: remove pulses (it takes more
                                                                    clock ticks to count one second)
                                                                    1= Positive sign: add pulses (it takes less clock
                                                                    ticks to count one second) (rw) */
    __I  Ifx_UReg_32Bit :9;                     /**< \brief [15:7]  \internal Reserved */
    __IO Ifx_UReg_32Bit CAL_COMP_PER_MIN:2;     /**< \brief [17:16] Select how many time calibration is
                                                                    performed per minute  per step of 64 , each time a
                                                                    64 step is added or substracted one unit
                                                                    2/4/8/16*CALIB_VAL is substracted. (rw)
                                                2             : 0u   Calibration of 64 each is performed twice per
                                                                    minute for 2*CALIB_VAL per hour
                                                4             : 1u   Calibration of 64 each is performed four times per
                                                                    minute for 4*CALIB_VAL per hour
                                                8             : 2u   Calibration of 64 each is performed eight  times
                                                                    per minute for 8*CALIB_VAL per hour
                                                16            : 3u   Calibration of 64 each is performed sixteen times
                                                                    per minute for 16*CALIB_VAL per hour */
    __I  Ifx_UReg_32Bit :10;                    /**< \brief [27:18] \internal Reserved */
    __IO Ifx_UReg_32Bit CAL_SEL:2;              /**< \brief [29:28] Select calibration wave output signal (rw)
                                                CAL512        : 0u   512Hz wave, not affected by calibration setting
                                                                    (not supported for 50/60Hz input clock:
                                                                    CTL.PRESCALER!=0)
                                                RESERVED      : 1u   reserved
                                                CAL2          : 2u   2Hz wave, includes the effect of the calibration
                                                                    setting, (not supported for 50/60Hz input clock:
                                                                    CTL.PRESCALER!=0)
                                                CAL1          : 3u   1Hz wave, includes the effect of the calibration
                                                                    setting (supported for all input clocks) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [30:30] \internal Reserved */
    __IO Ifx_UReg_32Bit CAL_OUT:1;              /**< \brief [31:31] Output enable for wave signal for
                                                                    calibration and allow CALIB_VAL to be written. (rw) */
} Ifx_BACKUP_CAL_CTL_Bits;

/* BACKUP_CAL_CTL.CAL_COMP_PER_MIN enumerated values */

/** \brief Calibration of 64 each is performed twice per minute for 2*CALIB_VAL per hour */
#define IFX_BACKUP_CAL_CTL_CAL_COMP_PER_MIN_2 (0u)

/** \brief Calibration of 64 each is performed four times per minute for 4*CALIB_VAL per hour */
#define IFX_BACKUP_CAL_CTL_CAL_COMP_PER_MIN_4 (1u)

/** \brief Calibration of 64 each is performed eight  times per minute for 8*CALIB_VAL per hour */
#define IFX_BACKUP_CAL_CTL_CAL_COMP_PER_MIN_8 (2u)

/** \brief Calibration of 64 each is performed sixteen times per minute for 16*CALIB_VAL per hour */
#define IFX_BACKUP_CAL_CTL_CAL_COMP_PER_MIN_16 (3u)

/* BACKUP_CAL_CTL.CAL_SEL enumerated values */

/** \brief 512Hz wave, not affected by calibration setting (not supported for 50/60Hz
input clock: CTL.PRESCALER!=0) */
#define IFX_BACKUP_CAL_CTL_CAL_SEL_CAL512 (0u)

/** \brief reserved */
#define IFX_BACKUP_CAL_CTL_CAL_SEL_RESERVED (1u)

/** \brief 2Hz wave, includes the effect of the calibration setting, (not supported for
50/60Hz input clock: CTL.PRESCALER!=0) */
#define IFX_BACKUP_CAL_CTL_CAL_SEL_CAL2 (2u)

/** \brief 1Hz wave, includes the effect of the calibration setting (supported for all
input clocks) */
#define IFX_BACKUP_CAL_CTL_CAL_SEL_CAL1 (3u)

/** \brief Status */
typedef struct _Ifx_BACKUP_STATUS_Bits
{
    __I  Ifx_UReg_32Bit RTC_BUSY:1;             /**< \brief [0:0]   Pending RTC write (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [1:1]   \internal Reserved */
    __I  Ifx_UReg_32Bit WCO_OK:1;               /**< \brief [2:2]   Obsolete.
                                                                    Use WCO_STATUS.WCO_OK for future designs. (r) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_BACKUP_STATUS_Bits;

/** \brief Calendar Seconds, Minutes, Hours, Day of Week */
typedef struct _Ifx_BACKUP_RTC_TIME_Bits
{
    __IO Ifx_UReg_32Bit RTC_SEC:6;              /**< \brief [5:0]   Calendar seconds, 0-59 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit RTC_MIN:6;              /**< \brief [13:8]  Calendar minutes, 0-59 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [15:14] \internal Reserved */
    __IO Ifx_UReg_32Bit RTC_HOUR:5;             /**< \brief [20:16] Calendar hours, value depending on 12/24HR mode
                                                                    0=24HR: [20:16]=0-23
                                                                    1=12HR: [20]:0=AM, 1=PM, [19:16]=1-12 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [21:21] \internal Reserved */
    __IO Ifx_UReg_32Bit CTRL_12HR:1;            /**< \brief [22:22] Select 12/24HR mode: 1=12HR, 0=24HR (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit RTC_DAY:3;              /**< \brief [26:24] Calendar Day of the week, 1-7
                                                                    It is up to the user to define the meaning of the
                                                                    values, but 1=Monday is recommended (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_BACKUP_RTC_TIME_Bits;

/** \brief Calendar Day of Month, Month,  Year */
typedef struct _Ifx_BACKUP_RTC_DATE_Bits
{
    __IO Ifx_UReg_32Bit RTC_DATE:5;             /**< \brief [4:0]   Calendar Day of the Month, 1-31
                                                                    Automatic Leap Year Correction (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit RTC_MON:4;              /**< \brief [11:8]  Calendar Month, 1-12 (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __IO Ifx_UReg_32Bit RTC_YEAR:7;             /**< \brief [22:16] Calendar year, 0-99 (rw) */
    __I  Ifx_UReg_32Bit :9;                     /**< \brief [31:23] \internal Reserved */
} Ifx_BACKUP_RTC_DATE_Bits;

/** \brief Alarm 1 Seconds, Minute, Hours, Day of Week */
typedef struct _Ifx_BACKUP_ALM1_TIME_Bits
{
    __IO Ifx_UReg_32Bit ALM_SEC:6;              /**< \brief [5:0]   Alarm seconds, 0-59 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [6:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_SEC_EN:1;           /**< \brief [7:7]   Alarm second enable: 0=ignore, 1=match (rw) */
    __IO Ifx_UReg_32Bit ALM_MIN:6;              /**< \brief [13:8]  Alarm minutes, 0-59 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [14:14] \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_MIN_EN:1;           /**< \brief [15:15] Alarm minutes enable: 0=ignore, 1=match (rw) */
    __IO Ifx_UReg_32Bit ALM_HOUR:5;             /**< \brief [20:16] Alarm hours, value depending on 12/24HR mode
                                                                    24HR: [4:0]=0-23
                                                                    12HR: [4]:0=AM, 1=PM, [3:0]=1-12 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [22:21] \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_HOUR_EN:1;          /**< \brief [23:23] Alarm hour enable: 0=ignore, 1=match (rw) */
    __IO Ifx_UReg_32Bit ALM_DAY:3;              /**< \brief [26:24] Alarm Day of the week, 1-7
                                                                    It is up to the user to define the meaning of the
                                                                    values, but 1=Monday is recommended (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [30:27] \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_DAY_EN:1;           /**< \brief [31:31] Alarm Day of the Week enable: 0=ignore,
                                                                    1=match (rw) */
} Ifx_BACKUP_ALM1_TIME_Bits;

/** \brief Alarm 1 Day of Month, Month */
typedef struct _Ifx_BACKUP_ALM1_DATE_Bits
{
    __IO Ifx_UReg_32Bit ALM_DATE:5;             /**< \brief [4:0]   Alarm Day of the Month, 1-31
                                                                    Leap Year corrected (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [6:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_DATE_EN:1;          /**< \brief [7:7]   Alarm Day of the Month enable: 0=ignore,
                                                                    1=match (rw) */
    __IO Ifx_UReg_32Bit ALM_MON:4;              /**< \brief [11:8]  Alarm Month, 1-12 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [14:12] \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_MON_EN:1;           /**< \brief [15:15] Alarm Month enable: 0=ignore, 1=match (rw) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [30:16] \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_EN:1;               /**< \brief [31:31] Master enable for alarm 1.
                                                                    0: Alarm 1 is disabled.
                                                                    Fields for date and time are ignored.
                                                                    1: Alarm 1 is enabled.
                                                                    Alarm triggers whenever the new date and time
                                                                    matches all the enabled date and time fields, which
                                                                    can happen more than once depending on configuration.
                                                                    If none of the date and time fields are enabled,
                                                                    then this alarm triggers once every second. (rw) */
} Ifx_BACKUP_ALM1_DATE_Bits;

/** \brief Alarm 2 Seconds, Minute, Hours, Day of Week */
typedef struct _Ifx_BACKUP_ALM2_TIME_Bits
{
    __IO Ifx_UReg_32Bit ALM_SEC:6;              /**< \brief [5:0]   Alarm seconds, 0-59 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [6:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_SEC_EN:1;           /**< \brief [7:7]   Alarm second enable: 0=ignore, 1=match (rw) */
    __IO Ifx_UReg_32Bit ALM_MIN:6;              /**< \brief [13:8]  Alarm minutes, 0-59 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [14:14] \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_MIN_EN:1;           /**< \brief [15:15] Alarm minutes enable: 0=ignore, 1=match (rw) */
    __IO Ifx_UReg_32Bit ALM_HOUR:5;             /**< \brief [20:16] Alarm hours, value depending on 12/24HR mode
                                                                    24HR: [4:0]=0-23
                                                                    12HR: [4]:0=AM, 1=PM, [3:0]=1-12 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [22:21] \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_HOUR_EN:1;          /**< \brief [23:23] Alarm hour enable: 0=ignore, 1=match (rw) */
    __IO Ifx_UReg_32Bit ALM_DAY:3;              /**< \brief [26:24] Alarm Day of the week, 1-7
                                                                    It is up to the user to define the meaning of the
                                                                    values, but 1=Monday is recommended (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [30:27] \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_DAY_EN:1;           /**< \brief [31:31] Alarm Day of the Week enable: 0=ignore,
                                                                    1=match (rw) */
} Ifx_BACKUP_ALM2_TIME_Bits;

/** \brief Alarm 2 Day of Month, Month */
typedef struct _Ifx_BACKUP_ALM2_DATE_Bits
{
    __IO Ifx_UReg_32Bit ALM_DATE:5;             /**< \brief [4:0]   Alarm Day of the Month, 1-31
                                                                    Leap Year corrected (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [6:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_DATE_EN:1;          /**< \brief [7:7]   Alarm Day of the Month enable: 0=ignore,
                                                                    1=match (rw) */
    __IO Ifx_UReg_32Bit ALM_MON:4;              /**< \brief [11:8]  Alarm Month, 1-12 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [14:12] \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_MON_EN:1;           /**< \brief [15:15] Alarm Month enable: 0=ignore, 1=match (rw) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [30:16] \internal Reserved */
    __IO Ifx_UReg_32Bit ALM_EN:1;               /**< \brief [31:31] Master enable for alarm 2.
                                                                    0: Alarm 2 is disabled.
                                                                    Fields for date and time are ignored.
                                                                    1: Alarm 2 is enabled.
                                                                    Alarm triggers whenever the new date and time
                                                                    matches all the enabled date and time fields, which
                                                                    can happen more than once depending on configuration.
                                                                    If none of the date and time fields are enabled,
                                                                    then this alarm triggers once every second. (rw) */
} Ifx_BACKUP_ALM2_DATE_Bits;

/** \brief Interrupt request register */
typedef struct _Ifx_BACKUP_INTR_Bits
{
    __IO Ifx_UReg_32Bit ALARM1:1;               /**< \brief [0:0]   Alarm 1 Interrupt (rw) */
    __IO Ifx_UReg_32Bit ALARM2:1;               /**< \brief [1:1]   Alarm 2 Interrupt (rw) */
    __IO Ifx_UReg_32Bit CENTURY:1;              /**< \brief [2:2]   Century overflow interrupt (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_BACKUP_INTR_Bits;

/** \brief Interrupt set request register */
typedef struct _Ifx_BACKUP_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit ALARM1:1;               /**< \brief [0:0]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit ALARM2:1;               /**< \brief [1:1]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit CENTURY:1;              /**< \brief [2:2]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_BACKUP_INTR_SET_Bits;

/** \brief Interrupt mask register */
typedef struct _Ifx_BACKUP_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit ALARM1:1;               /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit ALARM2:1;               /**< \brief [1:1]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit CENTURY:1;              /**< \brief [2:2]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_BACKUP_INTR_MASK_Bits;

/** \brief Interrupt masked request register */
typedef struct _Ifx_BACKUP_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit ALARM1:1;               /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit ALARM2:1;               /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit CENTURY:1;              /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_BACKUP_INTR_MASKED_Bits;

/** \brief PMIC control register */
typedef struct _Ifx_BACKUP_PMIC_CTL_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit UNLOCK:8;               /**< \brief [15:8]  This byte must be set to 0x3A for PMIC to
                                                                    be disabled.
                                                                    When the UNLOCK code is not present: writes to
                                                                    PMIC_EN field are ignored and the hardware ignores
                                                                    the value in PMIC_EN.
                                                                    Do not change PMIC_EN in the same write cycle as
                                                                    setting/clearing the UNLOCK code; do these in
                                                                    separate write cycles. (rw) */
    __IO Ifx_UReg_32Bit POLARITY:1;             /**< \brief [16:16] Set polarity of wakeup signal used to
                                                                    enable the PMIC.  Always write this bit '1'.
                                                                    0: reserved for future use,
                                                                    1: PMIC enables when wakeup signal is high. (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [28:17] \internal Reserved */
    __IO Ifx_UReg_32Bit PMIC_EN_OUTEN:1;        /**< \brief [29:29] Output enable for the output driver in the
                                                                    PMIC_EN pad.
                                                                    0: Output pad is tristate for PMIC_EN pin.
                                                                    This can allow this pin to be used for another purpose.
                                                                    Tristate condition is kept only if the UNLOCK key
                                                                    (0x3A) is present
                                                                    1: Output pad is enabled for PMIC_EN pin. (rw) */
    __IO Ifx_UReg_32Bit PMIC_ALWAYSEN:1;        /**< \brief [30:30] Override normal PMIC controls to prevent
                                                                    accidentally turning off the PMIC by errant
                                                                    firmware.
                                                                    0: Normal operation, PMIC_EN and PMIC_OUTEN work as
                                                                    described
                                                                    1: PMIC_EN and PMIC_OUTEN are ignored and the
                                                                    output pad is forced enabled.
                                                                    Note: This bit is a write-once bit until the next
                                                                    backup reset. (rw) */
    __IO Ifx_UReg_32Bit PMIC_EN:1;              /**< \brief [31:31] Enable for external PMIC that supplies vddd
                                                                    (if present).
                                                                    This bit will only clear if UNLOCK was written
                                                                    correctly in a previous write operation and
                                                                    PMIC_ALWAYSEN=0.
                                                                    When PMIC_EN=0, the system functions normally until
                                                                    vddd is no longer present (OFF w/Backup mode).
                                                                    Firmware can set this bit, if it does so before
                                                                    vddd is actually removed.
                                                                    This bit is also set by any RTC alarm or PMIC pin
                                                                    wakeup event regardless of UNLOCK setting. (rw) */
} Ifx_BACKUP_PMIC_CTL_Bits;

/** \brief Backup reset register */
typedef struct _Ifx_BACKUP_RESET_Bits
{
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [30:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit RESET:1;                /**< \brief [31:31] Writing 1 to this register resets the backup logic.
                                                                    Hardware clears it when the reset is complete.
                                                                    After setting this register, firmware should
                                                                    confirm it reads as 0 before attempting to write
                                                                    other backup registers. (rw) */
} Ifx_BACKUP_RESET_Bits;

/** \brief WCO Status Register */
typedef struct _Ifx_BACKUP_WCO_STATUS_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit WCO_OK:1;               /**< \brief [2:2]   Indicates that output has transitioned. (r) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_BACKUP_WCO_STATUS_Bits;

/** \brief Backup register region 0 */
typedef struct _Ifx_BACKUP_BREG_SET0_Bits
{
    __IO Ifx_UReg_32Bit BREG:32;                /**< \brief [31:0]  Backup memory that contains
                                                                    application-specific data.
                                                                    Memory is retained on vbackup supply. (rw) */
} Ifx_BACKUP_BREG_SET0_Bits;

/** \brief Backup register region 1 */
typedef struct _Ifx_BACKUP_BREG_SET1_Bits
{
    __IO Ifx_UReg_32Bit BREG:32;                /**< \brief [31:0]  Backup memory that contains
                                                                    application-specific data.
                                                                    Memory is retained on vbackup supply. (rw) */
} Ifx_BACKUP_BREG_SET1_Bits;

/** \brief Backup register region 2 */
typedef struct _Ifx_BACKUP_BREG_SET2_Bits
{
    __IO Ifx_UReg_32Bit BREG:32;                /**< \brief [31:0]  Backup memory that contains
                                                                    application-specific data.
                                                                    Memory is retained on vbackup supply. (rw) */
} Ifx_BACKUP_BREG_SET2_Bits;

/** \brief Backup register region 3 */
typedef struct _Ifx_BACKUP_BREG_SET3_Bits
{
    __IO Ifx_UReg_32Bit BREG:32;                /**< \brief [31:0]  Backup memory that contains
                                                                    application-specific data.
                                                                    Memory is retained on vbackup supply. (rw) */
} Ifx_BACKUP_BREG_SET3_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_BACKUP_Registers_union
 * \{   */
/** \brief Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_CTL_Bits B;                      /**< \brief Bitfield access */
} Ifx_BACKUP_CTL;

/** \brief RTC Read Write register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_RTC_RW_Bits B;                   /**< \brief Bitfield access */
} Ifx_BACKUP_RTC_RW;

/** \brief Oscillator calibration for absolute frequency */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_CAL_CTL_Bits B;                  /**< \brief Bitfield access */
} Ifx_BACKUP_CAL_CTL;

/** \brief Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_STATUS_Bits B;                   /**< \brief Bitfield access */
} Ifx_BACKUP_STATUS;

/** \brief Calendar Seconds, Minutes, Hours, Day of Week */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_RTC_TIME_Bits B;                 /**< \brief Bitfield access */
} Ifx_BACKUP_RTC_TIME;

/** \brief Calendar Day of Month, Month,  Year */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_RTC_DATE_Bits B;                 /**< \brief Bitfield access */
} Ifx_BACKUP_RTC_DATE;

/** \brief Alarm 1 Seconds, Minute, Hours, Day of Week */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_ALM1_TIME_Bits B;                /**< \brief Bitfield access */
} Ifx_BACKUP_ALM1_TIME;

/** \brief Alarm 1 Day of Month, Month */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_ALM1_DATE_Bits B;                /**< \brief Bitfield access */
} Ifx_BACKUP_ALM1_DATE;

/** \brief Alarm 2 Seconds, Minute, Hours, Day of Week */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_ALM2_TIME_Bits B;                /**< \brief Bitfield access */
} Ifx_BACKUP_ALM2_TIME;

/** \brief Alarm 2 Day of Month, Month */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_ALM2_DATE_Bits B;                /**< \brief Bitfield access */
} Ifx_BACKUP_ALM2_DATE;

/** \brief Interrupt request register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_INTR_Bits B;                     /**< \brief Bitfield access */
} Ifx_BACKUP_INTR;

/** \brief Interrupt set request register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_INTR_SET_Bits B;                 /**< \brief Bitfield access */
} Ifx_BACKUP_INTR_SET;

/** \brief Interrupt mask register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_INTR_MASK_Bits B;                /**< \brief Bitfield access */
} Ifx_BACKUP_INTR_MASK;

/** \brief Interrupt masked request register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_INTR_MASKED_Bits B;              /**< \brief Bitfield access */
} Ifx_BACKUP_INTR_MASKED;

/** \brief PMIC control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_PMIC_CTL_Bits B;                 /**< \brief Bitfield access */
} Ifx_BACKUP_PMIC_CTL;

/** \brief Backup reset register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_RESET_Bits B;                    /**< \brief Bitfield access */
} Ifx_BACKUP_RESET;

/** \brief WCO Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_WCO_STATUS_Bits B;               /**< \brief Bitfield access */
} Ifx_BACKUP_WCO_STATUS;

/** \brief Backup register region 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_BREG_SET0_Bits B;                /**< \brief Bitfield access */
} Ifx_BACKUP_BREG_SET0;

/** \brief Backup register region 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_BREG_SET1_Bits B;                /**< \brief Bitfield access */
} Ifx_BACKUP_BREG_SET1;

/** \brief Backup register region 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_BREG_SET2_Bits B;                /**< \brief Bitfield access */
} Ifx_BACKUP_BREG_SET2;

/** \brief Backup register region 3 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_BACKUP_BREG_SET3_Bits B;                /**< \brief Bitfield access */
} Ifx_BACKUP_BREG_SET3;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_BACKUP_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief BACKUP object */
typedef volatile struct _Ifx_BACKUP
{
       __IO Ifx_BACKUP_CTL                      CTL;                    /**< \brief 0, Control*/
       __I  Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, */
       __IO Ifx_BACKUP_RTC_RW                   RTC_RW;                 /**< \brief 8, RTC Read Write register*/
       __IO Ifx_BACKUP_CAL_CTL                  CAL_CTL;                /**< \brief C, Oscillator calibration for absolute frequency*/
       __I  Ifx_BACKUP_STATUS                   STATUS;                 /**< \brief 10, Status*/
       __IO Ifx_BACKUP_RTC_TIME                 RTC_TIME;               /**< \brief 14, Calendar Seconds, Minutes, Hours, Day of Week*/
       __IO Ifx_BACKUP_RTC_DATE                 RTC_DATE;               /**< \brief 18, Calendar Day of Month, Month,  Year*/
       __IO Ifx_BACKUP_ALM1_TIME                ALM1_TIME;              /**< \brief 1C, Alarm 1 Seconds, Minute, Hours, Day of Week*/
       __IO Ifx_BACKUP_ALM1_DATE                ALM1_DATE;              /**< \brief 20, Alarm 1 Day of Month, Month*/
       __IO Ifx_BACKUP_ALM2_TIME                ALM2_TIME;              /**< \brief 24, Alarm 2 Seconds, Minute, Hours, Day of Week*/
       __IO Ifx_BACKUP_ALM2_DATE                ALM2_DATE;              /**< \brief 28, Alarm 2 Day of Month, Month*/
       __IO Ifx_BACKUP_INTR                     INTR;                   /**< \brief 2C, Interrupt request register*/
       __IO Ifx_BACKUP_INTR_SET                 INTR_SET;               /**< \brief 30, Interrupt set request register*/
       __IO Ifx_BACKUP_INTR_MASK                INTR_MASK;              /**< \brief 34, Interrupt mask register*/
       __I  Ifx_BACKUP_INTR_MASKED              INTR_MASKED;            /**< \brief 38, Interrupt masked request register*/
       __I  Ifx_UReg_8Bit                       reserved_3C[8];         /**< \brief 3C, */
       __IO Ifx_BACKUP_PMIC_CTL                 PMIC_CTL;               /**< \brief 44, PMIC control register*/
       __IO Ifx_BACKUP_RESET                    RESET;                  /**< \brief 48, Backup reset register*/
       __I  Ifx_UReg_8Bit                       reserved_4C[68];        /**< \brief 4C, */
       __I  Ifx_BACKUP_WCO_STATUS               WCO_STATUS;             /**< \brief 90, WCO Status Register*/
       __I  Ifx_UReg_8Bit                       reserved_94[3948];      /**< \brief 94, */
       __IO Ifx_BACKUP_BREG_SET0                BREG_SET0[4];           /**< \brief 1000, Backup register region 0*/
       __IO Ifx_BACKUP_BREG_SET1                BREG_SET1[4];           /**< \brief 1010, Backup register region 1*/
       __IO Ifx_BACKUP_BREG_SET2                BREG_SET2[8];           /**< \brief 1020, Backup register region 2*/
       __I  Ifx_UReg_8Bit                       reserved_1040[64];      /**< \brief 1040, */
       __IO Ifx_BACKUP_BREG_SET3                BREG_SET3[48];          /**< \brief 1080, Backup register region 3*/
       __I  Ifx_UReg_8Bit                       reserved_1140[61120];   /**< \brief 1140, */
} Ifx_BACKUP;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXBACKUP_REGDEF_H_ */
