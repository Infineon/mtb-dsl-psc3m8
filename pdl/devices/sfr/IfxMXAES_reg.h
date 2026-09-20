/***************************************************************************//**
* \file IfxMXAES_reg.h
*
* \brief
* MXAES address
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
* \defgroup IfxSfr_MXAES_Registers_Cfg MXAES address
* \ingroup IfxSfr_MXAES_Registers
*
*******************************************************************************/

#ifndef _IFXMXAES_REG_H_
#define _IFXMXAES_REG_H_ 1

/******************************************************************************/
#include "IfxMXAES_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_MXAES_Registers_Cfg_BaseAddress
 * \{  */

/** \brief MXAES object */
#define MODULE_MXAES                            /*lint --e(923, 9078)*/ ((*(Ifx_MXAES*)(0x42270000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MXAES_UNMASKED_USER_RANGE        /*lint --e(923, 9078)*/ ((*(Ifx_MXAES_UNMASKED_USER_RANGE*)(0x42270000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MXAES_UNMASKED_INTERNAL_RANGE    /*lint --e(923, 9078)*/ ((*(Ifx_MXAES_UNMASKED_INTERNAL_RANGE*)(0x42270800u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MXAES_MASKED_USER_RANGE          /*lint --e(923, 9078)*/ ((*(Ifx_MXAES_MASKED_USER_RANGE*)(0x42271000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_MXAES_MASKED_INTERNAL_RANGE      /*lint --e(923, 9078)*/ ((*(Ifx_MXAES_MASKED_INTERNAL_RANGE*)(0x42271800u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXAES_Registers_Cfg_MXAES
 * \{  */
/** \brief 0, AES configuration register */
#define REG_MXAES_UNMASKED_USER_RANGE_CFG       /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_CFG*)(0x42270000u + PPCA_REMAP_OFFSET_2))
/** \brief C, AES command register */
#define REG_MXAES_UNMASKED_USER_RANGE_CMD       /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_CMD*)(0x4227000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 14, AES status register */
#define REG_MXAES_UNMASKED_USER_RANGE_STAT      /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_STAT*)(0x42270014u + PPCA_REMAP_OFFSET_2))
/** \brief 60, AES configuration register 2 */
#define REG_MXAES_UNMASKED_USER_RANGE_CFG_2     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_CFG_2*)(0x42270060u + PPCA_REMAP_OFFSET_2))
/** \brief 80, AES interrupt cause register */
#define REG_MXAES_UNMASKED_USER_RANGE_INTR      /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_INTR*)(0x42270080u + PPCA_REMAP_OFFSET_2))
/** \brief 84, AES interrupt set register */
#define REG_MXAES_UNMASKED_USER_RANGE_INTR_SET  /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_INTR_SET*)(0x42270084u + PPCA_REMAP_OFFSET_2))
/** \brief 8C, AES interrupt mask register */
#define REG_MXAES_UNMASKED_USER_RANGE_INTR_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASK*)(0x4227008Cu + PPCA_REMAP_OFFSET_2))
/** \brief 90, AES masked interrupt register */
#define REG_MXAES_UNMASKED_USER_RANGE_INTR_MASKED /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_INTR_MASKED*)(0x42270090u + PPCA_REMAP_OFFSET_2))
/** \brief C0, AES clear register */
#define REG_MXAES_UNMASKED_USER_RANGE_CLEAR     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_CLEAR*)(0x422700C0u + PPCA_REMAP_OFFSET_2))
/** \brief DC, AES Bus counter register */
#define REG_MXAES_UNMASKED_USER_RANGE_BUS_COUNTER /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_BUS_COUNTER*)(0x422700DCu + PPCA_REMAP_OFFSET_2))
/** \brief E0, AES Q-channel control register */
#define REG_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_USER_RANGE_QCHAN_CTL*)(0x422700E0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, AES test register 1 */
#define REG_MXAES_UNMASKED_INTERNAL_RANGE_TEST_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_UNMASKED_INTERNAL_RANGE_TEST_1*)(0x42270800u + PPCA_REMAP_OFFSET_2))
/** \brief 0, AES user seeding register */
#define REG_MXAES_MASKED_USER_RANGE_SEED_U      /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_SEED_U*)(0x42271000u + PPCA_REMAP_OFFSET_2))
/** \brief 100, AES share 0 word 0 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_0_0     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_0_0*)(0x42271100u + PPCA_REMAP_OFFSET_2))
/** \brief 10C, AES share 0 word 1 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_0_1     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_0_1*)(0x4227110Cu + PPCA_REMAP_OFFSET_2))
/** \brief 118, AES share 0 word 2 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_0_2     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_0_2*)(0x42271118u + PPCA_REMAP_OFFSET_2))
/** \brief 124, AES share 0 word 3 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_0_3     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_0_3*)(0x42271124u + PPCA_REMAP_OFFSET_2))
/** \brief 130, AES share 0 word 4 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_0_4     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_0_4*)(0x42271130u + PPCA_REMAP_OFFSET_2))
/** \brief 13C, AES share 0 word 5 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_0_5     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_0_5*)(0x4227113Cu + PPCA_REMAP_OFFSET_2))
/** \brief 148, AES share 0 word 6 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_0_6     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_0_6*)(0x42271148u + PPCA_REMAP_OFFSET_2))
/** \brief 154, AES share 0 word 7 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_0_7     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_0_7*)(0x42271154u + PPCA_REMAP_OFFSET_2))
/** \brief 160, AES share 1 word 0 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_1_0     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_1_0*)(0x42271160u + PPCA_REMAP_OFFSET_2))
/** \brief 16C, AES share 1 word 1 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_1_1     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_1_1*)(0x4227116Cu + PPCA_REMAP_OFFSET_2))
/** \brief 178, AES share 1 word 2 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_1_2     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_1_2*)(0x42271178u + PPCA_REMAP_OFFSET_2))
/** \brief 184, AES share 1 word 3 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_1_3     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_1_3*)(0x42271184u + PPCA_REMAP_OFFSET_2))
/** \brief 190, AES share 1 word 4 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_1_4     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_1_4*)(0x42271190u + PPCA_REMAP_OFFSET_2))
/** \brief 19C, AES share 1 word 5 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_1_5     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_1_5*)(0x4227119Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1A8, AES share 1 word 6 key register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_1_6     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_1_6*)(0x422711A8u + PPCA_REMAP_OFFSET_2))
/** \brief 1B4, AES share 1 word 7 data register */
#define REG_MXAES_MASKED_USER_RANGE_KEY_1_7     /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_KEY_1_7*)(0x422711B4u + PPCA_REMAP_OFFSET_2))
/** \brief 400, AES share 0 word 0 data register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_0_0    /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_0_0*)(0x42271400u + PPCA_REMAP_OFFSET_2))
/** \brief 40C, AES share 0 word 1 data register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_0_1    /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_0_1*)(0x4227140Cu + PPCA_REMAP_OFFSET_2))
/** \brief 418, AES share 0 word 2 data register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_0_2    /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_0_2*)(0x42271418u + PPCA_REMAP_OFFSET_2))
/** \brief 424, AES share 0 word 3 data register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_0_3    /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_0_3*)(0x42271424u + PPCA_REMAP_OFFSET_2))
/** \brief 430, AES share 1 word 0 data register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_1_0    /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_1_0*)(0x42271430u + PPCA_REMAP_OFFSET_2))
/** \brief 43C, AES share 1 word 1 data register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_1_1    /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_1_1*)(0x4227143Cu + PPCA_REMAP_OFFSET_2))
/** \brief 448, AES share 1 word 2 data register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_1_2    /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_1_2*)(0x42271448u + PPCA_REMAP_OFFSET_2))
/** \brief 454, AES share 1 word 3 data register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_1_3    /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_1_3*)(0x42271454u + PPCA_REMAP_OFFSET_2))
/** \brief 490, AES share 0 word 0 data reread register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_RR_0_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_0*)(0x42271490u + PPCA_REMAP_OFFSET_2))
/** \brief 49C, AES share 0 word 1 data reread register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_RR_0_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_1*)(0x4227149Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4A8, AES share 0 word 2 data reread register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_RR_0_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_2*)(0x422714A8u + PPCA_REMAP_OFFSET_2))
/** \brief 4B4, AES share 0 word 3 data reread register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_RR_0_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_0_3*)(0x422714B4u + PPCA_REMAP_OFFSET_2))
/** \brief 4C0, AES share 1 word 0 data reread register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_RR_1_0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_0*)(0x422714C0u + PPCA_REMAP_OFFSET_2))
/** \brief 4CC, AES share 1 word 1 data reread register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_RR_1_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_1*)(0x422714CCu + PPCA_REMAP_OFFSET_2))
/** \brief 4D8, AES share 1 word 2 data reread register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_RR_1_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_2*)(0x422714D8u + PPCA_REMAP_OFFSET_2))
/** \brief 4E4, AES share 1 word 3 data reread register */
#define REG_MXAES_MASKED_USER_RANGE_DATA_RR_1_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_USER_RANGE_DATA_RR_1_3*)(0x422714E4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, AES second test register */
#define REG_MXAES_MASKED_INTERNAL_RANGE_TEST_2  /*lint --e(923, 9078)*/ (*(volatile Ifx_MXAES_MASKED_INTERNAL_RANGE_TEST_2*)(0x42271800u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXMXAES_REG_H_ */
