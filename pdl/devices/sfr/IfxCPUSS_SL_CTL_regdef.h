/***************************************************************************//**
* \file IfxCPUSS_SL_CTL_regdef.h
*
* \brief
* CPUSS_SL_CTL Registers
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
* \defgroup IfxSfr_CPUSS_SL_CTL_Registers CPUSS_SL_CTL Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_CPUSS_SL_CTL_Registers_Bitfields Bitfields
* \ingroup IfxSfr_CPUSS_SL_CTL_Registers
*
* \defgroup IfxSfr_CPUSS_SL_CTL_Registers_union Register unions
* \ingroup IfxSfr_CPUSS_SL_CTL_Registers
*
* \defgroup IfxSfr_CPUSS_SL_CTL_Registers_struct Memory map
* \ingroup IfxSfr_CPUSS_SL_CTL_Registers
*
*******************************************************************************/

#ifndef _IFXCPUSS_SL_CTL_REGDEF_H_
#define _IFXCPUSS_SL_CTL_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_CPUSS_SL_CTL_Registers_Bitfields
 * \{  */
/** \brief Slave control (Clock enables) */
typedef struct _Ifx_CPUSS_SL_CTL_SL_CTL_Bits
{
    __IO Ifx_UReg_32Bit PROMC_ENABLED:1;        /**< \brief [0:0]   Slave enable controls.
                                                                    Each bit indicates whether the respective slave is
                                                                    enabled or not.
                                                                    0: Disabled
                                                                    1: Enabled
                                                                    If the slave is disabled, its clock is gated off
                                                                    (constant '0').
                                                                    Any access (MMIO AHB access or ROM/System SRAM
                                                                    memory access) to slave  when disabled result in
                                                                    AHB error response. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [1:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit FLASHC_ENABLED:1;       /**< \brief [2:2]    (rw) */
    __IO Ifx_UReg_32Bit RAMC0_ENABLED:1;        /**< \brief [3:3]    (rw) */
    __IO Ifx_UReg_32Bit RAMC1_ENABLED:1;        /**< \brief [4:4]    (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [5:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit DW0_ENABLED:1;          /**< \brief [6:6]    (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [9:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit IPC_ENABLED:1;          /**< \brief [10:10]  (rw) */
    __IO Ifx_UReg_32Bit FAULT_ENABLED:1;        /**< \brief [11:11]  (rw) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_CPUSS_SL_CTL_SL_CTL_Bits;

/** \brief Slave control2 (Reset enables) */
typedef struct _Ifx_CPUSS_SL_CTL_SL_CTL2_Bits
{
    __IO Ifx_UReg_32Bit PROMC_RST:1;            /**< \brief [0:0]   Slave reset controls.
                                                                    Each bit indicates whether the respective slave
                                                                    reset is enabled or not.
                                                                    0: Disabled
                                                                    1: Enabled
                                                                    If the slave is under reset enabled state, its
                                                                    clock is gated off (constant '0') and its resets
                                                                    are in activated state (rst_n = 0)
                                                                    Any access (MMIO AHB access or ROM/System SRAM
                                                                    memory access) to slave  when disabled result in
                                                                    AHB error response. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [1:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit FLASHC_RST:1;           /**< \brief [2:2]    (rw) */
    __IO Ifx_UReg_32Bit RAMC0_RST:1;            /**< \brief [3:3]    (rw) */
    __IO Ifx_UReg_32Bit RAMC1_RST:1;            /**< \brief [4:4]    (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [5:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit DW0_RST:1;              /**< \brief [6:6]    (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [9:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit IPC_RST:1;              /**< \brief [10:10]  (rw) */
    __IO Ifx_UReg_32Bit FAULT_RST:1;            /**< \brief [11:11]  (rw) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_CPUSS_SL_CTL_SL_CTL2_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CPUSS_SL_CTL_Registers_union
 * \{   */
/** \brief Slave control (Clock enables) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_SL_CTL_SL_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_CPUSS_SL_CTL_SL_CTL;

/** \brief Slave control2 (Reset enables) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CPUSS_SL_CTL_SL_CTL2_Bits B;            /**< \brief Bitfield access */
} Ifx_CPUSS_SL_CTL_SL_CTL2;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CPUSS_SL_CTL_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief CPUSS_SL_CTL object */
typedef volatile struct _Ifx_CPUSS_SL_CTL
{
       __IO Ifx_CPUSS_SL_CTL_SL_CTL             SL_CTL;                 /**< \brief 0, Slave control (Clock enables)*/
       __IO Ifx_CPUSS_SL_CTL_SL_CTL2            SL_CTL2;                /**< \brief 4, Slave control2 (Reset enables)*/
       __I  Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, */
} Ifx_CPUSS_SL_CTL;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCPUSS_SL_CTL_REGDEF_H_ */
