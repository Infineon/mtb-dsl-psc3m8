/***************************************************************************//**
* \file IfxPPC_reg.h
*
* \brief
* PPC address
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
********************************************************************************
*
* \defgroup IfxSfr_PPC_Registers_Cfg PPC address
* \ingroup IfxSfr_PPC_Registers
*
*******************************************************************************/

#ifndef _IFXPPC_REG_H_
#define _IFXPPC_REG_H_ 1

/******************************************************************************/
#include "IfxPPC_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_PPC_Registers_Cfg_BaseAddress
 * \{  */

/** \brief PPC object */
#define MODULE_PPC                              /*lint --e(923, 9078)*/ ((*(Ifx_PPC*)(0x42020000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR0                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR1                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025004u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR2                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025008u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR3                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202500Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR4                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025010u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR5                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025014u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR6                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025018u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR7                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202501Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR8                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025020u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR9                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025024u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR10                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025028u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR11                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202502Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR12                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025030u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR13                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025034u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR14                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025038u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR15                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202503Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR16                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR17                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025044u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR18                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025048u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR19                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202504Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR20                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025050u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR21                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025054u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR22                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025058u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR23                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202505Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR24                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025060u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR25                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025064u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR26                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025068u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR27                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202506Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR28                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025070u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR29                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025074u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR30                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025078u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR31                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202507Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR32                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025080u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR33                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025084u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR34                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025088u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR35                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202508Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR36                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025090u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR37                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025094u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR38                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025098u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR39                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202509Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR40                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR41                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250A4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR42                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250A8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR43                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250ACu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR44                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250B0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR45                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250B4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR46                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250B8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR47                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250BCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR48                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR49                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250C4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR50                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250C8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR51                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250CCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR52                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250D0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR53                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250D4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR54                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250D8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR55                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250DCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR56                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250E0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR57                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250E4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR58                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250E8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR59                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250ECu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR60                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250F0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR61                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250F4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR62                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250F8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR63                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420250FCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR64                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025100u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR65                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025104u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR66                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025108u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR67                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202510Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR68                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025110u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR69                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025114u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR70                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025118u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR71                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202511Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR72                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025120u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR73                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025124u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR74                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025128u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR75                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202512Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR76                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025130u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR77                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025134u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR78                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025138u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR79                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202513Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR80                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025140u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR81                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025144u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR82                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025148u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR83                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202514Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR84                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025150u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR85                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025154u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR86                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025158u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR87                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202515Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR88                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025160u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR89                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025164u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR90                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025168u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR91                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202516Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR92                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025170u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR93                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025174u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR94                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025178u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR95                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202517Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR96                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025180u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR97                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025184u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR98                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025188u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR99                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202518Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR100                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025190u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR101                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025194u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR102                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025198u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR103                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202519Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR104                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR105                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251A4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR106                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251A8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR107                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251ACu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR108                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251B0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR109                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251B4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR110                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251B8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR111                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251BCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR112                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR113                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251C4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR114                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251C8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR115                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251CCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR116                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251D0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR117                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251D4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR118                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251D8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR119                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251DCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR120                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251E0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR121                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251E4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR122                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251E8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR123                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251ECu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR124                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251F0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR125                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251F4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR126                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251F8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR127                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420251FCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR128                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025200u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR129                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025204u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR130                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025208u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR131                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202520Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR132                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025210u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR133                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025214u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR134                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025218u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR135                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202521Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR136                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025220u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR137                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025224u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR138                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025228u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR139                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202522Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR140                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025230u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR141                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025234u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR142                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025238u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR143                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202523Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR144                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025240u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR145                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025244u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR146                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025248u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR147                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202524Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR148                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025250u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR149                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025254u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR150                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025258u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR151                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202525Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR152                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025260u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR153                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025264u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR154                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025268u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR155                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202526Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR156                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025270u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR157                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025274u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR158                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025278u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR159                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202527Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR160                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025280u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR161                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025284u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR162                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025288u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR163                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202528Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR164                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025290u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR165                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025294u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR166                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025298u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR167                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202529Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR168                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR169                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252A4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR170                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252A8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR171                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252ACu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR172                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252B0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR173                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252B4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR174                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252B8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR175                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252BCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR176                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR177                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252C4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR178                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252C8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR179                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252CCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR180                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252D0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR181                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252D4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR182                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252D8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR183                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252DCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR184                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252E0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR185                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252E4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR186                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252E8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR187                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252ECu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR188                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252F0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR189                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252F4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR190                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252F8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR191                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420252FCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR192                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025300u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR193                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025304u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR194                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025308u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR195                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202530Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR196                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025310u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR197                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025314u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR198                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025318u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR199                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202531Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR200                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025320u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR201                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025324u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR202                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025328u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR203                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202532Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR204                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025330u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR205                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025334u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR206                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025338u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR207                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202533Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR208                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025340u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR209                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025344u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR210                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025348u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR211                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202534Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR212                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025350u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR213                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025354u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR214                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025358u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR215                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202535Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR216                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025360u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR217                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025364u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR218                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025368u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR219                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202536Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR220                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025370u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR221                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025374u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR222                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025378u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR223                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202537Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR224                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025380u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR225                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025384u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR226                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025388u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR227                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202538Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR228                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025390u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR229                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025394u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR230                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025398u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR231                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202539Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR232                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR233                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253A4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR234                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253A8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR235                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253ACu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR236                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253B0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR237                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253B4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR238                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253B8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR239                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253BCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR240                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR241                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253C4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR242                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253C8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR243                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253CCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR244                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253D0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR245                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253D4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR246                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253D8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR247                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253DCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR248                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253E0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR249                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253E4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR250                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253E8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR251                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253ECu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR252                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253F0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR253                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253F4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR254                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253F8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR255                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420253FCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR256                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025400u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR257                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025404u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR258                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025408u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR259                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202540Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR260                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025410u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR261                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025414u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR262                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025418u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR263                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202541Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR264                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025420u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR265                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025424u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR266                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025428u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR267                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202542Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR268                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025430u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR269                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025434u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR270                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025438u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR271                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202543Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR272                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025440u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR273                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025444u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR274                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025448u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR275                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202544Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR276                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025450u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR277                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025454u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR278                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025458u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR279                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202545Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR280                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025460u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR281                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025464u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR282                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025468u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR283                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202546Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR284                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025470u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR285                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025474u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR286                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025478u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR287                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202547Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR288                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025480u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR289                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025484u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR290                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025488u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR291                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202548Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR292                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025490u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR293                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025494u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR294                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x42025498u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR295                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x4202549Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ADDR296                    /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ADDR*)(0x420254A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT0                       /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026000u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT1                       /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026004u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT2                       /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026008u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT3                       /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202600Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT4                       /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026010u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT5                       /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026014u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT6                       /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026018u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT7                       /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202601Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT8                       /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026020u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT9                       /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026024u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT10                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026028u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT11                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202602Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT12                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026030u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT13                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026034u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT14                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026038u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT15                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202603Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT16                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026040u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT17                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026044u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT18                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026048u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT19                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202604Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT20                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026050u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT21                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026054u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT22                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026058u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT23                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202605Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT24                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026060u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT25                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026064u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT26                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026068u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT27                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202606Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT28                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026070u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT29                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026074u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT30                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026078u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT31                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202607Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT32                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026080u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT33                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026084u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT34                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026088u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT35                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202608Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT36                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026090u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT37                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026094u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT38                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026098u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT39                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202609Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT40                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT41                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260A4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT42                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260A8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT43                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260ACu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT44                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260B0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT45                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260B4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT46                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260B8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT47                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260BCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT48                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT49                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260C4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT50                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260C8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT51                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260CCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT52                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260D0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT53                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260D4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT54                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260D8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT55                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260DCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT56                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260E0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT57                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260E4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT58                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260E8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT59                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260ECu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT60                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260F0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT61                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260F4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT62                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260F8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT63                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420260FCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT64                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026100u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT65                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026104u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT66                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026108u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT67                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202610Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT68                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026110u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT69                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026114u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT70                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026118u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT71                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202611Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT72                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026120u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT73                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026124u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT74                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026128u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT75                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202612Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT76                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026130u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT77                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026134u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT78                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026138u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT79                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202613Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT80                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026140u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT81                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026144u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT82                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026148u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT83                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202614Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT84                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026150u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT85                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026154u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT86                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026158u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT87                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202615Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT88                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026160u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT89                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026164u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT90                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026168u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT91                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202616Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT92                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026170u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT93                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026174u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT94                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026178u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT95                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202617Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT96                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026180u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT97                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026184u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT98                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026188u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT99                      /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202618Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT100                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026190u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT101                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026194u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT102                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026198u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT103                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202619Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT104                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT105                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261A4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT106                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261A8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT107                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261ACu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT108                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261B0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT109                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261B4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT110                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261B8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT111                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261BCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT112                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT113                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261C4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT114                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261C8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT115                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261CCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT116                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261D0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT117                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261D4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT118                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261D8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT119                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261DCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT120                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261E0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT121                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261E4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT122                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261E8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT123                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261ECu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT124                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261F0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT125                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261F4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT126                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261F8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT127                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420261FCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT128                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026200u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT129                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026204u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT130                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026208u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT131                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202620Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT132                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026210u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT133                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026214u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT134                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026218u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT135                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202621Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT136                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026220u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT137                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026224u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT138                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026228u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT139                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202622Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT140                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026230u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT141                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026234u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT142                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026238u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT143                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202623Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT144                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026240u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT145                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026244u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT146                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026248u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT147                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202624Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT148                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026250u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT149                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026254u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT150                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026258u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT151                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202625Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT152                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026260u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT153                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026264u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT154                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026268u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT155                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202626Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT156                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026270u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT157                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026274u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT158                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026278u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT159                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202627Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT160                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026280u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT161                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026284u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT162                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026288u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT163                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202628Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT164                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026290u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT165                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026294u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT166                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026298u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT167                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202629Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT168                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT169                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262A4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT170                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262A8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT171                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262ACu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT172                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262B0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT173                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262B4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT174                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262B8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT175                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262BCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT176                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT177                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262C4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT178                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262C8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT179                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262CCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT180                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262D0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT181                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262D4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT182                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262D8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT183                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262DCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT184                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262E0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT185                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262E4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT186                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262E8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT187                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262ECu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT188                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262F0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT189                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262F4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT190                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262F8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT191                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420262FCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT192                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026300u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT193                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026304u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT194                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026308u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT195                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202630Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT196                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026310u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT197                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026314u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT198                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026318u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT199                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202631Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT200                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026320u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT201                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026324u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT202                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026328u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT203                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202632Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT204                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026330u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT205                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026334u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT206                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026338u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT207                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202633Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT208                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026340u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT209                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026344u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT210                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026348u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT211                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202634Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT212                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026350u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT213                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026354u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT214                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026358u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT215                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202635Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT216                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026360u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT217                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026364u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT218                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026368u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT219                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202636Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT220                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026370u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT221                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026374u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT222                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026378u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT223                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202637Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT224                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026380u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT225                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026384u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT226                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026388u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT227                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202638Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT228                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026390u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT229                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026394u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT230                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026398u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT231                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202639Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT232                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263A0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT233                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263A4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT234                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263A8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT235                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263ACu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT236                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263B0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT237                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263B4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT238                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263B8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT239                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263BCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT240                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263C0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT241                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263C4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT242                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263C8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT243                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263CCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT244                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263D0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT245                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263D4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT246                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263D8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT247                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263DCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT248                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263E0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT249                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263E4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT250                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263E8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT251                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263ECu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT252                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263F0u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT253                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263F4u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT254                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263F8u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT255                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420263FCu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT256                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026400u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT257                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026404u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT258                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026408u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT259                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202640Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT260                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026410u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT261                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026414u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT262                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026418u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT263                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202641Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT264                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026420u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT265                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026424u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT266                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026428u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT267                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202642Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT268                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026430u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT269                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026434u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT270                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026438u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT271                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202643Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT272                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026440u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT273                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026444u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT274                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026448u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT275                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202644Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT276                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026450u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT277                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026454u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT278                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026458u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT279                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202645Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT280                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026460u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT281                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026464u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT282                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026468u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT283                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202646Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT284                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026470u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT285                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026474u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT286                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026478u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT287                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202647Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT288                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026480u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT289                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026484u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT290                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026488u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT291                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202648Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT292                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026490u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT293                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026494u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT294                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x42026498u + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT295                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x4202649Cu + PPCA_REMAP_OFFSET_2)))
#define MODULE_PPC_R_ATT296                     /*lint --e(923, 9078)*/ ((*(Ifx_PPC_R_ATT*)(0x420264A0u + PPCA_REMAP_OFFSET_2)))


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_PPC_Registers_Cfg_PPC
 * \{  */
/** \brief 0, PPC Control Registers */
#define REG_PPC_CTL                             /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_CTL*)(0x42020000u + PPCA_REMAP_OFFSET_2))
/** \brief C, Locked Mask */
#define REG_PPC_LOCK_MASK                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_LOCK_MASK*)(0x4202000Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1000, Protection Context Mask */
#define REG_PPC_PC_MASK0                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021000u + PPCA_REMAP_OFFSET_2))
/** \brief 1004, Protection Context Mask */
#define REG_PPC_PC_MASK1                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021004u + PPCA_REMAP_OFFSET_2))
/** \brief 1008, Protection Context Mask */
#define REG_PPC_PC_MASK2                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021008u + PPCA_REMAP_OFFSET_2))
/** \brief 100C, Protection Context Mask */
#define REG_PPC_PC_MASK3                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202100Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1010, Protection Context Mask */
#define REG_PPC_PC_MASK4                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021010u + PPCA_REMAP_OFFSET_2))
/** \brief 1014, Protection Context Mask */
#define REG_PPC_PC_MASK5                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021014u + PPCA_REMAP_OFFSET_2))
/** \brief 1018, Protection Context Mask */
#define REG_PPC_PC_MASK6                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021018u + PPCA_REMAP_OFFSET_2))
/** \brief 101C, Protection Context Mask */
#define REG_PPC_PC_MASK7                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202101Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1020, Protection Context Mask */
#define REG_PPC_PC_MASK8                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021020u + PPCA_REMAP_OFFSET_2))
/** \brief 1024, Protection Context Mask */
#define REG_PPC_PC_MASK9                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021024u + PPCA_REMAP_OFFSET_2))
/** \brief 1028, Protection Context Mask */
#define REG_PPC_PC_MASK10                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021028u + PPCA_REMAP_OFFSET_2))
/** \brief 102C, Protection Context Mask */
#define REG_PPC_PC_MASK11                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202102Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1030, Protection Context Mask */
#define REG_PPC_PC_MASK12                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021030u + PPCA_REMAP_OFFSET_2))
/** \brief 1034, Protection Context Mask */
#define REG_PPC_PC_MASK13                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021034u + PPCA_REMAP_OFFSET_2))
/** \brief 1038, Protection Context Mask */
#define REG_PPC_PC_MASK14                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021038u + PPCA_REMAP_OFFSET_2))
/** \brief 103C, Protection Context Mask */
#define REG_PPC_PC_MASK15                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202103Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1040, Protection Context Mask */
#define REG_PPC_PC_MASK16                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021040u + PPCA_REMAP_OFFSET_2))
/** \brief 1044, Protection Context Mask */
#define REG_PPC_PC_MASK17                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021044u + PPCA_REMAP_OFFSET_2))
/** \brief 1048, Protection Context Mask */
#define REG_PPC_PC_MASK18                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021048u + PPCA_REMAP_OFFSET_2))
/** \brief 104C, Protection Context Mask */
#define REG_PPC_PC_MASK19                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202104Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1050, Protection Context Mask */
#define REG_PPC_PC_MASK20                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021050u + PPCA_REMAP_OFFSET_2))
/** \brief 1054, Protection Context Mask */
#define REG_PPC_PC_MASK21                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021054u + PPCA_REMAP_OFFSET_2))
/** \brief 1058, Protection Context Mask */
#define REG_PPC_PC_MASK22                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021058u + PPCA_REMAP_OFFSET_2))
/** \brief 105C, Protection Context Mask */
#define REG_PPC_PC_MASK23                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202105Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1060, Protection Context Mask */
#define REG_PPC_PC_MASK24                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021060u + PPCA_REMAP_OFFSET_2))
/** \brief 1064, Protection Context Mask */
#define REG_PPC_PC_MASK25                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021064u + PPCA_REMAP_OFFSET_2))
/** \brief 1068, Protection Context Mask */
#define REG_PPC_PC_MASK26                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021068u + PPCA_REMAP_OFFSET_2))
/** \brief 106C, Protection Context Mask */
#define REG_PPC_PC_MASK27                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202106Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1070, Protection Context Mask */
#define REG_PPC_PC_MASK28                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021070u + PPCA_REMAP_OFFSET_2))
/** \brief 1074, Protection Context Mask */
#define REG_PPC_PC_MASK29                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021074u + PPCA_REMAP_OFFSET_2))
/** \brief 1078, Protection Context Mask */
#define REG_PPC_PC_MASK30                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021078u + PPCA_REMAP_OFFSET_2))
/** \brief 107C, Protection Context Mask */
#define REG_PPC_PC_MASK31                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202107Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1080, Protection Context Mask */
#define REG_PPC_PC_MASK32                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021080u + PPCA_REMAP_OFFSET_2))
/** \brief 1084, Protection Context Mask */
#define REG_PPC_PC_MASK33                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021084u + PPCA_REMAP_OFFSET_2))
/** \brief 1088, Protection Context Mask */
#define REG_PPC_PC_MASK34                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021088u + PPCA_REMAP_OFFSET_2))
/** \brief 108C, Protection Context Mask */
#define REG_PPC_PC_MASK35                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202108Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1090, Protection Context Mask */
#define REG_PPC_PC_MASK36                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021090u + PPCA_REMAP_OFFSET_2))
/** \brief 1094, Protection Context Mask */
#define REG_PPC_PC_MASK37                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021094u + PPCA_REMAP_OFFSET_2))
/** \brief 1098, Protection Context Mask */
#define REG_PPC_PC_MASK38                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021098u + PPCA_REMAP_OFFSET_2))
/** \brief 109C, Protection Context Mask */
#define REG_PPC_PC_MASK39                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202109Cu + PPCA_REMAP_OFFSET_2))
/** \brief 10A0, Protection Context Mask */
#define REG_PPC_PC_MASK40                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210A0u + PPCA_REMAP_OFFSET_2))
/** \brief 10A4, Protection Context Mask */
#define REG_PPC_PC_MASK41                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210A4u + PPCA_REMAP_OFFSET_2))
/** \brief 10A8, Protection Context Mask */
#define REG_PPC_PC_MASK42                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210A8u + PPCA_REMAP_OFFSET_2))
/** \brief 10AC, Protection Context Mask */
#define REG_PPC_PC_MASK43                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210ACu + PPCA_REMAP_OFFSET_2))
/** \brief 10B0, Protection Context Mask */
#define REG_PPC_PC_MASK44                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210B0u + PPCA_REMAP_OFFSET_2))
/** \brief 10B4, Protection Context Mask */
#define REG_PPC_PC_MASK45                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210B4u + PPCA_REMAP_OFFSET_2))
/** \brief 10B8, Protection Context Mask */
#define REG_PPC_PC_MASK46                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210B8u + PPCA_REMAP_OFFSET_2))
/** \brief 10BC, Protection Context Mask */
#define REG_PPC_PC_MASK47                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210BCu + PPCA_REMAP_OFFSET_2))
/** \brief 10C0, Protection Context Mask */
#define REG_PPC_PC_MASK48                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210C0u + PPCA_REMAP_OFFSET_2))
/** \brief 10C4, Protection Context Mask */
#define REG_PPC_PC_MASK49                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210C4u + PPCA_REMAP_OFFSET_2))
/** \brief 10C8, Protection Context Mask */
#define REG_PPC_PC_MASK50                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210C8u + PPCA_REMAP_OFFSET_2))
/** \brief 10CC, Protection Context Mask */
#define REG_PPC_PC_MASK51                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210CCu + PPCA_REMAP_OFFSET_2))
/** \brief 10D0, Protection Context Mask */
#define REG_PPC_PC_MASK52                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210D0u + PPCA_REMAP_OFFSET_2))
/** \brief 10D4, Protection Context Mask */
#define REG_PPC_PC_MASK53                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210D4u + PPCA_REMAP_OFFSET_2))
/** \brief 10D8, Protection Context Mask */
#define REG_PPC_PC_MASK54                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210D8u + PPCA_REMAP_OFFSET_2))
/** \brief 10DC, Protection Context Mask */
#define REG_PPC_PC_MASK55                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210DCu + PPCA_REMAP_OFFSET_2))
/** \brief 10E0, Protection Context Mask */
#define REG_PPC_PC_MASK56                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210E0u + PPCA_REMAP_OFFSET_2))
/** \brief 10E4, Protection Context Mask */
#define REG_PPC_PC_MASK57                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210E4u + PPCA_REMAP_OFFSET_2))
/** \brief 10E8, Protection Context Mask */
#define REG_PPC_PC_MASK58                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210E8u + PPCA_REMAP_OFFSET_2))
/** \brief 10EC, Protection Context Mask */
#define REG_PPC_PC_MASK59                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210ECu + PPCA_REMAP_OFFSET_2))
/** \brief 10F0, Protection Context Mask */
#define REG_PPC_PC_MASK60                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210F0u + PPCA_REMAP_OFFSET_2))
/** \brief 10F4, Protection Context Mask */
#define REG_PPC_PC_MASK61                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210F4u + PPCA_REMAP_OFFSET_2))
/** \brief 10F8, Protection Context Mask */
#define REG_PPC_PC_MASK62                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210F8u + PPCA_REMAP_OFFSET_2))
/** \brief 10FC, Protection Context Mask */
#define REG_PPC_PC_MASK63                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420210FCu + PPCA_REMAP_OFFSET_2))
/** \brief 1100, Protection Context Mask */
#define REG_PPC_PC_MASK64                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021100u + PPCA_REMAP_OFFSET_2))
/** \brief 1104, Protection Context Mask */
#define REG_PPC_PC_MASK65                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021104u + PPCA_REMAP_OFFSET_2))
/** \brief 1108, Protection Context Mask */
#define REG_PPC_PC_MASK66                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021108u + PPCA_REMAP_OFFSET_2))
/** \brief 110C, Protection Context Mask */
#define REG_PPC_PC_MASK67                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202110Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1110, Protection Context Mask */
#define REG_PPC_PC_MASK68                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021110u + PPCA_REMAP_OFFSET_2))
/** \brief 1114, Protection Context Mask */
#define REG_PPC_PC_MASK69                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021114u + PPCA_REMAP_OFFSET_2))
/** \brief 1118, Protection Context Mask */
#define REG_PPC_PC_MASK70                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021118u + PPCA_REMAP_OFFSET_2))
/** \brief 111C, Protection Context Mask */
#define REG_PPC_PC_MASK71                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202111Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1120, Protection Context Mask */
#define REG_PPC_PC_MASK72                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021120u + PPCA_REMAP_OFFSET_2))
/** \brief 1124, Protection Context Mask */
#define REG_PPC_PC_MASK73                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021124u + PPCA_REMAP_OFFSET_2))
/** \brief 1128, Protection Context Mask */
#define REG_PPC_PC_MASK74                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021128u + PPCA_REMAP_OFFSET_2))
/** \brief 112C, Protection Context Mask */
#define REG_PPC_PC_MASK75                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202112Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1130, Protection Context Mask */
#define REG_PPC_PC_MASK76                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021130u + PPCA_REMAP_OFFSET_2))
/** \brief 1134, Protection Context Mask */
#define REG_PPC_PC_MASK77                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021134u + PPCA_REMAP_OFFSET_2))
/** \brief 1138, Protection Context Mask */
#define REG_PPC_PC_MASK78                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021138u + PPCA_REMAP_OFFSET_2))
/** \brief 113C, Protection Context Mask */
#define REG_PPC_PC_MASK79                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202113Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1140, Protection Context Mask */
#define REG_PPC_PC_MASK80                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021140u + PPCA_REMAP_OFFSET_2))
/** \brief 1144, Protection Context Mask */
#define REG_PPC_PC_MASK81                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021144u + PPCA_REMAP_OFFSET_2))
/** \brief 1148, Protection Context Mask */
#define REG_PPC_PC_MASK82                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021148u + PPCA_REMAP_OFFSET_2))
/** \brief 114C, Protection Context Mask */
#define REG_PPC_PC_MASK83                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202114Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1150, Protection Context Mask */
#define REG_PPC_PC_MASK84                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021150u + PPCA_REMAP_OFFSET_2))
/** \brief 1154, Protection Context Mask */
#define REG_PPC_PC_MASK85                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021154u + PPCA_REMAP_OFFSET_2))
/** \brief 1158, Protection Context Mask */
#define REG_PPC_PC_MASK86                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021158u + PPCA_REMAP_OFFSET_2))
/** \brief 115C, Protection Context Mask */
#define REG_PPC_PC_MASK87                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202115Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1160, Protection Context Mask */
#define REG_PPC_PC_MASK88                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021160u + PPCA_REMAP_OFFSET_2))
/** \brief 1164, Protection Context Mask */
#define REG_PPC_PC_MASK89                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021164u + PPCA_REMAP_OFFSET_2))
/** \brief 1168, Protection Context Mask */
#define REG_PPC_PC_MASK90                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021168u + PPCA_REMAP_OFFSET_2))
/** \brief 116C, Protection Context Mask */
#define REG_PPC_PC_MASK91                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202116Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1170, Protection Context Mask */
#define REG_PPC_PC_MASK92                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021170u + PPCA_REMAP_OFFSET_2))
/** \brief 1174, Protection Context Mask */
#define REG_PPC_PC_MASK93                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021174u + PPCA_REMAP_OFFSET_2))
/** \brief 1178, Protection Context Mask */
#define REG_PPC_PC_MASK94                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021178u + PPCA_REMAP_OFFSET_2))
/** \brief 117C, Protection Context Mask */
#define REG_PPC_PC_MASK95                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202117Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1180, Protection Context Mask */
#define REG_PPC_PC_MASK96                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021180u + PPCA_REMAP_OFFSET_2))
/** \brief 1184, Protection Context Mask */
#define REG_PPC_PC_MASK97                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021184u + PPCA_REMAP_OFFSET_2))
/** \brief 1188, Protection Context Mask */
#define REG_PPC_PC_MASK98                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021188u + PPCA_REMAP_OFFSET_2))
/** \brief 118C, Protection Context Mask */
#define REG_PPC_PC_MASK99                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202118Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1190, Protection Context Mask */
#define REG_PPC_PC_MASK100                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021190u + PPCA_REMAP_OFFSET_2))
/** \brief 1194, Protection Context Mask */
#define REG_PPC_PC_MASK101                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021194u + PPCA_REMAP_OFFSET_2))
/** \brief 1198, Protection Context Mask */
#define REG_PPC_PC_MASK102                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021198u + PPCA_REMAP_OFFSET_2))
/** \brief 119C, Protection Context Mask */
#define REG_PPC_PC_MASK103                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202119Cu + PPCA_REMAP_OFFSET_2))
/** \brief 11A0, Protection Context Mask */
#define REG_PPC_PC_MASK104                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211A0u + PPCA_REMAP_OFFSET_2))
/** \brief 11A4, Protection Context Mask */
#define REG_PPC_PC_MASK105                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211A4u + PPCA_REMAP_OFFSET_2))
/** \brief 11A8, Protection Context Mask */
#define REG_PPC_PC_MASK106                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211A8u + PPCA_REMAP_OFFSET_2))
/** \brief 11AC, Protection Context Mask */
#define REG_PPC_PC_MASK107                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211ACu + PPCA_REMAP_OFFSET_2))
/** \brief 11B0, Protection Context Mask */
#define REG_PPC_PC_MASK108                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211B0u + PPCA_REMAP_OFFSET_2))
/** \brief 11B4, Protection Context Mask */
#define REG_PPC_PC_MASK109                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211B4u + PPCA_REMAP_OFFSET_2))
/** \brief 11B8, Protection Context Mask */
#define REG_PPC_PC_MASK110                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211B8u + PPCA_REMAP_OFFSET_2))
/** \brief 11BC, Protection Context Mask */
#define REG_PPC_PC_MASK111                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211BCu + PPCA_REMAP_OFFSET_2))
/** \brief 11C0, Protection Context Mask */
#define REG_PPC_PC_MASK112                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211C0u + PPCA_REMAP_OFFSET_2))
/** \brief 11C4, Protection Context Mask */
#define REG_PPC_PC_MASK113                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211C4u + PPCA_REMAP_OFFSET_2))
/** \brief 11C8, Protection Context Mask */
#define REG_PPC_PC_MASK114                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211C8u + PPCA_REMAP_OFFSET_2))
/** \brief 11CC, Protection Context Mask */
#define REG_PPC_PC_MASK115                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211CCu + PPCA_REMAP_OFFSET_2))
/** \brief 11D0, Protection Context Mask */
#define REG_PPC_PC_MASK116                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211D0u + PPCA_REMAP_OFFSET_2))
/** \brief 11D4, Protection Context Mask */
#define REG_PPC_PC_MASK117                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211D4u + PPCA_REMAP_OFFSET_2))
/** \brief 11D8, Protection Context Mask */
#define REG_PPC_PC_MASK118                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211D8u + PPCA_REMAP_OFFSET_2))
/** \brief 11DC, Protection Context Mask */
#define REG_PPC_PC_MASK119                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211DCu + PPCA_REMAP_OFFSET_2))
/** \brief 11E0, Protection Context Mask */
#define REG_PPC_PC_MASK120                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211E0u + PPCA_REMAP_OFFSET_2))
/** \brief 11E4, Protection Context Mask */
#define REG_PPC_PC_MASK121                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211E4u + PPCA_REMAP_OFFSET_2))
/** \brief 11E8, Protection Context Mask */
#define REG_PPC_PC_MASK122                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211E8u + PPCA_REMAP_OFFSET_2))
/** \brief 11EC, Protection Context Mask */
#define REG_PPC_PC_MASK123                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211ECu + PPCA_REMAP_OFFSET_2))
/** \brief 11F0, Protection Context Mask */
#define REG_PPC_PC_MASK124                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211F0u + PPCA_REMAP_OFFSET_2))
/** \brief 11F4, Protection Context Mask */
#define REG_PPC_PC_MASK125                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211F4u + PPCA_REMAP_OFFSET_2))
/** \brief 11F8, Protection Context Mask */
#define REG_PPC_PC_MASK126                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211F8u + PPCA_REMAP_OFFSET_2))
/** \brief 11FC, Protection Context Mask */
#define REG_PPC_PC_MASK127                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420211FCu + PPCA_REMAP_OFFSET_2))
/** \brief 1200, Protection Context Mask */
#define REG_PPC_PC_MASK128                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021200u + PPCA_REMAP_OFFSET_2))
/** \brief 1204, Protection Context Mask */
#define REG_PPC_PC_MASK129                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021204u + PPCA_REMAP_OFFSET_2))
/** \brief 1208, Protection Context Mask */
#define REG_PPC_PC_MASK130                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021208u + PPCA_REMAP_OFFSET_2))
/** \brief 120C, Protection Context Mask */
#define REG_PPC_PC_MASK131                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202120Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1210, Protection Context Mask */
#define REG_PPC_PC_MASK132                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021210u + PPCA_REMAP_OFFSET_2))
/** \brief 1214, Protection Context Mask */
#define REG_PPC_PC_MASK133                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021214u + PPCA_REMAP_OFFSET_2))
/** \brief 1218, Protection Context Mask */
#define REG_PPC_PC_MASK134                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021218u + PPCA_REMAP_OFFSET_2))
/** \brief 121C, Protection Context Mask */
#define REG_PPC_PC_MASK135                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202121Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1220, Protection Context Mask */
#define REG_PPC_PC_MASK136                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021220u + PPCA_REMAP_OFFSET_2))
/** \brief 1224, Protection Context Mask */
#define REG_PPC_PC_MASK137                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021224u + PPCA_REMAP_OFFSET_2))
/** \brief 1228, Protection Context Mask */
#define REG_PPC_PC_MASK138                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021228u + PPCA_REMAP_OFFSET_2))
/** \brief 122C, Protection Context Mask */
#define REG_PPC_PC_MASK139                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202122Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1230, Protection Context Mask */
#define REG_PPC_PC_MASK140                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021230u + PPCA_REMAP_OFFSET_2))
/** \brief 1234, Protection Context Mask */
#define REG_PPC_PC_MASK141                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021234u + PPCA_REMAP_OFFSET_2))
/** \brief 1238, Protection Context Mask */
#define REG_PPC_PC_MASK142                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021238u + PPCA_REMAP_OFFSET_2))
/** \brief 123C, Protection Context Mask */
#define REG_PPC_PC_MASK143                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202123Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1240, Protection Context Mask */
#define REG_PPC_PC_MASK144                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021240u + PPCA_REMAP_OFFSET_2))
/** \brief 1244, Protection Context Mask */
#define REG_PPC_PC_MASK145                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021244u + PPCA_REMAP_OFFSET_2))
/** \brief 1248, Protection Context Mask */
#define REG_PPC_PC_MASK146                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021248u + PPCA_REMAP_OFFSET_2))
/** \brief 124C, Protection Context Mask */
#define REG_PPC_PC_MASK147                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202124Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1250, Protection Context Mask */
#define REG_PPC_PC_MASK148                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021250u + PPCA_REMAP_OFFSET_2))
/** \brief 1254, Protection Context Mask */
#define REG_PPC_PC_MASK149                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021254u + PPCA_REMAP_OFFSET_2))
/** \brief 1258, Protection Context Mask */
#define REG_PPC_PC_MASK150                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021258u + PPCA_REMAP_OFFSET_2))
/** \brief 125C, Protection Context Mask */
#define REG_PPC_PC_MASK151                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202125Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1260, Protection Context Mask */
#define REG_PPC_PC_MASK152                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021260u + PPCA_REMAP_OFFSET_2))
/** \brief 1264, Protection Context Mask */
#define REG_PPC_PC_MASK153                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021264u + PPCA_REMAP_OFFSET_2))
/** \brief 1268, Protection Context Mask */
#define REG_PPC_PC_MASK154                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021268u + PPCA_REMAP_OFFSET_2))
/** \brief 126C, Protection Context Mask */
#define REG_PPC_PC_MASK155                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202126Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1270, Protection Context Mask */
#define REG_PPC_PC_MASK156                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021270u + PPCA_REMAP_OFFSET_2))
/** \brief 1274, Protection Context Mask */
#define REG_PPC_PC_MASK157                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021274u + PPCA_REMAP_OFFSET_2))
/** \brief 1278, Protection Context Mask */
#define REG_PPC_PC_MASK158                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021278u + PPCA_REMAP_OFFSET_2))
/** \brief 127C, Protection Context Mask */
#define REG_PPC_PC_MASK159                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202127Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1280, Protection Context Mask */
#define REG_PPC_PC_MASK160                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021280u + PPCA_REMAP_OFFSET_2))
/** \brief 1284, Protection Context Mask */
#define REG_PPC_PC_MASK161                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021284u + PPCA_REMAP_OFFSET_2))
/** \brief 1288, Protection Context Mask */
#define REG_PPC_PC_MASK162                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021288u + PPCA_REMAP_OFFSET_2))
/** \brief 128C, Protection Context Mask */
#define REG_PPC_PC_MASK163                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202128Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1290, Protection Context Mask */
#define REG_PPC_PC_MASK164                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021290u + PPCA_REMAP_OFFSET_2))
/** \brief 1294, Protection Context Mask */
#define REG_PPC_PC_MASK165                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021294u + PPCA_REMAP_OFFSET_2))
/** \brief 1298, Protection Context Mask */
#define REG_PPC_PC_MASK166                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021298u + PPCA_REMAP_OFFSET_2))
/** \brief 129C, Protection Context Mask */
#define REG_PPC_PC_MASK167                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202129Cu + PPCA_REMAP_OFFSET_2))
/** \brief 12A0, Protection Context Mask */
#define REG_PPC_PC_MASK168                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212A0u + PPCA_REMAP_OFFSET_2))
/** \brief 12A4, Protection Context Mask */
#define REG_PPC_PC_MASK169                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212A4u + PPCA_REMAP_OFFSET_2))
/** \brief 12A8, Protection Context Mask */
#define REG_PPC_PC_MASK170                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212A8u + PPCA_REMAP_OFFSET_2))
/** \brief 12AC, Protection Context Mask */
#define REG_PPC_PC_MASK171                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212ACu + PPCA_REMAP_OFFSET_2))
/** \brief 12B0, Protection Context Mask */
#define REG_PPC_PC_MASK172                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212B0u + PPCA_REMAP_OFFSET_2))
/** \brief 12B4, Protection Context Mask */
#define REG_PPC_PC_MASK173                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212B4u + PPCA_REMAP_OFFSET_2))
/** \brief 12B8, Protection Context Mask */
#define REG_PPC_PC_MASK174                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212B8u + PPCA_REMAP_OFFSET_2))
/** \brief 12BC, Protection Context Mask */
#define REG_PPC_PC_MASK175                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212BCu + PPCA_REMAP_OFFSET_2))
/** \brief 12C0, Protection Context Mask */
#define REG_PPC_PC_MASK176                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212C0u + PPCA_REMAP_OFFSET_2))
/** \brief 12C4, Protection Context Mask */
#define REG_PPC_PC_MASK177                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212C4u + PPCA_REMAP_OFFSET_2))
/** \brief 12C8, Protection Context Mask */
#define REG_PPC_PC_MASK178                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212C8u + PPCA_REMAP_OFFSET_2))
/** \brief 12CC, Protection Context Mask */
#define REG_PPC_PC_MASK179                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212CCu + PPCA_REMAP_OFFSET_2))
/** \brief 12D0, Protection Context Mask */
#define REG_PPC_PC_MASK180                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212D0u + PPCA_REMAP_OFFSET_2))
/** \brief 12D4, Protection Context Mask */
#define REG_PPC_PC_MASK181                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212D4u + PPCA_REMAP_OFFSET_2))
/** \brief 12D8, Protection Context Mask */
#define REG_PPC_PC_MASK182                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212D8u + PPCA_REMAP_OFFSET_2))
/** \brief 12DC, Protection Context Mask */
#define REG_PPC_PC_MASK183                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212DCu + PPCA_REMAP_OFFSET_2))
/** \brief 12E0, Protection Context Mask */
#define REG_PPC_PC_MASK184                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212E0u + PPCA_REMAP_OFFSET_2))
/** \brief 12E4, Protection Context Mask */
#define REG_PPC_PC_MASK185                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212E4u + PPCA_REMAP_OFFSET_2))
/** \brief 12E8, Protection Context Mask */
#define REG_PPC_PC_MASK186                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212E8u + PPCA_REMAP_OFFSET_2))
/** \brief 12EC, Protection Context Mask */
#define REG_PPC_PC_MASK187                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212ECu + PPCA_REMAP_OFFSET_2))
/** \brief 12F0, Protection Context Mask */
#define REG_PPC_PC_MASK188                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212F0u + PPCA_REMAP_OFFSET_2))
/** \brief 12F4, Protection Context Mask */
#define REG_PPC_PC_MASK189                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212F4u + PPCA_REMAP_OFFSET_2))
/** \brief 12F8, Protection Context Mask */
#define REG_PPC_PC_MASK190                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212F8u + PPCA_REMAP_OFFSET_2))
/** \brief 12FC, Protection Context Mask */
#define REG_PPC_PC_MASK191                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420212FCu + PPCA_REMAP_OFFSET_2))
/** \brief 1300, Protection Context Mask */
#define REG_PPC_PC_MASK192                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021300u + PPCA_REMAP_OFFSET_2))
/** \brief 1304, Protection Context Mask */
#define REG_PPC_PC_MASK193                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021304u + PPCA_REMAP_OFFSET_2))
/** \brief 1308, Protection Context Mask */
#define REG_PPC_PC_MASK194                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021308u + PPCA_REMAP_OFFSET_2))
/** \brief 130C, Protection Context Mask */
#define REG_PPC_PC_MASK195                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202130Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1310, Protection Context Mask */
#define REG_PPC_PC_MASK196                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021310u + PPCA_REMAP_OFFSET_2))
/** \brief 1314, Protection Context Mask */
#define REG_PPC_PC_MASK197                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021314u + PPCA_REMAP_OFFSET_2))
/** \brief 1318, Protection Context Mask */
#define REG_PPC_PC_MASK198                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021318u + PPCA_REMAP_OFFSET_2))
/** \brief 131C, Protection Context Mask */
#define REG_PPC_PC_MASK199                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202131Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1320, Protection Context Mask */
#define REG_PPC_PC_MASK200                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021320u + PPCA_REMAP_OFFSET_2))
/** \brief 1324, Protection Context Mask */
#define REG_PPC_PC_MASK201                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021324u + PPCA_REMAP_OFFSET_2))
/** \brief 1328, Protection Context Mask */
#define REG_PPC_PC_MASK202                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021328u + PPCA_REMAP_OFFSET_2))
/** \brief 132C, Protection Context Mask */
#define REG_PPC_PC_MASK203                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202132Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1330, Protection Context Mask */
#define REG_PPC_PC_MASK204                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021330u + PPCA_REMAP_OFFSET_2))
/** \brief 1334, Protection Context Mask */
#define REG_PPC_PC_MASK205                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021334u + PPCA_REMAP_OFFSET_2))
/** \brief 1338, Protection Context Mask */
#define REG_PPC_PC_MASK206                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021338u + PPCA_REMAP_OFFSET_2))
/** \brief 133C, Protection Context Mask */
#define REG_PPC_PC_MASK207                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202133Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1340, Protection Context Mask */
#define REG_PPC_PC_MASK208                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021340u + PPCA_REMAP_OFFSET_2))
/** \brief 1344, Protection Context Mask */
#define REG_PPC_PC_MASK209                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021344u + PPCA_REMAP_OFFSET_2))
/** \brief 1348, Protection Context Mask */
#define REG_PPC_PC_MASK210                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021348u + PPCA_REMAP_OFFSET_2))
/** \brief 134C, Protection Context Mask */
#define REG_PPC_PC_MASK211                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202134Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1350, Protection Context Mask */
#define REG_PPC_PC_MASK212                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021350u + PPCA_REMAP_OFFSET_2))
/** \brief 1354, Protection Context Mask */
#define REG_PPC_PC_MASK213                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021354u + PPCA_REMAP_OFFSET_2))
/** \brief 1358, Protection Context Mask */
#define REG_PPC_PC_MASK214                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021358u + PPCA_REMAP_OFFSET_2))
/** \brief 135C, Protection Context Mask */
#define REG_PPC_PC_MASK215                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202135Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1360, Protection Context Mask */
#define REG_PPC_PC_MASK216                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021360u + PPCA_REMAP_OFFSET_2))
/** \brief 1364, Protection Context Mask */
#define REG_PPC_PC_MASK217                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021364u + PPCA_REMAP_OFFSET_2))
/** \brief 1368, Protection Context Mask */
#define REG_PPC_PC_MASK218                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021368u + PPCA_REMAP_OFFSET_2))
/** \brief 136C, Protection Context Mask */
#define REG_PPC_PC_MASK219                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202136Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1370, Protection Context Mask */
#define REG_PPC_PC_MASK220                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021370u + PPCA_REMAP_OFFSET_2))
/** \brief 1374, Protection Context Mask */
#define REG_PPC_PC_MASK221                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021374u + PPCA_REMAP_OFFSET_2))
/** \brief 1378, Protection Context Mask */
#define REG_PPC_PC_MASK222                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021378u + PPCA_REMAP_OFFSET_2))
/** \brief 137C, Protection Context Mask */
#define REG_PPC_PC_MASK223                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202137Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1380, Protection Context Mask */
#define REG_PPC_PC_MASK224                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021380u + PPCA_REMAP_OFFSET_2))
/** \brief 1384, Protection Context Mask */
#define REG_PPC_PC_MASK225                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021384u + PPCA_REMAP_OFFSET_2))
/** \brief 1388, Protection Context Mask */
#define REG_PPC_PC_MASK226                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021388u + PPCA_REMAP_OFFSET_2))
/** \brief 138C, Protection Context Mask */
#define REG_PPC_PC_MASK227                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202138Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1390, Protection Context Mask */
#define REG_PPC_PC_MASK228                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021390u + PPCA_REMAP_OFFSET_2))
/** \brief 1394, Protection Context Mask */
#define REG_PPC_PC_MASK229                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021394u + PPCA_REMAP_OFFSET_2))
/** \brief 1398, Protection Context Mask */
#define REG_PPC_PC_MASK230                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021398u + PPCA_REMAP_OFFSET_2))
/** \brief 139C, Protection Context Mask */
#define REG_PPC_PC_MASK231                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202139Cu + PPCA_REMAP_OFFSET_2))
/** \brief 13A0, Protection Context Mask */
#define REG_PPC_PC_MASK232                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213A0u + PPCA_REMAP_OFFSET_2))
/** \brief 13A4, Protection Context Mask */
#define REG_PPC_PC_MASK233                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213A4u + PPCA_REMAP_OFFSET_2))
/** \brief 13A8, Protection Context Mask */
#define REG_PPC_PC_MASK234                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213A8u + PPCA_REMAP_OFFSET_2))
/** \brief 13AC, Protection Context Mask */
#define REG_PPC_PC_MASK235                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213ACu + PPCA_REMAP_OFFSET_2))
/** \brief 13B0, Protection Context Mask */
#define REG_PPC_PC_MASK236                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213B0u + PPCA_REMAP_OFFSET_2))
/** \brief 13B4, Protection Context Mask */
#define REG_PPC_PC_MASK237                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213B4u + PPCA_REMAP_OFFSET_2))
/** \brief 13B8, Protection Context Mask */
#define REG_PPC_PC_MASK238                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213B8u + PPCA_REMAP_OFFSET_2))
/** \brief 13BC, Protection Context Mask */
#define REG_PPC_PC_MASK239                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213BCu + PPCA_REMAP_OFFSET_2))
/** \brief 13C0, Protection Context Mask */
#define REG_PPC_PC_MASK240                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213C0u + PPCA_REMAP_OFFSET_2))
/** \brief 13C4, Protection Context Mask */
#define REG_PPC_PC_MASK241                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213C4u + PPCA_REMAP_OFFSET_2))
/** \brief 13C8, Protection Context Mask */
#define REG_PPC_PC_MASK242                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213C8u + PPCA_REMAP_OFFSET_2))
/** \brief 13CC, Protection Context Mask */
#define REG_PPC_PC_MASK243                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213CCu + PPCA_REMAP_OFFSET_2))
/** \brief 13D0, Protection Context Mask */
#define REG_PPC_PC_MASK244                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213D0u + PPCA_REMAP_OFFSET_2))
/** \brief 13D4, Protection Context Mask */
#define REG_PPC_PC_MASK245                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213D4u + PPCA_REMAP_OFFSET_2))
/** \brief 13D8, Protection Context Mask */
#define REG_PPC_PC_MASK246                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213D8u + PPCA_REMAP_OFFSET_2))
/** \brief 13DC, Protection Context Mask */
#define REG_PPC_PC_MASK247                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213DCu + PPCA_REMAP_OFFSET_2))
/** \brief 13E0, Protection Context Mask */
#define REG_PPC_PC_MASK248                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213E0u + PPCA_REMAP_OFFSET_2))
/** \brief 13E4, Protection Context Mask */
#define REG_PPC_PC_MASK249                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213E4u + PPCA_REMAP_OFFSET_2))
/** \brief 13E8, Protection Context Mask */
#define REG_PPC_PC_MASK250                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213E8u + PPCA_REMAP_OFFSET_2))
/** \brief 13EC, Protection Context Mask */
#define REG_PPC_PC_MASK251                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213ECu + PPCA_REMAP_OFFSET_2))
/** \brief 13F0, Protection Context Mask */
#define REG_PPC_PC_MASK252                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213F0u + PPCA_REMAP_OFFSET_2))
/** \brief 13F4, Protection Context Mask */
#define REG_PPC_PC_MASK253                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213F4u + PPCA_REMAP_OFFSET_2))
/** \brief 13F8, Protection Context Mask */
#define REG_PPC_PC_MASK254                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213F8u + PPCA_REMAP_OFFSET_2))
/** \brief 13FC, Protection Context Mask */
#define REG_PPC_PC_MASK255                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420213FCu + PPCA_REMAP_OFFSET_2))
/** \brief 1400, Protection Context Mask */
#define REG_PPC_PC_MASK256                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021400u + PPCA_REMAP_OFFSET_2))
/** \brief 1404, Protection Context Mask */
#define REG_PPC_PC_MASK257                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021404u + PPCA_REMAP_OFFSET_2))
/** \brief 1408, Protection Context Mask */
#define REG_PPC_PC_MASK258                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021408u + PPCA_REMAP_OFFSET_2))
/** \brief 140C, Protection Context Mask */
#define REG_PPC_PC_MASK259                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202140Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1410, Protection Context Mask */
#define REG_PPC_PC_MASK260                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021410u + PPCA_REMAP_OFFSET_2))
/** \brief 1414, Protection Context Mask */
#define REG_PPC_PC_MASK261                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021414u + PPCA_REMAP_OFFSET_2))
/** \brief 1418, Protection Context Mask */
#define REG_PPC_PC_MASK262                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021418u + PPCA_REMAP_OFFSET_2))
/** \brief 141C, Protection Context Mask */
#define REG_PPC_PC_MASK263                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202141Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1420, Protection Context Mask */
#define REG_PPC_PC_MASK264                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021420u + PPCA_REMAP_OFFSET_2))
/** \brief 1424, Protection Context Mask */
#define REG_PPC_PC_MASK265                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021424u + PPCA_REMAP_OFFSET_2))
/** \brief 1428, Protection Context Mask */
#define REG_PPC_PC_MASK266                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021428u + PPCA_REMAP_OFFSET_2))
/** \brief 142C, Protection Context Mask */
#define REG_PPC_PC_MASK267                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202142Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1430, Protection Context Mask */
#define REG_PPC_PC_MASK268                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021430u + PPCA_REMAP_OFFSET_2))
/** \brief 1434, Protection Context Mask */
#define REG_PPC_PC_MASK269                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021434u + PPCA_REMAP_OFFSET_2))
/** \brief 1438, Protection Context Mask */
#define REG_PPC_PC_MASK270                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021438u + PPCA_REMAP_OFFSET_2))
/** \brief 143C, Protection Context Mask */
#define REG_PPC_PC_MASK271                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202143Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1440, Protection Context Mask */
#define REG_PPC_PC_MASK272                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021440u + PPCA_REMAP_OFFSET_2))
/** \brief 1444, Protection Context Mask */
#define REG_PPC_PC_MASK273                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021444u + PPCA_REMAP_OFFSET_2))
/** \brief 1448, Protection Context Mask */
#define REG_PPC_PC_MASK274                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021448u + PPCA_REMAP_OFFSET_2))
/** \brief 144C, Protection Context Mask */
#define REG_PPC_PC_MASK275                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202144Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1450, Protection Context Mask */
#define REG_PPC_PC_MASK276                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021450u + PPCA_REMAP_OFFSET_2))
/** \brief 1454, Protection Context Mask */
#define REG_PPC_PC_MASK277                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021454u + PPCA_REMAP_OFFSET_2))
/** \brief 1458, Protection Context Mask */
#define REG_PPC_PC_MASK278                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021458u + PPCA_REMAP_OFFSET_2))
/** \brief 145C, Protection Context Mask */
#define REG_PPC_PC_MASK279                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202145Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1460, Protection Context Mask */
#define REG_PPC_PC_MASK280                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021460u + PPCA_REMAP_OFFSET_2))
/** \brief 1464, Protection Context Mask */
#define REG_PPC_PC_MASK281                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021464u + PPCA_REMAP_OFFSET_2))
/** \brief 1468, Protection Context Mask */
#define REG_PPC_PC_MASK282                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021468u + PPCA_REMAP_OFFSET_2))
/** \brief 146C, Protection Context Mask */
#define REG_PPC_PC_MASK283                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202146Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1470, Protection Context Mask */
#define REG_PPC_PC_MASK284                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021470u + PPCA_REMAP_OFFSET_2))
/** \brief 1474, Protection Context Mask */
#define REG_PPC_PC_MASK285                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021474u + PPCA_REMAP_OFFSET_2))
/** \brief 1478, Protection Context Mask */
#define REG_PPC_PC_MASK286                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021478u + PPCA_REMAP_OFFSET_2))
/** \brief 147C, Protection Context Mask */
#define REG_PPC_PC_MASK287                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202147Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1480, Protection Context Mask */
#define REG_PPC_PC_MASK288                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021480u + PPCA_REMAP_OFFSET_2))
/** \brief 1484, Protection Context Mask */
#define REG_PPC_PC_MASK289                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021484u + PPCA_REMAP_OFFSET_2))
/** \brief 1488, Protection Context Mask */
#define REG_PPC_PC_MASK290                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021488u + PPCA_REMAP_OFFSET_2))
/** \brief 148C, Protection Context Mask */
#define REG_PPC_PC_MASK291                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202148Cu + PPCA_REMAP_OFFSET_2))
/** \brief 1490, Protection Context Mask */
#define REG_PPC_PC_MASK292                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021490u + PPCA_REMAP_OFFSET_2))
/** \brief 1494, Protection Context Mask */
#define REG_PPC_PC_MASK293                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021494u + PPCA_REMAP_OFFSET_2))
/** \brief 1498, Protection Context Mask */
#define REG_PPC_PC_MASK294                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x42021498u + PPCA_REMAP_OFFSET_2))
/** \brief 149C, Protection Context Mask */
#define REG_PPC_PC_MASK295                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x4202149Cu + PPCA_REMAP_OFFSET_2))
/** \brief 14A0, Protection Context Mask */
#define REG_PPC_PC_MASK296                      /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_PC_MASK*)(0x420214A0u + PPCA_REMAP_OFFSET_2))
/** \brief 2000, Non-secure attribute */
#define REG_PPC_NS_ATT0                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_ATT*)(0x42022000u + PPCA_REMAP_OFFSET_2))
/** \brief 2004, Non-secure attribute */
#define REG_PPC_NS_ATT1                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_ATT*)(0x42022004u + PPCA_REMAP_OFFSET_2))
/** \brief 2008, Non-secure attribute */
#define REG_PPC_NS_ATT2                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_ATT*)(0x42022008u + PPCA_REMAP_OFFSET_2))
/** \brief 200C, Non-secure attribute */
#define REG_PPC_NS_ATT3                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_ATT*)(0x4202200Cu + PPCA_REMAP_OFFSET_2))
/** \brief 2010, Non-secure attribute */
#define REG_PPC_NS_ATT4                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_ATT*)(0x42022010u + PPCA_REMAP_OFFSET_2))
/** \brief 2014, Non-secure attribute */
#define REG_PPC_NS_ATT5                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_ATT*)(0x42022014u + PPCA_REMAP_OFFSET_2))
/** \brief 2018, Non-secure attribute */
#define REG_PPC_NS_ATT6                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_ATT*)(0x42022018u + PPCA_REMAP_OFFSET_2))
/** \brief 201C, Non-secure attribute */
#define REG_PPC_NS_ATT7                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_ATT*)(0x4202201Cu + PPCA_REMAP_OFFSET_2))
/** \brief 2020, Non-secure attribute */
#define REG_PPC_NS_ATT8                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_ATT*)(0x42022020u + PPCA_REMAP_OFFSET_2))
/** \brief 2024, Non-secure attribute */
#define REG_PPC_NS_ATT9                         /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_ATT*)(0x42022024u + PPCA_REMAP_OFFSET_2))
/** \brief 2400, Secure Privilege Attribute */
#define REG_PPC_S_P_ATT0                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_S_P_ATT*)(0x42022400u + PPCA_REMAP_OFFSET_2))
/** \brief 2404, Secure Privilege Attribute */
#define REG_PPC_S_P_ATT1                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_S_P_ATT*)(0x42022404u + PPCA_REMAP_OFFSET_2))
/** \brief 2408, Secure Privilege Attribute */
#define REG_PPC_S_P_ATT2                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_S_P_ATT*)(0x42022408u + PPCA_REMAP_OFFSET_2))
/** \brief 240C, Secure Privilege Attribute */
#define REG_PPC_S_P_ATT3                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_S_P_ATT*)(0x4202240Cu + PPCA_REMAP_OFFSET_2))
/** \brief 2410, Secure Privilege Attribute */
#define REG_PPC_S_P_ATT4                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_S_P_ATT*)(0x42022410u + PPCA_REMAP_OFFSET_2))
/** \brief 2414, Secure Privilege Attribute */
#define REG_PPC_S_P_ATT5                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_S_P_ATT*)(0x42022414u + PPCA_REMAP_OFFSET_2))
/** \brief 2418, Secure Privilege Attribute */
#define REG_PPC_S_P_ATT6                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_S_P_ATT*)(0x42022418u + PPCA_REMAP_OFFSET_2))
/** \brief 241C, Secure Privilege Attribute */
#define REG_PPC_S_P_ATT7                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_S_P_ATT*)(0x4202241Cu + PPCA_REMAP_OFFSET_2))
/** \brief 2420, Secure Privilege Attribute */
#define REG_PPC_S_P_ATT8                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_S_P_ATT*)(0x42022420u + PPCA_REMAP_OFFSET_2))
/** \brief 2424, Secure Privilege Attribute */
#define REG_PPC_S_P_ATT9                        /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_S_P_ATT*)(0x42022424u + PPCA_REMAP_OFFSET_2))
/** \brief 4000, Non-secure Privilege Attribute */
#define REG_PPC_NS_P_ATT0                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_P_ATT*)(0x42024000u + PPCA_REMAP_OFFSET_2))
/** \brief 4004, Non-secure Privilege Attribute */
#define REG_PPC_NS_P_ATT1                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_P_ATT*)(0x42024004u + PPCA_REMAP_OFFSET_2))
/** \brief 4008, Non-secure Privilege Attribute */
#define REG_PPC_NS_P_ATT2                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_P_ATT*)(0x42024008u + PPCA_REMAP_OFFSET_2))
/** \brief 400C, Non-secure Privilege Attribute */
#define REG_PPC_NS_P_ATT3                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_P_ATT*)(0x4202400Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4010, Non-secure Privilege Attribute */
#define REG_PPC_NS_P_ATT4                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_P_ATT*)(0x42024010u + PPCA_REMAP_OFFSET_2))
/** \brief 4014, Non-secure Privilege Attribute */
#define REG_PPC_NS_P_ATT5                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_P_ATT*)(0x42024014u + PPCA_REMAP_OFFSET_2))
/** \brief 4018, Non-secure Privilege Attribute */
#define REG_PPC_NS_P_ATT6                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_P_ATT*)(0x42024018u + PPCA_REMAP_OFFSET_2))
/** \brief 401C, Non-secure Privilege Attribute */
#define REG_PPC_NS_P_ATT7                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_P_ATT*)(0x4202401Cu + PPCA_REMAP_OFFSET_2))
/** \brief 4020, Non-secure Privilege Attribute */
#define REG_PPC_NS_P_ATT8                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_P_ATT*)(0x42024020u + PPCA_REMAP_OFFSET_2))
/** \brief 4024, Non-secure Privilege Attribute */
#define REG_PPC_NS_P_ATT9                       /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_NS_P_ATT*)(0x42024024u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR0_R_ADDR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025000u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR1_R_ADDR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025004u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR2_R_ADDR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025008u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR3_R_ADDR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202500Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR4_R_ADDR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025010u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR5_R_ADDR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025014u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR6_R_ADDR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025018u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR7_R_ADDR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202501Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR8_R_ADDR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025020u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR9_R_ADDR                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025024u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR10_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025028u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR11_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202502Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR12_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025030u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR13_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025034u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR14_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025038u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR15_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202503Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR16_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025040u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR17_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025044u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR18_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025048u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR19_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202504Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR20_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025050u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR21_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025054u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR22_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025058u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR23_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202505Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR24_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025060u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR25_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025064u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR26_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025068u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR27_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202506Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR28_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025070u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR29_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025074u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR30_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025078u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR31_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202507Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR32_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025080u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR33_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025084u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR34_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025088u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR35_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202508Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR36_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025090u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR37_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025094u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR38_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025098u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR39_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202509Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR40_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250A0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR41_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250A4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR42_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR43_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250ACu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR44_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250B0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR45_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR46_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250B8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR47_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250BCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR48_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250C0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR49_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250C4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR50_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250C8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR51_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250CCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR52_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250D0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR53_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250D4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR54_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250D8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR55_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250DCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR56_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250E0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR57_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250E4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR58_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR59_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR60_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250F0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR61_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250F4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR62_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250F8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR63_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420250FCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR64_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025100u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR65_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025104u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR66_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025108u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR67_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202510Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR68_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025110u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR69_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025114u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR70_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025118u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR71_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202511Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR72_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025120u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR73_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025124u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR74_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025128u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR75_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202512Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR76_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025130u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR77_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025134u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR78_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025138u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR79_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202513Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR80_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025140u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR81_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025144u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR82_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025148u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR83_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202514Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR84_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025150u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR85_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025154u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR86_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025158u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR87_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202515Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR88_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025160u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR89_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025164u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR90_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025168u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR91_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202516Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR92_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025170u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR93_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025174u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR94_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025178u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR95_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202517Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR96_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025180u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR97_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025184u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR98_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025188u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR99_R_ADDR                 /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202518Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR100_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025190u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR101_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025194u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR102_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025198u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR103_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202519Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR104_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251A0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR105_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251A4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR106_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR107_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251ACu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR108_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251B0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR109_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR110_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251B8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR111_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251BCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR112_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251C0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR113_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251C4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR114_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251C8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR115_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251CCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR116_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251D0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR117_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251D4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR118_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251D8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR119_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251DCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR120_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251E0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR121_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251E4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR122_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR123_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR124_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251F0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR125_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251F4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR126_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251F8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR127_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420251FCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR128_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025200u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR129_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025204u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR130_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025208u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR131_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202520Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR132_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025210u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR133_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025214u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR134_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025218u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR135_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202521Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR136_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025220u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR137_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025224u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR138_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025228u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR139_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202522Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR140_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025230u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR141_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025234u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR142_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025238u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR143_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202523Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR144_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025240u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR145_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025244u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR146_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025248u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR147_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202524Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR148_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025250u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR149_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025254u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR150_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025258u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR151_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202525Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR152_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025260u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR153_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025264u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR154_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025268u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR155_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202526Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR156_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025270u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR157_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025274u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR158_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025278u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR159_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202527Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR160_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025280u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR161_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025284u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR162_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025288u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR163_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202528Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR164_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025290u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR165_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025294u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR166_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025298u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR167_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202529Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR168_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252A0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR169_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252A4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR170_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR171_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252ACu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR172_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252B0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR173_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR174_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252B8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR175_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252BCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR176_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252C0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR177_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252C4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR178_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252C8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR179_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252CCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR180_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252D0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR181_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252D4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR182_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252D8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR183_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252DCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR184_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252E0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR185_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252E4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR186_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR187_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR188_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252F0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR189_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252F4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR190_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252F8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR191_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420252FCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR192_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025300u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR193_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025304u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR194_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025308u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR195_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202530Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR196_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025310u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR197_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025314u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR198_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025318u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR199_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202531Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR200_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025320u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR201_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025324u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR202_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025328u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR203_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202532Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR204_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025330u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR205_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025334u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR206_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025338u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR207_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202533Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR208_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025340u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR209_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025344u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR210_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025348u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR211_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202534Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR212_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025350u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR213_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025354u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR214_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025358u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR215_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202535Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR216_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025360u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR217_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025364u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR218_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025368u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR219_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202536Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR220_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025370u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR221_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025374u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR222_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025378u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR223_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202537Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR224_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025380u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR225_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025384u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR226_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025388u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR227_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202538Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR228_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025390u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR229_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025394u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR230_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025398u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR231_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202539Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR232_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253A0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR233_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253A4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR234_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR235_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253ACu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR236_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253B0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR237_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR238_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253B8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR239_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253BCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR240_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253C0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR241_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253C4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR242_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253C8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR243_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253CCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR244_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253D0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR245_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253D4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR246_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253D8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR247_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253DCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR248_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253E0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR249_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253E4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR250_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR251_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR252_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253F0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR253_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253F4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR254_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253F8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR255_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420253FCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR256_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025400u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR257_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025404u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR258_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025408u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR259_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202540Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR260_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025410u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR261_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025414u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR262_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025418u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR263_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202541Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR264_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025420u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR265_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025424u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR266_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025428u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR267_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202542Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR268_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025430u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR269_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025434u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR270_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025438u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR271_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202543Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR272_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025440u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR273_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025444u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR274_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025448u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR275_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202544Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR276_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025450u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR277_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025454u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR278_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025458u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR279_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202545Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR280_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025460u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR281_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025464u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR282_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025468u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR283_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202546Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR284_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025470u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR285_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025474u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR286_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025478u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR287_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202547Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR288_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025480u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR289_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025484u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR290_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025488u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR291_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202548Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR292_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025490u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR293_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025494u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR294_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x42025498u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR295_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x4202549Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Address */
#define REG_PPC_R_ADDR296_R_ADDR                /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ADDR_R_ADDR*)(0x420254A0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT0_R_ATT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026000u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT1_R_ATT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026004u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT2_R_ATT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026008u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT3_R_ATT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202600Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT4_R_ATT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026010u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT5_R_ATT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026014u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT6_R_ATT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026018u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT7_R_ATT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202601Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT8_R_ATT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026020u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT9_R_ATT                    /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026024u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT10_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026028u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT11_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202602Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT12_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026030u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT13_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026034u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT14_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026038u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT15_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202603Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT16_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026040u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT17_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026044u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT18_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026048u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT19_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202604Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT20_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026050u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT21_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026054u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT22_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026058u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT23_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202605Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT24_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026060u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT25_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026064u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT26_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026068u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT27_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202606Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT28_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026070u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT29_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026074u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT30_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026078u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT31_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202607Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT32_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026080u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT33_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026084u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT34_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026088u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT35_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202608Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT36_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026090u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT37_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026094u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT38_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026098u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT39_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202609Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT40_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260A0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT41_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260A4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT42_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT43_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260ACu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT44_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260B0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT45_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT46_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260B8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT47_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260BCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT48_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260C0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT49_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260C4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT50_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260C8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT51_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260CCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT52_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260D0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT53_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260D4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT54_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260D8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT55_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260DCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT56_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260E0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT57_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260E4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT58_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT59_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT60_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260F0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT61_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260F4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT62_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260F8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT63_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420260FCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT64_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026100u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT65_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026104u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT66_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026108u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT67_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202610Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT68_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026110u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT69_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026114u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT70_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026118u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT71_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202611Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT72_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026120u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT73_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026124u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT74_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026128u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT75_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202612Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT76_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026130u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT77_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026134u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT78_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026138u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT79_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202613Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT80_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026140u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT81_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026144u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT82_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026148u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT83_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202614Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT84_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026150u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT85_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026154u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT86_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026158u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT87_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202615Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT88_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026160u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT89_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026164u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT90_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026168u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT91_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202616Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT92_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026170u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT93_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026174u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT94_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026178u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT95_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202617Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT96_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026180u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT97_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026184u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT98_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026188u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT99_R_ATT                   /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202618Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT100_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026190u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT101_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026194u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT102_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026198u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT103_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202619Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT104_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261A0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT105_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261A4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT106_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT107_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261ACu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT108_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261B0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT109_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT110_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261B8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT111_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261BCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT112_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261C0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT113_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261C4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT114_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261C8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT115_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261CCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT116_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261D0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT117_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261D4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT118_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261D8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT119_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261DCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT120_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261E0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT121_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261E4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT122_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT123_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT124_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261F0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT125_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261F4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT126_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261F8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT127_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420261FCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT128_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026200u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT129_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026204u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT130_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026208u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT131_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202620Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT132_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026210u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT133_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026214u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT134_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026218u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT135_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202621Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT136_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026220u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT137_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026224u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT138_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026228u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT139_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202622Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT140_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026230u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT141_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026234u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT142_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026238u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT143_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202623Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT144_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026240u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT145_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026244u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT146_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026248u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT147_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202624Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT148_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026250u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT149_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026254u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT150_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026258u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT151_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202625Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT152_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026260u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT153_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026264u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT154_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026268u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT155_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202626Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT156_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026270u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT157_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026274u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT158_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026278u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT159_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202627Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT160_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026280u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT161_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026284u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT162_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026288u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT163_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202628Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT164_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026290u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT165_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026294u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT166_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026298u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT167_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202629Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT168_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262A0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT169_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262A4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT170_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT171_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262ACu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT172_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262B0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT173_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT174_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262B8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT175_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262BCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT176_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262C0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT177_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262C4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT178_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262C8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT179_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262CCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT180_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262D0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT181_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262D4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT182_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262D8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT183_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262DCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT184_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262E0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT185_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262E4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT186_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT187_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT188_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262F0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT189_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262F4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT190_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262F8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT191_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420262FCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT192_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026300u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT193_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026304u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT194_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026308u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT195_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202630Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT196_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026310u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT197_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026314u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT198_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026318u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT199_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202631Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT200_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026320u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT201_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026324u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT202_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026328u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT203_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202632Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT204_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026330u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT205_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026334u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT206_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026338u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT207_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202633Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT208_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026340u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT209_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026344u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT210_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026348u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT211_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202634Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT212_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026350u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT213_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026354u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT214_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026358u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT215_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202635Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT216_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026360u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT217_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026364u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT218_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026368u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT219_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202636Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT220_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026370u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT221_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026374u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT222_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026378u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT223_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202637Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT224_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026380u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT225_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026384u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT226_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026388u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT227_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202638Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT228_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026390u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT229_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026394u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT230_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026398u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT231_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202639Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT232_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263A0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT233_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263A4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT234_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263A8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT235_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263ACu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT236_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263B0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT237_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263B4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT238_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263B8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT239_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263BCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT240_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263C0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT241_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263C4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT242_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263C8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT243_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263CCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT244_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263D0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT245_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263D4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT246_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263D8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT247_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263DCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT248_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263E0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT249_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263E4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT250_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263E8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT251_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263ECu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT252_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263F0u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT253_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263F4u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT254_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263F8u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT255_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420263FCu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT256_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026400u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT257_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026404u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT258_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026408u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT259_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202640Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT260_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026410u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT261_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026414u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT262_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026418u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT263_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202641Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT264_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026420u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT265_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026424u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT266_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026428u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT267_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202642Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT268_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026430u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT269_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026434u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT270_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026438u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT271_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202643Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT272_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026440u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT273_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026444u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT274_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026448u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT275_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202644Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT276_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026450u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT277_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026454u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT278_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026458u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT279_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202645Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT280_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026460u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT281_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026464u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT282_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026468u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT283_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202646Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT284_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026470u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT285_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026474u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT286_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026478u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT287_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202647Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT288_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026480u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT289_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026484u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT290_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026488u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT291_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202648Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT292_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026490u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT293_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026494u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT294_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x42026498u + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT295_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x4202649Cu + PPCA_REMAP_OFFSET_2))
/** \brief 0, Region Attribute */
#define REG_PPC_R_ATT296_R_ATT                  /*lint --e(923, 9078)*/ (*(volatile Ifx_PPC_R_ATT_R_ATT*)(0x420264A0u + PPCA_REMAP_OFFSET_2))

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* _IFXPPC_REG_H_ */
