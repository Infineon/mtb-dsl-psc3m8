/***************************************************************************//**
* \file mtb_hal_npnz_mxs40ppss_3p3z_v1.h
*
* \brief
* Provides common API declarations of the mxs40ppss_3p3z_v1 driver
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

#if defined (CY_DEVICE_PSC3_P8)

#include "mtb_hal_npnz.h"
#include "cy_pdl.h"

#if defined(__cplusplus)
extern "C" {
#endif

/*******************************************************************************
*       Defines
*******************************************************************************/

/*******************************************************************************
*       Functions
*******************************************************************************/

//--------------------------------------------------------------------------------------------------
// _mtb_hal_npnz_setup
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_npnz_setup(mtb_hal_npnz_t* obj,
                                              const mtb_hal_npnz_configurator_t* config)
{
    obj->base = config->base;
    return CY_RSLT_SUCCESS;
}


#define mtb_hal_npnz_setup _mtb_hal_npnz_setup

//--------------------------------------------------------------------------------------------------
// _mtb_hal_npnz_enable
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_npnz_enable(mtb_hal_npnz_t* obj, bool enable)
{
    Cy_PPCA_HWFILT3P3Z_FilterEnable(obj->base, enable);
    return CY_RSLT_SUCCESS;
}


#define mtb_hal_npnz_enable _mtb_hal_npnz_enable

//--------------------------------------------------------------------------------------------------
// _mtb_hal_npnz_is_busy
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE bool _mtb_hal_npnz_is_busy(mtb_hal_npnz_t* obj)
{
    return (bool)Cy_PPCA_HWFILT3P3Z_ReadFilterStatus(obj->base);
}


#define mtb_hal_npnz_is_busy _mtb_hal_npnz_is_busy

//--------------------------------------------------------------------------------------------------
// _mtb_hal_npnz_read
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_npnz_read(mtb_hal_npnz_t* obj, uint32_t* filter_out)
{
    *filter_out = Cy_PPCA_HWFILT3P3Z_ReadFilterDataOutput(obj->base);
    return CY_RSLT_SUCCESS;
}


#define mtb_hal_npnz_read _mtb_hal_npnz_read

//--------------------------------------------------------------------------------------------------
// _mtb_hal_npnz_write
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_npnz_write(mtb_hal_npnz_t* obj, mtb_hal_npnz_ch_t channel,
                                              uint16_t filter_in)
{
    cy_rslt_t result = CY_RSLT_SUCCESS;

    if (channel == MTB_HAL_NPNZ_CH_0)
    {
        Cy_PPCA_HWFILT3P3Z_Write_DATA_IN0(obj->base, filter_in);
    }
    else if (channel == MTB_HAL_NPNZ_CH_1)
    {
        Cy_PPCA_HWFILT3P3Z_Write_DATA_IN1(obj->base, filter_in);
    }
    else
    {
        result = MTB_HAL_NPNZ_RSLT_ERR_BAD_ARGUMENT;
    }
    return result;
}


#define mtb_hal_npnz_write _mtb_hal_npnz_write

//--------------------------------------------------------------------------------------------------
// _mtb_hal_npnz_set_coefficients
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_npnz_set_coefficients(mtb_hal_npnz_t* obj,
                                                         mtb_hal_npnz_type_t type,
                                                         mtb_hal_npnz_coefficients_t* coeff)
{
    CY_UNUSED_PARAMETER(type);
    Cy_PPCA_HWFILT3P3Z_ConfigCoefficients(obj->base,
                                          (cy_stc_ppca_filter_coefficients_t*)&(coeff->coeffs_3p3z));
    return CY_RSLT_SUCCESS;
}


#define mtb_hal_npnz_set_coefficients _mtb_hal_npnz_set_coefficients

//--------------------------------------------------------------------------------------------------
// _mtb_hal_npnz_set_offset
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_npnz_set_offset(mtb_hal_npnz_t* obj, uint32_t offset)
{
    Cy_PPCA_HWFILT3P3Z_ConfigOffset(obj->base, offset);
    return CY_RSLT_SUCCESS;
}


#define mtb_hal_npnz_set_offset _mtb_hal_npnz_set_offset

#if defined(__cplusplus)
}
#endif

#endif /* defined (CY_DEVICE_PSC3_P8) */
