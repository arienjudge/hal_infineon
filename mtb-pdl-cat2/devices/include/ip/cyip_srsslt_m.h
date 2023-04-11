/***************************************************************************//**
* \file cyip_srsslt.h
*
* \brief
* SRSSLT IP definitions
*
********************************************************************************
* \copyright
* (c) (2016-2021), Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
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

#ifndef _CYIP_SRSSLT_H_
#define _CYIP_SRSSLT_H_

#include "cyip_headers.h"

/*******************************************************************************
*                                    SRSSLT
*******************************************************************************/

#define SRSSLT_SECTION_SIZE                     0x00010000UL

/**
  * \brief System Resources Lite Subsystem (SRSSLT)
  */
typedef struct {
  __IOM uint32_t PWR_CONTROL;                   /*!< 0x00000000 Power Mode Control */
  __IOM uint32_t PWR_INTR;                      /*!< 0x00000008 Power System Interrupt Register */
  __IOM uint32_t PWR_INTR_MASK;                 /*!< 0x00000008 Power System Interrupt Mask Register */
  __IOM uint32_t PWR_KEY_DELAY;                 /*!< 0x0000000C Power System Key&Delay Register */
   __IM uint32_t RESERVED1[2];
  __IOM uint32_t PWR_VMON_CONFIG;               /*!< 0x00000018 Voltage Monitoring and Trim Configuration Register */
   __IM uint32_t RESERVED2[3];
  __IOM uint32_t PWR_BOD_KEY;                   /*!< 0x00000028 Test Mode Control Register */
  __IOM uint32_t PWR_STOP;                      /*!< 0x0000002C Test Mode Control Register */
   __IM uint32_t RESERVED3[52];
  __IOM uint32_t CLK_SELECT;                    /*!< 0x00000100 Clock Select Register */
  __IOM uint32_t CLK_ILO_CONFIG;                /*!< 0x00000104 ILO Configuration */
  __IOM uint32_t CLK_IMO_CONFIG;                /*!< 0x00000108 IMO Configuration */
  __IOM uint32_t CLK_IMO_SPREAD;                /*!< 0x0000010C Clock DFT Mode Selection Register */
  __IOM uint32_t CLK_DFT_SELECT;                /*!< 0x00000110 Clock DFT Mode Selection Register */
   __IM uint32_t RESERVED4[59];
  __IOM uint32_t WDT_CTRLOW;                    /*!< 0x00000200 Watchdog Disable Key Register */
   __IM uint32_t WDT_CTRHIGH;                   /*!< 0x00000204 Watchdog Counter Register */
  __IOM uint32_t WDT_MATCH;                     /*!< 0x00000208 Watchdog Match Register */
  __IOM uint32_t WDT_CONFIG;                    /*!< 0x0000020C Watchdog Match Register */
  __IOM uint32_t WDT_CONTROL;                   /*!< 0x00000210 Watchdog Match Register */
   __IM uint32_t RESERVED5[59];
  __IOM uint32_t RES_CAUSE;                     /*!< 0x00000300 Reset Cause Observation Register */
   __IM uint32_t RESERVED6[16131];
  __IOM uint32_t PWR_BG_TRIM1;                  /*!< 0x00000F10 Bandgap Trim Register */
  __IOM uint32_t PWR_BG_TRIM2;                  /*!< 0x00000F14 Bandgap Trim Register */
  __IOM uint32_t PWR_BG_TRIM3;                  /*!< 0x00000F18 Bandgap Trim Register */
  __IOM uint32_t PWR_BG_TRIM4;                  /*!< 0x00000F1C Bandgap Trim Register */
  __IOM uint32_t PWR_BG_TRIM5;                  /*!< 0x00000F20 IMO Frequency Select Register */
  __IOM uint32_t CLK_ILO_TRIM;                  /*!< 0x00000F20 ILO Trim Register */
  __IOM uint32_t CLK_IMO_TRIM1;                 /*!< 0x00000F28 IMO Trim Register */
  __IOM uint32_t CLK_IMO_TRIM2;                 /*!< 0x00000F2C IMO Trim Register */
  __IOM uint32_t CLK_IMO_TRIM3;                 /*!< 0x00000F30 IMO Trim Register */
   __IM uint32_t RESERVED7;
  __IOM uint32_t PWR_RSVD_TRIM;                 /*!< 0x00000F38 Power System Trim Register */
} SRSSLT_Type;                                  /*!< Size = 65336 (0xFF38) */


/* SRSSLT.PWR_CONTROL */
#define SRSSLT_PWR_CONTROL_POWER_MODE_Pos       0UL
#define SRSSLT_PWR_CONTROL_POWER_MODE_Msk       0xFUL
#define SRSSLT_PWR_CONTROL_DEBUG_SESSION_Pos    4UL
#define SRSSLT_PWR_CONTROL_DEBUG_SESSION_Msk    0x10UL
#define SRSSLT_PWR_CONTROL_LPM_READY_Pos        5UL
#define SRSSLT_PWR_CONTROL_LPM_READY_Msk        0x20UL
#define SRSSLT_PWR_CONTROL_EXT_VCCD_Pos         23UL
#define SRSSLT_PWR_CONTROL_EXT_VCCD_Msk         0x800000UL
#define SRSSLT_PWR_CONTROL_HYMON_EN_Pos         24UL
#define SRSSLT_PWR_CONTROL_HYMON_EN_Msk         0x1000000UL
#define SRSSLT_PWR_CONTROL_HYMON_RELOAD_Pos     25UL
#define SRSSLT_PWR_CONTROL_HYMON_RELOAD_Msk     0x2000000UL
#define SRSSLT_PWR_CONTROL_FIMO_DISABLE_Pos     27UL
#define SRSSLT_PWR_CONTROL_FIMO_DISABLE_Msk     0x8000000UL
#define SRSSLT_PWR_CONTROL_HIBERNATE_DISABLE_Pos     28UL
#define SRSSLT_PWR_CONTROL_HIBERNATE_DISABLE_Msk     0x10000000UL
#define SRSSLT_PWR_CONTROL_LFCLK_SHORT_Pos      29UL
#define SRSSLT_PWR_CONTROL_LFCLK_SHORT_Msk      0x20000000UL
#define SRSSLT_PWR_CONTROL_HIBERNATE_Pos        31UL
#define SRSSLT_PWR_CONTROL_HIBERNATE_Msk        0x80000000UL
/* SRSSLT.PWR_INTR */
#define SRSSLT_PWR_INTR_LVD_Pos                 1UL
#define SRSSLT_PWR_INTR_LVD_Msk                 0x2UL
/* SRSSLT.PWR_KEY_DELAY */
#define SRSSLT_PWR_KEY_DELAY_WAKEUP_HOLDOFF_Pos 0UL
#define SRSSLT_PWR_KEY_DELAY_WAKEUP_HOLDOFF_Msk 0x3FFUL
/* SRSSLT.PWR_VMON_CONFIG */
#define SRSSLT_PWR_VMON_CONFIG_LVD_EN_Pos       0UL
#define SRSSLT_PWR_VMON_CONFIG_LVD_EN_Msk       0x1UL
#define SRSSLT_PWR_VMON_CONFIG_LVD_SEL_Pos      1UL
#define SRSSLT_PWR_VMON_CONFIG_LVD_SEL_Msk      0x1EUL
/* SRSSLT.PWR_BOD_KEY */
#define SRSSLT_PWR_BOD_KEY_KEY_16_Pos           0UL
#define SRSSLT_PWR_BOD_KEY_KEY_16_Msk           0xFFFFFFFFUL
/* SRSSLT.PWR_STOP */
#define SRSSLT_PWR_STOP_TOKEN_Pos               0UL
#define SRSSLT_PWR_STOP_TOKEN_Msk               0xFFUL
#define SRSSLT_PWR_STOP_UNLOCK_Pos              8UL
#define SRSSLT_PWR_STOP_UNLOCK_Msk              0xFF00UL
#define SRSSLT_PWR_STOP_POLARITY_Pos            16UL
#define SRSSLT_PWR_STOP_POLARITY_Msk            0x10000UL
#define SRSSLT_PWR_STOP_FREEZE_Pos              17UL 
#define SRSSLT_PWR_STOP_FREEZE_Msk              0x20000UL 
#define SRSSLT_PWR_STOP_STOP_Pos                31UL
#define SRSSLT_PWR_STOP_STOP_Msk                0x80000000UL
/* SRSSLT.CLK_SELECT */
#define SRSSLT_CLK_SELECT_DIRECT_SEL_Pos        0UL
#define SRSSLT_CLK_SELECT_DIRECT_SEL_Msk        0x7UL
#define SRSSLT_CLK_SELECT_DBL_SEL_Pos           3UL
#define SRSSLT_CLK_SELECT_DBL_SEL_Msk           0x38UL
#define SRSSLT_CLK_SELECT_PLL_SEL_Pos           6UL
#define SRSSLT_CLK_SELECT_PLL_SEL_Msk           0x1C0UL
#define SRSSLT_CLK_SELECT_DPLLIN_SEL_Pos        9UL
#define SRSSLT_CLK_SELECT_DPLLIN_SEL_Msk        0xE00UL
#define SRSSLT_CLK_SELECT_DPLLREF_SEL_Pos       12UL
#define SRSSLT_CLK_SELECT_DPLLREF_SEL_Msk       0x3000UL
#define SRSSLT_CLK_SELECT_WDT_LOCK_Pos          14UL
#define SRSSLT_CLK_SELECT_WDT_LOCK_Msk          0xC000UL
#define SRSSLT_CLK_SELECT_HFCLK_SEL_Pos         16UL
#define SRSSLT_CLK_SELECT_HFCLK_SEL_Msk         0x30000UL
#define SRSSLT_CLK_SELECT_HALF_EN_Pos           18UL
#define SRSSLT_CLK_SELECT_HALF_EN_Msk           0x40000UL
#define SRSSLT_CLK_SELECT_SYSCLK_DIV_Pos        19UL
#define SRSSLT_CLK_SELECT_SYSCLK_DIV_Msk        0x380000UL
/* SRSSLT.CLK_ILO_CONFIG */
#define SRSSLT_CLK_ILO_CONFIG_PD_MODE_Pos       0UL
#define SRSSLT_CLK_ILO_CONFIG_PD_MODE_Msk       0x1UL
#define SRSSLT_CLK_ILO_CONFIG_TURBO_Pos         1UL
#define SRSSLT_CLK_ILO_CONFIG_TURBO_Msk         0x2UL
#define SRSSLT_CLK_ILO_CONFIG_SATBIAS_Pos       2UL
#define SRSSLT_CLK_ILO_CONFIG_SATBIAS_Msk       0x4UL
#define SRSSLT_CLK_ILO_CONFIG_ENABLE_Pos        31UL
#define SRSSLT_CLK_ILO_CONFIG_ENABLE_Msk        0x80000000UL
/* SRSSLT.CLK_IMO_CONFIG */
#define SRSSLT_CLK_IMO_CONFIG_FLASHPUMP_SEL_Pos 22UL
#define SRSSLT_CLK_IMO_CONFIG_FLASHPUMP_SEL_Msk 0x400000UL
#define SRSSLT_CLK_IMO_CONFIG_PUMP_SEL_Pos      25UL
#define SRSSLT_CLK_IMO_CONFIG_PUMP_SEL_Msk      0xE000000UL
#define SRSSLT_CLK_IMO_CONFIG_EN_CLK36_Pos      29UL
#define SRSSLT_CLK_IMO_CONFIG_EN_CLK36_Msk      0x20000000UL
#define SRSSLT_CLK_IMO_CONFIG_EN_CLK2X_Pos      30UL
#define SRSSLT_CLK_IMO_CONFIG_EN_CLK2X_Msk      0x40000000UL
#define SRSSLT_CLK_IMO_CONFIG_ENABLE_Pos        31UL
#define SRSSLT_CLK_IMO_CONFIG_ENABLE_Msk        0x80000000UL
/* SRSSLT.CLK_IMO_SPREAD */
#define SRSSLT_CLK_IMO_SPREAD_SS_VALUE_Pos      0UL
#define SRSSLT_CLK_IMO_SPREAD_SS_VALUE_Msk      0x1FUL
#define SRSSLT_CLK_IMO_SPREAD_SS_MAX_Pos        8UL
#define SRSSLT_CLK_IMO_SPREAD_SS_MAX_Msk        0x1F00UL
#define SRSSLT_CLK_IMO_SPREAD_SS_RANGE_Pos      28UL
#define SRSSLT_CLK_IMO_SPREAD_SS_RANGE_Msk      0x30000000UL
#define SRSSLT_CLK_IMO_SPREAD_SS_MODE_Pos       30UL
#define SRSSLT_CLK_IMO_SPREAD_SS_MODE_Msk       0xC0000000UL
/* SRSSLT.CLK_DFT_SELECT */
// maybes SEL0 -> SEL1 DIV0->DIV1 SEL1->SEL2 DIV1->DIV2
#define SRSSLT_CLK_DFT_SELECT_DFT_SEL0_Pos      0UL
#define SRSSLT_CLK_DFT_SELECT_DFT_SEL0_Msk      0xFUL
#define SRSSLT_CLK_DFT_SELECT_DFT_DIV0_Pos      4UL
#define SRSSLT_CLK_DFT_SELECT_DFT_DIV0_Msk      0x30UL
#define SRSSLT_CLK_DFT_SELECT_DFT_SEL1_Pos      8UL
#define SRSSLT_CLK_DFT_SELECT_DFT_SEL1_Msk      0xF00UL
#define SRSSLT_CLK_DFT_SELECT_DFT_DIV1_Pos      12UL
#define SRSSLT_CLK_DFT_SELECT_DFT_DIV1_Msk      0x3000UL
/* SRSSLT.WDT_CTRLOW */
#define SRSSLT_WDT_CTRLOW_WDT_CTR0_Pos          0UL
#define SRSSLT_WDT_CTRLOW_WDT_CTR0_Msk          0xFFFFUL
#define SRSSLT_WDT_CTRLOW_WDT_CTR1_Pos          16UL
#define SRSSLT_WDT_CTRLOW_WDT_CTR1_Msk          0xFFFF0000UL
/* SRSSLT.WDT_CTRHIGH */
#define SRSSLT_WDT_CTRHIGH_WDT_CTR2_Pos         0UL
#define SRSSLT_WDT_CTRHIGH_WDT_CTR2_Msk         0xFFFFFFFFUL
/* SRSSLT.WDT_MATCH */
#define SRSSLT_WDT_MATCH_MATCH0_Pos             0UL
#define SRSSLT_WDT_MATCH_MATCH0_Msk             0xFFFFUL
#define SRSSLT_WDT_MATCH_MATCH1_Pos             16UL
#define SRSSLT_WDT_MATCH_MATCH1_Msk             0xFFFF0000UL
/* SRSSLT.WDT_CONFIG */
#define SRSSLT_WDT_CONFIG_WDT_MODE0_Pos         0UL
#define SRSSLT_WDT_CONFIG_WDT_MODE0_Msk         0x3UL
#define SRSSLT_WDT_CONFIG_WDT_CLEAR0_Pos        2UL
#define SRSSLT_WDT_CONFIG_WDT_CLEAR0_Msk        0x4UL
#define SRSSLT_WDT_CONFIG_WDT_CASCADE0_Pos      3UL
#define SRSSLT_WDT_CONFIG_WDT_CASCADE0_Msk      0x8UL
#define SRSSLT_WDT_CONFIG_WDT_MODE1_Pos         8UL
#define SRSSLT_WDT_CONFIG_WDT_MODE1_Msk         0x300UL
#define SRSSLT_WDT_CONFIG_WDT_CLEAR1_Pos        10UL
#define SRSSLT_WDT_CONFIG_WDT_CLEAR1_Msk        0x400UL
#define SRSSLT_WDT_CONFIG_WDT_CASCADE1_Pos      11UL
#define SRSSLT_WDT_CONFIG_WDT_CASCADE1_Msk      0x800UL
#define SRSSLT_WDT_CONFIG_WDT_MODE2_Pos         16UL
#define SRSSLT_WDT_CONFIG_WDT_MODE2_Msk         0x10000UL
#define SRSSLT_WDT_CONFIG_WDT_BITS2_Pos         24UL
#define SRSSLT_WDT_CONFIG_WDT_BITS2_Msk         0x1F000000UL
#define SRSSLT_WDT_CONFIG_LFCLK_SEL_Pos         30UL
#define SRSSLT_WDT_CONFIG_LFCLK_SEL_Msk         0xC0000000UL
/* SRSSLT.WDT_CONTROL */
#define SRSSLT_WDT_CONTROL_WDT_ENABLE0_Pos     0UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLE0_Msk     0x1UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLED0_Pos    1UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLED0_Msk    0x2UL
#define SRSSLT_WDT_CONTROL_WDT_INT0_Pos        2UL
#define SRSSLT_WDT_CONTROL_WDT_INT0_Msk        0x4UL
#define SRSSLT_WDT_CONTROL_WDT_RESET0_Pos      3UL
#define SRSSLT_WDT_CONTROL_WDT_RESET0_Msk      0x8UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLE1_Pos     8UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLE1_Msk     0x100UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLED1_Pos    9UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLED1_Msk    0x200UL
#define SRSSLT_WDT_CONTROL_WDT_INT1_Pos        10UL
#define SRSSLT_WDT_CONTROL_WDT_INT1_Msk        0x400UL
#define SRSSLT_WDT_CONTROL_WDT_RESET1_Pos      11UL
#define SRSSLT_WDT_CONTROL_WDT_RESET1_Msk      0x800UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLE2_Pos     16UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLE2_Msk     0x10000UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLED2_Pos    17UL
#define SRSSLT_WDT_CONTROL_WDT_ENABLED2_Msk    0x20000UL
#define SRSSLT_WDT_CONTROL_WDT_INT2_Pos        18UL
#define SRSSLT_WDT_CONTROL_WDT_INT2_Msk        0x40000UL
#define SRSSLT_WDT_CONTROL_WDT_RESET2_Pos      19UL
#define SRSSLT_WDT_CONTROL_WDT_RESET2_Msk      0x80000UL
/* SRSSLT.RES_CAUSE */
#define SRSSLT_RES_CAUSE_RESET_WDT_Pos          0UL
#define SRSSLT_RES_CAUSE_RESET_WDT_Msk          0x1UL
#define SRSSLT_RES_CAUSE_RESET_PROT_FAULT_Pos   3UL
#define SRSSLT_RES_CAUSE_RESET_PROT_FAULT_Msk   0x8UL
#define SRSSLT_RES_CAUSE_RESET_SOFT_Pos         4UL
#define SRSSLT_RES_CAUSE_RESET_SOFT_Msk         0x10UL
/* SRSSLT.PWR_BG_TRIM1 */
#define SRSSLT_PWR_BG_TRIM1_INL_TRIM_MAIN_Pos   0UL
#define SRSSLT_PWR_BG_TRIM1_INL_TRIM_MAIN_Msk   0x7UL
#define SRSSLT_PWR_BG_TRIM1_INL_CROSS_MAIN_Pos  3UL
#define SRSSLT_PWR_BG_TRIM1_INL_CROSS_MAIN_Msk  0x78UL
/* SRSSLT.PWR_BG_TRIM2 */
#define SRSSLT_PWR_BG_TRIM2_VCTAT_SLOPE_Pos       0UL
#define SRSSLT_PWR_BG_TRIM2_VCTAT_SLOPE_Msk       0xFUL
#define SRSSLT_PWR_BG_TRIM2_VCTAT_VOLTAGE_Pos     4UL
#define SRSSLT_PWR_BG_TRIM2_VCTAT_VOLTAGE_Msk     0x30UL
#define SRSSLT_PWR_BG_TRIM2_VCTAT_ENABLE_Pos      6UL
#define SRSSLT_PWR_BG_TRIM2_VCTAT_ENABLE_Msk      0x40UL
#define SRSSLT_PWR_BG_TRIM2_VCTAT_VOLTAGE_MSB_Pos 7UL
#define SRSSLT_PWR_BG_TRIM2_VCTAT_VOLTAGE_MSB_Msk 0x80UL
/* SRSSLT.PWR_BG_TRIM3 */
#define SRSSLT_PWR_BG_TRIM3_INL_TRIM_IMO_Pos     0UL
#define SRSSLT_PWR_BG_TRIM3_INL_TRIM_IMO_Msk     0x7UL
#define SRSSLT_PWR_BG_TRIM3_INL_CROSS_IMO_Pos    3UL
#define SRSSLT_PWR_BG_TRIM3_INL_CROSS_IMO_Msk    0x78UL
/* SRSSLT.PWR_BG_TRIM4 */
#define SRSSLT_PWR_BG_TRIM4_ABS_TRIM_IMO_Pos     0UL
#define SRSSLT_PWR_BG_TRIM4_ABS_TRIM_IMO_Msk     0x3FUL
/* SRSSLT.PWR_BG_TRIM5 */
#define SRSSLT_PWR_BG_TRIM5_TMPCO_TRIM_IMO_Pos   0UL
#define SRSSLT_PWR_BG_TRIM5_TMPCO_TRIM_IMO_Msk   0x3FUL
/* SRSSLT.CLK_ILO_TRIM */
#define SRSSLT_CLK_ILO_TRIM_TRIM_Pos            0UL
#define SRSSLT_CLK_ILO_TRIM_TRIM_Msk            0xFUL
#define SRSSLT_CLK_ILO_TRIM_COARSE_TRIM_Pos     4UL
#define SRSSLT_CLK_ILO_TRIM_COARSE_TRIM_Msk     0xF0UL
/* SRSSLT.CLK_IMO_TRIM1 */
#define SRSSLT_CLK_IMO_TRIM1_OFFSET_Pos         0UL
#define SRSSLT_CLK_IMO_TRIM1_OFFSET_Msk         0xFFUL
/* SRSSLT.CLK_IMO_TRIM2 */
#define SRSSLT_CLK_IMO_TRIM2_FREQ_Pos           0UL
#define SRSSLT_CLK_IMO_TRIM2_FREQ_Msk           0x3FUL
/* SRSSLT.CLK_IMO_TRIM3 */
#define SRSSLT_CLK_IMO_TRIM3_TRIM_CLK36_Pos     0UL
#define SRSSLT_CLK_IMO_TRIM3_TRIM_CLK36_Msk     0xFUL
/* SRSSLT.CLK_IMO_TRIM4 */
#define SRSSLT_CLK_IMO_TRIM4_GAIN_Pos           0UL
#define SRSSLT_CLK_IMO_TRIM4_GAIN_Msk           0x1FUL
#define SRSSLT_CLK_IMO_TRIM4_FSOFFSET_Pos       5UL
#define SRSSLT_CLK_IMO_TRIM4_FSOFFSET_Msk       0x60UL
/* SRSSLT.CLK_IMO_TRIM3 */
#define SRSSLT_CLK_IMO_TRIM3_STEPSIZE_Pos       0UL
#define SRSSLT_CLK_IMO_TRIM3_STEPSIZE_Msk       0x1FUL
#define SRSSLT_CLK_IMO_TRIM3_TCTRIM_Pos         5UL
#define SRSSLT_CLK_IMO_TRIM3_TCTRIM_Msk         0x60UL
/* SRSSLT.PWR_RSVD_TRIM */
#define SRSSLT_PWR_RSVD_TRIM_RSVD_TRIM_Pos     0UL
#define SRSSLT_PWR_RSVD_TRIM_RSVD_TRIM_Msk     0xFUL


#endif /* _CYIP_SRSSLT_H_ */


/* [] END OF FILE */
