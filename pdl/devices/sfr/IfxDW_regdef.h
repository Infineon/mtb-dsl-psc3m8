/***************************************************************************//**
* \file IfxDW_regdef.h
*
* \brief
* DW Registers
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
* \defgroup IfxSfr_DW_Registers DW Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_DW_Registers_Bitfields Bitfields
* \ingroup IfxSfr_DW_Registers
*
* \defgroup IfxSfr_DW_Registers_union Register unions
* \ingroup IfxSfr_DW_Registers
*
* \defgroup IfxSfr_DW_Registers_struct Memory map
* \ingroup IfxSfr_DW_Registers
*
*******************************************************************************/

#ifndef _IFXDW_REGDEF_H_
#define _IFXDW_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_DW_Registers_Bitfields
 * \{  */
/** \brief Control */
typedef struct _Ifx_DW_CTL_Bits
{
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [30:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [31:31] IP enable:
                                                                    '0': Disabled.
                                                                    Disabling the IP activates the IP's Active logic
                                                                    reset: Active logic and non-retention MMIO
                                                                    registers are reset (retention MMIO registers are
                                                                    not affected).
                                                                    Note that DW SRAM writes/reads are possible when
                                                                    ENABLED=0 also.
                                                                    '1': Enabled. (rw) */
} Ifx_DW_CTL_Bits;

/** \brief Status */
typedef struct _Ifx_DW_STATUS_Bits
{
    __I  Ifx_UReg_32Bit P:1;                    /**< \brief [0:0]   Active channel, user/privileged access control:
                                                                    '0': user mode.
                                                                    '1': privileged mode. (r) */
    __I  Ifx_UReg_32Bit NS:1;                   /**< \brief [1:1]   Active channel, secure/non-secure access control:
                                                                    '0': secure.
                                                                    '1': non-secure. (r) */
    __I  Ifx_UReg_32Bit B:1;                    /**< \brief [2:2]   Active channel, non-bufferable/bufferable
                                                                    access control:
                                                                    '0': non-bufferable
                                                                    '1': bufferable. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __I  Ifx_UReg_32Bit PC:4;                   /**< \brief [7:4]   Active channel protection context. (r) */
    __I  Ifx_UReg_32Bit PRIO:2;                 /**< \brief [9:8]   Active channel priority. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [10:10] \internal Reserved */
    __I  Ifx_UReg_32Bit PREEMPTABLE:1;          /**< \brief [11:11] Active channel preemptable. (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __I  Ifx_UReg_32Bit CH_IDX:9;               /**< \brief [24:16] Active channel index. (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [27:25] \internal Reserved */
    __I  Ifx_UReg_32Bit STATE:3;                /**< \brief [30:28] State of the DW controller.
                                                                    '0': Default/inactive state.
                                                                    '1': Loading descriptor.
                                                                    '2': Loading data element from source location.
                                                                    '3': Storing data element to destination location.
                                                                    '4': CRC functionality (only used for CRC transfer
                                                                    descriptor type).
                                                                    '5': Update of active control information (e.g.
                                                                    source and destination addresses) and wait for
                                                                    trigger de-activation.
                                                                    '6': Error. (r) */
    __I  Ifx_UReg_32Bit ACTIVE:1;               /**< \brief [31:31] Active channel present:
                                                                    '0': No.
                                                                    '1': Yes. (r) */
} Ifx_DW_STATUS_Bits;

/** \brief Active descriptor control */
typedef struct _Ifx_DW_ACT_DESCR_CTL_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Copy of DESCR_CTL of the currently active
                                                                    descriptor.
                                                                    [1:0] WAIT_FOR_DEACT
                                                                    Specifies whether the controller should wait for
                                                                    the input trigger to be deactivated; i.e.
                                                                    the selected system trigger is not active.
                                                                    This field is used to synchronize the controller
                                                                    with the agent that generated the trigger.
                                                                    This field is ONLY used at the completion of the
                                                                    transfer as specified by TR_IN.
                                                                    E.g., a TX FIFO indicates that it is empty and it
                                                                    needs a new data sample.
                                                                    The agent removes the trigger ONLY when the data
                                                                    sample has been written by the controller AND
                                                                    received by the agent.
                                                                    Furthermore, the agent's trigger may be delayed by
                                                                    a few cycles before it reaches the controller.
                                                                    This field is used for level sensitive trigger,
                                                                    which reflect state (pulse sensitive triggers
                                                                    should have this field set to '0').
                                                                    The wait cycles incurred by this field reduce DW
                                                                    controller performance.
                                                                    '0': Do not wait for trigger de-activation (for
                                                                    pulse sensitive triggers).
                                                                    '1': Wait for up to 4 cycles.
                                                                    '2': Wait for up to 16 cycles.
                                                                    '3': Wait indefinitely.
                                                                    This option may result in controller lockup if the
                                                                    trigger is not de-activated.
                                                                    [3:2] INTR_TYPE
                                                                    Specifies the input trigger type (not to be
                                                                    confused with the descriptor type):
                                                                    '0': A trigger results in the execution of a single
                                                                    transfer.
                                                                    The descriptor type can be single, 1D or 2D.
                                                                    '1': A trigger results in the execution of a single
                                                                    1D transfer.
                                                                    - If the descriptor type is 'single', the trigger
                                                                    results in the execution of a single transfer.
                                                                    - If the descriptor type is '1D' or '2D', the
                                                                    trigger results in the execution of a 1D transfer.
                                                                    '2': A trigger results in the execution of the
                                                                    current descriptor.
                                                                    '3': A trigger results in the execution of the
                                                                    current descriptor and continues (without requiring
                                                                    another input trigger) with the execution of the
                                                                    next descriptor using the next descriptor's
                                                                    information.
                                                                    [5:4] TR_OUT_TYPE
                                                                    Specifies when an output trigger is generated:
                                                                    '0': An output trigger is generated after a single
                                                                    transfer.
                                                                    '1': An output trigger is generated after a single
                                                                    1D transfer.
                                                                    - If the descriptor type is 'single', the output
                                                                    trigger is generated after a single transfer.
                                                                    - If the descriptor type is '1D', 'CRC' or '2D',
                                                                    the output trigger is generated after the execution
                                                                    of a 1D transfer.
                                                                    '2': An output trigger is generated after the
                                                                    execution of the current descriptor.
                                                                    '3': An output trigger is generated after the
                                                                    execution of a descriptor list: after the execution
                                                                    of the current descriptor AND the current
                                                                    descriptor DESCR_NEXT_PTR.ADDR is '0'.
                                                                    [7:6] TR_IN_TYPE
                                                                    Specifies the input trigger type (not to be
                                                                    confused with the descriptor type):
                                                                    '0': A trigger results in the execution of a single
                                                                    transfer.
                                                                    The descriptor type can be single, 1D or 2D.
                                                                    '1': A trigger results in the execution of a single
                                                                    1D transfer.
                                                                    - If the descriptor type is 'single', the trigger
                                                                    results in the execution of a single transfer.
                                                                    - If the descriptor type is '1D' or '2D', the
                                                                    trigger results in the execution of a 1D transfer.
                                                                    '2': A trigger results in the execution of the
                                                                    current descriptor.
                                                                    '3': A trigger results in the execution of the
                                                                    current descriptor and continues (without requiring
                                                                    another input trigger) with the execution of the
                                                                    next descriptor using the next descriptor's
                                                                    information.
                                                                    [24] CH_DISABLE
                                                                    Specifies whether the channel is disabled or not
                                                                    after completion of the current descriptor
                                                                    (independent of the value of the DESCR_NEXT_PTR value):
                                                                    '0': Channel is not disabled.
                                                                    '1': Channel is disabled.
                                                                    Note: a disabled channel will ignore its input trigger.
                                                                    [26] SRC_TRANSFER_SIZE
                                                                    Specifies the bus transfer size to the source
                                                                    location:
                                                                    '0': As specified by DATA_SIZE.
                                                                    '1': Word (32 bits).
                                                                    Distinguishing bus transfer size from data element
                                                                    size allows for source components with data
                                                                    elements that are smaller than their 32-bit bus
                                                                    interface width.
                                                                    E.g., an ADC source has a 32-bit bus transfer size,
                                                                    but only provides a 16-bit data element.
                                                                    [27] DST_TRANSFER_SIZE
                                                                    Specifies the bus transfer size to the destination
                                                                    location:
                                                                    '0': As specified by DATA_SIZE.
                                                                    '1': Word (32 bits).
                                                                    Distinguishing bus transfer size from data element
                                                                    size allows for destination components with data
                                                                    elements that are smaller than their 32-bit bus
                                                                    interface width.
                                                                    E.g., a DAC destination has a 32-bit bus transfer
                                                                    size, but only requires a 16-bit data element.
                                                                    [29:28] DATA_SIZE
                                                                    Specifies the data element size:
                                                                    '0': Byte (8 bits).
                                                                    '1': Halfword (16 bits).
                                                                    '2': Word (32 bits).
                                                                    DATA_SIZE, SRC_TRANSFER_SIZE and DST_TRANSFER_SIZE
                                                                    together determine how data elements are transferred.
                                                                    The following are the 9 legal settings:
                                                                    - DATA is 8 bit, SRC is 8 bit, DST is 8 bit.
                                                                    - DATA is 8 bit, SRC is 32 bit (higher 24 bits are
                                                                    dropped), DST is 8 bit.
                                                                    - DATA is 8 bit, SRC is 8 bit, DST is 32 bit
                                                                    (higher 24 bits are made '0').
                                                                    - DATA is 8 bit, SRC is 32 bit (higher 24 bits are
                                                                    dropped), DST is 32 bit (higher 24 bits are made '0').
                                                                    - DATA is 16 bit, SRC is 16 bit, DST is 16 bit.
                                                                    - DATA is 16 bit, SRC is 32 bit (higher 16 bits are
                                                                    dropped), DST is 16 bit.
                                                                    - DATA is 16 bit, SRC is 16 bit, DST is 32 bit
                                                                    (higher 16 bits are made '0').
                                                                    - DATA is 16 bit, SRC is 32 bit (higher 16 bits are
                                                                    dropped), DST is 32 bit (higher 16 bits are made '0').
                                                                    - DATA is 32 bit, SRC is 32 bit, DST is 32 bit.
                                                                    [31:30] DESCR_TYPE
                                                                    Specifies the descriptor type (not to be confused
                                                                    with the trigger type):
                                                                    '0': Single transfer.
                                                                    The DESCR_X_CTL and DESCR_Y_CTL registers are not
                                                                    present and DESCR_NEXT_PTR is at offset 0x0c.
                                                                    '1': 1D transfer.
                                                                    The DESCR_X_CTL register is present, the
                                                                    DESCR_Y_CTL is not present and DESCR_NEXT_PTR is at
                                                                    offset 0x10.
                                                                    A 1D transfer consists out of DESCR_X_CTL.X_COUNT
                                                                    single transfers.
                                                                    '2': 2D transfer.
                                                                    The DESCR_X_CTL and DESCR_Y_CTL registers are
                                                                    present and DESCR_NEXT_PTR is at offset 0x14.
                                                                    A 2D transfer consists of
                                                                    DESCR_X_CTL.X_COUNT*DESCR_Y_CTL.Y_COUNT single
                                                                    transfers.
                                                                    '3': CRC transfer.
                                                                    The DESCR_X_CTL register is present, theDESCR_Y_CTL
                                                                    is not present and DESCR_NEXT_PTR is at offset 0x10.
                                                                    A CRC transfer consists out of DESCR_X_CTL.X_COUNT
                                                                    single transfers.
                                                                    After the execution of the current descriptor, the
                                                                    DESCR_NEXT_PTR address is copied to the channel's
                                                                    CH_CURR_PTR address and CH_STATUS.X_IDX and
                                                                    CH_STATUS.Y_IDX are set to '0'. (r) */
} Ifx_DW_ACT_DESCR_CTL_Bits;

/** \brief Active descriptor source */
typedef struct _Ifx_DW_ACT_DESCR_SRC_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Copy of DESCR_SRC of the currently active
                                                                    descriptor.
                                                                    Base address of source location. (r) */
} Ifx_DW_ACT_DESCR_SRC_Bits;

/** \brief Active descriptor destination */
typedef struct _Ifx_DW_ACT_DESCR_DST_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Copy of DESCR_DST of the currently active
                                                                    descriptor.
                                                                    Base address of destination location.
                                                                    Note: For a CRC transfer descriptor, this field
                                                                    should be programmed with the address of the
                                                                    CRC_LFSR_CTL register.
                                                                    The calculated CRC LFSR state is written to this
                                                                    address (through the CRYPTO AHB-Lite master
                                                                    interface) when the input trigger is processed.
                                                                    The write transfer will be submitted to the CPUSS
                                                                    and PERI protection schemes. (r) */
} Ifx_DW_ACT_DESCR_DST_Bits;

/** \brief Active descriptor X loop control */
typedef struct _Ifx_DW_ACT_DESCR_X_CTL_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Copy of DESCR_X_CTL of the currently active
                                                                    descriptor.
                                                                    [11:0] SRC_X_INCR
                                                                    Specifies increment of source address for each X
                                                                    loop iteration (in multiples of SRC_TRANSFER_SIZE).
                                                                    This field is a signed number in the range [-2048, 2047].
                                                                    If this field is '0', the source address is not
                                                                    incremented.
                                                                    This is useful for reading from RX FIFO structures.
                                                                    [23:12] DST_X_INCR
                                                                    Specifies increment of destination address for each
                                                                    X loop iteration (in multiples of DST_TRANSFER_SIZE).
                                                                    This field is a signed number in the range [-2048, 2047].
                                                                    If this field is '0', the destination address is
                                                                    not incremented.
                                                                    This is useful for writing to TX FIFO structures.
                                                                    Note: this field is not used for CRC transfer
                                                                    descriptors and must be set to '0'.
                                                                    [31:24] X_COUNT
                                                                    Number of iterations (minus 1) of the 'X loop'
                                                                    (X_COUNT+1 is the number of single transfers in a
                                                                    1D transfer).
                                                                    This field is an unsigned number in the range [0,
                                                                    255], representing 1 through 256 iterations.
                                                                    For a single transfer descriptor type, descriptor
                                                                    will not have X_CTL. (r) */
} Ifx_DW_ACT_DESCR_X_CTL_Bits;

/** \brief Active descriptor Y loop control */
typedef struct _Ifx_DW_ACT_DESCR_Y_CTL_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Copy of DESCR_Y_CTL of the currently active
                                                                    descriptor.
                                                                    [11:0] SRC_Y_INCR
                                                                    Specifies increment of source address for each Y
                                                                    loop iteration (in multiples of SRC_TRANSFER_SIZE).
                                                                    This field is a signed number in the range [-2048, 2047].
                                                                    [23:12] DST_Y_INCR
                                                                    Specifies increment of destination address for each
                                                                    Y loop iteration (in multiples of DST_TRANSFER_SIZE).
                                                                    This field is a signed number in the range [-2048, 2047].
                                                                    [31:24] Y_COUNT
                                                                    Number of iterations (minus 1) of the 'Y loop'
                                                                    (X_COUNT+1)*(Y_COUNT+1) is the number of single
                                                                    transfers in a 2D transfer).
                                                                    This field is an unsigned number in the range [0,
                                                                    255], representing 1 through 256 iterations.
                                                                    For single, 1D and CRC transfer descriptor types,
                                                                    descriptor will not have Y_CTL. (r) */
} Ifx_DW_ACT_DESCR_Y_CTL_Bits;

/** \brief Active descriptor next pointer */
typedef struct _Ifx_DW_ACT_DESCR_NEXT_PTR_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit ADDR:30;                /**< \brief [31:2]  Copy of DESCR_NEXT_PTR of the currently
                                                                    active descriptor.
                                                                    [31:2] ADDR
                                                                    Address of next descriptor in descriptor list.
                                                                    When this field is '0', this is the last descriptor
                                                                    in the descriptor list. (r) */
} Ifx_DW_ACT_DESCR_NEXT_PTR_Bits;

/** \brief Active source */
typedef struct _Ifx_DW_ACT_SRC_Bits
{
    __I  Ifx_UReg_32Bit SRC_ADDR:32;            /**< \brief [31:0]  Current address of source location. (r) */
} Ifx_DW_ACT_SRC_Bits;

/** \brief Active destination */
typedef struct _Ifx_DW_ACT_DST_Bits
{
    __I  Ifx_UReg_32Bit DST_ADDR:32;            /**< \brief [31:0]  Current address of destination location. (r) */
} Ifx_DW_ACT_DST_Bits;

/** \brief CRC control */
typedef struct _Ifx_DW_CRC_CTL_Bits
{
    __IO Ifx_UReg_32Bit DATA_REVERSE:1;         /**< \brief [0:0]   Specifies the bit order in which a data
                                                                    Byte is processed (reversal is performed after XORing):
                                                                    '0': Most significant bit (bit 1) first.
                                                                    '1': Least significant bit (bit 0) first. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [7:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit REM_REVERSE:1;          /**< \brief [8:8]   Specifies whether the remainder is bit
                                                                    reversed (reversal is performed after XORing):
                                                                    '0': No.
                                                                    '1': Yes. (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_DW_CRC_CTL_Bits;

/** \brief CRC data control */
typedef struct _Ifx_DW_CRC_DATA_CTL_Bits
{
    __IO Ifx_UReg_32Bit DATA_XOR:8;             /**< \brief [7:0]   Specifies a byte mask with which each data
                                                                    byte is XOR'd. The XOR is performed before data reversal. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_DW_CRC_DATA_CTL_Bits;

/** \brief CRC polynomial control */
typedef struct _Ifx_DW_CRC_POL_CTL_Bits
{
    __IO Ifx_UReg_32Bit POLYNOMIAL:32;          /**< \brief [31:0]  CRC polynomial.
                                                                    The polynomial is represented WITHOUT the high
                                                                    order bit (this bit is always assumed '1').
                                                                    The polynomial should be aligned/shifted such that
                                                                    the more significant bits (bit 31 and down) contain
                                                                    the polynomial and the less significant bits (bit 0
                                                                    and up) contain padding '0's.
                                                                    Some frequently used polynomials:
                                                                    - CRC32: POLYNOMIAL is 0x04c11db7 (x^32 + x^26 +
                                                                    x^23 + x^22 + x^16 + x^12 + x^11 + x^10 + x^8 + x^7
                                                                    + x^5 + x^4 + x^2 + x + 1).
                                                                    - CRC16: POLYNOMIAL is 0x80050000 (x^16 + x^15 +
                                                                    x^2 + 1, shifted by 16 bit positions).
                                                                    - CRC16 CCITT: POLYNOMIAL is 0x10210000 (x^16 +
                                                                    x^12 + x^5 + 1, shifted by 16 bit positions). (rw) */
} Ifx_DW_CRC_POL_CTL_Bits;

/** \brief CRC LFSR control */
typedef struct _Ifx_DW_CRC_LFSR_CTL_Bits
{
    __IO Ifx_UReg_32Bit LFSR32:32;              /**< \brief [31:0]  State of a 32-bit Linear Feedback Shift
                                                                    Registers (LFSR) that is used to implement CRC.
                                                                    This register needs to be initialized by SW to
                                                                    provide the CRC seed value.
                                                                    The seed value should be aligned such that the more
                                                                    significant bits (bit 31 and down) contain the seed
                                                                    value and the less significant bits (bit 0 and up)
                                                                    contain padding '0's.
                                                                    Note that SW can write this field.
                                                                    This functionality can be used prevent information
                                                                    leakage (through either CRC_LFSR_CTL or CRC_REM_RESULT). (rw) */
} Ifx_DW_CRC_LFSR_CTL_Bits;

/** \brief CRC remainder control */
typedef struct _Ifx_DW_CRC_REM_CTL_Bits
{
    __IO Ifx_UReg_32Bit REM_XOR:32;             /**< \brief [31:0]  Specifies a mask with which the
                                                                    CRC_LFSR_CTL.LFSR32 register is XOR'd to produce a
                                                                    remainder. The XOR is performed before remainder reversal. (rw) */
} Ifx_DW_CRC_REM_CTL_Bits;

/** \brief CRC remainder result */
typedef struct _Ifx_DW_CRC_REM_RESULT_Bits
{
    __I  Ifx_UReg_32Bit REM:32;                 /**< \brief [31:0]  Remainder value.
                                                                    The alignment of the remainder depends on
                                                                    CRC_REM_CTL0.REM_REVERSE:
                                                                    '0': the more significant bits (bit 31 and down)
                                                                    contain the remainder.
                                                                    '1': the less significant bits (bit 0 and up)
                                                                    contain the remainder.
                                                                    Note: This field is combinatorially derived from
                                                                    CRC_LFSR_CTL.LFSR32, CRC_CTL.REM_REVERSE and
                                                                    CRC_REM_CTL.REM_XOR. (r) */
} Ifx_DW_CRC_REM_RESULT_Bits;

/** \brief Channel control */
typedef struct _Ifx_DW_CH_STRUCT_CH_CTL_Bits
{
    __IO Ifx_UReg_32Bit P:1;                    /**< \brief [0:0]   User/privileged access control:
                                                                    '0': user mode.
                                                                    '1': privileged mode.
                                                                    This field is set with the user/privileged access
                                                                    control of the transaction that writes this register; i.e.
                                                                    the 'write data' is ignored and instead the access
                                                                    control is inherited from the write transaction
                                                                    (note the field attributes should be HW:RW, SW:R).
                                                                    All transactions for this channel use the P field
                                                                    for the user/privileged access control ('hprot[1]'). (rw) */
    __IO Ifx_UReg_32Bit NS:1;                   /**< \brief [1:1]   Secure/on-secure access control:
                                                                    '0': secure.
                                                                    '1': non-secure.
                                                                    This field is set with the secure/non-secure access
                                                                    control of the transaction that writes this register; i.e.
                                                                    the 'write data' is ignored and instead the access
                                                                    control is inherited from the write transaction
                                                                    (note the field attributes should be HW:RW, SW:R).
                                                                    All transactions for this channel use the NS field
                                                                    for the secure/non-secure access control ('hnonsec'). (rw) */
    __IO Ifx_UReg_32Bit B:1;                    /**< \brief [2:2]   Non-bufferable/bufferable access control:
                                                                    '0': non-bufferable.
                                                                    '1': bufferable.
                                                                    This field is used to indicate to an AMBA bridge
                                                                    that a write transaction can complete without
                                                                    waiting for the destination to accept the write
                                                                    transaction data.
                                                                    All transactions for this channel uses the B field
                                                                    for the non-bufferable/bufferable access control
                                                                    ('hprot[2]'). (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit PC:4;                   /**< \brief [7:4]   Protection context.
                                                                    This field is set with the protection context of
                                                                    the transaction that writes this register;  i.e.
                                                                    the 'write data' is ignored and instead the context
                                                                    is inherited from the write transaction (note the
                                                                    field attributes should be HW:RW, SW:R).
                                                                    All transactions for this channel uses the PC field
                                                                    for the protection context.
                                                                    Note: protection context (PC) is routed on 'hauser'
                                                                    bus of the AHB5 bus. (rw) */
    __IO Ifx_UReg_32Bit PRIO:2;                 /**< \brief [9:8]   Channel priority:
                                                                    '0': highest priority.
                                                                    '1'
                                                                    '2'
                                                                    '3': lowest priority.
                                                                    Channels with the same priority constitute a
                                                                    priority group.
                                                                    Priority decoding determines the highest priority
                                                                    pending channel. This channel is determined as follows.
                                                                    First, the highest priority group with pending
                                                                    channels is identified.
                                                                    Second, within this priority group, round robin
                                                                    arbitration is applied.
                                                                    Round robin arbitration (within a priority group)
                                                                    gives the highest priority to the lower channel
                                                                    indices (within the priority group). (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [10:10] \internal Reserved */
    __IO Ifx_UReg_32Bit PREEMPTABLE:1;          /**< \brief [11:11] Specifies if the channel is preemptable.
                                                                    '0': Not preemptable.
                                                                    '1': Preemptable.
                                                                    This field allows higher priority pending channels
                                                                    (from a higher priority group; i.e.
                                                                    an active channel can NOT be preempted by a pending
                                                                    channel in the same priority group) to preempt the
                                                                    active channel in between 'single transfers' (a 1D
                                                                    transfer consists out of X_COUNT single transfers;
                                                                    a 2D transfer consists out of X_COUNT*Y_COUNT
                                                                    single transfers).
                                                                    Preemption will NOT affect the pending status of channel.
                                                                    As a result, after completion of a higher priority
                                                                    activated channel, the current channel may be reactivated. (rw) */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [30:12] \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [31:31] Channel enable:
                                                                    '0': Disabled.
                                                                    The channel's trigger is ignored and the channel
                                                                    cannot be made pending and therefore cannot be made active.
                                                                    If a pending channel is disabled, the channel is
                                                                    made non pending.
                                                                    If the activate channel is disabled, the channel is
                                                                    de-activated (bus transactions are completed).
                                                                    '1': Enabled.
                                                                    SW sets this field to '1' to enable a specific channel.
                                                                    HW sets this field to '0' on an error interrupt
                                                                    cause (the specific error is specified by
                                                                    CH_STATUS.INTR_CAUSE). (rw) */
} Ifx_DW_CH_STRUCT_CH_CTL_Bits;

/** \brief Channel status */
typedef struct _Ifx_DW_CH_STRUCT_CH_STATUS_Bits
{
    __I  Ifx_UReg_32Bit INTR_CAUSE:4;           /**< \brief [3:0]   Specifies the source of the interrupt cause:
                                                                    '0': NO_INTR
                                                                    '1': COMPLETION
                                                                    '2': SRC_BUS_ERROR
                                                                    '3': DST_BUS_ERROR
                                                                    '4': SRC_MISAL
                                                                    '5': DST_MISAL
                                                                    '6': CURR_PTR_NULL
                                                                    '7': ACTIVE_CH_DISABLED
                                                                    '8': DESCR_BUS_ERROR
                                                                    '9'-'15': Not used.
                                                                    For error related interrupt causes (INTR_CAUSE is
                                                                    '2', '3', ..., '8'), the channel is disabled (HW
                                                                    sets CH_CTL.ENABLED to '0'). (r) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [30:4]  \internal Reserved */
    __I  Ifx_UReg_32Bit PENDING:1;              /**< \brief [31:31] Specifies pending DW channels; i.e.
                                                                    enabled channels whose trigger got activated.
                                                                    This field includes all channels that are in the
                                                                    pending state (not scheduled) or active state
                                                                    (scheduled and performing data transfer(s)). (r) */
} Ifx_DW_CH_STRUCT_CH_STATUS_Bits;

/** \brief Channel current indices */
typedef struct _Ifx_DW_CH_STRUCT_CH_IDX_Bits
{
    __IO Ifx_UReg_32Bit X_IDX:8;                /**< \brief [7:0]   Specifies the X loop index.
                                                                    In the range of [0, X_COUNT], with X_COUNT taken
                                                                    from the current descriptor.
                                                                    Note: HW sets this field to '0' when it updates the
                                                                    current descriptor pointer CH_CURR_PTR with
                                                                    DESCR_NEXT_PTR after execution of the current
                                                                    descriptor.
                                                                    Note: SW should set this field to '0' when it
                                                                    updates CH_CURR_PTR. (rw) */
    __IO Ifx_UReg_32Bit Y_IDX:8;                /**< \brief [15:8]  Specifies the Y loop index, with X_COUNT
                                                                    taken from the current descriptor.
                                                                    Note: HW sets this field to '0' when it updates the
                                                                    current descriptor pointer CH_CURR_PTR with
                                                                    DESCR_NEXT_PTR after execution of the current
                                                                    descriptor.
                                                                    Note: SW should set this field to '0' when it
                                                                    updates CH_CURR_PTR. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_DW_CH_STRUCT_CH_IDX_Bits;

/** \brief Channel current descriptor pointer */
typedef struct _Ifx_DW_CH_STRUCT_CH_CURR_PTR_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit ADDR:30;                /**< \brief [31:2]  Address of current descriptor.
                                                                    When this field is '0', there is no valid
                                                                    descriptor.
                                                                    Note: HW updates the current descriptor pointer
                                                                    CH_CURR_PTR with DESCR_NEXT_PTR after execution of
                                                                    the current descriptor.
                                                                    Note: Typically, when SW updates the current
                                                                    descriptor pointer CH_CURR_PTR, it also sets
                                                                    CH_IDX.X_IDX and CH_IDX.Y_IDX to '0'. (rw) */
} Ifx_DW_CH_STRUCT_CH_CURR_PTR_Bits;

/** \brief Interrupt */
typedef struct _Ifx_DW_CH_STRUCT_INTR_Bits
{
    __IO Ifx_UReg_32Bit CH:1;                   /**< \brief [0:0]   Set to '1', when event (as specified by
                                                                    CH_STATUS.INTR_CAUSE) is detected.
                                                                    Write INTR.CH field with '1', to clear bit.
                                                                    Write INTR_SET.CH field with '1', to set bit. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_DW_CH_STRUCT_INTR_Bits;

/** \brief Interrupt set */
typedef struct _Ifx_DW_CH_STRUCT_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit CH:1;                   /**< \brief [0:0]   Write INTR_SET field with '1' to set
                                                                    corresponding INTR.CH field (a write of '0' has no effect). (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_DW_CH_STRUCT_INTR_SET_Bits;

/** \brief Interrupt mask */
typedef struct _Ifx_DW_CH_STRUCT_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit CH:1;                   /**< \brief [0:0]   Mask for corresponding field in INTR register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_DW_CH_STRUCT_INTR_MASK_Bits;

/** \brief Interrupt masked */
typedef struct _Ifx_DW_CH_STRUCT_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit CH:1;                   /**< \brief [0:0]   Logical and of corresponding INTR and
                                                                    INTR_MASK fields. (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_DW_CH_STRUCT_INTR_MASKED_Bits;

/** \brief Channel software trigger */
typedef struct _Ifx_DW_CH_STRUCT_TR_CMD_Bits
{
    __IO Ifx_UReg_32Bit ACTIVATE:1;             /**< \brief [0:0]   Software trigger.
                                                                    When written with '1', a trigger is generated which
                                                                    sets 'trigger pending' (only if the channel is enabled).
                                                                    A read always returns a 0. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_DW_CH_STRUCT_TR_CMD_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_DW_Registers_union
 * \{   */
/** \brief Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CTL_Bits B;                          /**< \brief Bitfield access */
} Ifx_DW_CTL;

/** \brief Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_STATUS_Bits B;                       /**< \brief Bitfield access */
} Ifx_DW_STATUS;

/** \brief Active descriptor control */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_ACT_DESCR_CTL_Bits B;                /**< \brief Bitfield access */
} Ifx_DW_ACT_DESCR_CTL;

/** \brief Active descriptor source */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_ACT_DESCR_SRC_Bits B;                /**< \brief Bitfield access */
} Ifx_DW_ACT_DESCR_SRC;

/** \brief Active descriptor destination */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_ACT_DESCR_DST_Bits B;                /**< \brief Bitfield access */
} Ifx_DW_ACT_DESCR_DST;

/** \brief Active descriptor X loop control */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_ACT_DESCR_X_CTL_Bits B;              /**< \brief Bitfield access */
} Ifx_DW_ACT_DESCR_X_CTL;

/** \brief Active descriptor Y loop control */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_ACT_DESCR_Y_CTL_Bits B;              /**< \brief Bitfield access */
} Ifx_DW_ACT_DESCR_Y_CTL;

/** \brief Active descriptor next pointer */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_ACT_DESCR_NEXT_PTR_Bits B;           /**< \brief Bitfield access */
} Ifx_DW_ACT_DESCR_NEXT_PTR;

/** \brief Active source */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_ACT_SRC_Bits B;                      /**< \brief Bitfield access */
} Ifx_DW_ACT_SRC;

/** \brief Active destination */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_ACT_DST_Bits B;                      /**< \brief Bitfield access */
} Ifx_DW_ACT_DST;

/** \brief CRC control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CRC_CTL_Bits B;                      /**< \brief Bitfield access */
} Ifx_DW_CRC_CTL;

/** \brief CRC data control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CRC_DATA_CTL_Bits B;                 /**< \brief Bitfield access */
} Ifx_DW_CRC_DATA_CTL;

/** \brief CRC polynomial control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CRC_POL_CTL_Bits B;                  /**< \brief Bitfield access */
} Ifx_DW_CRC_POL_CTL;

/** \brief CRC LFSR control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CRC_LFSR_CTL_Bits B;                 /**< \brief Bitfield access */
} Ifx_DW_CRC_LFSR_CTL;

/** \brief CRC remainder control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CRC_REM_CTL_Bits B;                  /**< \brief Bitfield access */
} Ifx_DW_CRC_REM_CTL;

/** \brief CRC remainder result */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CRC_REM_RESULT_Bits B;               /**< \brief Bitfield access */
} Ifx_DW_CRC_REM_RESULT;

/** \brief Channel control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CH_STRUCT_CH_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_DW_CH_STRUCT_CH_CTL;

/** \brief Channel status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CH_STRUCT_CH_STATUS_Bits B;          /**< \brief Bitfield access */
} Ifx_DW_CH_STRUCT_CH_STATUS;

/** \brief Channel current indices */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CH_STRUCT_CH_IDX_Bits B;             /**< \brief Bitfield access */
} Ifx_DW_CH_STRUCT_CH_IDX;

/** \brief Channel current descriptor pointer */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CH_STRUCT_CH_CURR_PTR_Bits B;        /**< \brief Bitfield access */
} Ifx_DW_CH_STRUCT_CH_CURR_PTR;

/** \brief Interrupt */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CH_STRUCT_INTR_Bits B;               /**< \brief Bitfield access */
} Ifx_DW_CH_STRUCT_INTR;

/** \brief Interrupt set */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CH_STRUCT_INTR_SET_Bits B;           /**< \brief Bitfield access */
} Ifx_DW_CH_STRUCT_INTR_SET;

/** \brief Interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CH_STRUCT_INTR_MASK_Bits B;          /**< \brief Bitfield access */
} Ifx_DW_CH_STRUCT_INTR_MASK;

/** \brief Interrupt masked */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CH_STRUCT_INTR_MASKED_Bits B;        /**< \brief Bitfield access */
} Ifx_DW_CH_STRUCT_INTR_MASKED;

/** \brief Channel software trigger */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_DW_CH_STRUCT_TR_CMD_Bits B;             /**< \brief Bitfield access */
} Ifx_DW_CH_STRUCT_TR_CMD;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_DW_CH_STRUCT_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CH_STRUCT object */
typedef volatile struct _Ifx_DW_CH_STRUCT
{
       __IO Ifx_DW_CH_STRUCT_CH_CTL             CH_CTL;                 /**< \brief 0, Channel control*/
       __I  Ifx_DW_CH_STRUCT_CH_STATUS          CH_STATUS;              /**< \brief 4, Channel status*/
       __IO Ifx_DW_CH_STRUCT_CH_IDX             CH_IDX;                 /**< \brief 8, Channel current indices*/
       __IO Ifx_DW_CH_STRUCT_CH_CURR_PTR        CH_CURR_PTR;            /**< \brief C, Channel current descriptor pointer*/
       __IO Ifx_DW_CH_STRUCT_INTR               INTR;                   /**< \brief 10, Interrupt*/
       __IO Ifx_DW_CH_STRUCT_INTR_SET           INTR_SET;               /**< \brief 14, Interrupt set*/
       __IO Ifx_DW_CH_STRUCT_INTR_MASK          INTR_MASK;              /**< \brief 18, Interrupt mask*/
       __I  Ifx_DW_CH_STRUCT_INTR_MASKED        INTR_MASKED;            /**< \brief 1C, Interrupt masked*/
       __I  Ifx_UReg_8Bit                       reserved_20[8];         /**< \brief 20, */
       __IO Ifx_DW_CH_STRUCT_TR_CMD             TR_CMD;                 /**< \brief 28, Channel software trigger*/
       __I  Ifx_UReg_8Bit                       reserved_2C[20];        /**< \brief 2C, */
} Ifx_DW_CH_STRUCT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_DW_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief DW object */
typedef volatile struct _Ifx_DW
{
       __IO Ifx_DW_CTL                          CTL;                    /**< \brief 0, Control*/
       __I  Ifx_DW_STATUS                       STATUS;                 /**< \brief 4, Status*/
       __I  Ifx_UReg_8Bit                       reserved_8[24];         /**< \brief 8, */
       __I  Ifx_DW_ACT_DESCR_CTL                ACT_DESCR_CTL;          /**< \brief 20, Active descriptor control*/
       __I  Ifx_DW_ACT_DESCR_SRC                ACT_DESCR_SRC;          /**< \brief 24, Active descriptor source*/
       __I  Ifx_DW_ACT_DESCR_DST                ACT_DESCR_DST;          /**< \brief 28, Active descriptor destination*/
       __I  Ifx_UReg_8Bit                       reserved_2C[4];         /**< \brief 2C, */
       __I  Ifx_DW_ACT_DESCR_X_CTL              ACT_DESCR_X_CTL;        /**< \brief 30, Active descriptor X loop control*/
       __I  Ifx_DW_ACT_DESCR_Y_CTL              ACT_DESCR_Y_CTL;        /**< \brief 34, Active descriptor Y loop control*/
       __I  Ifx_DW_ACT_DESCR_NEXT_PTR           ACT_DESCR_NEXT_PTR;     /**< \brief 38, Active descriptor next pointer*/
       __I  Ifx_UReg_8Bit                       reserved_3C[4];         /**< \brief 3C, */
       __I  Ifx_DW_ACT_SRC                      ACT_SRC;                /**< \brief 40, Active source*/
       __I  Ifx_DW_ACT_DST                      ACT_DST;                /**< \brief 44, Active destination*/
       __I  Ifx_UReg_8Bit                       reserved_48[184];       /**< \brief 48, */
       __IO Ifx_DW_CRC_CTL                      CRC_CTL;                /**< \brief 100, CRC control*/
       __I  Ifx_UReg_8Bit                       reserved_104[12];       /**< \brief 104, */
       __IO Ifx_DW_CRC_DATA_CTL                 CRC_DATA_CTL;           /**< \brief 110, CRC data control*/
       __I  Ifx_UReg_8Bit                       reserved_114[12];       /**< \brief 114, */
       __IO Ifx_DW_CRC_POL_CTL                  CRC_POL_CTL;            /**< \brief 120, CRC polynomial control*/
       __I  Ifx_UReg_8Bit                       reserved_124[12];       /**< \brief 124, */
       __IO Ifx_DW_CRC_LFSR_CTL                 CRC_LFSR_CTL;           /**< \brief 130, CRC LFSR control*/
       __I  Ifx_UReg_8Bit                       reserved_134[12];       /**< \brief 134, */
       __IO Ifx_DW_CRC_REM_CTL                  CRC_REM_CTL;            /**< \brief 140, CRC remainder control*/
       __I  Ifx_UReg_8Bit                       reserved_144[4];        /**< \brief 144, */
       __I  Ifx_DW_CRC_REM_RESULT               CRC_REM_RESULT;         /**< \brief 148, CRC remainder result*/
       __I  Ifx_UReg_8Bit                       reserved_14C[32436];    /**< \brief 14C, */
       __IO Ifx_DW_CH_STRUCT                    CH_STRUCT[512];         /**< \brief 8000, DW channel structure*/
} Ifx_DW;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXDW_REGDEF_H_ */
