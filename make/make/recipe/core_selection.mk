################################################################################
# \file core_selection.mk
#
# \brief
# Determine which MCU core is being targeted.
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

#
# CORE
#   - The type of ARM core used by the application.
#   - May be set by user in Makefile or by a BSP.
#   - If not set, assume CM33.
#   - Valid CORE for this recipe-make is CM33.
#

# Define the default core
ifeq ($(CORE),)
MTB_RECIPE__CORE?=CM33
else
MTB_RECIPE__CORE=$(CORE)
endif

ifeq ($(CORE_NAME),)
MTB_RECIPE__CORE_NAME?=$(MTB_RECIPE__CORE)_0
else
MTB_RECIPE__CORE_NAME=$(CORE_NAME)
endif

# PPCA core names mapping
_MTB_RECIPE__PPCA_0_CORE_NAME=CM33_1
_MTB_RECIPE__PPCA_1_CORE_NAME=CM33_2

MTB_RECIPE__COMPONENT+=$(MTB_RECIPE__CORE) $(MTB_RECIPE__CORE_NAME)

################################################################################
# Tools specifics
################################################################################

ifneq (,$(filter $(_MTB_RECIPE__PPCA_0_CORE_NAME) $(_MTB_RECIPE__PPCA_1_CORE_NAME),$(MTB_RECIPE__CORE_NAME)))
# Select hardfp VFP for PPCA cores by default
ifeq (,$(VFP_SELECT))
VFP_SELECT=hardfp
endif # (,$(VFP_SELECT))
endif # (,$(filter $(_MTB_RECIPE__PPCA_0_CORE_NAME) $(_MTB_RECIPE__PPCA_1_CORE_NAME),$(MTB_RECIPE__CORE_NAME)))

