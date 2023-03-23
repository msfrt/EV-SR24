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
 * $Filename__:adc_1796.h$ 
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
 * $Name______:adc_1796$ 
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
 *      File name: adc_1796.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _ADC_1796_H
#define _ADC_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _ADC_UL(x) x
#else
    #define _ADC_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module ADC0 on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0100x00] : ADC Clock Control Register
    volatile uint32 RESERVED0[1];        // [0xF0100x04...0xF0100x07] : reserved space
    volatile uint32 ID;                  // [0xF0100x08] : ADC Module Identification Register
    volatile uint32 FDR;                 // [0xF0100x0C] : ADC Fractional Divider Register
    volatile uint32 CHCON[16];           // [0xF0100x10] : ADC Channel Control Registers
    volatile uint32 RESERVED1[13];       // [0xF0100x50...0xF0100x83] : reserved space
    volatile uint32 AP;                  // [0xF0100x84] : ADC Arbitration Participation Register
    volatile uint32 SAL;                 // [0xF0100x88] : ADC Source Arbitration Level Register
    volatile uint32 TTC;                 // [0xF0100x8C] : ADC Timer Trigger Control Register
    volatile uint32 EXTC;                // [0xF0100x90] : ADC External Trigger Control Register
    volatile uint32 RESERVED2[1];        // [0xF0100x94...0xF0100x97] : reserved space
    volatile uint32 SCON;                // [0xF0100x98] : ADC Source Control Register
    volatile uint32 RESERVED3[1];        // [0xF0100x9C...0xF0100x9F] : reserved space
    volatile uint32 QUEUET[16];          // [0xF0100xA0] : ADC Queue Test Registers
    volatile uint32 RESERVED4[8];        // [0xF0100xE0...0xF0100xFF] : reserved space
    volatile uint32 LCCON[4];            // [0xF0100x00] : ADC Limit Check Control Registers
    volatile uint32 RESERVED5[1];        // [0xF0100x10...0xF0100x13] : reserved space
    volatile uint32 TCON;                // [0xF0100x14] : ADC Timer Control Register
    volatile uint32 CHIN;                // [0xF0100x18] : ADC Channel Injection Control Register
    volatile uint32 QR;                  // [0xF0100x1C] : ADC Queue Register
    volatile uint32 CON;                 // [0xF0100x20] : ADC Converter Control Register
    volatile uint32 SCN;                 // [0xF0100x24] : ADC Auto Scan Control Register
    volatile uint32 REQ0;                // [0xF0100x28] : ADC Conversion Request Register SW0
    volatile uint32 RESERVED6[1];        // [0xF0100x2C...0xF0100x2F] : reserved space
    volatile uint32 CHSTAT[16];          // [0xF0100x30] : ADC Channel Status Registers
    volatile uint32 QUEUE0;              // [0xF0100x70] : ADC Queue Status Register
    volatile uint32 RESERVED7[3];        // [0xF0100x74...0xF0100x7F] : reserved space
    volatile uint32 SW0CRP;              // [0xF0100x80] : ADC Software SW0 Conversion Request Pending Register
    volatile uint32 RESERVED8[1];        // [0xF0100x84...0xF0100x87] : reserved space
    volatile uint32 ASCRP;               // [0xF0100x88] : ADC Auto Scan Conversion Request Pending Register
    volatile uint32 RESERVED9[1];        // [0xF0100x8C...0xF0100x8F] : reserved space
    volatile uint32 SYSTAT;              // [0xF0100x90] : ADC Synchronization Injection Status Register
    volatile uint32 RESERVED10[3];       // [0xF0100x94...0xF0100x9F] : reserved space
    volatile uint32 BARRACUDAOUT;        // [0xF0100xA0] : ADC Barracuda Out Test Register
    volatile uint32 BARRACUDAIN;         // [0xF0100xA4] : ADC Barracuda In Test Register
    volatile uint32 RESERVED11[2];       // [0xF0100xA8...0xF0100xAF] : reserved space
    volatile uint32 TSTAT;               // [0xF0100xB0] : ADC Timer Status Register
    volatile uint32 STAT;                // [0xF0100xB4] : ADC Converter Status Register
    volatile uint32 TCRP;                // [0xF0100xB8] : ADC Timer Conversion Request Pending Register
    volatile uint32 EXCRP;               // [0xF0100xBC] : ADC External Event Conversion Request Pending Register
    volatile uint32 TEST;                // [0xF0100xC0] : ADC Test Register
    volatile uint32 RESERVED12[3];       // [0xF0100xC4...0xF0100xCF] : reserved space
    volatile uint32 MSS0;                // [0xF0100xD0] : ADC Module Service Request Status Register 0
    volatile uint32 MSS1;                // [0xF0100xD4] : ADC Module Service Request Status Register 1
    volatile uint32 RESERVED13[1];       // [0xF0100xD8...0xF0100xDB] : reserved space
    volatile uint32 SRNP;                // [0xF0100xDC] : ADC Service Request Node Pointer Register
    volatile uint32 RESERVED14[4];       // [0xF0100xE0...0xF0100xEF] : reserved space
    volatile uint32 SRC3;                // [0xF0100xF0] : ADC Service Request Control Register 3
    volatile uint32 SRC2;                // [0xF0100xF4] : ADC Service Request Control Register 2
    volatile uint32 SRC1;                // [0xF0100xF8] : ADC Service Request Control Register 1
    volatile uint32 SRC0;                // [0xF0100xFC] : ADC Service Request Control Register 0
} ADC_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern ADC_RegMap_t ADC0 __attribute__ ((asection (".bss.label_only")));
extern ADC_RegMap_t ADC1 __attribute__ ((asection (".bss.label_only")));
extern ADC_RegMap_t ADC[2] __attribute__ ((asection (".bss.label_only")));

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

/* ADC0_AP_ASP (rwh) */
#define ADC0_AP_ASP_POS                _ADC_UL(0)
#define ADC0_AP_ASP_LEN                _ADC_UL(1)

/* ADC0_AP_CHP (rwh) */
#define ADC0_AP_CHP_POS                _ADC_UL(7)
#define ADC0_AP_CHP_LEN                _ADC_UL(1)

/* ADC0_AP_EXP (rwh) */
#define ADC0_AP_EXP_POS                _ADC_UL(4)
#define ADC0_AP_EXP_LEN                _ADC_UL(1)

/* ADC0_AP_QP (rwh) */
#define ADC0_AP_QP_POS                 _ADC_UL(1)
#define ADC0_AP_QP_LEN                 _ADC_UL(1)

/* ADC0_AP_SW0P (rwh) */
#define ADC0_AP_SW0P_POS               _ADC_UL(3)
#define ADC0_AP_SW0P_LEN               _ADC_UL(1)

/* ADC0_AP_TP (rwh) */
#define ADC0_AP_TP_POS                 _ADC_UL(6)
#define ADC0_AP_TP_LEN                 _ADC_UL(1)

/* ADC0_ASCRP_ASCRP0 (rh) */
#define ADC0_ASCRP_ASCRP0_POS          _ADC_UL(0)
#define ADC0_ASCRP_ASCRP0_LEN          _ADC_UL(1)

/* ADC0_ASCRP_ASCRP1 (rh) */
#define ADC0_ASCRP_ASCRP1_POS          _ADC_UL(1)
#define ADC0_ASCRP_ASCRP1_LEN          _ADC_UL(1)

/* ADC0_ASCRP_ASCRP10 (rh) */
#define ADC0_ASCRP_ASCRP10_POS         _ADC_UL(10)
#define ADC0_ASCRP_ASCRP10_LEN         _ADC_UL(1)

/* ADC0_ASCRP_ASCRP11 (rh) */
#define ADC0_ASCRP_ASCRP11_POS         _ADC_UL(11)
#define ADC0_ASCRP_ASCRP11_LEN         _ADC_UL(1)

/* ADC0_ASCRP_ASCRP12 (rh) */
#define ADC0_ASCRP_ASCRP12_POS         _ADC_UL(12)
#define ADC0_ASCRP_ASCRP12_LEN         _ADC_UL(1)

/* ADC0_ASCRP_ASCRP13 (rh) */
#define ADC0_ASCRP_ASCRP13_POS         _ADC_UL(13)
#define ADC0_ASCRP_ASCRP13_LEN         _ADC_UL(1)

/* ADC0_ASCRP_ASCRP14 (rh) */
#define ADC0_ASCRP_ASCRP14_POS         _ADC_UL(14)
#define ADC0_ASCRP_ASCRP14_LEN         _ADC_UL(1)

/* ADC0_ASCRP_ASCRP15 (rh) */
#define ADC0_ASCRP_ASCRP15_POS         _ADC_UL(15)
#define ADC0_ASCRP_ASCRP15_LEN         _ADC_UL(1)

/* ADC0_ASCRP_ASCRP2 (rh) */
#define ADC0_ASCRP_ASCRP2_POS          _ADC_UL(2)
#define ADC0_ASCRP_ASCRP2_LEN          _ADC_UL(1)

/* ADC0_ASCRP_ASCRP3 (rh) */
#define ADC0_ASCRP_ASCRP3_POS          _ADC_UL(3)
#define ADC0_ASCRP_ASCRP3_LEN          _ADC_UL(1)

/* ADC0_ASCRP_ASCRP4 (rh) */
#define ADC0_ASCRP_ASCRP4_POS          _ADC_UL(4)
#define ADC0_ASCRP_ASCRP4_LEN          _ADC_UL(1)

/* ADC0_ASCRP_ASCRP5 (rh) */
#define ADC0_ASCRP_ASCRP5_POS          _ADC_UL(5)
#define ADC0_ASCRP_ASCRP5_LEN          _ADC_UL(1)

/* ADC0_ASCRP_ASCRP6 (rh) */
#define ADC0_ASCRP_ASCRP6_POS          _ADC_UL(6)
#define ADC0_ASCRP_ASCRP6_LEN          _ADC_UL(1)

/* ADC0_ASCRP_ASCRP7 (rh) */
#define ADC0_ASCRP_ASCRP7_POS          _ADC_UL(7)
#define ADC0_ASCRP_ASCRP7_LEN          _ADC_UL(1)

/* ADC0_ASCRP_ASCRP8 (rh) */
#define ADC0_ASCRP_ASCRP8_POS          _ADC_UL(8)
#define ADC0_ASCRP_ASCRP8_LEN          _ADC_UL(1)

/* ADC0_ASCRP_ASCRP9 (rh) */
#define ADC0_ASCRP_ASCRP9_POS          _ADC_UL(9)
#define ADC0_ASCRP_ASCRP9_LEN          _ADC_UL(1)

/* ADC0_ASCRP_GRPS (rh) */
#define ADC0_ASCRP_GRPS_POS            _ADC_UL(31)
#define ADC0_ASCRP_GRPS_LEN            _ADC_UL(1)

/* ADC0_BARRACUDAIN_reserved (rw) */
#define ADC0_BARRACUDAIN_reserved_POS  _ADC_UL(0)
#define ADC0_BARRACUDAIN_reserved_LEN  _ADC_UL(32)

/* ADC0_BARRACUDAOUT_reserved (rw) */
#define ADC0_BARRACUDAOUT_reserved_POS _ADC_UL(0)
#define ADC0_BARRACUDAOUT_reserved_LEN _ADC_UL(32)

/* ADC0_CHCON_BSELA (rw) */
#define ADC0_CHCON_BSELA_POS           _ADC_UL(18)
#define ADC0_CHCON_BSELA_LEN           _ADC_UL(2)

/* ADC0_CHCON_BSELB (rw) */
#define ADC0_CHCON_BSELB_POS           _ADC_UL(16)
#define ADC0_CHCON_BSELB_LEN           _ADC_UL(2)

/* ADC0_CHCON_EMUX (rw) */
#define ADC0_CHCON_EMUX_POS            _ADC_UL(12)
#define ADC0_CHCON_EMUX_LEN            _ADC_UL(2)

/* ADC0_CHCON_ENCH (rw) */
#define ADC0_CHCON_ENCH_POS            _ADC_UL(23)
#define ADC0_CHCON_ENCH_LEN            _ADC_UL(1)

/* ADC0_CHCON_GRPS (rw) */
#define ADC0_CHCON_GRPS_POS            _ADC_UL(14)
#define ADC0_CHCON_GRPS_LEN            _ADC_UL(1)

/* ADC0_CHCON_INP (rw) */
#define ADC0_CHCON_INP_POS             _ADC_UL(24)
#define ADC0_CHCON_INP_LEN             _ADC_UL(3)

/* ADC0_CHCON_LCC (rw) */
#define ADC0_CHCON_LCC_POS             _ADC_UL(20)
#define ADC0_CHCON_LCC_LEN             _ADC_UL(3)

/* ADC0_CHCON_REF (rw) */
#define ADC0_CHCON_REF_POS             _ADC_UL(8)
#define ADC0_CHCON_REF_LEN             _ADC_UL(2)

/* ADC0_CHCON_RES (rw) */
#define ADC0_CHCON_RES_POS             _ADC_UL(10)
#define ADC0_CHCON_RES_LEN             _ADC_UL(2)

/* ADC0_CHCON_STC (rw) */
#define ADC0_CHCON_STC_POS             _ADC_UL(0)
#define ADC0_CHCON_STC_LEN             _ADC_UL(8)

/* ADC0_CHCON_SYM (rw) */
#define ADC0_CHCON_SYM_POS             _ADC_UL(28)
#define ADC0_CHCON_SYM_LEN             _ADC_UL(2)

/* ADC0_CHIN_CHNRIN (rw) */
#define ADC0_CHIN_CHNRIN_POS           _ADC_UL(0)
#define ADC0_CHIN_CHNRIN_LEN           _ADC_UL(4)

/* ADC0_CHIN_CINREQ (rw) */
#define ADC0_CHIN_CINREQ_POS           _ADC_UL(31)
#define ADC0_CHIN_CINREQ_LEN           _ADC_UL(1)

/* ADC0_CHIN_CIREN (rw) */
#define ADC0_CHIN_CIREN_POS            _ADC_UL(15)
#define ADC0_CHIN_CIREN_LEN            _ADC_UL(1)

/* ADC0_CHIN_EMUX (rw) */
#define ADC0_CHIN_EMUX_POS             _ADC_UL(8)
#define ADC0_CHIN_EMUX_LEN             _ADC_UL(2)

/* ADC0_CHIN_GRPS (rw) */
#define ADC0_CHIN_GRPS_POS             _ADC_UL(10)
#define ADC0_CHIN_GRPS_LEN             _ADC_UL(1)

/* ADC0_CHIN_RES (rw) */
#define ADC0_CHIN_RES_POS              _ADC_UL(6)
#define ADC0_CHIN_RES_LEN              _ADC_UL(2)

/* ADC0_CHSTAT_CHNR (rh) */
#define ADC0_CHSTAT_CHNR_POS           _ADC_UL(24)
#define ADC0_CHSTAT_CHNR_LEN           _ADC_UL(4)

/* ADC0_CHSTAT_CRS (rh) */
#define ADC0_CHSTAT_CRS_POS            _ADC_UL(20)
#define ADC0_CHSTAT_CRS_LEN            _ADC_UL(3)

/* ADC0_CHSTAT_EMUX (rh) */
#define ADC0_CHSTAT_EMUX_POS           _ADC_UL(16)
#define ADC0_CHSTAT_EMUX_LEN           _ADC_UL(2)

/* ADC0_CHSTAT_GRPS (rh) */
#define ADC0_CHSTAT_GRPS_POS           _ADC_UL(18)
#define ADC0_CHSTAT_GRPS_LEN           _ADC_UL(1)

/* ADC0_CHSTAT_RESULT (rh) */
#define ADC0_CHSTAT_RESULT_POS         _ADC_UL(0)
#define ADC0_CHSTAT_RESULT_LEN         _ADC_UL(12)

/* ADC0_CLC_DISR (rw) */
#define ADC0_CLC_DISR_POS              _ADC_UL(0)
#define ADC0_CLC_DISR_LEN              _ADC_UL(1)

/* ADC0_CLC_DISS (r) */
#define ADC0_CLC_DISS_POS              _ADC_UL(1)
#define ADC0_CLC_DISS_LEN              _ADC_UL(1)

/* ADC0_CLC_EDIS (rw) */
#define ADC0_CLC_EDIS_POS              _ADC_UL(3)
#define ADC0_CLC_EDIS_LEN              _ADC_UL(1)

/* ADC0_CLC_FSOE (rw) */
#define ADC0_CLC_FSOE_POS              _ADC_UL(5)
#define ADC0_CLC_FSOE_LEN              _ADC_UL(1)

/* ADC0_CLC_SBWE (w) */
#define ADC0_CLC_SBWE_POS              _ADC_UL(4)
#define ADC0_CLC_SBWE_LEN              _ADC_UL(1)

/* ADC0_CLC_SPEN (rw) */
#define ADC0_CLC_SPEN_POS              _ADC_UL(2)
#define ADC0_CLC_SPEN_LEN              _ADC_UL(1)

/* ADC0_CON_CPR (rw) */
#define ADC0_CON_CPR_POS               _ADC_UL(28)
#define ADC0_CON_CPR_LEN               _ADC_UL(1)

/* ADC0_CON_CTC (rw) */
#define ADC0_CON_CTC_POS               _ADC_UL(0)
#define ADC0_CON_CTC_LEN               _ADC_UL(8)

/* ADC0_CON_QEN (rh) */
#define ADC0_CON_QEN_POS               _ADC_UL(15)
#define ADC0_CON_QEN_LEN               _ADC_UL(1)

/* ADC0_CON_QWLP (rw) */
#define ADC0_CON_QWLP_POS              _ADC_UL(16)
#define ADC0_CON_QWLP_LEN              _ADC_UL(4)

/* ADC0_CON_SCNM (rw) */
#define ADC0_CON_SCNM_POS              _ADC_UL(8)
#define ADC0_CON_SCNM_LEN              _ADC_UL(2)

/* ADC0_CON_SRTEST (rw) */
#define ADC0_CON_SRTEST_POS            _ADC_UL(31)
#define ADC0_CON_SRTEST_LEN            _ADC_UL(1)

/* ADC0_EXCRP_EXCRP0 (rh) */
#define ADC0_EXCRP_EXCRP0_POS          _ADC_UL(0)
#define ADC0_EXCRP_EXCRP0_LEN          _ADC_UL(1)

/* ADC0_EXCRP_EXCRP1 (rh) */
#define ADC0_EXCRP_EXCRP1_POS          _ADC_UL(1)
#define ADC0_EXCRP_EXCRP1_LEN          _ADC_UL(1)

/* ADC0_EXCRP_EXCRP10 (rh) */
#define ADC0_EXCRP_EXCRP10_POS         _ADC_UL(10)
#define ADC0_EXCRP_EXCRP10_LEN         _ADC_UL(1)

/* ADC0_EXCRP_EXCRP11 (rh) */
#define ADC0_EXCRP_EXCRP11_POS         _ADC_UL(11)
#define ADC0_EXCRP_EXCRP11_LEN         _ADC_UL(1)

/* ADC0_EXCRP_EXCRP12 (rh) */
#define ADC0_EXCRP_EXCRP12_POS         _ADC_UL(12)
#define ADC0_EXCRP_EXCRP12_LEN         _ADC_UL(1)

/* ADC0_EXCRP_EXCRP13 (rh) */
#define ADC0_EXCRP_EXCRP13_POS         _ADC_UL(13)
#define ADC0_EXCRP_EXCRP13_LEN         _ADC_UL(1)

/* ADC0_EXCRP_EXCRP14 (rh) */
#define ADC0_EXCRP_EXCRP14_POS         _ADC_UL(14)
#define ADC0_EXCRP_EXCRP14_LEN         _ADC_UL(1)

/* ADC0_EXCRP_EXCRP15 (rh) */
#define ADC0_EXCRP_EXCRP15_POS         _ADC_UL(15)
#define ADC0_EXCRP_EXCRP15_LEN         _ADC_UL(1)

/* ADC0_EXCRP_EXCRP2 (rh) */
#define ADC0_EXCRP_EXCRP2_POS          _ADC_UL(2)
#define ADC0_EXCRP_EXCRP2_LEN          _ADC_UL(1)

/* ADC0_EXCRP_EXCRP3 (rh) */
#define ADC0_EXCRP_EXCRP3_POS          _ADC_UL(3)
#define ADC0_EXCRP_EXCRP3_LEN          _ADC_UL(1)

/* ADC0_EXCRP_EXCRP4 (rh) */
#define ADC0_EXCRP_EXCRP4_POS          _ADC_UL(4)
#define ADC0_EXCRP_EXCRP4_LEN          _ADC_UL(1)

/* ADC0_EXCRP_EXCRP5 (rh) */
#define ADC0_EXCRP_EXCRP5_POS          _ADC_UL(5)
#define ADC0_EXCRP_EXCRP5_LEN          _ADC_UL(1)

/* ADC0_EXCRP_EXCRP6 (rh) */
#define ADC0_EXCRP_EXCRP6_POS          _ADC_UL(6)
#define ADC0_EXCRP_EXCRP6_LEN          _ADC_UL(1)

/* ADC0_EXCRP_EXCRP7 (rh) */
#define ADC0_EXCRP_EXCRP7_POS          _ADC_UL(7)
#define ADC0_EXCRP_EXCRP7_LEN          _ADC_UL(1)

/* ADC0_EXCRP_EXCRP8 (rh) */
#define ADC0_EXCRP_EXCRP8_POS          _ADC_UL(8)
#define ADC0_EXCRP_EXCRP8_LEN          _ADC_UL(1)

/* ADC0_EXCRP_EXCRP9 (rh) */
#define ADC0_EXCRP_EXCRP9_POS          _ADC_UL(9)
#define ADC0_EXCRP_EXCRP9_LEN          _ADC_UL(1)

/* ADC0_EXTC_ETCCH0 (rw) */
#define ADC0_EXTC_ETCCH0_POS           _ADC_UL(0)
#define ADC0_EXTC_ETCCH0_LEN           _ADC_UL(1)

/* ADC0_EXTC_ETCCH1 (rw) */
#define ADC0_EXTC_ETCCH1_POS           _ADC_UL(1)
#define ADC0_EXTC_ETCCH1_LEN           _ADC_UL(1)

/* ADC0_EXTC_ETCCH10 (rw) */
#define ADC0_EXTC_ETCCH10_POS          _ADC_UL(10)
#define ADC0_EXTC_ETCCH10_LEN          _ADC_UL(1)

/* ADC0_EXTC_ETCCH11 (rw) */
#define ADC0_EXTC_ETCCH11_POS          _ADC_UL(11)
#define ADC0_EXTC_ETCCH11_LEN          _ADC_UL(1)

/* ADC0_EXTC_ETCCH12 (rw) */
#define ADC0_EXTC_ETCCH12_POS          _ADC_UL(12)
#define ADC0_EXTC_ETCCH12_LEN          _ADC_UL(1)

/* ADC0_EXTC_ETCCH13 (rw) */
#define ADC0_EXTC_ETCCH13_POS          _ADC_UL(13)
#define ADC0_EXTC_ETCCH13_LEN          _ADC_UL(1)

/* ADC0_EXTC_ETCCH14 (rw) */
#define ADC0_EXTC_ETCCH14_POS          _ADC_UL(14)
#define ADC0_EXTC_ETCCH14_LEN          _ADC_UL(1)

/* ADC0_EXTC_ETCCH15 (rw) */
#define ADC0_EXTC_ETCCH15_POS          _ADC_UL(15)
#define ADC0_EXTC_ETCCH15_LEN          _ADC_UL(1)

/* ADC0_EXTC_ETCCH2 (rw) */
#define ADC0_EXTC_ETCCH2_POS           _ADC_UL(2)
#define ADC0_EXTC_ETCCH2_LEN           _ADC_UL(1)

/* ADC0_EXTC_ETCCH3 (rw) */
#define ADC0_EXTC_ETCCH3_POS           _ADC_UL(3)
#define ADC0_EXTC_ETCCH3_LEN           _ADC_UL(1)

/* ADC0_EXTC_ETCCH4 (rw) */
#define ADC0_EXTC_ETCCH4_POS           _ADC_UL(4)
#define ADC0_EXTC_ETCCH4_LEN           _ADC_UL(1)

/* ADC0_EXTC_ETCCH5 (rw) */
#define ADC0_EXTC_ETCCH5_POS           _ADC_UL(5)
#define ADC0_EXTC_ETCCH5_LEN           _ADC_UL(1)

/* ADC0_EXTC_ETCCH6 (rw) */
#define ADC0_EXTC_ETCCH6_POS           _ADC_UL(6)
#define ADC0_EXTC_ETCCH6_LEN           _ADC_UL(1)

/* ADC0_EXTC_ETCCH7 (rw) */
#define ADC0_EXTC_ETCCH7_POS           _ADC_UL(7)
#define ADC0_EXTC_ETCCH7_LEN           _ADC_UL(1)

/* ADC0_EXTC_ETCCH8 (rw) */
#define ADC0_EXTC_ETCCH8_POS           _ADC_UL(8)
#define ADC0_EXTC_ETCCH8_LEN           _ADC_UL(1)

/* ADC0_EXTC_ETCCH9 (rw) */
#define ADC0_EXTC_ETCCH9_POS           _ADC_UL(9)
#define ADC0_EXTC_ETCCH9_LEN           _ADC_UL(1)

/* ADC0_FDR_DISCLK (rwh) */
#define ADC0_FDR_DISCLK_POS            _ADC_UL(31)
#define ADC0_FDR_DISCLK_LEN            _ADC_UL(1)

/* ADC0_FDR_DM (rw) */
#define ADC0_FDR_DM_POS                _ADC_UL(14)
#define ADC0_FDR_DM_LEN                _ADC_UL(2)

/* ADC0_FDR_ENHW (rw) */
#define ADC0_FDR_ENHW_POS              _ADC_UL(30)
#define ADC0_FDR_ENHW_LEN              _ADC_UL(1)

/* ADC0_FDR_RESULT (rw) */
#define ADC0_FDR_RESULT_POS            _ADC_UL(16)
#define ADC0_FDR_RESULT_LEN            _ADC_UL(10)

/* ADC0_FDR_SC (rw) */
#define ADC0_FDR_SC_POS                _ADC_UL(12)
#define ADC0_FDR_SC_LEN                _ADC_UL(2)

/* ADC0_FDR_STEP (rw) */
#define ADC0_FDR_STEP_POS              _ADC_UL(0)
#define ADC0_FDR_STEP_LEN              _ADC_UL(10)

/* ADC0_FDR_SUSACK (rh) */
#define ADC0_FDR_SUSACK_POS            _ADC_UL(28)
#define ADC0_FDR_SUSACK_LEN            _ADC_UL(1)

/* ADC0_FDR_SUSREQ (rh) */
#define ADC0_FDR_SUSREQ_POS            _ADC_UL(29)
#define ADC0_FDR_SUSREQ_LEN            _ADC_UL(1)

/* ADC0_ID_Mod_Number (r) */
#define ADC0_ID_Mod_Number_POS         _ADC_UL(16)
#define ADC0_ID_Mod_Number_LEN         _ADC_UL(16)

/* ADC0_ID_Mod_Rev (r) */
#define ADC0_ID_Mod_Rev_POS            _ADC_UL(0)
#define ADC0_ID_Mod_Rev_LEN            _ADC_UL(8)

/* ADC0_ID_Mod_Type (r) */
#define ADC0_ID_Mod_Type_POS           _ADC_UL(8)
#define ADC0_ID_Mod_Type_LEN           _ADC_UL(8)

/* ADC0_LCCON_BOUNDARY (rw) */
#define ADC0_LCCON_BOUNDARY_POS        _ADC_UL(0)
#define ADC0_LCCON_BOUNDARY_LEN        _ADC_UL(12)

/* ADC0_MSS0_MSRCH0 (rwh) */
#define ADC0_MSS0_MSRCH0_POS           _ADC_UL(0)
#define ADC0_MSS0_MSRCH0_LEN           _ADC_UL(1)

/* ADC0_MSS0_MSRCH1 (rwh) */
#define ADC0_MSS0_MSRCH1_POS           _ADC_UL(1)
#define ADC0_MSS0_MSRCH1_LEN           _ADC_UL(1)

/* ADC0_MSS0_MSRCH10 (rwh) */
#define ADC0_MSS0_MSRCH10_POS          _ADC_UL(10)
#define ADC0_MSS0_MSRCH10_LEN          _ADC_UL(1)

/* ADC0_MSS0_MSRCH11 (rwh) */
#define ADC0_MSS0_MSRCH11_POS          _ADC_UL(11)
#define ADC0_MSS0_MSRCH11_LEN          _ADC_UL(1)

/* ADC0_MSS0_MSRCH12 (rwh) */
#define ADC0_MSS0_MSRCH12_POS          _ADC_UL(12)
#define ADC0_MSS0_MSRCH12_LEN          _ADC_UL(1)

/* ADC0_MSS0_MSRCH13 (rwh) */
#define ADC0_MSS0_MSRCH13_POS          _ADC_UL(13)
#define ADC0_MSS0_MSRCH13_LEN          _ADC_UL(1)

/* ADC0_MSS0_MSRCH14 (rwh) */
#define ADC0_MSS0_MSRCH14_POS          _ADC_UL(14)
#define ADC0_MSS0_MSRCH14_LEN          _ADC_UL(1)

/* ADC0_MSS0_MSRCH15 (rwh) */
#define ADC0_MSS0_MSRCH15_POS          _ADC_UL(15)
#define ADC0_MSS0_MSRCH15_LEN          _ADC_UL(1)

/* ADC0_MSS0_MSRCH2 (rwh) */
#define ADC0_MSS0_MSRCH2_POS           _ADC_UL(2)
#define ADC0_MSS0_MSRCH2_LEN           _ADC_UL(1)

/* ADC0_MSS0_MSRCH3 (rwh) */
#define ADC0_MSS0_MSRCH3_POS           _ADC_UL(3)
#define ADC0_MSS0_MSRCH3_LEN           _ADC_UL(1)

/* ADC0_MSS0_MSRCH4 (rwh) */
#define ADC0_MSS0_MSRCH4_POS           _ADC_UL(4)
#define ADC0_MSS0_MSRCH4_LEN           _ADC_UL(1)

/* ADC0_MSS0_MSRCH5 (rwh) */
#define ADC0_MSS0_MSRCH5_POS           _ADC_UL(5)
#define ADC0_MSS0_MSRCH5_LEN           _ADC_UL(1)

/* ADC0_MSS0_MSRCH6 (rwh) */
#define ADC0_MSS0_MSRCH6_POS           _ADC_UL(6)
#define ADC0_MSS0_MSRCH6_LEN           _ADC_UL(1)

/* ADC0_MSS0_MSRCH7 (rwh) */
#define ADC0_MSS0_MSRCH7_POS           _ADC_UL(7)
#define ADC0_MSS0_MSRCH7_LEN           _ADC_UL(1)

/* ADC0_MSS0_MSRCH8 (rwh) */
#define ADC0_MSS0_MSRCH8_POS           _ADC_UL(8)
#define ADC0_MSS0_MSRCH8_LEN           _ADC_UL(1)

/* ADC0_MSS0_MSRCH9 (rwh) */
#define ADC0_MSS0_MSRCH9_POS           _ADC_UL(9)
#define ADC0_MSS0_MSRCH9_LEN           _ADC_UL(1)

/* ADC0_MSS1_MSRAS (rwh) */
#define ADC0_MSS1_MSRAS_POS            _ADC_UL(3)
#define ADC0_MSS1_MSRAS_LEN            _ADC_UL(1)

/* ADC0_MSS1_MSRQR (rwh) */
#define ADC0_MSS1_MSRQR_POS            _ADC_UL(2)
#define ADC0_MSS1_MSRQR_LEN            _ADC_UL(1)

/* ADC0_MSS1_MSRSY (rwh) */
#define ADC0_MSS1_MSRSY_POS            _ADC_UL(1)
#define ADC0_MSS1_MSRSY_LEN            _ADC_UL(1)

/* ADC0_MSS1_MSRT (rwh) */
#define ADC0_MSS1_MSRT_POS             _ADC_UL(0)
#define ADC0_MSS1_MSRT_LEN             _ADC_UL(1)

/* ADC0_QR_CHNR (rw) */
#define ADC0_QR_CHNR_POS               _ADC_UL(0)
#define ADC0_QR_CHNR_LEN               _ADC_UL(4)

/* ADC0_QR_EMUX (rw) */
#define ADC0_QR_EMUX_POS               _ADC_UL(8)
#define ADC0_QR_EMUX_LEN               _ADC_UL(2)

/* ADC0_QR_GRPS (rw) */
#define ADC0_QR_GRPS_POS               _ADC_UL(10)
#define ADC0_QR_GRPS_LEN               _ADC_UL(1)

/* ADC0_QR_RES (rw) */
#define ADC0_QR_RES_POS                _ADC_UL(6)
#define ADC0_QR_RES_LEN                _ADC_UL(2)

/* ADC0_QR_V (rwh) */
#define ADC0_QR_V_POS                  _ADC_UL(15)
#define ADC0_QR_V_LEN                  _ADC_UL(1)

/* ADC0_QUEUE0_CHNR (rh) */
#define ADC0_QUEUE0_CHNR_POS           _ADC_UL(0)
#define ADC0_QUEUE0_CHNR_LEN           _ADC_UL(4)

/* ADC0_QUEUE0_EMUX (rh) */
#define ADC0_QUEUE0_EMUX_POS           _ADC_UL(8)
#define ADC0_QUEUE0_EMUX_LEN           _ADC_UL(2)

/* ADC0_QUEUE0_GRPS (rh) */
#define ADC0_QUEUE0_GRPS_POS           _ADC_UL(10)
#define ADC0_QUEUE0_GRPS_LEN           _ADC_UL(1)

/* ADC0_QUEUE0_RES (rh) */
#define ADC0_QUEUE0_RES_POS            _ADC_UL(6)
#define ADC0_QUEUE0_RES_LEN            _ADC_UL(2)

/* ADC0_QUEUE0_V (rh) */
#define ADC0_QUEUE0_V_POS              _ADC_UL(15)
#define ADC0_QUEUE0_V_LEN              _ADC_UL(1)

/* ADC0_QUEUET_CHNR (rwh) */
#define ADC0_QUEUET_CHNR_POS           _ADC_UL(0)
#define ADC0_QUEUET_CHNR_LEN           _ADC_UL(4)

/* ADC0_QUEUET_EMUX (rwh) */
#define ADC0_QUEUET_EMUX_POS           _ADC_UL(8)
#define ADC0_QUEUET_EMUX_LEN           _ADC_UL(2)

/* ADC0_QUEUET_GRPS (rwh) */
#define ADC0_QUEUET_GRPS_POS           _ADC_UL(10)
#define ADC0_QUEUET_GRPS_LEN           _ADC_UL(1)

/* ADC0_QUEUET_RES (rwh) */
#define ADC0_QUEUET_RES_POS            _ADC_UL(6)
#define ADC0_QUEUET_RES_LEN            _ADC_UL(2)

/* ADC0_QUEUET_V (rwh) */
#define ADC0_QUEUET_V_POS              _ADC_UL(15)
#define ADC0_QUEUET_V_LEN              _ADC_UL(1)

/* ADC0_REQ0_REQ00 (rw) */
#define ADC0_REQ0_REQ00_POS            _ADC_UL(0)
#define ADC0_REQ0_REQ00_LEN            _ADC_UL(1)

/* ADC0_REQ0_REQ01 (rw) */
#define ADC0_REQ0_REQ01_POS            _ADC_UL(1)
#define ADC0_REQ0_REQ01_LEN            _ADC_UL(1)

/* ADC0_REQ0_REQ010 (rw) */
#define ADC0_REQ0_REQ010_POS           _ADC_UL(10)
#define ADC0_REQ0_REQ010_LEN           _ADC_UL(1)

/* ADC0_REQ0_REQ011 (rw) */
#define ADC0_REQ0_REQ011_POS           _ADC_UL(11)
#define ADC0_REQ0_REQ011_LEN           _ADC_UL(1)

/* ADC0_REQ0_REQ012 (rw) */
#define ADC0_REQ0_REQ012_POS           _ADC_UL(12)
#define ADC0_REQ0_REQ012_LEN           _ADC_UL(1)

/* ADC0_REQ0_REQ013 (rw) */
#define ADC0_REQ0_REQ013_POS           _ADC_UL(13)
#define ADC0_REQ0_REQ013_LEN           _ADC_UL(1)

/* ADC0_REQ0_REQ014 (rw) */
#define ADC0_REQ0_REQ014_POS           _ADC_UL(14)
#define ADC0_REQ0_REQ014_LEN           _ADC_UL(1)

/* ADC0_REQ0_REQ015 (rw) */
#define ADC0_REQ0_REQ015_POS           _ADC_UL(15)
#define ADC0_REQ0_REQ015_LEN           _ADC_UL(1)

/* ADC0_REQ0_REQ02 (rw) */
#define ADC0_REQ0_REQ02_POS            _ADC_UL(2)
#define ADC0_REQ0_REQ02_LEN            _ADC_UL(1)

/* ADC0_REQ0_REQ03 (rw) */
#define ADC0_REQ0_REQ03_POS            _ADC_UL(3)
#define ADC0_REQ0_REQ03_LEN            _ADC_UL(1)

/* ADC0_REQ0_REQ04 (rw) */
#define ADC0_REQ0_REQ04_POS            _ADC_UL(4)
#define ADC0_REQ0_REQ04_LEN            _ADC_UL(1)

/* ADC0_REQ0_REQ05 (rw) */
#define ADC0_REQ0_REQ05_POS            _ADC_UL(5)
#define ADC0_REQ0_REQ05_LEN            _ADC_UL(1)

/* ADC0_REQ0_REQ06 (rw) */
#define ADC0_REQ0_REQ06_POS            _ADC_UL(6)
#define ADC0_REQ0_REQ06_LEN            _ADC_UL(1)

/* ADC0_REQ0_REQ07 (rw) */
#define ADC0_REQ0_REQ07_POS            _ADC_UL(7)
#define ADC0_REQ0_REQ07_LEN            _ADC_UL(1)

/* ADC0_REQ0_REQ08 (rw) */
#define ADC0_REQ0_REQ08_POS            _ADC_UL(8)
#define ADC0_REQ0_REQ08_LEN            _ADC_UL(1)

/* ADC0_REQ0_REQ09 (rw) */
#define ADC0_REQ0_REQ09_POS            _ADC_UL(9)
#define ADC0_REQ0_REQ09_LEN            _ADC_UL(1)

/* ADC0_SAL_SALAS (rw) */
#define ADC0_SAL_SALAS_POS             _ADC_UL(0)
#define ADC0_SAL_SALAS_LEN             _ADC_UL(3)

/* ADC0_SAL_SALCHIN (rw) */
#define ADC0_SAL_SALCHIN_POS           _ADC_UL(28)
#define ADC0_SAL_SALCHIN_LEN           _ADC_UL(3)

/* ADC0_SAL_SALEXT (rw) */
#define ADC0_SAL_SALEXT_POS            _ADC_UL(16)
#define ADC0_SAL_SALEXT_LEN            _ADC_UL(3)

/* ADC0_SAL_SALQ (rw) */
#define ADC0_SAL_SALQ_POS              _ADC_UL(4)
#define ADC0_SAL_SALQ_LEN              _ADC_UL(3)

/* ADC0_SAL_SALSW0 (rw) */
#define ADC0_SAL_SALSW0_POS            _ADC_UL(12)
#define ADC0_SAL_SALSW0_LEN            _ADC_UL(3)

/* ADC0_SAL_SALT (rw) */
#define ADC0_SAL_SALT_POS              _ADC_UL(24)
#define ADC0_SAL_SALT_LEN              _ADC_UL(3)

/* ADC0_SCN_GRPC (rw) */
#define ADC0_SCN_GRPC_POS              _ADC_UL(30)
#define ADC0_SCN_GRPC_LEN              _ADC_UL(2)

/* ADC0_SCN_SRQ0 (rw) */
#define ADC0_SCN_SRQ0_POS              _ADC_UL(0)
#define ADC0_SCN_SRQ0_LEN              _ADC_UL(1)

/* ADC0_SCN_SRQ1 (rw) */
#define ADC0_SCN_SRQ1_POS              _ADC_UL(1)
#define ADC0_SCN_SRQ1_LEN              _ADC_UL(1)

/* ADC0_SCN_SRQ10 (rw) */
#define ADC0_SCN_SRQ10_POS             _ADC_UL(10)
#define ADC0_SCN_SRQ10_LEN             _ADC_UL(1)

/* ADC0_SCN_SRQ11 (rw) */
#define ADC0_SCN_SRQ11_POS             _ADC_UL(11)
#define ADC0_SCN_SRQ11_LEN             _ADC_UL(1)

/* ADC0_SCN_SRQ12 (rw) */
#define ADC0_SCN_SRQ12_POS             _ADC_UL(12)
#define ADC0_SCN_SRQ12_LEN             _ADC_UL(1)

/* ADC0_SCN_SRQ13 (rw) */
#define ADC0_SCN_SRQ13_POS             _ADC_UL(13)
#define ADC0_SCN_SRQ13_LEN             _ADC_UL(1)

/* ADC0_SCN_SRQ14 (rw) */
#define ADC0_SCN_SRQ14_POS             _ADC_UL(14)
#define ADC0_SCN_SRQ14_LEN             _ADC_UL(1)

/* ADC0_SCN_SRQ15 (rw) */
#define ADC0_SCN_SRQ15_POS             _ADC_UL(15)
#define ADC0_SCN_SRQ15_LEN             _ADC_UL(1)

/* ADC0_SCN_SRQ2 (rw) */
#define ADC0_SCN_SRQ2_POS              _ADC_UL(2)
#define ADC0_SCN_SRQ2_LEN              _ADC_UL(1)

/* ADC0_SCN_SRQ3 (rw) */
#define ADC0_SCN_SRQ3_POS              _ADC_UL(3)
#define ADC0_SCN_SRQ3_LEN              _ADC_UL(1)

/* ADC0_SCN_SRQ4 (rw) */
#define ADC0_SCN_SRQ4_POS              _ADC_UL(4)
#define ADC0_SCN_SRQ4_LEN              _ADC_UL(1)

/* ADC0_SCN_SRQ5 (rw) */
#define ADC0_SCN_SRQ5_POS              _ADC_UL(5)
#define ADC0_SCN_SRQ5_LEN              _ADC_UL(1)

/* ADC0_SCN_SRQ6 (rw) */
#define ADC0_SCN_SRQ6_POS              _ADC_UL(6)
#define ADC0_SCN_SRQ6_LEN              _ADC_UL(1)

/* ADC0_SCN_SRQ7 (rw) */
#define ADC0_SCN_SRQ7_POS              _ADC_UL(7)
#define ADC0_SCN_SRQ7_LEN              _ADC_UL(1)

/* ADC0_SCN_SRQ8 (rw) */
#define ADC0_SCN_SRQ8_POS              _ADC_UL(8)
#define ADC0_SCN_SRQ8_LEN              _ADC_UL(1)

/* ADC0_SCN_SRQ9 (rw) */
#define ADC0_SCN_SRQ9_POS              _ADC_UL(9)
#define ADC0_SCN_SRQ9_LEN              _ADC_UL(1)

/* ADC0_SCON_QENC (w) */
#define ADC0_SCON_QENC_POS             _ADC_UL(0)
#define ADC0_SCON_QENC_LEN             _ADC_UL(1)

/* ADC0_SCON_QENS (w) */
#define ADC0_SCON_QENS_POS             _ADC_UL(1)
#define ADC0_SCON_QENS_LEN             _ADC_UL(1)

/* ADC0_SCON_QRS (w) */
#define ADC0_SCON_QRS_POS              _ADC_UL(4)
#define ADC0_SCON_QRS_LEN              _ADC_UL(1)

/* ADC0_SCON_TRC (w) */
#define ADC0_SCON_TRC_POS              _ADC_UL(2)
#define ADC0_SCON_TRC_LEN              _ADC_UL(1)

/* ADC0_SCON_TRS (w) */
#define ADC0_SCON_TRS_POS              _ADC_UL(3)
#define ADC0_SCON_TRS_LEN              _ADC_UL(1)

/* ADC0_SRC0_CLRR (w) */
#define ADC0_SRC0_CLRR_POS             _ADC_UL(14)
#define ADC0_SRC0_CLRR_LEN             _ADC_UL(1)

/* ADC0_SRC0_SETR (w) */
#define ADC0_SRC0_SETR_POS             _ADC_UL(15)
#define ADC0_SRC0_SETR_LEN             _ADC_UL(1)

/* ADC0_SRC0_SRE (rw) */
#define ADC0_SRC0_SRE_POS              _ADC_UL(12)
#define ADC0_SRC0_SRE_LEN              _ADC_UL(1)

/* ADC0_SRC0_SRPN (rw) */
#define ADC0_SRC0_SRPN_POS             _ADC_UL(0)
#define ADC0_SRC0_SRPN_LEN             _ADC_UL(8)

/* ADC0_SRC0_SRR (rh) */
#define ADC0_SRC0_SRR_POS              _ADC_UL(13)
#define ADC0_SRC0_SRR_LEN              _ADC_UL(1)

/* ADC0_SRC0_TOS (rw) */
#define ADC0_SRC0_TOS_POS              _ADC_UL(10)
#define ADC0_SRC0_TOS_LEN              _ADC_UL(1)

/* ADC0_SRC1_CLRR (w) */
#define ADC0_SRC1_CLRR_POS             _ADC_UL(14)
#define ADC0_SRC1_CLRR_LEN             _ADC_UL(1)

/* ADC0_SRC1_SETR (w) */
#define ADC0_SRC1_SETR_POS             _ADC_UL(15)
#define ADC0_SRC1_SETR_LEN             _ADC_UL(1)

/* ADC0_SRC1_SRE (rw) */
#define ADC0_SRC1_SRE_POS              _ADC_UL(12)
#define ADC0_SRC1_SRE_LEN              _ADC_UL(1)

/* ADC0_SRC1_SRPN (rw) */
#define ADC0_SRC1_SRPN_POS             _ADC_UL(0)
#define ADC0_SRC1_SRPN_LEN             _ADC_UL(8)

/* ADC0_SRC1_SRR (rh) */
#define ADC0_SRC1_SRR_POS              _ADC_UL(13)
#define ADC0_SRC1_SRR_LEN              _ADC_UL(1)

/* ADC0_SRC1_TOS (rw) */
#define ADC0_SRC1_TOS_POS              _ADC_UL(10)
#define ADC0_SRC1_TOS_LEN              _ADC_UL(1)

/* ADC0_SRC2_CLRR (w) */
#define ADC0_SRC2_CLRR_POS             _ADC_UL(14)
#define ADC0_SRC2_CLRR_LEN             _ADC_UL(1)

/* ADC0_SRC2_SETR (w) */
#define ADC0_SRC2_SETR_POS             _ADC_UL(15)
#define ADC0_SRC2_SETR_LEN             _ADC_UL(1)

/* ADC0_SRC2_SRE (rw) */
#define ADC0_SRC2_SRE_POS              _ADC_UL(12)
#define ADC0_SRC2_SRE_LEN              _ADC_UL(1)

/* ADC0_SRC2_SRPN (rw) */
#define ADC0_SRC2_SRPN_POS             _ADC_UL(0)
#define ADC0_SRC2_SRPN_LEN             _ADC_UL(8)

/* ADC0_SRC2_SRR (rh) */
#define ADC0_SRC2_SRR_POS              _ADC_UL(13)
#define ADC0_SRC2_SRR_LEN              _ADC_UL(1)

/* ADC0_SRC2_TOS (rw) */
#define ADC0_SRC2_TOS_POS              _ADC_UL(10)
#define ADC0_SRC2_TOS_LEN              _ADC_UL(1)

/* ADC0_SRC3_CLRR (w) */
#define ADC0_SRC3_CLRR_POS             _ADC_UL(14)
#define ADC0_SRC3_CLRR_LEN             _ADC_UL(1)

/* ADC0_SRC3_SETR (w) */
#define ADC0_SRC3_SETR_POS             _ADC_UL(15)
#define ADC0_SRC3_SETR_LEN             _ADC_UL(1)

/* ADC0_SRC3_SRE (rw) */
#define ADC0_SRC3_SRE_POS              _ADC_UL(12)
#define ADC0_SRC3_SRE_LEN              _ADC_UL(1)

/* ADC0_SRC3_SRPN (rw) */
#define ADC0_SRC3_SRPN_POS             _ADC_UL(0)
#define ADC0_SRC3_SRPN_LEN             _ADC_UL(8)

/* ADC0_SRC3_SRR (rh) */
#define ADC0_SRC3_SRR_POS              _ADC_UL(13)
#define ADC0_SRC3_SRR_LEN              _ADC_UL(1)

/* ADC0_SRC3_TOS (rw) */
#define ADC0_SRC3_TOS_POS              _ADC_UL(10)
#define ADC0_SRC3_TOS_LEN              _ADC_UL(1)

/* ADC0_SRNP_ENPAS (rw) */
#define ADC0_SRNP_ENPAS_POS            _ADC_UL(12)
#define ADC0_SRNP_ENPAS_LEN            _ADC_UL(1)

/* ADC0_SRNP_ENPQR (rw) */
#define ADC0_SRNP_ENPQR_POS            _ADC_UL(8)
#define ADC0_SRNP_ENPQR_LEN            _ADC_UL(1)

/* ADC0_SRNP_ENPSY (rw) */
#define ADC0_SRNP_ENPSY_POS            _ADC_UL(4)
#define ADC0_SRNP_ENPSY_LEN            _ADC_UL(1)

/* ADC0_SRNP_ENPT (rw) */
#define ADC0_SRNP_ENPT_POS             _ADC_UL(0)
#define ADC0_SRNP_ENPT_LEN             _ADC_UL(1)

/* ADC0_SRNP_PAS (rw) */
#define ADC0_SRNP_PAS_POS              _ADC_UL(13)
#define ADC0_SRNP_PAS_LEN              _ADC_UL(3)

/* ADC0_SRNP_PQR (rw) */
#define ADC0_SRNP_PQR_POS              _ADC_UL(9)
#define ADC0_SRNP_PQR_LEN              _ADC_UL(3)

/* ADC0_SRNP_PSY (rw) */
#define ADC0_SRNP_PSY_POS              _ADC_UL(5)
#define ADC0_SRNP_PSY_LEN              _ADC_UL(3)

/* ADC0_SRNP_PT (rw) */
#define ADC0_SRNP_PT_POS               _ADC_UL(1)
#define ADC0_SRNP_PT_LEN               _ADC_UL(3)

/* ADC0_STAT_AL (rh) */
#define ADC0_STAT_AL_POS               _ADC_UL(12)
#define ADC0_STAT_AL_LEN               _ADC_UL(1)

/* ADC0_STAT_BUSY (rh) */
#define ADC0_STAT_BUSY_POS             _ADC_UL(15)
#define ADC0_STAT_BUSY_LEN             _ADC_UL(1)

/* ADC0_STAT_CAL (rh) */
#define ADC0_STAT_CAL_POS              _ADC_UL(13)
#define ADC0_STAT_CAL_LEN              _ADC_UL(1)

/* ADC0_STAT_CHNRCC (rh) */
#define ADC0_STAT_CHNRCC_POS           _ADC_UL(0)
#define ADC0_STAT_CHNRCC_LEN           _ADC_UL(4)

/* ADC0_STAT_CHTSCC (rh) */
#define ADC0_STAT_CHTSCC_POS           _ADC_UL(8)
#define ADC0_STAT_CHTSCC_LEN           _ADC_UL(3)

/* ADC0_STAT_DATAVAL (rh) */
#define ADC0_STAT_DATAVAL_POS          _ADC_UL(11)
#define ADC0_STAT_DATAVAL_LEN          _ADC_UL(1)

/* ADC0_STAT_IENPAR (rh) */
#define ADC0_STAT_IENPAR_POS           _ADC_UL(27)
#define ADC0_STAT_IENPAR_LEN           _ADC_UL(1)

/* ADC0_STAT_IENREQ (rh) */
#define ADC0_STAT_IENREQ_POS           _ADC_UL(26)
#define ADC0_STAT_IENREQ_LEN           _ADC_UL(1)

/* ADC0_STAT_PARSY (rh) */
#define ADC0_STAT_PARSY_POS            _ADC_UL(25)
#define ADC0_STAT_PARSY_LEN            _ADC_UL(1)

/* ADC0_STAT_QF (rh) */
#define ADC0_STAT_QF_POS               _ADC_UL(20)
#define ADC0_STAT_QF_LEN               _ADC_UL(1)

/* ADC0_STAT_QLP (rh) */
#define ADC0_STAT_QLP_POS              _ADC_UL(16)
#define ADC0_STAT_QLP_LEN              _ADC_UL(4)

/* ADC0_STAT_REQSY (rh) */
#define ADC0_STAT_REQSY_POS            _ADC_UL(24)
#define ADC0_STAT_REQSY_LEN            _ADC_UL(1)

/* ADC0_STAT_SMPL (rh) */
#define ADC0_STAT_SMPL_POS             _ADC_UL(14)
#define ADC0_STAT_SMPL_LEN             _ADC_UL(1)

/* ADC0_STAT_SYMS (rh) */
#define ADC0_STAT_SYMS_POS             _ADC_UL(28)
#define ADC0_STAT_SYMS_LEN             _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP0 (rh) */
#define ADC0_SW0CRP_SW0CRP0_POS        _ADC_UL(0)
#define ADC0_SW0CRP_SW0CRP0_LEN        _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP1 (rh) */
#define ADC0_SW0CRP_SW0CRP1_POS        _ADC_UL(1)
#define ADC0_SW0CRP_SW0CRP1_LEN        _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP10 (rh) */
#define ADC0_SW0CRP_SW0CRP10_POS       _ADC_UL(10)
#define ADC0_SW0CRP_SW0CRP10_LEN       _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP11 (rh) */
#define ADC0_SW0CRP_SW0CRP11_POS       _ADC_UL(11)
#define ADC0_SW0CRP_SW0CRP11_LEN       _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP12 (rh) */
#define ADC0_SW0CRP_SW0CRP12_POS       _ADC_UL(12)
#define ADC0_SW0CRP_SW0CRP12_LEN       _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP13 (rh) */
#define ADC0_SW0CRP_SW0CRP13_POS       _ADC_UL(13)
#define ADC0_SW0CRP_SW0CRP13_LEN       _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP14 (rh) */
#define ADC0_SW0CRP_SW0CRP14_POS       _ADC_UL(14)
#define ADC0_SW0CRP_SW0CRP14_LEN       _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP15 (rh) */
#define ADC0_SW0CRP_SW0CRP15_POS       _ADC_UL(15)
#define ADC0_SW0CRP_SW0CRP15_LEN       _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP2 (rh) */
#define ADC0_SW0CRP_SW0CRP2_POS        _ADC_UL(2)
#define ADC0_SW0CRP_SW0CRP2_LEN        _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP3 (rh) */
#define ADC0_SW0CRP_SW0CRP3_POS        _ADC_UL(3)
#define ADC0_SW0CRP_SW0CRP3_LEN        _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP4 (rh) */
#define ADC0_SW0CRP_SW0CRP4_POS        _ADC_UL(4)
#define ADC0_SW0CRP_SW0CRP4_LEN        _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP5 (rh) */
#define ADC0_SW0CRP_SW0CRP5_POS        _ADC_UL(5)
#define ADC0_SW0CRP_SW0CRP5_LEN        _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP6 (rh) */
#define ADC0_SW0CRP_SW0CRP6_POS        _ADC_UL(6)
#define ADC0_SW0CRP_SW0CRP6_LEN        _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP7 (rh) */
#define ADC0_SW0CRP_SW0CRP7_POS        _ADC_UL(7)
#define ADC0_SW0CRP_SW0CRP7_LEN        _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP8 (rh) */
#define ADC0_SW0CRP_SW0CRP8_POS        _ADC_UL(8)
#define ADC0_SW0CRP_SW0CRP8_LEN        _ADC_UL(1)

/* ADC0_SW0CRP_SW0CRP9 (rh) */
#define ADC0_SW0CRP_SW0CRP9_POS        _ADC_UL(9)
#define ADC0_SW0CRP_SW0CRP9_LEN        _ADC_UL(1)

/* ADC0_SYSTAT_CHNRSY (rh) */
#define ADC0_SYSTAT_CHNRSY_POS         _ADC_UL(0)
#define ADC0_SYSTAT_CHNRSY_LEN         _ADC_UL(4)

/* ADC0_SYSTAT_CSREN (rh) */
#define ADC0_SYSTAT_CSREN_POS          _ADC_UL(15)
#define ADC0_SYSTAT_CSREN_LEN          _ADC_UL(1)

/* ADC0_SYSTAT_EMUX (rh) */
#define ADC0_SYSTAT_EMUX_POS           _ADC_UL(8)
#define ADC0_SYSTAT_EMUX_LEN           _ADC_UL(2)

/* ADC0_SYSTAT_GRPS (rh) */
#define ADC0_SYSTAT_GRPS_POS           _ADC_UL(10)
#define ADC0_SYSTAT_GRPS_LEN           _ADC_UL(1)

/* ADC0_SYSTAT_RES (rh) */
#define ADC0_SYSTAT_RES_POS            _ADC_UL(6)
#define ADC0_SYSTAT_RES_LEN            _ADC_UL(2)

/* ADC0_SYSTAT_SYREQ (rh) */
#define ADC0_SYSTAT_SYREQ_POS          _ADC_UL(31)
#define ADC0_SYSTAT_SYREQ_LEN          _ADC_UL(1)

/* ADC0_TCON_ALB (rw) */
#define ADC0_TCON_ALB_POS              _ADC_UL(0)
#define ADC0_TCON_ALB_LEN              _ADC_UL(14)

/* ADC0_TCON_TR (rh) */
#define ADC0_TCON_TR_POS               _ADC_UL(31)
#define ADC0_TCON_TR_LEN               _ADC_UL(1)

/* ADC0_TCON_TRLD (rw) */
#define ADC0_TCON_TRLD_POS             _ADC_UL(16)
#define ADC0_TCON_TRLD_LEN             _ADC_UL(14)

/* ADC0_TCON_TSEN (rw) */
#define ADC0_TCON_TSEN_POS             _ADC_UL(30)
#define ADC0_TCON_TSEN_LEN             _ADC_UL(1)

/* ADC0_TCRP_TRP0 (rh) */
#define ADC0_TCRP_TRP0_POS             _ADC_UL(0)
#define ADC0_TCRP_TRP0_LEN             _ADC_UL(1)

/* ADC0_TCRP_TRP1 (rh) */
#define ADC0_TCRP_TRP1_POS             _ADC_UL(1)
#define ADC0_TCRP_TRP1_LEN             _ADC_UL(1)

/* ADC0_TCRP_TRP10 (rh) */
#define ADC0_TCRP_TRP10_POS            _ADC_UL(10)
#define ADC0_TCRP_TRP10_LEN            _ADC_UL(1)

/* ADC0_TCRP_TRP11 (rh) */
#define ADC0_TCRP_TRP11_POS            _ADC_UL(11)
#define ADC0_TCRP_TRP11_LEN            _ADC_UL(1)

/* ADC0_TCRP_TRP12 (rh) */
#define ADC0_TCRP_TRP12_POS            _ADC_UL(12)
#define ADC0_TCRP_TRP12_LEN            _ADC_UL(1)

/* ADC0_TCRP_TRP13 (rh) */
#define ADC0_TCRP_TRP13_POS            _ADC_UL(13)
#define ADC0_TCRP_TRP13_LEN            _ADC_UL(1)

/* ADC0_TCRP_TRP14 (rh) */
#define ADC0_TCRP_TRP14_POS            _ADC_UL(14)
#define ADC0_TCRP_TRP14_LEN            _ADC_UL(1)

/* ADC0_TCRP_TRP15 (rh) */
#define ADC0_TCRP_TRP15_POS            _ADC_UL(15)
#define ADC0_TCRP_TRP15_LEN            _ADC_UL(1)

/* ADC0_TCRP_TRP2 (rh) */
#define ADC0_TCRP_TRP2_POS             _ADC_UL(2)
#define ADC0_TCRP_TRP2_LEN             _ADC_UL(1)

/* ADC0_TCRP_TRP3 (rh) */
#define ADC0_TCRP_TRP3_POS             _ADC_UL(3)
#define ADC0_TCRP_TRP3_LEN             _ADC_UL(1)

/* ADC0_TCRP_TRP4 (rh) */
#define ADC0_TCRP_TRP4_POS             _ADC_UL(4)
#define ADC0_TCRP_TRP4_LEN             _ADC_UL(1)

/* ADC0_TCRP_TRP5 (rh) */
#define ADC0_TCRP_TRP5_POS             _ADC_UL(5)
#define ADC0_TCRP_TRP5_LEN             _ADC_UL(1)

/* ADC0_TCRP_TRP6 (rh) */
#define ADC0_TCRP_TRP6_POS             _ADC_UL(6)
#define ADC0_TCRP_TRP6_LEN             _ADC_UL(1)

/* ADC0_TCRP_TRP7 (rh) */
#define ADC0_TCRP_TRP7_POS             _ADC_UL(7)
#define ADC0_TCRP_TRP7_LEN             _ADC_UL(1)

/* ADC0_TCRP_TRP8 (rh) */
#define ADC0_TCRP_TRP8_POS             _ADC_UL(8)
#define ADC0_TCRP_TRP8_LEN             _ADC_UL(1)

/* ADC0_TCRP_TRP9 (rh) */
#define ADC0_TCRP_TRP9_POS             _ADC_UL(9)
#define ADC0_TCRP_TRP9_LEN             _ADC_UL(1)

/* ADC0_TEST_TEST14 (rw) */
#define ADC0_TEST_TEST14_POS           _ADC_UL(14)
#define ADC0_TEST_TEST14_LEN           _ADC_UL(1)

/* ADC0_TSTAT_TIMER (rh) */
#define ADC0_TSTAT_TIMER_POS           _ADC_UL(0)
#define ADC0_TSTAT_TIMER_LEN           _ADC_UL(14)

/* ADC0_TTC_TTCCH0 (rw) */
#define ADC0_TTC_TTCCH0_POS            _ADC_UL(0)
#define ADC0_TTC_TTCCH0_LEN            _ADC_UL(1)

/* ADC0_TTC_TTCCH1 (rw) */
#define ADC0_TTC_TTCCH1_POS            _ADC_UL(1)
#define ADC0_TTC_TTCCH1_LEN            _ADC_UL(1)

/* ADC0_TTC_TTCCH10 (rw) */
#define ADC0_TTC_TTCCH10_POS           _ADC_UL(10)
#define ADC0_TTC_TTCCH10_LEN           _ADC_UL(1)

/* ADC0_TTC_TTCCH11 (rw) */
#define ADC0_TTC_TTCCH11_POS           _ADC_UL(11)
#define ADC0_TTC_TTCCH11_LEN           _ADC_UL(1)

/* ADC0_TTC_TTCCH12 (rw) */
#define ADC0_TTC_TTCCH12_POS           _ADC_UL(12)
#define ADC0_TTC_TTCCH12_LEN           _ADC_UL(1)

/* ADC0_TTC_TTCCH13 (rw) */
#define ADC0_TTC_TTCCH13_POS           _ADC_UL(13)
#define ADC0_TTC_TTCCH13_LEN           _ADC_UL(1)

/* ADC0_TTC_TTCCH14 (rw) */
#define ADC0_TTC_TTCCH14_POS           _ADC_UL(14)
#define ADC0_TTC_TTCCH14_LEN           _ADC_UL(1)

/* ADC0_TTC_TTCCH15 (rw) */
#define ADC0_TTC_TTCCH15_POS           _ADC_UL(15)
#define ADC0_TTC_TTCCH15_LEN           _ADC_UL(1)

/* ADC0_TTC_TTCCH2 (rw) */
#define ADC0_TTC_TTCCH2_POS            _ADC_UL(2)
#define ADC0_TTC_TTCCH2_LEN            _ADC_UL(1)

/* ADC0_TTC_TTCCH3 (rw) */
#define ADC0_TTC_TTCCH3_POS            _ADC_UL(3)
#define ADC0_TTC_TTCCH3_LEN            _ADC_UL(1)

/* ADC0_TTC_TTCCH4 (rw) */
#define ADC0_TTC_TTCCH4_POS            _ADC_UL(4)
#define ADC0_TTC_TTCCH4_LEN            _ADC_UL(1)

/* ADC0_TTC_TTCCH5 (rw) */
#define ADC0_TTC_TTCCH5_POS            _ADC_UL(5)
#define ADC0_TTC_TTCCH5_LEN            _ADC_UL(1)

/* ADC0_TTC_TTCCH6 (rw) */
#define ADC0_TTC_TTCCH6_POS            _ADC_UL(6)
#define ADC0_TTC_TTCCH6_LEN            _ADC_UL(1)

/* ADC0_TTC_TTCCH7 (rw) */
#define ADC0_TTC_TTCCH7_POS            _ADC_UL(7)
#define ADC0_TTC_TTCCH7_LEN            _ADC_UL(1)

/* ADC0_TTC_TTCCH8 (rw) */
#define ADC0_TTC_TTCCH8_POS            _ADC_UL(8)
#define ADC0_TTC_TTCCH8_LEN            _ADC_UL(1)

/* ADC0_TTC_TTCCH9 (rw) */
#define ADC0_TTC_TTCCH9_POS            _ADC_UL(9)
#define ADC0_TTC_TTCCH9_LEN            _ADC_UL(1)

/* ADC1_AP_ASP (rwh) */
#define ADC1_AP_ASP_POS                _ADC_UL(0)
#define ADC1_AP_ASP_LEN                _ADC_UL(1)

/* ADC1_AP_CHP (rwh) */
#define ADC1_AP_CHP_POS                _ADC_UL(7)
#define ADC1_AP_CHP_LEN                _ADC_UL(1)

/* ADC1_AP_EXP (rwh) */
#define ADC1_AP_EXP_POS                _ADC_UL(4)
#define ADC1_AP_EXP_LEN                _ADC_UL(1)

/* ADC1_AP_QP (rwh) */
#define ADC1_AP_QP_POS                 _ADC_UL(1)
#define ADC1_AP_QP_LEN                 _ADC_UL(1)

/* ADC1_AP_SW0P (rwh) */
#define ADC1_AP_SW0P_POS               _ADC_UL(3)
#define ADC1_AP_SW0P_LEN               _ADC_UL(1)

/* ADC1_AP_TP (rwh) */
#define ADC1_AP_TP_POS                 _ADC_UL(6)
#define ADC1_AP_TP_LEN                 _ADC_UL(1)

/* ADC1_ASCRP_ASCRP0 (rh) */
#define ADC1_ASCRP_ASCRP0_POS          _ADC_UL(0)
#define ADC1_ASCRP_ASCRP0_LEN          _ADC_UL(1)

/* ADC1_ASCRP_ASCRP1 (rh) */
#define ADC1_ASCRP_ASCRP1_POS          _ADC_UL(1)
#define ADC1_ASCRP_ASCRP1_LEN          _ADC_UL(1)

/* ADC1_ASCRP_ASCRP10 (rh) */
#define ADC1_ASCRP_ASCRP10_POS         _ADC_UL(10)
#define ADC1_ASCRP_ASCRP10_LEN         _ADC_UL(1)

/* ADC1_ASCRP_ASCRP11 (rh) */
#define ADC1_ASCRP_ASCRP11_POS         _ADC_UL(11)
#define ADC1_ASCRP_ASCRP11_LEN         _ADC_UL(1)

/* ADC1_ASCRP_ASCRP12 (rh) */
#define ADC1_ASCRP_ASCRP12_POS         _ADC_UL(12)
#define ADC1_ASCRP_ASCRP12_LEN         _ADC_UL(1)

/* ADC1_ASCRP_ASCRP13 (rh) */
#define ADC1_ASCRP_ASCRP13_POS         _ADC_UL(13)
#define ADC1_ASCRP_ASCRP13_LEN         _ADC_UL(1)

/* ADC1_ASCRP_ASCRP14 (rh) */
#define ADC1_ASCRP_ASCRP14_POS         _ADC_UL(14)
#define ADC1_ASCRP_ASCRP14_LEN         _ADC_UL(1)

/* ADC1_ASCRP_ASCRP15 (rh) */
#define ADC1_ASCRP_ASCRP15_POS         _ADC_UL(15)
#define ADC1_ASCRP_ASCRP15_LEN         _ADC_UL(1)

/* ADC1_ASCRP_ASCRP2 (rh) */
#define ADC1_ASCRP_ASCRP2_POS          _ADC_UL(2)
#define ADC1_ASCRP_ASCRP2_LEN          _ADC_UL(1)

/* ADC1_ASCRP_ASCRP3 (rh) */
#define ADC1_ASCRP_ASCRP3_POS          _ADC_UL(3)
#define ADC1_ASCRP_ASCRP3_LEN          _ADC_UL(1)

/* ADC1_ASCRP_ASCRP4 (rh) */
#define ADC1_ASCRP_ASCRP4_POS          _ADC_UL(4)
#define ADC1_ASCRP_ASCRP4_LEN          _ADC_UL(1)

/* ADC1_ASCRP_ASCRP5 (rh) */
#define ADC1_ASCRP_ASCRP5_POS          _ADC_UL(5)
#define ADC1_ASCRP_ASCRP5_LEN          _ADC_UL(1)

/* ADC1_ASCRP_ASCRP6 (rh) */
#define ADC1_ASCRP_ASCRP6_POS          _ADC_UL(6)
#define ADC1_ASCRP_ASCRP6_LEN          _ADC_UL(1)

/* ADC1_ASCRP_ASCRP7 (rh) */
#define ADC1_ASCRP_ASCRP7_POS          _ADC_UL(7)
#define ADC1_ASCRP_ASCRP7_LEN          _ADC_UL(1)

/* ADC1_ASCRP_ASCRP8 (rh) */
#define ADC1_ASCRP_ASCRP8_POS          _ADC_UL(8)
#define ADC1_ASCRP_ASCRP8_LEN          _ADC_UL(1)

/* ADC1_ASCRP_ASCRP9 (rh) */
#define ADC1_ASCRP_ASCRP9_POS          _ADC_UL(9)
#define ADC1_ASCRP_ASCRP9_LEN          _ADC_UL(1)

/* ADC1_ASCRP_GRPS (rh) */
#define ADC1_ASCRP_GRPS_POS            _ADC_UL(31)
#define ADC1_ASCRP_GRPS_LEN            _ADC_UL(1)

/* ADC1_BARRACUDAIN_reserved (rw) */
#define ADC1_BARRACUDAIN_reserved_POS  _ADC_UL(0)
#define ADC1_BARRACUDAIN_reserved_LEN  _ADC_UL(32)

/* ADC1_BARRACUDAOUT_reserved (rw) */
#define ADC1_BARRACUDAOUT_reserved_POS _ADC_UL(0)
#define ADC1_BARRACUDAOUT_reserved_LEN _ADC_UL(32)

/* ADC1_CHCON_BSELA (rw) */
#define ADC1_CHCON_BSELA_POS           _ADC_UL(18)
#define ADC1_CHCON_BSELA_LEN           _ADC_UL(2)

/* ADC1_CHCON_BSELB (rw) */
#define ADC1_CHCON_BSELB_POS           _ADC_UL(16)
#define ADC1_CHCON_BSELB_LEN           _ADC_UL(2)

/* ADC1_CHCON_EMUX (rw) */
#define ADC1_CHCON_EMUX_POS            _ADC_UL(12)
#define ADC1_CHCON_EMUX_LEN            _ADC_UL(2)

/* ADC1_CHCON_ENCH (rw) */
#define ADC1_CHCON_ENCH_POS            _ADC_UL(23)
#define ADC1_CHCON_ENCH_LEN            _ADC_UL(1)

/* ADC1_CHCON_GRPS (rw) */
#define ADC1_CHCON_GRPS_POS            _ADC_UL(14)
#define ADC1_CHCON_GRPS_LEN            _ADC_UL(1)

/* ADC1_CHCON_INP (rw) */
#define ADC1_CHCON_INP_POS             _ADC_UL(24)
#define ADC1_CHCON_INP_LEN             _ADC_UL(3)

/* ADC1_CHCON_LCC (rw) */
#define ADC1_CHCON_LCC_POS             _ADC_UL(20)
#define ADC1_CHCON_LCC_LEN             _ADC_UL(3)

/* ADC1_CHCON_REF (rw) */
#define ADC1_CHCON_REF_POS             _ADC_UL(8)
#define ADC1_CHCON_REF_LEN             _ADC_UL(2)

/* ADC1_CHCON_RES (rw) */
#define ADC1_CHCON_RES_POS             _ADC_UL(10)
#define ADC1_CHCON_RES_LEN             _ADC_UL(2)

/* ADC1_CHCON_STC (rw) */
#define ADC1_CHCON_STC_POS             _ADC_UL(0)
#define ADC1_CHCON_STC_LEN             _ADC_UL(8)

/* ADC1_CHCON_SYM (rw) */
#define ADC1_CHCON_SYM_POS             _ADC_UL(28)
#define ADC1_CHCON_SYM_LEN             _ADC_UL(2)

/* ADC1_CHIN_CHNRIN (rw) */
#define ADC1_CHIN_CHNRIN_POS           _ADC_UL(0)
#define ADC1_CHIN_CHNRIN_LEN           _ADC_UL(4)

/* ADC1_CHIN_CINREQ (rw) */
#define ADC1_CHIN_CINREQ_POS           _ADC_UL(31)
#define ADC1_CHIN_CINREQ_LEN           _ADC_UL(1)

/* ADC1_CHIN_CIREN (rw) */
#define ADC1_CHIN_CIREN_POS            _ADC_UL(15)
#define ADC1_CHIN_CIREN_LEN            _ADC_UL(1)

/* ADC1_CHIN_EMUX (rw) */
#define ADC1_CHIN_EMUX_POS             _ADC_UL(8)
#define ADC1_CHIN_EMUX_LEN             _ADC_UL(2)

/* ADC1_CHIN_GRPS (rw) */
#define ADC1_CHIN_GRPS_POS             _ADC_UL(10)
#define ADC1_CHIN_GRPS_LEN             _ADC_UL(1)

/* ADC1_CHIN_RES (rw) */
#define ADC1_CHIN_RES_POS              _ADC_UL(6)
#define ADC1_CHIN_RES_LEN              _ADC_UL(2)

/* ADC1_CHSTAT_CHNR (rh) */
#define ADC1_CHSTAT_CHNR_POS           _ADC_UL(24)
#define ADC1_CHSTAT_CHNR_LEN           _ADC_UL(4)

/* ADC1_CHSTAT_CRS (rh) */
#define ADC1_CHSTAT_CRS_POS            _ADC_UL(20)
#define ADC1_CHSTAT_CRS_LEN            _ADC_UL(3)

/* ADC1_CHSTAT_EMUX (rh) */
#define ADC1_CHSTAT_EMUX_POS           _ADC_UL(16)
#define ADC1_CHSTAT_EMUX_LEN           _ADC_UL(2)

/* ADC1_CHSTAT_GRPS (rh) */
#define ADC1_CHSTAT_GRPS_POS           _ADC_UL(18)
#define ADC1_CHSTAT_GRPS_LEN           _ADC_UL(1)

/* ADC1_CHSTAT_RESULT (rh) */
#define ADC1_CHSTAT_RESULT_POS         _ADC_UL(0)
#define ADC1_CHSTAT_RESULT_LEN         _ADC_UL(12)

/* ADC1_CON_CPR (rw) */
#define ADC1_CON_CPR_POS               _ADC_UL(28)
#define ADC1_CON_CPR_LEN               _ADC_UL(1)

/* ADC1_CON_CTC (rw) */
#define ADC1_CON_CTC_POS               _ADC_UL(0)
#define ADC1_CON_CTC_LEN               _ADC_UL(8)

/* ADC1_CON_QEN (rh) */
#define ADC1_CON_QEN_POS               _ADC_UL(15)
#define ADC1_CON_QEN_LEN               _ADC_UL(1)

/* ADC1_CON_QWLP (rw) */
#define ADC1_CON_QWLP_POS              _ADC_UL(16)
#define ADC1_CON_QWLP_LEN              _ADC_UL(4)

/* ADC1_CON_SCNM (rw) */
#define ADC1_CON_SCNM_POS              _ADC_UL(8)
#define ADC1_CON_SCNM_LEN              _ADC_UL(2)

/* ADC1_CON_SRTEST (rw) */
#define ADC1_CON_SRTEST_POS            _ADC_UL(31)
#define ADC1_CON_SRTEST_LEN            _ADC_UL(1)

/* ADC1_EXCRP_EXCRP0 (rh) */
#define ADC1_EXCRP_EXCRP0_POS          _ADC_UL(0)
#define ADC1_EXCRP_EXCRP0_LEN          _ADC_UL(1)

/* ADC1_EXCRP_EXCRP1 (rh) */
#define ADC1_EXCRP_EXCRP1_POS          _ADC_UL(1)
#define ADC1_EXCRP_EXCRP1_LEN          _ADC_UL(1)

/* ADC1_EXCRP_EXCRP10 (rh) */
#define ADC1_EXCRP_EXCRP10_POS         _ADC_UL(10)
#define ADC1_EXCRP_EXCRP10_LEN         _ADC_UL(1)

/* ADC1_EXCRP_EXCRP11 (rh) */
#define ADC1_EXCRP_EXCRP11_POS         _ADC_UL(11)
#define ADC1_EXCRP_EXCRP11_LEN         _ADC_UL(1)

/* ADC1_EXCRP_EXCRP12 (rh) */
#define ADC1_EXCRP_EXCRP12_POS         _ADC_UL(12)
#define ADC1_EXCRP_EXCRP12_LEN         _ADC_UL(1)

/* ADC1_EXCRP_EXCRP13 (rh) */
#define ADC1_EXCRP_EXCRP13_POS         _ADC_UL(13)
#define ADC1_EXCRP_EXCRP13_LEN         _ADC_UL(1)

/* ADC1_EXCRP_EXCRP14 (rh) */
#define ADC1_EXCRP_EXCRP14_POS         _ADC_UL(14)
#define ADC1_EXCRP_EXCRP14_LEN         _ADC_UL(1)

/* ADC1_EXCRP_EXCRP15 (rh) */
#define ADC1_EXCRP_EXCRP15_POS         _ADC_UL(15)
#define ADC1_EXCRP_EXCRP15_LEN         _ADC_UL(1)

/* ADC1_EXCRP_EXCRP2 (rh) */
#define ADC1_EXCRP_EXCRP2_POS          _ADC_UL(2)
#define ADC1_EXCRP_EXCRP2_LEN          _ADC_UL(1)

/* ADC1_EXCRP_EXCRP3 (rh) */
#define ADC1_EXCRP_EXCRP3_POS          _ADC_UL(3)
#define ADC1_EXCRP_EXCRP3_LEN          _ADC_UL(1)

/* ADC1_EXCRP_EXCRP4 (rh) */
#define ADC1_EXCRP_EXCRP4_POS          _ADC_UL(4)
#define ADC1_EXCRP_EXCRP4_LEN          _ADC_UL(1)

/* ADC1_EXCRP_EXCRP5 (rh) */
#define ADC1_EXCRP_EXCRP5_POS          _ADC_UL(5)
#define ADC1_EXCRP_EXCRP5_LEN          _ADC_UL(1)

/* ADC1_EXCRP_EXCRP6 (rh) */
#define ADC1_EXCRP_EXCRP6_POS          _ADC_UL(6)
#define ADC1_EXCRP_EXCRP6_LEN          _ADC_UL(1)

/* ADC1_EXCRP_EXCRP7 (rh) */
#define ADC1_EXCRP_EXCRP7_POS          _ADC_UL(7)
#define ADC1_EXCRP_EXCRP7_LEN          _ADC_UL(1)

/* ADC1_EXCRP_EXCRP8 (rh) */
#define ADC1_EXCRP_EXCRP8_POS          _ADC_UL(8)
#define ADC1_EXCRP_EXCRP8_LEN          _ADC_UL(1)

/* ADC1_EXCRP_EXCRP9 (rh) */
#define ADC1_EXCRP_EXCRP9_POS          _ADC_UL(9)
#define ADC1_EXCRP_EXCRP9_LEN          _ADC_UL(1)

/* ADC1_EXTC_ETCCH0 (rw) */
#define ADC1_EXTC_ETCCH0_POS           _ADC_UL(0)
#define ADC1_EXTC_ETCCH0_LEN           _ADC_UL(1)

/* ADC1_EXTC_ETCCH1 (rw) */
#define ADC1_EXTC_ETCCH1_POS           _ADC_UL(1)
#define ADC1_EXTC_ETCCH1_LEN           _ADC_UL(1)

/* ADC1_EXTC_ETCCH10 (rw) */
#define ADC1_EXTC_ETCCH10_POS          _ADC_UL(10)
#define ADC1_EXTC_ETCCH10_LEN          _ADC_UL(1)

/* ADC1_EXTC_ETCCH11 (rw) */
#define ADC1_EXTC_ETCCH11_POS          _ADC_UL(11)
#define ADC1_EXTC_ETCCH11_LEN          _ADC_UL(1)

/* ADC1_EXTC_ETCCH12 (rw) */
#define ADC1_EXTC_ETCCH12_POS          _ADC_UL(12)
#define ADC1_EXTC_ETCCH12_LEN          _ADC_UL(1)

/* ADC1_EXTC_ETCCH13 (rw) */
#define ADC1_EXTC_ETCCH13_POS          _ADC_UL(13)
#define ADC1_EXTC_ETCCH13_LEN          _ADC_UL(1)

/* ADC1_EXTC_ETCCH14 (rw) */
#define ADC1_EXTC_ETCCH14_POS          _ADC_UL(14)
#define ADC1_EXTC_ETCCH14_LEN          _ADC_UL(1)

/* ADC1_EXTC_ETCCH15 (rw) */
#define ADC1_EXTC_ETCCH15_POS          _ADC_UL(15)
#define ADC1_EXTC_ETCCH15_LEN          _ADC_UL(1)

/* ADC1_EXTC_ETCCH2 (rw) */
#define ADC1_EXTC_ETCCH2_POS           _ADC_UL(2)
#define ADC1_EXTC_ETCCH2_LEN           _ADC_UL(1)

/* ADC1_EXTC_ETCCH3 (rw) */
#define ADC1_EXTC_ETCCH3_POS           _ADC_UL(3)
#define ADC1_EXTC_ETCCH3_LEN           _ADC_UL(1)

/* ADC1_EXTC_ETCCH4 (rw) */
#define ADC1_EXTC_ETCCH4_POS           _ADC_UL(4)
#define ADC1_EXTC_ETCCH4_LEN           _ADC_UL(1)

/* ADC1_EXTC_ETCCH5 (rw) */
#define ADC1_EXTC_ETCCH5_POS           _ADC_UL(5)
#define ADC1_EXTC_ETCCH5_LEN           _ADC_UL(1)

/* ADC1_EXTC_ETCCH6 (rw) */
#define ADC1_EXTC_ETCCH6_POS           _ADC_UL(6)
#define ADC1_EXTC_ETCCH6_LEN           _ADC_UL(1)

/* ADC1_EXTC_ETCCH7 (rw) */
#define ADC1_EXTC_ETCCH7_POS           _ADC_UL(7)
#define ADC1_EXTC_ETCCH7_LEN           _ADC_UL(1)

/* ADC1_EXTC_ETCCH8 (rw) */
#define ADC1_EXTC_ETCCH8_POS           _ADC_UL(8)
#define ADC1_EXTC_ETCCH8_LEN           _ADC_UL(1)

/* ADC1_EXTC_ETCCH9 (rw) */
#define ADC1_EXTC_ETCCH9_POS           _ADC_UL(9)
#define ADC1_EXTC_ETCCH9_LEN           _ADC_UL(1)

/* ADC1_LCCON_BOUNDARY (rw) */
#define ADC1_LCCON_BOUNDARY_POS        _ADC_UL(0)
#define ADC1_LCCON_BOUNDARY_LEN        _ADC_UL(12)

/* ADC1_MSS0_MSRCH0 (rwh) */
#define ADC1_MSS0_MSRCH0_POS           _ADC_UL(0)
#define ADC1_MSS0_MSRCH0_LEN           _ADC_UL(1)

/* ADC1_MSS0_MSRCH1 (rwh) */
#define ADC1_MSS0_MSRCH1_POS           _ADC_UL(1)
#define ADC1_MSS0_MSRCH1_LEN           _ADC_UL(1)

/* ADC1_MSS0_MSRCH10 (rwh) */
#define ADC1_MSS0_MSRCH10_POS          _ADC_UL(10)
#define ADC1_MSS0_MSRCH10_LEN          _ADC_UL(1)

/* ADC1_MSS0_MSRCH11 (rwh) */
#define ADC1_MSS0_MSRCH11_POS          _ADC_UL(11)
#define ADC1_MSS0_MSRCH11_LEN          _ADC_UL(1)

/* ADC1_MSS0_MSRCH12 (rwh) */
#define ADC1_MSS0_MSRCH12_POS          _ADC_UL(12)
#define ADC1_MSS0_MSRCH12_LEN          _ADC_UL(1)

/* ADC1_MSS0_MSRCH13 (rwh) */
#define ADC1_MSS0_MSRCH13_POS          _ADC_UL(13)
#define ADC1_MSS0_MSRCH13_LEN          _ADC_UL(1)

/* ADC1_MSS0_MSRCH14 (rwh) */
#define ADC1_MSS0_MSRCH14_POS          _ADC_UL(14)
#define ADC1_MSS0_MSRCH14_LEN          _ADC_UL(1)

/* ADC1_MSS0_MSRCH15 (rwh) */
#define ADC1_MSS0_MSRCH15_POS          _ADC_UL(15)
#define ADC1_MSS0_MSRCH15_LEN          _ADC_UL(1)

/* ADC1_MSS0_MSRCH2 (rwh) */
#define ADC1_MSS0_MSRCH2_POS           _ADC_UL(2)
#define ADC1_MSS0_MSRCH2_LEN           _ADC_UL(1)

/* ADC1_MSS0_MSRCH3 (rwh) */
#define ADC1_MSS0_MSRCH3_POS           _ADC_UL(3)
#define ADC1_MSS0_MSRCH3_LEN           _ADC_UL(1)

/* ADC1_MSS0_MSRCH4 (rwh) */
#define ADC1_MSS0_MSRCH4_POS           _ADC_UL(4)
#define ADC1_MSS0_MSRCH4_LEN           _ADC_UL(1)

/* ADC1_MSS0_MSRCH5 (rwh) */
#define ADC1_MSS0_MSRCH5_POS           _ADC_UL(5)
#define ADC1_MSS0_MSRCH5_LEN           _ADC_UL(1)

/* ADC1_MSS0_MSRCH6 (rwh) */
#define ADC1_MSS0_MSRCH6_POS           _ADC_UL(6)
#define ADC1_MSS0_MSRCH6_LEN           _ADC_UL(1)

/* ADC1_MSS0_MSRCH7 (rwh) */
#define ADC1_MSS0_MSRCH7_POS           _ADC_UL(7)
#define ADC1_MSS0_MSRCH7_LEN           _ADC_UL(1)

/* ADC1_MSS0_MSRCH8 (rwh) */
#define ADC1_MSS0_MSRCH8_POS           _ADC_UL(8)
#define ADC1_MSS0_MSRCH8_LEN           _ADC_UL(1)

/* ADC1_MSS0_MSRCH9 (rwh) */
#define ADC1_MSS0_MSRCH9_POS           _ADC_UL(9)
#define ADC1_MSS0_MSRCH9_LEN           _ADC_UL(1)

/* ADC1_MSS1_MSRAS (rwh) */
#define ADC1_MSS1_MSRAS_POS            _ADC_UL(3)
#define ADC1_MSS1_MSRAS_LEN            _ADC_UL(1)

/* ADC1_MSS1_MSRQR (rwh) */
#define ADC1_MSS1_MSRQR_POS            _ADC_UL(2)
#define ADC1_MSS1_MSRQR_LEN            _ADC_UL(1)

/* ADC1_MSS1_MSRSY (rwh) */
#define ADC1_MSS1_MSRSY_POS            _ADC_UL(1)
#define ADC1_MSS1_MSRSY_LEN            _ADC_UL(1)

/* ADC1_MSS1_MSRT (rwh) */
#define ADC1_MSS1_MSRT_POS             _ADC_UL(0)
#define ADC1_MSS1_MSRT_LEN             _ADC_UL(1)

/* ADC1_QR_CHNR (rw) */
#define ADC1_QR_CHNR_POS               _ADC_UL(0)
#define ADC1_QR_CHNR_LEN               _ADC_UL(4)

/* ADC1_QR_EMUX (rw) */
#define ADC1_QR_EMUX_POS               _ADC_UL(8)
#define ADC1_QR_EMUX_LEN               _ADC_UL(2)

/* ADC1_QR_GRPS (rw) */
#define ADC1_QR_GRPS_POS               _ADC_UL(10)
#define ADC1_QR_GRPS_LEN               _ADC_UL(1)

/* ADC1_QR_RES (rw) */
#define ADC1_QR_RES_POS                _ADC_UL(6)
#define ADC1_QR_RES_LEN                _ADC_UL(2)

/* ADC1_QR_V (rwh) */
#define ADC1_QR_V_POS                  _ADC_UL(15)
#define ADC1_QR_V_LEN                  _ADC_UL(1)

/* ADC1_QUEUE0_CHNR (rh) */
#define ADC1_QUEUE0_CHNR_POS           _ADC_UL(0)
#define ADC1_QUEUE0_CHNR_LEN           _ADC_UL(4)

/* ADC1_QUEUE0_EMUX (rh) */
#define ADC1_QUEUE0_EMUX_POS           _ADC_UL(8)
#define ADC1_QUEUE0_EMUX_LEN           _ADC_UL(2)

/* ADC1_QUEUE0_GRPS (rh) */
#define ADC1_QUEUE0_GRPS_POS           _ADC_UL(10)
#define ADC1_QUEUE0_GRPS_LEN           _ADC_UL(1)

/* ADC1_QUEUE0_RES (rh) */
#define ADC1_QUEUE0_RES_POS            _ADC_UL(6)
#define ADC1_QUEUE0_RES_LEN            _ADC_UL(2)

/* ADC1_QUEUE0_V (rh) */
#define ADC1_QUEUE0_V_POS              _ADC_UL(15)
#define ADC1_QUEUE0_V_LEN              _ADC_UL(1)

/* ADC1_QUEUET_CHNR (rwh) */
#define ADC1_QUEUET_CHNR_POS           _ADC_UL(0)
#define ADC1_QUEUET_CHNR_LEN           _ADC_UL(4)

/* ADC1_QUEUET_EMUX (rwh) */
#define ADC1_QUEUET_EMUX_POS           _ADC_UL(8)
#define ADC1_QUEUET_EMUX_LEN           _ADC_UL(2)

/* ADC1_QUEUET_GRPS (rwh) */
#define ADC1_QUEUET_GRPS_POS           _ADC_UL(10)
#define ADC1_QUEUET_GRPS_LEN           _ADC_UL(1)

/* ADC1_QUEUET_RES (rwh) */
#define ADC1_QUEUET_RES_POS            _ADC_UL(6)
#define ADC1_QUEUET_RES_LEN            _ADC_UL(2)

/* ADC1_QUEUET_V (rwh) */
#define ADC1_QUEUET_V_POS              _ADC_UL(15)
#define ADC1_QUEUET_V_LEN              _ADC_UL(1)

/* ADC1_REQ0_REQ00 (rw) */
#define ADC1_REQ0_REQ00_POS            _ADC_UL(0)
#define ADC1_REQ0_REQ00_LEN            _ADC_UL(1)

/* ADC1_REQ0_REQ01 (rw) */
#define ADC1_REQ0_REQ01_POS            _ADC_UL(1)
#define ADC1_REQ0_REQ01_LEN            _ADC_UL(1)

/* ADC1_REQ0_REQ010 (rw) */
#define ADC1_REQ0_REQ010_POS           _ADC_UL(10)
#define ADC1_REQ0_REQ010_LEN           _ADC_UL(1)

/* ADC1_REQ0_REQ011 (rw) */
#define ADC1_REQ0_REQ011_POS           _ADC_UL(11)
#define ADC1_REQ0_REQ011_LEN           _ADC_UL(1)

/* ADC1_REQ0_REQ012 (rw) */
#define ADC1_REQ0_REQ012_POS           _ADC_UL(12)
#define ADC1_REQ0_REQ012_LEN           _ADC_UL(1)

/* ADC1_REQ0_REQ013 (rw) */
#define ADC1_REQ0_REQ013_POS           _ADC_UL(13)
#define ADC1_REQ0_REQ013_LEN           _ADC_UL(1)

/* ADC1_REQ0_REQ014 (rw) */
#define ADC1_REQ0_REQ014_POS           _ADC_UL(14)
#define ADC1_REQ0_REQ014_LEN           _ADC_UL(1)

/* ADC1_REQ0_REQ015 (rw) */
#define ADC1_REQ0_REQ015_POS           _ADC_UL(15)
#define ADC1_REQ0_REQ015_LEN           _ADC_UL(1)

/* ADC1_REQ0_REQ02 (rw) */
#define ADC1_REQ0_REQ02_POS            _ADC_UL(2)
#define ADC1_REQ0_REQ02_LEN            _ADC_UL(1)

/* ADC1_REQ0_REQ03 (rw) */
#define ADC1_REQ0_REQ03_POS            _ADC_UL(3)
#define ADC1_REQ0_REQ03_LEN            _ADC_UL(1)

/* ADC1_REQ0_REQ04 (rw) */
#define ADC1_REQ0_REQ04_POS            _ADC_UL(4)
#define ADC1_REQ0_REQ04_LEN            _ADC_UL(1)

/* ADC1_REQ0_REQ05 (rw) */
#define ADC1_REQ0_REQ05_POS            _ADC_UL(5)
#define ADC1_REQ0_REQ05_LEN            _ADC_UL(1)

/* ADC1_REQ0_REQ06 (rw) */
#define ADC1_REQ0_REQ06_POS            _ADC_UL(6)
#define ADC1_REQ0_REQ06_LEN            _ADC_UL(1)

/* ADC1_REQ0_REQ07 (rw) */
#define ADC1_REQ0_REQ07_POS            _ADC_UL(7)
#define ADC1_REQ0_REQ07_LEN            _ADC_UL(1)

/* ADC1_REQ0_REQ08 (rw) */
#define ADC1_REQ0_REQ08_POS            _ADC_UL(8)
#define ADC1_REQ0_REQ08_LEN            _ADC_UL(1)

/* ADC1_REQ0_REQ09 (rw) */
#define ADC1_REQ0_REQ09_POS            _ADC_UL(9)
#define ADC1_REQ0_REQ09_LEN            _ADC_UL(1)

/* ADC1_SAL_SALAS (rw) */
#define ADC1_SAL_SALAS_POS             _ADC_UL(0)
#define ADC1_SAL_SALAS_LEN             _ADC_UL(3)

/* ADC1_SAL_SALCHIN (rw) */
#define ADC1_SAL_SALCHIN_POS           _ADC_UL(28)
#define ADC1_SAL_SALCHIN_LEN           _ADC_UL(3)

/* ADC1_SAL_SALEXT (rw) */
#define ADC1_SAL_SALEXT_POS            _ADC_UL(16)
#define ADC1_SAL_SALEXT_LEN            _ADC_UL(3)

/* ADC1_SAL_SALQ (rw) */
#define ADC1_SAL_SALQ_POS              _ADC_UL(4)
#define ADC1_SAL_SALQ_LEN              _ADC_UL(3)

/* ADC1_SAL_SALSW0 (rw) */
#define ADC1_SAL_SALSW0_POS            _ADC_UL(12)
#define ADC1_SAL_SALSW0_LEN            _ADC_UL(3)

/* ADC1_SAL_SALT (rw) */
#define ADC1_SAL_SALT_POS              _ADC_UL(24)
#define ADC1_SAL_SALT_LEN              _ADC_UL(3)

/* ADC1_SCN_GRPC (rw) */
#define ADC1_SCN_GRPC_POS              _ADC_UL(30)
#define ADC1_SCN_GRPC_LEN              _ADC_UL(2)

/* ADC1_SCN_SRQ0 (rw) */
#define ADC1_SCN_SRQ0_POS              _ADC_UL(0)
#define ADC1_SCN_SRQ0_LEN              _ADC_UL(1)

/* ADC1_SCN_SRQ1 (rw) */
#define ADC1_SCN_SRQ1_POS              _ADC_UL(1)
#define ADC1_SCN_SRQ1_LEN              _ADC_UL(1)

/* ADC1_SCN_SRQ10 (rw) */
#define ADC1_SCN_SRQ10_POS             _ADC_UL(10)
#define ADC1_SCN_SRQ10_LEN             _ADC_UL(1)

/* ADC1_SCN_SRQ11 (rw) */
#define ADC1_SCN_SRQ11_POS             _ADC_UL(11)
#define ADC1_SCN_SRQ11_LEN             _ADC_UL(1)

/* ADC1_SCN_SRQ12 (rw) */
#define ADC1_SCN_SRQ12_POS             _ADC_UL(12)
#define ADC1_SCN_SRQ12_LEN             _ADC_UL(1)

/* ADC1_SCN_SRQ13 (rw) */
#define ADC1_SCN_SRQ13_POS             _ADC_UL(13)
#define ADC1_SCN_SRQ13_LEN             _ADC_UL(1)

/* ADC1_SCN_SRQ14 (rw) */
#define ADC1_SCN_SRQ14_POS             _ADC_UL(14)
#define ADC1_SCN_SRQ14_LEN             _ADC_UL(1)

/* ADC1_SCN_SRQ15 (rw) */
#define ADC1_SCN_SRQ15_POS             _ADC_UL(15)
#define ADC1_SCN_SRQ15_LEN             _ADC_UL(1)

/* ADC1_SCN_SRQ2 (rw) */
#define ADC1_SCN_SRQ2_POS              _ADC_UL(2)
#define ADC1_SCN_SRQ2_LEN              _ADC_UL(1)

/* ADC1_SCN_SRQ3 (rw) */
#define ADC1_SCN_SRQ3_POS              _ADC_UL(3)
#define ADC1_SCN_SRQ3_LEN              _ADC_UL(1)

/* ADC1_SCN_SRQ4 (rw) */
#define ADC1_SCN_SRQ4_POS              _ADC_UL(4)
#define ADC1_SCN_SRQ4_LEN              _ADC_UL(1)

/* ADC1_SCN_SRQ5 (rw) */
#define ADC1_SCN_SRQ5_POS              _ADC_UL(5)
#define ADC1_SCN_SRQ5_LEN              _ADC_UL(1)

/* ADC1_SCN_SRQ6 (rw) */
#define ADC1_SCN_SRQ6_POS              _ADC_UL(6)
#define ADC1_SCN_SRQ6_LEN              _ADC_UL(1)

/* ADC1_SCN_SRQ7 (rw) */
#define ADC1_SCN_SRQ7_POS              _ADC_UL(7)
#define ADC1_SCN_SRQ7_LEN              _ADC_UL(1)

/* ADC1_SCN_SRQ8 (rw) */
#define ADC1_SCN_SRQ8_POS              _ADC_UL(8)
#define ADC1_SCN_SRQ8_LEN              _ADC_UL(1)

/* ADC1_SCN_SRQ9 (rw) */
#define ADC1_SCN_SRQ9_POS              _ADC_UL(9)
#define ADC1_SCN_SRQ9_LEN              _ADC_UL(1)

/* ADC1_SCON_QENC (w) */
#define ADC1_SCON_QENC_POS             _ADC_UL(0)
#define ADC1_SCON_QENC_LEN             _ADC_UL(1)

/* ADC1_SCON_QENS (w) */
#define ADC1_SCON_QENS_POS             _ADC_UL(1)
#define ADC1_SCON_QENS_LEN             _ADC_UL(1)

/* ADC1_SCON_QRS (w) */
#define ADC1_SCON_QRS_POS              _ADC_UL(4)
#define ADC1_SCON_QRS_LEN              _ADC_UL(1)

/* ADC1_SCON_TRC (w) */
#define ADC1_SCON_TRC_POS              _ADC_UL(2)
#define ADC1_SCON_TRC_LEN              _ADC_UL(1)

/* ADC1_SCON_TRS (w) */
#define ADC1_SCON_TRS_POS              _ADC_UL(3)
#define ADC1_SCON_TRS_LEN              _ADC_UL(1)

/* ADC1_SRC0_CLRR (w) */
#define ADC1_SRC0_CLRR_POS             _ADC_UL(14)
#define ADC1_SRC0_CLRR_LEN             _ADC_UL(1)

/* ADC1_SRC0_SETR (w) */
#define ADC1_SRC0_SETR_POS             _ADC_UL(15)
#define ADC1_SRC0_SETR_LEN             _ADC_UL(1)

/* ADC1_SRC0_SRE (rw) */
#define ADC1_SRC0_SRE_POS              _ADC_UL(12)
#define ADC1_SRC0_SRE_LEN              _ADC_UL(1)

/* ADC1_SRC0_SRPN (rw) */
#define ADC1_SRC0_SRPN_POS             _ADC_UL(0)
#define ADC1_SRC0_SRPN_LEN             _ADC_UL(8)

/* ADC1_SRC0_SRR (rh) */
#define ADC1_SRC0_SRR_POS              _ADC_UL(13)
#define ADC1_SRC0_SRR_LEN              _ADC_UL(1)

/* ADC1_SRC0_TOS (rw) */
#define ADC1_SRC0_TOS_POS              _ADC_UL(10)
#define ADC1_SRC0_TOS_LEN              _ADC_UL(1)

/* ADC1_SRC1_CLRR (w) */
#define ADC1_SRC1_CLRR_POS             _ADC_UL(14)
#define ADC1_SRC1_CLRR_LEN             _ADC_UL(1)

/* ADC1_SRC1_SETR (w) */
#define ADC1_SRC1_SETR_POS             _ADC_UL(15)
#define ADC1_SRC1_SETR_LEN             _ADC_UL(1)

/* ADC1_SRC1_SRE (rw) */
#define ADC1_SRC1_SRE_POS              _ADC_UL(12)
#define ADC1_SRC1_SRE_LEN              _ADC_UL(1)

/* ADC1_SRC1_SRPN (rw) */
#define ADC1_SRC1_SRPN_POS             _ADC_UL(0)
#define ADC1_SRC1_SRPN_LEN             _ADC_UL(8)

/* ADC1_SRC1_SRR (rh) */
#define ADC1_SRC1_SRR_POS              _ADC_UL(13)
#define ADC1_SRC1_SRR_LEN              _ADC_UL(1)

/* ADC1_SRC1_TOS (rw) */
#define ADC1_SRC1_TOS_POS              _ADC_UL(10)
#define ADC1_SRC1_TOS_LEN              _ADC_UL(1)

/* ADC1_SRC2_CLRR (w) */
#define ADC1_SRC2_CLRR_POS             _ADC_UL(14)
#define ADC1_SRC2_CLRR_LEN             _ADC_UL(1)

/* ADC1_SRC2_SETR (w) */
#define ADC1_SRC2_SETR_POS             _ADC_UL(15)
#define ADC1_SRC2_SETR_LEN             _ADC_UL(1)

/* ADC1_SRC2_SRE (rw) */
#define ADC1_SRC2_SRE_POS              _ADC_UL(12)
#define ADC1_SRC2_SRE_LEN              _ADC_UL(1)

/* ADC1_SRC2_SRPN (rw) */
#define ADC1_SRC2_SRPN_POS             _ADC_UL(0)
#define ADC1_SRC2_SRPN_LEN             _ADC_UL(8)

/* ADC1_SRC2_SRR (rh) */
#define ADC1_SRC2_SRR_POS              _ADC_UL(13)
#define ADC1_SRC2_SRR_LEN              _ADC_UL(1)

/* ADC1_SRC2_TOS (rw) */
#define ADC1_SRC2_TOS_POS              _ADC_UL(10)
#define ADC1_SRC2_TOS_LEN              _ADC_UL(1)

/* ADC1_SRC3_CLRR (w) */
#define ADC1_SRC3_CLRR_POS             _ADC_UL(14)
#define ADC1_SRC3_CLRR_LEN             _ADC_UL(1)

/* ADC1_SRC3_SETR (w) */
#define ADC1_SRC3_SETR_POS             _ADC_UL(15)
#define ADC1_SRC3_SETR_LEN             _ADC_UL(1)

/* ADC1_SRC3_SRE (rw) */
#define ADC1_SRC3_SRE_POS              _ADC_UL(12)
#define ADC1_SRC3_SRE_LEN              _ADC_UL(1)

/* ADC1_SRC3_SRPN (rw) */
#define ADC1_SRC3_SRPN_POS             _ADC_UL(0)
#define ADC1_SRC3_SRPN_LEN             _ADC_UL(8)

/* ADC1_SRC3_SRR (rh) */
#define ADC1_SRC3_SRR_POS              _ADC_UL(13)
#define ADC1_SRC3_SRR_LEN              _ADC_UL(1)

/* ADC1_SRC3_TOS (rw) */
#define ADC1_SRC3_TOS_POS              _ADC_UL(10)
#define ADC1_SRC3_TOS_LEN              _ADC_UL(1)

/* ADC1_SRNP_ENPAS (rw) */
#define ADC1_SRNP_ENPAS_POS            _ADC_UL(12)
#define ADC1_SRNP_ENPAS_LEN            _ADC_UL(1)

/* ADC1_SRNP_ENPQR (rw) */
#define ADC1_SRNP_ENPQR_POS            _ADC_UL(8)
#define ADC1_SRNP_ENPQR_LEN            _ADC_UL(1)

/* ADC1_SRNP_ENPSY (rw) */
#define ADC1_SRNP_ENPSY_POS            _ADC_UL(4)
#define ADC1_SRNP_ENPSY_LEN            _ADC_UL(1)

/* ADC1_SRNP_ENPT (rw) */
#define ADC1_SRNP_ENPT_POS             _ADC_UL(0)
#define ADC1_SRNP_ENPT_LEN             _ADC_UL(1)

/* ADC1_SRNP_PAS (rw) */
#define ADC1_SRNP_PAS_POS              _ADC_UL(13)
#define ADC1_SRNP_PAS_LEN              _ADC_UL(3)

/* ADC1_SRNP_PQR (rw) */
#define ADC1_SRNP_PQR_POS              _ADC_UL(9)
#define ADC1_SRNP_PQR_LEN              _ADC_UL(3)

/* ADC1_SRNP_PSY (rw) */
#define ADC1_SRNP_PSY_POS              _ADC_UL(5)
#define ADC1_SRNP_PSY_LEN              _ADC_UL(3)

/* ADC1_SRNP_PT (rw) */
#define ADC1_SRNP_PT_POS               _ADC_UL(1)
#define ADC1_SRNP_PT_LEN               _ADC_UL(3)

/* ADC1_STAT_AL (rh) */
#define ADC1_STAT_AL_POS               _ADC_UL(12)
#define ADC1_STAT_AL_LEN               _ADC_UL(1)

/* ADC1_STAT_BUSY (rh) */
#define ADC1_STAT_BUSY_POS             _ADC_UL(15)
#define ADC1_STAT_BUSY_LEN             _ADC_UL(1)

/* ADC1_STAT_CAL (rh) */
#define ADC1_STAT_CAL_POS              _ADC_UL(13)
#define ADC1_STAT_CAL_LEN              _ADC_UL(1)

/* ADC1_STAT_CHNRCC (rh) */
#define ADC1_STAT_CHNRCC_POS           _ADC_UL(0)
#define ADC1_STAT_CHNRCC_LEN           _ADC_UL(4)

/* ADC1_STAT_CHTSCC (rh) */
#define ADC1_STAT_CHTSCC_POS           _ADC_UL(8)
#define ADC1_STAT_CHTSCC_LEN           _ADC_UL(3)

/* ADC1_STAT_DATAVAL (rh) */
#define ADC1_STAT_DATAVAL_POS          _ADC_UL(11)
#define ADC1_STAT_DATAVAL_LEN          _ADC_UL(1)

/* ADC1_STAT_IENPAR (rh) */
#define ADC1_STAT_IENPAR_POS           _ADC_UL(27)
#define ADC1_STAT_IENPAR_LEN           _ADC_UL(1)

/* ADC1_STAT_IENREQ (rh) */
#define ADC1_STAT_IENREQ_POS           _ADC_UL(26)
#define ADC1_STAT_IENREQ_LEN           _ADC_UL(1)

/* ADC1_STAT_PARSY (rh) */
#define ADC1_STAT_PARSY_POS            _ADC_UL(25)
#define ADC1_STAT_PARSY_LEN            _ADC_UL(1)

/* ADC1_STAT_QF (rh) */
#define ADC1_STAT_QF_POS               _ADC_UL(20)
#define ADC1_STAT_QF_LEN               _ADC_UL(1)

/* ADC1_STAT_QLP (rh) */
#define ADC1_STAT_QLP_POS              _ADC_UL(16)
#define ADC1_STAT_QLP_LEN              _ADC_UL(4)

/* ADC1_STAT_REQSY (rh) */
#define ADC1_STAT_REQSY_POS            _ADC_UL(24)
#define ADC1_STAT_REQSY_LEN            _ADC_UL(1)

/* ADC1_STAT_SMPL (rh) */
#define ADC1_STAT_SMPL_POS             _ADC_UL(14)
#define ADC1_STAT_SMPL_LEN             _ADC_UL(1)

/* ADC1_STAT_SYMS (rh) */
#define ADC1_STAT_SYMS_POS             _ADC_UL(28)
#define ADC1_STAT_SYMS_LEN             _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP0 (rh) */
#define ADC1_SW0CRP_SW0CRP0_POS        _ADC_UL(0)
#define ADC1_SW0CRP_SW0CRP0_LEN        _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP1 (rh) */
#define ADC1_SW0CRP_SW0CRP1_POS        _ADC_UL(1)
#define ADC1_SW0CRP_SW0CRP1_LEN        _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP10 (rh) */
#define ADC1_SW0CRP_SW0CRP10_POS       _ADC_UL(10)
#define ADC1_SW0CRP_SW0CRP10_LEN       _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP11 (rh) */
#define ADC1_SW0CRP_SW0CRP11_POS       _ADC_UL(11)
#define ADC1_SW0CRP_SW0CRP11_LEN       _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP12 (rh) */
#define ADC1_SW0CRP_SW0CRP12_POS       _ADC_UL(12)
#define ADC1_SW0CRP_SW0CRP12_LEN       _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP13 (rh) */
#define ADC1_SW0CRP_SW0CRP13_POS       _ADC_UL(13)
#define ADC1_SW0CRP_SW0CRP13_LEN       _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP14 (rh) */
#define ADC1_SW0CRP_SW0CRP14_POS       _ADC_UL(14)
#define ADC1_SW0CRP_SW0CRP14_LEN       _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP15 (rh) */
#define ADC1_SW0CRP_SW0CRP15_POS       _ADC_UL(15)
#define ADC1_SW0CRP_SW0CRP15_LEN       _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP2 (rh) */
#define ADC1_SW0CRP_SW0CRP2_POS        _ADC_UL(2)
#define ADC1_SW0CRP_SW0CRP2_LEN        _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP3 (rh) */
#define ADC1_SW0CRP_SW0CRP3_POS        _ADC_UL(3)
#define ADC1_SW0CRP_SW0CRP3_LEN        _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP4 (rh) */
#define ADC1_SW0CRP_SW0CRP4_POS        _ADC_UL(4)
#define ADC1_SW0CRP_SW0CRP4_LEN        _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP5 (rh) */
#define ADC1_SW0CRP_SW0CRP5_POS        _ADC_UL(5)
#define ADC1_SW0CRP_SW0CRP5_LEN        _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP6 (rh) */
#define ADC1_SW0CRP_SW0CRP6_POS        _ADC_UL(6)
#define ADC1_SW0CRP_SW0CRP6_LEN        _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP7 (rh) */
#define ADC1_SW0CRP_SW0CRP7_POS        _ADC_UL(7)
#define ADC1_SW0CRP_SW0CRP7_LEN        _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP8 (rh) */
#define ADC1_SW0CRP_SW0CRP8_POS        _ADC_UL(8)
#define ADC1_SW0CRP_SW0CRP8_LEN        _ADC_UL(1)

/* ADC1_SW0CRP_SW0CRP9 (rh) */
#define ADC1_SW0CRP_SW0CRP9_POS        _ADC_UL(9)
#define ADC1_SW0CRP_SW0CRP9_LEN        _ADC_UL(1)

/* ADC1_SYSTAT_CHNRSY (rh) */
#define ADC1_SYSTAT_CHNRSY_POS         _ADC_UL(0)
#define ADC1_SYSTAT_CHNRSY_LEN         _ADC_UL(4)

/* ADC1_SYSTAT_CSREN (rh) */
#define ADC1_SYSTAT_CSREN_POS          _ADC_UL(15)
#define ADC1_SYSTAT_CSREN_LEN          _ADC_UL(1)

/* ADC1_SYSTAT_EMUX (rh) */
#define ADC1_SYSTAT_EMUX_POS           _ADC_UL(8)
#define ADC1_SYSTAT_EMUX_LEN           _ADC_UL(2)

/* ADC1_SYSTAT_GRPS (rh) */
#define ADC1_SYSTAT_GRPS_POS           _ADC_UL(10)
#define ADC1_SYSTAT_GRPS_LEN           _ADC_UL(1)

/* ADC1_SYSTAT_RES (rh) */
#define ADC1_SYSTAT_RES_POS            _ADC_UL(6)
#define ADC1_SYSTAT_RES_LEN            _ADC_UL(2)

/* ADC1_SYSTAT_SYREQ (rh) */
#define ADC1_SYSTAT_SYREQ_POS          _ADC_UL(31)
#define ADC1_SYSTAT_SYREQ_LEN          _ADC_UL(1)

/* ADC1_TCON_ALB (rw) */
#define ADC1_TCON_ALB_POS              _ADC_UL(0)
#define ADC1_TCON_ALB_LEN              _ADC_UL(14)

/* ADC1_TCON_TR (rh) */
#define ADC1_TCON_TR_POS               _ADC_UL(31)
#define ADC1_TCON_TR_LEN               _ADC_UL(1)

/* ADC1_TCON_TRLD (rw) */
#define ADC1_TCON_TRLD_POS             _ADC_UL(16)
#define ADC1_TCON_TRLD_LEN             _ADC_UL(14)

/* ADC1_TCON_TSEN (rw) */
#define ADC1_TCON_TSEN_POS             _ADC_UL(30)
#define ADC1_TCON_TSEN_LEN             _ADC_UL(1)

/* ADC1_TCRP_TRP0 (rh) */
#define ADC1_TCRP_TRP0_POS             _ADC_UL(0)
#define ADC1_TCRP_TRP0_LEN             _ADC_UL(1)

/* ADC1_TCRP_TRP1 (rh) */
#define ADC1_TCRP_TRP1_POS             _ADC_UL(1)
#define ADC1_TCRP_TRP1_LEN             _ADC_UL(1)

/* ADC1_TCRP_TRP10 (rh) */
#define ADC1_TCRP_TRP10_POS            _ADC_UL(10)
#define ADC1_TCRP_TRP10_LEN            _ADC_UL(1)

/* ADC1_TCRP_TRP11 (rh) */
#define ADC1_TCRP_TRP11_POS            _ADC_UL(11)
#define ADC1_TCRP_TRP11_LEN            _ADC_UL(1)

/* ADC1_TCRP_TRP12 (rh) */
#define ADC1_TCRP_TRP12_POS            _ADC_UL(12)
#define ADC1_TCRP_TRP12_LEN            _ADC_UL(1)

/* ADC1_TCRP_TRP13 (rh) */
#define ADC1_TCRP_TRP13_POS            _ADC_UL(13)
#define ADC1_TCRP_TRP13_LEN            _ADC_UL(1)

/* ADC1_TCRP_TRP14 (rh) */
#define ADC1_TCRP_TRP14_POS            _ADC_UL(14)
#define ADC1_TCRP_TRP14_LEN            _ADC_UL(1)

/* ADC1_TCRP_TRP15 (rh) */
#define ADC1_TCRP_TRP15_POS            _ADC_UL(15)
#define ADC1_TCRP_TRP15_LEN            _ADC_UL(1)

/* ADC1_TCRP_TRP2 (rh) */
#define ADC1_TCRP_TRP2_POS             _ADC_UL(2)
#define ADC1_TCRP_TRP2_LEN             _ADC_UL(1)

/* ADC1_TCRP_TRP3 (rh) */
#define ADC1_TCRP_TRP3_POS             _ADC_UL(3)
#define ADC1_TCRP_TRP3_LEN             _ADC_UL(1)

/* ADC1_TCRP_TRP4 (rh) */
#define ADC1_TCRP_TRP4_POS             _ADC_UL(4)
#define ADC1_TCRP_TRP4_LEN             _ADC_UL(1)

/* ADC1_TCRP_TRP5 (rh) */
#define ADC1_TCRP_TRP5_POS             _ADC_UL(5)
#define ADC1_TCRP_TRP5_LEN             _ADC_UL(1)

/* ADC1_TCRP_TRP6 (rh) */
#define ADC1_TCRP_TRP6_POS             _ADC_UL(6)
#define ADC1_TCRP_TRP6_LEN             _ADC_UL(1)

/* ADC1_TCRP_TRP7 (rh) */
#define ADC1_TCRP_TRP7_POS             _ADC_UL(7)
#define ADC1_TCRP_TRP7_LEN             _ADC_UL(1)

/* ADC1_TCRP_TRP8 (rh) */
#define ADC1_TCRP_TRP8_POS             _ADC_UL(8)
#define ADC1_TCRP_TRP8_LEN             _ADC_UL(1)

/* ADC1_TCRP_TRP9 (rh) */
#define ADC1_TCRP_TRP9_POS             _ADC_UL(9)
#define ADC1_TCRP_TRP9_LEN             _ADC_UL(1)

/* ADC1_TEST_TEST14 (rw) */
#define ADC1_TEST_TEST14_POS           _ADC_UL(14)
#define ADC1_TEST_TEST14_LEN           _ADC_UL(1)

/* ADC1_TSTAT_TIMER (rh) */
#define ADC1_TSTAT_TIMER_POS           _ADC_UL(0)
#define ADC1_TSTAT_TIMER_LEN           _ADC_UL(14)

/* ADC1_TTC_TTCCH0 (rw) */
#define ADC1_TTC_TTCCH0_POS            _ADC_UL(0)
#define ADC1_TTC_TTCCH0_LEN            _ADC_UL(1)

/* ADC1_TTC_TTCCH1 (rw) */
#define ADC1_TTC_TTCCH1_POS            _ADC_UL(1)
#define ADC1_TTC_TTCCH1_LEN            _ADC_UL(1)

/* ADC1_TTC_TTCCH10 (rw) */
#define ADC1_TTC_TTCCH10_POS           _ADC_UL(10)
#define ADC1_TTC_TTCCH10_LEN           _ADC_UL(1)

/* ADC1_TTC_TTCCH11 (rw) */
#define ADC1_TTC_TTCCH11_POS           _ADC_UL(11)
#define ADC1_TTC_TTCCH11_LEN           _ADC_UL(1)

/* ADC1_TTC_TTCCH12 (rw) */
#define ADC1_TTC_TTCCH12_POS           _ADC_UL(12)
#define ADC1_TTC_TTCCH12_LEN           _ADC_UL(1)

/* ADC1_TTC_TTCCH13 (rw) */
#define ADC1_TTC_TTCCH13_POS           _ADC_UL(13)
#define ADC1_TTC_TTCCH13_LEN           _ADC_UL(1)

/* ADC1_TTC_TTCCH14 (rw) */
#define ADC1_TTC_TTCCH14_POS           _ADC_UL(14)
#define ADC1_TTC_TTCCH14_LEN           _ADC_UL(1)

/* ADC1_TTC_TTCCH15 (rw) */
#define ADC1_TTC_TTCCH15_POS           _ADC_UL(15)
#define ADC1_TTC_TTCCH15_LEN           _ADC_UL(1)

/* ADC1_TTC_TTCCH2 (rw) */
#define ADC1_TTC_TTCCH2_POS            _ADC_UL(2)
#define ADC1_TTC_TTCCH2_LEN            _ADC_UL(1)

/* ADC1_TTC_TTCCH3 (rw) */
#define ADC1_TTC_TTCCH3_POS            _ADC_UL(3)
#define ADC1_TTC_TTCCH3_LEN            _ADC_UL(1)

/* ADC1_TTC_TTCCH4 (rw) */
#define ADC1_TTC_TTCCH4_POS            _ADC_UL(4)
#define ADC1_TTC_TTCCH4_LEN            _ADC_UL(1)

/* ADC1_TTC_TTCCH5 (rw) */
#define ADC1_TTC_TTCCH5_POS            _ADC_UL(5)
#define ADC1_TTC_TTCCH5_LEN            _ADC_UL(1)

/* ADC1_TTC_TTCCH6 (rw) */
#define ADC1_TTC_TTCCH6_POS            _ADC_UL(6)
#define ADC1_TTC_TTCCH6_LEN            _ADC_UL(1)

/* ADC1_TTC_TTCCH7 (rw) */
#define ADC1_TTC_TTCCH7_POS            _ADC_UL(7)
#define ADC1_TTC_TTCCH7_LEN            _ADC_UL(1)

/* ADC1_TTC_TTCCH8 (rw) */
#define ADC1_TTC_TTCCH8_POS            _ADC_UL(8)
#define ADC1_TTC_TTCCH8_LEN            _ADC_UL(1)

/* ADC1_TTC_TTCCH9 (rw) */
#define ADC1_TTC_TTCCH9_POS            _ADC_UL(9)
#define ADC1_TTC_TTCCH9_LEN            _ADC_UL(1)

#endif
