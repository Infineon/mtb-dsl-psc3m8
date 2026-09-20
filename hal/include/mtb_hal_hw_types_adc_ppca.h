/***************************************************************************//**
* \file mtb_hal_hw_types_adc_ppca.h
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
#include "mtb_hal_hw_types_clock.h"

#if ((CY_IP_MXS40PPSS_INSTANCES) > 0)

 /**
 * \ingroup group_hal_availability
 * \{
 */

#if !defined(MTB_HAL_DRIVER_AVAILABLE_ADC)
/** Macro specifying whether the ADC driver is available for the current device */
#define MTB_HAL_DRIVER_AVAILABLE_ADC (1u)
#endif // !defined(MTB_HAL_DRIVER_AVAILABLE_ADC)

/** \} group_hal_availability */

#if !defined(_MTB_HAL_DRIVER_AVAILABLE_ADC_SAR)
#define _MTB_HAL_DRIVER_AVAILABLE_ADC_SAR (1u)
#endif // !defined(_MTB_HAL_DRIVER_AVAILABLE_ADC_SAR)


#define CY_SAR_MAX_NUM_CHANNELS (16u) /* Fixed in the IP */

struct _mtb_hal_adc_channel_s;

/**
 * @brief ADC object
 *
 * Application code should not rely on the specific contents of this struct.
 * They are considered an implementation detail which is subject to change
 * between platforms and/or HAL releases.
 */
typedef struct
{
    struct _mtb_hal_adc_channel_s*      channel_config[CY_SAR_MAX_NUM_CHANNELS]; //!< Channel
                                                                                 //!< configs
    ATOPSS_ADC_TYPE*                    base; //!< ADC base pointer
    uint32_t                            enabled_channels; //!< Enabled channel mask
    uint32_t                            enabled_diff; //!< Differential channel mask
    const mtb_hal_clock_t*              clock; //!< Clock resource
    bool                                continuous_scanning; //!< Continuous scan mode
} mtb_hal_adc_t;

/**
 * @brief ADC configurator struct
 *
 * This struct allows a configurator to provide block configuration information
 * to the HAL. Because configurator-generated configurations are platform
 * specific, the contents of this struct is subject to change between platforms
 * and/or HAL releases.
 */
typedef struct
{
    ATOPSS_ADC_TYPE*                    base; //!< ADC base pointer
    ATOPSS_ADCFLT_TYPE*                 base_filter0; //!< Filter 0 base pointer
    ATOPSS_ADCFLT_TYPE*                 base_filter1; //!< Filter 1 base pointer
    cy_stc_ppca_adc_config_t const*     config; //!< ADC config
    const mtb_hal_clock_t*              clock; //!< Clock resource
    uint8_t                             num_channels; //!< Number of channels
    uint8_t                             src_filter0; //!< Filter 0 source
    uint8_t                             src_filter1; //!< Filter 1 source
} mtb_hal_adc_configurator_t;

/**
 * @brief ADC channel object
 *
 * Application code should not rely on the specific contents of this struct.
 * They are considered an implementation detail which is subject to change
 * between platforms and/or HAL releases.
 */
typedef struct _mtb_hal_adc_channel_s   /* Struct given an explicit name to make the forward
                                           declaration above work */
{
    mtb_hal_adc_t*                      adc; //!< Parent ADC object
    uint8_t                             channel_idx; //!< Channel index
    ATOPSS_ADCFLT_TYPE*                 base_filter; //!< Filter base pointer
} mtb_hal_adc_channel_t;

#endif // (CY_IP_MXS40PPSS_INSTANCES) > 0)
