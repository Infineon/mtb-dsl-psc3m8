/***************************************************************************//**
* \file Ifx_TypesReg.h
*
* \brief
* Common header file to be included by all IP register definition headers.
*
********************************************************************************
* \copyright
* (c) 2025-2026, Infineon Technologies AG or an affiliate of
* Infineon Technologies AG.
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

#ifndef _IFX_TYPESREG_H_
#define _IFX_TYPESREG_H_ 1
/******************************************************************************/

#if defined(__TASKING__)
 #if defined(__CTC__) || defined(__CPTC__)
 #define Ifx_Strict_16Bit unsigned __sfrbit16
 #define Ifx_Strict_32Bit unsigned __sfrbit32
 #define Ifx_Strict_64Bit volatile unsigned long long /* compiler support needed */
 #else
 #define Ifx_Strict_16Bit volatile unsigned short
 #define Ifx_Strict_32Bit volatile unsigned int
 #define Ifx_Strict_64Bit volatile unsigned long long
 #endif
#elif defined(__GNUC__) && !defined(__arc__)
#if defined(__cplusplus)
#define Ifx_Strict_16Bit unsigned short
#define Ifx_Strict_32Bit unsigned int
#define Ifx_Strict_64Bit unsigned long long
#else
#define Ifx_Strict_16Bit volatile unsigned short
#define Ifx_Strict_32Bit volatile unsigned int
#define Ifx_Strict_64Bit volatile unsigned long long
#endif
#elif defined(__DCC__)
#define Ifx_Strict_16Bit unsigned short
#define Ifx_Strict_32Bit unsigned int
#define Ifx_Strict_64Bit volatile unsigned long long
#elif defined(__ghs__)
#define Ifx_Strict_16Bit volatile unsigned short
#define Ifx_Strict_32Bit volatile unsigned int
#define Ifx_Strict_64Bit volatile unsigned long long
#elif defined(__arc__)
#define Ifx_Strict_16Bit volatile unsigned short
#define Ifx_Strict_32Bit volatile unsigned int
#define Ifx_Strict_64Bit volatile unsigned long long
#endif
typedef unsigned char  Ifx_UReg_8Bit;
typedef unsigned short Ifx_UReg_16Bit;
typedef unsigned int   Ifx_UReg_32Bit;
typedef unsigned long long Ifx_UReg_64Bit;
typedef signed char    Ifx_SReg_8Bit;
typedef signed short   Ifx_SReg_16Bit;
typedef signed int     Ifx_SReg_32Bit;
typedef signed long long Ifx_SReg_64Bit;


/* Access types for registers */
#ifndef     __I
#ifdef __cplusplus
  #define   __I     volatile             /*!< Defines 'read only' permissions */
#else
  #define   __I     volatile const       /*!< Defines 'read only' permissions */
#endif
#endif
#ifndef     __O
#define     __O     volatile             /*!< Defines 'write only' permissions */
#endif
#ifndef     __IO
#define     __IO    volatile             /*!< Defines 'read / write' permissions */
#endif

/* Apply MMIO address remapping for PPCA CPUs */
#if defined(COMPONENT_PPCA_DEVICE)

/* Remap 0x02000000 -> 0x60000000 */
#define PPCA_REMAP_OFFSET_0 0x5E000000u
/* Remap 0x24000000 -> 0x64000000 */
#define PPCA_REMAP_OFFSET_1 0x40000000u
/* Remap 0x42000000 -> 0x68000000 */
#define PPCA_REMAP_OFFSET_2 0x26000000u

#else /* defined(COMPONENT_PPCA_DEVICE) */

/* No remapping for main CPU */
#define PPCA_REMAP_OFFSET_0 0x0u
#define PPCA_REMAP_OFFSET_1 0x0u
#define PPCA_REMAP_OFFSET_2 0x0u

#endif /* defined(COMPONENT_PPCA_DEVICE) */

/******************************************************************************/
#endif /* _IFX_TYPESREG_H_ */
