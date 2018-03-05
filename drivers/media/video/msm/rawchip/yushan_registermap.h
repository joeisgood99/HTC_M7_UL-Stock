/********************************************************************************
################################################################################
#                             (C) STMicroelectronics 2012
#
# This program is free software; you can redistribute it and/or modify it under
# the terms of the GNU General Public License version 2 and only version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
# details.
#
# You should have received a copy of the GNU General Public License along with
# this program; if not, write to the Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
#
#------------------------------------------------------------------------------
#                             Imaging Division
################################################################################
********************************************************************************/

#ifndef __yushan_registermap_H
#define __yushan_registermap_H

/* CLK_DIV_FACTOR 0x0 {Clock division factors} */
#define         YUSHAN_CLK_DIV_FACTOR	0x0
/* CLK_DIV_FACTOR_2 0x4 {Clock division factors continued} */
#define         YUSHAN_CLK_DIV_FACTOR_2	0x4
/* CLK_CTRL 0x8 {Clock controls} */
#define         YUSHAN_CLK_CTRL	0x8
/* RESET_CTRL 0xc {Soft reset controls} */
#define         YUSHAN_RESET_CTRL	0xc
/* PLL_CTRL_MAIN 0x10 {Main pll control register} */
#define         YUSHAN_PLL_CTRL_MAIN	0x10
/* PLL_LOOP_OUT_DF 0x14 {PLL Loop and Output Div Factors} */
#define         YUSHAN_PLL_LOOP_OUT_DF	0x14
/* PLL_SSCG_CTRL 0x18 {PLL SSCG controls} */
#define         YUSHAN_PLL_SSCG_CTRL	0x18
/* HOST_IF_SPI_CTRL 0x800 {SPI Control Register} */
#define         YUSHAN_HOST_IF_SPI_CTRL	0x800
/* HOST_IF_SPI_DEVADDR 0x804 {SPI Device Address} */
#define         YUSHAN_HOST_IF_SPI_DEVADDR	0x804
/* HOST_IF_SPI_BASE_ADDRESS 0x808 {SPI Base Address} */
#define         YUSHAN_HOST_IF_SPI_BASE_ADDRESS	0x808
/* ITM_CSI2RX_STATUS 0xc00 {CSI2RX Interrupt Status} */
#define         YUSHAN_ITM_CSI2RX_STATUS	0xc00
/* ITM_CSI2RX_EN_STATUS 0xc04 {CSI2RX Interrupt Active Status} */
#define         YUSHAN_ITM_CSI2RX_EN_STATUS	0xc04
/* ITM_CSI2RX_STATUS_BCLR 0xc08 {CSI2RX Interrupt Status Clear} */
#define         YUSHAN_ITM_CSI2RX_STATUS_BCLR	0xc08
/* ITM_CSI2RX_STATUS_BSET 0xc0c {CSI2RX Interrupt Status Set} */
#define         YUSHAN_ITM_CSI2RX_STATUS_BSET	0xc0c
/* ITM_CSI2RX_EN_STATUS_BCLR 0xc10 {CSI2RX Interrupt Active Status Clear} */
#define         YUSHAN_ITM_CSI2RX_EN_STATUS_BCLR	0xc10
/* ITM_CSI2RX_EN_STATUS_BSET 0xc14 {CSI2RX Interrupt Active Status Set} */
#define         YUSHAN_ITM_CSI2RX_EN_STATUS_BSET	0xc14
/* ITM_PDP_STATUS 0xc18 {DXO PDP Interrupt Status} */
#define         YUSHAN_ITM_PDP_STATUS	0xc18
/* ITM_PDP_EN_STATUS 0xc1c {DXO PDP Interrupt Active Status} */
#define         YUSHAN_ITM_PDP_EN_STATUS	0xc1c
/* ITM_PDP_STATUS_BCLR 0xc20 {DXO PDP Interrupt Clear Status} */
#define         YUSHAN_ITM_PDP_STATUS_BCLR	0xc20
/* ITM_PDP_STATUS_BSET 0xc24 {DXO PDP Interrupt Set Status} */
#define         YUSHAN_ITM_PDP_STATUS_BSET	0xc24
/* ITM_PDP_EN_STATUS_BCLR 0xc28 {DXO PDP Interrupt Active Status Clear} */
#define         YUSHAN_ITM_PDP_EN_STATUS_BCLR	0xc28
/* ITM_PDP_EN_STATUS_BSET 0xc2c {DXO PDP Interrupt Active Status Set} */
#define         YUSHAN_ITM_PDP_EN_STATUS_BSET	0xc2c
/* ITM_DPP_STATUS 0xc30 {DXO DPP Interrupt Status} */
#define         YUSHAN_ITM_DPP_STATUS	0xc30
/* ITM_DPP_EN_STATUS 0xc34 {DXO DPP Interrupt Active Status} */
#define         YUSHAN_ITM_DPP_EN_STATUS	0xc34
/* ITM_DPP_STATUS_BCLR 0xc38 {DXO DPP Interrupt Clear Status} */
#define         YUSHAN_ITM_DPP_STATUS_BCLR	0xc38
/* ITM_DPP_STATUS_BSET 0xc3c {DXO DPP Interrupt Set Status} */
#define         YUSHAN_ITM_DPP_STATUS_BSET	0xc3c
/* ITM_DPP_EN_STATUS_BCLR 0xc40 {DXO DPP Interrupt Active Status Clear} */
#define         YUSHAN_ITM_DPP_EN_STATUS_BCLR	0xc40
/* ITM_DPP_EN_STATUS_BSET 0xc44 {DXO DPP Interrupt Active Status Set} */
#define         YUSHAN_ITM_DPP_EN_STATUS_BSET	0xc44
/* ITM_DOP7_STATUS 0xc48 {DXO DOP7 Interrupt Status} */
#define         YUSHAN_ITM_DOP7_STATUS	0xc48
/* ITM_DOP7_EN_STATUS 0xc4c {DXO DOP7 Interrupt Active Status} */
#define         YUSHAN_ITM_DOP7_EN_STATUS	0xc4c
/* ITM_DOP7_STATUS_BCLR 0xc50 {DXO DOP7 Interrupt Clear Status} */
#define         YUSHAN_ITM_DOP7_STATUS_BCLR	0xc50
/* ITM_DOP7_STATUS_BSET 0xc54 {DXO DOP7 Interrupt Set Status} */
#define         YUSHAN_ITM_DOP7_STATUS_BSET	0xc54
/* ITM_DOP7_EN_STATUS_BCLR 0xc58 {DXO DOP7 Interrupt Active Status Clear} */
#define         YUSHAN_ITM_DOP7_EN_STATUS_BCLR	0xc58
/* ITM_DOP7_EN_STATUS_BSET 0xc5c {DXO DOP7 Interrupt Active Status Set} */
#define         YUSHAN_ITM_DOP7_EN_STATUS_BSET	0xc5c
/* ITM_CSI2TX_STATUS 0xc60 {CSI2TX Interrupt Status} */
#define         YUSHAN_ITM_CSI2TX_STATUS	0xc60
/* ITM_CSI2TX_EN_STATUS 0xc64 {CSI2TX Interrupt Active Status} */
#define         YUSHAN_ITM_CSI2TX_EN_STATUS	0xc64
/* ITM_CSI2TX_STATUS_BCLR 0xc68 {CSI2TX Interrupt Status Clear} */
#define         YUSHAN_ITM_CSI2TX_STATUS_BCLR	0xc68
/* ITM_CSI2TX_STATUS_BSET 0xc6c {CSI2TX Interrupt Status Set} */
#define         YUSHAN_ITM_CSI2TX_STATUS_BSET	0xc6c
/* ITM_CSI2TX_EN_STATUS_BCLR 0xc70 {CSI2TX Interrupt Active Status Clear} */
#define         YUSHAN_ITM_CSI2TX_EN_STATUS_BCLR	0xc70
/* ITM_CSI2TX_EN_STATUS_BSET 0xc74 {CSI2TX Interrupt Active Status Set} */
#define         YUSHAN_ITM_CSI2TX_EN_STATUS_BSET	0xc74
/* ITM_RX_PHY_STATUS 0xc78 {RX PHY Interrupt Status} */
#define         YUSHAN_ITM_RX_PHY_STATUS	0xc78
/* ITM_RX_PHY_EN_STATUS 0xc7c {RX PHY Active Interrupt Status} */
#define         YUSHAN_ITM_RX_PHY_EN_STATUS	0xc7c
/* ITM_RX_PHY_STATUS_BCLR 0xc80 {RX PHY Interrupt Status Clear} */
#define         YUSHAN_ITM_RX_PHY_STATUS_BCLR	0xc80
/* ITM_RX_PHY_STATUS_BSET 0xc84 {RX PHY Interrupt Status Set} */
#define         YUSHAN_ITM_RX_PHY_STATUS_BSET	0xc84
/* ITM_RX_PHY_EN_STATUS_BCLR 0xc88 {RX PHY Interrupt Active Status Clear} */
#define         YUSHAN_ITM_RX_PHY_EN_STATUS_BCLR	0xc88
/* ITM_RX_PHY_EN_STATUS_BSET 0xc8c {RX PHY Interrupt Active Status Set} */
#define         YUSHAN_ITM_RX_PHY_EN_STATUS_BSET	0xc8c
/* ITM_TX_PHY_STATUS 0xc90 {TX Phy Interrupt Status} */
#define         YUSHAN_ITM_TX_PHY_STATUS	0xc90
/* ITM_TX_PHY_EN_STATUS 0xc94 {TX Phy Active Interrupt Status} */
#define         YUSHAN_ITM_TX_PHY_EN_STATUS	0xc94
/* ITM_TX_PHY_STATUS_BCLR 0xc98 {TX Phy Interrupt Status Clear} */
#define         YUSHAN_ITM_TX_PHY_STATUS_BCLR	0xc98
/* ITM_TX_PHY_STATUS_BSET 0xc9c {TX Phy Interrupt Status Set} */
#define         YUSHAN_ITM_TX_PHY_STATUS_BSET	0xc9c
/* ITM_TX_PHY_EN_STATUS_BCLR 0xca0 {TX Phy Active Interrupt Status Clear} */
#define         YUSHAN_ITM_TX_PHY_EN_STATUS_BCLR	0xca0
/* ITM_TX_PHY_EN_STATUS_BSET 0xca4 {TX Phy Active Interrupt Status Set} */
#define         YUSHAN_ITM_TX_PHY_EN_STATUS_BSET	0xca4
/* ITM_IDP_STATUS 0xca8 {IDP Interrupt Status} */
#define         YUSHAN_ITM_IDP_STATUS	0xca8
/* ITM_IDP_EN_STATUS 0xcac {IDP Active Interrupt Status} */
#define         YUSHAN_ITM_IDP_EN_STATUS	0xcac
/* ITM_IDP_STATUS_BCLR 0xcb0 {IDP Interrupt Status Clear} */
#define         YUSHAN_ITM_IDP_STATUS_BCLR	0xcb0
/* ITM_IDP_STATUS_BSET 0xcb4 {IDP Interrupt Status Set} */
#define         YUSHAN_ITM_IDP_STATUS_BSET	0xcb4
/* ITM_IDP_EN_STATUS_BCLR 0xcb8 {IDP Active Interrupt Status Clear} */
#define         YUSHAN_ITM_IDP_EN_STATUS_BCLR	0xcb8
/* ITM_IDP_EN_STATUS_BSET 0xcbc {IDP Active Interrupt Status Set} */
#define         YUSHAN_ITM_IDP_EN_STATUS_BSET	0xcbc
/* ITM_RX_CHAR_STATUS 0xcc0 {Rx char Interrupt Status} */
#define         YUSHAN_ITM_RX_CHAR_STATUS	0xcc0
/* ITM_RX_CHAR_EN_STATUS 0xcc4 {Rx char Active Interrupt Status} */
#define         YUSHAN_ITM_RX_CHAR_EN_STATUS	0xcc4
/* ITM_RX_CHAR_STATUS_BCLR 0xcc8 {Rx char Interrupt Status Clear} */
#define         YUSHAN_ITM_RX_CHAR_STATUS_BCLR	0xcc8
/* ITM_RX_CHAR_STATUS_BSET 0xccc {Rx char Interrupt Status Set} */
#define         YUSHAN_ITM_RX_CHAR_STATUS_BSET	0xccc
/* ITM_RX_CHAR_EN_STATUS_BCLR 0xcd0 {Rx char Active Interrupt Status Clear} */
#define         YUSHAN_ITM_RX_CHAR_EN_STATUS_BCLR	0xcd0
/* ITM_RX_CHAR_EN_STATUS_BSET 0xcd4 {Rx char Active Interrupt Status Set} */
#define         YUSHAN_ITM_RX_CHAR_EN_STATUS_BSET	0xcd4
/* ITM_LBE_POST_DXO_STATUS 0xcd8 {LBE Post DxO Interrupt Status} */
#define         YUSHAN_ITM_LBE_POST_DXO_STATUS	0xcd8
/* ITM_LBE_POST_DXO_EN_STATUS 0xcdc {LBE Post DxO Active Interrupt Status} */
#define         YUSHAN_ITM_LBE_POST_DXO_EN_STATUS	0xcdc
/* ITM_LBE_POST_DXO_STATUS_BCLR 0xce0 {LBE Post DxO Interrupt Status Clear} */
#define         YUSHAN_ITM_LBE_POST_DXO_STATUS_BCLR	0xce0
/* ITM_LBE_POST_DXO_STATUS_BSET 0xce4 {LBE Post DxO Interrupt Status Set} */
#define         YUSHAN_ITM_LBE_POST_DXO_STATUS_BSET 	0xce4
/* ITM_LBE_POST_DXO_EN_STATUS_BCLR 0xce8 {LBE Post DxO Act Intr Status Clear} */
#define         YUSHAN_ITM_LBE_POST_DXO_EN_STATUS_BCLR	0xce8
/* ITM_LBE_POST_DXO_EN_STATUS_BSET 0xcec {LBE Post DxO Act Intr Status Set} */
#define         YUSHAN_ITM_LBE_POST_DXO_EN_STATUS_BSET	0xcec
/* ITM_SYS_DOMAIN_STATUS 0xcf0 {Sys Domain Interrupt Status} */
#define         YUSHAN_ITM_SYS_DOMAIN_STATUS	0xcf0
/* ITM_SYS_DOMAIN_EN_STATUS 0xcf4 {Sys Domain Interrupt Active Status} */
#define         YUSHAN_ITM_SYS_DOMAIN_EN_STATUS	0xcf4
/* ITM_SYS_DOMAIN_STATUS_BCLR 0xcf8 {Sys Domain Interrupt Status Clear} */
#define         YUSHAN_ITM_SYS_DOMAIN_STATUS_BCLR	0xcf8
/* ITM_SYS_DOMAIN_STATUS_BSET 0xcfc {Sys Domain Interrupt Status Set} */
#define         YUSHAN_ITM_SYS_DOMAIN_STATUS_BSET	0xcfc
/* ITM_SYS_DOMAIN_EN_STATUS_BCLR 0xd00 {Sys Domain Intr Act Status Clear} */
#define         YUSHAN_ITM_SYS_DOMAIN_EN_STATUS_BCLR	0xd00
/* ITM_SYS_DOMAIN_EN_STATUS_BSET 0xd04 {Sys Domain Intr Act Status Set} */
#define         YUSHAN_ITM_SYS_DOMAIN_EN_STATUS_BSET	0xd04
/* ITM_ITPOINT_STATUS 0xd08 {IT Point Interrupt Status} */
#define         YUSHAN_ITM_ITPOINT_STATUS	0xd08
/* ITM_ITPOINT_EN_STATUS 0xd0c {IT Point Interrupt Active Status} */
#define         YUSHAN_ITM_ITPOINT_EN_STATUS	0xd0c
/* ITM_ITPOINT_STATUS_BCLR 0xd10 {IT Point Interrupt Status Clear} */
#define         YUSHAN_ITM_ITPOINT_STATUS_BCLR	0xd10
/* ITM_ITPOINT_STATUS_BSET 0xd14 {IT Point Interrupt Status Set} */
#define         YUSHAN_ITM_ITPOINT_STATUS_BSET	0xd14
/* ITM_ITPOINT_EN_STATUS_BCLR 0xd18 {IT Point Interrupt Active Status Clear} */
#define         YUSHAN_ITM_ITPOINT_EN_STATUS_BCLR	0xd18
/* ITM_ITPOINT_EN_STATUS_BSET 0xd1c {IT Point Interrupt Active Status Set} */
#define         YUSHAN_ITM_ITPOINT_EN_STATUS_BSET	0xd1c
/* ITM_P2W_UFLOW_STATUS 0xd20 {P2W FIFO Uflow Interrupt Status} */
#define         YUSHAN_ITM_P2W_UFLOW_STATUS	0xd20
/* ITM_P2W_UFLOW_EN_STATUS 0xd24 {P2W FIFO Uflow Active Interrupt Status} */
#define         YUSHAN_ITM_P2W_UFLOW_EN_STATUS	0xd24
/* ITM_P2W_UFLOW_STATUS_BCLR 0xd28 {P2W FIFO Uflow Interrupt Status Clear} */
#define         YUSHAN_ITM_P2W_UFLOW_STATUS_BCLR	0xd28
/* ITM_P2W_UFLOW_STATUS_BSET 0xd2c {P2W FIFO Uflow Interrupt Status Set} */
#define         YUSHAN_ITM_P2W_UFLOW_STATUS_BSET	0xd2c
/* ITM_P2W_UFLOW_EN_STATUS_BCLR 0xd30 {P2W FIFO Uflow Intr Act Status Clear} */
#define         YUSHAN_ITM_P2W_UFLOW_EN_STATUS_BCLR	0xd30
/* ITM_P2W_UFLOW_EN_STATUS_BSET 0xd34 {P2W FIFO Uflow Intr Act Status Set} */
#define         YUSHAN_ITM_P2W_UFLOW_EN_STATUS_BSET	0xd34
/* IOR_NVM_CTRL 0x1000 {NVM Control REGISTER} */
#define         YUSHAN_IOR_NVM_CTRL 0x1000
/* IOR_NVM_STATUS 0x1004 {NVM Status REGISTER} */
#define         YUSHAN_IOR_NVM_STATUS                                                     0x1004
/* IOR_NVM_DATA_WORD_0 0x1008 {NVM DATA (LSB) REGISTER} */
#define         YUSHAN_IOR_NVM_DATA_WORD_0                                                0x1008
/* IOR_NVM_DATA_WORD_1 0x100c {NVM DATA REGISTER} */
#define         YUSHAN_IOR_NVM_DATA_WORD_1                                                0x100c
/* IOR_NVM_DATA_WORD_2 0x1010 {NVM DATA REGISTER} */
#define         YUSHAN_IOR_NVM_DATA_WORD_2                                                0x1010
/* IOR_NVM_DATA_WORD_3 0x1014 {NVM DATA (MSB) REGISTER} */
#define         YUSHAN_IOR_NVM_DATA_WORD_3                                                0x1014
/* IOR_NVM_HYST 0x1018 {IOR HYST REGISTER} */
#define         YUSHAN_IOR_NVM_HYST                                                       0x1018
/* IOR_NVM_PDN 0x101c {IOR PDN REGISTER} */
#define         YUSHAN_IOR_NVM_PDN                                                        0x101c
/* IOR_NVM_PUN 0x1020 {IOR PUN REGISTER} */
#define         YUSHAN_IOR_NVM_PUN                                                        0x1020
/* IOR_NVM_LOWEMI 0x1024 {IOR LOWEMI REGISTER} */
#define         YUSHAN_IOR_NVM_LOWEMI                                                     0x1024
/* IOR_NVM_PAD_IN 0x1028 {IOR PAD IN REGISTER} */
#define         YUSHAN_IOR_NVM_PAD_IN                                                     0x1028
/* IOR_NVM_RATIO_PAD 0x102c {IOR PAD RATIO REGISTER} */
#define         YUSHAN_IOR_NVM_RATIO_PAD                                                  0x102c
/* IOR_NVM_SEND_ITR_PAD1 0x1030 {SEND ITR PAD 1 REGISTER} */
#define         YUSHAN_IOR_NVM_SEND_ITR_PAD1                                              0x1030
/* IOR_NVM_INTR_STATUS 0x1034 {INTR STATUS REGISTER} */
#define         YUSHAN_IOR_NVM_INTR_STATUS                                                0x1034
/* IOR_NVM_LDO_STS_REG 0x1038 {LDO STATUS REGISTER} */
#define         YUSHAN_IOR_NVM_LDO_STS_REG                                                0x1038
/*  YUSHAN_PRIVATE_TEST_LDO_CTRL */
#define		 YUSHAN_PRIVATE_TEST_LDO_CTRL											   0x1405
/*  YUSHAN_PRIVATE_TEST_LDO_NVM_CTRL */
#define		 YUSHAN_PRIVATE_TEST_LDO_NVM_CTRL										   0x1406
/* T1_DMA_REG_ENABLE 0x1a00 {Block Enable} */
#define         YUSHAN_T1_DMA_REG_ENABLE                                                  0x1a00
/* T1_DMA_REG_VERSION 0x1a04 {Version of the IP} */
#define         YUSHAN_T1_DMA_REG_VERSION                                                 0x1a04
/* T1_DMA_REG_STATUS 0x1a08 {T1DMA Status Register} */
#define         YUSHAN_T1_DMA_REG_STATUS                                                  0x1a08
/* T1_DMA_REG_REFILL_ELT_NB 0x1a0c {Write Element Number} */
#define         YUSHAN_T1_DMA_REG_REFILL_ELT_NB                                           0x1a0c
/* T1_DMA_REG_REFILL_ERROR 0x1a10 {Refill Error} */
#define         YUSHAN_T1_DMA_REG_REFILL_ERROR                                            0x1a10
/* T1_DMA_REG_DFV_CONTROL 0x1a14 {DFV Control} */
#define         YUSHAN_T1_DMA_REG_DFV_CONTROL                                             0x1a14
/* T1_DMA_MEM_PAGE 0x1c00 {T1DMA Memory Page Control} */
#define         YUSHAN_T1_DMA_MEM_PAGE                                                    0x1c00
/* T1_DMA_MEM_LOWER_ELT 0x1c04 {T1DMA Memory cell} */
#define         YUSHAN_T1_DMA_MEM_LOWER_ELT                                               0x1c04
/* T1_DMA_MEM_UPPER_ELT 0x1c08 {T1DMA Memory cell} */
#define         YUSHAN_T1_DMA_MEM_UPPER_ELT                                               0x1c08
/* MIPI_RX_ENABLE 0x2000 {Enable clock and data lanes} */
#define         YUSHAN_MIPI_RX_ENABLE                                                     0x2000
/* MIPI_RX_UIX4 0x2004 {Unit Interval Time x 4} */
#define         YUSHAN_MIPI_RX_UIX4                                                       0x2004
/* MIPI_RX_SWAP_PINS 0x2008 {Swap P and N pins of lanes} */
#define         YUSHAN_MIPI_RX_SWAP_PINS                                                  0x2008
/* MIPI_RX_INVERT_HS 0x200c {Invert HS signals for MIPI mode} */
#define         YUSHAN_MIPI_RX_INVERT_HS                                                  0x200c
/* MIPI_RX_STOP_STATE 0x2010 {Status indicating lane in Stop state} */
#define         YUSHAN_MIPI_RX_STOP_STATE                                                 0x2010
/* MIPI_RX_ULP_STATE 0x2014 {Status indicating Ultra-Low Power state not active} */
#define         YUSHAN_MIPI_RX_ULP_STATE                                                  0x2014
/* MIPI_RX_CLK_ACTIVE 0x2018 {Clock Lane status} */
#define         YUSHAN_MIPI_RX_CLK_ACTIVE                                                 0x2018
/* MIPI_RX_FORCE_RX_MODE_DL 0x201c {To force RX mode in Data lane} */
#define         YUSHAN_MIPI_RX_FORCE_RX_MODE_DL                                           0x201c
/* MIPI_RX_TEST_RESERVED 0x2020 {Test reserved} */
#define         YUSHAN_MIPI_RX_TEST_RESERVED                                              0x2020
/* MIPI_RX_ESC_DL_STS 0x2024 {Escape status for DL} */
#define         YUSHAN_MIPI_RX_ESC_DL_STS                                                 0x2024
/* MIPI_RX_EOT_BYPASS 0x2028 {Bypass end of transmission module} */
#define         YUSHAN_MIPI_RX_EOT_BYPASS                                                 0x2028
/* MIPI_RX_HSRX_SHIFT_CL 0x202c {Shift value of HS-Rx termination} */
#define         YUSHAN_MIPI_RX_HSRX_SHIFT_CL                                              0x202c
/* MIPI_RX_HS_RX_SHIFT_DL 0x2030 {Shift value of HS-Rx termination} */
#define         YUSHAN_MIPI_RX_HS_RX_SHIFT_DL                                             0x2030
/* MIPI_RX_VIL_CL 0x2034 {VIL control for LPRX in clock lane} */
#define         YUSHAN_MIPI_RX_VIL_CL                                                     0x2034
/* MIPI_RX_VIL_DL 0x2038 {VIL control for LPRX in data lane} */
#define         YUSHAN_MIPI_RX_VIL_DL                                                     0x2038
/* MIPI_RX_OVERSAMPLE_BYPASS 0x203c {Bypass psuedo-oversampling} */
#define         YUSHAN_MIPI_RX_OVERSAMPLE_BYPASS                                          0x203c
/* MIPI_RX_OVERSAMPLE_FLAG1 0x2040 {Debug pin for psuedo-oversampling} */
#define         YUSHAN_MIPI_RX_OVERSAMPLE_FLAG1                                           0x2040
/* MIPI_RX_SKEW_OFFSET_1 0x2044 {Skew and offset control for DL1} */
#define         YUSHAN_MIPI_RX_SKEW_OFFSET_1                                              0x2044
/* MIPI_RX_SKEW_OFFSET_2 0x2048 {Skew and offset control for DL2} */
#define         YUSHAN_MIPI_RX_SKEW_OFFSET_2                                              0x2048
/* MIPI_RX_SKEW_OFFSET_3 0x204c {Skew and offset control for DL3} */
#define         YUSHAN_MIPI_RX_SKEW_OFFSET_3                                              0x204c
/* MIPI_RX_SKEW_OFFSET_4 0x2050 {Skew and offset control for DL4} */
#define         YUSHAN_MIPI_RX_SKEW_OFFSET_4                                              0x2050
/* MIPI_RX_OFFSET_CL 0x2054 {Offset control for CL} */
#define         YUSHAN_MIPI_RX_OFFSET_CL                                                  0x2054
/* MIPI_RX_CALIBRATE 0x2058 {Calibration codes from compensation block} */
#define         YUSHAN_MIPI_RX_CALIBRATE                                                  0x2058
/* MIPI_RX_SPECS 0x205c {Select IP functioning specs} */
#define         YUSHAN_MIPI_RX_SPECS                                                      0x205c
/* MIPI_RX_COMP 0x2060 {Compensation block output} */
#define         YUSHAN_MIPI_RX_COMP                                                       0x2060
/* MIPI_RX_MIPI_IN_SHORT 0x2064 {Control to activate HS-Rx mode} */
#define         YUSHAN_MIPI_RX_MIPI_IN_SHORT                                              0x2064
/* MIPI_RX_LANE_CTRL 0x2068 {Control to map logical lanes} */
#define         YUSHAN_MIPI_RX_LANE_CTRL                                                  0x2068
/* CSI2_RX_ENABLE 0x2400 {CSI2_RX ENABLE REGISTER} */
#define         YUSHAN_CSI2_RX_ENABLE                                                     0x2400
/* CSI2_RX_VER_CTRL 0x2404 {CSI2 RX VERSION CONTROL REGISTER} */
#define         YUSHAN_CSI2_RX_VER_CTRL                                                   0x2404
/* CSI2_RX_NB_DATA_LANES 0x2408 {CSI2_RX DATA LANE REGISTER} */
#define         YUSHAN_CSI2_RX_NB_DATA_LANES                                              0x2408
/* CSI2_RX_IMG_UNPACKING_FORMAT 0x240c {No reg descr} */
#define         YUSHAN_CSI2_RX_IMG_UNPACKING_FORMAT                                       0x240c
/* CSI2_RX_WAIT_AFTER_PACKET_END 0x2410 {CSI2_RX WAIT AFTER PACKET END REGISTER} */
#define         YUSHAN_CSI2_RX_WAIT_AFTER_PACKET_END                                      0x2410
/* CSI2_RX_MULTIPLE_OF_5_HSYNC_EXTENSION_ENABLE 0x2414 {No reg descr} */
#define         YUSHAN_CSI2_RX_MULTIPLE_OF_5_HSYNC_EXTENSION_ENABLE                       0x2414
/* CSI2_RX_MULTIPLE_OF_5_HSYNC_EXTENSION_PADDING_DATA 0x2418 {No reg descr} */
#define         YUSHAN_CSI2_RX_MULTIPLE_OF_5_HSYNC_EXTENSION_PADDING_DATA                 0x2418
/* CSI2_RX_CHARACTERIZATION_MODE 0x241c {CSI2_RX CHARACTERIZATION MODE REGISTER} */
#define         YUSHAN_CSI2_RX_CHARACTERIZATION_MODE                                      0x241c
/* CSI2_RX_BYTE2PIXEL_READ_TH 0x2420 {CSI2_RX BYTE TO PIXEL READ THRESHOLD REGISTER} */
#define         YUSHAN_CSI2_RX_BYTE2PIXEL_READ_TH                                         0x2420
/* CSI2_RX_VIRTUAL_CHANNEL 0x2424 {CSI2_RX VIRTUAL CHANNEL REGISTER} */
#define         YUSHAN_CSI2_RX_VIRTUAL_CHANNEL                                            0x2424
/* CSI2_RX_DATA_TYPE 0x2428 {CSI2_RX DATA TYPE REGISTER} */
#define         YUSHAN_CSI2_RX_DATA_TYPE                                                  0x2428
/* CSI2_RX_FRAME_NUMBER 0x242c {CSI2_RX FRAME NUMBER REGISTER} */
#define         YUSHAN_CSI2_RX_FRAME_NUMBER                                               0x242c
/* CSI2_RX_LINE_NUMBER 0x2430 {CSI2_RX LINE NUMBER REGISTER} */
#define         YUSHAN_CSI2_RX_LINE_NUMBER                                                0x2430
/* CSI2_RX_DATA_FIELD 0x2434 {CSI2_RX DATA FIELD REGISTER} */
#define         YUSHAN_CSI2_RX_DATA_FIELD                                                 0x2434
/* CSI2_RX_WORD_COUNT 0x2438 {CSI2_RX WORD COUNT REGISTER} */
#define         YUSHAN_CSI2_RX_WORD_COUNT                                                 0x2438
/* CSI2_RX_ECC_ERROR_STATUS 0x243c {CSI2_RX ECC ERROR STATUS REGISTER} */
#define         YUSHAN_CSI2_RX_ECC_ERROR_STATUS                                           0x243c
/* CSI2_RX_DFV 0x2440 {CSI2_RX DFV REGISTER} */
#define         YUSHAN_CSI2_RX_DFV                                                        0x2440
/* ITPOINT_ENABLE 0x2800 {itpoint Enable} */
#define         YUSHAN_ITPOINT_ENABLE                                                     0x2800
/* ITPOINT_VERSION 0x2804 {Version of the IP} */
#define         YUSHAN_ITPOINT_VERSION                                                    0x2804
/* ITPOINT_PIX_POS 0x2808 {pixel position for interrupt point} */
#define         YUSHAN_ITPOINT_PIX_POS                                                    0x2808
/* ITPOINT_LINE_POS 0x280c {line position for interrupt point} */
#define         YUSHAN_ITPOINT_LINE_POS                                                   0x280c
/* ITPOINT_PIX_CNT 0x2810 {current pixel position of the frame} */
#define         YUSHAN_ITPOINT_PIX_CNT                                                    0x2810
/* ITPOINT_LINE_CNT 0x2814 {current line position of the frame} */
#define         YUSHAN_ITPOINT_LINE_CNT                                                   0x2814
/* ITPOINT_FRAME_CNT 0x2818 {frame counter} */
#define         YUSHAN_ITPOINT_FRAME_CNT                                                  0x2818
/* ITPOINT_DFV 0x281c {itpoint Design for Verification register} */
#define         YUSHAN_ITPOINT_DFV                                                        0x281c
/* IDP_GEN_AUTO_RUN 0x2c00 {idp_gen Auto Run} */
#define         YUSHAN_IDP_GEN_AUTO_RUN                                                   0x2c00
/* IDP_GEN_VERSION 0x2c04 {idp_gen Version Register} */
#define         YUSHAN_IDP_GEN_VERSION                                                    0x2c04
/* IDP_GEN_CONTROL 0x2c08 {idp_gen control} */
#define         YUSHAN_IDP_GEN_CONTROL                                                    0x2c08
/* IDP_GEN_LINE_LENGTH 0x2c0c {idp_gen Line Length} */
#define         YUSHAN_IDP_GEN_LINE_LENGTH                                                0x2c0c
/* IDP_GEN_FRAME_LENGTH 0x2c10 {idp_gen Frame Length} */
#define         YUSHAN_IDP_GEN_FRAME_LENGTH                                               0x2c10
/* IDP_GEN_ERROR_LINES_EOF_GAP 0x2c14 {idp_gen EOF gap and error lines} */
#define         YUSHAN_IDP_GEN_ERROR_LINES_EOF_GAP                                        0x2c14
/* IDP_GEN_WC_DI_0 0x2c18 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_0                                                    0x2c18
/* IDP_GEN_WC_DI_1 0x2c1c {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_1                                                    0x2c1c
/* IDP_GEN_WC_DI_2 0x2c20 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_2                                                    0x2c20
/* IDP_GEN_WC_DI_3 0x2c24 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_3                                                    0x2c24
/* IDP_GEN_WC_DI_4 0x2c28 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_4                                                    0x2c28
/* IDP_GEN_WC_DI_5 0x2c2c {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_5                                                    0x2c2c
/* IDP_GEN_WC_DI_6 0x2c30 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_6                                                    0x2c30
/* IDP_GEN_WC_DI_7 0x2c34 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_7                                                    0x2c34
/* IDP_GEN_WC_DI_8 0x2c38 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_8                                                    0x2c38
/* IDP_GEN_WC_DI_9 0x2c3c {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_9                                                    0x2c3c
/* IDP_GEN_WC_DI_10 0x2c40 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_10                                                   0x2c40
/* IDP_GEN_WC_DI_11 0x2c44 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_11                                                   0x2c44
/* IDP_GEN_WC_DI_12 0x2c48 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_12                                                   0x2c48
/* IDP_GEN_WC_DI_13 0x2c4c {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_13                                                   0x2c4c
/* IDP_GEN_WC_DI_14 0x2c50 {idp_gen Word Count and Identifier(n=0:14)} */
#define         YUSHAN_IDP_GEN_WC_DI_14                                                   0x2c50
/* IDP_GEN_DFV 0x2c54 {idp_gen Design for Verification Register} */
#define         YUSHAN_IDP_GEN_DFV                                                        0x2c54
/* MIPI_RX_DTCHK_ENABLE 0x3000 {MIPI slave data checker Enable Register} */
#define         YUSHAN_MIPI_RX_DTCHK_ENABLE                                               0x3000
/* MIPI_RX_DTCHK_VERSION_CTRL 0x3004 {MIPI slave data checker Version Control} */
#define         YUSHAN_MIPI_RX_DTCHK_VERSION_CTRL                                         0x3004
/* MIPI_RX_DTCHK_COLORBAR_WIDTH_BY4_M1 0x3008 {Width of color bars divided by four minus 1} */
#define         YUSHAN_MIPI_RX_DTCHK_COLORBAR_WIDTH_BY4_M1                                0x3008
/* MIPI_RX_DTCHK_COLOR_BAR_VAL_0 0x300c {Reference color bar value n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_VAL_0                                      0x300c
/* MIPI_RX_DTCHK_COLOR_BAR_VAL_1 0x3010 {Reference color bar value n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_VAL_1                                      0x3010
/* MIPI_RX_DTCHK_COLOR_BAR_VAL_2 0x3014 {Reference color bar value n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_VAL_2                                      0x3014
/* MIPI_RX_DTCHK_COLOR_BAR_VAL_3 0x3018 {Reference color bar value n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_VAL_3                                      0x3018
/* MIPI_RX_DTCHK_COLOR_BAR_VAL_4 0x301c {Reference color bar value n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_VAL_4                                      0x301c
/* MIPI_RX_DTCHK_COLOR_BAR_VAL_5 0x3020 {Reference color bar value n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_VAL_5                                      0x3020
/* MIPI_RX_DTCHK_COLOR_BAR_VAL_6 0x3024 {Reference color bar value n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_VAL_6                                      0x3024
/* MIPI_RX_DTCHK_COLOR_BAR_VAL_7 0x3028 {Reference color bar value n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_VAL_7                                      0x3028
/* MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_0 0x302c {Errors ignored for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_0                           0x302c
/* MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_1 0x3030 {Errors ignored for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_1                           0x3030
/* MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_2 0x3034 {Errors ignored for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_2                           0x3034
/* MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_3 0x3038 {Errors ignored for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_3                           0x3038
/* MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_4 0x303c {Errors ignored for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_4                           0x303c
/* MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_5 0x3040 {Errors ignored for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_5                           0x3040
/* MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_6 0x3044 {Errors ignored for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_6                           0x3044
/* MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_7 0x3048 {Errors ignored for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_IGNORE_ERR_CNT_7                           0x3048
/* MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_0 0x304c {First error to be reported in color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_0                                   0x304c
/* MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_1 0x3050 {First error to be reported in color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_1                                   0x3050
/* MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_2 0x3054 {First error to be reported in color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_2                                   0x3054
/* MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_3 0x3058 {First error to be reported in color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_3                                   0x3058
/* MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_4 0x305c {First error to be reported in color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_4                                   0x305c
/* MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_5 0x3060 {First error to be reported in color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_5                                   0x3060
/* MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_6 0x3064 {First error to be reported in color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_6                                   0x3064
/* MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_7 0x3068 {First error to be reported in color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERRVAL_7                                   0x3068
/* MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_0 0x306c {Error Position for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_0                                  0x306c
/* MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_1 0x3070 {Error Position for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_1                                  0x3070
/* MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_2 0x3074 {Error Position for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_2                                  0x3074
/* MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_3 0x3078 {Error Position for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_3                                  0x3078
/* MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_4 0x307c {Error Position for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_4                                  0x307c
/* MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_5 0x3080 {Error Position for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_5                                  0x3080
/* MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_6 0x3084 {Error Position for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_6                                  0x3084
/* MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_7 0x3088 {Error Position for color bar n(n=0:7)} */
#define         YUSHAN_MIPI_RX_DTCHK_COLOR_BAR_ERR_POS_7                                  0x3088
/* MIPI_RX_DTCHK_DFV 0x308c {Design for Verification} */
#define         YUSHAN_MIPI_RX_DTCHK_DFV                                                  0x308c
/* PATTERN_GEN_ENABLE 0x3400 {Enable Register} */
#define         YUSHAN_PATTERN_GEN_ENABLE                                                 0x3400
/* PATTERN_GEN_VERSION 0x3404 {Version of the IP} */
#define         YUSHAN_PATTERN_GEN_VERSION                                                0x3404
/* PATTERN_GEN_PATTERN_TYPE_REQ 0x3408 {Pattern Type} */
#define         YUSHAN_PATTERN_GEN_PATTERN_TYPE_REQ                                       0x3408
/* PATTERN_GEN_TPAT_DATA_RG 0x340c {Red/Green Line Test Pattern Data} */
#define         YUSHAN_PATTERN_GEN_TPAT_DATA_RG                                           0x340c
/* PATTERN_GEN_TPAT_DATA_BG 0x3410 {Blue/Green Line Test Pattern Data} */
#define         YUSHAN_PATTERN_GEN_TPAT_DATA_BG                                           0x3410
/* PATTERN_GEN_TPAT_HCUR_WP 0x3414 {Test Pattern Horizontol Cursor Control} */
#define         YUSHAN_PATTERN_GEN_TPAT_HCUR_WP                                           0x3414
/* PATTERN_GEN_TPAT_VCUR_WP 0x3418 {Test Pattern Vertical Cursor Control} */
#define         YUSHAN_PATTERN_GEN_TPAT_VCUR_WP                                           0x3418
/* PATTERN_GEN_PATTERN_TYPE_STATUS 0x341c {Pattern Type Status} */
#define         YUSHAN_PATTERN_GEN_PATTERN_TYPE_STATUS                                    0x341c
/* SMIA_DCPX_ENABLE 0x3800 {Enable Register} */
#define         YUSHAN_SMIA_DCPX_ENABLE                                                   0x3800
/* SMIA_DCPX_VERSION 0x3804 {Version of the IP} */
#define         YUSHAN_SMIA_DCPX_VERSION                                                  0x3804
/* SMIA_DCPX_ENABLE_STATUS 0x3808 {Enable Status} */
#define         YUSHAN_SMIA_DCPX_ENABLE_STATUS                                            0x3808
/* SMIA_DCPX_MODE_REQ 0x380c {Mode Req of the IP} */
#define         YUSHAN_SMIA_DCPX_MODE_REQ                                                 0x380c
/* SMIA_DCPX_MODE_STATUS 0x3810 {Mode Status of the IP} */
#define         YUSHAN_SMIA_DCPX_MODE_STATUS                                              0x3810
/* SMIA_CPX_CTRL_REQ 0x4000 {CPX Control REGISTER} */
#define         YUSHAN_SMIA_CPX_CTRL_REQ                                                  0x4000
/* SMIA_CPX_MODE_REQ 0x4004 {CPX Compression Mode REGISTER} */
#define         YUSHAN_SMIA_CPX_MODE_REQ                                                  0x4004
/* SMIA_CPX_CTRL_STATUS 0x4008 {CPX Control Status REGISTER} */
#define         YUSHAN_SMIA_CPX_CTRL_STATUS                                               0x4008
/* SMIA_CPX_MODE_STATUS 0x400c {CPX Compression Mode Status REGISTER} */
#define         YUSHAN_SMIA_CPX_MODE_STATUS                                               0x400c
/* SMIA_FM_CTRL 0x4400 {SMIA Formatter Control REGISTER} */
#define         YUSHAN_SMIA_FM_CTRL                                                       0x4400
/* SMIA_FM_PIX_WIDTH 0x4404 {Pix width REGISTER} */
#define         YUSHAN_SMIA_FM_PIX_WIDTH                                                  0x4404
/* SMIA_FM_GROUPED_PARAMETER_HOLD 0x4408 {Group Hold REGISTER} */
#define         YUSHAN_SMIA_FM_GROUPED_PARAMETER_HOLD                                     0x4408
/* SMIA_FM_EOF_INT_EN 0x440c {SMIA Formatter EOF Interrupt Enable REGISTER} */
#define         YUSHAN_SMIA_FM_EOF_INT_EN                                                 0x440c
/* SMIA_FM_EOF_INT_CTRL 0x4410 {SMIAF EOF Interrupt Control REGISTER} */
#define         YUSHAN_SMIA_FM_EOF_INT_CTRL                                               0x4410
/* P2W_FIFO_WR_CTRL 0x4800 {P2W FIFO Write Control REGISTER} */
#define         YUSHAN_P2W_FIFO_WR_CTRL                                                   0x4800
/* P2W_FIFO_WR_STATUS 0x4804 {P2W WR FIFO STATUS REGISTER} */
#define         YUSHAN_P2W_FIFO_WR_STATUS                                                 0x4804
/* P2W_FIFO_RD_CTRL 0x4900 {P2W FIFO Read Control REGISTER} */
#define         YUSHAN_P2W_FIFO_RD_CTRL                                                   0x4900
/* P2W_FIFO_RD_STATUS 0x4904 {P2W RD FIFO STATUS REGISTER} */
#define         YUSHAN_P2W_FIFO_RD_STATUS                                                 0x4904
/* CSI2_TX_WRAPPER_CTRL 0x4a00 {P2W Wrapper Control REGISTER} */
#define         YUSHAN_CSI2_TX_WRAPPER_CTRL                                               0x4a00
/* CSI2_TX_WRAPPER_THRESH 0x4a04 {P2W Wrapper Threshold REGISTER} */
#define         YUSHAN_CSI2_TX_WRAPPER_THRESH                                             0x4a04
/* CSI2_TX_WRAPPER_CHAR_EN 0x4a08 {P2W Wrapper Char Enable REGISTER} */
#define         YUSHAN_CSI2_TX_WRAPPER_CHAR_EN                                            0x4a08
/* CSI2_TX_ENABLE 0x4c00 {CSI2_Tx Enable Register} */
#define         YUSHAN_CSI2_TX_ENABLE                                                     0x4c00
/* CSI2_TX_VERSION_CTRL 0x4c04 {CSI2_Tx Version Control} */
#define         YUSHAN_CSI2_TX_VERSION_CTRL                                               0x4c04
/* CSI2_TX_NUMBER_OF_LANES 0x4c08 {Number of lanes enabled} */
#define         YUSHAN_CSI2_TX_NUMBER_OF_LANES                                            0x4c08
/* CSI2_TX_LANE_MAPPING 0x4c0c {Lane Mapping Register} */
#define         YUSHAN_CSI2_TX_LANE_MAPPING                                               0x4c0c
/* CSI2_TX_PACKET_CONTROL 0x4c10 {Packet Control} */
#define         YUSHAN_CSI2_TX_PACKET_CONTROL                                             0x4c10
/* CSI2_TX_INTERPACKET_DELAY 0x4c14 {Packet Control} */
#define         YUSHAN_CSI2_TX_INTERPACKET_DELAY                                          0x4c14
/* CSI2_TX_STATUS_LINE_SIZE 0x4c18 {Status Line Size Register} */
#define         YUSHAN_CSI2_TX_STATUS_LINE_SIZE                                           0x4c18
/* CSI2_TX_STATUS_LINE_CTRL 0x4c1c {Status Line Control} */
#define         YUSHAN_CSI2_TX_STATUS_LINE_CTRL                                           0x4c1c
/* CSI2_TX_VC_CTRL_0 0x4c20 {Virtual Channel Control Register x(x=0:3)} */
#define         YUSHAN_CSI2_TX_VC_CTRL_0                                                  0x4c20
/* CSI2_TX_VC_CTRL_1 0x4c24 {Virtual Channel Control Register x(x=0:3)} */
#define         YUSHAN_CSI2_TX_VC_CTRL_1                                                  0x4c24
/* CSI2_TX_VC_CTRL_2 0x4c28 {Virtual Channel Control Register x(x=0:3)} */
#define         YUSHAN_CSI2_TX_VC_CTRL_2                                                  0x4c28
/* CSI2_TX_VC_CTRL_3 0x4c2c {Virtual Channel Control Register x(x=0:3)} */
#define         YUSHAN_CSI2_TX_VC_CTRL_3                                                  0x4c2c
/* CSI2_TX_FRAME_NO_0 0x4c30 {Frame Number For Virtual Channel x(x=0:3)} */
#define         YUSHAN_CSI2_TX_FRAME_NO_0                                                 0x4c30
/* CSI2_TX_FRAME_NO_1 0x4c34 {Frame Number For Virtual Channel x(x=0:3)} */
#define         YUSHAN_CSI2_TX_FRAME_NO_1                                                 0x4c34
/* CSI2_TX_FRAME_NO_2 0x4c38 {Frame Number For Virtual Channel x(x=0:3)} */
#define         YUSHAN_CSI2_TX_FRAME_NO_2                                                 0x4c38
/* CSI2_TX_FRAME_NO_3 0x4c3c {Frame Number For Virtual Channel x(x=0:3)} */
#define         YUSHAN_CSI2_TX_FRAME_NO_3                                                 0x4c3c
/* CSI2_TX_BYTE_COUNT 0x4c40 {Number of bytes Transmitted} */
#define         YUSHAN_CSI2_TX_BYTE_COUNT                                                 0x4c40
/* CSI2_TX_CURRENT_DATA_IDENTIFIER 0x4c44 {Current Data Identifier} */
#define         YUSHAN_CSI2_TX_CURRENT_DATA_IDENTIFIER                                    0x4c44
/* CSI2_TX_DFV 0x4c48 {Design for Verification} */
#define         YUSHAN_CSI2_TX_DFV                                                        0x4c48
/* CSI2_TX_PACKET_SIZE_0 0x4c4c {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_0                                              0x4c4c
/* CSI2_TX_DI_INDEX_CTRL_0 0x4c50 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_0                                            0x4c50
/* CSI2_TX_LINE_NO_0 0x4c54 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_0                                                  0x4c54
/* CSI2_TX_PACKET_SIZE_1 0x4c58 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_1                                              0x4c58
/* CSI2_TX_DI_INDEX_CTRL_1 0x4c5c {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_1                                            0x4c5c
/* CSI2_TX_LINE_NO_1 0x4c60 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_1                                                  0x4c60
/* CSI2_TX_PACKET_SIZE_2 0x4c64 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_2                                              0x4c64
/* CSI2_TX_DI_INDEX_CTRL_2 0x4c68 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_2                                            0x4c68
/* CSI2_TX_LINE_NO_2 0x4c6c {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_2                                                  0x4c6c
/* CSI2_TX_PACKET_SIZE_3 0x4c70 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_3                                              0x4c70
/* CSI2_TX_DI_INDEX_CTRL_3 0x4c74 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_3                                            0x4c74
/* CSI2_TX_LINE_NO_3 0x4c78 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_3                                                  0x4c78
/* CSI2_TX_PACKET_SIZE_4 0x4c7c {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_4                                              0x4c7c
/* CSI2_TX_DI_INDEX_CTRL_4 0x4c80 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_4                                            0x4c80
/* CSI2_TX_LINE_NO_4 0x4c84 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_4                                                  0x4c84
/* CSI2_TX_PACKET_SIZE_5 0x4c88 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_5                                              0x4c88
/* CSI2_TX_DI_INDEX_CTRL_5 0x4c8c {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_5                                            0x4c8c
/* CSI2_TX_LINE_NO_5 0x4c90 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_5                                                  0x4c90
/* CSI2_TX_PACKET_SIZE_6 0x4c94 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_6                                              0x4c94
/* CSI2_TX_DI_INDEX_CTRL_6 0x4c98 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_6                                            0x4c98
/* CSI2_TX_LINE_NO_6 0x4c9c {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_6                                                  0x4c9c
/* CSI2_TX_PACKET_SIZE_7 0x4ca0 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_7                                              0x4ca0
/* CSI2_TX_DI_INDEX_CTRL_7 0x4ca4 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_7                                            0x4ca4
/* CSI2_TX_LINE_NO_7 0x4ca8 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_7                                                  0x4ca8
/* CSI2_TX_PACKET_SIZE_8 0x4cac {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_8                                              0x4cac
/* CSI2_TX_DI_INDEX_CTRL_8 0x4cb0 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_8                                            0x4cb0
/* CSI2_TX_LINE_NO_8 0x4cb4 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_8                                                  0x4cb4
/* CSI2_TX_PACKET_SIZE_9 0x4cb8 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_9                                              0x4cb8
/* CSI2_TX_DI_INDEX_CTRL_9 0x4cbc {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_9                                            0x4cbc
/* CSI2_TX_LINE_NO_9 0x4cc0 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_9                                                  0x4cc0
/* CSI2_TX_PACKET_SIZE_10 0x4cc4 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_10                                             0x4cc4
/* CSI2_TX_DI_INDEX_CTRL_10 0x4cc8 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_10                                           0x4cc8
/* CSI2_TX_LINE_NO_10 0x4ccc {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_10                                                 0x4ccc
/* CSI2_TX_PACKET_SIZE_11 0x4cd0 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_11                                             0x4cd0
/* CSI2_TX_DI_INDEX_CTRL_11 0x4cd4 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_11                                           0x4cd4
/* CSI2_TX_LINE_NO_11 0x4cd8 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_11                                                 0x4cd8
/* CSI2_TX_PACKET_SIZE_12 0x4cdc {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_12                                             0x4cdc
/* CSI2_TX_DI_INDEX_CTRL_12 0x4ce0 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_12                                           0x4ce0
/* CSI2_TX_LINE_NO_12 0x4ce4 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_12                                                 0x4ce4
/* CSI2_TX_PACKET_SIZE_13 0x4ce8 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_13                                             0x4ce8
/* CSI2_TX_DI_INDEX_CTRL_13 0x4cec {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_13                                           0x4cec
/* CSI2_TX_LINE_NO_13 0x4cf0 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_13                                                 0x4cf0
/* CSI2_TX_PACKET_SIZE_14 0x4cf4 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_14                                             0x4cf4
/* CSI2_TX_DI_INDEX_CTRL_14 0x4cf8 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_14                                           0x4cf8
/* CSI2_TX_LINE_NO_14 0x4cfc {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_14                                                 0x4cfc
/* CSI2_TX_PACKET_SIZE_15 0x4d00 {Packet Size for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_PACKET_SIZE_15                                             0x4d00
/* CSI2_TX_DI_INDEX_CTRL_15 0x4d04 {Data Identifier and Control for di_index n (n=0:15)} */
#define         YUSHAN_CSI2_TX_DI_INDEX_CTRL_15                                           0x4d04
/* CSI2_TX_LINE_NO_15 0x4d08 {Line Number For di_index n (n = 0:15)} */
#define         YUSHAN_CSI2_TX_LINE_NO_15                                                 0x4d08
/* MIPI_TX_ENABLE 0x5000 {Enable clock and data lanes} */
#define         YUSHAN_MIPI_TX_ENABLE                                                     0x5000
/* MIPI_TX_UIX4 0x5004 {Unit Interval Time x 4} */
#define         YUSHAN_MIPI_TX_UIX4                                                       0x5004
/* MIPI_TX_SWAP_PINS 0x5008 {Swap P and N pins of lanes} */
#define         YUSHAN_MIPI_TX_SWAP_PINS                                                  0x5008
/* MIPI_TX_INVERT_HS 0x500c {Invert HS signals for MIPI mode} */
#define         YUSHAN_MIPI_TX_INVERT_HS                                                  0x500c
/* MIPI_TX_STOP_STATE 0x5010 {Status indicating lane in Stop state} */
#define         YUSHAN_MIPI_TX_STOP_STATE                                                 0x5010
/* MIPI_TX_FORCE_TX_MODE_DL 0x5014 {To force TX mode in lane} */
#define         YUSHAN_MIPI_TX_FORCE_TX_MODE_DL                                           0x5014
/* MIPI_TX_ULP_STATE 0x5018 {Status indicating Ultra-Low Power state not active} */
#define         YUSHAN_MIPI_TX_ULP_STATE                                                  0x5018
/* MIPI_TX_ULP_EXIT 0x501c {Escape transmit ULP exit} */
#define         YUSHAN_MIPI_TX_ULP_EXIT                                                   0x501c
/* MIPI_TX_ESC_DL 0x5020 {Escape Tx Request and command for DL and ULPM for CL} */
#define         YUSHAN_MIPI_TX_ESC_DL                                                     0x5020
/* MIPI_TX_HSTX_SLEW 0x5024 {Slew Control of HS-Transmitter} */
#define         YUSHAN_MIPI_TX_HSTX_SLEW                                                  0x5024
/* MIPI_TX_SKEW 0x5028 {Skew Control of HS-Transmitter} */
#define         YUSHAN_MIPI_TX_SKEW                                                       0x5028
/* MIPI_TX_GPIO_CL 0x502c {Clock Lane GPIO Mode Control} */
#define         YUSHAN_MIPI_TX_GPIO_CL                                                    0x502c
/* MIPI_TX_GPIO_DL1 0x5030 {Data Lanen GPIO Mode Control} */
#define         YUSHAN_MIPI_TX_GPIO_DL1                                                   0x5030
/* MIPI_TX_GPIO_DL2 0x5034 {Data Lanen GPIO Mode Control} */
#define         YUSHAN_MIPI_TX_GPIO_DL2                                                   0x5034
/* MIPI_TX_GPIO_DL3 0x5038 {Data Lanen GPIO Mode Control} */
#define         YUSHAN_MIPI_TX_GPIO_DL3                                                   0x5038
/* MIPI_TX_GPIO_DL4 0x503c {Data Lanen GPIO Mode Control} */
#define         YUSHAN_MIPI_TX_GPIO_DL4                                                   0x503c
/* MIPI_TX_SPECS 0x5040 {Select IP functioning specs} */
#define         YUSHAN_MIPI_TX_SPECS                                                      0x5040
/* MIPI_TX_SLEW_RATE 0x5044 {Slewrate control for lanes} */
#define         YUSHAN_MIPI_TX_SLEW_RATE                                                  0x5044
/* MIPI_TX_TEST_RESERVED 0x5048 {Test Reserved} */
#define         YUSHAN_MIPI_TX_TEST_RESERVED                                              0x5048
/* MIPI_TX_TCLK_ENABLE 0x504c {TCLK Enable for HS-Transmitter} */
#define         YUSHAN_MIPI_TX_TCLK_ENABLE                                                0x504c
/* MIPI_TX_TCLK_POST_DELAY 0x5050 {TCLK_POST Counter for HS-Transmitter} */
#define         YUSHAN_MIPI_TX_TCLK_POST_DELAY                                            0x5050
/* LINE_FILTER_BYPASS_ENABLE 0x5800 {Algorithm Enable} */
#define         YUSHAN_LINE_FILTER_BYPASS_ENABLE                                          0x5800
/* LINE_FILTER_BYPASS_VERSION 0x5804 {Version of the IP} */
#define         YUSHAN_LINE_FILTER_BYPASS_VERSION                                         0x5804
/* LINE_FILTER_BYPASS_LSTART_LEVEL 0x5808 {Line Start Level} */
#define         YUSHAN_LINE_FILTER_BYPASS_LSTART_LEVEL                                    0x5808
/* LINE_FILTER_BYPASS_LSTOP_LEVEL 0x580c {Line Stop Level} */
#define         YUSHAN_LINE_FILTER_BYPASS_LSTOP_LEVEL                                     0x580c
/* DTFILTER_BYPASS_ENABLE 0x5820 {Algorithm Enable} */
#define         YUSHAN_DTFILTER_BYPASS_ENABLE                                             0x5820
/* DTFILTER_BYPASS_VERSION 0x5824 {Version of the IP} */
#define         YUSHAN_DTFILTER_BYPASS_VERSION                                            0x5824
/* DTFILTER_BYPASS_MATCH0 0x5828 {Data Type Match0} */
#define         YUSHAN_DTFILTER_BYPASS_MATCH0                                             0x5828
/* DTFILTER_BYPASS_MATCH1 0x582c {Data Type Match1} */
#define         YUSHAN_DTFILTER_BYPASS_MATCH1                                             0x582c
/* DTFILTER_BYPASS_MATCH2 0x5830 {Data Type Match2} */
#define         YUSHAN_DTFILTER_BYPASS_MATCH2                                             0x5830
/* DTFILTER_BYPASS_MATCH3 0x5834 {Data Type Match3} */
#define         YUSHAN_DTFILTER_BYPASS_MATCH3                                             0x5834
/* LINE_FILTER_DXO_ENABLE 0x5840 {Algorithm Enable} */
#define         YUSHAN_LINE_FILTER_DXO_ENABLE                                             0x5840
/* LINE_FILTER_DXO_VERSION 0x5844 {Version of the IP} */
#define         YUSHAN_LINE_FILTER_DXO_VERSION                                            0x5844
/* LINE_FILTER_DXO_LSTART_LEVEL 0x5848 {Line Start Level} */
#define         YUSHAN_LINE_FILTER_DXO_LSTART_LEVEL                                       0x5848
/* LINE_FILTER_DXO_LSTOP_LEVEL 0x584c {Line Stop Level} */
#define         YUSHAN_LINE_FILTER_DXO_LSTOP_LEVEL                                        0x584c
/* DTFILTER_DXO_ENABLE 0x5860 {Algorithm Enable} */
#define         YUSHAN_DTFILTER_DXO_ENABLE                                                0x5860
/* DTFILTER_DXO_VERSION 0x5864 {Version of the IP} */
#define         YUSHAN_DTFILTER_DXO_VERSION                                               0x5864
/* DTFILTER_DXO_MATCH0 0x5868 {Data Type Match0} */
#define         YUSHAN_DTFILTER_DXO_MATCH0                                                0x5868
/* DTFILTER_DXO_MATCH1 0x586c {Data Type Match1} */
#define         YUSHAN_DTFILTER_DXO_MATCH1                                                0x586c
/* DTFILTER_DXO_MATCH2 0x5870 {Data Type Match2} */
#define         YUSHAN_DTFILTER_DXO_MATCH2                                                0x5870
/* DTFILTER_DXO_MATCH3 0x5874 {Data Type Match3} */
#define         YUSHAN_DTFILTER_DXO_MATCH3                                                0x5874
/* EOF_RESIZE_PRE_DXO_ENABLE 0x5880 {Algorithm Enable} */
#define         YUSHAN_EOF_RESIZE_PRE_DXO_ENABLE                                          0x5880
/* EOF_RESIZE_PRE_DXO_VERSION 0x5884 {Version of the IP} */
#define         YUSHAN_EOF_RESIZE_PRE_DXO_VERSION                                         0x5884
/* EOF_RESIZE_PRE_DXO_AUTOMATIC_CONTROL 0x5888 {eofresize automatic control} */
#define         YUSHAN_EOF_RESIZE_PRE_DXO_AUTOMATIC_CONTROL                               0x5888
/* EOF_RESIZE_PRE_DXO_H_SIZE 0x588c {Horizontal EOF line sizel} */
#define         YUSHAN_EOF_RESIZE_PRE_DXO_H_SIZE                                          0x588c
/* LBE_PRE_DXO_ENABLE 0x58a0 {line_blk_elim Enable} */
#define         YUSHAN_LBE_PRE_DXO_ENABLE                                                 0x58a0
/* LBE_PRE_DXO_VERSION 0x58a4 {IP version} */
#define         YUSHAN_LBE_PRE_DXO_VERSION                                                0x58a4
/* LBE_PRE_DXO_DFV 0x58a8 {Design for test} */
#define         YUSHAN_LBE_PRE_DXO_DFV                                                    0x58a8
/* LBE_PRE_DXO_H_SIZE 0x58ac {H-size Register} */
#define         YUSHAN_LBE_PRE_DXO_H_SIZE                                                 0x58ac
/* LBE_PRE_DXO_READ_START 0x58b0 {Read Start} */
#define         YUSHAN_LBE_PRE_DXO_READ_START                                             0x58b0
/* EOF_RESIZE_POST_DXO_ENABLE 0x58c0 {Algorithm Enable} */
#define         YUSHAN_EOF_RESIZE_POST_DXO_ENABLE                                         0x58c0
/* EOF_RESIZE_POST_DXO_VERSION 0x58c4 {Version of the IP} */
#define         YUSHAN_EOF_RESIZE_POST_DXO_VERSION                                        0x58c4
/* EOF_RESIZE_POST_DXO_AUTOMATIC_CONTROL 0x58c8 {eofresize automatic control} */
#define         YUSHAN_EOF_RESIZE_POST_DXO_AUTOMATIC_CONTROL                              0x58c8
/* EOF_RESIZE_POST_DXO_H_SIZE 0x58cc {Horizontal EOF line sizel} */
#define         YUSHAN_EOF_RESIZE_POST_DXO_H_SIZE                                         0x58cc
/* LECCI_ENABLE 0x5c00 {Algorithm Enable} */
#define         YUSHAN_LECCI_ENABLE                                                       0x5c00
/* LECCI_VERSION 0x5c04 {Version of the IP} */
#define         YUSHAN_LECCI_VERSION                                                      0x5c04
/* LECCI_MIN_INTERLINE 0x5c08 {Lecci minimum Interline} */
#define         YUSHAN_LECCI_MIN_INTERLINE                                                0x5c08
/* LECCI_OUT_BURST_CTRL 0x5c0c {Lecci output pixel burst control} */
#define         YUSHAN_LECCI_OUT_BURST_CTRL                                               0x5c0c
/* LECCI_LINE_SIZE 0x5c10 {Lecci line size} */
#define         YUSHAN_LECCI_LINE_SIZE                                                    0x5c10
/* LECCI_BYPASS_CTRL 0x5c14 {Lecci bypass control} */
#define         YUSHAN_LECCI_BYPASS_CTRL                                                  0x5c14
/* LBE_POST_DXO_ENABLE 0x5c20 {line_blk_elim Enable} */
#define         YUSHAN_LBE_POST_DXO_ENABLE                                                0x5c20
/* LBE_POST_DXO_VERSION 0x5c24 {IP version} */
#define         YUSHAN_LBE_POST_DXO_VERSION                                               0x5c24
/* LBE_POST_DXO_DFV 0x5c28 {Design for test} */
#define         YUSHAN_LBE_POST_DXO_DFV                                                   0x5c28
/* LBE_POST_DXO_H_SIZE 0x5c2c {H-size Register} */
#define         YUSHAN_LBE_POST_DXO_H_SIZE                                                0x5c2c
/* LBE_POST_DXO_READ_START 0x5c30 {Read Start} */
#define         YUSHAN_LBE_POST_DXO_READ_START                                            0x5c30
#endif
