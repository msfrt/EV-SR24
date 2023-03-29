/*<RBHead>
 ************************************************************************* 
 *                                                                       * 
 *                      ROBERT BOSCH GMBH                                * 
 *                          STUTTGART                                    * 
 *                                                                       * 
 *          Alle Rechte vorbehalten - All rights reserved                * 
 *                                                                       * 
 ************************************************************************* 
																		    
 ************************************************************************* 
 *    Administrative Information (automatically filled in by eASEE)      * 
 ************************************************************************* 
 *	
 * $Filename__:fadc_1797.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:fadc_1797$ 
 * $Variant___:1.6.0$ 
 * $Revision__:0$ 
 * $Type______:H$ 
 * $State_____:AVAILABLE$ 
 * $Generated_:$ 
 ************************************************************************* 
 * 
 * $UniqueName:$ 
 * $Component_:$ 
 * 
 * 
 ************************************************************************* 
 * List Of Changes 
 * 
 * $History
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: fadc_1797.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _FADC_1797_H
#define _FADC_1797_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _FADC_UL(x) x
#else
    #define _FADC_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module FADC on TC1797
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0100400] : Clock Control Register
    volatile uint32 RESERVED0[2];        // [0xF0100404...0xF010040B] : reserved space
    volatile uint32 FDR;                 // [0xF010040C] : Fractional Divider Register
    volatile uint32 CRSR;                // [0xF0100410] : Conversion Request Status Register
    volatile uint32 FMR;                 // [0xF0100414] : Flag Modification Register
    volatile uint32 NCTR;                // [0xF0100418] : Neighbor Channel Trigger Register
    volatile uint32 GCR;                 // [0xF010041C] : Global Control Register
    volatile uint32 CFGR[4];             // [0xF0100420...0xF010042F] : Channel 0 Configuration Register
    volatile uint32 ACR[4];              // [0xF0100430...0xF010043F] : Channel 0 Analog Control Register
    volatile uint32 RCH[4];              // [0xF0100440...0xF010044F] : Channel 0 Conversion Result Register
    volatile uint32 RESERVED1[1];        // [0xF0100450...0xF0100453] : reserved space
    volatile uint32 ALR;                 // [0xF0100454] : Alias Register
    volatile uint32 RESERVED2[2];        // [0xF0100458...0xF010045F] : reserved space
    volatile uint32 FCR0;                // [0xF0100460] : Filter 0 Control Register
    volatile uint32 CRR0;                // [0xF0100464] : Filter 0 Current Result Register
    volatile uint32 IRR10;               // [0xF0100468] : Filter 0 Intermediate Result Register 1
    volatile uint32 IRR20;               // [0xF010046C] : Filter 0 Intermediate Result Register 2
    volatile uint32 IRR30;               // [0xF0100470] : Filter 0 Intermediate Result Register 3
    volatile uint32 FRR0;                // [0xF0100474] : Filter 0 Final Result Register
    volatile uint32 RESERVED3[2];        // [0xF0100478...0xF010047F] : reserved space
    volatile uint32 FCR1;                // [0xF0100480] : Filter 1 Control Register
    volatile uint32 CRR1;                // [0xF0100484] : Filter 1 Current Result Register
    volatile uint32 IRR11;               // [0xF0100488] : Filter 1 Intermediate Result Register 1
    volatile uint32 RESERVED4[2];        // [0xF010048C...0xF0100493] : reserved space
    volatile uint32 FRR1;                // [0xF0100494] : Filter 1 Final Result Register
    volatile uint32 SFRR1;               // [0xF0100498] : Filter 1 Shifted Final Result Register
    volatile uint32 RESERVED5[1];        // [0xF010049C...0xF010049F] : reserved space
    volatile uint32 FCR2;                // [0xF01004A0] : Filter 2 Control Register
    volatile uint32 CRR2;                // [0xF01004A4] : Filter 2 Current Result Register
    volatile uint32 IRR12;               // [0xF01004A8] : Filter 2 Intermediate Result Register 1
    volatile uint32 IRR22;               // [0xF01004AC] : Filter 2 Intermediate Result Register 2
    volatile uint32 IRR32;               // [0xF01004B0] : Filter 2 Intermediate Result Register 3
    volatile uint32 FRR2;                // [0xF01004B4] : Filter 2 Final Result Register
    volatile uint32 RESERVED6[2];        // [0xF01004B8...0xF01004BF] : reserved space
    volatile uint32 FCR3;                // [0xF01004C0] : Filter 3 Control Register
    volatile uint32 CRR3;                // [0xF01004C4] : Filter 3 Current Result Register
    volatile uint32 IRR13;               // [0xF01004C8] : Filter 3 Intermediate Result Register 1
    volatile uint32 RESERVED7[2];        // [0xF01004CC...0xF01004D3] : reserved space
    volatile uint32 FRR3;                // [0xF01004D4] : Filter 3 Final Result Register
    volatile uint32 SFRR3;               // [0xF01004D8] : Filter 3 Shifted Final Result Register
    volatile uint32 RESERVED8[5];        // [0xF01004DC...0xF01004EF] : reserved space
    volatile uint32 SRC3;                // [0xF01004F0] : Service Request Control Register 3
    volatile uint32 SRC2;                // [0xF01004F4] : Service Request Control Register 2
    volatile uint32 SRC1;                // [0xF01004F8] : Service Request Control Register 1
    volatile uint32 SRC0;                // [0xF01004FC] : Service Request Control Register 0
} FADC_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern FADC_RegMap_t FADC __attribute__ ((asection (".bss.label_only")));


/*
 ***************************************************************************************************
 * Definitions of bits and bitfields.
 * Each bit(field) is defined by its position and length.
 *
 * Example:
 *                       /- length -\
 *           0000 0000 00xx xxxx xxxx 0000 0000 0000
 *           |                      ^              |
 *      Bit 31                      |              Bit 0
 *                                  +-- position
 *
 * Access mode flags:  r  - bit(field) can only be read
 *                     w  - bit(field) can only be written
 *                     rw - bit(field) can be read and written
 *                     h  - bit(field) can also be modified by hardware
 *                          (such as a status bit).
 *                          This symbol can be combined with rw or r
 *
 ***************************************************************************************************
 */

/* FADC_ID_MOD_NUMBER (r) */
#define FADC_ID_MOD_NUMBER_POS               _FADC_UL(16)
#define FADC_ID_MOD_NUMBER_LEN               _FADC_UL(16)

/* FADC_ID_MOD_REV (r) */
#define FADC_ID_MOD_REV_POS                  _FADC_UL(0)
#define FADC_ID_MOD_REV_LEN                  _FADC_UL(8)

/* FADC_ID_MOD_TYPE (r) */
#define FADC_ID_MOD_TYPE_POS                 _FADC_UL(8)
#define FADC_ID_MOD_TYPE_LEN                 _FADC_UL(8)

/* FADC_CLC_DISR (rw) */
#define FADC_CLC_DISR_POS                    _FADC_UL(0)
#define FADC_CLC_DISR_LEN                    _FADC_UL(1)

/* FADC_CLC_DISS (r) */
#define FADC_CLC_DISS_POS                    _FADC_UL(1)
#define FADC_CLC_DISS_LEN                    _FADC_UL(1)

/* FADC_CLC_SPEN (rw) */
#define FADC_CLC_SPEN_POS                    _FADC_UL(2)
#define FADC_CLC_SPEN_LEN                    _FADC_UL(1)

/* FADC_CLC_EDIS (rw) */
#define FADC_CLC_EDIS_POS                    _FADC_UL(3)
#define FADC_CLC_EDIS_LEN                    _FADC_UL(1)

/* FADC_CLC_SBWE (w) */
#define FADC_CLC_SBWE_POS                    _FADC_UL(4)
#define FADC_CLC_SBWE_LEN                    _FADC_UL(1)

/* FADC_CLC_FSOE (rw) */
#define FADC_CLC_FSOE_POS                    _FADC_UL(5)
#define FADC_CLC_FSOE_LEN                    _FADC_UL(1)

/* FADC_FDR_STEP (rw) */
#define FADC_FDR_STEP_POS                    _FADC_UL(0)
#define FADC_FDR_STEP_LEN                    _FADC_UL(10)

/* FADC_FDR_SM (rw) */
#define FADC_FDR_SM_POS                      _FADC_UL(11)
#define FADC_FDR_SM_LEN                      _FADC_UL(1)

/* FADC_FDR_SC (rw) */
#define FADC_FDR_SC_POS                      _FADC_UL(12)
#define FADC_FDR_SC_LEN                      _FADC_UL(2)

/* FADC_FDR_DM (rw) */
#define FADC_FDR_DM_POS                      _FADC_UL(14)
#define FADC_FDR_DM_LEN                      _FADC_UL(2)

/* FADC_FDR_RESULT (rh) */
#define FADC_FDR_RESULT_POS                  _FADC_UL(16)
#define FADC_FDR_RESULT_LEN                  _FADC_UL(10)

/* FADC_FDR_SUSACK (rh) */
#define FADC_FDR_SUSACK_POS                  _FADC_UL(28)
#define FADC_FDR_SUSACK_LEN                  _FADC_UL(1)

/* FADC_FDR_SUSREQ (rh) */
#define FADC_FDR_SUSREQ_POS                  _FADC_UL(29)
#define FADC_FDR_SUSREQ_LEN                  _FADC_UL(1)

/* FADC_FDR_ENHW (rw) */
#define FADC_FDR_ENHW_POS                    _FADC_UL(30)
#define FADC_FDR_ENHW_LEN                    _FADC_UL(1)

/* FADC_FDR_DISCLK (rwh) */
#define FADC_FDR_DISCLK_POS                  _FADC_UL(31)
#define FADC_FDR_DISCLK_LEN                  _FADC_UL(1)

/* FADC_CRSR_CRF0 (rh) */
#define FADC_CRSR_CRF0_POS                   _FADC_UL(0)
#define FADC_CRSR_CRF0_LEN                   _FADC_UL(1)

/* FADC_CRSR_CRF1 (rh) */
#define FADC_CRSR_CRF1_POS                   _FADC_UL(1)
#define FADC_CRSR_CRF1_LEN                   _FADC_UL(1)

/* FADC_CRSR_CRF2 (rh) */
#define FADC_CRSR_CRF2_POS                   _FADC_UL(2)
#define FADC_CRSR_CRF2_LEN                   _FADC_UL(1)

/* FADC_CRSR_CRF3 (rh) */
#define FADC_CRSR_CRF3_POS                   _FADC_UL(3)
#define FADC_CRSR_CRF3_LEN                   _FADC_UL(1)

/* FADC_CRSR_BSY0 (rh) */
#define FADC_CRSR_BSY0_POS                   _FADC_UL(8)
#define FADC_CRSR_BSY0_LEN                   _FADC_UL(1)

/* FADC_CRSR_BSY1 (rh) */
#define FADC_CRSR_BSY1_POS                   _FADC_UL(9)
#define FADC_CRSR_BSY1_LEN                   _FADC_UL(1)

/* FADC_CRSR_BSY2 (rh) */
#define FADC_CRSR_BSY2_POS                   _FADC_UL(10)
#define FADC_CRSR_BSY2_LEN                   _FADC_UL(1)

/* FADC_CRSR_BSY3 (rh) */
#define FADC_CRSR_BSY3_POS                   _FADC_UL(11)
#define FADC_CRSR_BSY3_LEN                   _FADC_UL(1)

/* FADC_CRSR_IRQ0 (rh) */
#define FADC_CRSR_IRQ0_POS                   _FADC_UL(16)
#define FADC_CRSR_IRQ0_LEN                   _FADC_UL(1)

/* FADC_CRSR_IRQ1 (rh) */
#define FADC_CRSR_IRQ1_POS                   _FADC_UL(17)
#define FADC_CRSR_IRQ1_LEN                   _FADC_UL(1)

/* FADC_CRSR_IRQ2 (rh) */
#define FADC_CRSR_IRQ2_POS                   _FADC_UL(18)
#define FADC_CRSR_IRQ2_LEN                   _FADC_UL(1)

/* FADC_CRSR_IRQ3 (rh) */
#define FADC_CRSR_IRQ3_POS                   _FADC_UL(19)
#define FADC_CRSR_IRQ3_LEN                   _FADC_UL(1)

/* FADC_CRSR_IRQF0 (rh) */
#define FADC_CRSR_IRQF0_POS                  _FADC_UL(20)
#define FADC_CRSR_IRQF0_LEN                  _FADC_UL(1)

/* FADC_CRSR_IRQF1 (rh) */
#define FADC_CRSR_IRQF1_POS                  _FADC_UL(21)
#define FADC_CRSR_IRQF1_LEN                  _FADC_UL(1)

/* FADC_CRSR_IRQF2 (rh) */
#define FADC_CRSR_IRQF2_POS                  _FADC_UL(22)
#define FADC_CRSR_IRQF2_LEN                  _FADC_UL(1)

/* FADC_CRSR_IRQF3 (rh) */
#define FADC_CRSR_IRQF3_POS                  _FADC_UL(23)
#define FADC_CRSR_IRQF3_LEN                  _FADC_UL(1)

/* FADC_FMR_RCRF0 (w) */
#define FADC_FMR_RCRF0_POS                   _FADC_UL(0)
#define FADC_FMR_RCRF0_LEN                   _FADC_UL(1)

/* FADC_FMR_RCRF1 (w) */
#define FADC_FMR_RCRF1_POS                   _FADC_UL(1)
#define FADC_FMR_RCRF1_LEN                   _FADC_UL(1)

/* FADC_FMR_RCRF2 (w) */
#define FADC_FMR_RCRF2_POS                   _FADC_UL(2)
#define FADC_FMR_RCRF2_LEN                   _FADC_UL(1)

/* FADC_FMR_RCRF3 (w) */
#define FADC_FMR_RCRF3_POS                   _FADC_UL(3)
#define FADC_FMR_RCRF3_LEN                   _FADC_UL(1)

/* FADC_FMR_SCRF0 (w) */
#define FADC_FMR_SCRF0_POS                   _FADC_UL(8)
#define FADC_FMR_SCRF0_LEN                   _FADC_UL(1)

/* FADC_FMR_SCRF1 (w) */
#define FADC_FMR_SCRF1_POS                   _FADC_UL(9)
#define FADC_FMR_SCRF1_LEN                   _FADC_UL(1)

/* FADC_FMR_SCRF2 (w) */
#define FADC_FMR_SCRF2_POS                   _FADC_UL(10)
#define FADC_FMR_SCRF2_LEN                   _FADC_UL(1)

/* FADC_FMR_SCRF3 (w) */
#define FADC_FMR_SCRF3_POS                   _FADC_UL(11)
#define FADC_FMR_SCRF3_LEN                   _FADC_UL(1)

/* FADC_FMR_RIRQ0 (w) */
#define FADC_FMR_RIRQ0_POS                   _FADC_UL(16)
#define FADC_FMR_RIRQ0_LEN                   _FADC_UL(1)

/* FADC_FMR_RIRQ1 (w) */
#define FADC_FMR_RIRQ1_POS                   _FADC_UL(17)
#define FADC_FMR_RIRQ1_LEN                   _FADC_UL(1)

/* FADC_FMR_RIRQ2 (w) */
#define FADC_FMR_RIRQ2_POS                   _FADC_UL(18)
#define FADC_FMR_RIRQ2_LEN                   _FADC_UL(1)

/* FADC_FMR_RIRQ3 (w) */
#define FADC_FMR_RIRQ3_POS                   _FADC_UL(19)
#define FADC_FMR_RIRQ3_LEN                   _FADC_UL(1)

/* FADC_FMR_RIRQF0 (w) */
#define FADC_FMR_RIRQF0_POS                  _FADC_UL(20)
#define FADC_FMR_RIRQF0_LEN                  _FADC_UL(1)

/* FADC_FMR_RIRQF1 (w) */
#define FADC_FMR_RIRQF1_POS                  _FADC_UL(21)
#define FADC_FMR_RIRQF1_LEN                  _FADC_UL(1)

/* FADC_FMR_RIRQF2 (w) */
#define FADC_FMR_RIRQF2_POS                  _FADC_UL(22)
#define FADC_FMR_RIRQF2_LEN                  _FADC_UL(1)

/* FADC_FMR_RIRQF3 (w) */
#define FADC_FMR_RIRQF3_POS                  _FADC_UL(23)
#define FADC_FMR_RIRQF3_LEN                  _FADC_UL(1)

/* FADC_FMR_SIRQ0 (w) */
#define FADC_FMR_SIRQ0_POS                   _FADC_UL(24)
#define FADC_FMR_SIRQ0_LEN                   _FADC_UL(1)

/* FADC_FMR_SIRQ1 (w) */
#define FADC_FMR_SIRQ1_POS                   _FADC_UL(25)
#define FADC_FMR_SIRQ1_LEN                   _FADC_UL(1)

/* FADC_FMR_SIRQ2 (w) */
#define FADC_FMR_SIRQ2_POS                   _FADC_UL(26)
#define FADC_FMR_SIRQ2_LEN                   _FADC_UL(1)

/* FADC_FMR_SIRQ3 (w) */
#define FADC_FMR_SIRQ3_POS                   _FADC_UL(27)
#define FADC_FMR_SIRQ3_LEN                   _FADC_UL(1)

/* FADC_FMR_SIRQF0 (w) */
#define FADC_FMR_SIRQF0_POS                  _FADC_UL(28)
#define FADC_FMR_SIRQF0_LEN                  _FADC_UL(1)

/* FADC_FMR_SIRQF1 (w) */
#define FADC_FMR_SIRQF1_POS                  _FADC_UL(29)
#define FADC_FMR_SIRQF1_LEN                  _FADC_UL(1)

/* FADC_FMR_SIRQF2 (w) */
#define FADC_FMR_SIRQF2_POS                  _FADC_UL(30)
#define FADC_FMR_SIRQF2_LEN                  _FADC_UL(1)

/* FADC_FMR_SIRQF3 (w) */
#define FADC_FMR_SIRQF3_POS                  _FADC_UL(31)
#define FADC_FMR_SIRQF3_LEN                  _FADC_UL(1)

/* FADC_NCTR_EN01 (rw) */
#define FADC_NCTR_EN01_POS                   _FADC_UL(1)
#define FADC_NCTR_EN01_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN02 (rw) */
#define FADC_NCTR_EN02_POS                   _FADC_UL(2)
#define FADC_NCTR_EN02_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN03 (rw) */
#define FADC_NCTR_EN03_POS                   _FADC_UL(3)
#define FADC_NCTR_EN03_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN10 (rw) */
#define FADC_NCTR_EN10_POS                   _FADC_UL(8)
#define FADC_NCTR_EN10_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN12 (rw) */
#define FADC_NCTR_EN12_POS                   _FADC_UL(10)
#define FADC_NCTR_EN12_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN13 (rw) */
#define FADC_NCTR_EN13_POS                   _FADC_UL(11)
#define FADC_NCTR_EN13_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN20 (rw) */
#define FADC_NCTR_EN20_POS                   _FADC_UL(16)
#define FADC_NCTR_EN20_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN21 (rw) */
#define FADC_NCTR_EN21_POS                   _FADC_UL(17)
#define FADC_NCTR_EN21_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN23 (rw) */
#define FADC_NCTR_EN23_POS                   _FADC_UL(19)
#define FADC_NCTR_EN23_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN30 (rw) */
#define FADC_NCTR_EN30_POS                   _FADC_UL(24)
#define FADC_NCTR_EN30_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN31 (rw) */
#define FADC_NCTR_EN31_POS                   _FADC_UL(25)
#define FADC_NCTR_EN31_LEN                   _FADC_UL(1)

/* FADC_NCTR_EN32 (rw) */
#define FADC_NCTR_EN32_POS                   _FADC_UL(26)
#define FADC_NCTR_EN32_LEN                   _FADC_UL(1)

/* FADC_GCR_RCT0 (w) */
#define FADC_GCR_RCT0_POS                    _FADC_UL(0)
#define FADC_GCR_RCT0_LEN                    _FADC_UL(1)

/* FADC_GCR_RCT1 (w) */
#define FADC_GCR_RCT1_POS                    _FADC_UL(1)
#define FADC_GCR_RCT1_LEN                    _FADC_UL(1)

/* FADC_GCR_RCT2 (w) */
#define FADC_GCR_RCT2_POS                    _FADC_UL(2)
#define FADC_GCR_RCT2_LEN                    _FADC_UL(1)

/* FADC_GCR_RCT3 (w) */
#define FADC_GCR_RCT3_POS                    _FADC_UL(3)
#define FADC_GCR_RCT3_LEN                    _FADC_UL(1)

/* FADC_GCR_RCD (w) */
#define FADC_GCR_RCD_POS                     _FADC_UL(8)
#define FADC_GCR_RCD_LEN                     _FADC_UL(1)

/* FADC_GCR_RSTF0 (w) */
#define FADC_GCR_RSTF0_POS                   _FADC_UL(9)
#define FADC_GCR_RSTF0_LEN                   _FADC_UL(1)

/* FADC_GCR_RSTF1 (w) */
#define FADC_GCR_RSTF1_POS                   _FADC_UL(10)
#define FADC_GCR_RSTF1_LEN                   _FADC_UL(1)

/* FADC_GCR_RSTF2 (w) */
#define FADC_GCR_RSTF2_POS                   _FADC_UL(11)
#define FADC_GCR_RSTF2_LEN                   _FADC_UL(1)

/* FADC_GCR_RSTF3 (w) */
#define FADC_GCR_RSTF3_POS                   _FADC_UL(12)
#define FADC_GCR_RSTF3_LEN                   _FADC_UL(1)

/* FADC_GCR_CRPRIO (rwh) */
#define FADC_GCR_CRPRIO_POS                  _FADC_UL(16)
#define FADC_GCR_CRPRIO_LEN                  _FADC_UL(2)

/* FADC_GCR_DPAEN (rw) */
#define FADC_GCR_DPAEN_POS                   _FADC_UL(18)
#define FADC_GCR_DPAEN_LEN                   _FADC_UL(1)

/* FADC_GCR_RESWEN (rw) */
#define FADC_GCR_RESWEN_POS                  _FADC_UL(19)
#define FADC_GCR_RESWEN_LEN                  _FADC_UL(1)

/* FADC_GCR_MUXTM (rw) */
#define FADC_GCR_MUXTM_POS                   _FADC_UL(20)
#define FADC_GCR_MUXTM_LEN                   _FADC_UL(1)

/* FADC_GCR_ANON (rw) */
#define FADC_GCR_ANON_POS                    _FADC_UL(21)
#define FADC_GCR_ANON_LEN                    _FADC_UL(1)

/* FADC_GCR_CALMODE (rw) */
#define FADC_GCR_CALMODE_POS                 _FADC_UL(24)
#define FADC_GCR_CALMODE_LEN                 _FADC_UL(2)

/* FADC_GCR_CALCH (rw) */
#define FADC_GCR_CALCH_POS                   _FADC_UL(26)
#define FADC_GCR_CALCH_LEN                   _FADC_UL(2)

/* FADC_CFGR_GSEL (rw) */
#define FADC_CFGR_GSEL_POS                   _FADC_UL(0)
#define FADC_CFGR_GSEL_LEN                   _FADC_UL(3)

/* FADC_CFGR_TSEL (rw) */
#define FADC_CFGR_TSEL_POS                   _FADC_UL(3)
#define FADC_CFGR_TSEL_LEN                   _FADC_UL(3)

/* FADC_CFGR_GM (rw) */
#define FADC_CFGR_GM_POS                     _FADC_UL(6)
#define FADC_CFGR_GM_LEN                     _FADC_UL(2)

/* FADC_CFGR_TM (rw) */
#define FADC_CFGR_TM_POS                     _FADC_UL(8)
#define FADC_CFGR_TM_LEN                     _FADC_UL(2)

/* FADC_CFGR_CTM (rw) */
#define FADC_CFGR_CTM_POS                    _FADC_UL(10)
#define FADC_CFGR_CTM_LEN                    _FADC_UL(2)

/* FADC_CFGR_CTF (rw) */
#define FADC_CFGR_CTF_POS                    _FADC_UL(12)
#define FADC_CFGR_CTF_LEN                    _FADC_UL(3)

/* FADC_CFGR_CTREL (rw) */
#define FADC_CFGR_CTREL_POS                  _FADC_UL(16)
#define FADC_CFGR_CTREL_LEN                  _FADC_UL(8)

/* FADC_CFGR_INP (rw) */
#define FADC_CFGR_INP_POS                    _FADC_UL(28)
#define FADC_CFGR_INP_LEN                    _FADC_UL(2)

/* FADC_CFGR_IEN (rw) */
#define FADC_CFGR_IEN_POS                    _FADC_UL(31)
#define FADC_CFGR_IEN_LEN                    _FADC_UL(1)

/* FADC_ACR_GAIN (rw) */
#define FADC_ACR_GAIN_POS                    _FADC_UL(0)
#define FADC_ACR_GAIN_LEN                    _FADC_UL(2)

/* FADC_ACR_ENP (rw) */
#define FADC_ACR_ENP_POS                     _FADC_UL(2)
#define FADC_ACR_ENP_LEN                     _FADC_UL(1)

/* FADC_ACR_ENN (rw) */
#define FADC_ACR_ENN_POS                     _FADC_UL(3)
#define FADC_ACR_ENN_LEN                     _FADC_UL(1)

/* FADC_ACR_CALOFF (rw) */
#define FADC_ACR_CALOFF_POS                  _FADC_UL(8)
#define FADC_ACR_CALOFF_LEN                  _FADC_UL(3)

/* FADC_ACR_CALOFF3 (rw) */
#define FADC_ACR_CALOFF3_POS                 _FADC_UL(12)
#define FADC_ACR_CALOFF3_LEN                 _FADC_UL(1)

/* FADC_ACR_CALGAIN (rw) */
#define FADC_ACR_CALGAIN_POS                 _FADC_UL(13)
#define FADC_ACR_CALGAIN_LEN                 _FADC_UL(2)

/* FADC_RCH_ADRES (rwh) */
#define FADC_RCH_ADRES_POS                   _FADC_UL(0)
#define FADC_RCH_ADRES_LEN                   _FADC_UL(10)

/* FADC_ALR_ALIAS0 (rw) */
#define FADC_ALR_ALIAS0_POS                  _FADC_UL(0)
#define FADC_ALR_ALIAS0_LEN                  _FADC_UL(2)

/* FADC_ALR_ALIAS1 (rw) */
#define FADC_ALR_ALIAS1_POS                  _FADC_UL(2)
#define FADC_ALR_ALIAS1_LEN                  _FADC_UL(2)

/* FADC_ALR_ALIAS2 (rw) */
#define FADC_ALR_ALIAS2_POS                  _FADC_UL(4)
#define FADC_ALR_ALIAS2_LEN                  _FADC_UL(2)

/* FADC_ALR_ALIAS3 (rw) */
#define FADC_ALR_ALIAS3_POS                  _FADC_UL(6)
#define FADC_ALR_ALIAS3_LEN                  _FADC_UL(2)

/* FADC_FCR0_ADDL (rw) */
#define FADC_FCR0_ADDL_POS                   _FADC_UL(0)
#define FADC_FCR0_ADDL_LEN                   _FADC_UL(3)

/* FADC_FCR0_MAVL (rw) */
#define FADC_FCR0_MAVL_POS                   _FADC_UL(4)
#define FADC_FCR0_MAVL_LEN                   _FADC_UL(2)

/* FADC_FCR0_INSEL (rw) */
#define FADC_FCR0_INSEL_POS                  _FADC_UL(8)
#define FADC_FCR0_INSEL_LEN                  _FADC_UL(3)

/* FADC_FCR0_INP (rw) */
#define FADC_FCR0_INP_POS                    _FADC_UL(12)
#define FADC_FCR0_INP_LEN                    _FADC_UL(2)

/* FADC_FCR0_IEN (rw) */
#define FADC_FCR0_IEN_POS                    _FADC_UL(15)
#define FADC_FCR0_IEN_LEN                    _FADC_UL(1)

/* FADC_CRR0_CR (rh) */
#define FADC_CRR0_CR_POS                     _FADC_UL(0)
#define FADC_CRR0_CR_LEN                     _FADC_UL(19)

/* FADC_CRR0_AC (rh) */
#define FADC_CRR0_AC_POS                     _FADC_UL(24)
#define FADC_CRR0_AC_LEN                     _FADC_UL(3)

/* FADC_CRR0_MAVS (rh) */
#define FADC_CRR0_MAVS_POS                   _FADC_UL(28)
#define FADC_CRR0_MAVS_LEN                   _FADC_UL(2)

/* FADC_IRR10_IR (rh) */
#define FADC_IRR10_IR_POS                    _FADC_UL(0)
#define FADC_IRR10_IR_LEN                    _FADC_UL(13)

/* FADC_IRR20_IR (rh) */
#define FADC_IRR20_IR_POS                    _FADC_UL(0)
#define FADC_IRR20_IR_LEN                    _FADC_UL(13)

/* FADC_IRR30_IR (rh) */
#define FADC_IRR30_IR_POS                    _FADC_UL(0)
#define FADC_IRR30_IR_LEN                    _FADC_UL(13)

/* FADC_FRR0_FR (rh) */
#define FADC_FRR0_FR_POS                     _FADC_UL(0)
#define FADC_FRR0_FR_LEN                     _FADC_UL(15)

/* FADC_FCR1_ADDL (rw) */
#define FADC_FCR1_ADDL_POS                   _FADC_UL(0)
#define FADC_FCR1_ADDL_LEN                   _FADC_UL(3)

/* FADC_FCR1_MAVL (rw) */
#define FADC_FCR1_MAVL_POS                   _FADC_UL(4)
#define FADC_FCR1_MAVL_LEN                   _FADC_UL(2)

/* FADC_FCR1_INSEL (rw) */
#define FADC_FCR1_INSEL_POS                  _FADC_UL(8)
#define FADC_FCR1_INSEL_LEN                  _FADC_UL(3)

/* FADC_FCR1_INP (rw) */
#define FADC_FCR1_INP_POS                    _FADC_UL(12)
#define FADC_FCR1_INP_LEN                    _FADC_UL(2)

/* FADC_FCR1_IEN (rw) */
#define FADC_FCR1_IEN_POS                    _FADC_UL(15)
#define FADC_FCR1_IEN_LEN                    _FADC_UL(1)

/* FADC_CRR1_CR (rh) */
#define FADC_CRR1_CR_POS                     _FADC_UL(0)
#define FADC_CRR1_CR_LEN                     _FADC_UL(19)

/* FADC_CRR1_AC (rh) */
#define FADC_CRR1_AC_POS                     _FADC_UL(24)
#define FADC_CRR1_AC_LEN                     _FADC_UL(3)

/* FADC_CRR1_MAVS (rh) */
#define FADC_CRR1_MAVS_POS                   _FADC_UL(28)
#define FADC_CRR1_MAVS_LEN                   _FADC_UL(2)

/* FADC_IRR11_IR (rh) */
#define FADC_IRR11_IR_POS                    _FADC_UL(0)
#define FADC_IRR11_IR_LEN                    _FADC_UL(18)

/* FADC_FRR1_FR (rh) */
#define FADC_FRR1_FR_POS                     _FADC_UL(0)
#define FADC_FRR1_FR_LEN                     _FADC_UL(20)

/* FADC_SFRR1_FR (rh) */
#define FADC_SFRR1_FR_POS                    _FADC_UL(0)
#define FADC_SFRR1_FR_LEN                    _FADC_UL(15)

/* FADC_FCR2_ADDL (rw) */
#define FADC_FCR2_ADDL_POS                   _FADC_UL(0)
#define FADC_FCR2_ADDL_LEN                   _FADC_UL(3)

/* FADC_FCR2_MAVL (rw) */
#define FADC_FCR2_MAVL_POS                   _FADC_UL(4)
#define FADC_FCR2_MAVL_LEN                   _FADC_UL(2)

/* FADC_FCR2_INSEL (rw) */
#define FADC_FCR2_INSEL_POS                  _FADC_UL(8)
#define FADC_FCR2_INSEL_LEN                  _FADC_UL(3)

/* FADC_FCR2_INP (rw) */
#define FADC_FCR2_INP_POS                    _FADC_UL(12)
#define FADC_FCR2_INP_LEN                    _FADC_UL(2)

/* FADC_FCR2_IEN (rw) */
#define FADC_FCR2_IEN_POS                    _FADC_UL(15)
#define FADC_FCR2_IEN_LEN                    _FADC_UL(1)

/* FADC_CRR2_CR (rh) */
#define FADC_CRR2_CR_POS                     _FADC_UL(0)
#define FADC_CRR2_CR_LEN                     _FADC_UL(19)

/* FADC_CRR2_AC (rh) */
#define FADC_CRR2_AC_POS                     _FADC_UL(24)
#define FADC_CRR2_AC_LEN                     _FADC_UL(3)

/* FADC_CRR2_MAVS (rh) */
#define FADC_CRR2_MAVS_POS                   _FADC_UL(28)
#define FADC_CRR2_MAVS_LEN                   _FADC_UL(2)

/* FADC_IRR12_IR (rh) */
#define FADC_IRR12_IR_POS                    _FADC_UL(0)
#define FADC_IRR12_IR_LEN                    _FADC_UL(13)

/* FADC_IRR22_IR (rh) */
#define FADC_IRR22_IR_POS                    _FADC_UL(0)
#define FADC_IRR22_IR_LEN                    _FADC_UL(13)

/* FADC_IRR32_IR (rh) */
#define FADC_IRR32_IR_POS                    _FADC_UL(0)
#define FADC_IRR32_IR_LEN                    _FADC_UL(13)

/* FADC_FRR2_FR (rh) */
#define FADC_FRR2_FR_POS                     _FADC_UL(0)
#define FADC_FRR2_FR_LEN                     _FADC_UL(15)

/* FADC_FCR3_ADDL (rw) */
#define FADC_FCR3_ADDL_POS                   _FADC_UL(0)
#define FADC_FCR3_ADDL_LEN                   _FADC_UL(3)

/* FADC_FCR3_MAVL (rw) */
#define FADC_FCR3_MAVL_POS                   _FADC_UL(4)
#define FADC_FCR3_MAVL_LEN                   _FADC_UL(2)

/* FADC_FCR3_INSEL (rw) */
#define FADC_FCR3_INSEL_POS                  _FADC_UL(8)
#define FADC_FCR3_INSEL_LEN                  _FADC_UL(3)

/* FADC_FCR3_INP (rw) */
#define FADC_FCR3_INP_POS                    _FADC_UL(12)
#define FADC_FCR3_INP_LEN                    _FADC_UL(2)

/* FADC_FCR3_IEN (rw) */
#define FADC_FCR3_IEN_POS                    _FADC_UL(15)
#define FADC_FCR3_IEN_LEN                    _FADC_UL(1)

/* FADC_CRR3_CR (rh) */
#define FADC_CRR3_CR_POS                     _FADC_UL(0)
#define FADC_CRR3_CR_LEN                     _FADC_UL(19)

/* FADC_CRR3_AC (rh) */
#define FADC_CRR3_AC_POS                     _FADC_UL(24)
#define FADC_CRR3_AC_LEN                     _FADC_UL(3)

/* FADC_CRR3_MAVS (rh) */
#define FADC_CRR3_MAVS_POS                   _FADC_UL(28)
#define FADC_CRR3_MAVS_LEN                   _FADC_UL(2)

/* FADC_IRR13_IR (rh) */
#define FADC_IRR13_IR_POS                    _FADC_UL(0)
#define FADC_IRR13_IR_LEN                    _FADC_UL(18)

/* FADC_FRR3_FR (rh) */
#define FADC_FRR3_FR_POS                     _FADC_UL(0)
#define FADC_FRR3_FR_LEN                     _FADC_UL(20)

/* FADC_SFRR3_FR (rh) */
#define FADC_SFRR3_FR_POS                    _FADC_UL(0)
#define FADC_SFRR3_FR_LEN                    _FADC_UL(15)

/* FADC_SRC3_SRPN (rw) */
#define FADC_SRC3_SRPN_POS                   _FADC_UL(0)
#define FADC_SRC3_SRPN_LEN                   _FADC_UL(8)

/* FADC_SRC3_TOS (rw) */
#define FADC_SRC3_TOS_POS                    _FADC_UL(10)
#define FADC_SRC3_TOS_LEN                    _FADC_UL(1)

/* FADC_SRC3_SRE (rw) */
#define FADC_SRC3_SRE_POS                    _FADC_UL(12)
#define FADC_SRC3_SRE_LEN                    _FADC_UL(1)

/* FADC_SRC3_SRR (rh) */
#define FADC_SRC3_SRR_POS                    _FADC_UL(13)
#define FADC_SRC3_SRR_LEN                    _FADC_UL(1)

/* FADC_SRC3_CLRR (w) */
#define FADC_SRC3_CLRR_POS                   _FADC_UL(14)
#define FADC_SRC3_CLRR_LEN                   _FADC_UL(1)

/* FADC_SRC3_SETR (w) */
#define FADC_SRC3_SETR_POS                   _FADC_UL(15)
#define FADC_SRC3_SETR_LEN                   _FADC_UL(1)

/* FADC_SRC2_SRPN (rw) */
#define FADC_SRC2_SRPN_POS                   _FADC_UL(0)
#define FADC_SRC2_SRPN_LEN                   _FADC_UL(8)

/* FADC_SRC2_TOS (rw) */
#define FADC_SRC2_TOS_POS                    _FADC_UL(10)
#define FADC_SRC2_TOS_LEN                    _FADC_UL(1)

/* FADC_SRC2_SRE (rw) */
#define FADC_SRC2_SRE_POS                    _FADC_UL(12)
#define FADC_SRC2_SRE_LEN                    _FADC_UL(1)

/* FADC_SRC2_SRR (rh) */
#define FADC_SRC2_SRR_POS                    _FADC_UL(13)
#define FADC_SRC2_SRR_LEN                    _FADC_UL(1)

/* FADC_SRC2_CLRR (w) */
#define FADC_SRC2_CLRR_POS                   _FADC_UL(14)
#define FADC_SRC2_CLRR_LEN                   _FADC_UL(1)

/* FADC_SRC2_SETR (w) */
#define FADC_SRC2_SETR_POS                   _FADC_UL(15)
#define FADC_SRC2_SETR_LEN                   _FADC_UL(1)

/* FADC_SRC1_SRPN (rw) */
#define FADC_SRC1_SRPN_POS                   _FADC_UL(0)
#define FADC_SRC1_SRPN_LEN                   _FADC_UL(8)

/* FADC_SRC1_TOS (rw) */
#define FADC_SRC1_TOS_POS                    _FADC_UL(10)
#define FADC_SRC1_TOS_LEN                    _FADC_UL(1)

/* FADC_SRC1_SRE (rw) */
#define FADC_SRC1_SRE_POS                    _FADC_UL(12)
#define FADC_SRC1_SRE_LEN                    _FADC_UL(1)

/* FADC_SRC1_SRR (rh) */
#define FADC_SRC1_SRR_POS                    _FADC_UL(13)
#define FADC_SRC1_SRR_LEN                    _FADC_UL(1)

/* FADC_SRC1_CLRR (w) */
#define FADC_SRC1_CLRR_POS                   _FADC_UL(14)
#define FADC_SRC1_CLRR_LEN                   _FADC_UL(1)

/* FADC_SRC1_SETR (w) */
#define FADC_SRC1_SETR_POS                   _FADC_UL(15)
#define FADC_SRC1_SETR_LEN                   _FADC_UL(1)

/* FADC_SRC0_SRPN (rw) */
#define FADC_SRC0_SRPN_POS                   _FADC_UL(0)
#define FADC_SRC0_SRPN_LEN                   _FADC_UL(8)

/* FADC_SRC0_TOS (rw) */
#define FADC_SRC0_TOS_POS                    _FADC_UL(10)
#define FADC_SRC0_TOS_LEN                    _FADC_UL(1)

/* FADC_SRC0_SRE (rw) */
#define FADC_SRC0_SRE_POS                    _FADC_UL(12)
#define FADC_SRC0_SRE_LEN                    _FADC_UL(1)

/* FADC_SRC0_SRR (rh) */
#define FADC_SRC0_SRR_POS                    _FADC_UL(13)
#define FADC_SRC0_SRR_LEN                    _FADC_UL(1)

/* FADC_SRC0_CLRR (w) */
#define FADC_SRC0_CLRR_POS                   _FADC_UL(14)
#define FADC_SRC0_CLRR_LEN                   _FADC_UL(1)

/* FADC_SRC0_SETR (w) */
#define FADC_SRC0_SETR_POS                   _FADC_UL(15)
#define FADC_SRC0_SETR_LEN                   _FADC_UL(1)

#endif
