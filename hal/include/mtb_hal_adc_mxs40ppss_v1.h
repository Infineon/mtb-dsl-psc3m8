/***************************************************************************//**
* \file mtb_hal_adc_mxs40ppss_v1.h
*
* \brief
* Provides common API declarations of the mxs40ppss_v1 driver
*
********************************************************************************
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

#include "mtb_hal_adc.h"
#include "mtb_hal_system.h"
#include <stdlib.h>
#include <string.h>
#include "cy_pdl.h"

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

/*******************************************************************************
*                           Defines
*******************************************************************************/
#define _MTB_HAL_SAR_MAX_NUM_CHANNELS 16u

/*******************************************************************************
*       Functions
*******************************************************************************/

//--------------------------------------------------------------------------------------------------
// _mtb_hal_adc_setup
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_adc_setup(mtb_hal_adc_t* obj,
                                             const mtb_hal_adc_configurator_t* config,
                                             mtb_hal_adc_channel_t** channels)
{
    cy_rslt_t status = CY_RSLT_SUCCESS;
    mtb_hal_adc_channel_t* channel;

    for (uint8_t cnt = 0; cnt < _MTB_HAL_SAR_MAX_NUM_CHANNELS; cnt++)
    {
        uint32_t channel_msk = 1UL << cnt;
        // It is possible to have channels array that is smaller than supported channels
        if (((config->config->channels & channel_msk) != 0UL) && (cnt < config->num_channels) &&
            (channels[cnt] != NULL))
        {
            channel = channels[cnt];
            memset(channel, 0, sizeof(mtb_hal_adc_channel_t));
            channel->adc = obj;
            channel->channel_idx = cnt;
            if (config->src_filter0 == cnt)
            {
                channel->base_filter = config->base_filter0;
            }
            else if (config->src_filter1 == cnt)
            {
                channel->base_filter = config->base_filter1;
            }
            else
            {
                channel->base_filter = NULL;
            }
            obj->channel_config[cnt] = channel;
        }
        else
        {
            obj->channel_config[cnt] = NULL;
        }
    }

    obj->enabled_channels = config->config->channels;
    obj->enabled_diff = config->config->channel_type;

    return status;
}


//--------------------------------------------------------------------------------------------------
// _mtb_hal_adc_enable
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_adc_enable(mtb_hal_adc_t* obj, bool enable)
{
    enable ? Cy_PPCA_ADC_Enable(obj->base) : Cy_PPCA_ADC_Disable(obj->base);
    return CY_RSLT_SUCCESS;
}


#define mtb_hal_adc_enable  _mtb_hal_adc_enable


//--------------------------------------------------------------------------------------------------
// _mtb_hal_adc_is_ready
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE bool _mtb_hal_adc_is_ready(mtb_hal_adc_t* obj)
{
    return !Cy_PPCA_ADC_Is_ADC_Busy(obj->base);
}


#define mtb_hal_adc_is_ready  _mtb_hal_adc_is_ready


//--------------------------------------------------------------------------------------------------
// _mtb_hal_adc_is_conversion_complete
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE bool _mtb_hal_adc_is_conversion_complete(const mtb_hal_adc_channel_t* obj)
{
    // Per-channel conversion completion status is not available on this device
    return !Cy_PPCA_ADC_Is_ADC_Busy(obj->adc->base);
}


#define mtb_hal_adc_is_conversion_complete  _mtb_hal_adc_is_conversion_complete


//--------------------------------------------------------------------------------------------------
// _mtb_hal_adc_read_latest
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_adc_read_latest(const mtb_hal_adc_channel_t* obj,
                                                   int32_t* result)
{
    *result = (int32_t)Cy_PPCA_ADC_Read_SignExtended_ADC_Data(obj->adc->base, obj->channel_idx);
    return CY_RSLT_SUCCESS;
}


#define mtb_hal_adc_read_latest _mtb_hal_adc_read_latest


//--------------------------------------------------------------------------------------------------
// _mtb_hal_adc_read_filtered
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_adc_read_filtered(const mtb_hal_adc_channel_t* obj,
                                                     mtb_hal_adc_filter_t filter, int32_t* result)
{
    cy_rslt_t status = CY_RSLT_SUCCESS;

    switch (filter)
    {
        case MTB_HAL_ADC_FILTER_MEDIAN:
            *result = Cy_PPCA_ADC_Filter_Median_Output(obj->base_filter);
            break;

        case MTB_HAL_ADC_FILTER_LIF:
            *result = Cy_PPCA_ADC_Filter_LIF_Output(obj->base_filter);
            break;

        case MTB_HAL_ADC_FILTER_AVG:
            *result = Cy_PPCA_ADC_Filter_AVG_Output(obj->base_filter);
            break;

        case MTB_HAL_ADC_FILTER_CIC:
            *result = Cy_PPCA_ADC_Filter_CIC_Output(obj->base_filter);
            break;

        case MTB_HAL_ADC_FILTER_LPF:
            *result = Cy_PPCA_ADC_Filter_LPF_Output(obj->base_filter);
            break;

        default:
            status = MTB_HAL_ADC_RSLT_ERR_NOT_SUPPORTED;
            break;
    }
    return status;
}


#define mtb_hal_adc_read_filtered _mtb_hal_adc_read_filtered


//--------------------------------------------------------------------------------------------------
// _mtb_hal_adc_start_convert
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_adc_start_convert(mtb_hal_adc_t* obj)
{
    Cy_PPCA_ADC_Manual_Trigger(obj->base, obj->enabled_channels);
    return CY_RSLT_SUCCESS;
}


#define mtb_hal_adc_start_convert _mtb_hal_adc_start_convert


//--------------------------------------------------------------------------------------------------
// _mtb_hal_adc_counts_to_u16
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE uint16_t _mtb_hal_adc_counts_to_u16(const mtb_hal_adc_channel_t* obj,
                                                    int32_t signed_result)
{
    CY_UNUSED_PARAMETER(obj);
    const uint8_t RESULT_SCALING_FACTOR = UINT16_MAX / 0xFFF; // constant 12-bit SAR resolution
    uint16_t unsigned_result = (uint16_t)((uint32_t)(signed_result) & 0xFFFF);

    /* The SAR provides a 12-bit result, but this API is defined to fill a full 16-bit range */
    uint16_t scaled_result = unsigned_result * RESULT_SCALING_FACTOR;
    return scaled_result;
}


//--------------------------------------------------------------------------------------------------
// _mtb_hal_adc_read
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE int32_t _mtb_hal_adc_read(const mtb_hal_adc_channel_t* obj)
{
    uint32_t timeout = 1000UL;
    volatile bool is_conversion_complete = false;

    _mtb_hal_adc_start_convert(obj->adc);

    is_conversion_complete = _mtb_hal_adc_is_conversion_complete(obj);

    while ((!is_conversion_complete) && (timeout != 0))
    {
        mtb_hal_system_delay_us(1);
        timeout--;
        is_conversion_complete = _mtb_hal_adc_is_conversion_complete(obj);
    }

    return Cy_PPCA_ADC_Read_ADC_Data(obj->adc->base, obj->channel_idx);
}


#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */
