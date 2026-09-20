/***************************************************************************//**
* \file IfxHSIOM_regdef.h
*
* \brief
* HSIOM Registers
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
* \defgroup IfxSfr_HSIOM_Registers HSIOM Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_HSIOM_Registers_Bitfields Bitfields
* \ingroup IfxSfr_HSIOM_Registers
*
* \defgroup IfxSfr_HSIOM_Registers_union Register unions
* \ingroup IfxSfr_HSIOM_Registers
*
* \defgroup IfxSfr_HSIOM_Registers_struct Memory map
* \ingroup IfxSfr_HSIOM_Registers
*
*******************************************************************************/

#ifndef _IFXHSIOM_REGDEF_H_
#define _IFXHSIOM_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_HSIOM_Registers_Bitfields
 * \{  */
/** \brief AMUX splitter cell control */
typedef struct _Ifx_HSIOM_AMUX_SPLIT_CTL_Bits
{
    __IO Ifx_UReg_32Bit SWITCH_AA_SL:1;         /**< \brief [0:0]   T-switch control for Left AMUXBUSA switch:
                                                                    '0': switch open.
                                                                    '1': switch closed. (rw) */
    __IO Ifx_UReg_32Bit SWITCH_AA_SR:1;         /**< \brief [1:1]   T-switch control for Right AMUXBUSA switch:
                                                                    '0': switch open.
                                                                    '1': switch closed. (rw) */
    __IO Ifx_UReg_32Bit SWITCH_AA_S0:1;         /**< \brief [2:2]   T-switch control for AMUXBUSA vssa/ground switch:
                                                                    '0': switch open.
                                                                    '1': switch closed. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit SWITCH_BB_SL:1;         /**< \brief [4:4]   T-switch control for Left AMUXBUSB switch. (rw) */
    __IO Ifx_UReg_32Bit SWITCH_BB_SR:1;         /**< \brief [5:5]   T-switch control for Right AMUXBUSB switch. (rw) */
    __IO Ifx_UReg_32Bit SWITCH_BB_S0:1;         /**< \brief [6:6]   T-switch control for AMUXBUSB vssa/ground switch. (rw) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [31:7]  \internal Reserved */
} Ifx_HSIOM_AMUX_SPLIT_CTL_Bits;

/** \brief Port selection 0 */
typedef struct _Ifx_HSIOM_PRT_PORT_SEL0_Bits
{
    __IO Ifx_UReg_32Bit IO0_SEL:5;              /**< \brief [4:0]   Selects connection for IO pin 0 route. (rw)
                                                GPIO          : 0u   GPIO controls "out"
                                                GPIO_DSI      : 1u   GPIO controls "out", DSI controls "output enable"
                                                DSI_DSI       : 2u   DSI controls "out" and "output enable"
                                                DSI_GPIO      : 3u   DSI controls "out", GPIO controls "output enable"
                                                AMUXA         : 4u   Analog mux bus A
                                                AMUXB         : 5u   Analog mux bus B
                                                AMUXA_DSI     : 6u   Analog mux bus A, DSI control
                                                AMUXB_DSI     : 7u   Analog mux bus B, DSI control
                                                ACT_0         : 8u   Active functionality 0
                                                ACT_1         : 9u   Active functionality 1
                                                ACT_2         : 10u   Active functionality 2
                                                ACT_3         : 11u   Active functionality 3
                                                DS_0          : 12u   DeepSleep functionality 0
                                                DS_1          : 13u   DeepSleep functionality 1
                                                DS_2          : 14u   DeepSleep functionality 2
                                                DS_3          : 15u   DeepSleep functionality 3
                                                ACT_4         : 16u   Active functionality 4
                                                ACT_5         : 17u   Active functionality 5
                                                ACT_6         : 18u   Active functionality 6
                                                ACT_7         : 19u   Active functionality 7
                                                ACT_8         : 20u   Active functionality 8
                                                ACT_9         : 21u   Active functionality 9
                                                ACT_10        : 22u   Active functionality 10
                                                ACT_11        : 23u   Active functionality 11
                                                ACT_12        : 24u   Active functionality 12
                                                ACT_13        : 25u   Active functionality 13
                                                ACT_14        : 26u   Active functionality 14
                                                ACT_15        : 27u   Active functionality 15
                                                DS_4          : 28u   DeepSleep functionality 4
                                                DS_5          : 29u   DeepSleep functionality 5
                                                DS_6          : 30u   DeepSleep functionality 6
                                                DS_7          : 31u   DeepSleep functionality 7 */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit IO1_SEL:5;              /**< \brief [12:8]  Selects connection for IO pin 1 route. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit IO2_SEL:5;              /**< \brief [20:16] Selects connection for IO pin 2 route. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [23:21] \internal Reserved */
    __IO Ifx_UReg_32Bit IO3_SEL:5;              /**< \brief [28:24] Selects connection for IO pin 3 route. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [31:29] \internal Reserved */
} Ifx_HSIOM_PRT_PORT_SEL0_Bits;

/* HSIOM_PRT_PORT_SEL0.IO0_SEL enumerated values */

/** \brief GPIO controls "out" */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_GPIO (0u)

/** \brief GPIO controls "out", DSI controls "output enable" */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_GPIO_DSI (1u)

/** \brief DSI controls "out" and "output enable" */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_DSI_DSI (2u)

/** \brief DSI controls "out", GPIO controls "output enable" */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_DSI_GPIO (3u)

/** \brief Analog mux bus A */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_AMUXA (4u)

/** \brief Analog mux bus B */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_AMUXB (5u)

/** \brief Analog mux bus A, DSI control */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_AMUXA_DSI (6u)

/** \brief Analog mux bus B, DSI control */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_AMUXB_DSI (7u)

/** \brief Active functionality 0 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_0 (8u)

/** \brief Active functionality 1 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_1 (9u)

/** \brief Active functionality 2 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_2 (10u)

/** \brief Active functionality 3 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_3 (11u)

/** \brief DeepSleep functionality 0 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_DS_0 (12u)

/** \brief DeepSleep functionality 1 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_DS_1 (13u)

/** \brief DeepSleep functionality 2 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_DS_2 (14u)

/** \brief DeepSleep functionality 3 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_DS_3 (15u)

/** \brief Active functionality 4 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_4 (16u)

/** \brief Active functionality 5 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_5 (17u)

/** \brief Active functionality 6 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_6 (18u)

/** \brief Active functionality 7 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_7 (19u)

/** \brief Active functionality 8 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_8 (20u)

/** \brief Active functionality 9 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_9 (21u)

/** \brief Active functionality 10 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_10 (22u)

/** \brief Active functionality 11 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_11 (23u)

/** \brief Active functionality 12 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_12 (24u)

/** \brief Active functionality 13 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_13 (25u)

/** \brief Active functionality 14 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_14 (26u)

/** \brief Active functionality 15 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_ACT_15 (27u)

/** \brief DeepSleep functionality 4 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_DS_4 (28u)

/** \brief DeepSleep functionality 5 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_DS_5 (29u)

/** \brief DeepSleep functionality 6 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_DS_6 (30u)

/** \brief DeepSleep functionality 7 */
#define IFX_HSIOM_PRT_PORT_SEL0_IO0_SEL_DS_7 (31u)

/** \brief Port selection 1 */
typedef struct _Ifx_HSIOM_PRT_PORT_SEL1_Bits
{
    __IO Ifx_UReg_32Bit IO4_SEL:5;              /**< \brief [4:0]   Selects connection for IO pin 4 route.
                                                                    See PORT_SEL0 for connection details. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit IO5_SEL:5;              /**< \brief [12:8]  Selects connection for IO pin 5 route. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit IO6_SEL:5;              /**< \brief [20:16] Selects connection for IO pin 6 route. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [23:21] \internal Reserved */
    __IO Ifx_UReg_32Bit IO7_SEL:5;              /**< \brief [28:24] Selects connection for IO pin 7 route. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [31:29] \internal Reserved */
} Ifx_HSIOM_PRT_PORT_SEL1_Bits;

/** \brief Non-Secure Mask */
typedef struct _Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK_Bits
{
    __IO Ifx_UReg_32Bit NONSECURE0:1;           /**< \brief [0:0]   Non-secure attribute for IO0.
                                                                    0 - Allows Secure access only.
                                                                    1 - Allows Non-secure access only. (rw) */
    __IO Ifx_UReg_32Bit NONSECURE1:1;           /**< \brief [1:1]   Non-secure attribute for IO1.
                                                                    0 - Allows Secure access only.
                                                                    1 - Allows Non-secure access only. (rw) */
    __IO Ifx_UReg_32Bit NONSECURE2:1;           /**< \brief [2:2]   Non-secure attribute for IO2.
                                                                    0 - Allows Secure access only.
                                                                    1 - Allows Non-secure access only. (rw) */
    __IO Ifx_UReg_32Bit NONSECURE3:1;           /**< \brief [3:3]   Non-secure attribute for IO3.
                                                                    0 - Allows Secure access only.
                                                                    1 - Allows Non-secure access only. (rw) */
    __IO Ifx_UReg_32Bit NONSECURE4:1;           /**< \brief [4:4]   Non-secure attribute for IO4.
                                                                    0 - Allows Secure access only.
                                                                    1 - Allows Non-secure access only. (rw) */
    __IO Ifx_UReg_32Bit NONSECURE5:1;           /**< \brief [5:5]   Non-secure attribute for IO5.
                                                                    0 - Allows Secure access only.
                                                                    1 - Allows Non-secure access only. (rw) */
    __IO Ifx_UReg_32Bit NONSECURE6:1;           /**< \brief [6:6]   Non-secure attribute for IO6.
                                                                    0 - Allows Secure access only.
                                                                    1 - Allows Non-secure access only. (rw) */
    __IO Ifx_UReg_32Bit NONSECURE7:1;           /**< \brief [7:7]   Non-secure attribute for IO7.
                                                                    0 - Allows Secure access only.
                                                                    1 - Allows Non-secure access only. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_HSIOM_Registers_union
 * \{   */
/** \brief AMUX splitter cell control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_HSIOM_AMUX_SPLIT_CTL_Bits B;            /**< \brief Bitfield access */
} Ifx_HSIOM_AMUX_SPLIT_CTL;

/** \brief Port selection 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_HSIOM_PRT_PORT_SEL0_Bits B;             /**< \brief Bitfield access */
} Ifx_HSIOM_PRT_PORT_SEL0;

/** \brief Port selection 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_HSIOM_PRT_PORT_SEL1_Bits B;             /**< \brief Bitfield access */
} Ifx_HSIOM_PRT_PORT_SEL1;

/** \brief Non-Secure Mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK_Bits B; /**< \brief Bitfield access */
} Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_HSIOM_PRT_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief PRT object */
typedef volatile struct _Ifx_HSIOM_PRT
{
       __IO Ifx_HSIOM_PRT_PORT_SEL0             PORT_SEL0;              /**< \brief 0, Port selection 0*/
       __IO Ifx_HSIOM_PRT_PORT_SEL1             PORT_SEL1;              /**< \brief 4, Port selection 1*/
       __I  Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, */
} Ifx_HSIOM_PRT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_HSIOM_SECURE_PRT_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief SECURE_PRT object */
typedef volatile struct _Ifx_HSIOM_SECURE_PRT
{
       __IO Ifx_HSIOM_SECURE_PRT_NONSECURE_MASK NONSECURE_MASK;         /**< \brief 0, Non-Secure Mask*/
       __I  Ifx_UReg_8Bit                       reserved_4[12];         /**< \brief 4, */
} Ifx_HSIOM_SECURE_PRT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_HSIOM_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief HSIOM object */
typedef volatile struct _Ifx_HSIOM
{
       __IO Ifx_HSIOM_PRT                       PRT[128];               /**< \brief 0, HSIOM port registers*/
       __I  Ifx_UReg_8Bit                       reserved_800[2048];     /**< \brief 800, */
       __IO Ifx_HSIOM_SECURE_PRT                SECURE_PRT[128];        /**< \brief 1000, HSIOM secure attribute port registers*/
       __I  Ifx_UReg_8Bit                       reserved_1800[2048];    /**< \brief 1800, */
       __IO Ifx_HSIOM_AMUX_SPLIT_CTL            AMUX_SPLIT_CTL[64];     /**< \brief 2000, AMUX splitter cell control*/
       __I  Ifx_UReg_8Bit                       reserved_2100[7936];    /**< \brief 2100, */
} Ifx_HSIOM;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXHSIOM_REGDEF_H_ */
