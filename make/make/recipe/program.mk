################################################################################
# \file program.mk
#
# \brief
# This make file is called recursively and is used to build the
# resources file system. It is expected to be run from the example directory.
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

_MTB_RECIPE__ADVANCED_PROGRAM_SUPPORTS_JLINK:=true
include $(MTB_TOOLS__RECIPE_DIR)/make/recipe/program_common.mk

_MTB_RECIPE__GDB_ARGS=$(MTB_TOOLS__RECIPE_DIR)/make/scripts/gdbinit

_MTB_RECIPE__OPENOCD_DEBUG_PREFIX=$(_MTB_RECIPE__OPENOCD_CHIP_NAME).cm33 configure -rtos auto -rtos-wipe-on-reset-halt 1; gdb_breakpoint_override hard;

_MTB_RECIPE__OPENOCD_SYMBOL_IMG=$(_MTB_RECIPE__LAST_CONFIG_TARG_FILE)

# Programming image selection (priority high to low):
# 1) User override (PROG_FILE)
# 2) Multi-core combined hex (_MTB_RECIPE__APP_HEX_FILE) — set only when MTB_APPLICATION_SUBPROJECTS is passed (qprogram flow)
# 3) Combiner-signer per-project hex (MTB_COMBINE_SIGN_<prj>_HEX_FILES) — used by qprogram_proj
# 4) Default: last built project hex
_MTB_RECIPE__OPENOCD_PROGRAM_IMG=$(or \
    $(PROG_FILE),\
    $(_MTB_RECIPE__APP_HEX_FILE),\
    $(MTB_COMBINE_SIGN_$(lastword $(MTB_COMBINE_SIGN_$(notdir $(realpath $(MTB_TOOLS__PRJ_DIR)))_HEX_FILES))_HEX_PATH),\
    $(_MTB_RECIPE__LAST_CONFIG_PROG_FILE))

ifeq ($(APPTYPE),ram)
# RAM specifics
ifeq ($(filter erase,$(MAKECMDGOALS)),erase)
$(call mtb__error, Unable to proceed. program and erase is not supported for APPTYPE=$(APPTYPE))
endif
_MTB_RECIPE_APP_LOAD_ADDR=0x20004200
_MTB_RECIPE_APP_SP=$(_MTB_RECIPE_APP_LOAD_ADDR)
_MTB_RECIPE_APP_PC=$(shell printf "0x%x" $$(($(_MTB_RECIPE_APP_LOAD_ADDR) + 0x04)))
ifneq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
ifneq ($(_MTB_RECIPE__APP_HEX_FILE),)
_MTB_RECIPE__OPENOCD_PROGRAM_IMG=$(_MTB_RECIPE__APP_HEX_FILE)
endif
endif
MTB_RECIPE__OPENOCD_PRECONFIG=set ENABLE_CM33_PPCA 1
_MTB_RECIPE_OPENOCD_PREPARE_APP=init; reset init; source [find target/infineon/cat1b/ppca_init.cfg]; targets psc3.cm33$(_MTB_RECIPE__OPENOCD_CHIP_PPCA_SUFFIX); load_image $(_MTB_RECIPE__OPENOCD_PROGRAM_IMG); reg pc [mrw 0x34000004]; reg sp [mrw 0x34000000]; resume; sleep 1500; halt;
_MTB_RECIPE_OPENOCD_DEBUG=$(_MTB_RECIPE__OPENOCD_DEBUG_PREFIX) $(_MTB_RECIPE_OPENOCD_PREPARE_APP)
_MTB_RECIPE_OPENOCD_PROGRAM=$(_MTB_RECIPE_OPENOCD_PREPARE_APP) resume; exit;

else #($(APPTYPE),ram)
# Flash specifics
_MTB_RECIPE_OPENOCD_ERASE=init; reset init; erase_all; exit;
_MTB_RECIPE_OPENOCD_DEBUG=$(_MTB_RECIPE__OPENOCD_DEBUG_PREFIX) init; reset init;
_MTB_RECIPE_OPENOCD_PROGRAM=init; reset init; flash write_image erase $(_MTB_RECIPE__OPENOCD_PROGRAM_IMG); reset run; shutdown;
ifeq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
ifneq ($(filter NON_SECURE,$(VCORE_ATTRS)),)
_MTB_RECIPE_OPENOCD_PROGRAM=init; reset init; flash write_image erase $(_MTB_RECIPE__OPENOCD_PROGRAM_IMG); flash write_image erase $(_MTB_RECIPE__PREBUILT_SECURE_APP); reset run; shutdown;
endif
endif
endif #($(APPTYPE),ram)

_MTB_RECIPE__OPENOCD_ERASE_ARGS=$(_MTB_RECIPE__OPENOCD_SCRIPTS) $(_MTB_RECIPE__OPENOCD_QSPI) -c "set DEBUG_CERTIFICATE $(CY_DBG_CERTIFICATE_PATH)" -c \
					"$(_MTB_RECIPE__OPENOCD_QSPI_FLASHLOADER); $(_MTB_RECIPE__OPENOCD_INTERFACE) $(_MTB_RECIPE__OPENOCD_PROBE_SERIAL) transport select $(_MTB_RECIPE__PROBE_INTERFACE); $(MTB_RECIPE__OPENOCD_PRECONFIG); $(_MTB_RECIPE__OPENOCD_TARGET) $(_MTB_RECIPE_OPENOCD_CUSTOM_COMMAND) $(_MTB_RECIPE_OPENOCD_ERASE)"
_MTB_RECIPE__OPENOCD_PROGRAM_ARGS=$(_MTB_RECIPE__OPENOCD_SCRIPTS) $(_MTB_RECIPE__OPENOCD_QSPI) -c "set DEBUG_CERTIFICATE $(CY_DBG_CERTIFICATE_PATH)" -c \
					"$(_MTB_RECIPE__OPENOCD_QSPI_FLASHLOADER); $(_MTB_RECIPE__OPENOCD_INTERFACE) $(_MTB_RECIPE__OPENOCD_PROBE_SERIAL) transport select $(_MTB_RECIPE__PROBE_INTERFACE); $(MTB_RECIPE__OPENOCD_PRECONFIG); $(_MTB_RECIPE__OPENOCD_TARGET) $(_MTB_RECIPE_OPENOCD_CUSTOM_COMMAND) $(_MTB_RECIPE_OPENOCD_PROGRAM)"
_MTB_RECIPE__OPENOCD_DEBUG_ARGS=$(_MTB_RECIPE__OPENOCD_SCRIPTS) $(_MTB_RECIPE__OPENOCD_QSPI) -c "set DEBUG_CERTIFICATE $(CY_DBG_CERTIFICATE_PATH)" -c \
					"$(_MTB_RECIPE__OPENOCD_QSPI_FLASHLOADER); $(_MTB_RECIPE__OPENOCD_INTERFACE) $(_MTB_RECIPE__OPENOCD_PROBE_SERIAL) transport select $(_MTB_RECIPE__PROBE_INTERFACE); $(MTB_RECIPE__OPENOCD_PRECONFIG); $(_MTB_RECIPE__OPENOCD_TARGET) $(_MTB_RECIPE_OPENOCD_CUSTOM_COMMAND) $(_MTB_RECIPE_OPENOCD_DEBUG)"


# JLink program / erase parameters
_MTB_RECIPE__JLINK_LOAD_OFFSET:=0
_MTB_RECIPE__JLINK_DEVICE_CFG_PROGRAM=$(_MTB_RECIPE__JLINK_DEVICE_CFG)
# If current core is PPCA, strip the PPCA suffix — SEGGER exposes only the base
# alias (e.g. PSC3M8G) for flashing; the _PPCA0/_PPCA1 variants are debug-only.
_MTB_RECIPE__JLINK_DEVICE_CFG_PROGRAM:=$(patsubst %_PPCA0,%,$(patsubst %_PPCA1,%,$(_MTB_RECIPE__JLINK_DEVICE_CFG)))
_MTB_RECIPE__JLINK_DEBUG_ARGS=-if $(_MTB_RECIPE__PROBE_INTERFACE) -device $(_MTB_RECIPE__JLINK_DEVICE_CFG) -endian little -speed auto -port 2334 -swoport 2335 -telnetport 2336 -vd -ir -localhostonly 1 -singlerun -strict -timeout 0 -nogui

################################################################################
# Advanced Programming (mtb-programmer)
################################################################################

# Use CY_DBG_CERTIFICATE_PATH if user-provided; otherwise default based on project structure.
# CY_DBG_CERTIFICATE_PATH is only assigned by recipe_ide.mk, which is not included
# for the command-line flow, so the default is resolved here as well.
_MTB_RECIPE__DBG_CERT_FOR_ADVANCED_PROGRAM:=$(CY_DBG_CERTIFICATE_PATH)
ifeq ($(_MTB_RECIPE__DBG_CERT_FOR_ADVANCED_PROGRAM),)
_MTB_RECIPE__DBG_CERT_FOR_ADVANCED_PROGRAM:=./packets/debug_token.bin
ifneq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
_MTB_RECIPE__DBG_CERT_FOR_ADVANCED_PROGRAM:=../packets/debug_token.bin
endif
endif
_MTB_RECIPE__ADVANCED_PROGRAM_EXTRA_ARGS:=--debug-cert="$(call mtb__path_normalize,$(_MTB_RECIPE__DBG_CERT_FOR_ADVANCED_PROGRAM))"

# For J-Link, mtb-programmer accepts the J-Link device alias in place of the MPN.
# --debug-cert is supported for J-Link as well, so the extra arguments are
# identical to the KitProg3 ones.
ifeq ($(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR),JLink)
_MTB_RECIPE__ADVANCED_PROGRAM_MPN:=$(_MTB_RECIPE__JLINK_DEVICE_CFG_PROGRAM)
endif
