/***************************************************************************//**
* \file IfxIPC_regdef.h
*
* \brief
* IPC Registers
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
* \defgroup IfxSfr_IPC_Registers IPC Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_IPC_Registers_Bitfields Bitfields
* \ingroup IfxSfr_IPC_Registers
*
* \defgroup IfxSfr_IPC_Registers_union Register unions
* \ingroup IfxSfr_IPC_Registers
*
* \defgroup IfxSfr_IPC_Registers_struct Memory map
* \ingroup IfxSfr_IPC_Registers
*
*******************************************************************************/

#ifndef _IFXIPC_REGDEF_H_
#define _IFXIPC_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_IPC_Registers_Bitfields
 * \{  */
/** \brief IPC acquire */
typedef struct _Ifx_IPC_STRUCT_ACQUIRE_Bits
{
    __I  Ifx_UReg_32Bit P:1;                    /**< \brief [0:0]    (r) */
    __I  Ifx_UReg_32Bit NS:1;                   /**< \brief [1:1]    (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __I  Ifx_UReg_32Bit PC:4;                   /**< \brief [7:4]    (r) */
    __I  Ifx_UReg_32Bit MS:8;                   /**< \brief [15:8]  This field specifies the bus master
                                                                    identifier  that successfully acquired the lock. (r) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [30:16] \internal Reserved */
    __I  Ifx_UReg_32Bit SUCCESS:1;              /**< \brief [31:31]  (r) */
} Ifx_IPC_STRUCT_ACQUIRE_Bits;

/** \brief IPC release */
typedef struct _Ifx_IPC_STRUCT_RELEASE_Bits
{
    __O  Ifx_UReg_32Bit INTR_RELEASE:16;        /**< \brief [15:0]  Writing this field releases a lock and
                                                                    allows for the generation of release events to the
                                                                    IPC interrupt structures, but only when the lock is
                                                                    acquired (LOCK_STATUS.ACQUIRED is '1').
                                                                    The IPC release cause fields associated with this
                                                                    IPC structure are set to '1', but only for those
                                                                    IPC interrupt structures for which the
                                                                    corresponding bit field in INTR_RELEASE[] is set to '1'.
                                                                    SW writes a '1' to the bit fields to generate a
                                                                    release event.
                                                                    Due to the transient nature of this event, SW
                                                                    always reads a '0' from this field. (w) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_IPC_STRUCT_RELEASE_Bits;

/** \brief IPC notification */
typedef struct _Ifx_IPC_STRUCT_NOTIFY_Bits
{
    __O  Ifx_UReg_32Bit INTR_NOTIFY:16;         /**< \brief [15:0]  This field allows for the generation of
                                                                    notification events to the IPC interrupt structures.
                                                                    The IPC notification cause fields associated with
                                                                    this IPC structure are set to '1', but only for
                                                                    those IPC interrupt structures for which the
                                                                    corresponding bit field in INTR_NOTIFY[] is set to '1'.
                                                                    SW writes a '1' to the bit fields to generate a
                                                                    notify event.
                                                                    Due to the transient nature of this event, SW
                                                                    always reads a '0' from this field. (w) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_IPC_STRUCT_NOTIFY_Bits;

/** \brief IPC data 0 */
typedef struct _Ifx_IPC_STRUCT_DATA0_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  This field holds a 32-bit data element that
                                                                    is associated with the IPC structure. (rw) */
} Ifx_IPC_STRUCT_DATA0_Bits;

/** \brief IPC data 1 */
typedef struct _Ifx_IPC_STRUCT_DATA1_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  This field holds a 32-bit data element that
                                                                    is associated with the IPC structure. (rw) */
} Ifx_IPC_STRUCT_DATA1_Bits;

/** \brief IPC lock status */
typedef struct _Ifx_IPC_STRUCT_LOCK_STATUS_Bits
{
    __I  Ifx_UReg_32Bit P:1;                    /**< \brief [0:0]    (r) */
    __I  Ifx_UReg_32Bit NS:1;                   /**< \brief [1:1]    (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __I  Ifx_UReg_32Bit PC:4;                   /**< \brief [7:4]    (r) */
    __I  Ifx_UReg_32Bit MS:8;                   /**< \brief [15:8]  This field specifies the bus master
                                                                    identifier that successfully acquired the lock. (r) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [30:16] \internal Reserved */
    __I  Ifx_UReg_32Bit ACQUIRED:1;             /**< \brief [31:31]  (r) */
} Ifx_IPC_STRUCT_LOCK_STATUS_Bits;

/** \brief Interrupt */
typedef struct _Ifx_IPC_INTR_STRUCT_INTR_Bits
{
    __IO Ifx_UReg_32Bit RELEASE:16;             /**< \brief [15:0]  These interrupt cause fields are activated
                                                                    (HW sets the field to '1') when a IPC release event
                                                                    is detected. One bit field for each master.
                                                                    SW writes a '1' to these field to clear the
                                                                    interrupt cause. (rw) */
    __IO Ifx_UReg_32Bit NOTIFY:16;              /**< \brief [31:16] These interrupt cause fields are activated
                                                                    (HW sets the field to '1') when a IPC notification
                                                                    event is detected. One bit field for each master.
                                                                    SW writes a '1' to these field to clear the
                                                                    interrupt cause. (rw) */
} Ifx_IPC_INTR_STRUCT_INTR_Bits;

/** \brief Interrupt set */
typedef struct _Ifx_IPC_INTR_STRUCT_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit RELEASE:16;             /**< \brief [15:0]  SW writes a '1' to this field to set the
                                                                    corresponding field in the INTR register. (rw) */
    __IO Ifx_UReg_32Bit NOTIFY:16;              /**< \brief [31:16] SW writes a '1' to this field to set the
                                                                    corresponding field in the INTR register. (rw) */
} Ifx_IPC_INTR_STRUCT_INTR_SET_Bits;

/** \brief Interrupt mask */
typedef struct _Ifx_IPC_INTR_STRUCT_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit RELEASE:16;             /**< \brief [15:0]  Mask bit for corresponding field in the
                                                                    INTR register. (rw) */
    __IO Ifx_UReg_32Bit NOTIFY:16;              /**< \brief [31:16] Mask bit for corresponding field in the
                                                                    INTR register. (rw) */
} Ifx_IPC_INTR_STRUCT_INTR_MASK_Bits;

/** \brief Interrupt masked */
typedef struct _Ifx_IPC_INTR_STRUCT_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit RELEASE:16;             /**< \brief [15:0]  Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit NOTIFY:16;              /**< \brief [31:16] Logical and of corresponding INTR and
                                                                    INTR_MASK fields. (r) */
} Ifx_IPC_INTR_STRUCT_INTR_MASKED_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_IPC_Registers_union
 * \{   */
/** \brief IPC acquire */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_IPC_STRUCT_ACQUIRE_Bits B;              /**< \brief Bitfield access */
} Ifx_IPC_STRUCT_ACQUIRE;

/** \brief IPC release */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_IPC_STRUCT_RELEASE_Bits B;              /**< \brief Bitfield access */
} Ifx_IPC_STRUCT_RELEASE;

/** \brief IPC notification */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_IPC_STRUCT_NOTIFY_Bits B;               /**< \brief Bitfield access */
} Ifx_IPC_STRUCT_NOTIFY;

/** \brief IPC data 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_IPC_STRUCT_DATA0_Bits B;                /**< \brief Bitfield access */
} Ifx_IPC_STRUCT_DATA0;

/** \brief IPC data 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_IPC_STRUCT_DATA1_Bits B;                /**< \brief Bitfield access */
} Ifx_IPC_STRUCT_DATA1;

/** \brief IPC lock status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_IPC_STRUCT_LOCK_STATUS_Bits B;          /**< \brief Bitfield access */
} Ifx_IPC_STRUCT_LOCK_STATUS;

/** \brief Interrupt */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_IPC_INTR_STRUCT_INTR_Bits B;            /**< \brief Bitfield access */
} Ifx_IPC_INTR_STRUCT_INTR;

/** \brief Interrupt set */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_IPC_INTR_STRUCT_INTR_SET_Bits B;        /**< \brief Bitfield access */
} Ifx_IPC_INTR_STRUCT_INTR_SET;

/** \brief Interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_IPC_INTR_STRUCT_INTR_MASK_Bits B;       /**< \brief Bitfield access */
} Ifx_IPC_INTR_STRUCT_INTR_MASK;

/** \brief Interrupt masked */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_IPC_INTR_STRUCT_INTR_MASKED_Bits B;     /**< \brief Bitfield access */
} Ifx_IPC_INTR_STRUCT_INTR_MASKED;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_IPC_STRUCT_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief STRUCT object */
typedef volatile struct _Ifx_IPC_STRUCT
{
       __I  Ifx_IPC_STRUCT_ACQUIRE              ACQUIRE;                /**< \brief 0, IPC acquire*/
       __O  Ifx_IPC_STRUCT_RELEASE              RELEASE;                /**< \brief 4, IPC release*/
       __O  Ifx_IPC_STRUCT_NOTIFY               NOTIFY;                 /**< \brief 8, IPC notification*/
       __IO Ifx_IPC_STRUCT_DATA0                DATA0;                  /**< \brief C, IPC data 0*/
       __IO Ifx_IPC_STRUCT_DATA1                DATA1;                  /**< \brief 10, IPC data 1*/
       __I  Ifx_UReg_8Bit                       reserved_14[8];         /**< \brief 14, */
       __I  Ifx_IPC_STRUCT_LOCK_STATUS          LOCK_STATUS;            /**< \brief 1C, IPC lock status*/
} Ifx_IPC_STRUCT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_IPC_INTR_STRUCT_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief INTR_STRUCT object */
typedef volatile struct _Ifx_IPC_INTR_STRUCT
{
       __IO Ifx_IPC_INTR_STRUCT_INTR            INTR;                   /**< \brief 0, Interrupt*/
       __IO Ifx_IPC_INTR_STRUCT_INTR_SET        INTR_SET;               /**< \brief 4, Interrupt set*/
       __IO Ifx_IPC_INTR_STRUCT_INTR_MASK       INTR_MASK;              /**< \brief 8, Interrupt mask*/
       __I  Ifx_IPC_INTR_STRUCT_INTR_MASKED     INTR_MASKED;            /**< \brief C, Interrupt masked*/
       __I  Ifx_UReg_8Bit                       reserved_10[16];        /**< \brief 10, */
} Ifx_IPC_INTR_STRUCT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_IPC_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief IPC object */
typedef volatile struct _Ifx_IPC
{
       __IO Ifx_IPC_STRUCT                      STRUCT[16];             /**< \brief 0, IPC structure*/
       __I  Ifx_UReg_8Bit                       reserved_200[3584];     /**< \brief 200, */
       __IO Ifx_IPC_INTR_STRUCT                 INTR_STRUCT[16];        /**< \brief 1000, IPC interrupt structure*/
       __I  Ifx_UReg_8Bit                       reserved_1200[60928];   /**< \brief 1200, */
} Ifx_IPC;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXIPC_REGDEF_H_ */
