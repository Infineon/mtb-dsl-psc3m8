################################################################################
# \file defines.mk
#
# \brief
# Defines, needed for the PSOC(TM) Control C3 Performance Line build recipe.
#
################################################################################
# \copyright
# Copyright (c) 2022-2026, Infineon Technologies AG, or an affiliate of
# Infineon Technologies AG. All rights reserved.
# SPDX-License-Identifier: Apache-2.0
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
################################################################################

ifeq ($(WHICHFILE),true)
$(info Processing $(lastword $(MAKEFILE_LIST)))
endif

include $(MTB_TOOLS__RECIPE_DIR)/make/recipe/defines_common.mk

################################################################################
# General
################################################################################
_MTB_RECIPE__PROGRAM_INTERFACE_SUPPORTED:=KitProg3 JLink

# Compatibility interface for this recipe make
MTB_RECIPE__INTERFACE_VERSION:=2

MTB_RECIPE__NINJA_SUPPORT:=1 2

# Compatible export interfaces
MTB_RECIPE__EXPORT_INTERFACES:=4 5

# The supported toolchains list
ifdef CY_SUPPORTED_TOOLCHAINS
MTB_SUPPORTED_TOOLCHAINS?=$(CY_SUPPORTED_TOOLCHAINS)
else
MTB_SUPPORTED_TOOLCHAINS?=GCC_ARM IAR ARM LLVM_ARM
endif

# For BWC with Makefiles that do anything with CY_SUPPORTED_TOOLCHAINS
CY_SUPPORTED_TOOLCHAINS:=$(MTB_SUPPORTED_TOOLCHAINS)

ifeq ($(MTB_TYPE),PROJECT)
_MTB_RECIPE__IS_MULTI_CORE_APPLICATION:=true
endif

_MTB_RECIPE__ECLIPSE_NEWLINE:=&\#13;&\#10;

#
# Define the default device mode
#
VCORE_ATTRS?=

# Device has internal memory only
ifneq ($(filter SECURE,$(VCORE_ATTRS)),)
_MTB_RECIPE__START_FLASH=0x12000000
else
_MTB_RECIPE__START_FLASH=0x02000000
endif

_MTB_RECIPE__OPENOCD_CHIP_NAME:=psc3
_MTB_RECIPE__OPENOCD_DEVICE_CFG:=infineon/psc3.cfg
_MTB_RECIPE__OPENOCD_TARGET_VAR:=psc3
_MTB_RECIPE__PREBUILT_SECURE_APP:=$(MTB_TOOLS__TARGET_DIR)/TOOLCHAIN_$(TOOLCHAIN)/COMPONENT_PREBUILT_SECURE_APP/secure_region_flash.elf

ifeq (ram,$(APPTYPE))
_MTB_RECIPE__PREBUILT_SECURE_APP:=$(MTB_TOOLS__TARGET_DIR)/TOOLCHAIN_$(TOOLCHAIN)/COMPONENT_PREBUILT_SECURE_APP/secure_region.elf
endif
ifeq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
ifneq ($(filter NON_SECURE,$(VCORE_ATTRS)),)
_MTB_RECIPE__ECLIPSE_LAUNCH_APP_COMMANDS:=load $(_MTB_RECIPE__PREBUILT_SECURE_APP)$(_MTB_RECIPE__ECLIPSE_NEWLINE)
endif
endif

ifeq (2,$(words $(filter CORE_NAME_CM33%,$(DEVICE_$(DEVICE)_CORES))))
_MTB_RECIPE__HAS_SINGLE_CM33_PPCA:=true
_MTB_RECIPE__OPENOCD_DEVICE_CFG:=infineon/psc3x7.cfg
else
_MTB_RECIPE__OPENOCD_DEVICE_CFG:=infineon/psc3x8.cfg
endif

MTB_RECIPE__COMPONENT+=PSC3_P8_$(MTB_RECIPE__CORE_NAME)

# Add additional component for PPCA_0 and PPCA_1 cores of PSC3_P8 device
ifneq (,$(filter $(_MTB_RECIPE__PPCA_0_CORE_NAME) $(_MTB_RECIPE__PPCA_1_CORE_NAME),$(MTB_RECIPE__CORE_NAME)))
MTB_RECIPE__COMPONENT+=PPCA_DEVICE
endif # ($(_MTB_RECIPE__PPCA_0_CORE_NAME) $(_MTB_RECIPE__PPCA_1_CORE_NAME),$(MTB_RECIPE__CORE_NAME))


_MTB_RECIPE__OPENOCD_INITIAL_CORE_PORT:=3333
_MTB_RECIPE__JLINK_GDB_PORT:=2334
_MTB_RECIPE__JLINK_SWO_PORT:=2335
_MTB_RECIPE__JLINK_TELNET_PORT:=2336
_MTB_RECIPE__OPENOCD_ATTACH_RUN_COMMANDS:=flushregs&\#13;&\#10;mon gdb_sync&\#13;&\#10;thread apply all stepi
_MTB_RECIPE__ECLIPSE_DO_LOAD_IMAGE:=true
_MTB_RECIPE__OPENOCD_ECLIPSE_PPCA_RTOS_CONFIG_ALL:=-c &quot;$(_MTB_RECIPE__OPENOCD_CHIP_NAME).cm33.ppca0 configure -rtos auto -rtos-wipe-on-reset-halt 1&quot;$(_MTB_RECIPE__ECLIPSE_NEWLINE)
ifneq (true,$(_MTB_RECIPE__HAS_SINGLE_CM33_PPCA))
_MTB_RECIPE__OPENOCD_ECLIPSE_PPCA_RTOS_CONFIG_ALL:=$(_MTB_RECIPE__OPENOCD_ECLIPSE_PPCA_RTOS_CONFIG_ALL)-c &quot;$(_MTB_RECIPE__OPENOCD_CHIP_NAME).cm33.ppca1 configure -rtos auto -rtos-wipe-on-reset-halt 1&quot;$(_MTB_RECIPE__ECLIPSE_NEWLINE)
endif
# PPCA CM33 defines
ifneq ($(MTB_RECIPE__CORE_NAME),CM33_0)
_MTB_RECIPE__OPENOCD_PPCA_ENABLE_CMD=set ENABLE_CM33_PPCA 1
_MTB_RECIPE__ECLIPSE_OPENOCD_PPCA_ENABLE_CMD=-c &quot;$(_MTB_RECIPE__OPENOCD_PPCA_ENABLE_CMD)&quot;&\#13;&\#10;
_MTB_RECIPE__ECLIPSE_OPENOCD_ATTACH_CONFIG_OPTIONS=
_MTB_RECIPE__ECLIPSE_DO_LOAD_IMAGE:=false
endif
# PPCA_0 CM33 defines
ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_0_CORE_NAME))
_MTB_RECIPE__OPENOCD_PPCA_RESET_HALT:=monitor reset_halt ppca_0 single_debug
_MTB_RECIPE__OPENOCD_ATTACH_RUN_COMMANDS:=monitor reset_halt ppca_0 attach&\#13;&\#10;flushregs&\#13;&\#10;mon gdb_sync&\#13;&\#10;thread apply all stepi
_MTB_RECIPE__ECLIPSE_OPENOCD_ATTACH_CONFIG_OPTIONS=-c &quot;init; reset_halt ppca_0 attach&quot;
_MTB_RECIPE__OPENOCD_INITIAL_CORE_PORT:=3332
_MTB_RECIPE__OPENOCD__PSC3_P8_PPCA_CORE_IDX=0
_MTB_RECIPE__OPENOCD_CHIP_PPCA_SUFFIX:=.ppca0
JLINK_DEVICE_CORE_SUFFIX:=_PPCA0
_MTB_RECIPE__JLINK_GDB_PORT:=2337
_MTB_RECIPE__JLINK_SWO_PORT:=2338
_MTB_RECIPE__JLINK_TELNET_PORT:=2339
endif
# PPCA_1 CM33 defines
ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_1_CORE_NAME))
_MTB_RECIPE__OPENOCD_PPCA_RESET_HALT:=monitor reset_halt ppca_1 single_debug
_MTB_RECIPE__OPENOCD_ATTACH_RUN_COMMANDS:=monitor reset_halt ppca_1 attach&\#13;&\#10;flushregs&\#13;&\#10;mon gdb_sync&\#13;&\#10;thread apply all stepi
_MTB_RECIPE__ECLIPSE_OPENOCD_ATTACH_CONFIG_OPTIONS=-c &quot;init; reset_halt ppca_1 attach&quot;
_MTB_RECIPE__OPENOCD_INITIAL_CORE_PORT:=3331
_MTB_RECIPE__OPENOCD__PSC3_P8_PPCA_CORE_IDX=1
_MTB_RECIPE__OPENOCD_CHIP_PPCA_SUFFIX:=.ppca1
JLINK_DEVICE_CORE_SUFFIX:=_PPCA1
_MTB_RECIPE__JLINK_GDB_PORT:=2340
_MTB_RECIPE__JLINK_SWO_PORT:=2341
_MTB_RECIPE__JLINK_TELNET_PORT:=2342
endif
_MTB_RECIPE__OPENOCD_GDB_PORT_CMD:=gdb_port $(_MTB_RECIPE__OPENOCD_INITIAL_CORE_PORT)
_MTB_RECIPE__OPENOCD_GDB_PORT_CMD_ECLIPSE:=-c &quot;$(_MTB_RECIPE__OPENOCD_GDB_PORT_CMD)&quot;&\#13;&\#10;

# SEGGER J-Link device alias: base derived from the first 7 characters of the MPN
# (e.g. PSC3M8G, PSC3P7F), plus optional core suffix (_PPCA0/_PPCA1) for PPCA cores.
# The same alias is used for attach; the programming alias (see program.mk) strips
# the PPCA suffix because SEGGER exposes only the base alias for flashing.
_MTB_RECIPE__JLINK_DEVICE_CFG:=$(shell echo $(DEVICE) | sed 's/^\(.\{7\}\).*/\1/')$(JLINK_DEVICE_CORE_SUFFIX)
_MTB_RECIPE__JLINK_CFG_ATTACH:=$(_MTB_RECIPE__JLINK_DEVICE_CFG)

