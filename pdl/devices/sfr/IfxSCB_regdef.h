/***************************************************************************//**
* \file IfxSCB_regdef.h
*
* \brief
* SCB Registers
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
* \defgroup IfxSfr_SCB_Registers SCB Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_SCB_Registers_Bitfields Bitfields
* \ingroup IfxSfr_SCB_Registers
*
* \defgroup IfxSfr_SCB_Registers_union Register unions
* \ingroup IfxSfr_SCB_Registers
*
* \defgroup IfxSfr_SCB_Registers_struct Memory map
* \ingroup IfxSfr_SCB_Registers
*
*******************************************************************************/

#ifndef _IFXSCB_REGDEF_H_
#define _IFXSCB_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_SCB_Registers_Bitfields
 * \{  */
/** \brief Generic control */
typedef struct _Ifx_SCB_CTRL_Bits
{
    __IO Ifx_UReg_32Bit OVS:4;                  /**< \brief [3:0]   Serial interface bit period oversampling
                                                                    factor expressed in SCB clock cycles.
                                                                    Used for SPI and UART functionality.
                                                                    OVS + 1 SCB clock cycles constitute a single serial
                                                                    interface clock/bit cycle.
                                                                    This field is NOT used in externally clocked mode.
                                                                    If OVS is odd, the oversampling factor is even and
                                                                    the low and high phase of the interface clock
                                                                    period are the same.
                                                                    If OVS is even, the oversampling factor is odd and
                                                                    the low and high phase can differ by 1 SCB clock period.
                                                                    In SPI master mode, the valid range is [3, 15].
                                                                    At an SCB frequency of 48 MHz, the maximum SPI bit
                                                                    rate is 12 Mbps, assuming ideal (0 ns) IO cell and
                                                                    routing (chip and board) delay.
                                                                    The calculated maximum bit rate decreases, when
                                                                    realistic chip and routing delays are taken into account.
                                                                    The effective system bit rate is dependent on the
                                                                    external SPI slave that we communicate with.
                                                                    If the SPI output clock to SPI MISO input round
                                                                    trip delay is significant (multiple SPI output
                                                                    clock cycles), it may be necessary to increase OVS
                                                                    and/or to set SPI_CTRL.LATE_MISO_SAMPLE to '1' to
                                                                    achieve the maximum possible system bit rate.
                                                                    In SPI slave mode, the OVS field is NOT used.
                                                                    However, there is a frequency requirement for the
                                                                    SCB clock wrt.
                                                                    the SPI input clock (IF) on the interface to
                                                                    guarantee functional correct behavior.
                                                                    This requirement is expressed as a ratio: SCB
                                                                    clock/IF clock.
                                                                    The ratio is dependent on the setting of
                                                                    RX_CTRL.MEDIAN and the external SPI master's
                                                                    capability to support 'late MISO sample'
                                                                    functionality (similar to our SPI master
                                                                    functionality represented by
                                                                    SPI_CTRL.LATE_MISO_SAMPLE):
                                                                    - MEDIAN is '0' and external SPI master has NO
                                                                    'late MISO sample functionality': SCB clock/IF clock >= 6.
                                                                    At a SCB frequency of 48 MHz,  the maximum bit rate
                                                                    is 8 Mbps.
                                                                    - MEDIAN is '0' and external SPI master has 'late
                                                                    MISO sample functionality': SCB clock/IF clock >= 3.
                                                                    At a SCB frequency of 48 MHz,  the maximum bit rate
                                                                    is 16 Mbps.
                                                                    - MEDIAN is '1' and external SPI master has NO
                                                                    'late MISO sample functionality': SCB clock/IF clock >= 8.
                                                                    At a SCB frequency of 48 MHz,  the maximum bit rate
                                                                    is 6 Mbps.
                                                                    - MEDIAN is '1' and external SPI master has 'late
                                                                    MISO sample functionality': SCB clock/IF clock >= 4.
                                                                    At a SCB frequency of 48 MHz,  the maximum bit rate
                                                                    is 12 Mbps.
                                                                    As discussed earlier, the calculated maximum bit
                                                                    rate decreases, when realistic chip and routing
                                                                    delays are taken into account.
                                                                    In UART standard submode (including LIN), the valid
                                                                    range is [7, 15].
                                                                    In UART SmartCard submode, the valid range is [7, 15].
                                                                    In UART TX IrDA submode this field indirectly
                                                                    specifies the oversampling.
                                                                    The oversampling determines the interface clock/bit
                                                                    cycle and the width of the pulse.
                                                                    Only normal transmission mode is supported, the
                                                                    pulse is roughly 3/16 of the bit period (for all
                                                                    bit rates). There is only one valid OVS value:
                                                                    - 0: 16 times oversampling.
                                                                    SCB clock frequency of 16*115.2 KHz for
                                                                    115.2 Kbps.
                                                                    SCB clock frequency of 16*57.6 KHz for
                                                                    57.6 Kbps.
                                                                    SCB clock frequency of 16*38.4 KHz for
                                                                    38.4 Kbps.
                                                                    SCB clock frequency of 16*19.2 KHz for
                                                                    19.2 Kbps.
                                                                    SCB clock frequency of 16*9.6 KHz for
                                                                    9.6 Kbps.
                                                                    SCB clock frequency of 16*2.4 KHz for
                                                                    2.4 Kbps.
                                                                    SCB clock frequency of 16*1.2 KHz for
                                                                    1.2 Kbps.
                                                                    - all other values are not used in normal mode.
                                                                    In UART RX IrDA submode (1.2, 2.4, 9.6, 19.2, 38.4,
                                                                    57.6 and 115.2 Kbps) this field indirectly
                                                                    specifies the oversampling.
                                                                    The oversampling determines the interface clock/bit
                                                                    cycle and the width of the pulse.
                                                                    In normal transmission mode, this pulse is roughly
                                                                    3/16 of the bit period (for all bit rates).
                                                                    In low power transmission mode, this pulse is
                                                                    potentially smaller (down to 1.62 us typical and
                                                                    1.41 us minimal) than 3/16 of the bit period (for <
                                                                    115.2 Kbps bitrates).
                                                                    Pulse widths greater or equal than two SCB clock
                                                                    cycles are guaranteed to be detected by the receiver.
                                                                    Pulse widths less than two SCB clock cycles and
                                                                    greater or equal than one SCB clock cycle may be
                                                                    detected by the receiver.
                                                                    Pulse widths less than one SCB clock cycle will not
                                                                    be detected by the receiver.
                                                                    RX_CTRL.MEDIAN should be set to '1' for IrDA
                                                                    receiver functionality.
                                                                    The SCB clock (as provided by the programmable
                                                                    clock block) and the oversampling together
                                                                    determine the IrDA bitrate.
                                                                    Normal mode, OVS field values (with the required
                                                                    SCB clock frequency):
                                                                    - 0: 16 times oversampling.
                                                                    SCB clock frequency of 16*115.2 KHz for
                                                                    115.2 Kbps.
                                                                    SCB clock frequency of 16*57.6 KHz for
                                                                    57.6 Kbps.
                                                                    SCB clock frequency of 16*38.4 KHz for
                                                                    38.4 Kbps.
                                                                    SCB clock frequency of 16*19.2 KHz for
                                                                    19.2 Kbps.
                                                                    SCB clock frequency of 16*9.6 KHz for
                                                                    9.6 Kbps.
                                                                    SCB clock frequency of 16*2.4 KHz for
                                                                    2.4 Kbps.
                                                                    SCB clock frequency of 16*1.2 KHz for
                                                                    1.2 Kbps.
                                                                    - all other values are not used in normal mode.
                                                                    Low power mode, OVS field values (with the required
                                                                    SCB clock frequency):
                                                                    - 0: 16 times oversampling.
                                                                    SCB clock frequency of 16*115.2 KHz for
                                                                    115.2 Kbps.
                                                                    - 1: 32 times oversampling.
                                                                    SCB clock frequency of 32*57.6 KHz for
                                                                    57.6 Kbps.
                                                                    - 2: 48 times oversampling.
                                                                    SCB clock frequency of 48*38.4 KHz for
                                                                    38.4 Kbps.
                                                                    - 3: 96 times oversampling.
                                                                    SCB clock frequency of 96*19.2 KHz for
                                                                    19.2 Kbps.
                                                                    - 4: 192 times oversampling.
                                                                    SCB clock frequency of 192*9.6 KHz for
                                                                    9.6 Kbps.
                                                                    - 5: 768 times oversampling.
                                                                    SCB clock frequency of 768*2.4 KHz for
                                                                    2.4 Kbps.
                                                                    - 6: 1536 times oversampling.
                                                                    SCB clock frequency of 1536*1.2 KHz for
                                                                    1.2 Kbps.
                                                                    - all other values are not used in low power mode. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [7:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit EC_AM_MODE:1;           /**< \brief [8:8]   This field specifies the clocking for the
                                                                    address matching (I2C) or slave selection detection
                                                                    logic (SPI)
                                                                    '0': Internally clocked mode
                                                                    '1': Externally clocked mode
                                                                    In internally clocked mode, the serial interface
                                                                    protocols run off the SCB clock.
                                                                    In externally clocked mode, the serial interface
                                                                    protocols run off the clock as provided by the
                                                                    serial interface.
                                                                    The clocking for the rest of the logic is
                                                                    determined by CTRL.EC_OP_MODE.
                                                                    Externally clocked mode is only used for
                                                                    synchronous serial interface protocols (SPI and
                                                                    I2C) in slave mode.
                                                                    In SPI mode, only Motorola submode (all Motorola
                                                                    modes: 0, 1, 2, 3) is supported.
                                                                    In UART mode this field should be '0'. (rw) */
    __IO Ifx_UReg_32Bit EC_OP_MODE:1;           /**< \brief [9:9]   This field specifies the clocking for the
                                                                    SCB block
                                                                    '0': Internally clocked mode
                                                                    '1': externally clocked mode
                                                                    In internally clocked mode, the serial interface
                                                                    protocols run off the SCB clock.
                                                                    In externally clocked mode, the serial interface
                                                                    protocols run off the clock as provided by the
                                                                    serial interface.
                                                                    Externally clocked operation mode is only used for
                                                                    synchronous serial interface protocols (SPI and
                                                                    I2C) in slave mode AND EZ mode.
                                                                    In SPI mode, only Motorola submode (all Motorola
                                                                    modes: 0, 1, 2, 3) is supported.
                                                                    The maximum SPI slave, EZ mode bitrate is 48 Mbps
                                                                    (transmission and IO delays outside the IP will
                                                                    degrade the effective bitrate).
                                                                    In UART mode this field should be '0'. (rw) */
    __IO Ifx_UReg_32Bit EZ_MODE:1;              /**< \brief [10:10] Non EZ mode ('0') or EZ mode ('1').
                                                                    In EZ mode, a meta protocol is applied to the
                                                                    serial interface protocol.
                                                                    This meta protocol adds meaning to the data frames
                                                                    transferred by the serial interface protocol: a
                                                                    data frame can represent a memory address, a write
                                                                    memory data element or a read memory data element.
                                                                    EZ mode is only used for synchronous serial
                                                                    interface protocols: SPI and I2C.
                                                                    In SPI mode, only Motorola submode (all Motorola
                                                                    modes: 0, 1, 2, 3) is supported and the transmitter
                                                                    should use continuous data frames; i.e.
                                                                    data frames not separated by slave deselection.
                                                                    This mode is only applicable to slave functionality.
                                                                    In EZ mode, the slave can read from and write to an
                                                                    addressable memory structure of 32 bytes.
                                                                    In EZ mode, data frames should 8-bit in size and
                                                                    should be transmitted and received with the Most
                                                                    Significant Bit (MSB) first.
                                                                    In UART mode this field should be '0'. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __IO Ifx_UReg_32Bit CMD_RESP_MODE:1;        /**< \brief [12:12]  (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [13:13] \internal Reserved */
    __IO Ifx_UReg_32Bit MEM_WIDTH:2;            /**< \brief [15:14]  (rw)
                                                BYTE          : 0u   8-bit FIFO data elements.
                                                                    This mode provides the biggest amount of FIFO
                                                                    entries, but  TX_CTRL.DATA_WIDTH and
                                                                    RX_CTRL.DATA_WIDTH are restricted to [0, 7].
                                                HALFWORD      : 1u   16-bit FIFO data elements.
                                                                    TX_CTRL.DATA_WIDTH and RX_CTRL.DATA_WIDTH are
                                                                    restricted to [0, 15].
                                                WORD          : 2u   32-bit FIFO data elements.
                                                                    This mode provides the smallest amount of FIFO
                                                                    entries, but TX_CTRL.DATA_WIDTH and
                                                                    RX_CTRL.DATA_WIDTH can be in a range of [0, 31].
                                                Reserved      : 3u   This setting is reserved. Do not use. */
    __IO Ifx_UReg_32Bit ADDR_ACCEPT:1;          /**< \brief [16:16] Determines whether a received matching
                                                                    address is accepted in the RX FIFO ('1') or not ('0').
                                                                    In I2C mode, this field is used to allow the slave
                                                                    to put the received slave address or general call
                                                                    address in the RX FIFO.
                                                                    Note that a received matching address is put in the
                                                                    RX FIFO when this bit is '1' for both I2C read and
                                                                    write transfers.
                                                                    In multi-processor UART receiver mode, this field
                                                                    is used to allow the receiver to put the received
                                                                    address in the RX FIFO.
                                                                    Note: non-matching addresses are never put in the RX FIFO. (rw) */
    __IO Ifx_UReg_32Bit BLOCK:1;                /**< \brief [17:17] Only used in externally clocked mode.
                                                                    If the externally clocked logic and the internal
                                                                    CPU accesses to EZ memory coincide/collide, this
                                                                    bit determines whether the CPU access should block
                                                                    and result in bus wait states ('BLOCK is 1') or not
                                                                    (BLOCK is '0').
                                                                    IF BLOCK is '0' and the accesses collide, CPU read
                                                                    operations return 0xffff:ffff and CPU write
                                                                    operations are ignored.
                                                                    Colliding accesses are registered as interrupt
                                                                    causes: INTR_TX.BLOCKED and INTR_RX.BLOCKED. (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [23:18] \internal Reserved */
    __IO Ifx_UReg_32Bit MODE:2;                 /**< \brief [25:24]  (rw)
                                                I2C           : 0u   Inter-Integrated Circuits (I2C) mode.
                                                SPI           : 1u   Serial Peripheral Interface (SPI) mode.
                                                UART          : 2u   Universal Asynchronous Receiver/Transmitter (UART) mode. */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [27:26] \internal Reserved */
    __IO Ifx_UReg_32Bit EC_ACCESS:1;            /**< \brief [28:28] EC_ACCESS is used to enable I2CS_EC or
                                                                    SPIS_EC access to internal EZ memory.
                                                                    1: enable clk_scb
                                                                    0: disable clk_scb
                                                                    Just before going to deepsleep this field should be
                                                                    set to 1.
                                                                    when waking up from DeepSleep power mode, and PLL
                                                                    is locked (clk_scb is at expected frequency), this
                                                                    field should be set to 0. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [30:29] \internal Reserved */
    __IO Ifx_UReg_32Bit ENABLED:1;              /**< \brief [31:31] SCB block is enabled ('1') or not ('0').
                                                                    The proper order in which to initialize SCB is as follows:
                                                                    - Program protocol specific information using
                                                                    SPI_CTRL, UART_CTRL (and UART_TX_CTRL and
                                                                    UART_RX_CTRL) or I2C_CTRL registers.
                                                                    This includes selection of a submode, master/slave
                                                                    functionality and transmitter/receiver
                                                                    functionality when applicable.
                                                                    - Program generic transmitter (TX_CTRL) and
                                                                    receiver (RX_CTRL) information.
                                                                    This includes enabling of the transmitter and
                                                                    receiver functionality.
                                                                    - Program transmitter FIFO (TX_FIFO_CTRL) and
                                                                    receiver FIFO (RX_FIFO_CTRL) information.
                                                                    - Program CTRL register to enable SCB, select the
                                                                    specific operation mode and oversampling factor.
                                                                    Generally when this block is enabled, no control
                                                                    information should be changed.
                                                                    Changes should be made AFTER disabling this block, e.g.
                                                                    to modify the operation mode (from I2C to SPI) or
                                                                    to go from externally to internally clocked.
                                                                    The change takes effect after the block is re-enabled.
                                                                    Note that disabling the block will cause
                                                                    re-initialization of the design and associated
                                                                    state is lost (e.g. FIFO content).
                                                                    Specific to SPI master case,  when SCB is idle,
                                                                    below registers can be changed without disabling
                                                                    SCB block,
                                                                          TX_CTRL
                                                                          TX_FIFO_CTRL
                                                                          RX_CTRL
                                                                          RX_FIFO_CTRL
                                                                          SPI_CTRL.SSEL, (rw) */
} Ifx_SCB_CTRL_Bits;

/* SCB_CTRL.MEM_WIDTH enumerated values */

/** \brief 8-bit FIFO data elements.
This mode provides the biggest amount of FIFO entries, but  TX_CTRL.DATA_WIDTH
and RX_CTRL.DATA_WIDTH are restricted to [0, 7]. */
#define IFX_SCB_CTRL_MEM_WIDTH_BYTE (0u)

/** \brief 16-bit FIFO data elements.
TX_CTRL.DATA_WIDTH and RX_CTRL.DATA_WIDTH are restricted to [0, 15]. */
#define IFX_SCB_CTRL_MEM_WIDTH_HALFWORD (1u)

/** \brief 32-bit FIFO data elements.
This mode provides the smallest amount of FIFO entries, but TX_CTRL.DATA_WIDTH
and RX_CTRL.DATA_WIDTH can be in a range of [0, 31]. */
#define IFX_SCB_CTRL_MEM_WIDTH_WORD (2u)

/** \brief This setting is reserved. Do not use. */
#define IFX_SCB_CTRL_MEM_WIDTH_Reserved (3u)

/* SCB_CTRL.MODE enumerated values */

/** \brief Inter-Integrated Circuits (I2C) mode. */
#define IFX_SCB_CTRL_MODE_I2C (0u)

/** \brief Serial Peripheral Interface (SPI) mode. */
#define IFX_SCB_CTRL_MODE_SPI (1u)

/** \brief Universal Asynchronous Receiver/Transmitter (UART) mode. */
#define IFX_SCB_CTRL_MODE_UART (2u)

/** \brief Generic status */
typedef struct _Ifx_SCB_STATUS_Bits
{
    __I  Ifx_UReg_32Bit EC_BUSY:1;              /**< \brief [0:0]   Indicates whether the externally clocked
                                                                    logic is potentially accessing the EZ memory (this
                                                                    is only possible in EZ mode).
                                                                    This bit can be used by SW to determine whether it
                                                                    is safe to issue a SW access to the EZ memory
                                                                    (without bus wait states (a blocked SW access) or
                                                                    bus errors being generated).
                                                                    Note that the INTR_TX.BLOCKED and INTR_RX.BLOCKED
                                                                    interrupt causes are used to indicate whether a SW
                                                                    access was actually blocked by externally clocked logic. (r) */
    __I  Ifx_UReg_32Bit :31;                    /**< \brief [31:1]  \internal Reserved */
} Ifx_SCB_STATUS_Bits;

/** \brief Command/response control */
typedef struct _Ifx_SCB_CMD_RESP_CTRL_Bits
{
    __IO Ifx_UReg_32Bit BASE_RD_ADDR:9;         /**< \brief [8:0]   I2C/SPI read base address for CMD_RESP mode.
                                                                    At the start of a read transfer this BASE_RD_ADDR
                                                                    is copied to CMD_RESP_STATUS.CURR_RD_ADDR.
                                                                    This field should not be modified during ongoing
                                                                    bus transfers. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [15:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit BASE_WR_ADDR:9;         /**< \brief [24:16] I2C/SPI write base address for CMD_RESP mode.
                                                                    At the start of a write transfer this BASE_WR_ADDR
                                                                    is copied to CMD_RESP_STATUS.CURR_WR_ADDR.
                                                                    This field should not be modified during ongoing
                                                                    bus transfers. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_SCB_CMD_RESP_CTRL_Bits;

/** \brief Command/response status */
typedef struct _Ifx_SCB_CMD_RESP_STATUS_Bits
{
    __I  Ifx_UReg_32Bit CURR_RD_ADDR:9;         /**< \brief [8:0]   I2C/SPI read current address for CMD_RESP mode.
                                                                    HW increments the field after a read access to the
                                                                    memory buffer.
                                                                    However, when the last memory buffer address is
                                                                    reached, the address is NOT incremented (but
                                                                    remains at the maximum memory buffer address).
                                                                    The field is used to determine how many bytes have
                                                                    been read (# bytes = CURR_RD_ADDR -
                                                                    CMD_RESP_CTRL.BASE_RD_ADDR).
                                                                    This field is reliable when there is no bus transfer.
                                                                    This field is potentially unreliable when there is
                                                                    a ongoing bus transfer, i.e.
                                                                    when CMD_RESP_EC_BUSY is '0', the field is reliable. (r) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [15:9]  \internal Reserved */
    __I  Ifx_UReg_32Bit CURR_WR_ADDR:9;         /**< \brief [24:16] I2C/SPI write current address for CMD_RESP mode.
                                                                    HW increments the field after a write access to the
                                                                    memory buffer.
                                                                    However, when the last memory buffer address is
                                                                    reached, the address is NOT incremented (but
                                                                    remains at the maximum memory buffer address).
                                                                    The field is used to determine how many bytes have
                                                                    been written (# bytes = CURR_WR_ADDR -
                                                                    CMD_RESP_CTRL.BASE_WR_ADDR).
                                                                    This field is reliable when there is no bus transfer.
                                                                    This field is potentially unreliable when there is
                                                                    a ongoing bus transfer, i.e.
                                                                    when CMD_RESP_EC_BUSY is '0', the field is reliable. (r) */
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [29:25] \internal Reserved */
    __I  Ifx_UReg_32Bit CMD_RESP_EC_BUS_BUSY:1; /**< \brief [30:30] Indicates whether there is an ongoing bus
                                                                    transfer to the IP.
                                                                    '0': no ongoing bus transfer.
                                                                    '1': ongoing bus transfer.
                                                                    For SPI, the field is '1' when slave mode is
                                                                    selected.
                                                                    For I2C, the field is set to '1' at a I2C START/RESTART.
                                                                    In case of an address match, the  field is set to
                                                                    '0' on a I2C STOP.
                                                                    In case of NO address match, the field is set to
                                                                    '0' after the failing address match. (r) */
    __I  Ifx_UReg_32Bit CMD_RESP_EC_BUSY:1;     /**< \brief [31:31]  (r) */
} Ifx_SCB_CMD_RESP_STATUS_Bits;

/** \brief SPI control */
typedef struct _Ifx_SCB_SPI_CTRL_Bits
{
    __IO Ifx_UReg_32Bit SSEL_CONTINUOUS:1;      /**< \brief [0:0]   Continuous SPI data transfers enabled ('1')
                                                                    or not ('0'). This field is used in master mode.
                                                                    In slave mode, both continuous and non-continuous
                                                                    SPI data transfers are supported independent of
                                                                    this field.
                                                                    When continuous transfers are enabled individual
                                                                    data frame transfers are not necessarily separated
                                                                    by slave deselection (as indicated by the level or
                                                                    pulse on the SELECT line): if the TX FIFO has
                                                                    multiple data frames, data frames are send out
                                                                    without slave deselection.
                                                                    When continuous transfers are not enabled
                                                                    individual data frame transfers are always
                                                                    separated by slave deselection: independent of the
                                                                    availability of TX FIFO data frames, data frames
                                                                    are sent out with slave deselection. (rw) */
    __IO Ifx_UReg_32Bit SELECT_PRECEDE:1;       /**< \brief [1:1]   Only used in SPI Texas Instruments' submode.
                                                                    When '1', the data frame start indication is a
                                                                    pulse on the Slave SELECT line that precedes the
                                                                    transfer of the first data frame bit.
                                                                    When '0', the data frame start indication is a
                                                                    pulse on the Slave SELECT line that coincides with
                                                                    the transfer of the first data frame bit. (rw) */
    __IO Ifx_UReg_32Bit CPHA:1;                 /**< \brief [2:2]    (rw) */
    __IO Ifx_UReg_32Bit CPOL:1;                 /**< \brief [3:3]    (rw) */
    __IO Ifx_UReg_32Bit LATE_SAMPLE:1;          /**< \brief [4:4]   Changes the SCLK edge on which MISO is
                                                                    captured in master mode, or MOSI is captured in
                                                                    slave mode.
                                                                    When '0', the default applies,
                                                                    for Motorola as determined by CPOL and CPHA,
                                                                    for Texas Instruments on the falling edge of
                                                                    SCLK(CPOL is '0' and CPHA is '1'),
                                                                    for National Semiconductors on the rising edge of
                                                                    SCLK(CPOL is '0' and CPHA is '0').
                                                                    When '1', the alternate clock edge is used (which
                                                                    comes half a SPI SCLK period later).
                                                                    for master, applicable to all Motorola, TI and
                                                                    National Semiconductors flavors, and CPOL/CPHA
                                                                    timing mdoes.
                                                                    for slave, applicable to Motorola flavor only, and
                                                                    CPHA=0 timing modes only, and internally-clocked
                                                                    mode only.
                                                                    Late sampling addresses the round trip delay
                                                                    associated with transmitting SCLK from the master
                                                                    to the slave and transmitting MISO from the slave
                                                                    to the master. (rw) */
    __IO Ifx_UReg_32Bit SCLK_CONTINUOUS:1;      /**< \brief [5:5]    (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit SSEL_POLARITY0:1;       /**< \brief [8:8]    (rw) */
    __IO Ifx_UReg_32Bit SSEL_POLARITY1:1;       /**< \brief [9:9]    (rw) */
    __IO Ifx_UReg_32Bit SSEL_POLARITY2:1;       /**< \brief [10:10]  (rw) */
    __IO Ifx_UReg_32Bit SSEL_POLARITY3:1;       /**< \brief [11:11]  (rw) */
    __IO Ifx_UReg_32Bit SSEL_SETUP_DEL:1;       /**< \brief [12:12]  (rw) */
    __IO Ifx_UReg_32Bit SSEL_HOLD_DEL:1;        /**< \brief [13:13]  (rw) */
    __IO Ifx_UReg_32Bit SSEL_INTER_FRAME_DEL:1; /**< \brief [14:14]  (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit LOOPBACK:1;             /**< \brief [16:16] Local loopback control (does NOT affect the
                                                                    information on the pins). Only used in master mode.
                                                                    Not used in National Semiconductors submode.
                                                                    '0': No local loopback
                                                                    '1': the SPI master MISO line is connected to the
                                                                    SPI master MOSI line.
                                                                    In other words, in loopback mode the SPI master
                                                                    receives on MISO what it transmits on MOSI. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [23:17] \internal Reserved */
    __IO Ifx_UReg_32Bit MODE:2;                 /**< \brief [25:24]  (rw)
                                                SPI_MOTOROLA  : 0u   SPI Motorola submode.
                                                                    In master mode, when not transmitting data (SELECT
                                                                    is inactive), SCLK is stable at CPOL.
                                                                    In slave mode, when not selected, SCLK is ignored; i.e.
                                                                    it can be either stable or clocking.
                                                                    In master mode, when there is no data to transmit
                                                                    (TX FIFO is empty), SELECT is inactive.
                                                SPI_TI        : 1u   SPI Texas Instruments submode.
                                                                    In master mode, when not transmitting data, SCLK is
                                                                    stable at '0'.
                                                                    In slave mode, when not selected, SCLK is ignored; i.e.
                                                                    it can be either stable or clocking.
                                                                    In master mode, when there is no data to transmit
                                                                    (TX FIFO is empty), SELECT is inactive; i.e.
                                                                    no pulse is generated.
                                                SPI_NS        : 2u   SPI National Semiconductors submode.
                                                                    In master mode, when not transmitting data, SCLK is
                                                                    stable at '0'.
                                                                    In slave mode, when not selected, SCLK is ignored; i.e.
                                                                    it can be either stable or clocking.
                                                                    In master mode, when there is no data to transmit
                                                                    (TX FIFO is empty), SELECT is inactive. */
    __IO Ifx_UReg_32Bit SSEL:2;                 /**< \brief [27:26] Selects one of the four incoming/outgoing
                                                                    SPI slave select signals:
                                                                    - 0: Slave 0, SSEL[0].
                                                                    - 1: Slave 1, SSEL[1].
                                                                    - 2: Slave 2, SSEL[2].
                                                                    - 3: Slave 3, SSEL[3]. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [30:28] \internal Reserved */
    __IO Ifx_UReg_32Bit MASTER_MODE:1;          /**< \brief [31:31]  (rw) */
} Ifx_SCB_SPI_CTRL_Bits;

/* SCB_SPI_CTRL.MODE enumerated values */

/** \brief SPI Motorola submode.
In master mode, when not transmitting data (SELECT is inactive), SCLK is stable
at CPOL. In slave mode, when not selected, SCLK is ignored; i.e.
it can be either stable or clocking.
In master mode, when there is no data to transmit (TX FIFO is empty), SELECT is
inactive. */
#define IFX_SCB_SPI_CTRL_MODE_SPI_MOTOROLA (0u)

/** \brief SPI Texas Instruments submode.
In master mode, when not transmitting data, SCLK is stable at '0'.
In slave mode, when not selected, SCLK is ignored; i.e.
it can be either stable or clocking.
In master mode, when there is no data to transmit (TX FIFO is empty), SELECT is
inactive; i.e. no pulse is generated. */
#define IFX_SCB_SPI_CTRL_MODE_SPI_TI (1u)

/** \brief SPI National Semiconductors submode.
In master mode, when not transmitting data, SCLK is stable at '0'.
In slave mode, when not selected, SCLK is ignored; i.e.
it can be either stable or clocking.
In master mode, when there is no data to transmit (TX FIFO is empty), SELECT is
inactive. */
#define IFX_SCB_SPI_CTRL_MODE_SPI_NS (2u)

/** \brief SPI status */
typedef struct _Ifx_SCB_SPI_STATUS_Bits
{
    __I  Ifx_UReg_32Bit BUS_BUSY:1;             /**< \brief [0:0]   SPI bus is busy.
                                                                    The bus is considered busy ('1') during an ongoing
                                                                    transaction.
                                                                    For Motorola and National submodes, the busy bit is
                                                                    '1', when the slave selection is activated.
                                                                    For TI submode, the busy bit is '1' from the time
                                                                    the preceding/coinciding slave select is activated
                                                                    for the first transmitted data frame, till the last
                                                                    MOSI/MISO bit of the last data frame is transmitted. (r) */
    __I  Ifx_UReg_32Bit SPI_EC_BUSY:1;          /**< \brief [1:1]   Indicates whether the externally clocked
                                                                    logic is potentially accessing the EZ memory and/or
                                                                    updating BASE_ADDR or CURR_ADDR (this is only
                                                                    possible in EZ mode).
                                                                    This bit can be used by SW to determine whether
                                                                    BASE_ADDR and CURR_ADDR are reliable. (r) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [7:2]   \internal Reserved */
    __I  Ifx_UReg_32Bit CURR_EZ_ADDR:8;         /**< \brief [15:8]  SPI current EZ address. Current address pointer.
                                                                    This field is only reliable in internally clocked mode.
                                                                    In externally clocked mode the field may be
                                                                    unreliable (during an ongoing transfer when
                                                                    SPI_EC_BUSY is '1'), as clock domain
                                                                    synchronization is not performed in the design. (r) */
    __I  Ifx_UReg_32Bit BASE_EZ_ADDR:8;         /**< \brief [23:16] SPI base EZ address.
                                                                    Address as provided by a SPI write transfer.
                                                                    This field is only reliable in internally clocked mode.
                                                                    In externally clocked mode the field may be
                                                                    unreliable, as clock domain synchronization is not
                                                                    performed in the design. (r) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SCB_SPI_STATUS_Bits;

/** \brief SPI transmitter control */
typedef struct _Ifx_SCB_SPI_TX_CTRL_Bits
{
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [3:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit PARITY:1;               /**< \brief [4:4]   Parity bit.
                                                                    When '0', the transmitter generates an even parity.
                                                                    When '1', the transmitter generates an odd parity. (rw) */
    __IO Ifx_UReg_32Bit PARITY_ENABLED:1;       /**< \brief [5:5]   Parity generation enabled ('1') or not ('0'). (rw) */
    __I  Ifx_UReg_32Bit :10;                    /**< \brief [15:6]  \internal Reserved */
    __IO Ifx_UReg_32Bit MOSI_IDLE_HIGH:1;       /**< \brief [16:16] SPI master MOSI output level when SELECT
                                                                    output inactive,
                                                                    0: retain the level of last data bit
                                                                    1: change to high,
                                                                    (MOSI level is high, before the first data bit
                                                                    time, and after data bit time, defined SSEL/SCLK
                                                                    driving edge with CPOL/CPHA) (rw) */
    __I  Ifx_UReg_32Bit :15;                    /**< \brief [31:17] \internal Reserved */
} Ifx_SCB_SPI_TX_CTRL_Bits;

/** \brief SPI receiver control */
typedef struct _Ifx_SCB_SPI_RX_CTRL_Bits
{
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [3:0]   \internal Reserved */
    __IO Ifx_UReg_32Bit PARITY:1;               /**< \brief [4:4]   Parity bit.
                                                                    When '0', the receiver expects an even parity.
                                                                    When '1', the receiver expects an odd parity. (rw) */
    __IO Ifx_UReg_32Bit PARITY_ENABLED:1;       /**< \brief [5:5]   Parity checking enabled ('1') or not ('0'). (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit DROP_ON_PARITY_ERROR:1; /**< \brief [8:8]   Behavior when a parity check fails.
                                                                    When '0', received data is send to the RX FIFO.
                                                                    When '1', received data is dropped and lost. (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_SCB_SPI_RX_CTRL_Bits;

/** \brief UART control */
typedef struct _Ifx_SCB_UART_CTRL_Bits
{
    __I  Ifx_UReg_32Bit :16;                    /**< \brief [15:0]  \internal Reserved */
    __IO Ifx_UReg_32Bit LOOPBACK:1;             /**< \brief [16:16] Local loopback control (does NOT affect the
                                                                    information on the pins).
                                                                    0: Loopback is not enabled
                                                                    1: UART_TX is connected to UART_RX.
                                                                    UART_RTS is connected to UART_CTS.
                                                                    This allows a SCB UART transmitter to communicate
                                                                    with its receiver counterpart. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [23:17] \internal Reserved */
    __IO Ifx_UReg_32Bit MODE:2;                 /**< \brief [25:24]  (rw)
                                                UART_STD      : 0u   Standard UART submode.
                                                UART_SMARTCARD: 1u   SmartCard (ISO7816) submode.
                                                                    Support for negative acknowledgement (NACK) on the
                                                                    receiver side and retransmission on the transmitter side.
                                                UART_IRDA     : 2u   Infrared Data Association (IrDA) submode.
                                                                    Return to Zero modulation scheme. */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [31:26] \internal Reserved */
} Ifx_SCB_UART_CTRL_Bits;

/* SCB_UART_CTRL.MODE enumerated values */

/** \brief Standard UART submode. */
#define IFX_SCB_UART_CTRL_MODE_UART_STD (0u)

/** \brief SmartCard (ISO7816) submode.
Support for negative acknowledgement (NACK) on the receiver side and
retransmission on the transmitter side. */
#define IFX_SCB_UART_CTRL_MODE_UART_SMARTCARD (1u)

/** \brief Infrared Data Association (IrDA) submode. Return to Zero modulation scheme. */
#define IFX_SCB_UART_CTRL_MODE_UART_IRDA (2u)

/** \brief UART transmitter control */
typedef struct _Ifx_SCB_UART_TX_CTRL_Bits
{
    __IO Ifx_UReg_32Bit STOP_BITS:3;            /**< \brief [2:0]   Stop bits.
                                                                    STOP_BITS + 1 is the duration of the stop period in
                                                                    terms of halve bit periods. Valid range is [1, 7]; i.e.
                                                                    a stop period should last at least one bit period. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit PARITY:1;               /**< \brief [4:4]   Parity bit.
                                                                    When '0', the transmitter generates an even parity.
                                                                    When '1', the transmitter generates an odd parity.
                                                                    Only applicable in standard UART and SmartCard submodes. (rw) */
    __IO Ifx_UReg_32Bit PARITY_ENABLED:1;       /**< \brief [5:5]   Parity generation enabled ('1') or not ('0').
                                                                    Only applicable in standard UART submodes.
                                                                    In SmartCard submode, parity generation is always
                                                                    enabled through hardware.
                                                                    In IrDA submode, parity generation is always
                                                                    disabled through hardware (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __IO Ifx_UReg_32Bit RETRY_ON_NACK:1;        /**< \brief [8:8]   When '1', a data frame is retransmitted
                                                                    when a negative acknowledgement is received.
                                                                    Only applicable to the SmartCard submode. (rw) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_SCB_UART_TX_CTRL_Bits;

/** \brief UART receiver control */
typedef struct _Ifx_SCB_UART_RX_CTRL_Bits
{
    __IO Ifx_UReg_32Bit STOP_BITS:3;            /**< \brief [2:0]   Stop bits.
                                                                    STOP_BITS + 1 is the duration of the stop period in
                                                                    terms of half bit periods. Valid range is [1, 7]; i.e.
                                                                    a stop period should last at least one bit period.
                                                                    Note that in case of a stop bits error, the
                                                                    successive data frames may get lost as the receiver
                                                                    needs to resynchronize its start bit detection.
                                                                    The amount of lost data frames depends on both the
                                                                    amount of stop bits, the idle time between data
                                                                    frames and the data frame value. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit PARITY:1;               /**< \brief [4:4]    (rw) */
    __IO Ifx_UReg_32Bit PARITY_ENABLED:1;       /**< \brief [5:5]    (rw) */
    __IO Ifx_UReg_32Bit POLARITY:1;             /**< \brief [6:6]   Inverts incoming RX line signal.
                                                                    Inversion is after local loopback.
                                                                    This functionality is intended for IrDA receiver
                                                                    functionality. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [7:7]   \internal Reserved */
    __IO Ifx_UReg_32Bit DROP_ON_PARITY_ERROR:1; /**< \brief [8:8]   Behavior when a parity check fails.
                                                                    When '0', received data is sent to the RX FIFO.
                                                                    When '1', received data is dropped and lost.
                                                                    Only applicable in standard UART and SmartCard
                                                                    submodes (negatively acknowledged SmartCard data
                                                                    frames may be dropped with this field). (rw) */
    __IO Ifx_UReg_32Bit DROP_ON_FRAME_ERROR:1;  /**< \brief [9:9]   Behavior when an error is detected in a
                                                                    start or stop period.
                                                                    When '0', received data is sent to the RX FIFO.
                                                                     When '1', received data is dropped and lost. (rw) */
    __IO Ifx_UReg_32Bit MP_MODE:1;              /**< \brief [10:10]  (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [11:11] \internal Reserved */
    __IO Ifx_UReg_32Bit LIN_MODE:1;             /**< \brief [12:12] Only applicable in standard UART submode.
                                                                    When '1', the receiver performs break detection and
                                                                    baud rate detection on the incoming data.
                                                                    First, break detection counts the amount of bit
                                                                    periods that have a line value of '0'.
                                                                    BREAK_WIDTH specifies the minimum required amount
                                                                    of bit periods.
                                                                    Successful break detection sets the
                                                                    INTR_RX.BREAK_DETECT interrupt cause to '1'.
                                                                    Second, baud rate detection counts the amount of
                                                                    peripheral clock periods that are use to receive
                                                                    the synchronization byte (0x55; least significant
                                                                    bit first).
                                                                    The count is available through UART_RX_STATUS.BR_COUNTER.
                                                                    Successful baud rate detection sets the
                                                                    INTR_RX.BAUD_DETECT interrupt cause to '1'
                                                                    (BR_COUNTER is reliable).
                                                                    This functionality is used to synchronize/refine
                                                                    the receiver clock to the transmitter clock.
                                                                    The receiver software can use the BR_COUNTER value
                                                                    to set the right IP clock (from the programmable
                                                                    clock IP) to guarantee successful receipt of the
                                                                    first LIN data frame (Protected Identifier Field)
                                                                    after the synchronization byte. (rw) */
    __IO Ifx_UReg_32Bit SKIP_START:1;           /**< \brief [13:13]  (rw) */
    __IO Ifx_UReg_32Bit HDRXEN:1;               /**< \brief [14:14]  (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [15:15] \internal Reserved */
    __IO Ifx_UReg_32Bit BREAK_WIDTH:4;          /**< \brief [19:16]  (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [23:20] \internal Reserved */
    __IO Ifx_UReg_32Bit BREAK_LEVEL:1;          /**< \brief [24:24]  (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [31:25] \internal Reserved */
} Ifx_SCB_UART_RX_CTRL_Bits;

/** \brief UART receiver status */
typedef struct _Ifx_SCB_UART_RX_STATUS_Bits
{
    __I  Ifx_UReg_32Bit BR_COUNTER:12;          /**< \brief [11:0]  Amount of SCB clock periods that constitute
                                                                    the transmission of a 0x55 data frame (sent least
                                                                    significant bit first) as determined by the receiver.
                                                                    BR_COUNTER / 8 is the amount of SCB clock periods
                                                                    that constitute a bit period.
                                                                    This field has valid data when INTR_RX.BAUD_DETECT
                                                                    is set to '1'. (r) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_SCB_UART_RX_STATUS_Bits;

/** \brief UART flow control */
typedef struct _Ifx_SCB_UART_FLOW_CTRL_Bits
{
    __IO Ifx_UReg_32Bit TRIGGER_LEVEL:8;        /**< \brief [7:0]   Trigger level.
                                                                    When the receiver FIFO has less entries than the
                                                                    amount of this field, a Ready To Send (RTS) output
                                                                    signal is activated.
                                                                    By setting this field to '0', flow control is
                                                                    effectively disabled (may be useful for debug purposes). (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit RTS_POLARITY:1;         /**< \brief [16:16] Polarity of the RTS output signal:
                                                                    '0': RTS is active low;
                                                                    '1': RTS is active high;
                                                                    During SCB reset (Hibernate system power mode), RTS
                                                                    output signal is '1'.
                                                                    This represents an inactive state assuming an
                                                                    active low polarity. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [23:17] \internal Reserved */
    __IO Ifx_UReg_32Bit CTS_POLARITY:1;         /**< \brief [24:24] Polarity of the CTS input signal
                                                                    '0': CTS is active low ;
                                                                    '1': CTS is active high; (rw) */
    __IO Ifx_UReg_32Bit CTS_ENABLED:1;          /**< \brief [25:25] Enable use of CTS input signal by the UART
                                                                    transmitter:
                                                                    '0': Disabled.
                                                                    The UART transmitter ignores the CTS input signal
                                                                    and transmits when a data frame is available for
                                                                    transmission in the TX FIFO or the TX shift
                                                                    register.
                                                                    '1': Enabled.
                                                                    The UART transmitter uses CTS input signal to
                                                                    qualify the transmission of data.
                                                                    It transmits when CTS input signal is active and a
                                                                    data frame is available for transmission in the TX
                                                                    FIFO or the TX shift register.
                                                                    If UART_CTRL.LOOPBACK is '1', the CTS input signal
                                                                    is driven by the RTS output signal locally in SCB
                                                                    (both signals are subjected to signal polarity
                                                                    changes are indicated by RTS_POLARITY and CTS_POLARITY). (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [31:26] \internal Reserved */
} Ifx_SCB_UART_FLOW_CTRL_Bits;

/** \brief I2C control */
typedef struct _Ifx_SCB_I2C_CTRL_Bits
{
    __IO Ifx_UReg_32Bit HIGH_PHASE_OVS:4;       /**< \brief [3:0]   Serial I2C interface high phase
                                                                    oversampling factor.
                                                                    HIGH_PHASE_OVS + 1 SCB clock periods constitute the
                                                                    high phase of a bit period.
                                                                    The valid range is [5, 15] with input signal median
                                                                    filtering and [4, 15] without input signal median
                                                                    filtering.
                                                                    The field is only used in master mode.
                                                                    In slave mode, the field is NOT used.
                                                                    However, there is a frequency requirement for the
                                                                    SCB clock wrt.
                                                                    the regular interface (IF) high time to guarantee
                                                                    functional correct behavior.
                                                                    With input signal median filtering, the IF high
                                                                    time should be >= 6 SCB clock cycles and <= 16 SCB
                                                                    clock cycles.
                                                                    Without input signal median filtering, the IF high
                                                                    time should be >= 5 SCB clock cycles and <= 16 SCB
                                                                    clock cycles. (rw) */
    __IO Ifx_UReg_32Bit LOW_PHASE_OVS:4;        /**< \brief [7:4]   Serial I2C interface low phase oversampling factor.
                                                                    LOW_PHASE_OVS + 1 SCB clock periods constitute the
                                                                    low phase of a bit period.
                                                                    The valid range is [7, 15] with input signal median
                                                                    filtering and [6, 15] without input signal median
                                                                    filtering.
                                                                    The field is only used in master mode.
                                                                    In slave mode, the field is NOT used.
                                                                    However, there is a frequency requirement for the
                                                                    SCB clock wrt.
                                                                    the regular (no stretching) interface (IF) low time
                                                                    to guarantee functionally correct behavior.
                                                                    With input signal median filtering, the IF low time
                                                                    should be >= 8 SCB clock cycles and <= 16 IP clock cycles.
                                                                    Without input signal median filtering, the IF low
                                                                    time should be >= 7 SCB clock cycles and <= 16 SCB
                                                                    clock cycles.
                                                                    in slave mode, this field is used to define number
                                                                    of clk_scb cycles for tSU-DAT timing (from
                                                                    ACK/NACK/data ready, to SCL rising edge (released
                                                                    from I2C slave clock stretching)) (rw) */
    __IO Ifx_UReg_32Bit M_READY_DATA_ACK:1;     /**< \brief [8:8]    (rw) */
    __IO Ifx_UReg_32Bit M_NOT_READY_DATA_NACK:1; /**< \brief [9:9]    (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [10:10] \internal Reserved */
    __IO Ifx_UReg_32Bit S_GENERAL_IGNORE:1;     /**< \brief [11:11]  (rw) */
    __IO Ifx_UReg_32Bit S_READY_ADDR_ACK:1;     /**< \brief [12:12]  (rw) */
    __IO Ifx_UReg_32Bit S_READY_DATA_ACK:1;     /**< \brief [13:13]  (rw) */
    __IO Ifx_UReg_32Bit S_NOT_READY_ADDR_NACK:1; /**< \brief [14:14] This field is used during an address match
                                                                    or general call address in internally clocked mode
                                                                    Only used when:
                                                                    - EC_AM_MODE is '0', EC_OP_MODE is '0',
                                                                    S_GENERAL_IGNORE is '0] and non EZ mode.
                                                                    Functionality is as follows:
                                                                    - 1: a received (matching) slave address is
                                                                    immediately NACK'd when the receiver FIFO is full.
                                                                    - 0: clock stretching is performed (till the
                                                                    receiver FIFO is no longer full).
                                                                    For externally clocked logic (EC_AM is '1') on an
                                                                    address match or general call address (and
                                                                    S_GENERAL_IGNORE is '0').
                                                                    Only used when (NOT used when EC_AM is '1' and
                                                                    EC_OP is '1' and address match and EZ mode):
                                                                    - EC_AM is '1' and EC_OP is '0'.
                                                                    - EC_AM is '1' and general call address match.
                                                                    - EC_AM is '1' and non EZ mode.
                                                                    Functionality is as follows:
                                                                    - 1: a received (matching or general) slave address
                                                                    is always immediately NACK'd.
                                                                    There are two possibilities:
                                                                    1).
                                                                    the SCB clock is available (in Active system power
                                                                    mode) and it handles the rest of the current transfer.
                                                                    In this case the I2C master will not observe the NACK.
                                                                    2).SCB clock is not present (in DeepSleep
                                                                    system power mode).
                                                                    In this case the I2C master will observe the NACK
                                                                    and may retry the transfer in the future (which
                                                                    gives the internally clocked logic the time to wake
                                                                    up from DeepSleep system power mode).
                                                                    - 0: clock stretching is performed (till the SCB
                                                                    clock is available).
                                                                    The logic will handle the ongoing transfer as soon
                                                                    as the clock is enabled. (rw) */
    __IO Ifx_UReg_32Bit S_NOT_READY_DATA_NACK:1; /**< \brief [15:15] Only used when:
                                                                    - non EZ mode
                                                                    Functionality is as follows:
                                                                    - 1: a received data element byte the slave is
                                                                    immediately NACK'd when the receiver FIFO is full.
                                                                    - 0: clock stretching is performed (till the
                                                                    receiver FIFO is no longer full). (rw) */
    __IO Ifx_UReg_32Bit LOOPBACK:1;             /**< \brief [16:16] Local loopback control (does NOT affect the
                                                                    information on the pins).
                                                                    Only applicable in master/slave mode.
                                                                    When '0', no loopback
                                                                    When '1', loopback is enabled internally in the
                                                                    peripheral, and as a result unaffected by other I2C
                                                                    devices.
                                                                    This allows a SCB I2C peripheral to address itself. (rw) */
    __I  Ifx_UReg_32Bit :13;                    /**< \brief [29:17] \internal Reserved */
    __IO Ifx_UReg_32Bit SLAVE_MODE:1;           /**< \brief [30:30]  (rw) */
    __IO Ifx_UReg_32Bit MASTER_MODE:1;          /**< \brief [31:31]  (rw) */
} Ifx_SCB_I2C_CTRL_Bits;

/** \brief I2C status */
typedef struct _Ifx_SCB_I2C_STATUS_Bits
{
    __I  Ifx_UReg_32Bit BUS_BUSY:1;             /**< \brief [0:0]   I2C bus is busy.
                                                                    The bus is considered busy ('1'), from the time a
                                                                    START is detected or from the time the SCL line is '0'.
                                                                    The bus is considered idle ('0'), from the time a
                                                                    STOP is detected.
                                                                    If SCB block is disabled, BUS_BUSY is '0'.
                                                                    After enabling the block, it takes time for the
                                                                    BUS_BUSY to detect a busy bus.
                                                                    This time is the maximum high time of the SCL line.
                                                                    For a 100 kHz interface frequency, this maximum
                                                                    high time may last roughly 5 us (half a bit period).
                                                                    For single master systems, BUS_BUSY does not have
                                                                    to be used to detect an idle bus before a master
                                                                    starts a transfer using I2C_M_CMD.M_START (no bus
                                                                    collisions).
                                                                    For multi-master systems, BUS_BUSY can be used to
                                                                    detect an idle bus before a master starts a
                                                                    transfer using I2C_M_CMD.M_START_ON_IDLE (to
                                                                    prevent bus collisions). (r) */
    __I  Ifx_UReg_32Bit I2C_EC_BUSY:1;          /**< \brief [1:1]    (r) */
    __I  Ifx_UReg_32Bit I2CS_IC_BUSY:1;         /**< \brief [2:2]    (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __I  Ifx_UReg_32Bit S_READ:1;               /**< \brief [4:4]    (r) */
    __I  Ifx_UReg_32Bit M_READ:1;               /**< \brief [5:5]    (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __I  Ifx_UReg_32Bit CURR_EZ_ADDR:8;         /**< \brief [15:8]   (r) */
    __I  Ifx_UReg_32Bit BASE_EZ_ADDR:8;         /**< \brief [23:16]  (r) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_SCB_I2C_STATUS_Bits;

/** \brief I2C master command */
typedef struct _Ifx_SCB_I2C_M_CMD_Bits
{
    __IO Ifx_UReg_32Bit M_START:1;              /**< \brief [0:0]   When '1', transmit a START or REPEATED START.
                                                                    Whether a START or REPEATED START is transmitted
                                                                    depends on the state of the master state machine.
                                                                    A START is only transmitted when the master state
                                                                    machine is in the default state.
                                                                    A REPEATED START is transmitted when the master
                                                                    state machine is not in the default state, but is
                                                                    working on an ongoing transaction.
                                                                    The REPEATED START can only be transmitted after a
                                                                    NACK or ACK has been received for a transmitted
                                                                    data element or after a NACK has been transmitted
                                                                    for a received data element.
                                                                    When this action is performed, the hardware sets
                                                                    this field to '0'. (rw) */
    __IO Ifx_UReg_32Bit M_START_ON_IDLE:1;      /**< \brief [1:1]   When '1', transmit a START as soon as the
                                                                    bus is idle (I2C_STATUS.BUS_BUSY is '0', note that
                                                                    BUSY has a default value of '0').
                                                                    For bus idle detection the hardware relies on STOP
                                                                    detection.
                                                                    As a result, bus idle detection is only functional
                                                                    after at least one I2C bus transfer has been
                                                                    detected on the bus (default/reset value of BUSY is '0') .
                                                                    A START is only transmitted when the master state
                                                                    machine is in the default state.
                                                                    When this action is performed, the hardware sets
                                                                    this field to '0'. (rw) */
    __IO Ifx_UReg_32Bit M_ACK:1;                /**< \brief [2:2]   When '1', attempt to transmit an
                                                                    acknowledgement (ACK).
                                                                    When this action is performed, the hardware sets
                                                                    this field to '0'. (rw) */
    __IO Ifx_UReg_32Bit M_NACK:1;               /**< \brief [3:3]   for I2C master, the NACKed byte should be
                                                                    properly received.
                                                                    it write  the data byte, before ACK/NACK decision.
                                                                    When '1', attempt to transmit a negative
                                                                    acknowledgement (NACK).
                                                                    if the reciever FIFO is full (the received data
                                                                    byte cannot be written), it stretch SCL(extend SCL
                                                                    low phase) until the receiver FIFO changes to not
                                                                    full, to write the last byte, then send out NACK.
                                                                    When this action is performed, the hardware sets
                                                                    this field to '0'. (rw) */
    __IO Ifx_UReg_32Bit M_STOP:1;               /**< \brief [4:4]   When '1', attempt to transmit a STOP.
                                                                    When this action is performed, the hardware sets
                                                                    this field to '0'.
                                                                    I2C_M_CMD.M_START has a higher priority than this
                                                                    command: in situations where both a STOP and a
                                                                    REPEATED START could be transmitted, M_START takes
                                                                    precedence over M_STOP. (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_SCB_I2C_M_CMD_Bits;

/** \brief I2C slave command */
typedef struct _Ifx_SCB_I2C_S_CMD_Bits
{
    __IO Ifx_UReg_32Bit S_ACK:1;                /**< \brief [0:0]   When '1', attempt to transmit an
                                                                    acknowledgement (ACK).
                                                                    When this action is performed, the hardware sets
                                                                    this field to '0'.
                                                                    In EZ mode, this field should be set to '0' (it is
                                                                    only to be used in non EZ mode). (rw) */
    __IO Ifx_UReg_32Bit S_NACK:1;               /**< \brief [1:1]   When '1', attempt to transmit a negative
                                                                    acknowledgement (NACK).
                                                                    When this action is performed, the hardware sets
                                                                    this field to '0'.
                                                                    In EZ mode, this field should be set to '0' (it is
                                                                    only to be used in non EZ mode).
                                                                    This command has a higher priority than
                                                                    I2C_S_CMD.S_ACK, I2C_CTRL.S_READY_ADDR_ACK or
                                                                    I2C_CTRL.S_READY_DATA_ACK. (rw) */
    __IO Ifx_UReg_32Bit S_TX_ONES_ON_EMPTY:1;   /**< \brief [2:2]   When '1', attempt to send ones when TX_FIFO
                                                                    is empty.
                                                                    Once hardware starts to send ones, it will continue
                                                                    send ones until NACK is received, regardless of
                                                                    TX_FIFO status (even if new data is written into
                                                                    TX_FIFO).
                                                                    This bit is used to avoid stretching SCL, which is
                                                                    not expected for some master devices. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_SCB_I2C_S_CMD_Bits;

/** \brief I2C configuration */
typedef struct _Ifx_SCB_I2C_CFG_Bits
{
    __IO Ifx_UReg_32Bit SDA_IN_FILT_TRIM:2;     /**< \brief [1:0]   Trim settings for the 50ns glitch filter on
                                                                    the SDA input.
                                                                    Default setting meets the I2C glitch rejections specs.
                                                                    Programmability available if required (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit SDA_IN_FILT_SEL:1;      /**< \brief [4:4]   Enable for 50ns glitch filter on SDA input
                                                                    '0': 0 ns.
                                                                    '1: 50 ns (filter enabled). (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit SCL_IN_FILT_TRIM:2;     /**< \brief [9:8]   Trim settings for the 50ns glitch filter on
                                                                    the SDA input.
                                                                    Default setting meets the I2C glitch rejections specs.
                                                                    Programmability available if required (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [11:10] \internal Reserved */
    __IO Ifx_UReg_32Bit SCL_IN_FILT_SEL:1;      /**< \brief [12:12] Enable for 50ns glitch filter on SCL input
                                                                    '0': 0 ns.
                                                                    '1: 50 ns (filter enabled). (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [15:13] \internal Reserved */
    __IO Ifx_UReg_32Bit SDA_OUT_FILT0_TRIM:2;   /**< \brief [17:16] Trim settings for the 50ns delay filter on
                                                                    SDA output used to guarantee tHD_DAT I2C parameter.
                                                                    Default setting meets the I2C spec.
                                                                    Programmability available if required (rw) */
    __IO Ifx_UReg_32Bit SDA_OUT_FILT1_TRIM:2;   /**< \brief [19:18] Trim settings for the 50ns delay filter on
                                                                    SDA output used to guarantee tHD_DAT I2C parameter.
                                                                    Default setting meets the I2C spec.
                                                                    Programmability available if required (rw) */
    __IO Ifx_UReg_32Bit SDA_OUT_FILT2_TRIM:2;   /**< \brief [21:20] Trim settings for the 50ns delay filter on
                                                                    SDA output used to guarantee tHD_DAT I2C parameter.
                                                                    Default setting meets the I2C spec.
                                                                    Programmability available if required (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [27:22] \internal Reserved */
    __IO Ifx_UReg_32Bit SDA_OUT_FILT_SEL:2;     /**< \brief [29:28] Selection of cumulative filter delay on SDA
                                                                    output to meet tHD_DAT parameter
                                                                    '0': 0 ns.
                                                                    '1': 50 ns (filter 0 enabled).
                                                                    '2': 100 ns (filters 0 and 1 enabled).
                                                                    '3': 150 ns (filters 0, 1 and 2 enabled). (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [31:30] \internal Reserved */
} Ifx_SCB_I2C_CFG_Bits;

/** \brief I2C stretch control */
typedef struct _Ifx_SCB_I2C_STRETCH_CTRL_Bits
{
    __IO Ifx_UReg_32Bit STRETCH_THRESHOLD:4;    /**< \brief [3:0]    (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_SCB_I2C_STRETCH_CTRL_Bits;

/** \brief I2C stretch status */
typedef struct _Ifx_SCB_I2C_STRETCH_STATUS_Bits
{
    __I  Ifx_UReg_32Bit STRETCH_COUNT:4;        /**< \brief [3:0]    (r) */
    __I  Ifx_UReg_32Bit STRETCH_DETECTED:1;     /**< \brief [4:4]    (r) */
    __I  Ifx_UReg_32Bit SYNC_DETECTED:1;        /**< \brief [5:5]    (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [7:6]   \internal Reserved */
    __I  Ifx_UReg_32Bit STRETCHING:1;           /**< \brief [8:8]    (r) */
    __I  Ifx_UReg_32Bit :23;                    /**< \brief [31:9]  \internal Reserved */
} Ifx_SCB_I2C_STRETCH_STATUS_Bits;

/** \brief Timeout generation support 0 control */
typedef struct _Ifx_SCB_TGS_CTL0_Bits
{
    __IO Ifx_UReg_32Bit TR_TXFIFO:1;            /**< \brief [0:0]   trigger pulse reloads the counter in case
                                                                    another byte is transmitted (to external)
                                                                    '0': not used
                                                                    '1': falling edge of TX Buffer read request in
                                                                    CMD_RESP and EZ modes or rising edge of TX Buffer
                                                                    read acknowledgment in FIFO mode (rw) */
    __IO Ifx_UReg_32Bit TR_RXFIFO:1;            /**< \brief [1:1]   trigger pulse reloads the counter in case
                                                                    another byte is received (from external)
                                                                    '0': not used
                                                                    '1': falling edge of RX Buffer write request in
                                                                    CMD_RESP and EZ modes or rising edge of RX Buffer
                                                                    write acknowledment in FIFO mode (rw) */
    __IO Ifx_UReg_32Bit TR_FCLK:1;              /**< \brief [2:2]   trigger pulse reloads the counter in case
                                                                    of falling edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': falling edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_RCLK:1;              /**< \brief [3:3]   trigger pulse reloads the counter in case
                                                                    of rising edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': rising edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_UART_S:1;            /**< \brief [4:4]   trigger pulse reloads the counter in case
                                                                    of falling edge on UART start bit (TX/RX UART is
                                                                    controlled by SEL_UART_TX reg)
                                                                    '0': not used
                                                                    '1': falling edge of UART start bit (rw) */
    __IO Ifx_UReg_32Bit TR_SPI_S:1;             /**< \brief [5:5]   trigger pulse reloads the counter in case
                                                                    of falling edge on SPI NSS
                                                                    '0': not used
                                                                    '1': falling edge on SPI NSS
                                                                    TGS is not supported in SPI Master mode with
                                                                    multi-slave selection (rw) */
    __IO Ifx_UReg_32Bit TR_I2C_S:1;             /**< \brief [6:6]   trigger pulse reloads the counter in case
                                                                    of I2C start / repeated start condition
                                                                    '0': not used
                                                                    '1': I2C start / repeated start condition detected (rw) */
    __IO Ifx_UReg_32Bit TR_RI2CACK:1;           /**< \brief [7:7]   trigger pulse reloads the counter in case
                                                                    of transmitted/received I2C ACK on the rising edge of SCL
                                                                    '0': not used
                                                                    '1': ACK on the rising edge of I2C SCL
                                                                    Should not be combined with the stop trigger
                                                                    TR_RCLK_P as both of them happen at the rising edge
                                                                    of SCL (rw) */
    __IO Ifx_UReg_32Bit TR_FI2CACK:1;           /**< \brief [8:8]   trigger pulse reloads the counter in case
                                                                    of transmitted/received I2C ACK on the falling edge on SCL
                                                                    '0': not used
                                                                    '1': ACK on the falling edge of I2C SCL
                                                                    Should not be combined with the stop trigger
                                                                    TR_FCLK_P as both of them happen at the falling
                                                                    edge of SCL (rw) */
    __IO Ifx_UReg_32Bit TR_DPSLP2ACT:1;         /**< \brief [9:9]   trigger pulse reloads the counter in case
                                                                    of power state transition from DeepSleep to Active
                                                                    '0': not used
                                                                    '1': DeepSleep to Active power state transition (by
                                                                    rst_act_n assertion) (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit TR_CLK_H:1;             /**< \brief [16:16] counter is gated while clock signal is at
                                                                    HIGH level
                                                                    '0': not used
                                                                    '1': gated while clock signal is at HIGH level (rw) */
    __IO Ifx_UReg_32Bit TR_CLK_L:1;             /**< \brief [17:17] counter is gated while clock signal is at
                                                                    LOW level
                                                                    '0': not used
                                                                    '1': gated while clock signal is at LOW level (rw) */
    __IO Ifx_UReg_32Bit TR_FRAME:1;             /**< \brief [18:18] counter is gated during active frame (In
                                                                    case of UART frame, TX/RX selection is controlled
                                                                    by SEL_UART_TX reg)
                                                                    '0': not used
                                                                    '1': gated during active frame (rw) */
    __IO Ifx_UReg_32Bit TR_FRAME_N:1;           /**< \brief [19:19] counter is gated outside active frame (In
                                                                    case of UART frame, TX/RX selection is controlled
                                                                    by SEL_UART_TX reg)
                                                                    '0': not used
                                                                    '1': gated outside active frame (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [21:20] \internal Reserved */
    __IO Ifx_UReg_32Bit TR_FCLK_P:1;            /**< \brief [22:22] trigger pulse stops the counter in case of
                                                                    falling edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': counter stopped when falling edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_RCLK_P:1;            /**< \brief [23:23] trigger pulse stops the counter in case of
                                                                    rising edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': counter stopped when rising edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_UART_P:1;            /**< \brief [24:24] trigger pulse stops the counter due to
                                                                    detected UART stop bit (TX/RX UART is controlled by
                                                                    SEL_UART_TX reg)
                                                                    UART RX frame errors are considered as stop
                                                                    condition in RX mode
                                                                    '0': not used
                                                                    '1': counter stopped when UART stop bit detected or
                                                                    frame error in RX mode occured (rw) */
    __IO Ifx_UReg_32Bit TR_SPI_NS:1;            /**< \brief [25:25] trigger pulse stops the counter with rising
                                                                    edge of NSS
                                                                    '0': not used
                                                                    '1': counter stopped when rising edge of NSS detected
                                                                    TGS is not supported in SPI Master mode with
                                                                    multi-slave selection (rw) */
    __IO Ifx_UReg_32Bit TR_I2C_P:1;             /**< \brief [26:26] trigger pulse stops the counter when I2C
                                                                    stop condition is detected
                                                                    '0': not used
                                                                    '1': counter stopped when I2C stop condition
                                                                    detected (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [28:27] \internal Reserved */
    __IO Ifx_UReg_32Bit SEL_UART_TX:1;          /**< \brief [29:29] Select one UART direction for the counter
                                                                    (either Tx or Rx UART)
                                                                    '0': RX triggers are used for the counter
                                                                    '1': TX triggers are used for the counter (rw) */
    __IO Ifx_UReg_32Bit STATE_RST:1;            /**< \brief [30:30] timer underflow generates a SCB
                                                                    communication and FIFO reset additionally to the IRQ
                                                                    '0': not used
                                                                    '1': state and FIFO reset enabled (rw) */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] TGS feature enable
                                                                    '0': not used
                                                                    '1': TGS feature is enabled and the counter reacts
                                                                    on trigger conditions
                                                                    TGS is supported in I2C, UART, SPI Slave mode, and
                                                                    SPI Master mode with a single slave selection.
                                                                    TGS is not supported in SPI mode with multi-slave
                                                                    selection and all TGS counters should be disabled
                                                                    in that mode
                                                                    When CTRL.EC_ACCESS is 1'b1, TGS interrupts are
                                                                    blocked and not triggered, even in active power state. (rw) */
} Ifx_SCB_TGS_CTL0_Bits;

/** \brief Timeout generation support 0 counter */
typedef struct _Ifx_SCB_TGS_CNT0_Bits
{
    __IO Ifx_UReg_32Bit COUNT:18;               /**< \brief [17:0]  18bit counter value (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_TGS_CNT0_Bits;

/** \brief Timeout generation support 0 reload */
typedef struct _Ifx_SCB_TGS_REL0_Bits
{
    __IO Ifx_UReg_32Bit RELOAD:18;              /**< \brief [17:0]  18bit reload value for counter (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_TGS_REL0_Bits;

/** \brief Timeout generation support 1 control */
typedef struct _Ifx_SCB_TGS_CTL1_Bits
{
    __IO Ifx_UReg_32Bit TR_TXFIFO:1;            /**< \brief [0:0]   trigger pulse reloads the counter in case
                                                                    another byte is transmitted (to external)
                                                                    '0': not used
                                                                    '1': falling edge of TX Buffer read request in
                                                                    CMD_RESP and EZ modes or rising edge of TX Buffer
                                                                    read acknowledgment in FIFO mode (rw) */
    __IO Ifx_UReg_32Bit TR_RXFIFO:1;            /**< \brief [1:1]   trigger pulse reloads the counter in case
                                                                    another byte is received (from external)
                                                                    '0': not used
                                                                    '1': falling edge of RX Buffer write request in
                                                                    CMD_RESP and EZ modes or rising edge of RX Buffer
                                                                    write acknowledment in FIFO mode (rw) */
    __IO Ifx_UReg_32Bit TR_FCLK:1;              /**< \brief [2:2]   trigger pulse reloads the counter in case
                                                                    of falling edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': falling edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_RCLK:1;              /**< \brief [3:3]   trigger pulse reloads the counter in case
                                                                    of rising edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': rising edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_UART_S:1;            /**< \brief [4:4]   trigger pulse reloads the counter in case
                                                                    of falling edge on UART start bit (TX/RX UART is
                                                                    controlled by SEL_UART_TX reg)
                                                                    '0': not used
                                                                    '1': falling edge of UART start bit (rw) */
    __IO Ifx_UReg_32Bit TR_SPI_S:1;             /**< \brief [5:5]   trigger pulse reloads the counter in case
                                                                    of falling edge on SPI NSS
                                                                    '0': not used
                                                                    '1': falling edge on SPI NSS
                                                                    TGS is not supported in SPI Master mode with
                                                                    multi-slave selection (rw) */
    __IO Ifx_UReg_32Bit TR_I2C_S:1;             /**< \brief [6:6]   trigger pulse reloads the counter in case
                                                                    of I2C start / repeated start condition
                                                                    '0': not used
                                                                    '1': I2C start / repeated start condition detected (rw) */
    __IO Ifx_UReg_32Bit TR_RI2CACK:1;           /**< \brief [7:7]   trigger pulse reloads the counter in case
                                                                    of transmitted/received I2C ACK on the rising edge of SCL
                                                                    '0': not used
                                                                    '1': ACK on the rising edge of I2C SCL
                                                                    Should not be combined with the stop trigger
                                                                    TR_RCLK_P as both of them happen at the rising edge
                                                                    of SCL (rw) */
    __IO Ifx_UReg_32Bit TR_FI2CACK:1;           /**< \brief [8:8]   trigger pulse reloads the counter in case
                                                                    of transmitted/received I2C ACK on the falling edge on SCL
                                                                    '0': not used
                                                                    '1': ACK on the falling edge of I2C SCL
                                                                    Should not be combined with the stop trigger
                                                                    TR_FCLK_P as both of them happen at the falling
                                                                    edge of SCL (rw) */
    __IO Ifx_UReg_32Bit TR_DPSLP2ACT:1;         /**< \brief [9:9]   trigger pulse reloads the counter in case
                                                                    of power state transition from DeepSleep to Active
                                                                    '0': not used
                                                                    '1': DeepSleep to Active power state transition (by
                                                                    rst_act_n assertion) (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit TR_CLK_H:1;             /**< \brief [16:16] counter is gated while clock signal is at
                                                                    HIGH level
                                                                    '0': not used
                                                                    '1': gated while clock signal is at HIGH level (rw) */
    __IO Ifx_UReg_32Bit TR_CLK_L:1;             /**< \brief [17:17] counter is gated while clock signal is at
                                                                    LOW level
                                                                    '0': not used
                                                                    '1': gated while clock signal is at LOW level (rw) */
    __IO Ifx_UReg_32Bit TR_FRAME:1;             /**< \brief [18:18] counter is gated during active frame (In
                                                                    case of UART frame, TX/RX selection is controlled
                                                                    by SEL_UART_TX reg)
                                                                    '0': not used
                                                                    '1': gated during active frame (rw) */
    __IO Ifx_UReg_32Bit TR_FRAME_N:1;           /**< \brief [19:19] counter is gated outside active frame (In
                                                                    case of UART frame, TX/RX selection is controlled
                                                                    by SEL_UART_TX reg)
                                                                    '0': not used
                                                                    '1': gated outside active frame (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [21:20] \internal Reserved */
    __IO Ifx_UReg_32Bit TR_FCLK_P:1;            /**< \brief [22:22] trigger pulse stops the counter in case of
                                                                    falling edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': counter stopped when falling edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_RCLK_P:1;            /**< \brief [23:23] trigger pulse stops the counter in case of
                                                                    rising edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': counter stopped when rising edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_UART_P:1;            /**< \brief [24:24] trigger pulse stops the counter due to
                                                                    detected UART stop bit (TX/RX UART is controlled by
                                                                    SEL_UART_TX reg)
                                                                    UART RX frame errors are considered as stop
                                                                    condition in RX mode
                                                                    '0': not used
                                                                    '1': counter stopped when UART stop bit detected or
                                                                    frame error in RX mode occured (rw) */
    __IO Ifx_UReg_32Bit TR_SPI_NS:1;            /**< \brief [25:25] trigger pulse stops the counter with rising
                                                                    edge of NSS
                                                                    '0': not used
                                                                    '1': counter stopped when rising edge of NSS detected
                                                                    TGS is not supported in SPI Master mode with
                                                                    multi-slave selection (rw) */
    __IO Ifx_UReg_32Bit TR_I2C_P:1;             /**< \brief [26:26] trigger pulse stops the counter when I2C
                                                                    stop condition is detected
                                                                    '0': not used
                                                                    '1': counter stopped when I2C stop condition
                                                                    detected (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [28:27] \internal Reserved */
    __IO Ifx_UReg_32Bit SEL_UART_TX:1;          /**< \brief [29:29] Select one UART direction for the counter
                                                                    (either Tx or Rx UART)
                                                                    '0': RX triggers are used for the counter
                                                                    '1': TX triggers are used for the counter (rw) */
    __IO Ifx_UReg_32Bit STATE_RST:1;            /**< \brief [30:30] timer underflow generates a SCB
                                                                    communication and FIFO reset additionally to the IRQ
                                                                    '0': not used
                                                                    '1': state and FIFO reset enabled (rw) */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] TGS feature enable
                                                                    '0': not used
                                                                    '1': TGS feature is enabled and the counter reacts
                                                                    on trigger conditions
                                                                    TGS is supported in I2C, UART, SPI Slave mode, and
                                                                    SPI Master mode with a single slave selection.
                                                                    TGS is not supported in SPI mode with multi-slave
                                                                    selection and all TGS counters should be disabled
                                                                    in that mode
                                                                    When CTRL.EC_ACCESS is 1'b1, TGS interrupts are
                                                                    blocked and not triggered, even in active power state. (rw) */
} Ifx_SCB_TGS_CTL1_Bits;

/** \brief Timeout generation support 1 counter */
typedef struct _Ifx_SCB_TGS_CNT1_Bits
{
    __IO Ifx_UReg_32Bit COUNT:18;               /**< \brief [17:0]  18bit counter value (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_TGS_CNT1_Bits;

/** \brief Timeout generation support 1 reload */
typedef struct _Ifx_SCB_TGS_REL1_Bits
{
    __IO Ifx_UReg_32Bit RELOAD:18;              /**< \brief [17:0]  18bit reload value for counter (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_TGS_REL1_Bits;

/** \brief Timeout generation support 2 control */
typedef struct _Ifx_SCB_TGS_CTL2_Bits
{
    __IO Ifx_UReg_32Bit TR_TXFIFO:1;            /**< \brief [0:0]   trigger pulse reloads the counter in case
                                                                    another byte is transmitted (to external)
                                                                    '0': not used
                                                                    '1': falling edge of TX Buffer read request in
                                                                    CMD_RESP and EZ modes or rising edge of TX Buffer
                                                                    read acknowledgment in FIFO mode (rw) */
    __IO Ifx_UReg_32Bit TR_RXFIFO:1;            /**< \brief [1:1]   trigger pulse reloads the counter in case
                                                                    another byte is received (from external)
                                                                    '0': not used
                                                                    '1': falling edge of RX Buffer write request in
                                                                    CMD_RESP and EZ modes or rising edge of RX Buffer
                                                                    write acknowledment in FIFO mode (rw) */
    __IO Ifx_UReg_32Bit TR_FCLK:1;              /**< \brief [2:2]   trigger pulse reloads the counter in case
                                                                    of falling edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': falling edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_RCLK:1;              /**< \brief [3:3]   trigger pulse reloads the counter in case
                                                                    of rising edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': rising edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_UART_S:1;            /**< \brief [4:4]   trigger pulse reloads the counter in case
                                                                    of falling edge on UART start bit (TX/RX UART is
                                                                    controlled by SEL_UART_TX reg)
                                                                    '0': not used
                                                                    '1': falling edge of UART start bit (rw) */
    __IO Ifx_UReg_32Bit TR_SPI_S:1;             /**< \brief [5:5]   trigger pulse reloads the counter in case
                                                                    of falling edge on SPI NSS
                                                                    '0': not used
                                                                    '1': falling edge on SPI NSS
                                                                    TGS is not supported in SPI Master mode with
                                                                    multi-slave selection (rw) */
    __IO Ifx_UReg_32Bit TR_I2C_S:1;             /**< \brief [6:6]   trigger pulse reloads the counter in case
                                                                    of I2C start / repeated start condition
                                                                    '0': not used
                                                                    '1': I2C start / repeated start condition detected (rw) */
    __IO Ifx_UReg_32Bit TR_RI2CACK:1;           /**< \brief [7:7]   trigger pulse reloads the counter in case
                                                                    of transmitted/received I2C ACK on the rising edge of SCL
                                                                    '0': not used
                                                                    '1': ACK on the rising edge of I2C SCL
                                                                    Should not be combined with the stop trigger
                                                                    TR_RCLK_P as both of them happen at the rising edge
                                                                    of SCL (rw) */
    __IO Ifx_UReg_32Bit TR_FI2CACK:1;           /**< \brief [8:8]   trigger pulse reloads the counter in case
                                                                    of transmitted/received I2C ACK on the falling edge on SCL
                                                                    '0': not used
                                                                    '1': ACK on the falling edge of I2C SCL
                                                                    Should not be combined with the stop trigger
                                                                    TR_FCLK_P as both of them happen at the falling
                                                                    edge of SCL (rw) */
    __IO Ifx_UReg_32Bit TR_DPSLP2ACT:1;         /**< \brief [9:9]   trigger pulse reloads the counter in case
                                                                    of power state transition from DeepSleep to Active
                                                                    '0': not used
                                                                    '1': DeepSleep to Active power state transition (by
                                                                    rst_act_n assertion) (rw) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [15:10] \internal Reserved */
    __IO Ifx_UReg_32Bit TR_CLK_H:1;             /**< \brief [16:16] counter is gated while clock signal is at
                                                                    HIGH level
                                                                    '0': not used
                                                                    '1': gated while clock signal is at HIGH level (rw) */
    __IO Ifx_UReg_32Bit TR_CLK_L:1;             /**< \brief [17:17] counter is gated while clock signal is at
                                                                    LOW level
                                                                    '0': not used
                                                                    '1': gated while clock signal is at LOW level (rw) */
    __IO Ifx_UReg_32Bit TR_FRAME:1;             /**< \brief [18:18] counter is gated during active frame (In
                                                                    case of UART frame, TX/RX selection is controlled
                                                                    by SEL_UART_TX reg)
                                                                    '0': not used
                                                                    '1': gated during active frame (rw) */
    __IO Ifx_UReg_32Bit TR_FRAME_N:1;           /**< \brief [19:19] counter is gated outside active frame (In
                                                                    case of UART frame, TX/RX selection is controlled
                                                                    by SEL_UART_TX reg)
                                                                    '0': not used
                                                                    '1': gated outside active frame (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [21:20] \internal Reserved */
    __IO Ifx_UReg_32Bit TR_FCLK_P:1;            /**< \brief [22:22] trigger pulse stops the counter in case of
                                                                    falling edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': counter stopped when falling edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_RCLK_P:1;            /**< \brief [23:23] trigger pulse stops the counter in case of
                                                                    rising edge on SCL/SCLK
                                                                    '0': not used
                                                                    '1': counter stopped when rising edge of SCL/SCLK (rw) */
    __IO Ifx_UReg_32Bit TR_UART_P:1;            /**< \brief [24:24] trigger pulse stops the counter due to
                                                                    detected UART stop bit (TX/RX UART is controlled by
                                                                    SEL_UART_TX reg)
                                                                    UART RX frame errors are considered as stop
                                                                    condition in RX mode
                                                                    '0': not used
                                                                    '1': counter stopped when UART stop bit detected or
                                                                    frame error in RX mode occured (rw) */
    __IO Ifx_UReg_32Bit TR_SPI_NS:1;            /**< \brief [25:25] trigger pulse stops the counter with rising
                                                                    edge of NSS
                                                                    '0': not used
                                                                    '1': counter stopped when rising edge of NSS detected
                                                                    TGS is not supported in SPI Master mode with
                                                                    multi-slave selection (rw) */
    __IO Ifx_UReg_32Bit TR_I2C_P:1;             /**< \brief [26:26] trigger pulse stops the counter when I2C
                                                                    stop condition is detected
                                                                    '0': not used
                                                                    '1': counter stopped when I2C stop condition
                                                                    detected (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [28:27] \internal Reserved */
    __IO Ifx_UReg_32Bit SEL_UART_TX:1;          /**< \brief [29:29] Select one UART direction for the counter
                                                                    (either Tx or Rx UART)
                                                                    '0': RX triggers are used for the counter
                                                                    '1': TX triggers are used for the counter (rw) */
    __IO Ifx_UReg_32Bit STATE_RST:1;            /**< \brief [30:30] timer underflow generates a SCB
                                                                    communication and FIFO reset additionally to the IRQ
                                                                    '0': not used
                                                                    '1': state and FIFO reset enabled (rw) */
    __IO Ifx_UReg_32Bit ENABLE:1;               /**< \brief [31:31] TGS feature enable
                                                                    '0': not used
                                                                    '1': TGS feature is enabled and the counter reacts
                                                                    on trigger conditions
                                                                    TGS is supported in I2C, UART, SPI Slave mode, and
                                                                    SPI Master mode with a single slave selection.
                                                                    TGS is not supported in SPI mode with multi-slave
                                                                    selection and all TGS counters should be disabled
                                                                    in that mode
                                                                    When CTRL.EC_ACCESS is 1'b1, TGS interrupts are
                                                                    blocked and not triggered, even in active power state. (rw) */
} Ifx_SCB_TGS_CTL2_Bits;

/** \brief Timeout generation support 2 counter */
typedef struct _Ifx_SCB_TGS_CNT2_Bits
{
    __IO Ifx_UReg_32Bit COUNT:18;               /**< \brief [17:0]  18bit counter value (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_TGS_CNT2_Bits;

/** \brief Timeout generation support 2 reload */
typedef struct _Ifx_SCB_TGS_REL2_Bits
{
    __IO Ifx_UReg_32Bit RELOAD:18;              /**< \brief [17:0]  18bit reload value for counter (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_TGS_REL2_Bits;

/** \brief Transmitter control */
typedef struct _Ifx_SCB_TX_CTRL_Bits
{
    __IO Ifx_UReg_32Bit DATA_WIDTH:5;           /**< \brief [4:0]   Dataframe width, depending on CTRL.MEM_WIDTH.
                                                                    DATA_WIDTH + 1 is the amount of bits in a
                                                                    transmitted data frame.
                                                                    This number does not include start, parity and stop bits.
                                                                    For UART mode, the valid range is [3, 15] for
                                                                    UART_STD and MP_MODE.
                                                                    For all other UART modes, valid range is [3 , 8].
                                                                    For SPI, the valid range is [3, 31].
                                                                    For I2C the only valid value is 7.
                                                                    In EZ mode (for both SPI and I2C), the only valid
                                                                    value is 7. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit MSB_FIRST:1;            /**< \brief [8:8]   Least significant bit first ('0') or most
                                                                    significant bit first ('1').
                                                                    For I2C, this field should be '1'. (rw) */
    __I  Ifx_UReg_32Bit :7;                     /**< \brief [15:9]  \internal Reserved */
    __IO Ifx_UReg_32Bit OPEN_DRAIN:1;           /**< \brief [16:16] Each IO cell 'xxx' has two associated IP
                                                                    output signals 'xxx_out_en' and 'xxx_out'.
                                                                    '0': Normal operation mode.
                                                                    Typically, this operation mode is used for IO cells
                                                                    that are connected to (board) wires/lines that are
                                                                    driven by a single IO cell.
                                                                    In this operation mode, for an IO cell 'xxx' that
                                                                    is used as an output, the 'xxx_out_en' output
                                                                    enable signal is typically constant '1' the
                                                                    'xxx_out' output is the outputted value.
                                                                    In other words, in normal operation mode, the
                                                                    'xxx_out' output is used to control the IO cell
                                                                    output value: 'xxx_out' is '0' to drive an IO cell
                                                                    output value of '0' and 'xxx_out' is '1' to drive
                                                                    an IO cell output value of '1'.
                                                                    '1': Open drain operation mode.
                                                                    Typically this operation mode is used for IO cells
                                                                    that are connected to (board) wires/lines that are
                                                                    driven by multiple IO cells (possibly on multiple chips).
                                                                    In this operation mode, for and IO cell 'xxx' that
                                                                    is used as an output, the 'xxx_out_en' output
                                                                    controls the outputted value.
                                                                    Typically, open drain operation mode drives low/'0'
                                                                    and the 'xxx_out' output is constant '1'.
                                                                    In other words, in open drain operation mode, the
                                                                    'xxx_out_en' output is used to control the IO cell
                                                                    output value: in drive low/'0' mode: 'xxx_out_en'
                                                                    is '1' (drive enabled) to drive an IO cell output
                                                                    value of '0' and 'xxx_out_en' is '1' (drive
                                                                    disabled) to not drive an IO cell output value
                                                                    (another IO cell can drive the wire/line or a pull
                                                                    up results in a wire/line value '1').
                                                                    The open drain mode is supported for:
                                                                    - UART mode, 'uart_tx' IO cell.
                                                                    - SPI mode, 'spi_miso' IO cell.
                                                                    this bit is not applicable to I2C mode, 'i2c_scl'
                                                                    and 'i2c_sda' IO cells. (rw) */
    __IO Ifx_UReg_32Bit OPEN_DRAIN_SCL:1;       /**< \brief [17:17] Each IO cell 'xxx' has two associated IP
                                                                    output signals 'xxx_out_en' and 'xxx_out'.
                                                                    '0': Normal operation mode.
                                                                    Typically, this operation mode is used for IO cells
                                                                    that are connected to (board) wires/lines that are
                                                                    driven by a single IO cell.
                                                                    In this operation mode, for an IO cell 'xxx' that
                                                                    is used as an output, the 'xxx_out_en' output
                                                                    enable signal is typically constant '1' the
                                                                    'xxx_out' output is the outputted value.
                                                                    In other words, in normal operation mode, the
                                                                    'xxx_out' output is used to control the IO cell
                                                                    output value: 'xxx_out' is '0' to drive an IO cell
                                                                    output value of '0' and 'xxx_out' is '1' to drive
                                                                    an IO cell output value of '1'.
                                                                    '1': Open drain operation mode.
                                                                    Typically this operation mode is used for IO cells
                                                                    that are connected to (board) wires/lines that are
                                                                    driven by multiple IO cells (possibly on multiple chips).
                                                                    In this operation mode, for and IO cell 'xxx' that
                                                                    is used as an output, the 'xxx_out_en' output
                                                                    controls the outputted value.
                                                                    Typically, open drain operation mode drives low/'0'
                                                                    and the 'xxx_out' output is constant '1'.
                                                                    In other words, in open drain operation mode, the
                                                                    'xxx_out_en' output is used to control the IO cell
                                                                    output value: in drive low/'0' mode: 'xxx_out_en'
                                                                    is '1' (drive enabled) to drive an IO cell output
                                                                    value of '0' and 'xxx_out_en' is '1' (drive
                                                                    disabled) to not drive an IO cell output value
                                                                    (another IO cell can drive the wire/line or a pull
                                                                    up results in a wire/line value '1').
                                                                    this bit is applicable to I2C SCL only.
                                                                    I2C SDA always work in open-drain mode.
                                                                    this is not applicable to M0S8, which does not need
                                                                    special control in SCB for open-drain drive mode. (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_TX_CTRL_Bits;

/** \brief Transmitter FIFO control */
typedef struct _Ifx_SCB_TX_FIFO_CTRL_Bits
{
    __IO Ifx_UReg_32Bit TRIGGER_LEVEL:8;        /**< \brief [7:0]   Trigger level.
                                                                    When the transmitter FIFO has less entries than the
                                                                    number of this field, a transmitter trigger event
                                                                    INTR_TX.TRIGGER is generated. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit CLEAR:1;                /**< \brief [16:16] When '1', the transmitter FIFO and
                                                                    transmitter shift register are cleared/invalidated.
                                                                    Invalidation will last for as long as this field is '1'.
                                                                    If a quick clear/invalidation is required, the
                                                                    field should be set to '1' and be followed by a set to '0'.
                                                                    If a clear/invalidation is required for an extended
                                                                    time period, the field should be set to '1' during
                                                                    the complete time period. (rw) */
    __IO Ifx_UReg_32Bit FREEZE:1;               /**< \brief [17:17] When '1', hardware reads from the
                                                                    transmitter FIFO do not remove FIFO entries.
                                                                    Freeze will not advance the TX FIFO read pointer. (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_TX_FIFO_CTRL_Bits;

/** \brief Transmitter FIFO status */
typedef struct _Ifx_SCB_TX_FIFO_STATUS_Bits
{
    __I  Ifx_UReg_32Bit USED:9;                 /**< \brief [8:0]   Amount of entries in the transmitter FIFO.
                                                                    The value of this field ranges from 0 to FF_DATA_NR
                                                                    (EZ_DATA_NR/2). (r) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [14:9]  \internal Reserved */
    __I  Ifx_UReg_32Bit SR_VALID:1;             /**< \brief [15:15] Indicates whether the TX shift registers
                                                                    holds a valid data frame ('1') or not ('0').
                                                                    The shift register can be considered the top of the
                                                                    TX FIFO (the data frame is not included in the USED
                                                                    field of the TX FIFO).
                                                                    The shift register is a working register and holds
                                                                    the data frame that is currently transmitted (when
                                                                    the protocol state machine is transmitting a data
                                                                    frame) or the data frame that is transmitted next
                                                                    (when the protocol state machine is not
                                                                    transmitting a data frame). (r) */
    __I  Ifx_UReg_32Bit RD_PTR:8;               /**< \brief [23:16] FIFO read pointer: FIFO location from which
                                                                    a data frame is read by the hardware. (r) */
    __I  Ifx_UReg_32Bit WR_PTR:8;               /**< \brief [31:24] FIFO write pointer: FIFO location at which
                                                                    a new data frame is written. (r) */
} Ifx_SCB_TX_FIFO_STATUS_Bits;

/** \brief Transmitter FIFO write */
typedef struct _Ifx_SCB_TX_FIFO_WR_Bits
{
    __O  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Data frame written into the transmitter FIFO.
                                                                    Behavior is similar to that of a PUSH operation.
                                                                    Note that when CTRL.MEM_WIDTH is '0', only
                                                                    DATA[7:0] are used and when CTRL.MEM_WIDTH is '1',
                                                                    only DATA[15:0] are used.
                                                                    A write to a full TX FIFO sets INTR_TX.OVERFLOW to '1'. (w) */
} Ifx_SCB_TX_FIFO_WR_Bits;

/** \brief Receiver control */
typedef struct _Ifx_SCB_RX_CTRL_Bits
{
    __IO Ifx_UReg_32Bit DATA_WIDTH:5;           /**< \brief [4:0]   Dataframe width, depending on CTRL.MEM_WIDTH.
                                                                    DATA_WIDTH + 1 is the expected amount of bits in
                                                                    received data frame.
                                                                    This number does not include start, parity and stop bits.
                                                                    For UART mode, the valid range is [3, 15] for UART_STD.
                                                                    For all other UART modes, valid range is [3 , 8].
                                                                    For SPI, the valid range is [3, 31].
                                                                    For I2C the only valid value is 7.
                                                                    In EZ mode (for both SPI and I2C), the only valid
                                                                    value is 7. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit MSB_FIRST:1;            /**< \brief [8:8]   Least significant bit first ('0') or most
                                                                    significant bit first ('1').
                                                                    For I2C, this field should be '1'. (rw) */
    __IO Ifx_UReg_32Bit MEDIAN:1;               /**< \brief [9:9]   Median filter.
                                                                    When '1', a digital 3 taps median filter is
                                                                    performed on input interface lines.
                                                                    This filter should reduce the susceptibility to errors.
                                                                    However, its requires higher oversampling values.
                                                                    For UART IrDA submode, this field should always be '1'. (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_SCB_RX_CTRL_Bits;

/** \brief Receiver FIFO control */
typedef struct _Ifx_SCB_RX_FIFO_CTRL_Bits
{
    __IO Ifx_UReg_32Bit TRIGGER_LEVEL:8;        /**< \brief [7:0]   Trigger level.
                                                                    When the receiver FIFO has more entries than the
                                                                    number of this field, a receiver trigger event
                                                                    INTR_RX.TRIGGER is generated. (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit CLEAR:1;                /**< \brief [16:16] When '1', the receiver FIFO and receiver
                                                                    shift register are cleared/invalidated.
                                                                    Invalidation will last for as long as this field is '1'.
                                                                    If a quick clear/invalidation is required, the
                                                                    field should be set to '1' and be followed by a set to '0'.
                                                                    If a clear/invalidation is required for an extended
                                                                    time period, the field should be set to '1' during
                                                                    the complete time period. (rw) */
    __IO Ifx_UReg_32Bit FREEZE:1;               /**< \brief [17:17] When '1', hardware writes to the receiver
                                                                    FIFO have no effect.
                                                                    Freeze will not advance the RX FIFO write pointer. (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_RX_FIFO_CTRL_Bits;

/** \brief Receiver FIFO status */
typedef struct _Ifx_SCB_RX_FIFO_STATUS_Bits
{
    __I  Ifx_UReg_32Bit USED:9;                 /**< \brief [8:0]   Amount of entries in the receiver FIFO.
                                                                    The value of this field ranges from 0 to FF_DATA_NR
                                                                    (EZ_DATA_NR/2). (r) */
    __I  Ifx_UReg_32Bit :6;                     /**< \brief [14:9]  \internal Reserved */
    __I  Ifx_UReg_32Bit SR_VALID:1;             /**< \brief [15:15] Indicates whether the RX shift registers
                                                                    holds a (partial) valid data frame ('1') or not ('0').
                                                                    The shift register can be considered the bottom of
                                                                    the RX FIFO (the data frame is not included in the
                                                                    USED field of the RX FIFO).
                                                                    The shift register is a working register and holds
                                                                    the data frame that is currently being received
                                                                    (when the protocol state machine is receiving a
                                                                    data frame). (r) */
    __I  Ifx_UReg_32Bit RD_PTR:8;               /**< \brief [23:16] FIFO read pointer: FIFO location from which
                                                                    a data frame is read. (r) */
    __I  Ifx_UReg_32Bit WR_PTR:8;               /**< \brief [31:24] FIFO write pointer: FIFO location at which
                                                                    a new data frame is written by the hardware. (r) */
} Ifx_SCB_RX_FIFO_STATUS_Bits;

/** \brief Slave address and mask */
typedef struct _Ifx_SCB_RX_MATCH_Bits
{
    __IO Ifx_UReg_32Bit ADDR:8;                 /**< \brief [7:0]    (rw) */
    __IO Ifx_UReg_32Bit ADDR1:8;                /**< \brief [15:8]   (rw) */
    __IO Ifx_UReg_32Bit MASK:8;                 /**< \brief [23:16] Slave device address mask.
                                                                    This field is a mask that specifies which of the
                                                                    slave address bits take part in the matching.
                                                                    MATCH = ((ADDR & MASK) == ('slave address' & MASK)). (rw) */
    __IO Ifx_UReg_32Bit MASK1:8;                /**< \brief [31:24]  (rw) */
} Ifx_SCB_RX_MATCH_Bits;

/** \brief Slave address and mask */
typedef struct _Ifx_SCB_RX_MATCH1_Bits
{
    __IO Ifx_UReg_32Bit ADDR:8;                 /**< \brief [7:0]    (rw) */
    __IO Ifx_UReg_32Bit ADDR1:8;                /**< \brief [15:8]   (rw) */
    __IO Ifx_UReg_32Bit MASK:8;                 /**< \brief [23:16] Slave device address mask.
                                                                    This field is a mask that specifies which of the
                                                                    slave address bits take part in the matching.
                                                                    MATCH = ((ADDR & MASK) == ('slave address' & MASK)).
                                                                    When this MASK is 0, the corresponding ADDR/MASK
                                                                    pair is disabled and does not affect address matching. (rw) */
    __IO Ifx_UReg_32Bit MASK1:8;                /**< \brief [31:24]  (rw) */
} Ifx_SCB_RX_MATCH1_Bits;

/** \brief Slave address and mask */
typedef struct _Ifx_SCB_RX_MATCH2_Bits
{
    __IO Ifx_UReg_32Bit ADDR:8;                 /**< \brief [7:0]    (rw) */
    __IO Ifx_UReg_32Bit ADDR1:8;                /**< \brief [15:8]   (rw) */
    __IO Ifx_UReg_32Bit MASK:8;                 /**< \brief [23:16] Slave device address mask.
                                                                    This field is a mask that specifies which of the
                                                                    slave address bits take part in the matching.
                                                                    MATCH = ((ADDR & MASK) == ('slave address' & MASK)).
                                                                    When MASK is 0, the corresponding ADDR/MASK pair is
                                                                    disabled and does not affect address matching. (rw) */
    __IO Ifx_UReg_32Bit MASK1:8;                /**< \brief [31:24]  (rw) */
} Ifx_SCB_RX_MATCH2_Bits;

/** \brief Receiver FIFO read */
typedef struct _Ifx_SCB_RX_FIFO_RD_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Data read from the receiver FIFO.
                                                                    Reading a data frame will remove the data frame
                                                                    from the FIFO; i.e.
                                                                    behavior is similar to that of a POP operation.
                                                                    Note that when CTRL.MEM_WIDTH is '0', only
                                                                    DATA[7:0] are used and when CTRL.MEM_WIDTH is '1',
                                                                    only DATA[15:0] are used
                                                                    A read from an empty RX FIFO sets INTR_RX.UNDERFLOW to '1'.
                                                                    When this register is read through the debugger,
                                                                    the data frame will not be removed from the FIFO.
                                                                    Similar in operation to RX_FIFO_RD_SILENT (r) */
} Ifx_SCB_RX_FIFO_RD_Bits;

/** \brief Receiver FIFO read silent */
typedef struct _Ifx_SCB_RX_FIFO_RD_SILENT_Bits
{
    __I  Ifx_UReg_32Bit DATA:32;                /**< \brief [31:0]  Data read from the receiver FIFO.
                                                                    Reading a data frame will NOT remove the data frame
                                                                    from the FIFO; i.e.
                                                                    behavior is similar to that of a PEEK operation.
                                                                    Note that when CTRL.MEM_WIDTH is '0', only
                                                                    DATA[7:0] are used and when CTRL.MEM_WIDTH is '1',
                                                                    only DATA[15:0] are used
                                                                    A read from an empty RX FIFO sets INTR_RX.UNDERFLOW to '1'. (r) */
} Ifx_SCB_RX_FIFO_RD_SILENT_Bits;

/** \brief Memory buffer */
typedef struct _Ifx_SCB_EZ_DATA_Bits
{
    __IO Ifx_UReg_32Bit EZ_DATA:8;              /**< \brief [7:0]   Data in buffer memory location.
                                                                    In case of a blocked discarded access, a read
                                                                    access returns 0xffff:ffff and a write access is dropped.
                                                                    Note that the 0xffff:ffff value is unique (not a
                                                                    legal EZ_DATA byte value) and can be detected by SW.
                                                                    Note that a discarded write access can be detected
                                                                    by reading back the written value. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_SCB_EZ_DATA_Bits;

/** \brief Active clocked interrupt signal */
typedef struct _Ifx_SCB_INTR_CAUSE_Bits
{
    __I  Ifx_UReg_32Bit M:1;                    /**< \brief [0:0]   Master interrupt active
                                                                    ('interrupt_master'): INTR_M_MASKED != 0. (r) */
    __I  Ifx_UReg_32Bit S:1;                    /**< \brief [1:1]   Slave interrupt active ('interrupt_slave'):
                                                                    INTR_S_MASKED != 0. (r) */
    __I  Ifx_UReg_32Bit TX:1;                   /**< \brief [2:2]   Transmitter interrupt active
                                                                    ('interrupt_tx'): INTR_TX_MASKED != 0. (r) */
    __I  Ifx_UReg_32Bit RX:1;                   /**< \brief [3:3]   Receiver interrupt active ('interrupt_rx'):
                                                                    INTR_RX_MASKED != 0. (r) */
    __I  Ifx_UReg_32Bit I2C_EC:1;               /**< \brief [4:4]   Externally clock I2C interrupt active
                                                                    ('interrupt_i2c_ec'): INTR_I2C_EC_MASKED != 0. (r) */
    __I  Ifx_UReg_32Bit SPI_EC:1;               /**< \brief [5:5]   Externally clocked SPI interrupt active
                                                                    ('interrupt_spi_ec'): INTR_SPI_EC_MASKED != 0. (r) */
    __I  Ifx_UReg_32Bit TGS:1;                  /**< \brief [6:6]   Timeout generation support interrupt
                                                                    ('interrupt_tgs'): INTR_TGS_MASKED != 0. (r) */
    __I  Ifx_UReg_32Bit :25;                    /**< \brief [31:7]  \internal Reserved */
} Ifx_SCB_INTR_CAUSE_Bits;

/** \brief Externally clocked I2C interrupt request */
typedef struct _Ifx_SCB_INTR_I2C_EC_Bits
{
    __IO Ifx_UReg_32Bit WAKE_UP:1;              /**< \brief [0:0]   Wake up request.
                                                                    Active on incoming slave request (with address match).
                                                                    Only used when CTRL.EC_AM_MODE is '1'. (rw) */
    __IO Ifx_UReg_32Bit EZ_STOP:1;              /**< \brief [1:1]   STOP detection.
                                                                    Activated on the end of a every transfer (I2C STOP).
                                                                    Only available for a slave request with an address
                                                                    match, in EZ and CMD_RESP modes, when
                                                                    CTRL.EC_OP_MODE is '1'. (rw) */
    __IO Ifx_UReg_32Bit EZ_WRITE_STOP:1;        /**< \brief [2:2]   STOP detection after a write transfer occurred.
                                                                    Activated on the end of a write transfer (I2C STOP).
                                                                    This event is an indication that a buffer memory
                                                                    location has been written to.
                                                                    For EZ mode: a  transfer that only writes the base
                                                                    address does NOT activate this event.
                                                                    Only available for a slave request with an address
                                                                    match, in EZ and CMD_RESP modes, when
                                                                    CTRL.EC_OP_MODE is '1'. (rw) */
    __IO Ifx_UReg_32Bit EZ_READ_STOP:1;         /**< \brief [3:3]   STOP detection after a read transfer occurred.
                                                                    Activated on the end of a read transfer (I2C STOP).
                                                                    This event is an indication that a buffer memory
                                                                    location has been read from.
                                                                    Only available for a slave request with an address
                                                                    match, in EZ and CMD_RESP modes, when
                                                                    CTRL.EC_OP_MODE is '1'. (rw) */
    __IO Ifx_UReg_32Bit EZ_STOP_ANY:1;          /**< \brief [4:4]    (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_SCB_INTR_I2C_EC_Bits;

/** \brief Externally clocked I2C interrupt mask */
typedef struct _Ifx_SCB_INTR_I2C_EC_MASK_Bits
{
    __IO Ifx_UReg_32Bit WAKE_UP:1;              /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit EZ_STOP:1;              /**< \brief [1:1]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit EZ_WRITE_STOP:1;        /**< \brief [2:2]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit EZ_READ_STOP:1;         /**< \brief [3:3]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit EZ_STOP_ANY:1;          /**< \brief [4:4]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_SCB_INTR_I2C_EC_MASK_Bits;

/** \brief Externally clocked I2C interrupt masked */
typedef struct _Ifx_SCB_INTR_I2C_EC_MASKED_Bits
{
    __I  Ifx_UReg_32Bit WAKE_UP:1;              /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit EZ_STOP:1;              /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit EZ_WRITE_STOP:1;        /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit EZ_READ_STOP:1;         /**< \brief [3:3]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit EZ_STOP_ANY:1;          /**< \brief [4:4]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :27;                    /**< \brief [31:5]  \internal Reserved */
} Ifx_SCB_INTR_I2C_EC_MASKED_Bits;

/** \brief Externally clocked SPI interrupt request */
typedef struct _Ifx_SCB_INTR_SPI_EC_Bits
{
    __IO Ifx_UReg_32Bit WAKE_UP:1;              /**< \brief [0:0]   Wake up request.
                                                                    Active on incoming slave request when externally
                                                                    clocked selection is '1'.
                                                                    Only used when CTRL.EC_AM_MODE is '1'. (rw) */
    __IO Ifx_UReg_32Bit EZ_STOP:1;              /**< \brief [1:1]   STOP detection.
                                                                    Activated on the end of a every transfer (SPI
                                                                    deselection).
                                                                    Only available in EZ and CMD_RESP mode and when
                                                                    CTRL.EC_OP_MODE is '1'. (rw) */
    __IO Ifx_UReg_32Bit EZ_WRITE_STOP:1;        /**< \brief [2:2]   STOP detection after a write transfer occurred.
                                                                    Activated on the end of a write transfer (SPI deselection).
                                                                    This event is an indication that a buffer memory
                                                                    location has been written to.
                                                                    For EZ mode: a  transfer that only writes the base
                                                                    address does NOT activate this event.
                                                                    Only used in EZ and CMD_RESP modes and when
                                                                    CTRL.EC_OP_MODE is '1'. (rw) */
    __IO Ifx_UReg_32Bit EZ_READ_STOP:1;         /**< \brief [3:3]   STOP detection after a read transfer occurred.
                                                                    Activated on the end of a read transfer (SPI deselection).
                                                                    This event is an indication that a buffer memory
                                                                    location has been read from.
                                                                    Only used in EZ and CMD_RESP modes and when
                                                                    CTRL.EC_OP_MODE is '1'. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_SCB_INTR_SPI_EC_Bits;

/** \brief Externally clocked SPI interrupt mask */
typedef struct _Ifx_SCB_INTR_SPI_EC_MASK_Bits
{
    __IO Ifx_UReg_32Bit WAKE_UP:1;              /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit EZ_STOP:1;              /**< \brief [1:1]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit EZ_WRITE_STOP:1;        /**< \brief [2:2]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit EZ_READ_STOP:1;         /**< \brief [3:3]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_SCB_INTR_SPI_EC_MASK_Bits;

/** \brief Externally clocked SPI interrupt masked */
typedef struct _Ifx_SCB_INTR_SPI_EC_MASKED_Bits
{
    __I  Ifx_UReg_32Bit WAKE_UP:1;              /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit EZ_STOP:1;              /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit EZ_WRITE_STOP:1;        /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit EZ_READ_STOP:1;         /**< \brief [3:3]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :28;                    /**< \brief [31:4]  \internal Reserved */
} Ifx_SCB_INTR_SPI_EC_MASKED_Bits;

/** \brief Master interrupt request */
typedef struct _Ifx_SCB_INTR_M_Bits
{
    __IO Ifx_UReg_32Bit I2C_ARB_LOST:1;         /**< \brief [0:0]   I2C master lost arbitration: the value
                                                                    driven by the master on the SDA line is not the
                                                                    same as the value observed on the SDA line.
                                                                    The Firmware should clear the TX FIFO, to re-do
                                                                    this transfer. (rw) */
    __IO Ifx_UReg_32Bit I2C_NACK:1;             /**< \brief [1:1]   I2C master negative acknowledgement.
                                                                    Set to '1', when the master receives a NACK
                                                                    (typically after the master transmitted the slave
                                                                    address or TX data). (rw) */
    __IO Ifx_UReg_32Bit I2C_ACK:1;              /**< \brief [2:2]   I2C master acknowledgement.
                                                                    Set to '1', when the master receives a ACK
                                                                    (typically after the master transmitted the slave
                                                                    address or TX data). (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit I2C_STOP:1;             /**< \brief [4:4]   I2C master STOP.
                                                                    Set to '1', when the master has transmitted a STOP. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit I2C_BUS_ERROR:1;        /**< \brief [8:8]   I2C master bus error (unexpected detection
                                                                    of START or STOP condition). (rw) */
    __IO Ifx_UReg_32Bit SPI_DONE:1;             /**< \brief [9:9]   SPI master transfer done event: all data
                                                                    frames in the transmit FIFO are sent, the transmit
                                                                    FIFO is empty (both TX FIFO and transmit shifter
                                                                    register are empty), and SPI select output pin is
                                                                    deselected. (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_SCB_INTR_M_Bits;

/** \brief Master interrupt set request */
typedef struct _Ifx_SCB_INTR_M_SET_Bits
{
    __IO Ifx_UReg_32Bit I2C_ARB_LOST:1;         /**< \brief [0:0]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_NACK:1;             /**< \brief [1:1]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_ACK:1;              /**< \brief [2:2]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit I2C_STOP:1;             /**< \brief [4:4]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit I2C_BUS_ERROR:1;        /**< \brief [8:8]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit SPI_DONE:1;             /**< \brief [9:9]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_SCB_INTR_M_SET_Bits;

/** \brief Master interrupt mask */
typedef struct _Ifx_SCB_INTR_M_MASK_Bits
{
    __IO Ifx_UReg_32Bit I2C_ARB_LOST:1;         /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_NACK:1;             /**< \brief [1:1]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_ACK:1;              /**< \brief [2:2]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __IO Ifx_UReg_32Bit I2C_STOP:1;             /**< \brief [4:4]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit I2C_BUS_ERROR:1;        /**< \brief [8:8]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit SPI_DONE:1;             /**< \brief [9:9]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_SCB_INTR_M_MASK_Bits;

/** \brief Master interrupt masked request */
typedef struct _Ifx_SCB_INTR_M_MASKED_Bits
{
    __I  Ifx_UReg_32Bit I2C_ARB_LOST:1;         /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_NACK:1;             /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_ACK:1;              /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [3:3]   \internal Reserved */
    __I  Ifx_UReg_32Bit I2C_STOP:1;             /**< \brief [4:4]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :3;                     /**< \brief [7:5]   \internal Reserved */
    __I  Ifx_UReg_32Bit I2C_BUS_ERROR:1;        /**< \brief [8:8]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit SPI_DONE:1;             /**< \brief [9:9]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :22;                    /**< \brief [31:10] \internal Reserved */
} Ifx_SCB_INTR_M_MASKED_Bits;

/** \brief Slave interrupt request */
typedef struct _Ifx_SCB_INTR_S_Bits
{
    __IO Ifx_UReg_32Bit I2C_ARB_LOST:1;         /**< \brief [0:0]   I2C slave lost arbitration: the value
                                                                    driven on the SDA line is not the same as the value
                                                                    observed on the SDA line (while the SCL line is '1').
                                                                    This should not occur, it represents erroneous I2C
                                                                    bus behavior.
                                                                    In case of lost arbitration, the I2C slave state
                                                                    machine aborts the ongoing transfer.
                                                                    The Firmware may decide to clear the TX and RX
                                                                    FIFOs in case of this error. (rw) */
    __IO Ifx_UReg_32Bit I2C_NACK:1;             /**< \brief [1:1]    (rw) */
    __IO Ifx_UReg_32Bit I2C_ACK:1;              /**< \brief [2:2]    (rw) */
    __IO Ifx_UReg_32Bit I2C_WRITE_STOP:1;       /**< \brief [3:3]    (rw) */
    __IO Ifx_UReg_32Bit I2C_STOP:1;             /**< \brief [4:4]    (rw) */
    __IO Ifx_UReg_32Bit I2C_START:1;            /**< \brief [5:5]    (rw) */
    __IO Ifx_UReg_32Bit I2C_ADDR_MATCH:1;       /**< \brief [6:6]    (rw) */
    __IO Ifx_UReg_32Bit I2C_GENERAL:1;          /**< \brief [7:7]    (rw) */
    __IO Ifx_UReg_32Bit I2C_BUS_ERROR:1;        /**< \brief [8:8]    (rw) */
    __IO Ifx_UReg_32Bit SPI_EZ_WRITE_STOP:1;    /**< \brief [9:9]    (rw) */
    __IO Ifx_UReg_32Bit SPI_EZ_STOP:1;          /**< \brief [10:10]  (rw) */
    __IO Ifx_UReg_32Bit SPI_BUS_ERROR:1;        /**< \brief [11:11]  (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __IO Ifx_UReg_32Bit I2C_RESTART:1;          /**< \brief [16:16]  (rw) */
    __IO Ifx_UReg_32Bit I2C_STOP_ANY:1;         /**< \brief [17:17]  (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_INTR_S_Bits;

/** \brief Slave interrupt set request */
typedef struct _Ifx_SCB_INTR_S_SET_Bits
{
    __IO Ifx_UReg_32Bit I2C_ARB_LOST:1;         /**< \brief [0:0]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_NACK:1;             /**< \brief [1:1]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_ACK:1;              /**< \brief [2:2]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_WRITE_STOP:1;       /**< \brief [3:3]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_STOP:1;             /**< \brief [4:4]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_START:1;            /**< \brief [5:5]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_ADDR_MATCH:1;       /**< \brief [6:6]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_GENERAL:1;          /**< \brief [7:7]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_BUS_ERROR:1;        /**< \brief [8:8]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit SPI_EZ_WRITE_STOP:1;    /**< \brief [9:9]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit SPI_EZ_STOP:1;          /**< \brief [10:10] Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit SPI_BUS_ERROR:1;        /**< \brief [11:11] Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __IO Ifx_UReg_32Bit I2C_RESTART:1;          /**< \brief [16:16] Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_STOP_ANY:1;         /**< \brief [17:17] Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_INTR_S_SET_Bits;

/** \brief Slave interrupt mask */
typedef struct _Ifx_SCB_INTR_S_MASK_Bits
{
    __IO Ifx_UReg_32Bit I2C_ARB_LOST:1;         /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_NACK:1;             /**< \brief [1:1]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_ACK:1;              /**< \brief [2:2]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_WRITE_STOP:1;       /**< \brief [3:3]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_STOP:1;             /**< \brief [4:4]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_START:1;            /**< \brief [5:5]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_ADDR_MATCH:1;       /**< \brief [6:6]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_GENERAL:1;          /**< \brief [7:7]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_BUS_ERROR:1;        /**< \brief [8:8]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit SPI_EZ_WRITE_STOP:1;    /**< \brief [9:9]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit SPI_EZ_STOP:1;          /**< \brief [10:10] Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit SPI_BUS_ERROR:1;        /**< \brief [11:11] Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __IO Ifx_UReg_32Bit I2C_RESTART:1;          /**< \brief [16:16] Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit I2C_STOP_ANY:1;         /**< \brief [17:17] Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_INTR_S_MASK_Bits;

/** \brief Slave interrupt masked request */
typedef struct _Ifx_SCB_INTR_S_MASKED_Bits
{
    __I  Ifx_UReg_32Bit I2C_ARB_LOST:1;         /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_NACK:1;             /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_ACK:1;              /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_WRITE_STOP:1;       /**< \brief [3:3]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_STOP:1;             /**< \brief [4:4]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_START:1;            /**< \brief [5:5]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_ADDR_MATCH:1;       /**< \brief [6:6]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_GENERAL:1;          /**< \brief [7:7]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_BUS_ERROR:1;        /**< \brief [8:8]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit SPI_EZ_WRITE_STOP:1;    /**< \brief [9:9]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit SPI_EZ_STOP:1;          /**< \brief [10:10] Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit SPI_BUS_ERROR:1;        /**< \brief [11:11] Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :4;                     /**< \brief [15:12] \internal Reserved */
    __I  Ifx_UReg_32Bit I2C_RESTART:1;          /**< \brief [16:16] Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit I2C_STOP_ANY:1;         /**< \brief [17:17] Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :14;                    /**< \brief [31:18] \internal Reserved */
} Ifx_SCB_INTR_S_MASKED_Bits;

/** \brief Transmitter interrupt request */
typedef struct _Ifx_SCB_INTR_TX_Bits
{
    __IO Ifx_UReg_32Bit TRIGGER:1;              /**< \brief [0:0]    (rw) */
    __IO Ifx_UReg_32Bit NOT_FULL:1;             /**< \brief [1:1]    (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit EMPTY:1;                /**< \brief [4:4]    (rw) */
    __IO Ifx_UReg_32Bit OVERFLOW:1;             /**< \brief [5:5]    (rw) */
    __IO Ifx_UReg_32Bit UNDERFLOW:1;            /**< \brief [6:6]   Attempt to read from an empty TX FIFO.
                                                                    This happens when SCB is ready to transfer data and
                                                                    EMPTY is '1'.
                                                                    Only used in FIFO mode. (rw) */
    __IO Ifx_UReg_32Bit BLOCKED:1;              /**< \brief [7:7]   SW cannot get access to the EZ memory (EZ
                                                                    data access), due to an externally clocked EZ access.
                                                                    This may happen when STATUS.EC_BUSY is '1'. (rw) */
    __IO Ifx_UReg_32Bit UART_NACK:1;            /**< \brief [8:8]    (rw) */
    __IO Ifx_UReg_32Bit UART_DONE:1;            /**< \brief [9:9]    (rw) */
    __IO Ifx_UReg_32Bit UART_ARB_LOST:1;        /**< \brief [10:10]  (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_SCB_INTR_TX_Bits;

/** \brief Transmitter interrupt set request */
typedef struct _Ifx_SCB_INTR_TX_SET_Bits
{
    __IO Ifx_UReg_32Bit TRIGGER:1;              /**< \brief [0:0]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit NOT_FULL:1;             /**< \brief [1:1]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit EMPTY:1;                /**< \brief [4:4]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit OVERFLOW:1;             /**< \brief [5:5]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit UNDERFLOW:1;            /**< \brief [6:6]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit BLOCKED:1;              /**< \brief [7:7]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit UART_NACK:1;            /**< \brief [8:8]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit UART_DONE:1;            /**< \brief [9:9]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit UART_ARB_LOST:1;        /**< \brief [10:10] Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_SCB_INTR_TX_SET_Bits;

/** \brief Transmitter interrupt mask */
typedef struct _Ifx_SCB_INTR_TX_MASK_Bits
{
    __IO Ifx_UReg_32Bit TRIGGER:1;              /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit NOT_FULL:1;             /**< \brief [1:1]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __IO Ifx_UReg_32Bit EMPTY:1;                /**< \brief [4:4]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit OVERFLOW:1;             /**< \brief [5:5]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit UNDERFLOW:1;            /**< \brief [6:6]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit BLOCKED:1;              /**< \brief [7:7]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit UART_NACK:1;            /**< \brief [8:8]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit UART_DONE:1;            /**< \brief [9:9]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit UART_ARB_LOST:1;        /**< \brief [10:10] Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_SCB_INTR_TX_MASK_Bits;

/** \brief Transmitter interrupt masked request */
typedef struct _Ifx_SCB_INTR_TX_MASKED_Bits
{
    __I  Ifx_UReg_32Bit TRIGGER:1;              /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit NOT_FULL:1;             /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [3:2]   \internal Reserved */
    __I  Ifx_UReg_32Bit EMPTY:1;                /**< \brief [4:4]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit OVERFLOW:1;             /**< \brief [5:5]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit UNDERFLOW:1;            /**< \brief [6:6]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit BLOCKED:1;              /**< \brief [7:7]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit UART_NACK:1;            /**< \brief [8:8]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit UART_DONE:1;            /**< \brief [9:9]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit UART_ARB_LOST:1;        /**< \brief [10:10] Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :21;                    /**< \brief [31:11] \internal Reserved */
} Ifx_SCB_INTR_TX_MASKED_Bits;

/** \brief Receiver interrupt request */
typedef struct _Ifx_SCB_INTR_RX_Bits
{
    __IO Ifx_UReg_32Bit TRIGGER:1;              /**< \brief [0:0]    (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [1:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit NOT_EMPTY:1;            /**< \brief [2:2]    (rw) */
    __IO Ifx_UReg_32Bit FULL:1;                 /**< \brief [3:3]    (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [4:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit OVERFLOW:1;             /**< \brief [5:5]    (rw) */
    __IO Ifx_UReg_32Bit UNDERFLOW:1;            /**< \brief [6:6]    (rw) */
    __IO Ifx_UReg_32Bit BLOCKED:1;              /**< \brief [7:7]   SW cannot get access to the EZ memory
                                                                    (EZ_DATA accesses), due to an externally clocked EZ access.
                                                                    This may happen when STATUS.EC_BUSY is '1'. (rw) */
    __IO Ifx_UReg_32Bit FRAME_ERROR:1;          /**< \brief [8:8]    (rw) */
    __IO Ifx_UReg_32Bit PARITY_ERROR:1;         /**< \brief [9:9]    (rw) */
    __IO Ifx_UReg_32Bit BAUD_DETECT:1;          /**< \brief [10:10]  (rw) */
    __IO Ifx_UReg_32Bit BREAK_DETECT:1;         /**< \brief [11:11]  (rw) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_SCB_INTR_RX_Bits;

/** \brief Receiver interrupt set request */
typedef struct _Ifx_SCB_INTR_RX_SET_Bits
{
    __IO Ifx_UReg_32Bit TRIGGER:1;              /**< \brief [0:0]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [1:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit NOT_EMPTY:1;            /**< \brief [2:2]   Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __IO Ifx_UReg_32Bit FULL:1;                 /**< \brief [3:3]   Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [4:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit OVERFLOW:1;             /**< \brief [5:5]   Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __IO Ifx_UReg_32Bit UNDERFLOW:1;            /**< \brief [6:6]   Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __IO Ifx_UReg_32Bit BLOCKED:1;              /**< \brief [7:7]   Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __IO Ifx_UReg_32Bit FRAME_ERROR:1;          /**< \brief [8:8]   Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __IO Ifx_UReg_32Bit PARITY_ERROR:1;         /**< \brief [9:9]   Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __IO Ifx_UReg_32Bit BAUD_DETECT:1;          /**< \brief [10:10] Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __IO Ifx_UReg_32Bit BREAK_DETECT:1;         /**< \brief [11:11] Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_SCB_INTR_RX_SET_Bits;

/** \brief Receiver interrupt mask */
typedef struct _Ifx_SCB_INTR_RX_MASK_Bits
{
    __IO Ifx_UReg_32Bit TRIGGER:1;              /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [1:1]   \internal Reserved */
    __IO Ifx_UReg_32Bit NOT_EMPTY:1;            /**< \brief [2:2]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit FULL:1;                 /**< \brief [3:3]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [4:4]   \internal Reserved */
    __IO Ifx_UReg_32Bit OVERFLOW:1;             /**< \brief [5:5]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit UNDERFLOW:1;            /**< \brief [6:6]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit BLOCKED:1;              /**< \brief [7:7]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit FRAME_ERROR:1;          /**< \brief [8:8]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit PARITY_ERROR:1;         /**< \brief [9:9]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit BAUD_DETECT:1;          /**< \brief [10:10] Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit BREAK_DETECT:1;         /**< \brief [11:11] Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_SCB_INTR_RX_MASK_Bits;

/** \brief Receiver interrupt masked request */
typedef struct _Ifx_SCB_INTR_RX_MASKED_Bits
{
    __I  Ifx_UReg_32Bit TRIGGER:1;              /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [1:1]   \internal Reserved */
    __I  Ifx_UReg_32Bit NOT_EMPTY:1;            /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit FULL:1;                 /**< \brief [3:3]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [4:4]   \internal Reserved */
    __I  Ifx_UReg_32Bit OVERFLOW:1;             /**< \brief [5:5]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit UNDERFLOW:1;            /**< \brief [6:6]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit BLOCKED:1;              /**< \brief [7:7]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit FRAME_ERROR:1;          /**< \brief [8:8]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit PARITY_ERROR:1;         /**< \brief [9:9]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit BAUD_DETECT:1;          /**< \brief [10:10] Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit BREAK_DETECT:1;         /**< \brief [11:11] Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :20;                    /**< \brief [31:12] \internal Reserved */
} Ifx_SCB_INTR_RX_MASKED_Bits;

/** \brief Receiver interrupt request */
typedef struct _Ifx_SCB_INTR_TGS_Bits
{
    __IO Ifx_UReg_32Bit TGS0:1;                 /**< \brief [0:0]    (rw) */
    __IO Ifx_UReg_32Bit TGS1:1;                 /**< \brief [1:1]    (rw) */
    __IO Ifx_UReg_32Bit TGS2:1;                 /**< \brief [2:2]    (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_SCB_INTR_TGS_Bits;

/** \brief Receiver interrupt set request */
typedef struct _Ifx_SCB_INTR_TGS_SET_Bits
{
    __IO Ifx_UReg_32Bit TGS0:1;                 /**< \brief [0:0]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit TGS1:1;                 /**< \brief [1:1]   Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __IO Ifx_UReg_32Bit TGS2:1;                 /**< \brief [2:2]   Write with '1' to set corresponding bit in
                                                                    interrupt status register. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_SCB_INTR_TGS_SET_Bits;

/** \brief Receiver interrupt mask */
typedef struct _Ifx_SCB_INTR_TGS_MASK_Bits
{
    __IO Ifx_UReg_32Bit TGS0:1;                 /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit TGS1:1;                 /**< \brief [1:1]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit TGS2:1;                 /**< \brief [2:2]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_SCB_INTR_TGS_MASK_Bits;

/** \brief Receiver interrupt masked request */
typedef struct _Ifx_SCB_INTR_TGS_MASKED_Bits
{
    __I  Ifx_UReg_32Bit TGS0:1;                 /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit TGS1:1;                 /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit TGS2:1;                 /**< \brief [2:2]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :29;                    /**< \brief [31:3]  \internal Reserved */
} Ifx_SCB_INTR_TGS_MASKED_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SCB_Registers_union
 * \{   */
/** \brief Generic control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_CTRL_Bits B;                        /**< \brief Bitfield access */
} Ifx_SCB_CTRL;

/** \brief Generic status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_STATUS_Bits B;                      /**< \brief Bitfield access */
} Ifx_SCB_STATUS;

/** \brief Command/response control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_CMD_RESP_CTRL_Bits B;               /**< \brief Bitfield access */
} Ifx_SCB_CMD_RESP_CTRL;

/** \brief Command/response status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_CMD_RESP_STATUS_Bits B;             /**< \brief Bitfield access */
} Ifx_SCB_CMD_RESP_STATUS;

/** \brief SPI control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_SPI_CTRL_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_SPI_CTRL;

/** \brief SPI status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_SPI_STATUS_Bits B;                  /**< \brief Bitfield access */
} Ifx_SCB_SPI_STATUS;

/** \brief SPI transmitter control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_SPI_TX_CTRL_Bits B;                 /**< \brief Bitfield access */
} Ifx_SCB_SPI_TX_CTRL;

/** \brief SPI receiver control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_SPI_RX_CTRL_Bits B;                 /**< \brief Bitfield access */
} Ifx_SCB_SPI_RX_CTRL;

/** \brief UART control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_UART_CTRL_Bits B;                   /**< \brief Bitfield access */
} Ifx_SCB_UART_CTRL;

/** \brief UART transmitter control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_UART_TX_CTRL_Bits B;                /**< \brief Bitfield access */
} Ifx_SCB_UART_TX_CTRL;

/** \brief UART receiver control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_UART_RX_CTRL_Bits B;                /**< \brief Bitfield access */
} Ifx_SCB_UART_RX_CTRL;

/** \brief UART receiver status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_UART_RX_STATUS_Bits B;              /**< \brief Bitfield access */
} Ifx_SCB_UART_RX_STATUS;

/** \brief UART flow control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_UART_FLOW_CTRL_Bits B;              /**< \brief Bitfield access */
} Ifx_SCB_UART_FLOW_CTRL;

/** \brief I2C control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_I2C_CTRL_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_I2C_CTRL;

/** \brief I2C status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_I2C_STATUS_Bits B;                  /**< \brief Bitfield access */
} Ifx_SCB_I2C_STATUS;

/** \brief I2C master command */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_I2C_M_CMD_Bits B;                   /**< \brief Bitfield access */
} Ifx_SCB_I2C_M_CMD;

/** \brief I2C slave command */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_I2C_S_CMD_Bits B;                   /**< \brief Bitfield access */
} Ifx_SCB_I2C_S_CMD;

/** \brief I2C configuration */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_I2C_CFG_Bits B;                     /**< \brief Bitfield access */
} Ifx_SCB_I2C_CFG;

/** \brief I2C stretch control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_I2C_STRETCH_CTRL_Bits B;            /**< \brief Bitfield access */
} Ifx_SCB_I2C_STRETCH_CTRL;

/** \brief I2C stretch status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_I2C_STRETCH_STATUS_Bits B;          /**< \brief Bitfield access */
} Ifx_SCB_I2C_STRETCH_STATUS;

/** \brief Timeout generation support 0 control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TGS_CTL0_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_TGS_CTL0;

/** \brief Timeout generation support 0 counter */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TGS_CNT0_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_TGS_CNT0;

/** \brief Timeout generation support 0 reload */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TGS_REL0_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_TGS_REL0;

/** \brief Timeout generation support 1 control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TGS_CTL1_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_TGS_CTL1;

/** \brief Timeout generation support 1 counter */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TGS_CNT1_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_TGS_CNT1;

/** \brief Timeout generation support 1 reload */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TGS_REL1_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_TGS_REL1;

/** \brief Timeout generation support 2 control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TGS_CTL2_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_TGS_CTL2;

/** \brief Timeout generation support 2 counter */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TGS_CNT2_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_TGS_CNT2;

/** \brief Timeout generation support 2 reload */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TGS_REL2_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_TGS_REL2;

/** \brief Transmitter control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TX_CTRL_Bits B;                     /**< \brief Bitfield access */
} Ifx_SCB_TX_CTRL;

/** \brief Transmitter FIFO control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TX_FIFO_CTRL_Bits B;                /**< \brief Bitfield access */
} Ifx_SCB_TX_FIFO_CTRL;

/** \brief Transmitter FIFO status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TX_FIFO_STATUS_Bits B;              /**< \brief Bitfield access */
} Ifx_SCB_TX_FIFO_STATUS;

/** \brief Transmitter FIFO write */
typedef union
{
    __O  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __O  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_TX_FIFO_WR_Bits B;                  /**< \brief Bitfield access */
} Ifx_SCB_TX_FIFO_WR;

/** \brief Receiver control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_RX_CTRL_Bits B;                     /**< \brief Bitfield access */
} Ifx_SCB_RX_CTRL;

/** \brief Receiver FIFO control */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_RX_FIFO_CTRL_Bits B;                /**< \brief Bitfield access */
} Ifx_SCB_RX_FIFO_CTRL;

/** \brief Receiver FIFO status */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_RX_FIFO_STATUS_Bits B;              /**< \brief Bitfield access */
} Ifx_SCB_RX_FIFO_STATUS;

/** \brief Slave address and mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_RX_MATCH_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_RX_MATCH;

/** \brief Slave address and mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_RX_MATCH1_Bits B;                   /**< \brief Bitfield access */
} Ifx_SCB_RX_MATCH1;

/** \brief Slave address and mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_RX_MATCH2_Bits B;                   /**< \brief Bitfield access */
} Ifx_SCB_RX_MATCH2;

/** \brief Receiver FIFO read */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_RX_FIFO_RD_Bits B;                  /**< \brief Bitfield access */
} Ifx_SCB_RX_FIFO_RD;

/** \brief Receiver FIFO read silent */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_RX_FIFO_RD_SILENT_Bits B;           /**< \brief Bitfield access */
} Ifx_SCB_RX_FIFO_RD_SILENT;

/** \brief Memory buffer */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_EZ_DATA_Bits B;                     /**< \brief Bitfield access */
} Ifx_SCB_EZ_DATA;

/** \brief Active clocked interrupt signal */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_CAUSE_Bits B;                  /**< \brief Bitfield access */
} Ifx_SCB_INTR_CAUSE;

/** \brief Externally clocked I2C interrupt request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_I2C_EC_Bits B;                 /**< \brief Bitfield access */
} Ifx_SCB_INTR_I2C_EC;

/** \brief Externally clocked I2C interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_I2C_EC_MASK_Bits B;            /**< \brief Bitfield access */
} Ifx_SCB_INTR_I2C_EC_MASK;

/** \brief Externally clocked I2C interrupt masked */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_I2C_EC_MASKED_Bits B;          /**< \brief Bitfield access */
} Ifx_SCB_INTR_I2C_EC_MASKED;

/** \brief Externally clocked SPI interrupt request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_SPI_EC_Bits B;                 /**< \brief Bitfield access */
} Ifx_SCB_INTR_SPI_EC;

/** \brief Externally clocked SPI interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_SPI_EC_MASK_Bits B;            /**< \brief Bitfield access */
} Ifx_SCB_INTR_SPI_EC_MASK;

/** \brief Externally clocked SPI interrupt masked */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_SPI_EC_MASKED_Bits B;          /**< \brief Bitfield access */
} Ifx_SCB_INTR_SPI_EC_MASKED;

/** \brief Master interrupt request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_M_Bits B;                      /**< \brief Bitfield access */
} Ifx_SCB_INTR_M;

/** \brief Master interrupt set request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_M_SET_Bits B;                  /**< \brief Bitfield access */
} Ifx_SCB_INTR_M_SET;

/** \brief Master interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_M_MASK_Bits B;                 /**< \brief Bitfield access */
} Ifx_SCB_INTR_M_MASK;

/** \brief Master interrupt masked request */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_M_MASKED_Bits B;               /**< \brief Bitfield access */
} Ifx_SCB_INTR_M_MASKED;

/** \brief Slave interrupt request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_S_Bits B;                      /**< \brief Bitfield access */
} Ifx_SCB_INTR_S;

/** \brief Slave interrupt set request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_S_SET_Bits B;                  /**< \brief Bitfield access */
} Ifx_SCB_INTR_S_SET;

/** \brief Slave interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_S_MASK_Bits B;                 /**< \brief Bitfield access */
} Ifx_SCB_INTR_S_MASK;

/** \brief Slave interrupt masked request */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_S_MASKED_Bits B;               /**< \brief Bitfield access */
} Ifx_SCB_INTR_S_MASKED;

/** \brief Transmitter interrupt request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_TX_Bits B;                     /**< \brief Bitfield access */
} Ifx_SCB_INTR_TX;

/** \brief Transmitter interrupt set request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_TX_SET_Bits B;                 /**< \brief Bitfield access */
} Ifx_SCB_INTR_TX_SET;

/** \brief Transmitter interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_TX_MASK_Bits B;                /**< \brief Bitfield access */
} Ifx_SCB_INTR_TX_MASK;

/** \brief Transmitter interrupt masked request */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_TX_MASKED_Bits B;              /**< \brief Bitfield access */
} Ifx_SCB_INTR_TX_MASKED;

/** \brief Receiver interrupt request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_RX_Bits B;                     /**< \brief Bitfield access */
} Ifx_SCB_INTR_RX;

/** \brief Receiver interrupt set request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_RX_SET_Bits B;                 /**< \brief Bitfield access */
} Ifx_SCB_INTR_RX_SET;

/** \brief Receiver interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_RX_MASK_Bits B;                /**< \brief Bitfield access */
} Ifx_SCB_INTR_RX_MASK;

/** \brief Receiver interrupt masked request */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_RX_MASKED_Bits B;              /**< \brief Bitfield access */
} Ifx_SCB_INTR_RX_MASKED;

/** \brief Receiver interrupt request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_TGS_Bits B;                    /**< \brief Bitfield access */
} Ifx_SCB_INTR_TGS;

/** \brief Receiver interrupt set request */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_TGS_SET_Bits B;                /**< \brief Bitfield access */
} Ifx_SCB_INTR_TGS_SET;

/** \brief Receiver interrupt mask */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_TGS_MASK_Bits B;               /**< \brief Bitfield access */
} Ifx_SCB_INTR_TGS_MASK;

/** \brief Receiver interrupt masked request */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_SCB_INTR_TGS_MASKED_Bits B;             /**< \brief Bitfield access */
} Ifx_SCB_INTR_TGS_MASKED;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_SCB_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief SCB object */
typedef volatile struct _Ifx_SCB
{
       __IO Ifx_SCB_CTRL                        CTRL;                   /**< \brief 0, Generic control*/
       __I  Ifx_SCB_STATUS                      STATUS;                 /**< \brief 4, Generic status*/
       __IO Ifx_SCB_CMD_RESP_CTRL               CMD_RESP_CTRL;          /**< \brief 8, Command/response control*/
       __I  Ifx_SCB_CMD_RESP_STATUS             CMD_RESP_STATUS;        /**< \brief C, Command/response status*/
       __I  Ifx_UReg_8Bit                       reserved_10[16];        /**< \brief 10, */
       __IO Ifx_SCB_SPI_CTRL                    SPI_CTRL;               /**< \brief 20, SPI control*/
       __I  Ifx_SCB_SPI_STATUS                  SPI_STATUS;             /**< \brief 24, SPI status*/
       __IO Ifx_SCB_SPI_TX_CTRL                 SPI_TX_CTRL;            /**< \brief 28, SPI transmitter control*/
       __IO Ifx_SCB_SPI_RX_CTRL                 SPI_RX_CTRL;            /**< \brief 2C, SPI receiver control*/
       __I  Ifx_UReg_8Bit                       reserved_30[16];        /**< \brief 30, */
       __IO Ifx_SCB_UART_CTRL                   UART_CTRL;              /**< \brief 40, UART control*/
       __IO Ifx_SCB_UART_TX_CTRL                UART_TX_CTRL;           /**< \brief 44, UART transmitter control*/
       __IO Ifx_SCB_UART_RX_CTRL                UART_RX_CTRL;           /**< \brief 48, UART receiver control*/
       __I  Ifx_SCB_UART_RX_STATUS              UART_RX_STATUS;         /**< \brief 4C, UART receiver status*/
       __IO Ifx_SCB_UART_FLOW_CTRL              UART_FLOW_CTRL;         /**< \brief 50, UART flow control*/
       __I  Ifx_UReg_8Bit                       reserved_54[12];        /**< \brief 54, */
       __IO Ifx_SCB_I2C_CTRL                    I2C_CTRL;               /**< \brief 60, I2C control*/
       __I  Ifx_SCB_I2C_STATUS                  I2C_STATUS;             /**< \brief 64, I2C status*/
       __IO Ifx_SCB_I2C_M_CMD                   I2C_M_CMD;              /**< \brief 68, I2C master command*/
       __IO Ifx_SCB_I2C_S_CMD                   I2C_S_CMD;              /**< \brief 6C, I2C slave command*/
       __IO Ifx_SCB_I2C_CFG                     I2C_CFG;                /**< \brief 70, I2C configuration*/
       __IO Ifx_SCB_I2C_STRETCH_CTRL            I2C_STRETCH_CTRL;       /**< \brief 74, I2C stretch control*/
       __I  Ifx_SCB_I2C_STRETCH_STATUS          I2C_STRETCH_STATUS;     /**< \brief 78, I2C stretch status*/
       __I  Ifx_UReg_8Bit                       reserved_7C[164];       /**< \brief 7C, */
       __IO Ifx_SCB_TGS_CTL0                    TGS_CTL0;               /**< \brief 120, Timeout generation support 0 control*/
       __IO Ifx_SCB_TGS_CNT0                    TGS_CNT0;               /**< \brief 124, Timeout generation support 0 counter*/
       __IO Ifx_SCB_TGS_REL0                    TGS_REL0;               /**< \brief 128, Timeout generation support 0 reload*/
       __IO Ifx_SCB_TGS_CTL1                    TGS_CTL1;               /**< \brief 12C, Timeout generation support 1 control*/
       __IO Ifx_SCB_TGS_CNT1                    TGS_CNT1;               /**< \brief 130, Timeout generation support 1 counter*/
       __IO Ifx_SCB_TGS_REL1                    TGS_REL1;               /**< \brief 134, Timeout generation support 1 reload*/
       __IO Ifx_SCB_TGS_CTL2                    TGS_CTL2;               /**< \brief 138, Timeout generation support 2 control*/
       __IO Ifx_SCB_TGS_CNT2                    TGS_CNT2;               /**< \brief 13C, Timeout generation support 2 counter*/
       __IO Ifx_SCB_TGS_REL2                    TGS_REL2;               /**< \brief 140, Timeout generation support 2 reload*/
       __I  Ifx_UReg_8Bit                       reserved_144[188];      /**< \brief 144, */
       __IO Ifx_SCB_TX_CTRL                     TX_CTRL;                /**< \brief 200, Transmitter control*/
       __IO Ifx_SCB_TX_FIFO_CTRL                TX_FIFO_CTRL;           /**< \brief 204, Transmitter FIFO control*/
       __I  Ifx_SCB_TX_FIFO_STATUS              TX_FIFO_STATUS;         /**< \brief 208, Transmitter FIFO status*/
       __I  Ifx_UReg_8Bit                       reserved_20C[52];       /**< \brief 20C, */
       __O  Ifx_SCB_TX_FIFO_WR                  TX_FIFO_WR;             /**< \brief 240, Transmitter FIFO write*/
       __I  Ifx_UReg_8Bit                       reserved_244[188];      /**< \brief 244, */
       __IO Ifx_SCB_RX_CTRL                     RX_CTRL;                /**< \brief 300, Receiver control*/
       __IO Ifx_SCB_RX_FIFO_CTRL                RX_FIFO_CTRL;           /**< \brief 304, Receiver FIFO control*/
       __I  Ifx_SCB_RX_FIFO_STATUS              RX_FIFO_STATUS;         /**< \brief 308, Receiver FIFO status*/
       __I  Ifx_UReg_8Bit                       reserved_30C[4];        /**< \brief 30C, */
       __IO Ifx_SCB_RX_MATCH                    RX_MATCH;               /**< \brief 310, Slave address and mask*/
       __IO Ifx_SCB_RX_MATCH1                   RX_MATCH1;              /**< \brief 314, Slave address and mask*/
       __IO Ifx_SCB_RX_MATCH2                   RX_MATCH2;              /**< \brief 318, Slave address and mask*/
       __I  Ifx_UReg_8Bit                       reserved_31C[36];       /**< \brief 31C, */
       __I  Ifx_SCB_RX_FIFO_RD                  RX_FIFO_RD;             /**< \brief 340, Receiver FIFO read*/
       __I  Ifx_SCB_RX_FIFO_RD_SILENT           RX_FIFO_RD_SILENT;      /**< \brief 344, Receiver FIFO read silent*/
       __I  Ifx_UReg_8Bit                       reserved_348[184];      /**< \brief 348, */
       __IO Ifx_SCB_EZ_DATA                     EZ_DATA[512];           /**< \brief 400, Memory buffer*/
       __I  Ifx_UReg_8Bit                       reserved_C00[512];      /**< \brief C00, */
       __I  Ifx_SCB_INTR_CAUSE                  INTR_CAUSE;             /**< \brief E00, Active clocked interrupt signal*/
       __I  Ifx_UReg_8Bit                       reserved_E04[124];      /**< \brief E04, */
       __IO Ifx_SCB_INTR_I2C_EC                 INTR_I2C_EC;            /**< \brief E80, Externally clocked I2C interrupt request*/
       __I  Ifx_UReg_8Bit                       reserved_E84[4];        /**< \brief E84, */
       __IO Ifx_SCB_INTR_I2C_EC_MASK            INTR_I2C_EC_MASK;       /**< \brief E88, Externally clocked I2C interrupt mask*/
       __I  Ifx_SCB_INTR_I2C_EC_MASKED          INTR_I2C_EC_MASKED;     /**< \brief E8C, Externally clocked I2C interrupt masked*/
       __I  Ifx_UReg_8Bit                       reserved_E90[48];       /**< \brief E90, */
       __IO Ifx_SCB_INTR_SPI_EC                 INTR_SPI_EC;            /**< \brief EC0, Externally clocked SPI interrupt request*/
       __I  Ifx_UReg_8Bit                       reserved_EC4[4];        /**< \brief EC4, */
       __IO Ifx_SCB_INTR_SPI_EC_MASK            INTR_SPI_EC_MASK;       /**< \brief EC8, Externally clocked SPI interrupt mask*/
       __I  Ifx_SCB_INTR_SPI_EC_MASKED          INTR_SPI_EC_MASKED;     /**< \brief ECC, Externally clocked SPI interrupt masked*/
       __I  Ifx_UReg_8Bit                       reserved_ED0[48];       /**< \brief ED0, */
       __IO Ifx_SCB_INTR_M                      INTR_M;                 /**< \brief F00, Master interrupt request*/
       __IO Ifx_SCB_INTR_M_SET                  INTR_M_SET;             /**< \brief F04, Master interrupt set request*/
       __IO Ifx_SCB_INTR_M_MASK                 INTR_M_MASK;            /**< \brief F08, Master interrupt mask*/
       __I  Ifx_SCB_INTR_M_MASKED               INTR_M_MASKED;          /**< \brief F0C, Master interrupt masked request*/
       __I  Ifx_UReg_8Bit                       reserved_F10[48];       /**< \brief F10, */
       __IO Ifx_SCB_INTR_S                      INTR_S;                 /**< \brief F40, Slave interrupt request*/
       __IO Ifx_SCB_INTR_S_SET                  INTR_S_SET;             /**< \brief F44, Slave interrupt set request*/
       __IO Ifx_SCB_INTR_S_MASK                 INTR_S_MASK;            /**< \brief F48, Slave interrupt mask*/
       __I  Ifx_SCB_INTR_S_MASKED               INTR_S_MASKED;          /**< \brief F4C, Slave interrupt masked request*/
       __I  Ifx_UReg_8Bit                       reserved_F50[48];       /**< \brief F50, */
       __IO Ifx_SCB_INTR_TX                     INTR_TX;                /**< \brief F80, Transmitter interrupt request*/
       __IO Ifx_SCB_INTR_TX_SET                 INTR_TX_SET;            /**< \brief F84, Transmitter interrupt set request*/
       __IO Ifx_SCB_INTR_TX_MASK                INTR_TX_MASK;           /**< \brief F88, Transmitter interrupt mask*/
       __I  Ifx_SCB_INTR_TX_MASKED              INTR_TX_MASKED;         /**< \brief F8C, Transmitter interrupt masked request*/
       __I  Ifx_UReg_8Bit                       reserved_F90[48];       /**< \brief F90, */
       __IO Ifx_SCB_INTR_RX                     INTR_RX;                /**< \brief FC0, Receiver interrupt request*/
       __IO Ifx_SCB_INTR_RX_SET                 INTR_RX_SET;            /**< \brief FC4, Receiver interrupt set request*/
       __IO Ifx_SCB_INTR_RX_MASK                INTR_RX_MASK;           /**< \brief FC8, Receiver interrupt mask*/
       __I  Ifx_SCB_INTR_RX_MASKED              INTR_RX_MASKED;         /**< \brief FCC, Receiver interrupt masked request*/
       __IO Ifx_SCB_INTR_TGS                    INTR_TGS;               /**< \brief FD0, Receiver interrupt request*/
       __IO Ifx_SCB_INTR_TGS_SET                INTR_TGS_SET;           /**< \brief FD4, Receiver interrupt set request*/
       __IO Ifx_SCB_INTR_TGS_MASK               INTR_TGS_MASK;          /**< \brief FD8, Receiver interrupt mask*/
       __I  Ifx_SCB_INTR_TGS_MASKED             INTR_TGS_MASKED;        /**< \brief FDC, Receiver interrupt masked request*/
       __I  Ifx_UReg_8Bit                       reserved_FE0[61472];    /**< \brief FE0, */
} Ifx_SCB;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXSCB_REGDEF_H_ */
