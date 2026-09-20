/***************************************************************************//**
* \file IfxCANFD_bf.h
*
* \brief
* CANFD Bitfields mask and offset
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
* \defgroup IfxSfr_CANFD_Registers_BitfieldsMask Bitfields mask and offset
* \ingroup IfxSfr_CANFD_Registers
*
*******************************************************************************/

#ifndef _IFXCANFD_BF_H_
#define _IFXCANFD_BF_H_ 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_CANFD_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_CANFD_CTL_Bits.STOP_REQ */
#define IFX_CANFD_CTL_STOP_REQ_LEN (8u)

/** \brief Mask for Ifx_CANFD_CTL_Bits.STOP_REQ */
#define IFX_CANFD_CTL_STOP_REQ_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CTL_Bits.STOP_REQ */
#define IFX_CANFD_CTL_STOP_REQ_OFF (0u)

/** \brief Length for Ifx_CANFD_STATUS_Bits.STOP_ACK */
#define IFX_CANFD_STATUS_STOP_ACK_LEN (8u)

/** \brief Mask for Ifx_CANFD_STATUS_Bits.STOP_ACK */
#define IFX_CANFD_STATUS_STOP_ACK_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_STATUS_Bits.STOP_ACK */
#define IFX_CANFD_STATUS_STOP_ACK_OFF (0u)

/** \brief Length for Ifx_CANFD_INTR0_CAUSE_Bits.INT0 */
#define IFX_CANFD_INTR0_CAUSE_INT0_LEN (8u)

/** \brief Mask for Ifx_CANFD_INTR0_CAUSE_Bits.INT0 */
#define IFX_CANFD_INTR0_CAUSE_INT0_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_INTR0_CAUSE_Bits.INT0 */
#define IFX_CANFD_INTR0_CAUSE_INT0_OFF (0u)

/** \brief Length for Ifx_CANFD_INTR1_CAUSE_Bits.INT1 */
#define IFX_CANFD_INTR1_CAUSE_INT1_LEN (8u)

/** \brief Mask for Ifx_CANFD_INTR1_CAUSE_Bits.INT1 */
#define IFX_CANFD_INTR1_CAUSE_INT1_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_INTR1_CAUSE_Bits.INT1 */
#define IFX_CANFD_INTR1_CAUSE_INT1_OFF (0u)

/** \brief Length for Ifx_CANFD_TS_CTL_Bits.PRESCALE */
#define IFX_CANFD_TS_CTL_PRESCALE_LEN (16u)

/** \brief Mask for Ifx_CANFD_TS_CTL_Bits.PRESCALE */
#define IFX_CANFD_TS_CTL_PRESCALE_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_TS_CTL_Bits.PRESCALE */
#define IFX_CANFD_TS_CTL_PRESCALE_OFF (0u)

/** \brief Length for Ifx_CANFD_TS_CTL_Bits.ENABLED */
#define IFX_CANFD_TS_CTL_ENABLED_LEN (1u)

/** \brief Mask for Ifx_CANFD_TS_CTL_Bits.ENABLED */
#define IFX_CANFD_TS_CTL_ENABLED_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_TS_CTL_Bits.ENABLED */
#define IFX_CANFD_TS_CTL_ENABLED_OFF (31u)

/** \brief Length for Ifx_CANFD_TS_CNT_Bits.VALUE */
#define IFX_CANFD_TS_CNT_VALUE_LEN (16u)

/** \brief Mask for Ifx_CANFD_TS_CNT_Bits.VALUE */
#define IFX_CANFD_TS_CNT_VALUE_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_TS_CNT_Bits.VALUE */
#define IFX_CANFD_TS_CNT_VALUE_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXFTOP_CTL_Bits.F0TPE */
#define IFX_CANFD_CH_RXFTOP_CTL_F0TPE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_RXFTOP_CTL_Bits.F0TPE */
#define IFX_CANFD_CH_RXFTOP_CTL_F0TPE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_RXFTOP_CTL_Bits.F0TPE */
#define IFX_CANFD_CH_RXFTOP_CTL_F0TPE_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXFTOP_CTL_Bits.F1TPE */
#define IFX_CANFD_CH_RXFTOP_CTL_F1TPE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_RXFTOP_CTL_Bits.F1TPE */
#define IFX_CANFD_CH_RXFTOP_CTL_F1TPE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_RXFTOP_CTL_Bits.F1TPE */
#define IFX_CANFD_CH_RXFTOP_CTL_F1TPE_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_RXFTOP0_STAT_Bits.F0TA */
#define IFX_CANFD_CH_RXFTOP0_STAT_F0TA_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_RXFTOP0_STAT_Bits.F0TA */
#define IFX_CANFD_CH_RXFTOP0_STAT_F0TA_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_RXFTOP0_STAT_Bits.F0TA */
#define IFX_CANFD_CH_RXFTOP0_STAT_F0TA_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXFTOP0_DATA_Bits.F0TD */
#define IFX_CANFD_CH_RXFTOP0_DATA_F0TD_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_RXFTOP0_DATA_Bits.F0TD */
#define IFX_CANFD_CH_RXFTOP0_DATA_F0TD_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_RXFTOP0_DATA_Bits.F0TD */
#define IFX_CANFD_CH_RXFTOP0_DATA_F0TD_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXFTOP1_STAT_Bits.F1TA */
#define IFX_CANFD_CH_RXFTOP1_STAT_F1TA_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_RXFTOP1_STAT_Bits.F1TA */
#define IFX_CANFD_CH_RXFTOP1_STAT_F1TA_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_RXFTOP1_STAT_Bits.F1TA */
#define IFX_CANFD_CH_RXFTOP1_STAT_F1TA_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXFTOP1_DATA_Bits.F1TD */
#define IFX_CANFD_CH_RXFTOP1_DATA_F1TD_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_RXFTOP1_DATA_Bits.F1TD */
#define IFX_CANFD_CH_RXFTOP1_DATA_F1TD_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_RXFTOP1_DATA_Bits.F1TD */
#define IFX_CANFD_CH_RXFTOP1_DATA_F1TD_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_CREL_Bits.DAY */
#define IFX_CANFD_CH_CREL_DAY_LEN (8u)

/** \brief Mask for Ifx_CANFD_CH_CREL_Bits.DAY */
#define IFX_CANFD_CH_CREL_DAY_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CH_CREL_Bits.DAY */
#define IFX_CANFD_CH_CREL_DAY_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_CREL_Bits.MON */
#define IFX_CANFD_CH_CREL_MON_LEN (8u)

/** \brief Mask for Ifx_CANFD_CH_CREL_Bits.MON */
#define IFX_CANFD_CH_CREL_MON_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CH_CREL_Bits.MON */
#define IFX_CANFD_CH_CREL_MON_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_CREL_Bits.YEAR */
#define IFX_CANFD_CH_CREL_YEAR_LEN (4u)

/** \brief Mask for Ifx_CANFD_CH_CREL_Bits.YEAR */
#define IFX_CANFD_CH_CREL_YEAR_MSK (0xfu)

/** \brief Offset for Ifx_CANFD_CH_CREL_Bits.YEAR */
#define IFX_CANFD_CH_CREL_YEAR_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_CREL_Bits.SUBSTEP */
#define IFX_CANFD_CH_CREL_SUBSTEP_LEN (4u)

/** \brief Mask for Ifx_CANFD_CH_CREL_Bits.SUBSTEP */
#define IFX_CANFD_CH_CREL_SUBSTEP_MSK (0xfu)

/** \brief Offset for Ifx_CANFD_CH_CREL_Bits.SUBSTEP */
#define IFX_CANFD_CH_CREL_SUBSTEP_OFF (20u)

/** \brief Length for Ifx_CANFD_CH_CREL_Bits.STEP */
#define IFX_CANFD_CH_CREL_STEP_LEN (4u)

/** \brief Mask for Ifx_CANFD_CH_CREL_Bits.STEP */
#define IFX_CANFD_CH_CREL_STEP_MSK (0xfu)

/** \brief Offset for Ifx_CANFD_CH_CREL_Bits.STEP */
#define IFX_CANFD_CH_CREL_STEP_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_CREL_Bits.REL */
#define IFX_CANFD_CH_CREL_REL_LEN (4u)

/** \brief Mask for Ifx_CANFD_CH_CREL_Bits.REL */
#define IFX_CANFD_CH_CREL_REL_MSK (0xfu)

/** \brief Offset for Ifx_CANFD_CH_CREL_Bits.REL */
#define IFX_CANFD_CH_CREL_REL_OFF (28u)

/** \brief Length for Ifx_CANFD_CH_ENDN_Bits.ETV */
#define IFX_CANFD_CH_ENDN_ETV_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_ENDN_Bits.ETV */
#define IFX_CANFD_CH_ENDN_ETV_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_ENDN_Bits.ETV */
#define IFX_CANFD_CH_ENDN_ETV_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_DBTP_Bits.DSJW */
#define IFX_CANFD_CH_DBTP_DSJW_LEN (4u)

/** \brief Mask for Ifx_CANFD_CH_DBTP_Bits.DSJW */
#define IFX_CANFD_CH_DBTP_DSJW_MSK (0xfu)

/** \brief Offset for Ifx_CANFD_CH_DBTP_Bits.DSJW */
#define IFX_CANFD_CH_DBTP_DSJW_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_DBTP_Bits.DTSEG2 */
#define IFX_CANFD_CH_DBTP_DTSEG2_LEN (4u)

/** \brief Mask for Ifx_CANFD_CH_DBTP_Bits.DTSEG2 */
#define IFX_CANFD_CH_DBTP_DTSEG2_MSK (0xfu)

/** \brief Offset for Ifx_CANFD_CH_DBTP_Bits.DTSEG2 */
#define IFX_CANFD_CH_DBTP_DTSEG2_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_DBTP_Bits.DTSEG1 */
#define IFX_CANFD_CH_DBTP_DTSEG1_LEN (5u)

/** \brief Mask for Ifx_CANFD_CH_DBTP_Bits.DTSEG1 */
#define IFX_CANFD_CH_DBTP_DTSEG1_MSK (0x1fu)

/** \brief Offset for Ifx_CANFD_CH_DBTP_Bits.DTSEG1 */
#define IFX_CANFD_CH_DBTP_DTSEG1_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_DBTP_Bits.DBRP */
#define IFX_CANFD_CH_DBTP_DBRP_LEN (5u)

/** \brief Mask for Ifx_CANFD_CH_DBTP_Bits.DBRP */
#define IFX_CANFD_CH_DBTP_DBRP_MSK (0x1fu)

/** \brief Offset for Ifx_CANFD_CH_DBTP_Bits.DBRP */
#define IFX_CANFD_CH_DBTP_DBRP_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_DBTP_Bits.TDC */
#define IFX_CANFD_CH_DBTP_TDC_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_DBTP_Bits.TDC */
#define IFX_CANFD_CH_DBTP_TDC_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_DBTP_Bits.TDC */
#define IFX_CANFD_CH_DBTP_TDC_OFF (23u)

/** \brief Length for Ifx_CANFD_CH_TEST_Bits.TAM */
#define IFX_CANFD_CH_TEST_TAM_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TEST_Bits.TAM */
#define IFX_CANFD_CH_TEST_TAM_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TEST_Bits.TAM */
#define IFX_CANFD_CH_TEST_TAM_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TEST_Bits.TAT */
#define IFX_CANFD_CH_TEST_TAT_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TEST_Bits.TAT */
#define IFX_CANFD_CH_TEST_TAT_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TEST_Bits.TAT */
#define IFX_CANFD_CH_TEST_TAT_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_TEST_Bits.CAM */
#define IFX_CANFD_CH_TEST_CAM_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TEST_Bits.CAM */
#define IFX_CANFD_CH_TEST_CAM_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TEST_Bits.CAM */
#define IFX_CANFD_CH_TEST_CAM_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_TEST_Bits.CAT */
#define IFX_CANFD_CH_TEST_CAT_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TEST_Bits.CAT */
#define IFX_CANFD_CH_TEST_CAT_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TEST_Bits.CAT */
#define IFX_CANFD_CH_TEST_CAT_OFF (3u)

/** \brief Length for Ifx_CANFD_CH_TEST_Bits.LBCK */
#define IFX_CANFD_CH_TEST_LBCK_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TEST_Bits.LBCK */
#define IFX_CANFD_CH_TEST_LBCK_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TEST_Bits.LBCK */
#define IFX_CANFD_CH_TEST_LBCK_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_TEST_Bits.TX */
#define IFX_CANFD_CH_TEST_TX_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_TEST_Bits.TX */
#define IFX_CANFD_CH_TEST_TX_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_TEST_Bits.TX */
#define IFX_CANFD_CH_TEST_TX_OFF (5u)

/** \brief Length for Ifx_CANFD_CH_TEST_Bits.RX */
#define IFX_CANFD_CH_TEST_RX_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TEST_Bits.RX */
#define IFX_CANFD_CH_TEST_RX_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TEST_Bits.RX */
#define IFX_CANFD_CH_TEST_RX_OFF (7u)

/** \brief Length for Ifx_CANFD_CH_RWD_Bits.WDC */
#define IFX_CANFD_CH_RWD_WDC_LEN (8u)

/** \brief Mask for Ifx_CANFD_CH_RWD_Bits.WDC */
#define IFX_CANFD_CH_RWD_WDC_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CH_RWD_Bits.WDC */
#define IFX_CANFD_CH_RWD_WDC_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RWD_Bits.WDV */
#define IFX_CANFD_CH_RWD_WDV_LEN (8u)

/** \brief Mask for Ifx_CANFD_CH_RWD_Bits.WDV */
#define IFX_CANFD_CH_RWD_WDV_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CH_RWD_Bits.WDV */
#define IFX_CANFD_CH_RWD_WDV_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.INIT */
#define IFX_CANFD_CH_CCCR_INIT_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.INIT */
#define IFX_CANFD_CH_CCCR_INIT_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.INIT */
#define IFX_CANFD_CH_CCCR_INIT_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.CCE */
#define IFX_CANFD_CH_CCCR_CCE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.CCE */
#define IFX_CANFD_CH_CCCR_CCE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.CCE */
#define IFX_CANFD_CH_CCCR_CCE_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.ASM */
#define IFX_CANFD_CH_CCCR_ASM_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.ASM */
#define IFX_CANFD_CH_CCCR_ASM_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.ASM */
#define IFX_CANFD_CH_CCCR_ASM_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.CSA */
#define IFX_CANFD_CH_CCCR_CSA_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.CSA */
#define IFX_CANFD_CH_CCCR_CSA_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.CSA */
#define IFX_CANFD_CH_CCCR_CSA_OFF (3u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.CSR */
#define IFX_CANFD_CH_CCCR_CSR_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.CSR */
#define IFX_CANFD_CH_CCCR_CSR_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.CSR */
#define IFX_CANFD_CH_CCCR_CSR_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.MON_ */
#define IFX_CANFD_CH_CCCR_MON__LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.MON_ */
#define IFX_CANFD_CH_CCCR_MON__MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.MON_ */
#define IFX_CANFD_CH_CCCR_MON__OFF (5u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.DAR */
#define IFX_CANFD_CH_CCCR_DAR_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.DAR */
#define IFX_CANFD_CH_CCCR_DAR_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.DAR */
#define IFX_CANFD_CH_CCCR_DAR_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.TEST */
#define IFX_CANFD_CH_CCCR_TEST_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.TEST */
#define IFX_CANFD_CH_CCCR_TEST_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.TEST */
#define IFX_CANFD_CH_CCCR_TEST_OFF (7u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.FDOE */
#define IFX_CANFD_CH_CCCR_FDOE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.FDOE */
#define IFX_CANFD_CH_CCCR_FDOE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.FDOE */
#define IFX_CANFD_CH_CCCR_FDOE_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.BRSE */
#define IFX_CANFD_CH_CCCR_BRSE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.BRSE */
#define IFX_CANFD_CH_CCCR_BRSE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.BRSE */
#define IFX_CANFD_CH_CCCR_BRSE_OFF (9u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.PXHD */
#define IFX_CANFD_CH_CCCR_PXHD_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.PXHD */
#define IFX_CANFD_CH_CCCR_PXHD_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.PXHD */
#define IFX_CANFD_CH_CCCR_PXHD_OFF (12u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.EFBI */
#define IFX_CANFD_CH_CCCR_EFBI_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.EFBI */
#define IFX_CANFD_CH_CCCR_EFBI_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.EFBI */
#define IFX_CANFD_CH_CCCR_EFBI_OFF (13u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.TXP */
#define IFX_CANFD_CH_CCCR_TXP_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.TXP */
#define IFX_CANFD_CH_CCCR_TXP_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.TXP */
#define IFX_CANFD_CH_CCCR_TXP_OFF (14u)

/** \brief Length for Ifx_CANFD_CH_CCCR_Bits.NISO */
#define IFX_CANFD_CH_CCCR_NISO_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_CCCR_Bits.NISO */
#define IFX_CANFD_CH_CCCR_NISO_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_CCCR_Bits.NISO */
#define IFX_CANFD_CH_CCCR_NISO_OFF (15u)

/** \brief Length for Ifx_CANFD_CH_NBTP_Bits.NTSEG2 */
#define IFX_CANFD_CH_NBTP_NTSEG2_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_NBTP_Bits.NTSEG2 */
#define IFX_CANFD_CH_NBTP_NTSEG2_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_NBTP_Bits.NTSEG2 */
#define IFX_CANFD_CH_NBTP_NTSEG2_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_NBTP_Bits.NTSEG1 */
#define IFX_CANFD_CH_NBTP_NTSEG1_LEN (8u)

/** \brief Mask for Ifx_CANFD_CH_NBTP_Bits.NTSEG1 */
#define IFX_CANFD_CH_NBTP_NTSEG1_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CH_NBTP_Bits.NTSEG1 */
#define IFX_CANFD_CH_NBTP_NTSEG1_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_NBTP_Bits.NBRP */
#define IFX_CANFD_CH_NBTP_NBRP_LEN (9u)

/** \brief Mask for Ifx_CANFD_CH_NBTP_Bits.NBRP */
#define IFX_CANFD_CH_NBTP_NBRP_MSK (0x1ffu)

/** \brief Offset for Ifx_CANFD_CH_NBTP_Bits.NBRP */
#define IFX_CANFD_CH_NBTP_NBRP_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_NBTP_Bits.NSJW */
#define IFX_CANFD_CH_NBTP_NSJW_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_NBTP_Bits.NSJW */
#define IFX_CANFD_CH_NBTP_NSJW_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_NBTP_Bits.NSJW */
#define IFX_CANFD_CH_NBTP_NSJW_OFF (25u)

/** \brief Length for Ifx_CANFD_CH_TSCC_Bits.TSS */
#define IFX_CANFD_CH_TSCC_TSS_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_TSCC_Bits.TSS */
#define IFX_CANFD_CH_TSCC_TSS_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_TSCC_Bits.TSS */
#define IFX_CANFD_CH_TSCC_TSS_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TSCC_Bits.TCP */
#define IFX_CANFD_CH_TSCC_TCP_LEN (4u)

/** \brief Mask for Ifx_CANFD_CH_TSCC_Bits.TCP */
#define IFX_CANFD_CH_TSCC_TCP_MSK (0xfu)

/** \brief Offset for Ifx_CANFD_CH_TSCC_Bits.TCP */
#define IFX_CANFD_CH_TSCC_TCP_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TSCV_Bits.TSC */
#define IFX_CANFD_CH_TSCV_TSC_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TSCV_Bits.TSC */
#define IFX_CANFD_CH_TSCV_TSC_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TSCV_Bits.TSC */
#define IFX_CANFD_CH_TSCV_TSC_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TOCC_Bits.ETOC */
#define IFX_CANFD_CH_TOCC_ETOC_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TOCC_Bits.ETOC */
#define IFX_CANFD_CH_TOCC_ETOC_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TOCC_Bits.ETOC */
#define IFX_CANFD_CH_TOCC_ETOC_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TOCC_Bits.TOS */
#define IFX_CANFD_CH_TOCC_TOS_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_TOCC_Bits.TOS */
#define IFX_CANFD_CH_TOCC_TOS_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_TOCC_Bits.TOS */
#define IFX_CANFD_CH_TOCC_TOS_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_TOCC_Bits.TOP */
#define IFX_CANFD_CH_TOCC_TOP_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TOCC_Bits.TOP */
#define IFX_CANFD_CH_TOCC_TOP_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TOCC_Bits.TOP */
#define IFX_CANFD_CH_TOCC_TOP_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TOCV_Bits.TOC */
#define IFX_CANFD_CH_TOCV_TOC_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TOCV_Bits.TOC */
#define IFX_CANFD_CH_TOCV_TOC_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TOCV_Bits.TOC */
#define IFX_CANFD_CH_TOCV_TOC_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_ECR_Bits.TEC */
#define IFX_CANFD_CH_ECR_TEC_LEN (8u)

/** \brief Mask for Ifx_CANFD_CH_ECR_Bits.TEC */
#define IFX_CANFD_CH_ECR_TEC_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CH_ECR_Bits.TEC */
#define IFX_CANFD_CH_ECR_TEC_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_ECR_Bits.REC */
#define IFX_CANFD_CH_ECR_REC_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_ECR_Bits.REC */
#define IFX_CANFD_CH_ECR_REC_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_ECR_Bits.REC */
#define IFX_CANFD_CH_ECR_REC_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_ECR_Bits.RP */
#define IFX_CANFD_CH_ECR_RP_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ECR_Bits.RP */
#define IFX_CANFD_CH_ECR_RP_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ECR_Bits.RP */
#define IFX_CANFD_CH_ECR_RP_OFF (15u)

/** \brief Length for Ifx_CANFD_CH_ECR_Bits.CEL */
#define IFX_CANFD_CH_ECR_CEL_LEN (8u)

/** \brief Mask for Ifx_CANFD_CH_ECR_Bits.CEL */
#define IFX_CANFD_CH_ECR_CEL_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CH_ECR_Bits.CEL */
#define IFX_CANFD_CH_ECR_CEL_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.LEC */
#define IFX_CANFD_CH_PSR_LEC_LEN (3u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.LEC */
#define IFX_CANFD_CH_PSR_LEC_MSK (0x7u)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.LEC */
#define IFX_CANFD_CH_PSR_LEC_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.ACT */
#define IFX_CANFD_CH_PSR_ACT_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.ACT */
#define IFX_CANFD_CH_PSR_ACT_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.ACT */
#define IFX_CANFD_CH_PSR_ACT_OFF (3u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.EP */
#define IFX_CANFD_CH_PSR_EP_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.EP */
#define IFX_CANFD_CH_PSR_EP_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.EP */
#define IFX_CANFD_CH_PSR_EP_OFF (5u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.EW */
#define IFX_CANFD_CH_PSR_EW_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.EW */
#define IFX_CANFD_CH_PSR_EW_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.EW */
#define IFX_CANFD_CH_PSR_EW_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.BO */
#define IFX_CANFD_CH_PSR_BO_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.BO */
#define IFX_CANFD_CH_PSR_BO_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.BO */
#define IFX_CANFD_CH_PSR_BO_OFF (7u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.DLEC */
#define IFX_CANFD_CH_PSR_DLEC_LEN (3u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.DLEC */
#define IFX_CANFD_CH_PSR_DLEC_MSK (0x7u)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.DLEC */
#define IFX_CANFD_CH_PSR_DLEC_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.RESI */
#define IFX_CANFD_CH_PSR_RESI_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.RESI */
#define IFX_CANFD_CH_PSR_RESI_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.RESI */
#define IFX_CANFD_CH_PSR_RESI_OFF (11u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.RBRS */
#define IFX_CANFD_CH_PSR_RBRS_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.RBRS */
#define IFX_CANFD_CH_PSR_RBRS_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.RBRS */
#define IFX_CANFD_CH_PSR_RBRS_OFF (12u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.RFDF */
#define IFX_CANFD_CH_PSR_RFDF_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.RFDF */
#define IFX_CANFD_CH_PSR_RFDF_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.RFDF */
#define IFX_CANFD_CH_PSR_RFDF_OFF (13u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.PXE */
#define IFX_CANFD_CH_PSR_PXE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.PXE */
#define IFX_CANFD_CH_PSR_PXE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.PXE */
#define IFX_CANFD_CH_PSR_PXE_OFF (14u)

/** \brief Length for Ifx_CANFD_CH_PSR_Bits.TDCV */
#define IFX_CANFD_CH_PSR_TDCV_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_PSR_Bits.TDCV */
#define IFX_CANFD_CH_PSR_TDCV_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_PSR_Bits.TDCV */
#define IFX_CANFD_CH_PSR_TDCV_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TDCR_Bits.TDCF */
#define IFX_CANFD_CH_TDCR_TDCF_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_TDCR_Bits.TDCF */
#define IFX_CANFD_CH_TDCR_TDCF_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_TDCR_Bits.TDCF */
#define IFX_CANFD_CH_TDCR_TDCF_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TDCR_Bits.TDCO */
#define IFX_CANFD_CH_TDCR_TDCO_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_TDCR_Bits.TDCO */
#define IFX_CANFD_CH_TDCR_TDCO_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_TDCR_Bits.TDCO */
#define IFX_CANFD_CH_TDCR_TDCO_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.RF0N */
#define IFX_CANFD_CH_IR_RF0N_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.RF0N */
#define IFX_CANFD_CH_IR_RF0N_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.RF0N */
#define IFX_CANFD_CH_IR_RF0N_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.RF0W */
#define IFX_CANFD_CH_IR_RF0W_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.RF0W */
#define IFX_CANFD_CH_IR_RF0W_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.RF0W */
#define IFX_CANFD_CH_IR_RF0W_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.RF0F */
#define IFX_CANFD_CH_IR_RF0F_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.RF0F */
#define IFX_CANFD_CH_IR_RF0F_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.RF0F */
#define IFX_CANFD_CH_IR_RF0F_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.RF0L_ */
#define IFX_CANFD_CH_IR_RF0L__LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.RF0L_ */
#define IFX_CANFD_CH_IR_RF0L__MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.RF0L_ */
#define IFX_CANFD_CH_IR_RF0L__OFF (3u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.RF1N */
#define IFX_CANFD_CH_IR_RF1N_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.RF1N */
#define IFX_CANFD_CH_IR_RF1N_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.RF1N */
#define IFX_CANFD_CH_IR_RF1N_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.RF1W */
#define IFX_CANFD_CH_IR_RF1W_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.RF1W */
#define IFX_CANFD_CH_IR_RF1W_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.RF1W */
#define IFX_CANFD_CH_IR_RF1W_OFF (5u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.RF1F */
#define IFX_CANFD_CH_IR_RF1F_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.RF1F */
#define IFX_CANFD_CH_IR_RF1F_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.RF1F */
#define IFX_CANFD_CH_IR_RF1F_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.RF1L_ */
#define IFX_CANFD_CH_IR_RF1L__LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.RF1L_ */
#define IFX_CANFD_CH_IR_RF1L__MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.RF1L_ */
#define IFX_CANFD_CH_IR_RF1L__OFF (7u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.HPM */
#define IFX_CANFD_CH_IR_HPM_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.HPM */
#define IFX_CANFD_CH_IR_HPM_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.HPM */
#define IFX_CANFD_CH_IR_HPM_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.TC */
#define IFX_CANFD_CH_IR_TC_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.TC */
#define IFX_CANFD_CH_IR_TC_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.TC */
#define IFX_CANFD_CH_IR_TC_OFF (9u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.TCF */
#define IFX_CANFD_CH_IR_TCF_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.TCF */
#define IFX_CANFD_CH_IR_TCF_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.TCF */
#define IFX_CANFD_CH_IR_TCF_OFF (10u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.TFE */
#define IFX_CANFD_CH_IR_TFE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.TFE */
#define IFX_CANFD_CH_IR_TFE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.TFE */
#define IFX_CANFD_CH_IR_TFE_OFF (11u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.TEFN */
#define IFX_CANFD_CH_IR_TEFN_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.TEFN */
#define IFX_CANFD_CH_IR_TEFN_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.TEFN */
#define IFX_CANFD_CH_IR_TEFN_OFF (12u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.TEFW */
#define IFX_CANFD_CH_IR_TEFW_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.TEFW */
#define IFX_CANFD_CH_IR_TEFW_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.TEFW */
#define IFX_CANFD_CH_IR_TEFW_OFF (13u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.TEFF */
#define IFX_CANFD_CH_IR_TEFF_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.TEFF */
#define IFX_CANFD_CH_IR_TEFF_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.TEFF */
#define IFX_CANFD_CH_IR_TEFF_OFF (14u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.TEFL_ */
#define IFX_CANFD_CH_IR_TEFL__LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.TEFL_ */
#define IFX_CANFD_CH_IR_TEFL__MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.TEFL_ */
#define IFX_CANFD_CH_IR_TEFL__OFF (15u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.TSW */
#define IFX_CANFD_CH_IR_TSW_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.TSW */
#define IFX_CANFD_CH_IR_TSW_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.TSW */
#define IFX_CANFD_CH_IR_TSW_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.MRAF */
#define IFX_CANFD_CH_IR_MRAF_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.MRAF */
#define IFX_CANFD_CH_IR_MRAF_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.MRAF */
#define IFX_CANFD_CH_IR_MRAF_OFF (17u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.TOO */
#define IFX_CANFD_CH_IR_TOO_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.TOO */
#define IFX_CANFD_CH_IR_TOO_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.TOO */
#define IFX_CANFD_CH_IR_TOO_OFF (18u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.DRX */
#define IFX_CANFD_CH_IR_DRX_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.DRX */
#define IFX_CANFD_CH_IR_DRX_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.DRX */
#define IFX_CANFD_CH_IR_DRX_OFF (19u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.BEC */
#define IFX_CANFD_CH_IR_BEC_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.BEC */
#define IFX_CANFD_CH_IR_BEC_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.BEC */
#define IFX_CANFD_CH_IR_BEC_OFF (20u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.BEU */
#define IFX_CANFD_CH_IR_BEU_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.BEU */
#define IFX_CANFD_CH_IR_BEU_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.BEU */
#define IFX_CANFD_CH_IR_BEU_OFF (21u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.ELO */
#define IFX_CANFD_CH_IR_ELO_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.ELO */
#define IFX_CANFD_CH_IR_ELO_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.ELO */
#define IFX_CANFD_CH_IR_ELO_OFF (22u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.EP_ */
#define IFX_CANFD_CH_IR_EP__LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.EP_ */
#define IFX_CANFD_CH_IR_EP__MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.EP_ */
#define IFX_CANFD_CH_IR_EP__OFF (23u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.EW_ */
#define IFX_CANFD_CH_IR_EW__LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.EW_ */
#define IFX_CANFD_CH_IR_EW__MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.EW_ */
#define IFX_CANFD_CH_IR_EW__OFF (24u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.BO_ */
#define IFX_CANFD_CH_IR_BO__LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.BO_ */
#define IFX_CANFD_CH_IR_BO__MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.BO_ */
#define IFX_CANFD_CH_IR_BO__OFF (25u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.WDI */
#define IFX_CANFD_CH_IR_WDI_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.WDI */
#define IFX_CANFD_CH_IR_WDI_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.WDI */
#define IFX_CANFD_CH_IR_WDI_OFF (26u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.PEA */
#define IFX_CANFD_CH_IR_PEA_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.PEA */
#define IFX_CANFD_CH_IR_PEA_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.PEA */
#define IFX_CANFD_CH_IR_PEA_OFF (27u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.PED */
#define IFX_CANFD_CH_IR_PED_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.PED */
#define IFX_CANFD_CH_IR_PED_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.PED */
#define IFX_CANFD_CH_IR_PED_OFF (28u)

/** \brief Length for Ifx_CANFD_CH_IR_Bits.ARA */
#define IFX_CANFD_CH_IR_ARA_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IR_Bits.ARA */
#define IFX_CANFD_CH_IR_ARA_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IR_Bits.ARA */
#define IFX_CANFD_CH_IR_ARA_OFF (29u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.RF0NE */
#define IFX_CANFD_CH_IE_RF0NE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.RF0NE */
#define IFX_CANFD_CH_IE_RF0NE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.RF0NE */
#define IFX_CANFD_CH_IE_RF0NE_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.RF0WE */
#define IFX_CANFD_CH_IE_RF0WE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.RF0WE */
#define IFX_CANFD_CH_IE_RF0WE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.RF0WE */
#define IFX_CANFD_CH_IE_RF0WE_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.RF0FE */
#define IFX_CANFD_CH_IE_RF0FE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.RF0FE */
#define IFX_CANFD_CH_IE_RF0FE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.RF0FE */
#define IFX_CANFD_CH_IE_RF0FE_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.RF0LE */
#define IFX_CANFD_CH_IE_RF0LE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.RF0LE */
#define IFX_CANFD_CH_IE_RF0LE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.RF0LE */
#define IFX_CANFD_CH_IE_RF0LE_OFF (3u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.RF1NE */
#define IFX_CANFD_CH_IE_RF1NE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.RF1NE */
#define IFX_CANFD_CH_IE_RF1NE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.RF1NE */
#define IFX_CANFD_CH_IE_RF1NE_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.RF1WE */
#define IFX_CANFD_CH_IE_RF1WE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.RF1WE */
#define IFX_CANFD_CH_IE_RF1WE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.RF1WE */
#define IFX_CANFD_CH_IE_RF1WE_OFF (5u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.RF1FE */
#define IFX_CANFD_CH_IE_RF1FE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.RF1FE */
#define IFX_CANFD_CH_IE_RF1FE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.RF1FE */
#define IFX_CANFD_CH_IE_RF1FE_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.RF1LE */
#define IFX_CANFD_CH_IE_RF1LE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.RF1LE */
#define IFX_CANFD_CH_IE_RF1LE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.RF1LE */
#define IFX_CANFD_CH_IE_RF1LE_OFF (7u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.HPME */
#define IFX_CANFD_CH_IE_HPME_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.HPME */
#define IFX_CANFD_CH_IE_HPME_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.HPME */
#define IFX_CANFD_CH_IE_HPME_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.TCE */
#define IFX_CANFD_CH_IE_TCE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.TCE */
#define IFX_CANFD_CH_IE_TCE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.TCE */
#define IFX_CANFD_CH_IE_TCE_OFF (9u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.TCFE */
#define IFX_CANFD_CH_IE_TCFE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.TCFE */
#define IFX_CANFD_CH_IE_TCFE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.TCFE */
#define IFX_CANFD_CH_IE_TCFE_OFF (10u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.TFEE */
#define IFX_CANFD_CH_IE_TFEE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.TFEE */
#define IFX_CANFD_CH_IE_TFEE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.TFEE */
#define IFX_CANFD_CH_IE_TFEE_OFF (11u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.TEFNE */
#define IFX_CANFD_CH_IE_TEFNE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.TEFNE */
#define IFX_CANFD_CH_IE_TEFNE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.TEFNE */
#define IFX_CANFD_CH_IE_TEFNE_OFF (12u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.TEFWE */
#define IFX_CANFD_CH_IE_TEFWE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.TEFWE */
#define IFX_CANFD_CH_IE_TEFWE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.TEFWE */
#define IFX_CANFD_CH_IE_TEFWE_OFF (13u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.TEFFE */
#define IFX_CANFD_CH_IE_TEFFE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.TEFFE */
#define IFX_CANFD_CH_IE_TEFFE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.TEFFE */
#define IFX_CANFD_CH_IE_TEFFE_OFF (14u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.TEFLE */
#define IFX_CANFD_CH_IE_TEFLE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.TEFLE */
#define IFX_CANFD_CH_IE_TEFLE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.TEFLE */
#define IFX_CANFD_CH_IE_TEFLE_OFF (15u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.TSWE */
#define IFX_CANFD_CH_IE_TSWE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.TSWE */
#define IFX_CANFD_CH_IE_TSWE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.TSWE */
#define IFX_CANFD_CH_IE_TSWE_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.MRAFE */
#define IFX_CANFD_CH_IE_MRAFE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.MRAFE */
#define IFX_CANFD_CH_IE_MRAFE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.MRAFE */
#define IFX_CANFD_CH_IE_MRAFE_OFF (17u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.TOOE */
#define IFX_CANFD_CH_IE_TOOE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.TOOE */
#define IFX_CANFD_CH_IE_TOOE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.TOOE */
#define IFX_CANFD_CH_IE_TOOE_OFF (18u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.DRXE */
#define IFX_CANFD_CH_IE_DRXE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.DRXE */
#define IFX_CANFD_CH_IE_DRXE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.DRXE */
#define IFX_CANFD_CH_IE_DRXE_OFF (19u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.BECE */
#define IFX_CANFD_CH_IE_BECE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.BECE */
#define IFX_CANFD_CH_IE_BECE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.BECE */
#define IFX_CANFD_CH_IE_BECE_OFF (20u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.BEUE */
#define IFX_CANFD_CH_IE_BEUE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.BEUE */
#define IFX_CANFD_CH_IE_BEUE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.BEUE */
#define IFX_CANFD_CH_IE_BEUE_OFF (21u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.ELOE */
#define IFX_CANFD_CH_IE_ELOE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.ELOE */
#define IFX_CANFD_CH_IE_ELOE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.ELOE */
#define IFX_CANFD_CH_IE_ELOE_OFF (22u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.EPE */
#define IFX_CANFD_CH_IE_EPE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.EPE */
#define IFX_CANFD_CH_IE_EPE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.EPE */
#define IFX_CANFD_CH_IE_EPE_OFF (23u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.EWE */
#define IFX_CANFD_CH_IE_EWE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.EWE */
#define IFX_CANFD_CH_IE_EWE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.EWE */
#define IFX_CANFD_CH_IE_EWE_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.BOE */
#define IFX_CANFD_CH_IE_BOE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.BOE */
#define IFX_CANFD_CH_IE_BOE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.BOE */
#define IFX_CANFD_CH_IE_BOE_OFF (25u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.WDIE */
#define IFX_CANFD_CH_IE_WDIE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.WDIE */
#define IFX_CANFD_CH_IE_WDIE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.WDIE */
#define IFX_CANFD_CH_IE_WDIE_OFF (26u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.PEAE */
#define IFX_CANFD_CH_IE_PEAE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.PEAE */
#define IFX_CANFD_CH_IE_PEAE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.PEAE */
#define IFX_CANFD_CH_IE_PEAE_OFF (27u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.PEDE */
#define IFX_CANFD_CH_IE_PEDE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.PEDE */
#define IFX_CANFD_CH_IE_PEDE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.PEDE */
#define IFX_CANFD_CH_IE_PEDE_OFF (28u)

/** \brief Length for Ifx_CANFD_CH_IE_Bits.ARAE */
#define IFX_CANFD_CH_IE_ARAE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_IE_Bits.ARAE */
#define IFX_CANFD_CH_IE_ARAE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_IE_Bits.ARAE */
#define IFX_CANFD_CH_IE_ARAE_OFF (29u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.RF0NL */
#define IFX_CANFD_CH_ILS_RF0NL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.RF0NL */
#define IFX_CANFD_CH_ILS_RF0NL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.RF0NL */
#define IFX_CANFD_CH_ILS_RF0NL_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.RF0WL */
#define IFX_CANFD_CH_ILS_RF0WL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.RF0WL */
#define IFX_CANFD_CH_ILS_RF0WL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.RF0WL */
#define IFX_CANFD_CH_ILS_RF0WL_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.RF0FL */
#define IFX_CANFD_CH_ILS_RF0FL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.RF0FL */
#define IFX_CANFD_CH_ILS_RF0FL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.RF0FL */
#define IFX_CANFD_CH_ILS_RF0FL_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.RF0LL */
#define IFX_CANFD_CH_ILS_RF0LL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.RF0LL */
#define IFX_CANFD_CH_ILS_RF0LL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.RF0LL */
#define IFX_CANFD_CH_ILS_RF0LL_OFF (3u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.RF1NL */
#define IFX_CANFD_CH_ILS_RF1NL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.RF1NL */
#define IFX_CANFD_CH_ILS_RF1NL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.RF1NL */
#define IFX_CANFD_CH_ILS_RF1NL_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.RF1WL */
#define IFX_CANFD_CH_ILS_RF1WL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.RF1WL */
#define IFX_CANFD_CH_ILS_RF1WL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.RF1WL */
#define IFX_CANFD_CH_ILS_RF1WL_OFF (5u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.RF1FL */
#define IFX_CANFD_CH_ILS_RF1FL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.RF1FL */
#define IFX_CANFD_CH_ILS_RF1FL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.RF1FL */
#define IFX_CANFD_CH_ILS_RF1FL_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.RF1LL */
#define IFX_CANFD_CH_ILS_RF1LL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.RF1LL */
#define IFX_CANFD_CH_ILS_RF1LL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.RF1LL */
#define IFX_CANFD_CH_ILS_RF1LL_OFF (7u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.HPML */
#define IFX_CANFD_CH_ILS_HPML_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.HPML */
#define IFX_CANFD_CH_ILS_HPML_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.HPML */
#define IFX_CANFD_CH_ILS_HPML_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.TCL */
#define IFX_CANFD_CH_ILS_TCL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.TCL */
#define IFX_CANFD_CH_ILS_TCL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.TCL */
#define IFX_CANFD_CH_ILS_TCL_OFF (9u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.TCFL */
#define IFX_CANFD_CH_ILS_TCFL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.TCFL */
#define IFX_CANFD_CH_ILS_TCFL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.TCFL */
#define IFX_CANFD_CH_ILS_TCFL_OFF (10u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.TFEL */
#define IFX_CANFD_CH_ILS_TFEL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.TFEL */
#define IFX_CANFD_CH_ILS_TFEL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.TFEL */
#define IFX_CANFD_CH_ILS_TFEL_OFF (11u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.TEFNL */
#define IFX_CANFD_CH_ILS_TEFNL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.TEFNL */
#define IFX_CANFD_CH_ILS_TEFNL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.TEFNL */
#define IFX_CANFD_CH_ILS_TEFNL_OFF (12u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.TEFWL */
#define IFX_CANFD_CH_ILS_TEFWL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.TEFWL */
#define IFX_CANFD_CH_ILS_TEFWL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.TEFWL */
#define IFX_CANFD_CH_ILS_TEFWL_OFF (13u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.TEFFL */
#define IFX_CANFD_CH_ILS_TEFFL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.TEFFL */
#define IFX_CANFD_CH_ILS_TEFFL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.TEFFL */
#define IFX_CANFD_CH_ILS_TEFFL_OFF (14u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.TEFLL */
#define IFX_CANFD_CH_ILS_TEFLL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.TEFLL */
#define IFX_CANFD_CH_ILS_TEFLL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.TEFLL */
#define IFX_CANFD_CH_ILS_TEFLL_OFF (15u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.TSWL */
#define IFX_CANFD_CH_ILS_TSWL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.TSWL */
#define IFX_CANFD_CH_ILS_TSWL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.TSWL */
#define IFX_CANFD_CH_ILS_TSWL_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.MRAFL */
#define IFX_CANFD_CH_ILS_MRAFL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.MRAFL */
#define IFX_CANFD_CH_ILS_MRAFL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.MRAFL */
#define IFX_CANFD_CH_ILS_MRAFL_OFF (17u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.TOOL */
#define IFX_CANFD_CH_ILS_TOOL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.TOOL */
#define IFX_CANFD_CH_ILS_TOOL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.TOOL */
#define IFX_CANFD_CH_ILS_TOOL_OFF (18u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.DRXL */
#define IFX_CANFD_CH_ILS_DRXL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.DRXL */
#define IFX_CANFD_CH_ILS_DRXL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.DRXL */
#define IFX_CANFD_CH_ILS_DRXL_OFF (19u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.BECL */
#define IFX_CANFD_CH_ILS_BECL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.BECL */
#define IFX_CANFD_CH_ILS_BECL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.BECL */
#define IFX_CANFD_CH_ILS_BECL_OFF (20u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.BEUL */
#define IFX_CANFD_CH_ILS_BEUL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.BEUL */
#define IFX_CANFD_CH_ILS_BEUL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.BEUL */
#define IFX_CANFD_CH_ILS_BEUL_OFF (21u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.ELOL */
#define IFX_CANFD_CH_ILS_ELOL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.ELOL */
#define IFX_CANFD_CH_ILS_ELOL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.ELOL */
#define IFX_CANFD_CH_ILS_ELOL_OFF (22u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.EPL */
#define IFX_CANFD_CH_ILS_EPL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.EPL */
#define IFX_CANFD_CH_ILS_EPL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.EPL */
#define IFX_CANFD_CH_ILS_EPL_OFF (23u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.EWL */
#define IFX_CANFD_CH_ILS_EWL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.EWL */
#define IFX_CANFD_CH_ILS_EWL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.EWL */
#define IFX_CANFD_CH_ILS_EWL_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.BOL */
#define IFX_CANFD_CH_ILS_BOL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.BOL */
#define IFX_CANFD_CH_ILS_BOL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.BOL */
#define IFX_CANFD_CH_ILS_BOL_OFF (25u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.WDIL */
#define IFX_CANFD_CH_ILS_WDIL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.WDIL */
#define IFX_CANFD_CH_ILS_WDIL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.WDIL */
#define IFX_CANFD_CH_ILS_WDIL_OFF (26u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.PEAL */
#define IFX_CANFD_CH_ILS_PEAL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.PEAL */
#define IFX_CANFD_CH_ILS_PEAL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.PEAL */
#define IFX_CANFD_CH_ILS_PEAL_OFF (27u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.PEDL */
#define IFX_CANFD_CH_ILS_PEDL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.PEDL */
#define IFX_CANFD_CH_ILS_PEDL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.PEDL */
#define IFX_CANFD_CH_ILS_PEDL_OFF (28u)

/** \brief Length for Ifx_CANFD_CH_ILS_Bits.ARAL */
#define IFX_CANFD_CH_ILS_ARAL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILS_Bits.ARAL */
#define IFX_CANFD_CH_ILS_ARAL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILS_Bits.ARAL */
#define IFX_CANFD_CH_ILS_ARAL_OFF (29u)

/** \brief Length for Ifx_CANFD_CH_ILE_Bits.EINT0 */
#define IFX_CANFD_CH_ILE_EINT0_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILE_Bits.EINT0 */
#define IFX_CANFD_CH_ILE_EINT0_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILE_Bits.EINT0 */
#define IFX_CANFD_CH_ILE_EINT0_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_ILE_Bits.EINT1 */
#define IFX_CANFD_CH_ILE_EINT1_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_ILE_Bits.EINT1 */
#define IFX_CANFD_CH_ILE_EINT1_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_ILE_Bits.EINT1 */
#define IFX_CANFD_CH_ILE_EINT1_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_GFC_Bits.RRFE */
#define IFX_CANFD_CH_GFC_RRFE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_GFC_Bits.RRFE */
#define IFX_CANFD_CH_GFC_RRFE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_GFC_Bits.RRFE */
#define IFX_CANFD_CH_GFC_RRFE_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_GFC_Bits.RRFS */
#define IFX_CANFD_CH_GFC_RRFS_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_GFC_Bits.RRFS */
#define IFX_CANFD_CH_GFC_RRFS_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_GFC_Bits.RRFS */
#define IFX_CANFD_CH_GFC_RRFS_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_GFC_Bits.ANFE */
#define IFX_CANFD_CH_GFC_ANFE_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_GFC_Bits.ANFE */
#define IFX_CANFD_CH_GFC_ANFE_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_GFC_Bits.ANFE */
#define IFX_CANFD_CH_GFC_ANFE_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_GFC_Bits.ANFS */
#define IFX_CANFD_CH_GFC_ANFS_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_GFC_Bits.ANFS */
#define IFX_CANFD_CH_GFC_ANFS_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_GFC_Bits.ANFS */
#define IFX_CANFD_CH_GFC_ANFS_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_SIDFC_Bits.FLSSA */
#define IFX_CANFD_CH_SIDFC_FLSSA_LEN (14u)

/** \brief Mask for Ifx_CANFD_CH_SIDFC_Bits.FLSSA */
#define IFX_CANFD_CH_SIDFC_FLSSA_MSK (0x3fffu)

/** \brief Offset for Ifx_CANFD_CH_SIDFC_Bits.FLSSA */
#define IFX_CANFD_CH_SIDFC_FLSSA_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_SIDFC_Bits.LSS */
#define IFX_CANFD_CH_SIDFC_LSS_LEN (8u)

/** \brief Mask for Ifx_CANFD_CH_SIDFC_Bits.LSS */
#define IFX_CANFD_CH_SIDFC_LSS_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CH_SIDFC_Bits.LSS */
#define IFX_CANFD_CH_SIDFC_LSS_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_XIDFC_Bits.FLESA */
#define IFX_CANFD_CH_XIDFC_FLESA_LEN (14u)

/** \brief Mask for Ifx_CANFD_CH_XIDFC_Bits.FLESA */
#define IFX_CANFD_CH_XIDFC_FLESA_MSK (0x3fffu)

/** \brief Offset for Ifx_CANFD_CH_XIDFC_Bits.FLESA */
#define IFX_CANFD_CH_XIDFC_FLESA_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_XIDFC_Bits.LSE */
#define IFX_CANFD_CH_XIDFC_LSE_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_XIDFC_Bits.LSE */
#define IFX_CANFD_CH_XIDFC_LSE_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_XIDFC_Bits.LSE */
#define IFX_CANFD_CH_XIDFC_LSE_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_XIDAM_Bits.EIDM */
#define IFX_CANFD_CH_XIDAM_EIDM_LEN (29u)

/** \brief Mask for Ifx_CANFD_CH_XIDAM_Bits.EIDM */
#define IFX_CANFD_CH_XIDAM_EIDM_MSK (0x1fffffffu)

/** \brief Offset for Ifx_CANFD_CH_XIDAM_Bits.EIDM */
#define IFX_CANFD_CH_XIDAM_EIDM_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_HPMS_Bits.BIDX */
#define IFX_CANFD_CH_HPMS_BIDX_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_HPMS_Bits.BIDX */
#define IFX_CANFD_CH_HPMS_BIDX_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_HPMS_Bits.BIDX */
#define IFX_CANFD_CH_HPMS_BIDX_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_HPMS_Bits.MSI */
#define IFX_CANFD_CH_HPMS_MSI_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_HPMS_Bits.MSI */
#define IFX_CANFD_CH_HPMS_MSI_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_HPMS_Bits.MSI */
#define IFX_CANFD_CH_HPMS_MSI_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_HPMS_Bits.FIDX */
#define IFX_CANFD_CH_HPMS_FIDX_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_HPMS_Bits.FIDX */
#define IFX_CANFD_CH_HPMS_FIDX_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_HPMS_Bits.FIDX */
#define IFX_CANFD_CH_HPMS_FIDX_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_HPMS_Bits.FLST */
#define IFX_CANFD_CH_HPMS_FLST_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_HPMS_Bits.FLST */
#define IFX_CANFD_CH_HPMS_FLST_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_HPMS_Bits.FLST */
#define IFX_CANFD_CH_HPMS_FLST_OFF (15u)

/** \brief Length for Ifx_CANFD_CH_NDAT1_Bits.ND */
#define IFX_CANFD_CH_NDAT1_ND_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_NDAT1_Bits.ND */
#define IFX_CANFD_CH_NDAT1_ND_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_NDAT1_Bits.ND */
#define IFX_CANFD_CH_NDAT1_ND_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_NDAT2_Bits.ND */
#define IFX_CANFD_CH_NDAT2_ND_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_NDAT2_Bits.ND */
#define IFX_CANFD_CH_NDAT2_ND_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_NDAT2_Bits.ND */
#define IFX_CANFD_CH_NDAT2_ND_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXF0C_Bits.F0SA */
#define IFX_CANFD_CH_RXF0C_F0SA_LEN (14u)

/** \brief Mask for Ifx_CANFD_CH_RXF0C_Bits.F0SA */
#define IFX_CANFD_CH_RXF0C_F0SA_MSK (0x3fffu)

/** \brief Offset for Ifx_CANFD_CH_RXF0C_Bits.F0SA */
#define IFX_CANFD_CH_RXF0C_F0SA_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_RXF0C_Bits.F0S */
#define IFX_CANFD_CH_RXF0C_F0S_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_RXF0C_Bits.F0S */
#define IFX_CANFD_CH_RXF0C_F0S_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_RXF0C_Bits.F0S */
#define IFX_CANFD_CH_RXF0C_F0S_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_RXF0C_Bits.F0WM */
#define IFX_CANFD_CH_RXF0C_F0WM_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_RXF0C_Bits.F0WM */
#define IFX_CANFD_CH_RXF0C_F0WM_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_RXF0C_Bits.F0WM */
#define IFX_CANFD_CH_RXF0C_F0WM_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_RXF0C_Bits.F0OM */
#define IFX_CANFD_CH_RXF0C_F0OM_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_RXF0C_Bits.F0OM */
#define IFX_CANFD_CH_RXF0C_F0OM_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_RXF0C_Bits.F0OM */
#define IFX_CANFD_CH_RXF0C_F0OM_OFF (31u)

/** \brief Length for Ifx_CANFD_CH_RXF0S_Bits.F0FL */
#define IFX_CANFD_CH_RXF0S_F0FL_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_RXF0S_Bits.F0FL */
#define IFX_CANFD_CH_RXF0S_F0FL_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_RXF0S_Bits.F0FL */
#define IFX_CANFD_CH_RXF0S_F0FL_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXF0S_Bits.F0GI */
#define IFX_CANFD_CH_RXF0S_F0GI_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_RXF0S_Bits.F0GI */
#define IFX_CANFD_CH_RXF0S_F0GI_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_RXF0S_Bits.F0GI */
#define IFX_CANFD_CH_RXF0S_F0GI_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_RXF0S_Bits.F0PI */
#define IFX_CANFD_CH_RXF0S_F0PI_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_RXF0S_Bits.F0PI */
#define IFX_CANFD_CH_RXF0S_F0PI_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_RXF0S_Bits.F0PI */
#define IFX_CANFD_CH_RXF0S_F0PI_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_RXF0S_Bits.F0F */
#define IFX_CANFD_CH_RXF0S_F0F_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_RXF0S_Bits.F0F */
#define IFX_CANFD_CH_RXF0S_F0F_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_RXF0S_Bits.F0F */
#define IFX_CANFD_CH_RXF0S_F0F_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_RXF0S_Bits.RF0L */
#define IFX_CANFD_CH_RXF0S_RF0L_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_RXF0S_Bits.RF0L */
#define IFX_CANFD_CH_RXF0S_RF0L_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_RXF0S_Bits.RF0L */
#define IFX_CANFD_CH_RXF0S_RF0L_OFF (25u)

/** \brief Length for Ifx_CANFD_CH_RXF0A_Bits.F0AI */
#define IFX_CANFD_CH_RXF0A_F0AI_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_RXF0A_Bits.F0AI */
#define IFX_CANFD_CH_RXF0A_F0AI_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_RXF0A_Bits.F0AI */
#define IFX_CANFD_CH_RXF0A_F0AI_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXBC_Bits.RBSA */
#define IFX_CANFD_CH_RXBC_RBSA_LEN (14u)

/** \brief Mask for Ifx_CANFD_CH_RXBC_Bits.RBSA */
#define IFX_CANFD_CH_RXBC_RBSA_MSK (0x3fffu)

/** \brief Offset for Ifx_CANFD_CH_RXBC_Bits.RBSA */
#define IFX_CANFD_CH_RXBC_RBSA_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_RXF1C_Bits.F1SA */
#define IFX_CANFD_CH_RXF1C_F1SA_LEN (14u)

/** \brief Mask for Ifx_CANFD_CH_RXF1C_Bits.F1SA */
#define IFX_CANFD_CH_RXF1C_F1SA_MSK (0x3fffu)

/** \brief Offset for Ifx_CANFD_CH_RXF1C_Bits.F1SA */
#define IFX_CANFD_CH_RXF1C_F1SA_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_RXF1C_Bits.F1S */
#define IFX_CANFD_CH_RXF1C_F1S_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_RXF1C_Bits.F1S */
#define IFX_CANFD_CH_RXF1C_F1S_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_RXF1C_Bits.F1S */
#define IFX_CANFD_CH_RXF1C_F1S_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_RXF1C_Bits.F1WM */
#define IFX_CANFD_CH_RXF1C_F1WM_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_RXF1C_Bits.F1WM */
#define IFX_CANFD_CH_RXF1C_F1WM_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_RXF1C_Bits.F1WM */
#define IFX_CANFD_CH_RXF1C_F1WM_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_RXF1C_Bits.F1OM */
#define IFX_CANFD_CH_RXF1C_F1OM_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_RXF1C_Bits.F1OM */
#define IFX_CANFD_CH_RXF1C_F1OM_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_RXF1C_Bits.F1OM */
#define IFX_CANFD_CH_RXF1C_F1OM_OFF (31u)

/** \brief Length for Ifx_CANFD_CH_RXF1S_Bits.F1FL */
#define IFX_CANFD_CH_RXF1S_F1FL_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_RXF1S_Bits.F1FL */
#define IFX_CANFD_CH_RXF1S_F1FL_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_RXF1S_Bits.F1FL */
#define IFX_CANFD_CH_RXF1S_F1FL_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXF1S_Bits.F1GI */
#define IFX_CANFD_CH_RXF1S_F1GI_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_RXF1S_Bits.F1GI */
#define IFX_CANFD_CH_RXF1S_F1GI_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_RXF1S_Bits.F1GI */
#define IFX_CANFD_CH_RXF1S_F1GI_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_RXF1S_Bits.F1PI */
#define IFX_CANFD_CH_RXF1S_F1PI_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_RXF1S_Bits.F1PI */
#define IFX_CANFD_CH_RXF1S_F1PI_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_RXF1S_Bits.F1PI */
#define IFX_CANFD_CH_RXF1S_F1PI_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_RXF1S_Bits.F1F */
#define IFX_CANFD_CH_RXF1S_F1F_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_RXF1S_Bits.F1F */
#define IFX_CANFD_CH_RXF1S_F1F_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_RXF1S_Bits.F1F */
#define IFX_CANFD_CH_RXF1S_F1F_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_RXF1S_Bits.RF1L */
#define IFX_CANFD_CH_RXF1S_RF1L_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_RXF1S_Bits.RF1L */
#define IFX_CANFD_CH_RXF1S_RF1L_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_RXF1S_Bits.RF1L */
#define IFX_CANFD_CH_RXF1S_RF1L_OFF (25u)

/** \brief Length for Ifx_CANFD_CH_RXF1S_Bits.DMS */
#define IFX_CANFD_CH_RXF1S_DMS_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_RXF1S_Bits.DMS */
#define IFX_CANFD_CH_RXF1S_DMS_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_RXF1S_Bits.DMS */
#define IFX_CANFD_CH_RXF1S_DMS_OFF (30u)

/** \brief Length for Ifx_CANFD_CH_RXF1A_Bits.F1AI */
#define IFX_CANFD_CH_RXF1A_F1AI_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_RXF1A_Bits.F1AI */
#define IFX_CANFD_CH_RXF1A_F1AI_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_RXF1A_Bits.F1AI */
#define IFX_CANFD_CH_RXF1A_F1AI_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXESC_Bits.F0DS */
#define IFX_CANFD_CH_RXESC_F0DS_LEN (3u)

/** \brief Mask for Ifx_CANFD_CH_RXESC_Bits.F0DS */
#define IFX_CANFD_CH_RXESC_F0DS_MSK (0x7u)

/** \brief Offset for Ifx_CANFD_CH_RXESC_Bits.F0DS */
#define IFX_CANFD_CH_RXESC_F0DS_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_RXESC_Bits.F1DS */
#define IFX_CANFD_CH_RXESC_F1DS_LEN (3u)

/** \brief Mask for Ifx_CANFD_CH_RXESC_Bits.F1DS */
#define IFX_CANFD_CH_RXESC_F1DS_MSK (0x7u)

/** \brief Offset for Ifx_CANFD_CH_RXESC_Bits.F1DS */
#define IFX_CANFD_CH_RXESC_F1DS_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_RXESC_Bits.RBDS */
#define IFX_CANFD_CH_RXESC_RBDS_LEN (3u)

/** \brief Mask for Ifx_CANFD_CH_RXESC_Bits.RBDS */
#define IFX_CANFD_CH_RXESC_RBDS_MSK (0x7u)

/** \brief Offset for Ifx_CANFD_CH_RXESC_Bits.RBDS */
#define IFX_CANFD_CH_RXESC_RBDS_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_TXBC_Bits.TBSA */
#define IFX_CANFD_CH_TXBC_TBSA_LEN (14u)

/** \brief Mask for Ifx_CANFD_CH_TXBC_Bits.TBSA */
#define IFX_CANFD_CH_TXBC_TBSA_MSK (0x3fffu)

/** \brief Offset for Ifx_CANFD_CH_TXBC_Bits.TBSA */
#define IFX_CANFD_CH_TXBC_TBSA_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_TXBC_Bits.NDTB */
#define IFX_CANFD_CH_TXBC_NDTB_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_TXBC_Bits.NDTB */
#define IFX_CANFD_CH_TXBC_NDTB_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_TXBC_Bits.NDTB */
#define IFX_CANFD_CH_TXBC_NDTB_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TXBC_Bits.TFQS */
#define IFX_CANFD_CH_TXBC_TFQS_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_TXBC_Bits.TFQS */
#define IFX_CANFD_CH_TXBC_TFQS_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_TXBC_Bits.TFQS */
#define IFX_CANFD_CH_TXBC_TFQS_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_TXBC_Bits.TFQM */
#define IFX_CANFD_CH_TXBC_TFQM_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TXBC_Bits.TFQM */
#define IFX_CANFD_CH_TXBC_TFQM_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TXBC_Bits.TFQM */
#define IFX_CANFD_CH_TXBC_TFQM_OFF (30u)

/** \brief Length for Ifx_CANFD_CH_TXFQS_Bits.TFFL */
#define IFX_CANFD_CH_TXFQS_TFFL_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_TXFQS_Bits.TFFL */
#define IFX_CANFD_CH_TXFQS_TFFL_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_TXFQS_Bits.TFFL */
#define IFX_CANFD_CH_TXFQS_TFFL_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TXFQS_Bits.TFGI */
#define IFX_CANFD_CH_TXFQS_TFGI_LEN (5u)

/** \brief Mask for Ifx_CANFD_CH_TXFQS_Bits.TFGI */
#define IFX_CANFD_CH_TXFQS_TFGI_MSK (0x1fu)

/** \brief Offset for Ifx_CANFD_CH_TXFQS_Bits.TFGI */
#define IFX_CANFD_CH_TXFQS_TFGI_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_TXFQS_Bits.TFQPI */
#define IFX_CANFD_CH_TXFQS_TFQPI_LEN (5u)

/** \brief Mask for Ifx_CANFD_CH_TXFQS_Bits.TFQPI */
#define IFX_CANFD_CH_TXFQS_TFQPI_MSK (0x1fu)

/** \brief Offset for Ifx_CANFD_CH_TXFQS_Bits.TFQPI */
#define IFX_CANFD_CH_TXFQS_TFQPI_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TXFQS_Bits.TFQF */
#define IFX_CANFD_CH_TXFQS_TFQF_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TXFQS_Bits.TFQF */
#define IFX_CANFD_CH_TXFQS_TFQF_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TXFQS_Bits.TFQF */
#define IFX_CANFD_CH_TXFQS_TFQF_OFF (21u)

/** \brief Length for Ifx_CANFD_CH_TXESC_Bits.TBDS */
#define IFX_CANFD_CH_TXESC_TBDS_LEN (3u)

/** \brief Mask for Ifx_CANFD_CH_TXESC_Bits.TBDS */
#define IFX_CANFD_CH_TXESC_TBDS_MSK (0x7u)

/** \brief Offset for Ifx_CANFD_CH_TXESC_Bits.TBDS */
#define IFX_CANFD_CH_TXESC_TBDS_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TXBRP_Bits.TRP */
#define IFX_CANFD_CH_TXBRP_TRP_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_TXBRP_Bits.TRP */
#define IFX_CANFD_CH_TXBRP_TRP_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_TXBRP_Bits.TRP */
#define IFX_CANFD_CH_TXBRP_TRP_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TXBAR_Bits.AR */
#define IFX_CANFD_CH_TXBAR_AR_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_TXBAR_Bits.AR */
#define IFX_CANFD_CH_TXBAR_AR_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_TXBAR_Bits.AR */
#define IFX_CANFD_CH_TXBAR_AR_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TXBCR_Bits.CR */
#define IFX_CANFD_CH_TXBCR_CR_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_TXBCR_Bits.CR */
#define IFX_CANFD_CH_TXBCR_CR_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_TXBCR_Bits.CR */
#define IFX_CANFD_CH_TXBCR_CR_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TXBTO_Bits.TO */
#define IFX_CANFD_CH_TXBTO_TO_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_TXBTO_Bits.TO */
#define IFX_CANFD_CH_TXBTO_TO_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_TXBTO_Bits.TO */
#define IFX_CANFD_CH_TXBTO_TO_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TXBCF_Bits.CF */
#define IFX_CANFD_CH_TXBCF_CF_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_TXBCF_Bits.CF */
#define IFX_CANFD_CH_TXBCF_CF_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_TXBCF_Bits.CF */
#define IFX_CANFD_CH_TXBCF_CF_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TXBTIE_Bits.TIE */
#define IFX_CANFD_CH_TXBTIE_TIE_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_TXBTIE_Bits.TIE */
#define IFX_CANFD_CH_TXBTIE_TIE_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_TXBTIE_Bits.TIE */
#define IFX_CANFD_CH_TXBTIE_TIE_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TXBCIE_Bits.CFIE */
#define IFX_CANFD_CH_TXBCIE_CFIE_LEN (32u)

/** \brief Mask for Ifx_CANFD_CH_TXBCIE_Bits.CFIE */
#define IFX_CANFD_CH_TXBCIE_CFIE_MSK (0xffffffffu)

/** \brief Offset for Ifx_CANFD_CH_TXBCIE_Bits.CFIE */
#define IFX_CANFD_CH_TXBCIE_CFIE_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TXEFC_Bits.EFSA */
#define IFX_CANFD_CH_TXEFC_EFSA_LEN (14u)

/** \brief Mask for Ifx_CANFD_CH_TXEFC_Bits.EFSA */
#define IFX_CANFD_CH_TXEFC_EFSA_MSK (0x3fffu)

/** \brief Offset for Ifx_CANFD_CH_TXEFC_Bits.EFSA */
#define IFX_CANFD_CH_TXEFC_EFSA_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_TXEFC_Bits.EFS */
#define IFX_CANFD_CH_TXEFC_EFS_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_TXEFC_Bits.EFS */
#define IFX_CANFD_CH_TXEFC_EFS_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_TXEFC_Bits.EFS */
#define IFX_CANFD_CH_TXEFC_EFS_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TXEFC_Bits.EFWM */
#define IFX_CANFD_CH_TXEFC_EFWM_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_TXEFC_Bits.EFWM */
#define IFX_CANFD_CH_TXEFC_EFWM_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_TXEFC_Bits.EFWM */
#define IFX_CANFD_CH_TXEFC_EFWM_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_TXEFS_Bits.EFFL */
#define IFX_CANFD_CH_TXEFS_EFFL_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_TXEFS_Bits.EFFL */
#define IFX_CANFD_CH_TXEFS_EFFL_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_TXEFS_Bits.EFFL */
#define IFX_CANFD_CH_TXEFS_EFFL_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TXEFS_Bits.EFGI */
#define IFX_CANFD_CH_TXEFS_EFGI_LEN (5u)

/** \brief Mask for Ifx_CANFD_CH_TXEFS_Bits.EFGI */
#define IFX_CANFD_CH_TXEFS_EFGI_MSK (0x1fu)

/** \brief Offset for Ifx_CANFD_CH_TXEFS_Bits.EFGI */
#define IFX_CANFD_CH_TXEFS_EFGI_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_TXEFS_Bits.EFPI */
#define IFX_CANFD_CH_TXEFS_EFPI_LEN (5u)

/** \brief Mask for Ifx_CANFD_CH_TXEFS_Bits.EFPI */
#define IFX_CANFD_CH_TXEFS_EFPI_MSK (0x1fu)

/** \brief Offset for Ifx_CANFD_CH_TXEFS_Bits.EFPI */
#define IFX_CANFD_CH_TXEFS_EFPI_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TXEFS_Bits.EFF */
#define IFX_CANFD_CH_TXEFS_EFF_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TXEFS_Bits.EFF */
#define IFX_CANFD_CH_TXEFS_EFF_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TXEFS_Bits.EFF */
#define IFX_CANFD_CH_TXEFS_EFF_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_TXEFS_Bits.TEFL */
#define IFX_CANFD_CH_TXEFS_TEFL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TXEFS_Bits.TEFL */
#define IFX_CANFD_CH_TXEFS_TEFL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TXEFS_Bits.TEFL */
#define IFX_CANFD_CH_TXEFS_TEFL_OFF (25u)

/** \brief Length for Ifx_CANFD_CH_TXEFA_Bits.EFAI */
#define IFX_CANFD_CH_TXEFA_EFAI_LEN (5u)

/** \brief Mask for Ifx_CANFD_CH_TXEFA_Bits.EFAI */
#define IFX_CANFD_CH_TXEFA_EFAI_MSK (0x1fu)

/** \brief Offset for Ifx_CANFD_CH_TXEFA_Bits.EFAI */
#define IFX_CANFD_CH_TXEFA_EFAI_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTTMC_Bits.TMSA */
#define IFX_CANFD_CH_TTTMC_TMSA_LEN (14u)

/** \brief Mask for Ifx_CANFD_CH_TTTMC_Bits.TMSA */
#define IFX_CANFD_CH_TTTMC_TMSA_MSK (0x3fffu)

/** \brief Offset for Ifx_CANFD_CH_TTTMC_Bits.TMSA */
#define IFX_CANFD_CH_TTTMC_TMSA_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_TTTMC_Bits.TME */
#define IFX_CANFD_CH_TTTMC_TME_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_TTTMC_Bits.TME */
#define IFX_CANFD_CH_TTTMC_TME_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_TTTMC_Bits.TME */
#define IFX_CANFD_CH_TTTMC_TME_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TTRMC_Bits.RID */
#define IFX_CANFD_CH_TTRMC_RID_LEN (29u)

/** \brief Mask for Ifx_CANFD_CH_TTRMC_Bits.RID */
#define IFX_CANFD_CH_TTRMC_RID_MSK (0x1fffffffu)

/** \brief Offset for Ifx_CANFD_CH_TTRMC_Bits.RID */
#define IFX_CANFD_CH_TTRMC_RID_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTRMC_Bits.XTD */
#define IFX_CANFD_CH_TTRMC_XTD_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTRMC_Bits.XTD */
#define IFX_CANFD_CH_TTRMC_XTD_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTRMC_Bits.XTD */
#define IFX_CANFD_CH_TTRMC_XTD_OFF (30u)

/** \brief Length for Ifx_CANFD_CH_TTRMC_Bits.RMPS */
#define IFX_CANFD_CH_TTRMC_RMPS_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTRMC_Bits.RMPS */
#define IFX_CANFD_CH_TTRMC_RMPS_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTRMC_Bits.RMPS */
#define IFX_CANFD_CH_TTRMC_RMPS_OFF (31u)

/** \brief Length for Ifx_CANFD_CH_TTOCF_Bits.OM */
#define IFX_CANFD_CH_TTOCF_OM_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_TTOCF_Bits.OM */
#define IFX_CANFD_CH_TTOCF_OM_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_TTOCF_Bits.OM */
#define IFX_CANFD_CH_TTOCF_OM_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTOCF_Bits.GEN */
#define IFX_CANFD_CH_TTOCF_GEN_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCF_Bits.GEN */
#define IFX_CANFD_CH_TTOCF_GEN_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCF_Bits.GEN */
#define IFX_CANFD_CH_TTOCF_GEN_OFF (3u)

/** \brief Length for Ifx_CANFD_CH_TTOCF_Bits.TM */
#define IFX_CANFD_CH_TTOCF_TM_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCF_Bits.TM */
#define IFX_CANFD_CH_TTOCF_TM_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCF_Bits.TM */
#define IFX_CANFD_CH_TTOCF_TM_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_TTOCF_Bits.LDSDL */
#define IFX_CANFD_CH_TTOCF_LDSDL_LEN (3u)

/** \brief Mask for Ifx_CANFD_CH_TTOCF_Bits.LDSDL */
#define IFX_CANFD_CH_TTOCF_LDSDL_MSK (0x7u)

/** \brief Offset for Ifx_CANFD_CH_TTOCF_Bits.LDSDL */
#define IFX_CANFD_CH_TTOCF_LDSDL_OFF (5u)

/** \brief Length for Ifx_CANFD_CH_TTOCF_Bits.IRTO */
#define IFX_CANFD_CH_TTOCF_IRTO_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_TTOCF_Bits.IRTO */
#define IFX_CANFD_CH_TTOCF_IRTO_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_TTOCF_Bits.IRTO */
#define IFX_CANFD_CH_TTOCF_IRTO_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_TTOCF_Bits.EECS */
#define IFX_CANFD_CH_TTOCF_EECS_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCF_Bits.EECS */
#define IFX_CANFD_CH_TTOCF_EECS_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCF_Bits.EECS */
#define IFX_CANFD_CH_TTOCF_EECS_OFF (15u)

/** \brief Length for Ifx_CANFD_CH_TTOCF_Bits.AWL */
#define IFX_CANFD_CH_TTOCF_AWL_LEN (8u)

/** \brief Mask for Ifx_CANFD_CH_TTOCF_Bits.AWL */
#define IFX_CANFD_CH_TTOCF_AWL_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CH_TTOCF_Bits.AWL */
#define IFX_CANFD_CH_TTOCF_AWL_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TTOCF_Bits.EGTF */
#define IFX_CANFD_CH_TTOCF_EGTF_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCF_Bits.EGTF */
#define IFX_CANFD_CH_TTOCF_EGTF_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCF_Bits.EGTF */
#define IFX_CANFD_CH_TTOCF_EGTF_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_TTOCF_Bits.ECC */
#define IFX_CANFD_CH_TTOCF_ECC_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCF_Bits.ECC */
#define IFX_CANFD_CH_TTOCF_ECC_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCF_Bits.ECC */
#define IFX_CANFD_CH_TTOCF_ECC_OFF (25u)

/** \brief Length for Ifx_CANFD_CH_TTOCF_Bits.EVTP */
#define IFX_CANFD_CH_TTOCF_EVTP_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCF_Bits.EVTP */
#define IFX_CANFD_CH_TTOCF_EVTP_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCF_Bits.EVTP */
#define IFX_CANFD_CH_TTOCF_EVTP_OFF (26u)

/** \brief Length for Ifx_CANFD_CH_TTMLM_Bits.CCM */
#define IFX_CANFD_CH_TTMLM_CCM_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_TTMLM_Bits.CCM */
#define IFX_CANFD_CH_TTMLM_CCM_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_TTMLM_Bits.CCM */
#define IFX_CANFD_CH_TTMLM_CCM_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTMLM_Bits.CSS */
#define IFX_CANFD_CH_TTMLM_CSS_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_TTMLM_Bits.CSS */
#define IFX_CANFD_CH_TTMLM_CSS_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_TTMLM_Bits.CSS */
#define IFX_CANFD_CH_TTMLM_CSS_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_TTMLM_Bits.TXEW */
#define IFX_CANFD_CH_TTMLM_TXEW_LEN (4u)

/** \brief Mask for Ifx_CANFD_CH_TTMLM_Bits.TXEW */
#define IFX_CANFD_CH_TTMLM_TXEW_MSK (0xfu)

/** \brief Offset for Ifx_CANFD_CH_TTMLM_Bits.TXEW */
#define IFX_CANFD_CH_TTMLM_TXEW_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_TTMLM_Bits.ENTT */
#define IFX_CANFD_CH_TTMLM_ENTT_LEN (12u)

/** \brief Mask for Ifx_CANFD_CH_TTMLM_Bits.ENTT */
#define IFX_CANFD_CH_TTMLM_ENTT_MSK (0xfffu)

/** \brief Offset for Ifx_CANFD_CH_TTMLM_Bits.ENTT */
#define IFX_CANFD_CH_TTMLM_ENTT_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TURCF_Bits.NCL */
#define IFX_CANFD_CH_TURCF_NCL_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TURCF_Bits.NCL */
#define IFX_CANFD_CH_TURCF_NCL_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TURCF_Bits.NCL */
#define IFX_CANFD_CH_TURCF_NCL_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TURCF_Bits.DC */
#define IFX_CANFD_CH_TURCF_DC_LEN (14u)

/** \brief Mask for Ifx_CANFD_CH_TURCF_Bits.DC */
#define IFX_CANFD_CH_TURCF_DC_MSK (0x3fffu)

/** \brief Offset for Ifx_CANFD_CH_TURCF_Bits.DC */
#define IFX_CANFD_CH_TURCF_DC_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TURCF_Bits.ELT */
#define IFX_CANFD_CH_TURCF_ELT_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TURCF_Bits.ELT */
#define IFX_CANFD_CH_TURCF_ELT_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TURCF_Bits.ELT */
#define IFX_CANFD_CH_TURCF_ELT_OFF (31u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.SGT */
#define IFX_CANFD_CH_TTOCN_SGT_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.SGT */
#define IFX_CANFD_CH_TTOCN_SGT_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.SGT */
#define IFX_CANFD_CH_TTOCN_SGT_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.ECS */
#define IFX_CANFD_CH_TTOCN_ECS_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.ECS */
#define IFX_CANFD_CH_TTOCN_ECS_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.ECS */
#define IFX_CANFD_CH_TTOCN_ECS_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.SWP */
#define IFX_CANFD_CH_TTOCN_SWP_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.SWP */
#define IFX_CANFD_CH_TTOCN_SWP_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.SWP */
#define IFX_CANFD_CH_TTOCN_SWP_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.SWS */
#define IFX_CANFD_CH_TTOCN_SWS_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.SWS */
#define IFX_CANFD_CH_TTOCN_SWS_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.SWS */
#define IFX_CANFD_CH_TTOCN_SWS_OFF (3u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.RTIE */
#define IFX_CANFD_CH_TTOCN_RTIE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.RTIE */
#define IFX_CANFD_CH_TTOCN_RTIE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.RTIE */
#define IFX_CANFD_CH_TTOCN_RTIE_OFF (5u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.TMC */
#define IFX_CANFD_CH_TTOCN_TMC_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.TMC */
#define IFX_CANFD_CH_TTOCN_TMC_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.TMC */
#define IFX_CANFD_CH_TTOCN_TMC_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.TTIE */
#define IFX_CANFD_CH_TTOCN_TTIE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.TTIE */
#define IFX_CANFD_CH_TTOCN_TTIE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.TTIE */
#define IFX_CANFD_CH_TTOCN_TTIE_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.GCS */
#define IFX_CANFD_CH_TTOCN_GCS_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.GCS */
#define IFX_CANFD_CH_TTOCN_GCS_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.GCS */
#define IFX_CANFD_CH_TTOCN_GCS_OFF (9u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.FGP */
#define IFX_CANFD_CH_TTOCN_FGP_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.FGP */
#define IFX_CANFD_CH_TTOCN_FGP_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.FGP */
#define IFX_CANFD_CH_TTOCN_FGP_OFF (10u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.TMG */
#define IFX_CANFD_CH_TTOCN_TMG_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.TMG */
#define IFX_CANFD_CH_TTOCN_TMG_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.TMG */
#define IFX_CANFD_CH_TTOCN_TMG_OFF (11u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.NIG */
#define IFX_CANFD_CH_TTOCN_NIG_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.NIG */
#define IFX_CANFD_CH_TTOCN_NIG_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.NIG */
#define IFX_CANFD_CH_TTOCN_NIG_OFF (12u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.ESCN */
#define IFX_CANFD_CH_TTOCN_ESCN_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.ESCN */
#define IFX_CANFD_CH_TTOCN_ESCN_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.ESCN */
#define IFX_CANFD_CH_TTOCN_ESCN_OFF (13u)

/** \brief Length for Ifx_CANFD_CH_TTOCN_Bits.LCKC */
#define IFX_CANFD_CH_TTOCN_LCKC_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOCN_Bits.LCKC */
#define IFX_CANFD_CH_TTOCN_LCKC_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOCN_Bits.LCKC */
#define IFX_CANFD_CH_TTOCN_LCKC_OFF (15u)

/** \brief Length for Ifx_CANFD_CH_TTGTP_Bits.TP */
#define IFX_CANFD_CH_TTGTP_TP_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TTGTP_Bits.TP */
#define IFX_CANFD_CH_TTGTP_TP_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TTGTP_Bits.TP */
#define IFX_CANFD_CH_TTGTP_TP_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTGTP_Bits.CTP */
#define IFX_CANFD_CH_TTGTP_CTP_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TTGTP_Bits.CTP */
#define IFX_CANFD_CH_TTGTP_CTP_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TTGTP_Bits.CTP */
#define IFX_CANFD_CH_TTGTP_CTP_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TTTMK_Bits.TM_ */
#define IFX_CANFD_CH_TTTMK_TM__LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TTTMK_Bits.TM_ */
#define IFX_CANFD_CH_TTTMK_TM__MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TTTMK_Bits.TM_ */
#define IFX_CANFD_CH_TTTMK_TM__OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTTMK_Bits.TICC */
#define IFX_CANFD_CH_TTTMK_TICC_LEN (7u)

/** \brief Mask for Ifx_CANFD_CH_TTTMK_Bits.TICC */
#define IFX_CANFD_CH_TTTMK_TICC_MSK (0x7fu)

/** \brief Offset for Ifx_CANFD_CH_TTTMK_Bits.TICC */
#define IFX_CANFD_CH_TTTMK_TICC_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TTTMK_Bits.LCKM */
#define IFX_CANFD_CH_TTTMK_LCKM_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTTMK_Bits.LCKM */
#define IFX_CANFD_CH_TTTMK_LCKM_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTTMK_Bits.LCKM */
#define IFX_CANFD_CH_TTTMK_LCKM_OFF (31u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.SBC */
#define IFX_CANFD_CH_TTIR_SBC_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.SBC */
#define IFX_CANFD_CH_TTIR_SBC_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.SBC */
#define IFX_CANFD_CH_TTIR_SBC_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.SMC */
#define IFX_CANFD_CH_TTIR_SMC_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.SMC */
#define IFX_CANFD_CH_TTIR_SMC_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.SMC */
#define IFX_CANFD_CH_TTIR_SMC_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.CSM_ */
#define IFX_CANFD_CH_TTIR_CSM__LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.CSM_ */
#define IFX_CANFD_CH_TTIR_CSM__MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.CSM_ */
#define IFX_CANFD_CH_TTIR_CSM__OFF (2u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.SOG */
#define IFX_CANFD_CH_TTIR_SOG_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.SOG */
#define IFX_CANFD_CH_TTIR_SOG_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.SOG */
#define IFX_CANFD_CH_TTIR_SOG_OFF (3u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.RTMI */
#define IFX_CANFD_CH_TTIR_RTMI_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.RTMI */
#define IFX_CANFD_CH_TTIR_RTMI_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.RTMI */
#define IFX_CANFD_CH_TTIR_RTMI_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.TTMI */
#define IFX_CANFD_CH_TTIR_TTMI_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.TTMI */
#define IFX_CANFD_CH_TTIR_TTMI_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.TTMI */
#define IFX_CANFD_CH_TTIR_TTMI_OFF (5u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.SWE */
#define IFX_CANFD_CH_TTIR_SWE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.SWE */
#define IFX_CANFD_CH_TTIR_SWE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.SWE */
#define IFX_CANFD_CH_TTIR_SWE_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.GTW */
#define IFX_CANFD_CH_TTIR_GTW_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.GTW */
#define IFX_CANFD_CH_TTIR_GTW_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.GTW */
#define IFX_CANFD_CH_TTIR_GTW_OFF (7u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.GTD */
#define IFX_CANFD_CH_TTIR_GTD_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.GTD */
#define IFX_CANFD_CH_TTIR_GTD_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.GTD */
#define IFX_CANFD_CH_TTIR_GTD_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.GTE */
#define IFX_CANFD_CH_TTIR_GTE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.GTE */
#define IFX_CANFD_CH_TTIR_GTE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.GTE */
#define IFX_CANFD_CH_TTIR_GTE_OFF (9u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.TXU */
#define IFX_CANFD_CH_TTIR_TXU_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.TXU */
#define IFX_CANFD_CH_TTIR_TXU_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.TXU */
#define IFX_CANFD_CH_TTIR_TXU_OFF (10u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.TXO */
#define IFX_CANFD_CH_TTIR_TXO_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.TXO */
#define IFX_CANFD_CH_TTIR_TXO_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.TXO */
#define IFX_CANFD_CH_TTIR_TXO_OFF (11u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.SE1 */
#define IFX_CANFD_CH_TTIR_SE1_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.SE1 */
#define IFX_CANFD_CH_TTIR_SE1_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.SE1 */
#define IFX_CANFD_CH_TTIR_SE1_OFF (12u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.SE2 */
#define IFX_CANFD_CH_TTIR_SE2_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.SE2 */
#define IFX_CANFD_CH_TTIR_SE2_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.SE2 */
#define IFX_CANFD_CH_TTIR_SE2_OFF (13u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.ELC */
#define IFX_CANFD_CH_TTIR_ELC_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.ELC */
#define IFX_CANFD_CH_TTIR_ELC_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.ELC */
#define IFX_CANFD_CH_TTIR_ELC_OFF (14u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.IWT */
#define IFX_CANFD_CH_TTIR_IWT_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.IWT */
#define IFX_CANFD_CH_TTIR_IWT_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.IWT */
#define IFX_CANFD_CH_TTIR_IWT_OFF (15u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.WT */
#define IFX_CANFD_CH_TTIR_WT_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.WT */
#define IFX_CANFD_CH_TTIR_WT_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.WT */
#define IFX_CANFD_CH_TTIR_WT_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.AW */
#define IFX_CANFD_CH_TTIR_AW_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.AW */
#define IFX_CANFD_CH_TTIR_AW_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.AW */
#define IFX_CANFD_CH_TTIR_AW_OFF (17u)

/** \brief Length for Ifx_CANFD_CH_TTIR_Bits.CER */
#define IFX_CANFD_CH_TTIR_CER_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIR_Bits.CER */
#define IFX_CANFD_CH_TTIR_CER_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIR_Bits.CER */
#define IFX_CANFD_CH_TTIR_CER_OFF (18u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.SBCE */
#define IFX_CANFD_CH_TTIE_SBCE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.SBCE */
#define IFX_CANFD_CH_TTIE_SBCE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.SBCE */
#define IFX_CANFD_CH_TTIE_SBCE_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.SMCE */
#define IFX_CANFD_CH_TTIE_SMCE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.SMCE */
#define IFX_CANFD_CH_TTIE_SMCE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.SMCE */
#define IFX_CANFD_CH_TTIE_SMCE_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.CSME */
#define IFX_CANFD_CH_TTIE_CSME_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.CSME */
#define IFX_CANFD_CH_TTIE_CSME_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.CSME */
#define IFX_CANFD_CH_TTIE_CSME_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.SOGE */
#define IFX_CANFD_CH_TTIE_SOGE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.SOGE */
#define IFX_CANFD_CH_TTIE_SOGE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.SOGE */
#define IFX_CANFD_CH_TTIE_SOGE_OFF (3u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.RTMIE */
#define IFX_CANFD_CH_TTIE_RTMIE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.RTMIE */
#define IFX_CANFD_CH_TTIE_RTMIE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.RTMIE */
#define IFX_CANFD_CH_TTIE_RTMIE_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.TTMIE */
#define IFX_CANFD_CH_TTIE_TTMIE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.TTMIE */
#define IFX_CANFD_CH_TTIE_TTMIE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.TTMIE */
#define IFX_CANFD_CH_TTIE_TTMIE_OFF (5u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.SWEE */
#define IFX_CANFD_CH_TTIE_SWEE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.SWEE */
#define IFX_CANFD_CH_TTIE_SWEE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.SWEE */
#define IFX_CANFD_CH_TTIE_SWEE_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.GTWE */
#define IFX_CANFD_CH_TTIE_GTWE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.GTWE */
#define IFX_CANFD_CH_TTIE_GTWE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.GTWE */
#define IFX_CANFD_CH_TTIE_GTWE_OFF (7u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.GTDE */
#define IFX_CANFD_CH_TTIE_GTDE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.GTDE */
#define IFX_CANFD_CH_TTIE_GTDE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.GTDE */
#define IFX_CANFD_CH_TTIE_GTDE_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.GTEE */
#define IFX_CANFD_CH_TTIE_GTEE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.GTEE */
#define IFX_CANFD_CH_TTIE_GTEE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.GTEE */
#define IFX_CANFD_CH_TTIE_GTEE_OFF (9u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.TXUE */
#define IFX_CANFD_CH_TTIE_TXUE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.TXUE */
#define IFX_CANFD_CH_TTIE_TXUE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.TXUE */
#define IFX_CANFD_CH_TTIE_TXUE_OFF (10u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.TXOE */
#define IFX_CANFD_CH_TTIE_TXOE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.TXOE */
#define IFX_CANFD_CH_TTIE_TXOE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.TXOE */
#define IFX_CANFD_CH_TTIE_TXOE_OFF (11u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.SE1E */
#define IFX_CANFD_CH_TTIE_SE1E_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.SE1E */
#define IFX_CANFD_CH_TTIE_SE1E_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.SE1E */
#define IFX_CANFD_CH_TTIE_SE1E_OFF (12u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.SE2E */
#define IFX_CANFD_CH_TTIE_SE2E_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.SE2E */
#define IFX_CANFD_CH_TTIE_SE2E_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.SE2E */
#define IFX_CANFD_CH_TTIE_SE2E_OFF (13u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.ELCE */
#define IFX_CANFD_CH_TTIE_ELCE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.ELCE */
#define IFX_CANFD_CH_TTIE_ELCE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.ELCE */
#define IFX_CANFD_CH_TTIE_ELCE_OFF (14u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.IWTE */
#define IFX_CANFD_CH_TTIE_IWTE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.IWTE */
#define IFX_CANFD_CH_TTIE_IWTE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.IWTE */
#define IFX_CANFD_CH_TTIE_IWTE_OFF (15u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.WTE */
#define IFX_CANFD_CH_TTIE_WTE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.WTE */
#define IFX_CANFD_CH_TTIE_WTE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.WTE */
#define IFX_CANFD_CH_TTIE_WTE_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.AWE_ */
#define IFX_CANFD_CH_TTIE_AWE__LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.AWE_ */
#define IFX_CANFD_CH_TTIE_AWE__MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.AWE_ */
#define IFX_CANFD_CH_TTIE_AWE__OFF (17u)

/** \brief Length for Ifx_CANFD_CH_TTIE_Bits.CERE */
#define IFX_CANFD_CH_TTIE_CERE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTIE_Bits.CERE */
#define IFX_CANFD_CH_TTIE_CERE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTIE_Bits.CERE */
#define IFX_CANFD_CH_TTIE_CERE_OFF (18u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.SBCL */
#define IFX_CANFD_CH_TTILS_SBCL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.SBCL */
#define IFX_CANFD_CH_TTILS_SBCL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.SBCL */
#define IFX_CANFD_CH_TTILS_SBCL_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.SMCL */
#define IFX_CANFD_CH_TTILS_SMCL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.SMCL */
#define IFX_CANFD_CH_TTILS_SMCL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.SMCL */
#define IFX_CANFD_CH_TTILS_SMCL_OFF (1u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.CSML */
#define IFX_CANFD_CH_TTILS_CSML_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.CSML */
#define IFX_CANFD_CH_TTILS_CSML_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.CSML */
#define IFX_CANFD_CH_TTILS_CSML_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.SOGL */
#define IFX_CANFD_CH_TTILS_SOGL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.SOGL */
#define IFX_CANFD_CH_TTILS_SOGL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.SOGL */
#define IFX_CANFD_CH_TTILS_SOGL_OFF (3u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.RTMIL */
#define IFX_CANFD_CH_TTILS_RTMIL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.RTMIL */
#define IFX_CANFD_CH_TTILS_RTMIL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.RTMIL */
#define IFX_CANFD_CH_TTILS_RTMIL_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.TTMIL */
#define IFX_CANFD_CH_TTILS_TTMIL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.TTMIL */
#define IFX_CANFD_CH_TTILS_TTMIL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.TTMIL */
#define IFX_CANFD_CH_TTILS_TTMIL_OFF (5u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.SWEL */
#define IFX_CANFD_CH_TTILS_SWEL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.SWEL */
#define IFX_CANFD_CH_TTILS_SWEL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.SWEL */
#define IFX_CANFD_CH_TTILS_SWEL_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.GTWL */
#define IFX_CANFD_CH_TTILS_GTWL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.GTWL */
#define IFX_CANFD_CH_TTILS_GTWL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.GTWL */
#define IFX_CANFD_CH_TTILS_GTWL_OFF (7u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.GTDL */
#define IFX_CANFD_CH_TTILS_GTDL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.GTDL */
#define IFX_CANFD_CH_TTILS_GTDL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.GTDL */
#define IFX_CANFD_CH_TTILS_GTDL_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.GTEL */
#define IFX_CANFD_CH_TTILS_GTEL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.GTEL */
#define IFX_CANFD_CH_TTILS_GTEL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.GTEL */
#define IFX_CANFD_CH_TTILS_GTEL_OFF (9u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.TXUL */
#define IFX_CANFD_CH_TTILS_TXUL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.TXUL */
#define IFX_CANFD_CH_TTILS_TXUL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.TXUL */
#define IFX_CANFD_CH_TTILS_TXUL_OFF (10u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.TXOL */
#define IFX_CANFD_CH_TTILS_TXOL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.TXOL */
#define IFX_CANFD_CH_TTILS_TXOL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.TXOL */
#define IFX_CANFD_CH_TTILS_TXOL_OFF (11u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.SE1L */
#define IFX_CANFD_CH_TTILS_SE1L_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.SE1L */
#define IFX_CANFD_CH_TTILS_SE1L_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.SE1L */
#define IFX_CANFD_CH_TTILS_SE1L_OFF (12u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.SE2L */
#define IFX_CANFD_CH_TTILS_SE2L_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.SE2L */
#define IFX_CANFD_CH_TTILS_SE2L_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.SE2L */
#define IFX_CANFD_CH_TTILS_SE2L_OFF (13u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.ELCL */
#define IFX_CANFD_CH_TTILS_ELCL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.ELCL */
#define IFX_CANFD_CH_TTILS_ELCL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.ELCL */
#define IFX_CANFD_CH_TTILS_ELCL_OFF (14u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.IWTL */
#define IFX_CANFD_CH_TTILS_IWTL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.IWTL */
#define IFX_CANFD_CH_TTILS_IWTL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.IWTL */
#define IFX_CANFD_CH_TTILS_IWTL_OFF (15u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.WTL */
#define IFX_CANFD_CH_TTILS_WTL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.WTL */
#define IFX_CANFD_CH_TTILS_WTL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.WTL */
#define IFX_CANFD_CH_TTILS_WTL_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.AWL_ */
#define IFX_CANFD_CH_TTILS_AWL__LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.AWL_ */
#define IFX_CANFD_CH_TTILS_AWL__MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.AWL_ */
#define IFX_CANFD_CH_TTILS_AWL__OFF (17u)

/** \brief Length for Ifx_CANFD_CH_TTILS_Bits.CERL */
#define IFX_CANFD_CH_TTILS_CERL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTILS_Bits.CERL */
#define IFX_CANFD_CH_TTILS_CERL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTILS_Bits.CERL */
#define IFX_CANFD_CH_TTILS_CERL_OFF (18u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.EL */
#define IFX_CANFD_CH_TTOST_EL_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.EL */
#define IFX_CANFD_CH_TTOST_EL_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.EL */
#define IFX_CANFD_CH_TTOST_EL_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.MS */
#define IFX_CANFD_CH_TTOST_MS_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.MS */
#define IFX_CANFD_CH_TTOST_MS_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.MS */
#define IFX_CANFD_CH_TTOST_MS_OFF (2u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.SYS */
#define IFX_CANFD_CH_TTOST_SYS_LEN (2u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.SYS */
#define IFX_CANFD_CH_TTOST_SYS_MSK (0x3u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.SYS */
#define IFX_CANFD_CH_TTOST_SYS_OFF (4u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.QGTP */
#define IFX_CANFD_CH_TTOST_QGTP_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.QGTP */
#define IFX_CANFD_CH_TTOST_QGTP_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.QGTP */
#define IFX_CANFD_CH_TTOST_QGTP_OFF (6u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.QCS */
#define IFX_CANFD_CH_TTOST_QCS_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.QCS */
#define IFX_CANFD_CH_TTOST_QCS_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.QCS */
#define IFX_CANFD_CH_TTOST_QCS_OFF (7u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.RTO */
#define IFX_CANFD_CH_TTOST_RTO_LEN (8u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.RTO */
#define IFX_CANFD_CH_TTOST_RTO_MSK (0xffu)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.RTO */
#define IFX_CANFD_CH_TTOST_RTO_OFF (8u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.WGTD */
#define IFX_CANFD_CH_TTOST_WGTD_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.WGTD */
#define IFX_CANFD_CH_TTOST_WGTD_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.WGTD */
#define IFX_CANFD_CH_TTOST_WGTD_OFF (22u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.GFI */
#define IFX_CANFD_CH_TTOST_GFI_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.GFI */
#define IFX_CANFD_CH_TTOST_GFI_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.GFI */
#define IFX_CANFD_CH_TTOST_GFI_OFF (23u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.TMP */
#define IFX_CANFD_CH_TTOST_TMP_LEN (3u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.TMP */
#define IFX_CANFD_CH_TTOST_TMP_MSK (0x7u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.TMP */
#define IFX_CANFD_CH_TTOST_TMP_OFF (24u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.GSI */
#define IFX_CANFD_CH_TTOST_GSI_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.GSI */
#define IFX_CANFD_CH_TTOST_GSI_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.GSI */
#define IFX_CANFD_CH_TTOST_GSI_OFF (27u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.WFE */
#define IFX_CANFD_CH_TTOST_WFE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.WFE */
#define IFX_CANFD_CH_TTOST_WFE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.WFE */
#define IFX_CANFD_CH_TTOST_WFE_OFF (28u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.AWE */
#define IFX_CANFD_CH_TTOST_AWE_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.AWE */
#define IFX_CANFD_CH_TTOST_AWE_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.AWE */
#define IFX_CANFD_CH_TTOST_AWE_OFF (29u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.WECS */
#define IFX_CANFD_CH_TTOST_WECS_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.WECS */
#define IFX_CANFD_CH_TTOST_WECS_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.WECS */
#define IFX_CANFD_CH_TTOST_WECS_OFF (30u)

/** \brief Length for Ifx_CANFD_CH_TTOST_Bits.SPL */
#define IFX_CANFD_CH_TTOST_SPL_LEN (1u)

/** \brief Mask for Ifx_CANFD_CH_TTOST_Bits.SPL */
#define IFX_CANFD_CH_TTOST_SPL_MSK (0x1u)

/** \brief Offset for Ifx_CANFD_CH_TTOST_Bits.SPL */
#define IFX_CANFD_CH_TTOST_SPL_OFF (31u)

/** \brief Length for Ifx_CANFD_CH_TURNA_Bits.NAV */
#define IFX_CANFD_CH_TURNA_NAV_LEN (18u)

/** \brief Mask for Ifx_CANFD_CH_TURNA_Bits.NAV */
#define IFX_CANFD_CH_TURNA_NAV_MSK (0x3ffffu)

/** \brief Offset for Ifx_CANFD_CH_TURNA_Bits.NAV */
#define IFX_CANFD_CH_TURNA_NAV_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTLGT_Bits.LT */
#define IFX_CANFD_CH_TTLGT_LT_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TTLGT_Bits.LT */
#define IFX_CANFD_CH_TTLGT_LT_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TTLGT_Bits.LT */
#define IFX_CANFD_CH_TTLGT_LT_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTLGT_Bits.GT */
#define IFX_CANFD_CH_TTLGT_GT_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TTLGT_Bits.GT */
#define IFX_CANFD_CH_TTLGT_GT_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TTLGT_Bits.GT */
#define IFX_CANFD_CH_TTLGT_GT_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TTCTC_Bits.CT */
#define IFX_CANFD_CH_TTCTC_CT_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TTCTC_Bits.CT */
#define IFX_CANFD_CH_TTCTC_CT_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TTCTC_Bits.CT */
#define IFX_CANFD_CH_TTCTC_CT_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTCTC_Bits.CC */
#define IFX_CANFD_CH_TTCTC_CC_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_TTCTC_Bits.CC */
#define IFX_CANFD_CH_TTCTC_CC_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_TTCTC_Bits.CC */
#define IFX_CANFD_CH_TTCTC_CC_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TTCPT_Bits.CCV */
#define IFX_CANFD_CH_TTCPT_CCV_LEN (6u)

/** \brief Mask for Ifx_CANFD_CH_TTCPT_Bits.CCV */
#define IFX_CANFD_CH_TTCPT_CCV_MSK (0x3fu)

/** \brief Offset for Ifx_CANFD_CH_TTCPT_Bits.CCV */
#define IFX_CANFD_CH_TTCPT_CCV_OFF (0u)

/** \brief Length for Ifx_CANFD_CH_TTCPT_Bits.SWV */
#define IFX_CANFD_CH_TTCPT_SWV_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TTCPT_Bits.SWV */
#define IFX_CANFD_CH_TTCPT_SWV_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TTCPT_Bits.SWV */
#define IFX_CANFD_CH_TTCPT_SWV_OFF (16u)

/** \brief Length for Ifx_CANFD_CH_TTCSM_Bits.CSM */
#define IFX_CANFD_CH_TTCSM_CSM_LEN (16u)

/** \brief Mask for Ifx_CANFD_CH_TTCSM_Bits.CSM */
#define IFX_CANFD_CH_TTCSM_CSM_MSK (0xffffu)

/** \brief Offset for Ifx_CANFD_CH_TTCSM_Bits.CSM */
#define IFX_CANFD_CH_TTCSM_CSM_OFF (0u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCANFD_BF_H_ */
