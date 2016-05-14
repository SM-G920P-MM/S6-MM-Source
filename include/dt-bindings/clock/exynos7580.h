/*
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Device Tree binding constants for Exynos7580 clock controller.
 */

#ifndef _DT_BINDINGS_CLOCK_EXYNOS_7580_H
#define _DT_BINDINGS_CLOCK_EXYNOS_7580_H

/*
 * NOTE:
 * Clock DT binding constants should be in the range of 3000 to 4999(nr_clks-1)
 * 0 to 2999 are used for enums defined in drivers/clk/samsung/clk-exynos7580.c
 */

#define CLK_SMMU_BASE				(3000)

#define CLK_ACLK_SMMU_MSCL_MMU			(CLK_SMMU_BASE + 0)
#define CLK_PCLK_SMMU_MSCL_MMU			(CLK_SMMU_BASE + 1)

#define CLK_ACLK_SMMU_DISP_MMU			(CLK_SMMU_BASE + 2)
#define CLK_PCLK_SMMU_DISP_MMU			(CLK_SMMU_BASE + 3)

#define CLK_ACLK_SMMU_MFC_MMU			(CLK_SMMU_BASE + 4)
#define CLK_PCLK_SMMU_MFC_MMU			(CLK_SMMU_BASE + 5)

#define CLK_MFC_BASE 				(3200)

#define CLK_ACLK_MFC				(CLK_MFC_BASE + 0)
#define CLK_ACLK_MFCMSCL_266			(CLK_MFC_BASE + 1)
#define CLK_MOUT_ACLK_MFC_266_USER		(CLK_MFC_BASE + 2)
#define CLK_DOUT_ACLK_MFCMSCL_266		(CLK_MFC_BASE + 3)

#define CLK_M2M_SCALER_BASE 			(3500)

#define GATE_ACLK_M2M_SCALER0			(CLK_M2M_SCALER_BASE + 0)
#define GATE_ACLK_M2M_SCALER1			(CLK_M2M_SCALER_BASE + 1)
#define GATE_PCLK_M2M_SCALER0			(CLK_M2M_SCALER_BASE + 2)
#define GATE_PCLK_M2M_SCALER1			(CLK_M2M_SCALER_BASE + 3)
#define CLK_ACLK_MFCMSCL_400			(CLK_M2M_SCALER_BASE + 4)
#define CLK_MOUT_ACLK_MSCL_400_USER		(CLK_M2M_SCALER_BASE + 5)
#define CLK_ACLK_JPEG				(CLK_M2M_SCALER_BASE + 6)

#define CLK_DISP_BASE				(3600)

#define CLK_MUX_ACLK_DISP_200			(CLK_DISP_BASE + 0)
#define CLK_MUX_SCLK_DISP_DECON_INT_ECLK_A	(CLK_DISP_BASE + 1)
#define CLK_MUX_SCLK_DISP_DECON_INT_ECLK_B	(CLK_DISP_BASE + 2)
#define CLK_MUX_SCLK_DISP_DECON_INT_VCLK_A	(CLK_DISP_BASE + 3)
#define CLK_MUX_SCLK_DISP_DECON_INT_VCLK_B	(CLK_DISP_BASE + 4)
#define CLK_MUX_SCLK_DECON_INT_ECLK		(CLK_DISP_BASE + 5)
#define CLK_MUX_SCLK_DECON_INT_VCLK		(CLK_DISP_BASE + 6)
#define CLK_MUX_ACLK_DISP_200_USER		(CLK_DISP_BASE + 7)
#define CLK_MUX_SCLK_DECON_INT_ECLK_USER	(CLK_DISP_BASE + 8)
#define CLK_MUX_SCLK_DECON_INT_VCLK_USER	(CLK_DISP_BASE + 9)
#define CLK_MUX_PHYCLK_BITCLKDIV8_USER		(CLK_DISP_BASE + 10)
#define CLK_MUX_PHYCLK_RXCLKESC0_USER		(CLK_DISP_BASE + 11)

#define CLK_DIV_ACLK_DISP_200			(CLK_DISP_BASE + 12)
#define CLK_DIV_SCLK_DISP_DECON_INT_ECLK	(CLK_DISP_BASE + 13)
#define CLK_DIV_SCLK_DISP_DECON_INT_VCLK	(CLK_DISP_BASE + 14)
#define CLK_DIV_PCLK_DISP_100			(CLK_DISP_BASE + 15)
#define CLK_DIV_SCLK_DECON_INT_ECLK		(CLK_DISP_BASE + 16)
#define CLK_DIV_SCLK_DECON_INT_VCLK		(CLK_DISP_BASE + 17)

#define CLK_ACLK_DECON0				(CLK_DISP_BASE + 18)
#define CLK_ACLK_XIU_DISP1			(CLK_DISP_BASE + 19)
#define CLK_SCLK_DSI_LINK0_I_RGB_VCLK		(CLK_DISP_BASE + 20)
#define CLK_PCLK_DECON_INT			(CLK_DISP_BASE + 21)
#define CLK_PCLK_DSI_LINK0			(CLK_DISP_BASE + 22)
#define CLK_SCLK_DISP_DECON_INT_ECLK		(CLK_DISP_BASE + 23)
#define CLK_SCLK_DISP_DECON_INT_VCLK		(CLK_DISP_BASE + 24)
#define CLK_SCLK_DECON_INT_ECLK			(CLK_DISP_BASE + 25)
#define CLK_SCLK_DECON_INT_VCLK			(CLK_DISP_BASE + 26)
#define CLK_PHYCLK_BITCLKDIV8			(CLK_DISP_BASE + 27)
#define CLK_PHYCLK_RXCLKESC0			(CLK_DISP_BASE + 28)

#define CLK_TOP_BASE			(3800)

#define CLK_MUX_BUS_PLL_TOP_USER		(CLK_TOP_BASE + 1)

#endif /* _DT_BINDINGS_CLOCK_EXYNOS_7580_H */
