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
 * $Filename__:dma_1387.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:16.04.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:dma_1387$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     16.04.2010 AHT2FE
 *   Update TC1387 header files
 * 
 * 1.10.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: dma_1387.h
 *      Version: \main\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DMA_1387_H
#define _DMA_1387_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _DMA_UL(x) x
#else
    #define _DMA_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module DMA on TC1387
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
    volatile uint32 ID;                  // [0xF0003C08] : Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF0003C0C...0xF0003C0F] : reserved space
    volatile uint32 CHRSTR;              // [0xF0003C10] : DMA Channel Reset Request Register
    volatile uint32 TRSR;                // [0xF0003C14] : DMA Transaction Request State Register
    volatile uint32 STREQ;               // [0xF0003C18] : DMA Software Transaction Request Register
    volatile uint32 HTREQ;               // [0xF0003C1C] : DMA Hardware Transaction Request Register
    volatile uint32 EER;                 // [0xF0003C20] : DMA Enable Error Register
    volatile uint32 ERRSR;               // [0xF0003C24] : DMA Error Status Register
    volatile uint32 CLRE;                // [0xF0003C28] : DMA Clear Error Register
    volatile uint32 GINTR;               // [0xF0003C2C] : DMA Global Interrupt Set Register
    volatile uint32 MESR;                // [0xF0003C30] : DMA Move Engine Status Register
    volatile uint32 ME0R;                // [0xF0003C34] : DMA Move Engine 0 Read Register
    volatile uint32 ME1R;                // [0xF0003C38] : DMA Move Engine 1 Read Register
    volatile uint32 ME0PR;               // [0xF0003C3C] : DMA Move Engine 0 Pattern Register
    volatile uint32 ME1PR;               // [0xF0003C40] : DMA Move Engine 1Pattern Register
    volatile uint32 ME0AENR;             // [0xF0003C44] : DMA Move Engine 0 Access Enable Register
    volatile uint32 ME0ARR;              // [0xF0003C48] : DMA Move Engine 0 Access Range Register
    volatile uint32 ME1AENR;             // [0xF0003C4C] : DMA Move Engine 1 Access Enable Register
    volatile uint32 ME1ARR;              // [0xF0003C50] : DMA Move Engine 1Access Range Register
    volatile uint32 INTSR;               // [0xF0003C54] : DMA Interrupt Status Register
    volatile uint32 INTCR;               // [0xF0003C58] : DMA Interrupt Clear Register
    volatile uint32 WRPSR;               // [0xF0003C5C] : DMA Wrap Status Register
    volatile uint32 RESERVED2[1];        // [0xF0003C60...0xF0003C63] : reserved space
    volatile uint32 OCDSR;               // [0xF0003C64] : DMA OCDS Register
    volatile uint32 SUSPMR;              // [0xF0003C68] : DMA Suspend Mode Register
    volatile uint32 RESERVED3[5];        // [0xF0003C6C...0xF0003C7F] : reserved space
    DMA_ChanRegs_t  SB0[8];              // [0xF0003C80...0xF0003D7F] : DMA Sub block 0 Channel Registers
    DMA_ChanRegs_t  SB1[8];              // [0xF0003D80...0xF0003E7F] : DMA Sub block 1 Channel Registers
    volatile uint32 RESERVED4[8];        // [0xF0003E80...0xF0003E9F] : reserved space
    volatile uint32 MLI0SRC3;            // [0xF0003EA0] : DMA MLI0 Service Request Control Register 3
    volatile uint32 MLI0SRC2;            // [0xF0003EA4] : DMA MLI0 Service Request Control Register 2
    volatile uint32 MLI0SRC1;            // [0xF0003EA8] : DMA MLI0 Service Request Control Register 1
    volatile uint32 MLI0SRC0;            // [0xF0003EAC] : DMA MLI0 Service Request Control Register 0
    volatile uint32 RESERVED5[12];       // [0xF0003EB0...0xF0003EDF] : reserved space
    volatile uint32 SRC7;                // [0xF0003EE0] : DMA Service Request Control Register 7
    volatile uint32 SRC6;                // [0xF0003EE4] : DMA Service Request Control Register 6
    volatile uint32 SRC5;                // [0xF0003EE8] : DMA Service Request Control Register 5
    volatile uint32 SRC4;                // [0xF0003EEC] : DMA Service Request Control Register 4
    volatile uint32 SRC3;                // [0xF0003EF0] : DMA Service Request Control Register 3
    volatile uint32 SRC2;                // [0xF0003EF4] : DMA Service Request Control Register 2
    volatile uint32 SRC1;                // [0xF0003EF8] : DMA Service Request Control Register 1
    volatile uint32 SRC0;                // [0xF0003EFC] : DMA Service Request Control Register 0
} DMA_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern DMA_RegMap_t DMA __attribute__ ((asection (".zbss.label_only","f=awz")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/

/* Macros to access registers in structure DMA_ChanRegs_t */

/* DMA_CHSR_TCOUNT (rh) */                 /* DMA_CHSR00_TCOUNT (rh) */
#define DMA_CHSR_TCOUNT_POS               DMA_CHSR00_TCOUNT_POS
#define DMA_CHSR_TCOUNT_LEN               DMA_CHSR00_TCOUNT_LEN

/* DMA_CHSR_LXO (rh) */                    /* DMA_CHSR00_LXO (rh) */
#define DMA_CHSR_LXO_POS                  DMA_CHSR00_LXO_POS
#define DMA_CHSR_LXO_LEN                  DMA_CHSR00_LXO_LEN

/* DMA_CHCR_TREL (rw) */                   /* DMA_CHCR00_TREL (rw) */
#define DMA_CHCR_TREL_POS                 DMA_CHCR00_TREL_POS
#define DMA_CHCR_TREL_LEN                 DMA_CHCR00_TREL_LEN

/* DMA_CHCR_PRSEL (rw) */                  /* DMA_CHCR00_PRSEL (rw) */
#define DMA_CHCR_PRSEL_POS                DMA_CHCR00_PRSEL_POS
#define DMA_CHCR_PRSEL_LEN                DMA_CHCR00_PRSEL_LEN

/* DMA_CHCR_BLKM (rw) */                   /* DMA_CHCR00_BLKM (rw) */
#define DMA_CHCR_BLKM_POS                 DMA_CHCR00_BLKM_POS
#define DMA_CHCR_BLKM_LEN                 DMA_CHCR00_BLKM_LEN

/* DMA_CHCR_RROAT (rw) */                  /* DMA_CHCR00_RROAT (rw) */
#define DMA_CHCR_RROAT_POS                DMA_CHCR00_RROAT_POS
#define DMA_CHCR_RROAT_LEN                DMA_CHCR00_RROAT_LEN

/* DMA_CHCR_CHMODE (rw) */                 /* DMA_CHCR00_CHMODE (rw) */
#define DMA_CHCR_CHMODE_POS               DMA_CHCR00_CHMODE_POS
#define DMA_CHCR_CHMODE_LEN               DMA_CHCR00_CHMODE_LEN

/* DMA_CHCR_CHDW (rw) */                   /* DMA_CHCR00_CHDW (rw) */
#define DMA_CHCR_CHDW_POS                 DMA_CHCR00_CHDW_POS
#define DMA_CHCR_CHDW_LEN                 DMA_CHCR00_CHDW_LEN

/* DMA_CHCR_PATSEL (rw) */                 /* DMA_CHCR00_PATSEL (rw) */
#define DMA_CHCR_PATSEL_POS               DMA_CHCR00_PATSEL_POS
#define DMA_CHCR_PATSEL_LEN               DMA_CHCR00_PATSEL_LEN

/* DMA_CHCR_CHPRIO (rw) */                 /* DMA_CHCR00_CHPRIO (rw) */
#define DMA_CHCR_CHPRIO_POS               DMA_CHCR00_CHPRIO_POS
#define DMA_CHCR_CHPRIO_LEN               DMA_CHCR00_CHPRIO_LEN

/* DMA_CHCR_DMAPRIO (rw) */                /* DMA_CHCR00_DMAPRIO (rw) */
#define DMA_CHCR_DMAPRIO_POS              DMA_CHCR00_DMAPRIO_POS
#define DMA_CHCR_DMAPRIO_LEN              DMA_CHCR00_DMAPRIO_LEN

/* DMA_CHICR_WRPSE (rw) */                 /* DMA_CHICR00_WRPSE (rw) */
#define DMA_CHICR_WRPSE_POS               DMA_CHICR00_WRPSE_POS
#define DMA_CHICR_WRPSE_LEN               DMA_CHICR00_WRPSE_LEN

/* DMA_CHICR_WRPDE (rw) */                 /* DMA_CHICR00_WRPDE (rw) */
#define DMA_CHICR_WRPDE_POS               DMA_CHICR00_WRPDE_POS
#define DMA_CHICR_WRPDE_LEN               DMA_CHICR00_WRPDE_LEN

/* DMA_CHICR_INTCT (rw) */                 /* DMA_CHICR00_INTCT (rw) */
#define DMA_CHICR_INTCT_POS               DMA_CHICR00_INTCT_POS
#define DMA_CHICR_INTCT_LEN               DMA_CHICR00_INTCT_LEN

/* DMA_CHICR_WRPP (rw) */                  /* DMA_CHICR00_WRPP (rw) */
#define DMA_CHICR_WRPP_POS                DMA_CHICR00_WRPP_POS
#define DMA_CHICR_WRPP_LEN                DMA_CHICR00_WRPP_LEN

/* DMA_CHICR_INTP (rw) */                  /* DMA_CHICR00_INTP (rw) */
#define DMA_CHICR_INTP_POS                DMA_CHICR00_INTP_POS
#define DMA_CHICR_INTP_LEN                DMA_CHICR00_INTP_LEN

/* DMA_CHICR_IRDV (rw) */                  /* DMA_CHICR00_IRDV (rw) */
#define DMA_CHICR_IRDV_POS                DMA_CHICR00_IRDV_POS
#define DMA_CHICR_IRDV_LEN                DMA_CHICR00_IRDV_LEN

/* DMA_ADRCR_SMF (rw) */                   /* DMA_ADRCR00_SMF (rw) */
#define DMA_ADRCR_SMF_POS                 DMA_ADRCR00_SMF_POS
#define DMA_ADRCR_SMF_LEN                 DMA_ADRCR00_SMF_LEN

/* DMA_ADRCR_INCS (rw) */                  /* DMA_ADRCR00_INCS (rw) */
#define DMA_ADRCR_INCS_POS                DMA_ADRCR00_INCS_POS
#define DMA_ADRCR_INCS_LEN                DMA_ADRCR00_INCS_LEN

/* DMA_ADRCR_DMF (rw) */                   /* DMA_ADRCR00_DMF (rw) */
#define DMA_ADRCR_DMF_POS                 DMA_ADRCR00_DMF_POS
#define DMA_ADRCR_DMF_LEN                 DMA_ADRCR00_DMF_LEN

/* DMA_ADRCR_INCD (rw) */                  /* DMA_ADRCR00_INCD (rw) */
#define DMA_ADRCR_INCD_POS                DMA_ADRCR00_INCD_POS
#define DMA_ADRCR_INCD_LEN                DMA_ADRCR00_INCD_LEN

/* DMA_ADRCR_CBLS (rw) */                  /* DMA_ADRCR00_CBLS (rw) */
#define DMA_ADRCR_CBLS_POS                DMA_ADRCR00_CBLS_POS
#define DMA_ADRCR_CBLS_LEN                DMA_ADRCR00_CBLS_LEN

/* DMA_ADRCR_CBLD (rw) */                  /* DMA_ADRCR00_CBLD (rw) */
#define DMA_ADRCR_CBLD_POS                DMA_ADRCR00_CBLD_POS
#define DMA_ADRCR_CBLD_LEN                DMA_ADRCR00_CBLD_LEN

/* DMA_ADRCR_SHCT (rw) */                  /* DMA_ADRCR00_SHCT (rw) */
#define DMA_ADRCR_SHCT_POS                DMA_ADRCR00_SHCT_POS
#define DMA_ADRCR_SHCT_LEN                DMA_ADRCR00_SHCT_LEN

/* DMA_ADRCR_SHWEN (rw) */                 /* DMA_ADRCR00_SHWEN (rw) */
#define DMA_ADRCR_SHWEN_POS               DMA_ADRCR00_SHWEN_POS
#define DMA_ADRCR_SHWEN_LEN               DMA_ADRCR00_SHWEN_LEN

/* DMA_SADR_SADR (rwh) */                  /* DMA_SADR00_SADR (rwh) */
#define DMA_SADR_SADR_POS                 DMA_SADR00_SADR_POS
#define DMA_SADR_SADR_LEN                 DMA_SADR00_SADR_LEN

/* DMA_DADR_DADR (rwh) */                  /* DMA_DADR00_DADR (rwh) */
#define DMA_DADR_DADR_POS                 DMA_DADR00_DADR_POS
#define DMA_DADR_DADR_LEN                 DMA_DADR00_DADR_LEN

/* DMA_SHADR_SHADR (rwh) */                /* DMA_SHADR00_SHADR (rwh) */
#define DMA_SHADR_SHADR_POS               DMA_SHADR00_SHADR_POS
#define DMA_SHADR_SHADR_LEN               DMA_SHADR00_SHADR_LEN

/* end of Macros to access registers in structure DMA_ChanRegs_t */

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

/* DMA_ID_MOD_NUMBER (r) */
#define DMA_ID_MOD_NUMBER_POS                _DMA_UL(16)
#define DMA_ID_MOD_NUMBER_LEN                _DMA_UL(16)

/* DMA_ID_MOD_REV (r) */
#define DMA_ID_MOD_REV_POS                   _DMA_UL(0)
#define DMA_ID_MOD_REV_LEN                   _DMA_UL(8)

/* DMA_ID_MOD_TYPE (r) */
#define DMA_ID_MOD_TYPE_POS                  _DMA_UL(8)
#define DMA_ID_MOD_TYPE_LEN                  _DMA_UL(8)

/* DMA_CLC_DISR (rw) */
#define DMA_CLC_DISR_POS                     _DMA_UL(0)
#define DMA_CLC_DISR_LEN                     _DMA_UL(1)

/* DMA_CLC_DISS (r) */
#define DMA_CLC_DISS_POS                     _DMA_UL(1)
#define DMA_CLC_DISS_LEN                     _DMA_UL(1)

/* DMA_CLC_SPEN (rw) */
#define DMA_CLC_SPEN_POS                     _DMA_UL(2)
#define DMA_CLC_SPEN_LEN                     _DMA_UL(1)

/* DMA_CLC_ONE (rw) */
#define DMA_CLC_ONE_POS                      _DMA_UL(3)
#define DMA_CLC_ONE_LEN                      _DMA_UL(1)

/* DMA_CLC_SBWE (w) */
#define DMA_CLC_SBWE_POS                     _DMA_UL(4)
#define DMA_CLC_SBWE_LEN                     _DMA_UL(1)

/* DMA_ID_MOD_REV (r) */
#define DMA_ID_MOD_REV_POS                   _DMA_UL(0)
#define DMA_ID_MOD_REV_LEN                   _DMA_UL(8)

/* DMA_ID_MOD_TYPE (r) */
#define DMA_ID_MOD_TYPE_POS                  _DMA_UL(8)
#define DMA_ID_MOD_TYPE_LEN                  _DMA_UL(8)

/* DMA_ID_MOD_NUMBER (r) */
#define DMA_ID_MOD_NUMBER_POS                _DMA_UL(16)
#define DMA_ID_MOD_NUMBER_LEN                _DMA_UL(16)

/* DMA_CHRSTR_CH00 (rwh) */
#define DMA_CHRSTR_CH00_POS                  _DMA_UL(0)
#define DMA_CHRSTR_CH00_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH01 (rwh) */
#define DMA_CHRSTR_CH01_POS                  _DMA_UL(1)
#define DMA_CHRSTR_CH01_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH02 (rwh) */
#define DMA_CHRSTR_CH02_POS                  _DMA_UL(2)
#define DMA_CHRSTR_CH02_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH03 (rwh) */
#define DMA_CHRSTR_CH03_POS                  _DMA_UL(3)
#define DMA_CHRSTR_CH03_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH04 (rwh) */
#define DMA_CHRSTR_CH04_POS                  _DMA_UL(4)
#define DMA_CHRSTR_CH04_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH05 (rwh) */
#define DMA_CHRSTR_CH05_POS                  _DMA_UL(5)
#define DMA_CHRSTR_CH05_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH06 (rwh) */
#define DMA_CHRSTR_CH06_POS                  _DMA_UL(6)
#define DMA_CHRSTR_CH06_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH07 (rwh) */
#define DMA_CHRSTR_CH07_POS                  _DMA_UL(7)
#define DMA_CHRSTR_CH07_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH10 (rwh) */
#define DMA_CHRSTR_CH10_POS                  _DMA_UL(8)
#define DMA_CHRSTR_CH10_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH11 (rwh) */
#define DMA_CHRSTR_CH11_POS                  _DMA_UL(9)
#define DMA_CHRSTR_CH11_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH12 (rwh) */
#define DMA_CHRSTR_CH12_POS                  _DMA_UL(10)
#define DMA_CHRSTR_CH12_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH13 (rwh) */
#define DMA_CHRSTR_CH13_POS                  _DMA_UL(11)
#define DMA_CHRSTR_CH13_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH14 (rwh) */
#define DMA_CHRSTR_CH14_POS                  _DMA_UL(12)
#define DMA_CHRSTR_CH14_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH15 (rwh) */
#define DMA_CHRSTR_CH15_POS                  _DMA_UL(13)
#define DMA_CHRSTR_CH15_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH16 (rwh) */
#define DMA_CHRSTR_CH16_POS                  _DMA_UL(14)
#define DMA_CHRSTR_CH16_LEN                  _DMA_UL(1)

/* DMA_CHRSTR_CH17 (rwh) */
#define DMA_CHRSTR_CH17_POS                  _DMA_UL(15)
#define DMA_CHRSTR_CH17_LEN                  _DMA_UL(1)

/* DMA_TRSR_CH00 (rh) */
#define DMA_TRSR_CH00_POS                    _DMA_UL(0)
#define DMA_TRSR_CH00_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH01 (rh) */
#define DMA_TRSR_CH01_POS                    _DMA_UL(1)
#define DMA_TRSR_CH01_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH02 (rh) */
#define DMA_TRSR_CH02_POS                    _DMA_UL(2)
#define DMA_TRSR_CH02_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH03 (rh) */
#define DMA_TRSR_CH03_POS                    _DMA_UL(3)
#define DMA_TRSR_CH03_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH04 (rh) */
#define DMA_TRSR_CH04_POS                    _DMA_UL(4)
#define DMA_TRSR_CH04_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH05 (rh) */
#define DMA_TRSR_CH05_POS                    _DMA_UL(5)
#define DMA_TRSR_CH05_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH06 (rh) */
#define DMA_TRSR_CH06_POS                    _DMA_UL(6)
#define DMA_TRSR_CH06_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH07 (rh) */
#define DMA_TRSR_CH07_POS                    _DMA_UL(7)
#define DMA_TRSR_CH07_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH10 (rh) */
#define DMA_TRSR_CH10_POS                    _DMA_UL(8)
#define DMA_TRSR_CH10_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH11 (rh) */
#define DMA_TRSR_CH11_POS                    _DMA_UL(9)
#define DMA_TRSR_CH11_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH12 (rh) */
#define DMA_TRSR_CH12_POS                    _DMA_UL(10)
#define DMA_TRSR_CH12_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH13 (rh) */
#define DMA_TRSR_CH13_POS                    _DMA_UL(11)
#define DMA_TRSR_CH13_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH14 (rh) */
#define DMA_TRSR_CH14_POS                    _DMA_UL(12)
#define DMA_TRSR_CH14_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH15 (rh) */
#define DMA_TRSR_CH15_POS                    _DMA_UL(13)
#define DMA_TRSR_CH15_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH16 (rh) */
#define DMA_TRSR_CH16_POS                    _DMA_UL(14)
#define DMA_TRSR_CH16_LEN                    _DMA_UL(1)

/* DMA_TRSR_CH17 (rh) */
#define DMA_TRSR_CH17_POS                    _DMA_UL(15)
#define DMA_TRSR_CH17_LEN                    _DMA_UL(1)

/* DMA_TRSR_HTRE00 (rh) */
#define DMA_TRSR_HTRE00_POS                  _DMA_UL(16)
#define DMA_TRSR_HTRE00_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE01 (rh) */
#define DMA_TRSR_HTRE01_POS                  _DMA_UL(17)
#define DMA_TRSR_HTRE01_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE02 (rh) */
#define DMA_TRSR_HTRE02_POS                  _DMA_UL(18)
#define DMA_TRSR_HTRE02_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE03 (rh) */
#define DMA_TRSR_HTRE03_POS                  _DMA_UL(19)
#define DMA_TRSR_HTRE03_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE04 (rh) */
#define DMA_TRSR_HTRE04_POS                  _DMA_UL(20)
#define DMA_TRSR_HTRE04_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE05 (rh) */
#define DMA_TRSR_HTRE05_POS                  _DMA_UL(21)
#define DMA_TRSR_HTRE05_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE06 (rh) */
#define DMA_TRSR_HTRE06_POS                  _DMA_UL(22)
#define DMA_TRSR_HTRE06_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE07 (rh) */
#define DMA_TRSR_HTRE07_POS                  _DMA_UL(23)
#define DMA_TRSR_HTRE07_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE10 (rh) */
#define DMA_TRSR_HTRE10_POS                  _DMA_UL(24)
#define DMA_TRSR_HTRE10_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE11 (rh) */
#define DMA_TRSR_HTRE11_POS                  _DMA_UL(25)
#define DMA_TRSR_HTRE11_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE12 (rh) */
#define DMA_TRSR_HTRE12_POS                  _DMA_UL(26)
#define DMA_TRSR_HTRE12_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE13 (rh) */
#define DMA_TRSR_HTRE13_POS                  _DMA_UL(27)
#define DMA_TRSR_HTRE13_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE14 (rh) */
#define DMA_TRSR_HTRE14_POS                  _DMA_UL(28)
#define DMA_TRSR_HTRE14_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE15 (rh) */
#define DMA_TRSR_HTRE15_POS                  _DMA_UL(29)
#define DMA_TRSR_HTRE15_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE16 (rh) */
#define DMA_TRSR_HTRE16_POS                  _DMA_UL(30)
#define DMA_TRSR_HTRE16_LEN                  _DMA_UL(1)

/* DMA_TRSR_HTRE17 (rh) */
#define DMA_TRSR_HTRE17_POS                  _DMA_UL(31)
#define DMA_TRSR_HTRE17_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH00 (w) */
#define DMA_STREQ_SCH00_POS                  _DMA_UL(0)
#define DMA_STREQ_SCH00_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH01 (w) */
#define DMA_STREQ_SCH01_POS                  _DMA_UL(1)
#define DMA_STREQ_SCH01_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH02 (w) */
#define DMA_STREQ_SCH02_POS                  _DMA_UL(2)
#define DMA_STREQ_SCH02_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH03 (w) */
#define DMA_STREQ_SCH03_POS                  _DMA_UL(3)
#define DMA_STREQ_SCH03_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH04 (w) */
#define DMA_STREQ_SCH04_POS                  _DMA_UL(4)
#define DMA_STREQ_SCH04_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH05 (w) */
#define DMA_STREQ_SCH05_POS                  _DMA_UL(5)
#define DMA_STREQ_SCH05_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH06 (w) */
#define DMA_STREQ_SCH06_POS                  _DMA_UL(6)
#define DMA_STREQ_SCH06_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH07 (w) */
#define DMA_STREQ_SCH07_POS                  _DMA_UL(7)
#define DMA_STREQ_SCH07_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH10 (w) */
#define DMA_STREQ_SCH10_POS                  _DMA_UL(8)
#define DMA_STREQ_SCH10_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH11 (w) */
#define DMA_STREQ_SCH11_POS                  _DMA_UL(9)
#define DMA_STREQ_SCH11_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH12 (w) */
#define DMA_STREQ_SCH12_POS                  _DMA_UL(10)
#define DMA_STREQ_SCH12_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH13 (w) */
#define DMA_STREQ_SCH13_POS                  _DMA_UL(11)
#define DMA_STREQ_SCH13_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH14 (w) */
#define DMA_STREQ_SCH14_POS                  _DMA_UL(12)
#define DMA_STREQ_SCH14_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH15 (w) */
#define DMA_STREQ_SCH15_POS                  _DMA_UL(13)
#define DMA_STREQ_SCH15_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH16 (w) */
#define DMA_STREQ_SCH16_POS                  _DMA_UL(14)
#define DMA_STREQ_SCH16_LEN                  _DMA_UL(1)

/* DMA_STREQ_SCH17 (w) */
#define DMA_STREQ_SCH17_POS                  _DMA_UL(15)
#define DMA_STREQ_SCH17_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH00 (w) */
#define DMA_HTREQ_ECH00_POS                  _DMA_UL(0)
#define DMA_HTREQ_ECH00_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH01 (w) */
#define DMA_HTREQ_ECH01_POS                  _DMA_UL(1)
#define DMA_HTREQ_ECH01_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH02 (w) */
#define DMA_HTREQ_ECH02_POS                  _DMA_UL(2)
#define DMA_HTREQ_ECH02_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH03 (w) */
#define DMA_HTREQ_ECH03_POS                  _DMA_UL(3)
#define DMA_HTREQ_ECH03_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH04 (w) */
#define DMA_HTREQ_ECH04_POS                  _DMA_UL(4)
#define DMA_HTREQ_ECH04_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH05 (w) */
#define DMA_HTREQ_ECH05_POS                  _DMA_UL(5)
#define DMA_HTREQ_ECH05_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH06 (w) */
#define DMA_HTREQ_ECH06_POS                  _DMA_UL(6)
#define DMA_HTREQ_ECH06_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH07 (w) */
#define DMA_HTREQ_ECH07_POS                  _DMA_UL(7)
#define DMA_HTREQ_ECH07_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH10 (w) */
#define DMA_HTREQ_ECH10_POS                  _DMA_UL(8)
#define DMA_HTREQ_ECH10_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH11 (w) */
#define DMA_HTREQ_ECH11_POS                  _DMA_UL(9)
#define DMA_HTREQ_ECH11_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH12 (w) */
#define DMA_HTREQ_ECH12_POS                  _DMA_UL(10)
#define DMA_HTREQ_ECH12_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH13 (w) */
#define DMA_HTREQ_ECH13_POS                  _DMA_UL(11)
#define DMA_HTREQ_ECH13_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH14 (w) */
#define DMA_HTREQ_ECH14_POS                  _DMA_UL(12)
#define DMA_HTREQ_ECH14_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH15 (w) */
#define DMA_HTREQ_ECH15_POS                  _DMA_UL(13)
#define DMA_HTREQ_ECH15_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH16 (w) */
#define DMA_HTREQ_ECH16_POS                  _DMA_UL(14)
#define DMA_HTREQ_ECH16_LEN                  _DMA_UL(1)

/* DMA_HTREQ_ECH17 (w) */
#define DMA_HTREQ_ECH17_POS                  _DMA_UL(15)
#define DMA_HTREQ_ECH17_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH00 (w) */
#define DMA_HTREQ_DCH00_POS                  _DMA_UL(16)
#define DMA_HTREQ_DCH00_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH01 (w) */
#define DMA_HTREQ_DCH01_POS                  _DMA_UL(17)
#define DMA_HTREQ_DCH01_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH02 (w) */
#define DMA_HTREQ_DCH02_POS                  _DMA_UL(18)
#define DMA_HTREQ_DCH02_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH03 (w) */
#define DMA_HTREQ_DCH03_POS                  _DMA_UL(19)
#define DMA_HTREQ_DCH03_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH04 (w) */
#define DMA_HTREQ_DCH04_POS                  _DMA_UL(20)
#define DMA_HTREQ_DCH04_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH05 (w) */
#define DMA_HTREQ_DCH05_POS                  _DMA_UL(21)
#define DMA_HTREQ_DCH05_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH06 (w) */
#define DMA_HTREQ_DCH06_POS                  _DMA_UL(22)
#define DMA_HTREQ_DCH06_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH07 (w) */
#define DMA_HTREQ_DCH07_POS                  _DMA_UL(23)
#define DMA_HTREQ_DCH07_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH10 (w) */
#define DMA_HTREQ_DCH10_POS                  _DMA_UL(24)
#define DMA_HTREQ_DCH10_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH11 (w) */
#define DMA_HTREQ_DCH11_POS                  _DMA_UL(25)
#define DMA_HTREQ_DCH11_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH12 (w) */
#define DMA_HTREQ_DCH12_POS                  _DMA_UL(26)
#define DMA_HTREQ_DCH12_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH13 (w) */
#define DMA_HTREQ_DCH13_POS                  _DMA_UL(27)
#define DMA_HTREQ_DCH13_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH14 (w) */
#define DMA_HTREQ_DCH14_POS                  _DMA_UL(28)
#define DMA_HTREQ_DCH14_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH15 (w) */
#define DMA_HTREQ_DCH15_POS                  _DMA_UL(29)
#define DMA_HTREQ_DCH15_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH16 (w) */
#define DMA_HTREQ_DCH16_POS                  _DMA_UL(30)
#define DMA_HTREQ_DCH16_LEN                  _DMA_UL(1)

/* DMA_HTREQ_DCH17 (w) */
#define DMA_HTREQ_DCH17_POS                  _DMA_UL(31)
#define DMA_HTREQ_DCH17_LEN                  _DMA_UL(1)

/* DMA_EER_ETRL00 (rw) */
#define DMA_EER_ETRL00_POS                   _DMA_UL(0)
#define DMA_EER_ETRL00_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL01 (rw) */
#define DMA_EER_ETRL01_POS                   _DMA_UL(1)
#define DMA_EER_ETRL01_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL02 (rw) */
#define DMA_EER_ETRL02_POS                   _DMA_UL(2)
#define DMA_EER_ETRL02_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL03 (rw) */
#define DMA_EER_ETRL03_POS                   _DMA_UL(3)
#define DMA_EER_ETRL03_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL04 (rw) */
#define DMA_EER_ETRL04_POS                   _DMA_UL(4)
#define DMA_EER_ETRL04_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL05 (rw) */
#define DMA_EER_ETRL05_POS                   _DMA_UL(5)
#define DMA_EER_ETRL05_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL06 (rw) */
#define DMA_EER_ETRL06_POS                   _DMA_UL(6)
#define DMA_EER_ETRL06_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL07 (rw) */
#define DMA_EER_ETRL07_POS                   _DMA_UL(7)
#define DMA_EER_ETRL07_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL10 (rw) */
#define DMA_EER_ETRL10_POS                   _DMA_UL(8)
#define DMA_EER_ETRL10_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL11 (rw) */
#define DMA_EER_ETRL11_POS                   _DMA_UL(9)
#define DMA_EER_ETRL11_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL12 (rw) */
#define DMA_EER_ETRL12_POS                   _DMA_UL(10)
#define DMA_EER_ETRL12_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL13 (rw) */
#define DMA_EER_ETRL13_POS                   _DMA_UL(11)
#define DMA_EER_ETRL13_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL14 (rw) */
#define DMA_EER_ETRL14_POS                   _DMA_UL(12)
#define DMA_EER_ETRL14_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL15 (rw) */
#define DMA_EER_ETRL15_POS                   _DMA_UL(13)
#define DMA_EER_ETRL15_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL16 (rw) */
#define DMA_EER_ETRL16_POS                   _DMA_UL(14)
#define DMA_EER_ETRL16_LEN                   _DMA_UL(1)

/* DMA_EER_ETRL17 (rw) */
#define DMA_EER_ETRL17_POS                   _DMA_UL(15)
#define DMA_EER_ETRL17_LEN                   _DMA_UL(1)

/* DMA_EER_EME0SER (rw) */
#define DMA_EER_EME0SER_POS                  _DMA_UL(16)
#define DMA_EER_EME0SER_LEN                  _DMA_UL(1)

/* DMA_EER_EME0DER (rw) */
#define DMA_EER_EME0DER_POS                  _DMA_UL(17)
#define DMA_EER_EME0DER_LEN                  _DMA_UL(1)

/* DMA_EER_EME1SER (rw) */
#define DMA_EER_EME1SER_POS                  _DMA_UL(18)
#define DMA_EER_EME1SER_LEN                  _DMA_UL(1)

/* DMA_EER_EME1DER (rw) */
#define DMA_EER_EME1DER_POS                  _DMA_UL(19)
#define DMA_EER_EME1DER_LEN                  _DMA_UL(1)

/* DMA_EER_ME0INP (rw) */
#define DMA_EER_ME0INP_POS                   _DMA_UL(20)
#define DMA_EER_ME0INP_LEN                   _DMA_UL(4)

/* DMA_EER_ME1INP (rw) */
#define DMA_EER_ME1INP_POS                   _DMA_UL(24)
#define DMA_EER_ME1INP_LEN                   _DMA_UL(4)

/* DMA_EER_TRLINP (rw) */
#define DMA_EER_TRLINP_POS                   _DMA_UL(28)
#define DMA_EER_TRLINP_LEN                   _DMA_UL(4)

/* DMA_ERRSR_TRL00 (rh) */
#define DMA_ERRSR_TRL00_POS                  _DMA_UL(0)
#define DMA_ERRSR_TRL00_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL01 (rh) */
#define DMA_ERRSR_TRL01_POS                  _DMA_UL(1)
#define DMA_ERRSR_TRL01_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL02 (rh) */
#define DMA_ERRSR_TRL02_POS                  _DMA_UL(2)
#define DMA_ERRSR_TRL02_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL03 (rh) */
#define DMA_ERRSR_TRL03_POS                  _DMA_UL(3)
#define DMA_ERRSR_TRL03_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL04 (rh) */
#define DMA_ERRSR_TRL04_POS                  _DMA_UL(4)
#define DMA_ERRSR_TRL04_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL05 (rh) */
#define DMA_ERRSR_TRL05_POS                  _DMA_UL(5)
#define DMA_ERRSR_TRL05_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL06 (rh) */
#define DMA_ERRSR_TRL06_POS                  _DMA_UL(6)
#define DMA_ERRSR_TRL06_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL07 (rh) */
#define DMA_ERRSR_TRL07_POS                  _DMA_UL(7)
#define DMA_ERRSR_TRL07_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL10 (rh) */
#define DMA_ERRSR_TRL10_POS                  _DMA_UL(8)
#define DMA_ERRSR_TRL10_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL11 (rh) */
#define DMA_ERRSR_TRL11_POS                  _DMA_UL(9)
#define DMA_ERRSR_TRL11_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL12 (rh) */
#define DMA_ERRSR_TRL12_POS                  _DMA_UL(10)
#define DMA_ERRSR_TRL12_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL13 (rh) */
#define DMA_ERRSR_TRL13_POS                  _DMA_UL(11)
#define DMA_ERRSR_TRL13_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL14 (rh) */
#define DMA_ERRSR_TRL14_POS                  _DMA_UL(12)
#define DMA_ERRSR_TRL14_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL15 (rh) */
#define DMA_ERRSR_TRL15_POS                  _DMA_UL(13)
#define DMA_ERRSR_TRL15_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL16 (rh) */
#define DMA_ERRSR_TRL16_POS                  _DMA_UL(14)
#define DMA_ERRSR_TRL16_LEN                  _DMA_UL(1)

/* DMA_ERRSR_TRL17 (rh) */
#define DMA_ERRSR_TRL17_POS                  _DMA_UL(15)
#define DMA_ERRSR_TRL17_LEN                  _DMA_UL(1)

/* DMA_ERRSR_ME0SER (rh) */
#define DMA_ERRSR_ME0SER_POS                 _DMA_UL(16)
#define DMA_ERRSR_ME0SER_LEN                 _DMA_UL(1)

/* DMA_ERRSR_ME0DER (rh) */
#define DMA_ERRSR_ME0DER_POS                 _DMA_UL(17)
#define DMA_ERRSR_ME0DER_LEN                 _DMA_UL(1)

/* DMA_ERRSR_ME1SER (rh) */
#define DMA_ERRSR_ME1SER_POS                 _DMA_UL(18)
#define DMA_ERRSR_ME1SER_LEN                 _DMA_UL(1)

/* DMA_ERRSR_ME1DER (rh) */
#define DMA_ERRSR_ME1DER_POS                 _DMA_UL(19)
#define DMA_ERRSR_ME1DER_LEN                 _DMA_UL(1)

/* DMA_ERRSR_FPIER (rh) */
#define DMA_ERRSR_FPIER_POS                  _DMA_UL(20)
#define DMA_ERRSR_FPIER_LEN                  _DMA_UL(1)

/* DMA_ERRSR_LMBER (rh) */
#define DMA_ERRSR_LMBER_POS                  _DMA_UL(21)
#define DMA_ERRSR_LMBER_LEN                  _DMA_UL(1)

/* DMA_ERRSR_CERBERUSER (rh) */
#define DMA_ERRSR_CERBERUSER_POS             _DMA_UL(22)
#define DMA_ERRSR_CERBERUSER_LEN             _DMA_UL(1)

/* DMA_ERRSR_LECME0 (rh) */
#define DMA_ERRSR_LECME0_POS                 _DMA_UL(24)
#define DMA_ERRSR_LECME0_LEN                 _DMA_UL(3)

/* DMA_ERRSR_MLI0 (rh) */
#define DMA_ERRSR_MLI0_POS                   _DMA_UL(27)
#define DMA_ERRSR_MLI0_LEN                   _DMA_UL(1)

/* DMA_ERRSR_LECME1 (rh) */
#define DMA_ERRSR_LECME1_POS                 _DMA_UL(28)
#define DMA_ERRSR_LECME1_LEN                 _DMA_UL(3)

/* DMA_CLRE_CTL00 (w) */
#define DMA_CLRE_CTL00_POS                   _DMA_UL(0)
#define DMA_CLRE_CTL00_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL01 (w) */
#define DMA_CLRE_CTL01_POS                   _DMA_UL(1)
#define DMA_CLRE_CTL01_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL02 (w) */
#define DMA_CLRE_CTL02_POS                   _DMA_UL(2)
#define DMA_CLRE_CTL02_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL03 (w) */
#define DMA_CLRE_CTL03_POS                   _DMA_UL(3)
#define DMA_CLRE_CTL03_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL04 (w) */
#define DMA_CLRE_CTL04_POS                   _DMA_UL(4)
#define DMA_CLRE_CTL04_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL05 (w) */
#define DMA_CLRE_CTL05_POS                   _DMA_UL(5)
#define DMA_CLRE_CTL05_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL06 (w) */
#define DMA_CLRE_CTL06_POS                   _DMA_UL(6)
#define DMA_CLRE_CTL06_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL07 (w) */
#define DMA_CLRE_CTL07_POS                   _DMA_UL(7)
#define DMA_CLRE_CTL07_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL10 (w) */
#define DMA_CLRE_CTL10_POS                   _DMA_UL(8)
#define DMA_CLRE_CTL10_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL11 (w) */
#define DMA_CLRE_CTL11_POS                   _DMA_UL(9)
#define DMA_CLRE_CTL11_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL12 (w) */
#define DMA_CLRE_CTL12_POS                   _DMA_UL(10)
#define DMA_CLRE_CTL12_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL13 (w) */
#define DMA_CLRE_CTL13_POS                   _DMA_UL(11)
#define DMA_CLRE_CTL13_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL14 (w) */
#define DMA_CLRE_CTL14_POS                   _DMA_UL(12)
#define DMA_CLRE_CTL14_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL15 (w) */
#define DMA_CLRE_CTL15_POS                   _DMA_UL(13)
#define DMA_CLRE_CTL15_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL16 (w) */
#define DMA_CLRE_CTL16_POS                   _DMA_UL(14)
#define DMA_CLRE_CTL16_LEN                   _DMA_UL(1)

/* DMA_CLRE_CTL17 (w) */
#define DMA_CLRE_CTL17_POS                   _DMA_UL(15)
#define DMA_CLRE_CTL17_LEN                   _DMA_UL(1)

/* DMA_CLRE_CME0SER (w) */
#define DMA_CLRE_CME0SER_POS                 _DMA_UL(16)
#define DMA_CLRE_CME0SER_LEN                 _DMA_UL(1)

/* DMA_CLRE_CME0DER (w) */
#define DMA_CLRE_CME0DER_POS                 _DMA_UL(17)
#define DMA_CLRE_CME0DER_LEN                 _DMA_UL(1)

/* DMA_CLRE_CME1SER (w) */
#define DMA_CLRE_CME1SER_POS                 _DMA_UL(18)
#define DMA_CLRE_CME1SER_LEN                 _DMA_UL(1)

/* DMA_CLRE_CME1DER (w) */
#define DMA_CLRE_CME1DER_POS                 _DMA_UL(19)
#define DMA_CLRE_CME1DER_LEN                 _DMA_UL(1)

/* DMA_CLRE_CFPIER (w) */
#define DMA_CLRE_CFPIER_POS                  _DMA_UL(20)
#define DMA_CLRE_CFPIER_LEN                  _DMA_UL(1)

/* DMA_CLRE_CLMBER (w) */
#define DMA_CLRE_CLMBER_POS                  _DMA_UL(21)
#define DMA_CLRE_CLMBER_LEN                  _DMA_UL(1)

/* DMA_CLRE_CLCERBERUS (w) */
#define DMA_CLRE_CLCERBERUS_POS              _DMA_UL(22)
#define DMA_CLRE_CLCERBERUS_LEN              _DMA_UL(1)

/* DMA_CLRE_CLRMLI0 (w) */
#define DMA_CLRE_CLRMLI0_POS                 _DMA_UL(27)
#define DMA_CLRE_CLRMLI0_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA0 (w) */
#define DMA_GINTR_SIDMA0_POS                 _DMA_UL(0)
#define DMA_GINTR_SIDMA0_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA1 (w) */
#define DMA_GINTR_SIDMA1_POS                 _DMA_UL(1)
#define DMA_GINTR_SIDMA1_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA2 (w) */
#define DMA_GINTR_SIDMA2_POS                 _DMA_UL(2)
#define DMA_GINTR_SIDMA2_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA3 (w) */
#define DMA_GINTR_SIDMA3_POS                 _DMA_UL(3)
#define DMA_GINTR_SIDMA3_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA4 (w) */
#define DMA_GINTR_SIDMA4_POS                 _DMA_UL(4)
#define DMA_GINTR_SIDMA4_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA5 (w) */
#define DMA_GINTR_SIDMA5_POS                 _DMA_UL(5)
#define DMA_GINTR_SIDMA5_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA6 (w) */
#define DMA_GINTR_SIDMA6_POS                 _DMA_UL(6)
#define DMA_GINTR_SIDMA6_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA7 (w) */
#define DMA_GINTR_SIDMA7_POS                 _DMA_UL(7)
#define DMA_GINTR_SIDMA7_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA8 (w) */
#define DMA_GINTR_SIDMA8_POS                 _DMA_UL(8)
#define DMA_GINTR_SIDMA8_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA9 (w) */
#define DMA_GINTR_SIDMA9_POS                 _DMA_UL(9)
#define DMA_GINTR_SIDMA9_LEN                 _DMA_UL(1)

/* DMA_GINTR_SIDMA10 (w) */
#define DMA_GINTR_SIDMA10_POS                _DMA_UL(10)
#define DMA_GINTR_SIDMA10_LEN                _DMA_UL(1)

/* DMA_GINTR_SIDMA11 (w) */
#define DMA_GINTR_SIDMA11_POS                _DMA_UL(11)
#define DMA_GINTR_SIDMA11_LEN                _DMA_UL(1)

/* DMA_GINTR_SIDMA12 (w) */
#define DMA_GINTR_SIDMA12_POS                _DMA_UL(12)
#define DMA_GINTR_SIDMA12_LEN                _DMA_UL(1)

/* DMA_GINTR_SIDMA13 (w) */
#define DMA_GINTR_SIDMA13_POS                _DMA_UL(13)
#define DMA_GINTR_SIDMA13_LEN                _DMA_UL(1)

/* DMA_GINTR_SIDMA14 (w) */
#define DMA_GINTR_SIDMA14_POS                _DMA_UL(14)
#define DMA_GINTR_SIDMA14_LEN                _DMA_UL(1)

/* DMA_GINTR_SIDMA15 (w) */
#define DMA_GINTR_SIDMA15_POS                _DMA_UL(15)
#define DMA_GINTR_SIDMA15_LEN                _DMA_UL(1)

/* DMA_MESR_ME0RS (rh) */
#define DMA_MESR_ME0RS_POS                   _DMA_UL(0)
#define DMA_MESR_ME0RS_LEN                   _DMA_UL(1)

/* DMA_MESR_CH0 (rh) */
#define DMA_MESR_CH0_POS                     _DMA_UL(1)
#define DMA_MESR_CH0_LEN                     _DMA_UL(3)

/* DMA_MESR_ME0WS (rh) */
#define DMA_MESR_ME0WS_POS                   _DMA_UL(4)
#define DMA_MESR_ME0WS_LEN                   _DMA_UL(1)

/* DMA_MESR_RBTFPI (rh) */
#define DMA_MESR_RBTFPI_POS                  _DMA_UL(5)
#define DMA_MESR_RBTFPI_LEN                  _DMA_UL(3)

/* DMA_MESR_ME1RS (rh) */
#define DMA_MESR_ME1RS_POS                   _DMA_UL(8)
#define DMA_MESR_ME1RS_LEN                   _DMA_UL(1)

/* DMA_MESR_CH1 (rh) */
#define DMA_MESR_CH1_POS                     _DMA_UL(9)
#define DMA_MESR_CH1_LEN                     _DMA_UL(3)

/* DMA_MESR_ME1WS (rh) */
#define DMA_MESR_ME1WS_POS                   _DMA_UL(12)
#define DMA_MESR_ME1WS_LEN                   _DMA_UL(1)

/* DMA_MESR_RBTLMB (rh) */
#define DMA_MESR_RBTLMB_POS                  _DMA_UL(13)
#define DMA_MESR_RBTLMB_LEN                  _DMA_UL(3)

/* DMA_ME0R_RD00 (rh) */
#define DMA_ME0R_RD00_POS                    _DMA_UL(0)
#define DMA_ME0R_RD00_LEN                    _DMA_UL(8)

/* DMA_ME0R_RD01 (rh) */
#define DMA_ME0R_RD01_POS                    _DMA_UL(8)
#define DMA_ME0R_RD01_LEN                    _DMA_UL(8)

/* DMA_ME0R_RD02 (rh) */
#define DMA_ME0R_RD02_POS                    _DMA_UL(16)
#define DMA_ME0R_RD02_LEN                    _DMA_UL(8)

/* DMA_ME0R_RD03 (rh) */
#define DMA_ME0R_RD03_POS                    _DMA_UL(24)
#define DMA_ME0R_RD03_LEN                    _DMA_UL(8)

/* DMA_ME1R_RD00 (rh) */
#define DMA_ME1R_RD00_POS                    _DMA_UL(0)
#define DMA_ME1R_RD00_LEN                    _DMA_UL(8)

/* DMA_ME1R_RD01 (rh) */
#define DMA_ME1R_RD01_POS                    _DMA_UL(8)
#define DMA_ME1R_RD01_LEN                    _DMA_UL(8)

/* DMA_ME1R_RD02 (rh) */
#define DMA_ME1R_RD02_POS                    _DMA_UL(16)
#define DMA_ME1R_RD02_LEN                    _DMA_UL(8)

/* DMA_ME1R_RD03 (rh) */
#define DMA_ME1R_RD03_POS                    _DMA_UL(24)
#define DMA_ME1R_RD03_LEN                    _DMA_UL(8)

/* DMA_ME0PR_PAT00 (rw) */
#define DMA_ME0PR_PAT00_POS                  _DMA_UL(0)
#define DMA_ME0PR_PAT00_LEN                  _DMA_UL(8)

/* DMA_ME0PR_PAT01 (rw) */
#define DMA_ME0PR_PAT01_POS                  _DMA_UL(8)
#define DMA_ME0PR_PAT01_LEN                  _DMA_UL(8)

/* DMA_ME0PR_PAT02 (rw) */
#define DMA_ME0PR_PAT02_POS                  _DMA_UL(16)
#define DMA_ME0PR_PAT02_LEN                  _DMA_UL(8)

/* DMA_ME0PR_PAT03 (rw) */
#define DMA_ME0PR_PAT03_POS                  _DMA_UL(24)
#define DMA_ME0PR_PAT03_LEN                  _DMA_UL(8)

/* DMA_ME1PR_PAT00 (rw) */
#define DMA_ME1PR_PAT00_POS                  _DMA_UL(0)
#define DMA_ME1PR_PAT00_LEN                  _DMA_UL(8)

/* DMA_ME1PR_PAT01 (rw) */
#define DMA_ME1PR_PAT01_POS                  _DMA_UL(8)
#define DMA_ME1PR_PAT01_LEN                  _DMA_UL(8)

/* DMA_ME1PR_PAT02 (rw) */
#define DMA_ME1PR_PAT02_POS                  _DMA_UL(16)
#define DMA_ME1PR_PAT02_LEN                  _DMA_UL(8)

/* DMA_ME1PR_PAT03 (rw) */
#define DMA_ME1PR_PAT03_POS                  _DMA_UL(24)
#define DMA_ME1PR_PAT03_LEN                  _DMA_UL(8)

/* DMA_ME0AENR_AEN0 (rw) */
#define DMA_ME0AENR_AEN0_POS                 _DMA_UL(0)
#define DMA_ME0AENR_AEN0_LEN                 _DMA_UL(1)

/* DMA_ME0AENR_AEN1 (rw) */
#define DMA_ME0AENR_AEN1_POS                 _DMA_UL(1)
#define DMA_ME0AENR_AEN1_LEN                 _DMA_UL(1)

/* DMA_ME0AENR_AEN2 (rw) */
#define DMA_ME0AENR_AEN2_POS                 _DMA_UL(2)
#define DMA_ME0AENR_AEN2_LEN                 _DMA_UL(1)

/* DMA_ME0AENR_AEN3 (rw) */
#define DMA_ME0AENR_AEN3_POS                 _DMA_UL(3)
#define DMA_ME0AENR_AEN3_LEN                 _DMA_UL(1)

/* DMA_ME0AENR_AEN4 (rw) */
#define DMA_ME0AENR_AEN4_POS                 _DMA_UL(4)
#define DMA_ME0AENR_AEN4_LEN                 _DMA_UL(1)

/* DMA_ME0AENR_AEN5 (rw) */
#define DMA_ME0AENR_AEN5_POS                 _DMA_UL(5)
#define DMA_ME0AENR_AEN5_LEN                 _DMA_UL(1)

/* DMA_ME0AENR_AEN6 (rw) */
#define DMA_ME0AENR_AEN6_POS                 _DMA_UL(6)
#define DMA_ME0AENR_AEN6_LEN                 _DMA_UL(1)

/* DMA_ME0AENR_AEN7 (rw) */
#define DMA_ME0AENR_AEN7_POS                 _DMA_UL(7)
#define DMA_ME0AENR_AEN7_LEN                 _DMA_UL(1)

/* DMA_ME0AENR_AEN8 (rw) */
#define DMA_ME0AENR_AEN8_POS                 _DMA_UL(8)
#define DMA_ME0AENR_AEN8_LEN                 _DMA_UL(1)

/* DMA_ME0AENR_AEN9 (rw) */
#define DMA_ME0AENR_AEN9_POS                 _DMA_UL(9)
#define DMA_ME0AENR_AEN9_LEN                 _DMA_UL(1)

/* DMA_ME0AENR_AEN10 (rw) */
#define DMA_ME0AENR_AEN10_POS                _DMA_UL(10)
#define DMA_ME0AENR_AEN10_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN11 (rw) */
#define DMA_ME0AENR_AEN11_POS                _DMA_UL(11)
#define DMA_ME0AENR_AEN11_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN12 (rw) */
#define DMA_ME0AENR_AEN12_POS                _DMA_UL(12)
#define DMA_ME0AENR_AEN12_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN13 (rw) */
#define DMA_ME0AENR_AEN13_POS                _DMA_UL(13)
#define DMA_ME0AENR_AEN13_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN14 (rw) */
#define DMA_ME0AENR_AEN14_POS                _DMA_UL(14)
#define DMA_ME0AENR_AEN14_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN15 (rw) */
#define DMA_ME0AENR_AEN15_POS                _DMA_UL(15)
#define DMA_ME0AENR_AEN15_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN16 (rw) */
#define DMA_ME0AENR_AEN16_POS                _DMA_UL(16)
#define DMA_ME0AENR_AEN16_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN17 (rw) */
#define DMA_ME0AENR_AEN17_POS                _DMA_UL(17)
#define DMA_ME0AENR_AEN17_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN18 (rw) */
#define DMA_ME0AENR_AEN18_POS                _DMA_UL(18)
#define DMA_ME0AENR_AEN18_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN19 (rw) */
#define DMA_ME0AENR_AEN19_POS                _DMA_UL(19)
#define DMA_ME0AENR_AEN19_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN20 (rw) */
#define DMA_ME0AENR_AEN20_POS                _DMA_UL(20)
#define DMA_ME0AENR_AEN20_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN21 (rw) */
#define DMA_ME0AENR_AEN21_POS                _DMA_UL(21)
#define DMA_ME0AENR_AEN21_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN22 (rw) */
#define DMA_ME0AENR_AEN22_POS                _DMA_UL(22)
#define DMA_ME0AENR_AEN22_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN23 (rw) */
#define DMA_ME0AENR_AEN23_POS                _DMA_UL(23)
#define DMA_ME0AENR_AEN23_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN24 (rw) */
#define DMA_ME0AENR_AEN24_POS                _DMA_UL(24)
#define DMA_ME0AENR_AEN24_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN25 (rw) */
#define DMA_ME0AENR_AEN25_POS                _DMA_UL(25)
#define DMA_ME0AENR_AEN25_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN26 (rw) */
#define DMA_ME0AENR_AEN26_POS                _DMA_UL(26)
#define DMA_ME0AENR_AEN26_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN27 (rw) */
#define DMA_ME0AENR_AEN27_POS                _DMA_UL(27)
#define DMA_ME0AENR_AEN27_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN28 (rw) */
#define DMA_ME0AENR_AEN28_POS                _DMA_UL(28)
#define DMA_ME0AENR_AEN28_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN29 (rw) */
#define DMA_ME0AENR_AEN29_POS                _DMA_UL(29)
#define DMA_ME0AENR_AEN29_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN30 (rw) */
#define DMA_ME0AENR_AEN30_POS                _DMA_UL(30)
#define DMA_ME0AENR_AEN30_LEN                _DMA_UL(1)

/* DMA_ME0AENR_AEN31 (rw) */
#define DMA_ME0AENR_AEN31_POS                _DMA_UL(31)
#define DMA_ME0AENR_AEN31_LEN                _DMA_UL(1)

/* DMA_ME0ARR_SLICE0 (rw) */
#define DMA_ME0ARR_SLICE0_POS                _DMA_UL(0)
#define DMA_ME0ARR_SLICE0_LEN                _DMA_UL(5)

/* DMA_ME0ARR_SIZE0 (rw) */
#define DMA_ME0ARR_SIZE0_POS                 _DMA_UL(5)
#define DMA_ME0ARR_SIZE0_LEN                 _DMA_UL(3)

/* DMA_ME0ARR_SLICE1 (rw) */
#define DMA_ME0ARR_SLICE1_POS                _DMA_UL(8)
#define DMA_ME0ARR_SLICE1_LEN                _DMA_UL(5)

/* DMA_ME0ARR_SIZE1 (rw) */
#define DMA_ME0ARR_SIZE1_POS                 _DMA_UL(13)
#define DMA_ME0ARR_SIZE1_LEN                 _DMA_UL(3)

/* DMA_ME0ARR_SLICE2 (rw) */
#define DMA_ME0ARR_SLICE2_POS                _DMA_UL(16)
#define DMA_ME0ARR_SLICE2_LEN                _DMA_UL(5)

/* DMA_ME0ARR_SIZE2 (rw) */
#define DMA_ME0ARR_SIZE2_POS                 _DMA_UL(21)
#define DMA_ME0ARR_SIZE2_LEN                 _DMA_UL(3)

/* DMA_ME0ARR_SLICE3 (rw) */
#define DMA_ME0ARR_SLICE3_POS                _DMA_UL(24)
#define DMA_ME0ARR_SLICE3_LEN                _DMA_UL(5)

/* DMA_ME0ARR_SIZE3 (rw) */
#define DMA_ME0ARR_SIZE3_POS                 _DMA_UL(29)
#define DMA_ME0ARR_SIZE3_LEN                 _DMA_UL(3)

/* DMA_ME1AENR_AEN0 (rw) */
#define DMA_ME1AENR_AEN0_POS                 _DMA_UL(0)
#define DMA_ME1AENR_AEN0_LEN                 _DMA_UL(1)

/* DMA_ME1AENR_AEN1 (rw) */
#define DMA_ME1AENR_AEN1_POS                 _DMA_UL(1)
#define DMA_ME1AENR_AEN1_LEN                 _DMA_UL(1)

/* DMA_ME1AENR_AEN2 (rw) */
#define DMA_ME1AENR_AEN2_POS                 _DMA_UL(2)
#define DMA_ME1AENR_AEN2_LEN                 _DMA_UL(1)

/* DMA_ME1AENR_AEN3 (rw) */
#define DMA_ME1AENR_AEN3_POS                 _DMA_UL(3)
#define DMA_ME1AENR_AEN3_LEN                 _DMA_UL(1)

/* DMA_ME1AENR_AEN4 (rw) */
#define DMA_ME1AENR_AEN4_POS                 _DMA_UL(4)
#define DMA_ME1AENR_AEN4_LEN                 _DMA_UL(1)

/* DMA_ME1AENR_AEN5 (rw) */
#define DMA_ME1AENR_AEN5_POS                 _DMA_UL(5)
#define DMA_ME1AENR_AEN5_LEN                 _DMA_UL(1)

/* DMA_ME1AENR_AEN6 (rw) */
#define DMA_ME1AENR_AEN6_POS                 _DMA_UL(6)
#define DMA_ME1AENR_AEN6_LEN                 _DMA_UL(1)

/* DMA_ME1AENR_AEN7 (rw) */
#define DMA_ME1AENR_AEN7_POS                 _DMA_UL(7)
#define DMA_ME1AENR_AEN7_LEN                 _DMA_UL(1)

/* DMA_ME1AENR_AEN8 (rw) */
#define DMA_ME1AENR_AEN8_POS                 _DMA_UL(8)
#define DMA_ME1AENR_AEN8_LEN                 _DMA_UL(1)

/* DMA_ME1AENR_AEN9 (rw) */
#define DMA_ME1AENR_AEN9_POS                 _DMA_UL(9)
#define DMA_ME1AENR_AEN9_LEN                 _DMA_UL(1)

/* DMA_ME1AENR_AEN10 (rw) */
#define DMA_ME1AENR_AEN10_POS                _DMA_UL(10)
#define DMA_ME1AENR_AEN10_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN11 (rw) */
#define DMA_ME1AENR_AEN11_POS                _DMA_UL(11)
#define DMA_ME1AENR_AEN11_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN12 (rw) */
#define DMA_ME1AENR_AEN12_POS                _DMA_UL(12)
#define DMA_ME1AENR_AEN12_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN13 (rw) */
#define DMA_ME1AENR_AEN13_POS                _DMA_UL(13)
#define DMA_ME1AENR_AEN13_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN14 (rw) */
#define DMA_ME1AENR_AEN14_POS                _DMA_UL(14)
#define DMA_ME1AENR_AEN14_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN15 (rw) */
#define DMA_ME1AENR_AEN15_POS                _DMA_UL(15)
#define DMA_ME1AENR_AEN15_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN16 (rw) */
#define DMA_ME1AENR_AEN16_POS                _DMA_UL(16)
#define DMA_ME1AENR_AEN16_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN17 (rw) */
#define DMA_ME1AENR_AEN17_POS                _DMA_UL(17)
#define DMA_ME1AENR_AEN17_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN18 (rw) */
#define DMA_ME1AENR_AEN18_POS                _DMA_UL(18)
#define DMA_ME1AENR_AEN18_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN19 (rw) */
#define DMA_ME1AENR_AEN19_POS                _DMA_UL(19)
#define DMA_ME1AENR_AEN19_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN20 (rw) */
#define DMA_ME1AENR_AEN20_POS                _DMA_UL(20)
#define DMA_ME1AENR_AEN20_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN21 (rw) */
#define DMA_ME1AENR_AEN21_POS                _DMA_UL(21)
#define DMA_ME1AENR_AEN21_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN22 (rw) */
#define DMA_ME1AENR_AEN22_POS                _DMA_UL(22)
#define DMA_ME1AENR_AEN22_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN23 (rw) */
#define DMA_ME1AENR_AEN23_POS                _DMA_UL(23)
#define DMA_ME1AENR_AEN23_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN24 (rw) */
#define DMA_ME1AENR_AEN24_POS                _DMA_UL(24)
#define DMA_ME1AENR_AEN24_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN25 (rw) */
#define DMA_ME1AENR_AEN25_POS                _DMA_UL(25)
#define DMA_ME1AENR_AEN25_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN26 (rw) */
#define DMA_ME1AENR_AEN26_POS                _DMA_UL(26)
#define DMA_ME1AENR_AEN26_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN27 (rw) */
#define DMA_ME1AENR_AEN27_POS                _DMA_UL(27)
#define DMA_ME1AENR_AEN27_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN28 (rw) */
#define DMA_ME1AENR_AEN28_POS                _DMA_UL(28)
#define DMA_ME1AENR_AEN28_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN29 (rw) */
#define DMA_ME1AENR_AEN29_POS                _DMA_UL(29)
#define DMA_ME1AENR_AEN29_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN30 (rw) */
#define DMA_ME1AENR_AEN30_POS                _DMA_UL(30)
#define DMA_ME1AENR_AEN30_LEN                _DMA_UL(1)

/* DMA_ME1AENR_AEN31 (rw) */
#define DMA_ME1AENR_AEN31_POS                _DMA_UL(31)
#define DMA_ME1AENR_AEN31_LEN                _DMA_UL(1)

/* DMA_ME1ARR_SLICE0 (rw) */
#define DMA_ME1ARR_SLICE0_POS                _DMA_UL(0)
#define DMA_ME1ARR_SLICE0_LEN                _DMA_UL(5)

/* DMA_ME1ARR_SIZE0 (rw) */
#define DMA_ME1ARR_SIZE0_POS                 _DMA_UL(5)
#define DMA_ME1ARR_SIZE0_LEN                 _DMA_UL(3)

/* DMA_ME1ARR_SLICE1 (rw) */
#define DMA_ME1ARR_SLICE1_POS                _DMA_UL(8)
#define DMA_ME1ARR_SLICE1_LEN                _DMA_UL(5)

/* DMA_ME1ARR_SIZE1 (rw) */
#define DMA_ME1ARR_SIZE1_POS                 _DMA_UL(13)
#define DMA_ME1ARR_SIZE1_LEN                 _DMA_UL(3)

/* DMA_ME1ARR_SLICE2 (rw) */
#define DMA_ME1ARR_SLICE2_POS                _DMA_UL(16)
#define DMA_ME1ARR_SLICE2_LEN                _DMA_UL(5)

/* DMA_ME1ARR_SIZE2 (rw) */
#define DMA_ME1ARR_SIZE2_POS                 _DMA_UL(21)
#define DMA_ME1ARR_SIZE2_LEN                 _DMA_UL(3)

/* DMA_ME1ARR_SLICE3 (rw) */
#define DMA_ME1ARR_SLICE3_POS                _DMA_UL(24)
#define DMA_ME1ARR_SLICE3_LEN                _DMA_UL(5)

/* DMA_ME1ARR_SIZE3 (rw) */
#define DMA_ME1ARR_SIZE3_POS                 _DMA_UL(29)
#define DMA_ME1ARR_SIZE3_LEN                 _DMA_UL(3)

/* DMA_INTSR_ICH00 (rh) */
#define DMA_INTSR_ICH00_POS                  _DMA_UL(0)
#define DMA_INTSR_ICH00_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH01 (rh) */
#define DMA_INTSR_ICH01_POS                  _DMA_UL(1)
#define DMA_INTSR_ICH01_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH02 (rh) */
#define DMA_INTSR_ICH02_POS                  _DMA_UL(2)
#define DMA_INTSR_ICH02_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH03 (rh) */
#define DMA_INTSR_ICH03_POS                  _DMA_UL(3)
#define DMA_INTSR_ICH03_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH04 (rh) */
#define DMA_INTSR_ICH04_POS                  _DMA_UL(4)
#define DMA_INTSR_ICH04_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH05 (rh) */
#define DMA_INTSR_ICH05_POS                  _DMA_UL(5)
#define DMA_INTSR_ICH05_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH06 (rh) */
#define DMA_INTSR_ICH06_POS                  _DMA_UL(6)
#define DMA_INTSR_ICH06_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH07 (rh) */
#define DMA_INTSR_ICH07_POS                  _DMA_UL(7)
#define DMA_INTSR_ICH07_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH10 (rh) */
#define DMA_INTSR_ICH10_POS                  _DMA_UL(8)
#define DMA_INTSR_ICH10_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH11 (rh) */
#define DMA_INTSR_ICH11_POS                  _DMA_UL(9)
#define DMA_INTSR_ICH11_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH12 (rh) */
#define DMA_INTSR_ICH12_POS                  _DMA_UL(10)
#define DMA_INTSR_ICH12_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH13 (rh) */
#define DMA_INTSR_ICH13_POS                  _DMA_UL(11)
#define DMA_INTSR_ICH13_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH14 (rh) */
#define DMA_INTSR_ICH14_POS                  _DMA_UL(12)
#define DMA_INTSR_ICH14_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH15 (rh) */
#define DMA_INTSR_ICH15_POS                  _DMA_UL(13)
#define DMA_INTSR_ICH15_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH16 (rh) */
#define DMA_INTSR_ICH16_POS                  _DMA_UL(14)
#define DMA_INTSR_ICH16_LEN                  _DMA_UL(1)

/* DMA_INTSR_ICH17 (rh) */
#define DMA_INTSR_ICH17_POS                  _DMA_UL(15)
#define DMA_INTSR_ICH17_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM00 (rh) */
#define DMA_INTSR_IPM00_POS                  _DMA_UL(16)
#define DMA_INTSR_IPM00_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM01 (rh) */
#define DMA_INTSR_IPM01_POS                  _DMA_UL(17)
#define DMA_INTSR_IPM01_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM02 (rh) */
#define DMA_INTSR_IPM02_POS                  _DMA_UL(18)
#define DMA_INTSR_IPM02_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM03 (rh) */
#define DMA_INTSR_IPM03_POS                  _DMA_UL(19)
#define DMA_INTSR_IPM03_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM04 (rh) */
#define DMA_INTSR_IPM04_POS                  _DMA_UL(20)
#define DMA_INTSR_IPM04_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM05 (rh) */
#define DMA_INTSR_IPM05_POS                  _DMA_UL(21)
#define DMA_INTSR_IPM05_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM06 (rh) */
#define DMA_INTSR_IPM06_POS                  _DMA_UL(22)
#define DMA_INTSR_IPM06_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM07 (rh) */
#define DMA_INTSR_IPM07_POS                  _DMA_UL(23)
#define DMA_INTSR_IPM07_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM10 (rh) */
#define DMA_INTSR_IPM10_POS                  _DMA_UL(24)
#define DMA_INTSR_IPM10_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM11 (rh) */
#define DMA_INTSR_IPM11_POS                  _DMA_UL(25)
#define DMA_INTSR_IPM11_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM12 (rh) */
#define DMA_INTSR_IPM12_POS                  _DMA_UL(26)
#define DMA_INTSR_IPM12_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM13 (rh) */
#define DMA_INTSR_IPM13_POS                  _DMA_UL(27)
#define DMA_INTSR_IPM13_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM14 (rh) */
#define DMA_INTSR_IPM14_POS                  _DMA_UL(28)
#define DMA_INTSR_IPM14_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM15 (rh) */
#define DMA_INTSR_IPM15_POS                  _DMA_UL(29)
#define DMA_INTSR_IPM15_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM16 (rh) */
#define DMA_INTSR_IPM16_POS                  _DMA_UL(30)
#define DMA_INTSR_IPM16_LEN                  _DMA_UL(1)

/* DMA_INTSR_IPM17 (rh) */
#define DMA_INTSR_IPM17_POS                  _DMA_UL(31)
#define DMA_INTSR_IPM17_LEN                  _DMA_UL(1)

/* DMA_INTCR_CICH00 (w) */
#define DMA_INTCR_CICH00_POS                 _DMA_UL(0)
#define DMA_INTCR_CICH00_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH01 (w) */
#define DMA_INTCR_CICH01_POS                 _DMA_UL(1)
#define DMA_INTCR_CICH01_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH02 (w) */
#define DMA_INTCR_CICH02_POS                 _DMA_UL(2)
#define DMA_INTCR_CICH02_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH03 (w) */
#define DMA_INTCR_CICH03_POS                 _DMA_UL(3)
#define DMA_INTCR_CICH03_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH04 (w) */
#define DMA_INTCR_CICH04_POS                 _DMA_UL(4)
#define DMA_INTCR_CICH04_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH05 (w) */
#define DMA_INTCR_CICH05_POS                 _DMA_UL(5)
#define DMA_INTCR_CICH05_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH06 (w) */
#define DMA_INTCR_CICH06_POS                 _DMA_UL(6)
#define DMA_INTCR_CICH06_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH07 (w) */
#define DMA_INTCR_CICH07_POS                 _DMA_UL(7)
#define DMA_INTCR_CICH07_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH10 (w) */
#define DMA_INTCR_CICH10_POS                 _DMA_UL(8)
#define DMA_INTCR_CICH10_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH11 (w) */
#define DMA_INTCR_CICH11_POS                 _DMA_UL(9)
#define DMA_INTCR_CICH11_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH12 (w) */
#define DMA_INTCR_CICH12_POS                 _DMA_UL(10)
#define DMA_INTCR_CICH12_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH13 (w) */
#define DMA_INTCR_CICH13_POS                 _DMA_UL(11)
#define DMA_INTCR_CICH13_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH14 (w) */
#define DMA_INTCR_CICH14_POS                 _DMA_UL(12)
#define DMA_INTCR_CICH14_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH15 (w) */
#define DMA_INTCR_CICH15_POS                 _DMA_UL(13)
#define DMA_INTCR_CICH15_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH16 (w) */
#define DMA_INTCR_CICH16_POS                 _DMA_UL(14)
#define DMA_INTCR_CICH16_LEN                 _DMA_UL(1)

/* DMA_INTCR_CICH17 (w) */
#define DMA_INTCR_CICH17_POS                 _DMA_UL(15)
#define DMA_INTCR_CICH17_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP00 (w) */
#define DMA_INTCR_CWRP00_POS                 _DMA_UL(16)
#define DMA_INTCR_CWRP00_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP01 (w) */
#define DMA_INTCR_CWRP01_POS                 _DMA_UL(17)
#define DMA_INTCR_CWRP01_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP02 (w) */
#define DMA_INTCR_CWRP02_POS                 _DMA_UL(18)
#define DMA_INTCR_CWRP02_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP03 (w) */
#define DMA_INTCR_CWRP03_POS                 _DMA_UL(19)
#define DMA_INTCR_CWRP03_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP04 (w) */
#define DMA_INTCR_CWRP04_POS                 _DMA_UL(20)
#define DMA_INTCR_CWRP04_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP05 (w) */
#define DMA_INTCR_CWRP05_POS                 _DMA_UL(21)
#define DMA_INTCR_CWRP05_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP06 (w) */
#define DMA_INTCR_CWRP06_POS                 _DMA_UL(22)
#define DMA_INTCR_CWRP06_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP07 (w) */
#define DMA_INTCR_CWRP07_POS                 _DMA_UL(23)
#define DMA_INTCR_CWRP07_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP10 (w) */
#define DMA_INTCR_CWRP10_POS                 _DMA_UL(24)
#define DMA_INTCR_CWRP10_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP11 (w) */
#define DMA_INTCR_CWRP11_POS                 _DMA_UL(25)
#define DMA_INTCR_CWRP11_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP12 (w) */
#define DMA_INTCR_CWRP12_POS                 _DMA_UL(26)
#define DMA_INTCR_CWRP12_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP13 (w) */
#define DMA_INTCR_CWRP13_POS                 _DMA_UL(27)
#define DMA_INTCR_CWRP13_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP14 (w) */
#define DMA_INTCR_CWRP14_POS                 _DMA_UL(28)
#define DMA_INTCR_CWRP14_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP15 (w) */
#define DMA_INTCR_CWRP15_POS                 _DMA_UL(29)
#define DMA_INTCR_CWRP15_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP16 (w) */
#define DMA_INTCR_CWRP16_POS                 _DMA_UL(30)
#define DMA_INTCR_CWRP16_LEN                 _DMA_UL(1)

/* DMA_INTCR_CWRP17 (w) */
#define DMA_INTCR_CWRP17_POS                 _DMA_UL(31)
#define DMA_INTCR_CWRP17_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS00 (rh) */
#define DMA_WRPSR_WRPS00_POS                 _DMA_UL(0)
#define DMA_WRPSR_WRPS00_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS01 (rh) */
#define DMA_WRPSR_WRPS01_POS                 _DMA_UL(1)
#define DMA_WRPSR_WRPS01_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS02 (rh) */
#define DMA_WRPSR_WRPS02_POS                 _DMA_UL(2)
#define DMA_WRPSR_WRPS02_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS03 (rh) */
#define DMA_WRPSR_WRPS03_POS                 _DMA_UL(3)
#define DMA_WRPSR_WRPS03_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS04 (rh) */
#define DMA_WRPSR_WRPS04_POS                 _DMA_UL(4)
#define DMA_WRPSR_WRPS04_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS05 (rh) */
#define DMA_WRPSR_WRPS05_POS                 _DMA_UL(5)
#define DMA_WRPSR_WRPS05_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS06 (rh) */
#define DMA_WRPSR_WRPS06_POS                 _DMA_UL(6)
#define DMA_WRPSR_WRPS06_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS07 (rh) */
#define DMA_WRPSR_WRPS07_POS                 _DMA_UL(7)
#define DMA_WRPSR_WRPS07_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS10 (rh) */
#define DMA_WRPSR_WRPS10_POS                 _DMA_UL(8)
#define DMA_WRPSR_WRPS10_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS11 (rh) */
#define DMA_WRPSR_WRPS11_POS                 _DMA_UL(9)
#define DMA_WRPSR_WRPS11_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS12 (rh) */
#define DMA_WRPSR_WRPS12_POS                 _DMA_UL(10)
#define DMA_WRPSR_WRPS12_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS13 (rh) */
#define DMA_WRPSR_WRPS13_POS                 _DMA_UL(11)
#define DMA_WRPSR_WRPS13_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS14 (rh) */
#define DMA_WRPSR_WRPS14_POS                 _DMA_UL(12)
#define DMA_WRPSR_WRPS14_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS15 (rh) */
#define DMA_WRPSR_WRPS15_POS                 _DMA_UL(13)
#define DMA_WRPSR_WRPS15_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS16 (rh) */
#define DMA_WRPSR_WRPS16_POS                 _DMA_UL(14)
#define DMA_WRPSR_WRPS16_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPS17 (rh) */
#define DMA_WRPSR_WRPS17_POS                 _DMA_UL(15)
#define DMA_WRPSR_WRPS17_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD00 (rh) */
#define DMA_WRPSR_WRPD00_POS                 _DMA_UL(16)
#define DMA_WRPSR_WRPD00_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD01 (rh) */
#define DMA_WRPSR_WRPD01_POS                 _DMA_UL(17)
#define DMA_WRPSR_WRPD01_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD02 (rh) */
#define DMA_WRPSR_WRPD02_POS                 _DMA_UL(18)
#define DMA_WRPSR_WRPD02_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD03 (rh) */
#define DMA_WRPSR_WRPD03_POS                 _DMA_UL(19)
#define DMA_WRPSR_WRPD03_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD04 (rh) */
#define DMA_WRPSR_WRPD04_POS                 _DMA_UL(20)
#define DMA_WRPSR_WRPD04_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD05 (rh) */
#define DMA_WRPSR_WRPD05_POS                 _DMA_UL(21)
#define DMA_WRPSR_WRPD05_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD06 (rh) */
#define DMA_WRPSR_WRPD06_POS                 _DMA_UL(22)
#define DMA_WRPSR_WRPD06_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD07 (rh) */
#define DMA_WRPSR_WRPD07_POS                 _DMA_UL(23)
#define DMA_WRPSR_WRPD07_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD10 (rh) */
#define DMA_WRPSR_WRPD10_POS                 _DMA_UL(24)
#define DMA_WRPSR_WRPD10_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD11 (rh) */
#define DMA_WRPSR_WRPD11_POS                 _DMA_UL(25)
#define DMA_WRPSR_WRPD11_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD12 (rh) */
#define DMA_WRPSR_WRPD12_POS                 _DMA_UL(26)
#define DMA_WRPSR_WRPD12_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD13 (rh) */
#define DMA_WRPSR_WRPD13_POS                 _DMA_UL(27)
#define DMA_WRPSR_WRPD13_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD14 (rh) */
#define DMA_WRPSR_WRPD14_POS                 _DMA_UL(28)
#define DMA_WRPSR_WRPD14_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD15 (rh) */
#define DMA_WRPSR_WRPD15_POS                 _DMA_UL(29)
#define DMA_WRPSR_WRPD15_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD16 (rh) */
#define DMA_WRPSR_WRPD16_POS                 _DMA_UL(30)
#define DMA_WRPSR_WRPD16_LEN                 _DMA_UL(1)

/* DMA_WRPSR_WRPD17 (rh) */
#define DMA_WRPSR_WRPD17_POS                 _DMA_UL(31)
#define DMA_WRPSR_WRPD17_LEN                 _DMA_UL(1)

/* DMA_OCDSR_BTRC0 (rw) */
#define DMA_OCDSR_BTRC0_POS                  _DMA_UL(0)
#define DMA_OCDSR_BTRC0_LEN                  _DMA_UL(2)

/* DMA_OCDSR_BCHS0 (rw) */
#define DMA_OCDSR_BCHS0_POS                  _DMA_UL(2)
#define DMA_OCDSR_BCHS0_LEN                  _DMA_UL(3)

/* DMA_OCDSR_BRL0 (rw) */
#define DMA_OCDSR_BRL0_POS                   _DMA_UL(5)
#define DMA_OCDSR_BRL0_LEN                   _DMA_UL(1)

/* DMA_OCDSR_BTRC1 (rw) */
#define DMA_OCDSR_BTRC1_POS                  _DMA_UL(8)
#define DMA_OCDSR_BTRC1_LEN                  _DMA_UL(2)

/* DMA_OCDSR_BCHS1 (rw) */
#define DMA_OCDSR_BCHS1_POS                  _DMA_UL(10)
#define DMA_OCDSR_BCHS1_LEN                  _DMA_UL(3)

/* DMA_OCDSR_BRL1 (rw) */
#define DMA_OCDSR_BRL1_POS                   _DMA_UL(13)
#define DMA_OCDSR_BRL1_LEN                   _DMA_UL(1)

/* DMA_SUSPMR_SUSEN00 (rw) */
#define DMA_SUSPMR_SUSEN00_POS               _DMA_UL(0)
#define DMA_SUSPMR_SUSEN00_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN01 (rw) */
#define DMA_SUSPMR_SUSEN01_POS               _DMA_UL(1)
#define DMA_SUSPMR_SUSEN01_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN02 (rw) */
#define DMA_SUSPMR_SUSEN02_POS               _DMA_UL(2)
#define DMA_SUSPMR_SUSEN02_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN03 (rw) */
#define DMA_SUSPMR_SUSEN03_POS               _DMA_UL(3)
#define DMA_SUSPMR_SUSEN03_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN04 (rw) */
#define DMA_SUSPMR_SUSEN04_POS               _DMA_UL(4)
#define DMA_SUSPMR_SUSEN04_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN05 (rw) */
#define DMA_SUSPMR_SUSEN05_POS               _DMA_UL(5)
#define DMA_SUSPMR_SUSEN05_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN06 (rw) */
#define DMA_SUSPMR_SUSEN06_POS               _DMA_UL(6)
#define DMA_SUSPMR_SUSEN06_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN07 (rw) */
#define DMA_SUSPMR_SUSEN07_POS               _DMA_UL(7)
#define DMA_SUSPMR_SUSEN07_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN10 (rw) */
#define DMA_SUSPMR_SUSEN10_POS               _DMA_UL(8)
#define DMA_SUSPMR_SUSEN10_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN11 (rw) */
#define DMA_SUSPMR_SUSEN11_POS               _DMA_UL(9)
#define DMA_SUSPMR_SUSEN11_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN12 (rw) */
#define DMA_SUSPMR_SUSEN12_POS               _DMA_UL(10)
#define DMA_SUSPMR_SUSEN12_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN13 (rw) */
#define DMA_SUSPMR_SUSEN13_POS               _DMA_UL(11)
#define DMA_SUSPMR_SUSEN13_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN14 (rw) */
#define DMA_SUSPMR_SUSEN14_POS               _DMA_UL(12)
#define DMA_SUSPMR_SUSEN14_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN15 (rw) */
#define DMA_SUSPMR_SUSEN15_POS               _DMA_UL(13)
#define DMA_SUSPMR_SUSEN15_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN16 (rw) */
#define DMA_SUSPMR_SUSEN16_POS               _DMA_UL(14)
#define DMA_SUSPMR_SUSEN16_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSEN17 (rw) */
#define DMA_SUSPMR_SUSEN17_POS               _DMA_UL(15)
#define DMA_SUSPMR_SUSEN17_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC00 (rh) */
#define DMA_SUSPMR_SUSAC00_POS               _DMA_UL(16)
#define DMA_SUSPMR_SUSAC00_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC01 (rh) */
#define DMA_SUSPMR_SUSAC01_POS               _DMA_UL(17)
#define DMA_SUSPMR_SUSAC01_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC02 (rh) */
#define DMA_SUSPMR_SUSAC02_POS               _DMA_UL(18)
#define DMA_SUSPMR_SUSAC02_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC03 (rh) */
#define DMA_SUSPMR_SUSAC03_POS               _DMA_UL(19)
#define DMA_SUSPMR_SUSAC03_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC04 (rh) */
#define DMA_SUSPMR_SUSAC04_POS               _DMA_UL(20)
#define DMA_SUSPMR_SUSAC04_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC05 (rh) */
#define DMA_SUSPMR_SUSAC05_POS               _DMA_UL(21)
#define DMA_SUSPMR_SUSAC05_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC06 (rh) */
#define DMA_SUSPMR_SUSAC06_POS               _DMA_UL(22)
#define DMA_SUSPMR_SUSAC06_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC07 (rh) */
#define DMA_SUSPMR_SUSAC07_POS               _DMA_UL(23)
#define DMA_SUSPMR_SUSAC07_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC10 (rh) */
#define DMA_SUSPMR_SUSAC10_POS               _DMA_UL(24)
#define DMA_SUSPMR_SUSAC10_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC11 (rh) */
#define DMA_SUSPMR_SUSAC11_POS               _DMA_UL(25)
#define DMA_SUSPMR_SUSAC11_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC12 (rh) */
#define DMA_SUSPMR_SUSAC12_POS               _DMA_UL(26)
#define DMA_SUSPMR_SUSAC12_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC13 (rh) */
#define DMA_SUSPMR_SUSAC13_POS               _DMA_UL(27)
#define DMA_SUSPMR_SUSAC13_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC14 (rh) */
#define DMA_SUSPMR_SUSAC14_POS               _DMA_UL(28)
#define DMA_SUSPMR_SUSAC14_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC15 (rh) */
#define DMA_SUSPMR_SUSAC15_POS               _DMA_UL(29)
#define DMA_SUSPMR_SUSAC15_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC16 (rh) */
#define DMA_SUSPMR_SUSAC16_POS               _DMA_UL(30)
#define DMA_SUSPMR_SUSAC16_LEN               _DMA_UL(1)

/* DMA_SUSPMR_SUSAC17 (rh) */
#define DMA_SUSPMR_SUSAC17_POS               _DMA_UL(31)
#define DMA_SUSPMR_SUSAC17_LEN               _DMA_UL(1)

/* DMA_CHSR00_TCOUNT (rh) */
#define DMA_CHSR00_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR00_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR00_LXO (rh) */
#define DMA_CHSR00_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR00_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR00_TREL (rw) */
#define DMA_CHCR00_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR00_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR00_PRSEL (rw) */
#define DMA_CHCR00_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR00_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR00_BLKM (rw) */
#define DMA_CHCR00_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR00_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR00_RROAT (rw) */
#define DMA_CHCR00_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR00_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR00_CHMODE (rw) */
#define DMA_CHCR00_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR00_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR00_CHDW (rw) */
#define DMA_CHCR00_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR00_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR00_PATSEL (rw) */
#define DMA_CHCR00_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR00_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR00_CHPRIO (rw) */
#define DMA_CHCR00_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR00_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR00_DMAPRIO (rw) */
#define DMA_CHCR00_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR00_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR00_WRPSE (rw) */
#define DMA_CHICR00_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR00_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR00_WRPDE (rw) */
#define DMA_CHICR00_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR00_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR00_INTCT (rw) */
#define DMA_CHICR00_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR00_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR00_WRPP (rw) */
#define DMA_CHICR00_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR00_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR00_INTP (rw) */
#define DMA_CHICR00_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR00_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR00_IRDV (rw) */
#define DMA_CHICR00_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR00_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR00_SMF (rw) */
#define DMA_ADRCR00_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR00_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR00_INCS (rw) */
#define DMA_ADRCR00_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR00_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR00_DMF (rw) */
#define DMA_ADRCR00_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR00_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR00_INCD (rw) */
#define DMA_ADRCR00_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR00_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR00_CBLS (rw) */
#define DMA_ADRCR00_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR00_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR00_CBLD (rw) */
#define DMA_ADRCR00_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR00_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR00_SHCT (rw) */
#define DMA_ADRCR00_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR00_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR00_SHWEN (rw) */
#define DMA_ADRCR00_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR00_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR00_SADR (rwh) */
#define DMA_SADR00_SADR_POS                  _DMA_UL(0)
#define DMA_SADR00_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR00_DADR (rwh) */
#define DMA_DADR00_DADR_POS                  _DMA_UL(0)
#define DMA_DADR00_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR00_SHADR (rwh) */
#define DMA_SHADR00_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR00_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR01_TCOUNT (rh) */
#define DMA_CHSR01_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR01_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR01_LXO (rh) */
#define DMA_CHSR01_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR01_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR01_TREL (rw) */
#define DMA_CHCR01_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR01_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR01_PRSEL (rw) */
#define DMA_CHCR01_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR01_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR01_BLKM (rw) */
#define DMA_CHCR01_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR01_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR01_RROAT (rw) */
#define DMA_CHCR01_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR01_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR01_CHMODE (rw) */
#define DMA_CHCR01_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR01_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR01_CHDW (rw) */
#define DMA_CHCR01_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR01_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR01_PATSEL (rw) */
#define DMA_CHCR01_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR01_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR01_CHPRIO (rw) */
#define DMA_CHCR01_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR01_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR01_DMAPRIO (rw) */
#define DMA_CHCR01_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR01_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR01_WRPSE (rw) */
#define DMA_CHICR01_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR01_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR01_WRPDE (rw) */
#define DMA_CHICR01_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR01_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR01_INTCT (rw) */
#define DMA_CHICR01_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR01_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR01_WRPP (rw) */
#define DMA_CHICR01_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR01_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR01_INTP (rw) */
#define DMA_CHICR01_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR01_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR01_IRDV (rw) */
#define DMA_CHICR01_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR01_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR01_SMF (rw) */
#define DMA_ADRCR01_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR01_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR01_INCS (rw) */
#define DMA_ADRCR01_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR01_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR01_DMF (rw) */
#define DMA_ADRCR01_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR01_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR01_INCD (rw) */
#define DMA_ADRCR01_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR01_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR01_CBLS (rw) */
#define DMA_ADRCR01_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR01_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR01_CBLD (rw) */
#define DMA_ADRCR01_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR01_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR01_SHCT (rw) */
#define DMA_ADRCR01_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR01_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR01_SHWEN (rw) */
#define DMA_ADRCR01_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR01_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR01_SADR (rwh) */
#define DMA_SADR01_SADR_POS                  _DMA_UL(0)
#define DMA_SADR01_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR01_DADR (rwh) */
#define DMA_DADR01_DADR_POS                  _DMA_UL(0)
#define DMA_DADR01_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR01_SHADR (rwh) */
#define DMA_SHADR01_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR01_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR02_TCOUNT (rh) */
#define DMA_CHSR02_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR02_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR02_LXO (rh) */
#define DMA_CHSR02_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR02_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR02_TREL (rw) */
#define DMA_CHCR02_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR02_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR02_PRSEL (rw) */
#define DMA_CHCR02_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR02_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR02_BLKM (rw) */
#define DMA_CHCR02_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR02_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR02_RROAT (rw) */
#define DMA_CHCR02_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR02_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR02_CHMODE (rw) */
#define DMA_CHCR02_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR02_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR02_CHDW (rw) */
#define DMA_CHCR02_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR02_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR02_PATSEL (rw) */
#define DMA_CHCR02_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR02_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR02_CHPRIO (rw) */
#define DMA_CHCR02_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR02_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR02_DMAPRIO (rw) */
#define DMA_CHCR02_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR02_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR02_WRPSE (rw) */
#define DMA_CHICR02_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR02_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR02_WRPDE (rw) */
#define DMA_CHICR02_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR02_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR02_INTCT (rw) */
#define DMA_CHICR02_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR02_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR02_WRPP (rw) */
#define DMA_CHICR02_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR02_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR02_INTP (rw) */
#define DMA_CHICR02_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR02_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR02_IRDV (rw) */
#define DMA_CHICR02_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR02_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR02_SMF (rw) */
#define DMA_ADRCR02_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR02_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR02_INCS (rw) */
#define DMA_ADRCR02_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR02_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR02_DMF (rw) */
#define DMA_ADRCR02_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR02_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR02_INCD (rw) */
#define DMA_ADRCR02_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR02_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR02_CBLS (rw) */
#define DMA_ADRCR02_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR02_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR02_CBLD (rw) */
#define DMA_ADRCR02_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR02_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR02_SHCT (rw) */
#define DMA_ADRCR02_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR02_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR02_SHWEN (rw) */
#define DMA_ADRCR02_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR02_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR02_SADR (rwh) */
#define DMA_SADR02_SADR_POS                  _DMA_UL(0)
#define DMA_SADR02_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR02_DADR (rwh) */
#define DMA_DADR02_DADR_POS                  _DMA_UL(0)
#define DMA_DADR02_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR02_SHADR (rwh) */
#define DMA_SHADR02_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR02_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR03_TCOUNT (rh) */
#define DMA_CHSR03_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR03_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR03_LXO (rh) */
#define DMA_CHSR03_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR03_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR03_TREL (rw) */
#define DMA_CHCR03_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR03_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR03_PRSEL (rw) */
#define DMA_CHCR03_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR03_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR03_BLKM (rw) */
#define DMA_CHCR03_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR03_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR03_RROAT (rw) */
#define DMA_CHCR03_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR03_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR03_CHMODE (rw) */
#define DMA_CHCR03_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR03_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR03_CHDW (rw) */
#define DMA_CHCR03_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR03_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR03_PATSEL (rw) */
#define DMA_CHCR03_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR03_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR03_CHPRIO (rw) */
#define DMA_CHCR03_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR03_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR03_DMAPRIO (rw) */
#define DMA_CHCR03_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR03_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR03_WRPSE (rw) */
#define DMA_CHICR03_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR03_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR03_WRPDE (rw) */
#define DMA_CHICR03_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR03_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR03_INTCT (rw) */
#define DMA_CHICR03_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR03_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR03_WRPP (rw) */
#define DMA_CHICR03_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR03_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR03_INTP (rw) */
#define DMA_CHICR03_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR03_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR03_IRDV (rw) */
#define DMA_CHICR03_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR03_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR03_SMF (rw) */
#define DMA_ADRCR03_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR03_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR03_INCS (rw) */
#define DMA_ADRCR03_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR03_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR03_DMF (rw) */
#define DMA_ADRCR03_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR03_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR03_INCD (rw) */
#define DMA_ADRCR03_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR03_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR03_CBLS (rw) */
#define DMA_ADRCR03_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR03_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR03_CBLD (rw) */
#define DMA_ADRCR03_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR03_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR03_SHCT (rw) */
#define DMA_ADRCR03_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR03_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR03_SHWEN (rw) */
#define DMA_ADRCR03_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR03_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR03_SADR (rwh) */
#define DMA_SADR03_SADR_POS                  _DMA_UL(0)
#define DMA_SADR03_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR03_DADR (rwh) */
#define DMA_DADR03_DADR_POS                  _DMA_UL(0)
#define DMA_DADR03_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR03_SHADR (rwh) */
#define DMA_SHADR03_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR03_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR04_TCOUNT (rh) */
#define DMA_CHSR04_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR04_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR04_LXO (rh) */
#define DMA_CHSR04_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR04_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR04_TREL (rw) */
#define DMA_CHCR04_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR04_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR04_PRSEL (rw) */
#define DMA_CHCR04_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR04_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR04_BLKM (rw) */
#define DMA_CHCR04_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR04_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR04_RROAT (rw) */
#define DMA_CHCR04_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR04_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR04_CHMODE (rw) */
#define DMA_CHCR04_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR04_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR04_CHDW (rw) */
#define DMA_CHCR04_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR04_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR04_PATSEL (rw) */
#define DMA_CHCR04_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR04_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR04_CHPRIO (rw) */
#define DMA_CHCR04_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR04_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR04_DMAPRIO (rw) */
#define DMA_CHCR04_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR04_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR04_WRPSE (rw) */
#define DMA_CHICR04_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR04_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR04_WRPDE (rw) */
#define DMA_CHICR04_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR04_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR04_INTCT (rw) */
#define DMA_CHICR04_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR04_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR04_WRPP (rw) */
#define DMA_CHICR04_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR04_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR04_INTP (rw) */
#define DMA_CHICR04_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR04_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR04_IRDV (rw) */
#define DMA_CHICR04_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR04_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR04_SMF (rw) */
#define DMA_ADRCR04_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR04_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR04_INCS (rw) */
#define DMA_ADRCR04_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR04_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR04_DMF (rw) */
#define DMA_ADRCR04_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR04_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR04_INCD (rw) */
#define DMA_ADRCR04_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR04_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR04_CBLS (rw) */
#define DMA_ADRCR04_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR04_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR04_CBLD (rw) */
#define DMA_ADRCR04_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR04_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR04_SHCT (rw) */
#define DMA_ADRCR04_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR04_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR04_SHWEN (rw) */
#define DMA_ADRCR04_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR04_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR04_SADR (rwh) */
#define DMA_SADR04_SADR_POS                  _DMA_UL(0)
#define DMA_SADR04_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR04_DADR (rwh) */
#define DMA_DADR04_DADR_POS                  _DMA_UL(0)
#define DMA_DADR04_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR04_SHADR (rwh) */
#define DMA_SHADR04_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR04_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR05_TCOUNT (rh) */
#define DMA_CHSR05_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR05_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR05_LXO (rh) */
#define DMA_CHSR05_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR05_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR05_TREL (rw) */
#define DMA_CHCR05_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR05_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR05_PRSEL (rw) */
#define DMA_CHCR05_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR05_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR05_BLKM (rw) */
#define DMA_CHCR05_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR05_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR05_RROAT (rw) */
#define DMA_CHCR05_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR05_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR05_CHMODE (rw) */
#define DMA_CHCR05_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR05_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR05_CHDW (rw) */
#define DMA_CHCR05_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR05_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR05_PATSEL (rw) */
#define DMA_CHCR05_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR05_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR05_CHPRIO (rw) */
#define DMA_CHCR05_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR05_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR05_DMAPRIO (rw) */
#define DMA_CHCR05_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR05_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR05_WRPSE (rw) */
#define DMA_CHICR05_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR05_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR05_WRPDE (rw) */
#define DMA_CHICR05_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR05_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR05_INTCT (rw) */
#define DMA_CHICR05_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR05_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR05_WRPP (rw) */
#define DMA_CHICR05_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR05_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR05_INTP (rw) */
#define DMA_CHICR05_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR05_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR05_IRDV (rw) */
#define DMA_CHICR05_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR05_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR05_SMF (rw) */
#define DMA_ADRCR05_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR05_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR05_INCS (rw) */
#define DMA_ADRCR05_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR05_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR05_DMF (rw) */
#define DMA_ADRCR05_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR05_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR05_INCD (rw) */
#define DMA_ADRCR05_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR05_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR05_CBLS (rw) */
#define DMA_ADRCR05_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR05_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR05_CBLD (rw) */
#define DMA_ADRCR05_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR05_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR05_SHCT (rw) */
#define DMA_ADRCR05_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR05_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR05_SHWEN (rw) */
#define DMA_ADRCR05_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR05_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR05_SADR (rwh) */
#define DMA_SADR05_SADR_POS                  _DMA_UL(0)
#define DMA_SADR05_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR05_DADR (rwh) */
#define DMA_DADR05_DADR_POS                  _DMA_UL(0)
#define DMA_DADR05_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR05_SHADR (rwh) */
#define DMA_SHADR05_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR05_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR06_TCOUNT (rh) */
#define DMA_CHSR06_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR06_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR06_LXO (rh) */
#define DMA_CHSR06_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR06_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR06_TREL (rw) */
#define DMA_CHCR06_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR06_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR06_PRSEL (rw) */
#define DMA_CHCR06_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR06_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR06_BLKM (rw) */
#define DMA_CHCR06_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR06_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR06_RROAT (rw) */
#define DMA_CHCR06_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR06_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR06_CHMODE (rw) */
#define DMA_CHCR06_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR06_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR06_CHDW (rw) */
#define DMA_CHCR06_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR06_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR06_PATSEL (rw) */
#define DMA_CHCR06_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR06_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR06_CHPRIO (rw) */
#define DMA_CHCR06_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR06_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR06_DMAPRIO (rw) */
#define DMA_CHCR06_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR06_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR06_WRPSE (rw) */
#define DMA_CHICR06_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR06_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR06_WRPDE (rw) */
#define DMA_CHICR06_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR06_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR06_INTCT (rw) */
#define DMA_CHICR06_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR06_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR06_WRPP (rw) */
#define DMA_CHICR06_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR06_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR06_INTP (rw) */
#define DMA_CHICR06_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR06_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR06_IRDV (rw) */
#define DMA_CHICR06_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR06_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR06_SMF (rw) */
#define DMA_ADRCR06_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR06_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR06_INCS (rw) */
#define DMA_ADRCR06_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR06_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR06_DMF (rw) */
#define DMA_ADRCR06_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR06_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR06_INCD (rw) */
#define DMA_ADRCR06_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR06_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR06_CBLS (rw) */
#define DMA_ADRCR06_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR06_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR06_CBLD (rw) */
#define DMA_ADRCR06_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR06_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR06_SHCT (rw) */
#define DMA_ADRCR06_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR06_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR06_SHWEN (rw) */
#define DMA_ADRCR06_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR06_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR06_SADR (rwh) */
#define DMA_SADR06_SADR_POS                  _DMA_UL(0)
#define DMA_SADR06_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR06_DADR (rwh) */
#define DMA_DADR06_DADR_POS                  _DMA_UL(0)
#define DMA_DADR06_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR06_SHADR (rwh) */
#define DMA_SHADR06_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR06_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR07_TCOUNT (rh) */
#define DMA_CHSR07_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR07_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR07_LXO (rh) */
#define DMA_CHSR07_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR07_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR07_TREL (rw) */
#define DMA_CHCR07_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR07_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR07_PRSEL (rw) */
#define DMA_CHCR07_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR07_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR07_BLKM (rw) */
#define DMA_CHCR07_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR07_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR07_RROAT (rw) */
#define DMA_CHCR07_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR07_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR07_CHMODE (rw) */
#define DMA_CHCR07_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR07_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR07_CHDW (rw) */
#define DMA_CHCR07_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR07_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR07_PATSEL (rw) */
#define DMA_CHCR07_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR07_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR07_CHPRIO (rw) */
#define DMA_CHCR07_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR07_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR07_DMAPRIO (rw) */
#define DMA_CHCR07_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR07_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR07_WRPSE (rw) */
#define DMA_CHICR07_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR07_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR07_WRPDE (rw) */
#define DMA_CHICR07_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR07_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR07_INTCT (rw) */
#define DMA_CHICR07_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR07_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR07_WRPP (rw) */
#define DMA_CHICR07_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR07_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR07_INTP (rw) */
#define DMA_CHICR07_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR07_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR07_IRDV (rw) */
#define DMA_CHICR07_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR07_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR07_SMF (rw) */
#define DMA_ADRCR07_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR07_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR07_INCS (rw) */
#define DMA_ADRCR07_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR07_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR07_DMF (rw) */
#define DMA_ADRCR07_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR07_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR07_INCD (rw) */
#define DMA_ADRCR07_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR07_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR07_CBLS (rw) */
#define DMA_ADRCR07_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR07_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR07_CBLD (rw) */
#define DMA_ADRCR07_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR07_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR07_SHCT (rw) */
#define DMA_ADRCR07_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR07_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR07_SHWEN (rw) */
#define DMA_ADRCR07_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR07_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR07_SADR (rwh) */
#define DMA_SADR07_SADR_POS                  _DMA_UL(0)
#define DMA_SADR07_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR07_DADR (rwh) */
#define DMA_DADR07_DADR_POS                  _DMA_UL(0)
#define DMA_DADR07_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR07_SHADR (rwh) */
#define DMA_SHADR07_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR07_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR10_TCOUNT (rh) */
#define DMA_CHSR10_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR10_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR10_LXO (rh) */
#define DMA_CHSR10_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR10_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR10_TREL (rw) */
#define DMA_CHCR10_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR10_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR10_PRSEL (rw) */
#define DMA_CHCR10_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR10_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR10_BLKM (rw) */
#define DMA_CHCR10_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR10_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR10_RROAT (rw) */
#define DMA_CHCR10_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR10_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR10_CHMODE (rw) */
#define DMA_CHCR10_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR10_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR10_CHDW (rw) */
#define DMA_CHCR10_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR10_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR10_PATSEL (rw) */
#define DMA_CHCR10_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR10_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR10_CHPRIO (rw) */
#define DMA_CHCR10_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR10_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR10_DMAPRIO (rw) */
#define DMA_CHCR10_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR10_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR10_WRPSE (rw) */
#define DMA_CHICR10_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR10_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR10_WRPDE (rw) */
#define DMA_CHICR10_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR10_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR10_INTCT (rw) */
#define DMA_CHICR10_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR10_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR10_WRPP (rw) */
#define DMA_CHICR10_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR10_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR10_INTP (rw) */
#define DMA_CHICR10_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR10_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR10_IRDV (rw) */
#define DMA_CHICR10_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR10_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR10_SMF (rw) */
#define DMA_ADRCR10_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR10_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR10_INCS (rw) */
#define DMA_ADRCR10_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR10_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR10_DMF (rw) */
#define DMA_ADRCR10_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR10_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR10_INCD (rw) */
#define DMA_ADRCR10_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR10_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR10_CBLS (rw) */
#define DMA_ADRCR10_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR10_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR10_CBLD (rw) */
#define DMA_ADRCR10_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR10_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR10_SHCT (rw) */
#define DMA_ADRCR10_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR10_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR10_SHWEN (rw) */
#define DMA_ADRCR10_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR10_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR10_SADR (rwh) */
#define DMA_SADR10_SADR_POS                  _DMA_UL(0)
#define DMA_SADR10_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR10_DADR (rwh) */
#define DMA_DADR10_DADR_POS                  _DMA_UL(0)
#define DMA_DADR10_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR10_SHADR (rwh) */
#define DMA_SHADR10_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR10_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR11_TCOUNT (rh) */
#define DMA_CHSR11_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR11_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR11_LXO (rh) */
#define DMA_CHSR11_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR11_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR11_TREL (rw) */
#define DMA_CHCR11_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR11_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR11_PRSEL (rw) */
#define DMA_CHCR11_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR11_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR11_BLKM (rw) */
#define DMA_CHCR11_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR11_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR11_RROAT (rw) */
#define DMA_CHCR11_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR11_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR11_CHMODE (rw) */
#define DMA_CHCR11_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR11_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR11_CHDW (rw) */
#define DMA_CHCR11_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR11_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR11_PATSEL (rw) */
#define DMA_CHCR11_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR11_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR11_CHPRIO (rw) */
#define DMA_CHCR11_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR11_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR11_DMAPRIO (rw) */
#define DMA_CHCR11_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR11_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR11_WRPSE (rw) */
#define DMA_CHICR11_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR11_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR11_WRPDE (rw) */
#define DMA_CHICR11_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR11_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR11_INTCT (rw) */
#define DMA_CHICR11_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR11_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR11_WRPP (rw) */
#define DMA_CHICR11_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR11_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR11_INTP (rw) */
#define DMA_CHICR11_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR11_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR11_IRDV (rw) */
#define DMA_CHICR11_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR11_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR11_SMF (rw) */
#define DMA_ADRCR11_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR11_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR11_INCS (rw) */
#define DMA_ADRCR11_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR11_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR11_DMF (rw) */
#define DMA_ADRCR11_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR11_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR11_INCD (rw) */
#define DMA_ADRCR11_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR11_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR11_CBLS (rw) */
#define DMA_ADRCR11_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR11_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR11_CBLD (rw) */
#define DMA_ADRCR11_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR11_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR11_SHCT (rw) */
#define DMA_ADRCR11_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR11_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR11_SHWEN (rw) */
#define DMA_ADRCR11_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR11_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR11_SADR (rwh) */
#define DMA_SADR11_SADR_POS                  _DMA_UL(0)
#define DMA_SADR11_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR11_DADR (rwh) */
#define DMA_DADR11_DADR_POS                  _DMA_UL(0)
#define DMA_DADR11_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR11_SHADR (rwh) */
#define DMA_SHADR11_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR11_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR12_TCOUNT (rh) */
#define DMA_CHSR12_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR12_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR12_LXO (rh) */
#define DMA_CHSR12_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR12_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR12_TREL (rw) */
#define DMA_CHCR12_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR12_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR12_PRSEL (rw) */
#define DMA_CHCR12_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR12_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR12_BLKM (rw) */
#define DMA_CHCR12_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR12_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR12_RROAT (rw) */
#define DMA_CHCR12_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR12_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR12_CHMODE (rw) */
#define DMA_CHCR12_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR12_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR12_CHDW (rw) */
#define DMA_CHCR12_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR12_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR12_PATSEL (rw) */
#define DMA_CHCR12_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR12_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR12_CHPRIO (rw) */
#define DMA_CHCR12_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR12_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR12_DMAPRIO (rw) */
#define DMA_CHCR12_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR12_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR12_WRPSE (rw) */
#define DMA_CHICR12_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR12_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR12_WRPDE (rw) */
#define DMA_CHICR12_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR12_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR12_INTCT (rw) */
#define DMA_CHICR12_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR12_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR12_WRPP (rw) */
#define DMA_CHICR12_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR12_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR12_INTP (rw) */
#define DMA_CHICR12_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR12_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR12_IRDV (rw) */
#define DMA_CHICR12_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR12_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR12_SMF (rw) */
#define DMA_ADRCR12_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR12_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR12_INCS (rw) */
#define DMA_ADRCR12_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR12_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR12_DMF (rw) */
#define DMA_ADRCR12_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR12_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR12_INCD (rw) */
#define DMA_ADRCR12_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR12_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR12_CBLS (rw) */
#define DMA_ADRCR12_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR12_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR12_CBLD (rw) */
#define DMA_ADRCR12_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR12_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR12_SHCT (rw) */
#define DMA_ADRCR12_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR12_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR12_SHWEN (rw) */
#define DMA_ADRCR12_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR12_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR12_SADR (rwh) */
#define DMA_SADR12_SADR_POS                  _DMA_UL(0)
#define DMA_SADR12_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR12_DADR (rwh) */
#define DMA_DADR12_DADR_POS                  _DMA_UL(0)
#define DMA_DADR12_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR12_SHADR (rwh) */
#define DMA_SHADR12_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR12_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR13_TCOUNT (rh) */
#define DMA_CHSR13_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR13_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR13_LXO (rh) */
#define DMA_CHSR13_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR13_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR13_TREL (rw) */
#define DMA_CHCR13_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR13_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR13_PRSEL (rw) */
#define DMA_CHCR13_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR13_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR13_BLKM (rw) */
#define DMA_CHCR13_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR13_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR13_RROAT (rw) */
#define DMA_CHCR13_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR13_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR13_CHMODE (rw) */
#define DMA_CHCR13_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR13_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR13_CHDW (rw) */
#define DMA_CHCR13_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR13_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR13_PATSEL (rw) */
#define DMA_CHCR13_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR13_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR13_CHPRIO (rw) */
#define DMA_CHCR13_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR13_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR13_DMAPRIO (rw) */
#define DMA_CHCR13_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR13_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR13_WRPSE (rw) */
#define DMA_CHICR13_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR13_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR13_WRPDE (rw) */
#define DMA_CHICR13_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR13_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR13_INTCT (rw) */
#define DMA_CHICR13_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR13_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR13_WRPP (rw) */
#define DMA_CHICR13_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR13_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR13_INTP (rw) */
#define DMA_CHICR13_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR13_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR13_IRDV (rw) */
#define DMA_CHICR13_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR13_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR13_SMF (rw) */
#define DMA_ADRCR13_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR13_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR13_INCS (rw) */
#define DMA_ADRCR13_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR13_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR13_DMF (rw) */
#define DMA_ADRCR13_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR13_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR13_INCD (rw) */
#define DMA_ADRCR13_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR13_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR13_CBLS (rw) */
#define DMA_ADRCR13_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR13_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR13_CBLD (rw) */
#define DMA_ADRCR13_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR13_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR13_SHCT (rw) */
#define DMA_ADRCR13_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR13_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR13_SHWEN (rw) */
#define DMA_ADRCR13_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR13_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR13_SADR (rwh) */
#define DMA_SADR13_SADR_POS                  _DMA_UL(0)
#define DMA_SADR13_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR13_DADR (rwh) */
#define DMA_DADR13_DADR_POS                  _DMA_UL(0)
#define DMA_DADR13_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR13_SHADR (rwh) */
#define DMA_SHADR13_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR13_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR14_TCOUNT (rh) */
#define DMA_CHSR14_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR14_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR14_LXO (rh) */
#define DMA_CHSR14_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR14_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR14_TREL (rw) */
#define DMA_CHCR14_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR14_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR14_PRSEL (rw) */
#define DMA_CHCR14_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR14_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR14_BLKM (rw) */
#define DMA_CHCR14_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR14_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR14_RROAT (rw) */
#define DMA_CHCR14_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR14_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR14_CHMODE (rw) */
#define DMA_CHCR14_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR14_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR14_CHDW (rw) */
#define DMA_CHCR14_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR14_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR14_PATSEL (rw) */
#define DMA_CHCR14_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR14_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR14_CHPRIO (rw) */
#define DMA_CHCR14_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR14_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR14_DMAPRIO (rw) */
#define DMA_CHCR14_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR14_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR14_WRPSE (rw) */
#define DMA_CHICR14_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR14_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR14_WRPDE (rw) */
#define DMA_CHICR14_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR14_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR14_INTCT (rw) */
#define DMA_CHICR14_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR14_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR14_WRPP (rw) */
#define DMA_CHICR14_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR14_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR14_INTP (rw) */
#define DMA_CHICR14_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR14_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR14_IRDV (rw) */
#define DMA_CHICR14_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR14_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR14_SMF (rw) */
#define DMA_ADRCR14_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR14_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR14_INCS (rw) */
#define DMA_ADRCR14_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR14_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR14_DMF (rw) */
#define DMA_ADRCR14_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR14_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR14_INCD (rw) */
#define DMA_ADRCR14_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR14_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR14_CBLS (rw) */
#define DMA_ADRCR14_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR14_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR14_CBLD (rw) */
#define DMA_ADRCR14_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR14_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR14_SHCT (rw) */
#define DMA_ADRCR14_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR14_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR14_SHWEN (rw) */
#define DMA_ADRCR14_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR14_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR14_SADR (rwh) */
#define DMA_SADR14_SADR_POS                  _DMA_UL(0)
#define DMA_SADR14_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR14_DADR (rwh) */
#define DMA_DADR14_DADR_POS                  _DMA_UL(0)
#define DMA_DADR14_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR14_SHADR (rwh) */
#define DMA_SHADR14_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR14_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR15_TCOUNT (rh) */
#define DMA_CHSR15_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR15_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR15_LXO (rh) */
#define DMA_CHSR15_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR15_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR15_TREL (rw) */
#define DMA_CHCR15_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR15_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR15_PRSEL (rw) */
#define DMA_CHCR15_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR15_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR15_BLKM (rw) */
#define DMA_CHCR15_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR15_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR15_RROAT (rw) */
#define DMA_CHCR15_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR15_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR15_CHMODE (rw) */
#define DMA_CHCR15_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR15_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR15_CHDW (rw) */
#define DMA_CHCR15_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR15_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR15_PATSEL (rw) */
#define DMA_CHCR15_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR15_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR15_CHPRIO (rw) */
#define DMA_CHCR15_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR15_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR15_DMAPRIO (rw) */
#define DMA_CHCR15_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR15_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR15_WRPSE (rw) */
#define DMA_CHICR15_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR15_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR15_WRPDE (rw) */
#define DMA_CHICR15_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR15_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR15_INTCT (rw) */
#define DMA_CHICR15_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR15_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR15_WRPP (rw) */
#define DMA_CHICR15_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR15_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR15_INTP (rw) */
#define DMA_CHICR15_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR15_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR15_IRDV (rw) */
#define DMA_CHICR15_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR15_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR15_SMF (rw) */
#define DMA_ADRCR15_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR15_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR15_INCS (rw) */
#define DMA_ADRCR15_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR15_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR15_DMF (rw) */
#define DMA_ADRCR15_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR15_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR15_INCD (rw) */
#define DMA_ADRCR15_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR15_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR15_CBLS (rw) */
#define DMA_ADRCR15_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR15_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR15_CBLD (rw) */
#define DMA_ADRCR15_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR15_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR15_SHCT (rw) */
#define DMA_ADRCR15_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR15_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR15_SHWEN (rw) */
#define DMA_ADRCR15_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR15_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR15_SADR (rwh) */
#define DMA_SADR15_SADR_POS                  _DMA_UL(0)
#define DMA_SADR15_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR15_DADR (rwh) */
#define DMA_DADR15_DADR_POS                  _DMA_UL(0)
#define DMA_DADR15_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR15_SHADR (rwh) */
#define DMA_SHADR15_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR15_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR16_TCOUNT (rh) */
#define DMA_CHSR16_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR16_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR16_LXO (rh) */
#define DMA_CHSR16_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR16_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR16_TREL (rw) */
#define DMA_CHCR16_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR16_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR16_PRSEL (rw) */
#define DMA_CHCR16_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR16_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR16_BLKM (rw) */
#define DMA_CHCR16_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR16_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR16_RROAT (rw) */
#define DMA_CHCR16_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR16_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR16_CHMODE (rw) */
#define DMA_CHCR16_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR16_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR16_CHDW (rw) */
#define DMA_CHCR16_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR16_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR16_PATSEL (rw) */
#define DMA_CHCR16_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR16_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR16_CHPRIO (rw) */
#define DMA_CHCR16_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR16_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR16_DMAPRIO (rw) */
#define DMA_CHCR16_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR16_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR16_WRPSE (rw) */
#define DMA_CHICR16_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR16_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR16_WRPDE (rw) */
#define DMA_CHICR16_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR16_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR16_INTCT (rw) */
#define DMA_CHICR16_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR16_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR16_WRPP (rw) */
#define DMA_CHICR16_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR16_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR16_INTP (rw) */
#define DMA_CHICR16_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR16_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR16_IRDV (rw) */
#define DMA_CHICR16_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR16_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR16_SMF (rw) */
#define DMA_ADRCR16_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR16_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR16_INCS (rw) */
#define DMA_ADRCR16_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR16_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR16_DMF (rw) */
#define DMA_ADRCR16_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR16_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR16_INCD (rw) */
#define DMA_ADRCR16_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR16_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR16_CBLS (rw) */
#define DMA_ADRCR16_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR16_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR16_CBLD (rw) */
#define DMA_ADRCR16_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR16_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR16_SHCT (rw) */
#define DMA_ADRCR16_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR16_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR16_SHWEN (rw) */
#define DMA_ADRCR16_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR16_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR16_SADR (rwh) */
#define DMA_SADR16_SADR_POS                  _DMA_UL(0)
#define DMA_SADR16_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR16_DADR (rwh) */
#define DMA_DADR16_DADR_POS                  _DMA_UL(0)
#define DMA_DADR16_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR16_SHADR (rwh) */
#define DMA_SHADR16_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR16_SHADR_LEN                _DMA_UL(32)

/* DMA_CHSR17_TCOUNT (rh) */
#define DMA_CHSR17_TCOUNT_POS                _DMA_UL(0)
#define DMA_CHSR17_TCOUNT_LEN                _DMA_UL(10)

/* DMA_CHSR17_LXO (rh) */
#define DMA_CHSR17_LXO_POS                   _DMA_UL(15)
#define DMA_CHSR17_LXO_LEN                   _DMA_UL(1)

/* DMA_CHCR17_TREL (rw) */
#define DMA_CHCR17_TREL_POS                  _DMA_UL(0)
#define DMA_CHCR17_TREL_LEN                  _DMA_UL(10)

/* DMA_CHCR17_PRSEL (rw) */
#define DMA_CHCR17_PRSEL_POS                 _DMA_UL(12)
#define DMA_CHCR17_PRSEL_LEN                 _DMA_UL(4)

/* DMA_CHCR17_BLKM (rw) */
#define DMA_CHCR17_BLKM_POS                  _DMA_UL(16)
#define DMA_CHCR17_BLKM_LEN                  _DMA_UL(3)

/* DMA_CHCR17_RROAT (rw) */
#define DMA_CHCR17_RROAT_POS                 _DMA_UL(19)
#define DMA_CHCR17_RROAT_LEN                 _DMA_UL(1)

/* DMA_CHCR17_CHMODE (rw) */
#define DMA_CHCR17_CHMODE_POS                _DMA_UL(20)
#define DMA_CHCR17_CHMODE_LEN                _DMA_UL(1)

/* DMA_CHCR17_CHDW (rw) */
#define DMA_CHCR17_CHDW_POS                  _DMA_UL(21)
#define DMA_CHCR17_CHDW_LEN                  _DMA_UL(2)

/* DMA_CHCR17_PATSEL (rw) */
#define DMA_CHCR17_PATSEL_POS                _DMA_UL(24)
#define DMA_CHCR17_PATSEL_LEN                _DMA_UL(2)

/* DMA_CHCR17_CHPRIO (rw) */
#define DMA_CHCR17_CHPRIO_POS                _DMA_UL(28)
#define DMA_CHCR17_CHPRIO_LEN                _DMA_UL(1)

/* DMA_CHCR17_DMAPRIO (rw) */
#define DMA_CHCR17_DMAPRIO_POS               _DMA_UL(30)
#define DMA_CHCR17_DMAPRIO_LEN               _DMA_UL(2)

/* DMA_CHICR17_WRPSE (rw) */
#define DMA_CHICR17_WRPSE_POS                _DMA_UL(0)
#define DMA_CHICR17_WRPSE_LEN                _DMA_UL(1)

/* DMA_CHICR17_WRPDE (rw) */
#define DMA_CHICR17_WRPDE_POS                _DMA_UL(1)
#define DMA_CHICR17_WRPDE_LEN                _DMA_UL(1)

/* DMA_CHICR17_INTCT (rw) */
#define DMA_CHICR17_INTCT_POS                _DMA_UL(2)
#define DMA_CHICR17_INTCT_LEN                _DMA_UL(2)

/* DMA_CHICR17_WRPP (rw) */
#define DMA_CHICR17_WRPP_POS                 _DMA_UL(4)
#define DMA_CHICR17_WRPP_LEN                 _DMA_UL(4)

/* DMA_CHICR17_INTP (rw) */
#define DMA_CHICR17_INTP_POS                 _DMA_UL(8)
#define DMA_CHICR17_INTP_LEN                 _DMA_UL(4)

/* DMA_CHICR17_IRDV (rw) */
#define DMA_CHICR17_IRDV_POS                 _DMA_UL(12)
#define DMA_CHICR17_IRDV_LEN                 _DMA_UL(4)

/* DMA_ADRCR17_SMF (rw) */
#define DMA_ADRCR17_SMF_POS                  _DMA_UL(0)
#define DMA_ADRCR17_SMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR17_INCS (rw) */
#define DMA_ADRCR17_INCS_POS                 _DMA_UL(3)
#define DMA_ADRCR17_INCS_LEN                 _DMA_UL(1)

/* DMA_ADRCR17_DMF (rw) */
#define DMA_ADRCR17_DMF_POS                  _DMA_UL(4)
#define DMA_ADRCR17_DMF_LEN                  _DMA_UL(3)

/* DMA_ADRCR17_INCD (rw) */
#define DMA_ADRCR17_INCD_POS                 _DMA_UL(7)
#define DMA_ADRCR17_INCD_LEN                 _DMA_UL(1)

/* DMA_ADRCR17_CBLS (rw) */
#define DMA_ADRCR17_CBLS_POS                 _DMA_UL(8)
#define DMA_ADRCR17_CBLS_LEN                 _DMA_UL(4)

/* DMA_ADRCR17_CBLD (rw) */
#define DMA_ADRCR17_CBLD_POS                 _DMA_UL(12)
#define DMA_ADRCR17_CBLD_LEN                 _DMA_UL(4)

/* DMA_ADRCR17_SHCT (rw) */
#define DMA_ADRCR17_SHCT_POS                 _DMA_UL(16)
#define DMA_ADRCR17_SHCT_LEN                 _DMA_UL(2)

/* DMA_ADRCR17_SHWEN (rw) */
#define DMA_ADRCR17_SHWEN_POS                _DMA_UL(18)
#define DMA_ADRCR17_SHWEN_LEN                _DMA_UL(1)

/* DMA_SADR17_SADR (rwh) */
#define DMA_SADR17_SADR_POS                  _DMA_UL(0)
#define DMA_SADR17_SADR_LEN                  _DMA_UL(32)

/* DMA_DADR17_DADR (rwh) */
#define DMA_DADR17_DADR_POS                  _DMA_UL(0)
#define DMA_DADR17_DADR_LEN                  _DMA_UL(32)

/* DMA_SHADR17_SHADR (rwh) */
#define DMA_SHADR17_SHADR_POS                _DMA_UL(0)
#define DMA_SHADR17_SHADR_LEN                _DMA_UL(32)

/* DMA_MLI0SRC3_SRPN (rw) */
#define DMA_MLI0SRC3_SRPN_POS                _DMA_UL(0)
#define DMA_MLI0SRC3_SRPN_LEN                _DMA_UL(8)

/* DMA_MLI0SRC3_TOS (rw) */
#define DMA_MLI0SRC3_TOS_POS                 _DMA_UL(10)
#define DMA_MLI0SRC3_TOS_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC3_SRE (rw) */
#define DMA_MLI0SRC3_SRE_POS                 _DMA_UL(12)
#define DMA_MLI0SRC3_SRE_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC3_SRR (rh) */
#define DMA_MLI0SRC3_SRR_POS                 _DMA_UL(13)
#define DMA_MLI0SRC3_SRR_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC3_CLRR (w) */
#define DMA_MLI0SRC3_CLRR_POS                _DMA_UL(14)
#define DMA_MLI0SRC3_CLRR_LEN                _DMA_UL(1)

/* DMA_MLI0SRC3_SETR (w) */
#define DMA_MLI0SRC3_SETR_POS                _DMA_UL(15)
#define DMA_MLI0SRC3_SETR_LEN                _DMA_UL(1)

/* DMA_MLI0SRC2_SRPN (rw) */
#define DMA_MLI0SRC2_SRPN_POS                _DMA_UL(0)
#define DMA_MLI0SRC2_SRPN_LEN                _DMA_UL(8)

/* DMA_MLI0SRC2_TOS (rw) */
#define DMA_MLI0SRC2_TOS_POS                 _DMA_UL(10)
#define DMA_MLI0SRC2_TOS_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC2_SRE (rw) */
#define DMA_MLI0SRC2_SRE_POS                 _DMA_UL(12)
#define DMA_MLI0SRC2_SRE_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC2_SRR (rh) */
#define DMA_MLI0SRC2_SRR_POS                 _DMA_UL(13)
#define DMA_MLI0SRC2_SRR_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC2_CLRR (w) */
#define DMA_MLI0SRC2_CLRR_POS                _DMA_UL(14)
#define DMA_MLI0SRC2_CLRR_LEN                _DMA_UL(1)

/* DMA_MLI0SRC2_SETR (w) */
#define DMA_MLI0SRC2_SETR_POS                _DMA_UL(15)
#define DMA_MLI0SRC2_SETR_LEN                _DMA_UL(1)

/* DMA_MLI0SRC1_SRPN (rw) */
#define DMA_MLI0SRC1_SRPN_POS                _DMA_UL(0)
#define DMA_MLI0SRC1_SRPN_LEN                _DMA_UL(8)

/* DMA_MLI0SRC1_TOS (rw) */
#define DMA_MLI0SRC1_TOS_POS                 _DMA_UL(10)
#define DMA_MLI0SRC1_TOS_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC1_SRE (rw) */
#define DMA_MLI0SRC1_SRE_POS                 _DMA_UL(12)
#define DMA_MLI0SRC1_SRE_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC1_SRR (rh) */
#define DMA_MLI0SRC1_SRR_POS                 _DMA_UL(13)
#define DMA_MLI0SRC1_SRR_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC1_CLRR (w) */
#define DMA_MLI0SRC1_CLRR_POS                _DMA_UL(14)
#define DMA_MLI0SRC1_CLRR_LEN                _DMA_UL(1)

/* DMA_MLI0SRC1_SETR (w) */
#define DMA_MLI0SRC1_SETR_POS                _DMA_UL(15)
#define DMA_MLI0SRC1_SETR_LEN                _DMA_UL(1)

/* DMA_MLI0SRC0_SRPN (rw) */
#define DMA_MLI0SRC0_SRPN_POS                _DMA_UL(0)
#define DMA_MLI0SRC0_SRPN_LEN                _DMA_UL(8)

/* DMA_MLI0SRC0_TOS (rw) */
#define DMA_MLI0SRC0_TOS_POS                 _DMA_UL(10)
#define DMA_MLI0SRC0_TOS_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC0_SRE (rw) */
#define DMA_MLI0SRC0_SRE_POS                 _DMA_UL(12)
#define DMA_MLI0SRC0_SRE_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC0_SRR (rh) */
#define DMA_MLI0SRC0_SRR_POS                 _DMA_UL(13)
#define DMA_MLI0SRC0_SRR_LEN                 _DMA_UL(1)

/* DMA_MLI0SRC0_CLRR (w) */
#define DMA_MLI0SRC0_CLRR_POS                _DMA_UL(14)
#define DMA_MLI0SRC0_CLRR_LEN                _DMA_UL(1)

/* DMA_MLI0SRC0_SETR (w) */
#define DMA_MLI0SRC0_SETR_POS                _DMA_UL(15)
#define DMA_MLI0SRC0_SETR_LEN                _DMA_UL(1)

/* DMA_SRC7_SRPN (rw) */
#define DMA_SRC7_SRPN_POS                    _DMA_UL(0)
#define DMA_SRC7_SRPN_LEN                    _DMA_UL(8)

/* DMA_SRC7_TOS (rw) */
#define DMA_SRC7_TOS_POS                     _DMA_UL(10)
#define DMA_SRC7_TOS_LEN                     _DMA_UL(1)

/* DMA_SRC7_SRE (rw) */
#define DMA_SRC7_SRE_POS                     _DMA_UL(12)
#define DMA_SRC7_SRE_LEN                     _DMA_UL(1)

/* DMA_SRC7_SRR (rh) */
#define DMA_SRC7_SRR_POS                     _DMA_UL(13)
#define DMA_SRC7_SRR_LEN                     _DMA_UL(1)

/* DMA_SRC7_CLRR (w) */
#define DMA_SRC7_CLRR_POS                    _DMA_UL(14)
#define DMA_SRC7_CLRR_LEN                    _DMA_UL(1)

/* DMA_SRC7_SETR (w) */
#define DMA_SRC7_SETR_POS                    _DMA_UL(15)
#define DMA_SRC7_SETR_LEN                    _DMA_UL(1)

/* DMA_SRC6_SRPN (rw) */
#define DMA_SRC6_SRPN_POS                    _DMA_UL(0)
#define DMA_SRC6_SRPN_LEN                    _DMA_UL(8)

/* DMA_SRC6_TOS (rw) */
#define DMA_SRC6_TOS_POS                     _DMA_UL(10)
#define DMA_SRC6_TOS_LEN                     _DMA_UL(1)

/* DMA_SRC6_SRE (rw) */
#define DMA_SRC6_SRE_POS                     _DMA_UL(12)
#define DMA_SRC6_SRE_LEN                     _DMA_UL(1)

/* DMA_SRC6_SRR (rh) */
#define DMA_SRC6_SRR_POS                     _DMA_UL(13)
#define DMA_SRC6_SRR_LEN                     _DMA_UL(1)

/* DMA_SRC6_CLRR (w) */
#define DMA_SRC6_CLRR_POS                    _DMA_UL(14)
#define DMA_SRC6_CLRR_LEN                    _DMA_UL(1)

/* DMA_SRC6_SETR (w) */
#define DMA_SRC6_SETR_POS                    _DMA_UL(15)
#define DMA_SRC6_SETR_LEN                    _DMA_UL(1)

/* DMA_SRC5_SRPN (rw) */
#define DMA_SRC5_SRPN_POS                    _DMA_UL(0)
#define DMA_SRC5_SRPN_LEN                    _DMA_UL(8)

/* DMA_SRC5_TOS (rw) */
#define DMA_SRC5_TOS_POS                     _DMA_UL(10)
#define DMA_SRC5_TOS_LEN                     _DMA_UL(1)

/* DMA_SRC5_SRE (rw) */
#define DMA_SRC5_SRE_POS                     _DMA_UL(12)
#define DMA_SRC5_SRE_LEN                     _DMA_UL(1)

/* DMA_SRC5_SRR (rh) */
#define DMA_SRC5_SRR_POS                     _DMA_UL(13)
#define DMA_SRC5_SRR_LEN                     _DMA_UL(1)

/* DMA_SRC5_CLRR (w) */
#define DMA_SRC5_CLRR_POS                    _DMA_UL(14)
#define DMA_SRC5_CLRR_LEN                    _DMA_UL(1)

/* DMA_SRC5_SETR (w) */
#define DMA_SRC5_SETR_POS                    _DMA_UL(15)
#define DMA_SRC5_SETR_LEN                    _DMA_UL(1)

/* DMA_SRC4_SRPN (rw) */
#define DMA_SRC4_SRPN_POS                    _DMA_UL(0)
#define DMA_SRC4_SRPN_LEN                    _DMA_UL(8)

/* DMA_SRC4_TOS (rw) */
#define DMA_SRC4_TOS_POS                     _DMA_UL(10)
#define DMA_SRC4_TOS_LEN                     _DMA_UL(1)

/* DMA_SRC4_SRE (rw) */
#define DMA_SRC4_SRE_POS                     _DMA_UL(12)
#define DMA_SRC4_SRE_LEN                     _DMA_UL(1)

/* DMA_SRC4_SRR (rh) */
#define DMA_SRC4_SRR_POS                     _DMA_UL(13)
#define DMA_SRC4_SRR_LEN                     _DMA_UL(1)

/* DMA_SRC4_CLRR (w) */
#define DMA_SRC4_CLRR_POS                    _DMA_UL(14)
#define DMA_SRC4_CLRR_LEN                    _DMA_UL(1)

/* DMA_SRC4_SETR (w) */
#define DMA_SRC4_SETR_POS                    _DMA_UL(15)
#define DMA_SRC4_SETR_LEN                    _DMA_UL(1)

/* DMA_SRC3_SRPN (rw) */
#define DMA_SRC3_SRPN_POS                    _DMA_UL(0)
#define DMA_SRC3_SRPN_LEN                    _DMA_UL(8)

/* DMA_SRC3_TOS (rw) */
#define DMA_SRC3_TOS_POS                     _DMA_UL(10)
#define DMA_SRC3_TOS_LEN                     _DMA_UL(1)

/* DMA_SRC3_SRE (rw) */
#define DMA_SRC3_SRE_POS                     _DMA_UL(12)
#define DMA_SRC3_SRE_LEN                     _DMA_UL(1)

/* DMA_SRC3_SRR (rh) */
#define DMA_SRC3_SRR_POS                     _DMA_UL(13)
#define DMA_SRC3_SRR_LEN                     _DMA_UL(1)

/* DMA_SRC3_CLRR (w) */
#define DMA_SRC3_CLRR_POS                    _DMA_UL(14)
#define DMA_SRC3_CLRR_LEN                    _DMA_UL(1)

/* DMA_SRC3_SETR (w) */
#define DMA_SRC3_SETR_POS                    _DMA_UL(15)
#define DMA_SRC3_SETR_LEN                    _DMA_UL(1)

/* DMA_SRC2_SRPN (rw) */
#define DMA_SRC2_SRPN_POS                    _DMA_UL(0)
#define DMA_SRC2_SRPN_LEN                    _DMA_UL(8)

/* DMA_SRC2_TOS (rw) */
#define DMA_SRC2_TOS_POS                     _DMA_UL(10)
#define DMA_SRC2_TOS_LEN                     _DMA_UL(1)

/* DMA_SRC2_SRE (rw) */
#define DMA_SRC2_SRE_POS                     _DMA_UL(12)
#define DMA_SRC2_SRE_LEN                     _DMA_UL(1)

/* DMA_SRC2_SRR (rh) */
#define DMA_SRC2_SRR_POS                     _DMA_UL(13)
#define DMA_SRC2_SRR_LEN                     _DMA_UL(1)

/* DMA_SRC2_CLRR (w) */
#define DMA_SRC2_CLRR_POS                    _DMA_UL(14)
#define DMA_SRC2_CLRR_LEN                    _DMA_UL(1)

/* DMA_SRC2_SETR (w) */
#define DMA_SRC2_SETR_POS                    _DMA_UL(15)
#define DMA_SRC2_SETR_LEN                    _DMA_UL(1)

/* DMA_SRC1_SRPN (rw) */
#define DMA_SRC1_SRPN_POS                    _DMA_UL(0)
#define DMA_SRC1_SRPN_LEN                    _DMA_UL(8)

/* DMA_SRC1_TOS (rw) */
#define DMA_SRC1_TOS_POS                     _DMA_UL(10)
#define DMA_SRC1_TOS_LEN                     _DMA_UL(1)

/* DMA_SRC1_SRE (rw) */
#define DMA_SRC1_SRE_POS                     _DMA_UL(12)
#define DMA_SRC1_SRE_LEN                     _DMA_UL(1)

/* DMA_SRC1_SRR (rh) */
#define DMA_SRC1_SRR_POS                     _DMA_UL(13)
#define DMA_SRC1_SRR_LEN                     _DMA_UL(1)

/* DMA_SRC1_CLRR (w) */
#define DMA_SRC1_CLRR_POS                    _DMA_UL(14)
#define DMA_SRC1_CLRR_LEN                    _DMA_UL(1)

/* DMA_SRC1_SETR (w) */
#define DMA_SRC1_SETR_POS                    _DMA_UL(15)
#define DMA_SRC1_SETR_LEN                    _DMA_UL(1)

/* DMA_SRC0_SRPN (rw) */
#define DMA_SRC0_SRPN_POS                    _DMA_UL(0)
#define DMA_SRC0_SRPN_LEN                    _DMA_UL(8)

/* DMA_SRC0_TOS (rw) */
#define DMA_SRC0_TOS_POS                     _DMA_UL(10)
#define DMA_SRC0_TOS_LEN                     _DMA_UL(1)

/* DMA_SRC0_SRE (rw) */
#define DMA_SRC0_SRE_POS                     _DMA_UL(12)
#define DMA_SRC0_SRE_LEN                     _DMA_UL(1)

/* DMA_SRC0_SRR (rh) */
#define DMA_SRC0_SRR_POS                     _DMA_UL(13)
#define DMA_SRC0_SRR_LEN                     _DMA_UL(1)

/* DMA_SRC0_CLRR (w) */
#define DMA_SRC0_CLRR_POS                    _DMA_UL(14)
#define DMA_SRC0_CLRR_LEN                    _DMA_UL(1)

/* DMA_SRC0_SETR (w) */
#define DMA_SRC0_SETR_POS                    _DMA_UL(15)
#define DMA_SRC0_SETR_LEN                    _DMA_UL(1)

#endif
