/*
 * (C) Copyright 2006-2009
 * Texas Instruments, <www.ti.com>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 *
 */

#ifndef _OMAP44XX_CPU_H
#define  _OMAP44XX_CPU_H
#include <asm/arch/omap4430.h>
#ifndef	__ASSEMBLY__
#include <linux/types.h>
#endif

/* Register offsets of common modules */
/* Control */
#define CONTROL_ID_CODE			(OMAP44XX_CTRL_GEN_BASE + 0x204)
#define CONTROL_STATUS			(OMAP44XX_CTRL_GEN_BASE + 0x2C4)

/* PL310 */
#define OMAP44XX_PL310_AUX_CTRL		(OMAP44XX_PL310_BASE + 0x104)

/* Tap Information */
#define TAP_IDCODE_REG		(OMAP44XX_TAP_BASE+0x204)
#define PRODUCTION_ID		(OMAP44XX_TAP_BASE+0x208)

/* device type */
#define DEVICE_MASK		(BIT8|BIT9|BIT10)
#define TST_DEVICE		0x0
#define EMU_DEVICE		0x1
#define HS_DEVICE		0x2
#define GP_DEVICE		0x3

/* GPMC CS3/cs4/cs6 not avaliable */
#define GPMC_BASE		(OMAP44XX_GPMC_BASE)
#define GPMC_SYSCONFIG		(OMAP44XX_GPMC_BASE+0x10)
#define GPMC_IRQSTATUS		(OMAP44XX_GPMC_BASE+0x18)
#define GPMC_IRQENABLE		(OMAP44XX_GPMC_BASE+0x1C)
#define GPMC_TIMEOUT_CONTROL	(OMAP44XX_GPMC_BASE+0x40)
#define GPMC_CONFIG		(OMAP44XX_GPMC_BASE+0x50)
#define GPMC_STATUS		(OMAP44XX_GPMC_BASE+0x54)

#define GPMC_CONFIG_CS0		(OMAP44XX_GPMC_BASE+0x60)
#define GPMC_CONFIG_WIDTH	(0x30)

#define GPMC_CONFIG1		(0x00)
#define GPMC_CONFIG2		(0x04)
#define GPMC_CONFIG3		(0x08)
#define GPMC_CONFIG4		(0x0C)
#define GPMC_CONFIG5		(0x10)
#define GPMC_CONFIG6		(0x14)
#define GPMC_CONFIG7		(0x18)
#define GPMC_NAND_CMD		(0x1C)
#define GPMC_NAND_ADR		(0x20)
#define GPMC_NAND_DAT		(0x24)

#define GPMC_ECC_CONFIG		(0x1F4)
#define GPMC_ECC_CONTROL	(0x1F8)
#define GPMC_ECC_SIZE_CONFIG	(0x1FC)
#define GPMC_ECC1_RESULT	(0x200)
#define GPMC_ECC2_RESULT	(0x204)
#define GPMC_ECC3_RESULT	(0x208)
#define GPMC_ECC4_RESULT	(0x20C)
#define GPMC_ECC5_RESULT	(0x210)
#define GPMC_ECC6_RESULT	(0x214)
#define GPMC_ECC7_RESULT	(0x218)
#define GPMC_ECC8_RESULT	(0x21C)
#define GPMC_ECC9_RESULT	(0x220)

#define GPMC_PREFETCH_CONFIG1	(0x1e0)
#define GPMC_PREFETCH_CONFIG2	(0x1e4)
#define GPMC_PREFETCH_CONTROL	(0x1ec)
#define GPMC_PREFETCH_STATUS	(0x1f0)

/* GPMC Mapping */
# define FLASH_BASE		0x10000000  /* NOR flash (aligned to 256 Meg) */
# define FLASH_BASE_SDPV1	0x04000000  /* NOR flash (aligned to 64 Meg) */
# define FLASH_BASE_SDPV2	0x10000000  /* NOR flash (aligned to 256 Meg) */
# define DEBUG_BASE		0x08000000  /* debug board */
# define NAND_BASE	0x30000000  /* NAND addr (actual size small port)*/
# define PISMO2_BASE	0x18000000  /* PISMO2 CS1/2 */
# define ONENAND_MAP	0x20000000  /* OneNand addr (actual size small port */

/* DMM */
#define DMM_SYSCONFIG		(OMAP44XX_DMM_BASE+0x10)
#define DMM_LISA_MAP		(OMAP44XX_DMM_BASE+0x100)

/* SMS */
#define SMS_SYSCONFIG           (OMAP44XX_SMS_BASE+0x10)
#define SMS_RG_ATT0             (OMAP44XX_SMS_BASE+0x48)
#define SMS_CLASS_ARB0          (OMAP44XX_SMS_BASE+0xD0)
#define BURSTCOMPLETE_GROUP7    BIT31

#define SDRC_CS_CFG		(OMAP44XX_SDRC_BASE+0x40)
#define OMAP44XX_SDRC_CS0	0x80000000
#define SDRC_POWER		(OMAP44XX_SDRC_BASE+0x70)
#define SDRC_MCFG_0		(OMAP44XX_SDRC_BASE+0x80)
#define SDRC_MR_0		(OMAP44XX_SDRC_BASE+0x84)

/* timer regs offsets (32 bit regs) */
#define TIDR			0x0      /* r */
#define TIOCP_CFG		0x10     /* rw */
#define TISTAT			0x14     /* r */
#define TISR			0x18     /* rw */
#define TIER			0x1C     /* rw */
#define TWER			0x20     /* rw */
#define TCLR			0x24     /* rw */
#define TCRR			0x28     /* rw */
#define TLDR			0x2C     /* rw */
#define TTGR			0x30     /* rw */
#define TWPS			0x34     /* r */
#define TMAR			0x38     /* rw */
#define TCAR1			0x3c     /* r */
#define TSICR			0x40     /* rw */
#define TCAR2			0x44     /* r */
#define GPT_EN		((0<<2)|BIT1|BIT0) /* enable sys_clk NO-prescale /1 */

/* Watchdog */
#define WWPS			0x34     /* r */
#define WSPR			0x48     /* rw */
#define WD_UNLOCK1		0xAAAA
#define WD_UNLOCK2		0x5555

/* FIXME */
#define PRM_RSTCTRL          			0x48307250
  /* PRCM */
#define CM_SYS_CLKSEL				0x4a306110

/* PRM.CKGEN module registers */
#define CM_ABE_PLL_REF_CLKSEL		0x4a30610c


/* PRM.WKUP_CM module registers */
#define CM_WKUP_CLKSTCTRL		0x4a307800
#define CM_WKUP_L4WKUP_CLKCTRL		0x4a307820
#define CM_WKUP_WDT1_CLKCTRL		0x4a307828
#define CM_WKUP_WDT2_CLKCTRL		0x4a307830
#define CM_WKUP_GPIO1_CLKCTRL		0x4a307838
#define CM_WKUP_TIMER1_CLKCTRL		0x4a307840
#define CM_WKUP_TIMER12_CLKCTRL		0x4a307848
#define CM_WKUP_SYNCTIMER_CLKCTRL	0x4a307850
#define CM_WKUP_USIM_CLKCTRL		0x4a307858
#define CM_WKUP_SARRAM_CLKCTRL		0x4a307860
#define CM_WKUP_KEYBOARD_CLKCTRL	0x4a307878
#define CM_WKUP_RTC_CLKCTRL		0x4a307880
#define CM_WKUP_BANDGAP_CLKCTRL		0x4a307888

/* CM1.CKGEN module registers */
#define CM_CLKSEL_CORE				0x4a004100
#define CM_CLKSEL_ABE				0x4a004108
#define CM_DLL_CTRL				0x4a004110
#define CM_CLKMODE_DPLL_CORE			0x4a004120
#define CM_IDLEST_DPLL_CORE			0x4a004124
#define CM_AUTOIDLE_DPLL_CORE			0x4a004128
#define CM_CLKSEL_DPLL_CORE			0x4a00412c
#define CM_DIV_M2_DPLL_CORE			0x4a004130
#define CM_DIV_M3_DPLL_CORE			0x4a004134
#define CM_DIV_M4_DPLL_CORE			0x4a004138
#define CM_DIV_M5_DPLL_CORE			0x4a00413c
#define CM_DIV_M6_DPLL_CORE			0x4a004140
#define CM_DIV_M7_DPLL_CORE			0x4a004144
#define CM_SSC_DELTAMSTEP_DPLL_CORE		0x4a004148
#define CM_SSC_MODFREQDIV_DPLL_CORE		0x4a00414c
#define CM_EMU_OVERRIDE_DPLL_CORE		0x4a004150
#define CM_CLKMODE_DPLL_MPU			0x4a004160
#define CM_IDLEST_DPLL_MPU			0x4a004164
#define CM_AUTOIDLE_DPLL_MPU			0x4a004168
#define CM_CLKSEL_DPLL_MPU			0x4a00416c
#define CM_DIV_M2_DPLL_MPU			0x4a004170
#define CM_SSC_DELTAMSTEP_DPLL_MPU		0x4a004188
#define CM_SSC_MODFREQDIV_DPLL_MPU		0x4a00418c
#define CM_BYPCLK_DPLL_MPU			0x4a00419c
#define CM_CLKMODE_DPLL_IVA			0x4a0041a0
#define CM_IDLEST_DPLL_IVA			0x4a0041a4
#define CM_AUTOIDLE_DPLL_IVA			0x4a0041a8
#define CM_CLKSEL_DPLL_IVA			0x4a0041ac
#define CM_DIV_M4_DPLL_IVA			0x4a0041b8
#define CM_DIV_M5_DPLL_IVA			0x4a0041bc
#define CM_SSC_DELTAMSTEP_DPLL_IVA		0x4a0041c8
#define CM_SSC_MODFREQDIV_DPLL_IVA		0x4a0041cc
#define CM_BYPCLK_DPLL_IVA			0x4a0041dc
#define CM_CLKMODE_DPLL_ABE			0x4a0041e0
#define CM_IDLEST_DPLL_ABE			0x4a0041e4
#define CM_AUTOIDLE_DPLL_ABE			0x4a0041e8
#define CM_CLKSEL_DPLL_ABE			0x4a0041ec
#define CM_DIV_M2_DPLL_ABE			0x4a0041f0
#define CM_DIV_M3_DPLL_ABE			0x4a0041f4
#define CM_SSC_DELTAMSTEP_DPLL_ABE		0x4a004208
#define CM_SSC_MODFREQDIV_DPLL_ABE		0x4a00420c
#define CM_CLKMODE_DPLL_DDRPHY			0x4a004220
#define CM_IDLEST_DPLL_DDRPHY			0x4a004224
#define CM_AUTOIDLE_DPLL_DDRPHY			0x4a004228
#define CM_CLKSEL_DPLL_DDRPHY			0x4a00422c
#define CM_DIV_M2_DPLL_DDRPHY			0x4a004230
#define CM_DIV_M4_DPLL_DDRPHY			0x4a004238
#define CM_DIV_M5_DPLL_DDRPHY			0x4a00423c
#define CM_DIV_M6_DPLL_DDRPHY			0x4a004240
#define CM_SSC_DELTAMSTEP_DPLL_DDRPHY		0x4a004248

/* CM1.ABE register offsets */
#define CM1_ABE_CLKSTCTRL		0x4a004500
#define CM1_ABE_L4ABE_CLKCTRL		0x4a004520
#define CM1_ABE_AESS_CLKCTRL		0x4a004528
#define CM1_ABE_PDM_CLKCTRL		0x4a004530
#define CM1_ABE_DMIC_CLKCTRL		0x4a004538
#define CM1_ABE_MCASP_CLKCTRL		0x4a004540
#define CM1_ABE_MCBSP1_CLKCTRL		0x4a004548
#define CM1_ABE_MCBSP2_CLKCTRL		0x4a004550
#define CM1_ABE_MCBSP3_CLKCTRL		0x4a004558
#define CM1_ABE_SLIMBUS_CLKCTRL		0x4a004560
#define CM1_ABE_TIMER5_CLKCTRL		0x4a004568
#define CM1_ABE_TIMER6_CLKCTRL		0x4a004570
#define CM1_ABE_TIMER7_CLKCTRL		0x4a004578
#define CM1_ABE_TIMER8_CLKCTRL		0x4a004580
#define CM1_ABE_WDT3_CLKCTRL		0x4a004588

/* CM1.DSP register offsets */
#define DSP_CLKSTCTRL			0x4a004400
#define	DSP_DSP_CLKCTRL			0x4a004420

/* CM2.CKGEN module registers */
#define CM_CLKSEL_DUCATI_ISS_ROOT		0x4a008100
#define CM_CLKSEL_USB_60MHz			0x4a008104
#define CM_SCALE_FCLK				0x4a008108
#define CM_CORE_DVFS_PERF1			0x4a008110
#define CM_CORE_DVFS_PERF2			0x4a008114
#define CM_CORE_DVFS_PERF3			0x4a008118
#define CM_CORE_DVFS_PERF4			0x4a00811c
#define CM_CORE_DVFS_CURRENT			0x4a008124
#define CM_IVA_DVFS_PERF_TESLA			0x4a008128
#define CM_IVA_DVFS_PERF_IVAHD			0x4a00812c
#define CM_IVA_DVFS_PERF_ABE			0x4a008130
#define CM_IVA_DVFS_CURRENT			0x4a008138
#define CM_CLKMODE_DPLL_PER			0x4a008140
#define CM_IDLEST_DPLL_PER			0x4a008144
#define CM_AUTOIDLE_DPLL_PER			0x4a008148
#define CM_CLKSEL_DPLL_PER			0x4a00814c
#define CM_DIV_M2_DPLL_PER			0x4a008150
#define CM_DIV_M3_DPLL_PER			0x4a008154
#define CM_DIV_M4_DPLL_PER			0x4a008158
#define CM_DIV_M5_DPLL_PER			0x4a00815c
#define CM_DIV_M6_DPLL_PER			0x4a008160
#define CM_DIV_M7_DPLL_PER			0x4a008164
#define CM_SSC_DELTAMSTEP_DPLL_PER		0x4a008168
#define CM_SSC_MODFREQDIV_DPLL_PER		0x4a00816c
#define CM_EMU_OVERRIDE_DPLL_PER		0x4a008170
#define CM_CLKMODE_DPLL_USB			0x4a008180
#define CM_IDLEST_DPLL_USB			0x4a008184
#define CM_AUTOIDLE_DPLL_USB			0x4a008188
#define CM_CLKSEL_DPLL_USB			0x4a00818c
#define CM_DIV_M2_DPLL_USB			0x4a008190
#define CM_SSC_DELTAMSTEP_DPLL_USB		0x4a0081a8
#define CM_SSC_MODFREQDIV_DPLL_USB		0x4a0081ac
#define CM_CLKDCOLDO_DPLL_USB			0x4a0081b4
#define CM_CLKMODE_DPLL_UNIPRO			0x4a0081c0
#define CM_IDLEST_DPLL_UNIPRO			0x4a0081c4
#define CM_AUTOIDLE_DPLL_UNIPRO			0x4a0081c8
#define CM_CLKSEL_DPLL_UNIPRO			0x4a0081cc
#define CM_DIV_M2_DPLL_UNIPRO			0x4a0081d0
#define CM_SSC_DELTAMSTEP_DPLL_UNIPRO		0x4a0081e8
#define CM_SSC_MODFREQDIV_DPLL_UNIPRO		0x4a0081ec

/* CM2.CORE module registers */
#define CM_L3_1_CLKSTCTRL		0x4a008700
#define CM_L3_1_DYNAMICDEP		0x4a008708
#define CM_L3_1_L3_1_CLKCTRL		0x4a008720
#define CM_L3_2_CLKSTCTRL		0x4a008800
#define CM_L3_2_DYNAMICDEP		0x4a008808
#define CM_L3_2_L3_2_CLKCTRL		0x4a008820
#define CM_L3_2_GPMC_CLKCTRL		0x4a008828
#define CM_L3_2_OCMC_RAM_CLKCTRL	0x4a008830
#define CM_DUCATI_CLKSTCTRL		0x4a008900
#define CM_DUCATI_STATICDEP		0x4a008904
#define CM_DUCATI_DYNAMICDEP		0x4a008908
#define CM_DUCATI_DUCATI_CLKCTRL	0x4a008920
#define CM_SDMA_CLKSTCTRL		0x4a008a00
#define CM_SDMA_STATICDEP		0x4a008a04
#define CM_SDMA_DYNAMICDEP		0x4a008a08
#define CM_SDMA_SDMA_CLKCTRL		0x4a008a20
#define CM_MEMIF_CLKSTCTRL		0x4a008b00
#define CM_MEMIF_DMM_CLKCTRL		0x4a008b20
#define CM_MEMIF_EMIF_FW_CLKCTRL	0x4a008b28
#define CM_MEMIF_EMIF_1_CLKCTRL		0x4a008b30
#define CM_MEMIF_EMIF_2_CLKCTRL		0x4a008b38
#define CM_MEMIF_DLL_CLKCTRL		0x4a008b40
#define CM_MEMIF_EMIF_H1_CLKCTRL	0x4a008b50
#define CM_MEMIF_EMIF_H2_CLKCTRL	0x4a008b58
#define CM_MEMIF_DLL_H_CLKCTRL		0x4a008b60
#define CM_D2D_CLKSTCTRL		0x4a008c00
#define CM_D2D_STATICDEP		0x4a008c04
#define CM_D2D_DYNAMICDEP		0x4a008c08
#define CM_D2D_SAD2D_CLKCTRL		0x4a008c20
#define CM_D2D_MODEM_ICR_CLKCTRL	0x4a008c28
#define CM_D2D_SAD2D_FW_CLKCTRL		0x4a008c30
#define CM_L4CFG_CLKSTCTRL		0x4a008d00
#define CM_L4CFG_DYNAMICDEP		0x4a008d08
#define CM_L4CFG_L4_CFG_CLKCTRL		0x4a008d20
#define CM_L4CFG_HW_SEM_CLKCTRL		0x4a008d28
#define CM_L4CFG_MAILBOX_CLKCTRL	0x4a008d30
#define CM_L4CFG_SAR_ROM_CLKCTRL	0x4a008d38
#define CM_L3INSTR_CLKSTCTRL		0x4a008e00
#define CM_L3INSTR_L3_3_CLKCTRL		0x4a008e20
#define CM_L3INSTR_L3_INSTR_CLKCTRL	0x4a008e28
#define CM_L3INSTR_OCP_WP1_CLKCTRL	0x4a008e40

/* CM2.L4PER register offsets */
#define CM_L4PER_CLKSTCTRL		0x4a009400
#define CM_L4PER_DYNAMICDEP		0x4a009408
#define CM_L4PER_ADC_CLKCTRL		0x4a009420
#define CM_L4PER_DMTIMER10_CLKCTRL	0x4a009428
#define CM_L4PER_DMTIMER11_CLKCTRL	0x4a009430
#define CM_L4PER_DMTIMER2_CLKCTRL	0x4a009438
#define CM_L4PER_DMTIMER3_CLKCTRL	0x4a009440
#define CM_L4PER_DMTIMER4_CLKCTRL	0x4a009448
#define CM_L4PER_DMTIMER9_CLKCTRL	0x4a009450
#define CM_L4PER_ELM_CLKCTRL		0x4a009458
#define CM_L4PER_GPIO2_CLKCTRL		0x4a009460
#define CM_L4PER_GPIO3_CLKCTRL		0x4a009468
#define CM_L4PER_GPIO4_CLKCTRL		0x4a009470
#define CM_L4PER_GPIO5_CLKCTRL		0x4a009478
#define CM_L4PER_GPIO6_CLKCTRL		0x4a009480
#define CM_L4PER_HDQ1W_CLKCTRL		0x4a009488
#define CM_L4PER_HECC1_CLKCTRL		0x4a009490
#define CM_L4PER_HECC2_CLKCTRL		0x4a009498
#define CM_L4PER_I2C1_CLKCTRL		0x4a0094a0
#define CM_L4PER_I2C2_CLKCTRL		0x4a0094a8
#define CM_L4PER_I2C3_CLKCTRL		0x4a0094b0
#define CM_L4PER_I2C4_CLKCTRL		0x4a0094b8
#define CM_L4PER_L4PER_CLKCTRL		0x4a0094c0
#define CM_L4PER_MCASP2_CLKCTRL		0x4a0094d0
#define CM_L4PER_MCASP3_CLKCTRL		0x4a0094d8
#define CM_L4PER_MCBSP4_CLKCTRL		0x4a0094e0
#define CM_L4PER_MGATE_CLKCTRL		0x4a0094e8
#define CM_L4PER_MCSPI1_CLKCTRL		0x4a0094f0
#define CM_L4PER_MCSPI2_CLKCTRL		0x4a0094f8
#define CM_L4PER_MCSPI3_CLKCTRL		0x4a009500
#define CM_L4PER_MCSPI4_CLKCTRL		0x4a009508
#define CM_L4PER_MMCSD3_CLKCTRL		0x4a009520
#define CM_L4PER_MMCSD4_CLKCTRL		0x4a009528
#define CM_L4PER_MSPROHG_CLKCTRL	0x4a009530
#define CM_L4PER_SLIMBUS2_CLKCTRL	0x4a009538
#define CM_L4PER_UART1_CLKCTRL		0x4a009540
#define CM_L4PER_UART2_CLKCTRL		0x4a009548
#define CM_L4PER_UART3_CLKCTRL		0x4a009550
#define CM_L4PER_UART4_CLKCTRL		0x4a009558
#define CM_L4PER_MMCSD5_CLKCTRL		0x4a009560
#define CM_L4PER_I2C5_CLKCTRL		0x4a009568
#define CM_L4SEC_CLKSTCTRL		0x4a009580
#define CM_L4SEC_STATICDEP		0x4a009584
#define CM_L4SEC_DYNAMICDEP		0x4a009588
#define CM_L4SEC_AES1_CLKCTRL		0x4a0095a0
#define CM_L4SEC_AES2_CLKCTRL		0x4a0095a8
#define CM_L4SEC_DES3DES_CLKCTRL	0x4a0095b0
#define CM_L4SEC_PKAEIP29_CLKCTRL	0x4a0095b8
#define CM_L4SEC_RNG_CLKCTRL		0x4a0095c0
#define CM_L4SEC_SHA2MD51_CLKCTRL	0x4a0095c8
#define CM_L4SEC_CRYPTODMA_CLKCTRL	0x4a0095d8

/* CM2.IVAHD */
#define IVAHD_CLKSTCTRL			0x4a008f00
#define IVAHD_IVAHD_CLKCTRL		0x4a008f20
#define IVAHD_SL2_CLKCTRL		0x4a008f28

/* CM2.L3INIT */
#define CM_L3INIT_HSMMC1_CLKCTRL	0x4a009328
#define CM_L3INIT_HSMMC2_CLKCTRL	0x4a009330
#define CM_L3INIT_HSI_CLKCTRL           0x4a009338
#define CM_L3INIT_UNIPRO1_CLKCTRL       0x4a009340
#define CM_L3INIT_HSUSBHOST_CLKCTRL     0x4a009358
#define CM_L3INIT_HSUSBOTG_CLKCTRL      0x4a009360
#define CM_L3INIT_HSUSBTLL_CLKCTRL      0x4a009368
#define CM_L3INIT_P1500_CLKCTRL         0x4a009378
#define CM_L3INIT_FSUSB_CLKCTRL         0x4a0093d0
#define CM_L3INIT_USBPHY_CLKCTRL        0x4a0093e0

/* CM2.CAM */
#define CM_CAM_CLKSTCTRL                0x4a009000
#define CM_CAM_ISS_CLKCTRL              0x4a009020
#define CM_CAM_FDIF_CLKCTRL             0x4a009028

/* CM2.DSS */
#define CM_DSS_CLKSTCTRL                0x4a009100
#define CM_DSS_DSS_CLKCTRL              0x4a009120
#define CM_DSS_DEISS_CLKCTRL            0x4a009128

/* PM.DSS */
#define PM_DSS_PWRSTCTRL		0x4a307100

/* CM2.SGX */
#define CM_SGX_CLKSTCTRL                0x4a009200
#define CM_SGX_SGX_CLKCTRL              0x4a009220

/* SMX-APE */
#define PM_RT_APE_BASE_ADDR_ARM		(SMX_APE_BASE + 0x10000)
#define PM_GPMC_BASE_ADDR_ARM		(SMX_APE_BASE + 0x12400)
#define PM_OCM_RAM_BASE_ADDR_ARM	(SMX_APE_BASE + 0x12800)
#define PM_OCM_ROM_BASE_ADDR_ARM	(SMX_APE_BASE + 0x12C00)
#define PM_IVA2_BASE_ADDR_ARM		(SMX_APE_BASE + 0x14000)

#define RT_REQ_INFO_PERMISSION_1	(PM_RT_APE_BASE_ADDR_ARM + 0x68)
#define RT_READ_PERMISSION_0		(PM_RT_APE_BASE_ADDR_ARM + 0x50)
#define RT_WRITE_PERMISSION_0		(PM_RT_APE_BASE_ADDR_ARM + 0x58)
#define RT_ADDR_MATCH_1			(PM_RT_APE_BASE_ADDR_ARM + 0x60)

#define GPMC_REQ_INFO_PERMISSION_0	(PM_GPMC_BASE_ADDR_ARM + 0x48)
#define GPMC_READ_PERMISSION_0		(PM_GPMC_BASE_ADDR_ARM + 0x50)
#define GPMC_WRITE_PERMISSION_0		(PM_GPMC_BASE_ADDR_ARM + 0x58)

#define OCM_REQ_INFO_PERMISSION_0	(PM_OCM_RAM_BASE_ADDR_ARM + 0x48)
#define OCM_READ_PERMISSION_0		(PM_OCM_RAM_BASE_ADDR_ARM + 0x50)
#define OCM_WRITE_PERMISSION_0		(PM_OCM_RAM_BASE_ADDR_ARM + 0x58)
#define OCM_ADDR_MATCH_2		(PM_OCM_RAM_BASE_ADDR_ARM + 0x80)

#define IVA2_REQ_INFO_PERMISSION_0	(PM_IVA2_BASE_ADDR_ARM + 0x48)
#define IVA2_READ_PERMISSION_0		(PM_IVA2_BASE_ADDR_ARM + 0x50)
#define IVA2_WRITE_PERMISSION_0		(PM_IVA2_BASE_ADDR_ARM + 0x58)

#define IVA2_REQ_INFO_PERMISSION_1	(PM_IVA2_BASE_ADDR_ARM + 0x68)
#define IVA2_READ_PERMISSION_1		(PM_IVA2_BASE_ADDR_ARM + 0x70)
#define IVA2_WRITE_PERMISSION_1		(PM_IVA2_BASE_ADDR_ARM + 0x78)

#define IVA2_REQ_INFO_PERMISSION_2	(PM_IVA2_BASE_ADDR_ARM + 0x88)
#define IVA2_READ_PERMISSION_2		(PM_IVA2_BASE_ADDR_ARM + 0x90)
#define IVA2_WRITE_PERMISSION_2		(PM_IVA2_BASE_ADDR_ARM + 0x98)

#define IVA2_REQ_INFO_PERMISSION_3	(PM_IVA2_BASE_ADDR_ARM + 0xA8)
#define IVA2_READ_PERMISSION_3		(PM_IVA2_BASE_ADDR_ARM + 0xB0)
#define IVA2_WRITE_PERMISSION_3		(PM_IVA2_BASE_ADDR_ARM + 0xB8)

/* I2C base */
#define I2C_BASE1		(OMAP44XX_L4_PER + 0x70000)
#define I2C_BASE2		(OMAP44XX_L4_PER + 0x72000)
#define I2C_BASE3		(OMAP44XX_L4_PER + 0x60000)

/* EMIF and DMM registers */
#define EMIF1_BASE			0x4c000000
#define EMIF2_BASE			0x4d000000
#define DMM_BASE			0x4e000000
/* EMIF */
#define EMIF_MOD_ID_REV			0x0000
#define EMIF_STATUS			0x0004
#define EMIF_SDRAM_CONFIG		0x0008
#define EMIF_LPDDR2_NVM_CONFIG		0x000C
#define EMIF_SDRAM_REF_CTRL		0x0010
#define EMIF_SDRAM_REF_CTRL_SHDW	0x0014
#define EMIF_SDRAM_TIM_1		0x0018
#define EMIF_SDRAM_TIM_1_SHDW		0x001C
#define EMIF_SDRAM_TIM_2		0x0020
#define EMIF_SDRAM_TIM_2_SHDW		0x0024
#define EMIF_SDRAM_TIM_3		0x0028
#define EMIF_SDRAM_TIM_3_SHDW		0x002C
#define EMIF_LPDDR2_NVM_TIM		0x0030
#define EMIF_LPDDR2_NVM_TIM_SHDW	0x0034
#define EMIF_PWR_MGMT_CTRL		0x0038
#define EMIF_PWR_MGMT_CTRL_SHDW		0x003C
#define EMIF_LPDDR2_MODE_REG_DATA	0x0040
#define EMIF_LPDDR2_MODE_REG_CFG	0x0050
#define EMIF_L3_CONFIG			0x0054
#define EMIF_L3_CFG_VAL_1		0x0058
#define EMIF_L3_CFG_VAL_2		0x005C
#define IODFT_TLGC			0x0060
#define EMIF_PERF_CNT_1			0x0080
#define EMIF_PERF_CNT_2			0x0084
#define EMIF_PERF_CNT_CFG		0x0088
#define EMIF_PERF_CNT_SEL		0x008C
#define EMIF_PERF_CNT_TIM		0x0090
#define EMIF_READ_IDLE_CTRL		0x0098
#define EMIF_READ_IDLE_CTRL_SHDW	0x009c
#define EMIF_ZQ_CONFIG			0x00C8
#define EMIF_DDR_PHY_CTRL_1		0x00E4
#define EMIF_DDR_PHY_CTRL_1_SHDW	0x00E8
#define EMIF_DDR_PHY_CTRL_2		0x00EC

#define DMM_LISA_MAP_0 			0x0040
#define DMM_LISA_MAP_1 			0x0044
#define DMM_LISA_MAP_2 			0x0048
#define DMM_LISA_MAP_3 			0x004C

#ifdef CONFIG_LCD
	extern void lcd_disable(void);
	extern void lcd_panel_disable(void);
#endif

/* Silicon revisions */
#define OMAP4430_SILICON_ID_INVALID	0
#define OMAP4430_ES1_0	1
#define OMAP4430_ES2_0	2
#define OMAP4430_ES2_1	3
#define OMAP4430_ES2_2	4

#ifndef	__ASSEMBLY__
/*Functions for silicon revision */
unsigned int omap_revision(void);
unsigned int cortex_a9_rev(void);

void big_delay(unsigned int count);

/* structure for ddr timings */
struct ddr_regs{
	u32 tim1;
	u32 tim2;
	u32 tim3;
	u32 phy_ctrl_1;
	u32 ref_ctrl;
	u32 config_init;
	u32 config_final;
	u32 zq_config;
	u8 mr1;
	u8 mr2;
};

/* Used to index into DPLL parameter tables */
struct dpll_param {
	unsigned int m;
	unsigned int n;
	unsigned int m2;
	unsigned int m3;
	unsigned int m4;
	unsigned int m5;
	unsigned int m6;
	unsigned int m7;
	unsigned int sd_div;
};

/*Functions for silicon revision */
void sr32(u32 addr, u32 start_bit, u32 num_bits, u32 value);
unsigned int omap_revision(void);
unsigned int cortex_a9_rev(void);
unsigned int get_boot_device(void);
unsigned int raw_boot(void);
unsigned int fat_boot(void);
void do_ddr_init(const struct ddr_regs *emif1_ddr_regs,
		 const struct ddr_regs *emif2_ddr_regs);
void set_muxconf_regs(void);
void prcm_init(void);
void configure_core_dpll_no_lock(void);
void lock_core_dpll_shadow(void);

/*******************************************************
 * Routine: delay
 * Description: spinning delay to use before udelay works
 ******************************************************/
static inline void spin_delay(unsigned long loops)
{
	__asm__ volatile ("1:\n" "subs %0, %1, #1\n"
			  "bne 1b" : "=r" (loops) : "0"(loops));
}

#endif

#endif
