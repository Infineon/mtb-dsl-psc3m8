/***************************************************************************//**
* \file IfxTCPWM_regdef.h
*
* \brief
* TCPWM Registers
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
* \defgroup IfxSfr_TCPWM_Registers TCPWM Registers
* \ingroup IfxSfr
* \defgroup IfxSfr_TCPWM_Registers_Bitfields Bitfields
* \ingroup IfxSfr_TCPWM_Registers
*
* \defgroup IfxSfr_TCPWM_Registers_union Register unions
* \ingroup IfxSfr_TCPWM_Registers
*
* \defgroup IfxSfr_TCPWM_Registers_struct Memory map
* \ingroup IfxSfr_TCPWM_Registers
*
*******************************************************************************/

#ifndef _IFXTCPWM_REGDEF_H_
#define _IFXTCPWM_REGDEF_H_ 1

/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_TCPWM_Registers_Bitfields
 * \{  */
/** \brief Counter control register */
typedef struct _Ifx_TCPWM_GRP_CNT_CTRL_Bits
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
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [1:1]   \internal Reserved */
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
    __I  Ifx_UReg_32Bit :5;                     /**< \brief [7:3]   \internal Reserved */
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
                                                                    "line_out_en" to 0.This option is not available
                                                                    when line_out/line_compl_out are connected to GPIO
                                                                    through triggermux.
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
                                                KILL_LINE_POLARITY: 0u   When '0' it is disabled.
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
} Ifx_TCPWM_GRP_CNT_CTRL_Bits;

/* TCPWM_GRP_CNT_CTRL.PWM_DISABLE_MODE enumerated values */

/** \brief The behavior is the same is in previous mxtcpwm (version 1).
When the counter is disabled the PWM outputs "line_out" and "line_compl_out"
are NOT driven by the TCPWM. Instead the port default level configuration applies, e.g.
"Z" (high impedance).
Note: This is realized by driving the TCPWM output "line_out_en" to 0.This
option is not available when line_out/line_compl_out are connected to GPIO
through triggermux.
When the counter is stopped upon a stop event the PWM outputs are deactivated
(to the polarity defined by CTRL.KILL_LINE_POLARITY). */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_Z (0u)

/** \brief When the counter is disabled the PWM outputs "line_out" and "line_compl_out"
are driven by the TCPWM.
When the counter is disabled or stopped upon a stop event the PWM outputs are
retained (keep their previous levels).
While the counter is disabled or stopped the PWM outputs can be changed via
LINE_SEL (when parameter GRP_SMC_PRESENT = 1). */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_RETAIN (1u)

/** \brief When the counter is disabled the PWM outputs "line_out" and "line_compl_out"
are driven by the TCPWM.
When the counter is disabled or stopped upon a stop event the PWM output
"line_out" is driven as a fixed '0' and the PWM output "line_compl_out" is
driven as a fixed '1'. */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_L (2u)

/** \brief When the counter is disabled the PWM outputs "line_out" and "line_compl_out"
are driven by the TCPWM.
When the counter is disabled or stopped upon a stop event the PWM output
"line_out" is driven as a fixed '1' and the PWM output "line_compl_out" is
driven as a fixed '0'. */
#define IFX_TCPWM_GRP_CNT_CTRL_PWM_DISABLE_MODE_H (3u)

/* TCPWM_GRP_CNT_CTRL.UP_DOWN_MODE enumerated values */

/** \brief Count up (to PERIOD).
An overflow event is generated when the counter changes from a state in which
COUNTER equals PERIOD.
A terminal count event is generated when the counter changes from a state in
which COUNTER equals PERIOD. */
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_COUNT_UP (0u)

/** \brief Count down (to "0").
An underflow event is generated when  the counter changes from a state in which
COUNTER equals "0".
A terminal count event is generated when the counter changes from a state in
which COUNTER equals "0". */
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_COUNT_DOWN (1u)

/** \brief Count up (to PERIOD), then count down (to "0").
An overflow event is generated when the counter changes from a state in which
COUNTER equals PERIOD.
An underflow event is generated when the counter changes from a state in which
COUNTER equals "0".
A terminal count event is generated when the counter changes from a state in
which COUNTER equals "0". */
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_COUNT_UPDN1 (2u)

/** \brief Count up (to PERIOD), then count down (to "0").
An overflow event is generated when the counter changes from a state in which
COUNTER equals PERIOD.
An underflow event is generated when the counter changes from a state in which
COUNTER equals "0".
A terminal count event is generated when the counter changes from a state in
which COUNTER equals "0" AND when the counter changes from a state in which
COUNTER equals PERIOD (this counter direction can be used for PWM functionality
with asymmetrical updates). */
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_COUNT_UPDN2 (3u)

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
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_QUAD_RANGE0 (0u)

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
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_QUAD_RANGE0_CMP (1u)

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
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_QUAD_RANGE1_CAPT (2u)

/** \brief In QUAD mode this setting selects the QUAD_RANGE1_CMP mode.
The behavior is the same as for QUAD_RANGE1_CAPT mode described above with the
only difference that 1 or 2 compare functions (depending on CC1_PRESENT) are
available instead of 1 or 2 capture functions. */
#define IFX_TCPWM_GRP_CNT_CTRL_UP_DOWN_MODE_QUAD_RANGE1_CMP (3u)

/* TCPWM_GRP_CNT_CTRL.QUAD_ENCODING_MODE enumerated values */

/** \brief X1 encoding (QUAD mode)
This encoding is identical with an up / down counting functionality of the
following way: Rising edges of input phiA increment or decrement the counter
depending on the state of input phiB (direction input). */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_X1 (0u)

/** \brief X2 encoding (QUAD mode) */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_X2 (1u)

/** \brief X4 encoding (QUAD mode) */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_X4 (2u)

/** \brief Up / Down rotary counting mode.
Input phiA increments the counter, input phiB decrements the counter.
The trigger edge detection settings apply. */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_UP_DOWN (3u)

/** \brief In PWM/PWM_DT modes, when bit 0 is '1', QUADRATURE_ENCODING_MODE[0] inverts
"line_out" */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_INV_OUT (1u)

/** \brief In PWM/PWM_DT modes, when bit 1 is '1', QUADRATURE_ENCODING_MODE[1] inverts
"line_compl_out" */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_INV_COMPL_OUT (2u)

/** \brief In Timer Mode: Counter changes current count direction is disabled */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_EXT_DIR_DISABLE (0u)

/** \brief In Timer Mode: Counter changes current count direction based on falling edge of
capture0 input */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_EXT_DIR_FALLING (1u)

/** \brief In Timer Mode: Counter changes current count direction based on rising edge of
capture0 input */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_EXT_DIR_RISING (2u)

/** \brief In Timer Mode: Counter count increase when capture0 level equal to high,
counter count decrease when capture0 level equals to low. */
#define IFX_TCPWM_GRP_CNT_CTRL_QUAD_ENCODING_MODE_EXT_DIR_LEVEL (3u)

/* TCPWM_GRP_CNT_CTRL.MODE enumerated values */

/** \brief Timer mode */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_TIMER (0u)

/** \brief This setting is reserved. Do not use. */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_Reserved1 (1u)

/** \brief Capture mode */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_CAPTURE (2u)

/** \brief Quadrature mode
Different encoding modes can be selected by QUAD_ENCODING_MODE including
up/down count functionality.
Different counter range, reload value and capture behavior can be selected by
QUAD_RANGE_MODE (overloaded field UP_DOWN_MODE). */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_QUAD (3u)

/** \brief Pulse width modulation (PWM) mode.
HRPWM feature is supported in this mode through HRPWM_CTRL register. */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_PWM (4u)

/** \brief PWM with deadtime insertion mode.
HRPWM feature is supported in this mode through HRPWM_CTRL register. */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_PWM_DT (5u)

/** \brief Pseudo random pulse width modulation */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_PWM_PR (6u)

/** \brief Shift register mode. */
#define IFX_TCPWM_GRP_CNT_CTRL_MODE_SR (7u)

/* TCPWM_GRP_CNT_CTRL.KILL_LINE_POLARITY enumerated values */

/** \brief When '0' it is disabled. */
#define IFX_TCPWM_GRP_CNT_CTRL_KILL_LINE_POLARITY_KILL_LINE_POLARITY (0u)

/** \brief When bit 0 is '1', inverts the suppressed "line_out" during KILL
(PWM/PWM_DT/PWM_DISABLE modes).
In the debug mode the safe state of the line_out is defined by this bit value.
 1 - line_out will be high
 0 - line_out will be low */
#define IFX_TCPWM_GRP_CNT_CTRL_KILL_LINE_POLARITY_KILL_LINE_OUT_POLARITY (1u)

/** \brief When bit 1 is '1', inverts the suppressed "line_comp_out" during KILL
(PWM/PWM_DT/PWM_DISABLE modes).
In the debug mode the safe state of the line_compl_out is defined by this bit value.
 1 - line_compl_out will be high
 0 - line_compl_out will be low */
#define IFX_TCPWM_GRP_CNT_CTRL_KILL_LINE_POLARITY_KILL_LINE_COMPL_OUT_POLARITY (2u)

/** \brief Counter status register */
typedef struct _Ifx_TCPWM_GRP_CNT_STATUS_Bits
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
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [2:2]   \internal Reserved */
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
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [9:9]   \internal Reserved */
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
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [31:24] \internal Reserved */
} Ifx_TCPWM_GRP_CNT_STATUS_Bits;

/** \brief Counter count register */
typedef struct _Ifx_TCPWM_GRP_CNT_COUNTER_Bits
{
    __IO Ifx_UReg_32Bit COUNTER:32;             /**< \brief [31:0]  16-bit / 32-bit counter value.
                                                                    It is advised to not write to this field when the
                                                                    counter is running. (rw) */
} Ifx_TCPWM_GRP_CNT_COUNTER_Bits;

/** \brief Counter compare/capture 0 register */
typedef struct _Ifx_TCPWM_GRP_CNT_CC0_Bits
{
    __IO Ifx_UReg_32Bit CC:32;                  /**< \brief [31:0]  In CAPTURE mode, captures the counter value.
                                                                    In other modes, compared to counter value.
                                                                    In compare mode LSBs given by GRP_HRPWM_WIDTH is
                                                                    used  for HRPWM generation when GRP_HRPWM_PRESENT ='1'. (rw) */
} Ifx_TCPWM_GRP_CNT_CC0_Bits;

/** \brief Counter buffered compare/capture 0 register */
typedef struct _Ifx_TCPWM_GRP_CNT_CC0_BUFF_Bits
{
    __IO Ifx_UReg_32Bit CC:32;                  /**< \brief [31:0]  Additional buffer for counter CC register.
                                                                    In compare mode  LSBs given by GRP_HRPWM_WIDTH is
                                                                    used  for HRPWM generation when GRP_HRPWM_PRESENT ='1'. (rw) */
} Ifx_TCPWM_GRP_CNT_CC0_BUFF_Bits;

/** \brief Counter period register */
typedef struct _Ifx_TCPWM_GRP_CNT_PERIOD_Bits
{
    __IO Ifx_UReg_32Bit PERIOD:32;              /**< \brief [31:0]  Period value: upper value of the counter.
                                                                    When the counter should count for n cycles, this
                                                                    field should be set to n-1.
                                                                    In PWM and PWM_DT mode LSBs given by
                                                                    GRP_HRPWM_WIDTH is used  for HRPWM generation when
                                                                    GRP_HRPWM_PRESENT ='1'. (rw) */
} Ifx_TCPWM_GRP_CNT_PERIOD_Bits;

/** \brief Counter buffered period register */
typedef struct _Ifx_TCPWM_GRP_CNT_PERIOD_BUFF_Bits
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
} Ifx_TCPWM_GRP_CNT_PERIOD_BUFF_Bits;

/** \brief Counter PWM dead time register */
typedef struct _Ifx_TCPWM_GRP_CNT_DT_Bits
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
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_DT_Bits;

/** \brief Counter buffered PWM dead time register */
typedef struct _Ifx_TCPWM_GRP_CNT_DT_BUFF_Bits
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
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_DT_BUFF_Bits;

/** \brief Counter prescalar register */
typedef struct _Ifx_TCPWM_GRP_CNT_PS_Bits
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
} Ifx_TCPWM_GRP_CNT_PS_Bits;

/* TCPWM_GRP_CNT_PS.PS_DIV enumerated values */

/** \brief Pre-scaling of the selected counter clock. Divide by 1 */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY1 (0u)

/** \brief Pre-scaling of the selected counter clock. Divide by 2 */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY2 (1u)

/** \brief Pre-scaling of the selected counter clock. Divide by 4 */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY4 (2u)

/** \brief Pre-scaling of the selected counter clock. Divide by 8 */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY8 (3u)

/** \brief Pre-scaling of the selected counter clock. Divide by 16 */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY16 (4u)

/** \brief Pre-scaling of the selected counter clock. Divide by 32 */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY32 (5u)

/** \brief Pre-scaling of the selected counter clock. Divide by 64 */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY64 (6u)

/** \brief Pre-scaling of the selected counter clock. Divide by 128 */
#define IFX_TCPWM_GRP_CNT_PS_PS_DIV_DIVBY128 (7u)

/** \brief Counter trigger command register */
typedef struct _Ifx_TCPWM_GRP_CNT_TR_CMD_Bits
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
    __I  Ifx_UReg_32Bit :1;                     /**< \brief [5:5]   \internal Reserved */
    __IO Ifx_UReg_32Bit DC:1;                   /**< \brief [6:6]   SW external event trigger for duty cycle control.
                                                                    For HW behavior, see COUNTER_CAPTURE0 field. (rw) */
    __IO Ifx_UReg_32Bit MASK:1;                 /**< \brief [7:7]   SW external event trigge for maskingr.
                                                                    For HW behavior, see COUNTER_CAPTURE0 field. (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_TR_CMD_Bits;

/** \brief Counter input trigger selection register 0 */
typedef struct _Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits
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
} Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits;

/** \brief Counter input trigger selection register 1 */
typedef struct _Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits
{
    __IO Ifx_UReg_32Bit START_SEL:8;            /**< \brief [7:0]   Selects one of the 256 input triggers as a
                                                                    start trigger.
                                                                    In QUAD mode, this is the second phase (phi B). (rw) */
    __I  Ifx_UReg_32Bit :8;                     /**< \brief [15:8]  \internal Reserved */
    __IO Ifx_UReg_32Bit DC_SEL:8;               /**< \brief [23:16] Selects one of the 256 input triggers as an
                                                                    external trigger for duty cycle control (rw) */
    __IO Ifx_UReg_32Bit MASK_SEL:8;             /**< \brief [31:24] Selects one of the 256 input triggers as
                                                                    mask input signal (rw) */
} Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits;

/** \brief Counter input trigger edge selection register */
typedef struct _Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits
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
    __I  Ifx_UReg_32Bit :2;                     /**< \brief [11:10] \internal Reserved */
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
} Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits;

/* TCPWM_GRP_CNT_TR_IN_EDGE_SEL.CAPTURE0_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_CAPTURE0_EDGE_NO_EDGE_DET (3u)

/* TCPWM_GRP_CNT_TR_IN_EDGE_SEL.COUNT_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_COUNT_EDGE_NO_EDGE_DET (3u)

/* TCPWM_GRP_CNT_TR_IN_EDGE_SEL.RELOAD_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_RELOAD_EDGE_NO_EDGE_DET (3u)

/* TCPWM_GRP_CNT_TR_IN_EDGE_SEL.STOP_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_STOP_EDGE_NO_EDGE_DET (3u)

/* TCPWM_GRP_CNT_TR_IN_EDGE_SEL.START_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_START_EDGE_NO_EDGE_DET (3u)

/* TCPWM_GRP_CNT_TR_IN_EDGE_SEL.DC_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_DC_EDGE_NO_EDGE_DET (3u)

/* TCPWM_GRP_CNT_TR_IN_EDGE_SEL.MASK_EDGE enumerated values */

/** \brief Rising edge. Any rising edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_RISING_EDGE (0u)

/** \brief Falling edge. Any falling edge generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_FALLING_EDGE (1u)

/** \brief Rising AND falling edge. Any odd amount of edges generates an event. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_ANY_EDGE (2u)

/** \brief No edge detection, use trigger as is. */
#define IFX_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_MASK_EDGE_NO_EDGE_DET (3u)

/** \brief Counter trigger PWM control register */
typedef struct _Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits
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
    __I  Ifx_UReg_32Bit :26;                    /**< \brief [31:6]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits;

/* TCPWM_GRP_CNT_TR_PWM_CTRL.CC0_MATCH_MODE enumerated values */

/** \brief Set to '1' */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_SET (0u)

/** \brief Set to '0' */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_CLEAR (1u)

/** \brief Invert */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_INVERT (2u)

/** \brief No Change */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_CC0_MATCH_MODE_NO_CHANGE (3u)

/* TCPWM_GRP_CNT_TR_PWM_CTRL.OVERFLOW_MODE enumerated values */

/** \brief Set to '1' */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_SET (0u)

/** \brief Set to '0' */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_CLEAR (1u)

/** \brief Invert */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_INVERT (2u)

/** \brief No Change */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_OVERFLOW_MODE_NO_CHANGE (3u)

/* TCPWM_GRP_CNT_TR_PWM_CTRL.UNDERFLOW_MODE enumerated values */

/** \brief Set to '1' */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_SET (0u)

/** \brief Set to '0' */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_CLEAR (1u)

/** \brief Invert */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_INVERT (2u)

/** \brief No Change */
#define IFX_TCPWM_GRP_CNT_TR_PWM_CTRL_UNDERFLOW_MODE_NO_CHANGE (3u)

/** \brief Counter output trigger selection register */
typedef struct _Ifx_TCPWM_GRP_CNT_TR_OUT_SEL_Bits
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
                                                MASK_OUT      : 7u   PWM signal for masking the PWM output on another counter.
                                                                    When Masking is disabled, then same as LINE_OUT
                                                MASK_COMPL_OUT: 8u   Complimentary PWM signal for masking the PWM output
                                                                    on another counter.
                                                                    When Masking is disabled, then same as
                                                                    LINE_COMPL_OUT
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
                                                MASK_OUT      : 7u   PWM signal for masking the PWM output on another counter.
                                                                    When Masking is disabled, then same as LINE_OUT
                                                MASK_COMPL_OUT: 8u   Complimentary PWM signal for masking the PWM output
                                                                    on another counter.
                                                                    When Masking is disabled, then same as
                                                                    LINE_COMPL_OUT
                                                Disabled      : 9u   Output trigger disabled. */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_TR_OUT_SEL_Bits;

/* TCPWM_GRP_CNT_TR_OUT_SEL.OUT0 enumerated values */

/** \brief Overflow event */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_OVERFLOW (0u)

/** \brief Underflow event */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_UNDERFLOW (1u)

/** \brief Terminal count event (default selection) */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_TC (2u)

/** \brief Compare match 0 event */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_CC0_MATCH (3u)

/** \brief Compare match 1 event */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_CC1_MATCH (4u)

/** \brief PWM output signal "line_out" */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_LINE_OUT (5u)

/** \brief Compare match 0 event or Compare match 1 event */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_CC0_CC1_MATCH (6u)

/** \brief PWM signal for masking the PWM output on another counter.
When Masking is disabled, then same as LINE_OUT */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_MASK_OUT (7u)

/** \brief Complimentary PWM signal for masking the PWM output on another counter.
When Masking is disabled, then same as LINE_COMPL_OUT */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_MASK_COMPL_OUT (8u)

/** \brief Output trigger disabled. */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT0_Disabled (9u)

/* TCPWM_GRP_CNT_TR_OUT_SEL.OUT1 enumerated values */

/** \brief Overflow event */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_OVERFLOW (0u)

/** \brief Underflow event */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_UNDERFLOW (1u)

/** \brief Terminal count event */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_TC (2u)

/** \brief Compare match 0 event (default selection) */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_CC0_MATCH (3u)

/** \brief Compare match 1 event */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_CC1_MATCH (4u)

/** \brief PWM output signal "line_out" */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_LINE_OUT (5u)

/** \brief Compare match 0 event or Compare match 1 event */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_CC0_CC1_MATCH (6u)

/** \brief PWM signal for masking the PWM output on another counter.
When Masking is disabled, then same as LINE_OUT */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_MASK_OUT (7u)

/** \brief Complimentary PWM signal for masking the PWM output on another counter.
When Masking is disabled, then same as LINE_COMPL_OUT */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_MASK_COMPL_OUT (8u)

/** \brief Output trigger disabled. */
#define IFX_TCPWM_GRP_CNT_TR_OUT_SEL_OUT1_Disabled (9u)

/** \brief Interrupt request register */
typedef struct _Ifx_TCPWM_GRP_CNT_INTR_Bits
{
    __IO Ifx_UReg_32Bit TC:1;                   /**< \brief [0:0]   Terminal count event.
                                                                    Set to '1', when event is detected.
                                                                    Write with '1' to clear bit. (rw) */
    __IO Ifx_UReg_32Bit CC0_MATCH:1;            /**< \brief [1:1]   Counter matches CC0 register event.
                                                                    Set to '1', when event is detected.
                                                                    Write with '1' to clear bit. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_INTR_Bits;

/** \brief Interrupt set request register */
typedef struct _Ifx_TCPWM_GRP_CNT_INTR_SET_Bits
{
    __IO Ifx_UReg_32Bit TC:1;                   /**< \brief [0:0]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __IO Ifx_UReg_32Bit CC0_MATCH:1;            /**< \brief [1:1]   Write with '1' to set corresponding bit in
                                                                    interrupt request register. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_INTR_SET_Bits;

/** \brief Interrupt mask register */
typedef struct _Ifx_TCPWM_GRP_CNT_INTR_MASK_Bits
{
    __IO Ifx_UReg_32Bit TC:1;                   /**< \brief [0:0]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __IO Ifx_UReg_32Bit CC0_MATCH:1;            /**< \brief [1:1]   Mask bit for corresponding bit in interrupt
                                                                    request register. (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_INTR_MASK_Bits;

/** \brief Interrupt masked request register */
typedef struct _Ifx_TCPWM_GRP_CNT_INTR_MASKED_Bits
{
    __I  Ifx_UReg_32Bit TC:1;                   /**< \brief [0:0]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit CC0_MATCH:1;            /**< \brief [1:1]   Logical and of corresponding request and mask bits. (r) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_INTR_MASKED_Bits;

/** \brief Sync bypass register for one to one trigger */
typedef struct _Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_Bits
{
    __IO Ifx_UReg_32Bit SYNC_BYPASS:8;          /**< \brief [7:0]   When set='1', bypass the sync stage for the
                                                                    corresponding one to one trigger (rw) */
    __I  Ifx_UReg_32Bit :24;                    /**< \brief [31:8]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_Bits;

/** \brief Counter control register 2 */
typedef struct _Ifx_TCPWM_GRP_CNT_CTRL2_Bits
{
    __IO Ifx_UReg_32Bit DC_EN:1;                /**< \brief [0:0]   Define the External Trigger Event Mode for
                                                                    duty cycle control. Enabled when set to '1' (rw) */
    __IO Ifx_UReg_32Bit MASK_EN:1;              /**< \brief [1:1]   Define the External Mask Enable mode.
                                                                    Enabled when set to '1' (rw) */
    __I  Ifx_UReg_32Bit :30;                    /**< \brief [31:2]  \internal Reserved */
} Ifx_TCPWM_GRP_CNT_CTRL2_Bits;

/** \brief Trigger Sync bypass for group trigger */
typedef struct _Ifx_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_Bits
{
    __IO Ifx_UReg_32Bit SYNC_BYPASS:32;         /**< \brief [31:0]  When set='1', bypass the sync stage for the
                                                                    corresponding group trigger (rw) */
} Ifx_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_Bits;


/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_TCPWM_Registers_union
 * \{   */
/** \brief Counter control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_CTRL_Bits B;              /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_CTRL;

/** \brief Counter status register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_STATUS_Bits B;            /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_STATUS;

/** \brief Counter count register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_COUNTER_Bits B;           /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_COUNTER;

/** \brief Counter compare/capture 0 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_CC0_Bits B;               /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_CC0;

/** \brief Counter buffered compare/capture 0 register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_CC0_BUFF_Bits B;          /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_CC0_BUFF;

/** \brief Counter period register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_PERIOD_Bits B;            /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_PERIOD;

/** \brief Counter buffered period register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_PERIOD_BUFF_Bits B;       /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_PERIOD_BUFF;

/** \brief Counter PWM dead time register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_DT_Bits B;                /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_DT;

/** \brief Counter buffered PWM dead time register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_DT_BUFF_Bits B;           /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_DT_BUFF;

/** \brief Counter prescalar register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_PS_Bits B;                /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_PS;

/** \brief Counter trigger command register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_TR_CMD_Bits B;            /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_TR_CMD;

/** \brief Counter input trigger selection register 0 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_TR_IN_SEL0_Bits B;        /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_TR_IN_SEL0;

/** \brief Counter input trigger selection register 1 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_TR_IN_SEL1_Bits B;        /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_TR_IN_SEL1;

/** \brief Counter input trigger edge selection register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL_Bits B;    /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL;

/** \brief Counter trigger PWM control register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL;

/** \brief Counter output trigger selection register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_TR_OUT_SEL_Bits B;        /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_TR_OUT_SEL;

/** \brief Interrupt request register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_INTR_Bits B;              /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_INTR;

/** \brief Interrupt set request register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_INTR_SET_Bits B;          /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_INTR_SET;

/** \brief Interrupt mask register */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_INTR_MASK_Bits B;         /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_INTR_MASK;

/** \brief Interrupt masked request register */
typedef union
{
    __I  Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __I  Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_INTR_MASKED_Bits B;       /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_INTR_MASKED;

/** \brief Sync bypass register for one to one trigger */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS_Bits B; /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS;

/** \brief Counter control register 2 */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_GRP_CNT_CTRL2_Bits B;             /**< \brief Bitfield access */
} Ifx_TCPWM_GRP_CNT_CTRL2;

/** \brief Trigger Sync bypass for group trigger */
typedef union
{
    __IO Ifx_UReg_32Bit U;                      /**< \brief Unsigned access */
    __IO Ifx_UReg_32Bit I;                      /**< \brief Signed access */
    Ifx_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS_Bits B; /**< \brief Bitfield access */
} Ifx_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS;


/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_TCPWM_GRP_CNT_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief CNT object */
typedef volatile struct _Ifx_TCPWM_GRP_CNT
{
       __IO Ifx_TCPWM_GRP_CNT_CTRL              CTRL;                   /**< \brief 0, Counter control register*/
       __I  Ifx_TCPWM_GRP_CNT_STATUS            STATUS;                 /**< \brief 4, Counter status register*/
       __IO Ifx_TCPWM_GRP_CNT_COUNTER           COUNTER;                /**< \brief 8, Counter count register*/
       __I  Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, */
       __IO Ifx_TCPWM_GRP_CNT_CC0               CC0;                    /**< \brief 10, Counter compare/capture 0 register*/
       __IO Ifx_TCPWM_GRP_CNT_CC0_BUFF          CC0_BUFF;               /**< \brief 14, Counter buffered compare/capture 0 register*/
       __I  Ifx_UReg_8Bit                       reserved_18[8];         /**< \brief 18, */
       __IO Ifx_TCPWM_GRP_CNT_PERIOD            PERIOD;                 /**< \brief 20, Counter period register*/
       __IO Ifx_TCPWM_GRP_CNT_PERIOD_BUFF       PERIOD_BUFF;            /**< \brief 24, Counter buffered period register*/
       __I  Ifx_UReg_8Bit                       reserved_28[8];         /**< \brief 28, */
       __IO Ifx_TCPWM_GRP_CNT_DT                DT;                     /**< \brief 30, Counter PWM dead time register*/
       __IO Ifx_TCPWM_GRP_CNT_DT_BUFF           DT_BUFF;                /**< \brief 34, Counter buffered PWM dead time register*/
       __IO Ifx_TCPWM_GRP_CNT_PS                PS;                     /**< \brief 38, Counter prescalar register*/
       __I  Ifx_UReg_8Bit                       reserved_3C[4];         /**< \brief 3C, */
       __IO Ifx_TCPWM_GRP_CNT_TR_CMD            TR_CMD;                 /**< \brief 40, Counter trigger command register*/
       __IO Ifx_TCPWM_GRP_CNT_TR_IN_SEL0        TR_IN_SEL0;             /**< \brief 44, Counter input trigger selection register 0*/
       __IO Ifx_TCPWM_GRP_CNT_TR_IN_SEL1        TR_IN_SEL1;             /**< \brief 48, Counter input trigger selection register 1*/
       __IO Ifx_TCPWM_GRP_CNT_TR_IN_EDGE_SEL    TR_IN_EDGE_SEL;         /**< \brief 4C, Counter input trigger edge selection register*/
       __IO Ifx_TCPWM_GRP_CNT_TR_PWM_CTRL       TR_PWM_CTRL;            /**< \brief 50, Counter trigger PWM control register*/
       __IO Ifx_TCPWM_GRP_CNT_TR_OUT_SEL        TR_OUT_SEL;             /**< \brief 54, Counter output trigger selection register*/
       __I  Ifx_UReg_8Bit                       reserved_58[24];        /**< \brief 58, */
       __IO Ifx_TCPWM_GRP_CNT_INTR              INTR;                   /**< \brief 70, Interrupt request register*/
       __IO Ifx_TCPWM_GRP_CNT_INTR_SET          INTR_SET;               /**< \brief 74, Interrupt set request register*/
       __IO Ifx_TCPWM_GRP_CNT_INTR_MASK         INTR_MASK;              /**< \brief 78, Interrupt mask register*/
       __I  Ifx_TCPWM_GRP_CNT_INTR_MASKED       INTR_MASKED;            /**< \brief 7C, Interrupt masked request register*/
       __I  Ifx_UReg_8Bit                       reserved_80[36];        /**< \brief 80, */
       __IO Ifx_TCPWM_GRP_CNT_TR_ONE_SYNC_BYPASS TR_ONE_SYNC_BYPASS;    /**< \brief A4, Sync bypass register for one to one trigger*/
       __I  Ifx_UReg_8Bit                       reserved_A8[12];        /**< \brief A8, */
       __IO Ifx_TCPWM_GRP_CNT_CTRL2             CTRL2;                  /**< \brief B4, Counter control register 2*/
       __I  Ifx_UReg_8Bit                       reserved_B8[72];        /**< \brief B8, */
} Ifx_TCPWM_GRP_CNT;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_TCPWM_GRP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief GRP object */
typedef volatile struct _Ifx_TCPWM_GRP
{
       __IO Ifx_TCPWM_GRP_CNT                   CNT[256];               /**< \brief 0, Timer/Counter/PWM Counter Module*/
} Ifx_TCPWM_GRP;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_TCPWM_TR_ALL_GF_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TR_ALL_GF object */
typedef volatile struct _Ifx_TCPWM_TR_ALL_GF
{
       __I  Ifx_UReg_8Bit                       reserved_0[1024];       /**< \brief 0, */
} Ifx_TCPWM_TR_ALL_GF;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_TCPWM_TR_ALL_SYNC_BYPASS_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief TR_ALL_SYNC_BYPASS object */
typedef volatile struct _Ifx_TCPWM_TR_ALL_SYNC_BYPASS
{
       __IO Ifx_TCPWM_TR_ALL_SYNC_BYPASS_TR_ALL_SYNC_BYPASS TR_ALL_SYNC_BYPASS[8]; /**< \brief 0, Trigger Sync bypass for group trigger*/
       __I  Ifx_UReg_8Bit                       reserved_20[32];        /**< \brief 20, */
} Ifx_TCPWM_TR_ALL_SYNC_BYPASS;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_TCPWM_MOTIF_GRP_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief MOTIF_GRP object */
typedef volatile struct _Ifx_TCPWM_MOTIF_GRP
{
       __I  Ifx_UReg_8Bit                       reserved_0[16384];      /**< \brief 0, */
} Ifx_TCPWM_MOTIF_GRP;

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_TCPWM_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */
/** \brief TCPWM object */
typedef volatile struct _Ifx_TCPWM
{
       __IO Ifx_TCPWM_GRP                       GRP[8];                 /**< \brief 0, Group of counters*/
       __IO Ifx_TCPWM_TR_ALL_GF                 TR_ALL_GF;              /**< \brief 80000, Glitch filter module for group trigger*/
       __I  Ifx_UReg_8Bit                       reserved_80400[64512];  /**< \brief 80400, */
       __IO Ifx_TCPWM_TR_ALL_SYNC_BYPASS        TR_ALL_SYNC_BYPASS;     /**< \brief 90000, Glitch filter module for group trigger*/
       __I  Ifx_UReg_8Bit                       reserved_90040[65472];  /**< \brief 90040, */
       __IO Ifx_TCPWM_MOTIF_GRP                 MOTIF_GRP[8];           /**< \brief A0000, Trigger Sync bypass for group trigger*/
       __I  Ifx_UReg_8Bit                       reserved_C0000[262144]; /**< \brief C0000, */
} Ifx_TCPWM;

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXTCPWM_REGDEF_H_ */
