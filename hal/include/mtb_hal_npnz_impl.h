/***************************************************************************//**
* \file mtb_hal_npnz_impl.h
*
* \brief
* Provides a high level interface for interacting with the Infineon N-pole
* N-zero filter. This interface abstracts out the chip specific details.
* If any chip specific functionality is necessary, or performance is critical
* the low level functions can be used directly.
*
********************************************************************************
   * \copyright
* Copyright(c) 2018-2026 Infineon Technologies AG or an affiliate of
* Infineon Technologies AG
*
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
*******************************************************************************/

#pragma once

//! IP-specific implementation header for NPNZ
#if defined(CY_IP_MXS40PPSS_INSTANCES)
#include  "mtb_hal_npnz_mxs40ppss_3p3z_v1.h"
#endif // if defined(CY_IP_MXS40PPSS_INSTANCES)

#if defined(__cplusplus)
extern "C" {
#endif

/*******************************************************************************
*       Defines
*******************************************************************************/

/*******************************************************************************
*       Functions
*******************************************************************************/

#if defined(__cplusplus)
}
#endif
