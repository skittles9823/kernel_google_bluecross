/* auto generated: Monday, August 15th, 2016 12:26:49pm */
/*
 * Copyright (c) 2016, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * Neither the name of Intel nor the names of its contributors may be used
 * to endorse or promote products derived from this software without specific
 * prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __MNH_HWIO_MIPI_TOP_
#define __MNH_HWIO_MIPI_TOP_

#define HWIO_MIPI_TOP_TX0_MODE_REGOFF 0x0
#define HWIO_MIPI_TOP_TX0_MODE_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_MODE_REGOFF)
#define HWIO_MIPI_TOP_TX0_MODE_RSVD0_FLDMASK (0xffffff80)
#define HWIO_MIPI_TOP_TX0_MODE_RSVD0_FLDSHFT (7)
#define HWIO_MIPI_TOP_TX0_MODE_TX0_FORCE_OFF_FLDMASK (0x40)
#define HWIO_MIPI_TOP_TX0_MODE_TX0_FORCE_OFF_FLDSHFT (6)
#define HWIO_MIPI_TOP_TX0_MODE_TX0_CUR_BYP_SEL_FLDMASK (0x38)
#define HWIO_MIPI_TOP_TX0_MODE_TX0_CUR_BYP_SEL_FLDSHFT (3)
#define HWIO_MIPI_TOP_TX0_MODE_TX0_BYP_SEL_FLDMASK (0x6)
#define HWIO_MIPI_TOP_TX0_MODE_TX0_BYP_SEL_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX0_MODE_TX0_FUNC_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX0_MODE_TX0_FUNC_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_BYPINT_REGOFF 0x4
#define HWIO_MIPI_TOP_TX0_BYPINT_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_BYPINT_REGOFF)
#define HWIO_MIPI_TOP_TX0_BYPINT_RSVD0_FLDMASK (0xfffffffc)
#define HWIO_MIPI_TOP_TX0_BYPINT_RSVD0_FLDSHFT (2)
#define HWIO_MIPI_TOP_TX0_BYPINT_TX0_INT_EN_FLDMASK (0x2)
#define HWIO_MIPI_TOP_TX0_BYPINT_TX0_INT_EN_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX0_BYPINT_TX0_BYP_OF_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX0_BYPINT_TX0_BYP_OF_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_REGOFF 0x8
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_REGOFF)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_RSVD0_FLDMASK (0xe0000000)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_RSVD0_FLDSHFT (29)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_GMP_CNTRL_FLDMASK (0x18000000)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_GMP_CNTRL_FLDSHFT (27)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_CPBIAS_CNTRL_FLDMASK (0x7f00000)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_CPBIAS_CNTRL_FLDSHFT (20)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_VCO_CNTRL_FLDMASK (0xfc000)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_VCO_CNTRL_FLDSHFT (14)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_N_FLDMASK (0x3c00)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_N_FLDSHFT (10)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_M_FLDMASK (0x3ff)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG0_M_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG1_REGOFF 0x0C
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG1_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG1_REGOFF)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG1_RSVD0_FLDMASK (0xfffff000)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG1_RSVD0_FLDSHFT (12)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG1_PROP_CNTRL_FLDMASK (0xfc0)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG1_PROP_CNTRL_FLDSHFT (6)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG1_INT_CNTRL_FLDMASK (0x3f)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CONFIG1_INT_CNTRL_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_REGOFF 0x10
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_REGOFF)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_RSVD0_FLDMASK (0xffffff00)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_RSVD0_FLDSHFT (8)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_CLK_SEL_FLDMASK (0xc0)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_CLK_SEL_FLDSHFT (6)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_FORCE_LOCK_FLDMASK (0x20)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_FORCE_LOCK_FLDSHFT (5)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_GP_CLK_EN_FLDMASK (0x10)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_GP_CLK_EN_FLDSHFT (4)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_FORCEPLL_FLDMASK (0x8)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_FORCEPLL_FLDSHFT (3)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_UPDATEPLL_FLDMASK (0x4)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_UPDATEPLL_FLDSHFT (2)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_SHADOW_CLEAR_FLDMASK (0x2)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_SHADOW_CLEAR_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_PLL_SHADOW_CONTROL_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_CNTRL_PLL_SHADOW_CONTROL_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_DPHY_PLL_STATUS_REGOFF 0x14
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_STATUS_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_DPHY_PLL_STATUS_REGOFF)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_STATUS_RSVD0_FLDMASK (0xfffffffc)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_STATUS_RSVD0_FLDSHFT (2)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_STATUS_PLL_SHADOW_CONTROL_BUS_FLDMASK (0x2)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_STATUS_PLL_SHADOW_CONTROL_BUS_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_STATUS_LOCK_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX0_DPHY_PLL_STATUS_LOCK_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_DPHY_CONFIG_REGOFF 0x18
#define HWIO_MIPI_TOP_TX0_DPHY_CONFIG_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_DPHY_CONFIG_REGOFF)
#define HWIO_MIPI_TOP_TX0_DPHY_CONFIG_RSVD0_FLDMASK (0xffff0000)
#define HWIO_MIPI_TOP_TX0_DPHY_CONFIG_RSVD0_FLDSHFT (16)
#define HWIO_MIPI_TOP_TX0_DPHY_CONFIG_CFGCLKFREQRANGE_FLDMASK (0xff00)
#define HWIO_MIPI_TOP_TX0_DPHY_CONFIG_CFGCLKFREQRANGE_FLDSHFT (8)
#define HWIO_MIPI_TOP_TX0_DPHY_CONFIG_RSVD1_FLDMASK (0x80)
#define HWIO_MIPI_TOP_TX0_DPHY_CONFIG_RSVD1_FLDSHFT (7)
#define HWIO_MIPI_TOP_TX0_DPHY_CONFIG_HSFREQRANGE_FLDMASK (0x7f)
#define HWIO_MIPI_TOP_TX0_DPHY_CONFIG_HSFREQRANGE_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_REGOFF 0x1C
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_DPHY_CONTROL_REGOFF)
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_RSVD0_FLDMASK (0xfffffff0)
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_RSVD0_FLDSHFT (4)
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_PHY_SHADOW_CLEAR_FLDMASK (0x8)
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_PHY_SHADOW_CLEAR_FLDSHFT (3)
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_PHY_SHADOW_CONTROL_FLDMASK (0x4)
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_PHY_SHADOW_CONTROL_FLDSHFT (2)
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_RSTZ_N_FLDMASK (0x2)
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_RSTZ_N_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_SHUTDOWNZ_N_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX0_DPHY_CONTROL_SHUTDOWNZ_N_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_REGOFF 0x20
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_DPHY_IOTEST_REGOFF)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_RSVD0_FLDMASK (0xffff8000)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_RSVD0_FLDSHFT (15)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_BISTOK_FLDMASK (0x4000)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_BISTOK_FLDSHFT (14)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_BISTDONE_FLDMASK (0x2000)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_BISTDONE_FLDSHFT (13)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_BISTON_FLDMASK (0x1000)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_BISTON_FLDSHFT (12)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_CONT_DATA_FLDMASK (0xffe)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_CONT_DATA_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_CONT_EN_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX0_DPHY_IOTEST_CONT_EN_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_DPHY_ESCAPE_REGOFF 0x24
#define HWIO_MIPI_TOP_TX0_DPHY_ESCAPE_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_DPHY_ESCAPE_REGOFF)
#define HWIO_MIPI_TOP_TX0_DPHY_ESCAPE_TX0_DPHY_ESCAPE_FLDMASK (0xffffffff)
#define HWIO_MIPI_TOP_TX0_DPHY_ESCAPE_TX0_DPHY_ESCAPE_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_MODE_REGOFF 0x28
#define HWIO_MIPI_TOP_TX1_MODE_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_MODE_REGOFF)
#define HWIO_MIPI_TOP_TX1_MODE_RSVD0_FLDMASK (0xffffff80)
#define HWIO_MIPI_TOP_TX1_MODE_RSVD0_FLDSHFT (7)
#define HWIO_MIPI_TOP_TX1_MODE_TX1_FORCE_OFF_FLDMASK (0x40)
#define HWIO_MIPI_TOP_TX1_MODE_TX1_FORCE_OFF_FLDSHFT (6)
#define HWIO_MIPI_TOP_TX1_MODE_TX1_CUR_BYP_SEL_FLDMASK (0x38)
#define HWIO_MIPI_TOP_TX1_MODE_TX1_CUR_BYP_SEL_FLDSHFT (3)
#define HWIO_MIPI_TOP_TX1_MODE_TX1_BYP_SEL_FLDMASK (0x6)
#define HWIO_MIPI_TOP_TX1_MODE_TX1_BYP_SEL_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX1_MODE_TX1_FUNC_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX1_MODE_TX1_FUNC_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_BYPINT_REGOFF 0x2C
#define HWIO_MIPI_TOP_TX1_BYPINT_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_BYPINT_REGOFF)
#define HWIO_MIPI_TOP_TX1_BYPINT_RSVD0_FLDMASK (0xfffffffc)
#define HWIO_MIPI_TOP_TX1_BYPINT_RSVD0_FLDSHFT (2)
#define HWIO_MIPI_TOP_TX1_BYPINT_TX1_INT_EN_FLDMASK (0x2)
#define HWIO_MIPI_TOP_TX1_BYPINT_TX1_INT_EN_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX1_BYPINT_TX1_BYP_OF_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX1_BYPINT_TX1_BYP_OF_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_REGOFF 0x30
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_REGOFF)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_RSVD0_FLDMASK (0xe0000000)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_RSVD0_FLDSHFT (29)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_GMP_CNTRL_FLDMASK (0x18000000)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_GMP_CNTRL_FLDSHFT (27)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_CPBIAS_CNTRL_FLDMASK (0x7f00000)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_CPBIAS_CNTRL_FLDSHFT (20)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_VCO_CNTRL_FLDMASK (0xfc000)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_VCO_CNTRL_FLDSHFT (14)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_N_FLDMASK (0x3c00)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_N_FLDSHFT (10)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_M_FLDMASK (0x3ff)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG0_M_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG1_REGOFF 0x34
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG1_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG1_REGOFF)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG1_RSVD0_FLDMASK (0xfffff000)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG1_RSVD0_FLDSHFT (12)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG1_PROP_CNTRL_FLDMASK (0xfc0)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG1_PROP_CNTRL_FLDSHFT (6)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG1_INT_CNTRL_FLDMASK (0x3f)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CONFIG1_INT_CNTRL_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_REGOFF 0x38
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_REGOFF)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_RSVD0_FLDMASK (0xffffff00)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_RSVD0_FLDSHFT (8)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_CLK_SEL_FLDMASK (0xc0)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_CLK_SEL_FLDSHFT (6)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_FORCE_LOCK_FLDMASK (0x20)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_FORCE_LOCK_FLDSHFT (5)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_GP_CLK_EN_FLDMASK (0x10)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_GP_CLK_EN_FLDSHFT (4)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_FORCEPLL_FLDMASK (0x8)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_FORCEPLL_FLDSHFT (3)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_UPDATEPLL_FLDMASK (0x4)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_UPDATEPLL_FLDSHFT (2)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_SHADOW_CLEAR_FLDMASK (0x2)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_SHADOW_CLEAR_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_PLL_SHADOW_CONTROL_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_CNTRL_PLL_SHADOW_CONTROL_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_DPHY_PLL_STATUS_REGOFF 0x3C
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_STATUS_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_DPHY_PLL_STATUS_REGOFF)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_STATUS_RSVD0_FLDMASK (0xfffffffc)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_STATUS_RSVD0_FLDSHFT (2)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_STATUS_PLL_SHADOW_CONTROL_BUS_FLDMASK (0x2)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_STATUS_PLL_SHADOW_CONTROL_BUS_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_STATUS_LOCK_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX1_DPHY_PLL_STATUS_LOCK_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_DPHY_CONFIG_REGOFF 0x40
#define HWIO_MIPI_TOP_TX1_DPHY_CONFIG_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_DPHY_CONFIG_REGOFF)
#define HWIO_MIPI_TOP_TX1_DPHY_CONFIG_RSVD0_FLDMASK (0xffff0000)
#define HWIO_MIPI_TOP_TX1_DPHY_CONFIG_RSVD0_FLDSHFT (16)
#define HWIO_MIPI_TOP_TX1_DPHY_CONFIG_CFGCLKFREQRANGE_FLDMASK (0xff00)
#define HWIO_MIPI_TOP_TX1_DPHY_CONFIG_CFGCLKFREQRANGE_FLDSHFT (8)
#define HWIO_MIPI_TOP_TX1_DPHY_CONFIG_RSVD1_FLDMASK (0x80)
#define HWIO_MIPI_TOP_TX1_DPHY_CONFIG_RSVD1_FLDSHFT (7)
#define HWIO_MIPI_TOP_TX1_DPHY_CONFIG_HSFREQRANGE_FLDMASK (0x7f)
#define HWIO_MIPI_TOP_TX1_DPHY_CONFIG_HSFREQRANGE_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_REGOFF 0x44
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_DPHY_CONTROL_REGOFF)
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_RSVD0_FLDMASK (0xfffffff0)
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_RSVD0_FLDSHFT (4)
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_PHY_SHADOW_CLEAR_FLDMASK (0x8)
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_PHY_SHADOW_CLEAR_FLDSHFT (3)
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_PHY_SHADOW_CONTROL_FLDMASK (0x4)
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_PHY_SHADOW_CONTROL_FLDSHFT (2)
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_RSTZ_N_FLDMASK (0x2)
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_RSTZ_N_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_SHUTDOWNZ_N_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX1_DPHY_CONTROL_SHUTDOWNZ_N_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_REGOFF 0x48
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_DPHY_IOTEST_REGOFF)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_RSVD0_FLDMASK (0xffff8000)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_RSVD0_FLDSHFT (15)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_BISTOK_FLDMASK (0x4000)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_BISTOK_FLDSHFT (14)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_BISTDONE_FLDMASK (0x2000)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_BISTDONE_FLDSHFT (13)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_BISTON_FLDMASK (0x1000)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_BISTON_FLDSHFT (12)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_CONT_DATA_FLDMASK (0xffe)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_CONT_DATA_FLDSHFT (1)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_CONT_EN_FLDMASK (0x1)
#define HWIO_MIPI_TOP_TX1_DPHY_IOTEST_CONT_EN_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_DPHY_ESCAPE_REGOFF 0x4C
#define HWIO_MIPI_TOP_TX1_DPHY_ESCAPE_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_DPHY_ESCAPE_REGOFF)
#define HWIO_MIPI_TOP_TX1_DPHY_ESCAPE_tx1_dphy_escape_FLDMASK (0xffffffff)
#define HWIO_MIPI_TOP_TX1_DPHY_ESCAPE_tx1_dphy_escape_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX0_MODE_REGOFF 0x50
#define HWIO_MIPI_TOP_RX0_MODE_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX0_MODE_REGOFF)
#define HWIO_MIPI_TOP_RX0_MODE_RSVD0_FLDMASK (0xff000000)
#define HWIO_MIPI_TOP_RX0_MODE_RSVD0_FLDSHFT (24)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_ECC_FLDMASK (0xff0000)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_ECC_FLDSHFT (16)
#define HWIO_MIPI_TOP_RX0_MODE_RSVD1_FLDMASK (0xf800)
#define HWIO_MIPI_TOP_RX0_MODE_RSVD1_FLDSHFT (11)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_VC_EN_FLDMASK (0x780)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_VC_EN_FLDSHFT (7)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_FORCE_OFF_FLDMASK (0x40)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_FORCE_OFF_FLDSHFT (6)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_CUR_BYP_MODE_FLDMASK (0x38)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_CUR_BYP_MODE_FLDSHFT (3)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_BYP_TX1_EN_FLDMASK (0x4)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_BYP_TX1_EN_FLDSHFT (2)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_BYP_TX0_EN_FLDMASK (0x2)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_BYP_TX0_EN_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_IPU_EN_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX0_MODE_RX0_IPU_EN_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_REGOFF 0x54
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_REGOFF)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_RSVD0_FLDMASK (0xe0000000)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_RSVD0_FLDSHFT (29)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_GMP_CNTRL_FLDMASK (0x18000000)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_GMP_CNTRL_FLDSHFT (27)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_CPBIAS_CNTRL_FLDMASK (0x7f00000)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_CPBIAS_CNTRL_FLDSHFT (20)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_VCO_CNTRL_FLDMASK (0xfc000)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_VCO_CNTRL_FLDSHFT (14)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_N_FLDMASK (0x3c00)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_N_FLDSHFT (10)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_M_FLDMASK (0x3ff)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG0_M_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG1_REGOFF 0x58
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG1_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG1_REGOFF)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG1_RSVD0_FLDMASK (0xfffff000)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG1_RSVD0_FLDSHFT (12)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG1_PROP_CNTRL_FLDMASK (0xfc0)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG1_PROP_CNTRL_FLDSHFT (6)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG1_INT_CNTRL_FLDMASK (0x3f)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CONFIG1_INT_CNTRL_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_REGOFF 0x5C
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_REGOFF)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_RSVD0_FLDMASK (0xffffff00)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_RSVD0_FLDSHFT (8)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_CLK_SEL_FLDMASK (0xc0)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_CLK_SEL_FLDSHFT (6)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_FORCE_LOCK_FLDMASK (0x20)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_FORCE_LOCK_FLDSHFT (5)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_GP_CLK_EN_FLDMASK (0x10)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_GP_CLK_EN_FLDSHFT (4)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_FORCEPLL_FLDMASK (0x8)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_FORCEPLL_FLDSHFT (3)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_UPDATEPLL_FLDMASK (0x4)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_UPDATEPLL_FLDSHFT (2)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_SHADOW_CLEAR_FLDMASK (0x2)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_SHADOW_CLEAR_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_PLL_SHADOW_CONTROL_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_CNTRL_PLL_SHADOW_CONTROL_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX0_DPHY_PLL_STATUS_REGOFF 0x60
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_STATUS_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX0_DPHY_PLL_STATUS_REGOFF)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_STATUS_RSVD0_FLDMASK (0xfffffffc)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_STATUS_RSVD0_FLDSHFT (2)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_STATUS_PLL_SHADOW_CONTROL_BUS_FLDMASK (0x2)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_STATUS_PLL_SHADOW_CONTROL_BUS_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_STATUS_LOCK_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX0_DPHY_PLL_STATUS_LOCK_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX0_DPHY_CONFIG_REGOFF 0x64
#define HWIO_MIPI_TOP_RX0_DPHY_CONFIG_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX0_DPHY_CONFIG_REGOFF)
#define HWIO_MIPI_TOP_RX0_DPHY_CONFIG_RSVD0_FLDMASK (0xffff0000)
#define HWIO_MIPI_TOP_RX0_DPHY_CONFIG_RSVD0_FLDSHFT (16)
#define HWIO_MIPI_TOP_RX0_DPHY_CONFIG_CFGCLKFREQRANGE_FLDMASK (0xff00)
#define HWIO_MIPI_TOP_RX0_DPHY_CONFIG_CFGCLKFREQRANGE_FLDSHFT (8)
#define HWIO_MIPI_TOP_RX0_DPHY_CONFIG_RSVD1_FLDMASK (0x80)
#define HWIO_MIPI_TOP_RX0_DPHY_CONFIG_RSVD1_FLDSHFT (7)
#define HWIO_MIPI_TOP_RX0_DPHY_CONFIG_HSFREQRANGE_FLDMASK (0x7f)
#define HWIO_MIPI_TOP_RX0_DPHY_CONFIG_HSFREQRANGE_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX0_DPHY_CONTROL_REGOFF 0x68
#define HWIO_MIPI_TOP_RX0_DPHY_CONTROL_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX0_DPHY_CONTROL_REGOFF)
#define HWIO_MIPI_TOP_RX0_DPHY_CONTROL_RSVD0_FLDMASK (0xfffffff8)
#define HWIO_MIPI_TOP_RX0_DPHY_CONTROL_RSVD0_FLDSHFT (3)
#define HWIO_MIPI_TOP_RX0_DPHY_CONTROL_PHY_SHADOW_CONTROL_FLDMASK (0x4)
#define HWIO_MIPI_TOP_RX0_DPHY_CONTROL_PHY_SHADOW_CONTROL_FLDSHFT (2)
#define HWIO_MIPI_TOP_RX0_DPHY_CONTROL_RSTZ_N_FLDMASK (0x2)
#define HWIO_MIPI_TOP_RX0_DPHY_CONTROL_RSTZ_N_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX0_DPHY_CONTROL_SHUTDOWNZ_N_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX0_DPHY_CONTROL_SHUTDOWNZ_N_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_REGOFF 0x6C
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX0_DPHY_IOTEST_REGOFF)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_RSVD0_FLDMASK (0xffff8000)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_RSVD0_FLDSHFT (15)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_BISTOK_FLDMASK (0x4000)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_BISTOK_FLDSHFT (14)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_BISTDONE_FLDMASK (0x2000)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_BISTDONE_FLDSHFT (13)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_BISTON_FLDMASK (0x1000)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_BISTON_FLDSHFT (12)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_CONT_DATA_FLDMASK (0xffe)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_CONT_DATA_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_CONT_EN_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX0_DPHY_IOTEST_CONT_EN_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX0_DPHY_ESCAPE_REGOFF 0x70
#define HWIO_MIPI_TOP_RX0_DPHY_ESCAPE_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX0_DPHY_ESCAPE_REGOFF)
#define HWIO_MIPI_TOP_RX0_DPHY_ESCAPE_rx0_dphy_escape_FLDMASK (0xffffffff)
#define HWIO_MIPI_TOP_RX0_DPHY_ESCAPE_rx0_dphy_escape_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX1_MODE_REGOFF 0x74
#define HWIO_MIPI_TOP_RX1_MODE_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX1_MODE_REGOFF)
#define HWIO_MIPI_TOP_RX1_MODE_RSVD0_FLDMASK (0xff000000)
#define HWIO_MIPI_TOP_RX1_MODE_RSVD0_FLDSHFT (24)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_ECC_FLDMASK (0xff0000)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_ECC_FLDSHFT (16)
#define HWIO_MIPI_TOP_RX1_MODE_RSVD1_FLDMASK (0xf800)
#define HWIO_MIPI_TOP_RX1_MODE_RSVD1_FLDSHFT (11)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_VC_EN_FLDMASK (0x780)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_VC_EN_FLDSHFT (7)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_FORCE_OFF_FLDMASK (0x40)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_FORCE_OFF_FLDSHFT (6)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_CUR_BYP_MODE_FLDMASK (0x38)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_CUR_BYP_MODE_FLDSHFT (3)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_BYP_TX1_EN_FLDMASK (0x4)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_BYP_TX1_EN_FLDSHFT (2)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_BYP_TX0_EN_FLDMASK (0x2)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_BYP_TX0_EN_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_IPU_EN_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX1_MODE_RX1_IPU_EN_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX1_DPHY_CONFIG_REGOFF 0x78
#define HWIO_MIPI_TOP_RX1_DPHY_CONFIG_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX1_DPHY_CONFIG_REGOFF)
#define HWIO_MIPI_TOP_RX1_DPHY_CONFIG_RSVD0_FLDMASK (0xffff0000)
#define HWIO_MIPI_TOP_RX1_DPHY_CONFIG_RSVD0_FLDSHFT (16)
#define HWIO_MIPI_TOP_RX1_DPHY_CONFIG_CFGCLKFREQRANGE_FLDMASK (0xff00)
#define HWIO_MIPI_TOP_RX1_DPHY_CONFIG_CFGCLKFREQRANGE_FLDSHFT (8)
#define HWIO_MIPI_TOP_RX1_DPHY_CONFIG_RSVD1_FLDMASK (0x80)
#define HWIO_MIPI_TOP_RX1_DPHY_CONFIG_RSVD1_FLDSHFT (7)
#define HWIO_MIPI_TOP_RX1_DPHY_CONFIG_HSFREQRANGE_FLDMASK (0x7f)
#define HWIO_MIPI_TOP_RX1_DPHY_CONFIG_HSFREQRANGE_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX1_DPHY_CONTROL_REGOFF 0x7C
#define HWIO_MIPI_TOP_RX1_DPHY_CONTROL_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX1_DPHY_CONTROL_REGOFF)
#define HWIO_MIPI_TOP_RX1_DPHY_CONTROL_RSVD0_FLDMASK (0xfffffff8)
#define HWIO_MIPI_TOP_RX1_DPHY_CONTROL_RSVD0_FLDSHFT (3)
#define HWIO_MIPI_TOP_RX1_DPHY_CONTROL_PHY_SHADOW_CONTROL_FLDMASK (0x4)
#define HWIO_MIPI_TOP_RX1_DPHY_CONTROL_PHY_SHADOW_CONTROL_FLDSHFT (2)
#define HWIO_MIPI_TOP_RX1_DPHY_CONTROL_RSTZ_N_FLDMASK (0x2)
#define HWIO_MIPI_TOP_RX1_DPHY_CONTROL_RSTZ_N_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX1_DPHY_CONTROL_SHUTDOWNZ_N_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX1_DPHY_CONTROL_SHUTDOWNZ_N_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_REGOFF 0x80
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX1_DPHY_IOTEST_REGOFF)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_RSVD0_FLDMASK (0xffff8000)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_RSVD0_FLDSHFT (15)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_BISTOK_FLDMASK (0x4000)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_BISTOK_FLDSHFT (14)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_BISTDONE_FLDMASK (0x2000)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_BISTDONE_FLDSHFT (13)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_BISTON_FLDMASK (0x1000)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_BISTON_FLDSHFT (12)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_CONT_DATA_FLDMASK (0xffe)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_CONT_DATA_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_CONT_EN_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX1_DPHY_IOTEST_CONT_EN_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX1_DPHY_ESCAPE_REGOFF 0x84
#define HWIO_MIPI_TOP_RX1_DPHY_ESCAPE_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX1_DPHY_ESCAPE_REGOFF)
#define HWIO_MIPI_TOP_RX1_DPHY_ESCAPE_rx1_dphy_escape_FLDMASK (0xffffffff)
#define HWIO_MIPI_TOP_RX1_DPHY_ESCAPE_rx1_dphy_escape_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX2_MODE_REGOFF 0x88
#define HWIO_MIPI_TOP_RX2_MODE_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX2_MODE_REGOFF)
#define HWIO_MIPI_TOP_RX2_MODE_RSVD0_FLDMASK (0xff000000)
#define HWIO_MIPI_TOP_RX2_MODE_RSVD0_FLDSHFT (24)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_ECC_FLDMASK (0xff0000)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_ECC_FLDSHFT (16)
#define HWIO_MIPI_TOP_RX2_MODE_RSVD1_FLDMASK (0xf800)
#define HWIO_MIPI_TOP_RX2_MODE_RSVD1_FLDSHFT (11)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_VC_EN_FLDMASK (0x780)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_VC_EN_FLDSHFT (7)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_FORCE_OFF_FLDMASK (0x40)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_FORCE_OFF_FLDSHFT (6)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_CUR_BYP_MODE_FLDMASK (0x38)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_CUR_BYP_MODE_FLDSHFT (3)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_BYP_TX1_EN_FLDMASK (0x4)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_BYP_TX1_EN_FLDSHFT (2)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_BYP_TX0_EN_FLDMASK (0x2)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_BYP_TX0_EN_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_IPU_EN_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX2_MODE_RX2_IPU_EN_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX2_DPHY_CONFIG_REGOFF 0x8C
#define HWIO_MIPI_TOP_RX2_DPHY_CONFIG_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX2_DPHY_CONFIG_REGOFF)
#define HWIO_MIPI_TOP_RX2_DPHY_CONFIG_RSVD0_FLDMASK (0xffff0000)
#define HWIO_MIPI_TOP_RX2_DPHY_CONFIG_RSVD0_FLDSHFT (16)
#define HWIO_MIPI_TOP_RX2_DPHY_CONFIG_CFGCLKFREQRANGE_FLDMASK (0xff00)
#define HWIO_MIPI_TOP_RX2_DPHY_CONFIG_CFGCLKFREQRANGE_FLDSHFT (8)
#define HWIO_MIPI_TOP_RX2_DPHY_CONFIG_RSVD1_FLDMASK (0x80)
#define HWIO_MIPI_TOP_RX2_DPHY_CONFIG_RSVD1_FLDSHFT (7)
#define HWIO_MIPI_TOP_RX2_DPHY_CONFIG_HSFREQRANGE_FLDMASK (0x7f)
#define HWIO_MIPI_TOP_RX2_DPHY_CONFIG_HSFREQRANGE_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX2_DPHY_CONTROL_REGOFF 0x90
#define HWIO_MIPI_TOP_RX2_DPHY_CONTROL_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX2_DPHY_CONTROL_REGOFF)
#define HWIO_MIPI_TOP_RX2_DPHY_CONTROL_RSVD0_FLDMASK (0xfffffff8)
#define HWIO_MIPI_TOP_RX2_DPHY_CONTROL_RSVD0_FLDSHFT (3)
#define HWIO_MIPI_TOP_RX2_DPHY_CONTROL_PHY_SHADOW_CONTROL_FLDMASK (0x4)
#define HWIO_MIPI_TOP_RX2_DPHY_CONTROL_PHY_SHADOW_CONTROL_FLDSHFT (2)
#define HWIO_MIPI_TOP_RX2_DPHY_CONTROL_RSTZ_N_FLDMASK (0x2)
#define HWIO_MIPI_TOP_RX2_DPHY_CONTROL_RSTZ_N_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX2_DPHY_CONTROL_SHUTDOWNZ_N_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX2_DPHY_CONTROL_SHUTDOWNZ_N_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_REGOFF 0x94
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX2_DPHY_IOTEST_REGOFF)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_RSVD0_FLDMASK (0xffff8000)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_RSVD0_FLDSHFT (15)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_BISTOK_FLDMASK (0x4000)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_BISTOK_FLDSHFT (14)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_BISTDONE_FLDMASK (0x2000)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_BISTDONE_FLDSHFT (13)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_BISTON_FLDMASK (0x1000)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_BISTON_FLDSHFT (12)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_CONT_DATA_FLDMASK (0xffe)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_CONT_DATA_FLDSHFT (1)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_CONT_EN_FLDMASK (0x1)
#define HWIO_MIPI_TOP_RX2_DPHY_IOTEST_CONT_EN_FLDSHFT (0)

#define HWIO_MIPI_TOP_RX2_DPHY_ESCAPE_REGOFF 0x98
#define HWIO_MIPI_TOP_RX2_DPHY_ESCAPE_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_RX2_DPHY_ESCAPE_REGOFF)
#define HWIO_MIPI_TOP_RX2_DPHY_ESCAPE_rx2_dphy_escape_FLDMASK (0xffffffff)
#define HWIO_MIPI_TOP_RX2_DPHY_ESCAPE_rx2_dphy_escape_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_IPU_VC_EN_REGOFF 0x9C
#define HWIO_MIPI_TOP_TX0_IPU_VC_EN_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_IPU_VC_EN_REGOFF)
#define HWIO_MIPI_TOP_TX0_IPU_VC_EN_RSVD0_FLDMASK (0xfffffff0)
#define HWIO_MIPI_TOP_TX0_IPU_VC_EN_RSVD0_FLDSHFT (4)
#define HWIO_MIPI_TOP_TX0_IPU_VC_EN_TX0_IPU_VC_EN_FLDMASK (0xf)
#define HWIO_MIPI_TOP_TX0_IPU_VC_EN_TX0_IPU_VC_EN_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_IPU_VC_EN_REGOFF 0x100
#define HWIO_MIPI_TOP_TX1_IPU_VC_EN_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_IPU_VC_EN_REGOFF)
#define HWIO_MIPI_TOP_TX1_IPU_VC_EN_RSVD0_FLDMASK (0xfffffff0)
#define HWIO_MIPI_TOP_TX1_IPU_VC_EN_RSVD0_FLDSHFT (4)
#define HWIO_MIPI_TOP_TX1_IPU_VC_EN_TX1_IPU_VC_EN_FLDMASK (0xf)
#define HWIO_MIPI_TOP_TX1_IPU_VC_EN_TX1_IPU_VC_EN_FLDSHFT (0)

#define HWIO_MIPI_TOP_CSI_CLK_CTRL_REGOFF 0x104
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_CSI_CLK_CTRL_REGOFF)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_RSVD0_FLDMASK (0xfffffe00)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_RSVD0_FLDSHFT (9)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_MIPI_DBG_SEL_FLDMASK (0x1c0)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_MIPI_DBG_SEL_FLDSHFT (6)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_MIPI_SW_RST_FLDMASK (0x20)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_MIPI_SW_RST_FLDSHFT (5)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_CSI2_RX2_CG_FLDMASK (0x10)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_CSI2_RX2_CG_FLDSHFT (4)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_CSI2_RX1_CG_FLDMASK (0x8)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_CSI2_RX1_CG_FLDSHFT (3)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_CSI2_RX0_CG_FLDMASK (0x4)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_CSI2_RX0_CG_FLDSHFT (2)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_CSI2_TX1_CG_FLDMASK (0x2)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_CSI2_TX1_CG_FLDSHFT (1)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_CSI2_TX0_CG_FLDMASK (0x1)
#define HWIO_MIPI_TOP_CSI_CLK_CTRL_CSI2_TX0_CG_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_FRAME_TIMING_REGOFF 0x108
#define HWIO_MIPI_TOP_TX0_FRAME_TIMING_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_FRAME_TIMING_REGOFF)
#define HWIO_MIPI_TOP_TX0_FRAME_TIMING_RSVD0_FLDMASK (0xff000000)
#define HWIO_MIPI_TOP_TX0_FRAME_TIMING_RSVD0_FLDSHFT (24)
#define HWIO_MIPI_TOP_TX0_FRAME_TIMING_TX_FRAME_ACT_PERIOD_FLDMASK (0xffffff)
#define HWIO_MIPI_TOP_TX0_FRAME_TIMING_TX_FRAME_ACT_PERIOD_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_VBLANK_TIMING_REGOFF 0x10C
#define HWIO_MIPI_TOP_TX0_VBLANK_TIMING_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_VBLANK_TIMING_REGOFF)
#define HWIO_MIPI_TOP_TX0_VBLANK_TIMING_RSVD0_FLDMASK (0xff000000)
#define HWIO_MIPI_TOP_TX0_VBLANK_TIMING_RSVD0_FLDSHFT (24)
#define HWIO_MIPI_TOP_TX0_VBLANK_TIMING_TX_FRAME_BLANK_PERIOD_FLDMASK (0xffffff)
#define HWIO_MIPI_TOP_TX0_VBLANK_TIMING_TX_FRAME_BLANK_PERIOD_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX0_LINE_TIMING_REGOFF 0x110
#define HWIO_MIPI_TOP_TX0_LINE_TIMING_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX0_LINE_TIMING_REGOFF)
#define HWIO_MIPI_TOP_TX0_LINE_TIMING_TX_LINE_BLANK_PERIOD_FLDMASK (0xffff0000)
#define HWIO_MIPI_TOP_TX0_LINE_TIMING_TX_LINE_BLANK_PERIOD_FLDSHFT (16)
#define HWIO_MIPI_TOP_TX0_LINE_TIMING_TX_LINE_ACT_PERIOD_FLDMASK (0xffff)
#define HWIO_MIPI_TOP_TX0_LINE_TIMING_TX_LINE_ACT_PERIOD_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_FRAME_TIMING_REGOFF 0x114
#define HWIO_MIPI_TOP_TX1_FRAME_TIMING_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_FRAME_TIMING_REGOFF)
#define HWIO_MIPI_TOP_TX1_FRAME_TIMING_RSVD0_FLDMASK (0xff000000)
#define HWIO_MIPI_TOP_TX1_FRAME_TIMING_RSVD0_FLDSHFT (24)
#define HWIO_MIPI_TOP_TX1_FRAME_TIMING_TX_FRAME_ACT_PERIOD_FLDMASK (0xffffff)
#define HWIO_MIPI_TOP_TX1_FRAME_TIMING_TX_FRAME_ACT_PERIOD_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_VBLANK_TIMING_REGOFF 0x118
#define HWIO_MIPI_TOP_TX1_VBLANK_TIMING_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_VBLANK_TIMING_REGOFF)
#define HWIO_MIPI_TOP_TX1_VBLANK_TIMING_RSVD0_FLDMASK (0xff000000)
#define HWIO_MIPI_TOP_TX1_VBLANK_TIMING_RSVD0_FLDSHFT (24)
#define HWIO_MIPI_TOP_TX1_VBLANK_TIMING_TX_FRAME_BLANK_PERIOD_FLDMASK (0xffffff)
#define HWIO_MIPI_TOP_TX1_VBLANK_TIMING_TX_FRAME_BLANK_PERIOD_FLDSHFT (0)

#define HWIO_MIPI_TOP_TX1_LINE_TIMING_REGOFF 0x11C
#define HWIO_MIPI_TOP_TX1_LINE_TIMING_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_TX1_LINE_TIMING_REGOFF)
#define HWIO_MIPI_TOP_TX1_LINE_TIMING_TX_LINE_BLANK_PERIOD_FLDMASK (0xffff0000)
#define HWIO_MIPI_TOP_TX1_LINE_TIMING_TX_LINE_BLANK_PERIOD_FLDSHFT (16)
#define HWIO_MIPI_TOP_TX1_LINE_TIMING_TX_LINE_ACT_PERIOD_FLDMASK (0xffff)
#define HWIO_MIPI_TOP_TX1_LINE_TIMING_TX_LINE_ACT_PERIOD_FLDSHFT (0)

#define HWIO_MIPI_TOP_IDI_HALT_UD_EN_REGOFF 0x120
#define HWIO_MIPI_TOP_IDI_HALT_UD_EN_ADDR(bAddr, regX) \
	(bAddr + HWIO_MIPI_TOP_IDI_HALT_UD_EN_REGOFF)
#define HWIO_MIPI_TOP_IDI_HALT_UD_EN_RSVD0_FLDMASK (0xfffffffc)
#define HWIO_MIPI_TOP_IDI_HALT_UD_EN_RSVD0_FLDSHFT (2)
#define HWIO_MIPI_TOP_IDI_HALT_UD_EN_TX1_IDI_HALT_EN_FLDMASK (0x2)
#define HWIO_MIPI_TOP_IDI_HALT_UD_EN_TX1_IDI_HALT_EN_FLDSHFT (1)
#define HWIO_MIPI_TOP_IDI_HALT_UD_EN_TX0_IDI_HALT_EN_FLDMASK (0x1)
#define HWIO_MIPI_TOP_IDI_HALT_UD_EN_TX0_IDI_HALT_EN_FLDSHFT (0)

#endif /* __MNH_HWIO_MIPI_TOP_ */
