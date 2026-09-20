/***************************************************************************//**
* \file IfxGPIO_regdef.h
*
* \brief
* GPIO Registers
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
* \defgroup IfxSfr_GPIO_Registers GPIO Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_GPIO_Registers_Bitfields Bitfields
* \ingroup IfxSfr_GPIO_Registers
*
* \defgroup IfxSfr_GPIO_Registers_union Register unions
* \ingroup IfxSfr_GPIO_Registers
*
* \defgroup IfxSfr_GPIO_Registers_struct Memory map
* \ingroup IfxSfr_GPIO_Registers
*
*******************************************************************************/

#ifndef _IFXGPIO_REGDEF_H_
#define _IFXGPIO_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_GPIO_Registers_Bitfields
 * \{  */
/** \brief Secure Interrupt port cause register 0 */
typedef struct _Ifx_GPIO_SEC_INTR_CAUSE0_Bits
{
    __I  Ifx_UReg_32Bit PORT_INT:32;            /**< \brief [31:0]  Each IO port has an associated bit field in
                                                                    this register.
                                                                    The bit field reflects the IO port's interrupt line
                                                                    (bit field i reflects 'gpio_interrupts[i]' for IO port i).
                                                                    The register is used when the system uses a
                                                                    combined interrupt line 'gpio_interrupt'.
                                                                    The software ISR reads the register to determine
                                                                    which IO port(s) is responsible for the combined
                                                                    interrupt line.
                                                                    Once, the IO port(s) is determined, the IO port's
                                                                    GPIO_PRT_INTR register is read to determine the IO
                                                                    pin(s) in the IO port that caused the interrupt.
                                                                    '0': Port has no pending interrupt
                                                                    '1': Port has pending interrupt (r) */
} Ifx_GPIO_SEC_INTR_CAUSE0_Bits;

/** \brief Interrupt port cause register 0 */
typedef struct _Ifx_GPIO_INTR_CAUSE0_Bits
{
    __I  Ifx_UReg_32Bit PORT_INT:32;            /**< \brief [31:0]  Each IO port has an associated bit field in
                                                                    this register.
                                                                    The bit field reflects the IO port's interrupt line
                                                                    (bit field i reflects 'gpio_interrupts[i]' for IO port i).
                                                                    The register is used when the system uses a
                                                                    combined interrupt line 'gpio_interrupt'.
                                                                    The software ISR reads the register to determine
                                                                    which IO port(s) is responsible for the combined
                                                                    interrupt line.
                                                                    Once, the IO port(s) is determined, the IO port's
                                                                    GPIO_PRT_INTR register is read to determine the IO
                                                                    pin(s) in the IO port that caused the interrupt.
                                                                    '0': Port has no pending interrupt
                                                                    '1': Port has pending interrupt (r) */
} Ifx_GPIO_INTR_CAUSE0_Bits;

/** \brief Extern power supply detection register */
typedef struct _Ifx_GPIO_VDD_ACTIVE_Bits
{
    __I  Ifx_UReg_32Bit VDDIO_ACTIVE:16;        /**< \brief [15:0]  Indicates presence or absence of VDDIO
                                                                    supplies (i.e.
                                                                    other than VDDD, VDDA) on the device (supplies are
                                                                    numbered 0..n-1).
                                                                    Note that VDDIO supplies have basic (crude) supply
                                                                    detectors only.
                                                                    If separate, robust, brown-out detection is desired
                                                                    on IO supplies, on-chip or off-chip analog
                                                                    resources need to provide it.
                                                                    For these bits to work reliable, the supply must be
                                                                    within valid spec range (per datasheet) or held at ground.
                                                                    Any in-between voltage has an undefined result.
                                                                    '0': Supply is not present
                                                                    '1': Supply is present
                                                                    When multiple VDDIO supplies are present, they will
                                                                    be assigned in alphanumeric ascending order to
                                                                    these bits during implementation.
                                                                    For example 'vddusb, vddio_0, vddio_a, vbackup,
                                                                    vddio_r, vddio_1' are present then they will be
                                                                    assigned to these bits as below:
                                                                    0: vbackup,
                                                                    1: vddio_0,
                                                                    2: vddio_1,
                                                                    3: vddio_a,
                                                                    4: vddio_r,
                                                                    5: vddusb' (r) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [29:16] \internal Reserved */
    __I  Ifx_UReg_32Bit VDDA_ACTIVE:1;          /**< \brief [30:30] Same as VDDIO_ACTIVE for the analog supply VDDA. (r) */
    __I  Ifx_UReg_32Bit VDDD_ACTIVE:1;          /**< \brief [31:31] This bit indicates presence of the VDDD supply.
                                                                    This bit will always read-back 1.
                                                                    The VDDD supply has robust brown-out protection
                                                                    monitoring and it is not possible to read back this
                                                                    register without a valid supply.
                                                                    (This bit is used in certain test-modes to observe
                                                                    the brown-out detector status.) (r) */
} Ifx_GPIO_VDD_ACTIVE_Bits;

/** \brief Supply detection interrupt register */
typedef struct _Ifx_GPIO_VDD_INTR_Bits
{
    __IO Ifx_UReg_32Bit VDDIO_ACTIVE:16;        /**< \brief [15:0]  Supply state change detected.
                                                                    '0': No change to supply detected
                                                                    '1': Change to supply detected (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [29:16] \internal Reserved */
    __IO Ifx_UReg_32Bit VDDA_ACTIVE:1;          /**< \brief [30:30] Same as VDDIO_ACTIVE for the analog supply VDDA. (rw) */
    __IO Ifx_UReg_32Bit VDDD_ACTIVE:1;          /**< \brief [31:31] The VDDD supply is always present during
                                                                    operation so a supply transition can not occur.
                                                                    This bit will always read back '1'. (rw) */
} Ifx_GPIO_VDD_INTR_Bits;

/** \brief Supply detection interrupt mask register */
typedef struct _Ifx_GPIO_VDD_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit VDDIO_ACTIVE:16;        /**< \brief [15:0]  Masks supply interrupt on VDDIO.
                                                                    '0': VDDIO interrupt forwarding disabled
                                                                    '1': VDDIO interrupt forwarding enabled (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [29:16] \internal Reserved */
    __IO Ifx_UReg_32Bit VDDA_ACTIVE:1;          /**< \brief [30:30] Same as VDDIO_ACTIVE for the analog supply VDDA. (rw) */
    __IO Ifx_UReg_32Bit VDDD_ACTIVE:1;          /**< \brief [31:31] Same as VDDIO_ACTIVE for the digital supply VDDD. (rw) */
} Ifx_GPIO_VDD_INTR_MASK_Bits;

/** \brief Supply detection interrupt masked register */
typedef struct _Ifx_GPIO_VDD_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit VDDIO_ACTIVE:16;        /**< \brief [15:0]  Supply transition detected AND masked
                                                                    '0': Interrupt was not forwarded to CPU
                                                                    '1': Interrupt occurred and was forwarded to CPU (r) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [29:16] \internal Reserved */
    __I  Ifx_UReg_32Bit VDDA_ACTIVE:1;          /**< \brief [30:30] Same as VDDIO_ACTIVE for the analog supply VDDA. (r) */
    __I  Ifx_UReg_32Bit VDDD_ACTIVE:1;          /**< \brief [31:31] Same as VDDIO_ACTIVE for the digital supply VDDD. (r) */
} Ifx_GPIO_VDD_INTR_MASKED_Bits;

/** \brief Supply detection interrupt set register */
typedef struct _Ifx_GPIO_VDD_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit VDDIO_ACTIVE:16;        /**< \brief [15:0]  Sets supply interrupt.
                                                                    '0': Interrupt state not affected
                                                                    '1': Interrupt set (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [29:16] \internal Reserved */
    __IO Ifx_UReg_32Bit VDDA_ACTIVE:1;          /**< \brief [30:30] Same as VDDIO_ACTIVE for the analog supply VDDA. (rw) */
    __IO Ifx_UReg_32Bit VDDD_ACTIVE:1;          /**< \brief [31:31] Same as VDDIO_ACTIVE for the digital supply VDDD. (rw) */
} Ifx_GPIO_VDD_INTR_SET_Bits;

/** \brief Port output data register */
typedef struct _Ifx_GPIO_PRT_OUT_Bits
{
    __IO Ifx_UReg_32Bit OUT0:1;                 /**< \brief [0:0]   IO output data for pin 0
                                                                    '0': Output state set to '0'
                                                                    '1': Output state set to '1' (rw) */
    __IO Ifx_UReg_32Bit OUT1:1;                 /**< \brief [1:1]   IO output data for pin 1 (rw) */
    __IO Ifx_UReg_32Bit OUT2:1;                 /**< \brief [2:2]   IO output data for pin 2 (rw) */
    __IO Ifx_UReg_32Bit OUT3:1;                 /**< \brief [3:3]   IO output data for pin 3 (rw) */
    __IO Ifx_UReg_32Bit OUT4:1;                 /**< \brief [4:4]   IO output data for pin 4 (rw) */
    __IO Ifx_UReg_32Bit OUT5:1;                 /**< \brief [5:5]   IO output data for pin 5 (rw) */
    __IO Ifx_UReg_32Bit OUT6:1;                 /**< \brief [6:6]   IO output data for pin 6 (rw) */
    __IO Ifx_UReg_32Bit OUT7:1;                 /**< \brief [7:7]   IO output data for pin 7 (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_GPIO_PRT_OUT_Bits;

/** \brief Port output data clear register */
typedef struct _Ifx_GPIO_PRT_OUT_CLR_Bits
{
    __IO Ifx_UReg_32Bit OUT0:1;                 /**< \brief [0:0]   IO clear output for pin 0:
                                                                    '0': Output state not affected.
                                                                    '1': Output state set to '0'. (rw) */
    __IO Ifx_UReg_32Bit OUT1:1;                 /**< \brief [1:1]   IO clear output for pin 1 (rw) */
    __IO Ifx_UReg_32Bit OUT2:1;                 /**< \brief [2:2]   IO clear output for pin 2 (rw) */
    __IO Ifx_UReg_32Bit OUT3:1;                 /**< \brief [3:3]   IO clear output for pin 3 (rw) */
    __IO Ifx_UReg_32Bit OUT4:1;                 /**< \brief [4:4]   IO clear output for pin 4 (rw) */
    __IO Ifx_UReg_32Bit OUT5:1;                 /**< \brief [5:5]   IO clear output for pin 5 (rw) */
    __IO Ifx_UReg_32Bit OUT6:1;                 /**< \brief [6:6]   IO clear output for pin 6 (rw) */
    __IO Ifx_UReg_32Bit OUT7:1;                 /**< \brief [7:7]   IO clear output for pin 7 (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_GPIO_PRT_OUT_CLR_Bits;

/** \brief Port output data set register */
typedef struct _Ifx_GPIO_PRT_OUT_SET_Bits
{
    __IO Ifx_UReg_32Bit OUT0:1;                 /**< \brief [0:0]   IO set output for pin 0:
                                                                    '0': Output state not affected.
                                                                    '1': Output state set to '1'. (rw) */
    __IO Ifx_UReg_32Bit OUT1:1;                 /**< \brief [1:1]   IO set output for pin 1 (rw) */
    __IO Ifx_UReg_32Bit OUT2:1;                 /**< \brief [2:2]   IO set output for pin 2 (rw) */
    __IO Ifx_UReg_32Bit OUT3:1;                 /**< \brief [3:3]   IO set output for pin 3 (rw) */
    __IO Ifx_UReg_32Bit OUT4:1;                 /**< \brief [4:4]   IO set output for pin 4 (rw) */
    __IO Ifx_UReg_32Bit OUT5:1;                 /**< \brief [5:5]   IO set output for pin 5 (rw) */
    __IO Ifx_UReg_32Bit OUT6:1;                 /**< \brief [6:6]   IO set output for pin 6 (rw) */
    __IO Ifx_UReg_32Bit OUT7:1;                 /**< \brief [7:7]   IO set output for pin 7 (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_GPIO_PRT_OUT_SET_Bits;

/** \brief Port output data invert register */
typedef struct _Ifx_GPIO_PRT_OUT_INV_Bits
{
    __IO Ifx_UReg_32Bit OUT0:1;                 /**< \brief [0:0]   IO invert output for pin 0:
                                                                    '0': Output state not affected.
                                                                    '1': Output state inverted ('0' => '1', '1' => '0'). (rw) */
    __IO Ifx_UReg_32Bit OUT1:1;                 /**< \brief [1:1]   IO invert output for pin 1 (rw) */
    __IO Ifx_UReg_32Bit OUT2:1;                 /**< \brief [2:2]   IO invert output for pin 2 (rw) */
    __IO Ifx_UReg_32Bit OUT3:1;                 /**< \brief [3:3]   IO invert output for pin 3 (rw) */
    __IO Ifx_UReg_32Bit OUT4:1;                 /**< \brief [4:4]   IO invert output for pin 4 (rw) */
    __IO Ifx_UReg_32Bit OUT5:1;                 /**< \brief [5:5]   IO invert output for pin 5 (rw) */
    __IO Ifx_UReg_32Bit OUT6:1;                 /**< \brief [6:6]   IO invert output for pin 6 (rw) */
    __IO Ifx_UReg_32Bit OUT7:1;                 /**< \brief [7:7]   IO invert output for pin 7 (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_GPIO_PRT_OUT_INV_Bits;

/** \brief Port input state register */
typedef struct _Ifx_GPIO_PRT_IN_Bits
{
    __I  Ifx_UReg_32Bit IN0:1;                  /**< \brief [0:0]   IO pin state for pin 0
                                                                    '0': Low logic level present on pin.
                                                                    '1': High logic level present on pin.
                                                                    On reset assertion , IN register will get reset.
                                                                    The Pad value takes 2 clock cycles to be reflected
                                                                    into IN Register.  The default value is transient. (r) */
    __I  Ifx_UReg_32Bit IN1:1;                  /**< \brief [1:1]   IO pin state for pin 1 (r) */
    __I  Ifx_UReg_32Bit IN2:1;                  /**< \brief [2:2]   IO pin state for pin 2 (r) */
    __I  Ifx_UReg_32Bit IN3:1;                  /**< \brief [3:3]   IO pin state for pin 3 (r) */
    __I  Ifx_UReg_32Bit IN4:1;                  /**< \brief [4:4]   IO pin state for pin 4 (r) */
    __I  Ifx_UReg_32Bit IN5:1;                  /**< \brief [5:5]   IO pin state for pin 5 (r) */
    __I  Ifx_UReg_32Bit IN6:1;                  /**< \brief [6:6]   IO pin state for pin 6 (r) */
    __I  Ifx_UReg_32Bit IN7:1;                  /**< \brief [7:7]   IO pin state for pin 7 (r) */
    __I  Ifx_UReg_32Bit FLT_IN:1;               /**< \brief [8:8]   Reads of this register return the logical
                                                                    state of the filtered pin as selected in the
                                                                    INTR_CFG.FLT_SEL register. (r) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_GPIO_PRT_IN_Bits;

/** \brief Port interrupt status register */
typedef struct _Ifx_GPIO_PRT_INTR_Bits
{
    __IO Ifx_UReg_32Bit EDGE0:1;                /**< \brief [0:0]   Edge detect for IO pin 0
                                                                    '0': No edge was detected on pin.
                                                                    '1': An edge was detected on pin. (rw) */
    __IO Ifx_UReg_32Bit EDGE1:1;                /**< \brief [1:1]   Edge detect for IO pin 1 (rw) */
    __IO Ifx_UReg_32Bit EDGE2:1;                /**< \brief [2:2]   Edge detect for IO pin 2 (rw) */
    __IO Ifx_UReg_32Bit EDGE3:1;                /**< \brief [3:3]   Edge detect for IO pin 3 (rw) */
    __IO Ifx_UReg_32Bit EDGE4:1;                /**< \brief [4:4]   Edge detect for IO pin 4 (rw) */
    __IO Ifx_UReg_32Bit EDGE5:1;                /**< \brief [5:5]   Edge detect for IO pin 5 (rw) */
    __IO Ifx_UReg_32Bit EDGE6:1;                /**< \brief [6:6]   Edge detect for IO pin 6 (rw) */
    __IO Ifx_UReg_32Bit EDGE7:1;                /**< \brief [7:7]   Edge detect for IO pin 7 (rw) */
    __IO Ifx_UReg_32Bit FLT_EDGE:1;             /**< \brief [8:8]   Edge detected on filtered pin selected by
                                                                    INTR_CFG.FLT_SEL (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [15:9]  \internal Reserved */
    __I  Ifx_UReg_32Bit IN_IN0:1;               /**< \brief [16:16] IO pin state for pin 0 (r) */
    __I  Ifx_UReg_32Bit IN_IN1:1;               /**< \brief [17:17] IO pin state for pin 1 (r) */
    __I  Ifx_UReg_32Bit IN_IN2:1;               /**< \brief [18:18] IO pin state for pin 2 (r) */
    __I  Ifx_UReg_32Bit IN_IN3:1;               /**< \brief [19:19] IO pin state for pin 3 (r) */
    __I  Ifx_UReg_32Bit IN_IN4:1;               /**< \brief [20:20] IO pin state for pin 4 (r) */
    __I  Ifx_UReg_32Bit IN_IN5:1;               /**< \brief [21:21] IO pin state for pin 5 (r) */
    __I  Ifx_UReg_32Bit IN_IN6:1;               /**< \brief [22:22] IO pin state for pin 6 (r) */
    __I  Ifx_UReg_32Bit IN_IN7:1;               /**< \brief [23:23] IO pin state for pin 7 (r) */
    __I  Ifx_UReg_32Bit FLT_IN_IN:1;            /**< \brief [24:24] Filtered pin state for pin selected by
                                                                    INTR_CFG.FLT_SEL (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_GPIO_PRT_INTR_Bits;

/** \brief Port interrupt mask register */
typedef struct _Ifx_GPIO_PRT_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit EDGE0:1;                /**< \brief [0:0]   Masks edge interrupt on IO pin 0
                                                                    '0': Pin interrupt forwarding disabled
                                                                    '1': Pin interrupt forwarding enabled (rw) */
    __IO Ifx_UReg_32Bit EDGE1:1;                /**< \brief [1:1]   Masks edge interrupt on IO pin 1 (rw) */
    __IO Ifx_UReg_32Bit EDGE2:1;                /**< \brief [2:2]   Masks edge interrupt on IO pin 2 (rw) */
    __IO Ifx_UReg_32Bit EDGE3:1;                /**< \brief [3:3]   Masks edge interrupt on IO pin 3 (rw) */
    __IO Ifx_UReg_32Bit EDGE4:1;                /**< \brief [4:4]   Masks edge interrupt on IO pin 4 (rw) */
    __IO Ifx_UReg_32Bit EDGE5:1;                /**< \brief [5:5]   Masks edge interrupt on IO pin 5 (rw) */
    __IO Ifx_UReg_32Bit EDGE6:1;                /**< \brief [6:6]   Masks edge interrupt on IO pin 6 (rw) */
    __IO Ifx_UReg_32Bit EDGE7:1;                /**< \brief [7:7]   Masks edge interrupt on IO pin 7 (rw) */
    __IO Ifx_UReg_32Bit FLT_EDGE:1;             /**< \brief [8:8]   Masks edge interrupt on filtered pin
                                                                    selected by INTR_CFG.FLT_SEL (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_GPIO_PRT_INTR_MASK_Bits;

/** \brief Port interrupt masked status register */
typedef struct _Ifx_GPIO_PRT_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit EDGE0:1;                /**< \brief [0:0]   Edge detected AND masked on IO pin 0
                                                                    '0': Interrupt was not forwarded to CPU
                                                                    '1': Interrupt occurred and was forwarded to CPU (r) */
    __I  Ifx_UReg_32Bit EDGE1:1;                /**< \brief [1:1]   Edge detected and masked on IO pin 1 (r) */
    __I  Ifx_UReg_32Bit EDGE2:1;                /**< \brief [2:2]   Edge detected and masked on IO pin 2 (r) */
    __I  Ifx_UReg_32Bit EDGE3:1;                /**< \brief [3:3]   Edge detected and masked on IO pin 3 (r) */
    __I  Ifx_UReg_32Bit EDGE4:1;                /**< \brief [4:4]   Edge detected and masked on IO pin 4 (r) */
    __I  Ifx_UReg_32Bit EDGE5:1;                /**< \brief [5:5]   Edge detected and masked on IO pin 5 (r) */
    __I  Ifx_UReg_32Bit EDGE6:1;                /**< \brief [6:6]   Edge detected and masked on IO pin 6 (r) */
    __I  Ifx_UReg_32Bit EDGE7:1;                /**< \brief [7:7]   Edge detected and masked on IO pin 7 (r) */
    __I  Ifx_UReg_32Bit FLT_EDGE:1;             /**< \brief [8:8]   Edge detected and masked on filtered pin
                                                                    selected by INTR_CFG.FLT_SEL (r) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_GPIO_PRT_INTR_MASKED_Bits;

/** \brief Port interrupt set register */
typedef struct _Ifx_GPIO_PRT_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit EDGE0:1;                /**< \brief [0:0]   Sets edge detect interrupt for IO pin 0
                                                                    '0': Interrupt state not affected
                                                                    '1': Interrupt set (rw) */
    __IO Ifx_UReg_32Bit EDGE1:1;                /**< \brief [1:1]   Sets edge detect interrupt for IO pin 1 (rw) */
    __IO Ifx_UReg_32Bit EDGE2:1;                /**< \brief [2:2]   Sets edge detect interrupt for IO pin 2 (rw) */
    __IO Ifx_UReg_32Bit EDGE3:1;                /**< \brief [3:3]   Sets edge detect interrupt for IO pin 3 (rw) */
    __IO Ifx_UReg_32Bit EDGE4:1;                /**< \brief [4:4]   Sets edge detect interrupt for IO pin 4 (rw) */
    __IO Ifx_UReg_32Bit EDGE5:1;                /**< \brief [5:5]   Sets edge detect interrupt for IO pin 5 (rw) */
    __IO Ifx_UReg_32Bit EDGE6:1;                /**< \brief [6:6]   Sets edge detect interrupt for IO pin 6 (rw) */
    __IO Ifx_UReg_32Bit EDGE7:1;                /**< \brief [7:7]   Sets edge detect interrupt for IO pin 7 (rw) */
    __IO Ifx_UReg_32Bit FLT_EDGE:1;             /**< \brief [8:8]   Sets edge detect interrupt for filtered pin
                                                                    selected by INTR_CFG.FLT_SEL (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_GPIO_PRT_INTR_SET_Bits;

/** \brief Port interrupt configuration register */
typedef struct _Ifx_GPIO_PRT_INTR_CFG_Bits
{
    __IO Ifx_UReg_32Bit EDGE0_SEL:2;            /**< \brief [1:0]   Sets which edge will trigger an IRQ for IO
                                                                    pin 0 (rw)
                                                DISABLE       : 0u   Disabled
                                                RISING        : 1u   Rising edge
                                                FALLING       : 2u   Falling edge
                                                BOTH          : 3u   Both rising and falling edges */
    __IO Ifx_UReg_32Bit EDGE1_SEL:2;            /**< \brief [3:2]   Sets which edge will trigger an IRQ for IO
                                                                    pin 1 (rw) */
    __IO Ifx_UReg_32Bit EDGE2_SEL:2;            /**< \brief [5:4]   Sets which edge will trigger an IRQ for IO
                                                                    pin 2 (rw) */
    __IO Ifx_UReg_32Bit EDGE3_SEL:2;            /**< \brief [7:6]   Sets which edge will trigger an IRQ for IO
                                                                    pin 3 (rw) */
    __IO Ifx_UReg_32Bit EDGE4_SEL:2;            /**< \brief [9:8]   Sets which edge will trigger an IRQ for IO
                                                                    pin 4 (rw) */
    __IO Ifx_UReg_32Bit EDGE5_SEL:2;            /**< \brief [11:10] Sets which edge will trigger an IRQ for IO
                                                                    pin 5 (rw) */
    __IO Ifx_UReg_32Bit EDGE6_SEL:2;            /**< \brief [13:12] Sets which edge will trigger an IRQ for IO
                                                                    pin 6 (rw) */
    __IO Ifx_UReg_32Bit EDGE7_SEL:2;            /**< \brief [15:14] Sets which edge will trigger an IRQ for IO
                                                                    pin 7 (rw) */
    __IO Ifx_UReg_32Bit FLT_EDGE_SEL:2;         /**< \brief [17:16] Sets which edge will trigger an IRQ for the
                                                                    glitch filtered pin (selected by INTR_CFG.FLT_SEL (rw)
                                                DISABLE       : 0u   Disabled
                                                RISING        : 1u   Rising edge
                                                FALLING       : 2u   Falling edge
                                                BOTH          : 3u   Both rising and falling edges */
    __IO Ifx_UReg_32Bit FLT_SEL:3;              /**< \brief [20:18] Selects which pin is routed through the
                                                                    50ns glitch filter to provide a glitch-safe interrupt. (rw) */
    __I  Ifx_UReg_32Bit :11;                    /**< \brief [31:21] \internal Reserved */
} Ifx_GPIO_PRT_INTR_CFG_Bits;

/* GPIO_PRT_INTR_CFG.EDGE0_SEL enumerated values */

/** \brief Disabled */
#define IFX_GPIO_PRT_INTR_CFG_EDGE0_SEL_DISABLE (0u)

/** \brief Rising edge */
#define IFX_GPIO_PRT_INTR_CFG_EDGE0_SEL_RISING (1u)

/** \brief Falling edge */
#define IFX_GPIO_PRT_INTR_CFG_EDGE0_SEL_FALLING (2u)

/** \brief Both rising and falling edges */
#define IFX_GPIO_PRT_INTR_CFG_EDGE0_SEL_BOTH (3u)

/* GPIO_PRT_INTR_CFG.FLT_EDGE_SEL enumerated values */

/** \brief Disabled */
#define IFX_GPIO_PRT_INTR_CFG_FLT_EDGE_SEL_DISABLE (0u)

/** \brief Rising edge */
#define IFX_GPIO_PRT_INTR_CFG_FLT_EDGE_SEL_RISING (1u)

/** \brief Falling edge */
#define IFX_GPIO_PRT_INTR_CFG_FLT_EDGE_SEL_FALLING (2u)

/** \brief Both rising and falling edges */
#define IFX_GPIO_PRT_INTR_CFG_FLT_EDGE_SEL_BOTH (3u)

/** \brief Port configuration register */
typedef struct _Ifx_GPIO_PRT_CFG_Bits
{
    __IO Ifx_UReg_32Bit DRIVE_MODE0:3;          /**< \brief [2:0]   The GPIO drive mode for IO pin 0.
                                                                    Resistive pull-up and pull-down is selected in the
                                                                    drive mode.
                                                                    Note: when initializing IO's that are connected to
                                                                    a live bus (such as I2C), make sure the peripheral
                                                                    and HSIOM (HSIOM_PRT_SELx) is properly configured
                                                                    before turning the IO on here to avoid producing
                                                                    glitches on the bus.
                                                                    Note: that peripherals other than GPIO & UDB/DSI
                                                                    directly control both the output and output-enable
                                                                    of the output buffer (peripherals can drive strong
                                                                    0 or strong 1 in any mode except OFF='0').
                                                                    Note: D_OUT, D_OUT_EN are pins of GPIO cell. (rw)
                                                HIGHZ         : 0u   Output buffer is off creating a high impedance input
                                                                    D_OUT = '0': High Impedance
                                                                    D_OUT = '1': High Impedance
                                                RESERVED      : 1u   This mode is reserved and should not be used.
                                                                    No damage will occur if this mode is selected.
                                                                    The pin will generally perform the same as the
                                                                    STRONG drive mode although this is not guaranteed
                                                                    for all use cases.
                                                                    For GPIO & UDB/DSI peripherals:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': Strong pull up
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': High impedance
                                                                       D_OUT = '1': High impedance
                                                                    For peripherals other than GPIO & UDB/DSI:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': Strong pull up
                                                                    When OUT_EN = 0:
                                                                       D_OUT = '0': High impedance
                                                                       D_OUT = '1': High impedance
                                                PULLUP        : 2u   Resistive pull up
                                                                    For GPIO & UDB/DSI peripherals:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': Weak/resistive pull up
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': High impedance
                                                                       D_OUT = '1': High impedance
                                                                    For peripherals other than GPIO & UDB/DSI:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': Strong pull up
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': Weak/resistive pull up
                                                                       D_OUT = '1': Weak/resistive pull up
                                                PULLDOWN      : 3u   Resistive pull down
                                                                    For GPIO & UDB/DSI peripherals:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Weak/resistive pull down
                                                                       D_OUT = '1': Strong pull up
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': High impedance
                                                                       D_OUT = '1': High impedance
                                                                    For peripherals other than GPIO & UDB/DSI:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': Strong pull up
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': Weak/resistive pull down
                                                                       D_OUT = '1': Weak/resistive pull down
                                                OD_DRIVESLOW  : 4u   Open drain, drives low
                                                                    For GPIO & UDB/DSI peripherals:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': High Impedance
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': High impedance
                                                                       D_OUT = '1': High impedance
                                                                    For peripherals other than GPIO & UDB/DSI:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': Strong pull up
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': High Impedance
                                                                       D_OUT = '1': High Impedance
                                                OD_DRIVESHIGH : 5u   Open drain, drives high
                                                                    For GPIO & UDB/DSI peripherals:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': High Impedance
                                                                       D_OUT = '1': Strong pull up
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': High impedance
                                                                       D_OUT = '1': High impedance
                                                                    For peripherals other than GPIO & UDB/DSI:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': Strong pull up
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': High Impedance
                                                                       D_OUT = '1': High Impedance
                                                STRONG        : 6u   Strong D_OUTput buffer
                                                                    For GPIO & UDB/DSI peripherals:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': Strong pull up
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': High impedance
                                                                       D_OUT = '1': High impedance
                                                                    For peripherals other than GPIO & UDB/DSI:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': Strong pull up
                                                                    When D_OUT_EN = 0:
                                                                       D_OUT = '0': High Impedance
                                                                       D_OUT = '1': High Impedance
                                                PULLUP_DOWN   : 7u   Pull up or pull down
                                                                    For GPIO & UDB/DSI peripherals:
                                                                    When D_OUT_EN = '0':
                                                                        GPIO_DSI_OUT = '0': Weak/resistive pull down
                                                                        GPIO_DSI_OUT = '1': Weak/resistive pull up
                                                                    where "GPIO_DSI_OUT" is a function of PORT_SEL, OUT
                                                                    & DSI_DATA_OUT.
                                                                    For peripherals other than GPIO & UDB/DSI:
                                                                    When D_OUT_EN = 1:
                                                                       D_OUT = '0': Strong pull down
                                                                       D_OUT = '1': Strong pull up
                                                                    When D_OUT_EN = 0:
                                                                        D_OUT = '0': Weak/resistive pull down
                                                                        D_OUT = '1': Weak/resistive pull up */
    __IO Ifx_UReg_32Bit IN_EN0:1;               /**< \brief [3:3]   Enables the input buffer for IO pin 0.
                                                                    This bit should be cleared when analog signals are
                                                                    present on the pin to avoid crowbar currents.
                                                                    The output buffer can be used to drive analog
                                                                    signals high or low without issue.
                                                                    '0': Input buffer disabled
                                                                    '1': Input buffer enabled (rw) */
    __IO Ifx_UReg_32Bit DRIVE_MODE1:3;          /**< \brief [6:4]   The GPIO drive mode for IO pin 1 (rw) */
    __IO Ifx_UReg_32Bit IN_EN1:1;               /**< \brief [7:7]   Enables the input buffer for IO pin 1 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_MODE2:3;          /**< \brief [10:8]  The GPIO drive mode for IO pin 2 (rw) */
    __IO Ifx_UReg_32Bit IN_EN2:1;               /**< \brief [11:11] Enables the input buffer for IO pin 2 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_MODE3:3;          /**< \brief [14:12] The GPIO drive mode for IO pin 3 (rw) */
    __IO Ifx_UReg_32Bit IN_EN3:1;               /**< \brief [15:15] Enables the input buffer for IO pin 3 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_MODE4:3;          /**< \brief [18:16] The GPIO drive mode for IO pin4 (rw) */
    __IO Ifx_UReg_32Bit IN_EN4:1;               /**< \brief [19:19] Enables the input buffer for IO pin 4 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_MODE5:3;          /**< \brief [22:20] The GPIO drive mode for IO pin 5 (rw) */
    __IO Ifx_UReg_32Bit IN_EN5:1;               /**< \brief [23:23] Enables the input buffer for IO pin 5 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_MODE6:3;          /**< \brief [26:24] The GPIO drive mode for IO pin 6 (rw) */
    __IO Ifx_UReg_32Bit IN_EN6:1;               /**< \brief [27:27] Enables the input buffer for IO pin 6 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_MODE7:3;          /**< \brief [30:28] The GPIO drive mode for IO pin 7 (rw) */
    __IO Ifx_UReg_32Bit IN_EN7:1;               /**< \brief [31:31] Enables the input buffer for IO pin 7 (rw) */
} Ifx_GPIO_PRT_CFG_Bits;

/* GPIO_PRT_CFG.DRIVE_MODE0 enumerated values */

/** \brief Output buffer is off creating a high impedance input
D_OUT = '0': High Impedance
D_OUT = '1': High Impedance */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_HIGHZ (0u)

/** \brief This mode is reserved and should not be used.
No damage will occur if this mode is selected.
The pin will generally perform the same as the STRONG drive mode although this
is not guaranteed for all use cases.
For GPIO & UDB/DSI peripherals:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': Strong pull up
When D_OUT_EN = 0:
   D_OUT = '0': High impedance
   D_OUT = '1': High impedance
For peripherals other than GPIO & UDB/DSI:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': Strong pull up
When OUT_EN = 0:
   D_OUT = '0': High impedance
   D_OUT = '1': High impedance */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_RESERVED (1u)

/** \brief Resistive pull up
For GPIO & UDB/DSI peripherals:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': Weak/resistive pull up
When D_OUT_EN = 0:
   D_OUT = '0': High impedance
   D_OUT = '1': High impedance
For peripherals other than GPIO & UDB/DSI:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': Strong pull up
When D_OUT_EN = 0:
   D_OUT = '0': Weak/resistive pull up
   D_OUT = '1': Weak/resistive pull up */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_PULLUP (2u)

/** \brief Resistive pull down
For GPIO & UDB/DSI peripherals:
When D_OUT_EN = 1:
   D_OUT = '0': Weak/resistive pull down
   D_OUT = '1': Strong pull up
When D_OUT_EN = 0:
   D_OUT = '0': High impedance
   D_OUT = '1': High impedance
For peripherals other than GPIO & UDB/DSI:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': Strong pull up
When D_OUT_EN = 0:
   D_OUT = '0': Weak/resistive pull down
   D_OUT = '1': Weak/resistive pull down */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_PULLDOWN (3u)

/** \brief Open drain, drives low
For GPIO & UDB/DSI peripherals:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': High Impedance
When D_OUT_EN = 0:
   D_OUT = '0': High impedance
   D_OUT = '1': High impedance
For peripherals other than GPIO & UDB/DSI:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': Strong pull up
When D_OUT_EN = 0:
   D_OUT = '0': High Impedance
   D_OUT = '1': High Impedance */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_OD_DRIVESLOW (4u)

/** \brief Open drain, drives high
For GPIO & UDB/DSI peripherals:
When D_OUT_EN = 1:
   D_OUT = '0': High Impedance
   D_OUT = '1': Strong pull up
When D_OUT_EN = 0:
   D_OUT = '0': High impedance
   D_OUT = '1': High impedance
For peripherals other than GPIO & UDB/DSI:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': Strong pull up
When D_OUT_EN = 0:
   D_OUT = '0': High Impedance
   D_OUT = '1': High Impedance */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_OD_DRIVESHIGH (5u)

/** \brief Strong D_OUTput buffer
For GPIO & UDB/DSI peripherals:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': Strong pull up
When D_OUT_EN = 0:
   D_OUT = '0': High impedance
   D_OUT = '1': High impedance
For peripherals other than GPIO & UDB/DSI:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': Strong pull up
When D_OUT_EN = 0:
   D_OUT = '0': High Impedance
   D_OUT = '1': High Impedance */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_STRONG (6u)

/** \brief Pull up or pull down
For GPIO & UDB/DSI peripherals:
When D_OUT_EN = '0':
    GPIO_DSI_OUT = '0': Weak/resistive pull down
    GPIO_DSI_OUT = '1': Weak/resistive pull up
where "GPIO_DSI_OUT" is a function of PORT_SEL, OUT & DSI_DATA_OUT.
For peripherals other than GPIO & UDB/DSI:
When D_OUT_EN = 1:
   D_OUT = '0': Strong pull down
   D_OUT = '1': Strong pull up
When D_OUT_EN = 0:
    D_OUT = '0': Weak/resistive pull down
    D_OUT = '1': Weak/resistive pull up */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_PULLUP_DOWN (7u)

/** \brief Port input buffer configuration register */
typedef struct _Ifx_GPIO_PRT_CFG_IN_Bits
{
    __IO Ifx_UReg_32Bit VTRIP_SEL0_0:1;         /**< \brief [0:0]   Configures the pin 0 input buffer mode
                                                                    (trip points and hysteresis) (rw)
                                                CMOS          : 0u   Input buffer compatible with CMOS and I2C interfaces
                                                TTL           : 1u   Input buffer compatible with TTL and MediaLB
                                                                    interfaces */
    __IO Ifx_UReg_32Bit VTRIP_SEL1_0:1;         /**< \brief [1:1]   Configures the pin 1 input buffer mode
                                                                    (trip points and hysteresis) (rw) */
    __IO Ifx_UReg_32Bit VTRIP_SEL2_0:1;         /**< \brief [2:2]   Configures the pin 2 input buffer mode
                                                                    (trip points and hysteresis) (rw) */
    __IO Ifx_UReg_32Bit VTRIP_SEL3_0:1;         /**< \brief [3:3]   Configures the pin 3 input buffer mode
                                                                    (trip points and hysteresis) (rw) */
    __IO Ifx_UReg_32Bit VTRIP_SEL4_0:1;         /**< \brief [4:4]   Configures the pin 4 input buffer mode
                                                                    (trip points and hysteresis) (rw) */
    __IO Ifx_UReg_32Bit VTRIP_SEL5_0:1;         /**< \brief [5:5]   Configures the pin 5 input buffer mode
                                                                    (trip points and hysteresis) (rw) */
    __IO Ifx_UReg_32Bit VTRIP_SEL6_0:1;         /**< \brief [6:6]   Configures the pin 6 input buffer mode
                                                                    (trip points and hysteresis) (rw) */
    __IO Ifx_UReg_32Bit VTRIP_SEL7_0:1;         /**< \brief [7:7]   Configures the pin 7 input buffer mode
                                                                    (trip points and hysteresis) (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_GPIO_PRT_CFG_IN_Bits;

/* GPIO_PRT_CFG_IN.VTRIP_SEL0_0 enumerated values */

/** \brief Input buffer compatible with CMOS and I2C interfaces */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL0_0_CMOS (0u)

/** \brief Input buffer compatible with TTL and MediaLB interfaces */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL0_0_TTL (1u)

/** \brief Port output buffer configuration register */
typedef struct _Ifx_GPIO_PRT_CFG_OUT_Bits
{
    __IO Ifx_UReg_32Bit SLOW0:1;                /**< \brief [0:0]   Enables slow slew rate for IO pin 0
                                                                    '0': Fast slew rate
                                                                    '1': Slow slew rate (rw) */
    __IO Ifx_UReg_32Bit SLOW1:1;                /**< \brief [1:1]   Enables slow slew rate for IO pin 1 (rw) */
    __IO Ifx_UReg_32Bit SLOW2:1;                /**< \brief [2:2]   Enables slow slew rate for IO pin 2 (rw) */
    __IO Ifx_UReg_32Bit SLOW3:1;                /**< \brief [3:3]   Enables slow slew rate for IO pin 3 (rw) */
    __IO Ifx_UReg_32Bit SLOW4:1;                /**< \brief [4:4]   Enables slow slew rate for IO pin 4 (rw) */
    __IO Ifx_UReg_32Bit SLOW5:1;                /**< \brief [5:5]   Enables slow slew rate for IO pin 5 (rw) */
    __I  Ifx_UReg_32Bit :10;                    /**< \brief [15:6]  \internal Reserved */
    __IO Ifx_UReg_32Bit DRIVE_SEL0:2;           /**< \brief [17:16] Sets the GPIO drive strength for IO pin 0 (rw)
                                                DRIVE_SEL_ZERO: 0u
                                                DRIVE_SEL_ONE : 1u
                                                DRIVE_SEL_TWO : 2u
                                                DRIVE_SEL_THREE: 3u    */
    __IO Ifx_UReg_32Bit DRIVE_SEL1:2;           /**< \brief [19:18] Sets the GPIO drive strength for IO pin 1 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_SEL2:2;           /**< \brief [21:20] Sets the GPIO drive strength for IO pin 2 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_SEL3:2;           /**< \brief [23:22] Sets the GPIO drive strength for IO pin 3 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_SEL4:2;           /**< \brief [25:24] Sets the GPIO drive strength for IO pin 4 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_SEL5:2;           /**< \brief [27:26] Sets the GPIO drive strength for IO pin 5 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_SEL6:2;           /**< \brief [29:28] Sets the GPIO drive strength for IO pin 6 (rw) */
    __IO Ifx_UReg_32Bit DRIVE_SEL7:2;           /**< \brief [31:30] Sets the GPIO drive strength for IO pin 7 (rw) */
} Ifx_GPIO_PRT_CFG_OUT_Bits;

/* GPIO_PRT_CFG_OUT.DRIVE_SEL0 enumerated values */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL0_DRIVE_SEL_ZERO (0u)
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL0_DRIVE_SEL_ONE (1u)
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL0_DRIVE_SEL_TWO (2u)
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL0_DRIVE_SEL_THREE (3u)

/** \brief Port output buffer slew extension configuration register */
typedef struct _Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits
{
    __IO Ifx_UReg_32Bit SLEW0:3;                /**< \brief [2:0]   Enables slow slew rate for IO pin 0
                                                                    '0': Fast slew rate
                                                                    '1': Slow slew rate (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit SLEW1:3;                /**< \brief [6:4]   Slew rate for IO pin 1 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit SLEW2:3;                /**< \brief [10:8]  Slew rate for IO pin 2 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __IO Ifx_UReg_32Bit SLEW3:3;                /**< \brief [14:12] Slew rate for IO pin 3 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit SLEW4:3;                /**< \brief [18:16] Slew rate for IO pin 4 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit SLEW5:3;                /**< \brief [22:20] Slew rate for IO pin 5 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit SLEW6:3;                /**< \brief [26:24] Slew rate for IO pin 6 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [27:27] \internal Reserved */
    __IO Ifx_UReg_32Bit SLEW7:3;                /**< \brief [30:28] Slew rate for IO pin 7 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits;

/** \brief Port output buffer drive sel extension configuration register */
typedef struct _Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits
{
    __IO Ifx_UReg_32Bit DRIVE_SEL_EXT0:5;       /**< \brief [4:0]   Sets the GPIO drive strength for IO pin 0 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit DRIVE_SEL_EXT1:5;       /**< \brief [12:8]  Sets the GPIO drive strength for IO pin 1 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit DRIVE_SEL_EXT2:5;       /**< \brief [20:16] Sets the GPIO drive strength for IO pin 2 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [23:21] \internal Reserved */
    __IO Ifx_UReg_32Bit DRIVE_SEL_EXT3:5;       /**< \brief [28:24] Sets the GPIO drive strength for IO pin 3 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [31:29] \internal Reserved */
} Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits;

/** \brief Port output buffer drive sel extension configuration register */
typedef struct _Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits
{
    __IO Ifx_UReg_32Bit DRIVE_SEL_EXT4:5;       /**< \brief [4:0]   Sets the GPIO drive strength for IO pin 4 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit DRIVE_SEL_EXT5:5;       /**< \brief [12:8]  Sets the GPIO drive strength for IO pin 5 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit DRIVE_SEL_EXT6:5;       /**< \brief [20:16] Sets the GPIO drive strength for IO pin 6 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [23:21] \internal Reserved */
    __IO Ifx_UReg_32Bit DRIVE_SEL_EXT7:5;       /**< \brief [28:24] Sets the GPIO drive strength for IO pin 7 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [31:29] \internal Reserved */
} Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_GPIO_Registers_union
 * \{   */
/** \brief Secure Interrupt port cause register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_SEC_INTR_CAUSE0_Bits B;            /**< \brief Bitfield access */
} Ifx_GPIO_SEC_INTR_CAUSE0;

/** \brief Interrupt port cause register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_INTR_CAUSE0_Bits B;                /**< \brief Bitfield access */
} Ifx_GPIO_INTR_CAUSE0;

/** \brief Extern power supply detection register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_VDD_ACTIVE_Bits B;                 /**< \brief Bitfield access */
} Ifx_GPIO_VDD_ACTIVE;

/** \brief Supply detection interrupt register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_VDD_INTR_Bits B;                   /**< \brief Bitfield access */
} Ifx_GPIO_VDD_INTR;

/** \brief Supply detection interrupt mask register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_VDD_INTR_MASK_Bits B;              /**< \brief Bitfield access */
} Ifx_GPIO_VDD_INTR_MASK;

/** \brief Supply detection interrupt masked register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_VDD_INTR_MASKED_Bits B;            /**< \brief Bitfield access */
} Ifx_GPIO_VDD_INTR_MASKED;

/** \brief Supply detection interrupt set register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_VDD_INTR_SET_Bits B;               /**< \brief Bitfield access */
} Ifx_GPIO_VDD_INTR_SET;

/** \brief Port output data register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_OUT_Bits B;                    /**< \brief Bitfield access */
} Ifx_GPIO_PRT_OUT;

/** \brief Port output data clear register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_OUT_CLR_Bits B;                /**< \brief Bitfield access */
} Ifx_GPIO_PRT_OUT_CLR;

/** \brief Port output data set register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_OUT_SET_Bits B;                /**< \brief Bitfield access */
} Ifx_GPIO_PRT_OUT_SET;

/** \brief Port output data invert register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_OUT_INV_Bits B;                /**< \brief Bitfield access */
} Ifx_GPIO_PRT_OUT_INV;

/** \brief Port input state register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_IN_Bits B;                     /**< \brief Bitfield access */
} Ifx_GPIO_PRT_IN;

/** \brief Port interrupt status register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_INTR_Bits B;                   /**< \brief Bitfield access */
} Ifx_GPIO_PRT_INTR;

/** \brief Port interrupt mask register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_INTR_MASK_Bits B;              /**< \brief Bitfield access */
} Ifx_GPIO_PRT_INTR_MASK;

/** \brief Port interrupt masked status register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_INTR_MASKED_Bits B;            /**< \brief Bitfield access */
} Ifx_GPIO_PRT_INTR_MASKED;

/** \brief Port interrupt set register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_INTR_SET_Bits B;               /**< \brief Bitfield access */
} Ifx_GPIO_PRT_INTR_SET;

/** \brief Port interrupt configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_INTR_CFG_Bits B;               /**< \brief Bitfield access */
} Ifx_GPIO_PRT_INTR_CFG;

/** \brief Port configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_CFG_Bits B;                    /**< \brief Bitfield access */
} Ifx_GPIO_PRT_CFG;

/** \brief Port input buffer configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_CFG_IN_Bits B;                 /**< \brief Bitfield access */
} Ifx_GPIO_PRT_CFG_IN;

/** \brief Port output buffer configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_CFG_OUT_Bits B;                /**< \brief Bitfield access */
} Ifx_GPIO_PRT_CFG_OUT;

/** \brief Port output buffer slew extension configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits B;           /**< \brief Bitfield access */
} Ifx_GPIO_PRT_CFG_SLEW_EXT;

/** \brief Port output buffer drive sel extension configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits B;         /**< \brief Bitfield access */
} Ifx_GPIO_PRT_CFG_DRIVE_EXT0;

/** \brief Port output buffer drive sel extension configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits B;         /**< \brief Bitfield access */
} Ifx_GPIO_PRT_CFG_DRIVE_EXT1;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_GPIO_PRT_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief PRT object */
typedef volatile struct _Ifx_GPIO_PRT
{
       __IO Ifx_GPIO_PRT_OUT                    OUT;                    /**< \brief 0, Port output data register*/
       __IO Ifx_GPIO_PRT_OUT_CLR                OUT_CLR;                /**< \brief 4, Port output data clear register*/
       __IO Ifx_GPIO_PRT_OUT_SET                OUT_SET;                /**< \brief 8, Port output data set register*/
       __IO Ifx_GPIO_PRT_OUT_INV                OUT_INV;                /**< \brief C, Port output data invert register*/
       __I  Ifx_GPIO_PRT_IN                     IN;                     /**< \brief 10, Port input state register*/
       __IO Ifx_GPIO_PRT_INTR                   INTR;                   /**< \brief 14, Port interrupt status register*/
       __IO Ifx_GPIO_PRT_INTR_MASK              INTR_MASK;              /**< \brief 18, Port interrupt mask register*/
       __I  Ifx_GPIO_PRT_INTR_MASKED            INTR_MASKED;            /**< \brief 1C, Port interrupt masked status register*/
       __IO Ifx_GPIO_PRT_INTR_SET               INTR_SET;               /**< \brief 20, Port interrupt set register*/
       __I  Ifx_UReg_8Bit                       reserved_24[28];        /**< \brief 24, */
       __IO Ifx_GPIO_PRT_INTR_CFG               INTR_CFG;               /**< \brief 40, Port interrupt configuration register*/
       __IO Ifx_GPIO_PRT_CFG                    CFG;                    /**< \brief 44, Port configuration register*/
       __IO Ifx_GPIO_PRT_CFG_IN                 CFG_IN;                 /**< \brief 48, Port input buffer configuration register*/
       __IO Ifx_GPIO_PRT_CFG_OUT                CFG_OUT;                /**< \brief 4C, Port output buffer configuration register*/
       __I  Ifx_UReg_8Bit                       reserved_50[20];        /**< \brief 50, */
       __IO Ifx_GPIO_PRT_CFG_SLEW_EXT           CFG_SLEW_EXT;           /**< \brief 64, Port output buffer slew extension configuration register*/
       __IO Ifx_GPIO_PRT_CFG_DRIVE_EXT0         CFG_DRIVE_EXT0;         /**< \brief 68, Port output buffer drive sel extension configuration register*/
       __IO Ifx_GPIO_PRT_CFG_DRIVE_EXT1         CFG_DRIVE_EXT1;         /**< \brief 6C, Port output buffer drive sel extension configuration register*/
       __I  Ifx_UReg_8Bit                       reserved_70[16];        /**< \brief 70, */
} Ifx_GPIO_PRT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_GPIO_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief GPIO object */
typedef volatile struct _Ifx_GPIO
{
       __IO Ifx_GPIO_PRT                        PRT[128];               /**< \brief 0, GPIO port registers*/
       __I  Ifx_UReg_8Bit                       reserved_4000[12288];   /**< \brief 4000, */
       __I  Ifx_GPIO_SEC_INTR_CAUSE0            SEC_INTR_CAUSE0;        /**< \brief 7000, Secure Interrupt port cause register 0*/
       __I  Ifx_UReg_8Bit                       reserved_7004[4092];    /**< \brief 7004, */
       __I  Ifx_GPIO_INTR_CAUSE0                INTR_CAUSE0;            /**< \brief 8000, Interrupt port cause register 0*/
       __I  Ifx_UReg_8Bit                       reserved_8004[12];      /**< \brief 8004, */
       __I  Ifx_GPIO_VDD_ACTIVE                 VDD_ACTIVE;             /**< \brief 8010, Extern power supply detection register*/
       __IO Ifx_GPIO_VDD_INTR                   VDD_INTR;               /**< \brief 8014, Supply detection interrupt register*/
       __IO Ifx_GPIO_VDD_INTR_MASK              VDD_INTR_MASK;          /**< \brief 8018, Supply detection interrupt mask register*/
       __I  Ifx_GPIO_VDD_INTR_MASKED            VDD_INTR_MASKED;        /**< \brief 801C, Supply detection interrupt masked register*/
       __IO Ifx_GPIO_VDD_INTR_SET               VDD_INTR_SET;           /**< \brief 8020, Supply detection interrupt set register*/
       __I  Ifx_UReg_8Bit                       reserved_8024[32732];   /**< \brief 8024, */
} Ifx_GPIO;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXGPIO_REGDEF_H_ */
