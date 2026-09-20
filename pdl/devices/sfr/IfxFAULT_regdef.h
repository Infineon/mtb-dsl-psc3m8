/***************************************************************************//**
* \file IfxFAULT_regdef.h
*
* \brief
* FAULT Registers
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
* \defgroup IfxSfr_FAULT_Registers FAULT Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_FAULT_Registers_Bitfields Bitfields
* \ingroup IfxSfr_FAULT_Registers
*
* \defgroup IfxSfr_FAULT_Registers_union Register unions
* \ingroup IfxSfr_FAULT_Registers
*
* \defgroup IfxSfr_FAULT_Registers_struct Memory map
* \ingroup IfxSfr_FAULT_Registers
*
*******************************************************************************/

#ifndef _IFXFAULT_REGDEF_H_
#define _IFXFAULT_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_FAULT_Registers_Bitfields
 * \{  */
/** \brief Fault control */
typedef struct _Ifx_FAULT_STRUCT_CTL_Bits
{
    __IO Ifx_UReg_32Bit TR_EN:1;                /**< \brief [0:0]   Trigger output enable:
                                                                    '0': Disabled. The trigger output 'tr_fault' is '0'.
                                                                    '1': Enabled.
                                                                    The trigger output 'tr_fault' reflects STATUS.VALID.
                                                                    The trigger can be used to initiate a Datawire
                                                                    transfer of the FAULT data (FAULT_DATA0 through
                                                                    FAULT_DATA3). (rw) */
    __IO Ifx_UReg_32Bit OUT_EN:1;               /**< \brief [1:1]   IO output signal enable:
                                                                    '0': Disabled. The IO output signal 'fault_out' is '0'.
                                                                    The IO output enable signal 'fault_out_en' is '0'.
                                                                    '1': Enabled.
                                                                    The IO output signal 'fault_out' reflects STATUS.VALID.
                                                                    The IO output enable signal 'fault_out_en' is '1'. (rw) */
    __IO Ifx_UReg_32Bit RESET_REQ_EN:1;         /**< \brief [2:2]   Reset request enable:
                                                                    '0': Disabled.
                                                                    '1': Enabled.
                                                                    The output reset request signal 'fault_reset_req'
                                                                    reflects STATUS.VALID.
                                                                    This reset causes a warm/soft/core reset.
                                                                    This warm/soft/core reset does not affect the fault
                                                                    logic STATUS, DATA0, ..., DATA3 registers (allowing
                                                                    for post soft reset failure analysis).
                                                                    The 'fault_reset_req' signals of the individual
                                                                    fault report structures are combined (logically
                                                                    OR'd) into a single SRSS 'fault_reset_req' signal. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_FAULT_STRUCT_CTL_Bits;

/** \brief Fault status */
typedef struct _Ifx_FAULT_STRUCT_STATUS_Bits
{
    __IO Ifx_UReg_32Bit IDX:7;                  /**< \brief [6:0]   The fault source index for which fault
                                                                    information is captured in DATA0 through DATA3.
                                                                    The fault information is fault source specific and
                                                                    described below.
                                                                    Note: this register field (and associated fault
                                                                    source data in DATA0 through DATA3) should only be
                                                                    considered valid, when VALID is '1'.
                                                                    The description of the encoded meaning of this
                                                                    field is comes from the Fault assignment in the
                                                                    Product TRM. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [30:7]  \internal Reserved */
    __IO Ifx_UReg_32Bit VALID:1;                /**< \brief [31:31]  (rw) */
} Ifx_FAULT_STRUCT_STATUS_Bits;

/** \brief Fault data */
typedef struct _Ifx_FAULT_STRUCT_DATA_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Captured fault source data.
                                                                    Note: the DATA registers can only be written when
                                                                    STATUS.VALID is '0'.
                                                                    Note: the fault source index STATUS.IDX specifies
                                                                    the format of the DATA registers. (rw) */
} Ifx_FAULT_STRUCT_DATA_Bits;

/** \brief Fault pending 0 */
typedef struct _Ifx_FAULT_STRUCT_PENDING0_Bits
{
    __I  Ifx_UReg_32Bit SOURCE:32;              /**< \brief [31:0]  This field specifies the fault source.
                                                                    The list of fault sources is in the product.xls in
                                                                    the 'Faults' tab. (r) */
} Ifx_FAULT_STRUCT_PENDING0_Bits;

/** \brief Fault pending 1 */
typedef struct _Ifx_FAULT_STRUCT_PENDING1_Bits
{
    __I  Ifx_UReg_32Bit SOURCE:32;              /**< \brief [31:0]  This field specifies the following sources:
                                                                    Bit 0: Peripheral group 0 PPU.
                                                                    Bit 1: Peripheral group 1 PPU.
                                                                    Bit 2: Peripheral group 2 PPU.
                                                                    Bit 3: Peripheral group 3 PPU.
                                                                    Bit 4: Peripheral group 4 PPU.
                                                                    Bit 5: Peripheral group 5 PPU.
                                                                    Bit 6: Peripheral group 6 PPU.
                                                                    Bit 7: Peripheral group 7 PPU.
                                                                    ...
                                                                    Bit 15: Peripheral group 15 PPU.
                                                                    Bit 16 - 31: See STATUS register. (r) */
} Ifx_FAULT_STRUCT_PENDING1_Bits;

/** \brief Fault pending 2 */
typedef struct _Ifx_FAULT_STRUCT_PENDING2_Bits
{
    __I  Ifx_UReg_32Bit SOURCE:32;              /**< \brief [31:0]  This field specifies the following sources:
                                                                    Bit 0 - 31: See STATUS register. (r) */
} Ifx_FAULT_STRUCT_PENDING2_Bits;

/** \brief Fault mask 0 */
typedef struct _Ifx_FAULT_STRUCT_MASK0_Bits
{
    __IO Ifx_UReg_32Bit SOURCE:32;              /**< \brief [31:0]  Fault source enables:
                                                                    Bits 31-0: Fault sources 31 to 0. (rw) */
} Ifx_FAULT_STRUCT_MASK0_Bits;

/** \brief Fault mask 1 */
typedef struct _Ifx_FAULT_STRUCT_MASK1_Bits
{
    __IO Ifx_UReg_32Bit SOURCE:32;              /**< \brief [31:0]  Fault source enables:
                                                                    Bits 31-0: Fault sources 63 to 32. (rw) */
} Ifx_FAULT_STRUCT_MASK1_Bits;

/** \brief Fault mask 2 */
typedef struct _Ifx_FAULT_STRUCT_MASK2_Bits
{
    __IO Ifx_UReg_32Bit SOURCE:32;              /**< \brief [31:0]  Fault source enables:
                                                                    Bits 31-0: Fault sources 95 to 64. (rw) */
} Ifx_FAULT_STRUCT_MASK2_Bits;

/** \brief Interrupt */
typedef struct _Ifx_FAULT_STRUCT_INTR_Bits
{
    __IO Ifx_UReg_32Bit _FAULT:1;               /**< \brief [0:0]   This interrupt cause field is activated (HW
                                                                    sets the field to '1') when an enabled
                                                                    (MASK0/MASK1/MASK2) pending fault source is
                                                                    captured:
                                                                    - STATUS.VALID is set to '1'.
                                                                    - STATUS.IDX specifies the fault source index.
                                                                    - DATA0 through DATA3 captures the fault source data.
                                                                    SW writes a '1' to this field to clear the
                                                                    interrupt cause to '0'.
                                                                    SW clear STATUS.VALID to '0' to enable capture of
                                                                    the next fault.
                                                                    Note that when there is an enabled pending fault
                                                                    source, the pending fault source is captured
                                                                    immediately and INTR.FAULT is immediately activated
                                                                    (set to '1'). (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FAULT_STRUCT_INTR_Bits;

/** \brief Interrupt set */
typedef struct _Ifx_FAULT_STRUCT_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit _FAULT:1;               /**< \brief [0:0]   SW writes a '1' to this field to set the
                                                                    corresponding field in the INTR register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FAULT_STRUCT_INTR_SET_Bits;

/** \brief Interrupt mask */
typedef struct _Ifx_FAULT_STRUCT_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit _FAULT:1;               /**< \brief [0:0]   Mask bit for corresponding field in the
                                                                    INTR register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FAULT_STRUCT_INTR_MASK_Bits;

/** \brief Interrupt masked */
typedef struct _Ifx_FAULT_STRUCT_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit _FAULT:1;               /**< \brief [0:0]   Logical and of corresponding INTR and
                                                                    INTR_MASK fields. (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_FAULT_STRUCT_INTR_MASKED_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_FAULT_Registers_union
 * \{   */
/** \brief Fault control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_CTL_Bits B;                /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_CTL;

/** \brief Fault status */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_STATUS_Bits B;             /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_STATUS;

/** \brief Fault data */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_DATA_Bits B;               /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_DATA;

/** \brief Fault pending 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_PENDING0_Bits B;           /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_PENDING0;

/** \brief Fault pending 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_PENDING1_Bits B;           /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_PENDING1;

/** \brief Fault pending 2 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_PENDING2_Bits B;           /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_PENDING2;

/** \brief Fault mask 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_MASK0_Bits B;              /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_MASK0;

/** \brief Fault mask 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_MASK1_Bits B;              /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_MASK1;

/** \brief Fault mask 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_MASK2_Bits B;              /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_MASK2;

/** \brief Interrupt */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_INTR_Bits B;               /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_INTR;

/** \brief Interrupt set */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_INTR_SET_Bits B;           /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_INTR_SET;

/** \brief Interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_INTR_MASK_Bits B;          /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_INTR_MASK;

/** \brief Interrupt masked */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_FAULT_STRUCT_INTR_MASKED_Bits B;        /**< \brief Bitfield access */
} Ifx_FAULT_STRUCT_INTR_MASKED;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_FAULT_STRUCT_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief STRUCT object */
typedef volatile struct _Ifx_FAULT_STRUCT
{
       __IO Ifx_FAULT_STRUCT_CTL                CTL;                    /**< \brief 0, Fault control*/
       __I  Ifx_UReg_8Bit                       reserved_4[8];          /**< \brief 4, */
       __IO Ifx_FAULT_STRUCT_STATUS             STATUS;                 /**< \brief C, Fault status*/
       __IO Ifx_FAULT_STRUCT_DATA               DATA[4];                /**< \brief 10, Fault data*/
       __I  Ifx_UReg_8Bit                       reserved_20[32];        /**< \brief 20, */
       __I  Ifx_FAULT_STRUCT_PENDING0           PENDING0;               /**< \brief 40, Fault pending 0*/
       __I  Ifx_FAULT_STRUCT_PENDING1           PENDING1;               /**< \brief 44, Fault pending 1*/
       __I  Ifx_FAULT_STRUCT_PENDING2           PENDING2;               /**< \brief 48, Fault pending 2*/
       __I  Ifx_UReg_8Bit                       reserved_4C[4];         /**< \brief 4C, */
       __IO Ifx_FAULT_STRUCT_MASK0              MASK0;                  /**< \brief 50, Fault mask 0*/
       __IO Ifx_FAULT_STRUCT_MASK1              MASK1;                  /**< \brief 54, Fault mask 1*/
       __IO Ifx_FAULT_STRUCT_MASK2              MASK2;                  /**< \brief 58, Fault mask 2*/
       __I  Ifx_UReg_8Bit                       reserved_5C[100];       /**< \brief 5C, */
       __IO Ifx_FAULT_STRUCT_INTR               INTR;                   /**< \brief C0, Interrupt*/
       __IO Ifx_FAULT_STRUCT_INTR_SET           INTR_SET;               /**< \brief C4, Interrupt set*/
       __IO Ifx_FAULT_STRUCT_INTR_MASK          INTR_MASK;              /**< \brief C8, Interrupt mask*/
       __I  Ifx_FAULT_STRUCT_INTR_MASKED        INTR_MASKED;            /**< \brief CC, Interrupt masked*/
       __I  Ifx_UReg_8Bit                       reserved_D0[48];        /**< \brief D0, */
} Ifx_FAULT_STRUCT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_FAULT_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief FAULT object */
typedef volatile struct _Ifx_FAULT
{
       __IO Ifx_FAULT_STRUCT                    STRUCT[4];              /**< \brief 0, Fault structure*/
       __I  Ifx_UReg_8Bit                       reserved_400[64512];    /**< \brief 400, */
} Ifx_FAULT;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXFAULT_REGDEF_H_ */
