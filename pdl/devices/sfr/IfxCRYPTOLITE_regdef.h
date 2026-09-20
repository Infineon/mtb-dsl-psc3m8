/***************************************************************************//**
* \file IfxCRYPTOLITE_regdef.h
*
* \brief
* CRYPTOLITE Registers
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
* \defgroup IfxSfr_CRYPTOLITE_Registers CRYPTOLITE Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_CRYPTOLITE_Registers_Bitfields Bitfields
* \ingroup IfxSfr_CRYPTOLITE_Registers
*
* \defgroup IfxSfr_CRYPTOLITE_Registers_union Register unions
* \ingroup IfxSfr_CRYPTOLITE_Registers
*
* \defgroup IfxSfr_CRYPTOLITE_Registers_struct Memory map
* \ingroup IfxSfr_CRYPTOLITE_Registers
*
*******************************************************************************/

#ifndef _IFXCRYPTOLITE_REGDEF_H_
#define _IFXCRYPTOLITE_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_CRYPTOLITE_Registers_Bitfields
 * \{  */
/** \brief Control */
typedef struct _Ifx_CRYPTOLITE_CTL_Bits
{
    __I  Ifx_UReg_32Bit P:1;                    /**< \brief [0:0]   User/privileged access control:
                                                                    '0': user mode.
                                                                    '1': privileged mode.
                                                                    This field is set with the user/privileged access
                                                                    control of the transaction that writes any
                                                                    (including possible memory holes in the IP
                                                                    aperture) of the CRYPTO component registers; i.e.
                                                                    the access control is inherited from the write
                                                                    transaction and not specified by the transaction
                                                                    write data.
                                                                    All CRYPTO component master transactions use the P
                                                                    field for the user/privileged access control ('hprot[1]'). (r) */
    __I  Ifx_UReg_32Bit NS:1;                   /**< \brief [1:1]   Secure/on-secure access control:
                                                                    '0': secure.
                                                                    '1': non-secure.
                                                                    This field is set with the secure/non-secure access
                                                                    control of the transaction that writes  any
                                                                    (including possible memory holes in the IP
                                                                    aperture) of the CRYPTO component registers; i.e.
                                                                    the access control is inherited from the write
                                                                    transaction and not specified by the transaction
                                                                    write data.
                                                                    All CRYPTO component master transactions use the NS
                                                                    field for the secure/non-secure access control
                                                                    ('hprot[4]'). (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __I  Ifx_UReg_32Bit PC:4;                   /**< \brief [7:4]   Protection context.
                                                                    This field is set with the protection context of
                                                                    the transaction that writes any (including possible
                                                                    memory holes in the IP aperture) of the CRYPTO
                                                                    component registers; i.e.
                                                                    the context is inherited from the write transaction
                                                                    and not specified by the transaction write data.
                                                                    All CRYPTO component master transactions use the PC
                                                                    field for the protection context. (r) */
    __I  Ifx_UReg_32Bit MS:4;                   /**< \brief [11:8]  Master identifier of the cryptography IP.
                                                                    This is a design time configurable parameter. (r) */
    __IO Ifx_UReg_32Bit SHA_SEL:2;              /**< \brief [13:12] Selects SHA function for use.
                                                                    0x0: SHA operation is disabled.
                                                                    0x1: SHA-256 operation is enabled.
                                                                    0x2: SHA-384 operation is enabled.
                                                                    0x3: SHA-512 operation is enabled. (rw) */
    __I  Ifx_UReg_32Bit :18;                    /**< \brief [31:14] \internal Reserved */
} Ifx_CRYPTOLITE_CTL_Bits;

/** \brief Status */
typedef struct _Ifx_CRYPTOLITE_STATUS_Bits
{
    __I  Ifx_UReg_32Bit BUSY:1;                 /**< \brief [0:0]   Busy indication:
                                                                    '0': IP not busy.
                                                                    '1': IP busy (AES, SHA or VU functionality (TRNG
                                                                    functionality NOT included)). (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CRYPTOLITE_STATUS_Bits;

/** \brief AES descriptor pointer */
typedef struct _Ifx_CRYPTOLITE_AES_DESCR_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit PTR:30;                 /**< \brief [31:2]  AES descriptor pointer.
                                                                    The descriptor points to a structure with 32-bit words:
                                                                    Word 0: Pointer to a 128-bit AES key.
                                                                    Word 1: Pointer to a 128-bit source/plaintext.
                                                                    Word 2: Pointer to a 128-bit destination/ciphertext.
                                                                    A write to this register automatically starts a
                                                                    128-bit AES encryption in ECB mode.
                                                                    The write ONLY takes effect when the IP is NOT busy
                                                                    (STATUS.BUSY is '0').
                                                                    The write will be made pending/blocked as long as
                                                                    the IP is busy.
                                                                    Note: the pointers must be 4B aligned.
                                                                    Note: HW updates this field when the AES engine is busy. (rw) */
} Ifx_CRYPTOLITE_AES_DESCR_Bits;

/** \brief VU descriptor pointer */
typedef struct _Ifx_CRYPTOLITE_VU_DESCR_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit PTR:30;                 /**< \brief [31:2]  VU descriptor pointer.
                                                                    The descriptor points to a structure with 32-bit words:
                                                                    Word 0: Control word.
                                                                    Specifies operand size in 32-bit word multiples.
                                                                    - WORD[7:0]: Source operand 0 32-bit words (minus 1).
                                                                    - WORD[15:8]: Source operand 1 32-bit words (minus 1).
                                                                    - WORD[24:16]: Destination operand 32-bit words
                                                                    (minus 1).
                                                                    - WORD[31:28]: Opcode.
                                                                    '0': multiplication (MUL), '1': addition (ADD),
                                                                    '2': subtraction (SUB), '3': exclusive or (XOR),
                                                                    '4': binary multiplication (XMUL), '5': logical
                                                                    shift right by 1 (LSR1), '6': logical shift left by
                                                                    1 (LSL1), '7': logical shift right (LSR), '8':
                                                                    conditional syubtraction (COND_SUB).
                                                                    '9': move (MOV).
                                                                    Word 1: Pointer to source 0.
                                                                    Word 2: Pointer to source 1.
                                                                    Word 3: Pointer to destination.
                                                                    A write to this register automatically starts a VU
                                                                    operation.
                                                                    The write ONLY takes effect when the IP is NOT busy
                                                                    (STATUS.BUSY is '0').
                                                                    The write will be made pending/blocked as long as
                                                                    the IP is busy.
                                                                    Note: the pointers must be 4B aligned.
                                                                    Note: HW updates this field when the VU engine is busy. (rw) */
} Ifx_CRYPTOLITE_VU_DESCR_Bits;

/** \brief SHA descriptor pointer */
typedef struct _Ifx_CRYPTOLITE_SHA_DESCR_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit PTR:30;                 /**< \brief [31:2]  SHA descriptor pointer.
                                                                    The descriptor points to a structure with 32-bit words:
                                                                    For message schedule function:
                                                                    Word 0: Control word.
                                                                    - WORD0[28]: '0' for message schedule function.
                                                                    Word 1: Pointer to 512 b message chunk (input).
                                                                    Word 2: Pointer to 64 * 32 b word message schedule
                                                                    array (output).
                                                                    For process function:
                                                                    Word 0: Control word.
                                                                    - WORD0[28]: '1' for process function.
                                                                    Word 1: Pointer to 8 * 32 b word current hash value
                                                                    (input) and new hash value (output).
                                                                    Word 2: Pointer to 64 * 32 b word message schedule
                                                                    array (input).
                                                                    A write to this register automatically starts a SHA
                                                                    operation.
                                                                    The write ONLY takes effect when the IP is NOT busy
                                                                    (STATUS.BUSY is '0').
                                                                    The write will be made pending/blocked as long as
                                                                    the IP is busy.
                                                                    Note: the pointers must be 32-bit word aligned.
                                                                    Note: HW updates this field when the SHA engine is busy.
                                                                    This register is used for SHA-256, SHA-384 and
                                                                    SHA-512 operation. (rw) */
} Ifx_CRYPTOLITE_SHA_DESCR_Bits;

/** \brief Error interrupt */
typedef struct _Ifx_CRYPTOLITE_INTR_ERROR_Bits
{
    __IO Ifx_UReg_32Bit BUS_ERROR:1;            /**< \brief [0:0]   AHB-Lite master interface bus error or ECC error.
                                                                    Note that the IP terminates its AES, SHA or VU
                                                                    functionality when it detects an error.
                                                                    Note: The error is sticky.
                                                                    This allows SW to check for an error after a series
                                                                    of operations, rather than checking after every
                                                                    individual operation. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CRYPTOLITE_INTR_ERROR_Bits;

/** \brief Error interrupt set */
typedef struct _Ifx_CRYPTOLITE_INTR_ERROR_SET_Bits
{
    __IO Ifx_UReg_32Bit BUS_ERROR:1;            /**< \brief [0:0]   Write this field with '1' to set
                                                                    corresponding INTR_ERROR field to '1' (a write of
                                                                    '0' has no effect). (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CRYPTOLITE_INTR_ERROR_SET_Bits;

/** \brief Error interrupt mask */
typedef struct _Ifx_CRYPTOLITE_INTR_ERROR_MASK_Bits
{
    __IO Ifx_UReg_32Bit BUS_ERROR:1;            /**< \brief [0:0]   Mask for corresponding field in INTR_ERROR
                                                                    register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CRYPTOLITE_INTR_ERROR_MASK_Bits;

/** \brief Error interrupt masked */
typedef struct _Ifx_CRYPTOLITE_INTR_ERROR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit BUS_ERROR:1;            /**< \brief [0:0]   Logical and of corresponding INTR_ERROR and
                                                                    INTR_ERROR_MASK fields. (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CRYPTOLITE_INTR_ERROR_MASKED_Bits;

/** \brief TRNG control 0 */
typedef struct _Ifx_CRYPTOLITE_TRNG_CTL0_Bits
{
    __IO Ifx_UReg_32Bit SAMPLE_CLOCK_DIV:8;     /**< \brief [7:0]   Specifies the clock divider that is used to
                                                                    sample oscillator data. This clock divider is wrt.
                                                                    The IP clock.
                                                                    '0': sample clock is the IP clock.
                                                                    '1': sample clock is the IP clock divided by 2.
                                                                    ...
                                                                    '255': sample clock is the IP clock divided by 256. (rw) */
    __IO Ifx_UReg_32Bit RED_CLOCK_DIV:8;        /**< \brief [15:8]  Specifies the clock divider that is used to
                                                                    produce reduced bits.
                                                                    '0': 1 reduced bit is produced for each sample.
                                                                    '1': 1 reduced bit is produced for each 2 samples.
                                                                    ...
                                                                    '255': 1 reduced bit is produced for each 256 samples.
                                                                    The reduced bits are considered random bits and
                                                                    shifted into TRNG_RESULT.DATA. (rw) */
    __IO Ifx_UReg_32Bit INIT_DELAY:8;           /**< \brief [23:16] Specifies an initialization delay: number
                                                                    of removed/dropped samples before reduced bits are
                                                                    generated.
                                                                    This field should be programmed in the range [1, 255].
                                                                    After starting the oscillators, at least the first
                                                                    2 samples should be removed/dropped to clear the
                                                                    state of internal synchronizers.
                                                                    In addition, it is advised to drop at least the
                                                                    second 2 samples from the oscillators (to
                                                                    circumvent the semi-predictable oscillator startup
                                                                    behavior). This result in the default field value of '3'.
                                                                    Field encoding is as follows:
                                                                    '0': 1 sample is dropped.
                                                                    '1': 2 samples are dropped.
                                                                    ...
                                                                    '255': 256 samples are dropped.
                                                                    The INTR.INITIALIZED interrupt cause is set to '1',
                                                                    when the initialization delay is passed. (rw) */
    __IO Ifx_UReg_32Bit VON_NEUMANN_CORR:1;     /**< \brief [24:24] Specifies if the 'von Neumann corrector' is
                                                                    disabled or enabled:
                                                                    '0': disabled.
                                                                    '1': enabled.
                                                                    The 'von Neumann corrector' post-processes the
                                                                    reduced bits to remove a '0' or '1' bias.
                                                                    The corrector operates on reduced bit pairs
                                                                    ('oldest bit, newest bit'):
                                                                    '00': no bit is produced.
                                                                    '01': '0' bit is produced (oldest bit).
                                                                    '10': '1' bit is produced (oldest bit).
                                                                    '11': no bit is produced.
                                                                    Note that the corrector produces bits at a random
                                                                    pace and at a frequency that is 1/4 of the reduced
                                                                    bit frequency (reduced bits are processed in pairs,
                                                                    and half of the pairs do NOT produce a bit). (rw) */
    __IO Ifx_UReg_32Bit FEEDBACK_EN:1;          /**< \brief [25:25] Specifies if the feedback of the reducution
                                                                    state is enabled:
                                                                    '0': Disabled.
                                                                    '1': Enabled.
                                                                    Note: This field is added in the 'mxcryptolite' IP
                                                                    to address CDT#337111, in which it was observed
                                                                    that the reduction state feedback reduces  the
                                                                    effectiveness of the 'von Neumann corrector'.
                                                                    The default value is '1' to provide backward compatibility. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [27:26] \internal Reserved */
    __IO Ifx_UReg_32Bit STOP_ON_AP_DETECT:1;    /**< \brief [28:28] Specifies if TRNG functionality is stopped
                                                                    on an adaptive proportion test detection (when HW
                                                                    sets INTR_ERROR.TRNG_AP_DETECT to '1'):
                                                                    '0': Functionality is NOT stopped.
                                                                    '1': Functionality is stopped (TRNG_CTL1 fields are
                                                                    set to '0' by HW). The DAS bitstream is set to '0'. (rw) */
    __IO Ifx_UReg_32Bit STOP_ON_RC_DETECT:1;    /**< \brief [29:29] Specifies if TRNG functionality is stopped
                                                                    on a repetition count test detection (when HW sets
                                                                    INTR_ERROR.TRNG_RC_DETECT to '1'):
                                                                    '0': Functionality is NOT stopped.
                                                                    '1': Functionality is stopped (TRNG_CTL1 fields are
                                                                    set to '0' by HW). The DAS bitstream is set to '0'. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_CRYPTOLITE_TRNG_CTL0_Bits;

/** \brief TRNG control 1 */
typedef struct _Ifx_CRYPTOLITE_TRNG_CTL1_Bits
{
    __IO Ifx_UReg_32Bit RO11_EN:1;              /**< \brief [0:0]   FW sets this field to '1' to enable the
                                                                    ring oscillator with 11 inverters. (rw) */
    __IO Ifx_UReg_32Bit RO15_EN:1;              /**< \brief [1:1]   FW sets this field to '1' to enable the
                                                                    ring oscillator with 15 inverters. (rw) */
    __IO Ifx_UReg_32Bit GARO15_EN:1;            /**< \brief [2:2]   FW sets this field to '1' to enable the
                                                                    fixed Galois ring oscillator with 15 inverters. (rw) */
    __IO Ifx_UReg_32Bit GARO31_EN:1;            /**< \brief [3:3]   FW sets this field to '1' to enable the
                                                                    programmable Galois ring oscillator with up to 31
                                                                    inverters.
                                                                    The TRNG_GARO_CTL register specifies the
                                                                    programmable polynomial. (rw) */
    __IO Ifx_UReg_32Bit FIRO15_EN:1;            /**< \brief [4:4]   FW sets this field to '1' to enable the
                                                                    fixed Fibonacci ring oscillator with 15 inverters. (rw) */
    __IO Ifx_UReg_32Bit FIRO31_EN:1;            /**< \brief [5:5]   FW sets this field to '1' to enable the
                                                                    programmable Fibonacci ring oscillator with up to
                                                                    31 inverters.
                                                                    The TRNG_FIRO_CTL register specifies the
                                                                    programmable polynomial. (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_CRYPTOLITE_TRNG_CTL1_Bits;

/** \brief TRNG status */
typedef struct _Ifx_CRYPTOLITE_TRNG_STATUS_Bits
{
    __I  Ifx_UReg_32Bit INITIALIZED:1;          /**< \brief [0:0]   Reflects the state of the true random
                                                                    number generator:
                                                                    '0': Not initialized (TRNG_CTL0.INIT_DELAY has NOT passed).
                                                                    '1': Initialized (TRNG_CTL0.INIT_DELAY has passed). (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CRYPTOLITE_TRNG_STATUS_Bits;

/** \brief TRNG result */
typedef struct _Ifx_CRYPTOLITE_TRNG_RESULT_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Generated 32-bit true random number.
                                                                    The INTR.DATA_AVAILABLE interrupt cause is
                                                                    activated when the number is generated. (r) */
} Ifx_CRYPTOLITE_TRNG_RESULT_Bits;

/** \brief TRNG GARO control */
typedef struct _Ifx_CRYPTOLITE_TRNG_GARO_CTL_Bits
{
    __IO Ifx_UReg_32Bit POLYNOMIAL:31;          /**< \brief [30:0]  Polynomial for programmable Galois ring oscillator.
                                                                    The polynomial is represented WITHOUT the high
                                                                    order bit (this bit is always assumed '1').
                                                                    The polynomial should be aligned such that the more
                                                                    significant bits (bit 30 and down) contain the
                                                                    polynomial and the less significant bits (bit 0 and
                                                                    up) contain padding '0's.
                                                                    Note: Default value per GESC#113. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_CRYPTOLITE_TRNG_GARO_CTL_Bits;

/** \brief TRNG FIRO control */
typedef struct _Ifx_CRYPTOLITE_TRNG_FIRO_CTL_Bits
{
    __IO Ifx_UReg_32Bit POLYNOMIAL:31;          /**< \brief [30:0]  Polynomial for programmable Fibonacci ring
                                                                    oscillator.
                                                                    The polynomial is represented WITHOUT the high
                                                                    order bit (this bit is always assumed '1').
                                                                    The polynomial should be aligned such that the more
                                                                    significant bits (bit 30 and down) contain the
                                                                    polynomial and the less significant bits (bit 0 and
                                                                    up) contain padding '0's.
                                                                    Note: Default value per GESC#113. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_CRYPTOLITE_TRNG_FIRO_CTL_Bits;

/** \brief TRNG monitor control */
typedef struct _Ifx_CRYPTOLITE_TRNG_MON_CTL_Bits
{
    __IO Ifx_UReg_32Bit BITSTREAM_SEL:2;        /**< \brief [1:0]   Selection of the bitstream:
                                                                    '0': DAS bitstream.
                                                                    '1': RED bitstream.
                                                                    '2': TR bitstream.
                                                                    '3': Undefined. (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [7:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit AP:1;                   /**< \brief [8:8]   Adaptive proportion (AP) test enable:
                                                                    '0': Disabled.
                                                                    '1': Enabled.
                                                                    On a AP detection, HW sets this field to '0' and
                                                                    sets INTR_ERROR.TRNG_AP_DETECT to '1. (rw) */
    __IO Ifx_UReg_32Bit RC:1;                   /**< \brief [9:9]   Repetition count (RC) test enable:
                                                                    '0': Disabled.
                                                                    '1': Enabled.
                                                                    On a RC detection, HW sets this field to '0' and
                                                                    sets INTR_ERROR.TRNG_RC_DETECT to '1. (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_CRYPTOLITE_TRNG_MON_CTL_Bits;

/** \brief TRNG monitor RC control */
typedef struct _Ifx_CRYPTOLITE_TRNG_MON_RC_CTL_Bits
{
    __IO Ifx_UReg_32Bit CUTOFF_COUNT8:8;        /**< \brief [7:0]   Cutoff count (legal range is [1, 255]):
                                                                    '0': Illegal.
                                                                    '1': 1 repetition.
                                                                    ...
                                                                    '255': 255 repetitions. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CRYPTOLITE_TRNG_MON_RC_CTL_Bits;

/** \brief TRNG monitor RC status 0 */
typedef struct _Ifx_CRYPTOLITE_TRNG_MON_RC_STATUS0_Bits
{
    __I  Ifx_UReg_32Bit BIT:1;                  /**< \brief [0:0]   Current active bit value:
                                                                    '0': '0'.
                                                                    '1': '1'.
                                                                    This field is only valid when
                                                                    TRNG_MON_RC_STATUS1.REP_COUNT is NOT equal to '0'. (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CRYPTOLITE_TRNG_MON_RC_STATUS0_Bits;

/** \brief TRNG monitor RC status 1 */
typedef struct _Ifx_CRYPTOLITE_TRNG_MON_RC_STATUS1_Bits
{
    __I  Ifx_UReg_32Bit REP_COUNT:8;            /**< \brief [7:0]   Number of repetitions of the current active
                                                                    bit counter:
                                                                    '0': 0 repetitions.
                                                                    ...
                                                                    '255': 255 repetitions. (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CRYPTOLITE_TRNG_MON_RC_STATUS1_Bits;

/** \brief TRNG monitor AP control */
typedef struct _Ifx_CRYPTOLITE_TRNG_MON_AP_CTL_Bits
{
    __IO Ifx_UReg_32Bit CUTOFF_COUNT16:16;      /**< \brief [15:0]  Cutoff count (legal range is [1, 65535]).
                                                                    '0': Illegal.
                                                                    '1': 1 occurrence.
                                                                    ...
                                                                    '65535': 65535 occurrences. (rw) */
    __IO Ifx_UReg_32Bit WINDOW_SIZE:16;         /**< \brief [31:16] Window size (minus 1) :
                                                                    '0': 1 bit.
                                                                    ...
                                                                    '65535': 65536 bits. (rw) */
} Ifx_CRYPTOLITE_TRNG_MON_AP_CTL_Bits;

/** \brief TRNG monitor AP status 0 */
typedef struct _Ifx_CRYPTOLITE_TRNG_MON_AP_STATUS0_Bits
{
    __I  Ifx_UReg_32Bit BIT:1;                  /**< \brief [0:0]   Current active bit value:
                                                                    '0': '0'.
                                                                    '1': '1'.
                                                                    This field is only valid when
                                                                    TRNG_MON_AP_STATUS1.OCC_COUNT is NOT equal to '0'. (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_CRYPTOLITE_TRNG_MON_AP_STATUS0_Bits;

/** \brief TRNG monitor AP status 1 */
typedef struct _Ifx_CRYPTOLITE_TRNG_MON_AP_STATUS1_Bits
{
    __I  Ifx_UReg_32Bit OCC_COUNT:16;           /**< \brief [15:0]  Number of occurrences of the current active
                                                                    bit counter:
                                                                    '0': 0 occurrences
                                                                    ...
                                                                    '65535': 65535 occurrences (r) */
    __I  Ifx_UReg_32Bit WINDOW_INDEX:16;        /**< \brief [31:16] Counter to keep track of the current index
                                                                    in the window (counts from '0' to
                                                                    TRNG_MON_AP_CTL.WINDOW_SIZE to '0'). (r) */
} Ifx_CRYPTOLITE_TRNG_MON_AP_STATUS1_Bits;

/** \brief TRNG interrupt */
typedef struct _Ifx_CRYPTOLITE_INTR_TRNG_Bits
{
    __IO Ifx_UReg_32Bit INITIALIZED:1;          /**< \brief [0:0]   This interrupt cause is activated (HW sets
                                                                    the field to '1') when the TRNG is initialized. (rw) */
    __IO Ifx_UReg_32Bit DATA_AVAILABLE:1;       /**< \brief [1:1]   This interrupt cause is activated (HW sets
                                                                    the field to '1') when 32 bits of TRNG data becomes
                                                                    available in TRNG_RESULT. (rw) */
    __IO Ifx_UReg_32Bit AP_DETECT:1;            /**< \brief [2:2]   This interrupt cause is activated (HW sets
                                                                    the field to '1') when the TRNG monitor detects an
                                                                    'adaptive proportion' error. (rw) */
    __IO Ifx_UReg_32Bit RC_DETECT:1;            /**< \brief [3:3]   This interrupt cause is activated (HW sets
                                                                    the field to '1') when the TRNG monitor detects an
                                                                    'repetition count' error. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CRYPTOLITE_INTR_TRNG_Bits;

/** \brief TRNG Interrupt set */
typedef struct _Ifx_CRYPTOLITE_INTR_TRNG_SET_Bits
{
    __IO Ifx_UReg_32Bit INITIALIZED:1;          /**< \brief [0:0]   SW writes a '1' to this field to set the
                                                                    corresponding field in interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit DATA_AVAILABLE:1;       /**< \brief [1:1]   SW writes a '1' to this field to set the
                                                                    corresponding field in interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit AP_DETECT:1;            /**< \brief [2:2]   SW writes a '1' to this field to set the
                                                                    corresponding field in interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit RC_DETECT:1;            /**< \brief [3:3]   SW writes a '1' to this field to set the
                                                                    corresponding field in interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CRYPTOLITE_INTR_TRNG_SET_Bits;

/** \brief TRNG Interrupt mask */
typedef struct _Ifx_CRYPTOLITE_INTR_TRNG_MASK_Bits
{
    __IO Ifx_UReg_32Bit INITIALIZED:1;          /**< \brief [0:0]   Mask bit for corresponding field in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit DATA_AVAILABLE:1;       /**< \brief [1:1]   Mask bit for corresponding field in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit AP_DETECT:1;            /**< \brief [2:2]   Mask bit for corresponding field in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit RC_DETECT:1;            /**< \brief [3:3]   Mask bit for corresponding field in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CRYPTOLITE_INTR_TRNG_MASK_Bits;

/** \brief TRNG Interrupt masked */
typedef struct _Ifx_CRYPTOLITE_INTR_TRNG_MASKED_Bits
{
    __I  Ifx_UReg_32Bit INITIALIZED:1;          /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit DATA_AVAILABLE:1;       /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit AP_DETECT:1;            /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit RC_DETECT:1;            /**< \brief [3:3]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_CRYPTOLITE_INTR_TRNG_MASKED_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CRYPTOLITE_Registers_union
 * \{   */
/** \brief Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_CTL_Bits B;                  /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_CTL;

/** \brief Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_STATUS_Bits B;               /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_STATUS;

/** \brief AES descriptor pointer */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_AES_DESCR_Bits B;            /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_AES_DESCR;

/** \brief VU descriptor pointer */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_VU_DESCR_Bits B;             /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_VU_DESCR;

/** \brief SHA descriptor pointer */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_SHA_DESCR_Bits B;            /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_SHA_DESCR;

/** \brief Error interrupt */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_INTR_ERROR_Bits B;           /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_INTR_ERROR;

/** \brief Error interrupt set */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_INTR_ERROR_SET_Bits B;       /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_INTR_ERROR_SET;

/** \brief Error interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_INTR_ERROR_MASK_Bits B;      /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_INTR_ERROR_MASK;

/** \brief Error interrupt masked */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_INTR_ERROR_MASKED_Bits B;    /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_INTR_ERROR_MASKED;

/** \brief TRNG control 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_CTL0_Bits B;            /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_CTL0;

/** \brief TRNG control 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_CTL1_Bits B;            /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_CTL1;

/** \brief TRNG status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_STATUS_Bits B;          /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_STATUS;

/** \brief TRNG result */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_RESULT_Bits B;          /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_RESULT;

/** \brief TRNG GARO control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_GARO_CTL_Bits B;        /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_GARO_CTL;

/** \brief TRNG FIRO control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_FIRO_CTL_Bits B;        /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_FIRO_CTL;

/** \brief TRNG monitor control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_MON_CTL_Bits B;         /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_MON_CTL;

/** \brief TRNG monitor RC control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_MON_RC_CTL_Bits B;      /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_MON_RC_CTL;

/** \brief TRNG monitor RC status 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_MON_RC_STATUS0_Bits B;  /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_MON_RC_STATUS0;

/** \brief TRNG monitor RC status 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_MON_RC_STATUS1_Bits B;  /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_MON_RC_STATUS1;

/** \brief TRNG monitor AP control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_MON_AP_CTL_Bits B;      /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_MON_AP_CTL;

/** \brief TRNG monitor AP status 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_MON_AP_STATUS0_Bits B;  /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_MON_AP_STATUS0;

/** \brief TRNG monitor AP status 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_TRNG_MON_AP_STATUS1_Bits B;  /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_TRNG_MON_AP_STATUS1;

/** \brief TRNG interrupt */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_INTR_TRNG_Bits B;            /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_INTR_TRNG;

/** \brief TRNG Interrupt set */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_INTR_TRNG_SET_Bits B;        /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_INTR_TRNG_SET;

/** \brief TRNG Interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_INTR_TRNG_MASK_Bits B;       /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_INTR_TRNG_MASK;

/** \brief TRNG Interrupt masked */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CRYPTOLITE_INTR_TRNG_MASKED_Bits B;     /**< \brief Bitfield access */
} Ifx_CRYPTOLITE_INTR_TRNG_MASKED;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CRYPTOLITE_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief CRYPTOLITE object */
typedef volatile struct _Ifx_CRYPTOLITE
{
       __IO Ifx_CRYPTOLITE_CTL                  CTL;                    /**< \brief 0, Control*/
       __I  Ifx_CRYPTOLITE_STATUS               STATUS;                 /**< \brief 4, Status*/
       __I  Ifx_UReg_8Bit                       reserved_8[56];         /**< \brief 8, */
       __IO Ifx_CRYPTOLITE_AES_DESCR            AES_DESCR;              /**< \brief 40, AES descriptor pointer*/
       __I  Ifx_UReg_8Bit                       reserved_44[60];        /**< \brief 44, */
       __IO Ifx_CRYPTOLITE_VU_DESCR             VU_DESCR;               /**< \brief 80, VU descriptor pointer*/
       __I  Ifx_UReg_8Bit                       reserved_84[60];        /**< \brief 84, */
       __IO Ifx_CRYPTOLITE_SHA_DESCR            SHA_DESCR;              /**< \brief C0, SHA descriptor pointer*/
       __I  Ifx_UReg_8Bit                       reserved_C4[44];        /**< \brief C4, */
       __IO Ifx_CRYPTOLITE_INTR_ERROR           INTR_ERROR;             /**< \brief F0, Error interrupt*/
       __IO Ifx_CRYPTOLITE_INTR_ERROR_SET       INTR_ERROR_SET;         /**< \brief F4, Error interrupt set*/
       __IO Ifx_CRYPTOLITE_INTR_ERROR_MASK      INTR_ERROR_MASK;        /**< \brief F8, Error interrupt mask*/
       __I  Ifx_CRYPTOLITE_INTR_ERROR_MASKED    INTR_ERROR_MASKED;      /**< \brief FC, Error interrupt masked*/
       __IO Ifx_CRYPTOLITE_TRNG_CTL0            TRNG_CTL0;              /**< \brief 100, TRNG control 0*/
       __IO Ifx_CRYPTOLITE_TRNG_CTL1            TRNG_CTL1;              /**< \brief 104, TRNG control 1*/
       __I  Ifx_UReg_8Bit                       reserved_108[4];        /**< \brief 108, */
       __I  Ifx_CRYPTOLITE_TRNG_STATUS          TRNG_STATUS;            /**< \brief 10C, TRNG status*/
       __I  Ifx_CRYPTOLITE_TRNG_RESULT          TRNG_RESULT;            /**< \brief 110, TRNG result*/
       __I  Ifx_UReg_8Bit                       reserved_114[12];       /**< \brief 114, */
       __IO Ifx_CRYPTOLITE_TRNG_GARO_CTL        TRNG_GARO_CTL;          /**< \brief 120, TRNG GARO control*/
       __IO Ifx_CRYPTOLITE_TRNG_FIRO_CTL        TRNG_FIRO_CTL;          /**< \brief 124, TRNG FIRO control*/
       __I  Ifx_UReg_8Bit                       reserved_128[24];       /**< \brief 128, */
       __IO Ifx_CRYPTOLITE_TRNG_MON_CTL         TRNG_MON_CTL;           /**< \brief 140, TRNG monitor control*/
       __I  Ifx_UReg_8Bit                       reserved_144[12];       /**< \brief 144, */
       __IO Ifx_CRYPTOLITE_TRNG_MON_RC_CTL      TRNG_MON_RC_CTL;        /**< \brief 150, TRNG monitor RC control*/
       __I  Ifx_UReg_8Bit                       reserved_154[4];        /**< \brief 154, */
       __I  Ifx_CRYPTOLITE_TRNG_MON_RC_STATUS0  TRNG_MON_RC_STATUS0;    /**< \brief 158, TRNG monitor RC status 0*/
       __I  Ifx_CRYPTOLITE_TRNG_MON_RC_STATUS1  TRNG_MON_RC_STATUS1;    /**< \brief 15C, TRNG monitor RC status 1*/
       __IO Ifx_CRYPTOLITE_TRNG_MON_AP_CTL      TRNG_MON_AP_CTL;        /**< \brief 160, TRNG monitor AP control*/
       __I  Ifx_UReg_8Bit                       reserved_164[4];        /**< \brief 164, */
       __I  Ifx_CRYPTOLITE_TRNG_MON_AP_STATUS0  TRNG_MON_AP_STATUS0;    /**< \brief 168, TRNG monitor AP status 0*/
       __I  Ifx_CRYPTOLITE_TRNG_MON_AP_STATUS1  TRNG_MON_AP_STATUS1;    /**< \brief 16C, TRNG monitor AP status 1*/
       __I  Ifx_UReg_8Bit                       reserved_170[128];      /**< \brief 170, */
       __IO Ifx_CRYPTOLITE_INTR_TRNG            INTR_TRNG;              /**< \brief 1F0, TRNG interrupt*/
       __IO Ifx_CRYPTOLITE_INTR_TRNG_SET        INTR_TRNG_SET;          /**< \brief 1F4, TRNG Interrupt set*/
       __IO Ifx_CRYPTOLITE_INTR_TRNG_MASK       INTR_TRNG_MASK;         /**< \brief 1F8, TRNG Interrupt mask*/
       __I  Ifx_CRYPTOLITE_INTR_TRNG_MASKED     INTR_TRNG_MASKED;       /**< \brief 1FC, TRNG Interrupt masked*/
       __I  Ifx_UReg_8Bit                       reserved_200[65024];    /**< \brief 200, */
} Ifx_CRYPTOLITE;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCRYPTOLITE_REGDEF_H_ */
