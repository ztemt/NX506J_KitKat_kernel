/* Copyright (c) 2011-2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef AK4961_CODEC_DIGITAL_H

#define AK4961_CODEC_DIGITAL_H

#define	FLOW_CONTROL_1				(0x0000)
#define	FLOW_CONTROL_2				(0x0001)
#define	FLOW_CONTROL_3				(0x0002)
#define	POWER_MANAGEMENT_1			(0x0003)
#define	POWER_MANAGEMENT_2			(0x0004)
#define	POWER_MANAGEMENT_3			(0x0005)
#define	POWER_MANAGEMENT_4			(0x0006)
#define	POWER_MANAGEMENT_5			(0x0007)
#define	POWER_MANAGEMENT_6			(0x0008)
#define	POWER_MANAGEMENT_7			(0x0009)
#define	POWER_MANAGEMENT_8			(0x000A)
#define	POWER_MANAGEMENT_9			(0x000B)
#define	POWER_MANAGEMENT_10			(0x000C)
#define LINEOUT2_SETTING			(0x000D)
#define	OUTPUT_MODE_SETTING			(0x000E)
#define	MIC_POWER_LEVEL				(0x000F)
#define	MIC_AMP_1_LCH_GAIN			(0x0010)
#define	MIC_AMP_1_RCH_GAIN			(0x0011)
#define	MIC_AMP_2_LCH_GAIN			(0x0012)
#define	MIC_AMP_2_RCH_GAIN			(0x0013)
#define	CHARGE_PUMP_1_SETTING_1		(0x0016)
#define	CLOCK_MODE_SELECT			(0x001A)
#define	DIGITAL_FILTER_SELECT_1		(0x001B)
#define	DIGITAL_FILTER_SELECT_2		(0x001C)
#define	DIGITAL_FILTER_SELECT_3		(0x001D)
#define	DIGITAL_MIC_1				(0x001E)
#define	DIGITAL_MIC_2				(0x001F)
#define	DAC1_MONO_MIXING			(0x0020)
#define	DAC2_MONO_MIXING			(0x0021)
#define	OUTPUT_VOLUME_SETTING		(0x0022)
#define	CHARGE_PUMP_2_SETTING_1		(0x0023)
#define	CHARGE_PUMP_2_SETTING_2		(0x0024)
#define	CHARGE_PUMP_3_SETTING_1		(0x0025)
#define	MODE_CONTROL				(0x0026)
#define JITTER_CLEANER_SETTING_1	(0x002C)
#define JITTER_CLEANER_SETTING_2	(0x002D)
#define JITTER_CLEANER_SETTING_3	(0x002E)
#define DETECTION_EVENT_RESET		(0x002F)
#define EVENT_MASK_SETTING			(0x0030)
#define DETECTION_POWER_MANAGEMENT	(0x0031)
#define	DETECTION_SETTING_1			(0x0032)
#define	DETECTION_SETTING_2			(0x0033)
#define	MIC_INPUT_SELECTOR_1		(0x0034)
#define	MIC_INPUT_SELECTOR_2		(0x0035)
#define	LCH_OUTPUT_VOLUME_1			(0x0036)
#define	RCH_OUTPUT_VOLUME_1			(0x0037)
#define	LCH_OUTPUT_VOLUME_2			(0x0038)
#define	RCH_OUTPUT_VOLUME_2			(0x0039)
#define	HP_VOLUME_CONTROL			(0x003A)
#define	LINEOUT1_VOLUME_CONTROL		(0x003B)
#define	LINEOUT2_VOLUME_CONTROL		(0x003C)
#define PLL1_SOURCE_SELECTOR		(0x003E)
#define PLL1_REF_DIVISOR_H8			(0x003F)
#define PLL1_REF_DIVISOR_L8			(0x0040)
#define PLL1_FB_DIVISOR_H8			(0x0041)
#define PLL1_FB_DIVISOR_L8			(0x0042)
#define PLL2_SOURCE_SELECTOR		(0x0043)
#define PLL2_REF_DIVISOR_H8			(0x0044)
#define PLL2_REF_DIVISOR_L8			(0x0045)
#define PLL2_FB_DIVISOR_H8			(0x0046)
#define PLL2_FB_DIVISOR_L8			(0x0047)
#define MSYNC1_MSN_CKS				(0x0048)
#define MSYNC1_BDV					(0x0049)
#define MSYNC1_SDV					(0x004A)
#define MSYNC2_MSN_CKS				(0x004B)
#define MSYNC2_BDV					(0x004C)
#define MSYNC2_SDV					(0x004D)
#define MSYNC3_MSN_CKS				(0x004E)
#define MSYNC3_BDV					(0x004F)
#define MSYNC3_SDV					(0x0050)
#define MSYNC4_MSN_CKS				(0x0051)
#define MSYNC4_BDV					(0x0052)
#define MSYNC4_SDV					(0x0053)
#define MSYNC5_MSN_CKS				(0x0054)
#define MSYNC5_BDV					(0x0055)
#define MSYNC5_SDV					(0x0056)
#define MSYNC6_MSN_CKS				(0x0057)
#define MSYNC6_BDV					(0x0058)
#define MSYNC6_SDV					(0x0059)
#define MSYNC7_MSN_CKS				(0x005A)
#define MSYNC7_BDV					(0x005B)
#define MSYNC7_SDV					(0x005C)
#define MCKO_SOURCE_SELECTOR		(0x0062)
#define MCKO_DIVIDER				(0x0063)
#define CDCMCLK_SOURCE_SELECTOR		(0x0064)
#define CDCMCLK_DIVIDER				(0x0065)
#define DSPMCLK_SOURCE_SELECTOR		(0x0066)
#define BUSMCLK_DIVIDER				(0x0067)
#define SYNC_DOMAIN_SELECTOR1		(0x0068)
#define SYNC_DOMAIN_SELECTOR2		(0x0069)
#define SYNC_DOMAIN_SELECTOR3		(0x006A)
#define SYNC_DOMAIN_SELECTOR4		(0x006B)
#define SYNC_DOMAIN_SELECTOR5		(0x006C)
#define SYNC_DOMAIN_SELECTOR6		(0x006D)
#define SYNC_DOMAIN_SELECTOR7		(0x006E)
#define SYNC_DOMAIN_SELECTOR8		(0x006F)
#define SDTO1A_SOURCE_SELECTOR		(0x0072)
#define SDTO1B_SOURCE_SELECTOR		(0x0073)
#define SDTO2_SOURCE_SELECTOR		(0x0074)
#define SDTO3_SOURCE_SELECTOR		(0x0075)
#define SDTO4_SOURCE_SELECTOR		(0x0076)
#define SBO1_SOURCE_SELECTOR		(0x0077)
#define SBO2_SOURCE_SELECTOR		(0x0078)
#define DAC1_SOURCE_SELECTOR		(0x0079)
#define DAC2_SOURCE_SELECTOR		(0x007A)
#define DSPI1_SOURCE_SELECTOR		(0x007B)
#define DSPI2_SOURCE_SELECTOR		(0x007C)
#define DSPI3_SOURCE_SELECTOR		(0x007D)
#define DSPI4_SOURCE_SELECTOR		(0x007E)
#define DSPI5_SOURCE_SELECTOR		(0x007F)
#define MIXAI1_SOURCE_SELECTOR		(0x0080)
#define MIXAI2_SOURCE_SELECTOR		(0x0081)
#define MIXBI1_SOURCE_SELECTOR		(0x0082)
#define MIXBI2_SOURCE_SELECTOR		(0x0083)
#define SRCAI_SOURCE_SELECTOR		(0x0084)
#define SRCBI_SOURCE_SELECTOR		(0x0085)
#define SRCCI_SOURCE_SELECTOR		(0x0086)
#define SRCDI_SOURCE_SELECTOR		(0x0087)
#define VAD_SOURCE_SELECTOR		(0x0088)
#define SDTO1_AIF_FORMAT			(0x008B)
#define SDTO2_AIF_FORMAT			(0x008C)
#define SDTO3_AIF_FORMAT			(0x008D)
#define SDTO4_AIF_FORMAT			(0x008E)
#define CODEC_AIF_FORMAT			(0x008F)
#define SRC_CLK_SETTING				(0x0090)
#define SRC_MUTE_CONTROL			(0x0091)
#define MIXER_A_CONTROL				(0x0092)
#define MIXER_B_CONTROL				(0x0093)
#define DSP_SETTING1				(0x0094)
#define DSP_SETTING2				(0x0095)
#define DSP_SETTING3				(0x0096)
#define DSP_SETTING4				(0x0097)
#define DSP_SETTING5				(0x0098)
#define VIRTUAL_ADDRESS_CONTROL		(0x0099)
#define PAGE_SETTING				(0x009A)
#define EXTERNAL_JUMP				(0x009B)
#define RUN_STATE_DATA_LENGTH		(0x009C)
#define RUN_STATE_START_ADDR1		(0x009D)
#define RUN_STATE_START_ADDR2		(0x009E)
#define RUN_STATE_DATA_1			(0x009F)
#define RUN_STATE_DATA_2			(0x00A0)
#define RUN_STATE_DATA_3			(0x00A1)
#define RUN_STATE_DATA_4			(0x00A2)
#define RUN_STATE_DATA_5			(0x00A3)
#define RUN_STATE_DATA_6			(0x00A4)
#define RUN_STATE_DATA_7			(0x00A5)
#define RUN_STATE_DATA_8			(0x00A6)
#define RUN_STATE_DATA_9			(0x00A7)
#define RUN_STATE_DATA_10			(0x00A8)
#define RUN_STATE_DATA_11			(0x00A9)
#define RUN_STATE_DATA_12			(0x00AA)
#define RUN_STATE_DATA_13			(0x00AB)
#define RUN_STATE_DATA_14			(0x00AC)
#define RUN_STATE_DATA_15			(0x00AD)
#define RUN_STATE_DATA_16			(0x00AE)
#define RUN_STATE_DATA_17			(0x00AF)
#define RUN_STATE_DATA_18			(0x00B0)
#define RUN_STATE_DATA_19			(0x00B1)
#define RUN_STATE_DATA_20			(0x00B2)
#define RUN_STATE_DATA_21			(0x00B3)
#define RUN_STATE_DATA_22			(0x00B4)
#define RUN_STATE_DATA_23			(0x00B5)
#define RUN_STATE_DATA_24			(0x00B6)
#define RUN_STATE_DATA_25			(0x00B7)
#define RUN_STATE_DATA_26			(0x00B8)
#define RUN_STATE_DATA_27			(0x00B9)
#define RUN_STATE_DATA_28			(0x00BA)
#define RUN_STATE_DATA_29			(0x00BB)
#define RUN_STATE_DATA_30			(0x00BC)
#define RUN_STATE_DATA_31			(0x00BD)
#define RUN_STATE_DATA_32			(0x00BE)
#define RUN_STATE_DATA_33			(0x00BF)
#define RUN_STATE_DATA_34			(0x00C0)
#define RUN_STATE_DATA_35			(0x00C1)
#define RUN_STATE_DATA_36			(0x00C2)
#define RUN_STATE_DATA_37			(0x00C3)
#define RUN_STATE_DATA_38			(0x00C4)
#define RUN_STATE_DATA_39			(0x00C5)
#define RUN_STATE_DATA_40			(0x00C6)
#define RUN_STATE_DATA_41			(0x00C7)
#define RUN_STATE_DATA_42			(0x00C8)
#define RUN_STATE_DATA_43			(0x00C9)
#define RUN_STATE_DATA_44			(0x00CA)
#define RUN_STATE_DATA_45			(0x00CB)
#define RUN_STATE_DATA_46			(0x00CC)
#define RUN_STATE_DATA_47			(0x00CD)
#define RUN_STATE_DATA_48			(0x00CE)
#define CRAM_RUN_EXE				(0x00CF)
#define OFFREG_RUN_EXE				(0x00D0)
#define PRAM_READY					(0x00D1)
#define	MIR_HOLD					(0x00D2)
#define CRC_RESULT_H8				(0x00D3)
#define CRC_RESULT_L8				(0x00D4)
#define DEVICE_CODE					(0x00D5)
#define HARDWARE_KEY				(0x00D6)
#define	JACK_DETECTION_EVENT		(0x00D7)
#define JACK_DETECTION_STATUS		(0x00D8)
#define MIC_LEVEL_DETECTION			(0x00D9)
#define DSP_STATUS					(0x00DA)
#define SRC_STATUS					(0x00DB)
#define MIR1_REGISTER_1				(0x00DC)
#define MIR1_REGISTER_2				(0x00DD)
#define MIR1_REGISTER_3				(0x00DE)
#define MIR1_REGISTER_4				(0x00DF)
#define MIR2_REGISTER_1				(0x00E0)
#define MIR2_REGISTER_2				(0x00E1)
#define MIR2_REGISTER_3				(0x00E2)
#define MIR2_REGISTER_4				(0x00E3)
#define MIR3_REGISTER_1				(0x00E4)
#define MIR3_REGISTER_2				(0x00E5)
#define MIR3_REGISTER_3				(0x00E6)
#define MIR3_REGISTER_4				(0x00E7)
#define MIR4_REGISTER_1				(0x00E8)
#define MIR4_REGISTER_2				(0x00E9)
#define MIR4_REGISTER_3				(0x00EA)
#define MIR4_REGISTER_4				(0x00EB)
#define VAD_SETTING_1				(0x00F0)
#define VAD_SETTING_2				(0x00F1)
#define VAD_SETTING_3				(0x00F2)
#define VAD_SETTING_4				(0x00F3)
#define VAD_SETTING_5				(0x00F4)
#define VAD_SETTING_6				(0x00F5)
#define VAD_SETTING_7				(0x00F6)
#define VAD_SETTING_8				(0x00F7)
#define VAD_SETTING_9				(0x00F8)
#define VAD_SETTING_10				(0x00F9)
#define VAD_HPF_SETTING_1			(0x00FA)
#define VAD_HPF_SETTING_2			(0x00FB)
#define VAD_HPF_SETTING_3			(0x00FC)
#define VAD_HPF_SETTING_4			(0x00FD)
#define VAD_HPF_SETTING_5			(0x00FE)
#define VAD_HPF_SETTING_6			(0x00FF)
#define CREG0_SETTING				(0x0100)
#define CREG1_SETTING_H8			(0x0101)
#define CREG1_SETTING_L8			(0x0102)
#define CREG2_SETTING_H8			(0x0103)
#define CREG2_SETTING_L8			(0x0104)
#define CREG3_SETTING				(0x0105)
#define CREG4_SETTING				(0x0106)
#define CREG5_SETTING				(0x0107)
#define CREG6_SETTING				(0x0108)
#define CREG7_SETTING				(0x0109)

/* Default Value */
#define	FLOW_CONTROL_1_POR			(0x00)
#define	FLOW_CONTROL_2_POR			(0x00)
#define	FLOW_CONTROL_3_POR			(0x00)
#define	POWER_MANAGEMENT_1_POR			(0x00)
#define	POWER_MANAGEMENT_2_POR			(0x00)
#define	POWER_MANAGEMENT_3_POR			(0x00)
#define	POWER_MANAGEMENT_4_POR			(0x00)
#define	POWER_MANAGEMENT_5_POR			(0x00)
#define	POWER_MANAGEMENT_6_POR			(0x00)
#define	POWER_MANAGEMENT_7_POR			(0x00)
#define	POWER_MANAGEMENT_8_POR			(0x00)
#define	POWER_MANAGEMENT_9_POR			(0x00)
#define	POWER_MANAGEMENT_10_POR			(0x00)
#define	LINEOUT2_SETTING_POR			(0x00)
#define	OUTPUT_MODE_SETTING_POR			(0x00)
#define	MIC_POWER_LEVEL_POR			(0x00)
#define	MIC_AMP_1_LCH_GAIN_POR			(0x00)
#define	MIC_AMP_1_RCH_GAIN_POR			(0x00)
#define	MIC_AMP_2_LCH_GAIN_POR			(0x00)
#define	MIC_AMP_2_RCH_GAIN_POR			(0x00)
#define	CHARGE_PUMP_1_SETTING_1_POR			(0x00)
#define	CLOCK_MODE_SELECT_POR			(0x00)
#define	DIGITAL_FILTER_SELECT_1_POR			(0x00)
#define	DIGITAL_FILTER_SELECT_2_POR			(0x00)
#define	DIGITAL_FILTER_SELECT_3_POR			(0x00)
#define	DIGITAL_MIC_1_POR			(0x00)
#define	DIGITAL_MIC_2_POR			(0x00)
#define	DAC1_MONO_MIXING_POR			(0x00)
#define	DAC2_MONO_MIXING_POR			(0x00)
#define	OUTPUT_VOLUME_SETTING_POR			(0x00)
#define	CHARGE_PUMP_2_SETTING_1_POR			(0x00)
#define	CHARGE_PUMP_2_SETTING_2_POR			(0x00)
#define	CHARGE_PUMP_3_SETTING_1_POR			(0x00)
#define	MODE_CONTROL_POR			(0x00)
#define	JITTER_CLEANER_SETTING_1_POR			(0x00)
#define	JITTER_CLEANER_SETTING_2_POR			(0x00)
#define	JITTER_CLEANER_SETTING_3_POR			(0x00)
#define	DETECTION_EVENT_RESET_POR			(0x00)
#define	EVENT_MASK_SETTING_POR			(0x00)
#define	DETECTION_POWER_MANAGEMENT_POR			(0x00)
#define	DETECTION_SETTING_1_POR			(0x00)
#define	DETECTION_SETTING_2_POR			(0x00)
#define	MIC_INPUT_SELECTOR_1_POR			(0x10)
#define	MIC_INPUT_SELECTOR_2_POR			(0x02)
#define	LCH_OUTPUT_VOLUME_1_POR			(0x19)
#define	RCH_OUTPUT_VOLUME_1_POR			(0x19)
#define	LCH_OUTPUT_VOLUME_2_POR			(0x19)
#define	RCH_OUTPUT_VOLUME_2_POR			(0x19)
#define	HP_VOLUME_CONTROL_POR			(0x75)
#define	LINEOUT1_VOLUME_CONTROL_POR			(0x05)
#define	LINEOUT2_VOLUME_CONTROL_POR			(0x55)
#define	PLL1_SOURCE_SELECTOR_POR			(0x00)
#define	PLL1_REF_DIVISOR_H8_POR			(0x00)
#define	PLL1_REF_DIVISOR_L8_POR			(0x00)
#define	PLL1_FB_DIVISOR_H8_POR			(0x00)
#define	PLL1_FB_DIVISOR_L8_POR			(0x00)
#define	PLL2_SOURCE_SELECTOR_POR			(0x00)
#define	PLL2_REF_DIVISOR_H8_POR			(0x00)
#define	PLL2_REF_DIVISOR_L8_POR			(0x00)
#define	PLL2_FB_DIVISOR_H8_POR			(0x00)
#define	PLL2_FB_DIVISOR_L8_POR			(0x00)
#define	MSYNC1_MSN_CKS_POR			(0x00)
#define	MSYNC1_BDV_POR			(0x00)
#define	MSYNC1_SDV_POR			(0x00)
#define	MSYNC2_MSN_CKS_POR			(0x00)
#define	MSYNC2_BDV_POR			(0x00)
#define	MSYNC2_SDV_POR			(0x00)
#define	MSYNC3_MSN_CKS_POR			(0x00)
#define	MSYNC3_BDV_POR			(0x00)
#define	MSYNC3_SDV_POR			(0x00)
#define	MSYNC4_MSN_CKS_POR			(0x00)
#define	MSYNC4_BDV_POR			(0x00)
#define	MSYNC4_SDV_POR			(0x00)
#define	MSYNC5_MSN_CKS_POR			(0x20)
#define	MSYNC5_BDV_POR			(0x00)
#define	MSYNC5_SDV_POR			(0x00)
#define	MSYNC6_MSN_CKS_POR			(0x20)
#define	MSYNC6_BDV_POR			(0x00)
#define	MSYNC6_SDV_POR			(0x00)
#define	MSYNC7_MSN_CKS_POR			(0x20)
#define	MSYNC7_BDV_POR			(0x00)
#define	MSYNC7_SDV_POR			(0x00)
#define	MCKO_SOURCE_SELECTOR_POR			(0x00)
#define	MCKO_DIVIDER_POR			(0x00)
#define	CDCMCLK_SOURCE_SELECTOR_POR			(0x00)
#define	CDCMCLK_DIVIDER_POR			(0x00)
#define	DSPMCLK_SOURCE_SELECTOR_POR			(0x00)
#define	BUSMCLK_DIVIDER_POR			(0x03)
#define	SYNC_DOMAIN_SELECTOR1_POR			(0x00)
#define	SYNC_DOMAIN_SELECTOR2_POR			(0x00)
#define	SYNC_DOMAIN_SELECTOR3_POR			(0x00)
#define	SYNC_DOMAIN_SELECTOR4_POR			(0x00)
#define	SYNC_DOMAIN_SELECTOR5_POR			(0x00)
#define	SYNC_DOMAIN_SELECTOR6_POR			(0x00)
#define	SYNC_DOMAIN_SELECTOR7_POR			(0x10)
#define	SYNC_DOMAIN_SELECTOR8_POR			(0x00)
#define	SDTO1A_SOURCE_SELECTOR_POR			(0x00)
#define	SDTO1B_SOURCE_SELECTOR_POR			(0x00)
#define	SDTO2_SOURCE_SELECTOR_POR			(0x00)
#define	SDTO3_SOURCE_SELECTOR_POR			(0x00)
#define	SDTO4_SOURCE_SELECTOR_POR			(0x00)
#define	SBO1_SOURCE_SELECTOR_POR			(0x00)
#define	SBO2_SOURCE_SELECTOR_POR			(0x00)
#define	DAC1_SOURCE_SELECTOR_POR			(0x00)
#define	DAC2_SOURCE_SELECTOR_POR			(0x00)
#define	DSPI1_SOURCE_SELECTOR_POR			(0x29)
#define	DSPI2_SOURCE_SELECTOR_POR			(0x00)
#define	DSPI3_SOURCE_SELECTOR_POR			(0x0A)
#define	DSPI4_SOURCE_SELECTOR_POR			(0x00)
#define	DSPI5_SOURCE_SELECTOR_POR			(0x00)
#define	MIXAI1_SOURCE_SELECTOR_POR			(0x00)
#define	MIXAI2_SOURCE_SELECTOR_POR			(0x00)
#define	MIXBI1_SOURCE_SELECTOR_POR			(0x00)
#define	MIXBI2_SOURCE_SELECTOR_POR			(0x00)
#define	SRCAI_SOURCE_SELECTOR_POR			(0x00)
#define	SRCBI_SOURCE_SELECTOR_POR			(0x00)
#define	SRCCI_SOURCE_SELECTOR_POR			(0x00)
#define	SRCDI_SOURCE_SELECTOR_POR			(0x00)
#define	VAD_SOURCE_SELECTOR_POR			(0x00)
#define	SDTO1_AIF_FORMAT_POR			(0x00)
#define	SDTO2_AIF_FORMAT_POR			(0x00)
#define	SDTO3_AIF_FORMAT_POR			(0x00)
#define	SDTO4_AIF_FORMAT_POR			(0x00)
#define	CODEC_AIF_FORMAT_POR			(0x00)
#define	SRC_CLK_SETTING_POR			(0x00)
#define	SRC_MUTE_CONTROL_POR			(0x00)
#define	MIXER_A_CONTROL_POR			(0x00)
#define	MIXER_B_CONTROL_POR			(0x00)
#define	DSP_SETTING1_POR			(0x00)
#define	DSP_SETTING2_POR			(0x00)
#define	DSP_SETTING3_POR			(0x00)
#define	DSP_SETTING4_POR			(0x00)
#define	DSP_SETTING5_POR			(0x00)
#define	VIRTUAL_ADDRESS_CONTROL_POR			(0x00)
#define	PAGE_SETTING_POR			(0x00)
#define	EXTERNAL_JUMP_POR			(0x00)
#define	RUN_STATE_DATA_LENGTH_POR			(0x00)
#define	RUN_STATE_START_ADDR1_POR			(0x00)
#define	RUN_STATE_START_ADDR2_POR			(0x00)
#define	RUN_STATE_DATA_1_POR			(0x00)
#define	RUN_STATE_DATA_2_POR			(0x00)
#define	RUN_STATE_DATA_3_POR			(0x00)
#define	RUN_STATE_DATA_4_POR			(0x00)
#define	RUN_STATE_DATA_5_POR			(0x00)
#define	RUN_STATE_DATA_6_POR			(0x00)
#define	RUN_STATE_DATA_7_POR			(0x00)
#define	RUN_STATE_DATA_8_POR			(0x00)
#define	RUN_STATE_DATA_9_POR			(0x00)
#define	RUN_STATE_DATA_10_POR			(0x00)
#define	RUN_STATE_DATA_11_POR			(0x00)
#define	RUN_STATE_DATA_12_POR			(0x00)
#define	RUN_STATE_DATA_13_POR			(0x00)
#define	RUN_STATE_DATA_14_POR			(0x00)
#define	RUN_STATE_DATA_15_POR			(0x00)
#define	RUN_STATE_DATA_16_POR			(0x00)
#define	RUN_STATE_DATA_17_POR			(0x00)
#define	RUN_STATE_DATA_18_POR			(0x00)
#define	RUN_STATE_DATA_19_POR			(0x00)
#define	RUN_STATE_DATA_20_POR			(0x00)
#define	RUN_STATE_DATA_21_POR			(0x00)
#define	RUN_STATE_DATA_22_POR			(0x00)
#define	RUN_STATE_DATA_23_POR			(0x00)
#define	RUN_STATE_DATA_24_POR			(0x00)
#define	RUN_STATE_DATA_25_POR			(0x00)
#define	RUN_STATE_DATA_26_POR			(0x00)
#define	RUN_STATE_DATA_27_POR			(0x00)
#define	RUN_STATE_DATA_28_POR			(0x00)
#define	RUN_STATE_DATA_29_POR			(0x00)
#define	RUN_STATE_DATA_30_POR			(0x00)
#define	RUN_STATE_DATA_31_POR			(0x00)
#define	RUN_STATE_DATA_32_POR			(0x00)
#define	RUN_STATE_DATA_33_POR			(0x00)
#define	RUN_STATE_DATA_34_POR			(0x00)
#define	RUN_STATE_DATA_35_POR			(0x00)
#define	RUN_STATE_DATA_36_POR			(0x00)
#define	RUN_STATE_DATA_37_POR			(0x00)
#define	RUN_STATE_DATA_38_POR			(0x00)
#define	RUN_STATE_DATA_39_POR			(0x00)
#define	RUN_STATE_DATA_40_POR			(0x00)
#define	RUN_STATE_DATA_41_POR			(0x00)
#define	RUN_STATE_DATA_42_POR			(0x00)
#define	RUN_STATE_DATA_43_POR			(0x00)
#define	RUN_STATE_DATA_44_POR			(0x00)
#define	RUN_STATE_DATA_45_POR			(0x00)
#define	RUN_STATE_DATA_46_POR			(0x00)
#define	RUN_STATE_DATA_47_POR			(0x00)
#define	RUN_STATE_DATA_48_POR			(0x00)
#define	CRAM_RUN_EXE_POR			(0x00)
#define	OFFREG_RUN_EXE_POR			(0x00)
#define	PRAM_READY_POR			(0x00)
#define	MIR_HOLD_POR			(0x00)
#define	CRC_RESULT_H8_POR			(0x00)
#define	CRC_RESULT_L8_POR			(0x00)
#define	DEVICE_CODE_POR			(0x61)
#define	HARDWARE_KEY_POR			(0x00)
#define	JACK_DETECTION_EVENT_POR			(0x00)
#define	JACK_DETECTION_STATUS_POR			(0x00)
#define	MIC_LEVEL_DETECTION_POR			(0x00)
#define	DSP_STATUS_POR			(0x00)
#define	SRC_STATUS_POR			(0x00)
#define	MIR1_REGISTER_1_POR			(0x00)
#define	MIR1_REGISTER_2_POR			(0x00)
#define	MIR1_REGISTER_3_POR			(0x00)
#define	MIR1_REGISTER_4_POR			(0x08)
#define	MIR2_REGISTER_1_POR			(0x00)
#define	MIR2_REGISTER_2_POR			(0x00)
#define	MIR2_REGISTER_3_POR			(0x00)
#define	MIR2_REGISTER_4_POR			(0x08)
#define	MIR3_REGISTER_1_POR			(0x00)
#define	MIR3_REGISTER_2_POR			(0x00)
#define	MIR3_REGISTER_3_POR			(0x00)
#define	MIR3_REGISTER_4_POR			(0x08)
#define	MIR4_REGISTER_1_POR			(0x00)
#define	MIR4_REGISTER_2_POR			(0x00)
#define	MIR4_REGISTER_3_POR			(0x00)
#define	MIR4_REGISTER_4_POR			(0x08)
#define	VAD_SETTING_1_POR			(0x00)
#define	VAD_SETTING_2_POR			(0x00)
#define	VAD_SETTING_3_POR			(0x00)
#define	VAD_SETTING_4_POR			(0x00)
#define	VAD_SETTING_5_POR			(0x00)
#define	VAD_SETTING_6_POR			(0x00)
#define	VAD_SETTING_7_POR			(0x00)
#define	VAD_SETTING_8_POR			(0x00)
#define	VAD_SETTING_9_POR			(0x00)
#define	VAD_SETTING_10_POR			(0x00)
#define	VAD_HPF_SETTING_1_POR			(0x00)
#define	VAD_HPF_SETTING_2_POR			(0x00)
#define	VAD_HPF_SETTING_3_POR			(0x00)
#define	VAD_HPF_SETTING_4_POR			(0x00)
#define	VAD_HPF_SETTING_5_POR			(0x00)
#define	VAD_HPF_SETTING_6_POR			(0x00)
#define	CREG0_SETTING_POR			(0x00)
#define	CREG1_SETTING_H8_POR			(0x00)
#define	CREG1_SETTING_L8_POR			(0x00)
#define	CREG2_SETTING_H8_POR			(0x00)
#define	CREG2_SETTING_L8_POR			(0x00)
#define	CREG3_SETTING_POR			(0x00)
#define	CREG4_SETTING_POR			(0x00)
#define	CREG5_SETTING_POR			(0x00)
#define	CREG6_SETTING_POR			(0x00)
#define	CREG7_SETTING_POR			(0x00)

#endif
