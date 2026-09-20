/***************************************************************************//**
* \file IfxMXAES_regdef.h
*
* \brief
* MXAES Registers
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
* \defgroup IfxSfr_MXAES_Registers MXAES Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_MXAES_Registers_Bitfields Bitfields
* \ingroup IfxSfr_MXAES_Registers
*
* \defgroup IfxSfr_MXAES_Registers_union Register unions
* \ingroup IfxSfr_MXAES_Registers
*
* \defgroup IfxSfr_MXAES_Registers_struct Memory map
* \ingroup IfxSfr_MXAES_Registers
*
*******************************************************************************/

#ifndef _IFXMXAES_REGDEF_H_
#define _IFXMXAES_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_MXAES_Registers_Bitfields
 * \{  */
/** \brief AES configuration register */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_CFG_Bits
{
    __IO Ifx_UReg_32Bit CALC_MODE:5;            /**< \brief [4:0]   Mode of AES calculation (rw)
                                                NOMODE        : 0u
                                                CIPHER        : 3u    */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit CRYPT_MODE:5;           /**< \brief [12:8]  Cryptographic mode (rw)
                                                NOMODE        : 0u
                                                AES128LO      : 16u
                                                AES128HI      : 19u
                                                AES256        : 22u    */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [31:13] \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_CFG_Bits;

/* MXAES_UNMASKED_USER_RANGE_CFG.CALC_MODE enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_CFG_CALC_MODE_NOMODE (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CFG_CALC_MODE_CIPHER (3u)

/* MXAES_UNMASKED_USER_RANGE_CFG.CRYPT_MODE enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_CFG_CRYPT_MODE_NOMODE (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CFG_CRYPT_MODE_AES128LO (16u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CFG_CRYPT_MODE_AES128HI (19u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CFG_CRYPT_MODE_AES256 (22u)

/** \brief AES command register */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_CMD_Bits
{
    __IO Ifx_UReg_32Bit START_ENC:1;            /**< \brief [0:0]   Launch an AES encryption operation (rw)
                                                NENC          : 0u
                                                ENC           : 1u    */
    __IO Ifx_UReg_32Bit START_DEC:1;            /**< \brief [1:1]   Launch an AES decryption operation (rw)
                                                NDEC          : 0u
                                                DEC           : 1u    */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_CMD_Bits;

/* MXAES_UNMASKED_USER_RANGE_CMD.START_ENC enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_CMD_START_ENC_NENC (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CMD_START_ENC_ENC (1u)

/* MXAES_UNMASKED_USER_RANGE_CMD.START_DEC enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_CMD_START_DEC_NDEC (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CMD_START_DEC_DEC (1u)

/** \brief AES status register */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_STAT_Bits
{
    __I  Ifx_UReg_32Bit DATA:1;                 /**< \brief [0:0]   AES data valid (r)
                                                DNV           : 0u
                                                DV            : 1u    */
    __I  Ifx_UReg_32Bit AES_KEY_128LO:1;        /**< \brief [1:1]   AES 128 Low key valid (r)
                                                ALIV          : 0u
                                                ALV           : 1u    */
    __I  Ifx_UReg_32Bit AES_KEY_128HI:1;        /**< \brief [2:2]   AES 128 High key valid (r)
                                                AHIV          : 0u
                                                AHV           : 1u    */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __I  Ifx_UReg_32Bit AES_KEY_256:1;          /**< \brief [4:4]   AES 256 Key valid (r)
                                                A2IV          : 0u
                                                A2V           : 1u    */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __I  Ifx_UReg_32Bit SEC_LEVEL_RR:4;         /**< \brief [11:8]  SEC_LEVEL reread bits (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [12:12] \internal Reserved */
    __I  Ifx_UReg_32Bit SEED:1;                 /**< \brief [13:13] Seeding status bit (r)
                                                SEED          : 1u
                                                NO_SEED       : 0u    */
    __I  Ifx_UReg_32Bit RDY:1;                  /**< \brief [14:14] Ready flag (r)
                                                AES_NRDY      : 0u
                                                AES_RDY       : 1u    */
    __I  Ifx_UReg_32Bit BSY:1;                  /**< \brief [15:15] Busy flag (r)
                                                NBSY          : 0u
                                                BSY           : 1u    */
    __I  Ifx_UReg_32Bit CALC_MODE_RR:5;         /**< \brief [20:16] AES CALC_MODE reread bits (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [23:21] \internal Reserved */
    __I  Ifx_UReg_32Bit CRYPT_MODE_RR:5;        /**< \brief [28:24] AES CRYPT_MODE reread bits (r) */
    __I  Ifx_UReg_32Bit START_ENC_RR:1;         /**< \brief [29:29] AES START_ENC reread bit (r) */
    __I  Ifx_UReg_32Bit START_DEC_RR:1;         /**< \brief [30:30] AES START_DEC reread bit (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_STAT_Bits;

/* MXAES_UNMASKED_USER_RANGE_STAT.DATA enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_DATA_DNV (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_DATA_DV (1u)

/* MXAES_UNMASKED_USER_RANGE_STAT.AES_KEY_128LO enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_AES_KEY_128LO_ALIV (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_AES_KEY_128LO_ALV (1u)

/* MXAES_UNMASKED_USER_RANGE_STAT.AES_KEY_128HI enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_AES_KEY_128HI_AHIV (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_AES_KEY_128HI_AHV (1u)

/* MXAES_UNMASKED_USER_RANGE_STAT.AES_KEY_256 enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_AES_KEY_256_A2IV (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_AES_KEY_256_A2V (1u)

/* MXAES_UNMASKED_USER_RANGE_STAT.SEED enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_SEED_SEED (1u)
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_SEED_NO_SEED (0u)

/* MXAES_UNMASKED_USER_RANGE_STAT.RDY enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_RDY_AES_NRDY (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_RDY_AES_RDY (1u)

/* MXAES_UNMASKED_USER_RANGE_STAT.BSY enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_BSY_NBSY (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_STAT_BSY_BSY (1u)

/** \brief AES configuration register 2 */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_CFG_2_Bits
{
    __IO Ifx_UReg_32Bit SEC_LEVEL:4;            /**< \brief [3:0]   Security level (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_CFG_2_Bits;

/** \brief AES interrupt cause register */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_INTR_Bits
{
    __IO Ifx_UReg_32Bit CALC_FINISHED:1;        /**< \brief [0:0]   Interrupt calculation finished (rw)
                                                CLEAR         : 1u
                                                CLEARED       : 0u    */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_INTR_Bits;

/* MXAES_UNMASKED_USER_RANGE_INTR.CALC_FINISHED enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_INTR_CALC_FINISHED_CLEAR (1u)
#define IFX_MXAES_UNMASKED_USER_RANGE_INTR_CALC_FINISHED_CLEARED (0u)

/** \brief AES interrupt set register */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit CALC_FINISHED:1;        /**< \brief [0:0]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_INTR_SET_Bits;

/** \brief AES interrupt mask register */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit CALC_FINISHED:1;        /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASK_Bits;

/** \brief AES masked interrupt register */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit CALC_FINISHED:1;        /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASKED_Bits;

/** \brief AES clear register */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_CLEAR_Bits
{
    __O  Ifx_UReg_32Bit DATA:1;                 /**< \brief [0:0]   Clear data (w)
                                                NCLR          : 0u
                                                CLR           : 1u    */
    __O  Ifx_UReg_32Bit AES_KEY_128LO:1;        /**< \brief [1:1]   Clear AES 128 Low Key (w)
                                                NCLR          : 0u
                                                CLR           : 1u    */
    __O  Ifx_UReg_32Bit AES_KEY_128HI:1;        /**< \brief [2:2]   Clear AES 128 High Key (w)
                                                NCLR          : 0u
                                                CLR           : 1u    */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __O  Ifx_UReg_32Bit AES_KEY_256:1;          /**< \brief [4:4]   Clear AES 256 Key (w)
                                                CLR           : 1u
                                                NCLR          : 0u    */
    __O  Ifx_UReg_32Bit CLEAR_ALL:1;            /**< \brief [5:5]   Clear all SFRs and AES internal registers (w)
                                                NCLR          : 0u
                                                CLR           : 1u    */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_CLEAR_Bits;

/* MXAES_UNMASKED_USER_RANGE_CLEAR.DATA enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_CLEAR_DATA_NCLR (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CLEAR_DATA_CLR (1u)

/* MXAES_UNMASKED_USER_RANGE_CLEAR.AES_KEY_128LO enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_CLEAR_AES_KEY_128LO_NCLR (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CLEAR_AES_KEY_128LO_CLR (1u)

/* MXAES_UNMASKED_USER_RANGE_CLEAR.AES_KEY_128HI enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_CLEAR_AES_KEY_128HI_NCLR (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CLEAR_AES_KEY_128HI_CLR (1u)

/* MXAES_UNMASKED_USER_RANGE_CLEAR.AES_KEY_256 enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_CLEAR_AES_KEY_256_CLR (1u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CLEAR_AES_KEY_256_NCLR (0u)

/* MXAES_UNMASKED_USER_RANGE_CLEAR.CLEAR_ALL enumerated values */
#define IFX_MXAES_UNMASKED_USER_RANGE_CLEAR_CLEAR_ALL_NCLR (0u)
#define IFX_MXAES_UNMASKED_USER_RANGE_CLEAR_CLEAR_ALL_CLR (1u)

/** \brief AES Bus counter register */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_BUS_COUNTER_Bits
{
    __IO Ifx_UReg_32Bit CTR:8;                  /**< \brief [7:0]   Key and data write counter (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_BUS_COUNTER_Bits;

/** \brief AES Q-channel control register */
typedef struct _Ifx_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL_Bits
{
    __IO Ifx_UReg_32Bit QDENY_RESP:1;           /**< \brief [0:0]   Q-Channel QDENY Response Policy.
                                                                    This policy bit provides SW flexibility to
                                                                    determine whether to assert qdeny or qaccept when
                                                                    qreq is asserted but the IP is not quiescent.
                                                                    Note: The RNG always accepts the request with a
                                                                    clock cycle delay.
                                                                    That is, the register does not have any effect and
                                                                    is a dummy register. (rw)
                                                ACCEPT        : 1u   A quiescence request is always accepted
                                                DENY          : 0u   A quiescence request may be denied */
    __IO Ifx_UReg_32Bit QDENY_STATUS:1;         /**< \brief [1:1]   Q-Channel QDENY Status.
                                                                    This status bit allows dynamic debug when a qdeny occurs. (rw)
                                                NODENY        : 0u   No quiescence request was denied
                                                DENIED        : 1u   A quiescence request was denied */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL_Bits;

/* MXAES_UNMASKED_USER_RANGE_QCHAN_CTL.QDENY_RESP enumerated values */

/** \brief A quiescence request is always accepted */
#define IFX_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL_QDENY_RESP_ACCEPT (1u)

/** \brief A quiescence request may be denied */
#define IFX_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL_QDENY_RESP_DENY (0u)

/* MXAES_UNMASKED_USER_RANGE_QCHAN_CTL.QDENY_STATUS enumerated values */

/** \brief No quiescence request was denied */
#define IFX_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL_QDENY_STATUS_NODENY (0u)

/** \brief A quiescence request was denied */
#define IFX_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL_QDENY_STATUS_DENIED (1u)

/** \brief AES test register 1 */
typedef struct _Ifx_MXAES_UNMASKED_INTERNAL_RANGE_TEST_1_Bits
{
    __IO Ifx_UReg_32Bit Test0:1;                /**< \brief [0:0]   AES test bit 0 (rw) */
    __IO Ifx_UReg_32Bit Test01:1;               /**< \brief [1:1]   AES test bit 1 (rw) */
    __IO Ifx_UReg_32Bit TEST10:1;               /**< \brief [2:2]   AES test bit 2 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [4:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit TEST101:1;              /**< \brief [5:5]   AES test bit 5 (rw) */
    __IO Ifx_UReg_32Bit TEST110:1;              /**< \brief [6:6]   AES test bit 6 (rw) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [31:7]  \internal Reserved */
} Ifx_MXAES_UNMASKED_INTERNAL_RANGE_TEST_1_Bits;

/** \brief AES user seeding register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_SEED_U_Bits
{
    __O  Ifx_UReg_32Bit PRNG_SEED:32;           /**< \brief [31:0]  Seed for internal masking (w) */
} Ifx_MXAES_MASKED_USER_RANGE_SEED_U_Bits;

/** \brief AES share 0 word 0 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_0_0_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_0_Bits;

/** \brief AES share 0 word 1 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_0_1_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_1_Bits;

/** \brief AES share 0 word 2 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_0_2_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_2_Bits;

/** \brief AES share 0 word 3 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_0_3_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_3_Bits;

/** \brief AES share 0 word 4 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_0_4_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_4_Bits;

/** \brief AES share 0 word 5 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_0_5_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_5_Bits;

/** \brief AES share 0 word 6 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_0_6_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_6_Bits;

/** \brief AES share 0 word 7 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_0_7_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_7_Bits;

/** \brief AES share 1 word 0 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_1_0_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_0_Bits;

/** \brief AES share 1 word 1 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_1_1_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_1_Bits;

/** \brief AES share 1 word 2 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_1_2_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_2_Bits;

/** \brief AES share 1 word 3 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_1_3_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_3_Bits;

/** \brief AES share 1 word 4 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_1_4_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_4_Bits;

/** \brief AES share 1 word 5 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_1_5_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_5_Bits;

/** \brief AES share 1 word 6 key register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_1_6_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_6_Bits;

/** \brief AES share 1 word 7 data register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_KEY_1_7_Bits
{
    __O  Ifx_UReg_32Bit KEY:32;                 /**< \brief [31:0]  AES key_x_y register (x for index of
                                                                    shares; y for index of word) (w) */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_7_Bits;

/** \brief AES share 0 word 0 data register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_0_0_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES data_x_y register (x for index of
                                                                    shares; y for index of word) (rw) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_0_0_Bits;

/** \brief AES share 0 word 1 data register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_0_1_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES data_x_y register (x for index of
                                                                    shares; y for index of word) (rw) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_0_1_Bits;

/** \brief AES share 0 word 2 data register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_0_2_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES data_x_y register (x for index of
                                                                    shares; y for index of word) (rw) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_0_2_Bits;

/** \brief AES share 0 word 3 data register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_0_3_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES data_x_y register (x for index of
                                                                    shares; y for index of word) (rw) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_0_3_Bits;

/** \brief AES share 1 word 0 data register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_1_0_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES data_x_y register (x for index of
                                                                    shares; y for index of word) (rw) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_1_0_Bits;

/** \brief AES share 1 word 1 data register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_1_1_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES data_x_y register (x for index of
                                                                    shares; y for index of word) (rw) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_1_1_Bits;

/** \brief AES share 1 word 2 data register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_1_2_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES data_x_y register (x for index of
                                                                    shares; y for index of word) (rw) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_1_2_Bits;

/** \brief AES share 1 word 3 data register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_1_3_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES data_x_y register (x for index of
                                                                    shares; y for index of word) (rw) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_1_3_Bits;

/** \brief AES share 0 word 0 data reread register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_0_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES  data reread register (data_rr_x_y: x
                                                                    for index of shares; y for index of word) (r) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_0_Bits;

/** \brief AES share 0 word 1 data reread register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_1_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES  data reread register (data_rr_x_y: x
                                                                    for index of shares; y for index of word) (r) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_1_Bits;

/** \brief AES share 0 word 2 data reread register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_2_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES  data reread register (data_rr_x_y: x
                                                                    for index of shares; y for index of word) (r) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_2_Bits;

/** \brief AES share 0 word 3 data reread register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_3_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES  data reread register (data_rr_x_y: x
                                                                    for index of shares; y for index of word) (r) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_3_Bits;

/** \brief AES share 1 word 0 data reread register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_0_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES  data reread register (data_rr_x_y: x
                                                                    for index of shares; y for index of word) (r) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_0_Bits;

/** \brief AES share 1 word 1 data reread register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_1_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES  data reread register (data_rr_x_y: x
                                                                    for index of shares; y for index of word) (r) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_1_Bits;

/** \brief AES share 1 word 2 data reread register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_2_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES  data reread register (data_rr_x_y: x
                                                                    for index of shares; y for index of word) (r) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_2_Bits;

/** \brief AES share 1 word 3 data reread register */
typedef struct _Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_3_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  AES  data reread register (data_rr_x_y: x
                                                                    for index of shares; y for index of word) (r) */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_3_Bits;

/** \brief AES second test register */
typedef struct _Ifx_MXAES_MASKED_INTERNAL_RANGE_TEST_2_Bits
{
    __O  Ifx_UReg_32Bit TEST:32;                /**< \brief [31:0]  Test bits (w) */
} Ifx_MXAES_MASKED_INTERNAL_RANGE_TEST_2_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXAES_Registers_union
 * \{   */
/** \brief AES configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_CFG_Bits B;   /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_CFG;

/** \brief AES command register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_CMD_Bits B;   /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_CMD;

/** \brief AES status register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_STAT_Bits B;  /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_STAT;

/** \brief AES configuration register 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_CFG_2_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_CFG_2;

/** \brief AES interrupt cause register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_INTR_Bits B;  /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_INTR;

/** \brief AES interrupt set register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_INTR_SET_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_INTR_SET;

/** \brief AES interrupt mask register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASK_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASK;

/** \brief AES masked interrupt register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASKED_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASKED;

/** \brief AES clear register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_CLEAR_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_CLEAR;

/** \brief AES Bus counter register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_BUS_COUNTER_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_BUS_COUNTER;

/** \brief AES Q-channel control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL;

/** \brief AES test register 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_UNMASKED_INTERNAL_RANGE_TEST_1_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_UNMASKED_INTERNAL_RANGE_TEST_1;

/** \brief AES user seeding register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_SEED_U_Bits B;  /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_SEED_U;

/** \brief AES share 0 word 0 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_0_0_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_0;

/** \brief AES share 0 word 1 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_0_1_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_1;

/** \brief AES share 0 word 2 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_0_2_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_2;

/** \brief AES share 0 word 3 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_0_3_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_3;

/** \brief AES share 0 word 4 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_0_4_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_4;

/** \brief AES share 0 word 5 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_0_5_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_5;

/** \brief AES share 0 word 6 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_0_6_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_6;

/** \brief AES share 0 word 7 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_0_7_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_0_7;

/** \brief AES share 1 word 0 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_1_0_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_0;

/** \brief AES share 1 word 1 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_1_1_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_1;

/** \brief AES share 1 word 2 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_1_2_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_2;

/** \brief AES share 1 word 3 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_1_3_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_3;

/** \brief AES share 1 word 4 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_1_4_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_4;

/** \brief AES share 1 word 5 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_1_5_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_5;

/** \brief AES share 1 word 6 key register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_1_6_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_6;

/** \brief AES share 1 word 7 data register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_KEY_1_7_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_KEY_1_7;

/** \brief AES share 0 word 0 data register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_0_0_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_0_0;

/** \brief AES share 0 word 1 data register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_0_1_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_0_1;

/** \brief AES share 0 word 2 data register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_0_2_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_0_2;

/** \brief AES share 0 word 3 data register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_0_3_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_0_3;

/** \brief AES share 1 word 0 data register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_1_0_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_1_0;

/** \brief AES share 1 word 1 data register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_1_1_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_1_1;

/** \brief AES share 1 word 2 data register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_1_2_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_1_2;

/** \brief AES share 1 word 3 data register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_1_3_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_1_3;

/** \brief AES share 0 word 0 data reread register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_0_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_0;

/** \brief AES share 0 word 1 data reread register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_1_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_1;

/** \brief AES share 0 word 2 data reread register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_2_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_2;

/** \brief AES share 0 word 3 data reread register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_3_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_3;

/** \brief AES share 1 word 0 data reread register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_0_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_0;

/** \brief AES share 1 word 1 data reread register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_1_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_1;

/** \brief AES share 1 word 2 data reread register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_2_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_2;

/** \brief AES share 1 word 3 data reread register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_3_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_3;

/** \brief AES second test register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXAES_MASKED_INTERNAL_RANGE_TEST_2_Bits B; /**< \brief Bitfield access */
} Ifx_MXAES_MASKED_INTERNAL_RANGE_TEST_2;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXAES_UNMASKED_USER_RANGE_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief UNMASKED_USER_RANGE object */
typedef volatile struct _Ifx_MXAES_UNMASKED_USER_RANGE
{
       __IO Ifx_MXAES_UNMASKED_USER_RANGE_CFG   CFG;                    /**< \brief 0, AES configuration register*/
       __I  Ifx_UReg_8Bit                       reserved_4[8];          /**< \brief 4, */
       __IO Ifx_MXAES_UNMASKED_USER_RANGE_CMD   CMD;                    /**< \brief C, AES command register*/
       __I  Ifx_UReg_8Bit                       reserved_10[4];         /**< \brief 10, */
       __I  Ifx_MXAES_UNMASKED_USER_RANGE_STAT  STAT;                   /**< \brief 14, AES status register*/
       __I  Ifx_UReg_8Bit                       reserved_18[72];        /**< \brief 18, */
       __IO Ifx_MXAES_UNMASKED_USER_RANGE_CFG_2 CFG_2;                  /**< \brief 60, AES configuration register 2*/
       __I  Ifx_UReg_8Bit                       reserved_64[28];        /**< \brief 64, */
       __IO Ifx_MXAES_UNMASKED_USER_RANGE_INTR  INTR;                   /**< \brief 80, AES interrupt cause register*/
       __IO Ifx_MXAES_UNMASKED_USER_RANGE_INTR_SET INTR_SET;            /**< \brief 84, AES interrupt set register*/
       __I  Ifx_UReg_8Bit                       reserved_88[4];         /**< \brief 88, */
       __IO Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASK INTR_MASK;          /**< \brief 8C, AES interrupt mask register*/
       __I  Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASKED INTR_MASKED;      /**< \brief 90, AES masked interrupt register*/
       __I  Ifx_UReg_8Bit                       reserved_94[44];        /**< \brief 94, */
       __O  Ifx_MXAES_UNMASKED_USER_RANGE_CLEAR CLEAR;                  /**< \brief C0, AES clear register*/
       __I  Ifx_UReg_8Bit                       reserved_C4[24];        /**< \brief C4, */
       __IO Ifx_MXAES_UNMASKED_USER_RANGE_BUS_COUNTER BUS_COUNTER;      /**< \brief DC, AES Bus counter register*/
       __IO Ifx_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL QCHAN_CTL;          /**< \brief E0, AES Q-channel control register*/
       __I  Ifx_UReg_8Bit                       reserved_E4[1820];      /**< \brief E4, */
} Ifx_MXAES_UNMASKED_USER_RANGE;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXAES_UNMASKED_INTERNAL_RANGE_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief UNMASKED_INTERNAL_RANGE object */
typedef volatile struct _Ifx_MXAES_UNMASKED_INTERNAL_RANGE
{
       __IO Ifx_MXAES_UNMASKED_INTERNAL_RANGE_TEST_1 TEST_1;            /**< \brief 0, AES test register 1*/
       __I  Ifx_UReg_8Bit                       reserved_4[2044];       /**< \brief 4, */
} Ifx_MXAES_UNMASKED_INTERNAL_RANGE;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXAES_MASKED_USER_RANGE_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MASKED_USER_RANGE object */
typedef volatile struct _Ifx_MXAES_MASKED_USER_RANGE
{
       __O  Ifx_MXAES_MASKED_USER_RANGE_SEED_U  SEED_U;                 /**< \brief 0, AES user seeding register*/
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_0_0 KEY_0_0;                /**< \brief 100, AES share 0 word 0 key register*/
       __I  Ifx_UReg_8Bit                       reserved_104[8];        /**< \brief 104, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_0_1 KEY_0_1;                /**< \brief 10C, AES share 0 word 1 key register*/
       __I  Ifx_UReg_8Bit                       reserved_110[8];        /**< \brief 110, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_0_2 KEY_0_2;                /**< \brief 118, AES share 0 word 2 key register*/
       __I  Ifx_UReg_8Bit                       reserved_11C[8];        /**< \brief 11C, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_0_3 KEY_0_3;                /**< \brief 124, AES share 0 word 3 key register*/
       __I  Ifx_UReg_8Bit                       reserved_128[8];        /**< \brief 128, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_0_4 KEY_0_4;                /**< \brief 130, AES share 0 word 4 key register*/
       __I  Ifx_UReg_8Bit                       reserved_134[8];        /**< \brief 134, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_0_5 KEY_0_5;                /**< \brief 13C, AES share 0 word 5 key register*/
       __I  Ifx_UReg_8Bit                       reserved_140[8];        /**< \brief 140, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_0_6 KEY_0_6;                /**< \brief 148, AES share 0 word 6 key register*/
       __I  Ifx_UReg_8Bit                       reserved_14C[8];        /**< \brief 14C, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_0_7 KEY_0_7;                /**< \brief 154, AES share 0 word 7 key register*/
       __I  Ifx_UReg_8Bit                       reserved_158[8];        /**< \brief 158, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_1_0 KEY_1_0;                /**< \brief 160, AES share 1 word 0 key register*/
       __I  Ifx_UReg_8Bit                       reserved_164[8];        /**< \brief 164, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_1_1 KEY_1_1;                /**< \brief 16C, AES share 1 word 1 key register*/
       __I  Ifx_UReg_8Bit                       reserved_170[8];        /**< \brief 170, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_1_2 KEY_1_2;                /**< \brief 178, AES share 1 word 2 key register*/
       __I  Ifx_UReg_8Bit                       reserved_17C[8];        /**< \brief 17C, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_1_3 KEY_1_3;                /**< \brief 184, AES share 1 word 3 key register*/
       __I  Ifx_UReg_8Bit                       reserved_188[8];        /**< \brief 188, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_1_4 KEY_1_4;                /**< \brief 190, AES share 1 word 4 key register*/
       __I  Ifx_UReg_8Bit                       reserved_194[8];        /**< \brief 194, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_1_5 KEY_1_5;                /**< \brief 19C, AES share 1 word 5 key register*/
       __I  Ifx_UReg_8Bit                       reserved_1A0[8];        /**< \brief 1A0, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_1_6 KEY_1_6;                /**< \brief 1A8, AES share 1 word 6 key register*/
       __I  Ifx_UReg_8Bit                       reserved_1AC[8];        /**< \brief 1AC, */
       __O  Ifx_MXAES_MASKED_USER_RANGE_KEY_1_7 KEY_1_7;                /**< \brief 1B4, AES share 1 word 7 data register*/
       __I  Ifx_UReg_8Bit                       reserved_1B8[584];      /**< \brief 1B8, */
       __IO Ifx_MXAES_MASKED_USER_RANGE_DATA_0_0 DATA_0_0;              /**< \brief 400, AES share 0 word 0 data register*/
       __I  Ifx_UReg_8Bit                       reserved_404[8];        /**< \brief 404, */
       __IO Ifx_MXAES_MASKED_USER_RANGE_DATA_0_1 DATA_0_1;              /**< \brief 40C, AES share 0 word 1 data register*/
       __I  Ifx_UReg_8Bit                       reserved_410[8];        /**< \brief 410, */
       __IO Ifx_MXAES_MASKED_USER_RANGE_DATA_0_2 DATA_0_2;              /**< \brief 418, AES share 0 word 2 data register*/
       __I  Ifx_UReg_8Bit                       reserved_41C[8];        /**< \brief 41C, */
       __IO Ifx_MXAES_MASKED_USER_RANGE_DATA_0_3 DATA_0_3;              /**< \brief 424, AES share 0 word 3 data register*/
       __I  Ifx_UReg_8Bit                       reserved_428[8];        /**< \brief 428, */
       __IO Ifx_MXAES_MASKED_USER_RANGE_DATA_1_0 DATA_1_0;              /**< \brief 430, AES share 1 word 0 data register*/
       __I  Ifx_UReg_8Bit                       reserved_434[8];        /**< \brief 434, */
       __IO Ifx_MXAES_MASKED_USER_RANGE_DATA_1_1 DATA_1_1;              /**< \brief 43C, AES share 1 word 1 data register*/
       __I  Ifx_UReg_8Bit                       reserved_440[8];        /**< \brief 440, */
       __IO Ifx_MXAES_MASKED_USER_RANGE_DATA_1_2 DATA_1_2;              /**< \brief 448, AES share 1 word 2 data register*/
       __I  Ifx_UReg_8Bit                       reserved_44C[8];        /**< \brief 44C, */
       __IO Ifx_MXAES_MASKED_USER_RANGE_DATA_1_3 DATA_1_3;              /**< \brief 454, AES share 1 word 3 data register*/
       __I  Ifx_UReg_8Bit                       reserved_458[56];       /**< \brief 458, */
       __I  Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_0 DATA_RR_0_0;        /**< \brief 490, AES share 0 word 0 data reread register*/
       __I  Ifx_UReg_8Bit                       reserved_494[8];        /**< \brief 494, */
       __I  Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_1 DATA_RR_0_1;        /**< \brief 49C, AES share 0 word 1 data reread register*/
       __I  Ifx_UReg_8Bit                       reserved_4A0[8];        /**< \brief 4A0, */
       __I  Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_2 DATA_RR_0_2;        /**< \brief 4A8, AES share 0 word 2 data reread register*/
       __I  Ifx_UReg_8Bit                       reserved_4AC[8];        /**< \brief 4AC, */
       __I  Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_3 DATA_RR_0_3;        /**< \brief 4B4, AES share 0 word 3 data reread register*/
       __I  Ifx_UReg_8Bit                       reserved_4B8[8];        /**< \brief 4B8, */
       __I  Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_0 DATA_RR_1_0;        /**< \brief 4C0, AES share 1 word 0 data reread register*/
       __I  Ifx_UReg_8Bit                       reserved_4C4[8];        /**< \brief 4C4, */
       __I  Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_1 DATA_RR_1_1;        /**< \brief 4CC, AES share 1 word 1 data reread register*/
       __I  Ifx_UReg_8Bit                       reserved_4D0[8];        /**< \brief 4D0, */
       __I  Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_2 DATA_RR_1_2;        /**< \brief 4D8, AES share 1 word 2 data reread register*/
       __I  Ifx_UReg_8Bit                       reserved_4DC[8];        /**< \brief 4DC, */
       __I  Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_3 DATA_RR_1_3;        /**< \brief 4E4, AES share 1 word 3 data reread register*/
       __I  Ifx_UReg_8Bit                       reserved_4E8[792];      /**< \brief 4E8, */
} Ifx_MXAES_MASKED_USER_RANGE;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXAES_MASKED_INTERNAL_RANGE_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MASKED_INTERNAL_RANGE object */
typedef volatile struct _Ifx_MXAES_MASKED_INTERNAL_RANGE
{
       __O  Ifx_MXAES_MASKED_INTERNAL_RANGE_TEST_2 TEST_2;              /**< \brief 0, AES second test register*/
       __I  Ifx_UReg_8Bit                       reserved_4[2044];       /**< \brief 4, */
} Ifx_MXAES_MASKED_INTERNAL_RANGE;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXAES_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief MXAES object */
typedef volatile struct _Ifx_MXAES
{
       __IO Ifx_MXAES_UNMASKED_USER_RANGE       UNMASKED_USER_RANGE;    /**< \brief 0, AES command and configuration registers*/
       __IO Ifx_MXAES_UNMASKED_INTERNAL_RANGE   UNMASKED_INTERNAL_RANGE; /**< \brief 800, AES data registers (x for index of shares; y for index of word)*/
       __IO Ifx_MXAES_MASKED_USER_RANGE         MASKED_USER_RANGE;      /**< \brief 1000, AES key shares*/
       __IO Ifx_MXAES_MASKED_INTERNAL_RANGE     MASKED_INTERNAL_RANGE;  /**< \brief 1800, AES Internal registers*/
} Ifx_MXAES;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXMXAES_REGDEF_H_ */
