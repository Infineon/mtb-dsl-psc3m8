/***************************************************************************//**
* \file mtb_hal_hw_types_npnz_ppca.h
*
*********************************************************************************
* \copyright
* Copyright(c) 2024-2026 Infineon Technologies AG or an affiliate of
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

#include "cy_pdl.h"

#if ((CY_IP_MXS40PPSS_INSTANCES) > 0)

 /**
 * \ingroup group_hal_availability
 * \{
 */

#if !defined(MTB_HAL_DRIVER_AVAILABLE_NPNZ)
/** Macro specifying whether the NPNZ driver is available for the current device */
#define MTB_HAL_DRIVER_AVAILABLE_NPNZ (1u)
#endif // !defined(MTB_HAL_DRIVER_AVAILABLE_NPNZ)

/** \} group_hal_availability */

#if !defined(_MTB_HAL_DRIVER_AVAILABLE_3P3Z)
#define _MTB_HAL_DRIVER_AVAILABLE_3P3Z (1u)
#endif // !defined(_MTB_HAL_DRIVER_AVAILABLE_3P3Z)


/** @brief Filter object */
typedef struct
{
    PPCA_HWFILT3P3Z_SS_HWFILT3P3Z_Type*   base; //!< Filter base pointer
} mtb_hal_npnz_t;

/**
 * @brief Filter configurator struct
 *
 * This struct allows a configurator to provide block configuration information
 * to the HAL. Because configurator-generated configurations are platform
 * specific, the contents of this struct is subject to change between platforms
 * and/or HAL releases.
 */
typedef struct
{
    PPCA_HWFILT3P3Z_SS_HWFILT3P3Z_Type*   base; //!< Filter base pointer
} mtb_hal_npnz_configurator_t;

#endif // (CY_IP_MXS40PPSS_INSTANCES) > 0)
