/*
 * Copyright (c) 2019 Vestas Wind Systems A/S
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* SoC level DTS fixup file */
#define DT_NUM_IRQ_PRIO_BITS			DT_ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

#define DT_RTC_0_NAME				DT_LABEL(DT_INST(0, nxp_kinetis_rtc))

#define DT_FLASH_DEV_BASE_ADDRESS		DT_NXP_KINETIS_FTFE_40020000_BASE_ADDRESS
#define DT_FLASH_DEV_NAME			DT_NXP_KINETIS_FTFE_40020000_LABEL

#define DT_ADC_0_NAME				DT_NXP_KINETIS_ADC12_4003B000_LABEL
#define DT_ADC_1_NAME				DT_NXP_KINETIS_ADC12_40027000_LABEL
#define DT_ADC_2_NAME				DT_NXP_KINETIS_ADC12_4003C000_LABEL

#define DT_WDT_0_NAME				DT_NXP_KINETIS_WDOG32_40052000_LABEL

#define DT_CAN_0_NAME				DT_NXP_KINETIS_FLEXCAN_40024000_LABEL
#define DT_CAN_1_NAME				DT_NXP_KINETIS_FLEXCAN_40025000_LABEL