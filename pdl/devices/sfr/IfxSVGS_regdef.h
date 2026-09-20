/***************************************************************************//**
* \file IfxSVGS_regdef.h
*
* \brief
* SVGS Registers
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
* \defgroup IfxSfr_SVGS_Registers SVGS Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_SVGS_Registers_Bitfields Bitfields
* \ingroup IfxSfr_SVGS_Registers
*
* \defgroup IfxSfr_SVGS_Registers_union Register unions
* \ingroup IfxSfr_SVGS_Registers
*
* \defgroup IfxSfr_SVGS_Registers_struct Memory map
* \ingroup IfxSfr_SVGS_Registers
*
*******************************************************************************/

#ifndef _IFXSVGS_REGDEF_H_
#define _IFXSVGS_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_SVGS_Registers_Bitfields
 * \{  */
/** \brief SVGS Control Register */
typedef struct _Ifx_SVGS_SVGS_MAIN_SVGS_CTL_Bits
{
    __IO Ifx_UReg_32Bit ENABLE:4;               /**< \brief [3:0]   '0101' = Disable SVGS.
                                                                    All other values will enable SVGS.
                                                                    Note that HW will disable during DEEPSLEEP for
                                                                    power savings. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit FAULT_EN:1;             /**< \brief [8:8]   0 = Disable Fault generation
                                                                    1 = A fault will be generated to the CPUSS fault
                                                                    handler for any enabled comparator.
                                                                    Note that this fault will not be registered if the
                                                                    reset is not masked for the triggered comparator
                                                                    (reset takes precedence). (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_SVGS_SVGS_MAIN_SVGS_CTL_Bits;

/** \brief SVGS Status Register */
typedef struct _Ifx_SVGS_SVGS_MAIN_SVGS_STATUS_Bits
{
    __I  Ifx_UReg_32Bit UVC_CAPTURED:1;         /**< \brief [0:0]   1 = UVC (Under Voltage Comparison function)
                                                                    occurred since last reset (r) */
    __I  Ifx_UReg_32Bit OVC_CAPTURED:1;         /**< \brief [1:1]   1 = OVC (Over Voltage Comparison function)
                                                                    occurred since last reset (r) */
    __I  Ifx_UReg_32Bit UVFC_CAPTURED:1;        /**< \brief [2:2]   1 = UVFC (Under Voltage (Filtered)
                                                                    Comparison function) occurred since last reset (r) */
    __I  Ifx_UReg_32Bit NVC_CAPTURED:1;         /**< \brief [3:3]   1 = NVC (Noise Voltage Comparison function)
                                                                    occurred since last reset (r) */
    __I  Ifx_UReg_32Bit HVC_CAPTURED:1;         /**< \brief [4:4]   1 = HVC (High Voltage Comparison function)
                                                                    occurred since last reset (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __I  Ifx_UReg_32Bit EN_SEQ_ACTIVE:1;        /**< \brief [8:8]   1 = HW enable sequence is active.
                                                                    SW should check that this sequence has completed
                                                                    meaning SVGS is fully enabled before security
                                                                    critical operations. (r) */
    __I  Ifx_UReg_32Bit SVGS_ENABLED:1;         /**< \brief [9:9]   1 = SVGS block enable sequence is complete
                                                                    and SVGS is functioning per loaded settings.
                                                                    0 = Block is disabled, or in process of enable sequence. (r) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_SVGS_SVGS_MAIN_SVGS_STATUS_Bits;

/** \brief SVGS Comparator Configuration */
typedef struct _Ifx_SVGS_SVGS_MAIN_SVGS_CMP_CFG_RO_Bits
{
    __I  Ifx_UReg_32Bit UVC_EN:1;               /**< \brief [0:0]   1 = Enable UVC (Under Voltage Comparison
                                                                    function) (r) */
    __I  Ifx_UReg_32Bit OVC_EN:1;               /**< \brief [1:1]   1 = Enable OVC (Over Voltage Comparison
                                                                    function) (r) */
    __I  Ifx_UReg_32Bit UVFC_EN:1;              /**< \brief [2:2]   1 = Enable UVFC (Under Voltage (Filtered)
                                                                    Comparison function) (r) */
    __I  Ifx_UReg_32Bit NVC_EN:1;               /**< \brief [3:3]   1 = Enable NVC (Noise Voltage Comparison
                                                                    function) (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __I  Ifx_UReg_32Bit UVC_PWR:1;              /**< \brief [8:8]   1 = UVC in full power else half power mode (r) */
    __I  Ifx_UReg_32Bit OVC_PWR:1;              /**< \brief [9:9]   1 = OVC in full power else half power mode (r) */
    __I  Ifx_UReg_32Bit UVFC_PWR:1;             /**< \brief [10:10] 1 = UVFC in full power else half power mode (r) */
    __I  Ifx_UReg_32Bit NVC_PWR:1;              /**< \brief [11:11] 1 = NVC in full power else half power mode (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __I  Ifx_UReg_32Bit UVC_MASK:1;             /**< \brief [16:16] 1 = UVC masked from affecting
                                                                    svgs_glitch_event_hv (r) */
    __I  Ifx_UReg_32Bit OVC_MASK:1;             /**< \brief [17:17] 1 = OVC masked from affecting
                                                                    svgs_glitch_event_hv (r) */
    __I  Ifx_UReg_32Bit UVFC_MASK:1;            /**< \brief [18:18] 1 = UVFC masked from affecting
                                                                    svgs_glitch_event_hv (r) */
    __I  Ifx_UReg_32Bit NVC_MASK:1;             /**< \brief [19:19] 1 = NVC masked from affecting
                                                                    svgs_glitch_event_hv (r) */
    __I  Ifx_UReg_32Bit HVC_MASK:1;             /**< \brief [20:20] 1 = HVC masked from affecting
                                                                    svgs_glitch_event_hv (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [23:21] \internal Reserved */
    __I  Ifx_UReg_32Bit SVGS_UVFC_TC:4;         /**< \brief [27:24] Configures the time constant of the UVFC
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
                                                                    F'h sets time constant 400ns (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [31:28] \internal Reserved */
} Ifx_SVGS_SVGS_MAIN_SVGS_CMP_CFG_RO_Bits;

/** \brief SVGS Comparator trip-point configuration */
typedef struct _Ifx_SVGS_SVGS_MAIN_SVGS_CMP_TRIP_RO_Bits
{
    __I  Ifx_UReg_32Bit SVGS_UVC_TRIP:6;        /**< \brief [5:0]   Configures the threshold of UVC
                                                                    functionality in steps of 6.2mV.
                                                                    000000 = 760.00mV
                                                                    000001 = 766.2mV
                                                                    ....
                                                                    111111 = 1150mV (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __I  Ifx_UReg_32Bit SVGS_OVC_TRIP:2;        /**< \brief [9:8]   Configures the threshold of OVC
                                                                    functionality in steps of 25mV.
                                                                    00 = 1250mV
                                                                    01 = 1275mV
                                                                    10 = 1300mV
                                                                    11 = 1325mV (r) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __I  Ifx_UReg_32Bit SVGS_UVFC_TRIP:6;       /**< \brief [21:16] Configures the threshold of UVFC
                                                                    functionality in steps of 6.2mV.
                                                                    000000 = 760.00mV
                                                                    000001 = 766.2mV
                                                                    ....
                                                                    111111 = 1150mV (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __I  Ifx_UReg_32Bit SVGS_NVC_TRIP:4;        /**< \brief [27:24] Configures the threshold of NVC
                                                                    functionality in steps of 10mV.
                                                                    0000 = 30mV
                                                                    0001 = 40mV
                                                                    ....
                                                                    1111 = 180mV (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [31:28] \internal Reserved */
} Ifx_SVGS_SVGS_MAIN_SVGS_CMP_TRIP_RO_Bits;

/** \brief SVGS Trim Register */
typedef struct _Ifx_SVGS_SVGS_MAIN_SVGS_TRIM_RO_Bits
{
    __I  Ifx_UReg_32Bit SVGS_VREG_TRIM:4;       /**< \brief [3:0]   Regulator output voltage trim (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __I  Ifx_UReg_32Bit SVGS_IBIAS_TRIM:4;      /**< \brief [11:8]  Bias current output trim (r) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_SVGS_SVGS_MAIN_SVGS_TRIM_RO_Bits;

/** \brief SVGS Interrupt Register */
typedef struct _Ifx_SVGS_SVGS_MAIN_SVGS_INTR_Bits
{
    __IO Ifx_UReg_32Bit UVC_GLITCH:1;           /**< \brief [0:0]   UVC Glitch detected interrupt (rw) */
    __IO Ifx_UReg_32Bit OVC_GLITCH:1;           /**< \brief [1:1]   OVC Glitch detected interrupt (rw) */
    __IO Ifx_UReg_32Bit UVFC_GLITCH:1;          /**< \brief [2:2]   UVFC Glitch detected interrupt (rw) */
    __IO Ifx_UReg_32Bit NVC_GLITCH:1;           /**< \brief [3:3]   NVC Glitch detected interrupt (rw) */
    __IO Ifx_UReg_32Bit HVC_GLITCH:1;           /**< \brief [4:4]   HVC Glitch detected interrupt (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_SVGS_SVGS_MAIN_SVGS_INTR_Bits;

/** \brief SVGS Interrupt Set Register */
typedef struct _Ifx_SVGS_SVGS_MAIN_SVGS_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit UVC_GLITCH:1;           /**< \brief [0:0]   Set interrupt for UVC_GLITCH interrupt. (rw) */
    __IO Ifx_UReg_32Bit OVC_GLITCH:1;           /**< \brief [1:1]   Set interrupt for OVC_GLITCH interrupt. (rw) */
    __IO Ifx_UReg_32Bit UVFC_GLITCH:1;          /**< \brief [2:2]   Set interrupt for UVFC_GLITCH interrupt. (rw) */
    __IO Ifx_UReg_32Bit NVC_GLITCH:1;           /**< \brief [3:3]   Set interrupt for NVC_GLITCH interrupt. (rw) */
    __IO Ifx_UReg_32Bit HVC_GLITCH:1;           /**< \brief [4:4]   Set interrupt for HVC_GLITCH interrupt. (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_SVGS_SVGS_MAIN_SVGS_INTR_SET_Bits;

/** \brief SVGS Interrupt Mask Register */
typedef struct _Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit UVC_GLITCH:1;           /**< \brief [0:0]   Mask for UVC_GLITCH interrupt. (rw) */
    __IO Ifx_UReg_32Bit OVC_GLITCH:1;           /**< \brief [1:1]   Mask for OVC_GLITCH interrupt. (rw) */
    __IO Ifx_UReg_32Bit UVFC_GLITCH:1;          /**< \brief [2:2]   Mask for UVFC_GLITCH interrupt. (rw) */
    __IO Ifx_UReg_32Bit NVC_GLITCH:1;           /**< \brief [3:3]   Mask for NVC_GLITCH interrupt. (rw) */
    __IO Ifx_UReg_32Bit HVC_GLITCH:1;           /**< \brief [4:4]   Mask for HVC_GLITCH interrupt. (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASK_Bits;

/** \brief SVGS Interrupt Masked Register */
typedef struct _Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit UVC_GLITCH:1;           /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit OVC_GLITCH:1;           /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit UVFC_GLITCH:1;          /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit NVC_GLITCH:1;           /**< \brief [3:3]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit HVC_GLITCH:1;           /**< \brief [4:4]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASKED_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SVGS_Registers_union
 * \{   */
/** \brief SVGS Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SVGS_SVGS_MAIN_SVGS_CTL_Bits B;         /**< \brief Bitfield access */
} Ifx_SVGS_SVGS_MAIN_SVGS_CTL;

/** \brief SVGS Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SVGS_SVGS_MAIN_SVGS_STATUS_Bits B;      /**< \brief Bitfield access */
} Ifx_SVGS_SVGS_MAIN_SVGS_STATUS;

/** \brief SVGS Comparator Configuration */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SVGS_SVGS_MAIN_SVGS_CMP_CFG_RO_Bits B;  /**< \brief Bitfield access */
} Ifx_SVGS_SVGS_MAIN_SVGS_CMP_CFG_RO;

/** \brief SVGS Comparator trip-point configuration */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SVGS_SVGS_MAIN_SVGS_CMP_TRIP_RO_Bits B; /**< \brief Bitfield access */
} Ifx_SVGS_SVGS_MAIN_SVGS_CMP_TRIP_RO;

/** \brief SVGS Trim Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SVGS_SVGS_MAIN_SVGS_TRIM_RO_Bits B;     /**< \brief Bitfield access */
} Ifx_SVGS_SVGS_MAIN_SVGS_TRIM_RO;

/** \brief SVGS Interrupt Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SVGS_SVGS_MAIN_SVGS_INTR_Bits B;        /**< \brief Bitfield access */
} Ifx_SVGS_SVGS_MAIN_SVGS_INTR;

/** \brief SVGS Interrupt Set Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SVGS_SVGS_MAIN_SVGS_INTR_SET_Bits B;    /**< \brief Bitfield access */
} Ifx_SVGS_SVGS_MAIN_SVGS_INTR_SET;

/** \brief SVGS Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASK_Bits B;   /**< \brief Bitfield access */
} Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASK;

/** \brief SVGS Interrupt Masked Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASKED_Bits B; /**< \brief Bitfield access */
} Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASKED;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SVGS_SVGS_MAIN_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SVGS_MAIN object */
typedef volatile struct _Ifx_SVGS_SVGS_MAIN
{
       __IO Ifx_SVGS_SVGS_MAIN_SVGS_CTL         SVGS_CTL;               /**< \brief 0, SVGS Control Register*/
       __I  Ifx_SVGS_SVGS_MAIN_SVGS_STATUS      SVGS_STATUS;            /**< \brief 4, SVGS Status Register*/
       __I  Ifx_SVGS_SVGS_MAIN_SVGS_CMP_CFG_RO  SVGS_CMP_CFG_RO;        /**< \brief 8, SVGS Comparator Configuration*/
       __I  Ifx_SVGS_SVGS_MAIN_SVGS_CMP_TRIP_RO SVGS_CMP_TRIP_RO;       /**< \brief C, SVGS Comparator trip-point configuration*/
       __I  Ifx_SVGS_SVGS_MAIN_SVGS_TRIM_RO     SVGS_TRIM_RO;           /**< \brief 10, SVGS Trim Register*/
       __I  Ifx_UReg_8Bit                       reserved_14[12];        /**< \brief 14, */
       __IO Ifx_SVGS_SVGS_MAIN_SVGS_INTR        SVGS_INTR;              /**< \brief 20, SVGS Interrupt Register*/
       __IO Ifx_SVGS_SVGS_MAIN_SVGS_INTR_SET    SVGS_INTR_SET;          /**< \brief 24, SVGS Interrupt Set Register*/
       __IO Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASK   SVGS_INTR_MASK;         /**< \brief 28, SVGS Interrupt Mask Register*/
       __I  Ifx_SVGS_SVGS_MAIN_SVGS_INTR_MASKED SVGS_INTR_MASKED;       /**< \brief 2C, SVGS Interrupt Masked Register*/
       __I  Ifx_UReg_8Bit                       reserved_30[16];        /**< \brief 30, */
} Ifx_SVGS_SVGS_MAIN;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SVGS_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief SVGS object */
typedef volatile struct _Ifx_SVGS
{
       __IO Ifx_SVGS_SVGS_MAIN                  SVGS_MAIN;              /**< \brief 0, SVGS Protected Runtime Registers (non-privileged SW accessible)*/
       __I  Ifx_UReg_8Bit                       reserved_40[192];       /**< \brief 40, */
} Ifx_SVGS;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXSVGS_REGDEF_H_ */
