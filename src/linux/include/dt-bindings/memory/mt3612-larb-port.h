/*
 * Copyright (c) 2018 MediaTek Inc.
 * Author: Yong Wu <yong.wu@mediatek.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef __DTS_IOMMU_PORT_MT3612_H
#define __DTS_IOMMU_PORT_MT3612_H

#define MTK_M4U_ID(larb, port)		(((larb) << 6) | (port))
/* Local arbiter ID */
#define MTK_M4U_TO_LARB(id)		(((id) >> 6) & 0x3F)
/* PortID within the local arbiter */
#define MTK_M4U_TO_PORT(id)		((id) & 0x1f)

#define M4U_LARB0_ID			0
#define M4U_LARB1_ID			1
#define M4U_LARB2_ID			2
#define M4U_LARB3_ID			3
#define M4U_LARB4_ID			4
#define M4U_LARB5_ID			5
#define M4U_LARB6_ID			6
#define M4U_LARB7_ID			7
#define M4U_LARB8_ID			8
#define M4U_LARB9_ID			9
#define M4U_LARB10_ID			10
#define M4U_LARB11_ID			11
#define M4U_LARB12_ID			12
#define M4U_LARB13_ID			13
#define M4U_LARB14_ID			14
#define M4U_LARB15_ID			15
#define M4U_LARB16_ID			16
#define M4U_LARB17_ID			17
#define M4U_LARB18_ID			18
#define M4U_LARB19_ID			19
#define M4U_LARB20_ID			20
#define M4U_LARB21_ID			21
#define M4U_LARB22_ID			22
#define M4U_LARB23_ID			23
#define M4U_LARB24_ID			24
#define M4U_LARB25_ID			25
#define M4U_LARB26_ID			26
#define M4U_LARB27_ID			27
#define M4U_LARB28_ID			28
#define M4U_LARB29_ID			29
#define M4U_LARB30_ID			30
#define M4U_LARB31_ID			31
#define M4U_LARB32_ID                   32

/* larb0 mmsys_core */
#define M4U_PORT_WDMA0_EXT		MTK_M4U_ID(M4U_LARB0_ID, 0)
#define M4U_PORT_WDMA1_EXT		MTK_M4U_ID(M4U_LARB0_ID, 1)
#define M4U_PORT_WDMA0_R_EXT		MTK_M4U_ID(M4U_LARB0_ID, 2)
#define M4U_PORT_RDMA0_EXT		MTK_M4U_ID(M4U_LARB0_ID, 3)
#define M4U_PORT_RDMA1_EXT		MTK_M4U_ID(M4U_LARB0_ID, 4)
#define M4U_PORT_RDMA0_PVRIC_EXT	MTK_M4U_ID(M4U_LARB0_ID, 5)
#define M4U_PORT_RDMA1_PVRIC_EXT	MTK_M4U_ID(M4U_LARB0_ID, 6)
#define M4U_PORT_FAKE_ENG0		MTK_M4U_ID(M4U_LARB0_ID, 7)

/* larb1 mmsys_core */
#define M4U_PORT_WDMA2_EXT		MTK_M4U_ID(M4U_LARB1_ID, 0)
#define M4U_PORT_WDMA3_EXT		MTK_M4U_ID(M4U_LARB1_ID, 1)
#define M4U_PORT_RDMA2_EXT		MTK_M4U_ID(M4U_LARB1_ID, 2)
#define M4U_PORT_RDMA3_EXT		MTK_M4U_ID(M4U_LARB1_ID, 3)
#define M4U_PORT_RDMA2_PVRIC_EXT	MTK_M4U_ID(M4U_LARB1_ID, 4)
#define M4U_PORT_RDMA3_PVRIC_EXT	MTK_M4U_ID(M4U_LARB1_ID, 5)
#define M4U_PORT_FAKE_ENG1		MTK_M4U_ID(M4U_LARB1_ID, 6)

/* larb2 mmsys_common vr */
#define M4U_PORT_WPE_VR_RDMA_0		MTK_M4U_ID(M4U_LARB2_ID, 0)
#define M4U_PORT_WPE_VR_RDMA_1		MTK_M4U_ID(M4U_LARB2_ID, 1)
#define M4U_PORT_WPE_VR_WDMA		MTK_M4U_ID(M4U_LARB2_ID, 2)
#define M4U_PORT_FE			MTK_M4U_ID(M4U_LARB2_ID, 3)
#define M4U_PORT_WDMA_LARB2		MTK_M4U_ID(M4U_LARB2_ID, 4)
#define M4U_PORT_PADDING_WDMA_0		MTK_M4U_ID(M4U_LARB2_ID, 5)
#define M4U_PORT_PADDING_WDMA_1		MTK_M4U_ID(M4U_LARB2_ID, 6)
#define M4U_PORT_FAKE_ENG_15		MTK_M4U_ID(M4U_LARB2_ID, 7)

/* larb3 mmsys_common vr */
#define M4U_PORT_FM0_IMG		MTK_M4U_ID(M4U_LARB3_ID, 0)
#define M4U_PORT_FM0_FD			MTK_M4U_ID(M4U_LARB3_ID, 1)
#define M4U_PORT_FM0_FP			MTK_M4U_ID(M4U_LARB3_ID, 2)
#define M4U_PORT_FM0_FM0		MTK_M4U_ID(M4U_LARB3_ID, 3)
#define M4U_PORT_FM0_FM0_ZNCC		MTK_M4U_ID(M4U_LARB3_ID, 4)

/* larb4 mmsys_common gaze */
#define M4U_PORT_WPE_GAZE_RDMA_0	MTK_M4U_ID(M4U_LARB4_ID, 0)
#define M4U_PORT_WPE_GAZE_RDMA_1	MTK_M4U_ID(M4U_LARB4_ID, 1)
#define M4U_PORT_WPE_GAZE_WDMA		MTK_M4U_ID(M4U_LARB4_ID, 2)
#define M4U_PORT_WDMA_LARB4		MTK_M4U_ID(M4U_LARB4_ID, 3)
#define M4U_PORT_FAKE_ENG_16		MTK_M4U_ID(M4U_LARB4_ID, 4)

/* larb5 cam side0 */
#define M4U_PORT_RRZO_0_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 0)
#define M4U_PORT_RRZO_1_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 1)
#define M4U_PORT_RRZO_0_B_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 2)
#define M4U_PORT_RRZO_1_B_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 3)
#define M4U_PORT_LSCI_0_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 4)
#define M4U_PORT_LSCI_0_B_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 5)
#define M4U_PORT_BPCI_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 6)
#define M4U_PORT_BPCI_B_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 7)
#define M4U_PORT_AAO_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 8)
#define M4U_PORT_AAO_B_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 9)
#define M4U_PORT_LSCI_1_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 10)
#define M4U_PORT_LSCI_1_B_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 11)
#define M4U_PORT_RSSO_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 12)
#define M4U_PORT_RSSO_B_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 13)
#define M4U_PORT_BEO_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 14)
#define M4U_PORT_BEO_B_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 15)
#define M4U_PORT_IMGO_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 16)
#define M4U_PORT_IMGO_B_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 17)
#define M4U_PORT_SOCO_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 18)
#define M4U_PORT_CCUI_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 19)
#define M4U_PORT_CCUO_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 20)
#define M4U_PORT_RAWI_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 21)
#define M4U_PORT_RAWI_B_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 22)
#define M4U_PORT_CCUG_LARB5		MTK_M4U_ID(M4U_LARB5_ID, 23)

/* larb6 cam side1 */
#define M4U_PORT_RRZO_0_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 0)
#define M4U_PORT_RRZO_1_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 1)
#define M4U_PORT_RRZO_0_B_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 2)
#define M4U_PORT_RRZO_1_B_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 3)
#define M4U_PORT_LSCI_0_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 4)
#define M4U_PORT_LSCI_0_B_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 5)
#define M4U_PORT_BPCI_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 6)
#define M4U_PORT_BPCI_B_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 7)
#define M4U_PORT_AAO_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 8)
#define M4U_PORT_AAO_B_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 9)
#define M4U_PORT_LSCI_1_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 10)
#define M4U_PORT_LSCI_1_B_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 11)
#define M4U_PORT_RSSO_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 12)
#define M4U_PORT_RSSO_B_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 13)
#define M4U_PORT_BEO_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 14)
#define M4U_PORT_BEO_B_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 15)
#define M4U_PORT_IMGO_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 16)
#define M4U_PORT_IMGO_B_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 17)
#define M4U_PORT_SOCO_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 18)
#define M4U_PORT_CCUI_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 19)
#define M4U_PORT_CCUO_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 20)
#define M4U_PORT_RAWI_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 21)
#define M4U_PORT_RAWI_B_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 22)
#define M4U_PORT_CCUG_LARB6		MTK_M4U_ID(M4U_LARB6_ID, 23)

/* larb7 img side0 */
#define M4U_PORT_IMGI_A_LARB7		MTK_M4U_ID(M4U_LARB7_ID, 0)
#define M4U_PORT_IMGI_B_LARB7		MTK_M4U_ID(M4U_LARB7_ID, 1)
#define M4U_PORT_IMG3O_A_LARB7		MTK_M4U_ID(M4U_LARB7_ID, 2)
#define M4U_PORT_IMG3O_B_LARB7		MTK_M4U_ID(M4U_LARB7_ID, 3)
#define M4U_PORT_LCEI_A_LARB7		MTK_M4U_ID(M4U_LARB7_ID, 4)
#define M4U_PORT_LCEI_B_LARB7		MTK_M4U_ID(M4U_LARB7_ID, 5)
#define M4U_PORT_FAKE1_LARB7		MTK_M4U_ID(M4U_LARB7_ID, 6)
#define M4U_PORT_FAKE2_LARB7		MTK_M4U_ID(M4U_LARB7_ID, 7)

/* larb8 img side1 */
#define M4U_PORT_IMGI_A_LARB8		MTK_M4U_ID(M4U_LARB8_ID, 0)
#define M4U_PORT_IMGI_B_LARB8		MTK_M4U_ID(M4U_LARB8_ID, 1)
#define M4U_PORT_IMG3O_A_LARB8		MTK_M4U_ID(M4U_LARB8_ID, 2)
#define M4U_PORT_IMG3O_B_LARB8		MTK_M4U_ID(M4U_LARB8_ID, 3)
#define M4U_PORT_LCEI_A_LARB8		MTK_M4U_ID(M4U_LARB8_ID, 4)
#define M4U_PORT_LCEI_B_LARB8		MTK_M4U_ID(M4U_LARB8_ID, 5)
#define M4U_PORT_FAKE1_LARB8		MTK_M4U_ID(M4U_LARB8_ID, 6)
#define M4U_PORT_FAKE2_LARB8		MTK_M4U_ID(M4U_LARB8_ID, 7)

/* larb9 isp gaze0 */
#define M4U_PORT_RRZO_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 0)
#define M4U_PORT_LSCI_0_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 1)
#define M4U_PORT_BPCI_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 2)
#define M4U_PORT_IMGO_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 3)
#define M4U_PORT_IMGI_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 4)
#define M4U_PORT_IMG3O_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 5)
#define M4U_PORT_AAO_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 6)
#define M4U_PORT_LSCI_1_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 7)
#define M4U_PORT_RSSO_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 8)
#define M4U_PORT_SOCO_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 9)
#define M4U_PORT_LCEI_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 10)
#define M4U_PORT_CCUI_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 11)
#define M4U_PORT_CCUO_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 12)
#define M4U_PORT_WAWI_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 13)
#define M4U_PORT_CCUG_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 14)
#define M4U_PORT_FAKE_LARB9		MTK_M4U_ID(M4U_LARB9_ID, 15)

/* larb10 isp gaze0 */
#define M4U_PORT_RRZO_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 0)
#define M4U_PORT_LSCI_0_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 1)
#define M4U_PORT_BPCI_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 2)
#define M4U_PORT_IMGO_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 3)
#define M4U_PORT_IMGI_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 4)
#define M4U_PORT_IMG3O_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 5)
#define M4U_PORT_AAO_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 6)
#define M4U_PORT_LSCI_1_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 7)
#define M4U_PORT_RSSO_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 8)
#define M4U_PORT_SOCO_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 9)
#define M4U_PORT_LCEI_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 10)
#define M4U_PORT_CCUI_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 11)
#define M4U_PORT_CCUO_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 12)
#define M4U_PORT_WAWI_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 13)
#define M4U_PORT_CCUG_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 14)
#define M4U_PORT_FAKE_LARB10		MTK_M4U_ID(M4U_LARB10_ID, 15)

/* VPU is not a normal larb. Only define a dummy one for VPU. */
#define M4U_PORT_VPU_IOMMU_READ		MTK_M4U_ID(M4U_LARB0_ID, 8)
#define M4U_PORT_VPU_IOMMU_WRITE	MTK_M4U_ID(M4U_LARB0_ID, 9)

#endif