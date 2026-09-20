/***************************************************************************//**
* \file IfxCM33_regdef.h
*
* \brief
* CM33 Registers
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
* \defgroup IfxSfr_CM33_Registers CM33 Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_CM33_Registers_Bitfields Bitfields
* \ingroup IfxSfr_CM33_Registers
*
* \defgroup IfxSfr_CM33_Registers_union Register unions
* \ingroup IfxSfr_CM33_Registers
*
* \defgroup IfxSfr_CM33_Registers_struct Memory map
* \ingroup IfxSfr_CM33_Registers
*
*******************************************************************************/

#ifndef _IFXCM33_REGDEF_H_
#define _IFXCM33_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_CM33_Registers_Bitfields
 * \{  */
/** \brief CTI Control Register */
typedef struct _Ifx_CM33_CTI_CTICONTROL_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (rw) */
} Ifx_CM33_CTI_CTICONTROL_Bits;

/** \brief CTI Interrupt Acknowledge Register */
typedef struct _Ifx_CM33_CTI_CTIINTACK_Bits
{
    __O  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (w) */
} Ifx_CM33_CTI_CTIINTACK_Bits;

/** \brief CTI Application Trigger Set Register */
typedef struct _Ifx_CM33_CTI_CTIAPPSET_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (rw) */
} Ifx_CM33_CTI_CTIAPPSET_Bits;

/** \brief CTI Application Trigger Clear Register */
typedef struct _Ifx_CM33_CTI_CTIAPPCLEAR_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (rw) */
} Ifx_CM33_CTI_CTIAPPCLEAR_Bits;

/** \brief CTI Application Pulse Register */
typedef struct _Ifx_CM33_CTI_CTIAPPPULSE_Bits
{
    __O  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (w) */
} Ifx_CM33_CTI_CTIAPPPULSE_Bits;

/** \brief CTI Trigger to Channel Enable Registers */
typedef struct _Ifx_CM33_CTI_CTIINEN_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (rw) */
} Ifx_CM33_CTI_CTIINEN_Bits;

/** \brief CTI Channel to Trigger Enable Registers */
typedef struct _Ifx_CM33_CTI_CTIOUTEN_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (rw) */
} Ifx_CM33_CTI_CTIOUTEN_Bits;

/** \brief CTI Trigger In Status Register */
typedef struct _Ifx_CM33_CTI_CTITRIGINSTATUS_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_CTITRIGINSTATUS_Bits;

/** \brief CTI Trigger Out Status Register */
typedef struct _Ifx_CM33_CTI_CTITRIGOUTSTATUS_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_CTITRIGOUTSTATUS_Bits;

/** \brief CTI Channel In Status Register */
typedef struct _Ifx_CM33_CTI_CTICHINSTATUS_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_CTICHINSTATUS_Bits;

/** \brief Enable CTI Channel Gate Register */
typedef struct _Ifx_CM33_CTI_CTIGATE_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (rw) */
} Ifx_CM33_CTI_CTIGATE_Bits;

/** \brief External Multiplexor Control Register */
typedef struct _Ifx_CM33_CTI_ASICCTL_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (rw) */
} Ifx_CM33_CTI_ASICCTL_Bits;

/** \brief ITCHOUT Register */
typedef struct _Ifx_CM33_CTI_ITCHOUT_Bits
{
    __O  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (w) */
} Ifx_CM33_CTI_ITCHOUT_Bits;

/** \brief ITTRIGOUT Register */
typedef struct _Ifx_CM33_CTI_ITTRIGOUT_Bits
{
    __O  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (w) */
} Ifx_CM33_CTI_ITTRIGOUT_Bits;

/** \brief ITCHIN Register */
typedef struct _Ifx_CM33_CTI_ITCHIN_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_ITCHIN_Bits;

/** \brief Integration Mode Control Register */
typedef struct _Ifx_CM33_CTI_ITCTRL_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (rw) */
} Ifx_CM33_CTI_ITCTRL_Bits;

/** \brief Device Architecture register */
typedef struct _Ifx_CM33_CTI_DEVARCH_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_DEVARCH_Bits;

/** \brief Device Configuration Register */
typedef struct _Ifx_CM33_CTI_DEVID_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_DEVID_Bits;

/** \brief Device Type Identifier Register */
typedef struct _Ifx_CM33_CTI_DEVTYPE_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_DEVTYPE_Bits;

/** \brief Peripheral Identification Register 4 */
typedef struct _Ifx_CM33_CTI_PIDR4_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_PIDR4_Bits;

/** \brief Peripheral Identification Register 5 */
typedef struct _Ifx_CM33_CTI_PIDR5_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_PIDR5_Bits;

/** \brief Peripheral Identification Register 6 */
typedef struct _Ifx_CM33_CTI_PIDR6_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_PIDR6_Bits;

/** \brief Peripheral Identification Register 7 */
typedef struct _Ifx_CM33_CTI_PIDR7_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_PIDR7_Bits;

/** \brief Peripheral Identification Register 0 */
typedef struct _Ifx_CM33_CTI_PIDR0_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_PIDR0_Bits;

/** \brief Peripheral Identification Register 1 */
typedef struct _Ifx_CM33_CTI_PIDR1_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_PIDR1_Bits;

/** \brief Peripheral Identification Register 2 */
typedef struct _Ifx_CM33_CTI_PIDR2_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_PIDR2_Bits;

/** \brief Peripheral Identification Register 3 */
typedef struct _Ifx_CM33_CTI_PIDR3_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_PIDR3_Bits;

/** \brief Component Identification Register 0 */
typedef struct _Ifx_CM33_CTI_CIDR0_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_CIDR0_Bits;

/** \brief Component Identification Register 1 */
typedef struct _Ifx_CM33_CTI_CIDR1_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_CIDR1_Bits;

/** \brief Component Identification Register 2 */
typedef struct _Ifx_CM33_CTI_CIDR2_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_CIDR2_Bits;

/** \brief Component Identification Register 3 */
typedef struct _Ifx_CM33_CTI_CIDR3_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]   (r) */
} Ifx_CM33_CTI_CIDR3_Bits;

/** \brief CTI Control Register */
typedef struct _Ifx_CM33_TRC_CTI_CTICONTROL_Bits
{
    __IO Ifx_UReg_32Bit GLBEN:1;                /**< \brief [0:0]   Enables or disables the ECT:
                                                                    0 = disabled (reset)
                                                                    1 = enabled.
                                                                    When disabled, all cross triggering mapping logic
                                                                    functionality is disabled for this processor. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CTICONTROL_Bits;

/** \brief CTI Interrupt Acknowledge Register */
typedef struct _Ifx_CM33_TRC_CTI_CTIINTACK_Bits
{
    __O  Ifx_UReg_32Bit INTACK:32;              /**< \brief [31:0]  Acknowledges the corresponding CTITRIGOUT output:
                                                                    1 = CTITRIGOUT is acknowledged and is cleared when
                                                                    MAPTRIGOUT is LOW. 0 = no effect.
                                                                    There is one bit of the register for each
                                                                    CTITRIGOUT output. (w) */
} Ifx_CM33_TRC_CTI_CTIINTACK_Bits;

/** \brief CTI Application Trigger Set Register */
typedef struct _Ifx_CM33_TRC_CTI_CTIAPPSET_Bits
{
    __IO Ifx_UReg_32Bit APPSET:4;               /**< \brief [3:0]   Setting a bit HIGH generates a channel
                                                                    event for the selected channel. Read:
                                                                    0 = application trigger inactive (reset)
                                                                    1 = application trigger active.
                                                                    Write:
                                                                    0 = no effect
                                                                    1 = generate channel event.
                                                                    There is one bit of the register for each channel. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CTIAPPSET_Bits;

/** \brief CTI Application Trigger Clear Register */
typedef struct _Ifx_CM33_TRC_CTI_CTIAPPCLEAR_Bits
{
    __O  Ifx_UReg_32Bit APPCLEAR:4;             /**< \brief [3:0]   Clears corresponding bits in the CTIAPPSET
                                                                    register.
                                                                    1 = application trigger disabled in the CTIAPPSET
                                                                    register 0 = no effect.
                                                                    There is one bit of the register for each channel. (w) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CTIAPPCLEAR_Bits;

/** \brief CTI Application Pulse Register */
typedef struct _Ifx_CM33_TRC_CTI_CTIAPPPULSE_Bits
{
    __O  Ifx_UReg_32Bit APPULSE:4;              /**< \brief [3:0]   Setting a bit HIGH generates a channel
                                                                    event pulse for the selected channel. Write:
                                                                    1 = channel event pulse generated for one CTICLK
                                                                    period 0 = no effect.
                                                                    There is one bit of the register for each channel. (w) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CTIAPPPULSE_Bits;

/** \brief CTI Trigger to Channel Enable Registers */
typedef struct _Ifx_CM33_TRC_CTI_CTIINEN_Bits
{
    __IO Ifx_UReg_32Bit TRIGINEN:4;             /**< \brief [3:0]   Enables a cross trigger event to the
                                                                    corresponding channel when an CTITRIGIN is
                                                                    activated.
                                                                    1 = enables the CTITRIGIN signal to generate an
                                                                    event on the respective channel of the CTM.
                                                                    There is one bit of the register for each of the
                                                                    four channels.
                                                                    For example in register CTIINEN0, TRIGINEN[0] set
                                                                    to 1 enables CTITRIGIN onto channel 0.
                                                                    0 = disables the CTITRIGIN signal from generating
                                                                    an event on the respective channel of the CTM. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CTIINEN_Bits;

/** \brief CTI Channel to Trigger Enable Registers */
typedef struct _Ifx_CM33_TRC_CTI_CTIOUTEN_Bits
{
    __IO Ifx_UReg_32Bit TRIGOUTEN:4;            /**< \brief [3:0]   Changing the value of this bit from a 0 to
                                                                    a 1 enables a channel event for the corresponding
                                                                    channel to generate an CTITRIGOUT output:
                                                                    0 = the channel input (CTICHIN) from the CTM is not
                                                                    routed to the CTITRIGOUT output 1 = the channel
                                                                    input (CTICHIN) from the CTM is routed to the
                                                                    CTITRIGOUT output.
                                                                    There is one bit for each of the four channels.
                                                                    For example in register CTIOUTEN0, enabling bit 0
                                                                    enables CTICHIN[0] to cause a trigger event on the
                                                                    CTITRIGOUT[0] output. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CTIOUTEN_Bits;

/** \brief CTI Trigger In Status Register */
typedef struct _Ifx_CM33_TRC_CTI_CTITRIGINSTATUS_Bits
{
    __I  Ifx_UReg_32Bit TRIGINSTATUS:32;        /**< \brief [31:0]  Shows the status of the CTITRIGIN inputs:
                                                                    1 = CTITRIGIN is active
                                                                    0 = CTITRIGIN is inactive.
                                                                    Because the register provides a view of the raw
                                                                    CTITRIGIN inputs, the reset value is unknown.
                                                                    There is one bit of the register for each trigger input. (r) */
} Ifx_CM33_TRC_CTI_CTITRIGINSTATUS_Bits;

/** \brief CTI Trigger Out Status Register */
typedef struct _Ifx_CM33_TRC_CTI_CTITRIGOUTSTATUS_Bits
{
    __I  Ifx_UReg_32Bit TRIGOUTSTATUS:32;       /**< \brief [31:0]  Shows the status of the CTITRIGOUT outputs.
                                                                    1 = CTITRIGOUT is active
                                                                    0 = CTITRIGOUT is inactive (reset).
                                                                    There is one bit of the register for each trigger output. (r) */
} Ifx_CM33_TRC_CTI_CTITRIGOUTSTATUS_Bits;

/** \brief CTI Channel In Status Register */
typedef struct _Ifx_CM33_TRC_CTI_CTICHINSTATUS_Bits
{
    __I  Ifx_UReg_32Bit CTICHINSTATUS:4;        /**< \brief [3:0]   Shows the status of the CTICHIN inputs:
                                                                    1 = CTICHIN is active
                                                                    0 = CTICHIN is inactive.
                                                                    Because the register provides a view of the raw
                                                                    CTICHIN inputs from the CTM, the reset value is unknown.
                                                                    There is one bit of the register for each channel input. (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CTICHINSTATUS_Bits;

/** \brief CTI Channel Out Status Register */
typedef struct _Ifx_CM33_TRC_CTI_CTICHOUTSTATUS_Bits
{
    __I  Ifx_UReg_32Bit CTICHOUTSTATUS:4;       /**< \brief [3:0]   Shows the status of the CTICHOUT outputs.
                                                                    1 = CTICHOUT is active
                                                                    0 = CTICHOUT is inactive (reset).
                                                                    There is one bit of the register for each channel output. (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CTICHOUTSTATUS_Bits;

/** \brief Enable CTI Channel Gate Register */
typedef struct _Ifx_CM33_TRC_CTI_CTIGATE_Bits
{
    __IO Ifx_UReg_32Bit CTIGATEEN0:1;           /**< \brief [0:0]   Enable CTICHOUT0.
                                                                    Set to 0 to disable channel propagation. (rw) */
    __IO Ifx_UReg_32Bit CTIGATEEN1:1;           /**< \brief [1:1]   Enable CTICHOUT1.
                                                                    Set to 0 to disable channel propagation. (rw) */
    __IO Ifx_UReg_32Bit CTIGATEEN2:1;           /**< \brief [2:2]   Enable CTICHOUT2.
                                                                    Set to 0 to disable channel propagation. (rw) */
    __IO Ifx_UReg_32Bit CTIGATEEN3:1;           /**< \brief [3:3]   Enable CTICHOUT3.
                                                                    Set to 0 to disable channel propagation. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CTIGATE_Bits;

/** \brief External Multiplexor Control Register */
typedef struct _Ifx_CM33_TRC_CTI_ASICCTRL_Bits
{
    __IO Ifx_UReg_32Bit ASICCTL:8;              /**< \brief [7:0]   Implementation-defined ASIC control, value
                                                                    written to the register is output on ASICCTL[7:0].
                                                                    If external multiplexing of trigger signals is
                                                                    implemented then the number of multiplexed signals
                                                                    on each trigger must be reflected within the Device
                                                                    ID Register.
                                                                    This is done within a Verilog define EXTMUXNUM.
                                                                    See ECT CoreSight defined registers on page 4-28. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CM33_TRC_CTI_ASICCTRL_Bits;

/** \brief ITCHINACK Register */
typedef struct _Ifx_CM33_TRC_CTI_ITCHINACK_Bits
{
    __O  Ifx_UReg_32Bit CTCHINACK:4;            /**< \brief [3:0]   Set the value of the CTCHINACK outputs (w) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_ITCHINACK_Bits;

/** \brief ITTRIGINACK Register */
typedef struct _Ifx_CM33_TRC_CTI_ITTRIGINACK_Bits
{
    __O  Ifx_UReg_32Bit CTTRIGINACK:8;          /**< \brief [7:0]   Set the value of the CTTRIGINACK outputs (w) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CM33_TRC_CTI_ITTRIGINACK_Bits;

/** \brief ITCHOUT Register */
typedef struct _Ifx_CM33_TRC_CTI_ITCHOUT_Bits
{
    __O  Ifx_UReg_32Bit CTCHOUT:4;              /**< \brief [3:0]   Set the value of the CTCHOUT outputs (w) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_ITCHOUT_Bits;

/** \brief ITTRIGOUT Register */
typedef struct _Ifx_CM33_TRC_CTI_ITTRIGOUT_Bits
{
    __O  Ifx_UReg_32Bit CTTRIGOUT:32;           /**< \brief [31:0]  Set the value of the CTTRIGOUT outputs (w) */
} Ifx_CM33_TRC_CTI_ITTRIGOUT_Bits;

/** \brief ITCHOUTACK Register */
typedef struct _Ifx_CM33_TRC_CTI_ITCHOUTACK_Bits
{
    __I  Ifx_UReg_32Bit CTCHOUTACK:4;           /**< \brief [3:0]   Read the values of the CTCHOUTACK inputs (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_ITCHOUTACK_Bits;

/** \brief ITTRIGOUTACK Register */
typedef struct _Ifx_CM33_TRC_CTI_ITTRIGOUTACK_Bits
{
    __I  Ifx_UReg_32Bit CTTRIGOUTACK:8;         /**< \brief [7:0]   Read the values of the CTTRIGOUTACK inputs (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CM33_TRC_CTI_ITTRIGOUTACK_Bits;

/** \brief ITCHIN Register */
typedef struct _Ifx_CM33_TRC_CTI_ITCHIN_Bits
{
    __I  Ifx_UReg_32Bit CTCHIN:4;               /**< \brief [3:0]   Read the values of the CTCHIN inputs (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_ITCHIN_Bits;

/** \brief ITTRIGIN Register */
typedef struct _Ifx_CM33_TRC_CTI_ITTRIGIN_Bits
{
    __I  Ifx_UReg_32Bit CTTRIGIN:32;            /**< \brief [31:0]  Read the values of the CTTRIGIN inputs (r) */
} Ifx_CM33_TRC_CTI_ITTRIGIN_Bits;

/** \brief Integration Mode Control Register */
typedef struct _Ifx_CM33_TRC_CTI_ITCTRL_Bits
{
    __IO Ifx_UReg_32Bit MODE:1;                 /**< \brief [0:0]   When set, the component enters integration
                                                                    mode, enabling topology detection or integration
                                                                    testing to be performed.
                                                                    At reset the component must enter functional mode.
                                                                    If no integration functionality is implemented,
                                                                    this register must read as zero. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CM33_TRC_CTI_ITCTRL_Bits;

/** \brief Claim Tag Set Register */
typedef struct _Ifx_CM33_TRC_CTI_CLAIMSET_Bits
{
    __IO Ifx_UReg_32Bit TAG:4;                  /**< \brief [3:0]   A bit programmable register bank which sets
                                                                    the Claim Tag Value.
                                                                    A read will return a logic 1 for all implemented locations. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CLAIMSET_Bits;

/** \brief Claim Tag Clear Register */
typedef struct _Ifx_CM33_TRC_CTI_CLAIMCLR_Bits
{
    __IO Ifx_UReg_32Bit TAG:4;                  /**< \brief [3:0]   A bit programmable register bank that is
                                                                    zero at reset. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CM33_TRC_CTI_CLAIMCLR_Bits;

/** \brief Device Affinity Register 0 */
typedef struct _Ifx_CM33_TRC_CTI_DEVAFF0_Bits
{
    __I  Ifx_UReg_32Bit DEVAFF0:32;             /**< \brief [31:0]  Lower 32-bits of DEVAFF.
                                                                    The value is set by the devaff[31:0] tie-off inputs. (r) */
} Ifx_CM33_TRC_CTI_DEVAFF0_Bits;

/** \brief Device Affinity Register 1 */
typedef struct _Ifx_CM33_TRC_CTI_DEVAFF1_Bits
{
    __I  Ifx_UReg_32Bit DEVAFF0:32;             /**< \brief [31:0]  Upper 32-bits of DEVAFF.
                                                                    The value is set by the devaff[63:32] tie-off inputs. (r) */
} Ifx_CM33_TRC_CTI_DEVAFF1_Bits;

/** \brief Lock Access Register */
typedef struct _Ifx_CM33_TRC_CTI_LAR_Bits
{
    __IO Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  Write Access Code.
                                                                    A write of 0xC5ACCE55 enables further write access
                                                                    to this device.
                                                                    An invalid write will have the affect of removing
                                                                    write access.
                                                                    If LSR[2] is set, then only bits [7:0] of this
                                                                    register are implemented and lock access is
                                                                    obtained by consecutively writing 0xC5, 0xAC, 0xCE, 0x55.
                                                                    Bits [31:8] are unused and any writes to them ignored. (rw) */
} Ifx_CM33_TRC_CTI_LAR_Bits;

/** \brief Lock Status Register */
typedef struct _Ifx_CM33_TRC_CTI_LSR_Bits
{
    __I  Ifx_UReg_32Bit SLI:1;                  /**< \brief [0:0]   Indicates that a lock control mechanism
                                                                    exists for this device (r) */
    __I  Ifx_UReg_32Bit SLK:1;                  /**< \brief [1:1]   The values of this bit mean:
                                                                    0 = Access permitted.
                                                                    1 = Write access to the component is blocked.
                                                                    All writes to control registers are ignored.
                                                                    Reads are permitted (r) */
    __I  Ifx_UReg_32Bit nTT:1;                  /**< \brief [2:2]   This component implements an 32-bit Lock
                                                                    Access Register. (r) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_CM33_TRC_CTI_LSR_Bits;

/** \brief Authentication Status Register */
typedef struct _Ifx_CM33_TRC_CTI_AUTHSTATUS_Bits
{
    __I  Ifx_UReg_32Bit NSIDBG:2;               /**< \brief [1:0]   Non-Secure Invasive Debug
                                                                    0: Functionality not implemented or controlled
                                                                    elsewhere
                                                                    1: Functionality disabled
                                                                    2: Reserved
                                                                    3: Functionality enabled (r) */
    __I  Ifx_UReg_32Bit NSNIDBG:2;              /**< \brief [3:2]   Non-Secure Non-Invasive Debug
                                                                    0: Functionality not implemented or controlled
                                                                    elsewhere
                                                                    1: Functionality disabled
                                                                    2: Reserved
                                                                    3: Functionality enabled (r) */
    __I  Ifx_UReg_32Bit SIDBG:2;                /**< \brief [5:4]   Secure Invasive Debug
                                                                    0: Functionality not implemented or controlled
                                                                    elsewhere
                                                                    1: Functionality disabled
                                                                    2: Reserved
                                                                    3: Functionality enabled (r) */
    __I  Ifx_UReg_32Bit SNIDBG:2;               /**< \brief [7:6]   Secure Non-Invasive Debug
                                                                    0: Functionality not implemented or controlled
                                                                    elsewhere
                                                                    1: Functionality disabled
                                                                    2: Reserved
                                                                    3: Functionality enabled (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CM33_TRC_CTI_AUTHSTATUS_Bits;

/** \brief Device Architecture Register */
typedef struct _Ifx_CM33_TRC_CTI_DEVARCH_Bits
{
    __I  Ifx_UReg_32Bit ARCHID:16;              /**< \brief [15:0]  Architecture ID.
                                                                    Returns 0x1A14, identifying Cross Trigger Interface
                                                                    architecture v2. (r) */
    __I  Ifx_UReg_32Bit REVISION:4;             /**< \brief [19:16] Architecture revision.
                                                                    Returns the revision of the architecture that the
                                                                    ARCHID field
                                                                    specifies. (r) */
    __I  Ifx_UReg_32Bit PRESENT:1;              /**< \brief [20:20] Returns 1, indicating that the DEVARCH
                                                                    register is present. (r) */
    __I  Ifx_UReg_32Bit ARCHITECT:11;           /**< \brief [31:21] Returns 0x23B, denoting Arm as architect of
                                                                    the component. (r) */
} Ifx_CM33_TRC_CTI_DEVARCH_Bits;

/** \brief Device Configuration Register */
typedef struct _Ifx_CM33_TRC_CTI_DEVID_Bits
{
    __I  Ifx_UReg_32Bit EXTMUXNUM:5;            /**< \brief [4:0]   Indicates the number of multiplexing
                                                                    available on Trigger Inputs and Trigger Outputs
                                                                    using ASICCTL.
                                                                    Default value of 5'b00000 indicating no
                                                                    multiplexing present.
                                                                    Reflects the value of the Verilog `define EXTMUXNUM
                                                                    that you must alter accordingly. (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __I  Ifx_UReg_32Bit NUMTRIG:8;              /**< \brief [15:8]  Number of ECT triggers available. (r) */
    __I  Ifx_UReg_32Bit NUMCH:4;                /**< \brief [19:16] Number of ECT channels available. (r) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_CM33_TRC_CTI_DEVID_Bits;

/** \brief Device Type Identifier Register */
typedef struct _Ifx_CM33_TRC_CTI_DEVTYPE_Bits
{
    __I  Ifx_UReg_32Bit CLASS:4;                /**< \brief [3:0]   debug control logic component (r) */
    __I  Ifx_UReg_32Bit SUB_TYPE:4;             /**< \brief [7:4]   cross trigger (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CM33_TRC_CTI_DEVTYPE_Bits;

/** \brief Peripheral Identification Register 4 */
typedef struct _Ifx_CM33_TRC_CTI_PIDR4_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_PIDR4_Bits;

/** \brief Peripheral Identification Register 5 */
typedef struct _Ifx_CM33_TRC_CTI_PIDR5_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_PIDR5_Bits;

/** \brief Peripheral Identification Register 6 */
typedef struct _Ifx_CM33_TRC_CTI_PIDR6_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_PIDR6_Bits;

/** \brief Peripheral Identification Register 7 */
typedef struct _Ifx_CM33_TRC_CTI_PIDR7_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_PIDR7_Bits;

/** \brief Peripheral Identification Register 0 */
typedef struct _Ifx_CM33_TRC_CTI_PIDR0_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_PIDR0_Bits;

/** \brief Peripheral Identification Register 1 */
typedef struct _Ifx_CM33_TRC_CTI_PIDR1_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_PIDR1_Bits;

/** \brief Peripheral Identification Register 2 */
typedef struct _Ifx_CM33_TRC_CTI_PIDR2_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_PIDR2_Bits;

/** \brief Peripheral Identification Register 3 */
typedef struct _Ifx_CM33_TRC_CTI_PIDR3_Bits
{
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [3:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit ECOREVNUM:4;            /**< \brief [7:4]   ECO revision for MTB (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CM33_TRC_CTI_PIDR3_Bits;

/** \brief Component Identification Register 0 */
typedef struct _Ifx_CM33_TRC_CTI_CIDR0_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_CIDR0_Bits;

/** \brief Component Identification Register 1 */
typedef struct _Ifx_CM33_TRC_CTI_CIDR1_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_CIDR1_Bits;

/** \brief Component Identification Register 2 */
typedef struct _Ifx_CM33_TRC_CTI_CIDR2_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_CIDR2_Bits;

/** \brief Component Identification Register 3 */
typedef struct _Ifx_CM33_TRC_CTI_CIDR3_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  N/A (r) */
} Ifx_CM33_TRC_CTI_CIDR3_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CM33_Registers_union
 * \{   */
/** \brief CTI Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTICONTROL_Bits B;             /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTICONTROL;

/** \brief CTI Interrupt Acknowledge Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTIINTACK_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTIINTACK;

/** \brief CTI Application Trigger Set Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTIAPPSET_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTIAPPSET;

/** \brief CTI Application Trigger Clear Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTIAPPCLEAR_Bits B;            /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTIAPPCLEAR;

/** \brief CTI Application Pulse Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTIAPPPULSE_Bits B;            /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTIAPPPULSE;

/** \brief CTI Trigger to Channel Enable Registers */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTIINEN_Bits B;                /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTIINEN;

/** \brief CTI Channel to Trigger Enable Registers */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTIOUTEN_Bits B;               /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTIOUTEN;

/** \brief CTI Trigger In Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTITRIGINSTATUS_Bits B;        /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTITRIGINSTATUS;

/** \brief CTI Trigger Out Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTITRIGOUTSTATUS_Bits B;       /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTITRIGOUTSTATUS;

/** \brief CTI Channel In Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTICHINSTATUS_Bits B;          /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTICHINSTATUS;

/** \brief Enable CTI Channel Gate Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CTIGATE_Bits B;                /**< \brief Bitfield access */
} Ifx_CM33_CTI_CTIGATE;

/** \brief External Multiplexor Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_ASICCTL_Bits B;                /**< \brief Bitfield access */
} Ifx_CM33_CTI_ASICCTL;

/** \brief ITCHOUT Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_ITCHOUT_Bits B;                /**< \brief Bitfield access */
} Ifx_CM33_CTI_ITCHOUT;

/** \brief ITTRIGOUT Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_ITTRIGOUT_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_CTI_ITTRIGOUT;

/** \brief ITCHIN Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_ITCHIN_Bits B;                 /**< \brief Bitfield access */
} Ifx_CM33_CTI_ITCHIN;

/** \brief Integration Mode Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_ITCTRL_Bits B;                 /**< \brief Bitfield access */
} Ifx_CM33_CTI_ITCTRL;

/** \brief Device Architecture register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_DEVARCH_Bits B;                /**< \brief Bitfield access */
} Ifx_CM33_CTI_DEVARCH;

/** \brief Device Configuration Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_DEVID_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_DEVID;

/** \brief Device Type Identifier Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_DEVTYPE_Bits B;                /**< \brief Bitfield access */
} Ifx_CM33_CTI_DEVTYPE;

/** \brief Peripheral Identification Register 4 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_PIDR4_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_PIDR4;

/** \brief Peripheral Identification Register 5 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_PIDR5_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_PIDR5;

/** \brief Peripheral Identification Register 6 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_PIDR6_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_PIDR6;

/** \brief Peripheral Identification Register 7 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_PIDR7_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_PIDR7;

/** \brief Peripheral Identification Register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_PIDR0_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_PIDR0;

/** \brief Peripheral Identification Register 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_PIDR1_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_PIDR1;

/** \brief Peripheral Identification Register 2 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_PIDR2_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_PIDR2;

/** \brief Peripheral Identification Register 3 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_PIDR3_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_PIDR3;

/** \brief Component Identification Register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CIDR0_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_CIDR0;

/** \brief Component Identification Register 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CIDR1_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_CIDR1;

/** \brief Component Identification Register 2 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CIDR2_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_CIDR2;

/** \brief Component Identification Register 3 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_CTI_CIDR3_Bits B;                  /**< \brief Bitfield access */
} Ifx_CM33_CTI_CIDR3;

/** \brief CTI Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTICONTROL_Bits B;         /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTICONTROL;

/** \brief CTI Interrupt Acknowledge Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTIINTACK_Bits B;          /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTIINTACK;

/** \brief CTI Application Trigger Set Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTIAPPSET_Bits B;          /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTIAPPSET;

/** \brief CTI Application Trigger Clear Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTIAPPCLEAR_Bits B;        /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTIAPPCLEAR;

/** \brief CTI Application Pulse Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTIAPPPULSE_Bits B;        /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTIAPPPULSE;

/** \brief CTI Trigger to Channel Enable Registers */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTIINEN_Bits B;            /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTIINEN;

/** \brief CTI Channel to Trigger Enable Registers */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTIOUTEN_Bits B;           /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTIOUTEN;

/** \brief CTI Trigger In Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTITRIGINSTATUS_Bits B;    /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTITRIGINSTATUS;

/** \brief CTI Trigger Out Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTITRIGOUTSTATUS_Bits B;   /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTITRIGOUTSTATUS;

/** \brief CTI Channel In Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTICHINSTATUS_Bits B;      /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTICHINSTATUS;

/** \brief CTI Channel Out Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTICHOUTSTATUS_Bits B;     /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTICHOUTSTATUS;

/** \brief Enable CTI Channel Gate Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CTIGATE_Bits B;            /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CTIGATE;

/** \brief External Multiplexor Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_ASICCTRL_Bits B;           /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_ASICCTRL;

/** \brief ITCHINACK Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_ITCHINACK_Bits B;          /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_ITCHINACK;

/** \brief ITTRIGINACK Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_ITTRIGINACK_Bits B;        /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_ITTRIGINACK;

/** \brief ITCHOUT Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_ITCHOUT_Bits B;            /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_ITCHOUT;

/** \brief ITTRIGOUT Register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_ITTRIGOUT_Bits B;          /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_ITTRIGOUT;

/** \brief ITCHOUTACK Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_ITCHOUTACK_Bits B;         /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_ITCHOUTACK;

/** \brief ITTRIGOUTACK Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_ITTRIGOUTACK_Bits B;       /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_ITTRIGOUTACK;

/** \brief ITCHIN Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_ITCHIN_Bits B;             /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_ITCHIN;

/** \brief ITTRIGIN Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_ITTRIGIN_Bits B;           /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_ITTRIGIN;

/** \brief Integration Mode Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_ITCTRL_Bits B;             /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_ITCTRL;

/** \brief Claim Tag Set Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CLAIMSET_Bits B;           /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CLAIMSET;

/** \brief Claim Tag Clear Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CLAIMCLR_Bits B;           /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CLAIMCLR;

/** \brief Device Affinity Register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_DEVAFF0_Bits B;            /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_DEVAFF0;

/** \brief Device Affinity Register 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_DEVAFF1_Bits B;            /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_DEVAFF1;

/** \brief Lock Access Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_LAR_Bits B;                /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_LAR;

/** \brief Lock Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_LSR_Bits B;                /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_LSR;

/** \brief Authentication Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_AUTHSTATUS_Bits B;         /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_AUTHSTATUS;

/** \brief Device Architecture Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_DEVARCH_Bits B;            /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_DEVARCH;

/** \brief Device Configuration Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_DEVID_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_DEVID;

/** \brief Device Type Identifier Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_DEVTYPE_Bits B;            /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_DEVTYPE;

/** \brief Peripheral Identification Register 4 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_PIDR4_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_PIDR4;

/** \brief Peripheral Identification Register 5 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_PIDR5_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_PIDR5;

/** \brief Peripheral Identification Register 6 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_PIDR6_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_PIDR6;

/** \brief Peripheral Identification Register 7 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_PIDR7_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_PIDR7;

/** \brief Peripheral Identification Register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_PIDR0_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_PIDR0;

/** \brief Peripheral Identification Register 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_PIDR1_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_PIDR1;

/** \brief Peripheral Identification Register 2 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_PIDR2_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_PIDR2;

/** \brief Peripheral Identification Register 3 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_PIDR3_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_PIDR3;

/** \brief Component Identification Register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CIDR0_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CIDR0;

/** \brief Component Identification Register 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CIDR1_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CIDR1;

/** \brief Component Identification Register 2 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CIDR2_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CIDR2;

/** \brief Component Identification Register 3 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CM33_TRC_CTI_CIDR3_Bits B;              /**< \brief Bitfield access */
} Ifx_CM33_TRC_CTI_CIDR3;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CM33_CTI_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CTI object */
typedef volatile struct _Ifx_CM33_CTI
{
       __IO Ifx_CM33_CTI_CTICONTROL             CTICONTROL;             /**< \brief 0, CTI Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_4[12];         /**< \brief 4, */
       __O  Ifx_CM33_CTI_CTIINTACK              CTIINTACK;              /**< \brief 10, CTI Interrupt Acknowledge Register*/
       __IO Ifx_CM33_CTI_CTIAPPSET              CTIAPPSET;              /**< \brief 14, CTI Application Trigger Set Register*/
       __IO Ifx_CM33_CTI_CTIAPPCLEAR            CTIAPPCLEAR;            /**< \brief 18, CTI Application Trigger Clear Register*/
       __O  Ifx_CM33_CTI_CTIAPPPULSE            CTIAPPPULSE;            /**< \brief 1C, CTI Application Pulse Register*/
       __IO Ifx_CM33_CTI_CTIINEN                CTIINEN[8];             /**< \brief 20, CTI Trigger to Channel Enable Registers*/
       __I  Ifx_UReg_8Bit                       reserved_40[96];        /**< \brief 40, */
       __IO Ifx_CM33_CTI_CTIOUTEN               CTIOUTEN[8];            /**< \brief A0, CTI Channel to Trigger Enable Registers*/
       __I  Ifx_UReg_8Bit                       reserved_C0[112];       /**< \brief C0, */
       __I  Ifx_CM33_CTI_CTITRIGINSTATUS        CTITRIGINSTATUS;        /**< \brief 130, CTI Trigger In Status Register*/
       __I  Ifx_CM33_CTI_CTITRIGOUTSTATUS       CTITRIGOUTSTATUS;       /**< \brief 134, CTI Trigger Out Status Register*/
       __I  Ifx_CM33_CTI_CTICHINSTATUS          CTICHINSTATUS;          /**< \brief 138, CTI Channel In Status Register*/
       __I  Ifx_UReg_8Bit                       reserved_13C[4];        /**< \brief 13C, */
       __IO Ifx_CM33_CTI_CTIGATE                CTIGATE;                /**< \brief 140, Enable CTI Channel Gate Register*/
       __IO Ifx_CM33_CTI_ASICCTL                ASICCTL;                /**< \brief 144, External Multiplexor Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_148[3484];     /**< \brief 148, */
       __O  Ifx_CM33_CTI_ITCHOUT                ITCHOUT;                /**< \brief EE4, ITCHOUT Register*/
       __O  Ifx_CM33_CTI_ITTRIGOUT              ITTRIGOUT;              /**< \brief EE8, ITTRIGOUT Register*/
       __I  Ifx_UReg_8Bit                       reserved_EEC[8];        /**< \brief EEC, */
       __I  Ifx_CM33_CTI_ITCHIN                 ITCHIN;                 /**< \brief EF4, ITCHIN Register*/
       __I  Ifx_UReg_8Bit                       reserved_EF8[8];        /**< \brief EF8, */
       __IO Ifx_CM33_CTI_ITCTRL                 ITCTRL;                 /**< \brief F00, Integration Mode Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_F04[184];      /**< \brief F04, */
       __I  Ifx_CM33_CTI_DEVARCH                DEVARCH;                /**< \brief FBC, Device Architecture register*/
       __I  Ifx_UReg_8Bit                       reserved_FC0[8];        /**< \brief FC0, */
       __I  Ifx_CM33_CTI_DEVID                  DEVID;                  /**< \brief FC8, Device Configuration Register*/
       __I  Ifx_CM33_CTI_DEVTYPE                DEVTYPE;                /**< \brief FCC, Device Type Identifier Register*/
       __I  Ifx_CM33_CTI_PIDR4                  PIDR4;                  /**< \brief FD0, Peripheral Identification Register 4*/
       __I  Ifx_CM33_CTI_PIDR5                  PIDR5;                  /**< \brief FD4, Peripheral Identification Register 5*/
       __I  Ifx_CM33_CTI_PIDR6                  PIDR6;                  /**< \brief FD8, Peripheral Identification Register 6*/
       __I  Ifx_CM33_CTI_PIDR7                  PIDR7;                  /**< \brief FDC, Peripheral Identification Register 7*/
       __I  Ifx_CM33_CTI_PIDR0                  PIDR0;                  /**< \brief FE0, Peripheral Identification Register 0*/
       __I  Ifx_CM33_CTI_PIDR1                  PIDR1;                  /**< \brief FE4, Peripheral Identification Register 1*/
       __I  Ifx_CM33_CTI_PIDR2                  PIDR2;                  /**< \brief FE8, Peripheral Identification Register 2*/
       __I  Ifx_CM33_CTI_PIDR3                  PIDR3;                  /**< \brief FEC, Peripheral Identification Register 3*/
       __I  Ifx_CM33_CTI_CIDR0                  CIDR0;                  /**< \brief FF0, Component Identification Register 0*/
       __I  Ifx_CM33_CTI_CIDR1                  CIDR1;                  /**< \brief FF4, Component Identification Register 1*/
       __I  Ifx_CM33_CTI_CIDR2                  CIDR2;                  /**< \brief FF8, Component Identification Register 2*/
       __I  Ifx_CM33_CTI_CIDR3                  CIDR3;                  /**< \brief FFC, Component Identification Register 3*/
} Ifx_CM33_CTI;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CM33_TRC_CTI_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief CTI object */
typedef volatile struct _Ifx_CM33_TRC_CTI
{
       __IO Ifx_CM33_TRC_CTI_CTICONTROL         CTICONTROL;             /**< \brief 0, CTI Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_4[12];         /**< \brief 4, */
       __O  Ifx_CM33_TRC_CTI_CTIINTACK          CTIINTACK;              /**< \brief 10, CTI Interrupt Acknowledge Register*/
       __IO Ifx_CM33_TRC_CTI_CTIAPPSET          CTIAPPSET;              /**< \brief 14, CTI Application Trigger Set Register*/
       __O  Ifx_CM33_TRC_CTI_CTIAPPCLEAR        CTIAPPCLEAR;            /**< \brief 18, CTI Application Trigger Clear Register*/
       __O  Ifx_CM33_TRC_CTI_CTIAPPPULSE        CTIAPPPULSE;            /**< \brief 1C, CTI Application Pulse Register*/
       __IO Ifx_CM33_TRC_CTI_CTIINEN            CTIINEN[32];            /**< \brief 20, CTI Trigger to Channel Enable Registers*/
       __IO Ifx_CM33_TRC_CTI_CTIOUTEN           CTIOUTEN[32];           /**< \brief A0, CTI Channel to Trigger Enable Registers*/
       __I  Ifx_UReg_8Bit                       reserved_120[16];       /**< \brief 120, */
       __I  Ifx_CM33_TRC_CTI_CTITRIGINSTATUS    CTITRIGINSTATUS;        /**< \brief 130, CTI Trigger In Status Register*/
       __I  Ifx_CM33_TRC_CTI_CTITRIGOUTSTATUS   CTITRIGOUTSTATUS;       /**< \brief 134, CTI Trigger Out Status Register*/
       __I  Ifx_CM33_TRC_CTI_CTICHINSTATUS      CTICHINSTATUS;          /**< \brief 138, CTI Channel In Status Register*/
       __I  Ifx_CM33_TRC_CTI_CTICHOUTSTATUS     CTICHOUTSTATUS;         /**< \brief 13C, CTI Channel Out Status Register*/
       __IO Ifx_CM33_TRC_CTI_CTIGATE            CTIGATE;                /**< \brief 140, Enable CTI Channel Gate Register*/
       __IO Ifx_CM33_TRC_CTI_ASICCTRL           ASICCTRL;               /**< \brief 144, External Multiplexor Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_148[3476];     /**< \brief 148, */
       __O  Ifx_CM33_TRC_CTI_ITCHINACK          ITCHINACK;              /**< \brief EDC, ITCHINACK Register*/
       __O  Ifx_CM33_TRC_CTI_ITTRIGINACK        ITTRIGINACK;            /**< \brief EE0, ITTRIGINACK Register*/
       __O  Ifx_CM33_TRC_CTI_ITCHOUT            ITCHOUT;                /**< \brief EE4, ITCHOUT Register*/
       __O  Ifx_CM33_TRC_CTI_ITTRIGOUT          ITTRIGOUT;              /**< \brief EE8, ITTRIGOUT Register*/
       __I  Ifx_CM33_TRC_CTI_ITCHOUTACK         ITCHOUTACK;             /**< \brief EEC, ITCHOUTACK Register*/
       __I  Ifx_CM33_TRC_CTI_ITTRIGOUTACK       ITTRIGOUTACK;           /**< \brief EF0, ITTRIGOUTACK Register*/
       __I  Ifx_CM33_TRC_CTI_ITCHIN             ITCHIN;                 /**< \brief EF4, ITCHIN Register*/
       __I  Ifx_CM33_TRC_CTI_ITTRIGIN           ITTRIGIN;               /**< \brief EF8, ITTRIGIN Register*/
       __I  Ifx_UReg_8Bit                       reserved_EFC[4];        /**< \brief EFC, */
       __IO Ifx_CM33_TRC_CTI_ITCTRL             ITCTRL;                 /**< \brief F00, Integration Mode Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_F04[156];      /**< \brief F04, */
       __IO Ifx_CM33_TRC_CTI_CLAIMSET           CLAIMSET;               /**< \brief FA0, Claim Tag Set Register*/
       __IO Ifx_CM33_TRC_CTI_CLAIMCLR           CLAIMCLR;               /**< \brief FA4, Claim Tag Clear Register*/
       __I  Ifx_CM33_TRC_CTI_DEVAFF0            DEVAFF0;                /**< \brief FA8, Device Affinity Register 0*/
       __I  Ifx_CM33_TRC_CTI_DEVAFF1            DEVAFF1;                /**< \brief FAC, Device Affinity Register 1*/
       __IO Ifx_CM33_TRC_CTI_LAR                LAR;                    /**< \brief FB0, Lock Access Register*/
       __I  Ifx_CM33_TRC_CTI_LSR                LSR;                    /**< \brief FB4, Lock Status Register*/
       __I  Ifx_CM33_TRC_CTI_AUTHSTATUS         AUTHSTATUS;             /**< \brief FB8, Authentication Status Register*/
       __I  Ifx_CM33_TRC_CTI_DEVARCH            DEVARCH;                /**< \brief FBC, Device Architecture Register*/
       __I  Ifx_UReg_8Bit                       reserved_FC0[8];        /**< \brief FC0, */
       __I  Ifx_CM33_TRC_CTI_DEVID              DEVID;                  /**< \brief FC8, Device Configuration Register*/
       __I  Ifx_CM33_TRC_CTI_DEVTYPE            DEVTYPE;                /**< \brief FCC, Device Type Identifier Register*/
       __I  Ifx_CM33_TRC_CTI_PIDR4              PIDR4;                  /**< \brief FD0, Peripheral Identification Register 4*/
       __I  Ifx_CM33_TRC_CTI_PIDR5              PIDR5;                  /**< \brief FD4, Peripheral Identification Register 5*/
       __I  Ifx_CM33_TRC_CTI_PIDR6              PIDR6;                  /**< \brief FD8, Peripheral Identification Register 6*/
       __I  Ifx_CM33_TRC_CTI_PIDR7              PIDR7;                  /**< \brief FDC, Peripheral Identification Register 7*/
       __I  Ifx_CM33_TRC_CTI_PIDR0              PIDR0;                  /**< \brief FE0, Peripheral Identification Register 0*/
       __I  Ifx_CM33_TRC_CTI_PIDR1              PIDR1;                  /**< \brief FE4, Peripheral Identification Register 1*/
       __I  Ifx_CM33_TRC_CTI_PIDR2              PIDR2;                  /**< \brief FE8, Peripheral Identification Register 2*/
       __I  Ifx_CM33_TRC_CTI_PIDR3              PIDR3;                  /**< \brief FEC, Peripheral Identification Register 3*/
       __I  Ifx_CM33_TRC_CTI_CIDR0              CIDR0;                  /**< \brief FF0, Component Identification Register 0*/
       __I  Ifx_CM33_TRC_CTI_CIDR1              CIDR1;                  /**< \brief FF4, Component Identification Register 1*/
       __I  Ifx_CM33_TRC_CTI_CIDR2              CIDR2;                  /**< \brief FF8, Component Identification Register 2*/
       __I  Ifx_CM33_TRC_CTI_CIDR3              CIDR3;                  /**< \brief FFC, Component Identification Register 3*/
} Ifx_CM33_TRC_CTI;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CM33_TRC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TRC object */
typedef volatile struct _Ifx_CM33_TRC
{
       __IO Ifx_CM33_TRC_CTI                    CTI;                    /**< \brief 0, System Trace Cross Trigger Interface (CTI)*/
} Ifx_CM33_TRC;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CM33_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief CM33 object */
typedef volatile struct _Ifx_CM33
{
       __I  Ifx_UReg_8Bit                       reserved_0[270336];     /**< \brief 0, */
       __IO Ifx_CM33_CTI                        CTI;                    /**< \brief 42000, Cortex-M33 Cross Trigger Interface (CTI) Registers*/
       __I  Ifx_UReg_8Bit                       reserved_43000[249856]; /**< \brief 43000, */
       __IO Ifx_CM33_TRC                        TRC;                    /**< \brief 80000, System Trace Cross Trigger Interface (CTI)*/
       __I  Ifx_UReg_8Bit                       reserved_81000[536342528]; /**< \brief 81000, */
} Ifx_CM33;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCM33_REGDEF_H_ */
