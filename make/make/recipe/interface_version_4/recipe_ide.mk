################################################################################
# \file recipe_ide.mk
#
# \brief
# This make file defines the IDE export variables and target.
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

MTB_RECIPE__IDE_SUPPORTED:=eclipse vscode uvision5 ewarm8


_MTB_RECIPE__IDE_EXPORT_INTERFACE_VERSION=interface_version_4
_MTB_RECIPE__IDE_RECIPE_DIR:=$(MTB_TOOLS__RECIPE_DIR)/make/recipe/$(_MTB_RECIPE__IDE_EXPORT_INTERFACE_VERSION)
ifneq (,$(filter KitProg3 JLink,$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)))
_MTB_RECIPE__HIDE_ADVANCED_PROGRAM:=false
endif
include $(_MTB_RECIPE__IDE_RECIPE_DIR)/recipe_ide_common.mk

# Path to debug certificate
ifneq ($(CY_DBG_CERTIFICATE_PATH),)
CY_DBG_CERTIFICATE_PATH_APPLICATION:=$(CY_DBG_CERTIFICATE_PATH)
else
CY_DBG_CERTIFICATE_PATH:=./packets/debug_token.bin
CY_DBG_CERTIFICATE_PATH_APPLICATION:=./packets/debug_token.bin
ifneq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
CY_DBG_CERTIFICATE_PATH:=../packets/debug_token.bin
endif
endif # ifneq ($(CY_DBG_CERTIFICATE_PATH),)
_MTB_RECIPE__OPENOCD_QSPI_FLASHLOADER=
_MTB_RECIPE__OPENOCD_QSPI_FLASHLOADER_WITH_FLAG=

# Toolchain specifics
ifeq ($(TOOLCHAIN),ARM)
PC_SYMBOL=__main
SP_SYMBOL=Image$$$$ARM_LIB_STACK$$$$ZI$$$$Limit
else ifeq ($(TOOLCHAIN),IAR)
PC_SYMBOL=Reset_Handler
SP_SYMBOL=CSTACK$$$$Limit
else ifeq ($(TOOLCHAIN),GCC_ARM)
PC_SYMBOL=Reset_Handler
SP_SYMBOL=__StackTop
endif

##############################################
# Eclipse VSCode
##############################################
_MTB_RECIPE__IDE_TEXT_DATA_FILE=$(MTB_TOOLS__OUTPUT_CONFIG_DIR)/recipe_ide_text_data.txt
_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE:=$(MTB_TOOLS__OUTPUT_CONFIG_DIR)/recipe_ide_template_meta_data.txt
_MTB_RECIPE__ECLIPSE_TEMPLATE_REGEX_DATA_FILE:=$(MTB_TOOLS__OUTPUT_CONFIG_DIR)/recipe_eclipse_template_regex_data.txt
_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE:=$(MTB_TOOLS__OUTPUT_CONFIG_DIR)/recipe_vscode_template_regex_data.txt

ifeq ($(firstword $(MTB_APPLICATION_SUBPROJECTS)),$(_MTB_RECIPE__IDE_PRJ_DIR_NAME))
_MTB_RECIPE__IS_FIRST_PRJ=1
endif
ifeq ($(lastword $(MTB_APPLICATION_SUBPROJECTS)),$(_MTB_RECIPE__IDE_PRJ_DIR_NAME))
_MTB_RECIPE__IS_LAST_PRJ=1
endif

ifeq (ram,$(APPTYPE))
# RAM
ifeq ($(MTB_RECIPE__CORE_NAME),CM33_0)
_MTB_RECIPE__IDE_TEMPLATE_SUBDIR:=ram/PSC3M8/main
else
_MTB_RECIPE__IDE_TEMPLATE_SUBDIR:=ram/PSC3M8/ppca
endif
else #(ram,$(APPTYPE))
_MTB_RECIPE__IDE_TEMPLATE_SUBDIR:=flash/PSC3M8
endif #(ram,$(APPTYPE))

##############################################
# Eclipse
##############################################

eclipse_generate: recipe_eclipse_text_replacement_data_file recipe_eclipse_regex_replacement_data_file recipe_eclipse_meta_replacement_data_file_common
eclipse_generate: recipe_eclipse_meta_replacement_data_file_psc3m8
eclipse_generate: MTB_CORE__EXPORT_CMDLINE += -textdata $(_MTB_RECIPE__IDE_TEXT_DATA_FILE)  -metadata $(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE) -textregexdata $(_MTB_RECIPE__ECLIPSE_TEMPLATE_REGEX_DATA_FILE)

recipe_eclipse_meta_replacement_data_file_common:
	$(call mtb__file_write,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),UUID=&&PROJECT_UUID&&)
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/eclipse/CM33/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/any=.mtbLaunchConfigs)
ifneq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),APPLICATION_UUID=&&APPLICATION_UUID&&)
ifneq (,$(_MTB_RECIPE__IS_FIRST_PRJ))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),UUID=&&PROJECT_UUID_1&&)
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),UPDATE_APPLICATION_PREF_FILE=1)
else
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=../.mtbLaunchConfigs=../.mtbLaunchConfigs)
endif
ifneq (,$(_MTB_RECIPE__IS_LAST_PRJ))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),UUID=&&PROJECT_UUID_2&&)
endif #(,$(_MTB_RECIPE__IS_LAST_PRJ))
endif

recipe_eclipse_meta_replacement_data_file_psc3m8:
ifneq (ram,$(APPTYPE))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_RECIPE_DIR)/Proj/any=.mtbLaunchConfigs)
# Advanced Programming (mtb-programmer). Flash applications only — there is nothing
# to program for a RAM application.
ifneq (,$(filter KitProg3 JLink,$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_RECIPE_DIR)/Proj/advanced=.mtbLaunchConfigs)
endif
endif
ifeq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
# Single-core project
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_RECIPE_DIR)/Proj/any=.mtbLaunchConfigs)
ifneq (ram,$(APPTYPE))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/eclipse/CM33/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/single=.mtbLaunchConfigs)
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_RECIPE_DIR)/Proj/single/internal=.mtbLaunchConfigs)
endif
else
# Multi-core project
ifneq (,$(_MTB_RECIPE__IS_FIRST_PRJ))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/eclipse/App/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)=../.mtbLaunchConfigs)
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_RECIPE_DIR)/App/internal=../.mtbLaunchConfigs)
ifneq (ram,$(APPTYPE))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/eclipse/App/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)=../.mtbLaunchConfigs)
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_RECIPE_DIR)/App/internal=../.mtbLaunchConfigs)
# Application-level Advanced Programming (mtb-programmer) config.
ifneq (,$(filter KitProg3 JLink,$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_RECIPE_DIR)/App/advanced=../.mtbLaunchConfigs)
endif
endif
endif
ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_0_CORE_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/eclipse/$(MTB_RECIPE__CORE)/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/dual=.mtbLaunchConfigs)
endif
ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_1_CORE_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/eclipse/$(MTB_RECIPE__CORE)/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/triple=.mtbLaunchConfigs)
endif
endif

recipe_eclipse_regex_replacement_data_file:
ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_1_CORE_NAME))
	$(call mtb__file_write,$(_MTB_RECIPE__ECLIPSE_TEMPLATE_REGEX_DATA_FILE),^(.*)//triple-core only//(.*)$$=\1\2)
else
ifneq (,$(_MTB_RECIPE__IS_LAST_PRJ))
	$(call mtb__file_write,$(_MTB_RECIPE__ECLIPSE_TEMPLATE_REGEX_DATA_FILE),^.*//triple-core only//.*$$=)
	$(call mtb__file_append,$(_MTB_RECIPE__ECLIPSE_TEMPLATE_REGEX_DATA_FILE),^.*//quad-core only//.*$$=)
	$(call mtb__file_append,$(_MTB_RECIPE__ECLIPSE_TEMPLATE_REGEX_DATA_FILE),^.*//penta-core only//.*$$=)
endif
endif

recipe_eclipse_text_replacement_data_file:
	$(call mtb__file_write,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__JLINK_CFG&&=$(_MTB_RECIPE__JLINK_DEVICE_CFG))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__JLINK_CFG_ATTACH&&=$(_MTB_RECIPE__JLINK_CFG_ATTACH))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&PC_SYMBOL&&=$(PC_SYMBOL))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&SP_SYMBOL&&=$(SP_SYMBOL))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__QSPI_CFG_PATH&&=$(_MTB_RECIPE__OPENOCD_QSPI_CFG_PATH_WITH_FLAG))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_QSPI_FLASHLOADER&&=$(_MTB_RECIPE__OPENOCD_QSPI_FLASHLOADER_WITH_FLAG))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__DBG_CERTIFICATE_PATH&&=$(CY_DBG_CERTIFICATE_PATH))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__DBG_CERTIFICATE_APPLICATION_PATH&&=$(CY_DBG_CERTIFICATE_PATH_APPLICATION))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ECLIPSE_LAUNCH_APP_COMMANDS&&=$(_MTB_RECIPE__ECLIPSE_LAUNCH_APP_COMMANDS))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__PREBUILT_SECURE_APP&&=$(_MTB_RECIPE__PREBUILT_SECURE_APP))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ECLIPSE_POST_CONNECT_COMMANDS&&=$(_MTB_RECIPE__ECLIPSE_POST_CONNECT_COMMANDS))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ECLIPSE_OTHER_RUN_COMMANDS&&=$(_MTB_RECIPE__ECLIPSE_OTHER_RUN_COMMANDS))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_ATTACH_RUN_COMMANDS&&=$(_MTB_RECIPE__OPENOCD_ATTACH_RUN_COMMANDS))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ECLIPSE_OPENOCD_ATTACH_CONFIG_OPTIONS&&=$(_MTB_RECIPE__ECLIPSE_OPENOCD_ATTACH_CONFIG_OPTIONS))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ECLIPSE_PROGRAM_CONFIG_CMD&&=$(_MTB_RECIPE__ECLIPSE_PROGRAM_CONFIG_CMD))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ECLIPSE_JLINK_OTHER_RUN_COMMANDS&&=$(_MTB_RECIPE__ECLIPSE_JLINK_OTHER_RUN_COMMANDS))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_INITIAL_CORE_PORT&&=$(_MTB_RECIPE__OPENOCD_INITIAL_CORE_PORT))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD__PSC3_P8_PPCA_CORE_IDX&&=$(_MTB_RECIPE__OPENOCD__PSC3_P8_PPCA_CORE_IDX))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_PPCA_RESET_HALT&&=$(_MTB_RECIPE__OPENOCD_PPCA_RESET_HALT))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ECLIPSE_DO_LOAD_IMAGE&&=$(_MTB_RECIPE__ECLIPSE_DO_LOAD_IMAGE))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_APP_NAME&&=$(_MTB_RECIPE__ECLIPSE_APPLICATION_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_PRJ_NAME&&=$(_MTB_RECIPE__ECLIPSE_PROJECT_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_CHIP_PPCA_SUFFIX&&=$(_MTB_RECIPE__OPENOCD_CHIP_PPCA_SUFFIX))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_GDB_PORT_CMD_ECLIPSE&&=$(_MTB_RECIPE__OPENOCD_GDB_PORT_CMD_ECLIPSE))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_ECLIPSE_PPCA_RTOS_CONFIG_ALL&&=$(_MTB_RECIPE__OPENOCD_ECLIPSE_PPCA_RTOS_CONFIG_ALL))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__JLINK_GDB_PORT&&=$(_MTB_RECIPE__JLINK_GDB_PORT))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__JLINK_SWO_PORT&&=$(_MTB_RECIPE__JLINK_SWO_PORT))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__JLINK_TELNET_PORT&&=$(_MTB_RECIPE__JLINK_TELNET_PORT))
ifeq ($(MTB_RECIPE__CORE_NAME),CM33_0)
ifeq ($(VCORE_ATTRS),SECURE)
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__FIRST_APP_NAME&&=$(_MTB_RECIPE__IDE_PRJ_DIR_NAME))
endif
endif
ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_0_CORE_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__SECOND_APP_NAME&&=$(_MTB_RECIPE__IDE_PRJ_DIR_NAME))
endif
ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_1_CORE_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__THIRD_APP_NAME&&=$(_MTB_RECIPE__IDE_PRJ_DIR_NAME))
endif
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ECLIPSE_PSC3M8_RAM_PROG_FILE&&=$(if $(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION),$(_MTB_RECIPE__ECLIPSE_APP_PROG_FILE),$(_MTB_RECIPE__ECLIPSE_PRJ_PROG_FILE)))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ECLIPSE_OPENOCD_PPCA_ENABLE_CMD&&=$(_MTB_RECIPE__ECLIPSE_OPENOCD_PPCA_ENABLE_CMD))
ifneq (,$(_MTB_RECIPE__IS_LAST_PRJ))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ADD_SYMBOL_FILE_CMD&&=)
endif

.PHONY: recipe_eclipse_meta_replacement_data_file_common recipe_eclipse_meta_replacement_data_file_cat1b recipe_eclipse_meta_replacement_data_file_psc3m8 recipe_eclipse_regex_replacement_data_file recipe_eclipse_text_replacement_data_file

##############################################
# VSCode
##############################################
_MTB_RECIPE__VSCODE_MULTI_CORE_PRJ_TASKS_JSON:=$(_MTB_RECIPE__IDE_CORE_SCRIPT_DIR)/vscode/dependencies_tasks.json
_MTB_RECIPE__VSCODE_MULTI_CORE_APP_TASKS_JSON:=$(_MTB_RECIPE__IDE_CORE_SCRIPT_DIR)/vscode/tasks_internal.json
_MTB_RECIPE__VSCODE_SINGLE_CORE_APP_TASKS_JSON:=$(_MTB_RECIPE__IDE_CORE_SCRIPT_DIR)/vscode/tasks_internal.json

_MTB_RECIPE__VSCODE_MULTI_CORE_PRJ_LAUNCH_JSON:=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/vscode/CM33/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/launch_multicore.json
_MTB_RECIPE__VSCODE_MULTI_CORE_APP_LAUNCH_JSON:=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/vscode/App/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/launch.json
_MTB_RECIPE__VSCODE_SINGLE_CORE_APP_LAUNCH_JSON:=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/vscode/CM33/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/launch.json

vscode_generate: recipe_vscode_text_replacement_data_file recipe_vscode_meta_replacement_data_file recipe_vscode_regex_replacement_data_file
vscode_generate: MTB_CORE__EXPORT_CMDLINE += -textdata $(_MTB_RECIPE__IDE_TEXT_DATA_FILE)  -metadata $(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE) -textregexdata $(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE)

recipe_vscode_text_replacement_data_file:
	$(call mtb__file_write,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__FINAL_HEX_FILE&&=$(_MTB_RECIPE__VSCODE_FINAL_HEX_FILE))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__JLINK_CFG&&=$(_MTB_RECIPE__JLINK_DEVICE_CFG))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__JLINK_CFG_ATTACH&&=$(_MTB_RECIPE__JLINK_CFG_ATTACH))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&PC_SYMBOL&&=$(PC_SYMBOL))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&SP_SYMBOL&&=$(SP_SYMBOL))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__QSPI_CFG_PATH&&=$(_MTB_RECIPE__OPENOCD_QSPI_CFG_PATH))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_QSPI_FLASHLOADER&&=$(_MTB_RECIPE__OPENOCD_QSPI_FLASHLOADER))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__DBG_CERTIFICATE_PATH&&=$(CY_DBG_CERTIFICATE_PATH))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__DBG_CERTIFICATE_APPLICATION_PATH&&=$(CY_DBG_CERTIFICATE_PATH_APPLICATION))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__FAMILY_NAME&&=$(_MTB_RECIPE__DEVICE_DIE))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__PREBUILT_SECURE_APP&&=$(_MTB_RECIPE__PREBUILT_SECURE_APP))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_PRJ_NAME&&=$(APPNAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_CHIP_PPCA_SUFFIX&&=$(_MTB_RECIPE__OPENOCD_CHIP_PPCA_SUFFIX))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_TARGET_VAR&&=$(_MTB_RECIPE__OPENOCD_TARGET_VAR))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_PPCA_ENABLE_CMD&&=$(_MTB_RECIPE__OPENOCD_PPCA_ENABLE_CMD))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD__PSC3_P8_PPCA_CORE_IDX&&=$(_MTB_RECIPE__OPENOCD__PSC3_P8_PPCA_CORE_IDX))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__VSCODE_PSC3M8_RAM_PROG_FILE&&=$(if $(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION),$(_MTB_RECIPE__APP_HEX_FILE),$(_MTB_RECIPE__VSCODE_HEX_FILE)))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__OPENOCD_PPCA_RESET_HALT&&=$(_MTB_RECIPE__OPENOCD_PPCA_RESET_HALT))
ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_0_CORE_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__SECOND_APP_NAME&&=$(_MTB_RECIPE__IDE_PRJ_DIR_NAME))
endif
ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_1_CORE_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__THIRD_APP_NAME&&=$(_MTB_RECIPE__IDE_PRJ_DIR_NAME))
endif
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__TARGET_PROCESSOR_NAME&&=$(MTB_RECIPE__CORE_NAME))	
ifeq ($(MTB_RECIPE__CORE_NAME),CM33_0)
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__TARGET_PROCESSOR_NUMBER&&=0)
else ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_0_CORE_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__TARGET_PROCESSOR_NUMBER&&=1)
else ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_1_CORE_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__TARGET_PROCESSOR_NUMBER&&=2)
endif
ifneq (,$(_MTB_RECIPE__HAS_SINGLE_CM33_PPCA))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__PROCESSOR_COUNT&&=2)
else
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__PROCESSOR_COUNT&&=3)
endif
ifeq ($(MTB_RECIPE__CORE_NAME),CM33_0)
ifneq ($(filter NON_SECURE,$(VCORE_ATTRS)),)
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ADD_SYMBOL_FILE_CMD&&="add-symbol-file $(_MTB_RECIPE__VSCODE_ELF_FILE_APPLICATION)")
endif
endif
ifneq (,$(_MTB_RECIPE__IS_LAST_PRJ))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEXT_DATA_FILE),&&_MTB_RECIPE__ADD_SYMBOL_FILE_CMD&&=)
endif

recipe_vscode_regex_replacement_data_file:
	$(call mtb__file_write,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^(.*)//PSC3 Only//(.*)$$=\1\2)
# PPCA
ifneq (,$(filter $(_MTB_RECIPE__PPCA_0_CORE_NAME) $(_MTB_RECIPE__PPCA_1_CORE_NAME),$(MTB_RECIPE__CORE_NAME)))
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^(.*)//PSC3_P8 PPCA Only//(.*)$$=\1\2)
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^.*//PSC3 Main Only//.*$$=)
else
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^.*//PSC3_P8 PPCA Only//.*$$=)
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^(.*)//PSC3 Main Only//(.*)$$=\1\2)
endif
ifneq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^.*//PSC3 NON_SECURE Only//.*$$=)
else
ifneq ($(filter NON_SECURE,$(VCORE_ATTRS)),)
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^(.*)//PSC3 NON_SECURE Only//(.*)$$=\1\2)
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^.*//PSC3 SECURE Only//.*$$=)
else
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^(.*)//PSC3 SECURE Only//(.*)$$=\1\2)
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^.*//PSC3 NON_SECURE Only//.*$$=)
endif
endif
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^(.*)//PSC3_P8 Only//(.*)$$=\1\2)
ifneq (,$(filter $(_MTB_RECIPE__PPCA_0_CORE_NAME) $(_MTB_RECIPE__PPCA_1_CORE_NAME),$(MTB_RECIPE__CORE_NAME)))
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^.*//PSC3_P8 Main Only//.*$$=)
else
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^(.*)//PSC3_P8 Main Only//(.*)$$=\1\2)
endif
ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_1_CORE_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^(.*)//triple-core only//(.*)$$=\1\2)
else
ifneq (,$(_MTB_RECIPE__IS_LAST_PRJ))
	$(call mtb__file_append,$(_MTB_RECIPE__VSCODE_TEMPLATE_REGEX_DATA_FILE),^.*//triple-core only//.*$$=)
endif
endif

recipe_vscode_meta_replacement_data_file:
	$(call mtb__file_write,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),)
ifeq ($(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR),KitProg3)
ifneq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/vscode/App/openocd.tcl=../openocd.tcl)
endif
	$(call mtb__file_append,$(_MTB_RECIPE__IDE_TEMPLATE_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/vscode/CM33/openocd.tcl=openocd.tcl)
endif

.PHONY: recipe_vscode_text_replacement_data_file recipe_vscode_meta_replacement_data_file recipe_vscode_regex_replacement_data_file

##############################################
# EW
##############################################
ifeq ($(MTB_RECIPE__CORE_NAME),CM33_0)
_MTB_RECIPE__IAR_CORE_SUFFIX=M33_0
else ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_0_CORE_NAME))
_MTB_RECIPE__IAR_CORE_SUFFIX=M33_1
else ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_1_CORE_NAME))
_MTB_RECIPE__IAR_CORE_SUFFIX=M33_2
endif # ($(MTB_RECIPE__CORE_NAME),CM33_0)

_MTB_RECIPE__EWARM_BUILD_DATA_FILE:=$(MTB_TOOLS__OUTPUT_CONFIG_DIR)/recipe_ide_build_data.txt

ewarm8: MTB_CORE__EXPORT_CMDLINE += -build_data $(_MTB_RECIPE__EWARM_BUILD_DATA_FILE)
ewarm8: recipe_ewarm_build_data_file

recipe_ewarm_build_data_file:
	$(call mtb__file_write,$(_MTB_RECIPE__EWARM_BUILD_DATA_FILE),LINKER_SCRIPT=$(MTB_RECIPE__LINKER_SCRIPT))
.PHONY: recipe_ewarm_build_data_file

##############################################
# UV
##############################################
_MTB_RECIPE__CMSIS_ARCH_NAME:=PSC3xxx_DFP

_MTB_RECIPE__CMSIS_VENDOR_NAME:=Infineon
_MTB_RECIPE__CMSIS_VENDOR_ID:=7

ifeq ($(MTB_RECIPE__CORE_NAME),CM33_0)
_MTB_RECIPE__CMSIS_PNAME:=Cortex-M33
else ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_0_CORE_NAME))
_MTB_RECIPE__CMSIS_PNAME:=Cortex-M33-PPCA0
else ifeq ($(MTB_RECIPE__CORE_NAME),$(_MTB_RECIPE__PPCA_1_CORE_NAME))
_MTB_RECIPE__CMSIS_PNAME:=Cortex-M33-PPCA1
endif # ($(MTB_RECIPE__CORE_NAME),CM33_0)

# Debug and program ini files
_MTB_RECIPE__DEBUG_INI_FILE:=$(MTB_TOOLS__PRJ_DIR)/debug.ini

uvision5: recipe_uvision_debug_ini_file
recipe_uvision_debug_ini_file:
	$(call mtb__file_write,$(_MTB_RECIPE__DEBUG_INI_FILE),LOAD $$L%L NOCODE CLEAR INCREMENTAL)
	$(call mtb__file_append,$(_MTB_RECIPE__DEBUG_INI_FILE),g$(MTB__COMMA) main)

ifeq (CM33_0,$(MTB_RECIPE__CORE_NAME))
_MTB_RECIPE__PROGRAM_INI_FILE:=$(MTB_TOOLS__PRJ_DIR)/program.ini
uvision5: recipe_uvision_program_ini_file
recipe_uvision_program_ini_file:
ifneq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
	$(call mtb__file_write,$(_MTB_RECIPE__PROGRAM_INI_FILE),LOAD ..\build\app_combined.hex)
else
	$(call mtb__file_write,$(_MTB_RECIPE__PROGRAM_INI_FILE),LOAD $$L\..\build\last_config\${APPNAME}.hex)
endif # ifneq (,$(_MTB_RECIPE__IS_MULTI_CORE_APPLICATION))
endif # ifeq (CM33_0,$(MTB_RECIPE__CORE_NAME))

# uVision build data file
_MTB_RECIPE__UVISION_BUILD_DATA_FILE:=$(MTB_TOOLS__OUTPUT_CONFIG_DIR)/recipe_ide_build_data.txt

uvision5: MTB_CORE__EXPORT_CMDLINE += -build_data $(_MTB_RECIPE__UVISION_BUILD_DATA_FILE)
uvision5: recipe_uvision_build_data_file

recipe_uvision_build_data_file:
	$(call mtb__file_write,$(_MTB_RECIPE__UVISION_BUILD_DATA_FILE),LINKER_SCRIPT=$(MTB_RECIPE__LINKER_SCRIPT))
	$(call mtb__file_append,$(_MTB_RECIPE__UVISION_BUILD_DATA_FILE),FPU=$(_MTB_RECIPE_CMSIS__DFPU))
	$(call mtb__file_append,$(_MTB_RECIPE__UVISION_BUILD_DATA_FILE),LCS=$(_MTB_RECIPE_CMSIS__DSECURE))
.PHONY: recipe_uvision_build_data_file

# uVision DFP data file
_MTB_RECIPE__UVISION_DFP_DATA_FILE:=$(MTB_TOOLS__OUTPUT_CONFIG_DIR)/recipe_ide_dfp_data.txt

uvision5: recipe_uvision_dfp_data_file
uvision5: MTB_CORE__EXPORT_CMDLINE += -dfp_data $(_MTB_RECIPE__UVISION_DFP_DATA_FILE)

recipe_uvision_dfp_data_file:
	$(call mtb__file_write,$(_MTB_RECIPE__UVISION_DFP_DATA_FILE),DEVICE=$(DEVICE))
	$(call mtb__file_append,$(_MTB_RECIPE__UVISION_DFP_DATA_FILE),DFP_NAME=$(_MTB_RECIPE__CMSIS_ARCH_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__UVISION_DFP_DATA_FILE),VENDOR_NAME=$(_MTB_RECIPE__CMSIS_VENDOR_NAME))
	$(call mtb__file_append,$(_MTB_RECIPE__UVISION_DFP_DATA_FILE),VENDOR_ID=$(_MTB_RECIPE__CMSIS_VENDOR_ID))
	$(call mtb__file_append,$(_MTB_RECIPE__UVISION_DFP_DATA_FILE),PNAME=$(_MTB_RECIPE__CMSIS_PNAME))
	$(call mtb__file_append,$(_MTB_RECIPE__UVISION_DFP_DATA_FILE),DEBUG_INI_FILE=.\debug.ini)
.PHONY: recipe_uvision_debug_ini_file recipe_uvision_program_ini_file recipe_uvision_dfp_data_file

##############################################
# Combiner/Signer Integration
##############################################

ifneq ($(MTB_COMBINE_SIGN_$(_MTB_RECIPE__IDE_PRJ_DIR_NAME)_HEX_FILES),)
_MTB_RECIPE__VSCODE_CS_TASKS_JSON:=$(_MTB_RECIPE__IDE_CORE_SCRIPT_DIR)/vscode/tasks_program_sign_combine.json
_MTB_RECIPE__VSCODE_CS_LAUNCH_JSON:=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/vscode/$(MTB_RECIPE__CORE)/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/launch_combine_sign.json

_MTB_RECIPE__ECLIPSE_COMBINE_SIGN_META_DATA_FILE=$(MTB_TOOLS__OUTPUT_CONFIG_DIR)/eclipse_combine_sign_meta_data.txt

eclipse_generate: MTB_CORE__EXPORT_CMDLINE += -metadata $(_MTB_RECIPE__ECLIPSE_COMBINE_SIGN_META_DATA_FILE)
eclipse_generate: recipe_eclipse_combine_sign_meta

recipe_eclipse_combine_sign_meta:
	$(call mtb__file_write,$(_MTB_RECIPE__ECLIPSE_COMBINE_SIGN_META_DATA_FILE))
ifneq ($(wildcard $(_MTB_RECIPE__IDE_TEMPLATE_DIR)/eclipse/$(MTB_RECIPE__CORE)/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/combine_sign/Debug.launch),)
	$(call mtb__file_append,$(_MTB_RECIPE__ECLIPSE_COMBINE_SIGN_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/eclipse/$(MTB_RECIPE__CORE)/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/combine_sign/Debug.launch=$(_MTB_RECIPE__ECLIPSE_CS_DST_BASE_NAME) Debug $(_MTB_RECIPE__PROGRAM_INTERFACE_LAUNCH_SUFFIX).launch)
	$(call mtb__file_append,$(_MTB_RECIPE__ECLIPSE_COMBINE_SIGN_META_DATA_FILE),TEMPLATE_REPLACE=$(_MTB_RECIPE__IDE_TEMPLATE_DIR)/eclipse/$(MTB_RECIPE__CORE)/$(_MTB_RECIPE__IDE_TEMPLATE_SUBDIR)/$(_MTB_RECIPE__PROGRAM_INTERFACE_SUBDIR)/combine_sign/Attach.launch=$(_MTB_RECIPE__ECLIPSE_CS_DST_BASE_NAME) Attach $(_MTB_RECIPE__PROGRAM_INTERFACE_LAUNCH_SUFFIX).launch)
	$(call mtb__file_append,$(_MTB_RECIPE__ECLIPSE_COMBINE_SIGN_META_DATA_FILE),TEMPLATE_REPEAT=$(_MTB_RECIPE__ECLIPSE_CS_DST_BASE_NAME) Debug $(_MTB_RECIPE__PROGRAM_INTERFACE_LAUNCH_SUFFIX).launch=$(MTB_COMBINE_SIGN_$(_MTB_RECIPE__IDE_PRJ_DIR_NAME)_HEX_FILES))
	$(call mtb__file_append,$(_MTB_RECIPE__ECLIPSE_COMBINE_SIGN_META_DATA_FILE),TEMPLATE_REPEAT=$(_MTB_RECIPE__ECLIPSE_CS_DST_BASE_NAME) Attach $(_MTB_RECIPE__PROGRAM_INTERFACE_LAUNCH_SUFFIX).launch=$(MTB_COMBINE_SIGN_$(_MTB_RECIPE__IDE_PRJ_DIR_NAME)_HEX_FILES))
endif

endif