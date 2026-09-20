/***************************************************************************//**
* \file IfxCANFD_regdef.h
*
* \brief
* CANFD Registers
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
* \defgroup IfxSfr_CANFD_Registers CANFD Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_CANFD_Registers_Bitfields Bitfields
* \ingroup IfxSfr_CANFD_Registers
*
* \defgroup IfxSfr_CANFD_Registers_union Register unions
* \ingroup IfxSfr_CANFD_Registers
*
* \defgroup IfxSfr_CANFD_Registers_struct Memory map
* \ingroup IfxSfr_CANFD_Registers
*
*******************************************************************************/

#ifndef _IFXCANFD_REGDEF_H_
#define _IFXCANFD_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_CANFD_Registers_Bitfields
 * \{  */
/** \brief Global CAN control register */
typedef struct _Ifx_CANFD_CTL_Bits
{
    __IO Ifx_UReg_32Bit STOP_REQ:8;             /**< \brief [7:0]    (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CANFD_CTL_Bits;

/** \brief Global CAN status register */
typedef struct _Ifx_CANFD_STATUS_Bits
{
    __I  Ifx_UReg_32Bit STOP_ACK:8;             /**< \brief [7:0]   Clock Stop Acknowledge for each TTCAN IP.
                                                                    These bits are directly driven by
                                                                    m_ttcan_clkstop_ack of each TTCAN IP.
                                                                    When this bit is set the corresponding TTCAN IP
                                                                    clocks will be gated off, except HCLK will enabled
                                                                    for each AHB write (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CANFD_STATUS_Bits;

/** \brief Consolidated interrupt0 cause register */
typedef struct _Ifx_CANFD_INTR0_CAUSE_Bits
{
    __I  Ifx_UReg_32Bit INT0:8;                 /**< \brief [7:0]   Show pending m_ttcan_int0 of each channel (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CANFD_INTR0_CAUSE_Bits;

/** \brief Consolidated interrupt1 cause register */
typedef struct _Ifx_CANFD_INTR1_CAUSE_Bits
{
    __I  Ifx_UReg_32Bit INT1:8;                 /**< \brief [7:0]   Show pending m_ttcan_int1 of each channel (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CANFD_INTR1_CAUSE_Bits;

/** \brief Time Stamp control register */
typedef struct _Ifx_CANFD_TS_CTL_Bits
{
    __IO Ifx_UReg_32Bit PRESCALE:16;            /**< \brief [15:0]  Time Stamp counter prescale value.
                                                                    When enabled divide the Host clock (HCLK) by
                                                                    PRESCALE+1 to create Time Stamp clock ticks. (rw) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [30:16] \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [31:31] Counter enable bit
                                                                    0 = Count disabled.
                                                                    Stop counting up and keep the counter value
                                                                    1 = Count enabled.
                                                                    Start counting up from the current value (rw) */
} Ifx_CANFD_TS_CTL_Bits;

/** \brief Time Stamp counter value */
typedef struct _Ifx_CANFD_TS_CNT_Bits
{
    __IO Ifx_UReg_32Bit VALUE:16;               /**< \brief [15:0]  The counter value of the Time Stamp Counter.
                                                                    When enabled this counter will count Time Stamp
                                                                    clock ticks from the pre-scaler.
                                                                    When written this counter and the pre-scaler will
                                                                    reset to 0 (write data is ignored). (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_TS_CNT_Bits;

/** \brief Receive FIFO Top control */
typedef struct _Ifx_CANFD_CH_RXFTOP_CTL_Bits
{
    __IO Ifx_UReg_32Bit F0TPE:1;                /**< \brief [0:0]   FIFO 0 Top Pointer Enable.
                                                                    This enables the FIFO top pointer logic to set the
                                                                    FIFO Top Address (FnTA) and message word counter.
                                                                    This logic is also disabled when the IP is being
                                                                    reconfigured (CCCR.CCE=1).
                                                                    When this logic is disabled a Read from
                                                                    RXFTOP0_DATA is undefined. (rw) */
    __IO Ifx_UReg_32Bit F1TPE:1;                /**< \brief [1:1]   FIFO 1 Top Pointer Enable. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_CANFD_CH_RXFTOP_CTL_Bits;

/** \brief Receive FIFO 0 Top Status */
typedef struct _Ifx_CANFD_CH_RXFTOP0_STAT_Bits
{
    __I  Ifx_UReg_32Bit F0TA:16;                /**< \brief [15:0]  Current FIFO 0 Top Address.
                                                                    This is a pointer to the next word in the message
                                                                    buffer defined by the FIFO Start Address (FnSA),
                                                                    Get Index (FnGI), the FIFO message size (FnDS) and
                                                                    the message word counter (FnMWC)
                                                                    FnTA = FnSA + FnGI * msg_size[FnDS] + FnMWC (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_CH_RXFTOP0_STAT_Bits;

/** \brief Receive FIFO 0 Top Data */
typedef struct _Ifx_CANFD_CH_RXFTOP0_DATA_Bits
{
    __I  Ifx_UReg_32Bit F0TD:32;                /**< \brief [31:0]  When enabled (F0TPE=1) read data from MRAM
                                                                    at location FnTA.
                                                                    This register can have a read side effect if the
                                                                    following conditions are met:
                                                                    - M_TTCAN not being reconfigured (CCCR.CCE=0)
                                                                    - FIFO Top Pointer logic is enabled (FnTPE=1)
                                                                    - FIFO is not empty (FnFL!=0)
                                                                    The read side effect is as follows:
                                                                    - if FnMWC pointed to the last word of the message
                                                                    (as indicated by FnDS) then the corresponding
                                                                    message index (FnGI) is automatically acknowledge
                                                                    by a write to FnAI
                                                                    - FnMWC is incremented (or restarted if FnMWC
                                                                    pointed to the last word of the message)
                                                                    - the FIFO top address FnTA is incremented (with
                                                                    FIFO wrap around)
                                                                    When this logic is disabled (F0TPE=0) a Read from
                                                                    this register returns undefined data. (r) */
} Ifx_CANFD_CH_RXFTOP0_DATA_Bits;

/** \brief Receive FIFO 1 Top Status */
typedef struct _Ifx_CANFD_CH_RXFTOP1_STAT_Bits
{
    __I  Ifx_UReg_32Bit F1TA:16;                /**< \brief [15:0]  See F0TA description (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_CH_RXFTOP1_STAT_Bits;

/** \brief Receive FIFO 1 Top Data */
typedef struct _Ifx_CANFD_CH_RXFTOP1_DATA_Bits
{
    __I  Ifx_UReg_32Bit F1TD:32;                /**< \brief [31:0]  See F0TD description (r) */
} Ifx_CANFD_CH_RXFTOP1_DATA_Bits;

/** \brief Core Release Register */
typedef struct _Ifx_CANFD_CH_CREL_Bits
{
    __I  Ifx_UReg_32Bit DAY:8;                  /**< \brief [7:0]   Time Stamp Day
                                                                    Two digits, BCD-coded.
                                                                    This field is set by generic parameter on M_TTCAN
                                                                    synthesis. (r) */
    __I  Ifx_UReg_32Bit MON:8;                  /**< \brief [15:8]  Time Stamp Month
                                                                    Two digits, BCD-coded.
                                                                    This field is set by generic parameter on M_TTCAN
                                                                    synthesis. (r) */
    __I  Ifx_UReg_32Bit YEAR:4;                 /**< \brief [19:16] Time Stamp Year
                                                                    One digit, BCD-coded.
                                                                    This field is set by generic parameter on M_TTCAN
                                                                    synthesis. (r) */
    __I  Ifx_UReg_32Bit SUBSTEP:4;              /**< \brief [23:20] Sub-step of Core Release
                                                                    One digit, BCD-coded. (r) */
    __I  Ifx_UReg_32Bit STEP:4;                 /**< \brief [27:24] Step of Core Release
                                                                    One digit, BCD-coded. (r) */
    __I  Ifx_UReg_32Bit REL:4;                  /**< \brief [31:28] Core Release
                                                                    One digit, BCD-coded. (r) */
} Ifx_CANFD_CH_CREL_Bits;

/** \brief Endian Register */
typedef struct _Ifx_CANFD_CH_ENDN_Bits
{
    __I  Ifx_UReg_32Bit ETV:32;                 /**< \brief [31:0]  Endianness Test Value
                                                                    The endianness test value is 0x87654321. (r) */
} Ifx_CANFD_CH_ENDN_Bits;

/** \brief Data Bit Timing & Prescaler Register */
typedef struct _Ifx_CANFD_CH_DBTP_Bits
{
    __IO Ifx_UReg_32Bit DSJW:4;                 /**< \brief [3:0]   Data (Re)Synchronization Jump Width
                                                                    0x0-0xF Valid values are 0 to 15.
                                                                    The actual interpretation by the hardware of this value is
                                                                    such that one more than the value programmed here is used. (rw) */
    __IO Ifx_UReg_32Bit DTSEG2:4;               /**< \brief [7:4]   Data time segment after sample point
                                                                    0x0-0xF Valid values are 0 to 15.
                                                                    The actual interpretation by the hardware of this value is
                                                                    such that one more than the programmed value is used. (rw) */
    __IO Ifx_UReg_32Bit DTSEG1:5;               /**< \brief [12:8]  Data time segment before sample point
                                                                    0x00-0x1F Valid values are 0 to 31.
                                                                    The actual interpretation by the hardware of this value is
                                                                    such that one more than the programmed value is used. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit DBRP:5;                 /**< \brief [20:16] Data Bit Rate Prescaler
                                                                    0x00-0x1F The value by which the oscillator
                                                                    frequency is divided for generating the bit time
                                                                    quanta.
                                                                    The bit time is built up from a multiple of this quanta.
                                                                    Valid values for the Bit
                                                                    Rate Prescaler are 0 to 31.
                                                                    The actual interpretation by the hardware of this value is
                                                                    such that one more than the value programmed here is used. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [22:21] \internal Reserved */
    __IO Ifx_UReg_32Bit TDC:1;                  /**< \brief [23:23] Transmitter Delay Compensation
                                                                    0= Transmitter Delay Compensation disabled
                                                                    1= Transmitter Delay Compensation enabled (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_CANFD_CH_DBTP_Bits;

/** \brief Test Register */
typedef struct _Ifx_CANFD_CH_TEST_Bits
{
    __IO Ifx_UReg_32Bit TAM:1;                  /**< \brief [0:0]   ASC is not supported by M_TTCAN
                                                                    Test ASC Multiplexer Control
                                                                    Controls output pin m_ttcan_ascm in test mode, ORed
                                                                    with the signal from the FSE
                                                                    0= Level at pin m_ttcan_ascm controlled by FSE
                                                                    1= Level at pin m_ttcan_ascm = '1' (rw) */
    __IO Ifx_UReg_32Bit TAT:1;                  /**< \brief [1:1]   ASC is not supported by M_TTCAN
                                                                    Test ASC Transmit Control
                                                                    Controls output pin m_ttcan_asct in test mode, ORed
                                                                    with the signal from the FSE
                                                                    0= Level at pin m_ttcan_asct controlled by FSE
                                                                    1= Level at pin m_ttcan_asct = '1' (rw) */
    __IO Ifx_UReg_32Bit CAM:1;                  /**< \brief [2:2]   ASC is not supported by M_TTCAN
                                                                    Check ASC Multiplexer Control
                                                                    Monitors level at output pin m_ttcan_ascm.
                                                                    0= Output pin m_ttcan_ascm = '0'
                                                                    1= Output pin m_ttcan_ascm = '1' (rw) */
    __IO Ifx_UReg_32Bit CAT:1;                  /**< \brief [3:3]   ASC is not supported by M_TTCAN
                                                                    Check ASC Transmit Control
                                                                    Monitors level at output pin m_ttcan_asct.
                                                                    0= Output pin m_ttcan_asct = '0' (rw) */
    __IO Ifx_UReg_32Bit LBCK:1;                 /**< \brief [4:4]   Loop Back Mode
                                                                    0= Reset value, Loop Back Mode is disabled
                                                                    1= Loop Back Mode is enabled (see Section 3.1.9,
                                                                    Test Modes) (rw) */
    __IO Ifx_UReg_32Bit TX:2;                   /**< \brief [6:5]   Control of Transmit Pin
                                                                    00 Reset value, m_ttcan_tx controlled by the CAN
                                                                    Core, updated at the end of the CAN bit time
                                                                    01 Sample Point can be monitored at pin m_ttcan_tx
                                                                    10 Dominant ('0') level at pin m_ttcan_tx
                                                                    11 Recessive ('1') at pin m_ttcan_tx (rw) */
    __I  Ifx_UReg_32Bit RX:1;                   /**< \brief [7:7]   Receive Pin
                                                                    Monitors the actual value of pin m_ttcan_rx
                                                                    0= The CAN bus is dominant (m_ttcan_rx = '0')
                                                                    1= The CAN bus is recessive (m_ttcan_rx = '1') (r) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_CANFD_CH_TEST_Bits;

/** \brief RAM Watchdog */
typedef struct _Ifx_CANFD_CH_RWD_Bits
{
    __IO Ifx_UReg_32Bit WDC:8;                  /**< \brief [7:0]   Watchdog Configuration
                                                                    Start value of the Message RAM Watchdog Counter.
                                                                    With the reset value of '00' the counter is
                                                                    disabled. (rw) */
    __I  Ifx_UReg_32Bit WDV:8;                  /**< \brief [15:8]  Watchdog Value
                                                                    Actual Message RAM Watchdog Counter Value. (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_CH_RWD_Bits;

/** \brief CC Control Register */
typedef struct _Ifx_CANFD_CH_CCCR_Bits
{
    __IO Ifx_UReg_32Bit INIT:1;                 /**< \brief [0:0]   Initialization
                                                                    0= Normal Operation
                                                                    1= Initialization is started (rw) */
    __IO Ifx_UReg_32Bit CCE:1;                  /**< \brief [1:1]   Configuration Change Enable
                                                                    0= The CPU has no write access to the protected
                                                                    configuration registers
                                                                    1= The CPU has write access to the protected
                                                                    configuration registers (while CCCR.INIT = '1') (rw) */
    __IO Ifx_UReg_32Bit ASM:1;                  /**< \brief [2:2]   Restricted Operation Mode
                                                                    Bit ASM can only be set by the Host when both CCE
                                                                    and INIT are set to '1'. The bit can be reset by
                                                                    the Host at any time.
                                                                    For a description of the Restricted Operation Mode
                                                                    see Section 3.1.5.
                                                                    0= Normal CAN operation
                                                                    1= Restricted Operation Mode active (rw) */
    __IO Ifx_UReg_32Bit CSA:1;                  /**< \brief [3:3]   Clock Stop Acknowledge
                                                                    0= No clock stop acknowledged
                                                                    1= M_TTCAN may be set in power down by stopping
                                                                    m_ttcan_hclk and m_ttcan_cclk (rw) */
    __IO Ifx_UReg_32Bit CSR:1;                  /**< \brief [4:4]   Clock Stop Request, not supported by
                                                                    M_TTCAN use CTL.STOP_REQ at the group level instead.
                                                                    0= No clock stop is requested
                                                                    1= Clock stop requested.
                                                                    When clock stop is requested, first INIT and then
                                                                    CSA will be set after
                                                                    all pending transfer requests have been completed
                                                                    and the CAN bus reached idle. (rw) */
    __IO Ifx_UReg_32Bit MON_:1;                 /**< \brief [5:5]   Bus Monitoring Mode
                                                                    Bit MON can only be set by the Host when both CCE
                                                                    and INIT are set to '1'. The bit can be reset by
                                                                    the Host at any time.
                                                                    0= Bus Monitoring Mode is disabled
                                                                    1= Bus Monitoring Mode is enabled (rw) */
    __IO Ifx_UReg_32Bit DAR:1;                  /**< \brief [6:6]   Disable Automatic Retransmission
                                                                    0= Automatic retransmission of messages not
                                                                    transmitted successfully enabled
                                                                    1= Automatic retransmission disabled (rw) */
    __IO Ifx_UReg_32Bit TEST:1;                 /**< \brief [7:7]   Test Mode Enable
                                                                    0= Normal operation, register TEST holds reset values
                                                                    1= Test Mode, write access to register TEST enabled (rw) */
    __IO Ifx_UReg_32Bit FDOE:1;                 /**< \brief [8:8]   FD Operation Enable
                                                                    0= FD operation disabled
                                                                    1= FD operation enabled (rw) */
    __IO Ifx_UReg_32Bit BRSE:1;                 /**< \brief [9:9]   Bit Rate Switch Enable
                                                                    0= Bit rate switching for transmissions disabled
                                                                    1= Bit rate switching for transmissions enabled (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [11:10] \internal Reserved */
    __IO Ifx_UReg_32Bit PXHD:1;                 /**< \brief [12:12] Protocol Exception Handling Disable
                                                                    0= Protocol exception handling enabled
                                                                    1= Protocol exception handling disabled (rw) */
    __IO Ifx_UReg_32Bit EFBI:1;                 /**< \brief [13:13] Edge Filtering during Bus Integration
                                                                    0= Edge filtering disabled
                                                                    1= Two consecutive dominant tq required to detect
                                                                    an edge for hard synchronization (rw) */
    __IO Ifx_UReg_32Bit TXP:1;                  /**< \brief [14:14] Transmit Pause
                                                                    If this bit is set, the M_TTCAN pauses for two CAN
                                                                    bit times before starting the next transmission
                                                                    after itself has successfully transmitted a frame
                                                                    (see Section 3.5).
                                                                    0= Transmit pause disabled
                                                                    1= Transmit pause enabled (rw) */
    __IO Ifx_UReg_32Bit NISO:1;                 /**< \brief [15:15] Non ISO Operation
                                                                    If this bit is set, the M_TTCAN uses the CAN FD
                                                                    frame format as specified by the Bosch CAN FD
                                                                    Specification V1.0.
                                                                    0= CAN FD frame format according to ISO 11898-1:2015
                                                                    1= CAN FD frame format according to Bosch CAN FD
                                                                    Specification V1.0 addressing the non-ISO CAN FD (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_CH_CCCR_Bits;

/** \brief Nominal Bit Timing & Prescaler Register */
typedef struct _Ifx_CANFD_CH_NBTP_Bits
{
    __IO Ifx_UReg_32Bit NTSEG2:7;               /**< \brief [6:0]   Nominal Time segment after sample point
                                                                    0x01-0x7F Valid values are 1 to 127.
                                                                    The actual interpretation by the hardware of this value is
                                                                    such that one more than the programmed value is used. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit NTSEG1:8;               /**< \brief [15:8]  Nominal Time segment before sample point
                                                                    0x01-0xFF Valid values are 1 to 255.
                                                                    The actual interpretation by the hardware of this value is
                                                                    such that one more than the programmed value is used. (rw) */
    __IO Ifx_UReg_32Bit NBRP:9;                 /**< \brief [24:16] Nominal Bit Rate Prescaler
                                                                    0x000-0x1FFThe value by which the oscillator
                                                                    frequency is divided for generating the bit time
                                                                    quanta.
                                                                    The bit time is built up from a multiple of this quanta.
                                                                    Valid values for the Bit
                                                                    Rate Prescaler are 0 to 511.
                                                                    The actual interpretation by the hardware of this value is
                                                                    such that one more than the value programmed here is used. (rw) */
    __IO Ifx_UReg_32Bit NSJW:7;                 /**< \brief [31:25] Nominal (Re)Synchronization Jump Width
                                                                    0x00-0x7F Valid values are 0 to 127.
                                                                    The actual interpretation by the hardware of this value is
                                                                    such that one more than the value programmed here is used. (rw) */
} Ifx_CANFD_CH_NBTP_Bits;

/** \brief Timestamp Counter Configuration */
typedef struct _Ifx_CANFD_CH_TSCC_Bits
{
    __IO Ifx_UReg_32Bit TSS:2;                  /**< \brief [1:0]   Timestamp Select, should always be set to
                                                                    external timestamp counter
                                                                    00= Timestamp counter value always 0x0000
                                                                    01= Timestamp counter value incremented according to TCP
                                                                    10= External timestamp counter value used
                                                                    11= Same as '00' (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [15:2]  \internal Reserved */
    __IO Ifx_UReg_32Bit TCP:4;                  /**< \brief [19:16] Timestamp Counter Prescaler (still used for TOCC)
                                                                    0x0-0xF Configures the timestamp and timeout
                                                                    counters time unit in multiples of CAN bit times
                                                                    [1...16].
                                                                    The actual interpretation by the hardware of this
                                                                    value is such that one more
                                                                    than the value programmed here is used. (rw) */
    __I  Ifx_UReg_32Bit :12;                    /**< \brief [31:20] \internal Reserved */
} Ifx_CANFD_CH_TSCC_Bits;

/** \brief Timestamp Counter Value */
typedef struct _Ifx_CANFD_CH_TSCV_Bits
{
    __IO Ifx_UReg_32Bit TSC:16;                 /**< \brief [15:0]  Timestamp Counter, not used for M_TTCAN
                                                                    The internal/external Timestamp Counter value is
                                                                    captured on start of frame (both Rx and Tx).
                                                                    When TSCC.TSS = '01', the Timestamp Counter is
                                                                    incremented in multiples of CAN bit times
                                                                    [1...16] depending on the configuration of TSCC.TCP.
                                                                    A wrap around sets interrupt flag IR.TSW.
                                                                    Write access resets the counter to zero.
                                                                    When TSCC.TSS = '10', TSC reflects the external
                                                                    Timestamp Counter value. A write access has no impact. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_CH_TSCV_Bits;

/** \brief Timeout Counter Configuration */
typedef struct _Ifx_CANFD_CH_TOCC_Bits
{
    __IO Ifx_UReg_32Bit ETOC:1;                 /**< \brief [0:0]   Enable Timeout Counter
                                                                    0= Timeout Counter disabled
                                                                    1= Timeout Counter enabled (rw) */
    __IO Ifx_UReg_32Bit TOS:2;                  /**< \brief [2:1]   Timeout Select
                                                                    When operating in Continuous mode, a write to TOCV
                                                                    presets the counter to the value configured
                                                                    by TOCC.TOP and continues down-counting.
                                                                    When the Timeout Counter is controlled by one of the
                                                                    FIFOs, an empty FIFO presets the counter to the
                                                                    value configured by TOCC.TOP. Down-counting
                                                                    is started when the first FIFO element is stored.
                                                                    00= Continuous operation
                                                                    01= Timeout controlled by Tx Event FIFO
                                                                    10= Timeout controlled by Rx FIFO 0
                                                                    11= Timeout controlled by Rx FIFO 1 (rw) */
    __I  Ifx_UReg_32Bit :13;                    /**< \brief [15:3]  \internal Reserved */
    __IO Ifx_UReg_32Bit TOP:16;                 /**< \brief [31:16] Timeout Period
                                                                    Start value of the Timeout Counter (down-counter).
                                                                    Configures the Timeout Period. (rw) */
} Ifx_CANFD_CH_TOCC_Bits;

/** \brief Timeout Counter Value */
typedef struct _Ifx_CANFD_CH_TOCV_Bits
{
    __IO Ifx_UReg_32Bit TOC:16;                 /**< \brief [15:0]  Timeout Counter
                                                                    The Timeout Counter is decremented in multiples of
                                                                    CAN bit times [1...16] depending on the
                                                                    configuration of TSCC.TCP.
                                                                    When decremented to zero, interrupt flag IR.TOO is
                                                                    set and the
                                                                    Timeout Counter is stopped.
                                                                    Start and reset/restart conditions are configured
                                                                    via TOCC.TOS. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_CH_TOCV_Bits;

/** \brief Error Counter Register */
typedef struct _Ifx_CANFD_CH_ECR_Bits
{
    __I  Ifx_UReg_32Bit TEC:8;                  /**< \brief [7:0]   Transmit Error Counter
                                                                    Actual state of the Transmit Error Counter, values
                                                                    between 0 and 255 (r) */
    __I  Ifx_UReg_32Bit REC:7;                  /**< \brief [14:8]  Receive Error Counter
                                                                    Actual state of the Receive Error Counter, values
                                                                    between 0 and 127 (r) */
    __I  Ifx_UReg_32Bit RP:1;                   /**< \brief [15:15] Receive Error Passive
                                                                    0= The Receive Error Counter is below the error
                                                                    passive level of 128
                                                                    1= The Receive Error Counter has reached the error
                                                                    passive level of 128 (r) */
    __I  Ifx_UReg_32Bit CEL:8;                  /**< \brief [23:16] CAN Error Logging
                                                                    The counter is incremented each time when a CAN
                                                                    protocol error causes the Transmit Error Counter
                                                                    or the Receive Error Counter to be incremented.
                                                                    It is reset by read access to CEL. The counter stops
                                                                    at 0xFF; the next increment of TEC or REC sets
                                                                    interrupt flag IR.ELO. (r) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_CANFD_CH_ECR_Bits;

/** \brief Protocol Status Register */
typedef struct _Ifx_CANFD_CH_PSR_Bits
{
    __I  Ifx_UReg_32Bit LEC:3;                  /**< \brief [2:0]   Last Error Code,
                                                                    Set on Read0
                                                                    The LEC indicates the type of the last error to
                                                                    occur on the CAN bus.
                                                                    This field will be cleared to '0'
                                                                    when a message has been transferred (reception or
                                                                    transmission) without error.
                                                                    0= No Error: No error occurred since LEC has been
                                                                    reset by successful reception or transmission.
                                                                    1= Stuff Error: More than 5 equal bits in a
                                                                    sequence have occurred in a part of a received
                                                                    message where this is not allowed.
                                                                    2= Form Error: A fixed format part of a received
                                                                    frame has the wrong format.
                                                                    3= AckError: The message transmitted by the M_TTCAN
                                                                    was not acknowledged by another node.
                                                                    4= Bit1Error: During the transmission of a message
                                                                    (with the exception of the arbitration field),
                                                                    the device wanted to send a recessive level (bit of
                                                                    logical value '1'), but the monitored bus
                                                                     value was dominant.
                                                                    5= Bit0Error: During the transmission of a message
                                                                    (or acknowledge bit, or active error flag, or
                                                                    overload flag), the device wanted to send a
                                                                    dominant level (data or identifier bit logical value
                                                                    0'), but the monitored bus value was recessive.
                                                                    During Bus_Off recovery this status is set
                                                                    each time a sequence of 11 recessive bits has been
                                                                    monitored. This enables the CPU to
                                                                    monitor the proceeding of the Bus_Off recovery
                                                                    sequence (indicating the bus is not stuck at
                                                                    dominant or continuously disturbed).
                                                                    6= CRCError: The CRC check sum of a received
                                                                    message was incorrect. The CRC of an incoming
                                                                    message does not match with the CRC calculated from
                                                                    the received data.
                                                                    7= NoChange: Any read access to the Protocol Status
                                                                    Register re-initializes the LEC to '7'.
                                                                    When the LEC shows the value '7', no CAN bus event
                                                                    was detected since the last CPU read
                                                                    access to the Protocol Status Register. (r) */
    __I  Ifx_UReg_32Bit ACT:2;                  /**< \brief [4:3]   Activity
                                                                    Monitors the module's CAN communication state.
                                                                    00= Synchronizing - node is synchronizing on CAN
                                                                    communication
                                                                    01= Idle - node is neither receiver nor transmitter
                                                                    10= Receiver - node is operating as receiver
                                                                    11= Transmitter - node is operating as transmitter (r) */
    __I  Ifx_UReg_32Bit EP:1;                   /**< \brief [5:5]   Error Passive
                                                                    0= The M_CAN is in the Error_Active state.
                                                                    It normally takes part in bus communication and
                                                                    sends an active error flag when an error has been detected
                                                                    1= The M_CAN is in the Error_Passive state (r) */
    __I  Ifx_UReg_32Bit EW:1;                   /**< \brief [6:6]   Warning Status
                                                                    0= Both error counters are below the Error_Warning
                                                                    limit of 96
                                                                    1= At least one of error counter has reached the
                                                                    Error_Warning limit of 96 (r) */
    __I  Ifx_UReg_32Bit BO:1;                   /**< \brief [7:7]   Bus_Off Status
                                                                    0= The M_CAN is not Bus_Off
                                                                    1= The M_CAN is in Bus_Off state (r) */
    __I  Ifx_UReg_32Bit DLEC:3;                 /**< \brief [10:8]  Data Phase Last Error Code
                                                                    , Set on Read
                                                                    Type of last error that occurred in the data phase
                                                                    of a CAN FD format frame with its BRS flag set.
                                                                    Coding is the same as for LEC.
                                                                    This field will be cleared to zero when a CAN FD
                                                                    format frame with its BRS flag set has been
                                                                    transferred (reception or transmission) without error. (r) */
    __I  Ifx_UReg_32Bit RESI:1;                 /**< \brief [11:11] ESI flag of last received CAN FD Message
                                                                    , Reset on Read
                                                                    This bit is set together with RFDF, independent of
                                                                    acceptance filtering.
                                                                    0= Last received CAN FD message did not have its
                                                                    ESI flag set
                                                                    1= Last received CAN FD message had its ESI flag set (r) */
    __I  Ifx_UReg_32Bit RBRS:1;                 /**< \brief [12:12] BRS flag of last received CAN FD Message
                                                                    , Reset on Read
                                                                    This bit is set together with RFDF, independent of
                                                                    acceptance filtering.
                                                                    0= Last received CAN FD message did not have its
                                                                    BRS flag set
                                                                    1= Last received CAN FD message had its BRS flag set (r) */
    __I  Ifx_UReg_32Bit RFDF:1;                 /**< \brief [13:13] Received a CAN FD Message
                                                                    , Reset on Read
                                                                    This bit is set independent of acceptance filtering.
                                                                    0= Since this bit was reset by the CPU, no CAN FD
                                                                    message has been received
                                                                    1= Message in CAN FD format with FDF flag set has
                                                                    been received (r) */
    __I  Ifx_UReg_32Bit PXE:1;                  /**< \brief [14:14] Protocol Exception Event
                                                                    , Reset on Read
                                                                    0= No protocol exception event occurred since last
                                                                    read access
                                                                    1= Protocol exception event occurred (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __I  Ifx_UReg_32Bit TDCV:7;                 /**< \brief [22:16] Transmitter Delay Compensation Value
                                                                    0x00-0x7F Position of the secondary sample point,
                                                                    defined by the sum of the measured delay from
                                                                    m_can_tx to m_can_rx and TDCR.TDCO.
                                                                    The SSP position is, in the data phase, the number
                                                                    of mtq between the start of the transmitted bit and
                                                                    the secondary sample point. Valid values are 0 to 127 mtq. (r) */
    __I  Ifx_UReg_32Bit :9;                     /**< \brief [31:23] \internal Reserved */
} Ifx_CANFD_CH_PSR_Bits;

/** \brief Transmitter Delay Compensation Register */
typedef struct _Ifx_CANFD_CH_TDCR_Bits
{
    __IO Ifx_UReg_32Bit TDCF:7;                 /**< \brief [6:0]   Transmitter Delay Compensation Filter
                                                                    Window Length
                                                                    0x00-0x7F Defines the minimum value for the SSP
                                                                    position, dominant edges on m_ttcan_rx
                                                                    that would result in an earlier SSP position are
                                                                    ignored for transmitter delay measurement.
                                                                    The feature is enabled when TDCF is configured to a
                                                                    value greater than
                                                                    TDCO. Valid values are 0 to 127 mtq (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit TDCO:7;                 /**< \brief [14:8]  Transmitter Delay Compensation Offset
                                                                    0x00-0x7F Offset value defining the distance
                                                                    between the measured delay from m_ttcan_tx to
                                                                    m_ttcan_rx and the secondary sample point.
                                                                    Valid values are 0 to 127 mtq. (rw) */
    __I  Ifx_UReg_32Bit :17;                    /**< \brief [31:15] \internal Reserved */
} Ifx_CANFD_CH_TDCR_Bits;

/** \brief Interrupt Register */
typedef struct _Ifx_CANFD_CH_IR_Bits
{
    __IO Ifx_UReg_32Bit RF0N:1;                 /**< \brief [0:0]    (rw) */
    __IO Ifx_UReg_32Bit RF0W:1;                 /**< \brief [1:1]    (rw) */
    __IO Ifx_UReg_32Bit RF0F:1;                 /**< \brief [2:2]    (rw) */
    __IO Ifx_UReg_32Bit RF0L_:1;                /**< \brief [3:3]    (rw) */
    __IO Ifx_UReg_32Bit RF1N:1;                 /**< \brief [4:4]    (rw) */
    __IO Ifx_UReg_32Bit RF1W:1;                 /**< \brief [5:5]    (rw) */
    __IO Ifx_UReg_32Bit RF1F:1;                 /**< \brief [6:6]    (rw) */
    __IO Ifx_UReg_32Bit RF1L_:1;                /**< \brief [7:7]    (rw) */
    __IO Ifx_UReg_32Bit HPM:1;                  /**< \brief [8:8]    (rw) */
    __IO Ifx_UReg_32Bit TC:1;                   /**< \brief [9:9]    (rw) */
    __IO Ifx_UReg_32Bit TCF:1;                  /**< \brief [10:10]  (rw) */
    __IO Ifx_UReg_32Bit TFE:1;                  /**< \brief [11:11]  (rw) */
    __IO Ifx_UReg_32Bit TEFN:1;                 /**< \brief [12:12]  (rw) */
    __IO Ifx_UReg_32Bit TEFW:1;                 /**< \brief [13:13]  (rw) */
    __IO Ifx_UReg_32Bit TEFF:1;                 /**< \brief [14:14]  (rw) */
    __IO Ifx_UReg_32Bit TEFL_:1;                /**< \brief [15:15]  (rw) */
    __IO Ifx_UReg_32Bit TSW:1;                  /**< \brief [16:16]  (rw) */
    __IO Ifx_UReg_32Bit MRAF:1;                 /**< \brief [17:17]  (rw) */
    __IO Ifx_UReg_32Bit TOO:1;                  /**< \brief [18:18]  (rw) */
    __IO Ifx_UReg_32Bit DRX:1;                  /**< \brief [19:19]  (rw) */
    __IO Ifx_UReg_32Bit BEC:1;                  /**< \brief [20:20] Bit Error Corrected
                                                                    This bit always reads as 0. (rw) */
    __IO Ifx_UReg_32Bit BEU:1;                  /**< \brief [21:21] Bit Error Uncorrected
                                                                    Message RAM bit error detected, uncorrected.
                                                                    The flag is set in the folloiwng cases.
                                                                    - M_TTCAN detects uncorrectable ECC error from
                                                                    Message RAM when ECC is enabled and ECC error
                                                                    injection is disabled.
                                                                    - M_TTCAN reads from an out of range Message RAM address.
                                                                    Message RAM bit error sets CCCR.INIT to '1'.
                                                                    This is done to avoid transmission of corrupted data.
                                                                    0= No bit error detected when reading from Message RAM
                                                                    1= Bit error detected, uncorrected (rw) */
    __IO Ifx_UReg_32Bit ELO:1;                  /**< \brief [22:22]  (rw) */
    __IO Ifx_UReg_32Bit EP_:1;                  /**< \brief [23:23]  (rw) */
    __IO Ifx_UReg_32Bit EW_:1;                  /**< \brief [24:24]  (rw) */
    __IO Ifx_UReg_32Bit BO_:1;                  /**< \brief [25:25]  (rw) */
    __IO Ifx_UReg_32Bit WDI:1;                  /**< \brief [26:26]  (rw) */
    __IO Ifx_UReg_32Bit PEA:1;                  /**< \brief [27:27]  (rw) */
    __IO Ifx_UReg_32Bit PED:1;                  /**< \brief [28:28]  (rw) */
    __IO Ifx_UReg_32Bit ARA:1;                  /**< \brief [29:29]  (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_CANFD_CH_IR_Bits;

/** \brief Interrupt Enable */
typedef struct _Ifx_CANFD_CH_IE_Bits
{
    __IO Ifx_UReg_32Bit RF0NE:1;                /**< \brief [0:0]   Rx FIFO 0 New Message Interrupt Enable

                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit RF0WE:1;                /**< \brief [1:1]   Rx FIFO 0 Watermark Reached Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit RF0FE:1;                /**< \brief [2:2]   Rx FIFO 0 Full Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit RF0LE:1;                /**< \brief [3:3]   Rx FIFO 0 Message Lost Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit RF1NE:1;                /**< \brief [4:4]   Rx FIFO 1 New Message Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit RF1WE:1;                /**< \brief [5:5]   Rx FIFO 1 Watermark Reached Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit RF1FE:1;                /**< \brief [6:6]   Rx FIFO 1 Full Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit RF1LE:1;                /**< \brief [7:7]   Rx FIFO 1 Message Lost Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit HPME:1;                 /**< \brief [8:8]   High Priority Message Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TCE:1;                  /**< \brief [9:9]   Transmission Completed Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TCFE:1;                 /**< \brief [10:10] Transmission Cancellation Finished
                                                                    Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TFEE:1;                 /**< \brief [11:11] Tx FIFO Empty Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt EnabledTx FIFO Empty Interrupt Enable (rw) */
    __IO Ifx_UReg_32Bit TEFNE:1;                /**< \brief [12:12] Tx Event FIDO New Entry Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TEFWE:1;                /**< \brief [13:13] Tx Event FIFO Watermark Reached Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TEFFE:1;                /**< \brief [14:14] Tx Event FIFO Full Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TEFLE:1;                /**< \brief [15:15] Tx Event FIFO Event Lost Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TSWE:1;                 /**< \brief [16:16] Timestamp Wraparound Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit MRAFE:1;                /**< \brief [17:17] Message RAM Access Failure Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TOOE:1;                 /**< \brief [18:18] Timeout Occurred Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit DRXE:1;                 /**< \brief [19:19] Message stored to Dedicated Rx Buffer
                                                                    Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit BECE:1;                 /**< \brief [20:20] Bit Error Corrected Interrupt Enable (not
                                                                    used in M_TTCAN)
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit BEUE:1;                 /**< \brief [21:21] Bit Error Uncorrected Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit ELOE:1;                 /**< \brief [22:22] Error Logging Overflow Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit EPE:1;                  /**< \brief [23:23] Error Passive Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit EWE:1;                  /**< \brief [24:24] Warning Status Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit BOE:1;                  /**< \brief [25:25] Bus_Off Status Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit WDIE:1;                 /**< \brief [26:26] Watchdog Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit PEAE:1;                 /**< \brief [27:27] Protocol Error in Arbitration Phase Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit PEDE:1;                 /**< \brief [28:28] Protocol Error in Data Phase Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit ARAE:1;                 /**< \brief [29:29] Access to Reserved Address Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_CANFD_CH_IE_Bits;

/** \brief Interrupt Line Select */
typedef struct _Ifx_CANFD_CH_ILS_Bits
{
    __IO Ifx_UReg_32Bit RF0NL:1;                /**< \brief [0:0]   Rx FIFO 0 New Message Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit RF0WL:1;                /**< \brief [1:1]   Rx FIFO 0 Watermark Reached Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit RF0FL:1;                /**< \brief [2:2]   Rx FIFO 0 Full Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit RF0LL:1;                /**< \brief [3:3]   Rx FIFO 0 Message Lost Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit RF1NL:1;                /**< \brief [4:4]   Rx FIFO 1 New Message Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit RF1WL:1;                /**< \brief [5:5]   Rx FIFO 1 Watermark Reached Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit RF1FL:1;                /**< \brief [6:6]   Rx FIFO 1 Full Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit RF1LL:1;                /**< \brief [7:7]   Rx FIFO 1 Message Lost Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit HPML:1;                 /**< \brief [8:8]   High Priority Message Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TCL:1;                  /**< \brief [9:9]   Transmission Completed Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TCFL:1;                 /**< \brief [10:10] Transmission Cancellation Finished
                                                                    Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TFEL:1;                 /**< \brief [11:11] Tx FIFO Empty Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TEFNL:1;                /**< \brief [12:12] Tx Event FIFO New Entry Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TEFWL:1;                /**< \brief [13:13] Tx Event FIFO Watermark Reached Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TEFFL:1;                /**< \brief [14:14] Tx Event FIFO Full Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TEFLL:1;                /**< \brief [15:15] Tx Event FIFO Event Lost Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TSWL:1;                 /**< \brief [16:16] Timestamp Wraparound Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit MRAFL:1;                /**< \brief [17:17] Message RAM Access Failure Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TOOL:1;                 /**< \brief [18:18] Timeout Occurred Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit DRXL:1;                 /**< \brief [19:19] Message stored to Dedicated Rx Buffer
                                                                    Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit BECL:1;                 /**< \brief [20:20] Bit Error Corrected Interrupt Select  (not
                                                                    used in M_TTCAN)
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit BEUL:1;                 /**< \brief [21:21] Bit Error Uncorrected Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit ELOL:1;                 /**< \brief [22:22] Error Logging Overflow Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit EPL:1;                  /**< \brief [23:23] Error Passive Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit EWL:1;                  /**< \brief [24:24] Warning Status Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit BOL:1;                  /**< \brief [25:25] Bus_Off Status Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit WDIL:1;                 /**< \brief [26:26] Watchdog Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit PEAL:1;                 /**< \brief [27:27] Protocol Error in Arbitration Phase Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit PEDL:1;                 /**< \brief [28:28] Protocol Error in Data Phase Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit ARAL:1;                 /**< \brief [29:29] Access to Reserved Address Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_CANFD_CH_ILS_Bits;

/** \brief Interrupt Line Enable */
typedef struct _Ifx_CANFD_CH_ILE_Bits
{
    __IO Ifx_UReg_32Bit EINT0:1;                /**< \brief [0:0]   Enable Interrupt Line 0
                                                                    0= Interrupt line m_ttcan_int0 disabled
                                                                    1= Interrupt line m_ttcan_int0 enabled (rw) */
    __IO Ifx_UReg_32Bit EINT1:1;                /**< \brief [1:1]   Enable Interrupt Line 1
                                                                    0= Interrupt line m_ttcan_int1 disabled
                                                                    1= Interrupt line m_ttcan_int1 enabled (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_CANFD_CH_ILE_Bits;

/** \brief Global Filter Configuration */
typedef struct _Ifx_CANFD_CH_GFC_Bits
{
    __IO Ifx_UReg_32Bit RRFE:1;                 /**< \brief [0:0]   Reject Remote Frames Extended
                                                                    0= Filter remote frames with 29-bit extended IDs
                                                                    1= Reject all remote frames with 29-bit extended IDs (rw) */
    __IO Ifx_UReg_32Bit RRFS:1;                 /**< \brief [1:1]   Reject Remote Frames Standard
                                                                    0= Filter remote frames with 11-bit standard IDs
                                                                    1= Reject all remote frames with 11-bit standard IDs (rw) */
    __IO Ifx_UReg_32Bit ANFE:2;                 /**< \brief [3:2]   Accept Non-matching Frames Extended
                                                                    Defines how received messages with 29-bit IDs that
                                                                    do not match any element of the filter list are
                                                                    treated.
                                                                    00= Accept in Rx FIFO 0
                                                                    01= Accept in Rx FIFO 1
                                                                    10= Reject
                                                                    11= Reject (rw) */
    __IO Ifx_UReg_32Bit ANFS:2;                 /**< \brief [5:4]   Accept Non-matching Frames Standard
                                                                    Defines how received messages with 11-bit IDs that
                                                                    do not match any element of the filter list are
                                                                    treated.
                                                                    00= Accept in Rx FIFO 0
                                                                    01= Accept in Rx FIFO 1
                                                                    10= Reject
                                                                    11= Reject (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_CANFD_CH_GFC_Bits;

/** \brief Standard ID Filter Configuration */
typedef struct _Ifx_CANFD_CH_SIDFC_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit FLSSA:14;               /**< \brief [15:2]  Filter List Standard Start Address
                                                                    Start address of standard Message ID filter list
                                                                    (32-bit word address, see Figure 2). (rw) */
    __IO Ifx_UReg_32Bit LSS:8;                  /**< \brief [23:16] List Size Standard
                                                                    0= No standard Message ID filter
                                                                    1-128= Number of standard Message ID filter elements
                                                                    128= Values greater than 128 are interpreted as 128 (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_CANFD_CH_SIDFC_Bits;

/** \brief Extended ID Filter Configuration */
typedef struct _Ifx_CANFD_CH_XIDFC_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit FLESA:14;               /**< \brief [15:2]  Filter List Extended Start Address
                                                                    Start address of extended Message ID filter list
                                                                    (32-bit word address, see Figure 2). (rw) */
    __IO Ifx_UReg_32Bit LSE:7;                  /**< \brief [22:16] List Size Extended
                                                                    0= No extended Message ID filter
                                                                    1-64= Number of extended Message ID filter elements
                                                                    64= Values greater than 64 are interpreted as 64 (rw) */
    __I  Ifx_UReg_32Bit :9;                     /**< \brief [31:23] \internal Reserved */
} Ifx_CANFD_CH_XIDFC_Bits;

/** \brief Extended ID AND Mask */
typedef struct _Ifx_CANFD_CH_XIDAM_Bits
{
    __IO Ifx_UReg_32Bit EIDM:29;                /**< \brief [28:0]  Extended ID Mask
                                                                    For acceptance filtering of extended frames the
                                                                    Extended ID AND Mask is ANDed with the Message
                                                                    ID of a received frame.
                                                                    Intended for masking of 29-bit IDs in SAE J1939.
                                                                    With the reset value of all
                                                                    bits set to one the mask is not active. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [31:29] \internal Reserved */
} Ifx_CANFD_CH_XIDAM_Bits;

/** \brief High Priority Message Status */
typedef struct _Ifx_CANFD_CH_HPMS_Bits
{
    __I  Ifx_UReg_32Bit BIDX:6;                 /**< \brief [5:0]   Buffer Index
                                                                    Index of Rx FIFO element to which the message was stored.
                                                                    Only valid when MSI[1] = '1'. (r) */
    __I  Ifx_UReg_32Bit MSI:2;                  /**< \brief [7:6]   Message Storage Indicator
                                                                    00= No FIFO selected
                                                                    01= FIFO message lost
                                                                    10= Message stored in FIFO 0
                                                                    11= Message stored in FIFO 1 (r) */
    __I  Ifx_UReg_32Bit FIDX:7;                 /**< \brief [14:8]  Filter Index
                                                                    Index of matching filter element.
                                                                    Range is 0 to SIDFC.LSS - 1 resp. XIDFC.LSE - 1. (r) */
    __I  Ifx_UReg_32Bit FLST:1;                 /**< \brief [15:15] Filter List
                                                                    Indicates the filter list of the matching filter element.
                                                                    0= Standard Filter List
                                                                    1= Extended Filter List (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_CH_HPMS_Bits;

/** \brief New Data 1 */
typedef struct _Ifx_CANFD_CH_NDAT1_Bits
{
    __IO Ifx_UReg_32Bit ND:32;                  /**< \brief [31:0]  New Data
                                                                    The register holds the New Data flags of Rx Buffers
                                                                    0 to 31. The flags are set when the respective
                                                                    Rx Buffer has been updated from a received frame.
                                                                    The flags remain set until the Host clears them.
                                                                    A flag is cleared by writing a '1' to the
                                                                    corresponding bit position. Writing a '0' has no effect. A hard
                                                                    reset will clear the register.
                                                                    0= Rx Buffer not updated
                                                                    1= Rx Buffer updated from new message (rw) */
} Ifx_CANFD_CH_NDAT1_Bits;

/** \brief New Data 2 */
typedef struct _Ifx_CANFD_CH_NDAT2_Bits
{
    __IO Ifx_UReg_32Bit ND:32;                  /**< \brief [31:0]  New Data
                                                                    The register holds the New Data flags of Rx Buffers
                                                                    32 to 63. The flags are set when the respective
                                                                    Rx Buffer has been updated from a received frame.
                                                                    The flags remain set until the Host clears them.
                                                                    A flag is cleared by writing a '1' to the
                                                                    corresponding bit position. Writing a '0' has no effect. A hard
                                                                    reset will clear the register.
                                                                    0= Rx Buffer not updated
                                                                    1= Rx Buffer updated from new message (rw) */
} Ifx_CANFD_CH_NDAT2_Bits;

/** \brief Rx FIFO 0 Configuration */
typedef struct _Ifx_CANFD_CH_RXF0C_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit F0SA:14;                /**< \brief [15:2]  Rx FIFO 0 Start Address
                                                                    Start address of Rx FIFO 0 in Message RAM (32-bit
                                                                    word address, see Figure 2). (rw) */
    __IO Ifx_UReg_32Bit F0S:7;                  /**< \brief [22:16] Rx FIFO 0 Size
                                                                    0= No Rx FIFO 0
                                                                    1-64= Number of Rx FIFO 0 elements
                                                                    64= Values greater than 64 are interpreted as 64
                                                                    The Rx FIFO 0 elements are indexed from 0 to F0S-1 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit F0WM:7;                 /**< \brief [30:24] Rx FIFO 0 Watermark
                                                                    0= Watermark interrupt disabled
                                                                    1-64= Level for Rx FIFO 0 watermark interrupt
                                                                    (IR.RF0W)
                                                                    64= Watermark interrupt disabled (rw) */
    __IO Ifx_UReg_32Bit F0OM:1;                 /**< \brief [31:31] FIFO 0 Operation Mode
                                                                    FIFO 0 can be operated in blocking or in overwrite
                                                                    mode (see Section 3.4.2).
                                                                    0= FIFO 0 blocking mode
                                                                    1= FIFO 0 overwrite mode (rw) */
} Ifx_CANFD_CH_RXF0C_Bits;

/** \brief Rx FIFO 0 Status */
typedef struct _Ifx_CANFD_CH_RXF0S_Bits
{
    __I  Ifx_UReg_32Bit F0FL:7;                 /**< \brief [6:0]   Rx FIFO 0 Fill Level
                                                                    Number of elements stored in Rx FIFO 0, range 0 to 64.
                                                                    When the software reading the value immediately
                                                                    after writing to RXF0A.F0AI, this value should be
                                                                    read twice to ensure that the update is reflected. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __I  Ifx_UReg_32Bit F0GI:6;                 /**< \brief [13:8]  Rx FIFO 0 Get Index
                                                                    Rx FIFO 0 read index pointer, range 0 to 63.
                                                                    This field is updated by the software writing to
                                                                    RXF0A.F0AI.
                                                                    When the software reading the value immediately
                                                                    after writing to RXF0A.F0AI, this value should be
                                                                    read twice to ensure that the update is reflected. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [15:14] \internal Reserved */
    __I  Ifx_UReg_32Bit F0PI:6;                 /**< \brief [21:16] Rx FIFO 0 Put Index
                                                                    Rx FIFO 0 write index pointer, range 0 to 63. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __I  Ifx_UReg_32Bit F0F:1;                  /**< \brief [24:24] Rx FIFO 0 Full
                                                                    0= Rx FIFO 0 not full
                                                                    1= Rx FIFO 0 full
                                                                    When the software reading the value immediately
                                                                    after writing to RXF0A.F0AI, this value should be
                                                                    read twice to ensure that the update is reflected. (r) */
    __I  Ifx_UReg_32Bit RF0L:1;                 /**< \brief [25:25] Rx FIFO 0 Message Lost
                                                                    This bit is a copy of interrupt flag IR.RF0L.
                                                                    When IR.RF0L is reset, this bit is also reset.
                                                                    0= No Rx FIFO 0 message lost
                                                                    1= Rx FIFO 0 message lost, also set after write
                                                                    attempt to Rx FIFO 0 of size zero (r) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [31:26] \internal Reserved */
} Ifx_CANFD_CH_RXF0S_Bits;

/** \brief Rx FIFO 0 Acknowledge */
typedef struct _Ifx_CANFD_CH_RXF0A_Bits
{
    __IO Ifx_UReg_32Bit F0AI:6;                 /**< \brief [5:0]   Rx FIFO 0 Acknowledge Index
                                                                    After the Host has read a message or a sequence of
                                                                    messages from Rx FIFO 0 it has to write the
                                                                    buffer index of the last element read from Rx FIFO
                                                                    0 to F0AI. This will set the Rx FIFO 0 Get Index
                                                                    RXF0S.F0GI to F0AI + 1 and update the FIFO 0 Fill
                                                                    Level RXF0S.F0FL. (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_CANFD_CH_RXF0A_Bits;

/** \brief Rx Buffer Configuration */
typedef struct _Ifx_CANFD_CH_RXBC_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit RBSA:14;                /**< \brief [15:2]  Rx Buffer Start Address
                                                                    Configures the start address of the Rx Buffers
                                                                    section in the Message RAM (32-bit word address).
                                                                    Also used to reference debug messages A,B,C. (rw) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_CH_RXBC_Bits;

/** \brief Rx FIFO 1 Configuration */
typedef struct _Ifx_CANFD_CH_RXF1C_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit F1SA:14;                /**< \brief [15:2]  Rx FIFO 1 Start Address
                                                                    Start address of Rx FIFO 1 in Message RAM (32-bit
                                                                    word address, see Figure 2). (rw) */
    __IO Ifx_UReg_32Bit F1S:7;                  /**< \brief [22:16] Rx FIFO 1 Size
                                                                    0= No Rx FIFO 1
                                                                    1-64= Number of Rx FIFO 1 elements
                                                                    64= Values greater than 64 are interpreted as 64
                                                                    The Rx FIFO 1 elements are indexed from 0 to F1S - 1 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [23:23] \internal Reserved */
    __IO Ifx_UReg_32Bit F1WM:7;                 /**< \brief [30:24] Rx FIFO 1 Watermark
                                                                    0= Watermark interrupt disabled
                                                                    1-64= Level for Rx FIFO 1 watermark interrupt
                                                                    (IR.RF1W)
                                                                    64= Watermark interrupt disabled (rw) */
    __IO Ifx_UReg_32Bit F1OM:1;                 /**< \brief [31:31] FIFO 1 Operation Mode
                                                                    FIFO 1 can be operated in blocking or in overwrite
                                                                    mode (see Section 3.4.2).
                                                                    0= FIFO 1 blocking mode
                                                                    1= FIFO 1 overwrite mode (rw) */
} Ifx_CANFD_CH_RXF1C_Bits;

/** \brief Rx FIFO 1 Status */
typedef struct _Ifx_CANFD_CH_RXF1S_Bits
{
    __I  Ifx_UReg_32Bit F1FL:7;                 /**< \brief [6:0]   Rx FIFO 1 Fill Level
                                                                    Number of elements stored in Rx FIFO 1, range 0 to 64.
                                                                    When the software reading the value immediately
                                                                    after writing to RXF1A.F1AI, this value should be
                                                                    read twice to ensure that the update is reflected. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __I  Ifx_UReg_32Bit F1GI:6;                 /**< \brief [13:8]  Rx FIFO 1 Get Index
                                                                    Rx FIFO 1 read index pointer, range 0 to 63.
                                                                    This field is updated by the software writing to
                                                                    RXF1A.F1AI.
                                                                    When the software reading the value immediately
                                                                    after writing to RXF1A.F1AI, this value should be
                                                                    read twice to ensure that the update is reflected. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [15:14] \internal Reserved */
    __I  Ifx_UReg_32Bit F1PI:6;                 /**< \brief [21:16] Rx FIFO 1 Put Index
                                                                    Rx FIFO 1 write index pointer, range 0 to 63. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __I  Ifx_UReg_32Bit F1F:1;                  /**< \brief [24:24] Rx FIFO 1 Full
                                                                    0= Rx FIFO 1 not full
                                                                    1= Rx FIFO 1 full
                                                                    When the software reading the value immediately
                                                                    after writing to RXF1A.F1AI, this value should be
                                                                    read twice to ensure that the update is reflected. (r) */
    __I  Ifx_UReg_32Bit RF1L:1;                 /**< \brief [25:25] Rx FIFO 1 Message Lost
                                                                    This bit is a copy of interrupt flag IR.RF1L.
                                                                    When IR.RF1L is reset, this bit is also reset.
                                                                    0= No Rx FIFO 1 message lost
                                                                    1= Rx FIFO 1 message lost, also set after write
                                                                    attempt to Rx FIFO 1 of size zero (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [29:26] \internal Reserved */
    __I  Ifx_UReg_32Bit DMS:2;                  /**< \brief [31:30] Debug Message Status
                                                                    00= Idle state, wait for reception of debug
                                                                    messages, DMA request is cleared
                                                                    01= Debug message A received
                                                                    10= Debug messages A, B received
                                                                    11= Debug messages A, B, C received, DMA request is set (r) */
} Ifx_CANFD_CH_RXF1S_Bits;

/** \brief Rx FIFO 1 Acknowledge */
typedef struct _Ifx_CANFD_CH_RXF1A_Bits
{
    __IO Ifx_UReg_32Bit F1AI:6;                 /**< \brief [5:0]   Rx FIFO 1 Acknowledge Index
                                                                    After the Host has read a message or a sequence of
                                                                    messages from Rx FIFO 1 it has to write the
                                                                    buffer index of the last element read from Rx FIFO
                                                                    1 to F1AI. This will set the Rx FIFO 1 Get Index
                                                                    RXF1S.F1GI to F1AI + 1 and update the FIFO 1 Fill
                                                                    Level RXF1S.F1FL. (rw) */
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_CANFD_CH_RXF1A_Bits;

/** \brief Rx Buffer / FIFO Element Size Configuration */
typedef struct _Ifx_CANFD_CH_RXESC_Bits
{
    __IO Ifx_UReg_32Bit F0DS:3;                 /**< \brief [2:0]   Rx FIFO 0 Data Field Size
                                                                    000= 8 byte data field
                                                                    001= 12 byte data field
                                                                    010= 16 byte data field
                                                                    011= 20 byte data field
                                                                    100= 24 byte data field
                                                                    101= 32 byte data field
                                                                    110= 48 byte data field
                                                                    111= 64 byte data field (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit F1DS:3;                 /**< \brief [6:4]   Rx FIFO 1 Data Field Size
                                                                    000= 8 byte data field
                                                                    001= 12 byte data field
                                                                    010= 16 byte data field
                                                                    011= 20 byte data field
                                                                    100= 24 byte data field
                                                                    101= 32 byte data field
                                                                    110= 48 byte data field
                                                                    111= 64 byte data field (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit RBDS:3;                 /**< \brief [10:8]  Rx Buffer Data Field Size
                                                                    000= 8 byte data field
                                                                    001= 12 byte data field
                                                                    010= 16 byte data field
                                                                    011= 20 byte data field
                                                                    100= 24 byte data field
                                                                    101= 32 byte data field
                                                                    110= 48 byte data field
                                                                    111= 64 byte data field (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_CANFD_CH_RXESC_Bits;

/** \brief Tx Buffer Configuration */
typedef struct _Ifx_CANFD_CH_TXBC_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit TBSA:14;                /**< \brief [15:2]  Tx Buffers Start Address
                                                                    Start address of Tx Buffers section in Message RAM
                                                                    (32-bit word address, see Figure 2). (rw) */
    __IO Ifx_UReg_32Bit NDTB:6;                 /**< \brief [21:16] Number of Dedicated Transmit Buffers
                                                                    0= No Dedicated Tx Buffers
                                                                    1-32= Number of Dedicated Tx Buffers
                                                                    32= Values greater than 32 are interpreted as 32 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __IO Ifx_UReg_32Bit TFQS:6;                 /**< \brief [29:24] Transmit FIFO/Queue Size
                                                                    0= No Tx FIFO/Queue
                                                                    1-32= Number of Tx Buffers used for Tx FIFO/Queue
                                                                    32= Values greater than 32 are interpreted as 32 (rw) */
    __IO Ifx_UReg_32Bit TFQM:1;                 /**< \brief [30:30] Tx FIFO/Queue Mode
                                                                    0= Tx FIFO operation
                                                                    1= Tx Queue operation (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [31:31] \internal Reserved */
} Ifx_CANFD_CH_TXBC_Bits;

/** \brief Tx FIFO/Queue Status */
typedef struct _Ifx_CANFD_CH_TXFQS_Bits
{
    __I  Ifx_UReg_32Bit TFFL:6;                 /**< \brief [5:0]   Tx FIFO Free Level
                                                                    Number of consecutive free Tx FIFO elements
                                                                    starting from TFGI, range 0 to 32. Read as zero when
                                                                    Tx Queue operation is configured (TXBC.TFQM = '1') (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __I  Ifx_UReg_32Bit TFGI:5;                 /**< \brief [12:8]  Tx FIFO Get Index
                                                                    Tx FIFO read index pointer, range 0 to 31.
                                                                    Read as zero when Tx Queue operation is configured
                                                                    TXBC.TFQM = '1'). (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __I  Ifx_UReg_32Bit TFQPI:5;                /**< \brief [20:16] Tx FIFO/Queue Put Index
                                                                    Tx FIFO/Queue write index pointer, range 0 to 31. (r) */
    __I  Ifx_UReg_32Bit TFQF:1;                 /**< \brief [21:21] Tx FIFO/Queue Full
                                                                    0= Tx FIFO/Queue not full
                                                                    1= Tx FIFO/Queue full (r) */
    __I  Ifx_UReg_32Bit :10;                    /**< \brief [31:22] \internal Reserved */
} Ifx_CANFD_CH_TXFQS_Bits;

/** \brief Tx Buffer Element Size Configuration */
typedef struct _Ifx_CANFD_CH_TXESC_Bits
{
    __IO Ifx_UReg_32Bit TBDS:3;                 /**< \brief [2:0]   Tx Buffer Data Field Size
                                                                    000= 8 byte data field
                                                                    001= 12 byte data field
                                                                    010= 16 byte data field
                                                                    011= 20 byte data field
                                                                    100= 24 byte data field
                                                                    101= 32 byte data field
                                                                    110= 48 byte data field
                                                                    111= 64 byte data field (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_CANFD_CH_TXESC_Bits;

/** \brief Tx Buffer Request Pending */
typedef struct _Ifx_CANFD_CH_TXBRP_Bits
{
    __I  Ifx_UReg_32Bit TRP:32;                 /**< \brief [31:0]  Transmission Request Pending
                                                                    Each Tx Buffer has its own Transmission Request
                                                                    Pending bit. The bits are set via register TXBAR.
                                                                    The bits are reset after a requested transmission
                                                                    has completed or has been cancelled via register
                                                                    TXBCR.
                                                                    TXBRP bits are set only for those Tx Buffers
                                                                    configured via TXBC. After a TXBRP bit has been set,
                                                                    a Tx scan (see Section 3.5, Tx Handling) is started
                                                                    to check for the pending Tx request with the
                                                                    highest priority (Tx Buffer with lowest Message ID).
                                                                    A cancellation request resets the corresponding
                                                                    transmission request pending bit of register
                                                                    TXBRP.
                                                                    In case a transmission has already been started
                                                                    when a cancellation is requested, this is
                                                                    done at the end of the transmission, regardless
                                                                    whether the transmission was successful or not. The
                                                                    cancellation request bits are reset directly after
                                                                    the corresponding TXBRP bit has been reset.
                                                                    After a cancellation has been requested, a finished
                                                                    cancellation is signaled via TXBCF
                                                                    after successful transmission together with the
                                                                    corresponding TXBTO bit
                                                                    when the transmission has not yet been started at
                                                                    the point of cancellation
                                                                    when the transmission has been aborted due to lost
                                                                    arbitration
                                                                    when an error occurred during frame transmission
                                                                    In DAR mode all transmissions are automatically
                                                                    cancelled if they are not successful. The
                                                                    corresponding TXBCF bit is set for all unsuccessful
                                                                    transmissions.
                                                                    0= No transmission request pending
                                                                    1= Transmission request pending (r) */
} Ifx_CANFD_CH_TXBRP_Bits;

/** \brief Tx Buffer Add Request */
typedef struct _Ifx_CANFD_CH_TXBAR_Bits
{
    __IO Ifx_UReg_32Bit AR:32;                  /**< \brief [31:0]  Add Request
                                                                    Each Tx Buffer has its own Add Request bit.
                                                                    Writing a '1' will set the corresponding Add Request
                                                                    bit; writing a '0' has no impact.
                                                                    This enables the Host to set transmission requests
                                                                    for multiple Tx
                                                                    Buffers with one write to TXBAR.
                                                                    TXBAR bits are set only for those Tx Buffers
                                                                    configured via TXBC.
                                                                    When no Tx scan is running, the bits are reset
                                                                    immediately, else the bits remain set until the Tx scan
                                                                    process has completed.
                                                                    0= No transmission request added
                                                                    1= Transmission requested added (rw) */
} Ifx_CANFD_CH_TXBAR_Bits;

/** \brief Tx Buffer Cancellation Request */
typedef struct _Ifx_CANFD_CH_TXBCR_Bits
{
    __IO Ifx_UReg_32Bit CR:32;                  /**< \brief [31:0]  Cancellation Request
                                                                    Each Tx Buffer has its own Cancellation Request bit.
                                                                    Writing a '1' will set the corresponding
                                                                    Cancellation Request bit; writing a '0' has no impact.
                                                                    This enables the Host to set cancellation
                                                                    requests for multiple Tx Buffers with one write to TXBCR.
                                                                    TXBCR bits are set only for those Tx
                                                                    Buffers configured via TXBC.
                                                                    The bits remain set until the corresponding bit of
                                                                    TXBRP is reset.
                                                                    0= No cancellation pending
                                                                    1= Cancellation pending (rw) */
} Ifx_CANFD_CH_TXBCR_Bits;

/** \brief Tx Buffer Transmission Occurred */
typedef struct _Ifx_CANFD_CH_TXBTO_Bits
{
    __I  Ifx_UReg_32Bit TO:32;                  /**< \brief [31:0]  Transmission Occurred
                                                                    Each Tx Buffer has its own Transmission Occurred bit.
                                                                    The bits are set when the corresponding
                                                                    TXBRP bit is cleared after a successful transmission.
                                                                    The bits are reset when a new transmission
                                                                    is requested by writing a '1' to the corresponding
                                                                    bit of register TXBAR.
                                                                    0= No transmission occurred
                                                                    1= Transmission occurred (r) */
} Ifx_CANFD_CH_TXBTO_Bits;

/** \brief Tx Buffer Cancellation Finished */
typedef struct _Ifx_CANFD_CH_TXBCF_Bits
{
    __I  Ifx_UReg_32Bit CF:32;                  /**< \brief [31:0]  Cancellation Finished
                                                                    Each Tx Buffer has its own Cancellation Finished bit.
                                                                    The bits are set when the corresponding
                                                                    TXBRP bit is cleared after a cancellation was
                                                                    requested via TXBCR. In case the corresponding
                                                                    TXBRP bit was not set at the point of cancellation,
                                                                    CF is set immediately. The bits are reset when a
                                                                    new transmission is requested by writing a '1' to
                                                                    the corresponding bit of register TXBAR.
                                                                    0= No transmit buffer cancellation
                                                                    1= Transmit buffer cancellation finished (r) */
} Ifx_CANFD_CH_TXBCF_Bits;

/** \brief Tx Buffer Transmission Interrupt Enable */
typedef struct _Ifx_CANFD_CH_TXBTIE_Bits
{
    __IO Ifx_UReg_32Bit TIE:32;                 /**< \brief [31:0]  Transmission Interrupt Enable
                                                                    Each Tx Buffer has its own Transmission Interrupt
                                                                    Enable bit.
                                                                    0= Transmission interrupt disabled
                                                                    1= Transmission interrupt enable (rw) */
} Ifx_CANFD_CH_TXBTIE_Bits;

/** \brief Tx Buffer Cancellation Finished Interrupt Enable */
typedef struct _Ifx_CANFD_CH_TXBCIE_Bits
{
    __IO Ifx_UReg_32Bit CFIE:32;                /**< \brief [31:0]  Cancellation Finished Interrupt Enable
                                                                    Each Tx Buffer has its own Cancellation Finished
                                                                    Interrupt Enable bit.
                                                                    0= Cancellation finished interrupt disabled
                                                                    1= Cancellation finished interrupt enabled (rw) */
} Ifx_CANFD_CH_TXBCIE_Bits;

/** \brief Tx Event FIFO Configuration */
typedef struct _Ifx_CANFD_CH_TXEFC_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit EFSA:14;                /**< \brief [15:2]  Event FIFO Start Address
                                                                    Start address of Tx Event FIFO in Message RAM
                                                                    (32-bit word address, see Figure 2). (rw) */
    __IO Ifx_UReg_32Bit EFS:6;                  /**< \brief [21:16] Event FIFO Size
                                                                    0= Tx Event FIFO disabled
                                                                    1-32= Number of Tx Event FIFO elements
                                                                    32= Values greater than 32 are interpreted as 32
                                                                    The Tx Event FIFO elements are indexed from 0 to
                                                                    EFS-1 (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [23:22] \internal Reserved */
    __IO Ifx_UReg_32Bit EFWM:6;                 /**< \brief [29:24] Event FIFO Watermark
                                                                    0= Watermark interrupt disabled
                                                                    1-32= Level for Tx Event FIFO watermark interrupt
                                                                    (IR.TEFW)
                                                                    32= Watermark interrupt disabled (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_CANFD_CH_TXEFC_Bits;

/** \brief Tx Event FIFO Status */
typedef struct _Ifx_CANFD_CH_TXEFS_Bits
{
    __I  Ifx_UReg_32Bit EFFL:6;                 /**< \brief [5:0]   Event FIFO Fill Level
                                                                    Number of elements stored in Tx Event FIFO, range 0 to 32.
                                                                    When the software reading the value immediately
                                                                    after writing to TXEFA.EFAI, this value should be
                                                                    read twice to ensure that the update is reflected. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __I  Ifx_UReg_32Bit EFGI:5;                 /**< \brief [12:8]  Event FIFO Get Index
                                                                    Tx Event FIFO read index pointer, range 0 to 31.
                                                                    This field is updated by the software writing to
                                                                    TXEFA.EFAI.
                                                                    When the software reading the value immediately
                                                                    after writing to TXEFA.EFAI, this value should be
                                                                    read twice to ensure that the update is reflected. (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __I  Ifx_UReg_32Bit EFPI:5;                 /**< \brief [20:16] Event FIFO Put Index
                                                                    Tx Event FIFO write index pointer, range 0 to 31. (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [23:21] \internal Reserved */
    __I  Ifx_UReg_32Bit EFF:1;                  /**< \brief [24:24] Event FIFO Full
                                                                    0= Tx Event FIFO not full
                                                                    1= Tx Event FIFO full
                                                                    When the software reading the value immediately
                                                                    after writing to TXEFA.EFAI, this value should be
                                                                    read twice to ensure that the update is reflected. (r) */
    __I  Ifx_UReg_32Bit TEFL:1;                 /**< \brief [25:25] Tx Event FIFO Element Lost
                                                                    This bit is a copy of interrupt flag IR.TEFL.
                                                                    When IR.TEFL is reset, this bit is also reset.
                                                                    0= No Tx Event FIFO element lost
                                                                    1= Tx Event FIFO element lost, also set after write
                                                                    attempt to Tx Event FIFO of size zero. (r) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [31:26] \internal Reserved */
} Ifx_CANFD_CH_TXEFS_Bits;

/** \brief Tx Event FIFO Acknowledge */
typedef struct _Ifx_CANFD_CH_TXEFA_Bits
{
    __IO Ifx_UReg_32Bit EFAI:5;                 /**< \brief [4:0]   Event FIFO Acknowledge Index
                                                                    After the Host has read an element or a sequence of
                                                                    elements from the Tx Event FIFO it has to write
                                                                    the index of the last element read from Tx Event
                                                                    FIFO to EFAI. This will set the Tx Event FIFO Get
                                                                    Index TXEFS.EFGI to EFAI + 1 and update the Event
                                                                    FIFO Fill Level TXEFS.EFFL. (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_CANFD_CH_TXEFA_Bits;

/** \brief TT Trigger Memory Configuration */
typedef struct _Ifx_CANFD_CH_TTTMC_Bits
{
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [1:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit TMSA:14;                /**< \brief [15:2]  Trigger Memory Start Address
                                                                    Start address of Trigger Memory in Message RAM
                                                                    (32-bit word address, see Figure 2). (rw) */
    __IO Ifx_UReg_32Bit TME:7;                  /**< \brief [22:16] Trigger Memory Elements
                                                                    0= No Trigger Memory
                                                                    1-64= Number of Trigger Memory elements
                                                                    64= Values greater than 64 are interpreted as 64 (rw) */
    __I  Ifx_UReg_32Bit :9;                     /**< \brief [31:23] \internal Reserved */
} Ifx_CANFD_CH_TTTMC_Bits;

/** \brief TT Reference Message Configuration */
typedef struct _Ifx_CANFD_CH_TTRMC_Bits
{
    __IO Ifx_UReg_32Bit RID:29;                 /**< \brief [28:0]  Reference Identifier
                                                                    Identifier transmitted with reference message and
                                                                    used for reference message filtering. Standard or
                                                                    extended reference identifier depending on bit XTD.
                                                                    A standard identifier has to be written to
                                                                    ID[28:18]. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [29:29] \internal Reserved */
    __IO Ifx_UReg_32Bit XTD:1;                  /**< \brief [30:30] Extended Identifier
                                                                    0= 11-bit standard identifier
                                                                    1= 29-bit extended identifier (rw) */
    __IO Ifx_UReg_32Bit RMPS:1;                 /**< \brief [31:31] Reference Message Payload Select
                                                                    Ignored in case of time slaves.
                                                                    0= Reference message has no additional payload
                                                                    1= The following elements are taken from Tx Buffer 0:
                                                                    Message Marker MM, Event FIFO Control EFC, Data
                                                                    Length Code DLC, Data Bytes DB
                                                                    Level 1: bytes 2-8, Level 0,2: bytes 5-8) (rw) */
} Ifx_CANFD_CH_TTRMC_Bits;

/** \brief TT Operation Configuration */
typedef struct _Ifx_CANFD_CH_TTOCF_Bits
{
    __IO Ifx_UReg_32Bit OM:2;                   /**< \brief [1:0]   Operation Mode
                                                                    00= Event-driven CAN communication, default
                                                                    01= TTCAN level 1
                                                                    10= TTCAN level 2
                                                                    11= TTCAN level 0 (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [2:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit GEN:1;                  /**< \brief [3:3]   Gap Enable
                                                                    0= Strictly time-triggered operation
                                                                    1= External event-synchronized time-triggered
                                                                    operation (rw) */
    __IO Ifx_UReg_32Bit TM:1;                   /**< \brief [4:4]   Time Master
                                                                    0= Time Master function disabled
                                                                    1= Potential Time Master (rw) */
    __IO Ifx_UReg_32Bit LDSDL:3;                /**< \brief [7:5]   LD of Synchronization Deviation Limit
                                                                    The Synchronization Deviation Limit SDL is
                                                                    configured by its dual logarithm LDSDL with SDL =
                                                                    2(LDSDL + 5).
                                                                    It should not exceed the clock tolerance given by
                                                                    the CAN bit timing configuration.
                                                                    0x0-7 LD of Synchronization Deviation Limit (SDL <=
                                                                    32...4096) (rw) */
    __IO Ifx_UReg_32Bit IRTO:7;                 /**< \brief [14:8]  Initial Reference Trigger Offset
                                                                    0x00-7F Positive offset, range from 0 to 127 (rw) */
    __IO Ifx_UReg_32Bit EECS:1;                 /**< \brief [15:15] Enable External Clock Synchronization
                                                                    If enabled, TUR configuration (TURCF.NCL only) may
                                                                    be updated during TTCAN operation.
                                                                    0= External clock synchronization in TTCAN Level
                                                                    0,2 disabled
                                                                    1= External clock synchronization in TTCAN Level
                                                                    0,2 enabled (rw) */
    __IO Ifx_UReg_32Bit AWL:8;                  /**< \brief [23:16] Application Watchdog Limit
                                                                    The application watchdog can be disabled by
                                                                    programming AWL to 0x00.
                                                                    0x00-FF Maximum time after which the application
                                                                    has to serve the application watchdog.
                                                                    The application watchdog is incremented once each 256 NTUs. (rw) */
    __IO Ifx_UReg_32Bit EGTF:1;                 /**< \brief [24:24] Enable Global Time Filtering
                                                                    0= Global time filtering in TTCAN Level 0,2 is disabled
                                                                    1= Global time filtering in TTCAN Level 0,2 is
                                                                    enabled (rw) */
    __IO Ifx_UReg_32Bit ECC:1;                  /**< \brief [25:25] Enable Clock Calibration
                                                                    0= Automatic clock calibration in TTCAN Level 0,2
                                                                    is disabled
                                                                    1= Automatic clock calibration in TTCAN Level 0,2
                                                                    is enabled (rw) */
    __IO Ifx_UReg_32Bit EVTP:1;                 /**< \brief [26:26] Event Trigger Polarity
                                                                    0= Rising edge trigger
                                                                    1= Falling edge trigger (rw) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [31:27] \internal Reserved */
} Ifx_CANFD_CH_TTOCF_Bits;

/** \brief TT Matrix Limits */
typedef struct _Ifx_CANFD_CH_TTMLM_Bits
{
    __IO Ifx_UReg_32Bit CCM:6;                  /**< \brief [5:0]   Cycle Count Max
                                                                    0x00 1 Basic Cycle per Matrix Cycle
                                                                    0x01 2 Basic Cycles per Matrix Cycle
                                                                    0x03 4 Basic Cycles per Matrix Cycle
                                                                    0x07 8 Basic Cycles per Matrix Cycle
                                                                    0x0F 16 Basic Cycles per Matrix Cycle
                                                                    0x1F 32 Basic Cycles per Matrix Cycle
                                                                    0x3F 64 Basic Cycles per Matrix Cycle
                                                                    others Reserved (rw) */
    __IO Ifx_UReg_32Bit CSS:2;                  /**< \brief [7:6]   Cycle Start Synchronization
                                                                    Enables sync pulse output at pin m_ttcan_soc.
                                                                    00= No sync pulse
                                                                    01= Sync pulse at start of basic cycle
                                                                    10= Sync pulse at start of matrix cycle
                                                                    11= Reserved (rw) */
    __IO Ifx_UReg_32Bit TXEW:4;                 /**< \brief [11:8]  Tx Enable Window
                                                                    0x0-F Length of Tx enable window, 1-16 NTU cycles (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __IO Ifx_UReg_32Bit ENTT:12;                /**< \brief [27:16] Expected Number of Tx Triggers
                                                                    0x000-FFF Expected number of Tx Triggers in one
                                                                    Matrix Cycle (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [31:28] \internal Reserved */
} Ifx_CANFD_CH_TTMLM_Bits;

/** \brief TUR Configuration */
typedef struct _Ifx_CANFD_CH_TURCF_Bits
{
    __IO Ifx_UReg_32Bit NCL:16;                 /**< \brief [15:0]  Numerator Configuration Low
                                                                    Write access to the TUR Numerator Configuration Low
                                                                    is only possible during configuration with
                                                                    TURCF.ELT = '0' or if TTOCF.EECS (external clock
                                                                    synchronization enabled) is set. When a new
                                                                    value for NCL is written outside TT Configuration
                                                                    Mode, the new value takes effect when
                                                                    TTOST.WECS is cleared to '0'.
                                                                    NCL is locked TTOST.WECS is '1'.
                                                                    0x0000-FFFF Numerator Configuration Low (rw) */
    __IO Ifx_UReg_32Bit DC:14;                  /**< \brief [29:16] Denominator Configuration
                                                                    0x0000 Illegal value
                                                                    0x0001-3FFF Denominator Configuration (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [30:30] \internal Reserved */
    __IO Ifx_UReg_32Bit ELT:1;                  /**< \brief [31:31] Enable Local Time
                                                                    0= Local time is stopped, default
                                                                    1= Local time is enabled (rw) */
} Ifx_CANFD_CH_TURCF_Bits;

/** \brief TT Operation Control */
typedef struct _Ifx_CANFD_CH_TTOCN_Bits
{
    __IO Ifx_UReg_32Bit SGT:1;                  /**< \brief [0:0]   Set Global time
                                                                    Writing a '1' to SGT sets TTOST.WGDT if the node is
                                                                    the actual Time Master. SGT is reset after one
                                                                    Host clock period.
                                                                    The global time preset takes effect when the node
                                                                    transmits the next reference
                                                                    message with the Master_Ref_Mark modified by the
                                                                    preset value written to TTGTP. (rw) */
    __IO Ifx_UReg_32Bit ECS:1;                  /**< \brief [1:1]   External Clock Synchronization
                                                                    Writing a '1' to ECS sets TTOST.WECS if the node is
                                                                    the actual Time Master. ECS is reset after one
                                                                    Host clock period.
                                                                    The external clock synchronization takes effect at
                                                                    the start of the next basic cycle. (rw) */
    __IO Ifx_UReg_32Bit SWP:1;                  /**< \brief [2:2]   Stop Watch Polarity
                                                                    0= Rising edge trigger
                                                                    1= Falling edge trigger (rw) */
    __IO Ifx_UReg_32Bit SWS:2;                  /**< \brief [4:3]   Stop Watch Source
                                                                    00= Stop Watch disabled
                                                                    01= Actual value of cycle time is copied to
                                                                    TTCPT.SWV
                                                                    10= Actual value of local time is copied to
                                                                    TTCPT.SWV
                                                                    11= Actual value of global time is copied to
                                                                    TTCPT.SWV (rw) */
    __IO Ifx_UReg_32Bit RTIE:1;                 /**< \brief [5:5]   Register Time Mark Interrupt Pulse Enable
                                                                    Register time mark interrupts are configured by
                                                                    register TTTMK. A register time mark interrupt pulse
                                                                    with the length of one NTU is generated when the
                                                                    time referenced by TTOCN.TMC (cycle, local, or
                                                                    global) equals TTTMK.TM, independent of the
                                                                    synchronization state.
                                                                    0= Register Time Mark Interrupt output m_ttcan_rtp disabled
                                                                    1= Register Time Mark Interrupt output m_ttcan_rtp
                                                                    enabled (rw) */
    __IO Ifx_UReg_32Bit TMC:2;                  /**< \brief [7:6]   Register Time Mark Compare
                                                                    00= No Register Time Mark Interrupt generated
                                                                    01= Register Time Mark Interrupt if Time Mark =
                                                                    cycle time
                                                                    10= Register Time Mark Interrupt if Time Mark =
                                                                    local time
                                                                    11= Register Time Mark Interrupt if Time Mark =
                                                                    global time (rw) */
    __IO Ifx_UReg_32Bit TTIE:1;                 /**< \brief [8:8]   Trigger Time Mark Interrupt Pulse Enable
                                                                    External time mark events are configured by trigger
                                                                    memory element TMEX (see Section 2.4.7). A
                                                                    trigger time mark interrupt pulse is generated when
                                                                    the trigger memory element becomes active,
                                                                    and the M_TTCAN is in synchronization state
                                                                    In_Schedule or In_Gap.
                                                                    0= Trigger Time Mark Interrupt output m_ttcan_tmp disabled
                                                                    1= Trigger Time Mark Interrupt output m_ttcan_tmp
                                                                    enabled (rw) */
    __IO Ifx_UReg_32Bit GCS:1;                  /**< \brief [9:9]   Gap Control Select
                                                                    0= Gap control independent from m_ttcan_evt
                                                                    1= Gap control by input pin m_ttcan_evt (rw) */
    __IO Ifx_UReg_32Bit FGP:1;                  /**< \brief [10:10] Finish Gap
                                                                    Set by the CPU, reset by each reference message
                                                                    0= No reference message requested
                                                                    1= Application requested start of reference message (rw) */
    __IO Ifx_UReg_32Bit TMG:1;                  /**< \brief [11:11] Time Mark Gap
                                                                    0= Reset by each reference message
                                                                    1= Next reference message started when Register
                                                                    Time Mark interrupt TTIR.RTMI is activated (rw) */
    __IO Ifx_UReg_32Bit NIG:1;                  /**< \brief [12:12] Next is Gap
                                                                    This bit can only be set when the M_TTCAN is the
                                                                    actual Time Master and when it is configured for
                                                                    external event-synchronized time-triggered
                                                                    operation (TTOCF.GEN = '1')
                                                                    0= No action, reset by reception of any reference message
                                                                    1= Transmit next reference message with Next_is_Gap
                                                                    = '1' (rw) */
    __IO Ifx_UReg_32Bit ESCN:1;                 /**< \brief [13:13] External Synchronization Control
                                                                    If enabled the M_TTCAN synchronizes its cycle time
                                                                    phase to an external event signaled by a rising
                                                                    edge at pin m_ttcan_evt (see Section 4.11).
                                                                    0= External synchronization disabled
                                                                    1= External synchronization enabled (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [14:14] \internal Reserved */
    __I  Ifx_UReg_32Bit LCKC:1;                 /**< \brief [15:15] TT Operation Control Register Locked
                                                                    Set by a write access to register TTOCN.
                                                                    Reset when the updated configuration has been
                                                                    synchronized into the CAN clock domain.
                                                                    0= Write access to TTOCN enabled
                                                                    1= Write access to TTOCN locked (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_CH_TTOCN_Bits;

/** \brief TT Global Time Preset */
typedef struct _Ifx_CANFD_CH_TTGTP_Bits
{
    __IO Ifx_UReg_32Bit TP:16;                  /**< \brief [15:0]  Time Preset
                                                                    TP is write-protected while TTOST.WGTD is set.
                                                                    0x0000-7FFF Next Master Reference Mark = Master
                                                                    Reference Mark + TP
                                                                    0x8000 reserved
                                                                    0x8001-FFFF Next Master Reference Mark = Master
                                                                    Reference Mark - (0x10000 - TP) (rw) */
    __IO Ifx_UReg_32Bit CTP:16;                 /**< \brief [31:16] Cycle Time Target Phase
                                                                    CTP is write-protected while TTOCN.ESCN or
                                                                    TTOST.SPL are set (see Section 4.11).
                                                                    0x0000-FFFF Defines target value of cycle time when
                                                                    a rising edge of m_ttcan_evt is expected (rw) */
} Ifx_CANFD_CH_TTGTP_Bits;

/** \brief TT Time Mark */
typedef struct _Ifx_CANFD_CH_TTTMK_Bits
{
    __IO Ifx_UReg_32Bit TM_:16;                 /**< \brief [15:0]  Time Mark
                                                                    0x0000-FFFF Time Mark (rw) */
    __IO Ifx_UReg_32Bit TICC:7;                 /**< \brief [22:16] Time Mark Cycle Code
                                                                    Cycle count for which the time mark is valid.
                                                                    0b000000x valid for all cycles
                                                                    0b000001c valid every second cycle at cycle count mod2 = c
                                                                    0b00001cc valid every fourth cycle at cycle count
                                                                    mod4 = cc
                                                                    0b0001ccc valid every eighth cycle at cycle count
                                                                    mod8 = ccc
                                                                    0b001cccc valid every sixteenth cycle at cycle
                                                                    count mod16 = cccc
                                                                    0b01ccccc valid every thirty-second cycle at cycle
                                                                    count mod32 = ccccc
                                                                    0b1cccccc valid every sixty-fourth cycle at cycle
                                                                    count mod64 = cccccc (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [30:23] \internal Reserved */
    __I  Ifx_UReg_32Bit LCKM:1;                 /**< \brief [31:31] TT Time Mark Register Locked
                                                                    Always set by a write access to registers TTOCN.
                                                                    Set by write access to register TTTMK when
                                                                    TTOCN.TMC != '00'.
                                                                    Reset when the registers have been synchronized
                                                                    into the CAN clock domain.
                                                                    0= Write access to TTTMK enabled
                                                                    1= Write access to TTTMK locked (r) */
} Ifx_CANFD_CH_TTTMK_Bits;

/** \brief TT Interrupt Register */
typedef struct _Ifx_CANFD_CH_TTIR_Bits
{
    __IO Ifx_UReg_32Bit SBC:1;                  /**< \brief [0:0]   Start of Basic Cycle
                                                                    0= No Basic Cycle started since bit has been reset
                                                                    1= Basic Cycle started (rw) */
    __IO Ifx_UReg_32Bit SMC:1;                  /**< \brief [1:1]   Start of Matrix Cycle
                                                                    0= No Matrix Cycle started since bit has been reset
                                                                    1= Matrix Cycle started (rw) */
    __IO Ifx_UReg_32Bit CSM_:1;                 /**< \brief [2:2]   Change of Synchronization Mode
                                                                    0= No change in master to slave relation or
                                                                    schedule synchronization
                                                                    1= Master to slave relation or schedule
                                                                    synchronization changed,
                                                                    also set when TTOST.SPL is reset (rw) */
    __IO Ifx_UReg_32Bit SOG:1;                  /**< \brief [3:3]   Start of Gap
                                                                    0= No reference message seen with Next_is_Gap bit set
                                                                    1= Reference message with Next_is_Gap bit set
                                                                    becomes valid (rw) */
    __IO Ifx_UReg_32Bit RTMI:1;                 /**< \brief [4:4]   Register Time Mark Interrupt
                                                                    Set when time referenced by TTOCN.TMC (cycle,
                                                                    local, or global) equals TTTMK.TM, independent
                                                                    of the synchronization state.
                                                                    0= Time mark not reached
                                                                    1= Time mark reached (rw) */
    __IO Ifx_UReg_32Bit TTMI:1;                 /**< \brief [5:5]   Trigger Time Mark Event Internal
                                                                    Internal time mark events are configured by trigger
                                                                    memory element TMIN (see Section 2.4.7). Set
                                                                    when the trigger memory element becomes active, and
                                                                    the M_TTCAN is in synchronization state
                                                                    In_Gap or In_Schedule.
                                                                    0= Time mark not reached
                                                                    1= Time mark reached (Level 0: cycle time
                                                                    TTOCF.IRTO * 0x200) (rw) */
    __IO Ifx_UReg_32Bit SWE:1;                  /**< \brief [6:6]   Stop Watch Event
                                                                    0= No rising/falling edge at stop watch trigger pin
                                                                    m_ttcan_swt detected
                                                                    1= Rising/falling edge at stop watch trigger pin
                                                                    m_ttcan_swt detected (rw) */
    __IO Ifx_UReg_32Bit GTW:1;                  /**< \brief [7:7]   Global Time Wrap
                                                                    0= No global time wrap occurred
                                                                    1= Global time wrap from 0xFFFF to 0x0000 occurred (rw) */
    __IO Ifx_UReg_32Bit GTD:1;                  /**< \brief [8:8]   Global Time Discontinuity
                                                                    0= No discontinuity of global time
                                                                    1= Discontinuity of global time (rw) */
    __IO Ifx_UReg_32Bit GTE:1;                  /**< \brief [9:9]   Global Time Error
                                                                    Synchronization deviation SD exceeds limit
                                                                    specified by TTOCF.LDSDL, TTCAN Level 0,2 only.
                                                                    0= Synchronization deviation within limit
                                                                    1= Synchronization deviation exceeded limit (rw) */
    __IO Ifx_UReg_32Bit TXU:1;                  /**< \brief [10:10] Tx Count Underflow
                                                                    0= Number of Tx Trigger as expected
                                                                    1= Less Tx trigger than expected in one matrix
                                                                    cycle (rw) */
    __IO Ifx_UReg_32Bit TXO:1;                  /**< \brief [11:11] Tx Count Overflow
                                                                    0= Number of Tx Trigger as expected
                                                                    1= More Tx trigger than expected in one matrix
                                                                    cycle (rw) */
    __IO Ifx_UReg_32Bit SE1:1;                  /**< \brief [12:12] Scheduling Error 1
                                                                    0= No scheduling error 1
                                                                    1= Scheduling error 1 occurred (rw) */
    __IO Ifx_UReg_32Bit SE2:1;                  /**< \brief [13:13] Scheduling Error 2
                                                                    0= No scheduling error 2
                                                                    1= Scheduling error 2 occurred (rw) */
    __IO Ifx_UReg_32Bit ELC:1;                  /**< \brief [14:14] Error Level Changed
                                                                    Not set when error level changed during
                                                                    initialization.
                                                                    0= No change in error level
                                                                    1= Error level changed (rw) */
    __IO Ifx_UReg_32Bit IWT:1;                  /**< \brief [15:15] Initialization Watch Trigger
                                                                    The initialization is restarted by resetting IWT.
                                                                    0= No missing reference message during system startup
                                                                    1= No system startup due to missing reference
                                                                    message (rw) */
    __IO Ifx_UReg_32Bit WT:1;                   /**< \brief [16:16] Watch Trigger
                                                                    0= No missing reference message
                                                                    1= Missing reference message (Level 0: cycle time
                                                                    0xFF00) (rw) */
    __IO Ifx_UReg_32Bit AW:1;                   /**< \brief [17:17] Application Watchdog
                                                                    0= Application watchdog served in time
                                                                    1= Application watchdog not served in time (rw) */
    __IO Ifx_UReg_32Bit CER:1;                  /**< \brief [18:18] Configuration Error
                                                                    Trigger out of order.
                                                                    0= No error found in trigger list
                                                                    1= Error found in trigger list (rw) */
    __I  Ifx_UReg_32Bit :13;                    /**< \brief [31:19] \internal Reserved */
} Ifx_CANFD_CH_TTIR_Bits;

/** \brief TT Interrupt Enable */
typedef struct _Ifx_CANFD_CH_TTIE_Bits
{
    __IO Ifx_UReg_32Bit SBCE:1;                 /**< \brief [0:0]   Start of Basic Cycle Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit SMCE:1;                 /**< \brief [1:1]   Start of Matrix Cycle Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit CSME:1;                 /**< \brief [2:2]   Change of Synchronization Mode Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit SOGE:1;                 /**< \brief [3:3]   Start of Gap Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit RTMIE:1;                /**< \brief [4:4]   Register Time Mark Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TTMIE:1;                /**< \brief [5:5]   Trigger Time Mark Event Internal Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit SWEE:1;                 /**< \brief [6:6]   Stop Watch Event Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit GTWE:1;                 /**< \brief [7:7]   Global Time Wrap Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit GTDE:1;                 /**< \brief [8:8]   Global Time Discontinuity Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit GTEE:1;                 /**< \brief [9:9]   Global Time Error Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TXUE:1;                 /**< \brief [10:10] Tx Count Underflow Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit TXOE:1;                 /**< \brief [11:11] Tx Count Overflow Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit SE1E:1;                 /**< \brief [12:12] Scheduling Error 1 Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit SE2E:1;                 /**< \brief [13:13] Scheduling Error 2 Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit ELCE:1;                 /**< \brief [14:14] Change Error Level Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit IWTE:1;                 /**< \brief [15:15] Initialization Watch Trigger Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit WTE:1;                  /**< \brief [16:16] Watch Trigger Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit AWE_:1;                 /**< \brief [17:17] Application Watchdog Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __IO Ifx_UReg_32Bit CERE:1;                 /**< \brief [18:18] Configuration Error Interrupt Enable
                                                                    0= Interrupt Disabled
                                                                    1= Interrupt Enabled (rw) */
    __I  Ifx_UReg_32Bit :13;                    /**< \brief [31:19] \internal Reserved */
} Ifx_CANFD_CH_TTIE_Bits;

/** \brief TT Interrupt Line Select */
typedef struct _Ifx_CANFD_CH_TTILS_Bits
{
    __IO Ifx_UReg_32Bit SBCL:1;                 /**< \brief [0:0]   Start of Basic Cycle Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit SMCL:1;                 /**< \brief [1:1]   Start of Matrix Cycle Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit CSML:1;                 /**< \brief [2:2]   Change of Synchronization Mode Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit SOGL:1;                 /**< \brief [3:3]   Start of Gap Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit RTMIL:1;                /**< \brief [4:4]   Register Time Mark Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TTMIL:1;                /**< \brief [5:5]   Trigger Time Mark Event Internal Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit SWEL:1;                 /**< \brief [6:6]   Stop Watch Event Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit GTWL:1;                 /**< \brief [7:7]   Global Time Wrap Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit GTDL:1;                 /**< \brief [8:8]   Global Time Discontinuity Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit GTEL:1;                 /**< \brief [9:9]   Global Time Error Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TXUL:1;                 /**< \brief [10:10] Tx Count Underflow Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit TXOL:1;                 /**< \brief [11:11] Tx Count Overflow Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit SE1L:1;                 /**< \brief [12:12] Scheduling Error 1 Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit SE2L:1;                 /**< \brief [13:13] Scheduling Error 2 Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit ELCL:1;                 /**< \brief [14:14] Change Error Level Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit IWTL:1;                 /**< \brief [15:15] Initialization Watch Trigger Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit WTL:1;                  /**< \brief [16:16] Watch Trigger Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit AWL_:1;                 /**< \brief [17:17] Application Watchdog Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __IO Ifx_UReg_32Bit CERL:1;                 /**< \brief [18:18] Configuration Error Interrupt Select
                                                                    0= Assign to interrupt  enabled by ILE.EINT0
                                                                    1= Assign to interrupt enabled by ILE.EINT1 (rw) */
    __I  Ifx_UReg_32Bit :13;                    /**< \brief [31:19] \internal Reserved */
} Ifx_CANFD_CH_TTILS_Bits;

/** \brief TT Operation Status */
typedef struct _Ifx_CANFD_CH_TTOST_Bits
{
    __I  Ifx_UReg_32Bit EL:2;                   /**< \brief [1:0]   Error Level
                                                                    00= Severity 0 - No Error
                                                                    01= Severity 1 - Warning
                                                                    10= Severity 2 - Error
                                                                    11= Severity 3 - Severe Error (r) */
    __I  Ifx_UReg_32Bit MS:2;                   /**< \brief [3:2]   Master State
                                                                    00= Master_Off, no master properties relevant
                                                                    01= Operating as Time Slave
                                                                    10= Operating as Backup Time Master
                                                                    11= Operating as current Time Master (r) */
    __I  Ifx_UReg_32Bit SYS:2;                  /**< \brief [5:4]   Synchronization State
                                                                    00= Out of Synchronization
                                                                    01= Synchronizing to TTCAN communication
                                                                    10= Schedule suspended by Gap (In_Gap)
                                                                    11= Synchronized to schedule (In_Schedule) (r) */
    __I  Ifx_UReg_32Bit QGTP:1;                 /**< \brief [6:6]   Quality of Global Time Phase
                                                                    Only relevant in TTCAN Level 0 and Level 2,
                                                                    otherwise fixed to '0'.
                                                                    0= Global time not valid
                                                                    1= Global time in phase with Time Master (r) */
    __I  Ifx_UReg_32Bit QCS:1;                  /**< \brief [7:7]   Quality of Clock Speed
                                                                    Only relevant in TTCAN Level 0 and Level 2,
                                                                    otherwise fixed to '1'.
                                                                    0= Local clock speed not synchronized to Time
                                                                    Master clock speed
                                                                    1= Synchronization Deviation <= SDL (r) */
    __I  Ifx_UReg_32Bit RTO:8;                  /**< \brief [15:8]  Reference Trigger Offset
                                                                    The Reference Trigger Offset value is a signed
                                                                    integer with a range from -127 (0x81) to 127 (0x7F).
                                                                    There is no notification when the lower limit of
                                                                    -127 is reached. In case the M_TTCAN becomes
                                                                    Time Master (MS[1:0] = '11'), the reset of RTO is
                                                                    delayed due to synchronization between Host and
                                                                    CAN clock domain.
                                                                    For time slaves the value configured by TTOCF.IRTO is read.
                                                                    0x00-FF Actual Reference Trigger offset value (r) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [21:16] \internal Reserved */
    __I  Ifx_UReg_32Bit WGTD:1;                 /**< \brief [22:22] Wait for Global Time Discontinuity
                                                                    0= No global time preset pending
                                                                    1= Node waits for the global time preset to take effect.
                                                                    The bit is reset when the node has transmitted
                                                                    a reference message with Disc_Bit = '1' or after it
                                                                    received a reference message. (r) */
    __I  Ifx_UReg_32Bit GFI:1;                  /**< \brief [23:23] Gap Finished Indicator
                                                                    Set when the CPU writes TTOCN.FGP, or by a time
                                                                    mark interrupt if TMG = '1', or via input pin
                                                                    m_ttcan_evt if TTOCN.GCS = '1'.
                                                                    Not set by Ref_Trigger_Gap or when Gap is finished
                                                                    by another
                                                                    node sending a reference message.
                                                                    0= Reset at the end of each reference message
                                                                    1= Gap finished by M_TTCAN (r) */
    __I  Ifx_UReg_32Bit TMP:3;                  /**< \brief [26:24] Time Master Priority
                                                                    0x0-7 Priority of actual Time Master (r) */
    __I  Ifx_UReg_32Bit GSI:1;                  /**< \brief [27:27] Gap Started Indicator
                                                                    0= No Gap in schedule, reset by each reference
                                                                    message and for all time slaves
                                                                    1= Gap time after Basic Cycle has started (r) */
    __I  Ifx_UReg_32Bit WFE:1;                  /**< \brief [28:28] Wait for Event
                                                                    0= No Gap announced, reset by a reference message
                                                                    with Next_is_Gap = '0'
                                                                    1= Reference message with Next_is_Gap = '1'
                                                                    received (r) */
    __I  Ifx_UReg_32Bit AWE:1;                  /**< \brief [29:29] Application Watchdog Event
                                                                    The application watchdog is served by reading TTOST.
                                                                    When the watchdog is not served in time,
                                                                    bit AWE is set, all TTCAN communication is stopped,
                                                                    and the M_TTCAN is set into Bus Monitoring
                                                                    Mode.
                                                                    0= Application Watchdog served in time
                                                                    1= Failed to serve Application Watchdog in time (r) */
    __I  Ifx_UReg_32Bit WECS:1;                 /**< \brief [30:30] Wait for External Clock Synchronization
                                                                    0= No external clock synchronization pending
                                                                    1= Node waits for external clock synchronization to
                                                                    take effect. The bit is reset at the start of the
                                                                    next basic cycle. (r) */
    __I  Ifx_UReg_32Bit SPL:1;                  /**< \brief [31:31] Schedule Phase Lock
                                                                    The bit is valid only when external synchronization
                                                                    is enabled (TTOCN.ESCN = '1'). In this case it
                                                                    signals that the difference between cycle time
                                                                    configured by TTGTP.CTP and the cycle time at the
                                                                    rising edge at pin m_ttcan_evt is less or equal 9
                                                                    NTU (see Section 4.11).
                                                                    0= Phase outside range
                                                                    1= Phase inside range (r) */
} Ifx_CANFD_CH_TTOST_Bits;

/** \brief TUR Numerator Actual */
typedef struct _Ifx_CANFD_CH_TURNA_Bits
{
    __I  Ifx_UReg_32Bit NAV:18;                 /**< \brief [17:0]  Numerator Actual Value
                                                                    0x0EFFF reserved
                                                                    0x0F000-20FFF Actual numerator value
                                                                    0x21000 reserved (r) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_CANFD_CH_TURNA_Bits;

/** \brief TT Local & Global Time */
typedef struct _Ifx_CANFD_CH_TTLGT_Bits
{
    __I  Ifx_UReg_32Bit LT:16;                  /**< \brief [15:0]  Local Time
                                                                    Non-fractional part of local time, incremented once
                                                                    each local NTU (see Section 4.5).
                                                                    0x0000-FFFF Local time value of TTCAN node (r) */
    __I  Ifx_UReg_32Bit GT:16;                  /**< \brief [31:16] Global Time
                                                                    Non-fractional part of the sum of the node's local
                                                                    time and its local offset (see Section 4.5).
                                                                    0x0000-FFFF Global time value of TTCAN network (r) */
} Ifx_CANFD_CH_TTLGT_Bits;

/** \brief TT Cycle Time & Count */
typedef struct _Ifx_CANFD_CH_TTCTC_Bits
{
    __I  Ifx_UReg_32Bit CT:16;                  /**< \brief [15:0]  Cycle Time
                                                                    Non-fractional part of the difference of the node's
                                                                    local time and Ref_Mark (see Section 4.5).
                                                                    0x0000-FFFF Cycle time value of TTCAN Basic Cycle (r) */
    __I  Ifx_UReg_32Bit CC:6;                   /**< \brief [21:16] Cycle Count
                                                                    0x00-3F Number of actual Basic Cycle in the System
                                                                    Matrix (r) */
    __I  Ifx_UReg_32Bit :10;                    /**< \brief [31:22] \internal Reserved */
} Ifx_CANFD_CH_TTCTC_Bits;

/** \brief TT Capture Time */
typedef struct _Ifx_CANFD_CH_TTCPT_Bits
{
    __I  Ifx_UReg_32Bit CCV:6;                  /**< \brief [5:0]   Cycle Count Value
                                                                    Cycle count value captured together with SWV.
                                                                    0x00-3F Captured cycle count value (r) */
    __I  Ifx_UReg_32Bit :10;                    /**< \brief [15:6]  \internal Reserved */
    __I  Ifx_UReg_32Bit SWV:16;                 /**< \brief [31:16] Stop Watch Value
                                                                    On a rising/falling edge (as configured via
                                                                    TTOCN.SWP) at the Stop Watch Trigger pin
                                                                    m_ttcan_swt, when TTOCN.SWS is != '00' and TTIR.SWE
                                                                    is '0', the actual time value as selected
                                                                    by TTOCN.SWS (cycle, local, global) is copied to
                                                                    SWV and TTIR.SWE will be set to '1'.
                                                                    Capturing of the next stop watch value is enabled
                                                                    by resetting TTIR.SWE.
                                                                    0x0000-FFFF Captured Stop Watch value (r) */
} Ifx_CANFD_CH_TTCPT_Bits;

/** \brief TT Cycle Sync Mark */
typedef struct _Ifx_CANFD_CH_TTCSM_Bits
{
    __I  Ifx_UReg_32Bit CSM:16;                 /**< \brief [15:0]  Cycle Sync Mark
                                                                    The Cycle Sync Mark is measured (r) */
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [31:16] \internal Reserved */
} Ifx_CANFD_CH_TTCSM_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CANFD_Registers_union
 * \{   */
/** \brief Global CAN control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CTL_Bits B;                       /**< \brief Bitfield access */
} Ifx_CANFD_CTL;

/** \brief Global CAN status register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_STATUS_Bits B;                    /**< \brief Bitfield access */
} Ifx_CANFD_STATUS;

/** \brief Consolidated interrupt0 cause register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_INTR0_CAUSE_Bits B;               /**< \brief Bitfield access */
} Ifx_CANFD_INTR0_CAUSE;

/** \brief Consolidated interrupt1 cause register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_INTR1_CAUSE_Bits B;               /**< \brief Bitfield access */
} Ifx_CANFD_INTR1_CAUSE;

/** \brief Time Stamp control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_TS_CTL_Bits B;                    /**< \brief Bitfield access */
} Ifx_CANFD_TS_CTL;

/** \brief Time Stamp counter value */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_TS_CNT_Bits B;                    /**< \brief Bitfield access */
} Ifx_CANFD_TS_CNT;

/** \brief Receive FIFO Top control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXFTOP_CTL_Bits B;             /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXFTOP_CTL;

/** \brief Receive FIFO 0 Top Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXFTOP0_STAT_Bits B;           /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXFTOP0_STAT;

/** \brief Receive FIFO 0 Top Data */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXFTOP0_DATA_Bits B;           /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXFTOP0_DATA;

/** \brief Receive FIFO 1 Top Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXFTOP1_STAT_Bits B;           /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXFTOP1_STAT;

/** \brief Receive FIFO 1 Top Data */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXFTOP1_DATA_Bits B;           /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXFTOP1_DATA;

/** \brief Core Release Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_CREL_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_CREL;

/** \brief Endian Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_ENDN_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_ENDN;

/** \brief Data Bit Timing & Prescaler Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_DBTP_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_DBTP;

/** \brief Test Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TEST_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_TEST;

/** \brief RAM Watchdog */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RWD_Bits B;                    /**< \brief Bitfield access */
} Ifx_CANFD_CH_RWD;

/** \brief CC Control Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_CCCR_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_CCCR;

/** \brief Nominal Bit Timing & Prescaler Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_NBTP_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_NBTP;

/** \brief Timestamp Counter Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TSCC_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_TSCC;

/** \brief Timestamp Counter Value */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TSCV_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_TSCV;

/** \brief Timeout Counter Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TOCC_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_TOCC;

/** \brief Timeout Counter Value */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TOCV_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_TOCV;

/** \brief Error Counter Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_ECR_Bits B;                    /**< \brief Bitfield access */
} Ifx_CANFD_CH_ECR;

/** \brief Protocol Status Register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_PSR_Bits B;                    /**< \brief Bitfield access */
} Ifx_CANFD_CH_PSR;

/** \brief Transmitter Delay Compensation Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TDCR_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_TDCR;

/** \brief Interrupt Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_IR_Bits B;                     /**< \brief Bitfield access */
} Ifx_CANFD_CH_IR;

/** \brief Interrupt Enable */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_IE_Bits B;                     /**< \brief Bitfield access */
} Ifx_CANFD_CH_IE;

/** \brief Interrupt Line Select */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_ILS_Bits B;                    /**< \brief Bitfield access */
} Ifx_CANFD_CH_ILS;

/** \brief Interrupt Line Enable */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_ILE_Bits B;                    /**< \brief Bitfield access */
} Ifx_CANFD_CH_ILE;

/** \brief Global Filter Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_GFC_Bits B;                    /**< \brief Bitfield access */
} Ifx_CANFD_CH_GFC;

/** \brief Standard ID Filter Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_SIDFC_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_SIDFC;

/** \brief Extended ID Filter Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_XIDFC_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_XIDFC;

/** \brief Extended ID AND Mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_XIDAM_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_XIDAM;

/** \brief High Priority Message Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_HPMS_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_HPMS;

/** \brief New Data 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_NDAT1_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_NDAT1;

/** \brief New Data 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_NDAT2_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_NDAT2;

/** \brief Rx FIFO 0 Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXF0C_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXF0C;

/** \brief Rx FIFO 0 Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXF0S_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXF0S;

/** \brief Rx FIFO 0 Acknowledge */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXF0A_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXF0A;

/** \brief Rx Buffer Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXBC_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXBC;

/** \brief Rx FIFO 1 Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXF1C_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXF1C;

/** \brief Rx FIFO 1 Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXF1S_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXF1S;

/** \brief Rx FIFO 1 Acknowledge */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXF1A_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXF1A;

/** \brief Rx Buffer / FIFO Element Size Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_RXESC_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_RXESC;

/** \brief Tx Buffer Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXBC_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXBC;

/** \brief Tx FIFO/Queue Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXFQS_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXFQS;

/** \brief Tx Buffer Element Size Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXESC_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXESC;

/** \brief Tx Buffer Request Pending */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXBRP_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXBRP;

/** \brief Tx Buffer Add Request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXBAR_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXBAR;

/** \brief Tx Buffer Cancellation Request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXBCR_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXBCR;

/** \brief Tx Buffer Transmission Occurred */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXBTO_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXBTO;

/** \brief Tx Buffer Cancellation Finished */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXBCF_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXBCF;

/** \brief Tx Buffer Transmission Interrupt Enable */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXBTIE_Bits B;                 /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXBTIE;

/** \brief Tx Buffer Cancellation Finished Interrupt Enable */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXBCIE_Bits B;                 /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXBCIE;

/** \brief Tx Event FIFO Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXEFC_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXEFC;

/** \brief Tx Event FIFO Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXEFS_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXEFS;

/** \brief Tx Event FIFO Acknowledge */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TXEFA_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TXEFA;

/** \brief TT Trigger Memory Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTTMC_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTTMC;

/** \brief TT Reference Message Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTRMC_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTRMC;

/** \brief TT Operation Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTOCF_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTOCF;

/** \brief TT Matrix Limits */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTMLM_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTMLM;

/** \brief TUR Configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TURCF_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TURCF;

/** \brief TT Operation Control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTOCN_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTOCN;

/** \brief TT Global Time Preset */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTGTP_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTGTP;

/** \brief TT Time Mark */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTTMK_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTTMK;

/** \brief TT Interrupt Register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTIR_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTIR;

/** \brief TT Interrupt Enable */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTIE_Bits B;                   /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTIE;

/** \brief TT Interrupt Line Select */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTILS_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTILS;

/** \brief TT Operation Status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTOST_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTOST;

/** \brief TUR Numerator Actual */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TURNA_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TURNA;

/** \brief TT Local & Global Time */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTLGT_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTLGT;

/** \brief TT Cycle Time & Count */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTCTC_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTCTC;

/** \brief TT Capture Time */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTCPT_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTCPT;

/** \brief TT Cycle Sync Mark */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_CANFD_CH_TTCSM_Bits B;                  /**< \brief Bitfield access */
} Ifx_CANFD_CH_TTCSM;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CANFD_CH_M_TTCAN_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief M_TTCAN object */
typedef volatile struct _Ifx_CANFD_CH_M_TTCAN
{
       __I  Ifx_CANFD_CH_CREL                   CREL;                   /**< \brief 0, Core Release Register*/
       __I  Ifx_CANFD_CH_ENDN                   ENDN;                   /**< \brief 4, Endian Register*/
       __I  Ifx_UReg_8Bit                       reserved_8[4];          /**< \brief 8, */
       __IO Ifx_CANFD_CH_DBTP                   DBTP;                   /**< \brief C, Data Bit Timing & Prescaler Register*/
       __IO Ifx_CANFD_CH_TEST                   TEST;                   /**< \brief 10, Test Register*/
       __IO Ifx_CANFD_CH_RWD                    RWD;                    /**< \brief 14, RAM Watchdog*/
       __IO Ifx_CANFD_CH_CCCR                   CCCR;                   /**< \brief 18, CC Control Register*/
       __IO Ifx_CANFD_CH_NBTP                   NBTP;                   /**< \brief 1C, Nominal Bit Timing & Prescaler Register*/
       __IO Ifx_CANFD_CH_TSCC                   TSCC;                   /**< \brief 20, Timestamp Counter Configuration*/
       __IO Ifx_CANFD_CH_TSCV                   TSCV;                   /**< \brief 24, Timestamp Counter Value*/
       __IO Ifx_CANFD_CH_TOCC                   TOCC;                   /**< \brief 28, Timeout Counter Configuration*/
       __IO Ifx_CANFD_CH_TOCV                   TOCV;                   /**< \brief 2C, Timeout Counter Value*/
       __I  Ifx_UReg_8Bit                       reserved_30[16];        /**< \brief 30, */
       __I  Ifx_CANFD_CH_ECR                    ECR;                    /**< \brief 40, Error Counter Register*/
       __I  Ifx_CANFD_CH_PSR                    PSR;                    /**< \brief 44, Protocol Status Register*/
       __IO Ifx_CANFD_CH_TDCR                   TDCR;                   /**< \brief 48, Transmitter Delay Compensation Register*/
       __I  Ifx_UReg_8Bit                       reserved_4C[4];         /**< \brief 4C, */
       __IO Ifx_CANFD_CH_IR                     IR;                     /**< \brief 50, Interrupt Register*/
       __IO Ifx_CANFD_CH_IE                     IE;                     /**< \brief 54, Interrupt Enable*/
       __IO Ifx_CANFD_CH_ILS                    ILS;                    /**< \brief 58, Interrupt Line Select*/
       __IO Ifx_CANFD_CH_ILE                    ILE;                    /**< \brief 5C, Interrupt Line Enable*/
       __I  Ifx_UReg_8Bit                       reserved_60[32];        /**< \brief 60, */
       __IO Ifx_CANFD_CH_GFC                    GFC;                    /**< \brief 80, Global Filter Configuration*/
       __IO Ifx_CANFD_CH_SIDFC                  SIDFC;                  /**< \brief 84, Standard ID Filter Configuration*/
       __IO Ifx_CANFD_CH_XIDFC                  XIDFC;                  /**< \brief 88, Extended ID Filter Configuration*/
       __I  Ifx_UReg_8Bit                       reserved_8C[4];         /**< \brief 8C, */
       __IO Ifx_CANFD_CH_XIDAM                  XIDAM;                  /**< \brief 90, Extended ID AND Mask*/
       __I  Ifx_CANFD_CH_HPMS                   HPMS;                   /**< \brief 94, High Priority Message Status*/
       __IO Ifx_CANFD_CH_NDAT1                  NDAT1;                  /**< \brief 98, New Data 1*/
       __IO Ifx_CANFD_CH_NDAT2                  NDAT2;                  /**< \brief 9C, New Data 2*/
       __IO Ifx_CANFD_CH_RXF0C                  RXF0C;                  /**< \brief A0, Rx FIFO 0 Configuration*/
       __I  Ifx_CANFD_CH_RXF0S                  RXF0S;                  /**< \brief A4, Rx FIFO 0 Status*/
       __IO Ifx_CANFD_CH_RXF0A                  RXF0A;                  /**< \brief A8, Rx FIFO 0 Acknowledge*/
       __IO Ifx_CANFD_CH_RXBC                   RXBC;                   /**< \brief AC, Rx Buffer Configuration*/
       __IO Ifx_CANFD_CH_RXF1C                  RXF1C;                  /**< \brief B0, Rx FIFO 1 Configuration*/
       __I  Ifx_CANFD_CH_RXF1S                  RXF1S;                  /**< \brief B4, Rx FIFO 1 Status*/
       __IO Ifx_CANFD_CH_RXF1A                  RXF1A;                  /**< \brief B8, Rx FIFO 1 Acknowledge*/
       __IO Ifx_CANFD_CH_RXESC                  RXESC;                  /**< \brief BC, Rx Buffer / FIFO Element Size Configuration*/
       __IO Ifx_CANFD_CH_TXBC                   TXBC;                   /**< \brief C0, Tx Buffer Configuration*/
       __I  Ifx_CANFD_CH_TXFQS                  TXFQS;                  /**< \brief C4, Tx FIFO/Queue Status*/
       __IO Ifx_CANFD_CH_TXESC                  TXESC;                  /**< \brief C8, Tx Buffer Element Size Configuration*/
       __I  Ifx_CANFD_CH_TXBRP                  TXBRP;                  /**< \brief CC, Tx Buffer Request Pending*/
       __IO Ifx_CANFD_CH_TXBAR                  TXBAR;                  /**< \brief D0, Tx Buffer Add Request*/
       __IO Ifx_CANFD_CH_TXBCR                  TXBCR;                  /**< \brief D4, Tx Buffer Cancellation Request*/
       __I  Ifx_CANFD_CH_TXBTO                  TXBTO;                  /**< \brief D8, Tx Buffer Transmission Occurred*/
       __I  Ifx_CANFD_CH_TXBCF                  TXBCF;                  /**< \brief DC, Tx Buffer Cancellation Finished*/
       __IO Ifx_CANFD_CH_TXBTIE                 TXBTIE;                 /**< \brief E0, Tx Buffer Transmission Interrupt Enable*/
       __IO Ifx_CANFD_CH_TXBCIE                 TXBCIE;                 /**< \brief E4, Tx Buffer Cancellation Finished Interrupt Enable*/
       __I  Ifx_UReg_8Bit                       reserved_E8[8];         /**< \brief E8, */
       __IO Ifx_CANFD_CH_TXEFC                  TXEFC;                  /**< \brief F0, Tx Event FIFO Configuration*/
       __I  Ifx_CANFD_CH_TXEFS                  TXEFS;                  /**< \brief F4, Tx Event FIFO Status*/
       __IO Ifx_CANFD_CH_TXEFA                  TXEFA;                  /**< \brief F8, Tx Event FIFO Acknowledge*/
       __I  Ifx_UReg_8Bit                       reserved_FC[4];         /**< \brief FC, */
       __IO Ifx_CANFD_CH_TTTMC                  TTTMC;                  /**< \brief 100, TT Trigger Memory Configuration*/
       __IO Ifx_CANFD_CH_TTRMC                  TTRMC;                  /**< \brief 104, TT Reference Message Configuration*/
       __IO Ifx_CANFD_CH_TTOCF                  TTOCF;                  /**< \brief 108, TT Operation Configuration*/
       __IO Ifx_CANFD_CH_TTMLM                  TTMLM;                  /**< \brief 10C, TT Matrix Limits*/
       __IO Ifx_CANFD_CH_TURCF                  TURCF;                  /**< \brief 110, TUR Configuration*/
       __IO Ifx_CANFD_CH_TTOCN                  TTOCN;                  /**< \brief 114, TT Operation Control*/
       __IO Ifx_CANFD_CH_TTGTP                  TTGTP;                  /**< \brief 118, TT Global Time Preset*/
       __IO Ifx_CANFD_CH_TTTMK                  TTTMK;                  /**< \brief 11C, TT Time Mark*/
       __IO Ifx_CANFD_CH_TTIR                   TTIR;                   /**< \brief 120, TT Interrupt Register*/
       __IO Ifx_CANFD_CH_TTIE                   TTIE;                   /**< \brief 124, TT Interrupt Enable*/
       __IO Ifx_CANFD_CH_TTILS                  TTILS;                  /**< \brief 128, TT Interrupt Line Select*/
       __I  Ifx_CANFD_CH_TTOST                  TTOST;                  /**< \brief 12C, TT Operation Status*/
       __I  Ifx_CANFD_CH_TURNA                  TURNA;                  /**< \brief 130, TUR Numerator Actual*/
       __I  Ifx_CANFD_CH_TTLGT                  TTLGT;                  /**< \brief 134, TT Local & Global Time*/
       __I  Ifx_CANFD_CH_TTCTC                  TTCTC;                  /**< \brief 138, TT Cycle Time & Count*/
       __I  Ifx_CANFD_CH_TTCPT                  TTCPT;                  /**< \brief 13C, TT Capture Time*/
       __I  Ifx_CANFD_CH_TTCSM                  TTCSM;                  /**< \brief 140, TT Cycle Sync Mark*/
       __I  Ifx_UReg_8Bit                       reserved_144[60];       /**< \brief 144, */
} Ifx_CANFD_CH_M_TTCAN;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CANFD_CH_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief CH object */
typedef volatile struct _Ifx_CANFD_CH
{
       __IO Ifx_CANFD_CH_M_TTCAN                M_TTCAN;                /**< \brief 0, TTCAN 3PIP, includes FD*/
       __IO Ifx_CANFD_CH_RXFTOP_CTL             RXFTOP_CTL;             /**< \brief 180, Receive FIFO Top control*/
       __I  Ifx_UReg_8Bit                       reserved_184[28];       /**< \brief 184, */
       __I  Ifx_CANFD_CH_RXFTOP0_STAT           RXFTOP0_STAT;           /**< \brief 1A0, Receive FIFO 0 Top Status*/
       __I  Ifx_UReg_8Bit                       reserved_1A4[4];        /**< \brief 1A4, */
       __I  Ifx_CANFD_CH_RXFTOP0_DATA           RXFTOP0_DATA;           /**< \brief 1A8, Receive FIFO 0 Top Data*/
       __I  Ifx_UReg_8Bit                       reserved_1AC[4];        /**< \brief 1AC, */
       __I  Ifx_CANFD_CH_RXFTOP1_STAT           RXFTOP1_STAT;           /**< \brief 1B0, Receive FIFO 1 Top Status*/
       __I  Ifx_UReg_8Bit                       reserved_1B4[4];        /**< \brief 1B4, */
       __I  Ifx_CANFD_CH_RXFTOP1_DATA           RXFTOP1_DATA;           /**< \brief 1B8, Receive FIFO 1 Top Data*/
       __I  Ifx_UReg_8Bit                       reserved_1BC[68];       /**< \brief 1BC, */
} Ifx_CANFD_CH;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_CANFD_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief CANFD object */
typedef volatile struct _Ifx_CANFD
{
       __IO Ifx_CANFD_CH                        CH[8];                  /**< \brief 0, FIFO wrapper around M_TTCAN 3PIP, to enable DMA*/
       __IO Ifx_CANFD_CTL                       CTL;                    /**< \brief 1000, Global CAN control register*/
       __I  Ifx_CANFD_STATUS                    STATUS;                 /**< \brief 1004, Global CAN status register*/
       __I  Ifx_UReg_8Bit                       reserved_1008[8];       /**< \brief 1008, */
       __I  Ifx_CANFD_INTR0_CAUSE               INTR0_CAUSE;            /**< \brief 1010, Consolidated interrupt0 cause register*/
       __I  Ifx_CANFD_INTR1_CAUSE               INTR1_CAUSE;            /**< \brief 1014, Consolidated interrupt1 cause register*/
       __I  Ifx_UReg_8Bit                       reserved_1018[8];       /**< \brief 1018, */
       __IO Ifx_CANFD_TS_CTL                    TS_CTL;                 /**< \brief 1020, Time Stamp control register*/
       __IO Ifx_CANFD_TS_CNT                    TS_CNT;                 /**< \brief 1024, Time Stamp counter value*/
       __I  Ifx_UReg_8Bit                       reserved_1028[126936];  /**< \brief 1028, */
} Ifx_CANFD;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXCANFD_REGDEF_H_ */
