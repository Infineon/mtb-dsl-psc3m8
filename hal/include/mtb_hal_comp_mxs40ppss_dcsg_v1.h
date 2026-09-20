/***************************************************************************//**
* \file mtb_hal_comp_mxs40ppss_dcsg_v1.h
*
* \brief
* Provides common API declarations of the mxs40ppss_dcsg_v1 driver
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

#include "mtb_hal_comp.h"

#if defined(__cplusplus)
extern "C" {
#endif

/*******************************************************************************
*       Defines
*******************************************************************************/
#define _MTB_HAL_PPCA_ATOPSS_DCSG_MAX_THRESHOLD 0xFFFUL

// Note: Investigate if vref_rail can come from the configurator instead of hardcoded to 3300
#define _MTB_HAL_PPCA_ATOPSS_DCSG_VREF_RAIL 3300UL

/*******************************************************************************
*       Functions
*******************************************************************************/

//--------------------------------------------------------------------------------------------------
// _mtb_hal_comp_dcsg_setup
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_comp_dcsg_setup(mtb_hal_comp_t* obj,
                                                   const mtb_hal_comp_configurator_t* config)
{
    CY_ASSERT(obj != NULL);
    CY_ASSERT(config != NULL);
    obj->base_dcsg_slice = config->dcsg_base;
    return CY_RSLT_SUCCESS;
}


//--------------------------------------------------------------------------------------------------
// _mtb_hal_comp_dcsg_enable
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_comp_dcsg_enable(mtb_hal_comp_t* obj, bool enable)
{
    enable ? Cy_PPCA_DCSG_Enable(obj->base_dcsg_slice) : Cy_PPCA_DCSG_Disable(obj->base_dcsg_slice);
    return CY_RSLT_SUCCESS;
}


#define mtb_hal_comp_slice_enable _mtb_hal_comp_dcsg_enable

//--------------------------------------------------------------------------------------------------
// _mtb_hal_comp_dcsg_read
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE bool _mtb_hal_comp_dcsg_read(mtb_hal_comp_t* obj)
{
    return (Cy_PPCA_DCSG_Get_Input_Signal_Status(obj->base_dcsg_slice));
}


#define mtb_hal_comp_slice_read _mtb_hal_comp_dcsg_read

//--------------------------------------------------------------------------------------------------
// _mtb_hal_comp_dcsg_set_ref_count
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_comp_dcsg_set_ref_count(mtb_hal_comp_t* obj, uint32_t count)
{
    Cy_PPCA_DCSG_Set_Threshold(obj->base_dcsg_slice, (uint16_t)count);
    return CY_RSLT_SUCCESS;
}


#define mtb_hal_comp_slice_set_ref_count _mtb_hal_comp_dcsg_set_ref_count

//--------------------------------------------------------------------------------------------------
// _mtb_hal_comp_dcsg_set_ref
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE cy_rslt_t _mtb_hal_comp_dcsg_set_ref(mtb_hal_comp_t* obj, uint16_t ref_mv)
{
    CY_ASSERT(obj != NULL);
    cy_rslt_t result = CY_RSLT_SUCCESS;
    #if defined(MTB_HAL_DISABLE_ERR_CHECK)
    CY_ASSERT_AND_RETURN(ref_mv < _MTB_HAL_PPCA_ATOPSS_DCSG_VREF_RAIL,
                         MTB_HAL_COMP_RSLT_ERR_BAD_ARGUMENT);
    #else
    if (ref_mv > _MTB_HAL_PPCA_ATOPSS_DCSG_VREF_RAIL)
    {
        result = MTB_HAL_COMP_RSLT_ERR_BAD_ARGUMENT;
    }
    else
    #endif // defined(MTB_HAL_DISABLE_ERR_CHECK)
    {
        uint32_t dac_val = ref_mv * _MTB_HAL_PPCA_ATOPSS_DCSG_MAX_THRESHOLD /
                           _MTB_HAL_PPCA_ATOPSS_DCSG_VREF_RAIL;
        Cy_PPCA_DCSG_Set_Threshold(obj->base_dcsg_slice, (uint16_t)dac_val);
    }
    return result;
}


#define mtb_hal_comp_slice_set_ref_mv _mtb_hal_comp_dcsg_set_ref

//--------------------------------------------------------------------------------------------------
// _mtb_hal_comp_dcsg_enable_event
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE void _mtb_hal_comp_dcsg_enable_event(mtb_hal_comp_t* obj,
                                                     mtb_hal_comp_event_t event, bool enable)
{
    // TBD
    CY_UNUSED_PARAMETER(obj);
    CY_UNUSED_PARAMETER(event);
    CY_UNUSED_PARAMETER(enable);
}


//--------------------------------------------------------------------------------------------------
// _mtb_hal_comp_dcsg_process_interrupt
//--------------------------------------------------------------------------------------------------
__STATIC_INLINE bool _mtb_hal_comp_dcsg_process_interrupt(mtb_hal_comp_t* obj)
{
    // TBD
    CY_UNUSED_PARAMETER(obj);
    return false;
}


#if defined(__cplusplus)
}
#endif
