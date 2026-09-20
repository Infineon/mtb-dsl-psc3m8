/***************************************************************************//**
* \file IfxGPIO_bf.h
*
* \brief
* GPIO Bitfields mask and offset
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
* \defgroup IfxSfr_GPIO_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_GPIO_Registers
*
*******************************************************************************/

#ifndef _IFXGPIO_BF_H_
#define _IFXGPIO_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_GPIO_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_GPIO_SEC_INTR_CAUSE0_Bits.PORT_INT */
#define IFX_GPIO_SEC_INTR_CAUSE0_PORT_INT_LEN (32u)

/** \brief Mask for Ifx_GPIO_SEC_INTR_CAUSE0_Bits.PORT_INT */
#define IFX_GPIO_SEC_INTR_CAUSE0_PORT_INT_MSK (0xffffffffu)

/** \brief Offset for Ifx_GPIO_SEC_INTR_CAUSE0_Bits.PORT_INT */
#define IFX_GPIO_SEC_INTR_CAUSE0_PORT_INT_OFF (0u)

/** \brief Length for Ifx_GPIO_INTR_CAUSE0_Bits.PORT_INT */
#define IFX_GPIO_INTR_CAUSE0_PORT_INT_LEN (32u)

/** \brief Mask for Ifx_GPIO_INTR_CAUSE0_Bits.PORT_INT */
#define IFX_GPIO_INTR_CAUSE0_PORT_INT_MSK (0xffffffffu)

/** \brief Offset for Ifx_GPIO_INTR_CAUSE0_Bits.PORT_INT */
#define IFX_GPIO_INTR_CAUSE0_PORT_INT_OFF (0u)

/** \brief Length for Ifx_GPIO_VDD_ACTIVE_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_ACTIVE_VDDIO_ACTIVE_LEN (16u)

/** \brief Mask for Ifx_GPIO_VDD_ACTIVE_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_ACTIVE_VDDIO_ACTIVE_MSK (0xffffu)

/** \brief Offset for Ifx_GPIO_VDD_ACTIVE_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_ACTIVE_VDDIO_ACTIVE_OFF (0u)

/** \brief Length for Ifx_GPIO_VDD_ACTIVE_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_ACTIVE_VDDA_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_GPIO_VDD_ACTIVE_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_ACTIVE_VDDA_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_VDD_ACTIVE_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_ACTIVE_VDDA_ACTIVE_OFF (30u)

/** \brief Length for Ifx_GPIO_VDD_ACTIVE_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_ACTIVE_VDDD_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_GPIO_VDD_ACTIVE_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_ACTIVE_VDDD_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_VDD_ACTIVE_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_ACTIVE_VDDD_ACTIVE_OFF (31u)

/** \brief Length for Ifx_GPIO_VDD_INTR_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_VDDIO_ACTIVE_LEN (16u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_VDDIO_ACTIVE_MSK (0xffffu)

/** \brief Offset for Ifx_GPIO_VDD_INTR_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_VDDIO_ACTIVE_OFF (0u)

/** \brief Length for Ifx_GPIO_VDD_INTR_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_VDDA_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_VDDA_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_VDD_INTR_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_VDDA_ACTIVE_OFF (30u)

/** \brief Length for Ifx_GPIO_VDD_INTR_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_VDDD_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_VDDD_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_VDD_INTR_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_VDDD_ACTIVE_OFF (31u)

/** \brief Length for Ifx_GPIO_VDD_INTR_MASK_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASK_VDDIO_ACTIVE_LEN (16u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_MASK_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASK_VDDIO_ACTIVE_MSK (0xffffu)

/** \brief Offset for Ifx_GPIO_VDD_INTR_MASK_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASK_VDDIO_ACTIVE_OFF (0u)

/** \brief Length for Ifx_GPIO_VDD_INTR_MASK_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASK_VDDA_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_MASK_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASK_VDDA_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_VDD_INTR_MASK_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASK_VDDA_ACTIVE_OFF (30u)

/** \brief Length for Ifx_GPIO_VDD_INTR_MASK_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASK_VDDD_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_MASK_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASK_VDDD_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_VDD_INTR_MASK_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASK_VDDD_ACTIVE_OFF (31u)

/** \brief Length for Ifx_GPIO_VDD_INTR_MASKED_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASKED_VDDIO_ACTIVE_LEN (16u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_MASKED_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASKED_VDDIO_ACTIVE_MSK (0xffffu)

/** \brief Offset for Ifx_GPIO_VDD_INTR_MASKED_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASKED_VDDIO_ACTIVE_OFF (0u)

/** \brief Length for Ifx_GPIO_VDD_INTR_MASKED_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASKED_VDDA_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_MASKED_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASKED_VDDA_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_VDD_INTR_MASKED_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASKED_VDDA_ACTIVE_OFF (30u)

/** \brief Length for Ifx_GPIO_VDD_INTR_MASKED_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASKED_VDDD_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_MASKED_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASKED_VDDD_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_VDD_INTR_MASKED_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_MASKED_VDDD_ACTIVE_OFF (31u)

/** \brief Length for Ifx_GPIO_VDD_INTR_SET_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_SET_VDDIO_ACTIVE_LEN (16u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_SET_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_SET_VDDIO_ACTIVE_MSK (0xffffu)

/** \brief Offset for Ifx_GPIO_VDD_INTR_SET_Bits.VDDIO_ACTIVE */
#define IFX_GPIO_VDD_INTR_SET_VDDIO_ACTIVE_OFF (0u)

/** \brief Length for Ifx_GPIO_VDD_INTR_SET_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_SET_VDDA_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_SET_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_SET_VDDA_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_VDD_INTR_SET_Bits.VDDA_ACTIVE */
#define IFX_GPIO_VDD_INTR_SET_VDDA_ACTIVE_OFF (30u)

/** \brief Length for Ifx_GPIO_VDD_INTR_SET_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_SET_VDDD_ACTIVE_LEN (1u)

/** \brief Mask for Ifx_GPIO_VDD_INTR_SET_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_SET_VDDD_ACTIVE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_VDD_INTR_SET_Bits.VDDD_ACTIVE */
#define IFX_GPIO_VDD_INTR_SET_VDDD_ACTIVE_OFF (31u)

/** \brief Length for Ifx_GPIO_PRT_OUT_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_OUT0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_OUT0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_OUT0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_OUT_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_OUT1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_OUT1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_OUT1_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_OUT_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_OUT2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_OUT2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_OUT2_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_OUT_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_OUT3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_OUT3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_OUT3_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_OUT_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_OUT4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_OUT4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_OUT4_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_OUT_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_OUT5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_OUT5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_OUT5_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_OUT_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_OUT6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_OUT6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_OUT6_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_OUT_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_OUT7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_OUT7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_OUT7_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_CLR_OUT0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_CLR_OUT0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_CLR_OUT0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_CLR_OUT1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_CLR_OUT1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_CLR_OUT1_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_CLR_OUT2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_CLR_OUT2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_CLR_OUT2_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_CLR_OUT3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_CLR_OUT3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_CLR_OUT3_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_CLR_OUT4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_CLR_OUT4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_CLR_OUT4_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_CLR_OUT5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_CLR_OUT5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_CLR_OUT5_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_CLR_OUT6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_CLR_OUT6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_CLR_OUT6_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_CLR_OUT7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_CLR_OUT7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_CLR_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_CLR_OUT7_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_OUT_SET_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_SET_OUT0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_SET_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_SET_OUT0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_SET_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_SET_OUT0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_OUT_SET_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_SET_OUT1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_SET_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_SET_OUT1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_SET_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_SET_OUT1_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_OUT_SET_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_SET_OUT2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_SET_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_SET_OUT2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_SET_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_SET_OUT2_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_OUT_SET_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_SET_OUT3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_SET_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_SET_OUT3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_SET_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_SET_OUT3_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_OUT_SET_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_SET_OUT4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_SET_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_SET_OUT4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_SET_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_SET_OUT4_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_OUT_SET_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_SET_OUT5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_SET_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_SET_OUT5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_SET_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_SET_OUT5_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_OUT_SET_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_SET_OUT6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_SET_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_SET_OUT6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_SET_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_SET_OUT6_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_OUT_SET_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_SET_OUT7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_SET_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_SET_OUT7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_SET_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_SET_OUT7_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_OUT_INV_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_INV_OUT0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_INV_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_INV_OUT0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_INV_Bits.OUT0 */
#define IFX_GPIO_PRT_OUT_INV_OUT0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_OUT_INV_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_INV_OUT1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_INV_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_INV_OUT1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_INV_Bits.OUT1 */
#define IFX_GPIO_PRT_OUT_INV_OUT1_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_OUT_INV_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_INV_OUT2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_INV_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_INV_OUT2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_INV_Bits.OUT2 */
#define IFX_GPIO_PRT_OUT_INV_OUT2_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_OUT_INV_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_INV_OUT3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_INV_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_INV_OUT3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_INV_Bits.OUT3 */
#define IFX_GPIO_PRT_OUT_INV_OUT3_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_OUT_INV_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_INV_OUT4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_INV_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_INV_OUT4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_INV_Bits.OUT4 */
#define IFX_GPIO_PRT_OUT_INV_OUT4_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_OUT_INV_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_INV_OUT5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_INV_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_INV_OUT5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_INV_Bits.OUT5 */
#define IFX_GPIO_PRT_OUT_INV_OUT5_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_OUT_INV_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_INV_OUT6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_INV_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_INV_OUT6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_INV_Bits.OUT6 */
#define IFX_GPIO_PRT_OUT_INV_OUT6_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_OUT_INV_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_INV_OUT7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_OUT_INV_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_INV_OUT7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_OUT_INV_Bits.OUT7 */
#define IFX_GPIO_PRT_OUT_INV_OUT7_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_IN_Bits.IN0 */
#define IFX_GPIO_PRT_IN_IN0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_IN_Bits.IN0 */
#define IFX_GPIO_PRT_IN_IN0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_IN_Bits.IN0 */
#define IFX_GPIO_PRT_IN_IN0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_IN_Bits.IN1 */
#define IFX_GPIO_PRT_IN_IN1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_IN_Bits.IN1 */
#define IFX_GPIO_PRT_IN_IN1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_IN_Bits.IN1 */
#define IFX_GPIO_PRT_IN_IN1_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_IN_Bits.IN2 */
#define IFX_GPIO_PRT_IN_IN2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_IN_Bits.IN2 */
#define IFX_GPIO_PRT_IN_IN2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_IN_Bits.IN2 */
#define IFX_GPIO_PRT_IN_IN2_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_IN_Bits.IN3 */
#define IFX_GPIO_PRT_IN_IN3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_IN_Bits.IN3 */
#define IFX_GPIO_PRT_IN_IN3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_IN_Bits.IN3 */
#define IFX_GPIO_PRT_IN_IN3_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_IN_Bits.IN4 */
#define IFX_GPIO_PRT_IN_IN4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_IN_Bits.IN4 */
#define IFX_GPIO_PRT_IN_IN4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_IN_Bits.IN4 */
#define IFX_GPIO_PRT_IN_IN4_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_IN_Bits.IN5 */
#define IFX_GPIO_PRT_IN_IN5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_IN_Bits.IN5 */
#define IFX_GPIO_PRT_IN_IN5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_IN_Bits.IN5 */
#define IFX_GPIO_PRT_IN_IN5_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_IN_Bits.IN6 */
#define IFX_GPIO_PRT_IN_IN6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_IN_Bits.IN6 */
#define IFX_GPIO_PRT_IN_IN6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_IN_Bits.IN6 */
#define IFX_GPIO_PRT_IN_IN6_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_IN_Bits.IN7 */
#define IFX_GPIO_PRT_IN_IN7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_IN_Bits.IN7 */
#define IFX_GPIO_PRT_IN_IN7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_IN_Bits.IN7 */
#define IFX_GPIO_PRT_IN_IN7_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_IN_Bits.FLT_IN */
#define IFX_GPIO_PRT_IN_FLT_IN_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_IN_Bits.FLT_IN */
#define IFX_GPIO_PRT_IN_FLT_IN_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_IN_Bits.FLT_IN */
#define IFX_GPIO_PRT_IN_FLT_IN_OFF (8u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_EDGE0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_EDGE0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_EDGE0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_EDGE1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_EDGE1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_EDGE1_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_EDGE2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_EDGE2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_EDGE2_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_EDGE3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_EDGE3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_EDGE3_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_EDGE4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_EDGE4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_EDGE4_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_EDGE5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_EDGE5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_EDGE5_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_EDGE6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_EDGE6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_EDGE6_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_EDGE7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_EDGE7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_EDGE7_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_FLT_EDGE_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_FLT_EDGE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_FLT_EDGE_OFF (8u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.IN_IN0 */
#define IFX_GPIO_PRT_INTR_IN_IN0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.IN_IN0 */
#define IFX_GPIO_PRT_INTR_IN_IN0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.IN_IN0 */
#define IFX_GPIO_PRT_INTR_IN_IN0_OFF (16u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.IN_IN1 */
#define IFX_GPIO_PRT_INTR_IN_IN1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.IN_IN1 */
#define IFX_GPIO_PRT_INTR_IN_IN1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.IN_IN1 */
#define IFX_GPIO_PRT_INTR_IN_IN1_OFF (17u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.IN_IN2 */
#define IFX_GPIO_PRT_INTR_IN_IN2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.IN_IN2 */
#define IFX_GPIO_PRT_INTR_IN_IN2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.IN_IN2 */
#define IFX_GPIO_PRT_INTR_IN_IN2_OFF (18u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.IN_IN3 */
#define IFX_GPIO_PRT_INTR_IN_IN3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.IN_IN3 */
#define IFX_GPIO_PRT_INTR_IN_IN3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.IN_IN3 */
#define IFX_GPIO_PRT_INTR_IN_IN3_OFF (19u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.IN_IN4 */
#define IFX_GPIO_PRT_INTR_IN_IN4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.IN_IN4 */
#define IFX_GPIO_PRT_INTR_IN_IN4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.IN_IN4 */
#define IFX_GPIO_PRT_INTR_IN_IN4_OFF (20u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.IN_IN5 */
#define IFX_GPIO_PRT_INTR_IN_IN5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.IN_IN5 */
#define IFX_GPIO_PRT_INTR_IN_IN5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.IN_IN5 */
#define IFX_GPIO_PRT_INTR_IN_IN5_OFF (21u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.IN_IN6 */
#define IFX_GPIO_PRT_INTR_IN_IN6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.IN_IN6 */
#define IFX_GPIO_PRT_INTR_IN_IN6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.IN_IN6 */
#define IFX_GPIO_PRT_INTR_IN_IN6_OFF (22u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.IN_IN7 */
#define IFX_GPIO_PRT_INTR_IN_IN7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.IN_IN7 */
#define IFX_GPIO_PRT_INTR_IN_IN7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.IN_IN7 */
#define IFX_GPIO_PRT_INTR_IN_IN7_OFF (23u)

/** \brief Length for Ifx_GPIO_PRT_INTR_Bits.FLT_IN_IN */
#define IFX_GPIO_PRT_INTR_FLT_IN_IN_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_Bits.FLT_IN_IN */
#define IFX_GPIO_PRT_INTR_FLT_IN_IN_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_Bits.FLT_IN_IN */
#define IFX_GPIO_PRT_INTR_FLT_IN_IN_OFF (24u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE1_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE2_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE3_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE4_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE5_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE6_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASK_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_MASK_EDGE7_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASK_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_MASK_FLT_EDGE_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASK_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_MASK_FLT_EDGE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASK_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_MASK_FLT_EDGE_OFF (8u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE1_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE2_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE3_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE4_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE5_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE6_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASKED_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_MASKED_EDGE7_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_INTR_MASKED_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_MASKED_FLT_EDGE_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_MASKED_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_MASKED_FLT_EDGE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_MASKED_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_MASKED_FLT_EDGE_OFF (8u)

/** \brief Length for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_SET_EDGE0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_SET_EDGE0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE0 */
#define IFX_GPIO_PRT_INTR_SET_EDGE0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_SET_EDGE1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_SET_EDGE1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE1 */
#define IFX_GPIO_PRT_INTR_SET_EDGE1_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_SET_EDGE2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_SET_EDGE2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE2 */
#define IFX_GPIO_PRT_INTR_SET_EDGE2_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_SET_EDGE3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_SET_EDGE3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE3 */
#define IFX_GPIO_PRT_INTR_SET_EDGE3_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_SET_EDGE4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_SET_EDGE4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE4 */
#define IFX_GPIO_PRT_INTR_SET_EDGE4_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_SET_EDGE5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_SET_EDGE5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE5 */
#define IFX_GPIO_PRT_INTR_SET_EDGE5_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_SET_EDGE6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_SET_EDGE6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE6 */
#define IFX_GPIO_PRT_INTR_SET_EDGE6_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_SET_EDGE7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_SET_EDGE7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_SET_Bits.EDGE7 */
#define IFX_GPIO_PRT_INTR_SET_EDGE7_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_INTR_SET_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_SET_FLT_EDGE_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_SET_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_SET_FLT_EDGE_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_SET_Bits.FLT_EDGE */
#define IFX_GPIO_PRT_INTR_SET_FLT_EDGE_OFF (8u)

/** \brief Length for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE0_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE0_SEL_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE0_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE0_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE0_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE0_SEL_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE1_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE1_SEL_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE1_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE1_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE1_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE1_SEL_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE2_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE2_SEL_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE2_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE2_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE2_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE2_SEL_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE3_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE3_SEL_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE3_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE3_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE3_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE3_SEL_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE4_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE4_SEL_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE4_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE4_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE4_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE4_SEL_OFF (8u)

/** \brief Length for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE5_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE5_SEL_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE5_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE5_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE5_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE5_SEL_OFF (10u)

/** \brief Length for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE6_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE6_SEL_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE6_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE6_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE6_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE6_SEL_OFF (12u)

/** \brief Length for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE7_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE7_SEL_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE7_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE7_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_CFG_Bits.EDGE7_SEL */
#define IFX_GPIO_PRT_INTR_CFG_EDGE7_SEL_OFF (14u)

/** \brief Length for Ifx_GPIO_PRT_INTR_CFG_Bits.FLT_EDGE_SEL */
#define IFX_GPIO_PRT_INTR_CFG_FLT_EDGE_SEL_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_CFG_Bits.FLT_EDGE_SEL */
#define IFX_GPIO_PRT_INTR_CFG_FLT_EDGE_SEL_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_CFG_Bits.FLT_EDGE_SEL */
#define IFX_GPIO_PRT_INTR_CFG_FLT_EDGE_SEL_OFF (16u)

/** \brief Length for Ifx_GPIO_PRT_INTR_CFG_Bits.FLT_SEL */
#define IFX_GPIO_PRT_INTR_CFG_FLT_SEL_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_INTR_CFG_Bits.FLT_SEL */
#define IFX_GPIO_PRT_INTR_CFG_FLT_SEL_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_INTR_CFG_Bits.FLT_SEL */
#define IFX_GPIO_PRT_INTR_CFG_FLT_SEL_OFF (18u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE0 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE0 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE0 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.IN_EN0 */
#define IFX_GPIO_PRT_CFG_IN_EN0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.IN_EN0 */
#define IFX_GPIO_PRT_CFG_IN_EN0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.IN_EN0 */
#define IFX_GPIO_PRT_CFG_IN_EN0_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE1 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE1_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE1 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE1_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE1 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE1_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.IN_EN1 */
#define IFX_GPIO_PRT_CFG_IN_EN1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.IN_EN1 */
#define IFX_GPIO_PRT_CFG_IN_EN1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.IN_EN1 */
#define IFX_GPIO_PRT_CFG_IN_EN1_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE2 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE2_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE2 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE2_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE2 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE2_OFF (8u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.IN_EN2 */
#define IFX_GPIO_PRT_CFG_IN_EN2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.IN_EN2 */
#define IFX_GPIO_PRT_CFG_IN_EN2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.IN_EN2 */
#define IFX_GPIO_PRT_CFG_IN_EN2_OFF (11u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE3 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE3_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE3 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE3_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE3 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE3_OFF (12u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.IN_EN3 */
#define IFX_GPIO_PRT_CFG_IN_EN3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.IN_EN3 */
#define IFX_GPIO_PRT_CFG_IN_EN3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.IN_EN3 */
#define IFX_GPIO_PRT_CFG_IN_EN3_OFF (15u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE4 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE4_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE4 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE4_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE4 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE4_OFF (16u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.IN_EN4 */
#define IFX_GPIO_PRT_CFG_IN_EN4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.IN_EN4 */
#define IFX_GPIO_PRT_CFG_IN_EN4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.IN_EN4 */
#define IFX_GPIO_PRT_CFG_IN_EN4_OFF (19u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE5 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE5_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE5 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE5_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE5 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE5_OFF (20u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.IN_EN5 */
#define IFX_GPIO_PRT_CFG_IN_EN5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.IN_EN5 */
#define IFX_GPIO_PRT_CFG_IN_EN5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.IN_EN5 */
#define IFX_GPIO_PRT_CFG_IN_EN5_OFF (23u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE6 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE6_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE6 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE6_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE6 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE6_OFF (24u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.IN_EN6 */
#define IFX_GPIO_PRT_CFG_IN_EN6_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.IN_EN6 */
#define IFX_GPIO_PRT_CFG_IN_EN6_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.IN_EN6 */
#define IFX_GPIO_PRT_CFG_IN_EN6_OFF (27u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE7 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE7_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE7 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE7_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.DRIVE_MODE7 */
#define IFX_GPIO_PRT_CFG_DRIVE_MODE7_OFF (28u)

/** \brief Length for Ifx_GPIO_PRT_CFG_Bits.IN_EN7 */
#define IFX_GPIO_PRT_CFG_IN_EN7_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_Bits.IN_EN7 */
#define IFX_GPIO_PRT_CFG_IN_EN7_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_Bits.IN_EN7 */
#define IFX_GPIO_PRT_CFG_IN_EN7_OFF (31u)

/** \brief Length for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL0_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL0_0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL0_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL0_0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL0_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL0_0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL1_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL1_0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL1_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL1_0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL1_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL1_0_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL2_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL2_0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL2_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL2_0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL2_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL2_0_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL3_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL3_0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL3_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL3_0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL3_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL3_0_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL4_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL4_0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL4_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL4_0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL4_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL4_0_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL5_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL5_0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL5_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL5_0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL5_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL5_0_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL6_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL6_0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL6_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL6_0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL6_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL6_0_OFF (6u)

/** \brief Length for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL7_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL7_0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL7_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL7_0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_IN_Bits.VTRIP_SEL7_0 */
#define IFX_GPIO_PRT_CFG_IN_VTRIP_SEL7_0_OFF (7u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW0 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW0_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW0 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW0_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW0 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW1 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW1_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW1 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW1_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW1 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW1_OFF (1u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW2 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW2_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW2 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW2_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW2 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW2_OFF (2u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW3 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW3_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW3 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW3_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW3 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW3_OFF (3u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW4 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW4_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW4 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW4_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW4 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW4_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW5 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW5_LEN (1u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW5 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW5_MSK (0x1u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.SLOW5 */
#define IFX_GPIO_PRT_CFG_OUT_SLOW5_OFF (5u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL0 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL0_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL0 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL0_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL0 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL0_OFF (16u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL1 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL1_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL1 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL1_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL1 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL1_OFF (18u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL2 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL2_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL2 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL2_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL2 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL2_OFF (20u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL3 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL3_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL3 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL3_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL3 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL3_OFF (22u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL4 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL4_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL4 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL4_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL4 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL4_OFF (24u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL5 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL5_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL5 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL5_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL5 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL5_OFF (26u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL6 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL6_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL6 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL6_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL6 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL6_OFF (28u)

/** \brief Length for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL7 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL7_LEN (2u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL7 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL7_MSK (0x3u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_OUT_Bits.DRIVE_SEL7 */
#define IFX_GPIO_PRT_CFG_OUT_DRIVE_SEL7_OFF (30u)

/** \brief Length for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW0 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW0_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW0 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW0_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW0 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW1 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW1_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW1 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW1_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW1 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW1_OFF (4u)

/** \brief Length for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW2 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW2_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW2 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW2_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW2 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW2_OFF (8u)

/** \brief Length for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW3 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW3_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW3 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW3_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW3 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW3_OFF (12u)

/** \brief Length for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW4 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW4_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW4 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW4_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW4 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW4_OFF (16u)

/** \brief Length for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW5 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW5_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW5 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW5_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW5 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW5_OFF (20u)

/** \brief Length for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW6 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW6_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW6 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW6_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW6 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW6_OFF (24u)

/** \brief Length for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW7 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW7_LEN (3u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW7 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW7_MSK (0x7u)

/** \brief Offset for Ifx_GPIO_PRT_CFG_SLEW_EXT_Bits.SLEW7 */
#define IFX_GPIO_PRT_CFG_SLEW_EXT_SLEW7_OFF (28u)

/** \brief Length for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT0 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT0_LEN (5u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT0 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT0_MSK (0x1fu)

/** \brief Offset for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT0 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT0_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT1 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT1_LEN (5u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT1 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT1_MSK (0x1fu)

/** \brief Offset for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT1 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT1_OFF (8u)

/** \brief Length for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT2 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT2_LEN (5u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT2 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT2_MSK (0x1fu)

/** \brief Offset for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT2 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT2_OFF (16u)

/** \brief Length for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT3 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT3_LEN (5u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT3 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT3_MSK (0x1fu)

/** \brief Offset for Ifx_GPIO_PRT_CFG_DRIVE_EXT0_Bits.DRIVE_SEL_EXT3 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT0_DRIVE_SEL_EXT3_OFF (24u)

/** \brief Length for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT4 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT4_LEN (5u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT4 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT4_MSK (0x1fu)

/** \brief Offset for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT4 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT4_OFF (0u)

/** \brief Length for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT5 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT5_LEN (5u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT5 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT5_MSK (0x1fu)

/** \brief Offset for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT5 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT5_OFF (8u)

/** \brief Length for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT6 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT6_LEN (5u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT6 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT6_MSK (0x1fu)

/** \brief Offset for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT6 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT6_OFF (16u)

/** \brief Length for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT7 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT7_LEN (5u)

/** \brief Mask for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT7 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT7_MSK (0x1fu)

/** \brief Offset for Ifx_GPIO_PRT_CFG_DRIVE_EXT1_Bits.DRIVE_SEL_EXT7 */
#define IFX_GPIO_PRT_CFG_DRIVE_EXT1_DRIVE_SEL_EXT7_OFF (24u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXGPIO_BF_H_ */
