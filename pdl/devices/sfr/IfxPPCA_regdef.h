/***************************************************************************//**
* \file IfxPPCA_regdef.h
*
* \brief
* PPCA Registers
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
* \defgroup IfxSfr_PPCA_Registers PPCA Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_PPCA_Registers_Bitfields Bitfields
* \ingroup IfxSfr_PPCA_Registers
*
* \defgroup IfxSfr_PPCA_Registers_union Register unions
* \ingroup IfxSfr_PPCA_Registers
*
* \defgroup IfxSfr_PPCA_Registers_struct Memory map
* \ingroup IfxSfr_PPCA_Registers
*
*******************************************************************************/

#ifndef _IFXPPCA_REGDEF_H_
#define _IFXPPCA_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_PPCA_Registers_Bitfields
 * \{  */
/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CTRL_Bits
{
    __IO Ifx_UReg_32Bit REMAP_MEM:1;            /**< \brief [0:0]   PPCA BusMatrix Remap Bit:
                                                                    0 = Normal DATA memory
                                                                    1 = Reduced DATA memory (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [3:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit PPCA_EN_ACTRSTN:1;      /**< \brief [4:4]   Enable/Disable PPCA_EN bit to reset PPCA
                                                                    non-retained (active) logic:
                                                                    0 = Disable
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit PPCA_EN_DEEPSLEEPRSTN:1; /**< \brief [5:5]   Enable/Disable PPCA_EN bit to reset PPCA
                                                                    retained logic:
                                                                    0 = Disable
                                                                    1 = Enable (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit PPCA_CLK_SH_DWN_EN:1;   /**< \brief [8:8]   PPCA Clock Shut Down Enable:
                                                                    0 = Disable Clock Shut Down
                                                                    1 = Enable Clock Shut Down (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [15:9]  \internal Reserved */
    __I  Ifx_UReg_32Bit VDDA_OK:1;              /**< \brief [16:16] PPCA VDDA Domain Voltage Status:
                                                                    0 = VDDA not in the functional operation voltage range
                                                                    1 = VDDA is in the functional operation voltage
                                                                    range (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [19:17] \internal Reserved */
    __IO Ifx_UReg_32Bit FAULT_STATUS:1;         /**< \brief [20:20] Reflect status of the Fault:
                                                                    0 = no fault
                                                                    1 = fault active
                                                                    Writing 1 on this bit clear the fault (rw) */
    __IO Ifx_UReg_32Bit CPU0_HRESP_ERROR_ENABLE:1; /**< \brief [21:21] CPU0 HRESP ERROR propagation as Fault
                                                                    Enable Control register
                                                                    0 = CPU0 HRESP ERROR FAULT Disable
                                                                    1 = CPU0 HRESP ERROR FAULT Enable (rw) */
    __IO Ifx_UReg_32Bit CPU1_HRESP_ERROR_ENABLE:1; /**< \brief [22:22] CPU1 HRESP ERROR propagation as Fault
                                                                    Enable Control register
                                                                    0 = CPU1 HRESP ERROR FAULT Disable
                                                                    1 = CPU1 HRESP ERROR FAULT Enable (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [27:23] \internal Reserved */
    __IO Ifx_UReg_32Bit DDFT_OUT_EN:1;          /**< \brief [28:28] Enable DDFT_OUT:
                                                                    0 = DDFT_OUT disable
                                                                    1 = DDFT_OUT enable (rw) */
    __IO Ifx_UReg_32Bit DDFT_IN_EN:1;           /**< \brief [29:29] Enable DDFT_IN:
                                                                    0 = DDFT_IN disable
                                                                    1 = DDFT_IN enable (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [30:30] \internal Reserved */
    __IO Ifx_UReg_32Bit PPCA_EN:1;              /**< \brief [31:31] PPCA Enable/Disable register
                                                                    0 = PPCA  disabled, all the internal clock are
                                                                    gated, all registers are reset
                                                                    1 = PPCA  enabled (rw) */
} Ifx_PPCA_CNFG_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_CNFG0_Bits
{
    __IO Ifx_UReg_32Bit PWM_SS0:1;              /**< \brief [0:0]   PPCA Configuration Register
                                                                    0 = PWM_SS0 assigned to CPU0
                                                                    1 = PWM_SS0 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit PWM_SS1:1;              /**< \brief [1:1]   PPCA Configuration Register
                                                                    0 = PWM_SS1 assigned to CPU0
                                                                    1 = PWM_SS1 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit PWM_SS2:1;              /**< \brief [2:2]   PPCA Configuration Register
                                                                    0 = PWM_SS2 assigned to CPU0
                                                                    1 = PWM_SS2 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit PWM_SS3:1;              /**< \brief [3:3]   PPCA Configuration Register
                                                                    0 = PWM_SS3 assigned to CPU0
                                                                    1 = PWM_SS3 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit HWFILT3P3Z_SS0:1;       /**< \brief [4:4]   PPCA Configuration Register
                                                                    0 = HWFILT3P3Z_SS0 assigned to CPU0
                                                                    1 = HWFILT3P3Z_SS0 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit HWFILT3P3Z_SS1:1;       /**< \brief [5:5]   PPCA Configuration Register
                                                                    0 = HWFILT3P3Z_SS1 assigned to CPU0
                                                                    1 = HWFILT3P3Z_SS1 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit ADC_MIRROR:1;           /**< \brief [6:6]   PPCA Configuration Register
                                                                    0 = ADC_MIRROR assigned to CPU0
                                                                    1 = ADC_MIRROR assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit CLB:1;                  /**< \brief [7:7]   PPCA Configuration Register
                                                                    0 = CLB assigned to CPU0
                                                                    1 = CLB assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit CORDIC_0:1;             /**< \brief [8:8]   PPCA Configuration Register
                                                                    0 = CORDIC_0 assigned to CPU0
                                                                    1 = CORDIC_0 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit CORDIC_1:1;             /**< \brief [9:9]   PPCA Configuration Register
                                                                    0 = CORDIC_1 assigned to CPU0
                                                                    1 = CORDIC_1 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit ADCGRP_0:1;             /**< \brief [10:10] PPCA Configuration Register
                                                                    0 = ADCGRP_0 assigned to CPU0
                                                                    1 = ADCGRP_0 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit ADCGRP_1:1;             /**< \brief [11:11] PPCA Configuration Register
                                                                    0 = ADCGRP_1 assigned to CPU0
                                                                    1 = ADCGRP_1 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit ADCGRP_2:1;             /**< \brief [12:12] PPCA Configuration Register
                                                                    0 = ADCGRP_2 assigned to CPU0
                                                                    1 = ADCGRP_2 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit ADCGRP_3:1;             /**< \brief [13:13] PPCA Configuration Register
                                                                    0 = ADCGRP_3 assigned to CPU0
                                                                    1 = ADCGRP_3 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit DCSGGRP_0:1;            /**< \brief [14:14] PPCA Configuration Register
                                                                    0 = DCSGGRP_0 assigned to CPU0
                                                                    1 = DCSGGRP_0 assigned to CPU1 (rw) */
    __IO Ifx_UReg_32Bit DCSGGRP_1:1;            /**< \brief [15:15] PPCA Configuration Register
                                                                    0 = DCSGGRP_1 assigned to CPU0
                                                                    1 = DCSGGRP_1 assigned to CPU1 (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_CNFG0_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_CNFG1_Bits
{
    __IO Ifx_UReg_32Bit CNFG_PUTY1:32;          /**< \brief [31:0]  PPCA EPU PU TYPE1 Resources Configuration Register
                                                                    CNFG_PUTY1[i] = 0, assign PUTY1 'i' to CPU0
                                                                    CNFG_PUTY1[i] = 1, assign PUTY1 'i' to CPU1 (rw) */
} Ifx_PPCA_CNFG_CNFG_CNFG1_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_CNFG2_Bits
{
    __IO Ifx_UReg_32Bit CNFG_PUTY2:16;          /**< \brief [15:0]  PPCA EPU Resources PU TYPE2 Configuration Register
                                                                    CNFG_PUTY2[i] = 0, assign PUTY2 'i' to CPU0
                                                                    CNFG_PUTY2[i] = 1, assign PUTY2 'i' to CPU1 (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_CNFG2_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_CNFG_TRACE_ATOP_Bits
{
    __IO Ifx_UReg_32Bit SEL_ADC_GRP:2;          /**< \brief [1:0]   Select ADC Group source for TRACE_ATOP:
                                                                    0 = ADC_GRP0
                                                                    1 = ADC_GRP1
                                                                    2 = ADC_GRP2
                                                                    3 = ADC_GRP3 (rw) */
    __IO Ifx_UReg_32Bit EN_TRACE_ATOP:1;        /**< \brief [2:2]   Enable TRACE_ATOP:
                                                                    0 = TRACE_ATOP disable
                                                                    1 = TRACE_ATOP enable (rw) */
    __IO Ifx_UReg_32Bit SEL_MODE:1;             /**< \brief [3:3]   Select TRACE_ATOP Mode:
                                                                    0 = TRACE_ATOP test mode (adc data splitted into
                                                                    two nibble, each one of 6 bit)
                                                                    1 = TRACE_ATOP functional mode (adc data planar
                                                                    exported) (rw) */
    __IO Ifx_UReg_32Bit POL:1;                  /**< \brief [4:4]   Invert polarity of STB_STRETCH signal:
                                                                    0 = Rising edge aligned with the data change
                                                                    1 = Falling edge aligned with data chnage (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_CNFG_TRACE_ATOP_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_CPU_CTRL_Bits
{
    __IO Ifx_UReg_32Bit CPU0_ENABLE:1;          /**< \brief [0:0]   CPU0 Enable Control register
                                                                    0 = CPU0 Clock Disable
                                                                    1 = CPU0 Clock Enable (rw) */
    __IO Ifx_UReg_32Bit CPU1_ENABLE:1;          /**< \brief [1:1]   CPU1 Enable Control register
                                                                    0 = CPU1 Clock disable
                                                                    1 = CPU0 Clock Enable (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_CPU_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_RST_CTRL_Bits
{
    __IO Ifx_UReg_32Bit CPU0_RST:1;             /**< \brief [0:0]   CPU0 Reset Control bit:
                                                                    0 = CPU under reset
                                                                    1 = CPU reset release (rw) */
    __IO Ifx_UReg_32Bit CPU1_RST:1;             /**< \brief [1:1]   CPU1 Reset Control bit:
                                                                    0 = Reset asserted
                                                                    1 = Reset released (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_RST_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL_Bits
{
    __IO Ifx_UReg_32Bit PPCAIN_SEL_SRC:6;       /**< \brief [5:0]   PPCA Input Selector Source (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit DS_SYNCSTAGE_PPCAIN_SEL:1; /**< \brief [8:8]   Disable PPCA Input Selector Output
                                                                    Synchronizer Stage
                                                                    0 = Synchronizer Stage Enabled (2 FF in sequence)
                                                                    1 = Synchronizer Stage Disabled (only 1 FF) (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL_Bits
{
    __IO Ifx_UReg_32Bit TR_PPCAIN_SEL_SRC:6;    /**< \brief [5:0]   PPCA Trigger Input Selector Source (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit DS_SYNCSTAGE_TR_PPCAIN_SEL:1; /**< \brief [8:8]   Disable PPCA Trigger Input Selector Output
                                                                    Synchronizer Stage
                                                                    0 = Synchronizer Stage Enabled (2 FF in sequence)
                                                                    1 = Synchronizer Stage Disabled (only 1 FF) (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_PPCAOUT_SEL_Bits
{
    __IO Ifx_UReg_32Bit PPCAOUT_SEL_SRC:1;      /**< \brief [0:0]   PPCA Output Selector Source
                                                                    0 = TCPWM output
                                                                    1 = CLB output (rw) */
    __IO Ifx_UReg_32Bit PPCAOUT_SEL_EN:1;       /**< \brief [1:1]   PPCA Output Selector Enabled
                                                                    0 = Disabled (output se to 0)
                                                                    1 = Enabled (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_PPCAOUT_SEL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_DDFTOUT_SEL_Bits
{
    __IO Ifx_UReg_32Bit DDFTOUT_SEL_SRC:9;      /**< \brief [8:0]   PPCA DDFT Output Selector (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_DDFTOUT_SEL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_CNFGEXTDBGCONN_Bits
{
    __IO Ifx_UReg_32Bit PWM_SS0:1;              /**< \brief [0:0]   PPCA EXT AHB IF Debug Conn Configuration Register
                                                                    0 = PWM_SS0 assigned to MainCPU
                                                                    1 = PWM_SS0 assigned to PPCA CPUs (rw) */
    __IO Ifx_UReg_32Bit PWM_SS1:1;              /**< \brief [1:1]   PPCA EXT AHB IF Debug Conn Configuration Register
                                                                    0 = PWM_SS1 assigned to Main CPU
                                                                    1 = PWM_SS1 assigned to PPCA CPUs (rw) */
    __IO Ifx_UReg_32Bit PWM_SS2:1;              /**< \brief [2:2]   PPCA EXT AHB IF Debug Conn Configuration Register
                                                                    0 = PWM_SS2 assigned to Main CPU
                                                                    1 = PWM_SS2 assigned to PPCA CPUs (rw) */
    __IO Ifx_UReg_32Bit PWM_SS3:1;              /**< \brief [3:3]   PPCA EXT AHB IF Debug Conn Configuration Register
                                                                    0 = PWM_SS3 assigned to Main CPU
                                                                    1 = PWM_SS3 assigned to PPCA CPUs (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [6:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit CLB:1;                  /**< \brief [7:7]   PPCA Configuration Register for ExtAHB
                                                                    Master IF
                                                                    0 = CLB assigned to Main CPU
                                                                    1 = CLB assigned to PPCA CPUs (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [9:8]   \internal Reserved */
    __IO Ifx_UReg_32Bit ADCGRP_0:1;             /**< \brief [10:10] PPCA EXT AHB IF Debug Conn Configuration Register
                                                                    0 = ADCGRP_0 assigned to Main CPU
                                                                    1 = ADCGRP_0 assigned to PPCA CPUs (rw) */
    __IO Ifx_UReg_32Bit ADCGRP_1:1;             /**< \brief [11:11] PPCA EXT AHB IF Debug Conn Configuration Register
                                                                    0 = ADCGRP_1 assigned to Main CPU
                                                                    1 = ADCGRP_1 assigned to PPCA CPUs (rw) */
    __IO Ifx_UReg_32Bit ADCGRP_2:1;             /**< \brief [12:12] PPCA EXT AHB IF Debug Conn Configuration Register
                                                                    0 = ADCGRP_2 assigned to Main CPU
                                                                    1 = ADCGRP_2 assigned to PPCA CPUs (rw) */
    __IO Ifx_UReg_32Bit ADCGRP_3:1;             /**< \brief [13:13] PPCA EXT AHB IF Debug Conn Configuration Register
                                                                    0 = ADCGRP_3 assigned to Main CPU
                                                                    1 = ADCGRP_3 assigned to PPCA CPUs (rw) */
    __IO Ifx_UReg_32Bit DCSGGRP_0:1;            /**< \brief [14:14] PPCA EXT AHB IF Debug Conn Configuration Register
                                                                    0 = DCSGGRP_0 assigned to Main CPU
                                                                    1 = DCSGGRP_0 assigned to PPCA CPUs (rw) */
    __IO Ifx_UReg_32Bit DCSGGRP_1:1;            /**< \brief [15:15] PPCA EXT AHB IF Debug Conn Configuration Register
                                                                    0 = DCSGGRP_1 assigned to Main CPU
                                                                    1 = DCSGGRP_1 assigned to PPCA CPUs (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_CNFGEXTDBGCONN_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_PPCAIO_IN_MON_Bits
{
    __I  Ifx_UReg_32Bit PPCAIO_IN_MON:16;       /**< \brief [15:0]  PPCAIO_IN Monitor register
                                                                    (it reflect the status of PPCAIO Input signals
                                                                    synchronized with PPCA CLK) (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_CNFG_CNFG_PPCAIO_IN_MON_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_SCRATCH0_Bits
{
    __IO Ifx_UReg_32Bit SCRATCH0:32;            /**< \brief [31:0]  PPCA Scratch register (rw) */
} Ifx_PPCA_CNFG_CNFG_SCRATCH0_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_CNFG_SCRATCH1_Bits
{
    __IO Ifx_UReg_32Bit SCRATCH1:32;            /**< \brief [31:0]  PPCA Scratch register (rw) */
} Ifx_PPCA_CNFG_CNFG_SCRATCH1_Bits;

/** \brief Interrupt Request Register */
typedef struct _Ifx_PPCA_CNFG_S2IRQ_INTR_Bits
{
    __IO Ifx_UReg_32Bit INTR:1;                 /**< \brief [0:0]   Interrupt requests (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CNFG_S2IRQ_INTR_Bits;

/** \brief Interrupt Set Request Register */
typedef struct _Ifx_PPCA_CNFG_S2IRQ_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit INTR_SET:1;             /**< \brief [0:0]   Write INTR_SET field with '1' to set
                                                                    corresponding INTR field.
                                                                    When read, this register reflects the interrupt
                                                                    request register. That is the INTR register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CNFG_S2IRQ_INTR_SET_Bits;

/** \brief Interrupt Mask Register */
typedef struct _Ifx_PPCA_CNFG_S2IRQ_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit INTR_MASK:1;            /**< \brief [0:0]   Mask for corresponding field in INTR register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CNFG_S2IRQ_INTR_MASK_Bits;

/** \brief Interrupt Masked Register */
typedef struct _Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit INTR_MASKED:1;          /**< \brief [0:0]   Logical AND of corresponding interrupt
                                                                    request (INTR) and mask fields (INTR_MASK). (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_ADCM_ADC_DATA_Bits
{
    __I  Ifx_UReg_32Bit ADC_DATA:32;            /**< \brief [31:0]  ADCs DATA Channel (ADC0_DATA,
                                                                    ADC0_AUX_DATA, ADC0_ALT_AUX_DATA,  ADC1_DATA,
                                                                    ADC2_DATA, ADC3_DATA, ADC3_AUX_DATA) (r) */
} Ifx_PPCA_CNFG_ADCM_ADC_DATA_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CNFG_DISPERI_DISPERI_Bits
{
    __IO Ifx_UReg_32Bit DS_CPU0:1;              /**< \brief [0:0]   disable CPU0
                                                                    1 = CPU0 is disable (i.e. Is kept under reset)
                                                                    0 = CPU0 is enabled (i.e.
                                                                    cpu_reset is controlled by CTL register) (rw) */
    __IO Ifx_UReg_32Bit DS_CPU1:1;              /**< \brief [1:1]   disable CPU1
                                                                    1 = CPU1 is disabled (i.e. Is kept under reset)
                                                                    0 = CPU1 is enabled (i.e.
                                                                    cpu_reset is controlled by CTL register) (rw) */
    __IO Ifx_UReg_32Bit DS_ADCGRP0:1;           /**< \brief [2:2]   disable ADC GROUP 0
                                                                    1 = ADCGRP0 AHB memory space access is disabled
                                                                    0 = ADCGRP0 AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_ADCGRP1:1;           /**< \brief [3:3]   disable ADC GROUP 1
                                                                    1 = ADCGRP1 AHB memory space access is disabled
                                                                    0 = ADCGRP1 AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_ADCGRP2:1;           /**< \brief [4:4]   disable ADC GROUP 2
                                                                    1 = ADCGRP2 AHB memory space access is disabled
                                                                    0 = ADCGRP2 AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_ADCGRP3:1;           /**< \brief [5:5]   disable ADC GROUP 3
                                                                    1 = ADCGRP3 AHB memory space access is disabled
                                                                    0 = ADCGRP3 AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit Ds_DCSG_GRP0:1;         /**< \brief [6:6]   disable GCSG GROUP 0
                                                                    1 = DCSGGRP0 AHB memory space access is disabled
                                                                    0 = DCSGGRP0 AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit Ds_DCSG_GRP1:1;         /**< \brief [7:7]   disable GCSG GROUP 1
                                                                    1 = DCSGGRP1 AHB memory space access is disabled
                                                                    0 = DCSGGRP1 AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_PWM_SS0:1;           /**< \brief [8:8]   disablePWM SS0
                                                                    1 = PWM SS0 AHB memory space access is disabled
                                                                    0 = PWM SS0 AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_PWM_SS0_MOTIF:1;     /**< \brief [9:9]   disablePWM SS0 MOTIF
                                                                    1 = PWM SS0 MOTIF AHB memory space access is disabled
                                                                    0 = PWM SS0 MOTIF AHB memory space access is
                                                                    enabled (rw) */
    __IO Ifx_UReg_32Bit DS_PWM_SS0_HR:1;        /**< \brief [10:10] disablePWM SS0 HR
                                                                    1 = PWM SS0 HR AHB memory space access is disabled
                                                                    0 = PWM SS0 HR AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_PWM_SS1:1;           /**< \brief [11:11] disablePWM SS1
                                                                    1 = PWM SS1 AHB memory space access is disabled
                                                                    0 = PWM SS1 AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_PWM_SS1_MOTIF:1;     /**< \brief [12:12] disablePWM SS1 MOTIF
                                                                    1 = PWM SS1 MOTIF AHB memory space access is disabled
                                                                    0 = PWM SS1 MOTIF AHB memory space access is
                                                                    enabled (rw) */
    __IO Ifx_UReg_32Bit DS_PWM_SS1_HR:1;        /**< \brief [13:13] disablePWM SS1 HR
                                                                    1 = PWM SS1 HR AHB memory space access is disabled
                                                                    0 = PWM SS1 HR AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_PWM_SS2:1;           /**< \brief [14:14] disablePWM SS2
                                                                    1 = PWM SS2 AHB memory space access is disabled
                                                                    0 = PWM SS2 AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_PWM_SS3:1;           /**< \brief [15:15] disablePWM SS3
                                                                    1 = PWM SS3 AHB memory space access is disabled
                                                                    0 = PWM SS3 AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_HWFILT_SS0:1;        /**< \brief [16:16] disable HWFILT3P3Z SS0
                                                                    1 = HWFILT3P3Z SS0 AHB memory space access is disabled
                                                                    0 = HWFILT3P3Z SS0 AHB memory space access is
                                                                    enabled (rw) */
    __IO Ifx_UReg_32Bit DS_HWFILT_SS1:1;        /**< \brief [17:17] disable HWFILT3P3Z SS1
                                                                    1 = HWFILT3P3Z SS1 AHB memory space access is disabled
                                                                    0 = HWFILT3P3Z SS1 AHB memory space access is
                                                                    enabled (rw) */
    __IO Ifx_UReg_32Bit DS_CLB:1;               /**< \brief [18:18] disable CLB
                                                                    1 = CLB  AHB memory space access is disabled
                                                                    0 = CLB  AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_CORDIC0:1;           /**< \brief [19:19] disable 1st CORDIC
                                                                    1 = 1st CORDIC AHB memory space access is disabled
                                                                    0 = 1st CORDIC AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit DS_CORDIC1:1;           /**< \brief [20:20] disable 2nd CORDIC
                                                                    1 = 2nd CORDIC AHB memory space access is disabled
                                                                    0 = 2nd CORDIC AHB memory space access is enabled (rw) */
    __IO Ifx_UReg_32Bit CNFG_CODE_MEM:1;        /**< \brief [21:21] Reflect instantiated CPUs Code Mem Size
                                                                    1 = Code Mem is 32kB
                                                                    0 = Code Mem is 64kB (rw) */
    __IO Ifx_UReg_32Bit CNFG_DATA_MEM:1;        /**< \brief [22:22] Reduce CPUs Data Mem by half (shared mem
                                                                    not included)
                                                                    1 = Data Mem is reduced by half
                                                                    0 = Data Mem is not reduced (rw) */
    __IO Ifx_UReg_32Bit DS_M2_M3_M4_MEM:1;      /**< \brief [23:23] Disable memory M2, M3, M4 (Light
                                                                    Configuration)
                                                                    1 = M2, M3, M4 memories accesses are disabled
                                                                    0 = M2, M3, M4 memories accesses are allowed (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PPCA_CNFG_DISPERI_DISPERI_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_EPU_CTRL_Bits
{
    __IO Ifx_UReg_32Bit EN_EXCLUSIVE_ACCESS:1;  /**< \brief [0:0]   Enable exclusive access to the EPU
                                                                    resources based on the provided resources
                                                                    allocation configuration:
                                                                    0 = disable (all EPU resources can be accessed by
                                                                    both CPU0 & CPU1, i.e.
                                                                    the configuration registers are ignored)
                                                                    1 = enable (CPU0 or CPU1 can access only its own
                                                                    resources, as specified by the configuration
                                                                    registers) (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [30:1]  \internal Reserved */
    __IO Ifx_UReg_32Bit EPU_EN:1;               /**< \brief [31:31] PPCA_EPU peripheral enable:
                                                                    0 = disable (only mmio CTRL registers is accessible)
                                                                    1 = enable (all AHB registers in the PPCA_EPU are
                                                                    accessible) (rw) */
} Ifx_PPCA_EPU_CTRL_Bits;

/** \brief Interrupt Source Selection Register */
typedef struct _Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL_Bits
{
    __IO Ifx_UReg_32Bit EPU_IRQ_SRCSEL:7;       /**< \brief [6:0]   select one COMBO output as interrupt source (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [30:7]  \internal Reserved */
    __IO Ifx_UReg_32Bit BYPASS_EPU_IRQ:1;       /**< \brief [31:31] Bypass EPU_IRQ formatter logic:
                                                                    0 = Formatter is active
                                                                    1 = Bypass Formatter (rw) */
} Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL_Bits;

/** \brief Interrupt Request Register */
typedef struct _Ifx_PPCA_EPU_EPU_IRQ_INTR_Bits
{
    __IO Ifx_UReg_32Bit EPU_INTR:1;             /**< \brief [0:0]   Interrupt requests of EPU (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_EPU_EPU_IRQ_INTR_Bits;

/** \brief Interrupt Set Request Register */
typedef struct _Ifx_PPCA_EPU_EPU_IRQ_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit EPU_INTR_SET:1;         /**< \brief [0:0]   Write INTR_SET field with '1' to set
                                                                    corresponding INTR field.
                                                                    When read, this register reflects the interrupt
                                                                    request register. That is the INTR register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_EPU_EPU_IRQ_INTR_SET_Bits;

/** \brief Interrupt Mask Register */
typedef struct _Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit EPU_INTR_MASK:1;        /**< \brief [0:0]   Mask for corresponding field in INTR register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK_Bits;

/** \brief Interrupt Masked Register */
typedef struct _Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit EPU_INTR_MASKED:1;      /**< \brief [0:0]   Logical AND of corresponding interrupt
                                                                    request (INTR) and mask fields (INTR_MASK). (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_EPU_EPU_PU_T1_CNFG_Bits
{
    __IO Ifx_UReg_32Bit PUT1_EN:2;              /**< \brief [1:0]   Enable/Disable and Bypass Configure of
                                                                    Processig Unit:
                                                                    0 = Disable
                                                                    1 = Enable Asynchronous Bypass
                                                                    2 = Enable Synchronous Bypass
                                                                    3 = Enable Processign Unit (rw) */
    __IO Ifx_UReg_32Bit PUT1_POL:1;             /**< \brief [2:2]   Enable/Disable Input Polarity inversion:
                                                                    0 = Disable
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit PUT1_IN_SEL:1;          /**< \brief [3:3]   Select Input of Processing Unit:
                                                                    0 = Level signal (Output Polarity Inversion)
                                                                    1 = Edge signal (Output of Edge Extractor which
                                                                    input is the Output of Polarity Inversion) (rw) */
    __IO Ifx_UReg_32Bit OPCODE:2;               /**< \brief [5:4]   Select PU processing function:
                                                                    0 = extracted rising edge and delay extracted pulse
                                                                    by configured DATA numbers of clock cycles (PU_TY1 7:0)
                                                                    1 = Maks input signal after detection of first
                                                                    valid transition by configured DATA numbers of
                                                                    clock cycles
                                                                    2 = Blank input signal after detection of first
                                                                    valid transition (rising and falling) by configured
                                                                    DATA numbers of clock cycles.
                                                                    3 = Debounce input signal by configured DATA
                                                                    threshold express in number of clock cycles (rw) */
    __IO Ifx_UReg_32Bit DATA:7;                 /**< \brief [12:6]   (rw) */
    __IO Ifx_UReg_32Bit PUT1_ENQ:1;             /**< \brief [13:13] Enable/DisableQualifier input:
                                                                    0 = Disable
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit PUT1_SEL_CONSTANT_IN:1; /**< \brief [14:14] Select CONSTANT_IN input to the PU units
                                                                    1 = Select CONSTANT_IN
                                                                    0 = Select EVIN (rw) */
    __IO Ifx_UReg_32Bit PUT1_CONSTANT_IN:1;     /**< \brief [15:15] Set the value of the CONSTANT_IN input signal
                                                                    0 = CONSTANT_IN set to 0
                                                                    1 = CONSTANT_IN set to 1 (rw) */
    __IO Ifx_UReg_32Bit PUT1_SRC_SEL:8;         /**< \brief [23:16] Input Source Selection (max 256) (rw) */
    __IO Ifx_UReg_32Bit PUT1_SRCQ_SEL:8;        /**< \brief [31:24] Qualifier Input Source Selection (max 256) (rw) */
} Ifx_PPCA_EPU_EPU_PU_T1_CNFG_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_EPU_EPU_PU_T2_CNFG_Bits
{
    __IO Ifx_UReg_32Bit PUT2_EN:2;              /**< \brief [1:0]   Enable/Disable and Bypass Configure of
                                                                    Processig Unit:
                                                                    0 = Disable
                                                                    1 = Enable Asynchronous Bypass
                                                                    2 = Enable Synchronous Bypass
                                                                    3 = Enable Synchronous Bypass (rw) */
    __IO Ifx_UReg_32Bit PUT2_POL:1;             /**< \brief [2:2]   Enable/Disable Input Polarity inversion:
                                                                    0 = Disable
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit PUT2_IN_SEL:1;          /**< \brief [3:3]   Select Input of Processing Unit:
                                                                    0 = Level signal (Output Polarity Inversion)
                                                                    1 = Edge signal (Output of Edge Extractor which
                                                                    input is the Output of Polarity Inversion) (rw) */
    __IO Ifx_UReg_32Bit PUT2_SEL_CONSTANT_IN:1; /**< \brief [4:4]   Select CONSTANT_IN input to the PU units
                                                                    1 = Select CONSTANT_IN
                                                                    0 = Select EVIN (rw) */
    __IO Ifx_UReg_32Bit PUT2_CONSTANT_IN:1;     /**< \brief [5:5]   Set the value of the CONSTANT_IN input signal
                                                                    0 = CONSTANT_IN set to 0
                                                                    1 = CONSTANT_IN set to 1 (rw) */
    __IO Ifx_UReg_32Bit PUT2_SRC_SEL:8;         /**< \brief [13:6]  Input Source Selection (max 256) (rw) */
    __I  Ifx_UReg_32Bit :18;                    /**< \brief [31:14] \internal Reserved */
} Ifx_PPCA_EPU_EPU_PU_T2_CNFG_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_EPU_EPU_COMBO_CNFG_Bits
{
    __IO Ifx_UReg_32Bit BANK_SEL:3;             /**< \brief [2:0]   Select input signals:
                                                                    put1_selected[i] = {put1[2*i],put1[2*i+1]},
                                                                    i=BANK_SEL (rw) */
    __IO Ifx_UReg_32Bit PUT1_IN_EN:2;           /**< \brief [4:3]   Enable input signal:
                                                                    evout_tmp = put1_sel[i] & put1_in_en[i] (rw) */
    __IO Ifx_UReg_32Bit PU_SRC_IN:4;            /**< \brief [8:5]   Select {pu_src_sel0, pu_src_sel1} =
                                                                    {put1[16+i],put2[i]}, i=PU_SRC_SEL source input
                                                                    signal (rw) */
    __IO Ifx_UReg_32Bit PU_SRC_IN_EN:2;         /**< \brief [10:9]  Enable input signal:
                                                                    evout_tmp = pu_src_sel0 & pu_src_in_en[0] |
                                                                    pu_src_sel1 & pu_src_in_en[1] (rw) */
    __IO Ifx_UReg_32Bit PU_IN_QUALIFIER:3;      /**< \brief [13:11] Select PU (= PU_T1_31:PU_T1_28,
                                                                    PU_T2_15:PU_T2_12) as qualifier for EVOUT:
                                                                    evout = evout_tmp & (pu_in_qualifier |
                                                                    ~pu_in_qualifier_en) (rw) */
    __IO Ifx_UReg_32Bit PU_IN_QUALIFIER_EN:1;   /**< \brief [14:14] Enable/Disable qualifier
                                                                    0 = disable
                                                                    1 = enable (rw) */
    __IO Ifx_UReg_32Bit COMBO_POL:1;            /**< \brief [15:15] Enable/Disable Polarity inversion
                                                                    0 = no output inversion
                                                                    1 = invert output (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_EPU_EPU_COMBO_CNFG_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG_Bits
{
    __IO Ifx_UReg_32Bit COMBO_SRC_IN:7;         /**< \brief [6:0]   Select COMBO output source signal.
                                                                    Signal is taken before PU_IN_QUALIFIER section (rw) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [31:7]  \internal Reserved */
} Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG_Bits;

/** \brief IPC acquire */
typedef struct _Ifx_PPCA_IPC_STRUCT_ACQUIRE_Bits
{
    __I  Ifx_UReg_32Bit P:1;                    /**< \brief [0:0]    (r) */
    __I  Ifx_UReg_32Bit NS:1;                   /**< \brief [1:1]    (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __I  Ifx_UReg_32Bit PC:4;                   /**< \brief [7:4]    (r) */
    __I  Ifx_UReg_32Bit MS:8;                   /**< \brief [15:8]  This field specifies the bus master
                                                                    identifier  that successfully acquired the lock. (r) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [30:16] \internal Reserved */
    __I  Ifx_UReg_32Bit SUCCESS:1;              /**< \brief [31:31]  (r) */
} Ifx_PPCA_IPC_STRUCT_ACQUIRE_Bits;

/** \brief IPC release */
typedef struct _Ifx_PPCA_IPC_STRUCT_RELEASE_Bits
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
} Ifx_PPCA_IPC_STRUCT_RELEASE_Bits;

/** \brief IPC notification */
typedef struct _Ifx_PPCA_IPC_STRUCT_NOTIFY_Bits
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
} Ifx_PPCA_IPC_STRUCT_NOTIFY_Bits;

/** \brief IPC data 0 */
typedef struct _Ifx_PPCA_IPC_STRUCT_DATA0_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  This field holds a 32-bit data element that
                                                                    is associated with the IPC structure. (rw) */
} Ifx_PPCA_IPC_STRUCT_DATA0_Bits;

/** \brief IPC data 1 */
typedef struct _Ifx_PPCA_IPC_STRUCT_DATA1_Bits
{
    __IO Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  This field holds a 32-bit data element that
                                                                    is associated with the IPC structure. (rw) */
} Ifx_PPCA_IPC_STRUCT_DATA1_Bits;

/** \brief IPC lock status */
typedef struct _Ifx_PPCA_IPC_STRUCT_LOCK_STATUS_Bits
{
    __I  Ifx_UReg_32Bit P:1;                    /**< \brief [0:0]    (r) */
    __I  Ifx_UReg_32Bit NS:1;                   /**< \brief [1:1]    (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __I  Ifx_UReg_32Bit PC:4;                   /**< \brief [7:4]    (r) */
    __I  Ifx_UReg_32Bit MS:8;                   /**< \brief [15:8]  This field specifies the bus master
                                                                    identifier that successfully acquired the lock. (r) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [30:16] \internal Reserved */
    __I  Ifx_UReg_32Bit ACQUIRED:1;             /**< \brief [31:31]  (r) */
} Ifx_PPCA_IPC_STRUCT_LOCK_STATUS_Bits;

/** \brief Interrupt */
typedef struct _Ifx_PPCA_IPC_INTR_STRUCT_INTR_Bits
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
} Ifx_PPCA_IPC_INTR_STRUCT_INTR_Bits;

/** \brief Interrupt set */
typedef struct _Ifx_PPCA_IPC_INTR_STRUCT_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit RELEASE:16;             /**< \brief [15:0]  SW writes a '1' to this field to set the
                                                                    corresponding field in the INTR register. (rw) */
    __IO Ifx_UReg_32Bit NOTIFY:16;              /**< \brief [31:16] SW writes a '1' to this field to set the
                                                                    corresponding field in the INTR register. (rw) */
} Ifx_PPCA_IPC_INTR_STRUCT_INTR_SET_Bits;

/** \brief Interrupt mask */
typedef struct _Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit RELEASE:16;             /**< \brief [15:0]  Mask bit for corresponding field in the
                                                                    INTR register. (rw) */
    __IO Ifx_UReg_32Bit NOTIFY:16;              /**< \brief [31:16] Mask bit for corresponding field in the
                                                                    INTR register. (rw) */
} Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASK_Bits;

/** \brief Interrupt masked */
typedef struct _Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit RELEASE:16;             /**< \brief [15:0]  Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit NOTIFY:16;              /**< \brief [31:16] Logical and of corresponding INTR and
                                                                    INTR_MASK fields. (r) */
} Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASKED_Bits;

/** \brief Access port control */
typedef struct _Ifx_PPCA_CPUSS_CNFG_AP_CTL_Bits
{
    __IO Ifx_UReg_32Bit CM33_0_ENABLE:1;        /**< \brief [0:0]   Enables the CM33_0 AP interface:
                                                                    '0': Disabled.
                                                                    '1': Enabled. (rw) */
    __IO Ifx_UReg_32Bit CM33_1_ENABLE:1;        /**< \brief [1:1]   Enables the CM33_1 AP interface:
                                                                    '0': Disabled.
                                                                    '1': Enabled. (rw) */
    __IO Ifx_UReg_32Bit SYS_ENABLE:1;           /**< \brief [2:2]   Enables the system AP interface:
                                                                    '0': Disabled.
                                                                    '1': Enabled. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit CM33_0_DBG_ENABLE:1;    /**< \brief [4:4]   Invasive debug enable for CM33_0.
                                                                    '0': Disables all halt-mode and invasive debug
                                                                    features.
                                                                    '1': Enables invasive debug features. (rw) */
    __IO Ifx_UReg_32Bit CM33_0_NID_ENABLE:1;    /**< \brief [5:5]   Non-invasive debug enable for CM33_0.
                                                                    '0': Disables all trace and non-invasive debug
                                                                    features.
                                                                    '1': Enables all trace and non-invasive debug features. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit CM33_1_DBG_ENABLE:1;    /**< \brief [8:8]   Refer CM33_0_DBG_ENABLE. (rw) */
    __IO Ifx_UReg_32Bit CM33_1_NID_ENABLE:1;    /**< \brief [9:9]   Refer CM33_0_NID_ENABLE. (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit CM33_0_DISABLE:1;       /**< \brief [16:16] Disables the CM33_0 AP interface:
                                                                    '0': Enabled.
                                                                    '1': Disabled.
                                                                    Typically, this field is set by the Cypress boot
                                                                    code with information from eFUSE.
                                                                    The access port is only enabled when CM0_DISABLE is
                                                                    '0' and CM0_ENABLE is '1'. (rw) */
    __IO Ifx_UReg_32Bit CM33_1_DISABLE:1;       /**< \brief [17:17] Disables the CM33_1 AP interface:
                                                                    '0': Enabled.
                                                                    '1': Disabled.
                                                                    Typically, this field is set by the Cypress boot
                                                                    code with information from eFUSE.
                                                                    The access port is only enabled when CM33_DISABLE
                                                                    is '0' and CM33_ENABLE is '1'. (rw) */
    __IO Ifx_UReg_32Bit SYS_DISABLE:1;          /**< \brief [18:18] Disables the system AP interface:
                                                                    '0': Enabled.
                                                                    '1': Disabled.
                                                                    Typically, this field is set by the Cypress boot
                                                                    code with information from eFUSE.
                                                                    The access port is only enabled when SYS_DISABLE is
                                                                    '0' and SYS_ENABLE is '1'. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit CM33_0_DBG_DISABLE:1;   /**< \brief [20:20] Disable Invasive debug for CM33_0.
                                                                    '1': Disables all halt-mode and invasive debug
                                                                    features.
                                                                    '0': Enables invasive debug features.
                                                                    Typically, this field is set by the Cypress boot
                                                                    code with information from eFUSE.
                                                                    The invasive debug is only enabled when
                                                                    CM33_0_DBG_DISABLE is '0' and CM33_0_DBG_ENABLE is '1'. (rw) */
    __IO Ifx_UReg_32Bit CM33_0_NID_DISABLE:1;   /**< \brief [21:21] Disable Non-invasive debug for CM33_0.
                                                                    '1': Disables all trace and non-invasive debug
                                                                    features.
                                                                    '0': Enables all trace and non-invasive debug
                                                                    features.
                                                                    Typically, this field is set by the Cypress boot
                                                                    code with information from eFUSE.
                                                                    The non-invasive debug is only enabled when
                                                                    CM33_0_NID_DISABLE is '0' and CM33_0_NID_ENABLE is '1'. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __IO Ifx_UReg_32Bit CM33_1_DBG_DISABLE:1;   /**< \brief [24:24] Refer CM33_0_DBG_DISABLE description. (rw) */
    __IO Ifx_UReg_32Bit CM33_1_NID_DISABLE:1;   /**< \brief [25:25] Refer CM33_0_NID_DISABLE description. (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [31:26] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_AP_CTL_Bits;

/** \brief Master Port Access control */
typedef struct _Ifx_PPCA_CPUSS_CNFG_MP_CTL_Bits
{
    __IO Ifx_UReg_32Bit PPCA_MS_TIMEOUT_ENABLE:1; /**< \brief [0:0]   Enables the PPCA Master Port Timeout Access control:
                                                                    '0': Disabled.
                                                                    '1': Enabled. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_MP_CTL_Bits;

/** \brief Control */
typedef struct _Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CTL_Bits
{
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [3:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit CPU_WAIT:1;             /**< \brief [4:4]    (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit LOCKNSVTOR:1;           /**< \brief [8:8]    (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [10:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit LOCKNSMPU:1;            /**< \brief [11:11]  (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [23:12] \internal Reserved */
    __IO Ifx_UReg_32Bit IOC_MASK:1;             /**< \brief [24:24] CPU floating point unit (FPU) exception
                                                                    mask for the CPU's FPCSR.IOC 'invalid operation'
                                                                    exception condition:
                                                                    '0': The CPU's exception condition does NOT
                                                                    activate the CPU's floating point interrupt.
                                                                    '1': the CPU's exception condition activates the
                                                                    CPU's floating point interrupt.
                                                                    Note: the ARM architecture does NOT support FPU
                                                                    exceptions; i.e. there is no precise FPU exception handler.
                                                                    Instead, FPU conditions are captured in the CPU's
                                                                    FPCSR register and the conditions are provided as
                                                                    CPU interface signals.
                                                                    The interface signals are 'masked' with the fields
                                                                    provided by this register (CM33_CTL).
                                                                    The 'masked' signals are reduced/OR-ed into a
                                                                    single CPU floating point interrupt signal.
                                                                    The associated CPU interrupt handler allows for
                                                                    imprecise handling of FPU exception conditions.
                                                                    Note: the CPU's FPCSR exception conditions are 'sticky'.
                                                                    Typically, the CPU FPU interrupt handler will clear
                                                                    the exception condition(s) to '0'.
                                                                    Note: by default, the FPU exception masks are '0'.
                                                                    Therefore, FPU exception conditions will NOT
                                                                    activate the CPU's floating point interrupt. (rw) */
    __IO Ifx_UReg_32Bit DZC_MASK:1;             /**< \brief [25:25]  (rw) */
    __IO Ifx_UReg_32Bit OFC_MASK:1;             /**< \brief [26:26]  (rw) */
    __IO Ifx_UReg_32Bit UFC_MASK:1;             /**< \brief [27:27]  (rw) */
    __IO Ifx_UReg_32Bit IXC_MASK:1;             /**< \brief [28:28]  (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [30:29] \internal Reserved */
    __IO Ifx_UReg_32Bit IDC_MASK:1;             /**< \brief [31:31]  (rw) */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CTL_Bits;

/** \brief Command */
typedef struct _Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CMD_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [1:1]   Processor enable:
                                                                    '0': Disabled.
                                                                    Processor clock is turned off and reset is activated.
                                                                    After SW clears this field to '0', HW automatically
                                                                    sets this field to '1'.
                                                                    This effectively results in a CM33 reset, followed
                                                                    by a CM33 warm boot.
                                                                    '1': Enabled.
                                                                    Note: The intent is that this bit is modified only
                                                                    through an external probe or by the other CM33
                                                                    while this CM33 is in Sleep or DeepSleep power mode.
                                                                    If this field is cleared to '0' by this CM33
                                                                    itself, it should be done under controlled
                                                                    conditions (such that undesirable side effects can
                                                                    be prevented).
                                                                    Note: The CM33 CPU has a AIRCR.SYSRESETREQ register
                                                                    field that allows the CM33 to reset the complete
                                                                    device (ENABLED only disables/enables the CM33),
                                                                    resulting in a warm boot.
                                                                    This CPU register field has similar 'built-in
                                                                    protection' as this register to prevent accidental
                                                                    system writes (the upper 16-bits of the register
                                                                    need to be written with a 0x05fa key value; see CPU
                                                                    user manual for more details). (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [15:2]  \internal Reserved */
    __I  Ifx_UReg_32Bit VECTKEYSTAT:16;         /**< \brief [31:16] Register key (to prevent accidental writes).
                                                                    - Should be written with a 0x05fa key value for the
                                                                    write to take effect.
                                                                    - Always reads as 0xfa05. (r) */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CMD_Bits;

/** \brief Status */
typedef struct _Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_STATUS_Bits
{
    __I  Ifx_UReg_32Bit SLEEPING:1;             /**< \brief [0:0]   Specifies if the CPU is in Active, Sleep or
                                                                    DeepSleep power mode:
                                                                    - Active power mode: SLEEPING is '0'.
                                                                    - Sleep power mode: SLEEPING is '1' and SLEEPDEEP is '0'.
                                                                    - DeepSleep power mode: SLEEPING is '1' and
                                                                    SLEEPDEEP is '1'. (r) */
    __I  Ifx_UReg_32Bit SLEEPDEEP:1;            /**< \brief [1:1]   Specifies if the CPU is in Sleep or
                                                                    DeepSleep power mode. See SLEEPING field. (r) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_STATUS_Bits;

/** \brief CM33 NMI control */
typedef struct _Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL_Bits
{
    __IO Ifx_UReg_32Bit SYSTEM_INT_IDX:10;      /**< \brief [9:0]   System interrupt select for CPU NMI.
                                                                    The reset value ('1023') ensures that the CPU NMI
                                                                    is NOT connected to any system interrupt after
                                                                    DeepSleep reset. (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL_Bits;

/** \brief CM33 event control */
typedef struct _Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_EVENT_CTL_Bits
{
    __IO Ifx_UReg_32Bit MASK:5;                 /**< \brief [4:0]   One mask bit for each CPU (other than itself).
                                                                    0: Mask is not set.
                                                                    1: RX event from the corresponding CPU is masked.
                                                                    Bit 0: Other CM33 CPU event
                                                                    Bit 1: CM55_0 CPU event
                                                                    Bit 2: CM55_1 CPU event
                                                                    Bit 3: CM55_2 CPU event
                                                                    Bit 4: CM55_3 CPU event (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_EVENT_CTL_Bits;

/** \brief CM33 non-secure vector table base */
typedef struct _Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NS_VECTOR_TABLE_BASE_Bits
{
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [6:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit ADDR25:25;              /**< \brief [31:7]  Address of CM33 non-secure vector table to
                                                                    be used at reset.  Default value:
                                                                    ADDR25: 0x0000000 if PROM is present (points to
                                                                    Non-Secure ROM start address i.e. 0x0000_0000).
                                                                    ADDR25: 0x0480000 if PROM is not present (points to
                                                                    Non-Secure RAMC0 start address i.e. 0x2400_0000). (rw) */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NS_VECTOR_TABLE_BASE_Bits;

/** \brief Control */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_CTL_Bits
{
    __IO Ifx_UReg_32Bit SRAM_WS:2;              /**< \brief [1:0]   Wait states. (rw)
                                                WS_0          : 0u
                                                WS_1          : 1u
                                                WS_2          : 2u
                                                WS_3          : 3u    */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [15:2]  \internal Reserved */
    __IO Ifx_UReg_32Bit CLOCK_FORCE:1;          /**< \brief [16:16] Force EAM clock gating to be always ON.
                                                                    0: Disabled
                                                                    1: Enabled
                                                                    This bit provides fail safe mechanism for dynamic
                                                                    clock gating added on EAM block. (rw) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [31:17] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_CTL_Bits;

/* PPCA_CPUSS_CNFG_RAMC_CTL.SRAM_WS enumerated values */
#define IFX_PPCA_CPUSS_CNFG_RAMC_CTL_SRAM_WS_WS_0 (0u)
#define IFX_PPCA_CPUSS_CNFG_RAMC_CTL_SRAM_WS_WS_1 (1u)
#define IFX_PPCA_CPUSS_CNFG_RAMC_CTL_SRAM_WS_WS_2 (2u)
#define IFX_PPCA_CPUSS_CNFG_RAMC_CTL_SRAM_WS_WS_3 (3u)

/** \brief Status */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_STATUS_Bits
{
    __I  Ifx_UReg_32Bit WB_EMPTY:1;             /**< \brief [0:0]   Write buffer empty.
                                                                    This information is used when entering DeepSleep
                                                                    power mode: WB_EMPTY must be '1' before a
                                                                    transition to system DeepSleep power mode.
                                                                    '0': Write buffer NOT empty.
                                                                    '1': Write buffer empty.
                                                                    Note: the SRAM controller write buffer is only used
                                                                    when ECC checking is enabled. (RAMi_CTL.ECC_EN is '1'). (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [3:1]   \internal Reserved */
    __I  Ifx_UReg_32Bit PWR_DONE:1;             /**< \brief [4:4]   After a PWR_MACRO_CTL.OFF change this flag
                                                                    indicates if the new power mode has taken effect or not.
                                                                    1: Indicates change is effective;
                                                                    0: Indicates change is in progress; (r) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_STATUS_Bits;

/** \brief ECC control */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_CTL_Bits
{
    __IO Ifx_UReg_32Bit EN:1;                   /**< \brief [0:0]   ECC enable:
                                                                    '0': Disabled.
                                                                    '1': Enabled. (rw)
                                                ECC_DISABLED  : 0u
                                                ECC_ENABLED   : 1u    */
    __IO Ifx_UReg_32Bit AUTO_CORRECT:1;         /**< \brief [1:1]   ECC auto correction:
                                                                    '0': Disabled.
                                                                    Corrected ECC errors are ONLY HW corrected
                                                                    'on-the-fly' (not corrected in the SRAM).
                                                                    Fault reporting is enabled.
                                                                    '1': Enabled.
                                                                    Correctable ECC errors are HW corrected
                                                                    'on-the-fly' and in the SRAM, without CPU intervention.
                                                                    Fault reporting is enabled.
                                                                    Note: This field is ignored when EN is '0' or when
                                                                    CHECK_EN is '0'. (rw) */
    __IO Ifx_UReg_32Bit INJ_EN:1;               /**< \brief [2:2]   ECC parity injection:
                                                                    '0': Disabled.
                                                                    '1': Enabled.
                                                                    Instead of calculating the parity from the
                                                                    transfer's write data, the parity is taken from
                                                                    PARITY upon a match of the transfer's write address
                                                                    with ECC_MATCH.WORD_ADDR (no match is performed on
                                                                    the transfer's write strobes/mask).
                                                                    Note: Parity injection invalidates the write buffer
                                                                    for this word address.
                                                                    If only a part of 64-bit data word is written AND
                                                                    consistency should be maintained,
                                                                    STATUS.ALL_WB_EMPTY is '1' should be checked before.
                                                                    Note: This field is ignored when EN is '0'. (rw) */
    __IO Ifx_UReg_32Bit CHECK_EN:1;             /**< \brief [3:3]   ECC checking enable:
                                                                    '0': Disabled. No ECC checking and associated bus errors.
                                                                    No fault reporting.
                                                                    Intended for SRAM initialization.
                                                                    '1': Enabled.
                                                                    Note: This field is ignored when EN is '0'. (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [15:4]  \internal Reserved */
    __IO Ifx_UReg_32Bit PARITY:7;               /**< \brief [22:16] Injected parity. (rw) */
    __I  Ifx_UReg_32Bit :9;                     /**< \brief [31:23] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_CTL_Bits;

/* PPCA_CPUSS_CNFG_RAMC_ECC_CTL.EN enumerated values */
#define IFX_PPCA_CPUSS_CNFG_RAMC_ECC_CTL_EN_ECC_DISABLED (0u)
#define IFX_PPCA_CPUSS_CNFG_RAMC_ECC_CTL_EN_ECC_ENABLED (1u)

/** \brief ECC status 0 */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS0_Bits
{
    __I  Ifx_UReg_32Bit ADDR:32;                /**< \brief [31:0]  ECC error address.
                                                                    This register captures the address location when
                                                                    ECC error happens. (r) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS0_Bits;

/** \brief ECC status 1 */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS1_Bits
{
    __I  Ifx_UReg_32Bit SYNDROME:7;             /**< \brief [6:0]   This register captures the ECC syndrome
                                                                    when ECC error happens. (r) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [31:7]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS1_Bits;

/** \brief ECC match */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_MATCH_Bits
{
    __IO Ifx_UReg_32Bit WORD_ADDR:25;           /**< \brief [24:0]  Specifies the word address where an error
                                                                    will be injected.
                                                                    - On a write transfer to this SRAM address and when
                                                                    the ECC_CTL.INJ_EN bit is '1', the parity
                                                                    (ECC_CTL.PARITY) is injected. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_MATCH_Bits;

/** \brief SRAM power partition power control */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_Bits
{
    __IO Ifx_UReg_32Bit OFF:32;                 /**< \brief [31:0]  Each bit represent the individual RAM power
                                                                    partition power state.
                                                                    One bit for each macro of RAM controller when all
                                                                    32 bits are populated as 32 independent power
                                                                    partitions.
                                                                    0: Macros in power partion is to be powered-ON
                                                                    1: Macros in power partion is to be powered-OFF
                                                                    Note 1: it is not allowed to disable a macro during
                                                                    access to its address range.
                                                                    Note 2: it is not allowed to disable few macros
                                                                    while enable others in the same AHB write
                                                                    transaction.
                                                                    It is mandatory to check for STATUS.PWR_DONE to
                                                                    become 1 once this PWR_MACRO_DTL register contents
                                                                    are changed to ensure SRAM mode transition is
                                                                    completed successfully. (rw) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_Bits;

/** \brief SRAM power partition power control Lock */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK_Bits
{
    __IO Ifx_UReg_32Bit PWR_MACRO_CTL_LOCK:2;   /**< \brief [1:0]   Prohibits Read/Write access to
                                                                    PWR_MACRO_CTL register when this field is not equal to 0.
                                                                    Requires at least two different writes to unlock.
                                                                    Note that this field is 2 bits to force multiple
                                                                    writes only.
                                                                    By default AHB reads/writes to PWR_MACRO_CTL
                                                                    register are locked. (rw)
                                                NO_CHG        : 0u   No effect
                                                CLR0          : 1u   Clears bit 0
                                                CLR1          : 2u   Clears bit 1
                                                SET01         : 3u   Sets both bits 0 and 1 */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK_Bits;

/* PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK.PWR_MACRO_CTL_LOCK enumerated values */

/** \brief No effect */
#define IFX_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK_PWR_MACRO_CTL_LOCK_NO_CHG (0u)

/** \brief Clears bit 0 */
#define IFX_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK_PWR_MACRO_CTL_LOCK_CLR0 (1u)

/** \brief Clears bit 1 */
#define IFX_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK_PWR_MACRO_CTL_LOCK_CLR1 (2u)

/** \brief Sets both bits 0 and 1 */
#define IFX_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK_PWR_MACRO_CTL_LOCK_SET01 (3u)

/** \brief SRAM power switch power up & sequence delay */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_DELAY_CTL_Bits
{
    __IO Ifx_UReg_32Bit UP:10;                  /**< \brief [9:0]   Number of IMO clock cycles delay needed
                                                                    after power domain power up (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit SEQ0_DELAY:8;           /**< \brief [23:16] Number of IMO clock cycles delay needed for
                                                                    sequence-0 of SRAM power transition (rw) */
    __IO Ifx_UReg_32Bit SEQ1_DELAY:8;           /**< \brief [31:24] Number of IMO clock cycles delay needed for
                                                                    sequence-1 of SRAM power transition (rw) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_DELAY_CTL_Bits;

/** \brief Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CFG_Bits
{
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [3:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit RESPONSE:1;             /**< \brief [4:4]   Response Configuration for Security and PC
                                                                    violations
                                                                    0: Read-Zero Write Ignore (RAZ/WI)
                                                                    1: Bus Error (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CFG_Bits;

/** \brief Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CTRL_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit AUTO_INC:1;             /**< \brief [8:8]   Auto-increment BLK_IDX by 1 for this
                                                                    protection context as a side effect of each
                                                                    read/write access to BLK_LUT (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [30:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit LOCK:1;                 /**< \brief [31:31] Security lockdown for this protection context.
                                                                    Software can set this bit but not clear it once set.
                                                                    When set, write operations to BLK_LUT are not
                                                                    possible  from this protection context.
                                                                    Setting LOCK also blocks writes to CTRL itself (for
                                                                    that PC copy). All writes are ignored. (rw) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CTRL_Bits;

/** \brief Block size & initialization in progress */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_CFG_Bits
{
    __I  Ifx_UReg_32Bit BLOCK_SIZE:4;           /**< \brief [3:0]   Block size of individually protected blocks
                                                                    (0: 32B, 1: 64B, ... up to 15: 1MB)
                                                                    Block size= (1<<(BLOCK_SIZE+5))
                                                                    The number and size blocks in an MPC is design time
                                                                    configurable and for embedded memories defaults to
                                                                    covering the entire memory using 4kB blocks; see
                                                                    product datasheet for details on protection of
                                                                    external memories. (r) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [30:4]  \internal Reserved */
    __I  Ifx_UReg_32Bit INIT_IN_PROGRESS:1;     /**< \brief [31:31] During initialization INIT_IN_PROGRESS is
                                                                    '1' and MMIO register accesses to BLK_LUT is
                                                                    blocked (BLK_IDX increment is also ignored).
                                                                    The block attributes are retained in DeepSleep (and
                                                                    obviously Active) power mode.
                                                                    Initialization is only required from a power mode
                                                                    in which the block attributes are not retained.
                                                                    E.g., initialization is required for a cold boot
                                                                    (after a Power-on-Reset).
                                                                    HW initializes the block attributes: the NS
                                                                    attributes are set to '0' (secure), the R
                                                                    attributes are set to '1' (read access allowed) and
                                                                    the W attributes are set to '1' (write access allowed).
                                                                    During initialization, the MPC supports memory
                                                                    accesses (memory accesses are NOT blocked) with the
                                                                    initialization block attribute values as mentioned above.
                                                                    This e.g.
                                                                    allows MPC initialization to proceed in parallel
                                                                    with boot program memory accesses (as opposed to
                                                                    serializing the two), improving device boot time. (r) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_CFG_Bits;

/** \brief NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_LUT_Bits
{
    __IO Ifx_UReg_32Bit ATTR_NS0:1;             /**< \brief [0:0]   NS bit for block 0 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS1:1;             /**< \brief [1:1]   NS bit for block 1 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS2:1;             /**< \brief [2:2]   NS bit for block 2 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS3:1;             /**< \brief [3:3]   NS bit for block 3 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS4:1;             /**< \brief [4:4]   NS bit for block 4 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS5:1;             /**< \brief [5:5]   NS bit for block 5 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS6:1;             /**< \brief [6:6]   NS bit for block 6 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS7:1;             /**< \brief [7:7]   NS bit for block 7 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS8:1;             /**< \brief [8:8]   NS bit for block 8 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS9:1;             /**< \brief [9:9]   NS bit for block 9 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS10:1;            /**< \brief [10:10] NS bit for block 10 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS11:1;            /**< \brief [11:11] NS bit for block 11 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS12:1;            /**< \brief [12:12] NS bit for block 12 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS13:1;            /**< \brief [13:13] NS bit for block 13 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS14:1;            /**< \brief [14:14] NS bit for block 14 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS15:1;            /**< \brief [15:15] NS bit for block 15 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS16:1;            /**< \brief [16:16] NS bit for block 16 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS17:1;            /**< \brief [17:17] NS bit for block 17 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS18:1;            /**< \brief [18:18] NS bit for block 18 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS19:1;            /**< \brief [19:19] NS bit for block 19 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS20:1;            /**< \brief [20:20] NS bit for block 20 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS21:1;            /**< \brief [21:21] NS bit for block 21 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS22:1;            /**< \brief [22:22] NS bit for block 22 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS23:1;            /**< \brief [23:23] NS bit for block 23 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS24:1;            /**< \brief [24:24] NS bit for block 24 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS25:1;            /**< \brief [25:25] NS bit for block 25 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS26:1;            /**< \brief [26:26] NS bit for block 26 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS27:1;            /**< \brief [27:27] NS bit for block 27 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS28:1;            /**< \brief [28:28] NS bit for block 28 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS29:1;            /**< \brief [29:29] NS bit for block 29 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS30:1;            /**< \brief [30:30] NS bit for block 30 based on BLK_IDX (rw) */
    __IO Ifx_UReg_32Bit ATTR_NS31:1;            /**< \brief [31:31] NS bit for block 31 based on BLK_IDX (rw) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_LUT_Bits;

/** \brief Control register with lock bit and auto-increment only */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_CTRL_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit AUTO_INC:1;             /**< \brief [8:8]   Auto-increment BLK_IDX by 1 for each
                                                                    read/write of ROT_BLK_LUT (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [30:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit LOCK:1;                 /**< \brief [31:31] Security lockdown for the root-of-trust
                                                                    configuration registers.
                                                                    Software can set this bit but not clear it once set.
                                                                    When set, write operations to ROT_BLK_LUT are not possible.
                                                                    Write is ignored. (rw) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_CTRL_Bits;

/** \brief Max value of block-based index register for ROT */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_MAX_Bits
{
    __I  Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  Maximum value of block-based index register.
                                                                    The number and size blocks in an MPC is design time
                                                                    configurable and for embedded memories defaults to
                                                                    covering the entire memory using 4kB blocks; see
                                                                    product datasheet for details on protection of
                                                                    external memories. (r) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_MAX_Bits;

/** \brief Same as BLK_CFG */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_CFG_Bits
{
    __I  Ifx_UReg_32Bit BLOCK_SIZE:4;           /**< \brief [3:0]   Block size of individually protected blocks
                                                                    (0: 32B, 1: 64B, ...up to 15:1MB)
                                                                    Block size= (1<<(BLOCK_SIZE+5))
                                                                    The number and size blocks in an MPC is design time
                                                                    configurable and for embedded memories defaults to
                                                                    covering the entire memory using 4kB blocks; see
                                                                    product datasheet for details on protection of
                                                                    external memories. (r) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [30:4]  \internal Reserved */
    __I  Ifx_UReg_32Bit INIT_IN_PROGRESS:1;     /**< \brief [31:31] During initialization INIT_IN_PROGRESS is
                                                                    '1' and MMIO register accesses to ROT_BLK_LUT is RAZWI.
                                                                    The block attributes are retained in DeepSleep (and
                                                                    obviously Active) power mode.
                                                                    Initialization is only required from a power mode
                                                                    in which the block attributes are not retained.
                                                                    E.g., initialization is required for a cold boot
                                                                    (after a Power-on-Reset).
                                                                    HW initializes the block attributes: the NS
                                                                    attributes are set to '0' (secure), the R
                                                                    attributes are set to '1' (read access allowed) and
                                                                    the W attributes are set to '1' (write access allowed).
                                                                    During initialization, the MPC supports memory
                                                                    accesses (memory accesses are NOT blocked) with the
                                                                    initialization block attribute values as mentioned above.
                                                                    This e.g.
                                                                    allows MPC initialization to proceed in parallel
                                                                    with boot program memory accesses (as opposed to
                                                                    serializing the two), improving device boot time. (r) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_CFG_Bits;

/** \brief Index of 8-block group accessed through ROT_BLK_LUT_* */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_IDX_Bits
{
    __IO Ifx_UReg_32Bit VALUE:32;               /**< \brief [31:0]  Index value for accessing block-based
                                                                    lookup table using ROT_BLK_LUT.
                                                                    Programming out of LUT range is an user error and
                                                                    it loops back to '0' once overflow occurs. (rw) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_IDX_Bits;

/** \brief Protection context of 8-block group accesses through ROT_BLK_LUT */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_PC_Bits
{
    __IO Ifx_UReg_32Bit PC:4;                   /**< \brief [3:0]   Specify PC values for ROT_BLK_IDX and
                                                                    ROT_BLK_LUT (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_PC_Bits;

/** \brief (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_LUT_Bits
{
    __IO Ifx_UReg_32Bit ATTR0:3;                /**< \brief [2:0]   W/R/NS bits for block 0 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR1:3;                /**< \brief [6:4]   W/R/NS bits for block 1 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR2:3;                /**< \brief [10:8]  W/R/NS bits for block 2 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR3:3;                /**< \brief [14:12] W/R/NS bits for block 3 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR4:3;                /**< \brief [18:16] W/R/NS bits for block 4 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR5:3;                /**< \brief [22:20] W/R/NS bits for block 5 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR6:3;                /**< \brief [26:24] W/R/NS bits for block 6 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [27:27] \internal Reserved */
    __IO Ifx_UReg_32Bit ATTR7:3;                /**< \brief [30:28] W/R/NS bits for block 7 indicated by
                                                                    ROT_BLK_IDX for ROT_BLK_PC PC (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_LUT_Bits;

/** \brief Power Policy Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWPR_Bits
{
    __IO Ifx_UReg_32Bit PWR_POLICY:4;           /**< \brief [3:0]   Power mode policy.
                                                                    When static power mode transitions are enabled,
                                                                    PWR_DYN_EN is set to 0, this is the target power
                                                                    mode for the PPU.
                                                                    When dynamic power mode transitions are enabled,
                                                                    PWR_DYN_EN is set to 1, this is the minimum power
                                                                    mode for the PPU.
                                                                    This PPU supports the following modes: OFF(0),
                                                                    MEM_RET(2), ON(8).
                                                                    Do not use WARM_RST(9) or other unsupported modes. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit PWR_DYN_EN:1;           /**< \brief [8:8]   Power mode dynamic transition enable.
                                                                    When this bit is set to 1 dynamic transitions are
                                                                    enabled for power modes, allowing transitions to be
                                                                    initiated by changes on power mode DEVACTIVE inputs. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [11:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit LOCK_EN:1;              /**< \brief [12:12] Reserved (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit OP_POLICY:4;            /**< \brief [19:16] Reserved (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [23:20] \internal Reserved */
    __IO Ifx_UReg_32Bit OP_DYN_EN:1;            /**< \brief [24:24] Reserved (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWPR_Bits;

/** \brief Power Mode Emulation Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PMER_Bits
{
    __IO Ifx_UReg_32Bit EMU_EN:1;               /**< \brief [0:0]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PMER_Bits;

/** \brief Power Status Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWSR_Bits
{
    __I  Ifx_UReg_32Bit PWR_STATUS:4;           /**< \brief [3:0]   Power mode status.
                                                                    These bits reflect the current power mode of the PPU.
                                                                    See PPU_PWPR.PWR_POLICY for power mode enumeration. (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __I  Ifx_UReg_32Bit PWR_DYN_STATUS:1;       /**< \brief [8:8]   Power mode dynamic transition status.
                                                                    When set to 1 power mode dynamic transitions are enabled.
                                                                    There might be a delay in dynamic transitions
                                                                    becoming active or inactive if the PPU is
                                                                    transitioning when PWR_DYN_EN is programmed. (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [11:9]  \internal Reserved */
    __I  Ifx_UReg_32Bit LOCK_STATUS:1;          /**< \brief [12:12] Reserved (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __I  Ifx_UReg_32Bit OP_STATUS:4;            /**< \brief [19:16] Reserved (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [23:20] \internal Reserved */
    __I  Ifx_UReg_32Bit OP_DYN_STATUS:1;        /**< \brief [24:24] Reserved (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWSR_Bits;

/** \brief Device Interface Input Current Status Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DISR_Bits
{
    __I  Ifx_UReg_32Bit PWR_DEVACTIVE_STATUS:11; /**< \brief [10:0]  Status of the power mode DEVACTIVE inputs.
                                                                    There is one bit for each device interface
                                                                    Q-Channel DEVQACTIVE.
                                                                    For example, bit 0 is for Q-channel device 0 DEVQACTIVE.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (r) */
    __I  Ifx_UReg_32Bit :13;                    /**< \brief [23:11] \internal Reserved */
    __I  Ifx_UReg_32Bit OP_DEVACTIVE_STATUS:8;  /**< \brief [31:24] Reserved (r) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DISR_Bits;

/** \brief Miscellaneous Input Current Status Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MISR_Bits
{
    __I  Ifx_UReg_32Bit PCSMPACCEPT_STATUS:1;   /**< \brief [0:0]   The status of the PCSMPACCEPT input. (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [7:1]   \internal Reserved */
    __I  Ifx_UReg_32Bit DEVACCEPT_STATUS:8;     /**< \brief [15:8]  Status of the device interface DEVACCEPT inputs.
                                                                    There is one bit for each device interface DEVQACCEPTn.
                                                                    For example, bit 8 is for Q-Channel 0 DEVQACCEPTn
                                                                    and bit 9 for Q-Channel 1 DEVQACCEPTn.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (r) */
    __I  Ifx_UReg_32Bit DEVDENY_STATUS:8;       /**< \brief [23:16] Status of the device interface DEVDENY inputs.
                                                                    There is one bit for each device interface DEVQDENY.
                                                                    For example, bit 16 is for Q-Channel 0 DEVQDENY,
                                                                    and bit 17 for Q-Channel 1 DEVQDENY.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (r) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MISR_Bits;

/** \brief Stored Status Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_STSR_Bits
{
    __I  Ifx_UReg_32Bit STORED_DEVDENY:8;       /**< \brief [7:0]   Reserved (this PPU has a single Q-channel) (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_STSR_Bits;

/** \brief Unlock register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_UNLK_Bits
{
    __IO Ifx_UReg_32Bit UNLOCK:1;               /**< \brief [0:0]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_UNLK_Bits;

/** \brief Power Configuration Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWCR_Bits
{
    __IO Ifx_UReg_32Bit DEVREQEN:8;             /**< \brief [7:0]   When set to 1 enables the device interface
                                                                    handshake for transitions.
                                                                    All available bits are reset to 1.
                                                                    There is one bit for each device interface channel.
                                                                    For example, bit 0 is for Q-Channel 0, and bit 1 is
                                                                    for Q-Channel 1.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (rw) */
    __IO Ifx_UReg_32Bit PWR_DEVACTIVEEN:11;     /**< \brief [18:8]  These bits enable the power mode DEVACTIVE inputs.
                                                                    When a bit is to 1 the related DEVACTIVE input is
                                                                    enabled, when set to 0 it is disabled.
                                                                    All available bits are reset to 1.
                                                                    There is one bit for each device interface
                                                                    Q-Channel DEVQACTIVE.
                                                                    For example, bit 8 is for the Q-Channel 0
                                                                    DEVQACTIVE, and bit 9 for the Q-Channel 1 DEVQACTIVE.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [23:19] \internal Reserved */
    __IO Ifx_UReg_32Bit OP_DEVACTIVEEN:8;       /**< \brief [31:24] Reserved (rw) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWCR_Bits;

/** \brief Power Mode Transition Configuration Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PTCR_Bits
{
    __IO Ifx_UReg_32Bit WARM_RST_DEVREQEN:1;    /**< \brief [0:0]   Transition behavior between ON and WARM_RST.
                                                                    This bit should not be modified when the PPU is in
                                                                    WARM_RST, or if the PPU is performing a transition,
                                                                    otherwise PPU behavior is UNPREDICTABLE.
                                                                    0:  The PPU does not perform a device interface
                                                                    handshake when transitioning between ON and
                                                                    WARM_RST.
                                                                    1:  The PPU performs a device interface handshake
                                                                    when transitioning between ON and WARM_RST.
                                                                    This disables all Q-Channels for this transition. (rw) */
    __IO Ifx_UReg_32Bit DBG_RECOV_PORST_EN:1;   /**< \brief [1:1]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PTCR_Bits;

/** \brief Interrupt Mask Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IMR_Bits
{
    __IO Ifx_UReg_32Bit STA_POLICY_TRN_IRQ_MASK:1; /**< \brief [0:0]   Static full policy transition completion
                                                                    event mask. (rw) */
    __IO Ifx_UReg_32Bit STA_ACCEPT_IRQ_MASK:1;  /**< \brief [1:1]   Static transition acceptance event mask. (rw) */
    __IO Ifx_UReg_32Bit STA_DENY_IRQ_MASK:1;    /**< \brief [2:2]   Static transition denial event mask. (rw) */
    __IO Ifx_UReg_32Bit EMU_ACCEPT_IRQ_MASK:1;  /**< \brief [3:3]   Reserved (OFF_EMU = 0 and MEM_RET_EMU = 0 -
                                                                    see IDR0 settings) (rw) */
    __IO Ifx_UReg_32Bit EMU_DENY_IRQ_MASK:1;    /**< \brief [4:4]   Reserved (OFF_EMU = 0 and MEM_RET_EMU = 0 -
                                                                    see IDR0 settings) (rw) */
    __IO Ifx_UReg_32Bit LOCKED_IRQ_MASK:1;      /**< \brief [5:5]   Reserved (LOCK_EN = 0 - see IDR0 settings) (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IMR_Bits;

/** \brief Additional Interrupt Mask Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIMR_Bits
{
    __IO Ifx_UReg_32Bit UNSPT_POLICY_IRQ_MASK:1; /**< \brief [0:0]   Unsupported Policy event mask. (rw) */
    __IO Ifx_UReg_32Bit DYN_ACCEPT_IRQ_MASK:1;  /**< \brief [1:1]   Dynamic transition acceptance event mask. (rw) */
    __IO Ifx_UReg_32Bit DYN_DENY_IRQ_MASK:1;    /**< \brief [2:2]   Dynamic transition denial event mask. (rw) */
    __IO Ifx_UReg_32Bit STA_POLICY_PWR_IRQ_MASK:1; /**< \brief [3:3]   Reserved (STA_POLICY_PWR_IRQ_SPT = 0 - see
                                                                    IDR1 settings) (rw) */
    __IO Ifx_UReg_32Bit STA_POLICY_OP_IRQ_MASK:1; /**< \brief [4:4]   Reserved (STA_POLICY_OP_IRQ_SPT = 0 - see
                                                                    IDR1 settings) (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIMR_Bits;

/** \brief Interrupt Status Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ISR_Bits
{
    __IO Ifx_UReg_32Bit STA_POLICY_TRN_IRQ:1;   /**< \brief [0:0]   Static full policy transition completion
                                                                    event status. (rw) */
    __IO Ifx_UReg_32Bit STA_ACCEPT_IRQ:1;       /**< \brief [1:1]   Static transition acceptance event status. (rw) */
    __IO Ifx_UReg_32Bit STA_DENY_IRQ:1;         /**< \brief [2:2]   Static transition denial event status. (rw) */
    __IO Ifx_UReg_32Bit EMU_ACCEPT_IRQ:1;       /**< \brief [3:3]   Reserved (rw) */
    __IO Ifx_UReg_32Bit EMU_DENY_IRQ:1;         /**< \brief [4:4]   Reserved (rw) */
    __IO Ifx_UReg_32Bit LOCKED_IRQ:1;           /**< \brief [5:5]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [6:6]   \internal Reserved */
    __I  Ifx_UReg_32Bit OTHER_IRQ:1;            /**< \brief [7:7]   Indicates there is an interrupt event
                                                                    pending in the Additional Interrupt Status Register
                                                                    (PPU_AISR). (r) */
    __IO Ifx_UReg_32Bit PWR_ACTIVE_EDGE_IRQ:11; /**< \brief [18:8]  Indicates which power mode DEVACTIVE inputs
                                                                    caused the input edge event.
                                                                    Bits for unused channels are the MSBs and are
                                                                    reserved.
                                                                    There is one bit for each device Q-Channel DEVQACTIVE.
                                                                    For example, bit 8 is for the Q-Channel 0 DEVQACTIVE.
                                                                    Refer to PPU_IDR0.DEVCHAN for device channel enumeration. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [23:19] \internal Reserved */
    __IO Ifx_UReg_32Bit OP_ACTIVE_EDGE_IRQ:8;   /**< \brief [31:24] Indicates which operating mode DEVPACTIVE
                                                                    inputs caused the input edge event.
                                                                    When operating modes are not supported this field
                                                                    is reserved. (rw) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ISR_Bits;

/** \brief Additional Interrupt Status Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AISR_Bits
{
    __IO Ifx_UReg_32Bit UNSPT_POLICY_IRQ:1;     /**< \brief [0:0]   Unsupported Policy event status. (rw) */
    __IO Ifx_UReg_32Bit DYN_ACCEPT_IRQ:1;       /**< \brief [1:1]   Dynamic transition acceptance event status. (rw) */
    __IO Ifx_UReg_32Bit DYN_DENY_IRQ:1;         /**< \brief [2:2]   Dynamic transition denial event status. (rw) */
    __IO Ifx_UReg_32Bit STA_POLICY_PWR_IRQ:1;   /**< \brief [3:3]   Reserved (rw) */
    __IO Ifx_UReg_32Bit STA_POLICY_OP_IRQ:1;    /**< \brief [4:4]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AISR_Bits;

/** \brief Input Edge Sensitivity Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IESR_Bits
{
    __IO Ifx_UReg_32Bit DEVACTIVE00_EDGE:2;     /**< \brief [1:0]   DEVACTIVE 0 edge sensitivity. (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE01_EDGE:2;     /**< \brief [3:2]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE02_EDGE:2;     /**< \brief [5:4]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE03_EDGE:2;     /**< \brief [7:6]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE04_EDGE:2;     /**< \brief [9:8]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE05_EDGE:2;     /**< \brief [11:10] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE06_EDGE:2;     /**< \brief [13:12] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE07_EDGE:2;     /**< \brief [15:14] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE08_EDGE:2;     /**< \brief [17:16] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE09_EDGE:2;     /**< \brief [19:18] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE10_EDGE:2;     /**< \brief [21:20] Reserved (rw) */
    __I  Ifx_UReg_32Bit :10;                    /**< \brief [31:22] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IESR_Bits;

/** \brief Operating Mode Active Edge Sensitivity Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_OPSR_Bits
{
    __IO Ifx_UReg_32Bit DEVACTIVE16_EDGE:2;     /**< \brief [1:0]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE17_EDGE:2;     /**< \brief [3:2]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE18_EDGE:2;     /**< \brief [5:4]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE19_EDGE:2;     /**< \brief [7:6]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE20_EDGE:2;     /**< \brief [9:8]   Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE21_EDGE:2;     /**< \brief [11:10] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE22_EDGE:2;     /**< \brief [13:12] Reserved (rw) */
    __IO Ifx_UReg_32Bit DEVACTIVE23_EDGE:2;     /**< \brief [15:14] Reserved (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_OPSR_Bits;

/** \brief Functional Retention RAM Configuration Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FUNRR_Bits
{
    __IO Ifx_UReg_32Bit FUNC_RET_RAM_CFG:8;     /**< \brief [7:0]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FUNRR_Bits;

/** \brief Full Retention RAM Configuration Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FULRR_Bits
{
    __IO Ifx_UReg_32Bit FULL_RET_RAM_CFG:8;     /**< \brief [7:0]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FULRR_Bits;

/** \brief Memory Retention RAM Configuration Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MEMRR_Bits
{
    __IO Ifx_UReg_32Bit MEM_RET_RAM_CFG:8;      /**< \brief [7:0]   Reserved (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MEMRR_Bits;

/** \brief Power Mode Entry Delay Register 0 */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR0_Bits
{
    __IO Ifx_UReg_32Bit OFF_DEL:8;              /**< \brief [7:0]   Reserved (rw) */
    __IO Ifx_UReg_32Bit MEM_RET_DEL:8;          /**< \brief [15:8]  Reserved (rw) */
    __IO Ifx_UReg_32Bit LOGIC_RET_DEL:8;        /**< \brief [23:16] Reserved (rw) */
    __IO Ifx_UReg_32Bit FULL_RET_DEL:8;         /**< \brief [31:24] Reserved (rw) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR0_Bits;

/** \brief Power Mode Entry Delay Register 1 */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR1_Bits
{
    __IO Ifx_UReg_32Bit MEM_OFF_DEL:8;          /**< \brief [7:0]   Reserved (rw) */
    __IO Ifx_UReg_32Bit FUNC_RET_DEL:8;         /**< \brief [15:8]  Reserved (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR1_Bits;

/** \brief Device Control Delay Configuration Register 0 */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR0_Bits
{
    __I  Ifx_UReg_32Bit CLKEN_RST_DLY:8;        /**< \brief [7:0]   Reserved CLKEN_RST_DLY_CFG = 3 (r) */
    __I  Ifx_UReg_32Bit ISO_CLKEN_DLY:8;        /**< \brief [15:8]  Reserved ISO_CLKEN_DLY_CFG = 1 (r) */
    __I  Ifx_UReg_32Bit RST_HWSTAT_DLY:8;       /**< \brief [23:16] Reserved RST_HWSTAT_DLY_CFG = 0 (r) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR0_Bits;

/** \brief Device Control Delay Configuration Register 1 */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR1_Bits
{
    __I  Ifx_UReg_32Bit ISO_RST_DLY:8;          /**< \brief [7:0]   Reserved ISO_RST_DLY_CFG = 1 (r) */
    __I  Ifx_UReg_32Bit CLKEN_ISO_DLY:8;        /**< \brief [15:8]  Reserved CLKEN_ISO_DLY_CFG = 3 (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR1_Bits;

/** \brief PPU Identification Register 0 */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR0_Bits
{
    __I  Ifx_UReg_32Bit DEVCHAN:4;              /**< \brief [3:0]   No. of Device Interface Channels.
                                                                    The device enumeration is:
                                                                    Device 0: PDCM (r) */
    __I  Ifx_UReg_32Bit NUM_OPMODE:4;           /**< \brief [7:4]   No. of operating modes supported is NUM_OPMODE + 1. (r) */
    __I  Ifx_UReg_32Bit STA_OFF_SPT:1;          /**< \brief [8:8]   OFF support. (r) */
    __I  Ifx_UReg_32Bit STA_OFF_EMU_SPT:1;      /**< \brief [9:9]   OFF_EMU support. (r) */
    __I  Ifx_UReg_32Bit STA_MEM_RET_SPT:1;      /**< \brief [10:10] MEM_RET support. (r) */
    __I  Ifx_UReg_32Bit STA_MEM_RET_EMU_SPT:1;  /**< \brief [11:11] MEM_RET_EMU support. (r) */
    __I  Ifx_UReg_32Bit STA_LGC_RET_SPT:1;      /**< \brief [12:12] LOGIC_RET support. (r) */
    __I  Ifx_UReg_32Bit STA_MEM_OFF_SPT:1;      /**< \brief [13:13] MEM_OFF support. (r) */
    __I  Ifx_UReg_32Bit STA_FULL_RET_SPT:1;     /**< \brief [14:14] FULL_RET support. (r) */
    __I  Ifx_UReg_32Bit STA_FUNC_RET_SPT:1;     /**< \brief [15:15] FUNC_RET support. (r) */
    __I  Ifx_UReg_32Bit STA_ON_SPT:1;           /**< \brief [16:16] ON support. (r) */
    __I  Ifx_UReg_32Bit STA_WRM_RST_SPT:1;      /**< \brief [17:17] WARM_RST support.  Ignore this bit.
                                                                    Do not use WARM_RST. (r) */
    __I  Ifx_UReg_32Bit STA_DBG_RECOV_SPT:1;    /**< \brief [18:18] DBG_RECOV support. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __I  Ifx_UReg_32Bit DYN_OFF_SPT:1;          /**< \brief [20:20] Dynamic OFF support. (r) */
    __I  Ifx_UReg_32Bit DYN_OFF_EMU_SPT:1;      /**< \brief [21:21] Dynamic OFF_EMU support. (r) */
    __I  Ifx_UReg_32Bit DYN_MEM_RET_SPT:1;      /**< \brief [22:22] Dynamic MEM_RET support. (r) */
    __I  Ifx_UReg_32Bit DYN_MEM_RET_EMU_SPT:1;  /**< \brief [23:23] Dynamic MEM_RET_EMU support (r) */
    __I  Ifx_UReg_32Bit DYN_LGC_RET_SPT:1;      /**< \brief [24:24] Dynamic LOGIC_RET support. (r) */
    __I  Ifx_UReg_32Bit DYN_MEM_OFF_SPT:1;      /**< \brief [25:25] Dynamic MEM_OFF support. (r) */
    __I  Ifx_UReg_32Bit DYN_FULL_RET_SPT:1;     /**< \brief [26:26] Dynamic FULL_RET support. (r) */
    __I  Ifx_UReg_32Bit DYN_FUNC_RET_SPT:1;     /**< \brief [27:27] Dynamic FUNC_RET support. (r) */
    __I  Ifx_UReg_32Bit DYN_ON_SPT:1;           /**< \brief [28:28] Dynamic ON support. (r) */
    __I  Ifx_UReg_32Bit DYN_WRM_RST_SPT:1;      /**< \brief [29:29] Dynamic WARM_RST support. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR0_Bits;

/** \brief PPU Identification Register 1 */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR1_Bits
{
    __I  Ifx_UReg_32Bit PWR_MODE_ENTRY_DEL_SPT:1; /**< \brief [0:0]   Power mode entry delay support. (r) */
    __I  Ifx_UReg_32Bit SW_DEV_DEL_SPT:1;       /**< \brief [1:1]   Software device delay control configuration
                                                                    support. (r) */
    __I  Ifx_UReg_32Bit LOCK_SPT:1;             /**< \brief [2:2]   Lock and the lock interrupt event are supported. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __I  Ifx_UReg_32Bit MEM_RET_RAM_REG:1;      /**< \brief [4:4]   Indicates if the PPU_MEMRR register is
                                                                    present or reserved.  0: Reserved.  1: Present. (r) */
    __I  Ifx_UReg_32Bit FULL_RET_RAM_REG:1;     /**< \brief [5:5]   Indicates if the PPU_FULRR register is
                                                                    present or reserved.  0: Reserved.  1: Present. (r) */
    __I  Ifx_UReg_32Bit FUNC_RET_RAM_REG:1;     /**< \brief [6:6]   Indicates if the PPU_FUNRR register is
                                                                    present or reserved.  0: Reserved.  1: Present. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __I  Ifx_UReg_32Bit STA_POLICY_PWR_IRQ_SPT:1; /**< \brief [8:8]   Power policy transition completion event status. (r) */
    __I  Ifx_UReg_32Bit STA_POLICY_OP_IRQ_SPT:1; /**< \brief [9:9]   Operating policy transition completion
                                                                    event status. (r) */
    __I  Ifx_UReg_32Bit OP_ACTIVE:1;            /**< \brief [10:10] Reserved (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __I  Ifx_UReg_32Bit OFF_MEM_RET_TRANS:1;    /**< \brief [12:12] OFF to MEM_RET direct transition.
                                                                    Indicates if direct transitions from OFF to MEM_RET
                                                                    and from OFF_EMU to MEM_RET_EMU are supported. (r) */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [31:13] \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR1_Bits;

/** \brief Implementation Identification Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IIDR_Bits
{
    __I  Ifx_UReg_32Bit IMPLEMENTER:12;         /**< \brief [11:0]  Implementer identification.
                                                                    [11:8] The JEP106 continuation code of the implementer.
                                                                    [7] Always 0.
                                                                    [6:0] The JEP106 identity code of the implementer.
                                                                    For an Arm implementation, bits [11:0] are 0x43B. (r) */
    __I  Ifx_UReg_32Bit REVISION:4;             /**< \brief [15:12] Minor revision of the product. (r) */
    __I  Ifx_UReg_32Bit VARIANT:4;              /**< \brief [19:16] Major revision of the product. (r) */
    __I  Ifx_UReg_32Bit PRODUCT_ID:12;          /**< \brief [31:20] PPU part identification. (r) */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IIDR_Bits;

/** \brief Architecture Identification Register */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIDR_Bits
{
    __I  Ifx_UReg_32Bit ARCH_REV_MINOR:4;       /**< \brief [3:0]   0x1 - PPU Architecture minor revision 1.
                                                                    Other Values - Reserved. (r) */
    __I  Ifx_UReg_32Bit ARCH_REV_MAJOR:4;       /**< \brief [7:4]   0x1 - PPU architecture major revision 1.
                                                                    Other Values - Reserved. (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIDR_Bits;

/** \brief Implementation Defined Identification Register (PID4) */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID4_Bits
{
    __I  Ifx_UReg_32Bit IMPLEMENTER_11_8:4;     /**< \brief [3:0]   The JEP106 continuation code of the
                                                                    implementer, which is 0x4 hardcoded value. (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID4_Bits;

/** \brief Implementation Defined Identification Register (PID0) */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID0_Bits
{
    __I  Ifx_UReg_32Bit PRODUCT_ID_7_0:8;       /**< \brief [7:0]   PPU part identification bits [7:0]. (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID0_Bits;

/** \brief Implementation Defined Identification Register (PID1) */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID1_Bits
{
    __I  Ifx_UReg_32Bit PRODUCT_ID_11_8:4;      /**< \brief [3:0]   PPU part identification bits [11:8] (r) */
    __I  Ifx_UReg_32Bit IMPLEMENTER_3_0:4;      /**< \brief [7:4]   JEP106_ID bits [3:0] (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID1_Bits;

/** \brief Implementation Defined Identification Register (PID2) */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID2_Bits
{
    __I  Ifx_UReg_32Bit IMPLEMENTER_6_4:3;      /**< \brief [2:0]   JEP106_ID bits [6:4] (r) */
    __I  Ifx_UReg_32Bit CONST_HIGH:1;           /**< \brief [3:3]   Constant HIGH (r) */
    __I  Ifx_UReg_32Bit REV_CONST:4;            /**< \brief [7:4]   Constant LOW  Revision (4 bits) (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID2_Bits;

/** \brief Implementation Defined Identification Register (PID3) */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID3_Bits
{
    __I  Ifx_UReg_32Bit PID3_REV_CONST:4;       /**< \brief [3:0]   Constant LOW (4 bits) (r) */
    __I  Ifx_UReg_32Bit PID3_REVISION:4;        /**< \brief [7:4]   Minor revision of the product. (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID3_Bits;

/** \brief Implementation Defined Identification Register (ID0) */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID0_Bits
{
    __I  Ifx_UReg_32Bit ID0:8;                  /**< \brief [7:0]   ID0 hard coded value (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID0_Bits;

/** \brief Implementation Defined Identification Register (ID1) */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID1_Bits
{
    __I  Ifx_UReg_32Bit ID1:8;                  /**< \brief [7:0]   ID1 hardcoded value (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID1_Bits;

/** \brief Implementation Defined Identification Register (ID2) */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID2_Bits
{
    __I  Ifx_UReg_32Bit ID2:8;                  /**< \brief [7:0]   ID2 hardcoded value (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID2_Bits;

/** \brief Implementation Defined Identification Register (ID3) */
typedef struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID3_Bits
{
    __I  Ifx_UReg_32Bit ID3:8;                  /**< \brief [7:0]   ID3 hardcoded value (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID3_Bits;

/** \brief Counter control register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_CTRL_Bits
{
    __IO Ifx_UReg_32Bit AUTO_RELOAD_CC0:1;      /**< \brief [0:0]   Specifies switching of the CC0 and buffered
                                                                    CC0 values.
                                                                    This field has a function in TIMER, QUAD
                                                                    (QUAD_RANGE0_CMP, QUAD_RANGE1_CMP range modes), SR,
                                                                    PWM, PWM_DT and PWM_PR modes.
                                                                    Timer, QUAD, SR modes:
                                                                    '0': never switch.
                                                                    '1': switch on a compare match 0 event.
                                                                    PWM, PWM_DT, PWM_PR modes:
                                                                    '0: never switch.
                                                                    '1': switch on a terminal count event with an
                                                                    actively pending switch event. (rw) */
    __IO Ifx_UReg_32Bit AUTO_RELOAD_CC1:1;      /**< \brief [1:1]   Specifies switching of the CC1 and buffered
                                                                    CC1 values.
                                                                    This field has a function in TIMER, QUAD
                                                                    (QUAD_RANGE0_CMP, QUAD_RANGE1_CMP range modes), SR,
                                                                    PWM, PWM_DT and PWM_PR modes.
                                                                    Timer, QUAD, SR modes:
                                                                    '0': never switch.
                                                                    '1': switch on a compare match 1 event.
                                                                    PWM, PWM_DT, PWM_PR modes:
                                                                    '0: never switch.
                                                                    '1': switch on a terminal count event with an
                                                                    actively pending switch event. (rw) */
    __IO Ifx_UReg_32Bit AUTO_RELOAD_PERIOD:1;   /**< \brief [2:2]   Specifies switching of the PERIOD and
                                                                    buffered PERIOD values.
                                                                    This field has a function in PWM and PWM_DT modes.
                                                                    '0': never switch.
                                                                    '1': switch on a terminal count event with and
                                                                    actively pending switch event.
                                                                    In QUAD mode, QUAD_RANGE0_CMP range mode this field
                                                                    is used to select the index / wrap-around capture
                                                                    function.
                                                                    '0': Captures on index (reload) event.
                                                                    The counter value is copied to the PERIOD register
                                                                    on an index (reload) event.
                                                                    '1': Captures when COUNTER equals 0 or 0xffff.
                                                                    The counter value is copied to the PERIOD register
                                                                    when COUNTER equals 0 or 0xffff. (rw) */
    __IO Ifx_UReg_32Bit AUTO_RELOAD_LINE_SEL:1; /**< \brief [3:3]   Specifies switching of the LINE_SEL and
                                                                    LINE_BUFF_SEL values.
                                                                    This field has a function in PWM and PWM_PR modes.
                                                                    '0': never switch.
                                                                    '1': switch on a terminal count event with and
                                                                    actively pending switch event. (rw) */
    __IO Ifx_UReg_32Bit CC0_MATCH_UP_EN:1;      /**< \brief [4:4]   Enables / disables the compare match 0
                                                                    event generation (COUNTER equals CC0 register) when
                                                                    counting up (STATUS.DOWN = 0) in CNT_UPDN1/2 mode.
                                                                    '0': compare match 0 event generation disabled when
                                                                    counting up
                                                                    '1': compare match 0 event generation enabled when
                                                                    counting up
                                                                    This field has a function in PWM and PWM_DT modes only. (rw) */
    __IO Ifx_UReg_32Bit CC0_MATCH_DOWN_EN:1;    /**< \brief [5:5]   Enables / disables the compare match 0
                                                                    event generation (COUNTER equals CC0 register) when
                                                                    counting down (STATUS.DOWN = 1) in CNT_UPDN1/2 mode.
                                                                    '0': compare match 0 event generation disabled when
                                                                    counting down
                                                                    '1': compare match 0 event generation enabled when
                                                                    counting down
                                                                    This field has a function in PWM and PWM_DT modes only. (rw) */
    __IO Ifx_UReg_32Bit CC1_MATCH_UP_EN:1;      /**< \brief [6:6]   Enables / disables the compare match 1
                                                                    event generation (COUNTER equals CC0 register) when
                                                                    counting up (STATUS.DOWN = 0) in CNT_UPDN1/2 mode.
                                                                    '0': compare match 1 event generation disabled when
                                                                    counting up
                                                                    '1': compare match 1 event generation enabled when
                                                                    counting up
                                                                    This field has a function in PWM and PWM_DT modes only. (rw) */
    __IO Ifx_UReg_32Bit CC1_MATCH_DOWN_EN:1;    /**< \brief [7:7]   Enables / disables the compare match 1
                                                                    event generation (COUNTER equals CC0 register) when
                                                                    counting down (STATUS.DOWN = 1) in CNT_UPDN1/2 mode.
                                                                    '0': compare match 1 event generation disabled when
                                                                    counting down
                                                                    '1': compare match 1 event generation enabled when
                                                                    counting down
                                                                    This field has a function in PWM and PWM_DT modes only. (rw) */
    __IO Ifx_UReg_32Bit PWM_IMM_KILL:1;         /**< \brief [8:8]   Specifies whether the kill event
                                                                    immediately deactivates the 'line_out' and
                                                                    'line_compl_out' signals or with the next module
                                                                    clock ('active count' pre-scaled 'clk_counter').
                                                                    '0': synchronous kill activation.
                                                                    Deactivates the 'line_out' and 'line_compl_out'
                                                                    signals with the next module clock ('active count'
                                                                    pre-scaled 'clk_counter').
                                                                    '1': immediate kill activation.
                                                                    Immediately deactivates the 'dt_line_out' and
                                                                    'dt_line_compl_out' signals.
                                                                    This field has a function in PWM, PWM_DT and PWM_PR
                                                                    modes only. (rw) */
    __IO Ifx_UReg_32Bit PWM_STOP_ON_KILL:1;     /**< \brief [9:9]   Specifies whether the counter stops on a
                                                                    kill events:
                                                                    '0': kill event does NOT stop counter.
                                                                    '1': kill event stops counter.
                                                                    This field has a function in PWM, PWM_DT and PWM_PR
                                                                    modes only. (rw) */
    __IO Ifx_UReg_32Bit PWM_SYNC_KILL:1;        /**< \brief [10:10] Specifies asynchronous/synchronous kill
                                                                    behavior:
                                                                    '1': synchronous kill mode: the kill event disables
                                                                    the 'line_out' and 'line_compl_out' signals immediately.
                                                                    'Line_out' and 'Line_compl_out' will be enable at
                                                                    the next terminal count event (synchronous kill)
                                                                    after kill event is inactive.
                                                                    In synchronous kill mode, STOP_EDGE should  be
                                                                    RISING_EDGE.
                                                                    '0': asynchronous kill mode: the kill event only
                                                                    disables the 'dt_line_out' and 'dt_line_compl_out'
                                                                    signals when present.
                                                                    In asynchronous kill mode, STOP_EDGE should be
                                                                    NO_EDGE_DET.
                                                                    This field has a function in PWM and PWM_DT modes only.
                                                                    This field is only used when PWM_STOP_ON_KILL is '0'. (rw) */
    __IO Ifx_UReg_32Bit SWAP_ENABLE:1;          /**< \brief [11:11] Specifies whether swapping mechanism
                                                                    between CC0 and buffered CC0, CC1 and buffered CC1,
                                                                    PERIOD and buffered PERIOD, DT and buffered DT are disabled
                                                                    '0': swap is disable
                                                                    '1': swap is enable (rw) */
    __IO Ifx_UReg_32Bit PWM_DISABLE_MODE:2;     /**< \brief [13:12] Specifies the behavior of the PWM outputs
                                                                    'line_out' and 'line_compl_out' while the TCPWM
                                                                    counter is disabled (CTRL.ENABLED='0') or stopped.
                                                                    Note: The output signal of this selection can be
                                                                    further modified by the immediate kill logic and
                                                                    line_out polarity settings (CTRL.QUAL_ENCODING_MODE). (rw)
                                                Z             : 0u   The behavior is the same is in previous mxtcpwm
                                                                    (version 1).
                                                                    When the counter is disabled the PWM outputs
                                                                    "line_out" and "line_compl_out" are NOT driven by
                                                                    the TCPWM.
                                                                    Instead the port default level configuration applies, e.g.
                                                                    "Z" (high impedance).
                                                                    Note: This is realized by driving the TCPWM output
                                                                    "line_out_en" to 0.
                                                                    When the counter is stopped upon a stop event the
                                                                    PWM outputs are deactivated (to the polarity
                                                                    defined by CTRL.KILL_LINE_POLARITY).
                                                RETAIN        : 1u   When the counter is disabled the PWM outputs
                                                                    "line_out" and "line_compl_out" are driven by the TCPWM.
                                                                    When the counter is disabled or stopped upon a stop
                                                                    event the PWM outputs are retained (keep their
                                                                    previous levels).
                                                                    While the counter is disabled or stopped the PWM
                                                                    outputs can be changed via LINE_SEL (when parameter
                                                                    GRP_SMC_PRESENT = 1).
                                                L             : 2u   When the counter is disabled the PWM outputs
                                                                    "line_out" and "line_compl_out" are driven by the TCPWM.
                                                                    When the counter is disabled or stopped upon a stop
                                                                    event the PWM output "line_out" is driven as a
                                                                    fixed '0' and the PWM output "line_compl_out" is
                                                                    driven as a fixed '1'.
                                                H             : 3u   When the counter is disabled the PWM outputs
                                                                    "line_out" and "line_compl_out" are driven by the TCPWM.
                                                                    When the counter is disabled or stopped upon a stop
                                                                    event the PWM output "line_out" is driven as a
                                                                    fixed '1' and the PWM output "line_compl_out" is
                                                                    driven as a fixed '0'. */
    __IO Ifx_UReg_32Bit PWM_TC_SYNC_KILL_DT:1;  /**< \brief [14:14] Specifies TC synchronour DT kill behavior:
                                                                    '1': TC synchronous DT kill mode: the kill event
                                                                    disables the 'line_out' and 'line_compl_out'
                                                                    signals at the next terminal count event and till
                                                                    the next terminal count event (synchronous 3 kill).
                                                                    If dead time is enabled, output get disables after
                                                                    the tc event + dead time.
                                                                    'Line_out' and 'line_comp_out' get enable at next
                                                                    tc event after input input is inactive
                                                                    In synchronous kill mode, STOP_EDGE should  be
                                                                    RISING_EDGE.
                                                                    '0': TC synchronous DT kill mode: Disable
                                                                    This field has a function in PWM_DT modes only.
                                                                    This field is only used when PWM_STOP_ON_KILL is '0'. (rw) */
    __IO Ifx_UReg_32Bit PWM_SYNC_KILL_DT:1;     /**< \brief [15:15] Specifies synchronous DT kill behavior:
                                                                    '1': synchronous DT kill mode: the kill event
                                                                    disables the 'line_out' immediately whereas
                                                                    'line_compl_out' signals will be disable after dead
                                                                    time till the next terminal count event
                                                                    (synchronous DT kill).
                                                                    'Line_out' and 'line_compl_out' get enable at next
                                                                    tc event after kill input is inactive.
                                                                    In synchronous DT kill mode, STOP_EDGE should  be
                                                                    RISING_EDGE.
                                                                    '0': synchronous DT kill mode: Disable
                                                                    This field has a function in PWM_DT modes only.
                                                                    This field is only used when PWM_STOP_ON_KILL is '0'. (rw) */
    __IO Ifx_UReg_32Bit UP_DOWN_MODE:2;         /**< \brief [17:16] Determines counter direction.
                                                                    In QUAD mode this field acts as QUAD_RANGE_MODE
                                                                    field selecting between different counter range,
                                                                    reload value and compare / capture behavior. (rw)
                                                COUNT_UP      : 0u   Count up (to PERIOD).
                                                                    An overflow event is generated when the counter
                                                                    changes from a state in which COUNTER equals PERIOD.
                                                                    A terminal count event is generated when the
                                                                    counter changes from a state in which COUNTER
                                                                    equals PERIOD.
                                                COUNT_DOWN    : 1u   Count down (to "0").
                                                                    An underflow event is generated when  the counter
                                                                    changes from a state in which COUNTER equals "0".
                                                                    A terminal count event is generated when the
                                                                    counter changes from a state in which COUNTER
                                                                    equals "0".
                                                COUNT_UPDN1   : 2u   Count up (to PERIOD), then count down (to "0").
                                                                    An overflow event is generated when the counter
                                                                    changes from a state in which COUNTER equals PERIOD.
                                                                    An underflow event is generated when the counter
                                                                    changes from a state in which COUNTER equals "0".
                                                                    A terminal count event is generated when the
                                                                    counter changes from a state in which COUNTER
                                                                    equals "0".
                                                COUNT_UPDN2   : 3u   Count up (to PERIOD), then count down (to "0").
                                                                    An overflow event is generated when the counter
                                                                    changes from a state in which COUNTER equals PERIOD.
                                                                    An underflow event is generated when the counter
                                                                    changes from a state in which COUNTER equals "0".
                                                                    A terminal count event is generated when the
                                                                    counter changes from a state in which COUNTER
                                                                    equals "0" AND when the counter changes from a
                                                                    state in which COUNTER equals PERIOD (this counter
                                                                    direction can be used for PWM functionality with
                                                                    asymmetrical updates).
                                                QUAD_RANGE0   : 0u   In QUAD mode this setting selects the QUAD_RANGE0
                                                                    mode with the following behavior:
                                                                    - COUNTER range is between 0x0000 and 0xFFFF /
                                                                    0xFFFFFFFF (for GRP_CNT_WIDTH = 16 / 32)
                                                                    - on reload / index event:
                                                                      - CC0 is copied to CC0_BUFF
                                                                      - COUNTER is copied to CC0
                                                                      - COUNTER is set to midpoint (0x8000 / 0x80000000)
                                                                      - tc and cc0_match events are generated
                                                                    - when COUNTER is 0x0000 or 0xFFFF / 0xFFFFFFFF:
                                                                      - CC0 is copied to CC0_BUFF
                                                                    - COUNTER (0x0000 or 0xFFFF / 0xFFFFFFFF) is
                                                                    copied to CC0
                                                                      - COUNTER is set to midpoint (0x8000 / 0x80000000)
                                                                      - cc0_match event is generated
                                                                    This mode is 100% backward compatible with previous
                                                                    TCPWM quadrature behavior.
                                                QUAD_RANGE0_CMP: 1u   In QUAD mode this setting selects the
                                                                    QUAD_RANGE0_CMP mode with the following behavior:
                                                                    - COUNTER range is between 0x0000 and 0xFFFF /
                                                                    0xFFFFFFFF (for GRP_CNT_WIDTH = 16 / 32)
                                                                    - the capture0 event acts as 2nd reload / index event
                                                                    - on reload / index event:
                                                                      - COUNTER is set to midpoint (0x8000 / 0x80000000)
                                                                    - when 'capture on index' is selected
                                                                    (AUTO_RELOAD_PERIOD=0):
                                                                        - tc event is generated
                                                                        - PERIOD is copied to PERIOD_BUFF
                                                                        - COUNTER is copied to PERIOD
                                                                    - when COUNTER is 0x0000 or  0xFFFF / 0xFFFFFFFF:
                                                                      - COUNTER is set to midpoint (0x8000 / 0x80000000)
                                                                    - when 'capture on wrap-around' is selected
                                                                    (AUTO_RELOAD_PERIOD=1):
                                                                        - tc event is generated
                                                                        - PERIOD is copied to PERIOD_BUFF
                                                                    - COUNTER (0x0000 or 0xFFFF / 0xFFFFFFFF) is
                                                                    copied to PERIOD
                                                                    - 1 or 2 compare functions (depending on
                                                                    CC1_PRESENT) available
                                                                    This mode is to a certain extend backward
                                                                    compatible with previous TCPWM quadrature behavior
                                                                    but allows a compare function during quadrature
                                                                    decoding using the CC0/CC_BUFF registers and the
                                                                    cc0_match event.
                                                                    Because of that the PERIOD/PERIOD_BUFF registers
                                                                    are used instead of CC0/CC_BUFF registers to
                                                                    capture COUNTER at reload / index event or
                                                                    wrap-around.
                                                QUAD_RANGE1_CAPT: 2u   In QUAD mode this setting selects the
                                                                    QUAD_RANGE1_CAPT mode with the following behavior:
                                                                    - COUNTER range is between 0x0000 and PERIOD
                                                                    - on reload / index event:
                                                                      - COUNTER is set to 0x0000
                                                                      - tc event is generated
                                                                    - when COUNTER is 0x0000 and decrementing:
                                                                      - COUNTER is set to PERIOD
                                                                      - tc event is generated
                                                                    - when COUNTER equals PERIOD and is incrementing:
                                                                      - COUNTER is set to 0x0000
                                                                      - tc event is generated
                                                                    - 1 or 2 capture functions (depending on
                                                                    CC1_PRESENT) available
                                                                    - on capture0 / capture1 event:
                                                                      - CC0 / CC1 is copied to CC0_BUFF / CC1_BUFF
                                                                      - COUNTER value is copied to CC0
                                                                    This mode is NOT backward compatible with previous
                                                                    TCPWM quadrature behavior.
                                                                    It is to a certain extend compatible with previous
                                                                    Traveo 1 QPRC behavior.
                                                                    It allows that the COUNTER register reflects the
                                                                    current angle position of the rotary encoder, i.e.
                                                                    no MOD or SUB calculations need to be done in SW on
                                                                    the COUNTER value to get the current angle position.
                                                                    This allows a DMA copy of the angle position from
                                                                    the COUNTER register.
                                                                    However, a disadvantage of this mode is that fast
                                                                    sequences of tc interrupts can occur (when encoder
                                                                    moves back and forth around start position).
                                                                    It is recommended to not use the tc interrupt in
                                                                    this mode.
                                                QUAD_RANGE1_CMP: 3u   In QUAD mode this setting selects the QUAD_RANGE1_CMP mode.
                                                                    The behavior is the same as for QUAD_RANGE1_CAPT
                                                                    mode described above with the only difference that
                                                                    1 or 2 compare functions (depending on CC1_PRESENT)
                                                                    are available instead of 1 or 2 capture functions. */
    __IO Ifx_UReg_32Bit ONE_SHOT:1;             /**< \brief [18:18] When '0', counter runs continuous.
                                                                    When '1', counter is turned off by hardware when a
                                                                    terminal count event is generated. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit QUAD_ENCODING_MODE:2;   /**< \brief [21:20] In QUAD mode this field selects the
                                                                    quadrature encoding mode (X1/X2/X4) or the Up /
                                                                    Down rotary counting mode.
                                                                    In PWM, PWM_DT, PWM_PR and SR modes, these two bits
                                                                    can be used to invert 'line_out' and 'line_compl_out'.
                                                                    Inversion is the last step in generation of
                                                                    'line_out' and 'line_compl_out'; i.e.
                                                                    a disabled output line 'line_out' has the value
                                                                    QUAD_ENCODING_MODE[0] and a disabled output line
                                                                    'line_compl_out' has the value
                                                                    QUAD_ENCODING_MODE[1].
                                                                    In TIMER mode, QUAD_ENCODING_MODE[1:0] is used to
                                                                    enable count up/down based on falling edges, rising
                                                                    edge or level of external capture0 event. (rw)
                                                X1            : 0u   X1 encoding (QUAD mode)
                                                                    This encoding is identical with an up / down
                                                                    counting functionality of the following way: Rising
                                                                    edges of input phiA increment or decrement the
                                                                    counter depending on the state of input phiB
                                                                    (direction input).
                                                X2            : 1u   X2 encoding (QUAD mode)
                                                X4            : 2u   X4 encoding (QUAD mode)
                                                UP_DOWN       : 3u   Up / Down rotary counting mode.
                                                                    Input phiA increments the counter, input phiB
                                                                    decrements the counter.
                                                                    The trigger edge detection settings apply.
                                                INV_OUT       : 1u   In PWM/PWM_DT modes, when bit 0 is '1',
                                                                    QUADRATURE_ENCODING_MODE[0] inverts "line_out"
                                                INV_COMPL_OUT : 2u   In PWM/PWM_DT modes, when bit 1 is '1',
                                                                    QUADRATURE_ENCODING_MODE[1] inverts "line_compl_out"
                                                EXT_DIR_DISABLE: 0u   In Timer Mode: Counter changes current count
                                                                    direction is disabled
                                                EXT_DIR_FALLING: 1u   In Timer Mode: Counter changes current count
                                                                    direction based on falling edge of capture0 input
                                                EXT_DIR_RISING: 2u   In Timer Mode: Counter changes current count
                                                                    direction based on rising edge of capture0 input
                                                EXT_DIR_LEVEL : 3u   In Timer Mode: Counter count increase when capture0
                                                                    level equal to high, counter count decrease when
                                                                    capture0 level equals to low. */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __IO Ifx_UReg_32Bit MODE:3;                 /**< \brief [26:24] Counter mode. (rw)
                                                TIMER         : 0u   Timer mode
                                                Reserved1     : 1u   This setting is reserved. Do not use.
                                                CAPTURE       : 2u   Capture mode
                                                QUAD          : 3u   Quadrature mode
                                                                    Different encoding modes can be selected by
                                                                    QUAD_ENCODING_MODE including up/down count
                                                                    functionality.
                                                                    Different counter range, reload value and capture
                                                                    behavior can be selected by QUAD_RANGE_MODE
                                                                    (overloaded field UP_DOWN_MODE).
                                                PWM           : 4u   Pulse width modulation (PWM) mode.
                                                                    HRPWM feature is supported in this mode through
                                                                    HRPWM_CTRL register.
                                                PWM_DT        : 5u   PWM with deadtime insertion mode.
                                                                    HRPWM feature is supported in this mode through
                                                                    HRPWM_CTRL register.
                                                PWM_PR        : 6u   Pseudo random pulse width modulation
                                                SR            : 7u   Shift register mode. */
    __IO Ifx_UReg_32Bit KILL_LINE_POLARITY:2;   /**< \brief [28:27] In PWM and  PWM_DT modes, these two bits
                                                                    can be used to invert 'line_out' and
                                                                    'line_compl_out' during kill mode (rw)
                                                KILL_LINE_OUT_POLARITY: 1u   When bit 0 is '1', inverts the suppressed
                                                                    "line_out" during KILL (PWM/PWM_DT/PWM_DISABLE modes).
                                                                    In the debug mode the safe state of the line_out is
                                                                    defined by this bit value.
                                                                     1 - line_out will be high
                                                                     0 - line_out will be low
                                                KILL_LINE_COMPL_OUT_POLARITY: 2u   When bit 1 is '1', inverts the suppressed
                                                                    "line_comp_out" during KILL (PWM/PWM_DT/PWM_DISABLE modes).
                                                                    In the debug mode the safe state of the
                                                                    line_compl_out is defined by this bit value.
                                                                     1 - line_compl_out will be high
                                                                     0 - line_compl_out will be low */
    __IO Ifx_UReg_32Bit DBG_SUS_EN:1;           /**< \brief [29:29] Specifies the counter behavior in debug
                                                                    mode when suspend is enabled
                                                                    '0': The counter operation continues in debug mode
                                                                    as given by bit DBG_FREEZE_EN
                                                                    '1': The counter operation freezes in debug mode
                                                                    depending on DBG_FREEZE_EN value; when = '0',
                                                                    Counter Freeze after roll over (tc event) and
                                                                    enters safe state; when ='1', Counter Freeze
                                                                    immediately  and enters safe state and running bit
                                                                    to be made ='0'.
                                                                    Safe state values are defined on line_out and
                                                                    line_compl_out by the corressponding
                                                                    kill_line_out_polarity and
                                                                    kill_line_compl_out_polarity (rw) */
    __IO Ifx_UReg_32Bit DBG_FREEZE_EN:1;        /**< \brief [30:30] Specifies the counter behavior in debug mode.
                                                                    '0': The counter operation depends on DBG_SUS_EN
                                                                    value, when ='0', counter operation continues; when
                                                                    ='1', Counter Freeze after roll over (tc event) and
                                                                    enters safe state.
                                                                    '1': The counter operation freezes in debug mode
                                                                    depending on DBG_SUS_EN value; when='0', Counter
                                                                    Freeze; when ='1', Counter Freeze immediately  and
                                                                    enters safe state and running bit to be made ='0'.
                                                                    Safe state values are defined on line_out and
                                                                    line_compl_out by the corressponding
                                                                    kill_line_out_polarity and
                                                                    kill_line_compl_out_polarity (rw) */
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [31:31] Counter enable.
                                                                    '0': counter disabled.
                                                                    '1': counter enabled.
                                                                    Counter static configuration information (e.g.
                                                                    CTRL.MODE, all TR_IN_SEL, TR_IN_EDGE_SEL,
                                                                    TR_PWM_CTRL and TR_OUT_SEL register fields) should
                                                                    only be modified when the counter is disabled.
                                                                    When a counter is disabled, command and status
                                                                    information associated to the counter is cleared by
                                                                    HW, this includes:
                                                                    - the associated counter triggers in the CMD
                                                                    register are set to '0'.
                                                                    - the counter's interrupt cause fields in counter's
                                                                    INTR register.
                                                                    - the counter's status fields in counter's STATUS
                                                                    register..
                                                                    - the counter's trigger outputs ('tr_out0' and
                                                                    tr_out1').
                                                                    - the counter's line outputs ('line_out' and
                                                                    'line_compl_out'). (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_CTRL_Bits;

/* PPCA_TCPWM_GRP_CNT_CTRL.PWM_DISABLE_MODE enumerated values */

/** \brief The behavior is the same is in previous mxtcpwm (version 1).
When the counter is disabled the PWM outputs "line_out" and "line_compl_out"
are NOT driven by the TCPWM. Instead the port default level configuration applies, e.g.
"Z" (high impedance).
Note: This is realized by driving the TCPWM output "line_out_en" to 0.
When the counter is stopped upon a stop event the PWM outputs are deactivated
(to the polarity defined by CTRL.KILL_LINE_POLARITY). */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_Z (0u)

/** \brief When the counter is disabled the PWM outputs "line_out" and "line_compl_out"
are driven by the TCPWM.
When the counter is disabled or stopped upon a stop event the PWM outputs are
retained (keep their previous levels).
While the counter is disabled or stopped the PWM outputs can be changed via
LINE_SEL (when parameter GRP_SMC_PRESENT = 1). */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_RETAIN (1u)

/** \brief When the counter is disabled the PWM outputs "line_out" and "line_compl_out"
are driven by the TCPWM.
When the counter is disabled or stopped upon a stop event the PWM output
"line_out" is driven as a fixed '0' and the PWM output "line_compl_out" is
driven as a fixed '1'. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_L (2u)

/** \brief When the counter is disabled the PWM outputs "line_out" and "line_compl_out"
are driven by the TCPWM.
When the counter is disabled or stopped upon a stop event the PWM output
"line_out" is driven as a fixed '1' and the PWM output "line_compl_out" is
driven as a fixed '0'. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_H (3u)

/* PPCA_TCPWM_GRP_CNT_CTRL.UP_DOWN_MODE enumerated values */

/** \brief Count up (to PERIOD).
An overflow event is generated when the counter changes from a state in which
COUNTER equals PERIOD.
A terminal count event is generated when the counter changes from a state in
which COUNTER equals PERIOD. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_COUNT_UP (0u)

/** \brief Count down (to "0").
An underflow event is generated when  the counter changes from a state in which
COUNTER equals "0".
A terminal count event is generated when the counter changes from a state in
which COUNTER equals "0". */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_COUNT_DOWN (1u)

/** \brief Count up (to PERIOD), then count down (to "0").
An overflow event is generated when the counter changes from a state in which
COUNTER equals PERIOD.
An underflow event is generated when the counter changes from a state in which
COUNTER equals "0".
A terminal count event is generated when the counter changes from a state in
which COUNTER equals "0". */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_COUNT_UPDN1 (2u)

/** \brief Count up (to PERIOD), then count down (to "0").
An overflow event is generated when the counter changes from a state in which
COUNTER equals PERIOD.
An underflow event is generated when the counter changes from a state in which
COUNTER equals "0".
A terminal count event is generated when the counter changes from a state in
which COUNTER equals "0" AND when the counter changes from a state in which
COUNTER equals PERIOD (this counter direction can be used for PWM functionality
with asymmetrical updates). */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_COUNT_UPDN2 (3u)

/** \brief In QUAD mode this setting selects the QUAD_RANGE0 mode with the following
behavior:
- COUNTER range is between 0x0000 and 0xFFFF / 0xFFFFFFFF (for GRP_CNT_WIDTH = 16 / 32)
- on reload / index event:
  - CC0 is copied to CC0_BUFF
  - COUNTER is copied to CC0
  - COUNTER is set to midpoint (0x8000 / 0x80000000)
  - tc and cc0_match events are generated
- when COUNTER is 0x0000 or 0xFFFF / 0xFFFFFFFF:
  - CC0 is copied to CC0_BUFF
  - COUNTER (0x0000 or 0xFFFF / 0xFFFFFFFF) is copied to CC0
  - COUNTER is set to midpoint (0x8000 / 0x80000000)
  - cc0_match event is generated
This mode is 100% backward compatible with previous TCPWM quadrature behavior. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_QUAD_RANGE0 (0u)

/** \brief In QUAD mode this setting selects the QUAD_RANGE0_CMP mode with the following
behavior:
- COUNTER range is between 0x0000 and 0xFFFF / 0xFFFFFFFF (for GRP_CNT_WIDTH = 16 / 32)
- the capture0 event acts as 2nd reload / index event
- on reload / index event:
  - COUNTER is set to midpoint (0x8000 / 0x80000000)
  - when 'capture on index' is selected (AUTO_RELOAD_PERIOD=0):
    - tc event is generated
    - PERIOD is copied to PERIOD_BUFF
    - COUNTER is copied to PERIOD
- when COUNTER is 0x0000 or  0xFFFF / 0xFFFFFFFF:
  - COUNTER is set to midpoint (0x8000 / 0x80000000)
  - when 'capture on wrap-around' is selected (AUTO_RELOAD_PERIOD=1):
    - tc event is generated
    - PERIOD is copied to PERIOD_BUFF
    - COUNTER (0x0000 or 0xFFFF / 0xFFFFFFFF) is copied to PERIOD
- 1 or 2 compare functions (depending on CC1_PRESENT) available
This mode is to a certain extend backward compatible with previous TCPWM
quadrature behavior but allows a compare function during quadrature decoding
using the CC0/CC_BUFF registers and the cc0_match event.
Because of that the PERIOD/PERIOD_BUFF registers are used instead of
CC0/CC_BUFF registers to capture COUNTER at reload / index event or wrap-around. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_QUAD_RANGE0_CMP (1u)

/** \brief In QUAD mode this setting selects the QUAD_RANGE1_CAPT mode with the following
behavior:
- COUNTER range is between 0x0000 and PERIOD
- on reload / index event:
  - COUNTER is set to 0x0000
  - tc event is generated
- when COUNTER is 0x0000 and decrementing:
  - COUNTER is set to PERIOD
  - tc event is generated
- when COUNTER equals PERIOD and is incrementing:
  - COUNTER is set to 0x0000
  - tc event is generated
- 1 or 2 capture functions (depending on CC1_PRESENT) available
- on capture0 / capture1 event:
  - CC0 / CC1 is copied to CC0_BUFF / CC1_BUFF
  - COUNTER value is copied to CC0
This mode is NOT backward compatible with previous TCPWM quadrature behavior.
It is to a certain extend compatible with previous Traveo 1 QPRC behavior.
It allows that the COUNTER register reflects the current angle position of the
rotary encoder, i.e.
no MOD or SUB calculations need to be done in SW on the COUNTER value to get
the current angle position.
This allows a DMA copy of the angle position from the COUNTER register.
However, a disadvantage of this mode is that fast sequences of tc interrupts
can occur (when encoder moves back and forth around start position).
It is recommended to not use the tc interrupt in this mode. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_QUAD_RANGE1_CAPT (2u)

/** \brief In QUAD mode this setting selects the QUAD_RANGE1_CMP mode.
The behavior is the same as for QUAD_RANGE1_CAPT mode described above with the
only difference that 1 or 2 compare functions (depending on CC1_PRESENT) are
available instead of 1 or 2 capture functions. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_QUAD_RANGE1_CMP (3u)

/* PPCA_TCPWM_GRP_CNT_CTRL.QUAD_ENCODING_MODE enumerated values */

/** \brief X1 encoding (QUAD mode)
This encoding is identical with an up / down counting functionality of the
following way: Rising edges of input phiA increment or decrement the counter
depending on the state of input phiB (direction input). */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_X1 (0u)

/** \brief X2 encoding (QUAD mode) */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_X2 (1u)

/** \brief X4 encoding (QUAD mode) */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_X4 (2u)

/** \brief Up / Down rotary counting mode.
Input phiA increments the counter, input phiB decrements the counter.
The trigger edge detection settings apply. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_UP_DOWN (3u)

/** \brief In PWM/PWM_DT modes, when bit 0 is '1', QUADRATURE_ENCODING_MODE[0] inverts
"line_out" */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_INV_OUT (1u)

/** \brief In PWM/PWM_DT modes, when bit 1 is '1', QUADRATURE_ENCODING_MODE[1] inverts
"line_compl_out" */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_INV_COMPL_OUT (2u)

/** \brief In Timer Mode: Counter changes current count direction is disabled */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_EXT_DIR_DISABLE (0u)

/** \brief In Timer Mode: Counter changes current count direction based on falling edge of
capture0 input */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_EXT_DIR_FALLING (1u)

/** \brief In Timer Mode: Counter changes current count direction based on rising edge of
capture0 input */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_EXT_DIR_RISING (2u)

/** \brief In Timer Mode: Counter count increase when capture0 level equal to high,
counter count decrease when capture0 level equals to low. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_EXT_DIR_LEVEL (3u)

/* PPCA_TCPWM_GRP_CNT_CTRL.MODE enumerated values */

/** \brief Timer mode */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_MODE_TIMER (0u)

/** \brief This setting is reserved. Do not use. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_MODE_Reserved1 (1u)

/** \brief Capture mode */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_MODE_CAPTURE (2u)

/** \brief Quadrature mode
Different encoding modes can be selected by QUAD_ENCODING_MODE including
up/down count functionality.
Different counter range, reload value and capture behavior can be selected by
QUAD_RANGE_MODE (overloaded field UP_DOWN_MODE). */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_MODE_QUAD (3u)

/** \brief Pulse width modulation (PWM) mode.
HRPWM feature is supported in this mode through HRPWM_CTRL register. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_MODE_PWM (4u)

/** \brief PWM with deadtime insertion mode.
HRPWM feature is supported in this mode through HRPWM_CTRL register. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_MODE_PWM_DT (5u)

/** \brief Pseudo random pulse width modulation */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_MODE_PWM_PR (6u)

/** \brief Shift register mode. */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_MODE_SR (7u)

/* PPCA_TCPWM_GRP_CNT_CTRL.KILL_LINE_POLARITY enumerated values */

/** \brief When bit 0 is '1', inverts the suppressed "line_out" during KILL
(PWM/PWM_DT/PWM_DISABLE modes).
In the debug mode the safe state of the line_out is defined by this bit value.
 1 - line_out will be high
 0 - line_out will be low */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_KILL_LINE_POLARITY_KILL_LINE_OUT_POLARITY (1u)

/** \brief When bit 1 is '1', inverts the suppressed "line_comp_out" during KILL
(PWM/PWM_DT/PWM_DISABLE modes).
In the debug mode the safe state of the line_compl_out is defined by this bit value.
 1 - line_compl_out will be high
 0 - line_compl_out will be low */
#define IFX_PPCA_TCPWM_GRP_CNT_CTRL_KILL_LINE_POLARITY_KILL_LINE_COMPL_OUT_POLARITY (2u)

/** \brief Counter status register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_STATUS_Bits
{
    __I  Ifx_UReg_32Bit DOWN:1;                 /**< \brief [0:0]   When '0', counter is counting up.
                                                                    When '1', counter is counting down.
                                                                    In QUAD mode, this field indicates the direction of
                                                                    the latest counter change: '0' when last
                                                                    incremented and '1' when last decremented. (r) */
    __I  Ifx_UReg_32Bit CC0_READ_MISS:1;        /**< \brief [1:1]   When '0', CPU did not miss reading capture0
                                                                    event information
                                                                    When '1', CPU miss reading past capture0 event
                                                                    information (r) */
    __I  Ifx_UReg_32Bit CC1_READ_MISS:1;        /**< \brief [2:2]   When '0', CPU did not miss reading capture1
                                                                    event information
                                                                    When '1', CPU miss reading past capture1 event
                                                                    information (r) */
    __I  Ifx_UReg_32Bit KILL_STATUS:1;          /**< \brief [3:3]   When '0', There is no kill event in pwm,
                                                                    pwm_dt ,pwm_pr ,sr operation
                                                                    When '1', There is kill event currently active in
                                                                    pwm, pwm_dt ,pwm_pr ,sr operation (r) */
    __I  Ifx_UReg_32Bit TR_CAPTURE0:1;          /**< \brief [4:4]   Indicates the actual level of the selected
                                                                    capture 0 trigger. (r) */
    __I  Ifx_UReg_32Bit TR_COUNT:1;             /**< \brief [5:5]   Indicates the actual level of the selected
                                                                    count trigger. (r) */
    __I  Ifx_UReg_32Bit TR_RELOAD:1;            /**< \brief [6:6]   Indicates the actual level of the selected
                                                                    reload trigger. (r) */
    __I  Ifx_UReg_32Bit TR_STOP:1;              /**< \brief [7:7]   Indicates the actual level of the selected
                                                                    stop trigger. (r) */
    __I  Ifx_UReg_32Bit TR_START:1;             /**< \brief [8:8]   Indicates the actual level of the selected
                                                                    start trigger. (r) */
    __I  Ifx_UReg_32Bit TR_CAPTURE1:1;          /**< \brief [9:9]   Indicates the actual level of the selected
                                                                    capture 1 trigger. (r) */
    __I  Ifx_UReg_32Bit LINE_OUT:1;             /**< \brief [10:10] Indicates the actual level of the PWM line
                                                                    output signal. (r) */
    __I  Ifx_UReg_32Bit LINE_COMPL_OUT:1;       /**< \brief [11:11] Indicates the actual level of the
                                                                    complementary PWM line output signal. (r) */
    __I  Ifx_UReg_32Bit TR_DC:1;                /**< \brief [12:12] Indicates the actual level of the selected
                                                                    DC trigger. (r) */
    __I  Ifx_UReg_32Bit TR_MASK:1;              /**< \brief [13:13] Indicates the actual level of the selected
                                                                    mask trigger. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [14:14] \internal Reserved */
    __I  Ifx_UReg_32Bit RUNNING:1;              /**< \brief [15:15] When '0', the counter is NOT running.
                                                                    When '1', the counter is running.
                                                                    This field is used to indicate that the counter is
                                                                    running after a start/reload event and that the
                                                                    counter is stopped after a stop event.
                                                                    When a running counter operation is paused in debug
                                                                    state (see CTRL.DBG_PAUSE) then the RUNNING bit is
                                                                    still '1'. (r) */
    __I  Ifx_UReg_32Bit DT_CNT_L:8;             /**< \brief [23:16] Generic 8-bit counter field.
                                                                    In PWM_DT mode, this counter is used for dead time
                                                                    insertion (8bit dead time counter or low byte of
                                                                    16-bit dead time counter). (r) */
    __I  Ifx_UReg_32Bit DT_CNT_H:8;             /**< \brief [31:24] High byte of 16-bit dead time counter.
                                                                    In PWM_DT mode, this counter is used for dead time
                                                                    insertion.
                                                                    In all other modes, this field has no effect.
                                                                    Note: This field only exists when parameter
                                                                    GRP_AMC_PRESENT for advanced motor control is set to 1.
                                                                    Otherwise the dead time is only 8bit wide and the
                                                                    only the field DT_CNT_L is used as dead time counter. (r) */
} Ifx_PPCA_TCPWM_GRP_CNT_STATUS_Bits;

/** \brief Counter count register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_COUNTER_Bits
{
    __IO Ifx_UReg_32Bit COUNTER:32;             /**< \brief [31:0]  16-bit / 32-bit counter value.
                                                                    It is advised to not write to this field when the
                                                                    counter is running. (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_COUNTER_Bits;

/** \brief Counter compare/capture 0 register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_CC0_Bits
{
    __IO Ifx_UReg_32Bit CC:32;                  /**< \brief [31:0]  In CAPTURE mode, captures the counter value.
                                                                    In other modes, compared to counter value.
                                                                    In compare mode LSBs given by GRP_HRPWM_WIDTH is
                                                                    used  for HRPWM generation when GRP_HRPWM_PRESENT ='1'. (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_CC0_Bits;

/** \brief Counter buffered compare/capture 0 register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF_Bits
{
    __IO Ifx_UReg_32Bit CC:32;                  /**< \brief [31:0]  Additional buffer for counter CC register.
                                                                    In compare mode  LSBs given by GRP_HRPWM_WIDTH is
                                                                    used  for HRPWM generation when GRP_HRPWM_PRESENT ='1'. (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF_Bits;

/** \brief Counter compare/capture 1 register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_CC1_Bits
{
    __IO Ifx_UReg_32Bit CC:32;                  /**< \brief [31:0]  In CAPTURE mode, captures the counter value.
                                                                    In other modes, compared to counter value.
                                                                    In compare mode LSBs given by GRP_HRPWM_WIDTH is
                                                                    used  for HRPWM generation when GRP_HRPWM_PRESENT ='1'. (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_CC1_Bits;

/** \brief Counter buffered compare/capture 1 register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF_Bits
{
    __IO Ifx_UReg_32Bit CC:32;                  /**< \brief [31:0]  Additional buffer for counter CC1 register.
                                                                    In compare mode LSBs given by GRP_HRPWM_WIDTH is
                                                                    used  for HRPWM generation when GRP_HRPWM_PRESENT ='1'. (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF_Bits;

/** \brief Counter period register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_Bits
{
    __IO Ifx_UReg_32Bit PERIOD:32;              /**< \brief [31:0]  Period value: upper value of the counter.
                                                                    When the counter should count for n cycles, this
                                                                    field should be set to n-1.
                                                                    In PWM and PWM_DT mode LSBs given by
                                                                    GRP_HRPWM_WIDTH is used  for HRPWM generation when
                                                                    GRP_HRPWM_PRESENT ='1'. (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_Bits;

/** \brief Counter buffered period register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF_Bits
{
    __IO Ifx_UReg_32Bit PERIOD:32;              /**< \brief [31:0]  Additional buffer for counter PERIOD
                                                                    register.
                                                                    In PWM_PR mode PEROD_BUFF defines the LFSR polynomial.
                                                                    Each bit represents a tap of the shift register
                                                                    which can be feed back to the MSB via an XOR tree.
                                                                    Examples for GRP_CNT_WIDTH = 16:
                                                                    - Maximum length 16bit LFSR
                                                                      - polynomial x^16 + x^14 + x^13 + x^11 + 1
                                                                      - taps 0,2,3,5 -> PERIOD = 0x002d
                                                                      - period is 2^16-1 = 65535 cycles
                                                                    - Maximum length 8bit LFSR:
                                                                      - polynomial x^8 + x^6 + x^5 + x^4 + 1
                                                                    - taps 8,10,11,12 (realized in 8 MSBs of 16bit LFSR)
                                                                      - period is 2^8-1 = 255 cycles
                                                                    In SR mode PERIOD_BUFF defines which tap of the
                                                                    shift register generates the PWM output signals.
                                                                    For a delay of n cycles (from capture event to PWM
                                                                    output) the bit CNT_WIDTH-n should be set to '1'.
                                                                    For a shift register function only one tap should
                                                                    be use, i.e.
                                                                    a one-hot value must be written to PERIOD_BUFF.
                                                                    If multiple bits in PERIOD_BUFF are set then the
                                                                    taps are XOR combined.
                                                                    In PWM and PWM_DT mode LSSBs given by
                                                                    GRP_HRPWM_WIDTH is used  for HRPWM generation when
                                                                    GRP_HRPWM_PRESENT ='1'. (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF_Bits;

/** \brief Counter line selection register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_Bits
{
    __IO Ifx_UReg_32Bit OUT_SEL:3;              /**< \brief [2:0]   Selects the source for the output signal
                                                                    'line_out'. Default setting is the PWM signal 'line'.
                                                                    Other settings are useful for Stepper Motor Control.
                                                                    This field has a function in PWM, PWM_PR, and
                                                                    PWM_DT modes only.
                                                                    Note: The output signal of this selection can be
                                                                    further modified by the stop / kill logic and
                                                                    line_out polarity setting (CTRL.KILL_LINE_OUT_POLARITY). (rw)
                                                L             : 0u   fixed '0'
                                                H             : 1u   fixed '1'
                                                PWM           : 2u   PWM signal "line_out"
                                                PWM_INV       : 3u   inverted PWM signal "line_compl_out"
                                                Z             : 4u   The output "line_out" is not driven by the TCPWM.
                                                                    Instead the port default level configuration applies, e.g.
                                                                    "Z" (high impedance).
                                                                    Note: This is realized by driving the output
                                                                    "line_out_en" to 0.
                                                MOTIF         : 5u   The source for PWM signal conditioning comes from
                                                                    MOTIF modulation output control signals.
                                                                    "line_out" can be set to '0' , '1' or PWM.
                                                Reserved6     : 6u   This setting is reserved. Do not use.
                                                Reserved7     : 7u   This setting is reserved. Do not use. */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit COMPL_OUT_SEL:3;        /**< \brief [6:4]   Selects the source for the output signal
                                                                    'line_compl_out'.
                                                                    Default setting is the inverted PWM signal 'line'.
                                                                    Other settings are useful for Stepper Motor Control.
                                                                    This field has a function in PWM, PWM_PR and PWM_DT
                                                                    modes only.
                                                                    Note: The output signal of this selection can be
                                                                    further modified by the stop / kill logic and
                                                                    line_compl_out polarity setting
                                                                    (CTRL.KILL_LINE_COMPL_OUT_POLARITY). (rw)
                                                L             : 0u   fixed '0'
                                                H             : 1u   fixed '1'
                                                PWM           : 2u   PWM signal "line_out"
                                                PWM_INV       : 3u   inverted PWM signal "line_compl_out"
                                                Z             : 4u   The output "line_compl_out" is not driven by the TCPWM.
                                                                    Instead the port default level configuration applies, e.g.
                                                                    "Z" (high impedance).
                                                                    Note: This is realized by driving the output
                                                                    "line_compl_out_en" to 0.
                                                MOTIF         : 5u   The source for PWM signal conditioning comes from
                                                                    MOTIF modulation output control signals.
                                                                    "line_compl_out" can be set to '0' , '1' or PWM.
                                                Reserved6     : 6u   This setting is reserved. Do not use.
                                                Reserved7     : 7u   This setting is reserved. Do not use. */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [31:7]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_Bits;

/* PPCA_TCPWM_GRP_CNT_LINE_SEL.OUT_SEL enumerated values */

/** \brief fixed '0' */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_OUT_SEL_L (0u)

/** \brief fixed '1' */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_OUT_SEL_H (1u)

/** \brief PWM signal "line_out" */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_OUT_SEL_PWM (2u)

/** \brief inverted PWM signal "line_compl_out" */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_OUT_SEL_PWM_INV (3u)

/** \brief The output "line_out" is not driven by the TCPWM.
Instead the port default level configuration applies, e.g. "Z" (high impedance).
Note: This is realized by driving the output "line_out_en" to 0. */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_OUT_SEL_Z (4u)

/** \brief The source for PWM signal conditioning comes from MOTIF modulation output
control signals. "line_out" can be set to '0' , '1' or PWM. */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_OUT_SEL_MOTIF (5u)

/** \brief This setting is reserved. Do not use. */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_OUT_SEL_Reserved6 (6u)

/** \brief This setting is reserved. Do not use. */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_OUT_SEL_Reserved7 (7u)

/* PPCA_TCPWM_GRP_CNT_LINE_SEL.COMPL_OUT_SEL enumerated values */

/** \brief fixed '0' */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_COMPL_OUT_SEL_L (0u)

/** \brief fixed '1' */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_COMPL_OUT_SEL_H (1u)

/** \brief PWM signal "line_out" */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_COMPL_OUT_SEL_PWM (2u)

/** \brief inverted PWM signal "line_compl_out" */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_COMPL_OUT_SEL_PWM_INV (3u)

/** \brief The output "line_compl_out" is not driven by the TCPWM.
Instead the port default level configuration applies, e.g. "Z" (high impedance).
Note: This is realized by driving the output "line_compl_out_en" to 0. */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_COMPL_OUT_SEL_Z (4u)

/** \brief The source for PWM signal conditioning comes from MOTIF modulation output
control signals. "line_compl_out" can be set to '0' , '1' or PWM. */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_COMPL_OUT_SEL_MOTIF (5u)

/** \brief This setting is reserved. Do not use. */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_COMPL_OUT_SEL_Reserved6 (6u)

/** \brief This setting is reserved. Do not use. */
#define IFX_PPCA_TCPWM_GRP_CNT_LINE_SEL_COMPL_OUT_SEL_Reserved7 (7u)

/** \brief Counter buffered line selection register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF_Bits
{
    __IO Ifx_UReg_32Bit OUT_SEL:3;              /**< \brief [2:0]   Buffer for LINE_SEL.OUT_SEL.
                                                                    Can be exchanged with LINE_SEL.LINE_OUT_SEL on a
                                                                    terminal count event with an actively pending
                                                                    switch event.
                                                                    This field has a function in PWM, PWM_PR and PWM_DT
                                                                    modes only. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit COMPL_OUT_SEL:3;        /**< \brief [6:4]   Buffer for LINE_SEL.COMPL.OUT_SEL.
                                                                    Can be exchanged with LINE_SEL.LINE_COMPL_OUT_SEL
                                                                    on a terminal count event with an actively pending
                                                                    switch event.
                                                                    This field has a function in PWM, PWM_PR and PWM_DT
                                                                    modes only. (rw) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [31:7]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF_Bits;

/** \brief Counter PWM dead time register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_DT_Bits
{
    __IO Ifx_UReg_32Bit DT_LINE_OUT_L:8;        /**< \brief [7:0]   In PWM_DT mode, this field is used to
                                                                    determine the low byte of the dead time before
                                                                    activating the PWM line output signal 'line_out':
                                                                    amount of dead time cycles in the counter clock domain.
                                                                    Note: This field determines the low byte of the
                                                                    16-bit dead time before activating 'line_out' when
                                                                    parameter GRP_AMC_PRESENT for advanced motor
                                                                    control is set to 1.
                                                                    Otherwise the dead time is only 8 bit wide and the
                                                                    same dead time specified by this DT_LINE_OUT_L
                                                                    field is used before activating 'line_out' and
                                                                    'line_compl_out'. (rw) */
    __IO Ifx_UReg_32Bit DT_LINE_OUT_H:8;        /**< \brief [15:8]  In PWM_DT mode, this field is used to
                                                                    determine the high byte of the dead time before
                                                                    activating the PWM line output signal 'line_out':
                                                                    amount of dead time cycles in the counter clock domain.
                                                                    In all other modes, this field  has no effect.
                                                                    In PWM_DT mode LSBs given by GRP_HRPWM_WIDTH is
                                                                    used  for HRPWM generation when GRP_HRPWM_PRESENT ='1'.
                                                                    Note: This field only exists when parameter
                                                                    GRP_AMC_PRESENT for advanced motor control is set to 1.
                                                                    Otherwise the dead time is only 8 bit wide and the
                                                                    same dead time specified by field DT_LINE_OUT_L is
                                                                    used before activating 'line_out' and 'line_compl_out'. (rw) */
    __IO Ifx_UReg_32Bit DT_LINE_COMPL_OUT:16;   /**< \brief [31:16] In PWM_DT mode, this field is used to
                                                                    determine the dead time before activating the
                                                                    complementary PWM line output signal
                                                                    'line_compl_out': amount of dead time cycles in the
                                                                    counter clock domain.
                                                                    In all other modes, this field  has no effect.
                                                                    In PWM_DT mode LSBs given by GRP_HRPWM_WIDTH is
                                                                    used  for HRPWM generation when GRP_HRPWM_PRESENT ='1'.
                                                                    Note: This field only exists when parameter
                                                                    GRP_AMC_PRESENT for advanced motor control is set to 1.
                                                                    Otherwise the dead time is only 8 bit wide and the
                                                                    same dead time specified by field DT_LINE_OUT_L is
                                                                    used before activating 'line_out' and 'line_compl_out'. (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_DT_Bits;

/** \brief Counter buffered PWM dead time register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF_Bits
{
    __IO Ifx_UReg_32Bit DT_LINE_OUT_L:8;        /**< \brief [7:0]   Buffer for DT.DT_LINE_OUT_L register
                                                                    Data will shadow transfer to DT.DT_LINE_OUT_L on a
                                                                    terminal count event with an actively pending
                                                                    switch event when CTRL.SWAP_ENABLE is set to 0.
                                                                    In PWM_DT mode, the data in this field will be
                                                                    shadow transfer to DT.DT_LINE_OUT_L to determine
                                                                    the low byte of the dead time
                                                                    Note: This field determines the low byte of the
                                                                    16-bit dead time buffer when parameter
                                                                    GRP_AMC_PRESENT for advanced motor control is set to 1.
                                                                    Otherwise the dead time buffer is only 8 bit wide. (rw) */
    __IO Ifx_UReg_32Bit DT_LINE_OUT_H:8;        /**< \brief [15:8]  Buffer for DT.DT_LINE_OUT_H register
                                                                    Data will shadow transfer to DT.DT_LINE_OUT_H on a
                                                                    terminal count event with an actively pending
                                                                    switch event when CTRL.SWAP_ENABLE is set to 0.
                                                                    In PWM_DT mode, the data in this field will be
                                                                    shadow transfer to DT.DT_LINE_OUT_H to determine
                                                                    the high byte of the dead time.
                                                                    In PWM_DT mode LSBs given by GRP_HRPWM_WIDTH is
                                                                    used  for HRPWM generation when GRP_HRPWM_PRESENT ='1'.
                                                                    Note: This field only exists when parameter
                                                                    GRP_AMC_PRESENT for advanced motor control is set to 1.
                                                                    Otherwise, the dead time buffer is only 8 bit wide (rw) */
    __IO Ifx_UReg_32Bit DT_LINE_COMPL_OUT:16;   /**< \brief [31:16] Buffer for DT.DT_LINE_COMPL_OUT register
                                                                    Data will shadow transfer to DT.DT_LINE_COMPL_OUT
                                                                    on a terminal count event with an actively pending
                                                                    switch when CTRL.SWAP_ENABLE is set to 0.
                                                                    In PWM_DT mode, the data in this field will be
                                                                    shadow transfer to DT.DT_LINE_COMPL_OUT
                                                                    Note: This field only exists when parameter
                                                                    GRP_AMC_PRESENT for advanced motor control is set to 1.
                                                                    Otherwise, the dead time is only 8 bit wide and the
                                                                    same dead time specified by field DT_LINE_OUT_L is used.
                                                                    In PWM_DT mode LSBs given by GRP_HRPWM_WIDTH is
                                                                    used  for HRPWM generation when GRP_HRPWM_PRESENT ='1'. (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF_Bits;

/** \brief Counter prescalar register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_PS_Bits
{
    __IO Ifx_UReg_32Bit PS_DIV:3;               /**< \brief [2:0]   Select the pre-scaling of the selected
                                                                    counter clock.
                                                                    If HRPWM is intended to be used for the counter
                                                                    output, this value shall be set to default '0' else
                                                                    the HRPWM feature will not work. (rw)
                                                DIVBY1        : 0u   Pre-scaling of the selected counter clock.
                                                                    Divide by 1
                                                DIVBY2        : 1u   Pre-scaling of the selected counter clock.
                                                                    Divide by 2
                                                DIVBY4        : 2u   Pre-scaling of the selected counter clock.
                                                                    Divide by 4
                                                DIVBY8        : 3u   Pre-scaling of the selected counter clock.
                                                                    Divide by 8
                                                DIVBY16       : 4u   Pre-scaling of the selected counter clock.
                                                                    Divide by 16
                                                DIVBY32       : 5u   Pre-scaling of the selected counter clock.
                                                                    Divide by 32
                                                DIVBY64       : 6u   Pre-scaling of the selected counter clock.
                                                                    Divide by 64
                                                DIVBY128      : 7u   Pre-scaling of the selected counter clock.
                                                                    Divide by 128 */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_PS_Bits;

/* PPCA_TCPWM_GRP_CNT_PS.PS_DIV enumerated values */

/** \brief Pre-scaling of the selected counter clock. Divide by 1 */
#define IFX_PPCA_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY1 (0u)

/** \brief Pre-scaling of the selected counter clock. Divide by 2 */
#define IFX_PPCA_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY2 (1u)

/** \brief Pre-scaling of the selected counter clock. Divide by 4 */
#define IFX_PPCA_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY4 (2u)

/** \brief Pre-scaling of the selected counter clock. Divide by 8 */
#define IFX_PPCA_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY8 (3u)

/** \brief Pre-scaling of the selected counter clock. Divide by 16 */
#define IFX_PPCA_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY16 (4u)

/** \brief Pre-scaling of the selected counter clock. Divide by 32 */
#define IFX_PPCA_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY32 (5u)

/** \brief Pre-scaling of the selected counter clock. Divide by 64 */
#define IFX_PPCA_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY64 (6u)

/** \brief Pre-scaling of the selected counter clock. Divide by 128 */
#define IFX_PPCA_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY128 (7u)

/** \brief Counter trigger command register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD_Bits
{
    __IO Ifx_UReg_32Bit CAPTURE0:1;             /**< \brief [0:0]   SW capture 0 trigger.
                                                                    When written with '1', a capture 0 trigger is
                                                                    generated and the HW sets the field to '0' when the
                                                                    SW trigger has taken effect.
                                                                    It should be noted that the HW operates on the
                                                                    counter frequency.
                                                                    If the counter is disabled through CTRL.ENABLED,
                                                                    the field is immediately set to '0'. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [1:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit RELOAD:1;               /**< \brief [2:2]   SW reload trigger.
                                                                    For HW behavior, see COUNTER_CAPTURE0 field. (rw) */
    __IO Ifx_UReg_32Bit STOP:1;                 /**< \brief [3:3]   SW stop trigger.
                                                                    For HW behavior, see COUNTER_CAPTURE0 field. (rw) */
    __IO Ifx_UReg_32Bit START:1;                /**< \brief [4:4]   SW start trigger.
                                                                    For HW behavior, see COUNTER_CAPTURE0 field. (rw) */
    __IO Ifx_UReg_32Bit CAPTURE1:1;             /**< \brief [5:5]   SW capture 1 trigger.
                                                                    For HW behavior, see COUNTER_CAPTURE0 field. (rw) */
    __IO Ifx_UReg_32Bit DC:1;                   /**< \brief [6:6]   SW external event trigger for duty cycle control.
                                                                    For HW behavior, see COUNTER_CAPTURE0 field. (rw) */
    __IO Ifx_UReg_32Bit MASK:1;                 /**< \brief [7:7]   SW external event trigge for maskingr.
                                                                    For HW behavior, see COUNTER_CAPTURE0 field. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD_Bits;

/** \brief Counter input trigger selection register 0 */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0_Bits
{
    __IO Ifx_UReg_32Bit CAPTURE0_SEL:8;         /**< \brief [7:0]   Selects one of the up to 256 input triggers
                                                                    as a capture0 trigger.
                                                                    Input trigger 0 is always '0' and input trigger 1
                                                                    is always '1'.
                                                                    If existing, the one-to-one trigger inputs
                                                                    'tr_one_cnt_in' (different to each counter) are
                                                                    selected by setting 2 and above.
                                                                    The settings above are used for the general purpose
                                                                    trigger inputs 'tr_all_cnt_in' connected to all
                                                                    counters selected.
                                                                    In the PWM, PWM_DT and PWM_PR modes this trigger is
                                                                    used to switch the values if the compare and period
                                                                    registers with their buffer counterparts. (rw) */
    __IO Ifx_UReg_32Bit COUNT_SEL:8;            /**< \brief [15:8]  Selects one of the 256 input triggers as a
                                                                    count trigger.
                                                                    In QUAD mode, this is the first phase (phi A).
                                                                    Default setting selects input trigger 1, which is
                                                                    always '1'.
                                                                    Note: In the modes: TIMER, CAPTURE, PWM, PWM_DT,
                                                                    and SR, If the counter is externally triggered (
                                                                    COUNT_SEL > 1), an external trigger will be
                                                                    required for each TR_CMD to execute.
                                                                    For example, a write to TR_CMD.START will not start
                                                                    the counter until the trigger selected by COUNT_SEL
                                                                    asserts.
                                                                    The next trigger will increment the counter since
                                                                    the counter is now running.
                                                                    This goes for all TR_CMD fields. (rw) */
    __IO Ifx_UReg_32Bit RELOAD_SEL:8;           /**< \brief [23:16] Selects one of the 256 input triggers as a
                                                                    reload trigger.
                                                                    In QUAD mode, this is the index or revolution pulse.
                                                                    In these modes, it will update the counter with
                                                                    0x8000 (counter midpoint) or 0x0000 depending on
                                                                    the QUAD_RANGE_MODE. (rw) */
    __IO Ifx_UReg_32Bit STOP_SEL:8;             /**< \brief [31:24] Selects one of the 256 input triggers as a
                                                                    stop trigger.
                                                                    In PWM, PWM_DT and PWM_PR modes, this is the kill trigger.
                                                                    In these modes, the kill trigger is used to either
                                                                    temporarily block the PWM outputs (PWM_STOP_ON_KILL
                                                                    is '0') or stop the functionality (PWM_STOP_ON_KILL
                                                                    is '1').
                                                                    For the PWM and PWM_DT modes, the blocking of the
                                                                    output signals can be  asynchronous (STOP_EDGE
                                                                    should be NO_EDGE_DET) in which case the blocking
                                                                    is as long as the trigger is '1' or synchronous
                                                                    (STOP_EDGE should be RISING_EDGE) in which case it
                                                                    extends till the next terminal count event. (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0_Bits;

/** \brief Counter input trigger selection register 1 */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1_Bits
{
    __IO Ifx_UReg_32Bit START_SEL:8;            /**< \brief [7:0]   Selects one of the 256 input triggers as a
                                                                    start trigger.
                                                                    In QUAD mode, this is the second phase (phi B). (rw) */
    __IO Ifx_UReg_32Bit CAPTURE1_SEL:8;         /**< \brief [15:8]  Selects one of the 256 input triggers as a
                                                                    capture 1 trigger. (rw) */
    __IO Ifx_UReg_32Bit DC_SEL:8;               /**< \brief [23:16] Selects one of the 256 input triggers as an
                                                                    external trigger for duty cycle control (rw) */
    __IO Ifx_UReg_32Bit MASK_SEL:8;             /**< \brief [31:24] Selects one of the 256 input triggers as
                                                                    mask input signal (rw) */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1_Bits;

/** \brief Counter input trigger edge selection register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits
{
    __IO Ifx_UReg_32Bit CAPTURE0_EDGE:2;        /**< \brief [1:0]   A capture 0 event will copy the counter
                                                                    value into the CC0 register. (rw)
                                                RISING_EDGE   : 0u   Rising edge. Any rising edge generates an event.
                                                FALLING_EDGE  : 1u   Falling edge. Any falling edge generates an event.
                                                ANY_EDGE      : 2u   Rising AND falling edge.
                                                                    Any odd amount of edges generates an event.
                                                NO_EDGE_DET   : 3u   No edge detection, use trigger as is. */
    __IO Ifx_UReg_32Bit COUNT_EDGE:2;           /**< \brief [3:2]   A counter event will increase or decrease
                                                                    the counter by '1'. (rw)
                                                RISING_EDGE   : 0u   Rising edge. Any rising edge generates an event.
                                                FALLING_EDGE  : 1u   Falling edge. Any falling edge generates an event.
                                                ANY_EDGE      : 2u   Rising AND falling edge.
                                                                    Any odd amount of edges generates an event.
                                                NO_EDGE_DET   : 3u   No edge detection, use trigger as is. */
    __IO Ifx_UReg_32Bit RELOAD_EDGE:2;          /**< \brief [5:4]   A reload event will initialize the counter.
                                                                    When counting up, the counter is initialized to '0'.
                                                                    When counting down, the counter is initialized with PERIOD. (rw)
                                                RISING_EDGE   : 0u   Rising edge. Any rising edge generates an event.
                                                FALLING_EDGE  : 1u   Falling edge. Any falling edge generates an event.
                                                ANY_EDGE      : 2u   Rising AND falling edge.
                                                                    Any odd amount of edges generates an event.
                                                NO_EDGE_DET   : 3u   No edge detection, use trigger as is. */
    __IO Ifx_UReg_32Bit STOP_EDGE:2;            /**< \brief [7:6]   A stop event, will stop the counter; i.e.
                                                                    it will no longer be running.
                                                                    Stopping will NOT disable the counter. (rw)
                                                RISING_EDGE   : 0u   Rising edge. Any rising edge generates an event.
                                                FALLING_EDGE  : 1u   Falling edge. Any falling edge generates an event.
                                                ANY_EDGE      : 2u   Rising AND falling edge.
                                                                    Any odd amount of edges generates an event.
                                                NO_EDGE_DET   : 3u   No edge detection, use trigger as is. */
    __IO Ifx_UReg_32Bit START_EDGE:2;           /**< \brief [9:8]   A start event will start the counter; i.e.
                                                                    the counter will become running.
                                                                    Starting does NOT enable the counter.
                                                                    A start event will not initialize the counter
                                                                    whereas the reload event does. (rw)
                                                RISING_EDGE   : 0u   Rising edge. Any rising edge generates an event.
                                                FALLING_EDGE  : 1u   Falling edge. Any falling edge generates an event.
                                                ANY_EDGE      : 2u   Rising AND falling edge.
                                                                    Any odd amount of edges generates an event.
                                                NO_EDGE_DET   : 3u   No edge detection, use trigger as is. */
    __IO Ifx_UReg_32Bit CAPTURE1_EDGE:2;        /**< \brief [11:10] A capture 1 event will copy the counter
                                                                    value into the CC1 register. (rw)
                                                RISING_EDGE   : 0u   Rising edge. Any rising edge generates an event.
                                                FALLING_EDGE  : 1u   Falling edge. Any falling edge generates an event.
                                                ANY_EDGE      : 2u   Rising AND falling edge.
                                                                    Any odd amount of edges generates an event.
                                                NO_EDGE_DET   : 3u   No edge detection, use trigger as is. */
    __IO Ifx_UReg_32Bit DC_EDGE:2;              /**< \brief [13:12] An External Trigger event for duty cycle control. (rw)
                                                RISING_EDGE   : 0u   Rising edge. Any rising edge generates an event.
                                                FALLING_EDGE  : 1u   Falling edge. Any falling edge generates an event.
                                                ANY_EDGE      : 2u   Rising AND falling edge.
                                                                    Any odd amount of edges generates an event.
                                                NO_EDGE_DET   : 3u   No edge detection, use trigger as is. */
    __IO Ifx_UReg_32Bit MASK_EDGE:2;            /**< \brief [15:14] An External Trigger event for masking PWM output. (rw)
                                                RISING_EDGE   : 0u   Rising edge. Any rising edge generates an event.
                                                FALLING_EDGE  : 1u   Falling edge. Any falling edge generates an event.
                                                ANY_EDGE      : 2u   Rising AND falling edge.
                                                                    Any odd amount of edges generates an event.
                                                NO_EDGE_DET   : 3u   No edge detection, use trigger as is. */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits;

/* PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL.CAPTURE0_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_NO_EDGE_DET (3u)

/* PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL.COUNT_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_NO_EDGE_DET (3u)

/* PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL.RELOAD_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_NO_EDGE_DET (3u)

/* PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL.STOP_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_NO_EDGE_DET (3u)

/* PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL.START_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_NO_EDGE_DET (3u)

/* PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL.CAPTURE1_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE1_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE1_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE1_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE1_EDGE_NO_EDGE_DET (3u)

/* PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL.DC_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_NO_EDGE_DET (3u)

/* PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL.MASK_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_NO_EDGE_DET (3u)

/** \brief Counter trigger PWM control register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits
{
    __IO Ifx_UReg_32Bit CC0_MATCH_MODE:2;       /**< \brief [1:0]   Determines the effect of a compare match 0
                                                                    event (COUNTER equals CC0 register) on the
                                                                    'line_out' output signals.
                                                                    Note that INVERT is especially useful for center
                                                                    aligned pulse width modulation.
                                                                    To generate a duty cycle of 0 percent, the counter
                                                                    CC0 register should be set to '0'.
                                                                    For a 100 percent duty cycle, the counter CC0
                                                                    register should be set to larger than the counter
                                                                    PERIOD register. (rw)
                                                SET           : 0u   Set to '1'
                                                CLEAR         : 1u   Set to '0'
                                                INVERT        : 2u   Invert
                                                NO_CHANGE     : 3u   No Change */
    __IO Ifx_UReg_32Bit OVERFLOW_MODE:2;        /**< \brief [3:2]   Determines the effect of a counter overflow
                                                                    event (COUNTER reaches PERIOD) on the 'line_out'
                                                                    output signals. (rw)
                                                SET           : 0u   Set to '1'
                                                CLEAR         : 1u   Set to '0'
                                                INVERT        : 2u   Invert
                                                NO_CHANGE     : 3u   No Change */
    __IO Ifx_UReg_32Bit UNDERFLOW_MODE:2;       /**< \brief [5:4]   Determines the effect of a counter
                                                                    underflow event (COUNTER reaches '0') on the
                                                                    'line_out' output signals. (rw)
                                                SET           : 0u   Set to '1'
                                                CLEAR         : 1u   Set to '0'
                                                INVERT        : 2u   Invert
                                                NO_CHANGE     : 3u   No Change */
    __IO Ifx_UReg_32Bit CC1_MATCH_MODE:2;       /**< \brief [7:6]   Determines the effect of a compare match 1
                                                                    event (COUNTER equals CC1 register) on the
                                                                    'line_out' output signals. (rw)
                                                SET           : 0u   Set to '1'
                                                CLEAR         : 1u   Set to '0'
                                                INVERT        : 2u   Invert
                                                NO_CHANGE     : 3u   No Change */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits;

/* PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL.CC0_MATCH_MODE enumerated values */

/** \brief Set to '1' */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_SET (0u)

/** \brief Set to '0' */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_CLEAR (1u)

/** \brief Invert */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_INVERT (2u)

/** \brief No Change */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_NO_CHANGE (3u)

/* PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL.OVERFLOW_MODE enumerated values */

/** \brief Set to '1' */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_SET (0u)

/** \brief Set to '0' */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_CLEAR (1u)

/** \brief Invert */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_INVERT (2u)

/** \brief No Change */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_NO_CHANGE (3u)

/* PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL.UNDERFLOW_MODE enumerated values */

/** \brief Set to '1' */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_SET (0u)

/** \brief Set to '0' */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_CLEAR (1u)

/** \brief Invert */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_INVERT (2u)

/** \brief No Change */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_NO_CHANGE (3u)

/* PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL.CC1_MATCH_MODE enumerated values */

/** \brief Set to '1' */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_CC1_MATCH_MODE_SET (0u)

/** \brief Set to '0' */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_CC1_MATCH_MODE_CLEAR (1u)

/** \brief Invert */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_CC1_MATCH_MODE_INVERT (2u)

/** \brief No Change */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_CC1_MATCH_MODE_NO_CHANGE (3u)

/** \brief Counter output trigger selection register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_Bits
{
    __IO Ifx_UReg_32Bit OUT0:4;                 /**< \brief [3:0]   Selects one of the internal events to
                                                                    generate the output trigger 0.
                                                                    Default setting selects the terminal count event. (rw)
                                                OVERFLOW      : 0u   Overflow event
                                                UNDERFLOW     : 1u   Underflow event
                                                TC            : 2u   Terminal count event (default selection)
                                                CC0_MATCH     : 3u   Compare match 0 event
                                                CC1_MATCH     : 4u   Compare match 1 event
                                                LINE_OUT      : 5u   PWM output signal "line_out"
                                                CC0_CC1_MATCH : 6u   Compare match 0 event or Compare match 1 event
                                                MASK_OUT      : 7u   PWM signal for masking the PWM output on another counter
                                                MASK_COMPL_OUT: 8u   Complimentary PWM signal for masking the PWM output
                                                                    on another counter
                                                Disabled      : 9u   Output trigger disabled. */
    __IO Ifx_UReg_32Bit OUT1:4;                 /**< \brief [7:4]   Selects one of the internal events to
                                                                    generate the output trigger 1.
                                                                    Default setting selects the compare match 0 event. (rw)
                                                OVERFLOW      : 0u   Overflow event
                                                UNDERFLOW     : 1u   Underflow event
                                                TC            : 2u   Terminal count event
                                                CC0_MATCH     : 3u   Compare match 0 event (default selection)
                                                CC1_MATCH     : 4u   Compare match 1 event
                                                LINE_OUT      : 5u   PWM output signal "line_out"
                                                CC0_CC1_MATCH : 6u   Compare match 0 event or Compare match 1 event
                                                MASK_OUT      : 7u   PWM signal for masking the PWM output on another counter
                                                MASK_COMPL_OUT: 8u   Complimentary PWM signal for masking the PWM output
                                                                    on another counter
                                                Disabled      : 9u   Output trigger disabled. */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_Bits;

/* PPCA_TCPWM_GRP_CNT_TR_OUT_SEL.OUT0 enumerated values */

/** \brief Overflow event */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_OVERFLOW (0u)

/** \brief Underflow event */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_UNDERFLOW (1u)

/** \brief Terminal count event (default selection) */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_TC (2u)

/** \brief Compare match 0 event */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_CC0_MATCH (3u)

/** \brief Compare match 1 event */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_CC1_MATCH (4u)

/** \brief PWM output signal "line_out" */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_LINE_OUT (5u)

/** \brief Compare match 0 event or Compare match 1 event */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_CC0_CC1_MATCH (6u)

/** \brief PWM signal for masking the PWM output on another counter */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_MASK_OUT (7u)

/** \brief Complimentary PWM signal for masking the PWM output on another counter */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_MASK_COMPL_OUT (8u)

/** \brief Output trigger disabled. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_Disabled (9u)

/* PPCA_TCPWM_GRP_CNT_TR_OUT_SEL.OUT1 enumerated values */

/** \brief Overflow event */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_OVERFLOW (0u)

/** \brief Underflow event */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_UNDERFLOW (1u)

/** \brief Terminal count event */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_TC (2u)

/** \brief Compare match 0 event (default selection) */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_CC0_MATCH (3u)

/** \brief Compare match 1 event */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_CC1_MATCH (4u)

/** \brief PWM output signal "line_out" */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_LINE_OUT (5u)

/** \brief Compare match 0 event or Compare match 1 event */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_CC0_CC1_MATCH (6u)

/** \brief PWM signal for masking the PWM output on another counter */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_MASK_OUT (7u)

/** \brief Complimentary PWM signal for masking the PWM output on another counter */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_MASK_COMPL_OUT (8u)

/** \brief Output trigger disabled. */
#define IFX_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_Disabled (9u)

/** \brief Interrupt request register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_INTR_Bits
{
    __IO Ifx_UReg_32Bit TC:1;                   /**< \brief [0:0]   Terminal count event.
                                                                    Set to '1', when event is detected.
                                                                    Write with '1' to clear bit. (rw) */
    __IO Ifx_UReg_32Bit CC0_MATCH:1;            /**< \brief [1:1]   Counter matches CC0 register event.
                                                                    Set to '1', when event is detected.
                                                                    Write with '1' to clear bit. (rw) */
    __IO Ifx_UReg_32Bit CC1_MATCH:1;            /**< \brief [2:2]   Counter matches CC1 register event.
                                                                    Set to '1', when event is detected.
                                                                    Write with '1' to clear bit. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_INTR_Bits;

/** \brief Interrupt set request register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit TC:1;                   /**< \brief [0:0]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit CC0_MATCH:1;            /**< \brief [1:1]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit CC1_MATCH:1;            /**< \brief [2:2]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET_Bits;

/** \brief Interrupt mask register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit TC:1;                   /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit CC0_MATCH:1;            /**< \brief [1:1]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit CC1_MATCH:1;            /**< \brief [2:2]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK_Bits;

/** \brief Interrupt masked request register */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit TC:1;                   /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit CC0_MATCH:1;            /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit CC1_MATCH:1;            /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED_Bits;

/** \brief Sync bypass register for one to one trigger */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_Bits
{
    __IO Ifx_UReg_32Bit SYNC_BYPASS:8;          /**< \brief [7:0]   When set='1', bypass the sync stage for the
                                                                    corresponding one to one trigger (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_Bits;

/** \brief Counter control register for HRPWM feature */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL_Bits
{
    __IO Ifx_UReg_32Bit HRPWM_EN:1;             /**< \brief [0:0]   When '0' HRPWM feature is bypass, when '1'
                                                                    HRPWM feature is enabled.
                                                                    When enabled HRPWM feature is only available in PWM
                                                                    and PWM_DT mode.
                                                                    In other modes this bit will have no effect and
                                                                    HRPWM feature remain bypass (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [2:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit DATA_IN_CC0_EN:1;       /**< \brief [3:3]   When '1' parallel data path to register CC0
                                                                    is active and bypass CC0 and CC0_BUFF register.
                                                                    AHB access to CC0 and CC0_BUFF is also disabled in
                                                                    this case.
                                                                    When this is set to 1, the data from data_in_cc0
                                                                    get transfered immediately to the cc0 register.
                                                                    When '0' , the parallel data path is disabled and
                                                                    regular access over AHB is there. (rw) */
    __IO Ifx_UReg_32Bit DATA_IN_CC1_EN:1;       /**< \brief [4:4]   When '1' parallel data path to register CC1
                                                                    is active and bypass CC1 and CC1_BUFF register.
                                                                    AHB access to CC1 and CC1_BUFF is also disabled in
                                                                    this case.
                                                                    When this is set to 1, the data from data_in_cc1
                                                                    get transfered immediately to the cc1 register.
                                                                    When '0' , the parallel data path is disabled and
                                                                    regular access over AHB is there. (rw) */
    __IO Ifx_UReg_32Bit FREQ_SEL:2;             /**< \brief [6:5]   Selects the frequency of operation of HRPWM
                                                                    feature. Microtick is adjusted based on this information.
                                                                    These bits specifies the frequency of CLK_OUT from
                                                                    TCPWM counter. CLK_OUT = CLK_PERI = CLK_HF3 (rw)
                                                FREQ_SELX0    : 0u   CLK_OUT = 80 MHz or 100 MHz
                                                FREQ_SELX1    : 1u   CLK_OUT = 160MHz or 180 MHz
                                                FREQ_SELX2    : 2u   CLK_OUT = 200 MHz or 240 MHz
                                                FREQ_SELX3    : 3u   Reserved */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [31:7]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL_Bits;

/* PPCA_TCPWM_GRP_CNT_HRPWM_CTRL.FREQ_SEL enumerated values */

/** \brief CLK_OUT = 80 MHz or 100 MHz */
#define IFX_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL_FREQ_SEL_FREQ_SELX0 (0u)

/** \brief CLK_OUT = 160MHz or 180 MHz */
#define IFX_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL_FREQ_SEL_FREQ_SELX1 (1u)

/** \brief CLK_OUT = 200 MHz or 240 MHz */
#define IFX_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL_FREQ_SEL_FREQ_SELX2 (2u)

/** \brief Reserved */
#define IFX_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL_FREQ_SEL_FREQ_SELX3 (3u)

/** \brief Counter control register 2 */
typedef struct _Ifx_PPCA_TCPWM_GRP_CNT_CTRL2_Bits
{
    __IO Ifx_UReg_32Bit DC_EN:1;                /**< \brief [0:0]   Define the External Trigger Event Mode for
                                                                    duty cycle control. Enabled when set to '1' (rw) */
    __IO Ifx_UReg_32Bit MASK_EN:1;              /**< \brief [1:1]   Define the External Mask Enable mode.
                                                                    Enabled when set to '1' (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_TCPWM_GRP_CNT_CTRL2_Bits;

/** \brief Trigger Sync bypass for group trigger */
typedef struct _Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_Bits
{
    __IO Ifx_UReg_32Bit SYNC_BYPASS:32;         /**< \brief [31:0]  When set='1', bypass the sync stage for the
                                                                    corresponding group trigger (rw) */
} Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_Bits;

/** \brief Global control register */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_Bits
{
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [0:0]   MOTIF enable
                                                                    0 - MOTIF disabled.
                                                                    1 - MOTIF enabled.
                                                                    Enable MOTIF shall have the following effect: MOTIF
                                                                    clock is enabled,MOTIF registers are out of reset.
                                                                    Disable MOTIF shall have the following effect:MOTIF
                                                                    clock is gated, MOTIF non-retention registers get
                                                                    reset to default value, MOTIF retention register do
                                                                    not get reset,
                                                                    Output events get reset to default value, Interrupt
                                                                    output get reset to default value
                                                                    Modulation output get reset to default value. (rw) */
    __IO Ifx_UReg_32Bit FSEL:2;                 /**< \brief [2:1]   Function Selector (rw)
                                                HALLEN        : 0u   Hall Sensor Mode enabled
                                                QUADEN        : 1u   Quadrature Decoder Mode enabled
                                                STANDM        : 2u   stand-alone Multi-Channel Mode enabled
                                                QDSTAN        : 3u   Quadrature Decoder and stand-alone
                                                                    Multi_x0002_Channel Mode enabled */
    __IO Ifx_UReg_32Bit QDCM:1;                 /**< \brief [3:3]   Position Decoder Mode selection
                                                                    This field selects if the Position Decoder block is
                                                                    in Quadrature Mode or Direction Count Mode.
                                                                    In Quadrature mode, the position encoder is
                                                                    providing the phase signals, while in Direction
                                                                    Count Mode is providing a clock and a direction signal.
                                                                    0 - Position encoder is in Quadrature Mode
                                                                    1 - Position encoder is in Direction Count Mode. (rw) */
    __IO Ifx_UReg_32Bit HIDG:1;                 /**< \brief [4:4]   Idle generation enable
                                                                    Setting this field to 1 disables the generation of
                                                                    the IDLE signal that forces a clear on the
                                                                    Multi-Channel pattern and run bit. (rw) */
    __IO Ifx_UReg_32Bit MCUE:1;                 /**< \brief [5:5]   Multi-Channel Pattern SW update enable
                                                                    0 - Multi-Channel pattern update is controlled via HW
                                                                    1 - Multi-Channel pattern update is controlled via SW (rw) */
    __IO Ifx_UReg_32Bit FTS:2;                  /**< \brief [7:6]   Fault Hall event Selection (rw)
                                                WHE_OR_MP     : 0u   OR between wrong hall event and module pin
                                                                    (MOTIFx.EWHE)
                                                WHE           : 1u   Wrong Hall Event
                                                MODPIN        : 2u   Module Pin - MOTIFx.EWHE
                                                Reserved3     : 3u   Reserved */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [13:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit CHEC:2;                 /**< \brief [15:14] Correct Hall Event Clear selection (rw)
                                                WHE_OR_MP     : 0u   OR between wrong hall event and module pin
                                                                    (MOTIFx.EWHE)
                                                WHE           : 1u   Wrong Hall Event
                                                MODPIN        : 2u   Module Pin - MOTIFx.EWHE
                                                Reserved3     : 3u   Reserved */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [16:16] \internal Reserved */
    __IO Ifx_UReg_32Bit SPES:1;                 /**< \brief [17:17] Edge selector for the sampling trigger
                                                                    This field selects which edge is used of the
                                                                    selected MOTIFx.HSD signal to trigger a sample of
                                                                    the Hall inputs.
                                                                    0 - Rising edge
                                                                    1 - Falling edge (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [20:18] \internal Reserved */
    __IO Ifx_UReg_32Bit MSES:1;                 /**< \brief [21:21] Multi-Channel pattern update mset trigger edge
                                                                    0 - The signal used to enable a mset pattern update
                                                                    is active on the rising edge
                                                                    1 - The signal used to enable a mset pattern update
                                                                    is active on the falling edge (rw) */
    __IO Ifx_UReg_32Bit MSYES:1;                /**< \brief [22:22] Multi-Channel pattern update msync trigger edge
                                                                    0 - The signal used to enable a msync pattern
                                                                    update is active on the rising edge
                                                                    1 - The signal used to enable a msync pattern
                                                                    update is active on the falling edge (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [25:23] \internal Reserved */
    __IO Ifx_UReg_32Bit EWIE:1;                 /**< \brief [26:26] External Wrong Hall Event enable
                                                                    0 - External wrong hall event emulation signal,
                                                                    MOTIFx.EWHE, is disabled
                                                                    1 - External wrong hall event emulation signal,
                                                                    MOTIFx.EWHE, is enabled. (rw) */
    __IO Ifx_UReg_32Bit EWIL:1;                 /**< \brief [27:27] External Wrong Hall Event active level
                                                                    0 - MOTIFx.EWHE signal is active HIGH
                                                                    1 - MOTIFx.EWHE signal is active LOW (rw) */
    __IO Ifx_UReg_32Bit LPC:4;                  /**< \brief [31:28] Low Pass Filters Configuration (rw)
                                                LP_DISABLE    : 0u   Low pass filter disabled
                                                LP1           : 1u   Low pass of 1 clock cycle
                                                LP2           : 2u   Low pass of 2 clock cycle
                                                LP4           : 3u   Low pass of 4 clock cycle
                                                LP8           : 4u   Low pass of 8 clock cycle
                                                LP16          : 5u   Low pass of 16 clock cycle
                                                LP32          : 6u   Low pass of 32 clock cycle
                                                LP64          : 7u   Low pass of 64 clock cycle
                                                LP128         : 8u   Low pass of 128 clock cycle
                                                LP256         : 9u   Low pass of 256 clock cycle
                                                LP512         : 10u   Low pass of 512 clock cycle
                                                LP1024        : 11u   Low pass of 1024 clock cycle
                                                Reserved12    : 12u   Reserved (as disabled)
                                                Reserved13    : 13u   Reserved (as disabled)
                                                Reserved14    : 14u   Reserved (as disabled)
                                                Reserved15    : 15u   Reserved (as disabled) */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_Bits;

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF.FSEL enumerated values */

/** \brief Hall Sensor Mode enabled */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_FSEL_HALLEN (0u)

/** \brief Quadrature Decoder Mode enabled */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_FSEL_QUADEN (1u)

/** \brief stand-alone Multi-Channel Mode enabled */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_FSEL_STANDM (2u)

/** \brief Quadrature Decoder and stand-alone Multi_x0002_Channel Mode enabled */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_FSEL_QDSTAN (3u)

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF.FTS enumerated values */

/** \brief OR between wrong hall event and module pin (MOTIFx.EWHE) */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_FTS_WHE_OR_MP (0u)

/** \brief Wrong Hall Event */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_FTS_WHE (1u)

/** \brief Module Pin - MOTIFx.EWHE */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_FTS_MODPIN (2u)

/** \brief Reserved */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_FTS_Reserved3 (3u)

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF.CHEC enumerated values */

/** \brief OR between wrong hall event and module pin (MOTIFx.EWHE) */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_CHEC_WHE_OR_MP (0u)

/** \brief Wrong Hall Event */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_CHEC_WHE (1u)

/** \brief Module Pin - MOTIFx.EWHE */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_CHEC_MODPIN (2u)

/** \brief Reserved */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_CHEC_Reserved3 (3u)

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF.LPC enumerated values */

/** \brief Low pass filter disabled */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP_DISABLE (0u)

/** \brief Low pass of 1 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP1 (1u)

/** \brief Low pass of 2 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP2 (2u)

/** \brief Low pass of 4 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP4 (3u)

/** \brief Low pass of 8 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP8 (4u)

/** \brief Low pass of 16 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP16 (5u)

/** \brief Low pass of 32 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP32 (6u)

/** \brief Low pass of 64 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP64 (7u)

/** \brief Low pass of 128 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP128 (8u)

/** \brief Low pass of 256 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP256 (9u)

/** \brief Low pass of 512 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP512 (10u)

/** \brief Low pass of 1024 clock cycle */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_LP1024 (11u)

/** \brief Reserved (as disabled) */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_Reserved12 (12u)

/** \brief Reserved (as disabled) */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_Reserved13 (13u)

/** \brief Reserved (as disabled) */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_Reserved14 (14u)

/** \brief Reserved (as disabled) */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_LPC_Reserved15 (15u)

/** \brief Suspend Configuration */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_Bits
{
    __IO Ifx_UReg_32Bit SUS:3;                  /**< \brief [2:0]   MOTIF Mode Suspend Config
                                                                    This field controls the entering in suspend for the
                                                                    MOTIF module. (rw)
                                                REQ_IGN       : 0u   Suspend request ignored
                                                STOP          : 1u   Stop immediately
                                                SUS_IDX       : 2u   In quad mode and quad with stand-alone mode,
                                                                    suspend in the next index occurrence (QDCM =0).
                                                                    In any other mode. Stop immediately.
                                                                    When QDCM =1, it is considered as in other mode.
                                                SUS_PHA       : 3u   In quad mode and quad with stand-alone mode (QDCM
                                                                    =0), suspend in the next phase (PhaseA or PhaseB)
                                                                    In any other mode. Stop immediately.
                                                                    When QDCM =1, it is considered as in other mode.
                                                STOP_RST      : 4u   Stop immediately.
                                                                    Multi-Channel pattern is set to the reset value.
                                                SUS_SYN       : 5u   Suspend with the synchronization of the PWM signal.
                                                                    Multi-Channel pattern is set to the reset value at
                                                                    the same time of the synchronization.
                                                                    In quad mode, stop immediately.
                                                Reserved1     : 6u   Reserved (as disabled)
                                                Reserved2     : 7u   Reserved (as disabled) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_Bits;

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS.SUS enumerated values */

/** \brief Suspend request ignored */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_SUS_REQ_IGN (0u)

/** \brief Stop immediately */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_SUS_STOP (1u)

/** \brief In quad mode and quad with stand-alone mode, suspend in the next index
occurrence (QDCM =0).
In any other mode. Stop immediately.
When QDCM =1, it is considered as in other mode. */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_SUS_SUS_IDX (2u)

/** \brief In quad mode and quad with stand-alone mode (QDCM =0), suspend in the next
phase (PhaseA or PhaseB)
In any other mode. Stop immediately.
When QDCM =1, it is considered as in other mode. */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_SUS_SUS_PHA (3u)

/** \brief Stop immediately. Multi-Channel pattern is set to the reset value. */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_SUS_STOP_RST (4u)

/** \brief Suspend with the synchronization of the PWM signal.
Multi-Channel pattern is set to the reset value at the same time of the
synchronization.
In quad mode, stop immediately. */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_SUS_SUS_SYN (5u)

/** \brief Reserved (as disabled) */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_SUS_Reserved1 (6u)

/** \brief Reserved (as disabled) */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_SUS_Reserved2 (7u)

/** \brief MOTIF run bit set */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUNS_Bits
{
    __IO Ifx_UReg_32Bit SRB:1;                  /**< \brief [0:0]   Set Run bit
                                                                    0- Stop MOTIF.
                                                                    Writing an 0 into this bit stop the MOTIF and bring
                                                                    the state machine back to idle.
                                                                    1- Start MOTIF.
                                                                    Writing an 1 into this bit sets the run bit of the
                                                                    module.A rising edge triggers the start machine.
                                                                    When a Fault event is detected, the Hardware can
                                                                    clear this bit to '0' and stop MOTIF as saftey mechanisim.
                                                                    The SW needs to re-configure MOTIF and start again
                                                                    MOTIF later.
                                                                    if LUT mode is enabled, LUTEN=1.
                                                                    The hardware can clear this bit to '0' and stop
                                                                    MOTIF as saftey mechanism when previous pattern is
                                                                    detected or when pattern mismatch is detetcted. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUNS_Bits;

/** \brief MOTIF run bit status */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUN_Bits
{
    __I  Ifx_UReg_32Bit RB:1;                   /**< \brief [0:0]   Run Bit
                                                                    This field indicates if the module is in running or
                                                                    IDLE state.
                                                                    0 - IDLE
                                                                    1 - Running (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUN_Bits;

/** \brief Hall Inputs Sample Trigger */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HIST_Bits
{
    __O  Ifx_UReg_32Bit HIS:1;                  /**< \brief [0:0]   Hall Inputs Sample
                                                                    Writting this bitfield with 1, will trigger a
                                                                    sample of the current hall inputs into the PDBG.HSP field.
                                                                    The hardware will automatically clear the HIS to 0.
                                                                    The sample of the hall inputs can be done even when
                                                                    the run bit of the module is not set.
                                                                    Requesting a sample when the module is
                                                                    running/normal operation, may incurr in wrong
                                                                    behavior.
                                                                    Read always returns 0. (w) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HIST_Bits;

/** \brief Hall Mode Extra Config */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HMEC_Bits
{
    __IO Ifx_UReg_32Bit HDBP:1;                 /**< \brief [0:0]   Hall Sensor Debounce Stage Bypass
                                                                    Setting this bitfield to 1, will disable the usage
                                                                    of the debounce delay pins, MOTIFx.HSD.
                                                                    This means that after the low pass filter, the hall
                                                                    inputs are immediately sampled and compared against
                                                                    the expected and current patterns.
                                                                    0 - The hall inputs are only sampled after a valid
                                                                    transition at the MOTIFx.HSD pin.
                                                                    1 - The hall inputs are sampled after the filtering
                                                                    stage and the MOTIFx.HSD pin usage is disabled. (rw) */
    __IO Ifx_UReg_32Bit HPPE:1;                 /**< \brief [1:1]   Previous Pattern Compare Enable
                                                                    Setting this bitfield to 1, enables the compare
                                                                    logic between the sampled hall input values and the
                                                                    previous hall pattern - HALP.HPP.
                                                                    This will be used together with the comparison of
                                                                    the current and expected pattern to generate a
                                                                    wrong hall event.
                                                                    0 - Comparison between previous pattern and sampled
                                                                    pattern not used to generate a wrong hall event.
                                                                    1 - Comparison between previous pattern and sampled
                                                                    pattern used to generate a wrong hall event. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HMEC_Bits;

/** \brief Hall Current and Expected patterns */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALP_Bits
{
    __I  Ifx_UReg_32Bit HCP:3;                  /**< \brief [2:0]   Hall Current Pattern
                                                                    if LUTEN = 0, this field contains the Hall Current pattern.
                                                                    This field is updated with the HALPS.HCPS value
                                                                    every time that a correct hall event occurs.
                                                                    if LUTEN = 1, this field contains the Hall Current pattern.
                                                                    This field is updated with the Hall LUT value every
                                                                    time that a correct hall event occurs. (r) */
    __I  Ifx_UReg_32Bit HEP:3;                  /**< \brief [5:3]   Hall Expected Pattern
                                                                    if LUTEN = 0, this field contains the Hall Expected
                                                                    pattern.
                                                                    This field is updated with the HALPS.HEPS values
                                                                    every time that a correct hall event occurs.
                                                                    if LUTEN = 1, this field contains the Hall Expected
                                                                    pattern.
                                                                    This field is updated with the Hall LUT value every
                                                                    time that a correct hall event occurs. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __I  Ifx_UReg_32Bit HPP:3;                  /**< \brief [10:8]  Hall Previous Pattern
                                                                    if LUTEN = 0, this field contains the Hall Previous
                                                                    pattern.
                                                                    This field is updated with the HALPS.HPPS values
                                                                    every time that a correct hall event occurs.
                                                                    if LUTEN = 1, this field contains the Hall Previous
                                                                    pattern.
                                                                    This field is updated with the Hall LUT value every
                                                                    time that a correct hall event occurs. (r) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALP_Bits;

/** \brief Hall Current and Expected shadow patterns */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALPS_Bits
{
    __IO Ifx_UReg_32Bit HCPS0:3;                /**< \brief [2:0]   Shadow Hall Current Pattern - HLUT0
                                                                    if LUTEN = 0, this field contains the next Hall
                                                                    Current pattern value.
                                                                    This field is set on the HALP.HCP field every time
                                                                    that a correct hall event occurs.
                                                                    HCPS[0] - Hall Input 1
                                                                    HCPS[1] - Hall Input 2
                                                                    HCPS[2] - Hall Input 3
                                                                    if HLUTEN = 1 bitfield works as LUT position 0 (rw) */
    __IO Ifx_UReg_32Bit HEPS1:3;                /**< \brief [5:3]   Shadow Hall expected Pattern - HLUT1
                                                                    if LUTEN = 0, this field contains the next Hall
                                                                    Expected pattern.
                                                                    This field is set on the HALP.HEP field every time
                                                                    that a correct hall event occurs.
                                                                    HEPS[0] - Hall Input 1
                                                                    HEPS[1] - Hall Input 2
                                                                    HEPS[2] - Hall Input 3
                                                                    if LUTEN = 1 bitfield works as LUT position 1 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit HPPS2:3;                /**< \brief [10:8]  Shadow Hall Previous Pattern - HLUT2
                                                                    if LUTEN = 0, this field contains the next Hall
                                                                    Previous pattern.
                                                                    This field is set on the HALP.HPP field every time
                                                                    that a correct hall event occurs.
                                                                    HPPS[0] - Hall Input 1
                                                                    HPPS[1] - Hall Input 2
                                                                    HPPS[2] - Hall Input 3
                                                                    if LUTEN = 1 bitfield works as LUT position 2 (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HLUT3:3;                /**< \brief [18:16] Hall LUT data position 3
                                                                    if LUTEN = 0 bitfield not used
                                                                    if LUTEN = 1 bitfield works as LUT position 3 (rw) */
    __IO Ifx_UReg_32Bit HLUT4:3;                /**< \brief [21:19] Hall LUT data position 4
                                                                    if LUTEN = 0 bitfield not used
                                                                    if LUTEN = 1 bitfield works as LUT position 4 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __IO Ifx_UReg_32Bit HLUT5:3;                /**< \brief [26:24] Hall LUT data position 5
                                                                    if LUTEN = 0 bitfield not used
                                                                    if LUTEN = 1 bitfield works as LUT position 5 (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALPS_Bits;

/** \brief Hall Sensor Output Config */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_Bits
{
    __IO Ifx_UReg_32Bit EDN:3;                  /**< \brief [2:0]   Edge Detection Event Output Node
                                                                    This field selects to which output the event
                                                                    signalizing that an modification on the Hall Inputs
                                                                    is forward. (rw)
                                                NO_FWD        : 0u   Signal is not forward to any output
                                                FWD0          : 1u   Forward to MOTIFx.OUT0
                                                FWD1          : 2u   Forward to MOTIFx.OUT1
                                                FWD2          : 3u   Forward to MOTIFx.OUT2
                                                FWD3          : 4u   Forward to MOTIFx.OUT3
                                                FWD4          : 5u   Forward to MOTIFx.OUT4
                                                FWD5          : 6u   Forward to MOTIFx.OUT5
                                                FWD6          : 7u   Forward to MOTIFx.OUT6 */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit CHN:3;                  /**< \brief [6:4]   Correct Hall Event Output Node
                                                                    This field selects to which output the event
                                                                    signalizing that a correct hall event has been
                                                                    detected is forward.
                                                                    Same coding description as the EDN field. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit IDN:3;                  /**< \brief [10:8]  Idle/Wrong Hall Event Output Node
                                                                    This field selects to which output the OR event
                                                                    between the external fault pins,
                                                                    MOTIFx.EWHE, and the Wrong Hall Event is forward.
                                                                    Same coding description as the EDN field. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HSTN:3;                 /**< \brief [14:12] Start Event Output Node
                                                                    This field selects to which output the event
                                                                    signalizing that the run bit was set is forward.
                                                                    Same coding description as the EDN field. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit SPN:3;                  /**< \brief [18:16] Stop Counters/Pattern Mismatch Event Output Node
                                                                    This field selects to which output the event
                                                                    signalizing that the Hall Sensor inputs do not
                                                                    match the current, the expected or the previous
                                                                    pattern is forward.
                                                                    Same coding description as the EDN field. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit CPN:3;                  /**< \brief [22:20] Current Pattern Match Event Output Node
                                                                    This field selects to which output the event
                                                                    signalizing that the Hall Sensor inputs match the
                                                                    current pattern is forward.
                                                                    Same coding description as the EDN field. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit PPN:3;                  /**< \brief [26:24] Previous Pattern Match Event Output Node
                                                                    This field selects to which output the event
                                                                    signalizing that the Hall Sensor inputs match the
                                                                    previous pattern is forward.
                                                                    Same coding description as the EDN field. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_Bits;

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC.EDN enumerated values */

/** \brief Signal is not forward to any output */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_EDN_NO_FWD (0u)

/** \brief Forward to MOTIFx.OUT0 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_EDN_FWD0 (1u)

/** \brief Forward to MOTIFx.OUT1 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_EDN_FWD1 (2u)

/** \brief Forward to MOTIFx.OUT2 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_EDN_FWD2 (3u)

/** \brief Forward to MOTIFx.OUT3 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_EDN_FWD3 (4u)

/** \brief Forward to MOTIFx.OUT4 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_EDN_FWD4 (5u)

/** \brief Forward to MOTIFx.OUT5 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_EDN_FWD5 (6u)

/** \brief Forward to MOTIFx.OUT6 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_EDN_FWD6 (7u)

/** \brief Multi-Channel Mode Pattern */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCM_Bits
{
    __I  Ifx_UReg_32Bit MCMP:32;                /**< \brief [31:0]  Multi-Channel Pattern
                                                                    This field contains the Multi-Channel Pattern that
                                                                    is going to be applied to the Multi-Channel
                                                                    outputs, MOTIFx.MOUT[31:0].
                                                                    if MLUTEN=0, this field is updated with the value
                                                                    of the MCSM.MCMPS every time that a Multi-Channel
                                                                    pattern update is triggered.
                                                                    if MLUTEN=1, this bitfield is updated with the
                                                                    value select in MLUT0,1,2,3,4,5.
                                                                    These values get transferred to MOTIFx.MOUT[31:0] (r) */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCM_Bits;

/** \brief Multi-Channel Mode shadow Pattern LUT0 */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM_Bits
{
    __IO Ifx_UReg_32Bit MCMPS:32;               /**< \brief [31:0]  Shadow Multi-Channel Pattern
                                                                    if MLUTEN=0,
                                                                    This field contains the next Multi-Channel Pattern.
                                                                    Every time that a Multi-Channel pattern transfer is
                                                                    triggered, this value is passed into the field
                                                                    MCM.MCMP.
                                                                    if MLUTEN=1,
                                                                    This field contains the Multi-Channel Pattern
                                                                    stored in Look-up table position 0.
                                                                    If Multi-Channel pattern transfer is triggered and
                                                                    MLUT0 is selected, this value is passed into field
                                                                    MCM.MCMP[31:0] (rw) */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM_Bits;

/** \brief Multi-Channel Mode Control set */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMS_Bits
{
    __O  Ifx_UReg_32Bit MNPS:1;                 /**< \brief [0:0]   Multi-Channel Pattern Update Enable Set
                                                                    Writing a 1 into this field enables the
                                                                    Multi-Channel pattern update (sets the MCMF.MSS bit).
                                                                    The update is not done immediately due to the fact
                                                                    that the trigger that synchronizes the update with
                                                                    the PWM is still needed.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit STHR:1;                 /**< \brief [1:1]   Hall Pattern Shadow Transfer Request
                                                                    Writing a 1 into this field leads to an immediate
                                                                    update of the fields HALP.HCP, HALP.HEP and
                                                                    HALP.HPP.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit STMR:1;                 /**< \brief [2:2]   Multi-Channel Shadow Transfer Request
                                                                    Writing a 1 into this field leads to an immediate
                                                                    update of the field MCM.MCMP.
                                                                    A read always returns 0. (w) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMS_Bits;

/** \brief Multi-Channel Mode Control clear */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMC_Bits
{
    __O  Ifx_UReg_32Bit MNPC:1;                 /**< \brief [0:0]   Multi-Channel Pattern Update Enable Clear
                                                                    Writing a 1 into this field clears the MCMF.MSS bit.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit MPC:1;                  /**< \brief [1:1]   Multi-Channel Pattern clear
                                                                    Writing a 1 into this field clears the
                                                                    Multi-Channel Pattern value with the content of the
                                                                    MCPF register.
                                                                    A read always returns 0. (w) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMC_Bits;

/** \brief Multi-Channel Mode flag status */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMF_Bits
{
    __I  Ifx_UReg_32Bit MSS:1;                  /**< \brief [0:0]   Multi-Channel Pattern update status
                                                                    This field indicates if the Multi-Channel pattern
                                                                    is ready to be updated or not.
                                                                    When this field is set, the Multi-Channel pattern
                                                                    is updated when the triggering signal, selected
                                                                    from the MOTIFx.MSYNC, becomes active.
                                                                    0 - Update of the Multi-Channel pattern is set
                                                                    1 - Update of the Multi-Channel pattern is not set (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMF_Bits;

/** \brief Multi-Channel Pattern Fault */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCPF_Bits
{
    __IO Ifx_UReg_32Bit MCFV:32;                /**< \brief [31:0]  Multi-Channel Fault Value
                                                                    This register contains the value that is going to
                                                                    be loaded into the Multi-Channel patter, MCP
                                                                    register, and fed consequently to the outputs,
                                                                    MOTIFx.MOUT[31:0].
                                                                    This value is loaded into the MCP register whenever
                                                                    a fault is detected (via a wrong hall event or one
                                                                    of the MOTIFx.EWHEy pins) or whenever the software
                                                                    requests a pattern clear via the MCMC.MPC bitfield. (rw) */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCPF_Bits;

/** \brief Multi-Channel Output Config */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_Bits
{
    __IO Ifx_UReg_32Bit PUN:3;                  /**< \brief [2:0]   Pattern Update Event Output Node
                                                                    This field selects to which output, the event
                                                                    signalizing that a Multi-Channel pattern update is
                                                                    enabled (MSS is set), is forward. (rw)
                                                NO_FWD        : 0u   Signal is not forward to any output
                                                FWD0          : 1u   Forward to MOTIFx.OUT0
                                                FWD1          : 2u   Forward to MOTIFx.OUT1
                                                FWD2          : 3u   Forward to MOTIFx.OUT2
                                                FWD3          : 4u   Forward to MOTIFx.OUT3
                                                FWD4          : 5u   Forward to MOTIFx.OUT4
                                                FWD5          : 6u   Forward to MOTIFx.OUT5
                                                FWD6          : 7u   Forward to MOTIFx.OUT6 */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit SHN:3;                  /**< \brief [6:4]   Update Sync Event Output Node
                                                                    This field selects to which output, the event that
                                                                    is used to synchronize the Multi-Channel Pattern
                                                                    update has happened after MSYNC edge detected, is forward.
                                                                    Same coding description as the PUN field. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit MSTN:3;                 /**< \brief [10:8]  Start Event Output Node
                                                                    This field selects to which output the event
                                                                    signalizing that the run bit was set is forward.
                                                                    Same coding description as the PUN field. (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_Bits;

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC.PUN enumerated values */

/** \brief Signal is not forward to any output */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_PUN_NO_FWD (0u)

/** \brief Forward to MOTIFx.OUT0 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_PUN_FWD0 (1u)

/** \brief Forward to MOTIFx.OUT1 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_PUN_FWD1 (2u)

/** \brief Forward to MOTIFx.OUT2 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_PUN_FWD2 (3u)

/** \brief Forward to MOTIFx.OUT3 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_PUN_FWD3 (4u)

/** \brief Forward to MOTIFx.OUT4 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_PUN_FWD4 (5u)

/** \brief Forward to MOTIFx.OUT5 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_PUN_FWD5 (6u)

/** \brief Forward to MOTIFx.OUT6 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_PUN_FWD6 (7u)

/** \brief Quadrature Decoder Configuration */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_Bits
{
    __IO Ifx_UReg_32Bit PALS:1;                 /**< \brief [0:0]   Phase A Level selector
                                                                    0 - Phase A is active HIGH
                                                                    1 - Phase A is active LOW (rw) */
    __IO Ifx_UReg_32Bit PBLS:1;                 /**< \brief [1:1]   Phase B Level selector
                                                                    0 - Phase B is active HIGH
                                                                    1 - Phase B is active LOW (rw) */
    __IO Ifx_UReg_32Bit PHS:1;                  /**< \brief [2:2]   Phase signals swap
                                                                    0 - Phase A is the leading signal for clockwise rotation
                                                                    1 - Phase B is the leading signal for clockwise
                                                                    rotation (rw) */
    __IO Ifx_UReg_32Bit INDS:1;                 /**< \brief [3:3]   Index Signal Level selector
                                                                    0 - Index signal is active HIGH
                                                                    1 - Index signal is active LOW (rw) */
    __IO Ifx_UReg_32Bit ICM:2;                  /**< \brief [5:4]   Index Marker generations control
                                                                    This field controls the generation of the index
                                                                    marker that is linked PRGINDX event. (rw)
                                                NO_IDX        : 0u   No index marker generation
                                                1ST_IDX       : 1u   Only first index occurrence generated
                                                ALL_IDX       : 2u   All index occurrences generated
                                                Reserved3     : 3u   Reserved */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __I  Ifx_UReg_32Bit DVAL:1;                 /**< \brief [8:8]   Current rotation direction
                                                                    0 - Counterclockwise rotation
                                                                    1 - Clockwise rotation (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [11:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit PAEM:2;                 /**< \brief [13:12] Phase A Edge Mode
                                                                    Note: Selecting BOTH in one PHASE, implies that
                                                                    other PHASE should not be RISE/FALL.
                                                                    Selecting NONE in one PHASE, implies that other
                                                                    PHASE should not be NONE.
                                                                    Invalid combination can lead to unexpected behavior (rw)
                                                BOTH          : 0u   clock is decoded on rising and falling edges of the
                                                                    Phase A signal
                                                RISE          : 1u   clock is decoded on rising edge of the Phase A signal
                                                FALL          : 2u   clock is decoded on falling edge of the Phase A signal
                                                NONE          : 3u   Clock is not decoded for PHASE A */
    __IO Ifx_UReg_32Bit PBEM:2;                 /**< \brief [15:14] Phase B Edge Mode
                                                                    Note: Selecting BOTH in one PHASE, implies that
                                                                    other PHASE should not be RISE/FALL.
                                                                    Selecting NONE in one PHASE, implies that other
                                                                    PHASE should not be NONE.
                                                                    Invalid combination can lead to unexpected behavior (rw)
                                                BOTH          : 0u   clock is decoded on rising and falling edges of the
                                                                    Phase B signal
                                                RISE          : 1u   clock is decoded on rising edge of the Phase B signal
                                                FALL          : 2u   clock is decoded on falling edge of the Phase B signal
                                                NONE          : 3u   Clock is not decoded for PHASE B */
    __IO Ifx_UReg_32Bit PACS:2;                 /**< \brief [17:16] Phase A or Clock Selector
                                                                    Selects which signal is used as Phase A signal if
                                                                    in Quadrature Decoder Mode or as Clock if in
                                                                    Direction Count Mode: (rw)
                                                DISABLE       : 0u   Disabled
                                                POSI0         : 1u   POSI0
                                                POSI1         : 2u   POSI1
                                                POSI2         : 3u   POSI2 */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [19:18] \internal Reserved */
    __IO Ifx_UReg_32Bit PBDS:2;                 /**< \brief [21:20] Phase B or Direction Selector
                                                                    Selects which signal is used as Phase B signal if
                                                                    in Quadrature Decoder Mode or as Direction if in
                                                                    Direction Count Mode: (rw)
                                                DISABLE       : 0u   Disabled
                                                POSI0         : 1u   POSI0
                                                POSI1         : 2u   POSI1
                                                POSI2         : 3u   POSI2 */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __IO Ifx_UReg_32Bit IDS:2;                  /**< \brief [25:24] Index Selector
                                                                    Selects which signal is used as Index signal if in
                                                                    Quadrature Decoder Mode: (rw)
                                                DISABLE       : 0u   Disabled
                                                POSI0         : 1u   POSI0
                                                POSI1         : 2u   POSI1
                                                POSI2         : 3u   POSI2 */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [31:26] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_Bits;

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC.ICM enumerated values */

/** \brief No index marker generation */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_ICM_NO_IDX (0u)

/** \brief Only first index occurrence generated */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_ICM_1ST_IDX (1u)

/** \brief All index occurrences generated */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_ICM_ALL_IDX (2u)

/** \brief Reserved */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_ICM_Reserved3 (3u)

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC.PAEM enumerated values */

/** \brief clock is decoded on rising and falling edges of the Phase A signal */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PAEM_BOTH (0u)

/** \brief clock is decoded on rising edge of the Phase A signal */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PAEM_RISE (1u)

/** \brief clock is decoded on falling edge of the Phase A signal */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PAEM_FALL (2u)

/** \brief Clock is not decoded for PHASE A */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PAEM_NONE (3u)

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC.PBEM enumerated values */

/** \brief clock is decoded on rising and falling edges of the Phase B signal */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PBEM_BOTH (0u)

/** \brief clock is decoded on rising edge of the Phase B signal */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PBEM_RISE (1u)

/** \brief clock is decoded on falling edge of the Phase B signal */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PBEM_FALL (2u)

/** \brief Clock is not decoded for PHASE B */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PBEM_NONE (3u)

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC.PACS enumerated values */

/** \brief Disabled */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PACS_DISABLE (0u)

/** \brief POSI0 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PACS_POSI0 (1u)

/** \brief POSI1 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PACS_POSI1 (2u)

/** \brief POSI2 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PACS_POSI2 (3u)

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC.PBDS enumerated values */

/** \brief Disabled */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PBDS_DISABLE (0u)

/** \brief POSI0 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PBDS_POSI0 (1u)

/** \brief POSI1 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PBDS_POSI1 (2u)

/** \brief POSI2 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_PBDS_POSI2 (3u)

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC.IDS enumerated values */

/** \brief Disabled */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_IDS_DISABLE (0u)

/** \brief POSI0 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_IDS_POSI0 (1u)

/** \brief POSI1 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_IDS_POSI1 (2u)

/** \brief POSI2 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_IDS_POSI2 (3u)

/** \brief Quadrature Output Config */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_Bits
{
    __IO Ifx_UReg_32Bit QCN:3;                  /**< \brief [2:0]   Quadrature Clock Event Output Node
                                                                    This field selects to which output, the quadrature
                                                                    clock (QCLK) event, is forward. (rw)
                                                NO_FWD        : 0u   Signal is not forward to any output
                                                FWD0          : 1u   Forward to MOTIFx.OUT0
                                                FWD1          : 2u   Forward to MOTIFx.OUT1
                                                FWD2          : 3u   Forward to MOTIFx.OUT2
                                                FWD3          : 4u   Forward to MOTIFx.OUT3
                                                FWD4          : 5u   Forward to MOTIFx.OUT4
                                                FWD5          : 6u   Forward to MOTIFx.OUT5
                                                FWD6          : 7u   Forward to MOTIFx.OUT6 */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit DON:3;                  /**< \brief [6:4]   Direction Event Output Node
                                                                    This field selects to which output, the direction
                                                                    signal (QDIR), is forward.
                                                                    Same coding description as the QCN field. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit PCN:3;                  /**< \brief [10:8]  Period Clock Event Output Node
                                                                    This field selects to which output, the period
                                                                    clock (PCLK) event, is forward.
                                                                    Same coding description as the QCN field. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __IO Ifx_UReg_32Bit CCN:3;                  /**< \brief [14:12] Clear/Capture Event Output Node
                                                                    This field selects to which output the event
                                                                    signalizing that an index/zero marker was detected,
                                                                    is forward.
                                                                    This can be used as a capture or clear function for
                                                                    a timer, to measure time between index events.
                                                                    internal prgindx
                                                                    Same coding description as the QCN field. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit IXN:3;                  /**< \brief [18:16] Index Event Output Node
                                                                    This field selects to which output the event
                                                                    signalizing that an index/zero marker was detected,
                                                                    is forward.
                                                                    This event is only generated when the index input
                                                                    has been detected and the rotation direction did
                                                                    not change (between two index occurrences).
                                                                    internal indx
                                                                    Same coding description as the QCN field. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit QSTN:3;                 /**< \brief [22:20] Start Event Output Node
                                                                    This field selects to which output the event
                                                                    signalizing that the run bit was set is forward.
                                                                    Same coding description as the QCN field. (rw) */
    __I  Ifx_UReg_32Bit :9;                     /**< \brief [31:23] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_Bits;

/* PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC.QCN enumerated values */

/** \brief Signal is not forward to any output */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_QCN_NO_FWD (0u)

/** \brief Forward to MOTIFx.OUT0 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_QCN_FWD0 (1u)

/** \brief Forward to MOTIFx.OUT1 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_QCN_FWD1 (2u)

/** \brief Forward to MOTIFx.OUT2 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_QCN_FWD2 (3u)

/** \brief Forward to MOTIFx.OUT3 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_QCN_FWD3 (4u)

/** \brief Forward to MOTIFx.OUT4 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_QCN_FWD4 (5u)

/** \brief Forward to MOTIFx.OUT5 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_QCN_FWD5 (6u)

/** \brief Forward to MOTIFx.OUT6 */
#define IFX_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_QCN_FWD6 (7u)

/** \brief Multi-Channel Extra Config */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMEC_Bits
{
    __IO Ifx_UReg_32Bit MSBP:1;                 /**< \brief [0:0]   Multi-Channel Mode Sync Bypass
                                                                    Setting this bitfield to 1 will dictate that
                                                                    whenever the MCMF.MSS bitfield is 1, a pattern
                                                                    update will occur immediately (without waiting for
                                                                    the sync signal - MOTIFx.MSYNC).
                                                                    0 - Update of the Multi-Channel pattern is only
                                                                    done after the sync signal is detected -
                                                                    MOTIFx.MSYNC.
                                                                    1 - Update of the Multi-Channel pattern is done
                                                                    immediately after the MCMF.MSS field is set. (rw) */
    __IO Ifx_UReg_32Bit MEBP:1;                 /**< \brief [1:1]   Multi-Channel Pattern Enable Delay Bypass
                                                                    Setting this bitfield to 1 will bypass the delay
                                                                    between a Correct Hall Event and the enable of the
                                                                    Multi-Channel Patter update.
                                                                    0 - Enable of the Multi-Channel Pattern update is
                                                                    only done after the external SET signal is detected
                                                                    - MOTIFx.MSET.
                                                                    1 - Enable of the Multi-Channel Pattern update is
                                                                    done immediately after a Correct Hall Event is
                                                                    detected - only valid when PCONF.MCUE is 0. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit MFCE:1;                 /**< \brief [4:4]   Multi-Channel Fault Clear Enable
                                                                    Setting this bitfield to 1 will enable a clear of
                                                                    the Multi-Channel pattern, whenever a Hall Fault
                                                                    Event is detected.
                                                                    The Multi-Channel pattern will be cleared with the
                                                                    value programmed in the MCFV field.
                                                                    0 - Multi-Channel pattern clear with Hall Fault
                                                                    Event disabled.
                                                                    1 - Multi-Channel pattern clear with Hall Fault
                                                                    Event enabled. (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMEC_Bits;

/** \brief MOTIF interrupt status */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLG_Bits
{
    __I  Ifx_UReg_32Bit CHES:1;                 /**< \brief [0:0]   Correct Hall Event Status
                                                                    0 - Correct Hall Event not detected
                                                                    1 - Correct Hall Event detected (r) */
    __I  Ifx_UReg_32Bit WHES:1;                 /**< \brief [1:1]   Wrong Hall Event Status
                                                                    0 - Wrong Hall Event not detected
                                                                    1 - Wrong Hall Event detected (r) */
    __I  Ifx_UReg_32Bit HIES:1;                 /**< \brief [2:2]   Hall Inputs Update Status
                                                                    0 - Transition on the Hall Inputs not detected
                                                                    1 - Transition on the Hall Inputs detected (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __I  Ifx_UReg_32Bit MSTS:1;                 /**< \brief [4:4]   Multi-Channel pattern shadow transfer status
                                                                    0 - Shadow transfer not done
                                                                    1 - Shadow transfer done (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __I  Ifx_UReg_32Bit INDXS:1;                /**< \brief [8:8]   Quadrature Index Status
                                                                    0 - Index event not detected
                                                                    1 - Index event detected (r) */
    __I  Ifx_UReg_32Bit ERRS:1;                 /**< \brief [9:9]   Quadrature Phase Error Status
                                                                    0 - Phase Error event not detected
                                                                    1 - Phase Error event detected (r) */
    __I  Ifx_UReg_32Bit CNTS:1;                 /**< \brief [10:10] Quadrature CLK Status
                                                                    0 - Quadrature clock not generated
                                                                    1 - Quadrature clock generated (r) */
    __I  Ifx_UReg_32Bit DIRS:1;                 /**< \brief [11:11] Quadrature Direction Change
                                                                    0 - Change on direction not detected
                                                                    1 - Change on direction detected (r) */
    __I  Ifx_UReg_32Bit PCLKS:1;                /**< \brief [12:12] Quadrature Period Clk Status
                                                                    0 - Period clock not generated
                                                                    1 - Period clock generated (r) */
    __I  Ifx_UReg_32Bit CPES:1;                 /**< \brief [13:13] Current Pattern Match Status
                                                                    0 - Equality between Sampled Hall input values and
                                                                    Current Pattern value not detected.
                                                                    1 - Equality between Sampled Hall input values and
                                                                    Current Pattern value detected. (r) */
    __I  Ifx_UReg_32Bit PPES:1;                 /**< \brief [14:14] Previous Pattern Match Status
                                                                    0 - Equality between Sampled Hall input values and
                                                                    Previous Pattern value not detected.
                                                                    1 - Equality between Sampled Hall input values and
                                                                    Previous Pattern value detected. (r) */
    __I  Ifx_UReg_32Bit :17;                    /**< \brief [31:15] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLG_Bits;

/** \brief MOTIF interrupt enable */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLGE_Bits
{
    __IO Ifx_UReg_32Bit ECHE:1;                 /**< \brief [0:0]   Correct Hall Event Enable
                                                                    0 - Correct Hall Event interrupt disabled
                                                                    1 - Correct Hall Event interrupt enabled (rw) */
    __IO Ifx_UReg_32Bit EWHE:1;                 /**< \brief [1:1]   Wrong Hall Event Enable
                                                                    0 - Wrong Hall Event interrupt disabled
                                                                    1 - Wrong Hall Event interrupt enabled (rw) */
    __IO Ifx_UReg_32Bit EHIE:1;                 /**< \brief [2:2]   Hall Input Update Enable
                                                                    0 - Update of the Hall Inputs interrupt is disabled
                                                                    1 - Update of the Hall Inputs interrupt is enabled (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit EMST:1;                 /**< \brief [4:4]   Multi-Channel pattern shadow transfer enable
                                                                    0 - Shadow transfer event interrupt disabled
                                                                    1 - Shadow transfer event interrupt enabled (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit EINDX:1;                /**< \brief [8:8]   Quadrature Index Event Enable
                                                                    0 - Index event interrupt disabled
                                                                    1 - Index event interrupt enabled (rw) */
    __IO Ifx_UReg_32Bit EERR:1;                 /**< \brief [9:9]   Quadrature Phase Error Enable
                                                                    0 - Phase error event interrupt disabled
                                                                    1 - Phase error event interrupt enabled (rw) */
    __IO Ifx_UReg_32Bit ECNT:1;                 /**< \brief [10:10] Quadrature CLK interrupt Enable
                                                                    0 - Quadrature CLK event interrupt disabled
                                                                    1 - Quadrature CLK event interrupt enabled (rw) */
    __IO Ifx_UReg_32Bit EDIR:1;                 /**< \brief [11:11] Quadrature direction change interrupt Enable
                                                                    0 - Direction change event interrupt disabled
                                                                    1 - Direction change event interrupt enabled (rw) */
    __IO Ifx_UReg_32Bit EPCLK:1;                /**< \brief [12:12] Quadrature Period CLK interrupt Enable
                                                                    0 - Quadrature Period CLK event interrupt disabled
                                                                    1 - Quadrature Period CLK event interrupt enabled (rw) */
    __IO Ifx_UReg_32Bit ECPE:1;                 /**< \brief [13:13] Current Pattern Match interrupt Enable
                                                                    0 - Current Pattern Match event interrupt disabled
                                                                    1 - Current Pattern Match event interrupt enabled (rw) */
    __IO Ifx_UReg_32Bit EPPE:1;                 /**< \brief [14:14] Previous Pattern Match interrupt Enable
                                                                    0 - Previous Pattern Match event interrupt disabled
                                                                    1 - Previous Pattern Match event interrupt enabled (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit CHESEL:1;               /**< \brief [16:16] Correct Hall Event Service Request Selector
                                                                    0 - Correct Hall Event interrupt forward to
                                                                    MOTIFx.SR0
                                                                    1 - Correct Hall Event interrupt forward to
                                                                    MOTIFx.SR1 (rw) */
    __IO Ifx_UReg_32Bit WHESEL:1;               /**< \brief [17:17] Wrong Hall Event Service Request Selector
                                                                    0 - Wrong Hall Event interrupt forward to MOTIFx.SR0
                                                                    1 - Wrong Hall Event interrupt forward to
                                                                    MOTIFx.SR1 (rw) */
    __IO Ifx_UReg_32Bit HIESEL:1;               /**< \brief [18:18] Hall Inputs Update Event Service Request Selector
                                                                    0 - Hall Inputs Update Event interrupt forward to
                                                                    MOTIFx.SR0
                                                                    1 - Hall Inputs Update Event interrupt forward to
                                                                    MOTIFx.SR1 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit MSTSEL:1;               /**< \brief [20:20] Multi-Channel pattern Update Event Service
                                                                    Request Selector
                                                                    0 - Multi-Channel pattern Update Event interrupt
                                                                    forward to MOTIFx.SR0
                                                                    1 - Multi-Channel pattern Update Event interrupt
                                                                    forward to MOTIFx.SR1 (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [23:21] \internal Reserved */
    __IO Ifx_UReg_32Bit INDSEL:1;               /**< \brief [24:24] Quadrature Index Event Service Request Selector
                                                                    0 - Quadrature Index Event interrupt forward to
                                                                    MOTIFx.SR0
                                                                    1 - Quadrature Index Event interrupt forward to
                                                                    MOTIFx.SR1 (rw) */
    __IO Ifx_UReg_32Bit ERRSEL:1;               /**< \brief [25:25] Quadrature Phase Error Event Service
                                                                    Request Selector
                                                                    0 - Quadrature Phase error Event interrupt forward
                                                                    to MOTIFx.SR0
                                                                    1 - Quadrature Phase error Event interrupt forward
                                                                    to MOTIFx.SR1 (rw) */
    __IO Ifx_UReg_32Bit CNTSEL:1;               /**< \brief [26:26] Quadrature Clock Event Service Request Selector
                                                                    0 - Quadrature Clock Event interrupt forward to
                                                                    MOTIFx.SR0
                                                                    1 - Quadrature Clock Event interrupt forward to
                                                                    MOTIFx.SR1 (rw) */
    __IO Ifx_UReg_32Bit DIRSEL:1;               /**< \brief [27:27] Quadrature Direction Update Event Service
                                                                    Request Selector
                                                                    0 - Quadrature Direction Update Event interrupt
                                                                    forward to MOTIFx.SR0
                                                                    1 - Quadrature Direction Update Event interrupt
                                                                    forward to MOTIFx.SR1 (rw) */
    __IO Ifx_UReg_32Bit PCLSEL:1;               /**< \brief [28:28] Quadrature Period clock Event Service
                                                                    Request Selector
                                                                    0 - Quadrature Period clock Event interrupt forward
                                                                    to MOTIFx.SR0
                                                                    1 - Quadrature Period clock Event interrupt forward
                                                                    to MOTIFx.SR1 (rw) */
    __IO Ifx_UReg_32Bit CPSEL:1;                /**< \brief [29:29] Current Pattern Match Event Service Request Selector
                                                                    0 - Current Pattern Match Event interrupt forward
                                                                    to MOTIFx.SR0
                                                                    1 - Current Pattern Match Event interrupt forward
                                                                    to MOTIFx.SR1 (rw) */
    __IO Ifx_UReg_32Bit PPSEL:1;                /**< \brief [30:30] Previous Pattern Match Event Service
                                                                    Request Selector
                                                                    0 - Previous Pattern Match Event interrupt forward
                                                                    to MOTIFx.SR0
                                                                    1 - Previous Pattern Match Event interrupt forward
                                                                    to MOTIFx.SR1 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLGE_Bits;

/** \brief Interrupt set register */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SPFLG_Bits
{
    __O  Ifx_UReg_32Bit SCHE:1;                 /**< \brief [0:0]   Correct Hall Event flag set
                                                                    Writing a 1 to this field sets the PFLG.CHES bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit SWHE:1;                 /**< \brief [1:1]   Wrong Hall Event flag set
                                                                    Writing a 1 to this field sets the PFLG.WHES bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit SHIE:1;                 /**< \brief [2:2]   Hall Inputs Update Event flag set
                                                                    Writing a 1 to this field sets the PFLG.HIES bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __O  Ifx_UReg_32Bit SMST:1;                 /**< \brief [4:4]   Multi-Channel Pattern shadow transfer flag set
                                                                    Writing a 1 to this field sets the PFLG.MSTS bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __O  Ifx_UReg_32Bit SINDX:1;                /**< \brief [8:8]   Quadrature Index flag set
                                                                    Writing a 1 to this field sets the PFLG.INDXS bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit SERR:1;                 /**< \brief [9:9]   Quadrature Phase Error flag set
                                                                    Writing a 1 to this field sets the PFLG.ERRS bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit SCNT:1;                 /**< \brief [10:10] Quadrature CLK flag set
                                                                    Writing a 1 to this field sets the PFLG.CNTS bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit SDIR:1;                 /**< \brief [11:11] Quadrature Direction flag set
                                                                    Writing a 1 to this field sets the PFLG.DIRS bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit SPCLK:1;                /**< \brief [12:12] Quadrature period clock flag set
                                                                    Writing a 1 to this field sets the PFLG.PCLKS bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit SCP:1;                  /**< \brief [13:13] Current Pattern Match flag set
                                                                    Writing a 1 to this field sets the PFLG.CPES bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit SPP:1;                  /**< \brief [14:14] Previous Pattern Match flag set
                                                                    Writing a 1B to this field sets the PFLG.PPES bit field.
                                                                    An interrupt pulse is generated.
                                                                    A read always returns 0. (w) */
    __I  Ifx_UReg_32Bit :17;                    /**< \brief [31:15] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SPFLG_Bits;

/** \brief Interrupt clear register */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_RPFLG_Bits
{
    __O  Ifx_UReg_32Bit RCHE:1;                 /**< \brief [0:0]   Correct Hall Event flag clear
                                                                    Writing a 1 to this field clears the PFLG.CHES bit field.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit RWHE:1;                 /**< \brief [1:1]   Wrong Hall Event flag clear
                                                                    Writing a 1 to this field clears the PFLG.WHES bit field.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit RHIE:1;                 /**< \brief [2:2]   Hall Inputs Update Event flag clear
                                                                    Writing a 1 to this field clears the PFLG.HIES bit field.
                                                                    A read always returns 0. (w) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __O  Ifx_UReg_32Bit RMST:1;                 /**< \brief [4:4]   Multi-Channel Pattern shadow transfer flag clear
                                                                    Writing a 1 to this field clears the PFLG.MSTS bit field.
                                                                    A read always returns 0. (w) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __O  Ifx_UReg_32Bit RINDX:1;                /**< \brief [8:8]   Quadrature Index flag clear
                                                                    Writing a 1 to this field clears the PFLG.INDXS bit field.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit RERR:1;                 /**< \brief [9:9]   Quadrature Phase Error flag clear
                                                                    Writing a 1 to this field clears the PFLG.ERRS bit field.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit RCNT:1;                 /**< \brief [10:10] Quadrature CLK flag clear
                                                                    Writing a 1 to this field clears the PFLG.CNTS bit field.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit RDIR:1;                 /**< \brief [11:11] Quadrature Direction flag clear
                                                                    Writing a 1 to this field clears the PFLG.DIRS bit field.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit RPCLK:1;                /**< \brief [12:12] Quadrature period clock flag clear
                                                                    Writing a 1 to this field clears the PFLG.PCLKS bit field.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit RCP:1;                  /**< \brief [13:13] Current Pattern Match flag clear
                                                                    Writing a 1 to this field clears the PFLG.CPES bit field.
                                                                    A read always returns 0. (w) */
    __O  Ifx_UReg_32Bit RPP:1;                  /**< \brief [14:14] Previous Pattern Match flag clear
                                                                    Writing a 1 to this field clears the PFLG.PPES bit field.
                                                                    A read always returns 0. (w) */
    __I  Ifx_UReg_32Bit :17;                    /**< \brief [31:15] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_RPFLG_Bits;

/** \brief Multi-Channel Mode shadow pattern LUT1 */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM1_Bits
{
    __IO Ifx_UReg_32Bit MLUT1:32;               /**< \brief [31:0]  Multi-Channel LUT 1
                                                                    if MLUTEN=0 this bitfield is not used
                                                                    if MLUTEN=1 this field contains the Multi-Channel
                                                                    Pattern stored in Look-up table position 1.
                                                                    If Multi-Channel pattern transfer is triggered and
                                                                    MLUT1 is selected, this value is passed into the
                                                                    field MCM.MCMP[31:0] (rw) */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM1_Bits;

/** \brief Multi-Channel Mode shadow pattern LUT2 */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM2_Bits
{
    __IO Ifx_UReg_32Bit MLUT2:32;               /**< \brief [31:0]  Multi-Channel LUT 2
                                                                    if MLUTEN=0 this bitfield is not used
                                                                    if MLUTEN=1 this field contains the Multi-Channel
                                                                    Pattern stored in Look-up table position 2.
                                                                    If Multi-Channel pattern transfer is triggered and
                                                                    MLUT2 is selected, this value is passed into the
                                                                    field MCM.MCMP[31:0] (rw) */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM2_Bits;

/** \brief Multi-Channel Mode shadow pattern LUT3 */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM3_Bits
{
    __IO Ifx_UReg_32Bit MLUT3:32;               /**< \brief [31:0]  Multi-Channel LUT 3
                                                                    if MLUTEN=0 this bitfield is not used
                                                                    if MLUTEN=1 this field contains the Multi-Channel
                                                                    Pattern stored in Look-up table position 3.
                                                                    If Multi-Channel pattern transfer is triggered and
                                                                    MLUT3 is selected, this value is passed into the
                                                                    field MCM.MCMP[31:0] (rw) */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM3_Bits;

/** \brief Multi-Channel Mode shadow pattern LUT4 */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM4_Bits
{
    __IO Ifx_UReg_32Bit MLUT4:32;               /**< \brief [31:0]  Multi-Channel LUT 4
                                                                    if MLUTEN=0 this bitfield is not used
                                                                    if MLUTEN=1 this field contains the Multi-Channel
                                                                    Pattern stored in Look-up table position 4.
                                                                    If Multi-Channel pattern transfer is triggered and
                                                                    MLUT4 is selected, this value is passed into the
                                                                    field MCM.MCMP[31:0] (rw) */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM4_Bits;

/** \brief Multi-Channel Mode shadow pattern LUT5 */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM5_Bits
{
    __IO Ifx_UReg_32Bit MLUT5:32;               /**< \brief [31:0]  Multi-Channel LUT 5
                                                                    if MLUTEN=0 this bitfield is not used
                                                                    if MLUTEN=1 this field contains the Multi-Channel
                                                                    Pattern stored in Look-up table position 5.
                                                                    If Multi-Channel pattern transfer is triggered and
                                                                    MLUT5 is selected, this value is passed into the
                                                                    field MCM.MCMP[31:0] (rw) */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM5_Bits;

/** \brief Hall Mode LUT config */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_CLUT_Bits
{
    __IO Ifx_UReg_32Bit LUTEN:1;                /**< \brief [0:0]   HALL LUT enable
                                                                    Setting this bitfield to 1, will enable the usage
                                                                    of the Hall Look-up table.
                                                                    0 - Hall LUT disabled, HCPS, HEPS, HPPS are used.
                                                                    HLUT3, HLUT4,HLUT5 not used.
                                                                    1 - Hall LUT enabled, HCPS, HEPS, HPPS, HLUT3,
                                                                    HLUT4,HLUT5 works as data container for the LUT.
                                                                    Every time that a correct hall event occurs the LUT
                                                                    provides new values to HALP register (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_CLUT_Bits;

/** \brief Hall Mode LUT status */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SLUT_Bits
{
    __I  Ifx_UReg_32Bit PTR:3;                  /**< \brief [2:0]   HALL LUT Pointer status
                                                                    This field contains the pointer address to HALL LUT
                                                                    current pattern.
                                                                    LUTEN must be set, if  LUTEN is 0, this bitfield is
                                                                    always 0. Valid values are 0,1,2,3,4,5.
                                                                    Invalid values 6,7 (r) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SLUT_Bits;

/** \brief MOTIF Debug Register */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PDBG_Bits
{
    __I  Ifx_UReg_32Bit QCSV:3;                 /**< \brief [2:0]   Quadrature Decoder Current state
                                                                    This field stores the current state of the
                                                                    quadrature decoder state machine.
                                                                    The ready indicates that the state machine has
                                                                    processed the first values present at the MOTIF
                                                                    inputs (this may not be immediate due to the
                                                                    propgation time of the low pass filters - if
                                                                    enabled).
                                                                    QCSV[0] - Phase B
                                                                    QCSV[1] - Phase A
                                                                    QCSV[2] - ready (r) */
    __I  Ifx_UReg_32Bit QPSV:3;                 /**< \brief [5:3]   Quadrature Decoder Previous state
                                                                    This field stores the previous state of the
                                                                    quadrature decoder state machine.
                                                                    The ready indicates that the state machine has
                                                                    processed the first values present at the MOTIF
                                                                    inputs (this may not be immediate due to the
                                                                    propgation time of the low pass filters - if
                                                                    enabled).
                                                                    QPSV[0] - Phase B
                                                                    QPSV[1] - Phase A
                                                                    QPSV[2] - ready (r) */
    __I  Ifx_UReg_32Bit IVAL:1;                 /**< \brief [6:6]   Current Index Value (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __I  Ifx_UReg_32Bit HSP:3;                  /**< \brief [10:8]  Hall Current Sampled Pattern
                                                                    HSP[0] - Hall Input 1
                                                                    HSP[1] - Hall Input 2
                                                                    HSP[2] - Hall Input 3 (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __I  Ifx_UReg_32Bit LPF0V:1;                /**< \brief [12:12] Low Pass filter 0 valid state
                                                                    0 - Low pass filter has not output valid data
                                                                    1 - Low pass filter has output valid data (r) */
    __I  Ifx_UReg_32Bit LPF1V:1;                /**< \brief [13:13] Low Pass filter 1 valid state
                                                                    0 - Low pass filter has not output valid data
                                                                    1 - Low pass filter has output valid data (r) */
    __I  Ifx_UReg_32Bit LPF2V:1;                /**< \brief [14:14] Low Pass filter 2 valid state
                                                                    0 - Low pass filter has not output valid data
                                                                    1 - Low pass filter has output valid data (r) */
    __I  Ifx_UReg_32Bit :17;                    /**< \brief [31:15] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PDBG_Bits;

/** \brief MOTIF Low Pass 0 Status */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP0S_Bits
{
    __I  Ifx_UReg_32Bit LPP0:10;                /**< \brief [9:0]   Actual count of the Low Pass Filter (r) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP0S_Bits;

/** \brief MOTIF Low Pass 1 Status */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP1S_Bits
{
    __I  Ifx_UReg_32Bit LPP1:10;                /**< \brief [9:0]   Actual count of the Low Pass Filter (r) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP1S_Bits;

/** \brief MOTIF Low Pass 2 Status */
typedef struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP2S_Bits
{
    __I  Ifx_UReg_32Bit LPP2:10;                /**< \brief [9:0]   Actual count of the Low Pass Filter (r) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP2S_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_CTRL_Bits
{
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [30:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit HWFILT3P3Z_EN:1;        /**< \brief [31:31] HWFILT3P3Z_SS0 peripheral enable:
                                                                    0 = disable (only mmio CTRL registers is accessible)
                                                                    1 = enable (all AHB registers in the HWFILT3P3Z_SS0
                                                                    are accessible) (rw) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CTRL_Bits
{
    __IO Ifx_UReg_32Bit FILTER_EN:1;            /**< \brief [0:0]   Enable/Disable Filter:
                                                                    0 = Disable (all registers are initilaized to the
                                                                    default values)
                                                                    1 = Enable (rw) */
    __I  Ifx_UReg_32Bit FILTER_BUSY:1;          /**< \brief [1:1]   Filter output ready:
                                                                    1 = busy
                                                                    0 = free (r) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN0_Bits
{
    __IO Ifx_UReg_32Bit DIN0:16;                /**< \brief [15:0]  Filter Data 0 Input Register
                                                                    When writing, the filter processing will start if
                                                                    the corresponding trigger enable bit in the CNFG
                                                                    register is set (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_DIN0:16;    /**< \brief [31:16] Filter Data 0 Input Register sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN0_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN1_Bits
{
    __IO Ifx_UReg_32Bit DIN1:16;                /**< \brief [15:0]  Filter Data 1 Input Register
                                                                    When writing, the filter processing will start if
                                                                    the corresponding trigger enable bit in the CNFG
                                                                    register is set (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_DIN1:16;    /**< \brief [31:16] Filter Data 1 Input Register sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN1_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CNFG_Bits
{
    __IO Ifx_UReg_32Bit SRC_SEL:1;              /**< \brief [0:0]   Select source for register DATA_IN1:
                                                                    0 = AHB IF
                                                                    1 = DATA PATH (rw) */
    __IO Ifx_UReg_32Bit EN_TRIG0:1;             /**< \brief [1:1]   Enable/Disable filter processing on writing
                                                                    into register DAT_IN0:
                                                                    0 = Disable
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit EN_TRIG1:1;             /**< \brief [2:2]   Enable/Disable filter processing on writing
                                                                    into register DAT_IN1:
                                                                    0 = Disable
                                                                    1 = Enable (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CNFG_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX0_Bits
{
    __IO Ifx_UReg_32Bit CX0_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CX0_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX0_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX1_Bits
{
    __IO Ifx_UReg_32Bit CX1_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CX1_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX1_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX2_Bits
{
    __IO Ifx_UReg_32Bit CX2_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CX2_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX2_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX3_Bits
{
    __IO Ifx_UReg_32Bit CX3_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CX3_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX3_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY1_Bits
{
    __IO Ifx_UReg_32Bit CY1_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CY1_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY1_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY2_Bits
{
    __IO Ifx_UReg_32Bit CY2_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CY2_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY2_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY3_Bits
{
    __IO Ifx_UReg_32Bit CY3_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CY3_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY3_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_OUT_Bits
{
    __I  Ifx_UReg_32Bit DATA_OUT:24;            /**< \brief [23:0]  Filter Data Output Register (r) */
    __I  Ifx_UReg_32Bit SIGN_EXT_DATA_OUT:8;    /**< \brief [31:24] Filter Data Output Register sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_OUT_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_OFFSET_Bits
{
    __IO Ifx_UReg_32Bit DATA_OFFSET:24;         /**< \brief [23:0]  Filter Data Output Offset Register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXT_DATA_OFFSET:8; /**< \brief [31:24] Filter Data Output Offset Register sign
                                                                    extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_OFFSET_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMAX_Bits
{
    __IO Ifx_UReg_32Bit LMAX:24;                /**< \brief [23:0]  Filter Out Max Limit Register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXT_LMAX:8;        /**< \brief [31:24] Filter Out Max Limit Register sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMAX_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMIN_Bits
{
    __IO Ifx_UReg_32Bit LMIN:24;                /**< \brief [23:0]  Filter Out Min Limit Register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXT_LMIN:8;        /**< \brief [31:24] Filter Out Min Limit Register sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMIN_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECX_Bits
{
    __IO Ifx_UReg_32Bit SCALE_CX:3;             /**< \brief [2:0]   Scale X Coefficients Factor (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECX_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECY_Bits
{
    __IO Ifx_UReg_32Bit SCALE_CY:3;             /**< \brief [2:0]   Scale Y Coefficients Factor (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECY_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GIN_Bits
{
    __IO Ifx_UReg_32Bit G_IN:2;                 /**< \brief [1:0]   Amplify input difference factor (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GIN_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GOUT_Bits
{
    __IO Ifx_UReg_32Bit G_OUT:3;                /**< \brief [2:0]   Scale down output (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GOUT_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_VERSION_Bits
{
    __I  Ifx_UReg_32Bit VERSION:32;             /**< \brief [31:0]  Filter Version Register (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_VERSION_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_CTRL_Bits
{
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [30:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit HWFILT3P3Z_EN:1;        /**< \brief [31:31] HWFILT3P3Z_SS1 peripheral enable:
                                                                    0 = disable (only mmio CTRL registers is accessible)
                                                                    1 = enable (all AHB registers in the HWFILT3P3Z_SS1
                                                                    are accessible) (rw) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CTRL_Bits
{
    __IO Ifx_UReg_32Bit FILTER_EN:1;            /**< \brief [0:0]   Enable/Disable Filter:
                                                                    0 = Disable (all registers are initilaized to the
                                                                    default values)
                                                                    1 = Enable (rw) */
    __I  Ifx_UReg_32Bit FILTER_BUSY:1;          /**< \brief [1:1]   Filter output ready:
                                                                    1 = busy
                                                                    0 = free (r) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN0_Bits
{
    __IO Ifx_UReg_32Bit DIN0:16;                /**< \brief [15:0]  Filter Data 0 Input Register
                                                                    When writing, the filter processing will start if
                                                                    the corresponding trigger enable bit in the CNFG
                                                                    register is set (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_DIN0:16;    /**< \brief [31:16] Filter Data 0 Input Register sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN0_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN1_Bits
{
    __IO Ifx_UReg_32Bit DIN1:16;                /**< \brief [15:0]  Filter Data 1 Input Register
                                                                    When writing, the filter processing will start if
                                                                    the corresponding trigger enable bit in the CNFG
                                                                    register is set (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_DIN1:16;    /**< \brief [31:16] Filter Data 1 Input Register sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN1_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CNFG_Bits
{
    __IO Ifx_UReg_32Bit SRC_SEL:1;              /**< \brief [0:0]   Select source for register DATA_IN1:
                                                                    0 = AHB IF
                                                                    1 = DATA PATH (rw) */
    __IO Ifx_UReg_32Bit EN_TRIG0:1;             /**< \brief [1:1]   Enable/Disable filter processing on writing
                                                                    into register DAT_IN0:
                                                                    0 = Disable
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit EN_TRIG1:1;             /**< \brief [2:2]   Enable/Disable filter processing on writing
                                                                    into register DAT_IN1:
                                                                    0 = Disable
                                                                    1 = Enable (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CNFG_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX0_Bits
{
    __IO Ifx_UReg_32Bit CX0_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CX0_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX0_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX1_Bits
{
    __IO Ifx_UReg_32Bit CX1_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CX1_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX1_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX2_Bits
{
    __IO Ifx_UReg_32Bit CX2_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CX2_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX2_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX3_Bits
{
    __IO Ifx_UReg_32Bit CX3_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CX3_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX3_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY1_Bits
{
    __IO Ifx_UReg_32Bit CY1_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CY1_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY1_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY2_Bits
{
    __IO Ifx_UReg_32Bit CY2_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CY2_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY2_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY3_Bits
{
    __IO Ifx_UReg_32Bit CY3_DATA:24;            /**< \brief [23:0]  Coefficient data register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTEND_CY3_DATA:8; /**< \brief [31:24] Coefficient sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY3_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_OUT_Bits
{
    __I  Ifx_UReg_32Bit DATA_OUT:24;            /**< \brief [23:0]  Filter Data Output Register (r) */
    __I  Ifx_UReg_32Bit SIGN_EXT_DATA_OUT:8;    /**< \brief [31:24] Filter Data Output Register sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_OUT_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_OFFSET_Bits
{
    __IO Ifx_UReg_32Bit DATA_OFFSET:24;         /**< \brief [23:0]  Filter Data Output Offset Register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXT_DATA_OFFSET:8; /**< \brief [31:24] Filter Data Output Offset Register sign
                                                                    extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_OFFSET_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMAX_Bits
{
    __IO Ifx_UReg_32Bit LMAX:24;                /**< \brief [23:0]  Filter Out Max Limit Register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXT_LMAX:8;        /**< \brief [31:24] Filter Out Max Limit Register sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMAX_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMIN_Bits
{
    __IO Ifx_UReg_32Bit LMIN:24;                /**< \brief [23:0]  Filter Out Min Limit Register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXT_LMIN:8;        /**< \brief [31:24] Filter Out Min Limit Register sign extended (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMIN_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECX_Bits
{
    __IO Ifx_UReg_32Bit SCALE_CX:3;             /**< \brief [2:0]   Scale X Coefficients Factor (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECX_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECY_Bits
{
    __IO Ifx_UReg_32Bit SCALE_CY:3;             /**< \brief [2:0]   Scale Y Coefficients Factor (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECY_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GIN_Bits
{
    __IO Ifx_UReg_32Bit G_IN:2;                 /**< \brief [1:0]   Amplify input difference factor (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GIN_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GOUT_Bits
{
    __IO Ifx_UReg_32Bit G_OUT:3;                /**< \brief [2:0]   Scale down output (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GOUT_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_VERSION_Bits
{
    __I  Ifx_UReg_32Bit VERSION:32;             /**< \brief [31:0]  Filter Version Register (r) */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_VERSION_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ADCM_ADCM_ADC_DATA_Bits
{
    __I  Ifx_UReg_32Bit ADC_DATA:32;            /**< \brief [31:0]  ADCs DATA Channel (ADC0_DATA,
                                                                    ADC0_AUX_DATA, ADC0_ALT_AUX_DATA,  ADC1_DATA,
                                                                    ADC2_DATA, ADC3_DATA, ADC3_AUX_DATA) (r) */
} Ifx_PPCA_ADCM_ADCM_ADC_DATA_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_CTRL_Bits
{
    __I  Ifx_UReg_32Bit TRIG_IN:6;              /**< \brief [5:0]   User Input Bits: reflects status of TRIG_IN bus (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit MACO_SEL:1;             /**< \brief [8:8]   Select CLB output:
                                                                    1 = line, line_compl and monitor of MACO
                                                                    0 = line, line_compl and monitor of DICO (rw) */
    __IO Ifx_UReg_32Bit DEBUG_FREEZE_EN:1;      /**< \brief [9:9]   Debug CLB with freezing the output (safe state):
                                                                    1 = Debugging mode (step-by-step debugging)
                                                                    0 = Non-debugging mode (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [30:10] \internal Reserved */
    __IO Ifx_UReg_32Bit EN:1;                   /**< \brief [31:31] Enable/Disable CLB block
                                                                    1 = CLB Enable (all AHB CLB registers are
                                                                    accessible)
                                                                    0 = CLB Disable (only CTRL register is accessible) (rw) */
} Ifx_PPCA_CLB_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_CTRL_Bits
{
    __IO Ifx_UReg_32Bit EN_PH1:1;               /**< \brief [0:0]   Phase1 enable:
                                                                    1 = Enable
                                                                    0 = Disable (rw) */
    __IO Ifx_UReg_32Bit EN_PH2:1;               /**< \brief [1:1]   Phase2 enable:
                                                                    1 = Enable
                                                                    0 = Disable (rw) */
    __IO Ifx_UReg_32Bit EN_PH3:1;               /**< \brief [2:2]   Phase3 enable:
                                                                    1 = Enable
                                                                    0 = Disable (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit PE_EN:1;                /**< \brief [4:4]   1 = Phase Enabler (PE) Enable
                                                                    0 = PE Disable (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit USER_BITS:10;           /**< \brief [17:8]  User Bits (rw) */
    __I  Ifx_UReg_32Bit :13;                    /**< \brief [30:18] \internal Reserved */
    __IO Ifx_UReg_32Bit EN:1;                   /**< \brief [31:31] 1 = DICO Enable
                                                                    0 = DICO Disable (rw) */
} Ifx_PPCA_CLB_DICO_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_CNFG_Bits
{
    __IO Ifx_UReg_32Bit SEL_VAC:3;              /**< \brief [2:0]   Select ADC FILT out as input to VAC (rw) */
    __IO Ifx_UReg_32Bit SEL_VBUS:3;             /**< \brief [5:3]   Select ADC FILT out as input to VBUS (rw) */
    __IO Ifx_UReg_32Bit SEL_IL1:3;              /**< \brief [8:6]   Select ADC FILT out as input to IL1 (rw) */
    __IO Ifx_UReg_32Bit SEL_IL2:3;              /**< \brief [11:9]  Select ADC FILT out as input to IL2 (rw) */
    __IO Ifx_UReg_32Bit SEL_IL3:3;              /**< \brief [14:12] Select ADC FILT out as input to IL3 (rw) */
    __IO Ifx_UReg_32Bit NUM_OF_MEAS_PERIOD:2;   /**< \brief [16:15] Configure Number of Period to be measured:
                                                                    0: Single Period
                                                                    1: Two periods
                                                                    2: Three periods
                                                                    3: Four periods (rw) */
    __IO Ifx_UReg_32Bit PWM_DEADTIME:7;         /**< \brief [23:17] Select ADC FILT out as input to IL3 (rw) */
    __IO Ifx_UReg_32Bit PE_SKIP_SLOPE:1;        /**< \brief [24:24] PE: Skip FSM states for calculating UP and
                                                                    DOWN slope (rw) */
    __IO Ifx_UReg_32Bit PE_IDLE1_RECAL_SLOPE:1; /**< \brief [25:25] PE: Recalculate slopes when in the state of
                                                                    PE_IDLE1 (rw) */
    __IO Ifx_UReg_32Bit MONITOR_SEL:3;          /**< \brief [28:26] Select signals to monitor:
                                                                    0: PCO_0 signals
                                                                    1: PCO_1 signals
                                                                    2: PCO_2 signals
                                                                    3: PE signals
                                                                    4: PS signals (rw) */
    __IO Ifx_UReg_32Bit ONLY_CORR_CHARG:1;      /**< \brief [29:29] Correct only the IMIN or IMAX reached
                                                                    during the charging phase.
                                                                    Specifically, correct IMAX when Vac < 0 and IMIN
                                                                    when Vac < 0. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_PPCA_CLB_DICO_CNFG_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_EVENT_Bits
{
    __IO Ifx_UReg_32Bit KILL_EVENT:1;           /**< \brief [0:0]   Transition to safe state to kill DICO. (rw) */
    __IO Ifx_UReg_32Bit KILL_EXIT:1;            /**< \brief [1:1]   Exit the kill event.
                                                                    KILL_EVENTfrom CPU or EPU has to be de-asserted
                                                                    before or meanwhile. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_CLB_DICO_EVENT_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_SAFE_Bits
{
    __IO Ifx_UReg_32Bit STATE:6;                /**< \brief [5:0]   Safe state of DICO output. (rw) */
    __IO Ifx_UReg_32Bit MAX_ON_TIME:12;         /**< \brief [17:6]  Maximum on-time, forces PWM switching when reached.
                                                                    The counting  frequency is equal to one quarter of
                                                                    the system clock. (rw) */
    __IO Ifx_UReg_32Bit MIN_ON_TIME:12;         /**< \brief [29:18] Minimum on-time, enables PWM switching when
                                                                    reached.
                                                                    The counting  frequency is equal to one quarter of
                                                                    the system clock. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_PPCA_CLB_DICO_SAFE_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_IMAXL_Bits
{
    __IO Ifx_UReg_32Bit IMAXL:24;               /**< \brief [23:0]  Configure the maximum current: IMAX_ANA * L
                                                                    * F *  ADC_GAIN (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTENDED_IMAXL:8;  /**< \brief [31:24] IMAXL sign extended (r) */
} Ifx_PPCA_CLB_DICO_IMAXL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_IMINL_Bits
{
    __IO Ifx_UReg_32Bit IMINL:24;               /**< \brief [23:0]  Configure the minimum current: IMIN_ANA * L
                                                                    * F *  ADC_GAIN (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTENDED_IMINL:8;  /**< \brief [31:24] IMINL sign extended (r) */
} Ifx_PPCA_CLB_DICO_IMINL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_VAC_POL_Bits
{
    __IO Ifx_UReg_32Bit POL:2;                  /**< \brief [1:0]   Configure the Polarity of VAC.
                                                                    0:NEG, 1: ZERO, 2:POS. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_CLB_DICO_VAC_POL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_OBS_CTRL_Bits
{
    __IO Ifx_UReg_32Bit FROZEN_INFO_PH1:1;      /**< \brief [0:0]   Frozen Observer computed Info of Phase1:
                                                                    1 = Frozen
                                                                    0 = Unfrozen (rw) */
    __IO Ifx_UReg_32Bit FROZEN_INFO_PH2:1;      /**< \brief [1:1]   Frozen Observer computed Info of Phase2:
                                                                    1 = Frozen
                                                                    0 = Unfrozen (rw) */
    __IO Ifx_UReg_32Bit FROZEN_INFO_PH3:1;      /**< \brief [2:2]   Frozen Observer computed Info of Phase3:
                                                                    1 = Frozen
                                                                    0 = Unfrozen (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_PPCA_CLB_DICO_OBS_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_PERIOD_MEAS_Bits
{
    __I  Ifx_UReg_32Bit PERIOD:12;              /**< \brief [11:0]  Report Measured interval time, related to
                                                                    NUM_OF_MEAS_PERIOD in CNFG. (r) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_PPCA_CLB_DICO_PERIOD_MEAS_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_IEST_IND_ACCU_Bits
{
    __I  Ifx_UReg_32Bit IEST_IND_ACCU:32;       /**< \brief [31:0]  Register Reporting the accumulated
                                                                    estimated current (r) */
} Ifx_PPCA_CLB_DICO_IEST_IND_ACCU_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_IL_ACCU_Bits
{
    __I  Ifx_UReg_32Bit IL_ACCU:32;             /**< \brief [31:0]  Register Reporting the accumulated sensored
                                                                    inductor current
                                                                    (24bit registers signed extended) (r) */
} Ifx_PPCA_CLB_DICO_IL_ACCU_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_IEST_CORR_Bits
{
    __IO Ifx_UReg_32Bit IEST_CORR:12;           /**< \brief [11:0]  Configure the correction for adjusting the
                                                                    estimated current (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTENDED_IEST_CORR:20; /**< \brief [31:12] Correction Sign extended (r) */
} Ifx_PPCA_CLB_DICO_IEST_CORR_Bits;

/** \brief IMINL for Up and Down Slope */
typedef struct _Ifx_PPCA_CLB_DICO_PE_IMINL_Bits
{
    __I  Ifx_UReg_32Bit PE_IMINL:32;            /**< \brief [31:0]  Instant IMINL for calculating up and down slope
                                                                    (24bit registers signed extended) (r) */
} Ifx_PPCA_CLB_DICO_PE_IMINL_Bits;

/** \brief IMAXL for Up and Down Slope */
typedef struct _Ifx_PPCA_CLB_DICO_PE_IMAXL_Bits
{
    __I  Ifx_UReg_32Bit PE_IMAXL:32;            /**< \brief [31:0]  Instant IMAXL for calculating up and down slope
                                                                    (24bit registers signed extended) (r) */
} Ifx_PPCA_CLB_DICO_PE_IMAXL_Bits;

/** \brief UP Count Register for Up and Down Slope */
typedef struct _Ifx_PPCA_CLB_DICO_PE_UP_COUNT_Bits
{
    __I  Ifx_UReg_32Bit UP_COUNT:12;            /**< \brief [11:0]  Count of charging phase (UP). (r) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_PPCA_CLB_DICO_PE_UP_COUNT_Bits;

/** \brief DOWN Count Register for Up and Down Slope */
typedef struct _Ifx_PPCA_CLB_DICO_PE_DN_COUNT_Bits
{
    __I  Ifx_UReg_32Bit DOWN_COUNT:12;          /**< \brief [11:0]  Count of discharging phase (DOWN) (r) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_PPCA_CLB_DICO_PE_DN_COUNT_Bits;

/** \brief TPHD Value (PCO_1) Register for PE */
typedef struct _Ifx_PPCA_CLB_DICO_PE_TPHD_1_Bits
{
    __IO Ifx_UReg_32Bit TPHD_1:12;              /**< \brief [11:0]  TPHD Value for activating PCO_1 (rw) */
    __IO Ifx_UReg_32Bit PENDING_1:1;            /**< \brief [12:12] Pending bit for PE_TPHD_1 (rw) */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [31:13] \internal Reserved */
} Ifx_PPCA_CLB_DICO_PE_TPHD_1_Bits;

/** \brief TPHD Value (PCO_2) Register for PE */
typedef struct _Ifx_PPCA_CLB_DICO_PE_TPHD_2_Bits
{
    __IO Ifx_UReg_32Bit TPHD_2:12;              /**< \brief [11:0]  TPHD Value for activating PCO_2 (rw) */
    __IO Ifx_UReg_32Bit PENDING_2:1;            /**< \brief [12:12] Pending bit for PE_TPHD_2 (rw) */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [31:13] \internal Reserved */
} Ifx_PPCA_CLB_DICO_PE_TPHD_2_Bits;

/** \brief Threshold Current multiplied by Inductance Register for PS */
typedef struct _Ifx_PPCA_CLB_DICO_PS_TH_Bits
{
    __IO Ifx_UReg_32Bit PS_TH:24;               /**< \brief [23:0]  Threshold for the comparator in Phase
                                                                    Synchronizer (PS). (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTENDED_PS_TH:8;  /**< \brief [31:24] Threshold for the comparator in Phase
                                                                    Synchronizer (PS) sign extended (r) */
} Ifx_PPCA_CLB_DICO_PS_TH_Bits;

/** \brief IMINL/IMAXL Correction Information Register for PS */
typedef struct _Ifx_PPCA_CLB_DICO_PS_CC_INFO_Bits
{
    __I  Ifx_UReg_32Bit UP_FLAG:1;              /**< \brief [0:0]   Indicates the phase is UP or DOWN (r) */
    __I  Ifx_UReg_32Bit PHASE_SHIFT_COUNT:12;   /**< \brief [12:1]  Count of phase shift (r) */
    __I  Ifx_UReg_32Bit PERIOD_COUNT:12;        /**< \brief [24:13] Count of switch period (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_PPCA_CLB_DICO_PS_CC_INFO_Bits;

/** \brief Correction term of IMINL/IMAXL Register for PS */
typedef struct _Ifx_PPCA_CLB_DICO_PS_CC_Bits
{
    __IO Ifx_UReg_32Bit CC_PENDING:1;           /**< \brief [0:0]   Pending bit for CORR_CURR (rw) */
    __IO Ifx_UReg_32Bit CORR_CURR:24;           /**< \brief [24:1]  Correction term of IMINL and IMAXL for DICO (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTENDED_CORR_CURR:7; /**< \brief [31:25] Correction term of IMINL and IMAXL for DICO
                                                                    Sign extended (r) */
} Ifx_PPCA_CLB_DICO_PS_CC_Bits;

/** \brief Interrupt Request Register */
typedef struct _Ifx_PPCA_CLB_DICO_INTR_Bits
{
    __IO Ifx_UReg_32Bit DICO_INTR:8;            /**< \brief [7:0]   Interrupt requests of DICO error
                                                                    correction, PE TPHD calculation and PS IMIN/IMAX
                                                                    correction.   Details of bit field:
                                                                    7: PCO_2,
                                                                    6: PCO_1,
                                                                    5: PCO_0,
                                                                    4: PE_SCE2,
                                                                    3: PE_SCE1,
                                                                    2: PE_USI,
                                                                    1: PS_1,
                                                                    0: PS_0 (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CLB_DICO_INTR_Bits;

/** \brief Interrupt Set Request Register */
typedef struct _Ifx_PPCA_CLB_DICO_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit DICO_INTR_SET:8;        /**< \brief [7:0]   Write INTR_SET field with '1' to set
                                                                    corresponding INTR field.
                                                                    When read, this register reflects the interrupt
                                                                    request register. That is the INTR register. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CLB_DICO_INTR_SET_Bits;

/** \brief Interrupt Mask Register */
typedef struct _Ifx_PPCA_CLB_DICO_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit DICO_INTR_MASK:8;       /**< \brief [7:0]   Mask for corresponding field in INTR register. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CLB_DICO_INTR_MASK_Bits;

/** \brief Interrupt Masked Register */
typedef struct _Ifx_PPCA_CLB_DICO_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit DICO_INTR_MASKED:8;     /**< \brief [7:0]   Logical AND of corresponding interrupt
                                                                    request (INTR) and mask fields (INTR_MASK). (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_CLB_DICO_INTR_MASKED_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_PCO_CORR_IEST_Bits
{
    __I  Ifx_UReg_32Bit CORR_IEST:32;           /**< \brief [31:0]  Register Reporting the corrected estimated current
                                                                    (24bit registers signed extended) (r) */
} Ifx_PPCA_CLB_DICO_PCO_CORR_IEST_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_DICO_STAT_Bits
{
    __IO Ifx_UReg_32Bit MAX_ON_REACHED:1;       /**< \brief [0:0]   Report maximum on time reached
                                                                    SW write 1 to clear this bit (rw) */
    __I  Ifx_UReg_32Bit PCO0_ACTIVE:1;          /**< \brief [1:1]   Report active state of PCO0 (r) */
    __I  Ifx_UReg_32Bit PCO1_ACTIVE:1;          /**< \brief [2:2]   Report active state of PCO1 (r) */
    __I  Ifx_UReg_32Bit PCO2_ACTIVE:1;          /**< \brief [3:3]   Report active state of PCO2 (r) */
    __I  Ifx_UReg_32Bit INCORR_SETTING:1;       /**< \brief [4:4]   Report incorrect setting of DICO (r) */
    __I  Ifx_UReg_32Bit MASK_STATE:1;           /**< \brief [5:5]   Report mask state of DICO (r) */
    __I  Ifx_UReg_32Bit KILL_STATE:1;           /**< \brief [6:6]   Report kill state of DICO (r) */
    __I  Ifx_UReg_32Bit SAFE_STATE:1;           /**< \brief [7:7]   Report safe state of DICO (r) */
    __IO Ifx_UReg_32Bit MIN_ON_NOT_REACHED:1;   /**< \brief [8:8]   Report minimum on time not reached when PWM
                                                                    modulator FSM state is ready to transit
                                                                    SW write 1 to clear this bit (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_PPCA_CLB_DICO_STAT_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_CTRL_Bits
{
    __IO Ifx_UReg_32Bit FW_MUXSEL_IN:1;         /**< \brief [0:0]   Set FW_MUXSEL_IN internal source (rw) */
    __IO Ifx_UReg_32Bit MUXSEL_IN_SRC_SEL:1;    /**< \brief [1:1]   Select MUSEL_IN input source:
                                                                    0 = internal
                                                                    1 = external (CLB_TRIG_IN[2]) (rw) */
    __IO Ifx_UReg_32Bit MUXSEL_OUT_SYNC_BYPASS:1; /**< \brief [2:2]   Select between synchronous or asynchronous
                                                                    release of generated MUXSEL_OUT:
                                                                    0 = asynchrnous
                                                                    1 = synchronous to CLB_TRIG_IN[3] (rw) */
    __IO Ifx_UReg_32Bit WAIT_FOR_TRIGGER:1;     /**< \brief [3:3]   Select start mode:
                                                                    0 = start with enable bit
                                                                    1 = wait for trigger  CLB_TRIG_IN[4] before start
                                                                    (after enable has been set) (rw) */
    __IO Ifx_UReg_32Bit EN_AUTO_TRANSITION:1;   /**< \brief [4:4]   Enable/disable Auto Transition Table
                                                                    selection:
                                                                    0 = manual (by fw or by external input event)
                                                                    1 = automatic (rw) */
    __IO Ifx_UReg_32Bit MACO_FUNC:1;            /**< \brief [5:5]   Function of MACO
                                                                    0 = MACO is used for Matrix Converter
                                                                    1 = MACO is used for Trajectory Control (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [11:6]  \internal Reserved */
    __IO Ifx_UReg_32Bit MONITOR_SEL:1;          /**< \brief [12:12] Select signals to monitor:
                                                                    0 = pattern (2-bit), row (5-bit), counter_LSB
                                                                    (1-bit)
                                                                    1 = counter (8-bit) (rw) */
    __I  Ifx_UReg_32Bit :18;                    /**< \brief [30:13] \internal Reserved */
    __IO Ifx_UReg_32Bit EN:1;                   /**< \brief [31:31] 1 = MACO Enable
                                                                    0 = MACO Disable (rw) */
} Ifx_PPCA_CLB_MACO_CTRL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_EVENT_Bits
{
    __IO Ifx_UReg_32Bit SEL_NXT_SECT:2;         /**< \brief [1:0]   Select NEXT pattern to be scanned.
                                                                    The field will be evaluated at the end of the scan pattern.
                                                                    If it will be different from before, then the scan
                                                                    will start from row 0:
                                                                    0 = Select Current Sector
                                                                    1 = Select Next Sector
                                                                    2 = Select Previous Sector (rw) */
    __IO Ifx_UReg_32Bit KILL_EVENT:1;           /**< \brief [2:2]   Transition to safe state to kill MACO. (rw) */
    __IO Ifx_UReg_32Bit TRANS_EVENT:1;          /**< \brief [3:3]   Transition to Next/Previous Pattern. (rw) */
    __IO Ifx_UReg_32Bit KILL_EXIT:1;            /**< \brief [4:4]   Exit the kill event.
                                                                    KILL_EVENTfrom CPU or EPU has to be de-asserted
                                                                    before or meanwhile. (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_PPCA_CLB_MACO_EVENT_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_STAT_Bits
{
    __I  Ifx_UReg_32Bit LAST_SECT:2;            /**< \brief [1:0]   Report Last Scanned Section
                                                                    3 = startup table (r) */
    __I  Ifx_UReg_32Bit SCAN_IN_PROGRESS:1;     /**< \brief [2:2]   Report Status Of Scan
                                                                    0: No Scan (waiting for trigger or for enable)
                                                                    1: Scan is in progress (r) */
    __I  Ifx_UReg_32Bit MUXSEL_OUT_EXPO:1;      /**< \brief [3:3]   Report Status of exported MUXSEL_OUT (r) */
    __I  Ifx_UReg_32Bit CURR_SECT:2;            /**< \brief [5:4]   Report the current scanning section (r) */
    __I  Ifx_UReg_32Bit NEXT_SECT:2;            /**< \brief [7:6]   Report the next section to be scanned (r) */
    __I  Ifx_UReg_32Bit MASK_STATE:1;           /**< \brief [8:8]   Report mask state of MACO (r) */
    __I  Ifx_UReg_32Bit KILL_STATE:1;           /**< \brief [9:9]   Report kill state of MACO (r) */
    __I  Ifx_UReg_32Bit SAFE_STATE:1;           /**< \brief [10:10] Report safe state of MACO (r) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_PPCA_CLB_MACO_STAT_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_SECT0_ROW_Bits
{
    __IO Ifx_UReg_32Bit TRAN_ROW:5;             /**< \brief [4:0]   Number of Rows in Transition Table (rw) */
    __IO Ifx_UReg_32Bit ALL_ROW:5;              /**< \brief [9:5]   Number of Rows in the entire Table (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_CLB_MACO_SECT0_ROW_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_SECT1_ROW_Bits
{
    __IO Ifx_UReg_32Bit TRAN_ROW:5;             /**< \brief [4:0]   Number of Rows in Transition Table (rw) */
    __IO Ifx_UReg_32Bit ALL_ROW:5;              /**< \brief [9:5]   Number of Rows in the entire Table (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_CLB_MACO_SECT1_ROW_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_SECT2_ROW_Bits
{
    __IO Ifx_UReg_32Bit TRAN_ROW:5;             /**< \brief [4:0]   Number of Rows in Transition Table (rw) */
    __IO Ifx_UReg_32Bit ALL_ROW:5;              /**< \brief [9:5]   Number of Rows in the entire Table (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_CLB_MACO_SECT2_ROW_Bits;

/** \brief Interrupt Request Register */
typedef struct _Ifx_PPCA_CLB_MACO_INTR_Bits
{
    __IO Ifx_UReg_32Bit INTR:1;                 /**< \brief [0:0]   Interrupt when a pattern scan is completed (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CLB_MACO_INTR_Bits;

/** \brief Interrupt Set Request Register */
typedef struct _Ifx_PPCA_CLB_MACO_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit INTR_SET:1;             /**< \brief [0:0]   Write INTR_SET field with '1' to set
                                                                    corresponding INTR field.
                                                                    When read, this register reflects the interrupt
                                                                    request register. That is the INTR register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CLB_MACO_INTR_SET_Bits;

/** \brief Interrupt Mask Register */
typedef struct _Ifx_PPCA_CLB_MACO_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit INTR_MASK:1;            /**< \brief [0:0]   Mask for corresponding field in INTR register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CLB_MACO_INTR_MASK_Bits;

/** \brief Interrupt Masked Register */
typedef struct _Ifx_PPCA_CLB_MACO_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit INTR_MASKED:1;          /**< \brief [0:0]   Logical AND of corresponding interrupt
                                                                    request (INTR) and mask fields (INTR_MASK). (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_CLB_MACO_INTR_MASKED_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_SECT0_PATTERN_Bits
{
    __IO Ifx_UReg_32Bit DRV:16;                 /**< \brief [15:0]  Set Status of Driver Signals controlling
                                                                    switches (rw) */
    __IO Ifx_UReg_32Bit DLY:8;                  /**< \brief [23:16] Configure Scan Pattern Hold Time in clock
                                                                    cycles (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PPCA_CLB_MACO_SECT0_PATTERN_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_SECT0_SAFE_Bits
{
    __IO Ifx_UReg_32Bit DRV:16;                 /**< \brief [15:0]  Safe Status of Driver Signals controlling
                                                                    switches (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_CLB_MACO_SECT0_SAFE_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_SECT1_PATTERN_Bits
{
    __IO Ifx_UReg_32Bit DRV:16;                 /**< \brief [15:0]  Set Status of Driver Signals controlling
                                                                    switches (rw) */
    __IO Ifx_UReg_32Bit DLY:8;                  /**< \brief [23:16] Configure Scan Pattern Hold Time in clock
                                                                    cycles (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PPCA_CLB_MACO_SECT1_PATTERN_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_SECT1_SAFE_Bits
{
    __IO Ifx_UReg_32Bit DRV:16;                 /**< \brief [15:0]  Safe Status of Driver Signals controlling
                                                                    switches (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_CLB_MACO_SECT1_SAFE_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_SECT2_PATTERN_Bits
{
    __IO Ifx_UReg_32Bit DRV:16;                 /**< \brief [15:0]  Set Status of Driver Signals controlling
                                                                    switches (rw) */
    __IO Ifx_UReg_32Bit DLY:8;                  /**< \brief [23:16] Configure Scan Pattern Hold Time in clock
                                                                    cycles (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PPCA_CLB_MACO_SECT2_PATTERN_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_CLB_MACO_SECT2_SAFE_Bits
{
    __IO Ifx_UReg_32Bit DRV:16;                 /**< \brief [15:0]  Safe Status of Driver Signals controlling
                                                                    switches (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_CLB_MACO_SECT2_SAFE_Bits;

/** \brief  */
typedef struct _Ifx_MXCORDIC_CTL_Bits
{
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [30:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [31:31] Enables/Disables IP (rw) */
} Ifx_MXCORDIC_CTL_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_MXCORDIC_ID_Bits
{
    __I  Ifx_UReg_32Bit MOD_REV:8;              /**< \brief [7:0]   Module Revision Number - MOD_REV (r) */
    __I  Ifx_UReg_32Bit MOD_TYPE:8;             /**< \brief [15:8]  Module Type - MOD_TYPE (r) */
    __I  Ifx_UReg_32Bit MOD_NUMBER:16;          /**< \brief [31:16] Module Number Value - MOD_NUMBER (r) */
} Ifx_MXCORDIC_ID_Bits;

/** \brief Interrupt Cause Register */
typedef struct _Ifx_MXCORDIC_INTR_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit CDEOC:1;                /**< \brief [2:2]   CORDIC End of Calculation Event Flag - CDEOC.
                                                                    This bitfield will preserve interrupt cause status
                                                                    also when IP is disabled.
                                                                    By writing '0' to CTL.ENABLED bitfield will not be reset. (rw) */
    __IO Ifx_UReg_32Bit CDERR:1;                /**< \brief [3:3]   CORDIC Error Event Flag - CDERR.
                                                                    This bitfield will preserve interrupt cause status
                                                                    also when IP is disabled.
                                                                    By writing '0' to CTL.ENABLED bitfield will not be reset. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_MXCORDIC_INTR_Bits;

/** \brief Interrupt Set Register */
typedef struct _Ifx_MXCORDIC_INTR_SET_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit CDEOC:1;                /**< \brief [2:2]   CORDIC Event Flag Set - CDEOC (rw) */
    __IO Ifx_UReg_32Bit CDERR:1;                /**< \brief [3:3]   CORDIC Error Event Flag Set - CDERR (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_MXCORDIC_INTR_SET_Bits;

/** \brief Interrupt Mask Register */
typedef struct _Ifx_MXCORDIC_INTR_MASK_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit CDEOC:1;                /**< \brief [2:2]   CORDIC End of Calculation Interrupt Mask-
                                                                    CDEOC (rw) */
    __IO Ifx_UReg_32Bit CDERR:1;                /**< \brief [3:3]   CORDIC Error Interrupt Mask - CDERR (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_MXCORDIC_INTR_MASK_Bits;

/** \brief Interrupt Masked Register */
typedef struct _Ifx_MXCORDIC_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit CDEOC:1;                /**< \brief [2:2]   CORDIC End of Calculation Interrupt Masked-
                                                                    CDEOC (r) */
    __I  Ifx_UReg_32Bit CDERR:1;                /**< \brief [3:3]   CORDIC Error Interrupt Masked - CDERR (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_MXCORDIC_INTR_MASKED_Bits;

/** \brief CORDIC Keep Register */
typedef struct _Ifx_MXCORDIC_KEEP_Bits
{
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [4:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit KEEPX:1;                /**< \brief [5:5]   Last X Result as Initial Data for New
                                                                    Calculation - KEEPX (rw) */
    __IO Ifx_UReg_32Bit KEEPY:1;                /**< \brief [6:6]   Last Y Result as Initial Data for New
                                                                    Calculation - KEEPY (rw) */
    __IO Ifx_UReg_32Bit KEEPZ:1;                /**< \brief [7:7]   Last Z Result as Initial Data for New
                                                                    Calculation - KEEPZ (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_MXCORDIC_KEEP_Bits;

/** \brief CORDIC Control Register */
typedef struct _Ifx_MXCORDIC_CON_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit MODE:2;                 /**< \brief [2:1]   Operating Mode - MODE (rw)
                                                LINEAR        : 0u
                                                CIRCULAR      : 1u
                                                Reserved      : 2u
                                                HYPERBOLIC    : 3u    */
    __IO Ifx_UReg_32Bit ROTVEC:1;               /**< \brief [3:3]   Rotation Vectoring Selection - ROTVEC (rw)
                                                VECTORING     : 0u
                                                ROTATION      : 1u    */
    __IO Ifx_UReg_32Bit ST_MODE:1;              /**< \brief [4:4]   Start Method - ST_MODE (rw)
                                                AUTO          : 0u   Operation starts with write into CORDZ register
                                                ST            : 1u   Operation starts with write into START_CMD register */
    __IO Ifx_UReg_32Bit X_USIGN:1;              /**< \brief [5:5]   Result Data Format for X in Circular
                                                                    Vectoring Mode - X_USIGN (rw)
                                                SIGNED        : 0u
                                                UNSIGNED      : 1u    */
    __IO Ifx_UReg_32Bit MPS:2;                  /**< \brief [7:6]   X and Y Magnitude Prescaler - MPS (rw)
                                                DIVIDE_BY_1   : 0u
                                                DIVIDE_BY_2   : 1u
                                                DIVIDE_BY_4   : 2u
                                                Reserved      : 3u    */
    __IO Ifx_UReg_32Bit N_ITER:3;               /**< \brief [10:8]  Number of CORDIC iterations divided by 4 (rw)
                                                N_ITER_4      : 1u
                                                N_ITER_8      : 2u
                                                N_ITER_12     : 3u
                                                N_ITER_16     : 4u
                                                N_ITER_20     : 5u
                                                N_ITER_24     : 6u
                                                N_ITER_28     : 7u    */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_MXCORDIC_CON_Bits;

/* MXCORDIC_CON.MODE enumerated values */
#define IFX_MXCORDIC_CON_MODE_LINEAR (0u)
#define IFX_MXCORDIC_CON_MODE_CIRCULAR (1u)
#define IFX_MXCORDIC_CON_MODE_Reserved (2u)
#define IFX_MXCORDIC_CON_MODE_HYPERBOLIC (3u)

/* MXCORDIC_CON.ROTVEC enumerated values */
#define IFX_MXCORDIC_CON_ROTVEC_VECTORING (0u)
#define IFX_MXCORDIC_CON_ROTVEC_ROTATION (1u)

/* MXCORDIC_CON.ST_MODE enumerated values */

/** \brief Operation starts with write into CORDZ register */
#define IFX_MXCORDIC_CON_ST_MODE_AUTO (0u)

/** \brief Operation starts with write into START_CMD register */
#define IFX_MXCORDIC_CON_ST_MODE_ST (1u)

/* MXCORDIC_CON.X_USIGN enumerated values */
#define IFX_MXCORDIC_CON_X_USIGN_SIGNED (0u)
#define IFX_MXCORDIC_CON_X_USIGN_UNSIGNED (1u)

/* MXCORDIC_CON.MPS enumerated values */
#define IFX_MXCORDIC_CON_MPS_DIVIDE_BY_1 (0u)
#define IFX_MXCORDIC_CON_MPS_DIVIDE_BY_2 (1u)
#define IFX_MXCORDIC_CON_MPS_DIVIDE_BY_4 (2u)
#define IFX_MXCORDIC_CON_MPS_Reserved (3u)

/* MXCORDIC_CON.N_ITER enumerated values */
#define IFX_MXCORDIC_CON_N_ITER_N_ITER_4 (1u)
#define IFX_MXCORDIC_CON_N_ITER_N_ITER_8 (2u)
#define IFX_MXCORDIC_CON_N_ITER_N_ITER_12 (3u)
#define IFX_MXCORDIC_CON_N_ITER_N_ITER_16 (4u)
#define IFX_MXCORDIC_CON_N_ITER_N_ITER_20 (5u)
#define IFX_MXCORDIC_CON_N_ITER_N_ITER_24 (6u)
#define IFX_MXCORDIC_CON_N_ITER_N_ITER_28 (7u)

/** \brief CORDIC X Data Register */
typedef struct _Ifx_MXCORDIC_CORDX_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit DATA:24;                /**< \brief [31:8]  Initial X Parameter Data - DATA (rw) */
} Ifx_MXCORDIC_CORDX_Bits;

/** \brief CORDIC Y Data Register */
typedef struct _Ifx_MXCORDIC_CORDY_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit DATA:24;                /**< \brief [31:8]  Initial Y Parameter Data - DATA (rw) */
} Ifx_MXCORDIC_CORDY_Bits;

/** \brief CORDIC Z Data Register */
typedef struct _Ifx_MXCORDIC_CORDZ_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit DATA:24;                /**< \brief [31:8]  Initial Z Parameter Data - DATA (rw) */
} Ifx_MXCORDIC_CORDZ_Bits;

/** \brief CORDIC X Result Register */
typedef struct _Ifx_MXCORDIC_CORRX_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit RESULT:24;              /**< \brief [31:8]  X Calculation Result - RESULT (r) */
} Ifx_MXCORDIC_CORRX_Bits;

/** \brief CORDIC Y Result Register */
typedef struct _Ifx_MXCORDIC_CORRY_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit RESULT:24;              /**< \brief [31:8]  Y Calculation Result - RESULT (r) */
} Ifx_MXCORDIC_CORRY_Bits;

/** \brief CORDIC Z Result Register */
typedef struct _Ifx_MXCORDIC_CORRZ_Bits
{
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [7:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit RESULT:24;              /**< \brief [31:8]  Z Calculation Result - RESULT (r) */
} Ifx_MXCORDIC_CORRZ_Bits;

/** \brief CORDIC Status Register */
typedef struct _Ifx_MXCORDIC_STAT_Bits
{
    __I  Ifx_UReg_32Bit BSY:1;                  /**< \brief [0:0]   Busy Indication - BSY (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_MXCORDIC_STAT_Bits;

/** \brief CORDIC Start Command Register */
typedef struct _Ifx_MXCORDIC_START_CMD_Bits
{
    __IO Ifx_UReg_32Bit ST:1;                   /**< \brief [0:0]   Start Calculation Set - ST (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_MXCORDIC_START_CMD_Bits;

/** \brief ADC Control Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CTL_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __I  Ifx_UReg_32Bit ADC_BUSY:1;             /**< \brief [1:1]   ADC Busy:
                                                                    1 = Conversion is in progress
                                                                    0 = Idle (r) */
    __IO Ifx_UReg_32Bit CALIB_GAIN_MODE:1;      /**< \brief [2:2]   CALIB_GAIN_MODE: (Please take not that this
                                                                    bit is not be used by customer.
                                                                    For internal use only)
                                                                    1 = IP handle calibration and gain computation
                                                                    0 = Subsystem handle calibration and gain
                                                                    computation (rw) */
    __IO Ifx_UReg_32Bit AUX_SLOT_SEL:1;         /**< \brief [3:3]   Specifies the slot control scheme for the
                                                                    AUX Channel
                                                                    1 = Slot Control scheme for the AUX Channel is enabled
                                                                    0 = Slot control scheme for AUX channel is disabled (rw) */
    __IO Ifx_UReg_32Bit ALT_AUX_SLOT_SEL:1;     /**< \brief [4:4]   Specifies the slot control scheme for the
                                                                    ALT AUX Channel
                                                                    1 = Slot Control scheme for the ALT AUX Channel is enabled
                                                                    0 = Slot control scheme for ALT AUX channel is
                                                                    disabled (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [27:5]  \internal Reserved */
    __IO Ifx_UReg_32Bit ADC_TEST_DATA_SEL:1;    /**< \brief [28:28] Specifies the data is coming from ADC or
                                                                    from the ADC DATA Test register
                                                                    1 = Data from ADC DATA Test Register
                                                                    0 = Data from ADC (rw) */
    __I  Ifx_UReg_32Bit DBG_STATUS:1;           /**< \brief [29:29] Specifies whether ADC has enter into Debug state
                                                                    1 = Yes
                                                                    0 = No (r) */
    __IO Ifx_UReg_32Bit DBG_FREEZE_EN:1;        /**< \brief [30:30] Specifies the adc behavior in debug mode.
                                                                    '0': When ='0', ADC operation continues or resume
                                                                    '1': When ='1', ADC will complete the existing ADC
                                                                    conversion whether it is manual or auto mode (rw) */
    __IO Ifx_UReg_32Bit ADC_EN:1;               /**< \brief [31:31] ADC Enable:
                                                                    1 = Enable
                                                                    0 = Disable (whole ADC is in power down) (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CTL_Bits;

/** \brief ADC Configuration Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNFG_Bits
{
    __IO Ifx_UReg_32Bit CHANNEL_TYPE:16;        /**< \brief [15:0]  ADC Channel type selection,
                                                                    0= Single Ended
                                                                    1= Differential (rw) */
    __IO Ifx_UReg_32Bit CHANNEL_EN:16;          /**< \brief [31:16] ADC Channel enable/disable,
                                                                    0 = Disabled
                                                                    1 = Enabled (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNFG_Bits;

/** \brief ADC Aux and ALT Aux Configuration Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_Bits
{
    __IO Ifx_UReg_32Bit ADC_AUX_SEL:4;          /**< \brief [3:0]   ADC Auxliar Channels selection multiplexed
                                                                    with channel 7 P Pin (rw)
                                                DAC_R2R_0_O   : 0u   DAC_R2R_0 Output
                                                DAC_R2R_1_O   : 1u   DAC_R2R_1 Output
                                                AI0           : 2u   AI0
                                                AI1           : 3u   AI1
                                                TSNS          : 4u   TSNS
                                                VREF          : 5u   VREF
                                                VDDA_DIV_2_GRP_0: 6u   VDDA Div 2 Voltage from DCSG_GRP_0
                                                VDDA_DIV_2_GRP_1: 7u   VDDA Div 2 Voltage from DCSG_GRP_1 */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit SEL_SRC_N_GND:4;        /**< \brief [11:8]  ADC Auxliar Channels selection multiplexed
                                                                    with channel 7 N Pin (rw)
                                                DAC_R2R_0_O_N : 0u   DAC_R2R_0N_0
                                                DAC_R2R_1_O_N : 1u   DAC_R2R_1N_0
                                                AI0_GND       : 2u   ADC_GND
                                                AI1_GND       : 3u   ADC_GND
                                                TSNS_GND      : 4u   VSSA_AREF
                                                VSSA_AREF     : 5u   VSSA_AREF
                                                VDDA_DIV_2_GRP_0_GND: 6u   DCSG_GRP_0_GND
                                                VDDA_DIV_2_GRP_1_GND: 7u   DCSG_GRP_1_GND */
    __IO Ifx_UReg_32Bit AUX_GND_GRP_2:2;        /**< \brief [13:12] AUX_GND_GRP_2 (rw)
                                                VSSA_ADC3     : 0u   VSSA_ADC3
                                                VSSA_DCSG_GRP0: 1u   VSSA_DCSG_GRP0
                                                VSSA_DCSG_GRP1: 2u   VSSA_DCSG_GRP1
                                                VSSA_DCSG_GRP1_SP: 3u   VSSA_DCSG_GRP1 */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [15:14] \internal Reserved */
    __IO Ifx_UReg_32Bit ALT_AUX_SEL_SRC:3;      /**< \brief [18:16] ADC ALT Auxliar Channels selection
                                                                    multiplexed with AI_AUX (rw)
                                                AIN3N_AIN11N  : 0u   For ADC_GRP_0, it will be AIN3N.
                                                                    For ADC_GRP_3, it will be AIN11N
                                                AI2_AI9       : 1u   For ADC_GRP_0, it will be AI2.
                                                                    For ADC_GRP_3, it will be AI9
                                                AI3_AI10      : 2u   For ADC_GRP_0, it will be AI3.
                                                                    For ADC_GRP_3, it will be AI10
                                                AI4_AI11      : 3u   For ADC_GRP_0, it will be AI4.
                                                                    For ADC_GRP_3, it will be AI11
                                                AI5_AI12      : 4u   For ADC_GRP_0, it will be AI5.
                                                                    For ADC_GRP_3, it will be AI12
                                                AI6_AI13      : 5u   For ADC_GRP_0, it will be AI6.
                                                                    For ADC_GRP_3, it will be AI13
                                                AI7_AI14      : 6u   For ADC_GRP_0, it will be AI7.
                                                                    For ADC_GRP_3, it will be AI14
                                                AI8_AI15      : 7u   For ADC_GRP_0, it will be AI8.
                                                                    For ADC_GRP_3, it will be AI15 */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [23:19] \internal Reserved */
    __IO Ifx_UReg_32Bit ALT_AUX_SEL_SRC_GND:3;  /**< \brief [26:24] ADC_GND (rw)
                                                AIN3N_AIN11N_GND: 0u   ADC_GND
                                                AI2_AI9_GND   : 1u   ADC_GND
                                                AI3_AI10_GND  : 2u   ADC_GND
                                                AI4_AI11_GND  : 3u   ADC_GND
                                                AI5_AI12_GND  : 4u   ADC_GND
                                                AI6_AI13_GND  : 5u   ADC_GND
                                                AI7_AI14_GND  : 6u   ADC_GND
                                                AI8_AI15_GND  : 7u   ADC_GND */
    __IO Ifx_UReg_32Bit ALT_AUX_GND_GRP_2:2;    /**< \brief [28:27] ALT_AUX_GND_GRP_2 (rw)
                                                ALT_VSSA_ADC3 : 0u   ALT_VSSA_ADC3
                                                ALT_VSSA_DCSG_GRP0: 1u   ALT_VSSA_DCSG_GRP0
                                                ALT_VSSA_DCSG_GRP1: 2u   ALT_VSSA_DCSG_GRP1
                                                ALT_VSSA_DCSG_GRP1_SP: 3u   ALT_VSSA_DCSG_GRP1 */
    __IO Ifx_UReg_32Bit ADC_AUX_GND_SEL:1;      /**< \brief [29:29] Specifes the GND Selection
                                                                    0 - Bit 11:8/Bit 26:24 Selection
                                                                    1 - Bit 13:12/Bit 28:27 Selection (rw) */
    __IO Ifx_UReg_32Bit ADC_AUX_ALT_AUX_SEL:2;  /**< \brief [31:30] Specifes the ADC7,AUX_DATA,ALT_AUX_DATA
                                                                    00 - ADC7 Path
                                                                    01 - ADC7 Path
                                                                    10 - AUX_DATA Path
                                                                    11 - ALT_AUX_DATA Path (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_Bits;

/* PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG.ADC_AUX_SEL enumerated values */

/** \brief DAC_R2R_0 Output */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ADC_AUX_SEL_DAC_R2R_0_O (0u)

/** \brief DAC_R2R_1 Output */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ADC_AUX_SEL_DAC_R2R_1_O (1u)

/** \brief AI0 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ADC_AUX_SEL_AI0 (2u)

/** \brief AI1 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ADC_AUX_SEL_AI1 (3u)

/** \brief TSNS */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ADC_AUX_SEL_TSNS (4u)

/** \brief VREF */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ADC_AUX_SEL_VREF (5u)

/** \brief VDDA Div 2 Voltage from DCSG_GRP_0 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ADC_AUX_SEL_VDDA_DIV_2_GRP_0 (6u)

/** \brief VDDA Div 2 Voltage from DCSG_GRP_1 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ADC_AUX_SEL_VDDA_DIV_2_GRP_1 (7u)

/* PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG.SEL_SRC_N_GND enumerated values */

/** \brief DAC_R2R_0N_0 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_SEL_SRC_N_GND_DAC_R2R_0_O_N (0u)

/** \brief DAC_R2R_1N_0 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_SEL_SRC_N_GND_DAC_R2R_1_O_N (1u)

/** \brief ADC_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_SEL_SRC_N_GND_AI0_GND (2u)

/** \brief ADC_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_SEL_SRC_N_GND_AI1_GND (3u)

/** \brief VSSA_AREF */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_SEL_SRC_N_GND_TSNS_GND (4u)

/** \brief VSSA_AREF */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_SEL_SRC_N_GND_VSSA_AREF (5u)

/** \brief DCSG_GRP_0_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_SEL_SRC_N_GND_VDDA_DIV_2_GRP_0_GND (6u)

/** \brief DCSG_GRP_1_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_SEL_SRC_N_GND_VDDA_DIV_2_GRP_1_GND (7u)

/* PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG.AUX_GND_GRP_2 enumerated values */

/** \brief VSSA_ADC3 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_AUX_GND_GRP_2_VSSA_ADC3 (0u)

/** \brief VSSA_DCSG_GRP0 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_AUX_GND_GRP_2_VSSA_DCSG_GRP0 (1u)

/** \brief VSSA_DCSG_GRP1 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_AUX_GND_GRP_2_VSSA_DCSG_GRP1 (2u)

/** \brief VSSA_DCSG_GRP1 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_AUX_GND_GRP_2_VSSA_DCSG_GRP1_SP (3u)

/* PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG.ALT_AUX_SEL_SRC enumerated values */

/** \brief For ADC_GRP_0, it will be AIN3N. For ADC_GRP_3, it will be AIN11N */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_AIN3N_AIN11N (0u)

/** \brief For ADC_GRP_0, it will be AI2. For ADC_GRP_3, it will be AI9 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_AI2_AI9 (1u)

/** \brief For ADC_GRP_0, it will be AI3. For ADC_GRP_3, it will be AI10 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_AI3_AI10 (2u)

/** \brief For ADC_GRP_0, it will be AI4. For ADC_GRP_3, it will be AI11 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_AI4_AI11 (3u)

/** \brief For ADC_GRP_0, it will be AI5. For ADC_GRP_3, it will be AI12 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_AI5_AI12 (4u)

/** \brief For ADC_GRP_0, it will be AI6. For ADC_GRP_3, it will be AI13 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_AI6_AI13 (5u)

/** \brief For ADC_GRP_0, it will be AI7. For ADC_GRP_3, it will be AI14 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_AI7_AI14 (6u)

/** \brief For ADC_GRP_0, it will be AI8. For ADC_GRP_3, it will be AI15 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_AI8_AI15 (7u)

/* PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG.ALT_AUX_SEL_SRC_GND enumerated values */

/** \brief ADC_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_GND_AIN3N_AIN11N_GND (0u)

/** \brief ADC_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_GND_AI2_AI9_GND (1u)

/** \brief ADC_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_GND_AI3_AI10_GND (2u)

/** \brief ADC_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_GND_AI4_AI11_GND (3u)

/** \brief ADC_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_GND_AI5_AI12_GND (4u)

/** \brief ADC_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_GND_AI6_AI13_GND (5u)

/** \brief ADC_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_GND_AI7_AI14_GND (6u)

/** \brief ADC_GND */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_SEL_SRC_GND_AI8_AI15_GND (7u)

/* PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG.ALT_AUX_GND_GRP_2 enumerated values */

/** \brief ALT_VSSA_ADC3 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_GND_GRP_2_ALT_VSSA_ADC3 (0u)

/** \brief ALT_VSSA_DCSG_GRP0 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_GND_GRP_2_ALT_VSSA_DCSG_GRP0 (1u)

/** \brief ALT_VSSA_DCSG_GRP1 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_GND_GRP_2_ALT_VSSA_DCSG_GRP1 (2u)

/** \brief ALT_VSSA_DCSG_GRP1 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_ALT_AUX_GND_GRP_2_ALT_VSSA_DCSG_GRP1_SP (3u)

/** \brief ADC Conversion Configuration Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNV_CNFG_Bits
{
    __IO Ifx_UReg_32Bit GROUP_CH:1;             /**< \brief [0:0]   Select between Single channel or Group of
                                                                    sequence of Channels to be converted at provided trigger
                                                                    0 = Single Channel
                                                                    1 = Group Channels (rw) */
    __IO Ifx_UReg_32Bit TRIGGER_MODE:2;         /**< \brief [2:1]   Trigger Mode Selection
                                                                    00 = Manual Trigger Mode
                                                                    01 = Auto trigger Mode (Continuous Conversion)
                                                                    10 = Arbitrary trigger Mode (Arbitrary Conversion -
                                                                    Based on the individual adc_soc_i[x]) (rw) */
    __IO Ifx_UReg_32Bit AUTO_TRIGGER_SAMPLE_TCLK:6; /**< \brief [8:3]   Number of system clock cycles for sampling
                                                                    on top of a minimum of 4 clock cycles (0+4).
                                                                    This is not applicable for Arbitary trigger mode.
                                                                    When AFE is used, AFE_CLOCK_RATIO will define the
                                                                    sample period (rw) */
    __IO Ifx_UReg_32Bit NUM_OF_SLOT:5;          /**< \brief [13:9]  Number of Slot to be converted for each
                                                                    provided trigger when Group of Channel flag is set.
                                                                    Do not set more than the maximum number of the
                                                                    NUM_CH of in the GRP ADC. (rw) */
    __IO Ifx_UReg_32Bit SRC_EOS:1;              /**< \brief [14:14] Select Source of EOS (when in Manual
                                                                    Trigger mode).
                                                                    0 = Internal EOS (from ADC CTRL FSM, aligned with
                                                                    the SOC trigger signal generated in PPCA_CLK domain
                                                                    resynchronized in the ATOP_CLK domain)
                                                                    1 = External EOS (aligned with the SOC trigger
                                                                    signal generated in the PPCA_CLK domain) (rw) */
    __IO Ifx_UReg_32Bit NUM_OF_AUX_SLOT:5;      /**< \brief [19:15] Number of AUX Slot to be converted for each
                                                                    provided trigger when Group of Channel flag is set (rw) */
    __IO Ifx_UReg_32Bit NUM_OF_ALT_AUX_SLOT:4;  /**< \brief [23:20] Number of ALT AUX Slot to be converted for
                                                                    each provided trigger when Group of Channel flag is set (rw) */
    __IO Ifx_UReg_32Bit AUX_SLOT_SCAN_RATE:5;   /**< \brief [28:24] To define how many time the channel will be
                                                                    converted before slot switches to the next AUX Channel
                                                                    0x00 - 1 time
                                                                    0x1F - 32 times (rw) */
    __IO Ifx_UReg_32Bit EXT_SOURCE_SEL:1;       /**< \brief [29:29] EXT_SOURCE_SEL
                                                                    0 - Is not part of the AUX and ALT_AUX channel slot control
                                                                    1 - Is part of the AUX_ALT_AUX channel slot control.
                                                                    This means EXT_SOURCE_SEL channel is configured in
                                                                    the ADC_CH_CNFG0.
                                                                    When GROUP_CH=1 and TRIGGER_MODE = 01 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNV_CNFG_Bits;

/** \brief ADC Sampling Mask register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SAMPLING_MASK_Bits
{
    __IO Ifx_UReg_32Bit ADC_CH_SAMPLING_MASK:16; /**< \brief [15:0]  ADC Channel sampling Mask
                                                                    1 = Mask Channel Sampling
                                                                    0 = UnMask Channel Samplig (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SAMPLING_MASK_Bits;

/** \brief ADC Channel Trigger register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_TRIGGER_Bits
{
    __IO Ifx_UReg_32Bit ADC_TRIGGER:16;         /**< \brief [15:0]  ADC Channel Trigger for HW Trigger Mode, In
                                                                    Manual Mode, it is based on
                                                                    Ored(ADC_TRIGGER_15:ADC_TRIGGER_0)
                                                                    1 = Trigger ADC conversion
                                                                    0 = Do nothing (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_TRIGGER_Bits;

/** \brief ADC Channels group 0 to be converted Configurations registers */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG0_Bits
{
    __IO Ifx_UReg_32Bit CH1_TBC:4;              /**< \brief [3:0]   1st Channel to be converted.
                                                                    When AFE is enabled, CH1_TBC will be the default
                                                                    channel for AFE enabled case. (rw) */
    __IO Ifx_UReg_32Bit CH2_TBC:4;              /**< \brief [7:4]   2nd Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit CH3_TBC:4;              /**< \brief [11:8]  3rd Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit CH4_TBC:4;              /**< \brief [15:12] 4th Channel to be converted (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG0_Bits;

/** \brief ADC Channels group 1 to be converted Configurations registers */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG1_Bits
{
    __IO Ifx_UReg_32Bit CH5_TBC:4;              /**< \brief [3:0]   5th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit CH6_TBC:4;              /**< \brief [7:4]   6th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit CH7_TBC:4;              /**< \brief [11:8]  7th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit CH8_TBC:4;              /**< \brief [15:12] 8th Channel to be converted (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG1_Bits;

/** \brief ADC Auxiliary Channels to be converted configuration registers */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG0_Bits
{
    __IO Ifx_UReg_32Bit AUX_CH1_TBC:4;          /**< \brief [3:0]   1st Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH2_TBC:4;          /**< \brief [7:4]   2nd Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH3_TBC:4;          /**< \brief [11:8]  3rd Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH4_TBC:4;          /**< \brief [15:12] 4th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH5_TBC:4;          /**< \brief [19:16] 5th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH6_TBC:4;          /**< \brief [23:20] 6th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH7_TBC:4;          /**< \brief [27:24] 7th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH8_TBC:4;          /**< \brief [31:28] 8th Channel to be converted (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG0_Bits;

/** \brief ADC Auxiliary Channels to be converted configuration registers */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG1_Bits
{
    __IO Ifx_UReg_32Bit AUX_CH9_TBC:4;          /**< \brief [3:0]   9th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH10_TBC:4;         /**< \brief [7:4]   10th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH11_TBC:4;         /**< \brief [11:8]  11th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH12_TBC:4;         /**< \brief [15:12] 12th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH13_TBC:4;         /**< \brief [19:16] 13th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH14_TBC:4;         /**< \brief [23:20] 14th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH15_TBC:4;         /**< \brief [27:24] 15th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit AUX_CH16_TBC:4;         /**< \brief [31:28] 16th Channel to be converted (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG1_Bits;

/** \brief ADC AUX Alternate Channel to be converted configuration register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_CH_CNFG_Bits
{
    __IO Ifx_UReg_32Bit ALT_AUX_CH1_TBC:4;      /**< \brief [3:0]   1st Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit ALT_AUX_CH2_TBC:4;      /**< \brief [7:4]   2nd Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit ALT_AUX_CH3_TBC:4;      /**< \brief [11:8]  3rd Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit ALT_AUX_CH4_TBC:4;      /**< \brief [15:12] 4th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit ALT_AUX_CH5_TBC:4;      /**< \brief [19:16] 5th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit ALT_AUX_CH6_TBC:4;      /**< \brief [23:20] 6th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit ALT_AUX_CH7_TBC:4;      /**< \brief [27:24] 7th Channel to be converted (rw) */
    __IO Ifx_UReg_32Bit ALT_AUX_CH8_TBC:4;      /**< \brief [31:28] 8th Channel to be converted (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_CH_CNFG_Bits;

/** \brief ADC Converted Data Channels */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA_Bits
{
    __I  Ifx_UReg_32Bit ADC_DATA:13;            /**< \brief [12:0]  ADC DATA Channel. ADC Data is only bit 11:0.
                                                                    Bit 12 is only when ADC RAW bit is set to 1 for
                                                                    bench testing purpose. In functional mode, ADC_CONVCTRL.
                                                                    RES_RAW bit is set to 0.
                                                                    When data is negative, bit 12 need be expressed as
                                                                    negative (r) */
    __I  Ifx_UReg_32Bit SIGN_EXTENDED_ADC_DATA:19; /**< \brief [31:13] ADC DATA SIGN EXTENDED to faciliate CPU
                                                                    reading of 32 bits
                                                                    When ADC data is negative in the sign
                                                                    configuration, these bit will be 1.
                                                                    When ADC data is positive in the sign configuration
                                                                    or unsigned configuration, these bit will be 0. (r) */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA_Bits;

/** \brief ADC Auxiliary Data Channels */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA_Bits
{
    __I  Ifx_UReg_32Bit ADC_AUX_DATA:13;        /**< \brief [12:0]  ADC AUX DATA Channel (r) */
    __I  Ifx_UReg_32Bit SIGN_EXTENDED_ADC_AUX_DATA:19; /**< \brief [31:13] ADC AUX DATA SIGN EXTENDED to faciliate CPU
                                                                    reading of 32 bits
                                                                    When ADC data is negative in the sign
                                                                    configuration, these bit will be 1.
                                                                    When ADC data is positive in the sign configuration
                                                                    or unsigned configuration, these bit will be 0. (r) */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA_Bits;

/** \brief ADC Alternate Auxiliary Data Channels */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA_Bits
{
    __I  Ifx_UReg_32Bit ADC_ALT_AUX_DATA:13;    /**< \brief [12:0]  ADC ALT AUX DATA Channel (r) */
    __I  Ifx_UReg_32Bit SIGN_EXTENDED_ADC_ALT_AUX_DATA:19; /**< \brief [31:13] ADC ALT AUX DATA SIGN EXTENDED to faciliate
                                                                    CPU reading of 32 bits
                                                                    When ADC data is negative in the sign
                                                                    configuration, these bit will be 1.
                                                                    When ADC data is positive in the sign configuration
                                                                    or unsigned configuration, these bit will be 0. (r) */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA_Bits;

/** \brief Interrupt request register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_Bits
{
    __IO Ifx_UReg_32Bit TR_ERROR:1;             /**< \brief [0:0]   Trigger Error Event.
                                                                    Set to '1', when event is detected.
                                                                    Write with '1' to clear bit. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_Bits;

/** \brief Interrupt set request register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit TR_ERROR:1;             /**< \brief [0:0]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_SET_Bits;

/** \brief Interrupt mask register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit TR_ERROR:1;             /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASK_Bits;

/** \brief Interrupt masked request register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit TR_ERROR:1;             /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASKED_Bits;

/** \brief ADC Channel Signed and Unsigned configuration Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SIGN_UNSIGN_CNFG_Bits
{
    __IO Ifx_UReg_32Bit ADC_SIGN_UNSIGN_BITS:16; /**< \brief [15:0]  ADC Channel Unsigned Signed Configuration
                                                                    0 - Unsigned
                                                                    1 - Signed (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SIGN_UNSIGN_CNFG_Bits;

/** \brief AUX Channel Signed and Unsigned configuration Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_SIGN_UNSIGN_CNFG_Bits
{
    __IO Ifx_UReg_32Bit AUX_SIGN_UNSIGN_BITS:16; /**< \brief [15:0]  AUX Channel Unsigned Signed Configuration
                                                                    0 - Unsigned
                                                                    1 - Signed (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_SIGN_UNSIGN_CNFG_Bits;

/** \brief AUX Alternate Channel Signed and Unsigned configuration Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_ALT_SIGN_UNSIGN_CNFG_Bits
{
    __IO Ifx_UReg_32Bit AUX_ALT_SIGN_UNSIGN_BITS:8; /**< \brief [7:0]   ALT_AUX Channel Unsigned Signed
                                                                    Configuration
                                                                    0 - Unsigned
                                                                    1 - Signed (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_ALT_SIGN_UNSIGN_CNFG_Bits;

/** \brief SARADC STARTUP Control Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_STARTUPCTRL_Bits
{
    __IO Ifx_UReg_32Bit TIMCAL_ON:1;            /**< \brief [0:0]   Timing sucal triggered during startup.
                                                                    Please take note that this bit should not be set to
                                                                    0 for PSC3M8 (rw) */
    __IO Ifx_UReg_32Bit OFFCAL_ON:1;            /**< \brief [1:1]   Offset sucal triggered during startup.
                                                                    Please take note that this bit should not be set to
                                                                    1 for PSC3M8.
                                                                    Please refer to Section 5.2.1.4.6 of BROS (rw) */
    __IO Ifx_UReg_32Bit GAICAL_ON:1;            /**< \brief [2:2]   Gain sucal triggered during startup.
                                                                    Please take note that this bit should not be set to
                                                                    1 for PSC3M8.
                                                                    Please refer to Section 5.2.1.4.6 of BROS (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [23:3]  \internal Reserved */
    __IO Ifx_UReg_32Bit VTOICAL_TRIM:5;         /**< \brief [28:24] vtoi trim calculated during functional
                                                                    tests and stored in flash/ROM(NVM).
                                                                    Loaded to this field during startup (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [31:29] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_STARTUPCTRL_Bits;

/** \brief SARADC CALIBRATION Control Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_Bits
{
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [0:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit BACKGND_CALIB:1;        /**< \brief [1:1]   Background Timing Calibration is enabled,
                                                                    if disabled the timing can be manually set with the
                                                                    CAL Timing register. (rw) */
    __IO Ifx_UReg_32Bit USE_LATCH_TRIM_REG:1;   /**< \brief [2:2]   If set it will read the CALTIMING latch
                                                                    trim delay and use it instead of internal
                                                                    configuration during timing calibration.
                                                                    (for background and foreground) (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit TIMING_AVG:2;           /**< \brief [5:4]   Determines the timing calibration averaging
                                                                    window for timing calibration (rw)
                                                TIMING_AVG_0  : 0u   Averaging length of 1
                                                TIMING_AVG_2  : 1u   Averaging length of 2
                                                TIMING_AVG_4  : 2u   Averaging length of 4
                                                TIMING_AVG_8  : 3u   Averaging length of 8 */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit AVG:2;                  /**< \brief [9:8]   Determines averaging repetitions for
                                                                    calibration (rw)
                                                AVG_32        : 0u   0: use 32 averaging repititions per calibration value
                                                AVG_64        : 1u   1: use 64 averaging repititions per calibration value
                                                AVG_128       : 2u   2: use 128 averaging repititions per calibration value
                                                AVG_2         : 3u   3: use 2 averaging repititions per calibration value */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_Bits;

/* PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL.TIMING_AVG enumerated values */

/** \brief Averaging length of 1 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_TIMING_AVG_TIMING_AVG_0 (0u)

/** \brief Averaging length of 2 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_TIMING_AVG_TIMING_AVG_2 (1u)

/** \brief Averaging length of 4 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_TIMING_AVG_TIMING_AVG_4 (2u)

/** \brief Averaging length of 8 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_TIMING_AVG_TIMING_AVG_8 (3u)

/* PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL.AVG enumerated values */

/** \brief 0: use 32 averaging repititions per calibration value */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_AVG_AVG_32 (0u)

/** \brief 1: use 64 averaging repititions per calibration value */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_AVG_AVG_64 (1u)

/** \brief 2: use 128 averaging repititions per calibration value */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_AVG_AVG_128 (2u)

/** \brief 3: use 2 averaging repititions per calibration value */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_AVG_AVG_2 (3u)

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CTL_Bits
{
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [30:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit AFE_EN_0:1;             /**< \brief [31:31] Enable/Disable AFE first stage
                                                                    0 = Disable
                                                                    1 = Enable (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CTL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_Bits
{
    __IO Ifx_UReg_32Bit AFE_GAIN_SET:3;         /**< \brief [2:0]   AFE GAIN Settings.
                                                                    Select the AFE Gain setting (rw)
                                                AFE_GAIN_SET_0: 0u   OFF
                                                AFE_GAIN_SET_1: 1u   Gain of 3
                                                AFE_GAIN_SET_2: 2u   Gain of 6
                                                AFE_GAIN_SET_3: 3u   Gain of 12
                                                AFE_GAIN_SET_4: 4u   Gain of 24
                                                AFE_GAIN_SET_5: 5u   Gain of 24
                                                AFE_GAIN_SET_6: 6u   Gain of 12
                                                AFE_GAIN_SET_7: 7u   Gain of 12 */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit AFE_PWR_SET:3;          /**< \brief [6:4]   AFE Power Setting.
                                                                    Select the AFE power setting (rw)
                                                AFE_PWR_SET_0 : 0u   HFLG_Default
                                                AFE_PWR_SET_1 : 1u   HFLG_LP
                                                AFE_PWR_SET_2 : 2u   HFLG_ULP
                                                AFE_PWR_SET_3 : 3u   LFHG
                                                AFE_PWR_SET_4 : 4u   Debug (100)
                                                AFE_PWR_SET_5 : 5u   Debug (101)
                                                AFE_PWR_SET_6 : 6u   Debug (110)
                                                AFE_PWR_SET_7 : 7u   Debug (111) */
    __IO Ifx_UReg_32Bit AFE_CLOCK_RATIO:2;      /**< \brief [8:7]   AFE Clock Ratio Setting.
                                                                    Define the ADC MSPS setup based on ATOP_CLK
                                                                    relationshop (rw)
                                                AFE_CLOCK_RATIO_0: 0u   MSPS: ATOP_CLK/4
                                                AFE_CLOCK_RATIO_1: 1u   MSPS: ATOP_CLK/8
                                                AFE_CLOCK_RATIO_2: 2u   MSPS: ATOP_CLK/16
                                                AFE_CLOCK_RATIO_3: 3u   MSPS: ATOP_CLK/32 */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_Bits;

/* PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG.AFE_GAIN_SET enumerated values */

/** \brief OFF */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_GAIN_SET_AFE_GAIN_SET_0 (0u)

/** \brief Gain of 3 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_GAIN_SET_AFE_GAIN_SET_1 (1u)

/** \brief Gain of 6 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_GAIN_SET_AFE_GAIN_SET_2 (2u)

/** \brief Gain of 12 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_GAIN_SET_AFE_GAIN_SET_3 (3u)

/** \brief Gain of 24 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_GAIN_SET_AFE_GAIN_SET_4 (4u)

/** \brief Gain of 24 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_GAIN_SET_AFE_GAIN_SET_5 (5u)

/** \brief Gain of 12 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_GAIN_SET_AFE_GAIN_SET_6 (6u)

/** \brief Gain of 12 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_GAIN_SET_AFE_GAIN_SET_7 (7u)

/* PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG.AFE_PWR_SET enumerated values */

/** \brief HFLG_Default */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_PWR_SET_AFE_PWR_SET_0 (0u)

/** \brief HFLG_LP */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_PWR_SET_AFE_PWR_SET_1 (1u)

/** \brief HFLG_ULP */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_PWR_SET_AFE_PWR_SET_2 (2u)

/** \brief LFHG */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_PWR_SET_AFE_PWR_SET_3 (3u)

/** \brief Debug (100) */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_PWR_SET_AFE_PWR_SET_4 (4u)

/** \brief Debug (101) */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_PWR_SET_AFE_PWR_SET_5 (5u)

/** \brief Debug (110) */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_PWR_SET_AFE_PWR_SET_6 (6u)

/** \brief Debug (111) */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_PWR_SET_AFE_PWR_SET_7 (7u)

/* PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG.AFE_CLOCK_RATIO enumerated values */

/** \brief MSPS: ATOP_CLK/4 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_CLOCK_RATIO_AFE_CLOCK_RATIO_0 (0u)

/** \brief MSPS: ATOP_CLK/8 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_CLOCK_RATIO_AFE_CLOCK_RATIO_1 (1u)

/** \brief MSPS: ATOP_CLK/16 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_CLOCK_RATIO_AFE_CLOCK_RATIO_2 (2u)

/** \brief MSPS: ATOP_CLK/32 */
#define IFX_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_AFE_CLOCK_RATIO_AFE_CLOCK_RATIO_3 (3u)

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_1_Bits
{
    __IO Ifx_UReg_32Bit HFLG2_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG2_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_1_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_2_Bits
{
    __IO Ifx_UReg_32Bit HFLG3_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For HFLG3_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG3_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG3_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_2_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_3_Bits
{
    __IO Ifx_UReg_32Bit LFHG1_12:11;            /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For LFHG1_12). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit LFHG1_24:11;            /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For LFHG1_24). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_3_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_4_Bits
{
    __IO Ifx_UReg_32Bit HFLG1_3:11;             /**< \brief [10:0]  Gain Calibration Value for active AFE
                                                                    channel  (For HFLG1_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [15:11] \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG1_6:11;             /**< \brief [26:16] Gain Calibration Value for active AFE
                                                                    channel  (For HFLG1_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_4_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_1_Bits
{
    __IO Ifx_UReg_32Bit HFLG2_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG2_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG2_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HFLG2_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_1_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_2_Bits
{
    __IO Ifx_UReg_32Bit HFLG3_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG3_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG3_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HFLG3_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_2_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_3_Bits
{
    __IO Ifx_UReg_32Bit LFHG1_12_OS:8;          /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For LFHG1_12). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit LFHG1_24_OS:8;          /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For LFHG1_24). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_3_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_4_Bits
{
    __IO Ifx_UReg_32Bit HFLG1_3_OS:8;           /**< \brief [7:0]   Offset calibration value for AFE active
                                                                    channel (For HFLG1_3). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit HFLG1_6_OS:8;           /**< \brief [23:16] Offset calibration value for AFE active
                                                                    channel (For HLLG1_6). HW RW reserved for future use. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_4_Bits;

/** \brief Low Pass Filter Control Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL_Bits
{
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [24:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit UNSIGN_PATH_EN:1;       /**< \brief [25:25] Enable/Disable unsigned path to Filter
                                                                    module (Please take note that this bit shall be set
                                                                    to '0' for filter functional operation.
                                                                    Only set to '1' for by-pass mode all all filter
                                                                    which is used for testing purpose)
                                                                    0 = Disable (under reset)
                                                                    1 = Enable unsigned path (rw) */
    __IO Ifx_UReg_32Bit MIN_MAX_DET_EN:1;       /**< \brief [26:26] Enable/Disable MIN/MAX Detection Feature.
                                                                    User shall avoid disable and enable different
                                                                    filter at the same write cycle.
                                                                    0 = Disable (under reset)
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit MED_EN:1;               /**< \brief [27:27] Enable/Disable MED Filter.
                                                                    User shall avoid disable and enable different
                                                                    filter at the same write cycle.
                                                                    0 = Disable (under reset)
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit LIF_EN:1;               /**< \brief [28:28] Enable/Disable LIF Filter.
                                                                    User shall avoid disable and enable different
                                                                    filter at the same write cycle.
                                                                    0 = Disable (under reset)
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit AVG_EN:1;               /**< \brief [29:29] Enable/Disable AVG Filter.
                                                                    User shall avoid disable and enable different
                                                                    filter at the same write cycle.
                                                                    0 = Disable (under reset)
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit CIC_EN:1;               /**< \brief [30:30] Enable/Disable CIC Filter.
                                                                    User shall avoid disable and enable different
                                                                    filter at the same write cycle.
                                                                    0 = Disable (under reset)
                                                                    1 = Enable (rw) */
    __IO Ifx_UReg_32Bit LPF_EN:1;               /**< \brief [31:31] Enable/Disable LP Filter.
                                                                    User shall avoid disable and enable different
                                                                    filter at the same write cycle.
                                                                    0 = Disable (under reset)
                                                                    1 = Enable (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL_Bits;

/** \brief ADC Filter Module Configuration register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG_Bits
{
    __IO Ifx_UReg_32Bit SEL_MEDIAN:1;           /**< \brief [0:0]   Bypass/Not Bypass MED Filter
                                                                    0 = not-bypass
                                                                    1 = bypass (rw) */
    __IO Ifx_UReg_32Bit SEL_LIF:1;              /**< \brief [1:1]   Bypass/Not Bypass LIF Filter
                                                                    0 = not-bypass
                                                                    1 = bypass (rw) */
    __IO Ifx_UReg_32Bit SEL_LPF:1;              /**< \brief [2:2]   Bypass/Not Bypass LPF Filter
                                                                    0 = not-bypass
                                                                    1 = bypass (rw) */
    __IO Ifx_UReg_32Bit SEL_CIC:1;              /**< \brief [3:3]   Bypass/Not Bypass CIC Filter
                                                                    0 = not-bypass
                                                                    1 = bypass (rw) */
    __IO Ifx_UReg_32Bit SEL_AVG:1;              /**< \brief [4:4]   Bypass/Not Bypass AVG Filter
                                                                    0 = not-bypass
                                                                    1 = bypass (rw) */
    __IO Ifx_UReg_32Bit SEL_SRC_CH:4;           /**< \brief [8:5]   Configure which ADC channel will be used as
                                                                    sourced of Filter Module:
                                                                    For ADC0 and ADC3, the number of channels is 8.
                                                                    For ADC1-2, the number of channels is 4
                                                                    0000 = CH 0
                                                                    0001 = CH 1
                                                                    ...
                                                                    1111= CH 15
                                                                    Any value that is greater than the ADC's channels,
                                                                    the design will cap to the maximum channels when
                                                                    NUM_CH is less than 2^NUM_CH_LOG2 (rw) */
    __IO Ifx_UReg_32Bit MIN_MAX_SAMPLE_SEARCH:2; /**< \brief [10:9]  Configure Min/Max sample search window
                                                                    (Search is trigger by min_max_trigger_i, search is
                                                                    restart upon read ADC_MIN_MAX register):
                                                                    0 = Open
                                                                    1 = 16 points
                                                                    2 = 64 points
                                                                    3 = 256 points (rw) */
    __IO Ifx_UReg_32Bit SOURCE_MIN_MAX_SAMPLE_SEARCH:1; /**< \brief [11:11] Configure the source of the ADC data stream.
                                                                    0 = ADC Input
                                                                    1= Median Filter (rw) */
    __IO Ifx_UReg_32Bit SEL_SRC_ADC_FILT:1;     /**< \brief [12:12] Select source of the ADC data for Filter
                                                                    Module: Please take note one of the filter need to
                                                                    be enabled.
                                                                    0 = Internal source
                                                                    1 = External source from other ADC_GRP (rw) */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [31:13] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG_Bits;

/** \brief Low Pass Filter Bandwidth configuration Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA_Bits
{
    __IO Ifx_UReg_32Bit BW:8;                   /**< \brief [7:0]   Filter BW Configuration - Cutoff Freq (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA_Bits;

/** \brief Low Pass Filter Data Output */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT_Bits
{
    __I  Ifx_UReg_32Bit LPF_DOUT:16;            /**< \brief [15:0]  Filter Data Output. Data will not overflow.
                                                                    Cap at maximum (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT_Bits;

/** \brief CIC3 Configuration register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG_Bits
{
    __IO Ifx_UReg_32Bit SEL_SRC:1;              /**< \brief [0:0]   Select Source of CIC Filter
                                                                    0 = Internal (SD_CLK will be 0 for CIC_EN =0 or 1)
                                                                    1 = External (SD_CLK will be provided, when SEL_SRC
                                                                    = 1 for CIC_EN =0 or 1) (rw) */
    __IO Ifx_UReg_32Bit CLK_DIV:3;              /**< \brief [3:1]   Clock Divider for external source sampling
                                                                    PPCA_CLK/((1<<(CLK_DIV+2))
                                                                    0 - PPCA_CLK/4
                                                                    1 - PPCA_CLK/8
                                                                    2 - PPCA_CLK/16
                                                                    3 - PPCA_CLK/32
                                                                    4 - PPCA_CLK/64
                                                                    5 - PPCA_CLK/128
                                                                    6 - PPCA_CLK/256
                                                                    7 - PPCA_CLK/512 (rw) */
    __IO Ifx_UReg_32Bit CICF_DEC:11;            /**< \brief [14:4]  Decimation Factor (CIC Sample Rate /
                                                                    (Decimation Factor)
                                                                    For Signal input width of 16: Range of support is
                                                                    from 4 to 64
                                                                    For signal input width of 1: Range of support is
                                                                    from 4 to 2047 (rw) */
    __IO Ifx_UReg_32Bit CICF_DEC_OFFSET:11;     /**< \brief [25:15] CIC Decimation offset (rw) */
    __IO Ifx_UReg_32Bit CICF_DEC_SCALE:5;       /**< \brief [30:26] CIC Scaling (0 - 31) (rw) */
    __IO Ifx_UReg_32Bit CICF_CMP_EN:1;          /**< \brief [31:31] CIC Digital Compartor Enable (Compartor
                                                                    will be disabled when CIC_EN is disabled)
                                                                    0 - Disable Compartor Feature
                                                                    1 - Enable Compartor Feature (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG_Bits;

/** \brief CIC3 Filter Data Output */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT_Bits
{
    __I  Ifx_UReg_32Bit CICF_DOUT:32;           /**< \brief [31:0]  Filter Data Output. Data will not overflow.
                                                                    Cap at maximum (r) */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT_Bits;

/** \brief CIC3 Upper bound threshold register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH_Bits
{
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [15:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit CICF_UB_TH:16;          /**< \brief [31:16] Filter Upper Bound Threshold (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH_Bits;

/** \brief CIC3 Lower bound threshold register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH_Bits
{
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [15:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit CICF_LB_TH:16;          /**< \brief [31:16] Filter Lower Bound Threshold (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH_Bits;

/** \brief Average Filter CTL register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL_Bits
{
    __I  Ifx_UReg_32Bit ACCM_SAMPLE_RPT:24;     /**< \brief [23:0]  Report the number of accumulated sample
                                                                    from the latest trigger (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [30:24] \internal Reserved */
    __IO Ifx_UReg_32Bit SOF_TRIGGER:1;          /**< \brief [31:31] Start of filter trigger.
                                                                    This will reset the ACCUM_SAMPLE_RPT (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL_Bits;

/** \brief Average Filter Configuration Register (N,M,K) */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG_Bits
{
    __IO Ifx_UReg_32Bit M:16;                   /**< \brief [15:0]  Numbers of accumulated sample (rw) */
    __IO Ifx_UReg_32Bit K:1;                    /**< \brief [16:16] Select Linear or Squared sample:
                                                                    0 = Linear (K=1) in the Average Filter formula)
                                                                    1 = Squared (K=2 in the Average filter formula) (rw) */
    __IO Ifx_UReg_32Bit SEL_W_TYPE:1;           /**< \brief [17:17] Select Fix or Dynamic sample window:
                                                                    0 = Fix (M defined by configuration)
                                                                    1 = Dynamic (defined by SAMPLE_W signal - Level
                                                                    Signal ) (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG_Bits;

/** \brief Average Filter Data Output */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT_Bits
{
    __I  Ifx_UReg_32Bit AVGF_DOUT:32;           /**< \brief [31:0]  Filter Data Output. Data will not overflow.
                                                                    Cap at maximum (r) */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT_Bits;

/** \brief Linear Interpolator Filter Configuration register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG_Bits
{
    __IO Ifx_UReg_32Bit M_FACTOR:3;             /**< \brief [2:0]   To define the maximum number of clock cycle
                                                                    between two SoC for the ADC Conversion
                                                                    0 - 2
                                                                    1 - 4
                                                                    2 - 8
                                                                    3 - 16
                                                                    4 - 32
                                                                    5 - 64
                                                                    6 - 128
                                                                    7 - 256 (rw) */
    __I  Ifx_UReg_32Bit :13;                    /**< \brief [15:3]  \internal Reserved */
    __I  Ifx_UReg_32Bit M_TRIGGER_POINT:8;      /**< \brief [23:16] To indicate the location of M_Trigger_point
                                                                    Value from 0 to 255 (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [30:24] \internal Reserved */
    __IO Ifx_UReg_32Bit INTP_EXTP_SEL:1;        /**< \brief [31:31] To select Intp/Extp
                                                                    0 - Intp
                                                                    1 - Extp (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG_Bits;

/** \brief Linear Interpolator Filter Data Output */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT_Bits
{
    __I  Ifx_UReg_32Bit LIF_DOUT:16;            /**< \brief [15:0]  Filter Data Output. Data will not overflow.
                                                                    Cap at maximum (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT_Bits;

/** \brief Median Filter Configuration register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG_Bits
{
    __IO Ifx_UReg_32Bit CNFG_MED:16;            /**< \brief [15:0]  MED  Configuration - (Plan for Future) (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG_Bits;

/** \brief Median Filter Data Output */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT_Bits
{
    __I  Ifx_UReg_32Bit MED_DOUT:12;            /**< \brief [11:0]  Filter Data Output. Data will not overflow.
                                                                    Cap at maximum (r) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT_Bits;

/** \brief ADC Min Max detect value Register */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX_Bits
{
    __I  Ifx_UReg_32Bit MIN_Mirror:12;          /**< \brief [11:0]  Min ADC data input stream value in the
                                                                    defined window (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __I  Ifx_UReg_32Bit MAX_Mirror:12;          /**< \brief [27:16] Max ADC data input stream value in the
                                                                    defined window (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [31:28] \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL_Bits
{
    __I  Ifx_UReg_32Bit DCMP_EV:1;              /**< \brief [0:0]   Report status of the current digital
                                                                    comparison when INV_DCMP_ENV_CNFG = 0
                                                                    0 = input less or equal to threshold
                                                                    1 = input above threshold (r) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [30:1]  \internal Reserved */
    __IO Ifx_UReg_32Bit DCMP_EN:1;              /**< \brief [31:31] DCMP  Enable:
                                                                    1 = Enable
                                                                    0 = Disable (reset asserted) (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG_Bits
{
    __IO Ifx_UReg_32Bit MODE:2;                 /**< \brief [1:0]   DCMP Mode selection:
                                                                    0 = immediate comparison
                                                                    1 = accumulate of immediate comparison result (Seq
                                                                    of +1/-1).
                                                                    2 = accumulate of immediate comparison result (Seq of +1/0)
                                                                    3 = average comparison (rw) */
    __IO Ifx_UReg_32Bit SAMPLE:2;               /**< \brief [3:2]   Configure average window:
                                                                    0 = 4 points
                                                                    1 = 16 points
                                                                    2 = 64 points
                                                                    3 = 256 points (rw) */
    __IO Ifx_UReg_32Bit SEL_SRC_CH:4;           /**< \brief [7:4]   Configure which ADC channel will be used
                                                                    for comparison.
                                                                    For ADC0 and ADC3, the number of channels is 8.
                                                                    For ADC1-2, the number of channels is 4
                                                                    0000 = CH 0
                                                                    0001 = CH 1
                                                                    ...
                                                                    1111= CH 15
                                                                    Any value that is greater than the ADC's channels,
                                                                    the design will cap to the maximum channels when
                                                                    NUM_CH is less than 2^NUM_CH_LOG2 (rw) */
    __IO Ifx_UReg_32Bit INV_DCMP_EV_CNFG:1;     /**< \brief [8:8]   INV_DCMP_EV
                                                                    0: The immediate comparison result of mode 0  will
                                                                    not be inverted.
                                                                    1: The immediate comparison result of mode 0 will
                                                                    be inverted. (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER_Bits
{
    __IO Ifx_UReg_32Bit DCMP_TRIG:1;            /**< \brief [0:0]   Trigger Comparison window when MODE = 3, 2,
                                                                    1 and reset current computed value.
                                                                    1 = trigger
                                                                    0 = do nothing (rw) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH_Bits
{
    __IO Ifx_UReg_32Bit DCMP_TH:12;             /**< \brief [11:0]  DCMP Threshold can be expressed as signed
                                                                    or unsigned depending on the ADC Channel Signed and
                                                                    Unsigned configuration Register (rw) */
    __I  Ifx_UReg_32Bit SIGN_EXTENDED_DCMP_TH:20; /**< \brief [31:12] DCMP_TH SIGN EXTENDED to faciliate CPU 32
                                                                    bits access
                                                                    When DCMP threshold data is negative for sign,
                                                                    these bit will be 1.
                                                                    When DCMP threshold data is positive in the sign or
                                                                    unsigned data is used, these bit will be 0. (r) */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH_Bits
{
    __IO Ifx_UReg_32Bit DCMP_ACC_TH:8;          /**< \brief [7:0]   DCMP accumulate Threshold (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CTL_Bits
{
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [30:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit IDAC_EN:1;              /**< \brief [31:31] IDAC  Enable:
                                                                    1 = Enable
                                                                    0 = Disable (reset asserted) (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CTL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG_Bits
{
    __IO Ifx_UReg_32Bit MUX_SEL:4;              /**< \brief [3:0]   IDAC Mode selection: (rw)
                                                MUX_SEL_Tri_state: 0u   No connection of the IDAC_MUX
                                                MUX_SEL_AI0   : 1u   Connect to AI0
                                                MUX_SEL_AI1   : 2u   Connect to AI1
                                                MUX_SEL_DCSG_0_VINP: 4u   Connect to DCSG<0>_vinp - Allow to do open circuit test.
                                                MUX_SEL_DCSG_0_VINN: 8u   Connect to DCSG<0>_vinn - Allow to do open circuit test */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG_Bits;

/* PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG.MUX_SEL enumerated values */

/** \brief No connection of the IDAC_MUX */
#define IFX_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG_MUX_SEL_MUX_SEL_Tri_state (0u)

/** \brief Connect to AI0 */
#define IFX_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG_MUX_SEL_MUX_SEL_AI0 (1u)

/** \brief Connect to AI1 */
#define IFX_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG_MUX_SEL_MUX_SEL_AI1 (2u)

/** \brief Connect to DCSG<0>_vinp - Allow to do open circuit test. */
#define IFX_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG_MUX_SEL_MUX_SEL_DCSG_0_VINP (4u)

/** \brief Connect to DCSG<0>_vinn - Allow to do open circuit test */
#define IFX_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG_MUX_SEL_MUX_SEL_DCSG_0_VINN (8u)

/** \brief AREF control */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL_Bits
{
    __IO Ifx_UReg_32Bit AREF_MODE:1;            /**< \brief [0:0]   Control bit to trade off AREF settling and
                                                                    noise performance (rw)
                                                NORMAL        : 0u   Nominal noise normal startup mode (meets normal
                                                                    mode settling and noise specifications)
                                                FAST_START    : 1u   High noise fast startup mode (meets fast mode
                                                                    settling and noise specifications) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [1:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit AREF_BIAS_SCALE:2;      /**< \brief [3:2]   RESERVED (rw) */
    __IO Ifx_UReg_32Bit AREF_RMB:3;             /**< \brief [6:4]   RESERVED - all bits must be set to 0 (rw) */
    __IO Ifx_UReg_32Bit CTB_IPTAT_SCALE:1;      /**< \brief [7:7]   RESERVED - set this bit to 0 (rw) */
    __IO Ifx_UReg_32Bit CTB_IPTAT_REDIRECT:8;   /**< \brief [15:8]  RESERVED - all bits must be set to 0 (rw) */
    __IO Ifx_UReg_32Bit IZTAT_SEL:1;            /**< \brief [16:16] iztat current select control (RESERVED) (rw)
                                                RESERVED      : 0u   Reserved, for normal operation, set to '1'
                                                                    selection (LOCAL)
                                                LOCAL         : 1u   Use locally generated 250nA */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [19:17] \internal Reserved */
    __IO Ifx_UReg_32Bit VREF_SEL:2;             /**< \brief [21:20] bandgap voltage select control (rw)
                                                RESERVED      : 0u   Reserved, for normal operation, set to '1'
                                                                    selection (LOCAL)
                                                LOCAL         : 1u   Use locally generated Vref
                                                EXTERNAL      : 2u   Use externally supplied Vref (aref_ext_vref) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [29:22] \internal Reserved */
    __IO Ifx_UReg_32Bit TSNS_CUR_ENABLED:1;     /**< \brief [30:30] Enable Bias current to Temp Sensor (rw) */
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [31:31] AREF Enable (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL_Bits;

/* PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL.AREF_MODE enumerated values */

/** \brief Nominal noise normal startup mode (meets normal mode settling and noise
specifications) */
#define IFX_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL_AREF_MODE_NORMAL (0u)

/** \brief High noise fast startup mode (meets fast mode settling and noise specifications) */
#define IFX_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL_AREF_MODE_FAST_START (1u)

/* PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL.IZTAT_SEL enumerated values */

/** \brief Reserved, for normal operation, set to '1' selection (LOCAL) */
#define IFX_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL_IZTAT_SEL_RESERVED (0u)

/** \brief Use locally generated 250nA */
#define IFX_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL_IZTAT_SEL_LOCAL (1u)

/* PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL.VREF_SEL enumerated values */

/** \brief Reserved, for normal operation, set to '1' selection (LOCAL) */
#define IFX_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL_VREF_SEL_RESERVED (0u)

/** \brief Use locally generated Vref */
#define IFX_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL_VREF_SEL_LOCAL (1u)

/** \brief Use externally supplied Vref (aref_ext_vref) */
#define IFX_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL_VREF_SEL_EXTERNAL (2u)

/** \brief Analog Voltage Status */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VDDA_STATUS_Bits
{
    __I  Ifx_UReg_32Bit VDDA_OK:1;              /**< \brief [0:0]   Read only status bit to determine the
                                                                    presence of VDDA
                                                                    0: VDDA is below minimum threshold
                                                                    1: VDDA is at or above minimum threhold (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VDDA_STATUS_Bits;

/** \brief Analog Control */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_ANA_CTL_Bits
{
    __IO Ifx_UReg_32Bit FORCE_POR_0:1;          /**< \brief [0:0]   Override for Analog POR Hardware circuit.
                                                                    0: (default) POR is controlled by analog hardware
                                                                    1: Force POR asserted (POR is an active low signal)
                                                                    If the MCPASS is not in use, set this bit to '1' to
                                                                    achieve the lowest level of IP leakage
                                                                    NOTE: If this bit is set to 1, FORCE_POR_1 must be 0. (rw) */
    __IO Ifx_UReg_32Bit FORCE_POR_1:1;          /**< \brief [1:1]   Override for Analog POR Hardware circuit.
                                                                    0: (default) POR is controlled by analog hardware
                                                                    1: Force POR negated (POR is an active low signal)
                                                                    NOTE: If this bit is set to 1, FORCE_POR_0 must be 0. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_ANA_CTL_Bits;

/** \brief VREF Trim bits */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM0_Bits
{
    __IO Ifx_UReg_32Bit VREF_ABS_TRIM:8;        /**< \brief [7:0]   bandgap absolute voltage output trim (in
                                                                    signed magnitude format)
                                                                    0x00 : No Voltage Trim Adjustment
                                                                    0x1F : Maximum Positive Trim Adjustment (+20mV)
                                                                    0x3F : Maximum Negative Trim Adjustment (-20mV)
                                                                    Bits [7:6] are reserved. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM0_Bits;

/** \brief VREF Trim bits */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM1_Bits
{
    __IO Ifx_UReg_32Bit VREF_TEMPCO_TRIM:8;     /**< \brief [7:0]   bandgap voltage temperature correction trim
                                                                    0x00 : Minimum temperature correction (smallest
                                                                    PTAT voltage)
                                                                    0x3F : Maximum temperature correction (largest PTAT voltage)
                                                                    Bits [7:6] are reserved. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM1_Bits;

/** \brief VREF Trim bits */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM2_Bits
{
    __IO Ifx_UReg_32Bit VREF_CURV_TRIM:8;       /**< \brief [7:0]   bandgap voltage curvature correction trim
                                                                    0x00 : No Curvature Correction
                                                                    0x1F : Maximum Curvature Correction (2uA PTAT2
                                                                    Current (at 125C))
                                                                    Bits [7:5] are reserved. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM2_Bits;

/** \brief VREF Trim bits */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM3_Bits
{
    __IO Ifx_UReg_32Bit VREF_ATTEN_TRIM:4;      /**< \brief [3:0]   Obsolete (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM3_Bits;

/** \brief IZTAT Trim bits */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM0_Bits
{
    __IO Ifx_UReg_32Bit IZTAT_ABS_TRIM:8;       /**< \brief [7:0]   IZTAT absolute current output trim
                                                                    0x00 : Minimum IZTAT output current (~500nA)
                                                                    0x3F : Maximum IZTAT output current (~1.5uA)
                                                                    Bits [7:6] are reserved. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM0_Bits;

/** \brief IZTAT Trim bits */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM1_Bits
{
    __IO Ifx_UReg_32Bit IZTAT_TC_TRIM:8;        /**< \brief [7:0]   IZTAT temperature correction trim (RMB)
                                                                    0x00 : No IZTAT temperature correction
                                                                    0xFF : Maximum IZTAT temperature correction
                                                                    As this is a Risk Mitigation Register, it should be
                                                                    loaded with 0x08. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM1_Bits;

/** \brief IPTAT Trim bits */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM0_Bits
{
    __IO Ifx_UReg_32Bit IPTAT_CORE_TRIM:4;      /**< \brief [3:0]   IPTAT trim
                                                                    0x0 : Minimum IPTAT current (~150nA at room)
                                                                    0xF : Maximum IPTAT current (~350nA at room) (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM0_Bits;

/** \brief 0 */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM1_Bits
{
    __IO Ifx_UReg_32Bit IPTAT_CTBM_TRIM:4;      /**< \brief [3:0]   CTMB PTAT Current Trim
                                                                    0x0 : Minimum CTMB IPTAT Current (~875nA)
                                                                    0xF : Maximum CTMB IPTAT Current (~1.1uA) (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM1_Bits;

/** \brief ICTAT Trim bits */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF_ICTAT_TRIM0_Bits
{
    __IO Ifx_UReg_32Bit ICTAT_TRIM:4;           /**< \brief [3:0]   ICTAT trim
                                                                    0x00 : Minimum ICTAT current (~150nA at room)
                                                                    0x0F : Maximum ICTAT current (~350nA at room) (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_ICTAT_TRIM0_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_ADC_GRP_GPI_GPI_CTL_Bits
{
    __I  Ifx_UReg_32Bit GPI_Input_AI0:1;        /**< \brief [0:0]   Reflects input status of the AI0
                                                                    0 = Low Level
                                                                    1 = High Level (r) */
    __I  Ifx_UReg_32Bit GPI_Input_AI1:1;        /**< \brief [1:1]   Reflects input status of the AI1
                                                                    0 = Low Level
                                                                    1 = High Level (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [29:2]  \internal Reserved */
    __IO Ifx_UReg_32Bit GPI_EN_AI1:1;           /**< \brief [30:30] GPI  Enable for AI1:
                                                                    1 = Enable
                                                                    0 = Disable (reset asserted) (rw) */
    __IO Ifx_UReg_32Bit GPI_EN_AI0:1;           /**< \brief [31:31] GPI  Enable for AI0:
                                                                    1 = Enable
                                                                    0 = Disable (reset asserted) (rw) */
} Ifx_PPCA_ATOPSS_ADC_GRP_GPI_GPI_CTL_Bits;

/** \brief Analog Comparator Control Register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL_Bits
{
    __I  Ifx_UReg_32Bit CMP_FLAG:1;             /**< \brief [0:0]   Reflects status of the COMP_OUT signal
                                                                    0 = Input <= Configured Threshold
                                                                    1 = Input > Configured Threshold (r) */
    __I  Ifx_UReg_32Bit DCSG_BUSY:1;            /**< \brief [1:1]   DCSG Busy:
                                                                    1 = Busy
                                                                    0 = Idle (r) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [30:2]  \internal Reserved */
    __IO Ifx_UReg_32Bit DCSG_EN:1;              /**< \brief [31:31] Enable/Disable Analog Comparator
                                                                    0 = Disable (power down)
                                                                    1 = Enable (rw) */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL_Bits;

/** \brief Analog Comparator Configuration Register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_Bits
{
    __IO Ifx_UReg_32Bit SEL_SRC:1;              /**< \brief [0:0]   Select between Internal (DAC R2R) or
                                                                    External Source (Analog input Channel)
                                                                    0 = External (From Analog Input Pad)
                                                                    1 = Internal (From DAC R2R Output) (rw) */
    __IO Ifx_UReg_32Bit SEL_CH_SRC:4;           /**< \brief [4:1]   Select Analog Input Channel Source
                                                                    0 = CH 0
                                                                    1 = CH 1
                                                                    ...
                                                                    11 = CH 11 (rw) */
    __IO Ifx_UReg_32Bit TYPE_CH_SRC:3;          /**< \brief [7:5]   Select between Differential or Single Ended
                                                                    or A_vs_B (rw)
                                                TYPE_CH_DIFF_ER: 0u   Differential Mode Full Range support +/-3.3V.
                                                                    Other than 5, this will be selected
                                                TYPE_CH_DIFF_FR: 1u   Differential Mode Full Range support 0-3.3V
                                                TYPE_CH_SINGLE_P: 2u   Single-Ended Mode P Vs GND (Use together with
                                                                    SEL_CH_SRC)
                                                TYPE_CH_SINGLE_N: 3u   Single-Ended Mode N Vs GND (User together with
                                                                    SEL_CH_SRC)
                                                TYPE_CH_DIFF_RR: 4u   Differential Mode Full Range support +/-200mV
                                                TYPE_CH_A_vs_B: 5u   A vs B Mode */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [10:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit INIT_SETTING:2;         /**< \brief [12:11] To configure the blanking period of DCSG
                                                                    during initization (rw)
                                                BLANK_8       : 0u   Blanking period is 8 after init.
                                                                    It will be 98 if used with SEL_SRC=1
                                                BLANK_10_1    : 1u   Blanking period is 10 after init.
                                                                    It will be 98 if used with SEL_SRC=1
                                                BLANK_10_2    : 2u   Blanking period is 10 after init.
                                                                    It will be 98 if used with SEL_SRC=1
                                                BLANK_12      : 3u   Blanking period is 12 after init.
                                                                    It will be 98 if used with SEL_SRC=1
                                                BLANK_8_LS    : 0u   Blanking period is 18 after init.
                                                                    It will be 98 if used with SEL_SRC=1 (When
                                                                    CFG_LOW_SUPPLY is set to 1, For IP testing use)
                                                BLANK_10_1_LS : 1u   Blanking period is 22 after init.
                                                                    It will be 98 if used with SEL_SRC=1 (When
                                                                    CFG_LOW_SUPPLY is set to 1, For IP testing use)
                                                BLANK_10_2_LS : 2u   Blanking period is 22 after init.
                                                                    It will be 98 if used with SEL_SRC=1 (When
                                                                    CFG_LOW_SUPPLY is set to 1, For IP testing use)
                                                BLANK_12_LS   : 3u   Blanking period is 26 after init.
                                                                    It will be 98 if used with SEL_SRC=1 (When
                                                                    CFG_LOW_SUPPLY is set to 1, For IP testing use) */
    __IO Ifx_UReg_32Bit DCSG_DAC_RATE:3;        /**< \brief [15:13] To configurate the DCSG DAC update rate
                                                                    (Based on 200MHz Clock)
                                                                    0 - 4 Clock Cycle, 0 tblank clk cycle (This is only
                                                                    for slope gen only)
                                                                    1 - 4 Clock Cycle, 2 tblank clk cycle (This is only
                                                                    for slope gen only)
                                                                    2 - 4 Clock Cycle, 3 tblank clk cycle (This is only
                                                                    for slope gen only)
                                                                    3 - 6 Clock Cycle, 4 tblank clk cycle
                                                                    4 - 8 Clock Cycle, 6 tblank clk cycle
                                                                    5 - 10 Clock Cycle, 8 tblank clk cycle
                                                                    6 - 12 Clock Cycle, 10 tblank clk cycle
                                                                    7 - 20  Clock Cycle, 18 tblank clk cycle (rw) */
    __IO Ifx_UReg_32Bit USER_DEFINED_VALUE_SETUP:1; /**< \brief [16:16] To use User Defined Value during Refresh
                                                                    0 - CMP_FLAG from comparator output
                                                                    1 - CMP_FLAG from user default value (rw) */
    __IO Ifx_UReg_32Bit USER_DEFINED_VALUE:1;   /**< \brief [17:17] User Defined Value (rw) */
    __IO Ifx_UReg_32Bit USER_BYPASS_REFRESH:1;  /**< \brief [18:18] BYPASS_REFRESH
                                                                    0 - No Bypass
                                                                    1 - Bypass.
                                                                    When bypass and in USER_DEFINED_VALUE_SETUP, USER
                                                                    defined value will be drive the CMP_FLAG (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [19:19] \internal Reserved */
    __IO Ifx_UReg_32Bit CFG_REFRESH_RATE:3;     /**< \brief [22:20] Refresh Rate Setting for Internal INIT.
                                                                    To compute the refresh rate duration, please use
                                                                    the following formula.
                                                                    1/DCSG_CLK*Clk counter value (rw)
                                                CFG_REFRESH_RATE_0: 0u   10000 Clk counter -> 50.0usec based on 200MHz Clock
                                                CFG_REFRESH_RATE_1: 1u   7500 Clk counter -> 37.5usec based on 200MHz Clock
                                                CFG_REFRESH_RATE_2: 2u   5000 Clk counter -> 25.0usec based on 200MHz Clock
                                                CFG_REFRESH_RATE_3: 3u   3500 Clk counter -> 17.5usec based on 200MHz Clock
                                                CFG_REFRESH_RATE_4: 4u   2500 Clk counter -> 12.5usec based on 200MHz Clock
                                                CFG_REFRESH_RATE_5: 5u   1750 Clk counter -> 8.75usec based on 200MHz Clock
                                                CFG_REFRESH_RATE_6: 6u   1250 Clk counter -> 6.25usec based on 200MHz Clock
                                                CFG_REFRESH_RATE_7: 7u   1000 Clk counter -> 5.00usec based on 200MHz Clock */
    __IO Ifx_UReg_32Bit HYST:3;                 /**< \brief [25:23] Hysteresis setup for A_VS_B Mode.
                                                                    1 LSB is equivalent to 1.6mV (rw)
                                                HYST_0        : 0u   Hysteresis feature is disabled
                                                HYST_1        : 1u   +/- 1 LSB hysteresis is introduced
                                                HYST_2        : 2u   +/- 2 LSB hysteresis is introduced
                                                HYST_3        : 3u   +/- 4 LSB hysteresis is introduced
                                                HYST_4        : 4u   +/- 8 LSB hysteresis is introduced
                                                HYST_5        : 5u   +/- 16 LSB hysteresis is introduced
                                                HYST_6        : 6u   +/- 32 LSB hysteresis is introduced
                                                HYST_7        : 7u   +/- 64 LSB hysteresis is introduced */
    __IO Ifx_UReg_32Bit DEB:3;                  /**< \brief [28:26] Debounce feature for HYST operation (Only
                                                                    for A_VS_B Mode Hysteresis ) (rw)
                                                DEB_0         : 0u   Debounce feature is disabled
                                                DEB_1         : 1u   Transistion must be valid for 2 clock cycle
                                                DEB_2         : 2u   Transition must be valid for 3 clock cycle
                                                DEB_3         : 3u   Transition must be valid for 4 clock cycle
                                                DEB_4         : 4u   Transition must be valid for 5 clock cycle
                                                DEB_5         : 5u   Transition must be valid for 6 clock cycle
                                                DEB_6         : 6u   Transition must be valid for 7 clock cycle
                                                DEB_7         : 7u   Transition must be valid for 8 clock cycle */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [31:29] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_Bits;

/* PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG.TYPE_CH_SRC enumerated values */

/** \brief Differential Mode Full Range support +/-3.3V.
Other than 5, this will be selected */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_TYPE_CH_SRC_TYPE_CH_DIFF_ER (0u)

/** \brief Differential Mode Full Range support 0-3.3V */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_TYPE_CH_SRC_TYPE_CH_DIFF_FR (1u)

/** \brief Single-Ended Mode P Vs GND (Use together with SEL_CH_SRC) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_TYPE_CH_SRC_TYPE_CH_SINGLE_P (2u)

/** \brief Single-Ended Mode N Vs GND (User together with SEL_CH_SRC) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_TYPE_CH_SRC_TYPE_CH_SINGLE_N (3u)

/** \brief Differential Mode Full Range support +/-200mV */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_TYPE_CH_SRC_TYPE_CH_DIFF_RR (4u)

/** \brief A vs B Mode */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_TYPE_CH_SRC_TYPE_CH_A_vs_B (5u)

/* PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG.INIT_SETTING enumerated values */

/** \brief Blanking period is 8 after init. It will be 98 if used with SEL_SRC=1 */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_INIT_SETTING_BLANK_8 (0u)

/** \brief Blanking period is 10 after init. It will be 98 if used with SEL_SRC=1 */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_INIT_SETTING_BLANK_10_1 (1u)

/** \brief Blanking period is 10 after init. It will be 98 if used with SEL_SRC=1 */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_INIT_SETTING_BLANK_10_2 (2u)

/** \brief Blanking period is 12 after init. It will be 98 if used with SEL_SRC=1 */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_INIT_SETTING_BLANK_12 (3u)

/** \brief Blanking period is 18 after init.
It will be 98 if used with SEL_SRC=1 (When CFG_LOW_SUPPLY is set to 1, For IP
testing use) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_INIT_SETTING_BLANK_8_LS (0u)

/** \brief Blanking period is 22 after init.
It will be 98 if used with SEL_SRC=1 (When CFG_LOW_SUPPLY is set to 1, For IP
testing use) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_INIT_SETTING_BLANK_10_1_LS (1u)

/** \brief Blanking period is 22 after init.
It will be 98 if used with SEL_SRC=1 (When CFG_LOW_SUPPLY is set to 1, For IP
testing use) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_INIT_SETTING_BLANK_10_2_LS (2u)

/** \brief Blanking period is 26 after init.
It will be 98 if used with SEL_SRC=1 (When CFG_LOW_SUPPLY is set to 1, For IP
testing use) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_INIT_SETTING_BLANK_12_LS (3u)

/* PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG.CFG_REFRESH_RATE enumerated values */

/** \brief 10000 Clk counter -> 50.0usec based on 200MHz Clock */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_CFG_REFRESH_RATE_CFG_REFRESH_RATE_0 (0u)

/** \brief 7500 Clk counter -> 37.5usec based on 200MHz Clock */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_CFG_REFRESH_RATE_CFG_REFRESH_RATE_1 (1u)

/** \brief 5000 Clk counter -> 25.0usec based on 200MHz Clock */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_CFG_REFRESH_RATE_CFG_REFRESH_RATE_2 (2u)

/** \brief 3500 Clk counter -> 17.5usec based on 200MHz Clock */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_CFG_REFRESH_RATE_CFG_REFRESH_RATE_3 (3u)

/** \brief 2500 Clk counter -> 12.5usec based on 200MHz Clock */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_CFG_REFRESH_RATE_CFG_REFRESH_RATE_4 (4u)

/** \brief 1750 Clk counter -> 8.75usec based on 200MHz Clock */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_CFG_REFRESH_RATE_CFG_REFRESH_RATE_5 (5u)

/** \brief 1250 Clk counter -> 6.25usec based on 200MHz Clock */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_CFG_REFRESH_RATE_CFG_REFRESH_RATE_6 (6u)

/** \brief 1000 Clk counter -> 5.00usec based on 200MHz Clock */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_CFG_REFRESH_RATE_CFG_REFRESH_RATE_7 (7u)

/* PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG.HYST enumerated values */

/** \brief Hysteresis feature is disabled */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_HYST_HYST_0 (0u)

/** \brief +/- 1 LSB hysteresis is introduced */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_HYST_HYST_1 (1u)

/** \brief +/- 2 LSB hysteresis is introduced */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_HYST_HYST_2 (2u)

/** \brief +/- 4 LSB hysteresis is introduced */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_HYST_HYST_3 (3u)

/** \brief +/- 8 LSB hysteresis is introduced */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_HYST_HYST_4 (4u)

/** \brief +/- 16 LSB hysteresis is introduced */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_HYST_HYST_5 (5u)

/** \brief +/- 32 LSB hysteresis is introduced */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_HYST_HYST_6 (6u)

/** \brief +/- 64 LSB hysteresis is introduced */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_HYST_HYST_7 (7u)

/* PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG.DEB enumerated values */

/** \brief Debounce feature is disabled */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_DEB_DEB_0 (0u)

/** \brief Transistion must be valid for 2 clock cycle */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_DEB_DEB_1 (1u)

/** \brief Transition must be valid for 3 clock cycle */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_DEB_DEB_2 (2u)

/** \brief Transition must be valid for 4 clock cycle */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_DEB_DEB_3 (3u)

/** \brief Transition must be valid for 5 clock cycle */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_DEB_DEB_4 (4u)

/** \brief Transition must be valid for 6 clock cycle */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_DEB_DEB_5 (5u)

/** \brief Transition must be valid for 7 clock cycle */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_DEB_DEB_6 (6u)

/** \brief Transition must be valid for 8 clock cycle */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_DEB_DEB_7 (7u)

/** \brief Analog Comparator Threshold configuration register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH_Bits
{
    __IO Ifx_UReg_32Bit TH:12;                  /**< \brief [11:0]  DCSG Threshold register.
                                                                    User shall ensure that DCSG_BUSY bit is '0' when
                                                                    performing write operation on this register.
                                                                    Please take note that if user is using SLGEN, user
                                                                    should observe the DCSG_SLGEN_CTL.SLGEN_BUSY. (rw) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CTL_Bits
{
    __IO Ifx_UReg_32Bit SLGEN_EN_TRIGGER:1;     /**< \brief [0:0]   Trigger Slope Generator function
                                                                    0 = Do nothing
                                                                    1 = Trigger ramp generation (rw) */
    __I  Ifx_UReg_32Bit SLGEN_BUSY:1;           /**< \brief [1:1]   Report Slope Generator status
                                                                    0 = free
                                                                    1 = busy (in operation) (r) */
    __IO Ifx_UReg_32Bit TRIGGER_UNMASK:1;       /**< \brief [2:2]   Trigger mask/unmask function
                                                                    0 = Trigger are masked.
                                                                    Upon detect of trigger will not start the SL
                                                                    operation
                                                                    1 = Trigger are unmasked.
                                                                    Upon detect of Trigger will start the SL operation (rw) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [27:3]  \internal Reserved */
    __IO Ifx_UReg_32Bit SIN_CLK_BLANK:1;        /**< \brief [28:28] Single Clock Blank
                                                                    0 - Enabled
                                                                    1 - Disabled (rw) */
    __I  Ifx_UReg_32Bit DBG_STATUS:1;           /**< \brief [29:29] Specifies whether SLGEN has enter into
                                                                    Debug state
                                                                    1 = Yes
                                                                    2 = No (r) */
    __IO Ifx_UReg_32Bit DBG_FREEZE_EN:1;        /**< \brief [30:30] Specifies the slope generator behavior in
                                                                    debug mode.
                                                                    '0': When ='0', slope generator operation continues
                                                                    or resume
                                                                    '1': When ='1', slope generator freeze the
                                                                    operation immediately (rw) */
    __IO Ifx_UReg_32Bit SLGEN_EN:1;             /**< \brief [31:31] Enable/Disable Slope Generator
                                                                    0 = Disable (under reset)
                                                                    1 = Enable (rw) */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CTL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG_Bits
{
    __IO Ifx_UReg_32Bit SEL_SLGEN_SRC:1;        /**< \brief [0:0]   Select Slope Generator source for DAC register
                                                                    0 = CPU is in control of DCSG_TH register DAC
                                                                    threshold
                                                                    1 = Select SLGEN RAMP as source, SLGEN_RAMP is
                                                                    control of the DAC threshold (rw) */
    __IO Ifx_UReg_32Bit EN_SHADOW_TRANSFER:1;   /**< \brief [1:1]   Enable Shadow Transfer Feature
                                                                    0 = Shadow Transfer Feature Disable
                                                                    1 = Shadow Transfer Feature Enable (rw) */
    __IO Ifx_UReg_32Bit AUTO_RESET:1;           /**< \brief [2:2]   Auto-Reset of Slope Generation threshold
                                                                    between initial and target value.
                                                                    This will work with all the setting of
                                                                    DUR_SLGEN_TH_ADJ
                                                                    0 - AUTORESET OFF
                                                                    1 - AUTORESET ON (rw) */
    __IO Ifx_UReg_32Bit SLGEN_MAP:3;            /**< \brief [5:3]   To map SL_GEN operation DCSG (rw)
                                                SLGEN_MAP_0   : 0u   SL_GEN is configured to DCSG_0
                                                SLGEN_MAP_1   : 1u   SL_GEN is configured to DCSG_1
                                                SLGEN_MAP_2   : 2u   SL_GEN is configured to DCSG_2
                                                SLGEN_MAP_3   : 3u   SL_GEN is configured to DCSG_3
                                                SLGEN_MAP_4   : 4u   SL_GEN is configured to DCSG_4
                                                SLGEN_MAP_5   : 5u   SL_GEN is configured to DCSG_5 */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG_Bits;

/* PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG.SLGEN_MAP enumerated values */

/** \brief SL_GEN is configured to DCSG_0 */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG_SLGEN_MAP_SLGEN_MAP_0 (0u)

/** \brief SL_GEN is configured to DCSG_1 */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG_SLGEN_MAP_SLGEN_MAP_1 (1u)

/** \brief SL_GEN is configured to DCSG_2 */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG_SLGEN_MAP_SLGEN_MAP_2 (2u)

/** \brief SL_GEN is configured to DCSG_3 */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG_SLGEN_MAP_SLGEN_MAP_3 (3u)

/** \brief SL_GEN is configured to DCSG_4 */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG_SLGEN_MAP_SLGEN_MAP_4 (4u)

/** \brief SL_GEN is configured to DCSG_5 */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG_SLGEN_MAP_SLGEN_MAP_5 (5u)

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_Bits
{
    __IO Ifx_UReg_32Bit F:4;                    /**< \brief [3:0]   Initial Set Fractional Value (rw) */
    __IO Ifx_UReg_32Bit I:12;                   /**< \brief [15:4]  Initial Set Integer Value (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_Bits
{
    __IO Ifx_UReg_32Bit F:4;                    /**< \brief [3:0]   Target Set Fractional Value (rw) */
    __IO Ifx_UReg_32Bit I:12;                   /**< \brief [15:4]  Target Set Integer Value (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_BUF_Bits
{
    __IO Ifx_UReg_32Bit F:4;                    /**< \brief [3:0]   Initial Set Fractional Value (rw) */
    __IO Ifx_UReg_32Bit I:12;                   /**< \brief [15:4]  Initial Set Integer Value (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_BUF_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_BUF_Bits
{
    __IO Ifx_UReg_32Bit F:4;                    /**< \brief [3:0]   Target Set Fractional Value (rw) */
    __IO Ifx_UReg_32Bit I:12;                   /**< \brief [15:4]  Target Set Integer Value (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_BUF_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_STEP_Bits
{
    __IO Ifx_UReg_32Bit F:4;                    /**< \brief [3:0]   Step Fractional Value (rw) */
    __IO Ifx_UReg_32Bit I:12;                   /**< \brief [15:4]  Step Integer Value (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_STEP_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_MATCH_Bits
{
    __I  Ifx_UReg_32Bit TH_TRIG:12;             /**< \brief [11:0]  Reports the slope value at which the
                                                                    comparator triggered (r) */
    __I  Ifx_UReg_32Bit TH_TRIG_VALID:1;        /**< \brief [12:12] Indicate if the reported TH_TRIG is
                                                                    occurred after the provide Slope Start
                                                                    0: reported value occurred before trigger
                                                                    1: reported value occurred after trigger (r) */
    __I  Ifx_UReg_32Bit :19;                    /**< \brief [31:13] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_MATCH_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK_DCSG_BLANK_CTL_Bits
{
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [30:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit DCSG_BLANK_EN:1;        /**< \brief [31:31] Enable/Disable Blanking support for Analog
                                                                    Comparator
                                                                    0 = Disable (power down)
                                                                    1 = Enable (rw) */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK_DCSG_BLANK_CTL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CTL_Bits
{
    __IO Ifx_UReg_32Bit DAC_EN:1;               /**< \brief [0:0]   Enable/Disable DAC
                                                                    0 = Disable (powered down)
                                                                    1 = Enable (powered up) (rw) */
    __IO Ifx_UReg_32Bit DAC_BUFF_EN:1;          /**< \brief [1:1]   Enable/Disable DAC BUF
                                                                    0 = Disable (powered down)
                                                                    1 = Enable (powered up) (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CTL_Bits;

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_Bits
{
    __IO Ifx_UReg_32Bit R2RDAC_CNFG:3;          /**< \brief [2:0]   R2R DAC Configuration (rw)
                                                R2RDAC_CNFG_0 : 0u   Single Ended Mode Full Range from 0V to 0.4V (NA)
                                                R2RDAC_CNFG_1 : 1u   Loopback Single Ended Mode (P-G) from 0V to 3.3V)
                                                                    Loopback Differential Mode (P-N) from 0V to 3.3V)
                                                R2RDAC_CNFG_2 : 2u   DAC Buffer with 1.2 Full Range
                                                R2RDAC_CNFG_3 : 3u   DAC Buffer with VDDA/2 Full Range
                                                R2RDAC_CNFG_4 : 4u   Loopback Differential Mode (VDDREF=0.4V, from -0.2V to 0.2V)
                                                R2RDAC_CNFG_5 : 5u   Loopback Differential Mode (VDDREF=VDDA, from -3.3V to 3.3V)
                                                R2RDAC_CNFG_6 : 6u   DAC Buffer with 1.2 Full Range (NA)
                                                R2RDAC_CNFG_7 : 7u   DAC Buffer with VDDA/2 Full Range (NA) */
    __IO Ifx_UReg_32Bit DAC_OFFSET_DIS:1;       /**< \brief [3:3]   DAC Offset correction.
                                                                    Correction is added to DOUT value before sending to
                                                                    R2R_DAC Analog module
                                                                    0 - DAC Offset correction is enabled
                                                                    1 - DAC Offset correction is disabled (rw) */
    __IO Ifx_UReg_32Bit DAC_GAIN_DIS:1;         /**< \brief [4:4]   DAC Gain correction.
                                                                    Correction is added to DOUT value before sending to
                                                                    R2R_DAC Analog module
                                                                    0 - Gain Offset correction is enabled
                                                                    1 - Gain  Offset correction is disabled (rw) */
    __IO Ifx_UReg_32Bit BUF_OFFSET_DIS:1;       /**< \brief [5:5]   BUFF Offset correction.
                                                                    Correction is added to DOUT value before sending to
                                                                    R2R_DAC Analog module
                                                                    0 - Buffer Offset correction is enabled
                                                                    1 - Buffer Offset correction is disabled (rw) */
    __IO Ifx_UReg_32Bit EN_VREF_TO_BUF:1;       /**< \brief [6:6]   For ADFT Purpose - Enable VREF as reference
                                                                    to Buffer
                                                                    0 - VREF is not connected as reference
                                                                    1 - VREF is connected as reference (rw) */
    __IO Ifx_UReg_32Bit EN_DAC_O_TO_BUF:1;      /**< \brief [7:7]   For ADFT Purpose - Enable DAC_Output as
                                                                    reference to Buffer
                                                                    0 - DAC_Output is not connected as reference
                                                                    1 - DAC_Output is connected as reference (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_Bits;

/* PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG.R2RDAC_CNFG enumerated values */

/** \brief Single Ended Mode Full Range from 0V to 0.4V (NA) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_R2RDAC_CNFG_R2RDAC_CNFG_0 (0u)

/** \brief Loopback Single Ended Mode (P-G) from 0V to 3.3V)
Loopback Differential Mode (P-N) from 0V to 3.3V) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_R2RDAC_CNFG_R2RDAC_CNFG_1 (1u)

/** \brief DAC Buffer with 1.2 Full Range */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_R2RDAC_CNFG_R2RDAC_CNFG_2 (2u)

/** \brief DAC Buffer with VDDA/2 Full Range */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_R2RDAC_CNFG_R2RDAC_CNFG_3 (3u)

/** \brief Loopback Differential Mode (VDDREF=0.4V, from -0.2V to 0.2V) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_R2RDAC_CNFG_R2RDAC_CNFG_4 (4u)

/** \brief Loopback Differential Mode (VDDREF=VDDA, from -3.3V to 3.3V) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_R2RDAC_CNFG_R2RDAC_CNFG_5 (5u)

/** \brief DAC Buffer with 1.2 Full Range (NA) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_R2RDAC_CNFG_R2RDAC_CNFG_6 (6u)

/** \brief DAC Buffer with VDDA/2 Full Range (NA) */
#define IFX_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_R2RDAC_CNFG_R2RDAC_CNFG_7 (7u)

/** \brief  */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_DOUT_Bits
{
    __IO Ifx_UReg_32Bit DOUT:12;                /**< \brief [11:0]  DAC Data Output (rw) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_DOUT_Bits;

/** \brief DAC Offset CNFG1 register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG1_Bits
{
    __IO Ifx_UReg_32Bit DAC_OFFSET_CNFG1:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG1 (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG1_Bits;

/** \brief DAC Gain CNFG4 register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG2_Bits
{
    __IO Ifx_UReg_32Bit DAC_OFFSET_CNFG2:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG2 (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG2_Bits;

/** \brief 0 */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG3_Bits
{
    __IO Ifx_UReg_32Bit DAC_OFFSET_CNFG3:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG3 (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG3_Bits;

/** \brief 0 */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG4_Bits
{
    __IO Ifx_UReg_32Bit DAC_OFFSET_CNFG4:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG4 (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG4_Bits;

/** \brief 0 */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG5_Bits
{
    __IO Ifx_UReg_32Bit DAC_OFFSET_CNFG5:10;    /**< \brief [9:0]   Signed offset calibration value for CNFG5 (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG5_Bits;

/** \brief DAC Gain CNFG1 register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG1_Bits
{
    __IO Ifx_UReg_32Bit DAC_GAIN_CNFG1:11;      /**< \brief [10:0]  DAC GAIN CNFG1 (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG1_Bits;

/** \brief DAC Gain CNFG2 register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG2_Bits
{
    __IO Ifx_UReg_32Bit DAC_GAIN_CNFG2:11;      /**< \brief [10:0]  DAC GAIN CNFG2 (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG2_Bits;

/** \brief DAC Gain CNFG3 register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG3_Bits
{
    __IO Ifx_UReg_32Bit DAC_GAIN_CNFG3:11;      /**< \brief [10:0]  DAC GAIN CNFG3 (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG3_Bits;

/** \brief DAC Gain CNFG4 register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG4_Bits
{
    __IO Ifx_UReg_32Bit DAC_GAIN_CNFG4:11;      /**< \brief [10:0]  DAC GAIN CNFG4 (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG4_Bits;

/** \brief DAC Gain CNFG5 register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG5_Bits
{
    __IO Ifx_UReg_32Bit DAC_GAIN_CNFG5:11;      /**< \brief [10:0]  DAC GAIN CNFG5 (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG5_Bits;

/** \brief Buffer Offset 1 register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_1_Bits
{
    __IO Ifx_UReg_32Bit BUFFER_OFFSET_1:10;     /**< \brief [9:0]   Signed offset calibration value for Buffer
                                                                    in 1.2 Full Range (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_1_Bits;

/** \brief Buffer Offset 2 register */
typedef struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_2_Bits
{
    __IO Ifx_UReg_32Bit BUFFER_OFFSET_2:10;     /**< \brief [9:0]   Signed offset calibration value for Buffer
                                                                    in VDDA/2 Full Range (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_2_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_Registers_union
 * \{   */
/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CTRL_Bits B;                  /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_CNFG0_Bits B;            /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_CNFG0;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_CNFG1_Bits B;            /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_CNFG1;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_CNFG2_Bits B;            /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_CNFG2;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_CNFG_TRACE_ATOP_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_CNFG_TRACE_ATOP;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_CPU_CTRL_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_CPU_CTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_RST_CTRL_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_RST_CTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_PPCAOUT_SEL_Bits B;      /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_PPCAOUT_SEL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_DDFTOUT_SEL_Bits B;      /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_DDFTOUT_SEL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_CNFGEXTDBGCONN_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_CNFGEXTDBGCONN;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_PPCAIO_IN_MON_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_PPCAIO_IN_MON;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_SCRATCH0_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_SCRATCH0;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_CNFG_SCRATCH1_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_CNFG_SCRATCH1;

/** \brief Interrupt Request Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_S2IRQ_INTR_Bits B;            /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_S2IRQ_INTR;

/** \brief Interrupt Set Request Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_S2IRQ_INTR_SET_Bits B;        /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_S2IRQ_INTR_SET;

/** \brief Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_S2IRQ_INTR_MASK_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_S2IRQ_INTR_MASK;

/** \brief Interrupt Masked Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_ADCM_ADC_DATA_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_ADCM_ADC_DATA;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CNFG_DISPERI_DISPERI_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_CNFG_DISPERI_DISPERI;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_EPU_CTRL_Bits B;                   /**< \brief Bitfield access */
} Ifx_PPCA_EPU_CTRL;

/** \brief Interrupt Source Selection Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL;

/** \brief Interrupt Request Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_EPU_EPU_IRQ_INTR_Bits B;           /**< \brief Bitfield access */
} Ifx_PPCA_EPU_EPU_IRQ_INTR;

/** \brief Interrupt Set Request Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_EPU_EPU_IRQ_INTR_SET_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_EPU_EPU_IRQ_INTR_SET;

/** \brief Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK_Bits B;      /**< \brief Bitfield access */
} Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK;

/** \brief Interrupt Masked Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_EPU_EPU_PU_T1_CNFG_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_EPU_EPU_PU_T1_CNFG;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_EPU_EPU_PU_T2_CNFG_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_EPU_EPU_PU_T2_CNFG;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_EPU_EPU_COMBO_CNFG_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_EPU_EPU_COMBO_CNFG;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG_Bits B;      /**< \brief Bitfield access */
} Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG;

/** \brief IPC acquire */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_IPC_STRUCT_ACQUIRE_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_IPC_STRUCT_ACQUIRE;

/** \brief IPC release */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_IPC_STRUCT_RELEASE_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_IPC_STRUCT_RELEASE;

/** \brief IPC notification */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_IPC_STRUCT_NOTIFY_Bits B;          /**< \brief Bitfield access */
} Ifx_PPCA_IPC_STRUCT_NOTIFY;

/** \brief IPC data 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_IPC_STRUCT_DATA0_Bits B;           /**< \brief Bitfield access */
} Ifx_PPCA_IPC_STRUCT_DATA0;

/** \brief IPC data 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_IPC_STRUCT_DATA1_Bits B;           /**< \brief Bitfield access */
} Ifx_PPCA_IPC_STRUCT_DATA1;

/** \brief IPC lock status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_IPC_STRUCT_LOCK_STATUS_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_IPC_STRUCT_LOCK_STATUS;

/** \brief Interrupt */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_IPC_INTR_STRUCT_INTR_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_IPC_INTR_STRUCT_INTR;

/** \brief Interrupt set */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_IPC_INTR_STRUCT_INTR_SET_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_IPC_INTR_STRUCT_INTR_SET;

/** \brief Interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASK_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASK;

/** \brief Interrupt masked */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASKED_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASKED;

/** \brief Access port control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_AP_CTL_Bits B;          /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_AP_CTL;

/** \brief Master Port Access control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_MP_CTL_Bits B;          /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_MP_CTL;

/** \brief Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CTL;

/** \brief Command */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CMD_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CMD;

/** \brief Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_STATUS_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_STATUS;

/** \brief CM33 NMI control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL;

/** \brief CM33 event control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_EVENT_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_EVENT_CTL;

/** \brief CM33 non-secure vector table base */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NS_VECTOR_TABLE_BASE_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NS_VECTOR_TABLE_BASE;

/** \brief Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_CTL_Bits B;        /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_CTL;

/** \brief Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_STATUS_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_STATUS;

/** \brief ECC control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_CTL_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_CTL;

/** \brief ECC status 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS0;

/** \brief ECC status 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS1;

/** \brief ECC match */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_MATCH_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_MATCH;

/** \brief SRAM power partition power control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL;

/** \brief SRAM power partition power control Lock */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK;

/** \brief SRAM power switch power up & sequence delay */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_DELAY_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_DELAY_CTL;

/** \brief Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system. */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CFG_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CFG;

/** \brief Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CTRL_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CTRL;

/** \brief Block size & initialization in progress */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_CFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_CFG;

/** \brief NS status for 32 blocks at BLK_IDX with PC=<access_pc> */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_LUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_LUT;

/** \brief Control register with lock bit and auto-increment only */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_CTRL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_CTRL;

/** \brief Max value of block-based index register for ROT */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_MAX_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_MAX;

/** \brief Same as BLK_CFG */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_CFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_CFG;

/** \brief Index of 8-block group accessed through ROT_BLK_LUT_* */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_IDX_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_IDX;

/** \brief Protection context of 8-block group accesses through ROT_BLK_LUT */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_PC_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_PC;

/** \brief (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_LUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_LUT;

/** \brief Power Policy Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWPR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWPR;

/** \brief Power Mode Emulation Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PMER_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PMER;

/** \brief Power Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWSR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWSR;

/** \brief Device Interface Input Current Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DISR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DISR;

/** \brief Miscellaneous Input Current Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MISR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MISR;

/** \brief Stored Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_STSR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_STSR;

/** \brief Unlock register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_UNLK_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_UNLK;

/** \brief Power Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWCR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWCR;

/** \brief Power Mode Transition Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PTCR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PTCR;

/** \brief Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IMR_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IMR;

/** \brief Additional Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIMR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIMR;

/** \brief Interrupt Status Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ISR_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ISR;

/** \brief Additional Interrupt Status Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AISR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AISR;

/** \brief Input Edge Sensitivity Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IESR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IESR;

/** \brief Operating Mode Active Edge Sensitivity Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_OPSR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_OPSR;

/** \brief Functional Retention RAM Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FUNRR_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FUNRR;

/** \brief Full Retention RAM Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FULRR_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FULRR;

/** \brief Memory Retention RAM Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MEMRR_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MEMRR;

/** \brief Power Mode Entry Delay Register 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR0_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR0;

/** \brief Power Mode Entry Delay Register 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR1_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR1;

/** \brief Device Control Delay Configuration Register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR0_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR0;

/** \brief Device Control Delay Configuration Register 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR1_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR1;

/** \brief PPU Identification Register 0 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR0_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR0;

/** \brief PPU Identification Register 1 */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR1_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR1;

/** \brief Implementation Identification Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IIDR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IIDR;

/** \brief Architecture Identification Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIDR_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIDR;

/** \brief Implementation Defined Identification Register (PID4) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID4_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID4;

/** \brief Implementation Defined Identification Register (PID0) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID0_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID0;

/** \brief Implementation Defined Identification Register (PID1) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID1_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID1;

/** \brief Implementation Defined Identification Register (PID2) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID2_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID2;

/** \brief Implementation Defined Identification Register (PID3) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID3_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID3;

/** \brief Implementation Defined Identification Register (ID0) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID0_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID0;

/** \brief Implementation Defined Identification Register (ID1) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID1_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID1;

/** \brief Implementation Defined Identification Register (ID2) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID2_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID2;

/** \brief Implementation Defined Identification Register (ID3) */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID3_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID3;

/** \brief Counter control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_CTRL_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_CTRL;

/** \brief Counter status register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_STATUS_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_STATUS;

/** \brief Counter count register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_COUNTER_Bits B;      /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_COUNTER;

/** \brief Counter compare/capture 0 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_CC0_Bits B;          /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_CC0;

/** \brief Counter buffered compare/capture 0 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF;

/** \brief Counter compare/capture 1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_CC1_Bits B;          /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_CC1;

/** \brief Counter buffered compare/capture 1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF;

/** \brief Counter period register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_PERIOD;

/** \brief Counter buffered period register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF;

/** \brief Counter line selection register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL;

/** \brief Counter buffered line selection register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF;

/** \brief Counter PWM dead time register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_DT_Bits B;           /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_DT;

/** \brief Counter buffered PWM dead time register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF_Bits B;      /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF;

/** \brief Counter prescalar register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_PS_Bits B;           /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_PS;

/** \brief Counter trigger command register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD;

/** \brief Counter input trigger selection register 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0;

/** \brief Counter input trigger selection register 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1;

/** \brief Counter input trigger edge selection register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL;

/** \brief Counter trigger PWM control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL;

/** \brief Counter output trigger selection register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL;

/** \brief Interrupt request register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_INTR_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_INTR;

/** \brief Interrupt set request register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET;

/** \brief Interrupt mask register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK_Bits B;    /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK;

/** \brief Interrupt masked request register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED;

/** \brief Sync bypass register for one to one trigger */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS;

/** \brief Counter control register for HRPWM feature */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL_Bits B;   /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL;

/** \brief Counter control register 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_GRP_CNT_CTRL2_Bits B;        /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_GRP_CNT_CTRL2;

/** \brief Trigger Sync bypass for group trigger */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS;

/** \brief Global control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF;

/** \brief Suspend Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS;

/** \brief MOTIF run bit set */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUNS_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUNS;

/** \brief MOTIF run bit status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUN_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUN;

/** \brief Hall Inputs Sample Trigger */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HIST_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HIST;

/** \brief Hall Mode Extra Config */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HMEC_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HMEC;

/** \brief Hall Current and Expected patterns */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALP_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALP;

/** \brief Hall Current and Expected shadow patterns */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALPS_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALPS;

/** \brief Hall Sensor Output Config */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC;

/** \brief Multi-Channel Mode Pattern */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCM_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCM;

/** \brief Multi-Channel Mode shadow Pattern LUT0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM;

/** \brief Multi-Channel Mode Control set */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMS_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMS;

/** \brief Multi-Channel Mode Control clear */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMC_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMC;

/** \brief Multi-Channel Mode flag status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMF_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMF;

/** \brief Multi-Channel Pattern Fault */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCPF_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCPF;

/** \brief Multi-Channel Output Config */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC;

/** \brief Quadrature Decoder Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC_Bits B;  /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC;

/** \brief Quadrature Output Config */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC;

/** \brief Multi-Channel Extra Config */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMEC_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMEC;

/** \brief MOTIF interrupt status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLG;

/** \brief MOTIF interrupt enable */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLGE_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLGE;

/** \brief Interrupt set register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SPFLG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SPFLG;

/** \brief Interrupt clear register */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_RPFLG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_RPFLG;

/** \brief Multi-Channel Mode shadow pattern LUT1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM1;

/** \brief Multi-Channel Mode shadow pattern LUT2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM2;

/** \brief Multi-Channel Mode shadow pattern LUT3 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM3_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM3;

/** \brief Multi-Channel Mode shadow pattern LUT4 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM4_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM4;

/** \brief Multi-Channel Mode shadow pattern LUT5 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM5_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM5;

/** \brief Hall Mode LUT config */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_CLUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_CLUT;

/** \brief Hall Mode LUT status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SLUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SLUT;

/** \brief MOTIF Debug Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PDBG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PDBG;

/** \brief MOTIF Low Pass 0 Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP0S_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP0S;

/** \brief MOTIF Low Pass 1 Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP1S_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP1S;

/** \brief MOTIF Low Pass 2 Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP2S_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP2S;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_CTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_CTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CTRL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN0;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN1;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CNFG;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX0;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX1;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX2;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX3_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX3;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY1;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY2;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY3_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY3;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_OUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_OUT;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_OFFSET_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_OFFSET;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMAX_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMAX;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMIN_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMIN;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECX_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECX;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECY_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECY;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GIN_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GIN;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GOUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GOUT;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_VERSION_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_VERSION;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_CTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_CTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CTRL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN0;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN1;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CNFG;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX0;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX1;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX2;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX3_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX3;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY1;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY2;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY3_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY3;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_OUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_OUT;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_OFFSET_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_OFFSET;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMAX_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMAX;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMIN_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMIN;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECX_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECX;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECY_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECY;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GIN_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GIN;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GOUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GOUT;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_VERSION_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_VERSION;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ADCM_ADCM_ADC_DATA_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_ADCM_ADCM_ADC_DATA;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_CTRL_Bits B;                   /**< \brief Bitfield access */
} Ifx_PPCA_CLB_CTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_CTRL_Bits B;              /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_CTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_CNFG_Bits B;              /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_CNFG;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_EVENT_Bits B;             /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_EVENT;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_SAFE_Bits B;              /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_SAFE;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_IMAXL_Bits B;             /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_IMAXL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_IMINL_Bits B;             /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_IMINL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_VAC_POL_Bits B;           /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_VAC_POL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_OBS_CTRL_Bits B;          /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_OBS_CTRL;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PERIOD_MEAS_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PERIOD_MEAS;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_IEST_IND_ACCU_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_IEST_IND_ACCU;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_IL_ACCU_Bits B;           /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_IL_ACCU;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_IEST_CORR_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_IEST_CORR;

/** \brief IMINL for Up and Down Slope */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PE_IMINL_Bits B;          /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PE_IMINL;

/** \brief IMAXL for Up and Down Slope */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PE_IMAXL_Bits B;          /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PE_IMAXL;

/** \brief UP Count Register for Up and Down Slope */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PE_UP_COUNT_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PE_UP_COUNT;

/** \brief DOWN Count Register for Up and Down Slope */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PE_DN_COUNT_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PE_DN_COUNT;

/** \brief TPHD Value (PCO_1) Register for PE */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PE_TPHD_1_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PE_TPHD_1;

/** \brief TPHD Value (PCO_2) Register for PE */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PE_TPHD_2_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PE_TPHD_2;

/** \brief Threshold Current multiplied by Inductance Register for PS */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PS_TH_Bits B;             /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PS_TH;

/** \brief IMINL/IMAXL Correction Information Register for PS */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PS_CC_INFO_Bits B;        /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PS_CC_INFO;

/** \brief Correction term of IMINL/IMAXL Register for PS */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PS_CC_Bits B;             /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PS_CC;

/** \brief Interrupt Request Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_INTR_Bits B;              /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_INTR;

/** \brief Interrupt Set Request Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_INTR_SET_Bits B;          /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_INTR_SET;

/** \brief Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_INTR_MASK_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_INTR_MASK;

/** \brief Interrupt Masked Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_INTR_MASKED_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_INTR_MASKED;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_PCO_CORR_IEST_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_PCO_CORR_IEST;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_DICO_STAT_Bits B;              /**< \brief Bitfield access */
} Ifx_PPCA_CLB_DICO_STAT;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_CTRL_Bits B;              /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_CTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_EVENT_Bits B;             /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_EVENT;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_STAT_Bits B;              /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_STAT;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_SECT0_ROW_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_SECT0_ROW;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_SECT1_ROW_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_SECT1_ROW;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_SECT2_ROW_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_SECT2_ROW;

/** \brief Interrupt Request Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_INTR_Bits B;              /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_INTR;

/** \brief Interrupt Set Request Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_INTR_SET_Bits B;          /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_INTR_SET;

/** \brief Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_INTR_MASK_Bits B;         /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_INTR_MASK;

/** \brief Interrupt Masked Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_INTR_MASKED_Bits B;       /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_INTR_MASKED;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_SECT0_PATTERN_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_SECT0_PATTERN;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_SECT0_SAFE_Bits B;        /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_SECT0_SAFE;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_SECT1_PATTERN_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_SECT1_PATTERN;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_SECT1_SAFE_Bits B;        /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_SECT1_SAFE;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_SECT2_PATTERN_Bits B;     /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_SECT2_PATTERN;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_CLB_MACO_SECT2_SAFE_Bits B;        /**< \brief Bitfield access */
} Ifx_PPCA_CLB_MACO_SECT2_SAFE;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_CTL_Bits B;                    /**< \brief Bitfield access */
} Ifx_MXCORDIC_CTL;

/** \brief Module Identification Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_ID_Bits B;                     /**< \brief Bitfield access */
} Ifx_MXCORDIC_ID;

/** \brief Interrupt Cause Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_INTR_Bits B;                   /**< \brief Bitfield access */
} Ifx_MXCORDIC_INTR;

/** \brief Interrupt Set Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_INTR_SET_Bits B;               /**< \brief Bitfield access */
} Ifx_MXCORDIC_INTR_SET;

/** \brief Interrupt Mask Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_INTR_MASK_Bits B;              /**< \brief Bitfield access */
} Ifx_MXCORDIC_INTR_MASK;

/** \brief Interrupt Masked Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_INTR_MASKED_Bits B;            /**< \brief Bitfield access */
} Ifx_MXCORDIC_INTR_MASKED;

/** \brief CORDIC Keep Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_KEEP_Bits B;                   /**< \brief Bitfield access */
} Ifx_MXCORDIC_KEEP;

/** \brief CORDIC Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_CON_Bits B;                    /**< \brief Bitfield access */
} Ifx_MXCORDIC_CON;

/** \brief CORDIC X Data Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_CORDX_Bits B;                  /**< \brief Bitfield access */
} Ifx_MXCORDIC_CORDX;

/** \brief CORDIC Y Data Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_CORDY_Bits B;                  /**< \brief Bitfield access */
} Ifx_MXCORDIC_CORDY;

/** \brief CORDIC Z Data Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_CORDZ_Bits B;                  /**< \brief Bitfield access */
} Ifx_MXCORDIC_CORDZ;

/** \brief CORDIC X Result Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_CORRX_Bits B;                  /**< \brief Bitfield access */
} Ifx_MXCORDIC_CORRX;

/** \brief CORDIC Y Result Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_CORRY_Bits B;                  /**< \brief Bitfield access */
} Ifx_MXCORDIC_CORRY;

/** \brief CORDIC Z Result Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_CORRZ_Bits B;                  /**< \brief Bitfield access */
} Ifx_MXCORDIC_CORRZ;

/** \brief CORDIC Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_STAT_Bits B;                   /**< \brief Bitfield access */
} Ifx_MXCORDIC_STAT;

/** \brief CORDIC Start Command Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_MXCORDIC_START_CMD_Bits B;              /**< \brief Bitfield access */
} Ifx_MXCORDIC_START_CMD;

/** \brief ADC Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CTL;

/** \brief ADC Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNFG;

/** \brief ADC Aux and ALT Aux Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG;

/** \brief ADC Conversion Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNV_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNV_CNFG;

/** \brief ADC Sampling Mask register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SAMPLING_MASK_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SAMPLING_MASK;

/** \brief ADC Channel Trigger register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_TRIGGER_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_TRIGGER;

/** \brief ADC Channels group 0 to be converted Configurations registers */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG0;

/** \brief ADC Channels group 1 to be converted Configurations registers */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG1;

/** \brief ADC Auxiliary Channels to be converted configuration registers */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG0;

/** \brief ADC Auxiliary Channels to be converted configuration registers */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG1;

/** \brief ADC AUX Alternate Channel to be converted configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_CH_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_CH_CNFG;

/** \brief ADC Converted Data Channels */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA;

/** \brief ADC Auxiliary Data Channels */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA;

/** \brief ADC Alternate Auxiliary Data Channels */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA;

/** \brief Interrupt request register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR;

/** \brief Interrupt set request register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_SET_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_SET;

/** \brief Interrupt mask register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASK_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASK;

/** \brief Interrupt masked request register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASKED_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASKED;

/** \brief ADC Channel Signed and Unsigned configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SIGN_UNSIGN_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SIGN_UNSIGN_CNFG;

/** \brief AUX Channel Signed and Unsigned configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_SIGN_UNSIGN_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_SIGN_UNSIGN_CNFG;

/** \brief AUX Alternate Channel Signed and Unsigned configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_ALT_SIGN_UNSIGN_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_ALT_SIGN_UNSIGN_CNFG;

/** \brief SARADC STARTUP Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_STARTUPCTRL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_STARTUPCTRL;

/** \brief SARADC CALIBRATION Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CTL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_1;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_2;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_3_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_3;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_4_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_4;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_1;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_2;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_3_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_3;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_4_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_4;

/** \brief Low Pass Filter Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL;

/** \brief ADC Filter Module Configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG;

/** \brief Low Pass Filter Bandwidth configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA;

/** \brief Low Pass Filter Data Output */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT;

/** \brief CIC3 Configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG;

/** \brief CIC3 Filter Data Output */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT;

/** \brief CIC3 Upper bound threshold register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH;

/** \brief CIC3 Lower bound threshold register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH;

/** \brief Average Filter CTL register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL;

/** \brief Average Filter Configuration Register (N,M,K) */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG;

/** \brief Average Filter Data Output */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT;

/** \brief Linear Interpolator Filter Configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG;

/** \brief Linear Interpolator Filter Data Output */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT;

/** \brief Median Filter Configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG;

/** \brief Median Filter Data Output */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT;

/** \brief ADC Min Max detect value Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CTL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG;

/** \brief AREF control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL;

/** \brief Analog Voltage Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VDDA_STATUS_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VDDA_STATUS;

/** \brief Analog Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_ANA_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_ANA_CTL;

/** \brief VREF Trim bits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM0;

/** \brief VREF Trim bits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM1;

/** \brief VREF Trim bits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM2;

/** \brief VREF Trim bits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM3_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM3;

/** \brief IZTAT Trim bits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM0;

/** \brief IZTAT Trim bits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM1;

/** \brief IPTAT Trim bits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM0;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM1;

/** \brief ICTAT Trim bits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_AREF_ICTAT_TRIM0_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF_ICTAT_TRIM0;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_ADC_GRP_GPI_GPI_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_ADC_GRP_GPI_GPI_CTL;

/** \brief Analog Comparator Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL;

/** \brief Analog Comparator Configuration Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG;

/** \brief Analog Comparator Threshold configuration register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CTL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_BUF_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_BUF;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_BUF_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_BUF;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_STEP_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_STEP;

/** \brief  */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_MATCH_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_MATCH;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK_DCSG_BLANK_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK_DCSG_BLANK_CTL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CTL_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CTL;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG;

/** \brief  */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_DOUT_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_DOUT;

/** \brief DAC Offset CNFG1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG1;

/** \brief DAC Gain CNFG4 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG2;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG3_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG3;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG4_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG4;

/** \brief 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG5_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG5;

/** \brief DAC Gain CNFG1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG1;

/** \brief DAC Gain CNFG2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG2;

/** \brief DAC Gain CNFG3 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG3_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG3;

/** \brief DAC Gain CNFG4 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG4_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG4;

/** \brief DAC Gain CNFG5 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG5_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG5;

/** \brief Buffer Offset 1 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_1_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_1;

/** \brief Buffer Offset 2 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_2_Bits B; /**< \brief Bitfield access */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_2;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CNFG_CNFG_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief CNFG object */
typedef volatile struct _Ifx_PPCA_CNFG_CNFG
{
       __IO Ifx_PPCA_CNFG_CNFG_CNFG0            CNFG0;                  /**< \brief 0, */
       __IO Ifx_PPCA_CNFG_CNFG_CNFG1            CNFG1;                  /**< \brief 4, */
       __IO Ifx_PPCA_CNFG_CNFG_CNFG2            CNFG2;                  /**< \brief 8, */
       __IO Ifx_PPCA_CNFG_CNFG_CNFG_TRACE_ATOP  CNFG_TRACE_ATOP;        /**< \brief C, */
       __IO Ifx_PPCA_CNFG_CNFG_CPU_CTRL         CPU_CTRL;               /**< \brief 10, */
       __IO Ifx_PPCA_CNFG_CNFG_RST_CTRL         RST_CTRL;               /**< \brief 14, */
       __I  Ifx_UReg_8Bit                       reserved_18[8];         /**< \brief 18, */
       __IO Ifx_PPCA_CNFG_CNFG_PPCAIN_SEL       PPCAIN_SEL[16];         /**< \brief 20, */
       __I  Ifx_UReg_8Bit                       reserved_60[32];        /**< \brief 60, */
       __IO Ifx_PPCA_CNFG_CNFG_TR_PPCAIN_SEL    TR_PPCAIN_SEL[16];      /**< \brief 80, */
       __IO Ifx_PPCA_CNFG_CNFG_PPCAOUT_SEL      PPCAOUT_SEL;            /**< \brief C0, */
       __I  Ifx_UReg_8Bit                       reserved_C4[28];        /**< \brief C4, */
       __IO Ifx_PPCA_CNFG_CNFG_DDFTOUT_SEL      DDFTOUT_SEL[2];         /**< \brief E0, */
       __I  Ifx_UReg_8Bit                       reserved_E8[8];         /**< \brief E8, */
       __IO Ifx_PPCA_CNFG_CNFG_CNFGEXTDBGCONN   CNFGEXTDBGCONN;         /**< \brief F0, */
       __I  Ifx_PPCA_CNFG_CNFG_PPCAIO_IN_MON    PPCAIO_IN_MON;          /**< \brief F4, */
       __IO Ifx_PPCA_CNFG_CNFG_SCRATCH0         SCRATCH0;               /**< \brief F8, */
       __IO Ifx_PPCA_CNFG_CNFG_SCRATCH1         SCRATCH1;               /**< \brief FC, */
} Ifx_PPCA_CNFG_CNFG;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CNFG_S2IRQ_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief S2IRQ object */
typedef volatile struct _Ifx_PPCA_CNFG_S2IRQ
{
       __IO Ifx_PPCA_CNFG_S2IRQ_INTR            INTR;                   /**< \brief 0, Interrupt Request Register*/
       __IO Ifx_PPCA_CNFG_S2IRQ_INTR_SET        INTR_SET;               /**< \brief 4, Interrupt Set Request Register*/
       __IO Ifx_PPCA_CNFG_S2IRQ_INTR_MASK       INTR_MASK;              /**< \brief 8, Interrupt Mask Register*/
       __I  Ifx_PPCA_CNFG_S2IRQ_INTR_MASKED     INTR_MASKED;            /**< \brief C, Interrupt Masked Register*/
} Ifx_PPCA_CNFG_S2IRQ;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CNFG_ADCM_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief ADCM object */
typedef volatile struct _Ifx_PPCA_CNFG_ADCM
{
       __I  Ifx_PPCA_CNFG_ADCM_ADC_DATA         ADC_DATA[48];           /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_C0[64];        /**< \brief C0, */
} Ifx_PPCA_CNFG_ADCM;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CNFG_DISPERI_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief DISPERI object */
typedef volatile struct _Ifx_PPCA_CNFG_DISPERI
{
       __IO Ifx_PPCA_CNFG_DISPERI_DISPERI       DISPERI;                /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_4[1020];       /**< \brief 4, */
} Ifx_PPCA_CNFG_DISPERI;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CNFG_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CNFG object */
typedef volatile struct _Ifx_PPCA_CNFG
{
       __IO Ifx_PPCA_CNFG_CTRL                  CTRL;                   /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
       __IO Ifx_PPCA_CNFG_CNFG                  CNFG;                   /**< \brief 100, */
       __I  Ifx_UReg_8Bit                       reserved_200[256];      /**< \brief 200, */
       __IO Ifx_PPCA_CNFG_S2IRQ                 S2IRQ[7];               /**< \brief 300, */
       __I  Ifx_UReg_8Bit                       reserved_370[144];      /**< \brief 370, */
       __IO Ifx_PPCA_CNFG_ADCM                  ADCM;                   /**< \brief 400, */
       __I  Ifx_UReg_8Bit                       reserved_500[768];      /**< \brief 500, */
       __IO Ifx_PPCA_CNFG_DISPERI               DISPERI;                /**< \brief 800, */
       __I  Ifx_UReg_8Bit                       reserved_C00[1024];     /**< \brief C00, */
} Ifx_PPCA_CNFG;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_EPU_EPU_IRQ_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief EPU_IRQ object */
typedef volatile struct _Ifx_PPCA_EPU_EPU_IRQ
{
       __IO Ifx_PPCA_EPU_EPU_IRQ_INTR_SRCSEL    INTR_SRCSEL;            /**< \brief 0, Interrupt Source Selection Register*/
       __I  Ifx_UReg_8Bit                       reserved_4[12];         /**< \brief 4, */
       __IO Ifx_PPCA_EPU_EPU_IRQ_INTR           INTR;                   /**< \brief 10, Interrupt Request Register*/
       __IO Ifx_PPCA_EPU_EPU_IRQ_INTR_SET       INTR_SET;               /**< \brief 14, Interrupt Set Request Register*/
       __IO Ifx_PPCA_EPU_EPU_IRQ_INTR_MASK      INTR_MASK;              /**< \brief 18, Interrupt Mask Register*/
       __I  Ifx_PPCA_EPU_EPU_IRQ_INTR_MASKED    INTR_MASKED;            /**< \brief 1C, Interrupt Masked Register*/
} Ifx_PPCA_EPU_EPU_IRQ;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_EPU_EPU_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief EPU object */
typedef volatile struct _Ifx_PPCA_EPU_EPU
{
       __IO Ifx_PPCA_EPU_EPU_PU_T1_CNFG         PU_T1_CNFG[32];         /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_80[128];       /**< \brief 80, */
       __IO Ifx_PPCA_EPU_EPU_PU_T2_CNFG         PU_T2_CNFG[16];         /**< \brief 100, */
       __I  Ifx_UReg_8Bit                       reserved_140[192];      /**< \brief 140, */
       __IO Ifx_PPCA_EPU_EPU_COMBO_CNFG         COMBO_CNFG[123];        /**< \brief 200, */
       __I  Ifx_UReg_8Bit                       reserved_3EC[20];       /**< \brief 3EC, */
       __IO Ifx_PPCA_EPU_EPU_COMBO_FB_CNFG      COMBO_FB_CNFG[8];       /**< \brief 400, */
       __I  Ifx_UReg_8Bit                       reserved_420[992];      /**< \brief 420, */
} Ifx_PPCA_EPU_EPU;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_EPU_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief EPU object */
typedef volatile struct _Ifx_PPCA_EPU
{
       __IO Ifx_PPCA_EPU_CTRL                   CTRL;                   /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
       __IO Ifx_PPCA_EPU_EPU_IRQ                EPU_IRQ[8];             /**< \brief 100, */
       __I  Ifx_UReg_8Bit                       reserved_200[512];      /**< \brief 200, */
       __IO Ifx_PPCA_EPU_EPU                    EPU;                    /**< \brief 400, */
       __I  Ifx_UReg_8Bit                       reserved_C00[1024];     /**< \brief C00, */
} Ifx_PPCA_EPU;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_IPC_STRUCT_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief STRUCT object */
typedef volatile struct _Ifx_PPCA_IPC_STRUCT
{
       __I  Ifx_PPCA_IPC_STRUCT_ACQUIRE         ACQUIRE;                /**< \brief 0, IPC acquire*/
       __O  Ifx_PPCA_IPC_STRUCT_RELEASE         RELEASE;                /**< \brief 4, IPC release*/
       __O  Ifx_PPCA_IPC_STRUCT_NOTIFY          NOTIFY;                 /**< \brief 8, IPC notification*/
       __IO Ifx_PPCA_IPC_STRUCT_DATA0           DATA0;                  /**< \brief C, IPC data 0*/
       __IO Ifx_PPCA_IPC_STRUCT_DATA1           DATA1;                  /**< \brief 10, IPC data 1*/
       __I  Ifx_UReg_8Bit                       reserved_14[8];         /**< \brief 14, */
       __I  Ifx_PPCA_IPC_STRUCT_LOCK_STATUS     LOCK_STATUS;            /**< \brief 1C, IPC lock status*/
} Ifx_PPCA_IPC_STRUCT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_IPC_INTR_STRUCT_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief INTR_STRUCT object */
typedef volatile struct _Ifx_PPCA_IPC_INTR_STRUCT
{
       __IO Ifx_PPCA_IPC_INTR_STRUCT_INTR       INTR;                   /**< \brief 0, Interrupt*/
       __IO Ifx_PPCA_IPC_INTR_STRUCT_INTR_SET   INTR_SET;               /**< \brief 4, Interrupt set*/
       __IO Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASK  INTR_MASK;              /**< \brief 8, Interrupt mask*/
       __I  Ifx_PPCA_IPC_INTR_STRUCT_INTR_MASKED INTR_MASKED;           /**< \brief C, Interrupt masked*/
       __I  Ifx_UReg_8Bit                       reserved_10[16];        /**< \brief 10, */
} Ifx_PPCA_IPC_INTR_STRUCT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_IPC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief IPC object */
typedef volatile struct _Ifx_PPCA_IPC
{
       __IO Ifx_PPCA_IPC_STRUCT                 STRUCT[16];             /**< \brief 0, IPC structure*/
       __I  Ifx_UReg_8Bit                       reserved_200[3584];     /**< \brief 200, */
       __IO Ifx_PPCA_IPC_INTR_STRUCT            INTR_STRUCT[16];        /**< \brief 1000, IPC interrupt structure*/
       __I  Ifx_UReg_8Bit                       reserved_1200[60928];   /**< \brief 1200, */
} Ifx_PPCA_IPC;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CPUSS_CNFG_MXCM33_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief PPCA_MXCM33 object */
typedef volatile struct _Ifx_PPCA_CPUSS_CNFG_MXCM33
{
       __IO Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CTL CM33_CTL;               /**< \brief 0, Control*/
       __IO Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_CMD CM33_CMD;               /**< \brief 4, Command*/
       __I  Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_STATUS CM33_STATUS;         /**< \brief 8, Status*/
       __I  Ifx_UReg_8Bit                       reserved_C[116];        /**< \brief C, */
       __IO Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NMI_CTL CM33_NMI_CTL[4];    /**< \brief 80, CM33 NMI control*/
       __I  Ifx_UReg_8Bit                       reserved_90[48];        /**< \brief 90, */
       __IO Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_EVENT_CTL CM33_EVENT_CTL;   /**< \brief C0, CM33 event control*/
       __I  Ifx_UReg_8Bit                       reserved_C4[3904];      /**< \brief C4, */
       __IO Ifx_PPCA_CPUSS_CNFG_MXCM33_CM33_NS_VECTOR_TABLE_BASE CM33_NS_VECTOR_TABLE_BASE; /**< \brief 1004, CM33 non-secure vector table base*/
       __I  Ifx_UReg_8Bit                       reserved_1008[61432];   /**< \brief 1008, */
} Ifx_PPCA_CPUSS_CNFG_MXCM33;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CPUSS_CNFG_RAMC_MPC_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief MPC object */
typedef volatile struct _Ifx_PPCA_CPUSS_CNFG_RAMC_MPC
{
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CFG    CFG;                    /**< \brief 0, Config register with error response, RegionID PPC_MPC_MAIN is the security owner PC. The error response configuration is located in CFG.RESPONSE, only one such configuration exists applying to all protection contexts in the system.*/
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_CTRL   CTRL;                   /**< \brief 100, Control register with lock bit and auto-increment only (Separate CTRL for each PC depends on access_pc)*/
       __I  Ifx_UReg_8Bit                       reserved_104[4];        /**< \brief 104, */
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_CFG BLK_CFG;               /**< \brief 108, Block size & initialization in progress*/
       __I  Ifx_UReg_8Bit                       reserved_10C[4];        /**< \brief 10C, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_BLK_LUT BLK_LUT;               /**< \brief 110, NS status for 32 blocks at BLK_IDX with PC=<access_pc>*/
       __I  Ifx_UReg_8Bit                       reserved_114[236];      /**< \brief 114, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_CTRL ROT_CTRL;             /**< \brief 200, Control register with lock bit and auto-increment only*/
       __I  Ifx_UReg_8Bit                       reserved_204[4];        /**< \brief 204, */
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_MAX ROT_BLK_MAX;       /**< \brief 208, Max value of block-based index register for ROT*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_CFG ROT_BLK_CFG;       /**< \brief 20C, Same as BLK_CFG*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_IDX ROT_BLK_IDX;       /**< \brief 210, Index of 8-block group accessed through ROT_BLK_LUT_**/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_PC ROT_BLK_PC;         /**< \brief 214, Protection context of 8-block group accesses through ROT_BLK_LUT*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_MPC_ROT_BLK_LUT ROT_BLK_LUT;       /**< \brief 218, (R,W,NS) bits for 8 blocks at ROT_BLK_IDX for PC=ROT_BKL_PC*/
       __I  Ifx_UReg_8Bit                       reserved_21C[3556];     /**< \brief 21C, */
} Ifx_PPCA_CPUSS_CNFG_RAMC_MPC;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CPUSS_CNFG_RAMC_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief RAMC object */
typedef volatile struct _Ifx_PPCA_CPUSS_CNFG_RAMC
{
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_CTL        CTL;                    /**< \brief 0, Control*/
       __I  Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, */
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_STATUS     STATUS;                 /**< \brief 8, Status*/
       __I  Ifx_UReg_8Bit                       reserved_C[20];         /**< \brief C, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_CTL    ECC_CTL;                /**< \brief 20, ECC control*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS0 ECC_STATUS0;           /**< \brief 24, ECC status 0*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_STATUS1 ECC_STATUS1;           /**< \brief 28, ECC status 1*/
       __I  Ifx_UReg_8Bit                       reserved_2C[216];       /**< \brief 2C, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_ECC_MATCH  ECC_MATCH;              /**< \brief 104, ECC match*/
       __I  Ifx_UReg_8Bit                       reserved_108[248];      /**< \brief 108, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL PWR_MACRO_CTL;       /**< \brief 200, SRAM power partition power control*/
       __I  Ifx_UReg_8Bit                       reserved_204[60];       /**< \brief 204, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_MACRO_CTL_LOCK PWR_MACRO_CTL_LOCK; /**< \brief 240, SRAM power partition power control Lock*/
       __I  Ifx_UReg_8Bit                       reserved_244[60];       /**< \brief 244, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PWR_DELAY_CTL PWR_DELAY_CTL;       /**< \brief 280, SRAM power switch power up & sequence delay*/
       __I  Ifx_UReg_8Bit                       reserved_284[15740];    /**< \brief 284, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_MPC        MPC[1];                 /**< \brief 4000, MPC Memory Protection Controller registers*/
       __I  Ifx_UReg_8Bit                       reserved_5000[45056];   /**< \brief 5000, */
} Ifx_PPCA_CPUSS_CNFG_RAMC;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CPUSS_CNFG_RAMC_PPU_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief RAMC_PPU object */
typedef volatile struct _Ifx_PPCA_CPUSS_CNFG_RAMC_PPU
{
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWPR   PWPR;                   /**< \brief 0, Power Policy Register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PMER   PMER;                   /**< \brief 4, Power Mode Emulation Register*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWSR   PWSR;                   /**< \brief 8, Power Status Register*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DISR   DISR;                   /**< \brief 10, Device Interface Input Current Status Register*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MISR   MISR;                   /**< \brief 14, Miscellaneous Input Current Status Register*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_STSR   STSR;                   /**< \brief 18, Stored Status Register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_UNLK   UNLK;                   /**< \brief 1C, Unlock register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PWCR   PWCR;                   /**< \brief 20, Power Configuration Register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PTCR   PTCR;                   /**< \brief 24, Power Mode Transition Configuration Register*/
       __I  Ifx_UReg_8Bit                       reserved_28[8];         /**< \brief 28, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IMR    IMR;                    /**< \brief 30, Interrupt Mask Register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIMR   AIMR;                   /**< \brief 34, Additional Interrupt Mask Register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ISR    ISR;                    /**< \brief 38, Interrupt Status Register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AISR   AISR;                   /**< \brief 3C, Additional Interrupt Status Register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IESR   IESR;                   /**< \brief 40, Input Edge Sensitivity Register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_OPSR   OPSR;                   /**< \brief 44, Operating Mode Active Edge Sensitivity Register*/
       __I  Ifx_UReg_8Bit                       reserved_48[8];         /**< \brief 48, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FUNRR  FUNRR;                  /**< \brief 50, Functional Retention RAM Configuration Register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_FULRR  FULRR;                  /**< \brief 54, Full Retention RAM Configuration Register*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_MEMRR  MEMRR;                  /**< \brief 58, Memory Retention RAM Configuration Register*/
       __I  Ifx_UReg_8Bit                       reserved_5C[260];       /**< \brief 5C, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR0  EDTR0;                  /**< \brief 160, Power Mode Entry Delay Register 0*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_EDTR1  EDTR1;                  /**< \brief 164, Power Mode Entry Delay Register 1*/
       __I  Ifx_UReg_8Bit                       reserved_168[8];        /**< \brief 168, */
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR0  DCDR0;                  /**< \brief 170, Device Control Delay Configuration Register 0*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_DCDR1  DCDR1;                  /**< \brief 174, Device Control Delay Configuration Register 1*/
       __I  Ifx_UReg_8Bit                       reserved_178[3640];     /**< \brief 178, */
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR0   IDR0;                   /**< \brief FB0, PPU Identification Register 0*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IDR1   IDR1;                   /**< \brief FB4, PPU Identification Register 1*/
       __I  Ifx_UReg_8Bit                       reserved_FB8[16];       /**< \brief FB8, */
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_IIDR   IIDR;                   /**< \brief FC8, Implementation Identification Register*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_AIDR   AIDR;                   /**< \brief FCC, Architecture Identification Register*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID4   PID4;                   /**< \brief FD0, Implementation Defined Identification Register (PID4)*/
       __I  Ifx_UReg_8Bit                       reserved_FD4[12];       /**< \brief FD4, */
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID0   PID0;                   /**< \brief FE0, Implementation Defined Identification Register (PID0)*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID1   PID1;                   /**< \brief FE4, Implementation Defined Identification Register (PID1)*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID2   PID2;                   /**< \brief FE8, Implementation Defined Identification Register (PID2)*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_PID3   PID3;                   /**< \brief FEC, Implementation Defined Identification Register (PID3)*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID0    ID0;                    /**< \brief FF0, Implementation Defined Identification Register (ID0)*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID1    ID1;                    /**< \brief FF4, Implementation Defined Identification Register (ID1)*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID2    ID2;                    /**< \brief FF8, Implementation Defined Identification Register (ID2)*/
       __I  Ifx_PPCA_CPUSS_CNFG_RAMC_PPU_ID3    ID3;                    /**< \brief FFC, Implementation Defined Identification Register (ID3)*/
} Ifx_PPCA_CPUSS_CNFG_RAMC_PPU;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CPUSS_CNFG_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CPUSS_CNFG object */
typedef volatile struct _Ifx_PPCA_CPUSS_CNFG
{
       __IO Ifx_PPCA_CPUSS_CNFG_MXCM33          PPCA_MXCM33[2];         /**< \brief 0, MXCM33-0/1*/
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC            RAMC[5];                /**< \brief 20000, RAMC0/1/2*/
       __IO Ifx_PPCA_CPUSS_CNFG_AP_CTL          AP_CTL;                 /**< \brief 70000, Access port control*/
       __IO Ifx_PPCA_CPUSS_CNFG_MP_CTL          MP_CTL;                 /**< \brief 70004, Master Port Access control*/
       __I  Ifx_UReg_8Bit                       reserved_70008[32760];  /**< \brief 70008, */
       __IO Ifx_PPCA_CPUSS_CNFG_RAMC_PPU        RAMC_PPU[5];            /**< \brief 78000, Power Policy Unit Registers for System RAM*/
       __I  Ifx_UReg_8Bit                       reserved_7D000[12288];  /**< \brief 7D000, */
} Ifx_PPCA_CPUSS_CNFG;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_TCPWM_GRP_CNT_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief CNT object */
typedef volatile struct _Ifx_PPCA_TCPWM_GRP_CNT
{
       __IO Ifx_PPCA_TCPWM_GRP_CNT_CTRL         CTRL;                   /**< \brief 0, Counter control register*/
       __I  Ifx_PPCA_TCPWM_GRP_CNT_STATUS       STATUS;                 /**< \brief 4, Counter status register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_COUNTER      COUNTER;                /**< \brief 8, Counter count register*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
       __IO Ifx_PPCA_TCPWM_GRP_CNT_CC0          CC0;                    /**< \brief 10, Counter compare/capture 0 register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_CC0_BUFF     CC0_BUFF;               /**< \brief 14, Counter buffered compare/capture 0 register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_CC1          CC1;                    /**< \brief 18, Counter compare/capture 1 register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_CC1_BUFF     CC1_BUFF;               /**< \brief 1C, Counter buffered compare/capture 1 register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_PERIOD       PERIOD;                 /**< \brief 20, Counter period register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_PERIOD_BUFF  PERIOD_BUFF;            /**< \brief 24, Counter buffered period register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL     LINE_SEL;               /**< \brief 28, Counter line selection register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_LINE_SEL_BUFF LINE_SEL_BUFF;         /**< \brief 2C, Counter buffered line selection register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_DT           DT;                     /**< \brief 30, Counter PWM dead time register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_DT_BUFF      DT_BUFF;                /**< \brief 34, Counter buffered PWM dead time register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_PS           PS;                     /**< \brief 38, Counter prescalar register*/
       __I  Ifx_UReg_8Bit                       reserved_3C[4];         /**< \brief 3C, */
       __IO Ifx_PPCA_TCPWM_GRP_CNT_TR_CMD       TR_CMD;                 /**< \brief 40, Counter trigger command register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL0   TR_IN_SEL0;             /**< \brief 44, Counter input trigger selection register 0*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_SEL1   TR_IN_SEL1;             /**< \brief 48, Counter input trigger selection register 1*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_TR_IN_EDGE_SEL TR_IN_EDGE_SEL;       /**< \brief 4C, Counter input trigger edge selection register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_TR_PWM_CTRL  TR_PWM_CTRL;            /**< \brief 50, Counter trigger PWM control register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_TR_OUT_SEL   TR_OUT_SEL;             /**< \brief 54, Counter output trigger selection register*/
       __I  Ifx_UReg_8Bit                       reserved_58[24];        /**< \brief 58, */
       __IO Ifx_PPCA_TCPWM_GRP_CNT_INTR         INTR;                   /**< \brief 70, Interrupt request register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_INTR_SET     INTR_SET;               /**< \brief 74, Interrupt set request register*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASK    INTR_MASK;              /**< \brief 78, Interrupt mask register*/
       __I  Ifx_PPCA_TCPWM_GRP_CNT_INTR_MASKED  INTR_MASKED;            /**< \brief 7C, Interrupt masked request register*/
       __I  Ifx_UReg_8Bit                       reserved_80[36];        /**< \brief 80, */
       __IO Ifx_PPCA_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS TR_ONE_SYNC_BYPASS; /**< \brief A4, Sync bypass register for one to one trigger*/
       __I  Ifx_UReg_8Bit                       reserved_A8[8];         /**< \brief A8, */
       __IO Ifx_PPCA_TCPWM_GRP_CNT_HRPWM_CTRL   HRPWM_CTRL;             /**< \brief B0, Counter control register for HRPWM feature*/
       __IO Ifx_PPCA_TCPWM_GRP_CNT_CTRL2        CTRL2;                  /**< \brief B4, Counter control register 2*/
       __I  Ifx_UReg_8Bit                       reserved_B8[72];        /**< \brief B8, */
} Ifx_PPCA_TCPWM_GRP_CNT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_TCPWM_GRP_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief GRP object */
typedef volatile struct _Ifx_PPCA_TCPWM_GRP
{
       __IO Ifx_PPCA_TCPWM_GRP_CNT              CNT[256];               /**< \brief 0, */
} Ifx_PPCA_TCPWM_GRP;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_TCPWM_TR_ALL_GF_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief TR_ALL_GF object */
typedef volatile struct _Ifx_PPCA_TCPWM_TR_ALL_GF
{
       __I  Ifx_UReg_8Bit                       reserved_0[1024];       /**< \brief 0, */
} Ifx_PPCA_TCPWM_TR_ALL_GF;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_TCPWM_TR_ALL_SYNC_BYPASS_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief TR_ALL_SYNC_BYPASS object */
typedef volatile struct _Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS
{
       __IO Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS TR_ALL_SYNC_BYPASS[8]; /**< \brief 0, Trigger Sync bypass for group trigger*/
       __I  Ifx_UReg_8Bit                       reserved_20[32];        /**< \brief 20, */
} Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_TCPWM_MOTIF_GRP_MOTIF_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief MOTIF object */
typedef volatile struct _Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF
{
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PCONF PCONF;                 /**< \brief 0, Global control register*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PSUS PSUS;                   /**< \brief 4, Suspend Configuration*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUNS PRUNS;                 /**< \brief 8, MOTIF run bit set*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
       __I  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PRUN PRUN;                   /**< \brief 10, MOTIF run bit status*/
       __I  Ifx_UReg_8Bit                       reserved_14[16];        /**< \brief 14, */
       __O  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HIST HIST;                   /**< \brief 24, Hall Inputs Sample Trigger*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HMEC HMEC;                   /**< \brief 28, Hall Mode Extra Config*/
       __I  Ifx_UReg_8Bit                       reserved_2C[4];         /**< \brief 2C, */
       __I  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALP HALP;                   /**< \brief 30, Hall Current and Expected patterns*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HALPS HALPS;                 /**< \brief 34, Hall Current and Expected shadow patterns*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_HOSC HOSC;                   /**< \brief 38, Hall Sensor Output Config*/
       __I  Ifx_UReg_8Bit                       reserved_3C[4];         /**< \brief 3C, */
       __I  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCM  MCM;                    /**< \brief 40, Multi-Channel Mode Pattern*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM MCSM;                   /**< \brief 44, Multi-Channel Mode shadow Pattern LUT0*/
       __O  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMS MCMS;                   /**< \brief 48, Multi-Channel Mode Control set*/
       __O  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMC MCMC;                   /**< \brief 4C, Multi-Channel Mode Control clear*/
       __I  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMF MCMF;                   /**< \brief 50, Multi-Channel Mode flag status*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCPF MCPF;                   /**< \brief 54, Multi-Channel Pattern Fault*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MOSC MOSC;                   /**< \brief 58, Multi-Channel Output Config*/
       __I  Ifx_UReg_8Bit                       reserved_5C[4];         /**< \brief 5C, */
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QDC  QDC;                    /**< \brief 60, Quadrature Decoder Configuration*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_QOSC QOSC;                   /**< \brief 64, Quadrature Output Config*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCMEC MCMEC;                 /**< \brief 68, Multi-Channel Extra Config*/
       __I  Ifx_UReg_8Bit                       reserved_6C[4];         /**< \brief 6C, */
       __I  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLG PFLG;                   /**< \brief 70, MOTIF interrupt status*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PFLGE PFLGE;                 /**< \brief 74, MOTIF interrupt enable*/
       __O  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SPFLG SPFLG;                 /**< \brief 78, Interrupt set register*/
       __O  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_RPFLG RPFLG;                 /**< \brief 7C, Interrupt clear register*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM1 MCSM1;                 /**< \brief 80, Multi-Channel Mode shadow pattern LUT1*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM2 MCSM2;                 /**< \brief 84, Multi-Channel Mode shadow pattern LUT2*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM3 MCSM3;                 /**< \brief 88, Multi-Channel Mode shadow pattern LUT3*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM4 MCSM4;                 /**< \brief 8C, Multi-Channel Mode shadow pattern LUT4*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_MCSM5 MCSM5;                 /**< \brief 90, Multi-Channel Mode shadow pattern LUT5*/
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_CLUT CLUT;                   /**< \brief 94, Hall Mode LUT config*/
       __I  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_SLUT SLUT;                   /**< \brief 98, Hall Mode LUT status*/
       __I  Ifx_UReg_8Bit                       reserved_9C[100];       /**< \brief 9C, */
       __I  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PDBG PDBG;                   /**< \brief 100, MOTIF Debug Register*/
       __I  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP0S PLP0S;                 /**< \brief 104, MOTIF Low Pass 0 Status*/
       __I  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP1S PLP1S;                 /**< \brief 108, MOTIF Low Pass 1 Status*/
       __I  Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF_PLP2S PLP2S;                 /**< \brief 10C, MOTIF Low Pass 2 Status*/
       __I  Ifx_UReg_8Bit                       reserved_110[240];      /**< \brief 110, */
} Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_TCPWM_MOTIF_GRP_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief MOTIF_GRP object */
typedef volatile struct _Ifx_PPCA_TCPWM_MOTIF_GRP
{
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP_MOTIF      MOTIF[32];              /**< \brief 0, MOTIF Module*/
} Ifx_PPCA_TCPWM_MOTIF_GRP;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_TCPWM_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TCPWM object */
typedef volatile struct _Ifx_PPCA_TCPWM
{
       __IO Ifx_PPCA_TCPWM_GRP                  GRP[8];                 /**< \brief 0, Group of counters*/
       __IO Ifx_PPCA_TCPWM_TR_ALL_GF            TR_ALL_GF;              /**< \brief 80000, Glitch filter module for group trigger*/
       __I  Ifx_UReg_8Bit                       reserved_80400[64512];  /**< \brief 80400, */
       __IO Ifx_PPCA_TCPWM_TR_ALL_SYNC_BYPASS   TR_ALL_SYNC_BYPASS;     /**< \brief 90000, Glitch filter module for group trigger*/
       __I  Ifx_UReg_8Bit                       reserved_90040[65472];  /**< \brief 90040, */
       __IO Ifx_PPCA_TCPWM_MOTIF_GRP            MOTIF_GRP[8];           /**< \brief A0000, Trigger Sync bypass for group trigger*/
       __I  Ifx_UReg_8Bit                       reserved_C0000[262144]; /**< \brief C0000, */
} Ifx_PPCA_TCPWM;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief HWFILT3P3Z object */
typedef volatile struct _Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z
{
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CTRL CTRL;              /**< \brief 0, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN0 DATA_IN0;      /**< \brief 4, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_IN1 DATA_IN1;      /**< \brief 8, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CNFG CNFG;              /**< \brief C, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX0 CX0;                /**< \brief 10, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX1 CX1;                /**< \brief 14, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX2 CX2;                /**< \brief 18, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CX3 CX3;                /**< \brief 1C, */
       __I  Ifx_UReg_8Bit                       reserved_20[4];         /**< \brief 20, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY1 CY1;                /**< \brief 24, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY2 CY2;                /**< \brief 28, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_CY3 CY3;                /**< \brief 2C, */
       __I  Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_DATA_OUT DATA_OUT;      /**< \brief 30, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_OFFSET OFFSET;          /**< \brief 34, */
       __I  Ifx_UReg_8Bit                       reserved_38[8];         /**< \brief 38, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMAX LIMMAX;          /**< \brief 40, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_LIMMIN LIMMIN;          /**< \brief 44, */
       __I  Ifx_UReg_8Bit                       reserved_48[24];        /**< \brief 48, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECX SCALECX;        /**< \brief 60, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_SCALECY SCALECY;        /**< \brief 64, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GIN GIN;                /**< \brief 68, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_GOUT GOUT;              /**< \brief 6C, */
       __I  Ifx_UReg_8Bit                       reserved_70[16];        /**< \brief 70, */
       __I  Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z_VERSION VERSION;        /**< \brief 80, */
       __I  Ifx_UReg_8Bit                       reserved_84[124];       /**< \brief 84, */
} Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_HWFILT3P3Z_SS_0_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief HWFILT3P3Z_SS_0 object */
typedef volatile struct _Ifx_PPCA_HWFILT3P3Z_SS_0
{
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_CTRL       CTRL;                   /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0_HWFILT3P3Z HWFILT3P3Z[4];          /**< \brief 100, */
       __I  Ifx_UReg_8Bit                       reserved_500[2816];     /**< \brief 500, */
} Ifx_PPCA_HWFILT3P3Z_SS_0;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief HWFILT3P3Z object */
typedef volatile struct _Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z
{
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CTRL CTRL;              /**< \brief 0, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN0 DATA_IN0;      /**< \brief 4, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_IN1 DATA_IN1;      /**< \brief 8, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CNFG CNFG;              /**< \brief C, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX0 CX0;                /**< \brief 10, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX1 CX1;                /**< \brief 14, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX2 CX2;                /**< \brief 18, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CX3 CX3;                /**< \brief 1C, */
       __I  Ifx_UReg_8Bit                       reserved_20[4];         /**< \brief 20, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY1 CY1;                /**< \brief 24, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY2 CY2;                /**< \brief 28, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_CY3 CY3;                /**< \brief 2C, */
       __I  Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_DATA_OUT DATA_OUT;      /**< \brief 30, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_OFFSET OFFSET;          /**< \brief 34, */
       __I  Ifx_UReg_8Bit                       reserved_38[8];         /**< \brief 38, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMAX LIMMAX;          /**< \brief 40, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_LIMMIN LIMMIN;          /**< \brief 44, */
       __I  Ifx_UReg_8Bit                       reserved_48[24];        /**< \brief 48, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECX SCALECX;        /**< \brief 60, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_SCALECY SCALECY;        /**< \brief 64, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GIN GIN;                /**< \brief 68, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_GOUT GOUT;              /**< \brief 6C, */
       __I  Ifx_UReg_8Bit                       reserved_70[16];        /**< \brief 70, */
       __I  Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z_VERSION VERSION;        /**< \brief 80, */
       __I  Ifx_UReg_8Bit                       reserved_84[124];       /**< \brief 84, */
} Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_HWFILT3P3Z_SS_1_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief HWFILT3P3Z_SS_1 object */
typedef volatile struct _Ifx_PPCA_HWFILT3P3Z_SS_1
{
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_CTRL       CTRL;                   /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1_HWFILT3P3Z HWFILT3P3Z[2];          /**< \brief 100, */
       __I  Ifx_UReg_8Bit                       reserved_300[3328];     /**< \brief 300, */
} Ifx_PPCA_HWFILT3P3Z_SS_1;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ADCM_ADCM_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief ADCM object */
typedef volatile struct _Ifx_PPCA_ADCM_ADCM
{
       __I  Ifx_PPCA_ADCM_ADCM_ADC_DATA         ADC_DATA[48];           /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_C0[64];        /**< \brief C0, */
} Ifx_PPCA_ADCM_ADCM;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ADCM_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief ADCM object */
typedef volatile struct _Ifx_PPCA_ADCM
{
       __IO Ifx_PPCA_ADCM_ADCM                  ADCM;                   /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_100[3840];     /**< \brief 100, */
} Ifx_PPCA_ADCM;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CLB_DICO_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief DICO object */
typedef volatile struct _Ifx_PPCA_CLB_DICO
{
       __IO Ifx_PPCA_CLB_DICO_CTRL              CTRL;                   /**< \brief 0, */
       __IO Ifx_PPCA_CLB_DICO_CNFG              CNFG;                   /**< \brief 4, */
       __IO Ifx_PPCA_CLB_DICO_EVENT             EVENT;                  /**< \brief 8, */
       __IO Ifx_PPCA_CLB_DICO_SAFE              SAFE;                   /**< \brief C, */
       __IO Ifx_PPCA_CLB_DICO_IMAXL             IMAXL;                  /**< \brief 10, */
       __IO Ifx_PPCA_CLB_DICO_IMINL             IMINL;                  /**< \brief 14, */
       __IO Ifx_PPCA_CLB_DICO_VAC_POL           VAC_POL;                /**< \brief 18, */
       __IO Ifx_PPCA_CLB_DICO_OBS_CTRL          OBS_CTRL;               /**< \brief 1C, */
       __I  Ifx_PPCA_CLB_DICO_PERIOD_MEAS       PERIOD_MEAS[3];         /**< \brief 20, */
       __I  Ifx_UReg_8Bit                       reserved_2C[4];         /**< \brief 2C, */
       __I  Ifx_PPCA_CLB_DICO_IEST_IND_ACCU     IEST_IND_ACCU[3];       /**< \brief 30, */
       __I  Ifx_UReg_8Bit                       reserved_3C[4];         /**< \brief 3C, */
       __I  Ifx_PPCA_CLB_DICO_IL_ACCU           IL_ACCU[3];             /**< \brief 40, */
       __I  Ifx_UReg_8Bit                       reserved_4C[4];         /**< \brief 4C, */
       __IO Ifx_PPCA_CLB_DICO_IEST_CORR         IEST_CORR[3];           /**< \brief 50, */
       __I  Ifx_UReg_8Bit                       reserved_5C[4];         /**< \brief 5C, */
       __I  Ifx_PPCA_CLB_DICO_PE_IMINL          PE_IMINL;               /**< \brief 60, IMINL for Up and Down Slope*/
       __I  Ifx_PPCA_CLB_DICO_PE_IMAXL          PE_IMAXL;               /**< \brief 64, IMAXL for Up and Down Slope*/
       __I  Ifx_PPCA_CLB_DICO_PE_UP_COUNT       PE_UP_COUNT;            /**< \brief 68, UP Count Register for Up and Down Slope*/
       __I  Ifx_PPCA_CLB_DICO_PE_DN_COUNT       PE_DN_COUNT;            /**< \brief 6C, DOWN Count Register for Up and Down Slope*/
       __IO Ifx_PPCA_CLB_DICO_PE_TPHD_1         PE_TPHD_1;              /**< \brief 70, TPHD Value (PCO_1) Register for PE*/
       __IO Ifx_PPCA_CLB_DICO_PE_TPHD_2         PE_TPHD_2;              /**< \brief 74, TPHD Value (PCO_2) Register for PE*/
       __I  Ifx_UReg_8Bit                       reserved_78[8];         /**< \brief 78, */
       __IO Ifx_PPCA_CLB_DICO_PS_TH             PS_TH;                  /**< \brief 80, Threshold Current multiplied by Inductance Register for PS*/
       __I  Ifx_UReg_8Bit                       reserved_84[12];        /**< \brief 84, */
       __I  Ifx_PPCA_CLB_DICO_PS_CC_INFO        PS_CC_INFO[2];          /**< \brief 90, IMINL/IMAXL Correction Information Register for PS*/
       __I  Ifx_UReg_8Bit                       reserved_98[8];         /**< \brief 98, */
       __IO Ifx_PPCA_CLB_DICO_PS_CC             PS_CC[2];               /**< \brief A0, Correction term of IMINL/IMAXL Register for PS*/
       __I  Ifx_UReg_8Bit                       reserved_A8[8];         /**< \brief A8, */
       __IO Ifx_PPCA_CLB_DICO_INTR              INTR;                   /**< \brief B0, Interrupt Request Register*/
       __IO Ifx_PPCA_CLB_DICO_INTR_SET          INTR_SET;               /**< \brief B4, Interrupt Set Request Register*/
       __IO Ifx_PPCA_CLB_DICO_INTR_MASK         INTR_MASK;              /**< \brief B8, Interrupt Mask Register*/
       __I  Ifx_PPCA_CLB_DICO_INTR_MASKED       INTR_MASKED;            /**< \brief BC, Interrupt Masked Register*/
       __I  Ifx_PPCA_CLB_DICO_PCO_CORR_IEST     PCO_CORR_IEST[3];       /**< \brief C0, */
       __I  Ifx_UReg_8Bit                       reserved_CC[4];         /**< \brief CC, */
       __IO Ifx_PPCA_CLB_DICO_STAT              STAT;                   /**< \brief D0, */
       __I  Ifx_UReg_8Bit                       reserved_D4[44];        /**< \brief D4, */
} Ifx_PPCA_CLB_DICO;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CLB_MACO_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief MACO object */
typedef volatile struct _Ifx_PPCA_CLB_MACO
{
       __IO Ifx_PPCA_CLB_MACO_CTRL              CTRL;                   /**< \brief 0, */
       __IO Ifx_PPCA_CLB_MACO_EVENT             EVENT;                  /**< \brief 4, */
       __I  Ifx_UReg_8Bit                       reserved_8[4];          /**< \brief 8, */
       __I  Ifx_PPCA_CLB_MACO_STAT              STAT;                   /**< \brief C, */
       __I  Ifx_UReg_8Bit                       reserved_10[16];        /**< \brief 10, */
       __IO Ifx_PPCA_CLB_MACO_SECT0_ROW         SECT0_ROW;              /**< \brief 20, */
       __IO Ifx_PPCA_CLB_MACO_SECT1_ROW         SECT1_ROW;              /**< \brief 24, */
       __IO Ifx_PPCA_CLB_MACO_SECT2_ROW         SECT2_ROW;              /**< \brief 28, */
       __I  Ifx_UReg_8Bit                       reserved_2C[4];         /**< \brief 2C, */
       __IO Ifx_PPCA_CLB_MACO_INTR              INTR;                   /**< \brief 30, Interrupt Request Register*/
       __IO Ifx_PPCA_CLB_MACO_INTR_SET          INTR_SET;               /**< \brief 34, Interrupt Set Request Register*/
       __IO Ifx_PPCA_CLB_MACO_INTR_MASK         INTR_MASK;              /**< \brief 38, Interrupt Mask Register*/
       __I  Ifx_PPCA_CLB_MACO_INTR_MASKED       INTR_MASKED;            /**< \brief 3C, Interrupt Masked Register*/
       __I  Ifx_UReg_8Bit                       reserved_40[192];       /**< \brief 40, */
       __IO Ifx_PPCA_CLB_MACO_SECT0_PATTERN     SECT0_PATTERN[20];      /**< \brief 100, */
       __I  Ifx_UReg_8Bit                       reserved_150[172];      /**< \brief 150, */
       __IO Ifx_PPCA_CLB_MACO_SECT0_SAFE        SECT0_SAFE;             /**< \brief 1FC, */
       __IO Ifx_PPCA_CLB_MACO_SECT1_PATTERN     SECT1_PATTERN[20];      /**< \brief 200, */
       __I  Ifx_UReg_8Bit                       reserved_250[172];      /**< \brief 250, */
       __IO Ifx_PPCA_CLB_MACO_SECT1_SAFE        SECT1_SAFE;             /**< \brief 2FC, */
       __IO Ifx_PPCA_CLB_MACO_SECT2_PATTERN     SECT2_PATTERN[20];      /**< \brief 300, */
       __I  Ifx_UReg_8Bit                       reserved_350[172];      /**< \brief 350, */
       __IO Ifx_PPCA_CLB_MACO_SECT2_SAFE        SECT2_SAFE;             /**< \brief 3FC, */
} Ifx_PPCA_CLB_MACO;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_CLB_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CLB object */
typedef volatile struct _Ifx_PPCA_CLB
{
       __IO Ifx_PPCA_CLB_CTRL                   CTRL;                   /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_4[8188];       /**< \brief 4, */
       __IO Ifx_PPCA_CLB_DICO                   DICO;                   /**< \brief 2000, */
       __I  Ifx_UReg_8Bit                       reserved_2100[7936];    /**< \brief 2100, */
       __IO Ifx_PPCA_CLB_MACO                   MACO;                   /**< \brief 4000, */
       __I  Ifx_UReg_8Bit                       reserved_4400[15360];   /**< \brief 4400, */
} Ifx_PPCA_CLB;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_MXCORDIC_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MXCORDIC object */
typedef volatile struct _Ifx_MXCORDIC
{
       __IO Ifx_MXCORDIC_CTL                    CTL;                    /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, */
       __I  Ifx_MXCORDIC_ID                     ID;                     /**< \brief 8, Module Identification Register*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
       __IO Ifx_MXCORDIC_INTR                   INTR;                   /**< \brief 10, Interrupt Cause Register*/
       __IO Ifx_MXCORDIC_INTR_SET               INTR_SET;               /**< \brief 14, Interrupt Set Register*/
       __IO Ifx_MXCORDIC_INTR_MASK              INTR_MASK;              /**< \brief 18, Interrupt Mask Register*/
       __I  Ifx_MXCORDIC_INTR_MASKED            INTR_MASKED;            /**< \brief 1C, Interrupt Masked Register*/
       __I  Ifx_UReg_8Bit                       reserved_20[32];        /**< \brief 20, */
       __IO Ifx_MXCORDIC_KEEP                   KEEP;                   /**< \brief 40, CORDIC Keep Register*/
       __IO Ifx_MXCORDIC_CON                    CON;                    /**< \brief 44, CORDIC Control Register*/
       __IO Ifx_MXCORDIC_CORDX                  CORDX;                  /**< \brief 48, CORDIC X Data Register*/
       __IO Ifx_MXCORDIC_CORDY                  CORDY;                  /**< \brief 4C, CORDIC Y Data Register*/
       __IO Ifx_MXCORDIC_CORDZ                  CORDZ;                  /**< \brief 50, CORDIC Z Data Register*/
       __I  Ifx_MXCORDIC_CORRX                  CORRX;                  /**< \brief 54, CORDIC X Result Register*/
       __I  Ifx_MXCORDIC_CORRY                  CORRY;                  /**< \brief 58, CORDIC Y Result Register*/
       __I  Ifx_MXCORDIC_CORRZ                  CORRZ;                  /**< \brief 5C, CORDIC Z Result Register*/
       __I  Ifx_MXCORDIC_STAT                   STAT;                   /**< \brief 60, CORDIC Status Register*/
       __IO Ifx_MXCORDIC_START_CMD              START_CMD;              /**< \brief 64, CORDIC Start Command Register*/
       __I  Ifx_UReg_8Bit                       reserved_68[65432];     /**< \brief 68, */
} Ifx_MXCORDIC;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_struct
 * \{  */
/******************************************************************************/
/** \name Object L4
 * \{  */
/** \brief ADC object */
typedef volatile struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC
{
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CTL ADC_CTL;          /**< \brief 0, ADC Control Register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNFG ADC_CNFG;        /**< \brief 4, ADC Configuration Register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_ALT_AUX_CNFG ADC_AUX_ALT_AUX_CNFG; /**< \brief 8, ADC Aux and ALT Aux Configuration Register*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CNV_CNFG ADC_CNV_CNFG; /**< \brief 10, ADC Conversion Configuration Register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SAMPLING_MASK ADC_SAMPLING_MASK; /**< \brief 14, ADC Sampling Mask register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_TRIGGER ADC_TRIGGER;  /**< \brief 18, ADC Channel Trigger register*/
       __I  Ifx_UReg_8Bit                       reserved_1C[4];         /**< \brief 1C, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG0 ADC_CH_CNFG0; /**< \brief 20, ADC Channels group 0 to be converted Configurations registers*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CH_CNFG1 ADC_CH_CNFG1; /**< \brief 24, ADC Channels group 1 to be converted Configurations registers*/
       __I  Ifx_UReg_8Bit                       reserved_28[8];         /**< \brief 28, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG0 ADC_AUX_CH_CNFG0; /**< \brief 30, ADC Auxiliary Channels to be converted configuration registers*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_CH_CNFG1 ADC_AUX_CH_CNFG1; /**< \brief 34, ADC Auxiliary Channels to be converted configuration registers*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_CH_CNFG ADC_ALT_AUX_CH_CNFG; /**< \brief 38, ADC AUX Alternate Channel to be converted configuration register*/
       __I  Ifx_UReg_8Bit                       reserved_3C[4];         /**< \brief 3C, */
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_DATA ADC_DATA[16];    /**< \brief 40, ADC Converted Data Channels*/
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_AUX_DATA ADC_AUX_DATA[16]; /**< \brief 80, ADC Auxiliary Data Channels*/
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_ALT_AUX_DATA ADC_ALT_AUX_DATA[8]; /**< \brief C0, ADC Alternate Auxiliary Data Channels*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR ADC_INTR;        /**< \brief E0, Interrupt request register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_SET ADC_INTR_SET; /**< \brief E4, Interrupt set request register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASK ADC_INTR_MASK; /**< \brief E8, Interrupt mask register*/
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_INTR_MASKED ADC_INTR_MASKED; /**< \brief EC, Interrupt masked request register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_SIGN_UNSIGN_CNFG ADC_SIGN_UNSIGN_CNFG; /**< \brief F0, ADC Channel Signed and Unsigned configuration Register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_SIGN_UNSIGN_CNFG AUX_SIGN_UNSIGN_CNFG; /**< \brief F4, AUX Channel Signed and Unsigned configuration Register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_AUX_ALT_SIGN_UNSIGN_CNFG AUX_ALT_SIGN_UNSIGN_CNFG; /**< \brief F8, AUX Alternate Channel Signed and Unsigned configuration Register*/
       __I  Ifx_UReg_8Bit                       reserved_FC[4];         /**< \brief FC, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_STARTUPCTRL ADC_STARTUPCTRL; /**< \brief 100, SARADC STARTUP Control Register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC_ADC_CALCTRL ADC_CALCTRL;  /**< \brief 104, SARADC CALIBRATION Control Register*/
       __I  Ifx_UReg_8Bit                       reserved_108[248];      /**< \brief 108, */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_struct
 * \{  */
/******************************************************************************/
/** \name Object L4
 * \{  */
/** \brief AFE object */
typedef volatile struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE
{
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CTL AFE_CTL;          /**< \brief 0, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CNFG AFE_CNFG;        /**< \brief 4, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_1 AFE_CALGAINAFE_1; /**< \brief 8, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_2 AFE_CALGAINAFE_2; /**< \brief C, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_3 AFE_CALGAINAFE_3; /**< \brief 10, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALGAINAFE_4 AFE_CALGAINAFE_4; /**< \brief 14, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_1 AFE_CALOFFSETAFE_1; /**< \brief 18, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_2 AFE_CALOFFSETAFE_2; /**< \brief 1C, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_3 AFE_CALOFFSETAFE_3; /**< \brief 20, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE_AFE_CALOFFSETAFE_4 AFE_CALOFFSETAFE_4; /**< \brief 24, */
       __I  Ifx_UReg_8Bit                       reserved_28[216];       /**< \brief 28, */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_ADC_GRP_SLICE_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief SLICE object */
typedef volatile struct _Ifx_PPCA_ATOPSS_ADC_GRP_SLICE
{
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_ADC   ADC;                    /**< \brief 0, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE_AFE   AFE;                    /**< \brief 200, */
       __I  Ifx_UReg_8Bit                       reserved_300[256];      /**< \brief 300, */
} Ifx_PPCA_ATOPSS_ADC_GRP_SLICE;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_ADC_GRP_AFLT_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief AFLT object */
typedef volatile struct _Ifx_PPCA_ATOPSS_ADC_GRP_AFLT
{
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CTL AFLT_CTL;             /**< \brief 0, Low Pass Filter Control Register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AFLT_CNFG AFLT_CNFG;           /**< \brief 4, ADC Filter Module Configuration register*/
       __I  Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 8, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_ALFA LPF_ALFA;             /**< \brief 10, Low Pass Filter Bandwidth configuration Register*/
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LPF_DOUT LPF_DOUT;             /**< \brief 14, Low Pass Filter Data Output*/
       __I  Ifx_UReg_8Bit                       reserved_18[8];         /**< \brief 18, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_CNFG CICF_CNFG;           /**< \brief 20, CIC3 Configuration register*/
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_DOUT CICF_DOUT;           /**< \brief 24, CIC3 Filter Data Output*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_UB_TH CICF_UB_TH;         /**< \brief 28, CIC3 Upper bound threshold register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_CICF_LB_TH CICF_LB_TH;         /**< \brief 2C, CIC3 Lower bound threshold register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CTL AVGF_CTL;             /**< \brief 30, Average Filter CTL register*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_CNFG AVGF_CNFG;           /**< \brief 34, Average Filter Configuration Register (N,M,K)*/
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_AVGF_DOUT AVGF_DOUT;           /**< \brief 38, Average Filter Data Output*/
       __I  Ifx_UReg_8Bit                       reserved_3C[4];         /**< \brief 3C, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_CNFG LIF_CNFG;             /**< \brief 40, Linear Interpolator Filter Configuration register*/
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_LIF_DOUT LIF_DOUT;             /**< \brief 44, Linear Interpolator Filter Data Output*/
       __I  Ifx_UReg_8Bit                       reserved_48[8];         /**< \brief 48, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_CNFG MED_CNFG;             /**< \brief 50, Median Filter Configuration register*/
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_MED_DOUT MED_DOUT;             /**< \brief 54, Median Filter Data Output*/
       __I  Ifx_UReg_8Bit                       reserved_58[8];         /**< \brief 58, */
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_AFLT_ADC_MIN_MAX ADC_MIN_MAX;       /**< \brief 60, ADC Min Max detect value Register*/
       __I  Ifx_UReg_8Bit                       reserved_64[156];       /**< \brief 64, */
} Ifx_PPCA_ATOPSS_ADC_GRP_AFLT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_ADC_GRP_DCMP_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief DCMP object */
typedef volatile struct _Ifx_PPCA_ATOPSS_ADC_GRP_DCMP
{
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CTL DCMP_CTL;             /**< \brief 0, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_CNFG DCMP_CNFG;           /**< \brief 4, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TRIGGER DCMP_TRIGGER;     /**< \brief 8, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_TH DCMP_TH;               /**< \brief C, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_DCMP_DCMP_ACC_TH DCMP_ACC_TH;       /**< \brief 10, */
       __I  Ifx_UReg_8Bit                       reserved_14[236];       /**< \brief 14, */
} Ifx_PPCA_ATOPSS_ADC_GRP_DCMP;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_ADC_GRP_IDAC_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief IDAC object */
typedef volatile struct _Ifx_PPCA_ATOPSS_ADC_GRP_IDAC
{
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CTL IDAC_CTL;             /**< \brief 0, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_IDAC_IDAC_CNFG IDAC_CNFG;           /**< \brief 4, */
       __I  Ifx_UReg_8Bit                       reserved_8[248];        /**< \brief 8, */
} Ifx_PPCA_ATOPSS_ADC_GRP_IDAC;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_ADC_GRP_AREF_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief AREF object */
typedef volatile struct _Ifx_PPCA_ATOPSS_ADC_GRP_AREF
{
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_CTL AREF_CTL;             /**< \brief 0, AREF control*/
       __I  Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, */
       __I  Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VDDA_STATUS VDDA_STATUS;       /**< \brief 8, Analog Voltage Status*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_AREF_ANA_CTL AREF_ANA_CTL;     /**< \brief C, Analog Control*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM0 VREF_TRIM0;         /**< \brief 10, VREF Trim bits*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM1 VREF_TRIM1;         /**< \brief 14, VREF Trim bits*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM2 VREF_TRIM2;         /**< \brief 18, VREF Trim bits*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_VREF_TRIM3 VREF_TRIM3;         /**< \brief 1C, VREF Trim bits*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM0 IZTAT_TRIM0;       /**< \brief 20, IZTAT Trim bits*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IZTAT_TRIM1 IZTAT_TRIM1;       /**< \brief 24, IZTAT Trim bits*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM0 IPTAT_TRIM0;       /**< \brief 28, IPTAT Trim bits*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_IPTAT_TRIM1 IPTAT_TRIM1;       /**< \brief 2C, 0*/
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF_ICTAT_TRIM0 ICTAT_TRIM0;       /**< \brief 30, ICTAT Trim bits*/
       __I  Ifx_UReg_8Bit                       reserved_34[204];       /**< \brief 34, */
} Ifx_PPCA_ATOPSS_ADC_GRP_AREF;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_ADC_GRP_GPI_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief GPI object */
typedef volatile struct _Ifx_PPCA_ATOPSS_ADC_GRP_GPI
{
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_GPI_GPI_CTL GPI_CTL;                /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
} Ifx_PPCA_ATOPSS_ADC_GRP_GPI;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_ADC_GRP_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief ADC_GRP object */
typedef volatile struct _Ifx_PPCA_ATOPSS_ADC_GRP
{
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_SLICE       SLICE[2];               /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_800[2048];     /**< \brief 800, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AFLT        AFLT[4];                /**< \brief 1000, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_DCMP        DCMP[4];                /**< \brief 1400, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_IDAC        IDAC;                   /**< \brief 1800, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_AREF        AREF;                   /**< \brief 1900, */
       __IO Ifx_PPCA_ATOPSS_ADC_GRP_GPI         GPI;                    /**< \brief 1A00, */
       __I  Ifx_UReg_8Bit                       reserved_1B00[1280];    /**< \brief 1B00, */
} Ifx_PPCA_ATOPSS_ADC_GRP;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_struct
 * \{  */
/******************************************************************************/
/** \name Object L4
 * \{  */
/** \brief SLICE object */
typedef volatile struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE
{
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CTL DCSG_CTL;      /**< \brief 0, Analog Comparator Control Register*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_CNFG DCSG_CNFG;    /**< \brief 4, Analog Comparator Configuration Register*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE_DCSG_TH DCSG_TH;        /**< \brief 8, Analog Comparator Threshold configuration register*/
       __I  Ifx_UReg_8Bit                       reserved_C[244];        /**< \brief C, */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_struct
 * \{  */
/******************************************************************************/
/** \name Object L4
 * \{  */
/** \brief SLGEN object */
typedef volatile struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN
{
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CTL DCSG_SLGEN_CTL; /**< \brief 0, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_CNFG DCSG_SLGEN_CNFG; /**< \brief 4, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT DCSG_SLGEN_INIT; /**< \brief 8, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET DCSG_SLGEN_TARGET; /**< \brief C, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_INIT_BUF DCSG_SLGEN_INIT_BUF; /**< \brief 10, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_TARGET_BUF DCSG_SLGEN_TARGET_BUF; /**< \brief 14, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_STEP DCSG_SLGEN_STEP; /**< \brief 18, */
       __I  Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN_DCSG_SLGEN_MATCH DCSG_SLGEN_MATCH; /**< \brief 1C, */
       __I  Ifx_UReg_8Bit                       reserved_20[224];       /**< \brief 20, */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK_struct
 * \{  */
/******************************************************************************/
/** \name Object L4
 * \{  */
/** \brief BLANK object */
typedef volatile struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK
{
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK_DCSG_BLANK_CTL DCSG_BLANK_CTL; /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_4[252];        /**< \brief 4, */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_DCSG_GRP_DCSG_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief DCSG object */
typedef volatile struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG
{
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLICE SLICE[6];               /**< \brief 0, DCSG Slice Module*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_SLGEN SLGEN[6];               /**< \brief 600, DCSG Slice Module*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG_BLANK BLANK;                  /**< \brief C00, DCSG Slice Module*/
       __I  Ifx_UReg_8Bit                       reserved_D00[768];      /**< \brief D00, */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief DAC_R2R object */
typedef volatile struct _Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R
{
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CTL DAC_CTL;           /**< \brief 0, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_CNFG DAC_CNFG;         /**< \brief 4, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_DOUT DAC_DOUT;         /**< \brief 8, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG1 DAC_OFFSET_CNFG1; /**< \brief C, DAC Offset CNFG1 register*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG2 DAC_OFFSET_CNFG2; /**< \brief 10, DAC Gain CNFG4 register*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG3 DAC_OFFSET_CNFG3; /**< \brief 14, 0*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG4 DAC_OFFSET_CNFG4; /**< \brief 18, 0*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_OFFSET_CNFG5 DAC_OFFSET_CNFG5; /**< \brief 1C, 0*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG1 DAC_GAIN_CNFG1; /**< \brief 20, DAC Gain CNFG1 register*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG2 DAC_GAIN_CNFG2; /**< \brief 24, DAC Gain CNFG2 register*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG3 DAC_GAIN_CNFG3; /**< \brief 28, DAC Gain CNFG3 register*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG4 DAC_GAIN_CNFG4; /**< \brief 2C, DAC Gain CNFG4 register*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_DAC_GAIN_CNFG5 DAC_GAIN_CNFG5; /**< \brief 30, DAC Gain CNFG5 register*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_1 BUFFER_OFFSET_1; /**< \brief 34, Buffer Offset 1 register*/
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R_BUFFER_OFFSET_2 BUFFER_OFFSET_2; /**< \brief 38, Buffer Offset 2 register*/
       __I  Ifx_UReg_8Bit                       reserved_3C[196];       /**< \brief 3C, */
} Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_DCSG_GRP_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief DCSG_GRP object */
typedef volatile struct _Ifx_PPCA_ATOPSS_DCSG_GRP
{
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DCSG       DCSG;                   /**< \brief 0, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP_DAC_R2R    DAC_R2R;                /**< \brief 1000, CSG Module*/
       __I  Ifx_UReg_8Bit                       reserved_1100[3840];    /**< \brief 1100, */
} Ifx_PPCA_ATOPSS_DCSG_GRP;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_ATOPSS_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief ATOPSS object */
typedef volatile struct _Ifx_PPCA_ATOPSS
{
       __IO Ifx_PPCA_ATOPSS_ADC_GRP             ADC_GRP[4];             /**< \brief 0, */
       __IO Ifx_PPCA_ATOPSS_DCSG_GRP            DCSG_GRP[2];            /**< \brief 8000, */
       __I  Ifx_UReg_8Bit                       reserved_C000[16384];   /**< \brief C000, */
} Ifx_PPCA_ATOPSS;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPCA_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief PPCA object */
typedef volatile struct _Ifx_PPCA
{
       __IO Ifx_PPCA_CNFG                       CNFG;                   /**< \brief 0, */
       __I  Ifx_UReg_8Bit                       reserved_1000[12288];   /**< \brief 1000, */
       __IO Ifx_PPCA_EPU                        EPU;                    /**< \brief 4000, */
       __I  Ifx_UReg_8Bit                       reserved_5000[372736];  /**< \brief 5000, */
       __IO Ifx_PPCA_IPC                        PPCA_IPC;               /**< \brief 60000, IPC*/
       __I  Ifx_UReg_8Bit                       reserved_70000[65536];  /**< \brief 70000, */
       __IO Ifx_PPCA_CPUSS_CNFG                 CPUSS_CNFG;             /**< \brief 80000, */
       __IO Ifx_PPCA_TCPWM                      TCPWM[4];               /**< \brief 100000, S40 Timer/Counter/PWM*/
       __IO Ifx_PPCA_HWFILT3P3Z_SS_0            HWFILT3P3Z_SS_0;        /**< \brief 500000, */
       __I  Ifx_UReg_8Bit                       reserved_501000[61440]; /**< \brief 501000, */
       __IO Ifx_PPCA_HWFILT3P3Z_SS_1            HWFILT3P3Z_SS_1;        /**< \brief 510000, */
       __I  Ifx_UReg_8Bit                       reserved_511000[61440]; /**< \brief 511000, */
       __IO Ifx_PPCA_ADCM                       ADCM;                   /**< \brief 520000, */
       __I  Ifx_UReg_8Bit                       reserved_521000[61440]; /**< \brief 521000, */
       __IO Ifx_PPCA_CLB                        CLB;                    /**< \brief 530000, */
       __I  Ifx_UReg_8Bit                       reserved_538000[32768]; /**< \brief 538000, */
       __IO Ifx_MXCORDIC                        MXCORDIC[2];            /**< \brief 540000, */
       __I  Ifx_UReg_8Bit                       reserved_560000[131072]; /**< \brief 560000, */
       __IO Ifx_PPCA_ATOPSS                     ATOPSS;                 /**< \brief 580000, MXS40ATOPSS IP*/
       __I  Ifx_UReg_8Bit                       reserved_590000[2555904]; /**< \brief 590000, */
} Ifx_PPCA;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPPCA_REGDEF_H_ */
