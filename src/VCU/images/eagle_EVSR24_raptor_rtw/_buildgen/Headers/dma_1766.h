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
 * $Filename__:dma_1766.h$ 
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
 * $Name______:dma_1766$ 
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
 *      File name: dma_1766.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DMA_1766_H
#define _DMA_1766_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _DMA_UL(x) x
#else
    #define _DMA_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module DMA on TC1766
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* sub-struct for DMA channel registers */

typedef struct {
    volatile uint32 CHSR;          // DMA Channel Status Register
    volatile uint32 CHCR;          // DMA Channel Control Register
    volatile uint32 CHICR;         // DMA Channel Interrupt Control Register
    volatile uint32 ADRCR;         // DMA Channel Address Control Register
    volatile uint32 SADR;          // DMA Channel Source Address Register
    volatile uint32 DADR;          // DMA Channel Destination Address Register
    volatile uint32 SHADR;         // DMA Channel Shadowed Address Register
    volatile uint32 RESERVED;
} DMA_ChanRegs_t;

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0003C00] : DMA Clock Control Register
    volatile uint32 RESERVED0[1];        // [0xF0003C04...0xF0003C07] : reserved space
    volatile uint32 ID;                  // [0xF0003C08] : DMA Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF0003C0C...0xF0003C0F] : reserved space
    volatile uint32 CHRSTR;              // [0xF0003C10] : Channel Reset Request Register
    volatile uint32 TRSR;                // [0xF0003C14] : Transaction Request State Register
    volatile uint32 STREQ;               // [0xF0003C18] : Software Transaction Request Register
    volatile uint32 HTREQ;               // [0xF0003C1C] : Hardware Transaction Request Register
    volatile uint32 EER;                 // [0xF0003C20] : Enable Error Register
    volatile uint32 ERRSR;               // [0xF0003C24] : Error Status Register
    volatile uint32 CLRE;                // [0xF0003C28] : Clear Error Register
    volatile uint32 GINTR;               // [0xF0003C2C] : DMA Global Interrupt Set Register
    volatile uint32 MESR;                // [0xF0003C30] : Move Engine Status Register
    volatile uint32 ME0R;                // [0xF0003C34] : Move Engine 0 Read Register
    volatile uint32 RESERVED2[1];        // [0xF0003C38...0xF0003C3B] : reserved space
    volatile uint32 ME0PR;               // [0xF0003C3C] : Move Engine 0 Pattern Register
    volatile uint32 RESERVED3[1];        // [0xF0003C40...0xF0003C43] : reserved space
    volatile uint32 ME0AENR;             // [0xF0003C44] : Move Engine 0 Access Enable Register
    volatile uint32 ME0ARR;              // [0xF0003C48] : Move Engine 0 Access Range Register
    volatile uint32 RESERVED4[2];        // [0xF0003C4C...0xF0003C53] : reserved space
    volatile uint32 INTSR;               // [0xF0003C54] : Interrupt Status Register
    volatile uint32 INTCR;               // [0xF0003C58] : Interrupt Clear Register
    volatile uint32 WRPSR;               // [0xF0003C5C] : Wrap Status Register
    volatile uint32 RESERVED5[1];        // [0xF0003C60...0xF0003C63] : reserved space
    volatile uint32 OCDSR;               // [0xF0003C64] : OCDS Register
    volatile uint32 SUSPMR;              // [0xF0003C68] : Suspend Mode Register
    volatile uint32 RESERVED6[5];        // [0xF0003C6C...0xF0003C7F] : reserved space
    DMA_ChanRegs_t  SB0[8];                 // [0xF0003C80] : DMA Sub Block 0 Channel Registers
    volatile uint32 RESERVED7[64];       // [0xF0003D80...0xF0003E7F] : reserved space
    volatile uint32 TOCTR;               // [0xF0003E80] : DMA Bus Time-Out Control Register
    volatile uint32 RESERVED8[2];        // [0xF0003E84...0xF0003E8B] : reserved space
    volatile uint32 SYSSRC4;             // [0xF0003E8C] : System Interrupt Service Request Control Register 4
    volatile uint32 SYSSRC3;             // [0xF0003E90] : System Interrupt Service Request Control Register 3
    volatile uint32 SYSSRC2;             // [0xF0003E94] : System Interrupt Service Request Control Register 2
    volatile uint32 SYSSRC1;             // [0xF0003E98] : System Interrupt Service Request Control Register 1
    volatile uint32 SYSSRC0;             // [0xF0003E9C] : System Interrupt Service Request Control Register 0
    volatile uint32 MLI0SRC3;            // [0xF0003EA0] : MLI 0 Service Request Control Register 3
    volatile uint32 MLI0SRC2;            // [0xF0003EA4] : MLI 0 Service Request Control Register 2
    volatile uint32 MLI0SRC1;            // [0xF0003EA8] : MLI 0 Service Request Control Register 1
    volatile uint32 MLI0SRC0;            // [0xF0003EAC] : MLI 0 Service Request Control Register 0
    volatile uint32 RESERVED9[2];        // [0xF0003EB0...0xF0003EB7] : reserved space
    volatile uint32 MLI1SRC1;            // [0xF0003EB8] : MLI 1 Service Request Control Register 1
    volatile uint32 MLI1SRC0;            // [0xF0003EBC] : MLI 1 Service Request Control Register 0
    volatile uint32 RESERVED10[12];      // [0xF0003EC0...0xF0003EEF] : reserved space
    volatile uint32 SRC3;                // [0xF0003EF0] : DMA Service Request Control Register 3
    volatile uint32 SRC2;                // [0xF0003EF4] : DMA Service Request Control Register 2
    volatile uint32 SRC1;                // [0xF0003EF8] : DMA Service Request Control Register 1
    volatile uint32 SRC0;                // [0xF0003EFC] : DMA Service Request Control Register 0
} DMA_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern DMA_RegMap_t DMA __attribute__ ((asection (".bss.label_only")));

/* Although the DMA is located in the first 16kB of segment 15, it must not be accessed with */
/* RMW instructions / absolute addressing due to a bug in TC1796:                            */
/* DMA_TC.005 - Do not access MExPR,MExAENR,MExARR with RMW instructions                     */
/* Due to a lack of up-to-date errata sheets for TC1766, it's assumed that this erratum is   */
/* also valid.                                                                               */

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
/*!!! the following macros must be consistant to the structure DMA_ChanRegs_t above            !!!*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
#define DMA_CHSR_TO_CHCR_OFS            _DMA_UL(4)
#define DMA_CHSR_TO_CHICR_OFS           _DMA_UL(8)
#define DMA_CHSR_TO_ADRCR_OFS           _DMA_UL(12)
#define DMA_CHSR_TO_SADR_OFS            _DMA_UL(16)
#define DMA_CHSR_TO_DADR_OFS            _DMA_UL(20)
#define DMA_CHSR_TO_SHADR_OFS           _DMA_UL(24)

/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
/*!!! the following macros must be consistant to the structure DMA_RegMap_t above              !!!*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
#define DMA_STREQ_TO_HTREQ_OFS          _DMA_UL(4)


/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS END HERE! (do not remove this comment)
 ***************************************************************************************************
*/

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

/* DMA_ADRCR_CBLD (rw) */
#define DMA_ADRCR_CBLD_POS             _DMA_UL(12)
#define DMA_ADRCR_CBLD_LEN             _DMA_UL(4)

/* DMA_ADRCR_CBLS (rw) */
#define DMA_ADRCR_CBLS_POS             _DMA_UL(8)
#define DMA_ADRCR_CBLS_LEN             _DMA_UL(4)

/* DMA_ADRCR_DMF (rw) */
#define DMA_ADRCR_DMF_POS              _DMA_UL(4)
#define DMA_ADRCR_DMF_LEN              _DMA_UL(3)

/* DMA_ADRCR_INCD (rw) */
#define DMA_ADRCR_INCD_POS             _DMA_UL(7)
#define DMA_ADRCR_INCD_LEN             _DMA_UL(1)

/* DMA_ADRCR_INCS (rw) */
#define DMA_ADRCR_INCS_POS             _DMA_UL(3)
#define DMA_ADRCR_INCS_LEN             _DMA_UL(1)

/* DMA_ADRCR_SHCT (rw) */
#define DMA_ADRCR_SHCT_POS             _DMA_UL(16)
#define DMA_ADRCR_SHCT_LEN             _DMA_UL(2)

/* DMA_ADRCR_SMF (rw) */
#define DMA_ADRCR_SMF_POS              _DMA_UL(0)
#define DMA_ADRCR_SMF_LEN              _DMA_UL(3)

/* DMA_CHCR_BLKM (rw) */
#define DMA_CHCR_BLKM_POS              _DMA_UL(16)
#define DMA_CHCR_BLKM_LEN              _DMA_UL(3)

/* DMA_CHCR_CHDW (rw) */
#define DMA_CHCR_CHDW_POS              _DMA_UL(21)
#define DMA_CHCR_CHDW_LEN              _DMA_UL(2)

/* DMA_CHCR_CHMODE (rw) */
#define DMA_CHCR_CHMODE_POS            _DMA_UL(20)
#define DMA_CHCR_CHMODE_LEN            _DMA_UL(1)

/* DMA_CHCR_CHPRIO (rw) */
#define DMA_CHCR_CHPRIO_POS            _DMA_UL(28)
#define DMA_CHCR_CHPRIO_LEN            _DMA_UL(1)

/* DMA_CHCR_DMAPRIO (rw) */
#define DMA_CHCR_DMAPRIO_POS           _DMA_UL(30)
#define DMA_CHCR_DMAPRIO_LEN           _DMA_UL(1)

/* DMA_CHCR_PATSEL (rw) */
#define DMA_CHCR_PATSEL_POS            _DMA_UL(24)
#define DMA_CHCR_PATSEL_LEN            _DMA_UL(2)

/* DMA_CHCR_PRSEL (rw) */
#define DMA_CHCR_PRSEL_POS             _DMA_UL(13)
#define DMA_CHCR_PRSEL_LEN             _DMA_UL(3)

/* DMA_CHCR_RROAT (rw) */
#define DMA_CHCR_RROAT_POS             _DMA_UL(19)
#define DMA_CHCR_RROAT_LEN             _DMA_UL(1)

/* DMA_CHCR_TREL (rw) */
#define DMA_CHCR_TREL_POS              _DMA_UL(0)
#define DMA_CHCR_TREL_LEN              _DMA_UL(9)

/* DMA_CHICR_INTCT (rw) */
#define DMA_CHICR_INTCT_POS            _DMA_UL(2)
#define DMA_CHICR_INTCT_LEN            _DMA_UL(2)

/* DMA_CHICR_INTP (rw) */
#define DMA_CHICR_INTP_POS             _DMA_UL(8)
#define DMA_CHICR_INTP_LEN             _DMA_UL(4)

/* DMA_CHICR_IRDV (rw) */
#define DMA_CHICR_IRDV_POS             _DMA_UL(12)
#define DMA_CHICR_IRDV_LEN             _DMA_UL(4)

/* DMA_CHICR_WRPDE (rw) */
#define DMA_CHICR_WRPDE_POS            _DMA_UL(1)
#define DMA_CHICR_WRPDE_LEN            _DMA_UL(1)

/* DMA_CHICR_WRPP (rw) */
#define DMA_CHICR_WRPP_POS             _DMA_UL(4)
#define DMA_CHICR_WRPP_LEN             _DMA_UL(4)

/* DMA_CHICR_WRPSE (rw) */
#define DMA_CHICR_WRPSE_POS            _DMA_UL(0)
#define DMA_CHICR_WRPSE_LEN            _DMA_UL(1)

/* DMA_CHRSTR_CH00 (rwh) */
#define DMA_CHRSTR_CH00_POS            _DMA_UL(0)
#define DMA_CHRSTR_CH00_LEN            _DMA_UL(1)

/* DMA_CHRSTR_CH01 (rwh) */
#define DMA_CHRSTR_CH01_POS            _DMA_UL(1)
#define DMA_CHRSTR_CH01_LEN            _DMA_UL(1)

/* DMA_CHRSTR_CH02 (rwh) */
#define DMA_CHRSTR_CH02_POS            _DMA_UL(2)
#define DMA_CHRSTR_CH02_LEN            _DMA_UL(1)

/* DMA_CHRSTR_CH03 (rwh) */
#define DMA_CHRSTR_CH03_POS            _DMA_UL(3)
#define DMA_CHRSTR_CH03_LEN            _DMA_UL(1)

/* DMA_CHRSTR_CH04 (rwh) */
#define DMA_CHRSTR_CH04_POS            _DMA_UL(4)
#define DMA_CHRSTR_CH04_LEN            _DMA_UL(1)

/* DMA_CHRSTR_CH05 (rwh) */
#define DMA_CHRSTR_CH05_POS            _DMA_UL(5)
#define DMA_CHRSTR_CH05_LEN            _DMA_UL(1)

/* DMA_CHRSTR_CH06 (rwh) */
#define DMA_CHRSTR_CH06_POS            _DMA_UL(6)
#define DMA_CHRSTR_CH06_LEN            _DMA_UL(1)

/* DMA_CHRSTR_CH07 (rwh) */
#define DMA_CHRSTR_CH07_POS            _DMA_UL(7)
#define DMA_CHRSTR_CH07_LEN            _DMA_UL(1)

/* DMA_CHSR_LXO (rh) */
#define DMA_CHSR_LXO_POS               _DMA_UL(15)
#define DMA_CHSR_LXO_LEN               _DMA_UL(1)

/* DMA_CHSR_TCOUNT (rh) */
#define DMA_CHSR_TCOUNT_POS            _DMA_UL(0)
#define DMA_CHSR_TCOUNT_LEN            _DMA_UL(9)

/* DMA_CLC_DISR (rw) */
#define DMA_CLC_DISR_POS               _DMA_UL(0)
#define DMA_CLC_DISR_LEN               _DMA_UL(1)

/* DMA_CLC_DISS (r) */
#define DMA_CLC_DISS_POS               _DMA_UL(1)
#define DMA_CLC_DISS_LEN               _DMA_UL(1)

/* DMA_CLC_FSOE (rw) */
#define DMA_CLC_FSOE_POS               _DMA_UL(5)
#define DMA_CLC_FSOE_LEN               _DMA_UL(1)

/* DMA_CLC_SBWE (w) */
#define DMA_CLC_SBWE_POS               _DMA_UL(4)
#define DMA_CLC_SBWE_LEN               _DMA_UL(1)

/* DMA_CLC_SPEN (rw) */
#define DMA_CLC_SPEN_POS               _DMA_UL(2)
#define DMA_CLC_SPEN_LEN               _DMA_UL(1)

/* DMA_CLRE_CFPI0ER (w) */
#define DMA_CLRE_CFPI0ER_POS           _DMA_UL(20)
#define DMA_CLRE_CFPI0ER_LEN           _DMA_UL(1)

/* DMA_CLRE_CFPI1ER (w) */
#define DMA_CLRE_CFPI1ER_POS           _DMA_UL(21)
#define DMA_CLRE_CFPI1ER_LEN           _DMA_UL(1)

/* DMA_CLRE_CLRMLI0 (w) */
#define DMA_CLRE_CLRMLI0_POS           _DMA_UL(27)
#define DMA_CLRE_CLRMLI0_LEN           _DMA_UL(1)

/* DMA_CLRE_CLRMLI1 (w) */
#define DMA_CLRE_CLRMLI1_POS           _DMA_UL(31)
#define DMA_CLRE_CLRMLI1_LEN           _DMA_UL(1)

/* DMA_CLRE_CME0DER (w) */
#define DMA_CLRE_CME0DER_POS           _DMA_UL(17)
#define DMA_CLRE_CME0DER_LEN           _DMA_UL(1)

/* DMA_CLRE_CME0SER (w) */
#define DMA_CLRE_CME0SER_POS           _DMA_UL(16)
#define DMA_CLRE_CME0SER_LEN           _DMA_UL(1)

/* DMA_CLRE_CTRL00 (w) */
#define DMA_CLRE_CTRL00_POS            _DMA_UL(0)
#define DMA_CLRE_CTRL00_LEN            _DMA_UL(1)

/* DMA_CLRE_CTRL01 (w) */
#define DMA_CLRE_CTRL01_POS            _DMA_UL(1)
#define DMA_CLRE_CTRL01_LEN            _DMA_UL(1)

/* DMA_CLRE_CTRL02 (w) */
#define DMA_CLRE_CTRL02_POS            _DMA_UL(2)
#define DMA_CLRE_CTRL02_LEN            _DMA_UL(1)

/* DMA_CLRE_CTRL03 (w) */
#define DMA_CLRE_CTRL03_POS            _DMA_UL(3)
#define DMA_CLRE_CTRL03_LEN            _DMA_UL(1)

/* DMA_CLRE_CTRL04 (w) */
#define DMA_CLRE_CTRL04_POS            _DMA_UL(4)
#define DMA_CLRE_CTRL04_LEN            _DMA_UL(1)

/* DMA_CLRE_CTRL05 (w) */
#define DMA_CLRE_CTRL05_POS            _DMA_UL(5)
#define DMA_CLRE_CTRL05_LEN            _DMA_UL(1)

/* DMA_CLRE_CTRL06 (w) */
#define DMA_CLRE_CTRL06_POS            _DMA_UL(6)
#define DMA_CLRE_CTRL06_LEN            _DMA_UL(1)

/* DMA_CLRE_CTRL07 (w) */
#define DMA_CLRE_CTRL07_POS            _DMA_UL(7)
#define DMA_CLRE_CTRL07_LEN            _DMA_UL(1)

/* DMA_DADR_DADR (rwh) */
#define DMA_DADR_DADR_POS              _DMA_UL(0)
#define DMA_DADR_DADR_LEN              _DMA_UL(32)

/* DMA_EER_EME0DER (rw) */
#define DMA_EER_EME0DER_POS            _DMA_UL(17)
#define DMA_EER_EME0DER_LEN            _DMA_UL(1)

/* DMA_EER_EME0SER (rw) */
#define DMA_EER_EME0SER_POS            _DMA_UL(16)
#define DMA_EER_EME0SER_LEN            _DMA_UL(1)

/* DMA_EER_ETRL00 (rw) */
#define DMA_EER_ETRL00_POS             _DMA_UL(0)
#define DMA_EER_ETRL00_LEN             _DMA_UL(1)

/* DMA_EER_ETRL01 (rw) */
#define DMA_EER_ETRL01_POS             _DMA_UL(1)
#define DMA_EER_ETRL01_LEN             _DMA_UL(1)

/* DMA_EER_ETRL02 (rw) */
#define DMA_EER_ETRL02_POS             _DMA_UL(2)
#define DMA_EER_ETRL02_LEN             _DMA_UL(1)

/* DMA_EER_ETRL03 (rw) */
#define DMA_EER_ETRL03_POS             _DMA_UL(3)
#define DMA_EER_ETRL03_LEN             _DMA_UL(1)

/* DMA_EER_ETRL04 (rw) */
#define DMA_EER_ETRL04_POS             _DMA_UL(4)
#define DMA_EER_ETRL04_LEN             _DMA_UL(1)

/* DMA_EER_ETRL05 (rw) */
#define DMA_EER_ETRL05_POS             _DMA_UL(5)
#define DMA_EER_ETRL05_LEN             _DMA_UL(1)

/* DMA_EER_ETRL06 (rw) */
#define DMA_EER_ETRL06_POS             _DMA_UL(6)
#define DMA_EER_ETRL06_LEN             _DMA_UL(1)

/* DMA_EER_ETRL07 (rw) */
#define DMA_EER_ETRL07_POS             _DMA_UL(7)
#define DMA_EER_ETRL07_LEN             _DMA_UL(1)

/* DMA_EER_ME0INP (rw) */
#define DMA_EER_ME0INP_POS             _DMA_UL(20)
#define DMA_EER_ME0INP_LEN             _DMA_UL(4)

/* DMA_EER_TRLINP (rw) */
#define DMA_EER_TRLINP_POS             _DMA_UL(28)
#define DMA_EER_TRLINP_LEN             _DMA_UL(4)

/* DMA_ERRSR_FPI0ER (rh) */
#define DMA_ERRSR_FPI0ER_POS           _DMA_UL(20)
#define DMA_ERRSR_FPI0ER_LEN           _DMA_UL(1)

/* DMA_ERRSR_FPI1ER (rh) */
#define DMA_ERRSR_FPI1ER_POS           _DMA_UL(21)
#define DMA_ERRSR_FPI1ER_LEN           _DMA_UL(1)

/* DMA_ERRSR_LECME0 (rh) */
#define DMA_ERRSR_LECME0_POS           _DMA_UL(24)
#define DMA_ERRSR_LECME0_LEN           _DMA_UL(3)

/* DMA_ERRSR_ME0DER (rh) */
#define DMA_ERRSR_ME0DER_POS           _DMA_UL(17)
#define DMA_ERRSR_ME0DER_LEN           _DMA_UL(1)

/* DMA_ERRSR_ME0SER (rh) */
#define DMA_ERRSR_ME0SER_POS           _DMA_UL(16)
#define DMA_ERRSR_ME0SER_LEN           _DMA_UL(1)

/* DMA_ERRSR_MLI0 (rh) */
#define DMA_ERRSR_MLI0_POS             _DMA_UL(27)
#define DMA_ERRSR_MLI0_LEN             _DMA_UL(1)

/* DMA_ERRSR_MLI1 (rh) */
#define DMA_ERRSR_MLI1_POS             _DMA_UL(31)
#define DMA_ERRSR_MLI1_LEN             _DMA_UL(1)

/* DMA_ERRSR_TRL00 (rh) */
#define DMA_ERRSR_TRL00_POS            _DMA_UL(0)
#define DMA_ERRSR_TRL00_LEN            _DMA_UL(1)

/* DMA_ERRSR_TRL01 (rh) */
#define DMA_ERRSR_TRL01_POS            _DMA_UL(1)
#define DMA_ERRSR_TRL01_LEN            _DMA_UL(1)

/* DMA_ERRSR_TRL02 (rh) */
#define DMA_ERRSR_TRL02_POS            _DMA_UL(2)
#define DMA_ERRSR_TRL02_LEN            _DMA_UL(1)

/* DMA_ERRSR_TRL03 (rh) */
#define DMA_ERRSR_TRL03_POS            _DMA_UL(3)
#define DMA_ERRSR_TRL03_LEN            _DMA_UL(1)

/* DMA_ERRSR_TRL04 (rh) */
#define DMA_ERRSR_TRL04_POS            _DMA_UL(4)
#define DMA_ERRSR_TRL04_LEN            _DMA_UL(1)

/* DMA_ERRSR_TRL05 (rh) */
#define DMA_ERRSR_TRL05_POS            _DMA_UL(5)
#define DMA_ERRSR_TRL05_LEN            _DMA_UL(1)

/* DMA_ERRSR_TRL06 (rh) */
#define DMA_ERRSR_TRL06_POS            _DMA_UL(6)
#define DMA_ERRSR_TRL06_LEN            _DMA_UL(1)

/* DMA_ERRSR_TRL07 (rh) */
#define DMA_ERRSR_TRL07_POS            _DMA_UL(7)
#define DMA_ERRSR_TRL07_LEN            _DMA_UL(1)

/* DMA_GINTR_SIDMA0 (w) */
#define DMA_GINTR_SIDMA0_POS           _DMA_UL(0)
#define DMA_GINTR_SIDMA0_LEN           _DMA_UL(1)

/* DMA_GINTR_SIDMA1 (w) */
#define DMA_GINTR_SIDMA1_POS           _DMA_UL(1)
#define DMA_GINTR_SIDMA1_LEN           _DMA_UL(1)

/* DMA_GINTR_SIDMA10 (w) */
#define DMA_GINTR_SIDMA10_POS          _DMA_UL(10)
#define DMA_GINTR_SIDMA10_LEN          _DMA_UL(1)

/* DMA_GINTR_SIDMA11 (w) */
#define DMA_GINTR_SIDMA11_POS          _DMA_UL(11)
#define DMA_GINTR_SIDMA11_LEN          _DMA_UL(1)

/* DMA_GINTR_SIDMA12 (w) */
#define DMA_GINTR_SIDMA12_POS          _DMA_UL(12)
#define DMA_GINTR_SIDMA12_LEN          _DMA_UL(1)

/* DMA_GINTR_SIDMA13 (w) */
#define DMA_GINTR_SIDMA13_POS          _DMA_UL(13)
#define DMA_GINTR_SIDMA13_LEN          _DMA_UL(1)

/* DMA_GINTR_SIDMA14 (w) */
#define DMA_GINTR_SIDMA14_POS          _DMA_UL(14)
#define DMA_GINTR_SIDMA14_LEN          _DMA_UL(1)

/* DMA_GINTR_SIDMA15 (w) */
#define DMA_GINTR_SIDMA15_POS          _DMA_UL(15)
#define DMA_GINTR_SIDMA15_LEN          _DMA_UL(1)

/* DMA_GINTR_SIDMA2 (w) */
#define DMA_GINTR_SIDMA2_POS           _DMA_UL(2)
#define DMA_GINTR_SIDMA2_LEN           _DMA_UL(1)

/* DMA_GINTR_SIDMA3 (w) */
#define DMA_GINTR_SIDMA3_POS           _DMA_UL(3)
#define DMA_GINTR_SIDMA3_LEN           _DMA_UL(1)

/* DMA_GINTR_SIDMA4 (w) */
#define DMA_GINTR_SIDMA4_POS           _DMA_UL(4)
#define DMA_GINTR_SIDMA4_LEN           _DMA_UL(1)

/* DMA_GINTR_SIDMA5 (w) */
#define DMA_GINTR_SIDMA5_POS           _DMA_UL(5)
#define DMA_GINTR_SIDMA5_LEN           _DMA_UL(1)

/* DMA_GINTR_SIDMA6 (w) */
#define DMA_GINTR_SIDMA6_POS           _DMA_UL(6)
#define DMA_GINTR_SIDMA6_LEN           _DMA_UL(1)

/* DMA_GINTR_SIDMA7 (w) */
#define DMA_GINTR_SIDMA7_POS           _DMA_UL(7)
#define DMA_GINTR_SIDMA7_LEN           _DMA_UL(1)

/* DMA_GINTR_SIDMA8 (w) */
#define DMA_GINTR_SIDMA8_POS           _DMA_UL(8)
#define DMA_GINTR_SIDMA8_LEN           _DMA_UL(1)

/* DMA_GINTR_SIDMA9 (w) */
#define DMA_GINTR_SIDMA9_POS           _DMA_UL(9)
#define DMA_GINTR_SIDMA9_LEN           _DMA_UL(1)

/* DMA_HTREQ_DCH00 (w) */
#define DMA_HTREQ_DCH00_POS            _DMA_UL(16)
#define DMA_HTREQ_DCH00_LEN            _DMA_UL(1)

/* DMA_HTREQ_DCH01 (w) */
#define DMA_HTREQ_DCH01_POS            _DMA_UL(17)
#define DMA_HTREQ_DCH01_LEN            _DMA_UL(1)

/* DMA_HTREQ_DCH02 (w) */
#define DMA_HTREQ_DCH02_POS            _DMA_UL(18)
#define DMA_HTREQ_DCH02_LEN            _DMA_UL(1)

/* DMA_HTREQ_DCH03 (w) */
#define DMA_HTREQ_DCH03_POS            _DMA_UL(19)
#define DMA_HTREQ_DCH03_LEN            _DMA_UL(1)

/* DMA_HTREQ_DCH04 (w) */
#define DMA_HTREQ_DCH04_POS            _DMA_UL(20)
#define DMA_HTREQ_DCH04_LEN            _DMA_UL(1)

/* DMA_HTREQ_DCH05 (w) */
#define DMA_HTREQ_DCH05_POS            _DMA_UL(21)
#define DMA_HTREQ_DCH05_LEN            _DMA_UL(1)

/* DMA_HTREQ_DCH06 (w) */
#define DMA_HTREQ_DCH06_POS            _DMA_UL(22)
#define DMA_HTREQ_DCH06_LEN            _DMA_UL(1)

/* DMA_HTREQ_DCH07 (w) */
#define DMA_HTREQ_DCH07_POS            _DMA_UL(23)
#define DMA_HTREQ_DCH07_LEN            _DMA_UL(1)

/* DMA_HTREQ_ECH00 (w) */
#define DMA_HTREQ_ECH00_POS            _DMA_UL(0)
#define DMA_HTREQ_ECH00_LEN            _DMA_UL(1)

/* DMA_HTREQ_ECH01 (w) */
#define DMA_HTREQ_ECH01_POS            _DMA_UL(1)
#define DMA_HTREQ_ECH01_LEN            _DMA_UL(1)

/* DMA_HTREQ_ECH02 (w) */
#define DMA_HTREQ_ECH02_POS            _DMA_UL(2)
#define DMA_HTREQ_ECH02_LEN            _DMA_UL(1)

/* DMA_HTREQ_ECH03 (w) */
#define DMA_HTREQ_ECH03_POS            _DMA_UL(3)
#define DMA_HTREQ_ECH03_LEN            _DMA_UL(1)

/* DMA_HTREQ_ECH04 (w) */
#define DMA_HTREQ_ECH04_POS            _DMA_UL(4)
#define DMA_HTREQ_ECH04_LEN            _DMA_UL(1)

/* DMA_HTREQ_ECH05 (w) */
#define DMA_HTREQ_ECH05_POS            _DMA_UL(5)
#define DMA_HTREQ_ECH05_LEN            _DMA_UL(1)

/* DMA_HTREQ_ECH06 (w) */
#define DMA_HTREQ_ECH06_POS            _DMA_UL(6)
#define DMA_HTREQ_ECH06_LEN            _DMA_UL(1)

/* DMA_HTREQ_ECH07 (w) */
#define DMA_HTREQ_ECH07_POS            _DMA_UL(7)
#define DMA_HTREQ_ECH07_LEN            _DMA_UL(1)

/* DMA_ID_MOD_NUMBER (r) */
#define DMA_ID_MOD_NUMBER_POS          _DMA_UL(16)
#define DMA_ID_MOD_NUMBER_LEN          _DMA_UL(16)

/* DMA_ID_MOD_REV (r) */
#define DMA_ID_MOD_REV_POS             _DMA_UL(0)
#define DMA_ID_MOD_REV_LEN             _DMA_UL(8)

/* DMA_ID_MOD_TYPE (r) */
#define DMA_ID_MOD_TYPE_POS            _DMA_UL(8)
#define DMA_ID_MOD_TYPE_LEN            _DMA_UL(8)

/* DMA_INTCR_CICH00 (w) */
#define DMA_INTCR_CICH00_POS           _DMA_UL(0)
#define DMA_INTCR_CICH00_LEN           _DMA_UL(1)

/* DMA_INTCR_CICH01 (w) */
#define DMA_INTCR_CICH01_POS           _DMA_UL(1)
#define DMA_INTCR_CICH01_LEN           _DMA_UL(1)

/* DMA_INTCR_CICH02 (w) */
#define DMA_INTCR_CICH02_POS           _DMA_UL(2)
#define DMA_INTCR_CICH02_LEN           _DMA_UL(1)

/* DMA_INTCR_CICH03 (w) */
#define DMA_INTCR_CICH03_POS           _DMA_UL(3)
#define DMA_INTCR_CICH03_LEN           _DMA_UL(1)

/* DMA_INTCR_CICH04 (w) */
#define DMA_INTCR_CICH04_POS           _DMA_UL(4)
#define DMA_INTCR_CICH04_LEN           _DMA_UL(1)

/* DMA_INTCR_CICH05 (w) */
#define DMA_INTCR_CICH05_POS           _DMA_UL(5)
#define DMA_INTCR_CICH05_LEN           _DMA_UL(1)

/* DMA_INTCR_CICH06 (w) */
#define DMA_INTCR_CICH06_POS           _DMA_UL(6)
#define DMA_INTCR_CICH06_LEN           _DMA_UL(1)

/* DMA_INTCR_CICH07 (w) */
#define DMA_INTCR_CICH07_POS           _DMA_UL(7)
#define DMA_INTCR_CICH07_LEN           _DMA_UL(1)

/* DMA_INTCR_CWRP00 (w) */
#define DMA_INTCR_CWRP00_POS           _DMA_UL(16)
#define DMA_INTCR_CWRP00_LEN           _DMA_UL(1)

/* DMA_INTCR_CWRP01 (w) */
#define DMA_INTCR_CWRP01_POS           _DMA_UL(17)
#define DMA_INTCR_CWRP01_LEN           _DMA_UL(1)

/* DMA_INTCR_CWRP02 (w) */
#define DMA_INTCR_CWRP02_POS           _DMA_UL(18)
#define DMA_INTCR_CWRP02_LEN           _DMA_UL(1)

/* DMA_INTCR_CWRP03 (w) */
#define DMA_INTCR_CWRP03_POS           _DMA_UL(19)
#define DMA_INTCR_CWRP03_LEN           _DMA_UL(1)

/* DMA_INTCR_CWRP04 (w) */
#define DMA_INTCR_CWRP04_POS           _DMA_UL(20)
#define DMA_INTCR_CWRP04_LEN           _DMA_UL(1)

/* DMA_INTCR_CWRP05 (w) */
#define DMA_INTCR_CWRP05_POS           _DMA_UL(21)
#define DMA_INTCR_CWRP05_LEN           _DMA_UL(1)

/* DMA_INTCR_CWRP06 (w) */
#define DMA_INTCR_CWRP06_POS           _DMA_UL(22)
#define DMA_INTCR_CWRP06_LEN           _DMA_UL(1)

/* DMA_INTCR_CWRP07 (w) */
#define DMA_INTCR_CWRP07_POS           _DMA_UL(23)
#define DMA_INTCR_CWRP07_LEN           _DMA_UL(1)

/* DMA_INTSR_ICH00 (rh) */
#define DMA_INTSR_ICH00_POS            _DMA_UL(0)
#define DMA_INTSR_ICH00_LEN            _DMA_UL(1)

/* DMA_INTSR_ICH01 (rh) */
#define DMA_INTSR_ICH01_POS            _DMA_UL(1)
#define DMA_INTSR_ICH01_LEN            _DMA_UL(1)

/* DMA_INTSR_ICH02 (rh) */
#define DMA_INTSR_ICH02_POS            _DMA_UL(2)
#define DMA_INTSR_ICH02_LEN            _DMA_UL(1)

/* DMA_INTSR_ICH03 (rh) */
#define DMA_INTSR_ICH03_POS            _DMA_UL(3)
#define DMA_INTSR_ICH03_LEN            _DMA_UL(1)

/* DMA_INTSR_ICH04 (rh) */
#define DMA_INTSR_ICH04_POS            _DMA_UL(4)
#define DMA_INTSR_ICH04_LEN            _DMA_UL(1)

/* DMA_INTSR_ICH05 (rh) */
#define DMA_INTSR_ICH05_POS            _DMA_UL(5)
#define DMA_INTSR_ICH05_LEN            _DMA_UL(1)

/* DMA_INTSR_ICH06 (rh) */
#define DMA_INTSR_ICH06_POS            _DMA_UL(6)
#define DMA_INTSR_ICH06_LEN            _DMA_UL(1)

/* DMA_INTSR_ICH07 (rh) */
#define DMA_INTSR_ICH07_POS            _DMA_UL(7)
#define DMA_INTSR_ICH07_LEN            _DMA_UL(1)

/* DMA_INTSR_PD00 (rh) */
#define DMA_INTSR_PD00_POS             _DMA_UL(16)
#define DMA_INTSR_PD00_LEN             _DMA_UL(1)

/* DMA_INTSR_PD01 (rh) */
#define DMA_INTSR_PD01_POS             _DMA_UL(17)
#define DMA_INTSR_PD01_LEN             _DMA_UL(1)

/* DMA_INTSR_PD02 (rh) */
#define DMA_INTSR_PD02_POS             _DMA_UL(18)
#define DMA_INTSR_PD02_LEN             _DMA_UL(1)

/* DMA_INTSR_PD03 (rh) */
#define DMA_INTSR_PD03_POS             _DMA_UL(19)
#define DMA_INTSR_PD03_LEN             _DMA_UL(1)

/* DMA_INTSR_PD04 (rh) */
#define DMA_INTSR_PD04_POS             _DMA_UL(20)
#define DMA_INTSR_PD04_LEN             _DMA_UL(1)

/* DMA_INTSR_PD05 (rh) */
#define DMA_INTSR_PD05_POS             _DMA_UL(21)
#define DMA_INTSR_PD05_LEN             _DMA_UL(1)

/* DMA_INTSR_PD06 (rh) */
#define DMA_INTSR_PD06_POS             _DMA_UL(22)
#define DMA_INTSR_PD06_LEN             _DMA_UL(1)

/* DMA_INTSR_PD07 (rh) */
#define DMA_INTSR_PD07_POS             _DMA_UL(23)
#define DMA_INTSR_PD07_LEN             _DMA_UL(1)

/* DMA_ME0AENR_AEN0 (rw) */
#define DMA_ME0AENR_AEN0_POS           _DMA_UL(0)
#define DMA_ME0AENR_AEN0_LEN           _DMA_UL(1)

/* DMA_ME0AENR_AEN1 (rw) */
#define DMA_ME0AENR_AEN1_POS           _DMA_UL(1)
#define DMA_ME0AENR_AEN1_LEN           _DMA_UL(1)

/* DMA_ME0AENR_AEN10 (rw) */
#define DMA_ME0AENR_AEN10_POS          _DMA_UL(10)
#define DMA_ME0AENR_AEN10_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN11 (rw) */
#define DMA_ME0AENR_AEN11_POS          _DMA_UL(11)
#define DMA_ME0AENR_AEN11_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN12 (rw) */
#define DMA_ME0AENR_AEN12_POS          _DMA_UL(12)
#define DMA_ME0AENR_AEN12_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN13 (rw) */
#define DMA_ME0AENR_AEN13_POS          _DMA_UL(13)
#define DMA_ME0AENR_AEN13_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN14 (rw) */
#define DMA_ME0AENR_AEN14_POS          _DMA_UL(14)
#define DMA_ME0AENR_AEN14_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN15 (rw) */
#define DMA_ME0AENR_AEN15_POS          _DMA_UL(15)
#define DMA_ME0AENR_AEN15_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN16 (rw) */
#define DMA_ME0AENR_AEN16_POS          _DMA_UL(16)
#define DMA_ME0AENR_AEN16_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN17 (rw) */
#define DMA_ME0AENR_AEN17_POS          _DMA_UL(17)
#define DMA_ME0AENR_AEN17_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN18 (rw) */
#define DMA_ME0AENR_AEN18_POS          _DMA_UL(18)
#define DMA_ME0AENR_AEN18_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN19 (rw) */
#define DMA_ME0AENR_AEN19_POS          _DMA_UL(19)
#define DMA_ME0AENR_AEN19_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN2 (rw) */
#define DMA_ME0AENR_AEN2_POS           _DMA_UL(2)
#define DMA_ME0AENR_AEN2_LEN           _DMA_UL(1)

/* DMA_ME0AENR_AEN20 (rw) */
#define DMA_ME0AENR_AEN20_POS          _DMA_UL(20)
#define DMA_ME0AENR_AEN20_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN21 (rw) */
#define DMA_ME0AENR_AEN21_POS          _DMA_UL(21)
#define DMA_ME0AENR_AEN21_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN22 (rw) */
#define DMA_ME0AENR_AEN22_POS          _DMA_UL(22)
#define DMA_ME0AENR_AEN22_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN23 (rw) */
#define DMA_ME0AENR_AEN23_POS          _DMA_UL(23)
#define DMA_ME0AENR_AEN23_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN24 (rw) */
#define DMA_ME0AENR_AEN24_POS          _DMA_UL(24)
#define DMA_ME0AENR_AEN24_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN25 (rw) */
#define DMA_ME0AENR_AEN25_POS          _DMA_UL(25)
#define DMA_ME0AENR_AEN25_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN26 (rw) */
#define DMA_ME0AENR_AEN26_POS          _DMA_UL(26)
#define DMA_ME0AENR_AEN26_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN27 (rw) */
#define DMA_ME0AENR_AEN27_POS          _DMA_UL(27)
#define DMA_ME0AENR_AEN27_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN28 (rw) */
#define DMA_ME0AENR_AEN28_POS          _DMA_UL(28)
#define DMA_ME0AENR_AEN28_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN29 (rw) */
#define DMA_ME0AENR_AEN29_POS          _DMA_UL(29)
#define DMA_ME0AENR_AEN29_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN3 (rw) */
#define DMA_ME0AENR_AEN3_POS           _DMA_UL(3)
#define DMA_ME0AENR_AEN3_LEN           _DMA_UL(1)

/* DMA_ME0AENR_AEN30 (rw) */
#define DMA_ME0AENR_AEN30_POS          _DMA_UL(30)
#define DMA_ME0AENR_AEN30_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN31 (rw) */
#define DMA_ME0AENR_AEN31_POS          _DMA_UL(31)
#define DMA_ME0AENR_AEN31_LEN          _DMA_UL(1)

/* DMA_ME0AENR_AEN4 (rw) */
#define DMA_ME0AENR_AEN4_POS           _DMA_UL(4)
#define DMA_ME0AENR_AEN4_LEN           _DMA_UL(1)

/* DMA_ME0AENR_AEN5 (rw) */
#define DMA_ME0AENR_AEN5_POS           _DMA_UL(5)
#define DMA_ME0AENR_AEN5_LEN           _DMA_UL(1)

/* DMA_ME0AENR_AEN6 (rw) */
#define DMA_ME0AENR_AEN6_POS           _DMA_UL(6)
#define DMA_ME0AENR_AEN6_LEN           _DMA_UL(1)

/* DMA_ME0AENR_AEN7 (rw) */
#define DMA_ME0AENR_AEN7_POS           _DMA_UL(7)
#define DMA_ME0AENR_AEN7_LEN           _DMA_UL(1)

/* DMA_ME0AENR_AEN8 (rw) */
#define DMA_ME0AENR_AEN8_POS           _DMA_UL(8)
#define DMA_ME0AENR_AEN8_LEN           _DMA_UL(1)

/* DMA_ME0AENR_AEN9 (rw) */
#define DMA_ME0AENR_AEN9_POS           _DMA_UL(9)
#define DMA_ME0AENR_AEN9_LEN           _DMA_UL(1)

/* DMA_ME0ARR_SIZE0 (rw) */
#define DMA_ME0ARR_SIZE0_POS           _DMA_UL(5)
#define DMA_ME0ARR_SIZE0_LEN           _DMA_UL(3)

/* DMA_ME0ARR_SIZE1 (rw) */
#define DMA_ME0ARR_SIZE1_POS           _DMA_UL(13)
#define DMA_ME0ARR_SIZE1_LEN           _DMA_UL(3)

/* DMA_ME0ARR_SIZE2 (rw) */
#define DMA_ME0ARR_SIZE2_POS           _DMA_UL(21)
#define DMA_ME0ARR_SIZE2_LEN           _DMA_UL(3)

/* DMA_ME0ARR_SIZE3 (rw) */
#define DMA_ME0ARR_SIZE3_POS           _DMA_UL(29)
#define DMA_ME0ARR_SIZE3_LEN           _DMA_UL(3)

/* DMA_ME0ARR_SLICE0 (rw) */
#define DMA_ME0ARR_SLICE0_POS          _DMA_UL(0)
#define DMA_ME0ARR_SLICE0_LEN          _DMA_UL(5)

/* DMA_ME0ARR_SLICE1 (rw) */
#define DMA_ME0ARR_SLICE1_POS          _DMA_UL(8)
#define DMA_ME0ARR_SLICE1_LEN          _DMA_UL(5)

/* DMA_ME0ARR_SLICE2 (rw) */
#define DMA_ME0ARR_SLICE2_POS          _DMA_UL(16)
#define DMA_ME0ARR_SLICE2_LEN          _DMA_UL(5)

/* DMA_ME0ARR_SLICE3 (rw) */
#define DMA_ME0ARR_SLICE3_POS          _DMA_UL(24)
#define DMA_ME0ARR_SLICE3_LEN          _DMA_UL(5)

/* DMA_ME0PR_PAT00 (rw) */
#define DMA_ME0PR_PAT00_POS            _DMA_UL(0)
#define DMA_ME0PR_PAT00_LEN            _DMA_UL(8)

/* DMA_ME0PR_PAT01 (rw) */
#define DMA_ME0PR_PAT01_POS            _DMA_UL(8)
#define DMA_ME0PR_PAT01_LEN            _DMA_UL(8)

/* DMA_ME0PR_PAT02 (rw) */
#define DMA_ME0PR_PAT02_POS            _DMA_UL(16)
#define DMA_ME0PR_PAT02_LEN            _DMA_UL(8)

/* DMA_ME0PR_PAT03 (rw) */
#define DMA_ME0PR_PAT03_POS            _DMA_UL(24)
#define DMA_ME0PR_PAT03_LEN            _DMA_UL(8)

/* DMA_ME0R_ME0R (rh) */
#define DMA_ME0R_ME0R_POS              _DMA_UL(0)
#define DMA_ME0R_ME0R_LEN              _DMA_UL(32)

/* DMA_MESR_CH0 (rh) */
#define DMA_MESR_CH0_POS               _DMA_UL(1)
#define DMA_MESR_CH0_LEN               _DMA_UL(3)

/* DMA_MESR_ME0RS (rh) */
#define DMA_MESR_ME0RS_POS             _DMA_UL(0)
#define DMA_MESR_ME0RS_LEN             _DMA_UL(1)

/* DMA_MESR_ME0WS (rh) */
#define DMA_MESR_ME0WS_POS             _DMA_UL(4)
#define DMA_MESR_ME0WS_LEN             _DMA_UL(1)

/* DMA_MESR_RBT0 (rh) */
#define DMA_MESR_RBT0_POS              _DMA_UL(5)
#define DMA_MESR_RBT0_LEN              _DMA_UL(3)

/* DMA_MESR_RBT1 (rh) */
#define DMA_MESR_RBT1_POS              _DMA_UL(13)
#define DMA_MESR_RBT1_LEN              _DMA_UL(3)

/* DMA_MLI0SRC0_CLRR (w) */
#define DMA_MLI0SRC0_CLRR_POS          _DMA_UL(14)
#define DMA_MLI0SRC0_CLRR_LEN          _DMA_UL(1)

/* DMA_MLI0SRC0_SETR (w) */
#define DMA_MLI0SRC0_SETR_POS          _DMA_UL(15)
#define DMA_MLI0SRC0_SETR_LEN          _DMA_UL(1)

/* DMA_MLI0SRC0_SRE (rw) */
#define DMA_MLI0SRC0_SRE_POS           _DMA_UL(12)
#define DMA_MLI0SRC0_SRE_LEN           _DMA_UL(1)

/* DMA_MLI0SRC0_SRPN (rw) */
#define DMA_MLI0SRC0_SRPN_POS          _DMA_UL(0)
#define DMA_MLI0SRC0_SRPN_LEN          _DMA_UL(8)

/* DMA_MLI0SRC0_SRR (rh) */
#define DMA_MLI0SRC0_SRR_POS           _DMA_UL(13)
#define DMA_MLI0SRC0_SRR_LEN           _DMA_UL(1)

/* DMA_MLI0SRC0_TOS (rw) */
#define DMA_MLI0SRC0_TOS_POS           _DMA_UL(10)
#define DMA_MLI0SRC0_TOS_LEN           _DMA_UL(1)

/* DMA_MLI0SRC1_CLRR (w) */
#define DMA_MLI0SRC1_CLRR_POS          _DMA_UL(14)
#define DMA_MLI0SRC1_CLRR_LEN          _DMA_UL(1)

/* DMA_MLI0SRC1_SETR (w) */
#define DMA_MLI0SRC1_SETR_POS          _DMA_UL(15)
#define DMA_MLI0SRC1_SETR_LEN          _DMA_UL(1)

/* DMA_MLI0SRC1_SRE (rw) */
#define DMA_MLI0SRC1_SRE_POS           _DMA_UL(12)
#define DMA_MLI0SRC1_SRE_LEN           _DMA_UL(1)

/* DMA_MLI0SRC1_SRPN (rw) */
#define DMA_MLI0SRC1_SRPN_POS          _DMA_UL(0)
#define DMA_MLI0SRC1_SRPN_LEN          _DMA_UL(8)

/* DMA_MLI0SRC1_SRR (rh) */
#define DMA_MLI0SRC1_SRR_POS           _DMA_UL(13)
#define DMA_MLI0SRC1_SRR_LEN           _DMA_UL(1)

/* DMA_MLI0SRC1_TOS (rw) */
#define DMA_MLI0SRC1_TOS_POS           _DMA_UL(10)
#define DMA_MLI0SRC1_TOS_LEN           _DMA_UL(1)

/* DMA_MLI0SRC2_CLRR (w) */
#define DMA_MLI0SRC2_CLRR_POS          _DMA_UL(14)
#define DMA_MLI0SRC2_CLRR_LEN          _DMA_UL(1)

/* DMA_MLI0SRC2_SETR (w) */
#define DMA_MLI0SRC2_SETR_POS          _DMA_UL(15)
#define DMA_MLI0SRC2_SETR_LEN          _DMA_UL(1)

/* DMA_MLI0SRC2_SRE (rw) */
#define DMA_MLI0SRC2_SRE_POS           _DMA_UL(12)
#define DMA_MLI0SRC2_SRE_LEN           _DMA_UL(1)

/* DMA_MLI0SRC2_SRPN (rw) */
#define DMA_MLI0SRC2_SRPN_POS          _DMA_UL(0)
#define DMA_MLI0SRC2_SRPN_LEN          _DMA_UL(8)

/* DMA_MLI0SRC2_SRR (rh) */
#define DMA_MLI0SRC2_SRR_POS           _DMA_UL(13)
#define DMA_MLI0SRC2_SRR_LEN           _DMA_UL(1)

/* DMA_MLI0SRC2_TOS (rw) */
#define DMA_MLI0SRC2_TOS_POS           _DMA_UL(10)
#define DMA_MLI0SRC2_TOS_LEN           _DMA_UL(1)

/* DMA_MLI0SRC3_CLRR (w) */
#define DMA_MLI0SRC3_CLRR_POS          _DMA_UL(14)
#define DMA_MLI0SRC3_CLRR_LEN          _DMA_UL(1)

/* DMA_MLI0SRC3_SETR (w) */
#define DMA_MLI0SRC3_SETR_POS          _DMA_UL(15)
#define DMA_MLI0SRC3_SETR_LEN          _DMA_UL(1)

/* DMA_MLI0SRC3_SRE (rw) */
#define DMA_MLI0SRC3_SRE_POS           _DMA_UL(12)
#define DMA_MLI0SRC3_SRE_LEN           _DMA_UL(1)

/* DMA_MLI0SRC3_SRPN (rw) */
#define DMA_MLI0SRC3_SRPN_POS          _DMA_UL(0)
#define DMA_MLI0SRC3_SRPN_LEN          _DMA_UL(8)

/* DMA_MLI0SRC3_SRR (rh) */
#define DMA_MLI0SRC3_SRR_POS           _DMA_UL(13)
#define DMA_MLI0SRC3_SRR_LEN           _DMA_UL(1)

/* DMA_MLI0SRC3_TOS (rw) */
#define DMA_MLI0SRC3_TOS_POS           _DMA_UL(10)
#define DMA_MLI0SRC3_TOS_LEN           _DMA_UL(1)

/* DMA_MLI1SRC0_CLRR (w) */
#define DMA_MLI1SRC0_CLRR_POS          _DMA_UL(14)
#define DMA_MLI1SRC0_CLRR_LEN          _DMA_UL(1)

/* DMA_MLI1SRC0_SETR (w) */
#define DMA_MLI1SRC0_SETR_POS          _DMA_UL(15)
#define DMA_MLI1SRC0_SETR_LEN          _DMA_UL(1)

/* DMA_MLI1SRC0_SRE (rw) */
#define DMA_MLI1SRC0_SRE_POS           _DMA_UL(12)
#define DMA_MLI1SRC0_SRE_LEN           _DMA_UL(1)

/* DMA_MLI1SRC0_SRPN (rw) */
#define DMA_MLI1SRC0_SRPN_POS          _DMA_UL(0)
#define DMA_MLI1SRC0_SRPN_LEN          _DMA_UL(8)

/* DMA_MLI1SRC0_SRR (rh) */
#define DMA_MLI1SRC0_SRR_POS           _DMA_UL(13)
#define DMA_MLI1SRC0_SRR_LEN           _DMA_UL(1)

/* DMA_MLI1SRC0_TOS (rw) */
#define DMA_MLI1SRC0_TOS_POS           _DMA_UL(10)
#define DMA_MLI1SRC0_TOS_LEN           _DMA_UL(1)

/* DMA_MLI1SRC1_CLRR (w) */
#define DMA_MLI1SRC1_CLRR_POS          _DMA_UL(14)
#define DMA_MLI1SRC1_CLRR_LEN          _DMA_UL(1)

/* DMA_MLI1SRC1_SETR (w) */
#define DMA_MLI1SRC1_SETR_POS          _DMA_UL(15)
#define DMA_MLI1SRC1_SETR_LEN          _DMA_UL(1)

/* DMA_MLI1SRC1_SRE (rw) */
#define DMA_MLI1SRC1_SRE_POS           _DMA_UL(12)
#define DMA_MLI1SRC1_SRE_LEN           _DMA_UL(1)

/* DMA_MLI1SRC1_SRPN (rw) */
#define DMA_MLI1SRC1_SRPN_POS          _DMA_UL(0)
#define DMA_MLI1SRC1_SRPN_LEN          _DMA_UL(8)

/* DMA_MLI1SRC1_SRR (rh) */
#define DMA_MLI1SRC1_SRR_POS           _DMA_UL(13)
#define DMA_MLI1SRC1_SRR_LEN           _DMA_UL(1)

/* DMA_MLI1SRC1_TOS (rw) */
#define DMA_MLI1SRC1_TOS_POS           _DMA_UL(10)
#define DMA_MLI1SRC1_TOS_LEN           _DMA_UL(1)

/* DMA_OCDSR_BCHS0 (rw) */
#define DMA_OCDSR_BCHS0_POS            _DMA_UL(2)
#define DMA_OCDSR_BCHS0_LEN            _DMA_UL(3)

/* DMA_OCDSR_BRL0 (rw) */
#define DMA_OCDSR_BRL0_POS             _DMA_UL(5)
#define DMA_OCDSR_BRL0_LEN             _DMA_UL(1)

/* DMA_OCDSR_BTRC0 (rw) */
#define DMA_OCDSR_BTRC0_POS            _DMA_UL(0)
#define DMA_OCDSR_BTRC0_LEN            _DMA_UL(2)

/* DMA_SADR_SADR (rwh) */
#define DMA_SADR_SADR_POS              _DMA_UL(0)
#define DMA_SADR_SADR_LEN              _DMA_UL(32)

/* DMA_SHADR_SHADR (rh) */
#define DMA_SHADR_SHADR_POS            _DMA_UL(0)
#define DMA_SHADR_SHADR_LEN            _DMA_UL(32)

/* DMA_SRC0_CLRR (w) */
#define DMA_SRC0_CLRR_POS              _DMA_UL(14)
#define DMA_SRC0_CLRR_LEN              _DMA_UL(1)

/* DMA_SRC0_SETR (w) */
#define DMA_SRC0_SETR_POS              _DMA_UL(15)
#define DMA_SRC0_SETR_LEN              _DMA_UL(1)

/* DMA_SRC0_SRE (rw) */
#define DMA_SRC0_SRE_POS               _DMA_UL(12)
#define DMA_SRC0_SRE_LEN               _DMA_UL(1)

/* DMA_SRC0_SRPN (rw) */
#define DMA_SRC0_SRPN_POS              _DMA_UL(0)
#define DMA_SRC0_SRPN_LEN              _DMA_UL(8)

/* DMA_SRC0_SRR (rh) */
#define DMA_SRC0_SRR_POS               _DMA_UL(13)
#define DMA_SRC0_SRR_LEN               _DMA_UL(1)

/* DMA_SRC0_TOS (rw) */
#define DMA_SRC0_TOS_POS               _DMA_UL(10)
#define DMA_SRC0_TOS_LEN               _DMA_UL(1)

/* DMA_SRC1_CLRR (w) */
#define DMA_SRC1_CLRR_POS              _DMA_UL(14)
#define DMA_SRC1_CLRR_LEN              _DMA_UL(1)

/* DMA_SRC1_SETR (w) */
#define DMA_SRC1_SETR_POS              _DMA_UL(15)
#define DMA_SRC1_SETR_LEN              _DMA_UL(1)

/* DMA_SRC1_SRE (rw) */
#define DMA_SRC1_SRE_POS               _DMA_UL(12)
#define DMA_SRC1_SRE_LEN               _DMA_UL(1)

/* DMA_SRC1_SRPN (rw) */
#define DMA_SRC1_SRPN_POS              _DMA_UL(0)
#define DMA_SRC1_SRPN_LEN              _DMA_UL(8)

/* DMA_SRC1_SRR (rh) */
#define DMA_SRC1_SRR_POS               _DMA_UL(13)
#define DMA_SRC1_SRR_LEN               _DMA_UL(1)

/* DMA_SRC1_TOS (rw) */
#define DMA_SRC1_TOS_POS               _DMA_UL(10)
#define DMA_SRC1_TOS_LEN               _DMA_UL(1)

/* DMA_SRC2_CLRR (w) */
#define DMA_SRC2_CLRR_POS              _DMA_UL(14)
#define DMA_SRC2_CLRR_LEN              _DMA_UL(1)

/* DMA_SRC2_SETR (w) */
#define DMA_SRC2_SETR_POS              _DMA_UL(15)
#define DMA_SRC2_SETR_LEN              _DMA_UL(1)

/* DMA_SRC2_SRE (rw) */
#define DMA_SRC2_SRE_POS               _DMA_UL(12)
#define DMA_SRC2_SRE_LEN               _DMA_UL(1)

/* DMA_SRC2_SRPN (rw) */
#define DMA_SRC2_SRPN_POS              _DMA_UL(0)
#define DMA_SRC2_SRPN_LEN              _DMA_UL(8)

/* DMA_SRC2_SRR (rh) */
#define DMA_SRC2_SRR_POS               _DMA_UL(13)
#define DMA_SRC2_SRR_LEN               _DMA_UL(1)

/* DMA_SRC2_TOS (rw) */
#define DMA_SRC2_TOS_POS               _DMA_UL(10)
#define DMA_SRC2_TOS_LEN               _DMA_UL(1)

/* DMA_SRC3_CLRR (w) */
#define DMA_SRC3_CLRR_POS              _DMA_UL(14)
#define DMA_SRC3_CLRR_LEN              _DMA_UL(1)

/* DMA_SRC3_SETR (w) */
#define DMA_SRC3_SETR_POS              _DMA_UL(15)
#define DMA_SRC3_SETR_LEN              _DMA_UL(1)

/* DMA_SRC3_SRE (rw) */
#define DMA_SRC3_SRE_POS               _DMA_UL(12)
#define DMA_SRC3_SRE_LEN               _DMA_UL(1)

/* DMA_SRC3_SRPN (rw) */
#define DMA_SRC3_SRPN_POS              _DMA_UL(0)
#define DMA_SRC3_SRPN_LEN              _DMA_UL(8)

/* DMA_SRC3_SRR (rh) */
#define DMA_SRC3_SRR_POS               _DMA_UL(13)
#define DMA_SRC3_SRR_LEN               _DMA_UL(1)

/* DMA_SRC3_TOS (rw) */
#define DMA_SRC3_TOS_POS               _DMA_UL(10)
#define DMA_SRC3_TOS_LEN               _DMA_UL(1)

/* DMA_STREQ_SCH00 (w) */
#define DMA_STREQ_SCH00_POS            _DMA_UL(0)
#define DMA_STREQ_SCH00_LEN            _DMA_UL(1)

/* DMA_STREQ_SCH01 (w) */
#define DMA_STREQ_SCH01_POS            _DMA_UL(1)
#define DMA_STREQ_SCH01_LEN            _DMA_UL(1)

/* DMA_STREQ_SCH02 (w) */
#define DMA_STREQ_SCH02_POS            _DMA_UL(2)
#define DMA_STREQ_SCH02_LEN            _DMA_UL(1)

/* DMA_STREQ_SCH03 (w) */
#define DMA_STREQ_SCH03_POS            _DMA_UL(3)
#define DMA_STREQ_SCH03_LEN            _DMA_UL(1)

/* DMA_STREQ_SCH04 (w) */
#define DMA_STREQ_SCH04_POS            _DMA_UL(4)
#define DMA_STREQ_SCH04_LEN            _DMA_UL(1)

/* DMA_STREQ_SCH05 (w) */
#define DMA_STREQ_SCH05_POS            _DMA_UL(5)
#define DMA_STREQ_SCH05_LEN            _DMA_UL(1)

/* DMA_STREQ_SCH06 (w) */
#define DMA_STREQ_SCH06_POS            _DMA_UL(6)
#define DMA_STREQ_SCH06_LEN            _DMA_UL(1)

/* DMA_STREQ_SCH07 (w) */
#define DMA_STREQ_SCH07_POS            _DMA_UL(7)
#define DMA_STREQ_SCH07_LEN            _DMA_UL(1)

/* DMA_SUSPMR_SUSAC00 (rh) */
#define DMA_SUSPMR_SUSAC00_POS         _DMA_UL(16)
#define DMA_SUSPMR_SUSAC00_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSAC01 (rh) */
#define DMA_SUSPMR_SUSAC01_POS         _DMA_UL(17)
#define DMA_SUSPMR_SUSAC01_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSAC02 (rh) */
#define DMA_SUSPMR_SUSAC02_POS         _DMA_UL(18)
#define DMA_SUSPMR_SUSAC02_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSAC03 (rh) */
#define DMA_SUSPMR_SUSAC03_POS         _DMA_UL(19)
#define DMA_SUSPMR_SUSAC03_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSAC04 (rh) */
#define DMA_SUSPMR_SUSAC04_POS         _DMA_UL(20)
#define DMA_SUSPMR_SUSAC04_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSAC05 (rh) */
#define DMA_SUSPMR_SUSAC05_POS         _DMA_UL(21)
#define DMA_SUSPMR_SUSAC05_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSAC06 (rh) */
#define DMA_SUSPMR_SUSAC06_POS         _DMA_UL(22)
#define DMA_SUSPMR_SUSAC06_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSAC07 (rh) */
#define DMA_SUSPMR_SUSAC07_POS         _DMA_UL(23)
#define DMA_SUSPMR_SUSAC07_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSEN00 (rw) */
#define DMA_SUSPMR_SUSEN00_POS         _DMA_UL(0)
#define DMA_SUSPMR_SUSEN00_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSEN01 (rw) */
#define DMA_SUSPMR_SUSEN01_POS         _DMA_UL(1)
#define DMA_SUSPMR_SUSEN01_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSEN02 (rw) */
#define DMA_SUSPMR_SUSEN02_POS         _DMA_UL(2)
#define DMA_SUSPMR_SUSEN02_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSEN03 (rw) */
#define DMA_SUSPMR_SUSEN03_POS         _DMA_UL(3)
#define DMA_SUSPMR_SUSEN03_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSEN04 (rw) */
#define DMA_SUSPMR_SUSEN04_POS         _DMA_UL(4)
#define DMA_SUSPMR_SUSEN04_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSEN05 (rw) */
#define DMA_SUSPMR_SUSEN05_POS         _DMA_UL(5)
#define DMA_SUSPMR_SUSEN05_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSEN06 (rw) */
#define DMA_SUSPMR_SUSEN06_POS         _DMA_UL(6)
#define DMA_SUSPMR_SUSEN06_LEN         _DMA_UL(1)

/* DMA_SUSPMR_SUSEN07 (rw) */
#define DMA_SUSPMR_SUSEN07_POS         _DMA_UL(7)
#define DMA_SUSPMR_SUSEN07_LEN         _DMA_UL(1)

/* DMA_SYSSRC0_CLRR (w) */
#define DMA_SYSSRC0_CLRR_POS           _DMA_UL(14)
#define DMA_SYSSRC0_CLRR_LEN           _DMA_UL(1)

/* DMA_SYSSRC0_SETR (w) */
#define DMA_SYSSRC0_SETR_POS           _DMA_UL(15)
#define DMA_SYSSRC0_SETR_LEN           _DMA_UL(1)

/* DMA_SYSSRC0_SRE (rw) */
#define DMA_SYSSRC0_SRE_POS            _DMA_UL(12)
#define DMA_SYSSRC0_SRE_LEN            _DMA_UL(1)

/* DMA_SYSSRC0_SRPN (rw) */
#define DMA_SYSSRC0_SRPN_POS           _DMA_UL(0)
#define DMA_SYSSRC0_SRPN_LEN           _DMA_UL(8)

/* DMA_SYSSRC0_SRR (rh) */
#define DMA_SYSSRC0_SRR_POS            _DMA_UL(13)
#define DMA_SYSSRC0_SRR_LEN            _DMA_UL(1)

/* DMA_SYSSRC0_TOS (rw) */
#define DMA_SYSSRC0_TOS_POS            _DMA_UL(10)
#define DMA_SYSSRC0_TOS_LEN            _DMA_UL(1)

/* DMA_SYSSRC1_CLRR (w) */
#define DMA_SYSSRC1_CLRR_POS           _DMA_UL(14)
#define DMA_SYSSRC1_CLRR_LEN           _DMA_UL(1)

/* DMA_SYSSRC1_SETR (w) */
#define DMA_SYSSRC1_SETR_POS           _DMA_UL(15)
#define DMA_SYSSRC1_SETR_LEN           _DMA_UL(1)

/* DMA_SYSSRC1_SRE (rw) */
#define DMA_SYSSRC1_SRE_POS            _DMA_UL(12)
#define DMA_SYSSRC1_SRE_LEN            _DMA_UL(1)

/* DMA_SYSSRC1_SRPN (rw) */
#define DMA_SYSSRC1_SRPN_POS           _DMA_UL(0)
#define DMA_SYSSRC1_SRPN_LEN           _DMA_UL(8)

/* DMA_SYSSRC1_SRR (rh) */
#define DMA_SYSSRC1_SRR_POS            _DMA_UL(13)
#define DMA_SYSSRC1_SRR_LEN            _DMA_UL(1)

/* DMA_SYSSRC1_TOS (rw) */
#define DMA_SYSSRC1_TOS_POS            _DMA_UL(10)
#define DMA_SYSSRC1_TOS_LEN            _DMA_UL(1)

/* DMA_SYSSRC2_CLRR (w) */
#define DMA_SYSSRC2_CLRR_POS           _DMA_UL(14)
#define DMA_SYSSRC2_CLRR_LEN           _DMA_UL(1)

/* DMA_SYSSRC2_SETR (w) */
#define DMA_SYSSRC2_SETR_POS           _DMA_UL(15)
#define DMA_SYSSRC2_SETR_LEN           _DMA_UL(1)

/* DMA_SYSSRC2_SRE (rw) */
#define DMA_SYSSRC2_SRE_POS            _DMA_UL(12)
#define DMA_SYSSRC2_SRE_LEN            _DMA_UL(1)

/* DMA_SYSSRC2_SRPN (rw) */
#define DMA_SYSSRC2_SRPN_POS           _DMA_UL(0)
#define DMA_SYSSRC2_SRPN_LEN           _DMA_UL(8)

/* DMA_SYSSRC2_SRR (rh) */
#define DMA_SYSSRC2_SRR_POS            _DMA_UL(13)
#define DMA_SYSSRC2_SRR_LEN            _DMA_UL(1)

/* DMA_SYSSRC2_TOS (rw) */
#define DMA_SYSSRC2_TOS_POS            _DMA_UL(10)
#define DMA_SYSSRC2_TOS_LEN            _DMA_UL(1)

/* DMA_SYSSRC3_CLRR (w) */
#define DMA_SYSSRC3_CLRR_POS           _DMA_UL(14)
#define DMA_SYSSRC3_CLRR_LEN           _DMA_UL(1)

/* DMA_SYSSRC3_SETR (w) */
#define DMA_SYSSRC3_SETR_POS           _DMA_UL(15)
#define DMA_SYSSRC3_SETR_LEN           _DMA_UL(1)

/* DMA_SYSSRC3_SRE (rw) */
#define DMA_SYSSRC3_SRE_POS            _DMA_UL(12)
#define DMA_SYSSRC3_SRE_LEN            _DMA_UL(1)

/* DMA_SYSSRC3_SRPN (rw) */
#define DMA_SYSSRC3_SRPN_POS           _DMA_UL(0)
#define DMA_SYSSRC3_SRPN_LEN           _DMA_UL(8)

/* DMA_SYSSRC3_SRR (rh) */
#define DMA_SYSSRC3_SRR_POS            _DMA_UL(13)
#define DMA_SYSSRC3_SRR_LEN            _DMA_UL(1)

/* DMA_SYSSRC3_TOS (rw) */
#define DMA_SYSSRC3_TOS_POS            _DMA_UL(10)
#define DMA_SYSSRC3_TOS_LEN            _DMA_UL(1)

/* DMA_SYSSRC4_CLRR (w) */
#define DMA_SYSSRC4_CLRR_POS           _DMA_UL(14)
#define DMA_SYSSRC4_CLRR_LEN           _DMA_UL(1)

/* DMA_SYSSRC4_SETR (w) */
#define DMA_SYSSRC4_SETR_POS           _DMA_UL(15)
#define DMA_SYSSRC4_SETR_LEN           _DMA_UL(1)

/* DMA_SYSSRC4_SRE (rw) */
#define DMA_SYSSRC4_SRE_POS            _DMA_UL(12)
#define DMA_SYSSRC4_SRE_LEN            _DMA_UL(1)

/* DMA_SYSSRC4_SRPN (rw) */
#define DMA_SYSSRC4_SRPN_POS           _DMA_UL(0)
#define DMA_SYSSRC4_SRPN_LEN           _DMA_UL(8)

/* DMA_SYSSRC4_SRR (rh) */
#define DMA_SYSSRC4_SRR_POS            _DMA_UL(13)
#define DMA_SYSSRC4_SRR_LEN            _DMA_UL(1)

/* DMA_SYSSRC4_TOS (rw) */
#define DMA_SYSSRC4_TOS_POS            _DMA_UL(10)
#define DMA_SYSSRC4_TOS_LEN            _DMA_UL(1)

/* DMA_TOCTR_TOUT (rw) */
#define DMA_TOCTR_TOUT_POS             _DMA_UL(0)
#define DMA_TOCTR_TOUT_LEN             _DMA_UL(16)

/* DMA_TRSR_CH00 (rh) */
#define DMA_TRSR_CH00_POS              _DMA_UL(0)
#define DMA_TRSR_CH00_LEN              _DMA_UL(1)

/* DMA_TRSR_CH01 (rh) */
#define DMA_TRSR_CH01_POS              _DMA_UL(1)
#define DMA_TRSR_CH01_LEN              _DMA_UL(1)

/* DMA_TRSR_CH02 (rh) */
#define DMA_TRSR_CH02_POS              _DMA_UL(2)
#define DMA_TRSR_CH02_LEN              _DMA_UL(1)

/* DMA_TRSR_CH03 (rh) */
#define DMA_TRSR_CH03_POS              _DMA_UL(3)
#define DMA_TRSR_CH03_LEN              _DMA_UL(1)

/* DMA_TRSR_CH04 (rh) */
#define DMA_TRSR_CH04_POS              _DMA_UL(4)
#define DMA_TRSR_CH04_LEN              _DMA_UL(1)

/* DMA_TRSR_CH05 (rh) */
#define DMA_TRSR_CH05_POS              _DMA_UL(5)
#define DMA_TRSR_CH05_LEN              _DMA_UL(1)

/* DMA_TRSR_CH06 (rh) */
#define DMA_TRSR_CH06_POS              _DMA_UL(6)
#define DMA_TRSR_CH06_LEN              _DMA_UL(1)

/* DMA_TRSR_CH07 (rh) */
#define DMA_TRSR_CH07_POS              _DMA_UL(7)
#define DMA_TRSR_CH07_LEN              _DMA_UL(1)

/* DMA_TRSR_HTRE00 (rh) */
#define DMA_TRSR_HTRE00_POS            _DMA_UL(16)
#define DMA_TRSR_HTRE00_LEN            _DMA_UL(1)

/* DMA_TRSR_HTRE01 (rh) */
#define DMA_TRSR_HTRE01_POS            _DMA_UL(17)
#define DMA_TRSR_HTRE01_LEN            _DMA_UL(1)

/* DMA_TRSR_HTRE02 (rh) */
#define DMA_TRSR_HTRE02_POS            _DMA_UL(18)
#define DMA_TRSR_HTRE02_LEN            _DMA_UL(1)

/* DMA_TRSR_HTRE03 (rh) */
#define DMA_TRSR_HTRE03_POS            _DMA_UL(19)
#define DMA_TRSR_HTRE03_LEN            _DMA_UL(1)

/* DMA_TRSR_HTRE04 (rh) */
#define DMA_TRSR_HTRE04_POS            _DMA_UL(20)
#define DMA_TRSR_HTRE04_LEN            _DMA_UL(1)

/* DMA_TRSR_HTRE05 (rh) */
#define DMA_TRSR_HTRE05_POS            _DMA_UL(21)
#define DMA_TRSR_HTRE05_LEN            _DMA_UL(1)

/* DMA_TRSR_HTRE06 (rh) */
#define DMA_TRSR_HTRE06_POS            _DMA_UL(22)
#define DMA_TRSR_HTRE06_LEN            _DMA_UL(1)

/* DMA_TRSR_HTRE07 (rh) */
#define DMA_TRSR_HTRE07_POS            _DMA_UL(23)
#define DMA_TRSR_HTRE07_LEN            _DMA_UL(1)

/* DMA_WRPSR_WRPD00 (rh) */
#define DMA_WRPSR_WRPD00_POS           _DMA_UL(16)
#define DMA_WRPSR_WRPD00_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPD01 (rh) */
#define DMA_WRPSR_WRPD01_POS           _DMA_UL(17)
#define DMA_WRPSR_WRPD01_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPD02 (rh) */
#define DMA_WRPSR_WRPD02_POS           _DMA_UL(18)
#define DMA_WRPSR_WRPD02_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPD03 (rh) */
#define DMA_WRPSR_WRPD03_POS           _DMA_UL(19)
#define DMA_WRPSR_WRPD03_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPD04 (rh) */
#define DMA_WRPSR_WRPD04_POS           _DMA_UL(20)
#define DMA_WRPSR_WRPD04_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPD05 (rh) */
#define DMA_WRPSR_WRPD05_POS           _DMA_UL(21)
#define DMA_WRPSR_WRPD05_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPD06 (rh) */
#define DMA_WRPSR_WRPD06_POS           _DMA_UL(22)
#define DMA_WRPSR_WRPD06_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPD07 (rh) */
#define DMA_WRPSR_WRPD07_POS           _DMA_UL(23)
#define DMA_WRPSR_WRPD07_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPS00 (rh) */
#define DMA_WRPSR_WRPS00_POS           _DMA_UL(0)
#define DMA_WRPSR_WRPS00_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPS01 (rh) */
#define DMA_WRPSR_WRPS01_POS           _DMA_UL(1)
#define DMA_WRPSR_WRPS01_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPS02 (rh) */
#define DMA_WRPSR_WRPS02_POS           _DMA_UL(2)
#define DMA_WRPSR_WRPS02_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPS03 (rh) */
#define DMA_WRPSR_WRPS03_POS           _DMA_UL(3)
#define DMA_WRPSR_WRPS03_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPS04 (rh) */
#define DMA_WRPSR_WRPS04_POS           _DMA_UL(4)
#define DMA_WRPSR_WRPS04_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPS05 (rh) */
#define DMA_WRPSR_WRPS05_POS           _DMA_UL(5)
#define DMA_WRPSR_WRPS05_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPS06 (rh) */
#define DMA_WRPSR_WRPS06_POS           _DMA_UL(6)
#define DMA_WRPSR_WRPS06_LEN           _DMA_UL(1)

/* DMA_WRPSR_WRPS07 (rh) */
#define DMA_WRPSR_WRPS07_POS           _DMA_UL(7)
#define DMA_WRPSR_WRPS07_LEN           _DMA_UL(1)

#endif
