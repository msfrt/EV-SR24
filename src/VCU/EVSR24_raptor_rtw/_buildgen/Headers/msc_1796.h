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
 * $Filename__:msc_1796.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:19.01.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:msc_1796$ 
 * $Variant___:1.8.0$ 
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
 * 1.8.0; 0     19.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: msc_1796.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MSC_1796_H
#define _MSC_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _MSC_UL(x) x
#else
    #define _MSC_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module MSC0 on Metis.
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0000x00] : MSC Clock Control Register
    volatile uint32 RESERVED0[1];        // [0xF0000x04...0xF0000x07] : reserved space
    volatile uint32 ID;                  // [0xF0000x08] : MSC Module Identification Register
    volatile uint32 FDR;                 // [0xF0000x0C] : MSC Fractional Divider Register
    volatile uint32 USR;                 // [0xF0000x10] : Upstream Status Register
    volatile uint32 DSC;                 // [0xF0000x14] : Downstream Control Register
    volatile uint32 DSS;                 // [0xF0000x18] : Downstream Status Register
    volatile uint32 DD;                  // [0xF0000x1C] : Downstream Data Register
    volatile uint32 DC;                  // [0xF0000x20] : Downstream Command Register
    volatile uint32 DSDSL;               // [0xF0000x24] : Downstream Select Data Source Register Low
    volatile uint32 DSDSH;               // [0xF0000x28] : Downstream Select Data Source Register High
    volatile uint32 ESR;                 // [0xF0000x2C] : MSC Emergency Stop Register
    volatile uint32 UD[4];               // [0xF0000x30] : Upstream Data Registers
    volatile uint32 ICR;                 // [0xF0000x40] : MSC Interrupt Control Register
    volatile uint32 ISR;                 // [0xF0000x44] : MSC Interrupt Status Register
    volatile uint32 ISC;                 // [0xF0000x48] : Interrupt Set Clear Register
    volatile uint32 OCR;                 // [0xF0000x4C] : Output Control Register
    volatile uint32 RESERVED1[42];       // [0xF0000x50...0xF0000xF7] : reserved space
    volatile uint32 SRC1;                // [0xF0000xF8] : MSC Service Request Control Register 1
    volatile uint32 SRC0;                // [0xF0000xFC] : MSC Service Request Control Register 0
} MSC_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern MSC_RegMap_t MSC0 __attribute__ ((asection (".zbss.label_only","f=awz")));
extern MSC_RegMap_t MSC1 __attribute__ ((asection (".zbss.label_only","f=awz")));
extern MSC_RegMap_t MSC[2] __attribute__ ((asection (".zbss.label_only","f=awz")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/

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

/* MSC_CLC_DISR (rw) */
#define MSC_CLC_DISR_POS               _MSC_UL(0)
#define MSC_CLC_DISR_LEN               _MSC_UL(1)

/* MSC_CLC_DISS (r) */
#define MSC_CLC_DISS_POS               _MSC_UL(1)
#define MSC_CLC_DISS_LEN               _MSC_UL(1)

/* MSC_CLC_EDIS (rw) */
#define MSC_CLC_EDIS_POS               _MSC_UL(3)
#define MSC_CLC_EDIS_LEN               _MSC_UL(1)

/* MSC_CLC_FSOE (rw) */
#define MSC_CLC_FSOE_POS               _MSC_UL(5)
#define MSC_CLC_FSOE_LEN               _MSC_UL(1)

/* MSC_CLC_SBWE (w) */
#define MSC_CLC_SBWE_POS               _MSC_UL(4)
#define MSC_CLC_SBWE_LEN               _MSC_UL(1)

/* MSC_CLC_SPEN (rw) */
#define MSC_CLC_SPEN_POS               _MSC_UL(2)
#define MSC_CLC_SPEN_LEN               _MSC_UL(1)

/* MSC_DC_CMD (rw) */
#define MSC_DC_CMD_POS                 _MSC_UL(0)
#define MSC_DC_CMD_LEN                 _MSC_UL(32)

/* MSC_DD_DATA (rw) */
#define MSC_DD_DATA_POS                _MSC_UL(0)
#define MSC_DD_DATA_LEN                _MSC_UL(32)

/* MSC_DSC_CP (rh) */
#define MSC_DSC_CP_POS                 _MSC_UL(1)
#define MSC_DSC_CP_LEN                 _MSC_UL(1)

/* MSC_DSC_DP (rh) */
#define MSC_DSC_DP_POS                 _MSC_UL(2)
#define MSC_DSC_DP_LEN                 _MSC_UL(1)

/* MSC_DSC_DSDIS (rh) */
#define MSC_DSC_DSDIS_POS              _MSC_UL(15)
#define MSC_DSC_DSDIS_LEN              _MSC_UL(1)

/* MSC_DSC_ENSELH (rw) */
#define MSC_DSC_ENSELH_POS             _MSC_UL(14)
#define MSC_DSC_ENSELH_LEN             _MSC_UL(1)

/* MSC_DSC_ENSELL (rw) */
#define MSC_DSC_ENSELL_POS             _MSC_UL(13)
#define MSC_DSC_ENSELL_LEN             _MSC_UL(1)

/* MSC_DSC_NBC (rw) */
#define MSC_DSC_NBC_POS                _MSC_UL(16)
#define MSC_DSC_NBC_LEN                _MSC_UL(6)

/* MSC_DSC_NDBH (rw) */
#define MSC_DSC_NDBH_POS               _MSC_UL(8)
#define MSC_DSC_NDBH_LEN               _MSC_UL(5)

/* MSC_DSC_NDBL (rw) */
#define MSC_DSC_NDBL_POS               _MSC_UL(3)
#define MSC_DSC_NDBL_LEN               _MSC_UL(5)

/* MSC_DSC_PPD (rw) */
#define MSC_DSC_PPD_POS                _MSC_UL(24)
#define MSC_DSC_PPD_LEN                _MSC_UL(5)

/* MSC_DSC_TM (rw) */
#define MSC_DSC_TM_POS                 _MSC_UL(0)
#define MSC_DSC_TM_LEN                 _MSC_UL(1)

/* MSC_DSDSH_SH0 (rw) */
#define MSC_DSDSH_SH0_POS              _MSC_UL(0)
#define MSC_DSDSH_SH0_LEN              _MSC_UL(2)

/* MSC_DSDSH_SH1 (rw) */
#define MSC_DSDSH_SH1_POS              _MSC_UL(2)
#define MSC_DSDSH_SH1_LEN              _MSC_UL(2)

/* MSC_DSDSH_SH10 (rw) */
#define MSC_DSDSH_SH10_POS             _MSC_UL(20)
#define MSC_DSDSH_SH10_LEN             _MSC_UL(2)

/* MSC_DSDSH_SH11 (rw) */
#define MSC_DSDSH_SH11_POS             _MSC_UL(22)
#define MSC_DSDSH_SH11_LEN             _MSC_UL(2)

/* MSC_DSDSH_SH12 (rw) */
#define MSC_DSDSH_SH12_POS             _MSC_UL(24)
#define MSC_DSDSH_SH12_LEN             _MSC_UL(2)

/* MSC_DSDSH_SH13 (rw) */
#define MSC_DSDSH_SH13_POS             _MSC_UL(26)
#define MSC_DSDSH_SH13_LEN             _MSC_UL(2)

/* MSC_DSDSH_SH14 (rw) */
#define MSC_DSDSH_SH14_POS             _MSC_UL(28)
#define MSC_DSDSH_SH14_LEN             _MSC_UL(2)

/* MSC_DSDSH_SH15 (rw) */
#define MSC_DSDSH_SH15_POS             _MSC_UL(30)
#define MSC_DSDSH_SH15_LEN             _MSC_UL(2)

/* MSC_DSDSH_SH2 (rw) */
#define MSC_DSDSH_SH2_POS              _MSC_UL(4)
#define MSC_DSDSH_SH2_LEN              _MSC_UL(2)

/* MSC_DSDSH_SH3 (rw) */
#define MSC_DSDSH_SH3_POS              _MSC_UL(6)
#define MSC_DSDSH_SH3_LEN              _MSC_UL(2)

/* MSC_DSDSH_SH4 (rw) */
#define MSC_DSDSH_SH4_POS              _MSC_UL(8)
#define MSC_DSDSH_SH4_LEN              _MSC_UL(2)

/* MSC_DSDSH_SH5 (rw) */
#define MSC_DSDSH_SH5_POS              _MSC_UL(10)
#define MSC_DSDSH_SH5_LEN              _MSC_UL(2)

/* MSC_DSDSH_SH6 (rw) */
#define MSC_DSDSH_SH6_POS              _MSC_UL(12)
#define MSC_DSDSH_SH6_LEN              _MSC_UL(2)

/* MSC_DSDSH_SH7 (rw) */
#define MSC_DSDSH_SH7_POS              _MSC_UL(14)
#define MSC_DSDSH_SH7_LEN              _MSC_UL(2)

/* MSC_DSDSH_SH8 (rw) */
#define MSC_DSDSH_SH8_POS              _MSC_UL(16)
#define MSC_DSDSH_SH8_LEN              _MSC_UL(2)

/* MSC_DSDSH_SH9 (rw) */
#define MSC_DSDSH_SH9_POS              _MSC_UL(18)
#define MSC_DSDSH_SH9_LEN              _MSC_UL(2)

/* MSC_DSDSL_SL0 (rw) */
#define MSC_DSDSL_SL0_POS              _MSC_UL(0)
#define MSC_DSDSL_SL0_LEN              _MSC_UL(2)

/* MSC_DSDSL_SL1 (rw) */
#define MSC_DSDSL_SL1_POS              _MSC_UL(2)
#define MSC_DSDSL_SL1_LEN              _MSC_UL(2)

/* MSC_DSDSL_SL10 (rw) */
#define MSC_DSDSL_SL10_POS             _MSC_UL(20)
#define MSC_DSDSL_SL10_LEN             _MSC_UL(2)

/* MSC_DSDSL_SL11 (rw) */
#define MSC_DSDSL_SL11_POS             _MSC_UL(22)
#define MSC_DSDSL_SL11_LEN             _MSC_UL(2)

/* MSC_DSDSL_SL12 (rw) */
#define MSC_DSDSL_SL12_POS             _MSC_UL(24)
#define MSC_DSDSL_SL12_LEN             _MSC_UL(2)

/* MSC_DSDSL_SL13 (rw) */
#define MSC_DSDSL_SL13_POS             _MSC_UL(26)
#define MSC_DSDSL_SL13_LEN             _MSC_UL(2)

/* MSC_DSDSL_SL14 (rw) */
#define MSC_DSDSL_SL14_POS             _MSC_UL(28)
#define MSC_DSDSL_SL14_LEN             _MSC_UL(2)

/* MSC_DSDSL_SL15 (rw) */
#define MSC_DSDSL_SL15_POS             _MSC_UL(30)
#define MSC_DSDSL_SL15_LEN             _MSC_UL(2)

/* MSC_DSDSL_SL2 (rw) */
#define MSC_DSDSL_SL2_POS              _MSC_UL(4)
#define MSC_DSDSL_SL2_LEN              _MSC_UL(2)

/* MSC_DSDSL_SL3 (rw) */
#define MSC_DSDSL_SL3_POS              _MSC_UL(6)
#define MSC_DSDSL_SL3_LEN              _MSC_UL(2)

/* MSC_DSDSL_SL4 (rw) */
#define MSC_DSDSL_SL4_POS              _MSC_UL(8)
#define MSC_DSDSL_SL4_LEN              _MSC_UL(2)

/* MSC_DSDSL_SL5 (rw) */
#define MSC_DSDSL_SL5_POS              _MSC_UL(10)
#define MSC_DSDSL_SL5_LEN              _MSC_UL(2)

/* MSC_DSDSL_SL6 (rw) */
#define MSC_DSDSL_SL6_POS              _MSC_UL(12)
#define MSC_DSDSL_SL6_LEN              _MSC_UL(2)

/* MSC_DSDSL_SL7 (rw) */
#define MSC_DSDSL_SL7_POS              _MSC_UL(14)
#define MSC_DSDSL_SL7_LEN              _MSC_UL(2)

/* MSC_DSDSL_SL8 (rw) */
#define MSC_DSDSL_SL8_POS              _MSC_UL(16)
#define MSC_DSDSL_SL8_LEN              _MSC_UL(2)

/* MSC_DSDSL_SL9 (rw) */
#define MSC_DSDSL_SL9_POS              _MSC_UL(18)
#define MSC_DSDSL_SL9_LEN              _MSC_UL(2)

/* MSC_DSS_CFA (rh) */
#define MSC_DSS_CFA_POS                _MSC_UL(25)
#define MSC_DSS_CFA_LEN                _MSC_UL(1)

/* MSC_DSS_DC (rh) */
#define MSC_DSS_DC_POS                 _MSC_UL(16)
#define MSC_DSS_DC_LEN                 _MSC_UL(7)

/* MSC_DSS_DFA (rh) */
#define MSC_DSS_DFA_POS                _MSC_UL(24)
#define MSC_DSS_DFA_LEN                _MSC_UL(1)

/* MSC_DSS_NPTF (rw) */
#define MSC_DSS_NPTF_POS               _MSC_UL(8)
#define MSC_DSS_NPTF_LEN               _MSC_UL(4)

/* MSC_DSS_PFC (rh) */
#define MSC_DSS_PFC_POS                _MSC_UL(0)
#define MSC_DSS_PFC_LEN                _MSC_UL(4)

/* MSC_ESR_ENH0 (rw) */
#define MSC_ESR_ENH0_POS               _MSC_UL(16)
#define MSC_ESR_ENH0_LEN               _MSC_UL(1)

/* MSC_ESR_ENH1 (rw) */
#define MSC_ESR_ENH1_POS               _MSC_UL(17)
#define MSC_ESR_ENH1_LEN               _MSC_UL(1)

/* MSC_ESR_ENH10 (rw) */
#define MSC_ESR_ENH10_POS              _MSC_UL(26)
#define MSC_ESR_ENH10_LEN              _MSC_UL(1)

/* MSC_ESR_ENH11 (rw) */
#define MSC_ESR_ENH11_POS              _MSC_UL(27)
#define MSC_ESR_ENH11_LEN              _MSC_UL(1)

/* MSC_ESR_ENH12 (rw) */
#define MSC_ESR_ENH12_POS              _MSC_UL(28)
#define MSC_ESR_ENH12_LEN              _MSC_UL(1)

/* MSC_ESR_ENH13 (rw) */
#define MSC_ESR_ENH13_POS              _MSC_UL(29)
#define MSC_ESR_ENH13_LEN              _MSC_UL(1)

/* MSC_ESR_ENH14 (rw) */
#define MSC_ESR_ENH14_POS              _MSC_UL(30)
#define MSC_ESR_ENH14_LEN              _MSC_UL(1)

/* MSC_ESR_ENH15 (rw) */
#define MSC_ESR_ENH15_POS              _MSC_UL(31)
#define MSC_ESR_ENH15_LEN              _MSC_UL(1)

/* MSC_ESR_ENH2 (rw) */
#define MSC_ESR_ENH2_POS               _MSC_UL(18)
#define MSC_ESR_ENH2_LEN               _MSC_UL(1)

/* MSC_ESR_ENH3 (rw) */
#define MSC_ESR_ENH3_POS               _MSC_UL(19)
#define MSC_ESR_ENH3_LEN               _MSC_UL(1)

/* MSC_ESR_ENH4 (rw) */
#define MSC_ESR_ENH4_POS               _MSC_UL(20)
#define MSC_ESR_ENH4_LEN               _MSC_UL(1)

/* MSC_ESR_ENH5 (rw) */
#define MSC_ESR_ENH5_POS               _MSC_UL(21)
#define MSC_ESR_ENH5_LEN               _MSC_UL(1)

/* MSC_ESR_ENH6 (rw) */
#define MSC_ESR_ENH6_POS               _MSC_UL(22)
#define MSC_ESR_ENH6_LEN               _MSC_UL(1)

/* MSC_ESR_ENH7 (rw) */
#define MSC_ESR_ENH7_POS               _MSC_UL(23)
#define MSC_ESR_ENH7_LEN               _MSC_UL(1)

/* MSC_ESR_ENH8 (rw) */
#define MSC_ESR_ENH8_POS               _MSC_UL(24)
#define MSC_ESR_ENH8_LEN               _MSC_UL(1)

/* MSC_ESR_ENH9 (rw) */
#define MSC_ESR_ENH9_POS               _MSC_UL(25)
#define MSC_ESR_ENH9_LEN               _MSC_UL(1)

/* MSC_ESR_ENL0 (rw) */
#define MSC_ESR_ENL0_POS               _MSC_UL(0)
#define MSC_ESR_ENL0_LEN               _MSC_UL(1)

/* MSC_ESR_ENL1 (rw) */
#define MSC_ESR_ENL1_POS               _MSC_UL(1)
#define MSC_ESR_ENL1_LEN               _MSC_UL(1)

/* MSC_ESR_ENL10 (rw) */
#define MSC_ESR_ENL10_POS              _MSC_UL(10)
#define MSC_ESR_ENL10_LEN              _MSC_UL(1)

/* MSC_ESR_ENL11 (rw) */
#define MSC_ESR_ENL11_POS              _MSC_UL(11)
#define MSC_ESR_ENL11_LEN              _MSC_UL(1)

/* MSC_ESR_ENL12 (rw) */
#define MSC_ESR_ENL12_POS              _MSC_UL(12)
#define MSC_ESR_ENL12_LEN              _MSC_UL(1)

/* MSC_ESR_ENL13 (rw) */
#define MSC_ESR_ENL13_POS              _MSC_UL(13)
#define MSC_ESR_ENL13_LEN              _MSC_UL(1)

/* MSC_ESR_ENL14 (rw) */
#define MSC_ESR_ENL14_POS              _MSC_UL(14)
#define MSC_ESR_ENL14_LEN              _MSC_UL(1)

/* MSC_ESR_ENL15 (rw) */
#define MSC_ESR_ENL15_POS              _MSC_UL(15)
#define MSC_ESR_ENL15_LEN              _MSC_UL(1)

/* MSC_ESR_ENL2 (rw) */
#define MSC_ESR_ENL2_POS               _MSC_UL(2)
#define MSC_ESR_ENL2_LEN               _MSC_UL(1)

/* MSC_ESR_ENL3 (rw) */
#define MSC_ESR_ENL3_POS               _MSC_UL(3)
#define MSC_ESR_ENL3_LEN               _MSC_UL(1)

/* MSC_ESR_ENL4 (rw) */
#define MSC_ESR_ENL4_POS               _MSC_UL(4)
#define MSC_ESR_ENL4_LEN               _MSC_UL(1)

/* MSC_ESR_ENL5 (rw) */
#define MSC_ESR_ENL5_POS               _MSC_UL(5)
#define MSC_ESR_ENL5_LEN               _MSC_UL(1)

/* MSC_ESR_ENL6 (rw) */
#define MSC_ESR_ENL6_POS               _MSC_UL(6)
#define MSC_ESR_ENL6_LEN               _MSC_UL(1)

/* MSC_ESR_ENL7 (rw) */
#define MSC_ESR_ENL7_POS               _MSC_UL(7)
#define MSC_ESR_ENL7_LEN               _MSC_UL(1)

/* MSC_ESR_ENL8 (rw) */
#define MSC_ESR_ENL8_POS               _MSC_UL(8)
#define MSC_ESR_ENL8_LEN               _MSC_UL(1)

/* MSC_ESR_ENL9 (rw) */
#define MSC_ESR_ENL9_POS               _MSC_UL(9)
#define MSC_ESR_ENL9_LEN               _MSC_UL(1)

/* MSC_FDR_DISCLK (rwh) */
#define MSC_FDR_DISCLK_POS             _MSC_UL(31)
#define MSC_FDR_DISCLK_LEN             _MSC_UL(1)

/* MSC_FDR_DM (rw) */
#define MSC_FDR_DM_POS                 _MSC_UL(14)
#define MSC_FDR_DM_LEN                 _MSC_UL(2)

/* MSC_FDR_ENHW (rw) */
#define MSC_FDR_ENHW_POS               _MSC_UL(30)
#define MSC_FDR_ENHW_LEN               _MSC_UL(1)

/* MSC_FDR_RESULT (rh) */
#define MSC_FDR_RESULT_POS             _MSC_UL(16)
#define MSC_FDR_RESULT_LEN             _MSC_UL(10)

/* MSC_FDR_SC (rw) */
#define MSC_FDR_SC_POS                 _MSC_UL(12)
#define MSC_FDR_SC_LEN                 _MSC_UL(2)

/* MSC_FDR_STEP (rw) */
#define MSC_FDR_STEP_POS               _MSC_UL(0)
#define MSC_FDR_STEP_LEN               _MSC_UL(10)

/* MSC_FDR_SUSACK (rh) */
#define MSC_FDR_SUSACK_POS             _MSC_UL(28)
#define MSC_FDR_SUSACK_LEN             _MSC_UL(1)

/* MSC_FDR_SUSREQ (rh) */
#define MSC_FDR_SUSREQ_POS             _MSC_UL(29)
#define MSC_FDR_SUSREQ_LEN             _MSC_UL(1)

/* MSC_ICR_ECIE (rw) */
#define MSC_ICR_ECIE_POS               _MSC_UL(7)
#define MSC_ICR_ECIE_LEN               _MSC_UL(1)

/* MSC_ICR_ECIP (rw) */
#define MSC_ICR_ECIP_POS               _MSC_UL(4)
#define MSC_ICR_ECIP_LEN               _MSC_UL(2)

/* MSC_ICR_EDIE (rw) */
#define MSC_ICR_EDIE_POS               _MSC_UL(2)
#define MSC_ICR_EDIE_LEN               _MSC_UL(2)

/* MSC_ICR_EDIP (rw) */
#define MSC_ICR_EDIP_POS               _MSC_UL(0)
#define MSC_ICR_EDIP_LEN               _MSC_UL(2)

/* MSC_ICR_RDIE (rw) */
#define MSC_ICR_RDIE_POS               _MSC_UL(14)
#define MSC_ICR_RDIE_LEN               _MSC_UL(2)

/* MSC_ICR_RDIP (rw) */
#define MSC_ICR_RDIP_POS               _MSC_UL(12)
#define MSC_ICR_RDIP_LEN               _MSC_UL(2)

/* MSC_ICR_TFIE (rw) */
#define MSC_ICR_TFIE_POS               _MSC_UL(11)
#define MSC_ICR_TFIE_LEN               _MSC_UL(1)

/* MSC_ICR_TFIP (rw) */
#define MSC_ICR_TFIP_POS               _MSC_UL(8)
#define MSC_ICR_TFIP_LEN               _MSC_UL(2)

/* MSC_ID_MOD_NUMBER (r) */
#define MSC_ID_MOD_NUMBER_POS          _MSC_UL(16)
#define MSC_ID_MOD_NUMBER_LEN          _MSC_UL(16)

/* MSC_ID_MOD_REV (r) */
#define MSC_ID_MOD_REV_POS             _MSC_UL(0)
#define MSC_ID_MOD_REV_LEN             _MSC_UL(8)

/* MSC_ID_MOD_TYPE (r) */
#define MSC_ID_MOD_TYPE_POS            _MSC_UL(8)
#define MSC_ID_MOD_TYPE_LEN            _MSC_UL(8)

/* MSC_ISC_CDECI (w) */
#define MSC_ISC_CDECI_POS              _MSC_UL(1)
#define MSC_ISC_CDECI_LEN              _MSC_UL(1)

/* MSC_ISC_CDEDI (w) */
#define MSC_ISC_CDEDI_POS              _MSC_UL(0)
#define MSC_ISC_CDEDI_LEN              _MSC_UL(1)

/* MSC_ISC_CDTFI (w) */
#define MSC_ISC_CDTFI_POS              _MSC_UL(2)
#define MSC_ISC_CDTFI_LEN              _MSC_UL(1)

/* MSC_ISC_CURDI (w) */
#define MSC_ISC_CURDI_POS              _MSC_UL(3)
#define MSC_ISC_CURDI_LEN              _MSC_UL(1)

/* MSC_ISC_SDECI (w) */
#define MSC_ISC_SDECI_POS              _MSC_UL(17)
#define MSC_ISC_SDECI_LEN              _MSC_UL(1)

/* MSC_ISC_SDEDI (w) */
#define MSC_ISC_SDEDI_POS              _MSC_UL(16)
#define MSC_ISC_SDEDI_LEN              _MSC_UL(1)

/* MSC_ISC_SDP (w) */
#define MSC_ISC_SDP_POS                _MSC_UL(20)
#define MSC_ISC_SDP_LEN                _MSC_UL(1)

/* MSC_ISC_SDTFI (w) */
#define MSC_ISC_SDTFI_POS              _MSC_UL(18)
#define MSC_ISC_SDTFI_LEN              _MSC_UL(1)

/* MSC_ISC_SURDI (w) */
#define MSC_ISC_SURDI_POS              _MSC_UL(19)
#define MSC_ISC_SURDI_LEN              _MSC_UL(1)

/* MSC_ISR_DECI (rh) */
#define MSC_ISR_DECI_POS               _MSC_UL(1)
#define MSC_ISR_DECI_LEN               _MSC_UL(1)

/* MSC_ISR_DEDI (rh) */
#define MSC_ISR_DEDI_POS               _MSC_UL(0)
#define MSC_ISR_DEDI_LEN               _MSC_UL(1)

/* MSC_ISR_DTFI (rh) */
#define MSC_ISR_DTFI_POS               _MSC_UL(2)
#define MSC_ISR_DTFI_LEN               _MSC_UL(1)

/* MSC_ISR_URDI (rh) */
#define MSC_ISR_URDI_POS               _MSC_UL(3)
#define MSC_ISR_URDI_LEN               _MSC_UL(1)

/* MSC_OCR_CLKCTRL (rw) */
#define MSC_OCR_CLKCTRL_POS            _MSC_UL(8)
#define MSC_OCR_CLKCTRL_LEN            _MSC_UL(1)

/* MSC_OCR_CLP (rw) */
#define MSC_OCR_CLP_POS                _MSC_UL(0)
#define MSC_OCR_CLP_LEN                _MSC_UL(1)

/* MSC_OCR_CSC (rw) */
#define MSC_OCR_CSC_POS                _MSC_UL(13)
#define MSC_OCR_CSC_LEN                _MSC_UL(2)

/* MSC_OCR_CSH (rw) */
#define MSC_OCR_CSH_POS                _MSC_UL(11)
#define MSC_OCR_CSH_LEN                _MSC_UL(2)

/* MSC_OCR_CSL (rw) */
#define MSC_OCR_CSL_POS                _MSC_UL(9)
#define MSC_OCR_CSL_LEN                _MSC_UL(2)

/* MSC_OCR_CSLP (rw) */
#define MSC_OCR_CSLP_POS               _MSC_UL(2)
#define MSC_OCR_CSLP_LEN               _MSC_UL(1)

/* MSC_OCR_ILP (rw) */
#define MSC_OCR_ILP_POS                _MSC_UL(3)
#define MSC_OCR_ILP_LEN                _MSC_UL(1)

/* MSC_OCR_SLP (rw) */
#define MSC_OCR_SLP_POS                _MSC_UL(1)
#define MSC_OCR_SLP_LEN                _MSC_UL(1)

/* MSC_SRC0_CLRR (w) */
#define MSC_SRC0_CLRR_POS              _MSC_UL(14)
#define MSC_SRC0_CLRR_LEN              _MSC_UL(1)

/* MSC_SRC0_SETR (w) */
#define MSC_SRC0_SETR_POS              _MSC_UL(15)
#define MSC_SRC0_SETR_LEN              _MSC_UL(1)

/* MSC_SRC0_SRE (rw) */
#define MSC_SRC0_SRE_POS               _MSC_UL(12)
#define MSC_SRC0_SRE_LEN               _MSC_UL(1)

/* MSC_SRC0_SRPN (rw) */
#define MSC_SRC0_SRPN_POS              _MSC_UL(0)
#define MSC_SRC0_SRPN_LEN              _MSC_UL(8)

/* MSC_SRC0_SRR (rh) */
#define MSC_SRC0_SRR_POS               _MSC_UL(13)
#define MSC_SRC0_SRR_LEN               _MSC_UL(1)

/* MSC_SRC0_TOS (rw) */
#define MSC_SRC0_TOS_POS               _MSC_UL(10)
#define MSC_SRC0_TOS_LEN               _MSC_UL(1)

/* MSC_SRC1_CLRR (w) */
#define MSC_SRC1_CLRR_POS              _MSC_UL(14)
#define MSC_SRC1_CLRR_LEN              _MSC_UL(1)

/* MSC_SRC1_SETR (w) */
#define MSC_SRC1_SETR_POS              _MSC_UL(15)
#define MSC_SRC1_SETR_LEN              _MSC_UL(1)

/* MSC_SRC1_SRE (rw) */
#define MSC_SRC1_SRE_POS               _MSC_UL(12)
#define MSC_SRC1_SRE_LEN               _MSC_UL(1)

/* MSC_SRC1_SRPN (rw) */
#define MSC_SRC1_SRPN_POS              _MSC_UL(0)
#define MSC_SRC1_SRPN_LEN              _MSC_UL(8)

/* MSC_SRC1_SRR (rh) */
#define MSC_SRC1_SRR_POS               _MSC_UL(13)
#define MSC_SRC1_SRR_LEN               _MSC_UL(1)

/* MSC_SRC1_TOS (rw) */
#define MSC_SRC1_TOS_POS               _MSC_UL(10)
#define MSC_SRC1_TOS_LEN               _MSC_UL(1)

/* MSC_UD_C (w) */
#define MSC_UD_C_POS                   _MSC_UL(18)
#define MSC_UD_C_LEN                   _MSC_UL(1)

/* MSC_UD_DATA (rh) */
#define MSC_UD_DATA_POS                _MSC_UL(0)
#define MSC_UD_DATA_LEN                _MSC_UL(8)

/* MSC_UD_IPF (rh) */
#define MSC_UD_IPF_POS                 _MSC_UL(21)
#define MSC_UD_IPF_LEN                 _MSC_UL(1)

/* MSC_UD_LABF (rh) */
#define MSC_UD_LABF_POS                _MSC_UL(19)
#define MSC_UD_LABF_LEN                _MSC_UL(2)

/* MSC_UD_P (rh) */
#define MSC_UD_P_POS                   _MSC_UL(17)
#define MSC_UD_P_LEN                   _MSC_UL(1)

/* MSC_UD_PERR (rh) */
#define MSC_UD_PERR_POS                _MSC_UL(22)
#define MSC_UD_PERR_LEN                _MSC_UL(1)

/* MSC_UD_V (rh) */
#define MSC_UD_V_POS                   _MSC_UL(16)
#define MSC_UD_V_LEN                   _MSC_UL(1)

/* MSC_USR_PCTR (rw) */
#define MSC_USR_PCTR_POS               _MSC_UL(4)
#define MSC_USR_PCTR_LEN               _MSC_UL(1)

/* MSC_USR_UC (rh) */
#define MSC_USR_UC_POS                 _MSC_UL(16)
#define MSC_USR_UC_LEN                 _MSC_UL(5)

/* MSC_USR_UFT (rw) */
#define MSC_USR_UFT_POS                _MSC_UL(0)
#define MSC_USR_UFT_LEN                _MSC_UL(1)

/* MSC_USR_URR (rw) */
#define MSC_USR_URR_POS                _MSC_UL(1)
#define MSC_USR_URR_LEN                _MSC_UL(3)

/* MSC0_CLC_DISR (rw) */
#define MSC0_CLC_DISR_POS              _MSC_UL(0)
#define MSC0_CLC_DISR_LEN              _MSC_UL(1)

/* MSC0_CLC_DISS (r) */
#define MSC0_CLC_DISS_POS              _MSC_UL(1)
#define MSC0_CLC_DISS_LEN              _MSC_UL(1)

/* MSC0_CLC_EDIS (rw) */
#define MSC0_CLC_EDIS_POS              _MSC_UL(3)
#define MSC0_CLC_EDIS_LEN              _MSC_UL(1)

/* MSC0_CLC_FSOE (rw) */
#define MSC0_CLC_FSOE_POS              _MSC_UL(5)
#define MSC0_CLC_FSOE_LEN              _MSC_UL(1)

/* MSC0_CLC_SBWE (w) */
#define MSC0_CLC_SBWE_POS              _MSC_UL(4)
#define MSC0_CLC_SBWE_LEN              _MSC_UL(1)

/* MSC0_CLC_SPEN (rw) */
#define MSC0_CLC_SPEN_POS              _MSC_UL(2)
#define MSC0_CLC_SPEN_LEN              _MSC_UL(1)

/* MSC0_DC_CMD (rw) */
#define MSC0_DC_CMD_POS                _MSC_UL(0)
#define MSC0_DC_CMD_LEN                _MSC_UL(32)

/* MSC0_DD_DATA (rw) */
#define MSC0_DD_DATA_POS               _MSC_UL(0)
#define MSC0_DD_DATA_LEN               _MSC_UL(32)

/* MSC0_DSC_CP (rh) */
#define MSC0_DSC_CP_POS                _MSC_UL(1)
#define MSC0_DSC_CP_LEN                _MSC_UL(1)

/* MSC0_DSC_DP (rh) */
#define MSC0_DSC_DP_POS                _MSC_UL(2)
#define MSC0_DSC_DP_LEN                _MSC_UL(1)

/* MSC0_DSC_DSDIS (rh) */
#define MSC0_DSC_DSDIS_POS             _MSC_UL(15)
#define MSC0_DSC_DSDIS_LEN             _MSC_UL(1)

/* MSC0_DSC_ENSELH (rw) */
#define MSC0_DSC_ENSELH_POS            _MSC_UL(14)
#define MSC0_DSC_ENSELH_LEN            _MSC_UL(1)

/* MSC0_DSC_ENSELL (rw) */
#define MSC0_DSC_ENSELL_POS            _MSC_UL(13)
#define MSC0_DSC_ENSELL_LEN            _MSC_UL(1)

/* MSC0_DSC_NBC (rw) */
#define MSC0_DSC_NBC_POS               _MSC_UL(16)
#define MSC0_DSC_NBC_LEN               _MSC_UL(6)

/* MSC0_DSC_NDBH (rw) */
#define MSC0_DSC_NDBH_POS              _MSC_UL(8)
#define MSC0_DSC_NDBH_LEN              _MSC_UL(5)

/* MSC0_DSC_NDBL (rw) */
#define MSC0_DSC_NDBL_POS              _MSC_UL(3)
#define MSC0_DSC_NDBL_LEN              _MSC_UL(5)

/* MSC0_DSC_PPD (rw) */
#define MSC0_DSC_PPD_POS               _MSC_UL(24)
#define MSC0_DSC_PPD_LEN               _MSC_UL(5)

/* MSC0_DSC_TM (rw) */
#define MSC0_DSC_TM_POS                _MSC_UL(0)
#define MSC0_DSC_TM_LEN                _MSC_UL(1)

/* MSC0_DSDSH_SH0 (rw) */
#define MSC0_DSDSH_SH0_POS             _MSC_UL(0)
#define MSC0_DSDSH_SH0_LEN             _MSC_UL(2)

/* MSC0_DSDSH_SH1 (rw) */
#define MSC0_DSDSH_SH1_POS             _MSC_UL(2)
#define MSC0_DSDSH_SH1_LEN             _MSC_UL(2)

/* MSC0_DSDSH_SH10 (rw) */
#define MSC0_DSDSH_SH10_POS            _MSC_UL(20)
#define MSC0_DSDSH_SH10_LEN            _MSC_UL(2)

/* MSC0_DSDSH_SH11 (rw) */
#define MSC0_DSDSH_SH11_POS            _MSC_UL(22)
#define MSC0_DSDSH_SH11_LEN            _MSC_UL(2)

/* MSC0_DSDSH_SH12 (rw) */
#define MSC0_DSDSH_SH12_POS            _MSC_UL(24)
#define MSC0_DSDSH_SH12_LEN            _MSC_UL(2)

/* MSC0_DSDSH_SH13 (rw) */
#define MSC0_DSDSH_SH13_POS            _MSC_UL(26)
#define MSC0_DSDSH_SH13_LEN            _MSC_UL(2)

/* MSC0_DSDSH_SH14 (rw) */
#define MSC0_DSDSH_SH14_POS            _MSC_UL(28)
#define MSC0_DSDSH_SH14_LEN            _MSC_UL(2)

/* MSC0_DSDSH_SH15 (rw) */
#define MSC0_DSDSH_SH15_POS            _MSC_UL(30)
#define MSC0_DSDSH_SH15_LEN            _MSC_UL(2)

/* MSC0_DSDSH_SH2 (rw) */
#define MSC0_DSDSH_SH2_POS             _MSC_UL(4)
#define MSC0_DSDSH_SH2_LEN             _MSC_UL(2)

/* MSC0_DSDSH_SH3 (rw) */
#define MSC0_DSDSH_SH3_POS             _MSC_UL(6)
#define MSC0_DSDSH_SH3_LEN             _MSC_UL(2)

/* MSC0_DSDSH_SH4 (rw) */
#define MSC0_DSDSH_SH4_POS             _MSC_UL(8)
#define MSC0_DSDSH_SH4_LEN             _MSC_UL(2)

/* MSC0_DSDSH_SH5 (rw) */
#define MSC0_DSDSH_SH5_POS             _MSC_UL(10)
#define MSC0_DSDSH_SH5_LEN             _MSC_UL(2)

/* MSC0_DSDSH_SH6 (rw) */
#define MSC0_DSDSH_SH6_POS             _MSC_UL(12)
#define MSC0_DSDSH_SH6_LEN             _MSC_UL(2)

/* MSC0_DSDSH_SH7 (rw) */
#define MSC0_DSDSH_SH7_POS             _MSC_UL(14)
#define MSC0_DSDSH_SH7_LEN             _MSC_UL(2)

/* MSC0_DSDSH_SH8 (rw) */
#define MSC0_DSDSH_SH8_POS             _MSC_UL(16)
#define MSC0_DSDSH_SH8_LEN             _MSC_UL(2)

/* MSC0_DSDSH_SH9 (rw) */
#define MSC0_DSDSH_SH9_POS             _MSC_UL(18)
#define MSC0_DSDSH_SH9_LEN             _MSC_UL(2)

/* MSC0_DSDSL_SL0 (rw) */
#define MSC0_DSDSL_SL0_POS             _MSC_UL(0)
#define MSC0_DSDSL_SL0_LEN             _MSC_UL(2)

/* MSC0_DSDSL_SL1 (rw) */
#define MSC0_DSDSL_SL1_POS             _MSC_UL(2)
#define MSC0_DSDSL_SL1_LEN             _MSC_UL(2)

/* MSC0_DSDSL_SL10 (rw) */
#define MSC0_DSDSL_SL10_POS            _MSC_UL(20)
#define MSC0_DSDSL_SL10_LEN            _MSC_UL(2)

/* MSC0_DSDSL_SL11 (rw) */
#define MSC0_DSDSL_SL11_POS            _MSC_UL(22)
#define MSC0_DSDSL_SL11_LEN            _MSC_UL(2)

/* MSC0_DSDSL_SL12 (rw) */
#define MSC0_DSDSL_SL12_POS            _MSC_UL(24)
#define MSC0_DSDSL_SL12_LEN            _MSC_UL(2)

/* MSC0_DSDSL_SL13 (rw) */
#define MSC0_DSDSL_SL13_POS            _MSC_UL(26)
#define MSC0_DSDSL_SL13_LEN            _MSC_UL(2)

/* MSC0_DSDSL_SL14 (rw) */
#define MSC0_DSDSL_SL14_POS            _MSC_UL(28)
#define MSC0_DSDSL_SL14_LEN            _MSC_UL(2)

/* MSC0_DSDSL_SL15 (rw) */
#define MSC0_DSDSL_SL15_POS            _MSC_UL(30)
#define MSC0_DSDSL_SL15_LEN            _MSC_UL(2)

/* MSC0_DSDSL_SL2 (rw) */
#define MSC0_DSDSL_SL2_POS             _MSC_UL(4)
#define MSC0_DSDSL_SL2_LEN             _MSC_UL(2)

/* MSC0_DSDSL_SL3 (rw) */
#define MSC0_DSDSL_SL3_POS             _MSC_UL(6)
#define MSC0_DSDSL_SL3_LEN             _MSC_UL(2)

/* MSC0_DSDSL_SL4 (rw) */
#define MSC0_DSDSL_SL4_POS             _MSC_UL(8)
#define MSC0_DSDSL_SL4_LEN             _MSC_UL(2)

/* MSC0_DSDSL_SL5 (rw) */
#define MSC0_DSDSL_SL5_POS             _MSC_UL(10)
#define MSC0_DSDSL_SL5_LEN             _MSC_UL(2)

/* MSC0_DSDSL_SL6 (rw) */
#define MSC0_DSDSL_SL6_POS             _MSC_UL(12)
#define MSC0_DSDSL_SL6_LEN             _MSC_UL(2)

/* MSC0_DSDSL_SL7 (rw) */
#define MSC0_DSDSL_SL7_POS             _MSC_UL(14)
#define MSC0_DSDSL_SL7_LEN             _MSC_UL(2)

/* MSC0_DSDSL_SL8 (rw) */
#define MSC0_DSDSL_SL8_POS             _MSC_UL(16)
#define MSC0_DSDSL_SL8_LEN             _MSC_UL(2)

/* MSC0_DSDSL_SL9 (rw) */
#define MSC0_DSDSL_SL9_POS             _MSC_UL(18)
#define MSC0_DSDSL_SL9_LEN             _MSC_UL(2)

/* MSC0_DSS_CFA (rh) */
#define MSC0_DSS_CFA_POS               _MSC_UL(25)
#define MSC0_DSS_CFA_LEN               _MSC_UL(1)

/* MSC0_DSS_DC (rh) */
#define MSC0_DSS_DC_POS                _MSC_UL(16)
#define MSC0_DSS_DC_LEN                _MSC_UL(7)

/* MSC0_DSS_DFA (rh) */
#define MSC0_DSS_DFA_POS               _MSC_UL(24)
#define MSC0_DSS_DFA_LEN               _MSC_UL(1)

/* MSC0_DSS_NPTF (rw) */
#define MSC0_DSS_NPTF_POS              _MSC_UL(8)
#define MSC0_DSS_NPTF_LEN              _MSC_UL(4)

/* MSC0_DSS_PFC (rh) */
#define MSC0_DSS_PFC_POS               _MSC_UL(0)
#define MSC0_DSS_PFC_LEN               _MSC_UL(4)

/* MSC0_ESR_ENH0 (rw) */
#define MSC0_ESR_ENH0_POS              _MSC_UL(16)
#define MSC0_ESR_ENH0_LEN              _MSC_UL(1)

/* MSC0_ESR_ENH1 (rw) */
#define MSC0_ESR_ENH1_POS              _MSC_UL(17)
#define MSC0_ESR_ENH1_LEN              _MSC_UL(1)

/* MSC0_ESR_ENH10 (rw) */
#define MSC0_ESR_ENH10_POS             _MSC_UL(26)
#define MSC0_ESR_ENH10_LEN             _MSC_UL(1)

/* MSC0_ESR_ENH11 (rw) */
#define MSC0_ESR_ENH11_POS             _MSC_UL(27)
#define MSC0_ESR_ENH11_LEN             _MSC_UL(1)

/* MSC0_ESR_ENH12 (rw) */
#define MSC0_ESR_ENH12_POS             _MSC_UL(28)
#define MSC0_ESR_ENH12_LEN             _MSC_UL(1)

/* MSC0_ESR_ENH13 (rw) */
#define MSC0_ESR_ENH13_POS             _MSC_UL(29)
#define MSC0_ESR_ENH13_LEN             _MSC_UL(1)

/* MSC0_ESR_ENH14 (rw) */
#define MSC0_ESR_ENH14_POS             _MSC_UL(30)
#define MSC0_ESR_ENH14_LEN             _MSC_UL(1)

/* MSC0_ESR_ENH15 (rw) */
#define MSC0_ESR_ENH15_POS             _MSC_UL(31)
#define MSC0_ESR_ENH15_LEN             _MSC_UL(1)

/* MSC0_ESR_ENH2 (rw) */
#define MSC0_ESR_ENH2_POS              _MSC_UL(18)
#define MSC0_ESR_ENH2_LEN              _MSC_UL(1)

/* MSC0_ESR_ENH3 (rw) */
#define MSC0_ESR_ENH3_POS              _MSC_UL(19)
#define MSC0_ESR_ENH3_LEN              _MSC_UL(1)

/* MSC0_ESR_ENH4 (rw) */
#define MSC0_ESR_ENH4_POS              _MSC_UL(20)
#define MSC0_ESR_ENH4_LEN              _MSC_UL(1)

/* MSC0_ESR_ENH5 (rw) */
#define MSC0_ESR_ENH5_POS              _MSC_UL(21)
#define MSC0_ESR_ENH5_LEN              _MSC_UL(1)

/* MSC0_ESR_ENH6 (rw) */
#define MSC0_ESR_ENH6_POS              _MSC_UL(22)
#define MSC0_ESR_ENH6_LEN              _MSC_UL(1)

/* MSC0_ESR_ENH7 (rw) */
#define MSC0_ESR_ENH7_POS              _MSC_UL(23)
#define MSC0_ESR_ENH7_LEN              _MSC_UL(1)

/* MSC0_ESR_ENH8 (rw) */
#define MSC0_ESR_ENH8_POS              _MSC_UL(24)
#define MSC0_ESR_ENH8_LEN              _MSC_UL(1)

/* MSC0_ESR_ENH9 (rw) */
#define MSC0_ESR_ENH9_POS              _MSC_UL(25)
#define MSC0_ESR_ENH9_LEN              _MSC_UL(1)

/* MSC0_ESR_ENL0 (rw) */
#define MSC0_ESR_ENL0_POS              _MSC_UL(0)
#define MSC0_ESR_ENL0_LEN              _MSC_UL(1)

/* MSC0_ESR_ENL1 (rw) */
#define MSC0_ESR_ENL1_POS              _MSC_UL(1)
#define MSC0_ESR_ENL1_LEN              _MSC_UL(1)

/* MSC0_ESR_ENL10 (rw) */
#define MSC0_ESR_ENL10_POS             _MSC_UL(10)
#define MSC0_ESR_ENL10_LEN             _MSC_UL(1)

/* MSC0_ESR_ENL11 (rw) */
#define MSC0_ESR_ENL11_POS             _MSC_UL(11)
#define MSC0_ESR_ENL11_LEN             _MSC_UL(1)

/* MSC0_ESR_ENL12 (rw) */
#define MSC0_ESR_ENL12_POS             _MSC_UL(12)
#define MSC0_ESR_ENL12_LEN             _MSC_UL(1)

/* MSC0_ESR_ENL13 (rw) */
#define MSC0_ESR_ENL13_POS             _MSC_UL(13)
#define MSC0_ESR_ENL13_LEN             _MSC_UL(1)

/* MSC0_ESR_ENL14 (rw) */
#define MSC0_ESR_ENL14_POS             _MSC_UL(14)
#define MSC0_ESR_ENL14_LEN             _MSC_UL(1)

/* MSC0_ESR_ENL15 (rw) */
#define MSC0_ESR_ENL15_POS             _MSC_UL(15)
#define MSC0_ESR_ENL15_LEN             _MSC_UL(1)

/* MSC0_ESR_ENL2 (rw) */
#define MSC0_ESR_ENL2_POS              _MSC_UL(2)
#define MSC0_ESR_ENL2_LEN              _MSC_UL(1)

/* MSC0_ESR_ENL3 (rw) */
#define MSC0_ESR_ENL3_POS              _MSC_UL(3)
#define MSC0_ESR_ENL3_LEN              _MSC_UL(1)

/* MSC0_ESR_ENL4 (rw) */
#define MSC0_ESR_ENL4_POS              _MSC_UL(4)
#define MSC0_ESR_ENL4_LEN              _MSC_UL(1)

/* MSC0_ESR_ENL5 (rw) */
#define MSC0_ESR_ENL5_POS              _MSC_UL(5)
#define MSC0_ESR_ENL5_LEN              _MSC_UL(1)

/* MSC0_ESR_ENL6 (rw) */
#define MSC0_ESR_ENL6_POS              _MSC_UL(6)
#define MSC0_ESR_ENL6_LEN              _MSC_UL(1)

/* MSC0_ESR_ENL7 (rw) */
#define MSC0_ESR_ENL7_POS              _MSC_UL(7)
#define MSC0_ESR_ENL7_LEN              _MSC_UL(1)

/* MSC0_ESR_ENL8 (rw) */
#define MSC0_ESR_ENL8_POS              _MSC_UL(8)
#define MSC0_ESR_ENL8_LEN              _MSC_UL(1)

/* MSC0_ESR_ENL9 (rw) */
#define MSC0_ESR_ENL9_POS              _MSC_UL(9)
#define MSC0_ESR_ENL9_LEN              _MSC_UL(1)

/* MSC0_FDR_DISCLK (rwh) */
#define MSC0_FDR_DISCLK_POS            _MSC_UL(31)
#define MSC0_FDR_DISCLK_LEN            _MSC_UL(1)

/* MSC0_FDR_DM (rw) */
#define MSC0_FDR_DM_POS                _MSC_UL(14)
#define MSC0_FDR_DM_LEN                _MSC_UL(2)

/* MSC0_FDR_ENHW (rw) */
#define MSC0_FDR_ENHW_POS              _MSC_UL(30)
#define MSC0_FDR_ENHW_LEN              _MSC_UL(1)

/* MSC0_FDR_RESULT (rh) */
#define MSC0_FDR_RESULT_POS            _MSC_UL(16)
#define MSC0_FDR_RESULT_LEN            _MSC_UL(10)

/* MSC0_FDR_SC (rw) */
#define MSC0_FDR_SC_POS                _MSC_UL(12)
#define MSC0_FDR_SC_LEN                _MSC_UL(2)

/* MSC0_FDR_STEP (rw) */
#define MSC0_FDR_STEP_POS              _MSC_UL(0)
#define MSC0_FDR_STEP_LEN              _MSC_UL(10)

/* MSC0_FDR_SUSACK (rh) */
#define MSC0_FDR_SUSACK_POS            _MSC_UL(28)
#define MSC0_FDR_SUSACK_LEN            _MSC_UL(1)

/* MSC0_FDR_SUSREQ (rh) */
#define MSC0_FDR_SUSREQ_POS            _MSC_UL(29)
#define MSC0_FDR_SUSREQ_LEN            _MSC_UL(1)

/* MSC0_ICR_ECIE (rw) */
#define MSC0_ICR_ECIE_POS              _MSC_UL(7)
#define MSC0_ICR_ECIE_LEN              _MSC_UL(1)

/* MSC0_ICR_ECIP (rw) */
#define MSC0_ICR_ECIP_POS              _MSC_UL(4)
#define MSC0_ICR_ECIP_LEN              _MSC_UL(2)

/* MSC0_ICR_EDIE (rw) */
#define MSC0_ICR_EDIE_POS              _MSC_UL(2)
#define MSC0_ICR_EDIE_LEN              _MSC_UL(2)

/* MSC0_ICR_EDIP (rw) */
#define MSC0_ICR_EDIP_POS              _MSC_UL(0)
#define MSC0_ICR_EDIP_LEN              _MSC_UL(2)

/* MSC0_ICR_RDIE (rw) */
#define MSC0_ICR_RDIE_POS              _MSC_UL(14)
#define MSC0_ICR_RDIE_LEN              _MSC_UL(2)

/* MSC0_ICR_RDIP (rw) */
#define MSC0_ICR_RDIP_POS              _MSC_UL(12)
#define MSC0_ICR_RDIP_LEN              _MSC_UL(2)

/* MSC0_ICR_TFIE (rw) */
#define MSC0_ICR_TFIE_POS              _MSC_UL(11)
#define MSC0_ICR_TFIE_LEN              _MSC_UL(1)

/* MSC0_ICR_TFIP (rw) */
#define MSC0_ICR_TFIP_POS              _MSC_UL(8)
#define MSC0_ICR_TFIP_LEN              _MSC_UL(2)

/* MSC0_ID_MOD_NUMBER (r) */
#define MSC0_ID_MOD_NUMBER_POS         _MSC_UL(16)
#define MSC0_ID_MOD_NUMBER_LEN         _MSC_UL(16)

/* MSC0_ID_MOD_REV (r) */
#define MSC0_ID_MOD_REV_POS            _MSC_UL(0)
#define MSC0_ID_MOD_REV_LEN            _MSC_UL(8)

/* MSC0_ID_MOD_TYPE (r) */
#define MSC0_ID_MOD_TYPE_POS           _MSC_UL(8)
#define MSC0_ID_MOD_TYPE_LEN           _MSC_UL(8)

/* MSC0_ISC_CDECI (w) */
#define MSC0_ISC_CDECI_POS             _MSC_UL(1)
#define MSC0_ISC_CDECI_LEN             _MSC_UL(1)

/* MSC0_ISC_CDEDI (w) */
#define MSC0_ISC_CDEDI_POS             _MSC_UL(0)
#define MSC0_ISC_CDEDI_LEN             _MSC_UL(1)

/* MSC0_ISC_CDTFI (w) */
#define MSC0_ISC_CDTFI_POS             _MSC_UL(2)
#define MSC0_ISC_CDTFI_LEN             _MSC_UL(1)

/* MSC0_ISC_CURDI (w) */
#define MSC0_ISC_CURDI_POS             _MSC_UL(3)
#define MSC0_ISC_CURDI_LEN             _MSC_UL(1)

/* MSC0_ISC_SDECI (w) */
#define MSC0_ISC_SDECI_POS             _MSC_UL(17)
#define MSC0_ISC_SDECI_LEN             _MSC_UL(1)

/* MSC0_ISC_SDEDI (w) */
#define MSC0_ISC_SDEDI_POS             _MSC_UL(16)
#define MSC0_ISC_SDEDI_LEN             _MSC_UL(1)

/* MSC0_ISC_SDP (w) */
#define MSC0_ISC_SDP_POS               _MSC_UL(20)
#define MSC0_ISC_SDP_LEN               _MSC_UL(1)

/* MSC0_ISC_SDTFI (w) */
#define MSC0_ISC_SDTFI_POS             _MSC_UL(18)
#define MSC0_ISC_SDTFI_LEN             _MSC_UL(1)

/* MSC0_ISC_SURDI (w) */
#define MSC0_ISC_SURDI_POS             _MSC_UL(19)
#define MSC0_ISC_SURDI_LEN             _MSC_UL(1)

/* MSC0_ISR_DECI (rh) */
#define MSC0_ISR_DECI_POS              _MSC_UL(1)
#define MSC0_ISR_DECI_LEN              _MSC_UL(1)

/* MSC0_ISR_DEDI (rh) */
#define MSC0_ISR_DEDI_POS              _MSC_UL(0)
#define MSC0_ISR_DEDI_LEN              _MSC_UL(1)

/* MSC0_ISR_DTFI (rh) */
#define MSC0_ISR_DTFI_POS              _MSC_UL(2)
#define MSC0_ISR_DTFI_LEN              _MSC_UL(1)

/* MSC0_ISR_URDI (rh) */
#define MSC0_ISR_URDI_POS              _MSC_UL(3)
#define MSC0_ISR_URDI_LEN              _MSC_UL(1)

/* MSC0_OCR_CLKCTRL (rw) */
#define MSC0_OCR_CLKCTRL_POS           _MSC_UL(8)
#define MSC0_OCR_CLKCTRL_LEN           _MSC_UL(1)

/* MSC0_OCR_CLP (rw) */
#define MSC0_OCR_CLP_POS               _MSC_UL(0)
#define MSC0_OCR_CLP_LEN               _MSC_UL(1)

/* MSC0_OCR_CSC (rw) */
#define MSC0_OCR_CSC_POS               _MSC_UL(13)
#define MSC0_OCR_CSC_LEN               _MSC_UL(2)

/* MSC0_OCR_CSH (rw) */
#define MSC0_OCR_CSH_POS               _MSC_UL(11)
#define MSC0_OCR_CSH_LEN               _MSC_UL(2)

/* MSC0_OCR_CSL (rw) */
#define MSC0_OCR_CSL_POS               _MSC_UL(9)
#define MSC0_OCR_CSL_LEN               _MSC_UL(2)

/* MSC0_OCR_CSLP (rw) */
#define MSC0_OCR_CSLP_POS              _MSC_UL(2)
#define MSC0_OCR_CSLP_LEN              _MSC_UL(1)

/* MSC0_OCR_ILP (rw) */
#define MSC0_OCR_ILP_POS               _MSC_UL(3)
#define MSC0_OCR_ILP_LEN               _MSC_UL(1)

/* MSC0_OCR_SLP (rw) */
#define MSC0_OCR_SLP_POS               _MSC_UL(1)
#define MSC0_OCR_SLP_LEN               _MSC_UL(1)

/* MSC0_SRC0_CLRR (w) */
#define MSC0_SRC0_CLRR_POS             _MSC_UL(14)
#define MSC0_SRC0_CLRR_LEN             _MSC_UL(1)

/* MSC0_SRC0_SETR (w) */
#define MSC0_SRC0_SETR_POS             _MSC_UL(15)
#define MSC0_SRC0_SETR_LEN             _MSC_UL(1)

/* MSC0_SRC0_SRE (rw) */
#define MSC0_SRC0_SRE_POS              _MSC_UL(12)
#define MSC0_SRC0_SRE_LEN              _MSC_UL(1)

/* MSC0_SRC0_SRPN (rw) */
#define MSC0_SRC0_SRPN_POS             _MSC_UL(0)
#define MSC0_SRC0_SRPN_LEN             _MSC_UL(8)

/* MSC0_SRC0_SRR (rh) */
#define MSC0_SRC0_SRR_POS              _MSC_UL(13)
#define MSC0_SRC0_SRR_LEN              _MSC_UL(1)

/* MSC0_SRC0_TOS (rw) */
#define MSC0_SRC0_TOS_POS              _MSC_UL(10)
#define MSC0_SRC0_TOS_LEN              _MSC_UL(1)

/* MSC0_SRC1_CLRR (w) */
#define MSC0_SRC1_CLRR_POS             _MSC_UL(14)
#define MSC0_SRC1_CLRR_LEN             _MSC_UL(1)

/* MSC0_SRC1_SETR (w) */
#define MSC0_SRC1_SETR_POS             _MSC_UL(15)
#define MSC0_SRC1_SETR_LEN             _MSC_UL(1)

/* MSC0_SRC1_SRE (rw) */
#define MSC0_SRC1_SRE_POS              _MSC_UL(12)
#define MSC0_SRC1_SRE_LEN              _MSC_UL(1)

/* MSC0_SRC1_SRPN (rw) */
#define MSC0_SRC1_SRPN_POS             _MSC_UL(0)
#define MSC0_SRC1_SRPN_LEN             _MSC_UL(8)

/* MSC0_SRC1_SRR (rh) */
#define MSC0_SRC1_SRR_POS              _MSC_UL(13)
#define MSC0_SRC1_SRR_LEN              _MSC_UL(1)

/* MSC0_SRC1_TOS (rw) */
#define MSC0_SRC1_TOS_POS              _MSC_UL(10)
#define MSC0_SRC1_TOS_LEN              _MSC_UL(1)

/* MSC0_UD_C (w) */
#define MSC0_UD_C_POS                  _MSC_UL(18)
#define MSC0_UD_C_LEN                  _MSC_UL(1)

/* MSC0_UD_DATA (rh) */
#define MSC0_UD_DATA_POS               _MSC_UL(0)
#define MSC0_UD_DATA_LEN               _MSC_UL(8)

/* MSC0_UD_IPF (rh) */
#define MSC0_UD_IPF_POS                _MSC_UL(21)
#define MSC0_UD_IPF_LEN                _MSC_UL(1)

/* MSC0_UD_LABF (rh) */
#define MSC0_UD_LABF_POS               _MSC_UL(19)
#define MSC0_UD_LABF_LEN               _MSC_UL(2)

/* MSC0_UD_P (rh) */
#define MSC0_UD_P_POS                  _MSC_UL(17)
#define MSC0_UD_P_LEN                  _MSC_UL(1)

/* MSC0_UD_PERR (rh) */
#define MSC0_UD_PERR_POS               _MSC_UL(22)
#define MSC0_UD_PERR_LEN               _MSC_UL(1)

/* MSC0_UD_V (rh) */
#define MSC0_UD_V_POS                  _MSC_UL(16)
#define MSC0_UD_V_LEN                  _MSC_UL(1)

/* MSC0_USR_PCTR (rw) */
#define MSC0_USR_PCTR_POS              _MSC_UL(4)
#define MSC0_USR_PCTR_LEN              _MSC_UL(1)

/* MSC0_USR_UC (rh) */
#define MSC0_USR_UC_POS                _MSC_UL(16)
#define MSC0_USR_UC_LEN                _MSC_UL(5)

/* MSC0_USR_UFT (rw) */
#define MSC0_USR_UFT_POS               _MSC_UL(0)
#define MSC0_USR_UFT_LEN               _MSC_UL(1)

/* MSC0_USR_URR (rw) */
#define MSC0_USR_URR_POS               _MSC_UL(1)
#define MSC0_USR_URR_LEN               _MSC_UL(3)

/* MSC1_CLC_DISR (rw) */
#define MSC1_CLC_DISR_POS              _MSC_UL(0)
#define MSC1_CLC_DISR_LEN              _MSC_UL(1)

/* MSC1_CLC_DISS (r) */
#define MSC1_CLC_DISS_POS              _MSC_UL(1)
#define MSC1_CLC_DISS_LEN              _MSC_UL(1)

/* MSC1_CLC_EDIS (rw) */
#define MSC1_CLC_EDIS_POS              _MSC_UL(3)
#define MSC1_CLC_EDIS_LEN              _MSC_UL(1)

/* MSC1_CLC_FSOE (rw) */
#define MSC1_CLC_FSOE_POS              _MSC_UL(5)
#define MSC1_CLC_FSOE_LEN              _MSC_UL(1)

/* MSC1_CLC_SBWE (w) */
#define MSC1_CLC_SBWE_POS              _MSC_UL(4)
#define MSC1_CLC_SBWE_LEN              _MSC_UL(1)

/* MSC1_CLC_SPEN (rw) */
#define MSC1_CLC_SPEN_POS              _MSC_UL(2)
#define MSC1_CLC_SPEN_LEN              _MSC_UL(1)

/* MSC1_DC_CMD (rw) */
#define MSC1_DC_CMD_POS                _MSC_UL(0)
#define MSC1_DC_CMD_LEN                _MSC_UL(32)

/* MSC1_DD_DATA (rw) */
#define MSC1_DD_DATA_POS               _MSC_UL(0)
#define MSC1_DD_DATA_LEN               _MSC_UL(32)

/* MSC1_DSC_CP (rh) */
#define MSC1_DSC_CP_POS                _MSC_UL(1)
#define MSC1_DSC_CP_LEN                _MSC_UL(1)

/* MSC1_DSC_DP (rh) */
#define MSC1_DSC_DP_POS                _MSC_UL(2)
#define MSC1_DSC_DP_LEN                _MSC_UL(1)

/* MSC1_DSC_DSDIS (rh) */
#define MSC1_DSC_DSDIS_POS             _MSC_UL(15)
#define MSC1_DSC_DSDIS_LEN             _MSC_UL(1)

/* MSC1_DSC_ENSELH (rw) */
#define MSC1_DSC_ENSELH_POS            _MSC_UL(14)
#define MSC1_DSC_ENSELH_LEN            _MSC_UL(1)

/* MSC1_DSC_ENSELL (rw) */
#define MSC1_DSC_ENSELL_POS            _MSC_UL(13)
#define MSC1_DSC_ENSELL_LEN            _MSC_UL(1)

/* MSC1_DSC_NBC (rw) */
#define MSC1_DSC_NBC_POS               _MSC_UL(16)
#define MSC1_DSC_NBC_LEN               _MSC_UL(6)

/* MSC1_DSC_NDBH (rw) */
#define MSC1_DSC_NDBH_POS              _MSC_UL(8)
#define MSC1_DSC_NDBH_LEN              _MSC_UL(5)

/* MSC1_DSC_NDBL (rw) */
#define MSC1_DSC_NDBL_POS              _MSC_UL(3)
#define MSC1_DSC_NDBL_LEN              _MSC_UL(5)

/* MSC1_DSC_PPD (rw) */
#define MSC1_DSC_PPD_POS               _MSC_UL(24)
#define MSC1_DSC_PPD_LEN               _MSC_UL(5)

/* MSC1_DSC_TM (rw) */
#define MSC1_DSC_TM_POS                _MSC_UL(0)
#define MSC1_DSC_TM_LEN                _MSC_UL(1)

/* MSC1_DSDSH_SH0 (rw) */
#define MSC1_DSDSH_SH0_POS             _MSC_UL(0)
#define MSC1_DSDSH_SH0_LEN             _MSC_UL(2)

/* MSC1_DSDSH_SH1 (rw) */
#define MSC1_DSDSH_SH1_POS             _MSC_UL(2)
#define MSC1_DSDSH_SH1_LEN             _MSC_UL(2)

/* MSC1_DSDSH_SH10 (rw) */
#define MSC1_DSDSH_SH10_POS            _MSC_UL(20)
#define MSC1_DSDSH_SH10_LEN            _MSC_UL(2)

/* MSC1_DSDSH_SH11 (rw) */
#define MSC1_DSDSH_SH11_POS            _MSC_UL(22)
#define MSC1_DSDSH_SH11_LEN            _MSC_UL(2)

/* MSC1_DSDSH_SH12 (rw) */
#define MSC1_DSDSH_SH12_POS            _MSC_UL(24)
#define MSC1_DSDSH_SH12_LEN            _MSC_UL(2)

/* MSC1_DSDSH_SH13 (rw) */
#define MSC1_DSDSH_SH13_POS            _MSC_UL(26)
#define MSC1_DSDSH_SH13_LEN            _MSC_UL(2)

/* MSC1_DSDSH_SH14 (rw) */
#define MSC1_DSDSH_SH14_POS            _MSC_UL(28)
#define MSC1_DSDSH_SH14_LEN            _MSC_UL(2)

/* MSC1_DSDSH_SH15 (rw) */
#define MSC1_DSDSH_SH15_POS            _MSC_UL(30)
#define MSC1_DSDSH_SH15_LEN            _MSC_UL(2)

/* MSC1_DSDSH_SH2 (rw) */
#define MSC1_DSDSH_SH2_POS             _MSC_UL(4)
#define MSC1_DSDSH_SH2_LEN             _MSC_UL(2)

/* MSC1_DSDSH_SH3 (rw) */
#define MSC1_DSDSH_SH3_POS             _MSC_UL(6)
#define MSC1_DSDSH_SH3_LEN             _MSC_UL(2)

/* MSC1_DSDSH_SH4 (rw) */
#define MSC1_DSDSH_SH4_POS             _MSC_UL(8)
#define MSC1_DSDSH_SH4_LEN             _MSC_UL(2)

/* MSC1_DSDSH_SH5 (rw) */
#define MSC1_DSDSH_SH5_POS             _MSC_UL(10)
#define MSC1_DSDSH_SH5_LEN             _MSC_UL(2)

/* MSC1_DSDSH_SH6 (rw) */
#define MSC1_DSDSH_SH6_POS             _MSC_UL(12)
#define MSC1_DSDSH_SH6_LEN             _MSC_UL(2)

/* MSC1_DSDSH_SH7 (rw) */
#define MSC1_DSDSH_SH7_POS             _MSC_UL(14)
#define MSC1_DSDSH_SH7_LEN             _MSC_UL(2)

/* MSC1_DSDSH_SH8 (rw) */
#define MSC1_DSDSH_SH8_POS             _MSC_UL(16)
#define MSC1_DSDSH_SH8_LEN             _MSC_UL(2)

/* MSC1_DSDSH_SH9 (rw) */
#define MSC1_DSDSH_SH9_POS             _MSC_UL(18)
#define MSC1_DSDSH_SH9_LEN             _MSC_UL(2)

/* MSC1_DSDSL_SL0 (rw) */
#define MSC1_DSDSL_SL0_POS             _MSC_UL(0)
#define MSC1_DSDSL_SL0_LEN             _MSC_UL(2)

/* MSC1_DSDSL_SL1 (rw) */
#define MSC1_DSDSL_SL1_POS             _MSC_UL(2)
#define MSC1_DSDSL_SL1_LEN             _MSC_UL(2)

/* MSC1_DSDSL_SL10 (rw) */
#define MSC1_DSDSL_SL10_POS            _MSC_UL(20)
#define MSC1_DSDSL_SL10_LEN            _MSC_UL(2)

/* MSC1_DSDSL_SL11 (rw) */
#define MSC1_DSDSL_SL11_POS            _MSC_UL(22)
#define MSC1_DSDSL_SL11_LEN            _MSC_UL(2)

/* MSC1_DSDSL_SL12 (rw) */
#define MSC1_DSDSL_SL12_POS            _MSC_UL(24)
#define MSC1_DSDSL_SL12_LEN            _MSC_UL(2)

/* MSC1_DSDSL_SL13 (rw) */
#define MSC1_DSDSL_SL13_POS            _MSC_UL(26)
#define MSC1_DSDSL_SL13_LEN            _MSC_UL(2)

/* MSC1_DSDSL_SL14 (rw) */
#define MSC1_DSDSL_SL14_POS            _MSC_UL(28)
#define MSC1_DSDSL_SL14_LEN            _MSC_UL(2)

/* MSC1_DSDSL_SL15 (rw) */
#define MSC1_DSDSL_SL15_POS            _MSC_UL(30)
#define MSC1_DSDSL_SL15_LEN            _MSC_UL(2)

/* MSC1_DSDSL_SL2 (rw) */
#define MSC1_DSDSL_SL2_POS             _MSC_UL(4)
#define MSC1_DSDSL_SL2_LEN             _MSC_UL(2)

/* MSC1_DSDSL_SL3 (rw) */
#define MSC1_DSDSL_SL3_POS             _MSC_UL(6)
#define MSC1_DSDSL_SL3_LEN             _MSC_UL(2)

/* MSC1_DSDSL_SL4 (rw) */
#define MSC1_DSDSL_SL4_POS             _MSC_UL(8)
#define MSC1_DSDSL_SL4_LEN             _MSC_UL(2)

/* MSC1_DSDSL_SL5 (rw) */
#define MSC1_DSDSL_SL5_POS             _MSC_UL(10)
#define MSC1_DSDSL_SL5_LEN             _MSC_UL(2)

/* MSC1_DSDSL_SL6 (rw) */
#define MSC1_DSDSL_SL6_POS             _MSC_UL(12)
#define MSC1_DSDSL_SL6_LEN             _MSC_UL(2)

/* MSC1_DSDSL_SL7 (rw) */
#define MSC1_DSDSL_SL7_POS             _MSC_UL(14)
#define MSC1_DSDSL_SL7_LEN             _MSC_UL(2)

/* MSC1_DSDSL_SL8 (rw) */
#define MSC1_DSDSL_SL8_POS             _MSC_UL(16)
#define MSC1_DSDSL_SL8_LEN             _MSC_UL(2)

/* MSC1_DSDSL_SL9 (rw) */
#define MSC1_DSDSL_SL9_POS             _MSC_UL(18)
#define MSC1_DSDSL_SL9_LEN             _MSC_UL(2)

/* MSC1_DSS_CFA (rh) */
#define MSC1_DSS_CFA_POS               _MSC_UL(25)
#define MSC1_DSS_CFA_LEN               _MSC_UL(1)

/* MSC1_DSS_DC (rh) */
#define MSC1_DSS_DC_POS                _MSC_UL(16)
#define MSC1_DSS_DC_LEN                _MSC_UL(7)

/* MSC1_DSS_DFA (rh) */
#define MSC1_DSS_DFA_POS               _MSC_UL(24)
#define MSC1_DSS_DFA_LEN               _MSC_UL(1)

/* MSC1_DSS_NPTF (rw) */
#define MSC1_DSS_NPTF_POS              _MSC_UL(8)
#define MSC1_DSS_NPTF_LEN              _MSC_UL(4)

/* MSC1_DSS_PFC (rh) */
#define MSC1_DSS_PFC_POS               _MSC_UL(0)
#define MSC1_DSS_PFC_LEN               _MSC_UL(4)

/* MSC1_ESR_ENH0 (rw) */
#define MSC1_ESR_ENH0_POS              _MSC_UL(16)
#define MSC1_ESR_ENH0_LEN              _MSC_UL(1)

/* MSC1_ESR_ENH1 (rw) */
#define MSC1_ESR_ENH1_POS              _MSC_UL(17)
#define MSC1_ESR_ENH1_LEN              _MSC_UL(1)

/* MSC1_ESR_ENH10 (rw) */
#define MSC1_ESR_ENH10_POS             _MSC_UL(26)
#define MSC1_ESR_ENH10_LEN             _MSC_UL(1)

/* MSC1_ESR_ENH11 (rw) */
#define MSC1_ESR_ENH11_POS             _MSC_UL(27)
#define MSC1_ESR_ENH11_LEN             _MSC_UL(1)

/* MSC1_ESR_ENH12 (rw) */
#define MSC1_ESR_ENH12_POS             _MSC_UL(28)
#define MSC1_ESR_ENH12_LEN             _MSC_UL(1)

/* MSC1_ESR_ENH13 (rw) */
#define MSC1_ESR_ENH13_POS             _MSC_UL(29)
#define MSC1_ESR_ENH13_LEN             _MSC_UL(1)

/* MSC1_ESR_ENH14 (rw) */
#define MSC1_ESR_ENH14_POS             _MSC_UL(30)
#define MSC1_ESR_ENH14_LEN             _MSC_UL(1)

/* MSC1_ESR_ENH15 (rw) */
#define MSC1_ESR_ENH15_POS             _MSC_UL(31)
#define MSC1_ESR_ENH15_LEN             _MSC_UL(1)

/* MSC1_ESR_ENH2 (rw) */
#define MSC1_ESR_ENH2_POS              _MSC_UL(18)
#define MSC1_ESR_ENH2_LEN              _MSC_UL(1)

/* MSC1_ESR_ENH3 (rw) */
#define MSC1_ESR_ENH3_POS              _MSC_UL(19)
#define MSC1_ESR_ENH3_LEN              _MSC_UL(1)

/* MSC1_ESR_ENH4 (rw) */
#define MSC1_ESR_ENH4_POS              _MSC_UL(20)
#define MSC1_ESR_ENH4_LEN              _MSC_UL(1)

/* MSC1_ESR_ENH5 (rw) */
#define MSC1_ESR_ENH5_POS              _MSC_UL(21)
#define MSC1_ESR_ENH5_LEN              _MSC_UL(1)

/* MSC1_ESR_ENH6 (rw) */
#define MSC1_ESR_ENH6_POS              _MSC_UL(22)
#define MSC1_ESR_ENH6_LEN              _MSC_UL(1)

/* MSC1_ESR_ENH7 (rw) */
#define MSC1_ESR_ENH7_POS              _MSC_UL(23)
#define MSC1_ESR_ENH7_LEN              _MSC_UL(1)

/* MSC1_ESR_ENH8 (rw) */
#define MSC1_ESR_ENH8_POS              _MSC_UL(24)
#define MSC1_ESR_ENH8_LEN              _MSC_UL(1)

/* MSC1_ESR_ENH9 (rw) */
#define MSC1_ESR_ENH9_POS              _MSC_UL(25)
#define MSC1_ESR_ENH9_LEN              _MSC_UL(1)

/* MSC1_ESR_ENL0 (rw) */
#define MSC1_ESR_ENL0_POS              _MSC_UL(0)
#define MSC1_ESR_ENL0_LEN              _MSC_UL(1)

/* MSC1_ESR_ENL1 (rw) */
#define MSC1_ESR_ENL1_POS              _MSC_UL(1)
#define MSC1_ESR_ENL1_LEN              _MSC_UL(1)

/* MSC1_ESR_ENL10 (rw) */
#define MSC1_ESR_ENL10_POS             _MSC_UL(10)
#define MSC1_ESR_ENL10_LEN             _MSC_UL(1)

/* MSC1_ESR_ENL11 (rw) */
#define MSC1_ESR_ENL11_POS             _MSC_UL(11)
#define MSC1_ESR_ENL11_LEN             _MSC_UL(1)

/* MSC1_ESR_ENL12 (rw) */
#define MSC1_ESR_ENL12_POS             _MSC_UL(12)
#define MSC1_ESR_ENL12_LEN             _MSC_UL(1)

/* MSC1_ESR_ENL13 (rw) */
#define MSC1_ESR_ENL13_POS             _MSC_UL(13)
#define MSC1_ESR_ENL13_LEN             _MSC_UL(1)

/* MSC1_ESR_ENL14 (rw) */
#define MSC1_ESR_ENL14_POS             _MSC_UL(14)
#define MSC1_ESR_ENL14_LEN             _MSC_UL(1)

/* MSC1_ESR_ENL15 (rw) */
#define MSC1_ESR_ENL15_POS             _MSC_UL(15)
#define MSC1_ESR_ENL15_LEN             _MSC_UL(1)

/* MSC1_ESR_ENL2 (rw) */
#define MSC1_ESR_ENL2_POS              _MSC_UL(2)
#define MSC1_ESR_ENL2_LEN              _MSC_UL(1)

/* MSC1_ESR_ENL3 (rw) */
#define MSC1_ESR_ENL3_POS              _MSC_UL(3)
#define MSC1_ESR_ENL3_LEN              _MSC_UL(1)

/* MSC1_ESR_ENL4 (rw) */
#define MSC1_ESR_ENL4_POS              _MSC_UL(4)
#define MSC1_ESR_ENL4_LEN              _MSC_UL(1)

/* MSC1_ESR_ENL5 (rw) */
#define MSC1_ESR_ENL5_POS              _MSC_UL(5)
#define MSC1_ESR_ENL5_LEN              _MSC_UL(1)

/* MSC1_ESR_ENL6 (rw) */
#define MSC1_ESR_ENL6_POS              _MSC_UL(6)
#define MSC1_ESR_ENL6_LEN              _MSC_UL(1)

/* MSC1_ESR_ENL7 (rw) */
#define MSC1_ESR_ENL7_POS              _MSC_UL(7)
#define MSC1_ESR_ENL7_LEN              _MSC_UL(1)

/* MSC1_ESR_ENL8 (rw) */
#define MSC1_ESR_ENL8_POS              _MSC_UL(8)
#define MSC1_ESR_ENL8_LEN              _MSC_UL(1)

/* MSC1_ESR_ENL9 (rw) */
#define MSC1_ESR_ENL9_POS              _MSC_UL(9)
#define MSC1_ESR_ENL9_LEN              _MSC_UL(1)

/* MSC1_FDR_DISCLK (rwh) */
#define MSC1_FDR_DISCLK_POS            _MSC_UL(31)
#define MSC1_FDR_DISCLK_LEN            _MSC_UL(1)

/* MSC1_FDR_DM (rw) */
#define MSC1_FDR_DM_POS                _MSC_UL(14)
#define MSC1_FDR_DM_LEN                _MSC_UL(2)

/* MSC1_FDR_ENHW (rw) */
#define MSC1_FDR_ENHW_POS              _MSC_UL(30)
#define MSC1_FDR_ENHW_LEN              _MSC_UL(1)

/* MSC1_FDR_RESULT (rh) */
#define MSC1_FDR_RESULT_POS            _MSC_UL(16)
#define MSC1_FDR_RESULT_LEN            _MSC_UL(10)

/* MSC1_FDR_SC (rw) */
#define MSC1_FDR_SC_POS                _MSC_UL(12)
#define MSC1_FDR_SC_LEN                _MSC_UL(2)

/* MSC1_FDR_STEP (rw) */
#define MSC1_FDR_STEP_POS              _MSC_UL(0)
#define MSC1_FDR_STEP_LEN              _MSC_UL(10)

/* MSC1_FDR_SUSACK (rh) */
#define MSC1_FDR_SUSACK_POS            _MSC_UL(28)
#define MSC1_FDR_SUSACK_LEN            _MSC_UL(1)

/* MSC1_FDR_SUSREQ (rh) */
#define MSC1_FDR_SUSREQ_POS            _MSC_UL(29)
#define MSC1_FDR_SUSREQ_LEN            _MSC_UL(1)

/* MSC1_ICR_ECIE (rw) */
#define MSC1_ICR_ECIE_POS              _MSC_UL(7)
#define MSC1_ICR_ECIE_LEN              _MSC_UL(1)

/* MSC1_ICR_ECIP (rw) */
#define MSC1_ICR_ECIP_POS              _MSC_UL(4)
#define MSC1_ICR_ECIP_LEN              _MSC_UL(2)

/* MSC1_ICR_EDIE (rw) */
#define MSC1_ICR_EDIE_POS              _MSC_UL(2)
#define MSC1_ICR_EDIE_LEN              _MSC_UL(2)

/* MSC1_ICR_EDIP (rw) */
#define MSC1_ICR_EDIP_POS              _MSC_UL(0)
#define MSC1_ICR_EDIP_LEN              _MSC_UL(2)

/* MSC1_ICR_RDIE (rw) */
#define MSC1_ICR_RDIE_POS              _MSC_UL(14)
#define MSC1_ICR_RDIE_LEN              _MSC_UL(2)

/* MSC1_ICR_RDIP (rw) */
#define MSC1_ICR_RDIP_POS              _MSC_UL(12)
#define MSC1_ICR_RDIP_LEN              _MSC_UL(2)

/* MSC1_ICR_TFIE (rw) */
#define MSC1_ICR_TFIE_POS              _MSC_UL(11)
#define MSC1_ICR_TFIE_LEN              _MSC_UL(1)

/* MSC1_ICR_TFIP (rw) */
#define MSC1_ICR_TFIP_POS              _MSC_UL(8)
#define MSC1_ICR_TFIP_LEN              _MSC_UL(2)

/* MSC1_ID_MOD_NUMBER (r) */
#define MSC1_ID_MOD_NUMBER_POS         _MSC_UL(16)
#define MSC1_ID_MOD_NUMBER_LEN         _MSC_UL(16)

/* MSC1_ID_MOD_REV (r) */
#define MSC1_ID_MOD_REV_POS            _MSC_UL(0)
#define MSC1_ID_MOD_REV_LEN            _MSC_UL(8)

/* MSC1_ID_MOD_TYPE (r) */
#define MSC1_ID_MOD_TYPE_POS           _MSC_UL(8)
#define MSC1_ID_MOD_TYPE_LEN           _MSC_UL(8)

/* MSC1_ISC_CDECI (w) */
#define MSC1_ISC_CDECI_POS             _MSC_UL(1)
#define MSC1_ISC_CDECI_LEN             _MSC_UL(1)

/* MSC1_ISC_CDEDI (w) */
#define MSC1_ISC_CDEDI_POS             _MSC_UL(0)
#define MSC1_ISC_CDEDI_LEN             _MSC_UL(1)

/* MSC1_ISC_CDTFI (w) */
#define MSC1_ISC_CDTFI_POS             _MSC_UL(2)
#define MSC1_ISC_CDTFI_LEN             _MSC_UL(1)

/* MSC1_ISC_CURDI (w) */
#define MSC1_ISC_CURDI_POS             _MSC_UL(3)
#define MSC1_ISC_CURDI_LEN             _MSC_UL(1)

/* MSC1_ISC_SDECI (w) */
#define MSC1_ISC_SDECI_POS             _MSC_UL(17)
#define MSC1_ISC_SDECI_LEN             _MSC_UL(1)

/* MSC1_ISC_SDEDI (w) */
#define MSC1_ISC_SDEDI_POS             _MSC_UL(16)
#define MSC1_ISC_SDEDI_LEN             _MSC_UL(1)

/* MSC1_ISC_SDP (w) */
#define MSC1_ISC_SDP_POS               _MSC_UL(20)
#define MSC1_ISC_SDP_LEN               _MSC_UL(1)

/* MSC1_ISC_SDTFI (w) */
#define MSC1_ISC_SDTFI_POS             _MSC_UL(18)
#define MSC1_ISC_SDTFI_LEN             _MSC_UL(1)

/* MSC1_ISC_SURDI (w) */
#define MSC1_ISC_SURDI_POS             _MSC_UL(19)
#define MSC1_ISC_SURDI_LEN             _MSC_UL(1)

/* MSC1_ISR_DECI (rh) */
#define MSC1_ISR_DECI_POS              _MSC_UL(1)
#define MSC1_ISR_DECI_LEN              _MSC_UL(1)

/* MSC1_ISR_DEDI (rh) */
#define MSC1_ISR_DEDI_POS              _MSC_UL(0)
#define MSC1_ISR_DEDI_LEN              _MSC_UL(1)

/* MSC1_ISR_DTFI (rh) */
#define MSC1_ISR_DTFI_POS              _MSC_UL(2)
#define MSC1_ISR_DTFI_LEN              _MSC_UL(1)

/* MSC1_ISR_URDI (rh) */
#define MSC1_ISR_URDI_POS              _MSC_UL(3)
#define MSC1_ISR_URDI_LEN              _MSC_UL(1)

/* MSC1_OCR_CLKCTRL (rw) */
#define MSC1_OCR_CLKCTRL_POS           _MSC_UL(8)
#define MSC1_OCR_CLKCTRL_LEN           _MSC_UL(1)

/* MSC1_OCR_CLP (rw) */
#define MSC1_OCR_CLP_POS               _MSC_UL(0)
#define MSC1_OCR_CLP_LEN               _MSC_UL(1)

/* MSC1_OCR_CSC (rw) */
#define MSC1_OCR_CSC_POS               _MSC_UL(13)
#define MSC1_OCR_CSC_LEN               _MSC_UL(2)

/* MSC1_OCR_CSH (rw) */
#define MSC1_OCR_CSH_POS               _MSC_UL(11)
#define MSC1_OCR_CSH_LEN               _MSC_UL(2)

/* MSC1_OCR_CSL (rw) */
#define MSC1_OCR_CSL_POS               _MSC_UL(9)
#define MSC1_OCR_CSL_LEN               _MSC_UL(2)

/* MSC1_OCR_CSLP (rw) */
#define MSC1_OCR_CSLP_POS              _MSC_UL(2)
#define MSC1_OCR_CSLP_LEN              _MSC_UL(1)

/* MSC1_OCR_ILP (rw) */
#define MSC1_OCR_ILP_POS               _MSC_UL(3)
#define MSC1_OCR_ILP_LEN               _MSC_UL(1)

/* MSC1_OCR_SLP (rw) */
#define MSC1_OCR_SLP_POS               _MSC_UL(1)
#define MSC1_OCR_SLP_LEN               _MSC_UL(1)

/* MSC1_SRC0_CLRR (w) */
#define MSC1_SRC0_CLRR_POS             _MSC_UL(14)
#define MSC1_SRC0_CLRR_LEN             _MSC_UL(1)

/* MSC1_SRC0_SETR (w) */
#define MSC1_SRC0_SETR_POS             _MSC_UL(15)
#define MSC1_SRC0_SETR_LEN             _MSC_UL(1)

/* MSC1_SRC0_SRE (rw) */
#define MSC1_SRC0_SRE_POS              _MSC_UL(12)
#define MSC1_SRC0_SRE_LEN              _MSC_UL(1)

/* MSC1_SRC0_SRPN (rw) */
#define MSC1_SRC0_SRPN_POS             _MSC_UL(0)
#define MSC1_SRC0_SRPN_LEN             _MSC_UL(8)

/* MSC1_SRC0_SRR (rh) */
#define MSC1_SRC0_SRR_POS              _MSC_UL(13)
#define MSC1_SRC0_SRR_LEN              _MSC_UL(1)

/* MSC1_SRC0_TOS (rw) */
#define MSC1_SRC0_TOS_POS              _MSC_UL(10)
#define MSC1_SRC0_TOS_LEN              _MSC_UL(1)

/* MSC1_SRC1_CLRR (w) */
#define MSC1_SRC1_CLRR_POS             _MSC_UL(14)
#define MSC1_SRC1_CLRR_LEN             _MSC_UL(1)

/* MSC1_SRC1_SETR (w) */
#define MSC1_SRC1_SETR_POS             _MSC_UL(15)
#define MSC1_SRC1_SETR_LEN             _MSC_UL(1)

/* MSC1_SRC1_SRE (rw) */
#define MSC1_SRC1_SRE_POS              _MSC_UL(12)
#define MSC1_SRC1_SRE_LEN              _MSC_UL(1)

/* MSC1_SRC1_SRPN (rw) */
#define MSC1_SRC1_SRPN_POS             _MSC_UL(0)
#define MSC1_SRC1_SRPN_LEN             _MSC_UL(8)

/* MSC1_SRC1_SRR (rh) */
#define MSC1_SRC1_SRR_POS              _MSC_UL(13)
#define MSC1_SRC1_SRR_LEN              _MSC_UL(1)

/* MSC1_SRC1_TOS (rw) */
#define MSC1_SRC1_TOS_POS              _MSC_UL(10)
#define MSC1_SRC1_TOS_LEN              _MSC_UL(1)

/* MSC1_UD_C (w) */
#define MSC1_UD_C_POS                  _MSC_UL(18)
#define MSC1_UD_C_LEN                  _MSC_UL(1)

/* MSC1_UD_DATA (rh) */
#define MSC1_UD_DATA_POS               _MSC_UL(0)
#define MSC1_UD_DATA_LEN               _MSC_UL(8)

/* MSC1_UD_IPF (rh) */
#define MSC1_UD_IPF_POS                _MSC_UL(21)
#define MSC1_UD_IPF_LEN                _MSC_UL(1)

/* MSC1_UD_LABF (rh) */
#define MSC1_UD_LABF_POS               _MSC_UL(19)
#define MSC1_UD_LABF_LEN               _MSC_UL(2)

/* MSC1_UD_P (rh) */
#define MSC1_UD_P_POS                  _MSC_UL(17)
#define MSC1_UD_P_LEN                  _MSC_UL(1)

/* MSC1_UD_PERR (rh) */
#define MSC1_UD_PERR_POS               _MSC_UL(22)
#define MSC1_UD_PERR_LEN               _MSC_UL(1)

/* MSC1_UD_V (rh) */
#define MSC1_UD_V_POS                  _MSC_UL(16)
#define MSC1_UD_V_LEN                  _MSC_UL(1)

/* MSC1_USR_PCTR (rw) */
#define MSC1_USR_PCTR_POS              _MSC_UL(4)
#define MSC1_USR_PCTR_LEN              _MSC_UL(1)

/* MSC1_USR_UC (rh) */
#define MSC1_USR_UC_POS                _MSC_UL(16)
#define MSC1_USR_UC_LEN                _MSC_UL(5)

/* MSC1_USR_UFT (rw) */
#define MSC1_USR_UFT_POS               _MSC_UL(0)
#define MSC1_USR_UFT_LEN               _MSC_UL(1)

/* MSC1_USR_URR (rw) */
#define MSC1_USR_URR_POS               _MSC_UL(1)
#define MSC1_USR_URR_LEN               _MSC_UL(3)

#endif
