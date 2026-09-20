/***************************************************************************//**
* \file IfxPPCA_reg.h
*
* \brief
* PPCA address
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
* \defgroup IfxSfr_PPCA_Registers_Cfg PPCA address
* \ingroup IfxSfr_PPCA_Registers
*
*******************************************************************************/

#ifndef _IFXPPCA_REG_H_
#define _IFXPPCA_REG_H_ 1

/******************************************************************************/
#include "IfxPPCA_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_PPCA_Registers_Cfg_BaseAddress
 * \{  */

/** \brief PPCA object */
#define MODULE_PPCA                             /*lint --e(923, 9078)*/ ((*(Ifx_PPCA*)0x43000000u))
#define MODULE_PPCA_CNFG                        /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG*)0x43000000u))
#define MODULE_PPCA_CNFG_CNFG                   /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG_CNFG*)0x43000100u))
#define MODULE_PPCA_CNFG_S2IRQ0                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG_S2IRQ*)0x43000300u))
#define MODULE_PPCA_CNFG_S2IRQ1                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG_S2IRQ*)0x43000310u))
#define MODULE_PPCA_CNFG_S2IRQ2                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG_S2IRQ*)0x43000320u))
#define MODULE_PPCA_CNFG_S2IRQ3                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG_S2IRQ*)0x43000330u))
#define MODULE_PPCA_CNFG_S2IRQ4                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG_S2IRQ*)0x43000340u))
#define MODULE_PPCA_CNFG_S2IRQ5                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG_S2IRQ*)0x43000350u))
#define MODULE_PPCA_CNFG_S2IRQ6                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG_S2IRQ*)0x43000360u))
#define MODULE_PPCA_CNFG_ADCM                   /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG_ADCM*)0x43000400u))
#define MODULE_PPCA_CNFG_DISPERI                /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CNFG_DISPERI*)0x43000800u))
#define MODULE_PPCA_EPU                         /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_EPU*)0x43004000u))
#define MODULE_PPCA_EPU_EPU_IRQ0                /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_EPU_EPU_IRQ*)0x43004100u))
#define MODULE_PPCA_EPU_EPU_IRQ1                /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_EPU_EPU_IRQ*)0x43004120u))
#define MODULE_PPCA_EPU_EPU_IRQ2                /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_EPU_EPU_IRQ*)0x43004140u))
#define MODULE_PPCA_EPU_EPU_IRQ3                /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_EPU_EPU_IRQ*)0x43004160u))
#define MODULE_PPCA_EPU_EPU_IRQ4                /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_EPU_EPU_IRQ*)0x43004180u))
#define MODULE_PPCA_EPU_EPU_IRQ5                /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_EPU_EPU_IRQ*)0x430041A0u))
#define MODULE_PPCA_EPU_EPU_IRQ6                /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_EPU_EPU_IRQ*)0x430041C0u))
#define MODULE_PPCA_EPU_EPU_IRQ7                /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_EPU_EPU_IRQ*)0x430041E0u))
#define MODULE_PPCA_EPU_EPU                     /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_EPU_EPU*)0x43004400u))
#define MODULE_PPCA_IPC0                        /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_IPC*)0x43060000u))
#define MODULE_PPCA_IPC_STRUCT0                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_IPC_STRUCT*)0x43060000u))
#define MODULE_PPCA_IPC_STRUCT1                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_IPC_STRUCT*)0x43060020u))
#define MODULE_PPCA_IPC_STRUCT2                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_IPC_STRUCT*)0x43060040u))
#define MODULE_PPCA_IPC_STRUCT3                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_IPC_STRUCT*)0x43060060u))
#define MODULE_PPCA_IPC_INTR_STRUCT0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_IPC_INTR_STRUCT*)0x43061000u))
#define MODULE_PPCA_IPC_INTR_STRUCT1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_IPC_INTR_STRUCT*)0x43061020u))
#define MODULE_PPCA_IPC_INTR_STRUCT2            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_IPC_INTR_STRUCT*)0x43061040u))
#define MODULE_PPCA_IPC_INTR_STRUCT3            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_IPC_INTR_STRUCT*)0x43061060u))
#define MODULE_PPCA_CPUSS_CNFG                  /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG*)0x43080000u))
#define MODULE_PPCA_CPUSS_CNFG_MXCM330          /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_MXCM33*)0x43080000u))
#define MODULE_PPCA_CPUSS_CNFG_MXCM331          /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_MXCM33*)0x43090000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC*)0x430A0000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC*)0x430B0000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC2            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC*)0x430C0000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC3            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC*)0x430D0000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC4            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC*)0x430E0000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC0_MPC0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC_MPC*)0x430A4000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC1_MPC0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC_MPC*)0x430B4000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC2_MPC0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC_MPC*)0x430C4000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC3_MPC0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC_MPC*)0x430D4000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC4_MPC0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC_MPC*)0x430E4000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC_PPU0        /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC_PPU*)0x430F8000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC_PPU1        /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC_PPU*)0x430F9000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC_PPU2        /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC_PPU*)0x430FA000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC_PPU3        /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC_PPU*)0x430FB000u))
#define MODULE_PPCA_CPUSS_CNFG_RAMC_PPU4        /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CPUSS_CNFG_RAMC_PPU*)0x430FC000u))
#define MODULE_PPCA_TCPWM0                      /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM*)0x43100000u))
#define MODULE_PPCA_TCPWM1                      /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM*)0x43200000u))
#define MODULE_PPCA_TCPWM2                      /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM*)0x43300000u))
#define MODULE_PPCA_TCPWM3                      /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM*)0x43400000u))
#define MODULE_PPCA_TCPWM0_GRP0                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP*)0x43100000u))
#define MODULE_PPCA_TCPWM0_GRP1                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP*)0x43110000u))
#define MODULE_PPCA_TCPWM0_GRP2                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP*)0x43120000u))
#define MODULE_PPCA_TCPWM1_GRP0                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP*)0x43200000u))
#define MODULE_PPCA_TCPWM1_GRP1                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP*)0x43210000u))
#define MODULE_PPCA_TCPWM1_GRP2                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP*)0x43220000u))
#define MODULE_PPCA_TCPWM2_GRP0                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP*)0x43300000u))
#define MODULE_PPCA_TCPWM3_GRP0                 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP*)0x43400000u))
#define MODULE_PPCA_TCPWM0_GRP0_CNT0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43100000u))
#define MODULE_PPCA_TCPWM0_GRP0_CNT1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43100100u))
#define MODULE_PPCA_TCPWM0_GRP0_CNT2            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43100200u))
#define MODULE_PPCA_TCPWM0_GRP0_CNT3            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43100300u))
#define MODULE_PPCA_TCPWM0_GRP1_CNT0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43110000u))
#define MODULE_PPCA_TCPWM0_GRP1_CNT1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43110100u))
#define MODULE_PPCA_TCPWM0_GRP1_CNT2            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43110200u))
#define MODULE_PPCA_TCPWM0_GRP1_CNT3            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43110300u))
#define MODULE_PPCA_TCPWM0_GRP2_CNT0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43120000u))
#define MODULE_PPCA_TCPWM0_GRP2_CNT1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43120100u))
#define MODULE_PPCA_TCPWM0_GRP2_CNT2            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43120200u))
#define MODULE_PPCA_TCPWM0_GRP2_CNT3            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43120300u))
#define MODULE_PPCA_TCPWM1_GRP0_CNT0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43200000u))
#define MODULE_PPCA_TCPWM1_GRP0_CNT1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43200100u))
#define MODULE_PPCA_TCPWM1_GRP1_CNT0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43210000u))
#define MODULE_PPCA_TCPWM1_GRP1_CNT1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43210100u))
#define MODULE_PPCA_TCPWM1_GRP2_CNT0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43220000u))
#define MODULE_PPCA_TCPWM1_GRP2_CNT1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43220100u))
#define MODULE_PPCA_TCPWM1_GRP2_CNT2            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43220200u))
#define MODULE_PPCA_TCPWM1_GRP2_CNT3            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43220300u))
#define MODULE_PPCA_TCPWM2_GRP0_CNT0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43300000u))
#define MODULE_PPCA_TCPWM2_GRP0_CNT1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43300100u))
#define MODULE_PPCA_TCPWM2_GRP0_CNT2            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43300200u))
#define MODULE_PPCA_TCPWM2_GRP0_CNT3            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43300300u))
#define MODULE_PPCA_TCPWM3_GRP0_CNT0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43400000u))
#define MODULE_PPCA_TCPWM3_GRP0_CNT1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_GRP_CNT*)0x43400100u))
#define MODULE_PPCA_TCPWM0_TR_ALL_GF            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_TR_ALL_GF*)0x43180000u))
#define MODULE_PPCA_TCPWM1_TR_ALL_GF            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_TR_ALL_GF*)0x43280000u))
#define MODULE_PPCA_TCPWM2_TR_ALL_GF            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_TR_ALL_GF*)0x43380000u))
#define MODULE_PPCA_TCPWM3_TR_ALL_GF            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_TR_ALL_GF*)0x43480000u))
#define MODULE_PPCA_TCPWM0_TR_ALL_SYNC_BYPASS   /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS*)0x43190000u))
#define MODULE_PPCA_TCPWM1_TR_ALL_SYNC_BYPASS   /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS*)0x43290000u))
#define MODULE_PPCA_TCPWM2_TR_ALL_SYNC_BYPASS   /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS*)0x43390000u))
#define MODULE_PPCA_TCPWM3_TR_ALL_SYNC_BYPASS   /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS*)0x43490000u))
#define MODULE_PPCA_TCPWM0_MOTIF_GRP0           /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_MOTIF_GRP*)0x431A0000u))
#define MODULE_PPCA_TCPWM0_MOTIF_GRP1           /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_MOTIF_GRP*)0x431A4000u))
#define MODULE_PPCA_TCPWM0_MOTIF_GRP2           /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_MOTIF_GRP*)0x431A8000u))
#define MODULE_PPCA_TCPWM1_MOTIF_GRP0           /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_MOTIF_GRP*)0x432A0000u))
#define MODULE_PPCA_TCPWM1_MOTIF_GRP1           /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_MOTIF_GRP*)0x432A4000u))
#define MODULE_PPCA_TCPWM1_MOTIF_GRP2           /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_MOTIF_GRP*)0x432A8000u))
#define MODULE_PPCA_TCPWM2_MOTIF_GRP0           /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_MOTIF_GRP*)0x433A0000u))
#define MODULE_PPCA_TCPWM3_MOTIF_GRP0           /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_MOTIF_GRP*)0x434A0000u))
#define MODULE_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0    /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF*)0x431A8000u))
#define MODULE_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0    /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF*)0x432A8000u))
#define MODULE_PPCA_HWFILT3P3Z_SS_0             /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_HWFILT3P3Z_SS_0*)0x43500000u))
#define MODULE_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z*)0x43500100u))
#define MODULE_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z*)0x43500200u))
#define MODULE_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z*)0x43500300u))
#define MODULE_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z*)0x43500400u))
#define MODULE_PPCA_HWFILT3P3Z_SS_1             /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_HWFILT3P3Z_SS_1*)0x43510000u))
#define MODULE_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z*)0x43510100u))
#define MODULE_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z*)0x43510200u))
#define MODULE_PPCA_ADCM                        /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ADCM*)0x43520000u))
#define MODULE_PPCA_ADCM_ADCM                   /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ADCM_ADCM*)0x43520000u))
#define MODULE_PPCA_CLB                         /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CLB*)0x43530000u))
#define MODULE_PPCA_CLB_DICO                    /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CLB_DICO*)0x43532000u))
#define MODULE_PPCA_CLB_MACO                    /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_CLB_MACO*)0x43534000u))
#define MODULE_PPCA_MXCORDIC0                   /*lint --e(923, 9078)*/ ((*(Ifx_MXCORDIC*)0x43540000u))
#define MODULE_PPCA_MXCORDIC1                   /*lint --e(923, 9078)*/ ((*(Ifx_MXCORDIC*)0x43550000u))
#define MODULE_PPCA_ATOPSS                      /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS*)0x43580000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0             /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP*)0x43580000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP1             /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP*)0x43582000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP2             /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP*)0x43584000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP3             /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP*)0x43586000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_SLICE0      /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE*)0x43580000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP1_SLICE0      /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE*)0x43582000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP2_SLICE0      /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE*)0x43584000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP3_SLICE0      /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE*)0x43586000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC  /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC*)0x43580000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC  /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC*)0x43582000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC  /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC*)0x43584000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC  /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC*)0x43586000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE  /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE*)0x43580200u))
#define MODULE_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE  /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE*)0x43582200u))
#define MODULE_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE  /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE*)0x43584200u))
#define MODULE_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE  /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE*)0x43586200u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_AFLT0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_AFLT*)0x43581000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_AFLT1       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_AFLT*)0x43581100u))
#define MODULE_PPCA_ATOPSS_ADC_GRP1_AFLT0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_AFLT*)0x43583000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP2_AFLT0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_AFLT*)0x43585000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP3_AFLT0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_AFLT*)0x43587000u))
#define MODULE_PPCA_ATOPSS_ADC_GRP3_AFLT1       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_AFLT*)0x43587100u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_DCMP0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43581400u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_DCMP1       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43581500u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_DCMP2       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43581600u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_DCMP3       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43581700u))
#define MODULE_PPCA_ATOPSS_ADC_GRP1_DCMP0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43583400u))
#define MODULE_PPCA_ATOPSS_ADC_GRP1_DCMP1       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43583500u))
#define MODULE_PPCA_ATOPSS_ADC_GRP2_DCMP0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43585400u))
#define MODULE_PPCA_ATOPSS_ADC_GRP2_DCMP1       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43585500u))
#define MODULE_PPCA_ATOPSS_ADC_GRP3_DCMP0       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43587400u))
#define MODULE_PPCA_ATOPSS_ADC_GRP3_DCMP1       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43587500u))
#define MODULE_PPCA_ATOPSS_ADC_GRP3_DCMP2       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43587600u))
#define MODULE_PPCA_ATOPSS_ADC_GRP3_DCMP3       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_DCMP*)0x43587700u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_IDAC        /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_IDAC*)0x43581800u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_AREF        /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_AREF*)0x43581900u))
#define MODULE_PPCA_ATOPSS_ADC_GRP0_GPI         /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_ADC_GRP_GPI*)0x43581A00u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP*)0x43588000u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP1            /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP*)0x4358A000u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DCSG       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG*)0x43588000u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP1_DCSG       /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG*)0x4358A000u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE0 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE*)0x43588000u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE1 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE*)0x43588100u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE2 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE*)0x43588200u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE3 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE*)0x43588300u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE4 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE*)0x43588400u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE5 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE*)0x43588500u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE0 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE*)0x4358A000u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE1 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE*)0x4358A100u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE2 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE*)0x4358A200u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN0 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN*)0x43588600u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN1 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN*)0x43588700u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLGEN0 /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN*)0x4358A600u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DCSG_BLANK /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK*)0x43588C00u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP1_DCSG_BLANK /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK*)0x4358AC00u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R    /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R*)0x43589000u))
#define MODULE_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R    /*lint --e(923, 9078)*/ ((*(Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R*)0x4358B000u))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_Registers_Cfg_PPCA
 * \{  */
/** \brief 0,  */
#define REG_PPCA_CNFG_CTRL                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CTRL*)0x43000000u)
/** \brief 0,  */
#define REG_PPCA_CNFG_CNFG_CNFG0                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_CNFG0*)0x43000100u)
/** \brief 4,  */
#define REG_PPCA_CNFG_CNFG_CNFG1                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_CNFG1*)0x43000104u)
/** \brief 8,  */
#define REG_PPCA_CNFG_CNFG_CNFG2                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_CNFG2*)0x43000108u)
/** \brief C,  */
#define REG_PPCA_CNFG_CNFG_CNFG_TRACE_ATOP      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_CNFG_TRACE_ATOP*)0x4300010Cu)
/** \brief 10,  */
#define REG_PPCA_CNFG_CNFG_CPU_CTRL             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_CPU_CTRL*)0x43000110u)
/** \brief 14,  */
#define REG_PPCA_CNFG_CNFG_RST_CTRL             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_RST_CTRL*)0x43000114u)
/** \brief 20,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL0          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000120u)
/** \brief 24,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL1          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000124u)
/** \brief 28,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL2          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000128u)
/** \brief 2C,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL3          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x4300012Cu)
/** \brief 30,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL4          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000130u)
/** \brief 34,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL5          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000134u)
/** \brief 38,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL6          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000138u)
/** \brief 3C,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL7          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x4300013Cu)
/** \brief 40,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL8          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000140u)
/** \brief 44,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL9          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000144u)
/** \brief 48,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL10         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000148u)
/** \brief 4C,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL11         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x4300014Cu)
/** \brief 50,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL12         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000150u)
/** \brief 54,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL13         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000154u)
/** \brief 58,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL14         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x43000158u)
/** \brief 5C,  */
#define REG_PPCA_CNFG_CNFG_PPCAIN_SEL15         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL*)0x4300015Cu)
/** \brief 80,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL0       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x43000180u)
/** \brief 84,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL1       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x43000184u)
/** \brief 88,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL2       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x43000188u)
/** \brief 8C,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL3       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x4300018Cu)
/** \brief 90,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL4       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x43000190u)
/** \brief 94,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL5       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x43000194u)
/** \brief 98,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL6       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x43000198u)
/** \brief 9C,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL7       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x4300019Cu)
/** \brief A0,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL8       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x430001A0u)
/** \brief A4,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL9       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x430001A4u)
/** \brief A8,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL10      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x430001A8u)
/** \brief AC,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL11      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x430001ACu)
/** \brief B0,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL12      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x430001B0u)
/** \brief B4,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL13      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x430001B4u)
/** \brief B8,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL14      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x430001B8u)
/** \brief BC,  */
#define REG_PPCA_CNFG_CNFG_TR_PPCAIN_SEL15      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL*)0x430001BCu)
/** \brief C0,  */
#define REG_PPCA_CNFG_CNFG_PPCAOUT_SEL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAOUT_SEL*)0x430001C0u)
/** \brief E0,  */
#define REG_PPCA_CNFG_CNFG_DDFTOUT_SEL0         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_DDFTOUT_SEL*)0x430001E0u)
/** \brief E4,  */
#define REG_PPCA_CNFG_CNFG_DDFTOUT_SEL1         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_DDFTOUT_SEL*)0x430001E4u)
/** \brief F0,  */
#define REG_PPCA_CNFG_CNFG_CNFGEXTDBGCONN       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_CNFGEXTDBGCONN*)0x430001F0u)
/** \brief F4,  */
#define REG_PPCA_CNFG_CNFG_PPCAIO_IN_MON        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_PPCAIO_IN_MON*)0x430001F4u)
/** \brief F8,  */
#define REG_PPCA_CNFG_CNFG_SCRATCH0             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_SCRATCH0*)0x430001F8u)
/** \brief FC,  */
#define REG_PPCA_CNFG_CNFG_SCRATCH1             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_CNFG_SCRATCH1*)0x430001FCu)
/** \brief 0, Interrupt Request Register */
#define REG_PPCA_CNFG_S2IRQ0_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR*)0x43000300u)
/** \brief 4, Interrupt Set Request Register */
#define REG_PPCA_CNFG_S2IRQ0_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_SET*)0x43000304u)
/** \brief 8, Interrupt Mask Register */
#define REG_PPCA_CNFG_S2IRQ0_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASK*)0x43000308u)
/** \brief C, Interrupt Masked Register */
#define REG_PPCA_CNFG_S2IRQ0_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED*)0x4300030Cu)
/** \brief 0, Interrupt Request Register */
#define REG_PPCA_CNFG_S2IRQ1_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR*)0x43000310u)
/** \brief 4, Interrupt Set Request Register */
#define REG_PPCA_CNFG_S2IRQ1_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_SET*)0x43000314u)
/** \brief 8, Interrupt Mask Register */
#define REG_PPCA_CNFG_S2IRQ1_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASK*)0x43000318u)
/** \brief C, Interrupt Masked Register */
#define REG_PPCA_CNFG_S2IRQ1_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED*)0x4300031Cu)
/** \brief 0, Interrupt Request Register */
#define REG_PPCA_CNFG_S2IRQ2_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR*)0x43000320u)
/** \brief 4, Interrupt Set Request Register */
#define REG_PPCA_CNFG_S2IRQ2_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_SET*)0x43000324u)
/** \brief 8, Interrupt Mask Register */
#define REG_PPCA_CNFG_S2IRQ2_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASK*)0x43000328u)
/** \brief C, Interrupt Masked Register */
#define REG_PPCA_CNFG_S2IRQ2_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED*)0x4300032Cu)
/** \brief 0, Interrupt Request Register */
#define REG_PPCA_CNFG_S2IRQ3_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR*)0x43000330u)
/** \brief 4, Interrupt Set Request Register */
#define REG_PPCA_CNFG_S2IRQ3_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_SET*)0x43000334u)
/** \brief 8, Interrupt Mask Register */
#define REG_PPCA_CNFG_S2IRQ3_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASK*)0x43000338u)
/** \brief C, Interrupt Masked Register */
#define REG_PPCA_CNFG_S2IRQ3_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED*)0x4300033Cu)
/** \brief 0, Interrupt Request Register */
#define REG_PPCA_CNFG_S2IRQ4_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR*)0x43000340u)
/** \brief 4, Interrupt Set Request Register */
#define REG_PPCA_CNFG_S2IRQ4_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_SET*)0x43000344u)
/** \brief 8, Interrupt Mask Register */
#define REG_PPCA_CNFG_S2IRQ4_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASK*)0x43000348u)
/** \brief C, Interrupt Masked Register */
#define REG_PPCA_CNFG_S2IRQ4_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED*)0x4300034Cu)
/** \brief 0, Interrupt Request Register */
#define REG_PPCA_CNFG_S2IRQ5_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR*)0x43000350u)
/** \brief 4, Interrupt Set Request Register */
#define REG_PPCA_CNFG_S2IRQ5_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_SET*)0x43000354u)
/** \brief 8, Interrupt Mask Register */
#define REG_PPCA_CNFG_S2IRQ5_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASK*)0x43000358u)
/** \brief C, Interrupt Masked Register */
#define REG_PPCA_CNFG_S2IRQ5_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED*)0x4300035Cu)
/** \brief 0, Interrupt Request Register */
#define REG_PPCA_CNFG_S2IRQ6_INTR               /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR*)0x43000360u)
/** \brief 4, Interrupt Set Request Register */
#define REG_PPCA_CNFG_S2IRQ6_INTR_SET           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_SET*)0x43000364u)
/** \brief 8, Interrupt Mask Register */
#define REG_PPCA_CNFG_S2IRQ6_INTR_MASK          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASK*)0x43000368u)
/** \brief C, Interrupt Masked Register */
#define REG_PPCA_CNFG_S2IRQ6_INTR_MASKED        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED*)0x4300036Cu)
/** \brief 0,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000400u)
/** \brief 4,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA1            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000404u)
/** \brief 8,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA2            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000408u)
/** \brief C,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA3            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x4300040Cu)
/** \brief 10,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA4            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000410u)
/** \brief 14,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA5            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000414u)
/** \brief 18,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA6            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000418u)
/** \brief 1C,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA7            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x4300041Cu)
/** \brief 20,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA8            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000420u)
/** \brief 24,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA9            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000424u)
/** \brief 28,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA10           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000428u)
/** \brief 2C,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA11           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x4300042Cu)
/** \brief 30,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA12           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000430u)
/** \brief 34,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA13           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000434u)
/** \brief 38,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA14           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000438u)
/** \brief 3C,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA15           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x4300043Cu)
/** \brief 40,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA16           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000440u)
/** \brief 44,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA17           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000444u)
/** \brief 48,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA18           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000448u)
/** \brief 4C,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA19           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x4300044Cu)
/** \brief 50,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA20           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000450u)
/** \brief 54,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA21           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000454u)
/** \brief 58,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA22           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000458u)
/** \brief 5C,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA23           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x4300045Cu)
/** \brief 60,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA24           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000460u)
/** \brief 64,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA25           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000464u)
/** \brief 68,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA26           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000468u)
/** \brief 6C,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA27           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x4300046Cu)
/** \brief 70,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA28           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000470u)
/** \brief 74,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA29           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000474u)
/** \brief 78,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA30           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000478u)
/** \brief 7C,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA31           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x4300047Cu)
/** \brief 80,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA32           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000480u)
/** \brief 84,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA33           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000484u)
/** \brief 88,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA34           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000488u)
/** \brief 8C,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA35           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x4300048Cu)
/** \brief 90,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA36           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000490u)
/** \brief 94,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA37           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000494u)
/** \brief 98,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA38           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x43000498u)
/** \brief 9C,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA39           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x4300049Cu)
/** \brief A0,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA40           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x430004A0u)
/** \brief A4,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA41           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x430004A4u)
/** \brief A8,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA42           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x430004A8u)
/** \brief AC,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA43           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x430004ACu)
/** \brief B0,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA44           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x430004B0u)
/** \brief B4,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA45           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x430004B4u)
/** \brief B8,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA46           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x430004B8u)
/** \brief BC,  */
#define REG_PPCA_CNFG_ADCM_ADC_DATA47           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_ADCM_ADC_DATA*)0x430004BCu)
/** \brief 0,  */
#define REG_PPCA_CNFG_DISPERI_DISPERI           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CNFG_DISPERI_DISPERI*)0x43000800u)
/** \brief 0,  */
#define REG_PPCA_EPU_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_CTRL*)0x43004000u)
/** \brief 0, Interrupt Source Selection Register */
#define REG_PPCA_EPU_EPU_IRQ0_INTR_SRCSEL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL*)0x43004100u)
/** \brief 10, Interrupt Request Register */
#define REG_PPCA_EPU_EPU_IRQ0_INTR              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR*)0x43004110u)
/** \brief 14, Interrupt Set Request Register */
#define REG_PPCA_EPU_EPU_IRQ0_INTR_SET          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SET*)0x43004114u)
/** \brief 18, Interrupt Mask Register */
#define REG_PPCA_EPU_EPU_IRQ0_INTR_MASK         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK*)0x43004118u)
/** \brief 1C, Interrupt Masked Register */
#define REG_PPCA_EPU_EPU_IRQ0_INTR_MASKED       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED*)0x4300411Cu)
/** \brief 0, Interrupt Source Selection Register */
#define REG_PPCA_EPU_EPU_IRQ1_INTR_SRCSEL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL*)0x43004120u)
/** \brief 10, Interrupt Request Register */
#define REG_PPCA_EPU_EPU_IRQ1_INTR              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR*)0x43004130u)
/** \brief 14, Interrupt Set Request Register */
#define REG_PPCA_EPU_EPU_IRQ1_INTR_SET          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SET*)0x43004134u)
/** \brief 18, Interrupt Mask Register */
#define REG_PPCA_EPU_EPU_IRQ1_INTR_MASK         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK*)0x43004138u)
/** \brief 1C, Interrupt Masked Register */
#define REG_PPCA_EPU_EPU_IRQ1_INTR_MASKED       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED*)0x4300413Cu)
/** \brief 0, Interrupt Source Selection Register */
#define REG_PPCA_EPU_EPU_IRQ2_INTR_SRCSEL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL*)0x43004140u)
/** \brief 10, Interrupt Request Register */
#define REG_PPCA_EPU_EPU_IRQ2_INTR              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR*)0x43004150u)
/** \brief 14, Interrupt Set Request Register */
#define REG_PPCA_EPU_EPU_IRQ2_INTR_SET          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SET*)0x43004154u)
/** \brief 18, Interrupt Mask Register */
#define REG_PPCA_EPU_EPU_IRQ2_INTR_MASK         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK*)0x43004158u)
/** \brief 1C, Interrupt Masked Register */
#define REG_PPCA_EPU_EPU_IRQ2_INTR_MASKED       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED*)0x4300415Cu)
/** \brief 0, Interrupt Source Selection Register */
#define REG_PPCA_EPU_EPU_IRQ3_INTR_SRCSEL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL*)0x43004160u)
/** \brief 10, Interrupt Request Register */
#define REG_PPCA_EPU_EPU_IRQ3_INTR              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR*)0x43004170u)
/** \brief 14, Interrupt Set Request Register */
#define REG_PPCA_EPU_EPU_IRQ3_INTR_SET          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SET*)0x43004174u)
/** \brief 18, Interrupt Mask Register */
#define REG_PPCA_EPU_EPU_IRQ3_INTR_MASK         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK*)0x43004178u)
/** \brief 1C, Interrupt Masked Register */
#define REG_PPCA_EPU_EPU_IRQ3_INTR_MASKED       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED*)0x4300417Cu)
/** \brief 0, Interrupt Source Selection Register */
#define REG_PPCA_EPU_EPU_IRQ4_INTR_SRCSEL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL*)0x43004180u)
/** \brief 10, Interrupt Request Register */
#define REG_PPCA_EPU_EPU_IRQ4_INTR              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR*)0x43004190u)
/** \brief 14, Interrupt Set Request Register */
#define REG_PPCA_EPU_EPU_IRQ4_INTR_SET          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SET*)0x43004194u)
/** \brief 18, Interrupt Mask Register */
#define REG_PPCA_EPU_EPU_IRQ4_INTR_MASK         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK*)0x43004198u)
/** \brief 1C, Interrupt Masked Register */
#define REG_PPCA_EPU_EPU_IRQ4_INTR_MASKED       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED*)0x4300419Cu)
/** \brief 0, Interrupt Source Selection Register */
#define REG_PPCA_EPU_EPU_IRQ5_INTR_SRCSEL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL*)0x430041A0u)
/** \brief 10, Interrupt Request Register */
#define REG_PPCA_EPU_EPU_IRQ5_INTR              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR*)0x430041B0u)
/** \brief 14, Interrupt Set Request Register */
#define REG_PPCA_EPU_EPU_IRQ5_INTR_SET          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SET*)0x430041B4u)
/** \brief 18, Interrupt Mask Register */
#define REG_PPCA_EPU_EPU_IRQ5_INTR_MASK         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK*)0x430041B8u)
/** \brief 1C, Interrupt Masked Register */
#define REG_PPCA_EPU_EPU_IRQ5_INTR_MASKED       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED*)0x430041BCu)
/** \brief 0, Interrupt Source Selection Register */
#define REG_PPCA_EPU_EPU_IRQ6_INTR_SRCSEL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL*)0x430041C0u)
/** \brief 10, Interrupt Request Register */
#define REG_PPCA_EPU_EPU_IRQ6_INTR              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR*)0x430041D0u)
/** \brief 14, Interrupt Set Request Register */
#define REG_PPCA_EPU_EPU_IRQ6_INTR_SET          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SET*)0x430041D4u)
/** \brief 18, Interrupt Mask Register */
#define REG_PPCA_EPU_EPU_IRQ6_INTR_MASK         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK*)0x430041D8u)
/** \brief 1C, Interrupt Masked Register */
#define REG_PPCA_EPU_EPU_IRQ6_INTR_MASKED       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED*)0x430041DCu)
/** \brief 0, Interrupt Source Selection Register */
#define REG_PPCA_EPU_EPU_IRQ7_INTR_SRCSEL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL*)0x430041E0u)
/** \brief 10, Interrupt Request Register */
#define REG_PPCA_EPU_EPU_IRQ7_INTR              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR*)0x430041F0u)
/** \brief 14, Interrupt Set Request Register */
#define REG_PPCA_EPU_EPU_IRQ7_INTR_SET          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_SET*)0x430041F4u)
/** \brief 18, Interrupt Mask Register */
#define REG_PPCA_EPU_EPU_IRQ7_INTR_MASK         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK*)0x430041F8u)
/** \brief 1C, Interrupt Masked Register */
#define REG_PPCA_EPU_EPU_IRQ7_INTR_MASKED       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED*)0x430041FCu)
/** \brief 0,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004400u)
/** \brief 4,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG1            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004404u)
/** \brief 8,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG2            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004408u)
/** \brief C,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG3            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x4300440Cu)
/** \brief 10,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG4            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004410u)
/** \brief 14,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG5            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004414u)
/** \brief 18,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG6            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004418u)
/** \brief 1C,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG7            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x4300441Cu)
/** \brief 20,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG8            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004420u)
/** \brief 24,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG9            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004424u)
/** \brief 28,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG10           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004428u)
/** \brief 2C,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG11           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x4300442Cu)
/** \brief 30,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG12           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004430u)
/** \brief 34,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG13           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004434u)
/** \brief 38,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG14           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004438u)
/** \brief 3C,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG15           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x4300443Cu)
/** \brief 40,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG16           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004440u)
/** \brief 44,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG17           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004444u)
/** \brief 48,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG18           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004448u)
/** \brief 4C,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG19           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x4300444Cu)
/** \brief 50,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG20           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004450u)
/** \brief 54,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG21           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004454u)
/** \brief 58,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG22           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004458u)
/** \brief 5C,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG23           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x4300445Cu)
/** \brief 60,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG24           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004460u)
/** \brief 64,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG25           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004464u)
/** \brief 68,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG26           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004468u)
/** \brief 6C,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG27           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x4300446Cu)
/** \brief 70,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG28           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004470u)
/** \brief 74,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG29           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004474u)
/** \brief 78,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG30           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x43004478u)
/** \brief 7C,  */
#define REG_PPCA_EPU_EPU_PU_T1_CNFG31           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T1_CNFG*)0x4300447Cu)
/** \brief 100,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004500u)
/** \brief 104,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG1            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004504u)
/** \brief 108,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG2            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004508u)
/** \brief 10C,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG3            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x4300450Cu)
/** \brief 110,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG4            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004510u)
/** \brief 114,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG5            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004514u)
/** \brief 118,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG6            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004518u)
/** \brief 11C,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG7            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x4300451Cu)
/** \brief 120,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG8            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004520u)
/** \brief 124,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG9            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004524u)
/** \brief 128,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG10           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004528u)
/** \brief 12C,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG11           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x4300452Cu)
/** \brief 130,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG12           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004530u)
/** \brief 134,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG13           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004534u)
/** \brief 138,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG14           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x43004538u)
/** \brief 13C,  */
#define REG_PPCA_EPU_EPU_PU_T2_CNFG15           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_PU_T2_CNFG*)0x4300453Cu)
/** \brief 200,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004600u)
/** \brief 204,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG1            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004604u)
/** \brief 208,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG2            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004608u)
/** \brief 20C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG3            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300460Cu)
/** \brief 210,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG4            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004610u)
/** \brief 214,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG5            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004614u)
/** \brief 218,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG6            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004618u)
/** \brief 21C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG7            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300461Cu)
/** \brief 220,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG8            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004620u)
/** \brief 224,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG9            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004624u)
/** \brief 228,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG10           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004628u)
/** \brief 22C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG11           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300462Cu)
/** \brief 230,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG12           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004630u)
/** \brief 234,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG13           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004634u)
/** \brief 238,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG14           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004638u)
/** \brief 23C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG15           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300463Cu)
/** \brief 240,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG16           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004640u)
/** \brief 244,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG17           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004644u)
/** \brief 248,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG18           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004648u)
/** \brief 24C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG19           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300464Cu)
/** \brief 250,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG20           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004650u)
/** \brief 254,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG21           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004654u)
/** \brief 258,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG22           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004658u)
/** \brief 25C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG23           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300465Cu)
/** \brief 260,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG24           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004660u)
/** \brief 264,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG25           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004664u)
/** \brief 268,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG26           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004668u)
/** \brief 26C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG27           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300466Cu)
/** \brief 270,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG28           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004670u)
/** \brief 274,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG29           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004674u)
/** \brief 278,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG30           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004678u)
/** \brief 27C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG31           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300467Cu)
/** \brief 280,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG32           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004680u)
/** \brief 284,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG33           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004684u)
/** \brief 288,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG34           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004688u)
/** \brief 28C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG35           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300468Cu)
/** \brief 290,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG36           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004690u)
/** \brief 294,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG37           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004694u)
/** \brief 298,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG38           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004698u)
/** \brief 29C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG39           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300469Cu)
/** \brief 2A0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG40           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046A0u)
/** \brief 2A4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG41           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046A4u)
/** \brief 2A8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG42           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046A8u)
/** \brief 2AC,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG43           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046ACu)
/** \brief 2B0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG44           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046B0u)
/** \brief 2B4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG45           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046B4u)
/** \brief 2B8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG46           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046B8u)
/** \brief 2BC,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG47           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046BCu)
/** \brief 2C0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG48           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046C0u)
/** \brief 2C4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG49           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046C4u)
/** \brief 2C8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG50           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046C8u)
/** \brief 2CC,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG51           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046CCu)
/** \brief 2D0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG52           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046D0u)
/** \brief 2D4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG53           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046D4u)
/** \brief 2D8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG54           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046D8u)
/** \brief 2DC,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG55           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046DCu)
/** \brief 2E0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG56           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046E0u)
/** \brief 2E4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG57           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046E4u)
/** \brief 2E8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG58           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046E8u)
/** \brief 2EC,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG59           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046ECu)
/** \brief 2F0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG60           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046F0u)
/** \brief 2F4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG61           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046F4u)
/** \brief 2F8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG62           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046F8u)
/** \brief 2FC,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG63           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430046FCu)
/** \brief 300,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG64           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004700u)
/** \brief 304,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG65           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004704u)
/** \brief 308,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG66           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004708u)
/** \brief 30C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG67           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300470Cu)
/** \brief 310,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG68           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004710u)
/** \brief 314,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG69           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004714u)
/** \brief 318,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG70           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004718u)
/** \brief 31C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG71           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300471Cu)
/** \brief 320,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG72           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004720u)
/** \brief 324,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG73           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004724u)
/** \brief 328,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG74           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004728u)
/** \brief 32C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG75           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300472Cu)
/** \brief 330,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG76           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004730u)
/** \brief 334,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG77           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004734u)
/** \brief 338,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG78           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004738u)
/** \brief 33C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG79           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300473Cu)
/** \brief 340,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG80           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004740u)
/** \brief 344,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG81           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004744u)
/** \brief 348,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG82           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004748u)
/** \brief 34C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG83           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300474Cu)
/** \brief 350,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG84           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004750u)
/** \brief 354,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG85           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004754u)
/** \brief 358,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG86           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004758u)
/** \brief 35C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG87           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300475Cu)
/** \brief 360,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG88           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004760u)
/** \brief 364,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG89           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004764u)
/** \brief 368,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG90           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004768u)
/** \brief 36C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG91           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300476Cu)
/** \brief 370,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG92           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004770u)
/** \brief 374,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG93           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004774u)
/** \brief 378,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG94           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004778u)
/** \brief 37C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG95           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300477Cu)
/** \brief 380,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG96           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004780u)
/** \brief 384,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG97           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004784u)
/** \brief 388,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG98           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004788u)
/** \brief 38C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG99           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300478Cu)
/** \brief 390,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG100          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004790u)
/** \brief 394,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG101          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004794u)
/** \brief 398,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG102          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x43004798u)
/** \brief 39C,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG103          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x4300479Cu)
/** \brief 3A0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG104          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047A0u)
/** \brief 3A4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG105          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047A4u)
/** \brief 3A8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG106          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047A8u)
/** \brief 3AC,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG107          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047ACu)
/** \brief 3B0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG108          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047B0u)
/** \brief 3B4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG109          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047B4u)
/** \brief 3B8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG110          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047B8u)
/** \brief 3BC,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG111          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047BCu)
/** \brief 3C0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG112          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047C0u)
/** \brief 3C4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG113          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047C4u)
/** \brief 3C8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG114          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047C8u)
/** \brief 3CC,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG115          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047CCu)
/** \brief 3D0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG116          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047D0u)
/** \brief 3D4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG117          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047D4u)
/** \brief 3D8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG118          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047D8u)
/** \brief 3DC,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG119          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047DCu)
/** \brief 3E0,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG120          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047E0u)
/** \brief 3E4,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG121          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047E4u)
/** \brief 3E8,  */
#define REG_PPCA_EPU_EPU_COMBO_CNFG122          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_CNFG*)0x430047E8u)
/** \brief 400,  */
#define REG_PPCA_EPU_EPU_COMBO_FB_CNFG0         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG*)0x43004800u)
/** \brief 404,  */
#define REG_PPCA_EPU_EPU_COMBO_FB_CNFG1         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG*)0x43004804u)
/** \brief 408,  */
#define REG_PPCA_EPU_EPU_COMBO_FB_CNFG2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG*)0x43004808u)
/** \brief 40C,  */
#define REG_PPCA_EPU_EPU_COMBO_FB_CNFG3         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG*)0x4300480Cu)
/** \brief 410,  */
#define REG_PPCA_EPU_EPU_COMBO_FB_CNFG4         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG*)0x43004810u)
/** \brief 414,  */
#define REG_PPCA_EPU_EPU_COMBO_FB_CNFG5         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG*)0x43004814u)
/** \brief 418,  */
#define REG_PPCA_EPU_EPU_COMBO_FB_CNFG6         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG*)0x43004818u)
/** \brief 41C,  */
#define REG_PPCA_EPU_EPU_COMBO_FB_CNFG7         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG*)0x4300481Cu)
/** \brief 0, IPC acquire */
#define REG_PPCA_IPC_STRUCT0_ACQUIRE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_ACQUIRE*)0x43060000u)
/** \brief 4, IPC release */
#define REG_PPCA_IPC_STRUCT0_RELEASE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_RELEASE*)0x43060004u)
/** \brief 8, IPC notification */
#define REG_PPCA_IPC_STRUCT0_NOTIFY             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_NOTIFY*)0x43060008u)
/** \brief C, IPC data 0 */
#define REG_PPCA_IPC_STRUCT0_DATA0              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_DATA0*)0x4306000Cu)
/** \brief 10, IPC data 1 */
#define REG_PPCA_IPC_STRUCT0_DATA1              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_DATA1*)0x43060010u)
/** \brief 1C, IPC lock status */
#define REG_PPCA_IPC_STRUCT0_LOCK_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_LOCK_STATUS*)0x4306001Cu)
/** \brief 0, IPC acquire */
#define REG_PPCA_IPC_STRUCT1_ACQUIRE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_ACQUIRE*)0x43060020u)
/** \brief 4, IPC release */
#define REG_PPCA_IPC_STRUCT1_RELEASE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_RELEASE*)0x43060024u)
/** \brief 8, IPC notification */
#define REG_PPCA_IPC_STRUCT1_NOTIFY             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_NOTIFY*)0x43060028u)
/** \brief C, IPC data 0 */
#define REG_PPCA_IPC_STRUCT1_DATA0              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_DATA0*)0x4306002Cu)
/** \brief 10, IPC data 1 */
#define REG_PPCA_IPC_STRUCT1_DATA1              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_DATA1*)0x43060030u)
/** \brief 1C, IPC lock status */
#define REG_PPCA_IPC_STRUCT1_LOCK_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_LOCK_STATUS*)0x4306003Cu)
/** \brief 0, IPC acquire */
#define REG_PPCA_IPC_STRUCT2_ACQUIRE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_ACQUIRE*)0x43060040u)
/** \brief 4, IPC release */
#define REG_PPCA_IPC_STRUCT2_RELEASE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_RELEASE*)0x43060044u)
/** \brief 8, IPC notification */
#define REG_PPCA_IPC_STRUCT2_NOTIFY             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_NOTIFY*)0x43060048u)
/** \brief C, IPC data 0 */
#define REG_PPCA_IPC_STRUCT2_DATA0              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_DATA0*)0x4306004Cu)
/** \brief 10, IPC data 1 */
#define REG_PPCA_IPC_STRUCT2_DATA1              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_DATA1*)0x43060050u)
/** \brief 1C, IPC lock status */
#define REG_PPCA_IPC_STRUCT2_LOCK_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_LOCK_STATUS*)0x4306005Cu)
/** \brief 0, IPC acquire */
#define REG_PPCA_IPC_STRUCT3_ACQUIRE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_ACQUIRE*)0x43060060u)
/** \brief 4, IPC release */
#define REG_PPCA_IPC_STRUCT3_RELEASE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_RELEASE*)0x43060064u)
/** \brief 8, IPC notification */
#define REG_PPCA_IPC_STRUCT3_NOTIFY             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_NOTIFY*)0x43060068u)
/** \brief C, IPC data 0 */
#define REG_PPCA_IPC_STRUCT3_DATA0              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_DATA0*)0x4306006Cu)
/** \brief 10, IPC data 1 */
#define REG_PPCA_IPC_STRUCT3_DATA1              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_DATA1*)0x43060070u)
/** \brief 1C, IPC lock status */
#define REG_PPCA_IPC_STRUCT3_LOCK_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_STRUCT_LOCK_STATUS*)0x4306007Cu)
/** \brief 0, Interrupt */
#define REG_PPCA_IPC_INTR_STRUCT0_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR*)0x43061000u)
/** \brief 4, Interrupt set */
#define REG_PPCA_IPC_INTR_STRUCT0_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_SET*)0x43061004u)
/** \brief 8, Interrupt mask */
#define REG_PPCA_IPC_INTR_STRUCT0_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASK*)0x43061008u)
/** \brief C, Interrupt masked */
#define REG_PPCA_IPC_INTR_STRUCT0_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASKED*)0x4306100Cu)
/** \brief 0, Interrupt */
#define REG_PPCA_IPC_INTR_STRUCT1_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR*)0x43061020u)
/** \brief 4, Interrupt set */
#define REG_PPCA_IPC_INTR_STRUCT1_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_SET*)0x43061024u)
/** \brief 8, Interrupt mask */
#define REG_PPCA_IPC_INTR_STRUCT1_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASK*)0x43061028u)
/** \brief C, Interrupt masked */
#define REG_PPCA_IPC_INTR_STRUCT1_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASKED*)0x4306102Cu)
/** \brief 0, Interrupt */
#define REG_PPCA_IPC_INTR_STRUCT2_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR*)0x43061040u)
/** \brief 4, Interrupt set */
#define REG_PPCA_IPC_INTR_STRUCT2_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_SET*)0x43061044u)
/** \brief 8, Interrupt mask */
#define REG_PPCA_IPC_INTR_STRUCT2_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASK*)0x43061048u)
/** \brief C, Interrupt masked */
#define REG_PPCA_IPC_INTR_STRUCT2_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASKED*)0x4306104Cu)
/** \brief 0, Interrupt */
#define REG_PPCA_IPC_INTR_STRUCT3_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR*)0x43061060u)
/** \brief 4, Interrupt set */
#define REG_PPCA_IPC_INTR_STRUCT3_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_SET*)0x43061064u)
/** \brief 8, Interrupt mask */
#define REG_PPCA_IPC_INTR_STRUCT3_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASK*)0x43061068u)
/** \brief C, Interrupt masked */
#define REG_PPCA_IPC_INTR_STRUCT3_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASKED*)0x4306106Cu)
/** \brief 0, Control */
#define REG_PPCA_CPUSS_CNFG_MXCM330_CM33_CTL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CTL*)0x43080000u)
/** \brief 4, Command */
#define REG_PPCA_CPUSS_CNFG_MXCM330_CM33_CMD    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CMD*)0x43080004u)
/** \brief 8, Status */
#define REG_PPCA_CPUSS_CNFG_MXCM330_CM33_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_STATUS*)0x43080008u)
/** \brief 80, CM33 NMI control */
#define REG_PPCA_CPUSS_CNFG_MXCM330_CM33_NMI_CTL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL*)0x43080080u)
/** \brief 84, CM33 NMI control */
#define REG_PPCA_CPUSS_CNFG_MXCM330_CM33_NMI_CTL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL*)0x43080084u)
/** \brief 88, CM33 NMI control */
#define REG_PPCA_CPUSS_CNFG_MXCM330_CM33_NMI_CTL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL*)0x43080088u)
/** \brief 8C, CM33 NMI control */
#define REG_PPCA_CPUSS_CNFG_MXCM330_CM33_NMI_CTL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL*)0x4308008Cu)
/** \brief C0, CM33 event control */
#define REG_PPCA_CPUSS_CNFG_MXCM330_CM33_EVENT_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_EVENT_CTL*)0x430800C0u)
/** \brief 1004, CM33 non-secure vector table base */
#define REG_PPCA_CPUSS_CNFG_MXCM330_CM33_NS_VECTOR_TABLE_BASE /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NS_VECTOR_TABLE_BASE*)0x43081004u)
/** \brief 0, Control */
#define REG_PPCA_CPUSS_CNFG_MXCM331_CM33_CTL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CTL*)0x43090000u)
/** \brief 4, Command */
#define REG_PPCA_CPUSS_CNFG_MXCM331_CM33_CMD    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CMD*)0x43090004u)
/** \brief 8, Status */
#define REG_PPCA_CPUSS_CNFG_MXCM331_CM33_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_STATUS*)0x43090008u)
/** \brief 80, CM33 NMI control */
#define REG_PPCA_CPUSS_CNFG_MXCM331_CM33_NMI_CTL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL*)0x43090080u)
/** \brief 84, CM33 NMI control */
#define REG_PPCA_CPUSS_CNFG_MXCM331_CM33_NMI_CTL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL*)0x43090084u)
/** \brief 88, CM33 NMI control */
#define REG_PPCA_CPUSS_CNFG_MXCM331_CM33_NMI_CTL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL*)0x43090088u)
/** \brief 8C, CM33 NMI control */
#define REG_PPCA_CPUSS_CNFG_MXCM331_CM33_NMI_CTL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL*)0x4309008Cu)
/** \brief C0, CM33 event control */
#define REG_PPCA_CPUSS_CNFG_MXCM331_CM33_EVENT_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_EVENT_CTL*)0x430900C0u)
/** \brief 1004, CM33 non-secure vector table base */
#define REG_PPCA_CPUSS_CNFG_MXCM331_CM33_NS_VECTOR_TABLE_BASE /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NS_VECTOR_TABLE_BASE*)0x43091004u)
/** \brief 0, Control */
#define REG_PPCA_CPUSS_CNFG_RAMC0_CTL           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_CTL*)0x430A0000u)
/** \brief 8, Status */
#define REG_PPCA_CPUSS_CNFG_RAMC0_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_STATUS*)0x430A0008u)
/** \brief 20, ECC control */
#define REG_PPCA_CPUSS_CNFG_RAMC0_ECC_CTL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_CTL*)0x430A0020u)
/** \brief 24, ECC status 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC0_ECC_STATUS0   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS0*)0x430A0024u)
/** \brief 28, ECC status 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC0_ECC_STATUS1   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS1*)0x430A0028u)
/** \brief 104, ECC match */
#define REG_PPCA_CPUSS_CNFG_RAMC0_ECC_MATCH     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_MATCH*)0x430A0104u)
/** \brief 200, SRAM power partition power control */
#define REG_PPCA_CPUSS_CNFG_RAMC0_PWR_MACRO_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL*)0x430A0200u)
/** \brief 240, SRAM power partition power control Lock */
#define REG_PPCA_CPUSS_CNFG_RAMC0_PWR_MACRO_CTL_LOCK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK*)0x430A0240u)
/** \brief 280, SRAM power switch power up & sequence delay */
#define REG_PPCA_CPUSS_CNFG_RAMC0_PWR_DELAY_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_DELAY_CTL*)0x430A0280u)
/** \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
#define REG_PPCA_CPUSS_CNFG_RAMC0_MPC0_CFG      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CFG*)0x430A4000u)
/** \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
#define REG_PPCA_CPUSS_CNFG_RAMC0_MPC0_CTRL     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CTRL*)0x430A4100u)
/** \brief 108, Block size & initialization in progress */
#define REG_PPCA_CPUSS_CNFG_RAMC0_MPC0_BLK_CFG  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_CFG*)0x430A4108u)
/** \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
#define REG_PPCA_CPUSS_CNFG_RAMC0_MPC0_BLK_LUT  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_LUT*)0x430A4110u)
/** \brief 200, Control register with lock bit and auto-increment only */
#define REG_PPCA_CPUSS_CNFG_RAMC0_MPC0_ROT_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_CTRL*)0x430A4200u)
/** \brief 208, Max value of block-based index register for ROT */
#define REG_PPCA_CPUSS_CNFG_RAMC0_MPC0_ROT_BLK_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_MAX*)0x430A4208u)
/** \brief 20C, Same as BLK_CFG */
#define REG_PPCA_CPUSS_CNFG_RAMC0_MPC0_ROT_BLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_CFG*)0x430A420Cu)
/** \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_* */
#define REG_PPCA_CPUSS_CNFG_RAMC0_MPC0_ROT_BLK_IDX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_IDX*)0x430A4210u)
/** \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT */
#define REG_PPCA_CPUSS_CNFG_RAMC0_MPC0_ROT_BLK_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_PC*)0x430A4214u)
/** \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
#define REG_PPCA_CPUSS_CNFG_RAMC0_MPC0_ROT_BLK_LUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_LUT*)0x430A4218u)
/** \brief 0, Control */
#define REG_PPCA_CPUSS_CNFG_RAMC1_CTL           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_CTL*)0x430B0000u)
/** \brief 8, Status */
#define REG_PPCA_CPUSS_CNFG_RAMC1_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_STATUS*)0x430B0008u)
/** \brief 20, ECC control */
#define REG_PPCA_CPUSS_CNFG_RAMC1_ECC_CTL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_CTL*)0x430B0020u)
/** \brief 24, ECC status 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC1_ECC_STATUS0   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS0*)0x430B0024u)
/** \brief 28, ECC status 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC1_ECC_STATUS1   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS1*)0x430B0028u)
/** \brief 104, ECC match */
#define REG_PPCA_CPUSS_CNFG_RAMC1_ECC_MATCH     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_MATCH*)0x430B0104u)
/** \brief 200, SRAM power partition power control */
#define REG_PPCA_CPUSS_CNFG_RAMC1_PWR_MACRO_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL*)0x430B0200u)
/** \brief 240, SRAM power partition power control Lock */
#define REG_PPCA_CPUSS_CNFG_RAMC1_PWR_MACRO_CTL_LOCK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK*)0x430B0240u)
/** \brief 280, SRAM power switch power up & sequence delay */
#define REG_PPCA_CPUSS_CNFG_RAMC1_PWR_DELAY_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_DELAY_CTL*)0x430B0280u)
/** \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
#define REG_PPCA_CPUSS_CNFG_RAMC1_MPC0_CFG      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CFG*)0x430B4000u)
/** \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
#define REG_PPCA_CPUSS_CNFG_RAMC1_MPC0_CTRL     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CTRL*)0x430B4100u)
/** \brief 108, Block size & initialization in progress */
#define REG_PPCA_CPUSS_CNFG_RAMC1_MPC0_BLK_CFG  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_CFG*)0x430B4108u)
/** \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
#define REG_PPCA_CPUSS_CNFG_RAMC1_MPC0_BLK_LUT  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_LUT*)0x430B4110u)
/** \brief 200, Control register with lock bit and auto-increment only */
#define REG_PPCA_CPUSS_CNFG_RAMC1_MPC0_ROT_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_CTRL*)0x430B4200u)
/** \brief 208, Max value of block-based index register for ROT */
#define REG_PPCA_CPUSS_CNFG_RAMC1_MPC0_ROT_BLK_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_MAX*)0x430B4208u)
/** \brief 20C, Same as BLK_CFG */
#define REG_PPCA_CPUSS_CNFG_RAMC1_MPC0_ROT_BLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_CFG*)0x430B420Cu)
/** \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_* */
#define REG_PPCA_CPUSS_CNFG_RAMC1_MPC0_ROT_BLK_IDX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_IDX*)0x430B4210u)
/** \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT */
#define REG_PPCA_CPUSS_CNFG_RAMC1_MPC0_ROT_BLK_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_PC*)0x430B4214u)
/** \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
#define REG_PPCA_CPUSS_CNFG_RAMC1_MPC0_ROT_BLK_LUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_LUT*)0x430B4218u)
/** \brief 0, Control */
#define REG_PPCA_CPUSS_CNFG_RAMC2_CTL           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_CTL*)0x430C0000u)
/** \brief 8, Status */
#define REG_PPCA_CPUSS_CNFG_RAMC2_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_STATUS*)0x430C0008u)
/** \brief 20, ECC control */
#define REG_PPCA_CPUSS_CNFG_RAMC2_ECC_CTL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_CTL*)0x430C0020u)
/** \brief 24, ECC status 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC2_ECC_STATUS0   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS0*)0x430C0024u)
/** \brief 28, ECC status 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC2_ECC_STATUS1   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS1*)0x430C0028u)
/** \brief 104, ECC match */
#define REG_PPCA_CPUSS_CNFG_RAMC2_ECC_MATCH     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_MATCH*)0x430C0104u)
/** \brief 200, SRAM power partition power control */
#define REG_PPCA_CPUSS_CNFG_RAMC2_PWR_MACRO_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL*)0x430C0200u)
/** \brief 240, SRAM power partition power control Lock */
#define REG_PPCA_CPUSS_CNFG_RAMC2_PWR_MACRO_CTL_LOCK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK*)0x430C0240u)
/** \brief 280, SRAM power switch power up & sequence delay */
#define REG_PPCA_CPUSS_CNFG_RAMC2_PWR_DELAY_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_DELAY_CTL*)0x430C0280u)
/** \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
#define REG_PPCA_CPUSS_CNFG_RAMC2_MPC0_CFG      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CFG*)0x430C4000u)
/** \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
#define REG_PPCA_CPUSS_CNFG_RAMC2_MPC0_CTRL     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CTRL*)0x430C4100u)
/** \brief 108, Block size & initialization in progress */
#define REG_PPCA_CPUSS_CNFG_RAMC2_MPC0_BLK_CFG  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_CFG*)0x430C4108u)
/** \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
#define REG_PPCA_CPUSS_CNFG_RAMC2_MPC0_BLK_LUT  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_LUT*)0x430C4110u)
/** \brief 200, Control register with lock bit and auto-increment only */
#define REG_PPCA_CPUSS_CNFG_RAMC2_MPC0_ROT_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_CTRL*)0x430C4200u)
/** \brief 208, Max value of block-based index register for ROT */
#define REG_PPCA_CPUSS_CNFG_RAMC2_MPC0_ROT_BLK_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_MAX*)0x430C4208u)
/** \brief 20C, Same as BLK_CFG */
#define REG_PPCA_CPUSS_CNFG_RAMC2_MPC0_ROT_BLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_CFG*)0x430C420Cu)
/** \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_* */
#define REG_PPCA_CPUSS_CNFG_RAMC2_MPC0_ROT_BLK_IDX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_IDX*)0x430C4210u)
/** \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT */
#define REG_PPCA_CPUSS_CNFG_RAMC2_MPC0_ROT_BLK_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_PC*)0x430C4214u)
/** \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
#define REG_PPCA_CPUSS_CNFG_RAMC2_MPC0_ROT_BLK_LUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_LUT*)0x430C4218u)
/** \brief 0, Control */
#define REG_PPCA_CPUSS_CNFG_RAMC3_CTL           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_CTL*)0x430D0000u)
/** \brief 8, Status */
#define REG_PPCA_CPUSS_CNFG_RAMC3_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_STATUS*)0x430D0008u)
/** \brief 20, ECC control */
#define REG_PPCA_CPUSS_CNFG_RAMC3_ECC_CTL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_CTL*)0x430D0020u)
/** \brief 24, ECC status 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC3_ECC_STATUS0   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS0*)0x430D0024u)
/** \brief 28, ECC status 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC3_ECC_STATUS1   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS1*)0x430D0028u)
/** \brief 104, ECC match */
#define REG_PPCA_CPUSS_CNFG_RAMC3_ECC_MATCH     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_MATCH*)0x430D0104u)
/** \brief 200, SRAM power partition power control */
#define REG_PPCA_CPUSS_CNFG_RAMC3_PWR_MACRO_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL*)0x430D0200u)
/** \brief 240, SRAM power partition power control Lock */
#define REG_PPCA_CPUSS_CNFG_RAMC3_PWR_MACRO_CTL_LOCK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK*)0x430D0240u)
/** \brief 280, SRAM power switch power up & sequence delay */
#define REG_PPCA_CPUSS_CNFG_RAMC3_PWR_DELAY_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_DELAY_CTL*)0x430D0280u)
/** \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
#define REG_PPCA_CPUSS_CNFG_RAMC3_MPC0_CFG      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CFG*)0x430D4000u)
/** \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
#define REG_PPCA_CPUSS_CNFG_RAMC3_MPC0_CTRL     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CTRL*)0x430D4100u)
/** \brief 108, Block size & initialization in progress */
#define REG_PPCA_CPUSS_CNFG_RAMC3_MPC0_BLK_CFG  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_CFG*)0x430D4108u)
/** \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
#define REG_PPCA_CPUSS_CNFG_RAMC3_MPC0_BLK_LUT  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_LUT*)0x430D4110u)
/** \brief 200, Control register with lock bit and auto-increment only */
#define REG_PPCA_CPUSS_CNFG_RAMC3_MPC0_ROT_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_CTRL*)0x430D4200u)
/** \brief 208, Max value of block-based index register for ROT */
#define REG_PPCA_CPUSS_CNFG_RAMC3_MPC0_ROT_BLK_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_MAX*)0x430D4208u)
/** \brief 20C, Same as BLK_CFG */
#define REG_PPCA_CPUSS_CNFG_RAMC3_MPC0_ROT_BLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_CFG*)0x430D420Cu)
/** \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_* */
#define REG_PPCA_CPUSS_CNFG_RAMC3_MPC0_ROT_BLK_IDX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_IDX*)0x430D4210u)
/** \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT */
#define REG_PPCA_CPUSS_CNFG_RAMC3_MPC0_ROT_BLK_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_PC*)0x430D4214u)
/** \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
#define REG_PPCA_CPUSS_CNFG_RAMC3_MPC0_ROT_BLK_LUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_LUT*)0x430D4218u)
/** \brief 0, Control */
#define REG_PPCA_CPUSS_CNFG_RAMC4_CTL           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_CTL*)0x430E0000u)
/** \brief 8, Status */
#define REG_PPCA_CPUSS_CNFG_RAMC4_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_STATUS*)0x430E0008u)
/** \brief 20, ECC control */
#define REG_PPCA_CPUSS_CNFG_RAMC4_ECC_CTL       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_CTL*)0x430E0020u)
/** \brief 24, ECC status 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC4_ECC_STATUS0   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS0*)0x430E0024u)
/** \brief 28, ECC status 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC4_ECC_STATUS1   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS1*)0x430E0028u)
/** \brief 104, ECC match */
#define REG_PPCA_CPUSS_CNFG_RAMC4_ECC_MATCH     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_MATCH*)0x430E0104u)
/** \brief 200, SRAM power partition power control */
#define REG_PPCA_CPUSS_CNFG_RAMC4_PWR_MACRO_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL*)0x430E0200u)
/** \brief 240, SRAM power partition power control Lock */
#define REG_PPCA_CPUSS_CNFG_RAMC4_PWR_MACRO_CTL_LOCK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK*)0x430E0240u)
/** \brief 280, SRAM power switch power up & sequence delay */
#define REG_PPCA_CPUSS_CNFG_RAMC4_PWR_DELAY_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_DELAY_CTL*)0x430E0280u)
/** \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
#define REG_PPCA_CPUSS_CNFG_RAMC4_MPC0_CFG      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CFG*)0x430E4000u)
/** \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
#define REG_PPCA_CPUSS_CNFG_RAMC4_MPC0_CTRL     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CTRL*)0x430E4100u)
/** \brief 108, Block size & initialization in progress */
#define REG_PPCA_CPUSS_CNFG_RAMC4_MPC0_BLK_CFG  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_CFG*)0x430E4108u)
/** \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
#define REG_PPCA_CPUSS_CNFG_RAMC4_MPC0_BLK_LUT  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_LUT*)0x430E4110u)
/** \brief 200, Control register with lock bit and auto-increment only */
#define REG_PPCA_CPUSS_CNFG_RAMC4_MPC0_ROT_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_CTRL*)0x430E4200u)
/** \brief 208, Max value of block-based index register for ROT */
#define REG_PPCA_CPUSS_CNFG_RAMC4_MPC0_ROT_BLK_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_MAX*)0x430E4208u)
/** \brief 20C, Same as BLK_CFG */
#define REG_PPCA_CPUSS_CNFG_RAMC4_MPC0_ROT_BLK_CFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_CFG*)0x430E420Cu)
/** \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_* */
#define REG_PPCA_CPUSS_CNFG_RAMC4_MPC0_ROT_BLK_IDX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_IDX*)0x430E4210u)
/** \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT */
#define REG_PPCA_CPUSS_CNFG_RAMC4_MPC0_ROT_BLK_PC /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_PC*)0x430E4214u)
/** \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
#define REG_PPCA_CPUSS_CNFG_RAMC4_MPC0_ROT_BLK_LUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_LUT*)0x430E4218u)
/** \brief 70000, Access port control */
#define REG_PPCA_CPUSS_CNFG_AP_CTL              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_AP_CTL*)0x430F0000u)
/** \brief 70004, Master Port Access control */
#define REG_PPCA_CPUSS_CNFG_MP_CTL              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_MP_CTL*)0x430F0004u)
/** \brief 0, Power Policy Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_PWPR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWPR*)0x430F8000u)
/** \brief 4, Power Mode Emulation Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_PMER      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PMER*)0x430F8004u)
/** \brief 8, Power Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_PWSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWSR*)0x430F8008u)
/** \brief 10, Device Interface Input Current Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_DISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DISR*)0x430F8010u)
/** \brief 14, Miscellaneous Input Current Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_MISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MISR*)0x430F8014u)
/** \brief 18, Stored Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_STSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_STSR*)0x430F8018u)
/** \brief 1C, Unlock register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_UNLK      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_UNLK*)0x430F801Cu)
/** \brief 20, Power Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_PWCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWCR*)0x430F8020u)
/** \brief 24, Power Mode Transition Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_PTCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PTCR*)0x430F8024u)
/** \brief 30, Interrupt Mask Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_IMR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IMR*)0x430F8030u)
/** \brief 34, Additional Interrupt Mask Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_AIMR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIMR*)0x430F8034u)
/** \brief 38, Interrupt Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_ISR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ISR*)0x430F8038u)
/** \brief 3C, Additional Interrupt Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_AISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AISR*)0x430F803Cu)
/** \brief 40, Input Edge Sensitivity Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_IESR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IESR*)0x430F8040u)
/** \brief 44, Operating Mode Active Edge Sensitivity Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_OPSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_OPSR*)0x430F8044u)
/** \brief 50, Functional Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_FUNRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FUNRR*)0x430F8050u)
/** \brief 54, Full Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_FULRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FULRR*)0x430F8054u)
/** \brief 58, Memory Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_MEMRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MEMRR*)0x430F8058u)
/** \brief 160, Power Mode Entry Delay Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_EDTR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR0*)0x430F8160u)
/** \brief 164, Power Mode Entry Delay Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_EDTR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR1*)0x430F8164u)
/** \brief 170, Device Control Delay Configuration Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_DCDR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR0*)0x430F8170u)
/** \brief 174, Device Control Delay Configuration Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_DCDR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR1*)0x430F8174u)
/** \brief FB0, PPU Identification Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_IDR0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR0*)0x430F8FB0u)
/** \brief FB4, PPU Identification Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_IDR1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR1*)0x430F8FB4u)
/** \brief FC8, Implementation Identification Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_IIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IIDR*)0x430F8FC8u)
/** \brief FCC, Architecture Identification Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_AIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIDR*)0x430F8FCCu)
/** \brief FD0, Implementation Defined Identification Register (PID4) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_PID4      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID4*)0x430F8FD0u)
/** \brief FE0, Implementation Defined Identification Register (PID0) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_PID0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID0*)0x430F8FE0u)
/** \brief FE4, Implementation Defined Identification Register (PID1) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_PID1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID1*)0x430F8FE4u)
/** \brief FE8, Implementation Defined Identification Register (PID2) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_PID2      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID2*)0x430F8FE8u)
/** \brief FEC, Implementation Defined Identification Register (PID3) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_PID3      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID3*)0x430F8FECu)
/** \brief FF0, Implementation Defined Identification Register (ID0) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_ID0       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID0*)0x430F8FF0u)
/** \brief FF4, Implementation Defined Identification Register (ID1) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_ID1       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID1*)0x430F8FF4u)
/** \brief FF8, Implementation Defined Identification Register (ID2) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_ID2       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID2*)0x430F8FF8u)
/** \brief FFC, Implementation Defined Identification Register (ID3) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU0_ID3       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID3*)0x430F8FFCu)
/** \brief 0, Power Policy Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_PWPR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWPR*)0x430F9000u)
/** \brief 4, Power Mode Emulation Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_PMER      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PMER*)0x430F9004u)
/** \brief 8, Power Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_PWSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWSR*)0x430F9008u)
/** \brief 10, Device Interface Input Current Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_DISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DISR*)0x430F9010u)
/** \brief 14, Miscellaneous Input Current Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_MISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MISR*)0x430F9014u)
/** \brief 18, Stored Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_STSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_STSR*)0x430F9018u)
/** \brief 1C, Unlock register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_UNLK      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_UNLK*)0x430F901Cu)
/** \brief 20, Power Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_PWCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWCR*)0x430F9020u)
/** \brief 24, Power Mode Transition Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_PTCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PTCR*)0x430F9024u)
/** \brief 30, Interrupt Mask Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_IMR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IMR*)0x430F9030u)
/** \brief 34, Additional Interrupt Mask Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_AIMR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIMR*)0x430F9034u)
/** \brief 38, Interrupt Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_ISR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ISR*)0x430F9038u)
/** \brief 3C, Additional Interrupt Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_AISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AISR*)0x430F903Cu)
/** \brief 40, Input Edge Sensitivity Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_IESR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IESR*)0x430F9040u)
/** \brief 44, Operating Mode Active Edge Sensitivity Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_OPSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_OPSR*)0x430F9044u)
/** \brief 50, Functional Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_FUNRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FUNRR*)0x430F9050u)
/** \brief 54, Full Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_FULRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FULRR*)0x430F9054u)
/** \brief 58, Memory Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_MEMRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MEMRR*)0x430F9058u)
/** \brief 160, Power Mode Entry Delay Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_EDTR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR0*)0x430F9160u)
/** \brief 164, Power Mode Entry Delay Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_EDTR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR1*)0x430F9164u)
/** \brief 170, Device Control Delay Configuration Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_DCDR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR0*)0x430F9170u)
/** \brief 174, Device Control Delay Configuration Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_DCDR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR1*)0x430F9174u)
/** \brief FB0, PPU Identification Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_IDR0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR0*)0x430F9FB0u)
/** \brief FB4, PPU Identification Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_IDR1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR1*)0x430F9FB4u)
/** \brief FC8, Implementation Identification Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_IIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IIDR*)0x430F9FC8u)
/** \brief FCC, Architecture Identification Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_AIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIDR*)0x430F9FCCu)
/** \brief FD0, Implementation Defined Identification Register (PID4) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_PID4      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID4*)0x430F9FD0u)
/** \brief FE0, Implementation Defined Identification Register (PID0) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_PID0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID0*)0x430F9FE0u)
/** \brief FE4, Implementation Defined Identification Register (PID1) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_PID1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID1*)0x430F9FE4u)
/** \brief FE8, Implementation Defined Identification Register (PID2) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_PID2      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID2*)0x430F9FE8u)
/** \brief FEC, Implementation Defined Identification Register (PID3) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_PID3      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID3*)0x430F9FECu)
/** \brief FF0, Implementation Defined Identification Register (ID0) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_ID0       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID0*)0x430F9FF0u)
/** \brief FF4, Implementation Defined Identification Register (ID1) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_ID1       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID1*)0x430F9FF4u)
/** \brief FF8, Implementation Defined Identification Register (ID2) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_ID2       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID2*)0x430F9FF8u)
/** \brief FFC, Implementation Defined Identification Register (ID3) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU1_ID3       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID3*)0x430F9FFCu)
/** \brief 0, Power Policy Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_PWPR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWPR*)0x430FA000u)
/** \brief 4, Power Mode Emulation Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_PMER      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PMER*)0x430FA004u)
/** \brief 8, Power Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_PWSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWSR*)0x430FA008u)
/** \brief 10, Device Interface Input Current Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_DISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DISR*)0x430FA010u)
/** \brief 14, Miscellaneous Input Current Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_MISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MISR*)0x430FA014u)
/** \brief 18, Stored Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_STSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_STSR*)0x430FA018u)
/** \brief 1C, Unlock register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_UNLK      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_UNLK*)0x430FA01Cu)
/** \brief 20, Power Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_PWCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWCR*)0x430FA020u)
/** \brief 24, Power Mode Transition Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_PTCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PTCR*)0x430FA024u)
/** \brief 30, Interrupt Mask Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_IMR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IMR*)0x430FA030u)
/** \brief 34, Additional Interrupt Mask Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_AIMR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIMR*)0x430FA034u)
/** \brief 38, Interrupt Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_ISR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ISR*)0x430FA038u)
/** \brief 3C, Additional Interrupt Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_AISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AISR*)0x430FA03Cu)
/** \brief 40, Input Edge Sensitivity Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_IESR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IESR*)0x430FA040u)
/** \brief 44, Operating Mode Active Edge Sensitivity Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_OPSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_OPSR*)0x430FA044u)
/** \brief 50, Functional Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_FUNRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FUNRR*)0x430FA050u)
/** \brief 54, Full Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_FULRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FULRR*)0x430FA054u)
/** \brief 58, Memory Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_MEMRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MEMRR*)0x430FA058u)
/** \brief 160, Power Mode Entry Delay Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_EDTR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR0*)0x430FA160u)
/** \brief 164, Power Mode Entry Delay Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_EDTR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR1*)0x430FA164u)
/** \brief 170, Device Control Delay Configuration Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_DCDR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR0*)0x430FA170u)
/** \brief 174, Device Control Delay Configuration Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_DCDR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR1*)0x430FA174u)
/** \brief FB0, PPU Identification Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_IDR0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR0*)0x430FAFB0u)
/** \brief FB4, PPU Identification Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_IDR1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR1*)0x430FAFB4u)
/** \brief FC8, Implementation Identification Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_IIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IIDR*)0x430FAFC8u)
/** \brief FCC, Architecture Identification Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_AIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIDR*)0x430FAFCCu)
/** \brief FD0, Implementation Defined Identification Register (PID4) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_PID4      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID4*)0x430FAFD0u)
/** \brief FE0, Implementation Defined Identification Register (PID0) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_PID0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID0*)0x430FAFE0u)
/** \brief FE4, Implementation Defined Identification Register (PID1) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_PID1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID1*)0x430FAFE4u)
/** \brief FE8, Implementation Defined Identification Register (PID2) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_PID2      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID2*)0x430FAFE8u)
/** \brief FEC, Implementation Defined Identification Register (PID3) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_PID3      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID3*)0x430FAFECu)
/** \brief FF0, Implementation Defined Identification Register (ID0) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_ID0       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID0*)0x430FAFF0u)
/** \brief FF4, Implementation Defined Identification Register (ID1) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_ID1       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID1*)0x430FAFF4u)
/** \brief FF8, Implementation Defined Identification Register (ID2) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_ID2       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID2*)0x430FAFF8u)
/** \brief FFC, Implementation Defined Identification Register (ID3) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU2_ID3       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID3*)0x430FAFFCu)
/** \brief 0, Power Policy Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_PWPR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWPR*)0x430FB000u)
/** \brief 4, Power Mode Emulation Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_PMER      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PMER*)0x430FB004u)
/** \brief 8, Power Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_PWSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWSR*)0x430FB008u)
/** \brief 10, Device Interface Input Current Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_DISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DISR*)0x430FB010u)
/** \brief 14, Miscellaneous Input Current Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_MISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MISR*)0x430FB014u)
/** \brief 18, Stored Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_STSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_STSR*)0x430FB018u)
/** \brief 1C, Unlock register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_UNLK      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_UNLK*)0x430FB01Cu)
/** \brief 20, Power Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_PWCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWCR*)0x430FB020u)
/** \brief 24, Power Mode Transition Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_PTCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PTCR*)0x430FB024u)
/** \brief 30, Interrupt Mask Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_IMR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IMR*)0x430FB030u)
/** \brief 34, Additional Interrupt Mask Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_AIMR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIMR*)0x430FB034u)
/** \brief 38, Interrupt Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_ISR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ISR*)0x430FB038u)
/** \brief 3C, Additional Interrupt Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_AISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AISR*)0x430FB03Cu)
/** \brief 40, Input Edge Sensitivity Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_IESR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IESR*)0x430FB040u)
/** \brief 44, Operating Mode Active Edge Sensitivity Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_OPSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_OPSR*)0x430FB044u)
/** \brief 50, Functional Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_FUNRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FUNRR*)0x430FB050u)
/** \brief 54, Full Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_FULRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FULRR*)0x430FB054u)
/** \brief 58, Memory Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_MEMRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MEMRR*)0x430FB058u)
/** \brief 160, Power Mode Entry Delay Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_EDTR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR0*)0x430FB160u)
/** \brief 164, Power Mode Entry Delay Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_EDTR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR1*)0x430FB164u)
/** \brief 170, Device Control Delay Configuration Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_DCDR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR0*)0x430FB170u)
/** \brief 174, Device Control Delay Configuration Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_DCDR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR1*)0x430FB174u)
/** \brief FB0, PPU Identification Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_IDR0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR0*)0x430FBFB0u)
/** \brief FB4, PPU Identification Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_IDR1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR1*)0x430FBFB4u)
/** \brief FC8, Implementation Identification Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_IIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IIDR*)0x430FBFC8u)
/** \brief FCC, Architecture Identification Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_AIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIDR*)0x430FBFCCu)
/** \brief FD0, Implementation Defined Identification Register (PID4) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_PID4      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID4*)0x430FBFD0u)
/** \brief FE0, Implementation Defined Identification Register (PID0) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_PID0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID0*)0x430FBFE0u)
/** \brief FE4, Implementation Defined Identification Register (PID1) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_PID1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID1*)0x430FBFE4u)
/** \brief FE8, Implementation Defined Identification Register (PID2) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_PID2      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID2*)0x430FBFE8u)
/** \brief FEC, Implementation Defined Identification Register (PID3) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_PID3      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID3*)0x430FBFECu)
/** \brief FF0, Implementation Defined Identification Register (ID0) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_ID0       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID0*)0x430FBFF0u)
/** \brief FF4, Implementation Defined Identification Register (ID1) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_ID1       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID1*)0x430FBFF4u)
/** \brief FF8, Implementation Defined Identification Register (ID2) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_ID2       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID2*)0x430FBFF8u)
/** \brief FFC, Implementation Defined Identification Register (ID3) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU3_ID3       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID3*)0x430FBFFCu)
/** \brief 0, Power Policy Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_PWPR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWPR*)0x430FC000u)
/** \brief 4, Power Mode Emulation Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_PMER      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PMER*)0x430FC004u)
/** \brief 8, Power Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_PWSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWSR*)0x430FC008u)
/** \brief 10, Device Interface Input Current Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_DISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DISR*)0x430FC010u)
/** \brief 14, Miscellaneous Input Current Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_MISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MISR*)0x430FC014u)
/** \brief 18, Stored Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_STSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_STSR*)0x430FC018u)
/** \brief 1C, Unlock register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_UNLK      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_UNLK*)0x430FC01Cu)
/** \brief 20, Power Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_PWCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWCR*)0x430FC020u)
/** \brief 24, Power Mode Transition Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_PTCR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PTCR*)0x430FC024u)
/** \brief 30, Interrupt Mask Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_IMR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IMR*)0x430FC030u)
/** \brief 34, Additional Interrupt Mask Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_AIMR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIMR*)0x430FC034u)
/** \brief 38, Interrupt Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_ISR       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ISR*)0x430FC038u)
/** \brief 3C, Additional Interrupt Status Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_AISR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AISR*)0x430FC03Cu)
/** \brief 40, Input Edge Sensitivity Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_IESR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IESR*)0x430FC040u)
/** \brief 44, Operating Mode Active Edge Sensitivity Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_OPSR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_OPSR*)0x430FC044u)
/** \brief 50, Functional Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_FUNRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FUNRR*)0x430FC050u)
/** \brief 54, Full Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_FULRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FULRR*)0x430FC054u)
/** \brief 58, Memory Retention RAM Configuration Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_MEMRR     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MEMRR*)0x430FC058u)
/** \brief 160, Power Mode Entry Delay Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_EDTR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR0*)0x430FC160u)
/** \brief 164, Power Mode Entry Delay Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_EDTR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR1*)0x430FC164u)
/** \brief 170, Device Control Delay Configuration Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_DCDR0     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR0*)0x430FC170u)
/** \brief 174, Device Control Delay Configuration Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_DCDR1     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR1*)0x430FC174u)
/** \brief FB0, PPU Identification Register 0 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_IDR0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR0*)0x430FCFB0u)
/** \brief FB4, PPU Identification Register 1 */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_IDR1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR1*)0x430FCFB4u)
/** \brief FC8, Implementation Identification Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_IIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IIDR*)0x430FCFC8u)
/** \brief FCC, Architecture Identification Register */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_AIDR      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIDR*)0x430FCFCCu)
/** \brief FD0, Implementation Defined Identification Register (PID4) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_PID4      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID4*)0x430FCFD0u)
/** \brief FE0, Implementation Defined Identification Register (PID0) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_PID0      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID0*)0x430FCFE0u)
/** \brief FE4, Implementation Defined Identification Register (PID1) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_PID1      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID1*)0x430FCFE4u)
/** \brief FE8, Implementation Defined Identification Register (PID2) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_PID2      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID2*)0x430FCFE8u)
/** \brief FEC, Implementation Defined Identification Register (PID3) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_PID3      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID3*)0x430FCFECu)
/** \brief FF0, Implementation Defined Identification Register (ID0) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_ID0       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID0*)0x430FCFF0u)
/** \brief FF4, Implementation Defined Identification Register (ID1) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_ID1       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID1*)0x430FCFF4u)
/** \brief FF8, Implementation Defined Identification Register (ID2) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_ID2       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID2*)0x430FCFF8u)
/** \brief FFC, Implementation Defined Identification Register (ID3) */
#define REG_PPCA_CPUSS_CNFG_RAMC_PPU4_ID3       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID3*)0x430FCFFCu)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43100000u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43100004u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43100008u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43100010u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43100014u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43100018u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4310001Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43100020u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43100024u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43100028u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4310002Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43100030u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43100034u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43100038u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43100040u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP0_CNT0_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43100044u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP0_CNT0_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43100048u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4310004Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43100050u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43100054u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43100070u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43100074u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43100078u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP0_CNT0_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4310007Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP0_CNT0_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431000A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM0_GRP0_CNT0_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x431000B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP0_CNT0_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431000B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43100100u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43100104u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43100108u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43100110u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43100114u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43100118u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4310011Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43100120u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43100124u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43100128u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4310012Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43100130u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43100134u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43100138u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43100140u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP0_CNT1_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43100144u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP0_CNT1_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43100148u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4310014Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43100150u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43100154u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43100170u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43100174u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43100178u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP0_CNT1_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4310017Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP0_CNT1_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431001A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM0_GRP0_CNT1_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x431001B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP0_CNT1_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431001B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43100200u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43100204u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43100208u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43100210u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43100214u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43100218u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4310021Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43100220u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43100224u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43100228u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4310022Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43100230u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43100234u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43100238u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43100240u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP0_CNT2_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43100244u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP0_CNT2_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43100248u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4310024Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43100250u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43100254u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43100270u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43100274u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43100278u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP0_CNT2_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4310027Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP0_CNT2_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431002A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM0_GRP0_CNT2_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x431002B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP0_CNT2_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431002B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43100300u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43100304u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43100308u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43100310u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43100314u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43100318u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4310031Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43100320u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43100324u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43100328u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4310032Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43100330u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43100334u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43100338u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43100340u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP0_CNT3_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43100344u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP0_CNT3_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43100348u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4310034Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43100350u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43100354u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43100370u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43100374u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43100378u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP0_CNT3_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4310037Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP0_CNT3_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431003A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM0_GRP0_CNT3_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x431003B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP0_CNT3_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431003B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43110000u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43110004u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43110008u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43110010u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43110014u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43110018u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4311001Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43110020u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43110024u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43110028u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4311002Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43110030u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43110034u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43110038u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43110040u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP1_CNT0_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43110044u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP1_CNT0_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43110048u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4311004Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43110050u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43110054u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43110070u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43110074u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43110078u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP1_CNT0_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4311007Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP1_CNT0_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431100A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM0_GRP1_CNT0_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x431100B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP1_CNT0_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431100B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43110100u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43110104u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43110108u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43110110u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43110114u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43110118u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4311011Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43110120u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43110124u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43110128u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4311012Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43110130u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43110134u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43110138u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43110140u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP1_CNT1_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43110144u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP1_CNT1_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43110148u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4311014Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43110150u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43110154u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43110170u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43110174u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43110178u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP1_CNT1_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4311017Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP1_CNT1_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431101A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM0_GRP1_CNT1_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x431101B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP1_CNT1_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431101B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43110200u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43110204u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43110208u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43110210u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43110214u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43110218u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4311021Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43110220u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43110224u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43110228u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4311022Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43110230u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43110234u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43110238u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43110240u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP1_CNT2_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43110244u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP1_CNT2_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43110248u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4311024Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43110250u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43110254u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43110270u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43110274u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43110278u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP1_CNT2_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4311027Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP1_CNT2_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431102A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM0_GRP1_CNT2_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x431102B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP1_CNT2_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431102B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43110300u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43110304u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43110308u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43110310u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43110314u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43110318u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4311031Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43110320u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43110324u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43110328u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4311032Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43110330u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43110334u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43110338u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43110340u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP1_CNT3_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43110344u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP1_CNT3_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43110348u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4311034Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43110350u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43110354u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43110370u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43110374u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43110378u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP1_CNT3_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4311037Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP1_CNT3_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431103A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM0_GRP1_CNT3_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x431103B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP1_CNT3_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431103B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43120000u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43120004u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43120008u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43120010u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43120014u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43120018u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4312001Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43120020u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43120024u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43120028u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4312002Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43120030u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43120034u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43120038u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43120040u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP2_CNT0_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43120044u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP2_CNT0_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43120048u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4312004Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43120050u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43120054u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43120070u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43120074u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43120078u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP2_CNT0_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4312007Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP2_CNT0_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431200A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP2_CNT0_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431200B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43120100u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43120104u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43120108u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43120110u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43120114u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43120118u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4312011Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43120120u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43120124u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43120128u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4312012Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43120130u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43120134u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43120138u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43120140u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP2_CNT1_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43120144u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP2_CNT1_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43120148u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4312014Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43120150u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43120154u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43120170u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43120174u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43120178u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP2_CNT1_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4312017Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP2_CNT1_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431201A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP2_CNT1_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431201B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43120200u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43120204u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43120208u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43120210u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43120214u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43120218u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4312021Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43120220u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43120224u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43120228u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4312022Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43120230u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43120234u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43120238u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43120240u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP2_CNT2_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43120244u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP2_CNT2_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43120248u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4312024Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43120250u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43120254u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43120270u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43120274u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43120278u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP2_CNT2_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4312027Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP2_CNT2_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431202A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP2_CNT2_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431202B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43120300u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43120304u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43120308u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43120310u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43120314u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43120318u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4312031Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43120320u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43120324u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43120328u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4312032Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43120330u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43120334u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43120338u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43120340u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM0_GRP2_CNT3_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43120344u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM0_GRP2_CNT3_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43120348u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4312034Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43120350u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43120354u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43120370u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43120374u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43120378u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM0_GRP2_CNT3_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4312037Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM0_GRP2_CNT3_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x431203A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM0_GRP2_CNT3_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x431203B4u)
/** \brief 0, Trigger Sync bypass for group trigger */
#define REG_PPCA_TCPWM0_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS*)0x43190000u)
/** \brief 0, Global control register */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_PCONF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF*)0x431A8000u)
/** \brief 4, Suspend Configuration */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_PSUS  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS*)0x431A8004u)
/** \brief 8, MOTIF run bit set */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_PRUNS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUNS*)0x431A8008u)
/** \brief 10, MOTIF run bit status */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_PRUN  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUN*)0x431A8010u)
/** \brief 24, Hall Inputs Sample Trigger */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_HIST  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HIST*)0x431A8024u)
/** \brief 28, Hall Mode Extra Config */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_HMEC  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HMEC*)0x431A8028u)
/** \brief 30, Hall Current and Expected patterns */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_HALP  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALP*)0x431A8030u)
/** \brief 34, Hall Current and Expected shadow patterns */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_HALPS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALPS*)0x431A8034u)
/** \brief 38, Hall Sensor Output Config */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_HOSC  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC*)0x431A8038u)
/** \brief 40, Multi-Channel Mode Pattern */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCM   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCM*)0x431A8040u)
/** \brief 44, Multi-Channel Mode shadow Pattern LUT0 */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCSM  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM*)0x431A8044u)
/** \brief 48, Multi-Channel Mode Control set */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCMS  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMS*)0x431A8048u)
/** \brief 4C, Multi-Channel Mode Control clear */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCMC  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMC*)0x431A804Cu)
/** \brief 50, Multi-Channel Mode flag status */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCMF  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMF*)0x431A8050u)
/** \brief 54, Multi-Channel Pattern Fault */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCPF  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCPF*)0x431A8054u)
/** \brief 58, Multi-Channel Output Config */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MOSC  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC*)0x431A8058u)
/** \brief 60, Quadrature Decoder Configuration */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_QDC   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC*)0x431A8060u)
/** \brief 64, Quadrature Output Config */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_QOSC  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC*)0x431A8064u)
/** \brief 68, Multi-Channel Extra Config */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCMEC /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMEC*)0x431A8068u)
/** \brief 70, MOTIF interrupt status */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_PFLG  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLG*)0x431A8070u)
/** \brief 74, MOTIF interrupt enable */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_PFLGE /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLGE*)0x431A8074u)
/** \brief 78, Interrupt set register */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_SPFLG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SPFLG*)0x431A8078u)
/** \brief 7C, Interrupt clear register */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_RPFLG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_RPFLG*)0x431A807Cu)
/** \brief 80, Multi-Channel Mode shadow pattern LUT1 */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCSM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM1*)0x431A8080u)
/** \brief 84, Multi-Channel Mode shadow pattern LUT2 */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCSM2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM2*)0x431A8084u)
/** \brief 88, Multi-Channel Mode shadow pattern LUT3 */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCSM3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM3*)0x431A8088u)
/** \brief 8C, Multi-Channel Mode shadow pattern LUT4 */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCSM4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM4*)0x431A808Cu)
/** \brief 90, Multi-Channel Mode shadow pattern LUT5 */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_MCSM5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM5*)0x431A8090u)
/** \brief 94, Hall Mode LUT config */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_CLUT  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_CLUT*)0x431A8094u)
/** \brief 98, Hall Mode LUT status */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_SLUT  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SLUT*)0x431A8098u)
/** \brief 100, MOTIF Debug Register */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_PDBG  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PDBG*)0x431A8100u)
/** \brief 104, MOTIF Low Pass 0 Status */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_PLP0S /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP0S*)0x431A8104u)
/** \brief 108, MOTIF Low Pass 1 Status */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_PLP1S /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP1S*)0x431A8108u)
/** \brief 10C, MOTIF Low Pass 2 Status */
#define REG_PPCA_TCPWM0_MOTIF_GRP2_MOTIF0_PLP2S /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP2S*)0x431A810Cu)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43200000u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43200004u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43200008u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43200010u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43200014u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43200018u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4320001Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43200020u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43200024u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43200028u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4320002Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43200030u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43200034u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43200038u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43200040u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM1_GRP0_CNT0_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43200044u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM1_GRP0_CNT0_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43200048u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4320004Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43200050u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43200054u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43200070u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43200074u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43200078u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM1_GRP0_CNT0_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4320007Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM1_GRP0_CNT0_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x432000A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM1_GRP0_CNT0_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x432000B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM1_GRP0_CNT0_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x432000B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43200100u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43200104u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43200108u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43200110u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43200114u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43200118u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4320011Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43200120u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43200124u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43200128u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4320012Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43200130u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43200134u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43200138u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43200140u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM1_GRP0_CNT1_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43200144u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM1_GRP0_CNT1_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43200148u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4320014Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43200150u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43200154u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43200170u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43200174u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43200178u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM1_GRP0_CNT1_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4320017Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM1_GRP0_CNT1_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x432001A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM1_GRP0_CNT1_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x432001B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM1_GRP0_CNT1_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x432001B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43210000u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43210004u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43210008u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43210010u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43210014u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43210018u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4321001Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43210020u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43210024u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43210028u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4321002Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43210030u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43210034u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43210038u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43210040u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM1_GRP1_CNT0_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43210044u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM1_GRP1_CNT0_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43210048u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4321004Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43210050u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43210054u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43210070u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43210074u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43210078u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM1_GRP1_CNT0_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4321007Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM1_GRP1_CNT0_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x432100A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM1_GRP1_CNT0_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x432100B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM1_GRP1_CNT0_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x432100B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43210100u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43210104u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43210108u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43210110u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43210114u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43210118u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4321011Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43210120u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43210124u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43210128u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4321012Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43210130u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43210134u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43210138u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43210140u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM1_GRP1_CNT1_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43210144u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM1_GRP1_CNT1_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43210148u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4321014Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43210150u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43210154u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43210170u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43210174u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43210178u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM1_GRP1_CNT1_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4321017Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM1_GRP1_CNT1_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x432101A4u)
/** \brief B0, Counter control register for HRPWM feature */
#define REG_PPCA_TCPWM1_GRP1_CNT1_HRPWM_CTRL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL*)0x432101B0u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM1_GRP1_CNT1_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x432101B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43220000u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43220004u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43220008u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43220010u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43220014u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43220018u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4322001Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43220020u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43220024u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43220028u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4322002Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43220030u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43220034u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43220038u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43220040u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM1_GRP2_CNT0_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43220044u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM1_GRP2_CNT0_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43220048u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4322004Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43220050u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43220054u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43220070u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43220074u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43220078u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM1_GRP2_CNT0_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4322007Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM1_GRP2_CNT0_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x432200A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM1_GRP2_CNT0_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x432200B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43220100u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43220104u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43220108u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43220110u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43220114u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43220118u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4322011Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43220120u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43220124u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43220128u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4322012Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43220130u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43220134u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43220138u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43220140u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM1_GRP2_CNT1_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43220144u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM1_GRP2_CNT1_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43220148u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4322014Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43220150u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43220154u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43220170u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43220174u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43220178u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM1_GRP2_CNT1_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4322017Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM1_GRP2_CNT1_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x432201A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM1_GRP2_CNT1_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x432201B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43220200u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43220204u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43220208u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43220210u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43220214u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43220218u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4322021Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43220220u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43220224u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43220228u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4322022Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43220230u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43220234u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43220238u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43220240u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM1_GRP2_CNT2_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43220244u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM1_GRP2_CNT2_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43220248u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4322024Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43220250u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43220254u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43220270u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43220274u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43220278u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM1_GRP2_CNT2_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4322027Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM1_GRP2_CNT2_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x432202A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM1_GRP2_CNT2_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x432202B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43220300u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43220304u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43220308u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43220310u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43220314u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43220318u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4322031Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43220320u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43220324u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43220328u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4322032Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43220330u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43220334u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43220338u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43220340u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM1_GRP2_CNT3_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43220344u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM1_GRP2_CNT3_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43220348u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4322034Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43220350u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43220354u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43220370u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43220374u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43220378u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM1_GRP2_CNT3_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4322037Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM1_GRP2_CNT3_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x432203A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM1_GRP2_CNT3_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x432203B4u)
/** \brief 0, Trigger Sync bypass for group trigger */
#define REG_PPCA_TCPWM1_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS*)0x43290000u)
/** \brief 0, Global control register */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_PCONF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF*)0x432A8000u)
/** \brief 4, Suspend Configuration */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_PSUS  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS*)0x432A8004u)
/** \brief 8, MOTIF run bit set */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_PRUNS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUNS*)0x432A8008u)
/** \brief 10, MOTIF run bit status */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_PRUN  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUN*)0x432A8010u)
/** \brief 24, Hall Inputs Sample Trigger */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_HIST  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HIST*)0x432A8024u)
/** \brief 28, Hall Mode Extra Config */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_HMEC  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HMEC*)0x432A8028u)
/** \brief 30, Hall Current and Expected patterns */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_HALP  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALP*)0x432A8030u)
/** \brief 34, Hall Current and Expected shadow patterns */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_HALPS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALPS*)0x432A8034u)
/** \brief 38, Hall Sensor Output Config */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_HOSC  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC*)0x432A8038u)
/** \brief 40, Multi-Channel Mode Pattern */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCM   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCM*)0x432A8040u)
/** \brief 44, Multi-Channel Mode shadow Pattern LUT0 */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCSM  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM*)0x432A8044u)
/** \brief 48, Multi-Channel Mode Control set */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCMS  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMS*)0x432A8048u)
/** \brief 4C, Multi-Channel Mode Control clear */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCMC  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMC*)0x432A804Cu)
/** \brief 50, Multi-Channel Mode flag status */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCMF  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMF*)0x432A8050u)
/** \brief 54, Multi-Channel Pattern Fault */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCPF  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCPF*)0x432A8054u)
/** \brief 58, Multi-Channel Output Config */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MOSC  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC*)0x432A8058u)
/** \brief 60, Quadrature Decoder Configuration */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_QDC   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC*)0x432A8060u)
/** \brief 64, Quadrature Output Config */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_QOSC  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC*)0x432A8064u)
/** \brief 68, Multi-Channel Extra Config */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCMEC /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMEC*)0x432A8068u)
/** \brief 70, MOTIF interrupt status */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_PFLG  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLG*)0x432A8070u)
/** \brief 74, MOTIF interrupt enable */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_PFLGE /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLGE*)0x432A8074u)
/** \brief 78, Interrupt set register */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_SPFLG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SPFLG*)0x432A8078u)
/** \brief 7C, Interrupt clear register */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_RPFLG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_RPFLG*)0x432A807Cu)
/** \brief 80, Multi-Channel Mode shadow pattern LUT1 */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCSM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM1*)0x432A8080u)
/** \brief 84, Multi-Channel Mode shadow pattern LUT2 */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCSM2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM2*)0x432A8084u)
/** \brief 88, Multi-Channel Mode shadow pattern LUT3 */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCSM3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM3*)0x432A8088u)
/** \brief 8C, Multi-Channel Mode shadow pattern LUT4 */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCSM4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM4*)0x432A808Cu)
/** \brief 90, Multi-Channel Mode shadow pattern LUT5 */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_MCSM5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM5*)0x432A8090u)
/** \brief 94, Hall Mode LUT config */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_CLUT  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_CLUT*)0x432A8094u)
/** \brief 98, Hall Mode LUT status */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_SLUT  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SLUT*)0x432A8098u)
/** \brief 100, MOTIF Debug Register */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_PDBG  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PDBG*)0x432A8100u)
/** \brief 104, MOTIF Low Pass 0 Status */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_PLP0S /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP0S*)0x432A8104u)
/** \brief 108, MOTIF Low Pass 1 Status */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_PLP1S /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP1S*)0x432A8108u)
/** \brief 10C, MOTIF Low Pass 2 Status */
#define REG_PPCA_TCPWM1_MOTIF_GRP2_MOTIF0_PLP2S /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP2S*)0x432A810Cu)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43300000u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43300004u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43300008u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43300010u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43300014u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43300018u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4330001Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43300020u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43300024u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43300028u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4330002Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43300030u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43300034u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43300038u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43300040u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM2_GRP0_CNT0_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43300044u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM2_GRP0_CNT0_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43300048u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4330004Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43300050u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43300054u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43300070u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43300074u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43300078u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM2_GRP0_CNT0_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4330007Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM2_GRP0_CNT0_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x433000A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM2_GRP0_CNT0_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x433000B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43300100u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43300104u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43300108u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43300110u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43300114u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43300118u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4330011Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43300120u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43300124u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43300128u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4330012Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43300130u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43300134u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43300138u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43300140u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM2_GRP0_CNT1_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43300144u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM2_GRP0_CNT1_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43300148u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4330014Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43300150u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43300154u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43300170u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43300174u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43300178u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM2_GRP0_CNT1_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4330017Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM2_GRP0_CNT1_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x433001A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM2_GRP0_CNT1_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x433001B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43300200u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43300204u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43300208u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43300210u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43300214u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43300218u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4330021Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43300220u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43300224u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43300228u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4330022Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43300230u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43300234u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43300238u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43300240u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM2_GRP0_CNT2_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43300244u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM2_GRP0_CNT2_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43300248u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4330024Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43300250u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43300254u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43300270u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43300274u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43300278u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM2_GRP0_CNT2_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4330027Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM2_GRP0_CNT2_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x433002A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM2_GRP0_CNT2_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x433002B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43300300u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43300304u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43300308u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43300310u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43300314u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43300318u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4330031Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43300320u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43300324u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43300328u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4330032Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43300330u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43300334u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43300338u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43300340u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM2_GRP0_CNT3_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43300344u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM2_GRP0_CNT3_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43300348u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4330034Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43300350u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43300354u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43300370u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43300374u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43300378u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM2_GRP0_CNT3_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4330037Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM2_GRP0_CNT3_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x433003A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM2_GRP0_CNT3_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x433003B4u)
/** \brief 0, Trigger Sync bypass for group trigger */
#define REG_PPCA_TCPWM2_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS*)0x43390000u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43400000u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43400004u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43400008u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43400010u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43400014u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43400018u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4340001Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43400020u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43400024u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43400028u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4340002Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43400030u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43400034u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43400038u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43400040u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM3_GRP0_CNT0_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43400044u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM3_GRP0_CNT0_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43400048u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4340004Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43400050u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43400054u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43400070u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43400074u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43400078u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM3_GRP0_CNT0_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4340007Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM3_GRP0_CNT0_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x434000A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM3_GRP0_CNT0_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x434000B4u)
/** \brief 0, Counter control register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_CTRL          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL*)0x43400100u)
/** \brief 4, Counter status register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_STATUS        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_STATUS*)0x43400104u)
/** \brief 8, Counter count register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_COUNTER       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_COUNTER*)0x43400108u)
/** \brief 10, Counter compare/capture 0 register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_CC0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0*)0x43400110u)
/** \brief 14, Counter buffered compare/capture 0 register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_CC0_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF*)0x43400114u)
/** \brief 18, Counter compare/capture 1 register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_CC1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1*)0x43400118u)
/** \brief 1C, Counter buffered compare/capture 1 register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_CC1_BUFF      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF*)0x4340011Cu)
/** \brief 20, Counter period register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_PERIOD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD*)0x43400120u)
/** \brief 24, Counter buffered period register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_PERIOD_BUFF   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF*)0x43400124u)
/** \brief 28, Counter line selection register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_LINE_SEL      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL*)0x43400128u)
/** \brief 2C, Counter buffered line selection register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_LINE_SEL_BUFF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF*)0x4340012Cu)
/** \brief 30, Counter PWM dead time register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_DT            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT*)0x43400130u)
/** \brief 34, Counter buffered PWM dead time register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_DT_BUFF       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF*)0x43400134u)
/** \brief 38, Counter prescalar register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_PS            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_PS*)0x43400138u)
/** \brief 40, Counter trigger command register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_TR_CMD        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD*)0x43400140u)
/** \brief 44, Counter input trigger selection register 0 */
#define REG_PPCA_TCPWM3_GRP0_CNT1_TR_IN_SEL0    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0*)0x43400144u)
/** \brief 48, Counter input trigger selection register 1 */
#define REG_PPCA_TCPWM3_GRP0_CNT1_TR_IN_SEL1    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1*)0x43400148u)
/** \brief 4C, Counter input trigger edge selection register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_TR_IN_EDGE_SEL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL*)0x4340014Cu)
/** \brief 50, Counter trigger PWM control register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_TR_PWM_CTRL   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL*)0x43400150u)
/** \brief 54, Counter output trigger selection register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_TR_OUT_SEL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL*)0x43400154u)
/** \brief 70, Interrupt request register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_INTR          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR*)0x43400170u)
/** \brief 74, Interrupt set request register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_INTR_SET      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET*)0x43400174u)
/** \brief 78, Interrupt mask register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_INTR_MASK     /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK*)0x43400178u)
/** \brief 7C, Interrupt masked request register */
#define REG_PPCA_TCPWM3_GRP0_CNT1_INTR_MASKED   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED*)0x4340017Cu)
/** \brief A4, Sync bypass register for one to one trigger */
#define REG_PPCA_TCPWM3_GRP0_CNT1_TR_ONE_SYNC_BYPASS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS*)0x434001A4u)
/** \brief B4, Counter control register 2 */
#define REG_PPCA_TCPWM3_GRP0_CNT1_CTRL2         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_GRP_CNT_CTRL2*)0x434001B4u)
/** \brief 0, Trigger Sync bypass for group trigger */
#define REG_PPCA_TCPWM3_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS*)0x43490000u)
/** \brief 0,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_CTRL           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_CTRL*)0x43500000u)
/** \brief 0,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CTRL*)0x43500100u)
/** \brief 4,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_DATA_IN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN0*)0x43500104u)
/** \brief 8,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_DATA_IN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN1*)0x43500108u)
/** \brief C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CNFG*)0x4350010Cu)
/** \brief 10,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_CX0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX0*)0x43500110u)
/** \brief 14,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_CX1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX1*)0x43500114u)
/** \brief 18,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_CX2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX2*)0x43500118u)
/** \brief 1C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_CX3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX3*)0x4350011Cu)
/** \brief 24,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_CY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY1*)0x43500124u)
/** \brief 28,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_CY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY2*)0x43500128u)
/** \brief 2C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_CY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY3*)0x4350012Cu)
/** \brief 30,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_DATA_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_OUT*)0x43500130u)
/** \brief 34,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_OFFSET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_OFFSET*)0x43500134u)
/** \brief 40,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_LIMMAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMAX*)0x43500140u)
/** \brief 44,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_LIMMIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMIN*)0x43500144u)
/** \brief 60,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_SCALECX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECX*)0x43500160u)
/** \brief 64,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_SCALECY /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECY*)0x43500164u)
/** \brief 68,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_GIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GIN*)0x43500168u)
/** \brief 6C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_GOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GOUT*)0x4350016Cu)
/** \brief 80,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z0_VERSION /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_VERSION*)0x43500180u)
/** \brief 0,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CTRL*)0x43500200u)
/** \brief 4,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_DATA_IN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN0*)0x43500204u)
/** \brief 8,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_DATA_IN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN1*)0x43500208u)
/** \brief C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CNFG*)0x4350020Cu)
/** \brief 10,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_CX0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX0*)0x43500210u)
/** \brief 14,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_CX1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX1*)0x43500214u)
/** \brief 18,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_CX2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX2*)0x43500218u)
/** \brief 1C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_CX3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX3*)0x4350021Cu)
/** \brief 24,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_CY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY1*)0x43500224u)
/** \brief 28,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_CY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY2*)0x43500228u)
/** \brief 2C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_CY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY3*)0x4350022Cu)
/** \brief 30,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_DATA_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_OUT*)0x43500230u)
/** \brief 34,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_OFFSET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_OFFSET*)0x43500234u)
/** \brief 40,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_LIMMAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMAX*)0x43500240u)
/** \brief 44,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_LIMMIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMIN*)0x43500244u)
/** \brief 60,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_SCALECX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECX*)0x43500260u)
/** \brief 64,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_SCALECY /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECY*)0x43500264u)
/** \brief 68,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_GIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GIN*)0x43500268u)
/** \brief 6C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_GOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GOUT*)0x4350026Cu)
/** \brief 80,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z1_VERSION /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_VERSION*)0x43500280u)
/** \brief 0,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CTRL*)0x43500300u)
/** \brief 4,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_DATA_IN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN0*)0x43500304u)
/** \brief 8,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_DATA_IN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN1*)0x43500308u)
/** \brief C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CNFG*)0x4350030Cu)
/** \brief 10,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_CX0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX0*)0x43500310u)
/** \brief 14,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_CX1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX1*)0x43500314u)
/** \brief 18,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_CX2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX2*)0x43500318u)
/** \brief 1C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_CX3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX3*)0x4350031Cu)
/** \brief 24,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_CY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY1*)0x43500324u)
/** \brief 28,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_CY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY2*)0x43500328u)
/** \brief 2C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_CY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY3*)0x4350032Cu)
/** \brief 30,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_DATA_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_OUT*)0x43500330u)
/** \brief 34,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_OFFSET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_OFFSET*)0x43500334u)
/** \brief 40,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_LIMMAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMAX*)0x43500340u)
/** \brief 44,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_LIMMIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMIN*)0x43500344u)
/** \brief 60,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_SCALECX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECX*)0x43500360u)
/** \brief 64,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_SCALECY /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECY*)0x43500364u)
/** \brief 68,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_GIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GIN*)0x43500368u)
/** \brief 6C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_GOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GOUT*)0x4350036Cu)
/** \brief 80,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z2_VERSION /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_VERSION*)0x43500380u)
/** \brief 0,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CTRL*)0x43500400u)
/** \brief 4,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_DATA_IN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN0*)0x43500404u)
/** \brief 8,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_DATA_IN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN1*)0x43500408u)
/** \brief C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CNFG*)0x4350040Cu)
/** \brief 10,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_CX0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX0*)0x43500410u)
/** \brief 14,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_CX1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX1*)0x43500414u)
/** \brief 18,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_CX2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX2*)0x43500418u)
/** \brief 1C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_CX3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX3*)0x4350041Cu)
/** \brief 24,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_CY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY1*)0x43500424u)
/** \brief 28,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_CY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY2*)0x43500428u)
/** \brief 2C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_CY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY3*)0x4350042Cu)
/** \brief 30,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_DATA_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_OUT*)0x43500430u)
/** \brief 34,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_OFFSET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_OFFSET*)0x43500434u)
/** \brief 40,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_LIMMAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMAX*)0x43500440u)
/** \brief 44,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_LIMMIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMIN*)0x43500444u)
/** \brief 60,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_SCALECX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECX*)0x43500460u)
/** \brief 64,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_SCALECY /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECY*)0x43500464u)
/** \brief 68,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_GIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GIN*)0x43500468u)
/** \brief 6C,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_GOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GOUT*)0x4350046Cu)
/** \brief 80,  */
#define REG_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z3_VERSION /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_VERSION*)0x43500480u)
/** \brief 0,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_CTRL           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_CTRL*)0x43510000u)
/** \brief 0,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CTRL*)0x43510100u)
/** \brief 4,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_DATA_IN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN0*)0x43510104u)
/** \brief 8,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_DATA_IN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN1*)0x43510108u)
/** \brief C,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CNFG*)0x4351010Cu)
/** \brief 10,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_CX0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX0*)0x43510110u)
/** \brief 14,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_CX1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX1*)0x43510114u)
/** \brief 18,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_CX2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX2*)0x43510118u)
/** \brief 1C,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_CX3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX3*)0x4351011Cu)
/** \brief 24,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_CY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY1*)0x43510124u)
/** \brief 28,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_CY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY2*)0x43510128u)
/** \brief 2C,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_CY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY3*)0x4351012Cu)
/** \brief 30,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_DATA_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_OUT*)0x43510130u)
/** \brief 34,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_OFFSET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_OFFSET*)0x43510134u)
/** \brief 40,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_LIMMAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMAX*)0x43510140u)
/** \brief 44,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_LIMMIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMIN*)0x43510144u)
/** \brief 60,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_SCALECX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECX*)0x43510160u)
/** \brief 64,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_SCALECY /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECY*)0x43510164u)
/** \brief 68,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_GIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GIN*)0x43510168u)
/** \brief 6C,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_GOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GOUT*)0x4351016Cu)
/** \brief 80,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z0_VERSION /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_VERSION*)0x43510180u)
/** \brief 0,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_CTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CTRL*)0x43510200u)
/** \brief 4,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_DATA_IN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN0*)0x43510204u)
/** \brief 8,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_DATA_IN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN1*)0x43510208u)
/** \brief C,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CNFG*)0x4351020Cu)
/** \brief 10,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_CX0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX0*)0x43510210u)
/** \brief 14,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_CX1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX1*)0x43510214u)
/** \brief 18,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_CX2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX2*)0x43510218u)
/** \brief 1C,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_CX3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX3*)0x4351021Cu)
/** \brief 24,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_CY1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY1*)0x43510224u)
/** \brief 28,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_CY2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY2*)0x43510228u)
/** \brief 2C,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_CY3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY3*)0x4351022Cu)
/** \brief 30,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_DATA_OUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_OUT*)0x43510230u)
/** \brief 34,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_OFFSET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_OFFSET*)0x43510234u)
/** \brief 40,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_LIMMAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMAX*)0x43510240u)
/** \brief 44,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_LIMMIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMIN*)0x43510244u)
/** \brief 60,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_SCALECX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECX*)0x43510260u)
/** \brief 64,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_SCALECY /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECY*)0x43510264u)
/** \brief 68,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_GIN /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GIN*)0x43510268u)
/** \brief 6C,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_GOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GOUT*)0x4351026Cu)
/** \brief 80,  */
#define REG_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z1_VERSION /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_VERSION*)0x43510280u)
/** \brief 0,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520000u)
/** \brief 4,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA1            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520004u)
/** \brief 8,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA2            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520008u)
/** \brief C,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA3            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x4352000Cu)
/** \brief 10,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA4            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520010u)
/** \brief 14,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA5            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520014u)
/** \brief 18,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA6            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520018u)
/** \brief 1C,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA7            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x4352001Cu)
/** \brief 20,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA8            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520020u)
/** \brief 24,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA9            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520024u)
/** \brief 28,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA10           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520028u)
/** \brief 2C,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA11           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x4352002Cu)
/** \brief 30,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA12           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520030u)
/** \brief 34,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA13           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520034u)
/** \brief 38,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA14           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520038u)
/** \brief 3C,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA15           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x4352003Cu)
/** \brief 40,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA16           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520040u)
/** \brief 44,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA17           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520044u)
/** \brief 48,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA18           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520048u)
/** \brief 4C,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA19           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x4352004Cu)
/** \brief 50,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA20           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520050u)
/** \brief 54,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA21           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520054u)
/** \brief 58,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA22           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520058u)
/** \brief 5C,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA23           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x4352005Cu)
/** \brief 60,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA24           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520060u)
/** \brief 64,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA25           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520064u)
/** \brief 68,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA26           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520068u)
/** \brief 6C,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA27           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x4352006Cu)
/** \brief 70,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA28           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520070u)
/** \brief 74,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA29           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520074u)
/** \brief 78,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA30           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520078u)
/** \brief 7C,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA31           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x4352007Cu)
/** \brief 80,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA32           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520080u)
/** \brief 84,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA33           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520084u)
/** \brief 88,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA34           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520088u)
/** \brief 8C,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA35           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x4352008Cu)
/** \brief 90,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA36           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520090u)
/** \brief 94,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA37           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520094u)
/** \brief 98,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA38           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x43520098u)
/** \brief 9C,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA39           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x4352009Cu)
/** \brief A0,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA40           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x435200A0u)
/** \brief A4,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA41           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x435200A4u)
/** \brief A8,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA42           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x435200A8u)
/** \brief AC,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA43           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x435200ACu)
/** \brief B0,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA44           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x435200B0u)
/** \brief B4,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA45           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x435200B4u)
/** \brief B8,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA46           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x435200B8u)
/** \brief BC,  */
#define REG_PPCA_ADCM_ADCM_ADC_DATA47           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ADCM_ADCM_ADC_DATA*)0x435200BCu)
/** \brief 0,  */
#define REG_PPCA_CLB_CTRL                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_CTRL*)0x43530000u)
/** \brief 0,  */
#define REG_PPCA_CLB_DICO_CTRL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_CTRL*)0x43532000u)
/** \brief 4,  */
#define REG_PPCA_CLB_DICO_CNFG                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_CNFG*)0x43532004u)
/** \brief 8,  */
#define REG_PPCA_CLB_DICO_EVENT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_EVENT*)0x43532008u)
/** \brief C,  */
#define REG_PPCA_CLB_DICO_SAFE                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_SAFE*)0x4353200Cu)
/** \brief 10,  */
#define REG_PPCA_CLB_DICO_IMAXL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IMAXL*)0x43532010u)
/** \brief 14,  */
#define REG_PPCA_CLB_DICO_IMINL                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IMINL*)0x43532014u)
/** \brief 18,  */
#define REG_PPCA_CLB_DICO_VAC_POL               /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_VAC_POL*)0x43532018u)
/** \brief 1C,  */
#define REG_PPCA_CLB_DICO_OBS_CTRL              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_OBS_CTRL*)0x4353201Cu)
/** \brief 20,  */
#define REG_PPCA_CLB_DICO_PERIOD_MEAS0          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PERIOD_MEAS*)0x43532020u)
/** \brief 24,  */
#define REG_PPCA_CLB_DICO_PERIOD_MEAS1          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PERIOD_MEAS*)0x43532024u)
/** \brief 28,  */
#define REG_PPCA_CLB_DICO_PERIOD_MEAS2          /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PERIOD_MEAS*)0x43532028u)
/** \brief 30,  */
#define REG_PPCA_CLB_DICO_IEST_IND_ACCU0        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IEST_IND_ACCU*)0x43532030u)
/** \brief 34,  */
#define REG_PPCA_CLB_DICO_IEST_IND_ACCU1        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IEST_IND_ACCU*)0x43532034u)
/** \brief 38,  */
#define REG_PPCA_CLB_DICO_IEST_IND_ACCU2        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IEST_IND_ACCU*)0x43532038u)
/** \brief 40,  */
#define REG_PPCA_CLB_DICO_IL_ACCU0              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IL_ACCU*)0x43532040u)
/** \brief 44,  */
#define REG_PPCA_CLB_DICO_IL_ACCU1              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IL_ACCU*)0x43532044u)
/** \brief 48,  */
#define REG_PPCA_CLB_DICO_IL_ACCU2              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IL_ACCU*)0x43532048u)
/** \brief 50,  */
#define REG_PPCA_CLB_DICO_IEST_CORR0            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IEST_CORR*)0x43532050u)
/** \brief 54,  */
#define REG_PPCA_CLB_DICO_IEST_CORR1            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IEST_CORR*)0x43532054u)
/** \brief 58,  */
#define REG_PPCA_CLB_DICO_IEST_CORR2            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_IEST_CORR*)0x43532058u)
/** \brief 60, IMINL for Up and Down Slope */
#define REG_PPCA_CLB_DICO_PE_IMINL              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PE_IMINL*)0x43532060u)
/** \brief 64, IMAXL for Up and Down Slope */
#define REG_PPCA_CLB_DICO_PE_IMAXL              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PE_IMAXL*)0x43532064u)
/** \brief 68, UP Count Register for Up and Down Slope */
#define REG_PPCA_CLB_DICO_PE_UP_COUNT           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PE_UP_COUNT*)0x43532068u)
/** \brief 6C, DOWN Count Register for Up and Down Slope */
#define REG_PPCA_CLB_DICO_PE_DN_COUNT           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PE_DN_COUNT*)0x4353206Cu)
/** \brief 70, TPHD Value (PCO_1) Register for PE */
#define REG_PPCA_CLB_DICO_PE_TPHD_1             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PE_TPHD_1*)0x43532070u)
/** \brief 74, TPHD Value (PCO_2) Register for PE */
#define REG_PPCA_CLB_DICO_PE_TPHD_2             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PE_TPHD_2*)0x43532074u)
/** \brief 80, Threshold Current multiplied by Inductance Register for PS */
#define REG_PPCA_CLB_DICO_PS_TH                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PS_TH*)0x43532080u)
/** \brief 90, IMINL/IMAXL Correction Information Register for PS */
#define REG_PPCA_CLB_DICO_PS_CC_INFO0           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PS_CC_INFO*)0x43532090u)
/** \brief 94, IMINL/IMAXL Correction Information Register for PS */
#define REG_PPCA_CLB_DICO_PS_CC_INFO1           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PS_CC_INFO*)0x43532094u)
/** \brief A0, Correction term of IMINL/IMAXL Register for PS */
#define REG_PPCA_CLB_DICO_PS_CC0                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PS_CC*)0x435320A0u)
/** \brief A4, Correction term of IMINL/IMAXL Register for PS */
#define REG_PPCA_CLB_DICO_PS_CC1                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PS_CC*)0x435320A4u)
/** \brief B0, Interrupt Request Register */
#define REG_PPCA_CLB_DICO_INTR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_INTR*)0x435320B0u)
/** \brief B4, Interrupt Set Request Register */
#define REG_PPCA_CLB_DICO_INTR_SET              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_INTR_SET*)0x435320B4u)
/** \brief B8, Interrupt Mask Register */
#define REG_PPCA_CLB_DICO_INTR_MASK             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_INTR_MASK*)0x435320B8u)
/** \brief BC, Interrupt Masked Register */
#define REG_PPCA_CLB_DICO_INTR_MASKED           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_INTR_MASKED*)0x435320BCu)
/** \brief C0,  */
#define REG_PPCA_CLB_DICO_PCO_CORR_IEST0        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PCO_CORR_IEST*)0x435320C0u)
/** \brief C4,  */
#define REG_PPCA_CLB_DICO_PCO_CORR_IEST1        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PCO_CORR_IEST*)0x435320C4u)
/** \brief C8,  */
#define REG_PPCA_CLB_DICO_PCO_CORR_IEST2        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_PCO_CORR_IEST*)0x435320C8u)
/** \brief D0,  */
#define REG_PPCA_CLB_DICO_STAT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_DICO_STAT*)0x435320D0u)
/** \brief 0,  */
#define REG_PPCA_CLB_MACO_CTRL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_CTRL*)0x43534000u)
/** \brief 4,  */
#define REG_PPCA_CLB_MACO_EVENT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_EVENT*)0x43534004u)
/** \brief C,  */
#define REG_PPCA_CLB_MACO_STAT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_STAT*)0x4353400Cu)
/** \brief 20,  */
#define REG_PPCA_CLB_MACO_SECT0_ROW             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_ROW*)0x43534020u)
/** \brief 24,  */
#define REG_PPCA_CLB_MACO_SECT1_ROW             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_ROW*)0x43534024u)
/** \brief 28,  */
#define REG_PPCA_CLB_MACO_SECT2_ROW             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_ROW*)0x43534028u)
/** \brief 30, Interrupt Request Register */
#define REG_PPCA_CLB_MACO_INTR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_INTR*)0x43534030u)
/** \brief 34, Interrupt Set Request Register */
#define REG_PPCA_CLB_MACO_INTR_SET              /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_INTR_SET*)0x43534034u)
/** \brief 38, Interrupt Mask Register */
#define REG_PPCA_CLB_MACO_INTR_MASK             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_INTR_MASK*)0x43534038u)
/** \brief 3C, Interrupt Masked Register */
#define REG_PPCA_CLB_MACO_INTR_MASKED           /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_INTR_MASKED*)0x4353403Cu)
/** \brief 100,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN0        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534100u)
/** \brief 104,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN1        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534104u)
/** \brief 108,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN2        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534108u)
/** \brief 10C,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN3        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x4353410Cu)
/** \brief 110,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN4        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534110u)
/** \brief 114,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN5        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534114u)
/** \brief 118,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN6        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534118u)
/** \brief 11C,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN7        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x4353411Cu)
/** \brief 120,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN8        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534120u)
/** \brief 124,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN9        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534124u)
/** \brief 128,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN10       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534128u)
/** \brief 12C,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN11       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x4353412Cu)
/** \brief 130,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN12       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534130u)
/** \brief 134,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN13       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534134u)
/** \brief 138,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN14       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534138u)
/** \brief 13C,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN15       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x4353413Cu)
/** \brief 140,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN16       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534140u)
/** \brief 144,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN17       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534144u)
/** \brief 148,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN18       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x43534148u)
/** \brief 14C,  */
#define REG_PPCA_CLB_MACO_SECT0_PATTERN19       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_PATTERN*)0x4353414Cu)
/** \brief 1FC,  */
#define REG_PPCA_CLB_MACO_SECT0_SAFE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT0_SAFE*)0x435341FCu)
/** \brief 200,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN0        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534200u)
/** \brief 204,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN1        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534204u)
/** \brief 208,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN2        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534208u)
/** \brief 20C,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN3        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x4353420Cu)
/** \brief 210,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN4        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534210u)
/** \brief 214,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN5        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534214u)
/** \brief 218,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN6        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534218u)
/** \brief 21C,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN7        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x4353421Cu)
/** \brief 220,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN8        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534220u)
/** \brief 224,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN9        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534224u)
/** \brief 228,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN10       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534228u)
/** \brief 22C,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN11       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x4353422Cu)
/** \brief 230,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN12       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534230u)
/** \brief 234,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN13       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534234u)
/** \brief 238,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN14       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534238u)
/** \brief 23C,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN15       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x4353423Cu)
/** \brief 240,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN16       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534240u)
/** \brief 244,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN17       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534244u)
/** \brief 248,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN18       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x43534248u)
/** \brief 24C,  */
#define REG_PPCA_CLB_MACO_SECT1_PATTERN19       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_PATTERN*)0x4353424Cu)
/** \brief 2FC,  */
#define REG_PPCA_CLB_MACO_SECT1_SAFE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT1_SAFE*)0x435342FCu)
/** \brief 300,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN0        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534300u)
/** \brief 304,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN1        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534304u)
/** \brief 308,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN2        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534308u)
/** \brief 30C,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN3        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x4353430Cu)
/** \brief 310,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN4        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534310u)
/** \brief 314,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN5        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534314u)
/** \brief 318,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN6        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534318u)
/** \brief 31C,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN7        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x4353431Cu)
/** \brief 320,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN8        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534320u)
/** \brief 324,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN9        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534324u)
/** \brief 328,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN10       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534328u)
/** \brief 32C,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN11       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x4353432Cu)
/** \brief 330,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN12       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534330u)
/** \brief 334,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN13       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534334u)
/** \brief 338,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN14       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534338u)
/** \brief 33C,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN15       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x4353433Cu)
/** \brief 340,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN16       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534340u)
/** \brief 344,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN17       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534344u)
/** \brief 348,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN18       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x43534348u)
/** \brief 34C,  */
#define REG_PPCA_CLB_MACO_SECT2_PATTERN19       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_PATTERN*)0x4353434Cu)
/** \brief 3FC,  */
#define REG_PPCA_CLB_MACO_SECT2_SAFE            /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_CLB_MACO_SECT2_SAFE*)0x435343FCu)
/** \brief 0,  */
#define REG_PPCA_MXCORDIC0_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CTL*)0x43540000u)
/** \brief 8, Module Identification Register */
#define REG_PPCA_MXCORDIC0_ID                   /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_ID*)0x43540008u)
/** \brief 10, Interrupt Cause Register */
#define REG_PPCA_MXCORDIC0_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_INTR*)0x43540010u)
/** \brief 14, Interrupt Set Register */
#define REG_PPCA_MXCORDIC0_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_INTR_SET*)0x43540014u)
/** \brief 18, Interrupt Mask Register */
#define REG_PPCA_MXCORDIC0_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_INTR_MASK*)0x43540018u)
/** \brief 1C, Interrupt Masked Register */
#define REG_PPCA_MXCORDIC0_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_INTR_MASKED*)0x4354001Cu)
/** \brief 40, CORDIC Keep Register */
#define REG_PPCA_MXCORDIC0_KEEP                 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_KEEP*)0x43540040u)
/** \brief 44, CORDIC Control Register */
#define REG_PPCA_MXCORDIC0_CON                  /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CON*)0x43540044u)
/** \brief 48, CORDIC X Data Register */
#define REG_PPCA_MXCORDIC0_CORDX                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORDX*)0x43540048u)
/** \brief 4C, CORDIC Y Data Register */
#define REG_PPCA_MXCORDIC0_CORDY                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORDY*)0x4354004Cu)
/** \brief 50, CORDIC Z Data Register */
#define REG_PPCA_MXCORDIC0_CORDZ                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORDZ*)0x43540050u)
/** \brief 54, CORDIC X Result Register */
#define REG_PPCA_MXCORDIC0_CORRX                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORRX*)0x43540054u)
/** \brief 58, CORDIC Y Result Register */
#define REG_PPCA_MXCORDIC0_CORRY                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORRY*)0x43540058u)
/** \brief 5C, CORDIC Z Result Register */
#define REG_PPCA_MXCORDIC0_CORRZ                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORRZ*)0x4354005Cu)
/** \brief 60, CORDIC Status Register */
#define REG_PPCA_MXCORDIC0_STAT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_STAT*)0x43540060u)
/** \brief 64, CORDIC Start Command Register */
#define REG_PPCA_MXCORDIC0_START_CMD            /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_START_CMD*)0x43540064u)
/** \brief 0,  */
#define REG_PPCA_MXCORDIC1_CTL                  /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CTL*)0x43550000u)
/** \brief 8, Module Identification Register */
#define REG_PPCA_MXCORDIC1_ID                   /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_ID*)0x43550008u)
/** \brief 10, Interrupt Cause Register */
#define REG_PPCA_MXCORDIC1_INTR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_INTR*)0x43550010u)
/** \brief 14, Interrupt Set Register */
#define REG_PPCA_MXCORDIC1_INTR_SET             /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_INTR_SET*)0x43550014u)
/** \brief 18, Interrupt Mask Register */
#define REG_PPCA_MXCORDIC1_INTR_MASK            /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_INTR_MASK*)0x43550018u)
/** \brief 1C, Interrupt Masked Register */
#define REG_PPCA_MXCORDIC1_INTR_MASKED          /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_INTR_MASKED*)0x4355001Cu)
/** \brief 40, CORDIC Keep Register */
#define REG_PPCA_MXCORDIC1_KEEP                 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_KEEP*)0x43550040u)
/** \brief 44, CORDIC Control Register */
#define REG_PPCA_MXCORDIC1_CON                  /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CON*)0x43550044u)
/** \brief 48, CORDIC X Data Register */
#define REG_PPCA_MXCORDIC1_CORDX                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORDX*)0x43550048u)
/** \brief 4C, CORDIC Y Data Register */
#define REG_PPCA_MXCORDIC1_CORDY                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORDY*)0x4355004Cu)
/** \brief 50, CORDIC Z Data Register */
#define REG_PPCA_MXCORDIC1_CORDZ                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORDZ*)0x43550050u)
/** \brief 54, CORDIC X Result Register */
#define REG_PPCA_MXCORDIC1_CORRX                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORRX*)0x43550054u)
/** \brief 58, CORDIC Y Result Register */
#define REG_PPCA_MXCORDIC1_CORRY                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORRY*)0x43550058u)
/** \brief 5C, CORDIC Z Result Register */
#define REG_PPCA_MXCORDIC1_CORRZ                /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_CORRZ*)0x4355005Cu)
/** \brief 60, CORDIC Status Register */
#define REG_PPCA_MXCORDIC1_STAT                 /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_STAT*)0x43550060u)
/** \brief 64, CORDIC Start Command Register */
#define REG_PPCA_MXCORDIC1_START_CMD            /*lint --e(923, 9078)*/ (*(volatile Ifx_MXCORDIC_START_CMD*)0x43550064u)
/** \brief 0, ADC Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CTL*)0x43580000u)
/** \brief 4, ADC Configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNFG*)0x43580004u)
/** \brief 8, ADC Aux and ALT Aux Configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_ALT_AUX_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG*)0x43580008u)
/** \brief 10, ADC Conversion Configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_CNV_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNV_CNFG*)0x43580010u)
/** \brief 14, ADC Sampling Mask register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_SAMPLING_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SAMPLING_MASK*)0x43580014u)
/** \brief 18, ADC Channel Trigger register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_TRIGGER*)0x43580018u)
/** \brief 20, ADC Channels group 0 to be converted Configurations registers */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_CH_CNFG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG0*)0x43580020u)
/** \brief 24, ADC Channels group 1 to be converted Configurations registers */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_CH_CNFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG1*)0x43580024u)
/** \brief 30, ADC Auxiliary Channels to be converted configuration registers */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_CH_CNFG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG0*)0x43580030u)
/** \brief 34, ADC Auxiliary Channels to be converted configuration registers */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_CH_CNFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG1*)0x43580034u)
/** \brief 38, ADC AUX Alternate Channel to be converted configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_ALT_AUX_CH_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_CH_CNFG*)0x43580038u)
/** \brief 40, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43580040u)
/** \brief 44, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_DATA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43580044u)
/** \brief 48, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_DATA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43580048u)
/** \brief 4C, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_DATA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x4358004Cu)
/** \brief 50, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_DATA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43580050u)
/** \brief 54, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_DATA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43580054u)
/** \brief 58, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_DATA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43580058u)
/** \brief 5C, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_DATA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x4358005Cu)
/** \brief 80, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x43580080u)
/** \brief 84, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_DATA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x43580084u)
/** \brief 88, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_DATA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x43580088u)
/** \brief 8C, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_DATA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x4358008Cu)
/** \brief 90, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_DATA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x43580090u)
/** \brief 94, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_DATA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x43580094u)
/** \brief 98, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_DATA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x43580098u)
/** \brief 9C, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_AUX_DATA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x4358009Cu)
/** \brief C0, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_ALT_AUX_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435800C0u)
/** \brief C4, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_ALT_AUX_DATA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435800C4u)
/** \brief C8, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_ALT_AUX_DATA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435800C8u)
/** \brief CC, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_ALT_AUX_DATA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435800CCu)
/** \brief D0, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_ALT_AUX_DATA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435800D0u)
/** \brief D4, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_ALT_AUX_DATA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435800D4u)
/** \brief D8, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_ALT_AUX_DATA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435800D8u)
/** \brief DC, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_ALT_AUX_DATA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435800DCu)
/** \brief E0, Interrupt request register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_INTR /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR*)0x435800E0u)
/** \brief E4, Interrupt set request register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_INTR_SET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_SET*)0x435800E4u)
/** \brief E8, Interrupt mask register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_INTR_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASK*)0x435800E8u)
/** \brief EC, Interrupt masked request register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_INTR_MASKED /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASKED*)0x435800ECu)
/** \brief F0, ADC Channel Signed and Unsigned configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_SIGN_UNSIGN_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SIGN_UNSIGN_CNFG*)0x435800F0u)
/** \brief F4, AUX Channel Signed and Unsigned configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_AUX_SIGN_UNSIGN_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_SIGN_UNSIGN_CNFG*)0x435800F4u)
/** \brief F8, AUX Alternate Channel Signed and Unsigned configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_AUX_ALT_SIGN_UNSIGN_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_ALT_SIGN_UNSIGN_CNFG*)0x435800F8u)
/** \brief 100, SARADC STARTUP Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_STARTUPCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_STARTUPCTRL*)0x43580100u)
/** \brief 104, SARADC CALIBRATION Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_ADC_ADC_CALCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL*)0x43580104u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE_AFE_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CTL*)0x43580200u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE_AFE_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG*)0x43580204u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE_AFE_CALGAINAFE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_1*)0x43580208u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE_AFE_CALGAINAFE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_2*)0x4358020Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE_AFE_CALGAINAFE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_3*)0x43580210u)
/** \brief 14,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE_AFE_CALGAINAFE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_4*)0x43580214u)
/** \brief 18,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE_AFE_CALOFFSETAFE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_1*)0x43580218u)
/** \brief 1C,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE_AFE_CALOFFSETAFE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_2*)0x4358021Cu)
/** \brief 20,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE_AFE_CALOFFSETAFE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_3*)0x43580220u)
/** \brief 24,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_SLICE0_AFE_AFE_CALOFFSETAFE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_4*)0x43580224u)
/** \brief 0, Low Pass Filter Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_AFLT_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL*)0x43581000u)
/** \brief 4, ADC Filter Module Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_AFLT_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG*)0x43581004u)
/** \brief 10, Low Pass Filter Bandwidth configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_LPF_ALFA /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA*)0x43581010u)
/** \brief 14, Low Pass Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_LPF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT*)0x43581014u)
/** \brief 20, CIC3 Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_CICF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG*)0x43581020u)
/** \brief 24, CIC3 Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_CICF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT*)0x43581024u)
/** \brief 28, CIC3 Upper bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_CICF_UB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH*)0x43581028u)
/** \brief 2C, CIC3 Lower bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_CICF_LB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH*)0x4358102Cu)
/** \brief 30, Average Filter CTL register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_AVGF_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL*)0x43581030u)
/** \brief 34, Average Filter Configuration Register (N,M,K) */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_AVGF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG*)0x43581034u)
/** \brief 38, Average Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_AVGF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT*)0x43581038u)
/** \brief 40, Linear Interpolator Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_LIF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG*)0x43581040u)
/** \brief 44, Linear Interpolator Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_LIF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT*)0x43581044u)
/** \brief 50, Median Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_MED_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG*)0x43581050u)
/** \brief 54, Median Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_MED_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT*)0x43581054u)
/** \brief 60, ADC Min Max detect value Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT0_ADC_MIN_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX*)0x43581060u)
/** \brief 0, Low Pass Filter Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_AFLT_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL*)0x43581100u)
/** \brief 4, ADC Filter Module Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_AFLT_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG*)0x43581104u)
/** \brief 10, Low Pass Filter Bandwidth configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_LPF_ALFA /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA*)0x43581110u)
/** \brief 14, Low Pass Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_LPF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT*)0x43581114u)
/** \brief 20, CIC3 Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_CICF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG*)0x43581120u)
/** \brief 24, CIC3 Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_CICF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT*)0x43581124u)
/** \brief 28, CIC3 Upper bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_CICF_UB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH*)0x43581128u)
/** \brief 2C, CIC3 Lower bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_CICF_LB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH*)0x4358112Cu)
/** \brief 30, Average Filter CTL register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_AVGF_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL*)0x43581130u)
/** \brief 34, Average Filter Configuration Register (N,M,K) */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_AVGF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG*)0x43581134u)
/** \brief 38, Average Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_AVGF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT*)0x43581138u)
/** \brief 40, Linear Interpolator Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_LIF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG*)0x43581140u)
/** \brief 44, Linear Interpolator Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_LIF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT*)0x43581144u)
/** \brief 50, Median Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_MED_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG*)0x43581150u)
/** \brief 54, Median Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_MED_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT*)0x43581154u)
/** \brief 60, ADC Min Max detect value Register */
#define REG_PPCA_ATOPSS_ADC_GRP0_AFLT1_ADC_MIN_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX*)0x43581160u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP0_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43581400u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP0_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43581404u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP0_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43581408u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP0_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358140Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP0_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43581410u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP1_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43581500u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP1_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43581504u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP1_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43581508u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP1_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358150Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP1_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43581510u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP2_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43581600u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP2_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43581604u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP2_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43581608u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP2_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358160Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP2_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43581610u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP3_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43581700u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP3_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43581704u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP3_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43581708u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP3_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358170Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_DCMP3_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43581710u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_IDAC_IDAC_CTL  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CTL*)0x43581800u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_IDAC_IDAC_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG*)0x43581804u)
/** \brief 0, AREF control */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_AREF_CTL  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL*)0x43581900u)
/** \brief 8, Analog Voltage Status */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_VDDA_STATUS /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VDDA_STATUS*)0x43581908u)
/** \brief C, Analog Control */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_AREF_ANA_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_ANA_CTL*)0x4358190Cu)
/** \brief 10, VREF Trim bits */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_VREF_TRIM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM0*)0x43581910u)
/** \brief 14, VREF Trim bits */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_VREF_TRIM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM1*)0x43581914u)
/** \brief 18, VREF Trim bits */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_VREF_TRIM2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM2*)0x43581918u)
/** \brief 1C, VREF Trim bits */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_VREF_TRIM3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM3*)0x4358191Cu)
/** \brief 20, IZTAT Trim bits */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_IZTAT_TRIM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM0*)0x43581920u)
/** \brief 24, IZTAT Trim bits */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_IZTAT_TRIM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM1*)0x43581924u)
/** \brief 28, IPTAT Trim bits */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_IPTAT_TRIM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM0*)0x43581928u)
/** \brief 2C, 0 */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_IPTAT_TRIM1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM1*)0x4358192Cu)
/** \brief 30, ICTAT Trim bits */
#define REG_PPCA_ATOPSS_ADC_GRP0_AREF_ICTAT_TRIM0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AREF_ICTAT_TRIM0*)0x43581930u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP0_GPI_GPI_CTL    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_GPI_GPI_CTL*)0x43581A00u)
/** \brief 0, ADC Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CTL*)0x43582000u)
/** \brief 4, ADC Configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNFG*)0x43582004u)
/** \brief 10, ADC Conversion Configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_CNV_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNV_CNFG*)0x43582010u)
/** \brief 14, ADC Sampling Mask register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_SAMPLING_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SAMPLING_MASK*)0x43582014u)
/** \brief 18, ADC Channel Trigger register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_TRIGGER*)0x43582018u)
/** \brief 20, ADC Channels group 0 to be converted Configurations registers */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_CH_CNFG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG0*)0x43582020u)
/** \brief 40, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43582040u)
/** \brief 44, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_DATA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43582044u)
/** \brief 48, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_DATA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43582048u)
/** \brief 4C, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_DATA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x4358204Cu)
/** \brief 80, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_AUX_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x43582080u)
/** \brief C0, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_ALT_AUX_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435820C0u)
/** \brief E0, Interrupt request register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_INTR /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR*)0x435820E0u)
/** \brief E4, Interrupt set request register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_INTR_SET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_SET*)0x435820E4u)
/** \brief E8, Interrupt mask register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_INTR_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASK*)0x435820E8u)
/** \brief EC, Interrupt masked request register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_INTR_MASKED /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASKED*)0x435820ECu)
/** \brief F0, ADC Channel Signed and Unsigned configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_SIGN_UNSIGN_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SIGN_UNSIGN_CNFG*)0x435820F0u)
/** \brief 100, SARADC STARTUP Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_STARTUPCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_STARTUPCTRL*)0x43582100u)
/** \brief 104, SARADC CALIBRATION Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_ADC_ADC_CALCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL*)0x43582104u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE_AFE_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CTL*)0x43582200u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE_AFE_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG*)0x43582204u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE_AFE_CALGAINAFE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_1*)0x43582208u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE_AFE_CALGAINAFE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_2*)0x4358220Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE_AFE_CALGAINAFE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_3*)0x43582210u)
/** \brief 14,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE_AFE_CALGAINAFE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_4*)0x43582214u)
/** \brief 18,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE_AFE_CALOFFSETAFE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_1*)0x43582218u)
/** \brief 1C,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE_AFE_CALOFFSETAFE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_2*)0x4358221Cu)
/** \brief 20,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE_AFE_CALOFFSETAFE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_3*)0x43582220u)
/** \brief 24,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_SLICE0_AFE_AFE_CALOFFSETAFE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_4*)0x43582224u)
/** \brief 0, Low Pass Filter Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_AFLT_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL*)0x43583000u)
/** \brief 4, ADC Filter Module Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_AFLT_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG*)0x43583004u)
/** \brief 10, Low Pass Filter Bandwidth configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_LPF_ALFA /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA*)0x43583010u)
/** \brief 14, Low Pass Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_LPF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT*)0x43583014u)
/** \brief 20, CIC3 Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_CICF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG*)0x43583020u)
/** \brief 24, CIC3 Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_CICF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT*)0x43583024u)
/** \brief 28, CIC3 Upper bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_CICF_UB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH*)0x43583028u)
/** \brief 2C, CIC3 Lower bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_CICF_LB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH*)0x4358302Cu)
/** \brief 30, Average Filter CTL register */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_AVGF_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL*)0x43583030u)
/** \brief 34, Average Filter Configuration Register (N,M,K) */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_AVGF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG*)0x43583034u)
/** \brief 38, Average Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_AVGF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT*)0x43583038u)
/** \brief 40, Linear Interpolator Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_LIF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG*)0x43583040u)
/** \brief 44, Linear Interpolator Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_LIF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT*)0x43583044u)
/** \brief 50, Median Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_MED_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG*)0x43583050u)
/** \brief 54, Median Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_MED_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT*)0x43583054u)
/** \brief 60, ADC Min Max detect value Register */
#define REG_PPCA_ATOPSS_ADC_GRP1_AFLT0_ADC_MIN_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX*)0x43583060u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_DCMP0_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43583400u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_DCMP0_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43583404u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_DCMP0_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43583408u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_DCMP0_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358340Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_DCMP0_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43583410u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_DCMP1_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43583500u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_DCMP1_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43583504u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_DCMP1_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43583508u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_DCMP1_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358350Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP1_DCMP1_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43583510u)
/** \brief 0, ADC Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CTL*)0x43584000u)
/** \brief 4, ADC Configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNFG*)0x43584004u)
/** \brief 10, ADC Conversion Configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_CNV_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNV_CNFG*)0x43584010u)
/** \brief 14, ADC Sampling Mask register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_SAMPLING_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SAMPLING_MASK*)0x43584014u)
/** \brief 18, ADC Channel Trigger register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_TRIGGER*)0x43584018u)
/** \brief 20, ADC Channels group 0 to be converted Configurations registers */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_CH_CNFG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG0*)0x43584020u)
/** \brief 40, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43584040u)
/** \brief 44, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_DATA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43584044u)
/** \brief 48, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_DATA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43584048u)
/** \brief 4C, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_DATA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x4358404Cu)
/** \brief 80, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_AUX_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x43584080u)
/** \brief C0, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_ALT_AUX_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435840C0u)
/** \brief E0, Interrupt request register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_INTR /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR*)0x435840E0u)
/** \brief E4, Interrupt set request register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_INTR_SET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_SET*)0x435840E4u)
/** \brief E8, Interrupt mask register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_INTR_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASK*)0x435840E8u)
/** \brief EC, Interrupt masked request register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_INTR_MASKED /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASKED*)0x435840ECu)
/** \brief F0, ADC Channel Signed and Unsigned configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_SIGN_UNSIGN_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SIGN_UNSIGN_CNFG*)0x435840F0u)
/** \brief 100, SARADC STARTUP Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_STARTUPCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_STARTUPCTRL*)0x43584100u)
/** \brief 104, SARADC CALIBRATION Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_ADC_ADC_CALCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL*)0x43584104u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE_AFE_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CTL*)0x43584200u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE_AFE_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG*)0x43584204u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE_AFE_CALGAINAFE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_1*)0x43584208u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE_AFE_CALGAINAFE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_2*)0x4358420Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE_AFE_CALGAINAFE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_3*)0x43584210u)
/** \brief 14,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE_AFE_CALGAINAFE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_4*)0x43584214u)
/** \brief 18,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE_AFE_CALOFFSETAFE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_1*)0x43584218u)
/** \brief 1C,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE_AFE_CALOFFSETAFE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_2*)0x4358421Cu)
/** \brief 20,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE_AFE_CALOFFSETAFE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_3*)0x43584220u)
/** \brief 24,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_SLICE0_AFE_AFE_CALOFFSETAFE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_4*)0x43584224u)
/** \brief 0, Low Pass Filter Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_AFLT_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL*)0x43585000u)
/** \brief 4, ADC Filter Module Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_AFLT_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG*)0x43585004u)
/** \brief 10, Low Pass Filter Bandwidth configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_LPF_ALFA /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA*)0x43585010u)
/** \brief 14, Low Pass Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_LPF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT*)0x43585014u)
/** \brief 20, CIC3 Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_CICF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG*)0x43585020u)
/** \brief 24, CIC3 Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_CICF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT*)0x43585024u)
/** \brief 28, CIC3 Upper bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_CICF_UB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH*)0x43585028u)
/** \brief 2C, CIC3 Lower bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_CICF_LB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH*)0x4358502Cu)
/** \brief 30, Average Filter CTL register */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_AVGF_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL*)0x43585030u)
/** \brief 34, Average Filter Configuration Register (N,M,K) */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_AVGF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG*)0x43585034u)
/** \brief 38, Average Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_AVGF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT*)0x43585038u)
/** \brief 40, Linear Interpolator Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_LIF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG*)0x43585040u)
/** \brief 44, Linear Interpolator Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_LIF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT*)0x43585044u)
/** \brief 50, Median Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_MED_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG*)0x43585050u)
/** \brief 54, Median Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_MED_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT*)0x43585054u)
/** \brief 60, ADC Min Max detect value Register */
#define REG_PPCA_ATOPSS_ADC_GRP2_AFLT0_ADC_MIN_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX*)0x43585060u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_DCMP0_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43585400u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_DCMP0_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43585404u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_DCMP0_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43585408u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_DCMP0_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358540Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_DCMP0_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43585410u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_DCMP1_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43585500u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_DCMP1_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43585504u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_DCMP1_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43585508u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_DCMP1_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358550Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP2_DCMP1_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43585510u)
/** \brief 0, ADC Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CTL*)0x43586000u)
/** \brief 4, ADC Configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNFG*)0x43586004u)
/** \brief 8, ADC Aux and ALT Aux Configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_AUX_ALT_AUX_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG*)0x43586008u)
/** \brief 10, ADC Conversion Configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_CNV_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNV_CNFG*)0x43586010u)
/** \brief 14, ADC Sampling Mask register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_SAMPLING_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SAMPLING_MASK*)0x43586014u)
/** \brief 18, ADC Channel Trigger register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_TRIGGER*)0x43586018u)
/** \brief 20, ADC Channels group 0 to be converted Configurations registers */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_CH_CNFG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG0*)0x43586020u)
/** \brief 24, ADC Channels group 1 to be converted Configurations registers */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_CH_CNFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG1*)0x43586024u)
/** \brief 38, ADC AUX Alternate Channel to be converted configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_ALT_AUX_CH_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_CH_CNFG*)0x43586038u)
/** \brief 40, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43586040u)
/** \brief 44, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_DATA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43586044u)
/** \brief 48, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_DATA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43586048u)
/** \brief 4C, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_DATA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x4358604Cu)
/** \brief 50, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_DATA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43586050u)
/** \brief 54, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_DATA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43586054u)
/** \brief 58, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_DATA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x43586058u)
/** \brief 5C, ADC Converted Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_DATA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA*)0x4358605Cu)
/** \brief 80, ADC Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_AUX_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA*)0x43586080u)
/** \brief C0, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_ALT_AUX_DATA0 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435860C0u)
/** \brief C4, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_ALT_AUX_DATA1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435860C4u)
/** \brief C8, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_ALT_AUX_DATA2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435860C8u)
/** \brief CC, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_ALT_AUX_DATA3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435860CCu)
/** \brief D0, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_ALT_AUX_DATA4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435860D0u)
/** \brief D4, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_ALT_AUX_DATA5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435860D4u)
/** \brief D8, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_ALT_AUX_DATA6 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435860D8u)
/** \brief DC, ADC Alternate Auxiliary Data Channels */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_ALT_AUX_DATA7 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA*)0x435860DCu)
/** \brief E0, Interrupt request register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_INTR /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR*)0x435860E0u)
/** \brief E4, Interrupt set request register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_INTR_SET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_SET*)0x435860E4u)
/** \brief E8, Interrupt mask register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_INTR_MASK /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASK*)0x435860E8u)
/** \brief EC, Interrupt masked request register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_INTR_MASKED /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASKED*)0x435860ECu)
/** \brief F0, ADC Channel Signed and Unsigned configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_SIGN_UNSIGN_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SIGN_UNSIGN_CNFG*)0x435860F0u)
/** \brief F8, AUX Alternate Channel Signed and Unsigned configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_AUX_ALT_SIGN_UNSIGN_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_ALT_SIGN_UNSIGN_CNFG*)0x435860F8u)
/** \brief 100, SARADC STARTUP Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_STARTUPCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_STARTUPCTRL*)0x43586100u)
/** \brief 104, SARADC CALIBRATION Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_ADC_ADC_CALCTRL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL*)0x43586104u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE_AFE_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CTL*)0x43586200u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE_AFE_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG*)0x43586204u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE_AFE_CALGAINAFE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_1*)0x43586208u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE_AFE_CALGAINAFE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_2*)0x4358620Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE_AFE_CALGAINAFE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_3*)0x43586210u)
/** \brief 14,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE_AFE_CALGAINAFE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_4*)0x43586214u)
/** \brief 18,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE_AFE_CALOFFSETAFE_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_1*)0x43586218u)
/** \brief 1C,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE_AFE_CALOFFSETAFE_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_2*)0x4358621Cu)
/** \brief 20,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE_AFE_CALOFFSETAFE_3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_3*)0x43586220u)
/** \brief 24,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_SLICE0_AFE_AFE_CALOFFSETAFE_4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_4*)0x43586224u)
/** \brief 0, Low Pass Filter Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_AFLT_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL*)0x43587000u)
/** \brief 4, ADC Filter Module Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_AFLT_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG*)0x43587004u)
/** \brief 10, Low Pass Filter Bandwidth configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_LPF_ALFA /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA*)0x43587010u)
/** \brief 14, Low Pass Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_LPF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT*)0x43587014u)
/** \brief 20, CIC3 Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_CICF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG*)0x43587020u)
/** \brief 24, CIC3 Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_CICF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT*)0x43587024u)
/** \brief 28, CIC3 Upper bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_CICF_UB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH*)0x43587028u)
/** \brief 2C, CIC3 Lower bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_CICF_LB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH*)0x4358702Cu)
/** \brief 30, Average Filter CTL register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_AVGF_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL*)0x43587030u)
/** \brief 34, Average Filter Configuration Register (N,M,K) */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_AVGF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG*)0x43587034u)
/** \brief 38, Average Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_AVGF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT*)0x43587038u)
/** \brief 40, Linear Interpolator Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_LIF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG*)0x43587040u)
/** \brief 44, Linear Interpolator Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_LIF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT*)0x43587044u)
/** \brief 50, Median Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_MED_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG*)0x43587050u)
/** \brief 54, Median Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_MED_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT*)0x43587054u)
/** \brief 60, ADC Min Max detect value Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT0_ADC_MIN_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX*)0x43587060u)
/** \brief 0, Low Pass Filter Control Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_AFLT_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL*)0x43587100u)
/** \brief 4, ADC Filter Module Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_AFLT_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG*)0x43587104u)
/** \brief 10, Low Pass Filter Bandwidth configuration Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_LPF_ALFA /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA*)0x43587110u)
/** \brief 14, Low Pass Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_LPF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT*)0x43587114u)
/** \brief 20, CIC3 Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_CICF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG*)0x43587120u)
/** \brief 24, CIC3 Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_CICF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT*)0x43587124u)
/** \brief 28, CIC3 Upper bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_CICF_UB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH*)0x43587128u)
/** \brief 2C, CIC3 Lower bound threshold register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_CICF_LB_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH*)0x4358712Cu)
/** \brief 30, Average Filter CTL register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_AVGF_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL*)0x43587130u)
/** \brief 34, Average Filter Configuration Register (N,M,K) */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_AVGF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG*)0x43587134u)
/** \brief 38, Average Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_AVGF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT*)0x43587138u)
/** \brief 40, Linear Interpolator Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_LIF_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG*)0x43587140u)
/** \brief 44, Linear Interpolator Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_LIF_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT*)0x43587144u)
/** \brief 50, Median Filter Configuration register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_MED_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG*)0x43587150u)
/** \brief 54, Median Filter Data Output */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_MED_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT*)0x43587154u)
/** \brief 60, ADC Min Max detect value Register */
#define REG_PPCA_ATOPSS_ADC_GRP3_AFLT1_ADC_MIN_MAX /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX*)0x43587160u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP0_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43587400u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP0_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43587404u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP0_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43587408u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP0_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358740Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP0_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43587410u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP1_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43587500u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP1_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43587504u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP1_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43587508u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP1_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358750Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP1_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43587510u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP2_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43587600u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP2_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43587604u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP2_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43587608u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP2_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358760Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP2_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43587610u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP3_DCMP_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL*)0x43587700u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP3_DCMP_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG*)0x43587704u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP3_DCMP_TRIGGER /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER*)0x43587708u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP3_DCMP_TH  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH*)0x4358770Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_ADC_GRP3_DCMP3_DCMP_ACC_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH*)0x43587710u)
/** \brief 0, Analog Comparator Control Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE0_DCSG_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL*)0x43588000u)
/** \brief 4, Analog Comparator Configuration Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE0_DCSG_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG*)0x43588004u)
/** \brief 8, Analog Comparator Threshold configuration register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE0_DCSG_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH*)0x43588008u)
/** \brief 0, Analog Comparator Control Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE1_DCSG_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL*)0x43588100u)
/** \brief 4, Analog Comparator Configuration Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE1_DCSG_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG*)0x43588104u)
/** \brief 8, Analog Comparator Threshold configuration register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE1_DCSG_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH*)0x43588108u)
/** \brief 0, Analog Comparator Control Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE2_DCSG_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL*)0x43588200u)
/** \brief 4, Analog Comparator Configuration Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE2_DCSG_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG*)0x43588204u)
/** \brief 8, Analog Comparator Threshold configuration register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE2_DCSG_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH*)0x43588208u)
/** \brief 0, Analog Comparator Control Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE3_DCSG_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL*)0x43588300u)
/** \brief 4, Analog Comparator Configuration Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE3_DCSG_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG*)0x43588304u)
/** \brief 8, Analog Comparator Threshold configuration register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE3_DCSG_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH*)0x43588308u)
/** \brief 0, Analog Comparator Control Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE4_DCSG_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL*)0x43588400u)
/** \brief 4, Analog Comparator Configuration Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE4_DCSG_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG*)0x43588404u)
/** \brief 8, Analog Comparator Threshold configuration register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE4_DCSG_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH*)0x43588408u)
/** \brief 0, Analog Comparator Control Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE5_DCSG_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL*)0x43588500u)
/** \brief 4, Analog Comparator Configuration Register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE5_DCSG_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG*)0x43588504u)
/** \brief 8, Analog Comparator Threshold configuration register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLICE5_DCSG_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH*)0x43588508u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN0_DCSG_SLGEN_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CTL*)0x43588600u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN0_DCSG_SLGEN_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG*)0x43588604u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN0_DCSG_SLGEN_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT*)0x43588608u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN0_DCSG_SLGEN_TARGET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET*)0x4358860Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN0_DCSG_SLGEN_INIT_BUF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_BUF*)0x43588610u)
/** \brief 14,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN0_DCSG_SLGEN_TARGET_BUF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_BUF*)0x43588614u)
/** \brief 18,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN0_DCSG_SLGEN_STEP /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_STEP*)0x43588618u)
/** \brief 1C,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN0_DCSG_SLGEN_MATCH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_MATCH*)0x4358861Cu)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN1_DCSG_SLGEN_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CTL*)0x43588700u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN1_DCSG_SLGEN_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG*)0x43588704u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN1_DCSG_SLGEN_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT*)0x43588708u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN1_DCSG_SLGEN_TARGET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET*)0x4358870Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN1_DCSG_SLGEN_INIT_BUF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_BUF*)0x43588710u)
/** \brief 14,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN1_DCSG_SLGEN_TARGET_BUF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_BUF*)0x43588714u)
/** \brief 18,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN1_DCSG_SLGEN_STEP /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_STEP*)0x43588718u)
/** \brief 1C,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_SLGEN1_DCSG_SLGEN_MATCH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_MATCH*)0x4358871Cu)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DCSG_BLANK_DCSG_BLANK_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK_DCSG_BLANK_CTL*)0x43588C00u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CTL*)0x43589000u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG*)0x43589004u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_DOUT*)0x43589008u)
/** \brief C, DAC Offset CNFG1 register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_OFFSET_CNFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG1*)0x4358900Cu)
/** \brief 10, DAC Gain CNFG4 register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_OFFSET_CNFG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG2*)0x43589010u)
/** \brief 14, 0 */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_OFFSET_CNFG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG3*)0x43589014u)
/** \brief 18, 0 */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_OFFSET_CNFG4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG4*)0x43589018u)
/** \brief 1C, 0 */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_OFFSET_CNFG5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG5*)0x4358901Cu)
/** \brief 20, DAC Gain CNFG1 register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_GAIN_CNFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG1*)0x43589020u)
/** \brief 24, DAC Gain CNFG2 register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_GAIN_CNFG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG2*)0x43589024u)
/** \brief 28, DAC Gain CNFG3 register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_GAIN_CNFG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG3*)0x43589028u)
/** \brief 2C, DAC Gain CNFG4 register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_GAIN_CNFG4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG4*)0x4358902Cu)
/** \brief 30, DAC Gain CNFG5 register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_DAC_GAIN_CNFG5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG5*)0x43589030u)
/** \brief 34, Buffer Offset 1 register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_BUFFER_OFFSET_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_1*)0x43589034u)
/** \brief 38, Buffer Offset 2 register */
#define REG_PPCA_ATOPSS_DCSG_GRP0_DAC_R2R_BUFFER_OFFSET_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_2*)0x43589038u)
/** \brief 0, Analog Comparator Control Register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE0_DCSG_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL*)0x4358A000u)
/** \brief 4, Analog Comparator Configuration Register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE0_DCSG_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG*)0x4358A004u)
/** \brief 8, Analog Comparator Threshold configuration register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE0_DCSG_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH*)0x4358A008u)
/** \brief 0, Analog Comparator Control Register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE1_DCSG_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL*)0x4358A100u)
/** \brief 4, Analog Comparator Configuration Register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE1_DCSG_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG*)0x4358A104u)
/** \brief 8, Analog Comparator Threshold configuration register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE1_DCSG_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH*)0x4358A108u)
/** \brief 0, Analog Comparator Control Register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE2_DCSG_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL*)0x4358A200u)
/** \brief 4, Analog Comparator Configuration Register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE2_DCSG_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG*)0x4358A204u)
/** \brief 8, Analog Comparator Threshold configuration register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLICE2_DCSG_TH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH*)0x4358A208u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLGEN0_DCSG_SLGEN_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CTL*)0x4358A600u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLGEN0_DCSG_SLGEN_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG*)0x4358A604u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLGEN0_DCSG_SLGEN_INIT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT*)0x4358A608u)
/** \brief C,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLGEN0_DCSG_SLGEN_TARGET /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET*)0x4358A60Cu)
/** \brief 10,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLGEN0_DCSG_SLGEN_INIT_BUF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_BUF*)0x4358A610u)
/** \brief 14,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLGEN0_DCSG_SLGEN_TARGET_BUF /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_BUF*)0x4358A614u)
/** \brief 18,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLGEN0_DCSG_SLGEN_STEP /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_STEP*)0x4358A618u)
/** \brief 1C,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_SLGEN0_DCSG_SLGEN_MATCH /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_MATCH*)0x4358A61Cu)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DCSG_BLANK_DCSG_BLANK_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK_DCSG_BLANK_CTL*)0x4358AC00u)
/** \brief 0,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_CTL /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CTL*)0x4358B000u)
/** \brief 4,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_CNFG /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG*)0x4358B004u)
/** \brief 8,  */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_DOUT /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_DOUT*)0x4358B008u)
/** \brief C, DAC Offset CNFG1 register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_OFFSET_CNFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG1*)0x4358B00Cu)
/** \brief 10, DAC Gain CNFG4 register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_OFFSET_CNFG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG2*)0x4358B010u)
/** \brief 14, 0 */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_OFFSET_CNFG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG3*)0x4358B014u)
/** \brief 18, 0 */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_OFFSET_CNFG4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG4*)0x4358B018u)
/** \brief 1C, 0 */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_OFFSET_CNFG5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG5*)0x4358B01Cu)
/** \brief 20, DAC Gain CNFG1 register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_GAIN_CNFG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG1*)0x4358B020u)
/** \brief 24, DAC Gain CNFG2 register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_GAIN_CNFG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG2*)0x4358B024u)
/** \brief 28, DAC Gain CNFG3 register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_GAIN_CNFG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG3*)0x4358B028u)
/** \brief 2C, DAC Gain CNFG4 register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_GAIN_CNFG4 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG4*)0x4358B02Cu)
/** \brief 30, DAC Gain CNFG5 register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_DAC_GAIN_CNFG5 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG5*)0x4358B030u)
/** \brief 34, Buffer Offset 1 register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_BUFFER_OFFSET_1 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_1*)0x4358B034u)
/** \brief 38, Buffer Offset 2 register */
#define REG_PPCA_ATOPSS_DCSG_GRP1_DAC_R2R_BUFFER_OFFSET_2 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_2*)0x4358B038u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPPCA_REG_H_ */
