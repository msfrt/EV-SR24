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
 * $Filename__:ltca2_1796.h$ 
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
 * $Name______:ltca2_1796$ 
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
 *      File name: ltca2_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _LTCA2_1796_H
#define _LTCA2_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _LTCA2_UL(x) x
#else
    #define _LTCA2_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module LTCA2 on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* sub-structure for local timer cell (LTC) */
typedef struct {
    volatile uint32 LTCCTR;        // GPTA Local Timer Cell Control Register
    volatile uint32 LTCXR;         // GPTA Local Timer Cell X Register
} LTCA2_LTC_t;

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF0002800...0xF0002807] : reserved space
    volatile uint32 ID;                  // [0xF0002808] : LTCA2 Module Identification Register
    volatile uint32 RESERVED1[5];        // [0xF000280C...0xF000281F] : reserved space
    volatile uint32 SRSC2;               // [0xF0002820] : LTCA2 Service Request Clear Register 2
    volatile uint32 SRSS2;               // [0xF0002824] : LTCA2 Service Request Set Register 2
    volatile uint32 SRSC3;               // [0xF0002828] : LTCA2 Service Request Clear Register 3
    volatile uint32 SRSS3;               // [0xF000282C] : LTCA2 Service Request Set Register 3
    volatile uint32 RESERVED2[2];        // [0xF0002830...0xF0002837] : reserved space
    volatile uint32 MRACTL;              // [0xF0002838] : LTCA2 Multiplexer Register Array Control Register
    volatile uint32 MRADIN;              // [0xF000283C] : LTCA2 Multiplexer Register Array Data In Register
    volatile uint32 MRADOUT;             // [0xF0002840] : LTCA2 Multiplexer Register Array Data Out Register
    volatile uint32 RESERVED3[111];      // [0xF0002844...0xF00029FF] : reserved space
    LTCA2_LTC_t     LTC[64];             // [0xF0002A00] : LTCA2 Local Timer Cells
    volatile uint32 RESERVED4[240];      // [0xF0002C00...0xF0002FBF] : reserved space
    volatile uint32 SRC15;               // [0xF0002FC0] : LTCA2 Service Request Control Register 15
    volatile uint32 SRC14;               // [0xF0002FC4] : LTCA2 Service Request Control Register 14
    volatile uint32 SRC13;               // [0xF0002FC8] : LTCA2 Service Request Control Register 13
    volatile uint32 SRC12;               // [0xF0002FCC] : LTCA2 Service Request Control Register 12
    volatile uint32 SRC11;               // [0xF0002FD0] : LTCA2 Service Request Control Register 11
    volatile uint32 SRC10;               // [0xF0002FD4] : LTCA2 Service Request Control Register 10
    volatile uint32 SRC09;               // [0xF0002FD8] : LTCA2 Service Request Control Register 09
    volatile uint32 SRC08;               // [0xF0002FDC] : LTCA2 Service Request Control Register 08
    volatile uint32 SRC07;               // [0xF0002FE0] : LTCA2 Service Request Control Register 07
    volatile uint32 SRC06;               // [0xF0002FE4] : LTCA2 Service Request Control Register 06
    volatile uint32 SRC05;               // [0xF0002FE8] : LTCA2 Service Request Control Register 05
    volatile uint32 SRC04;               // [0xF0002FEC] : LTCA2 Service Request Control Register 04
    volatile uint32 SRC03;               // [0xF0002FF0] : LTCA2 Service Request Control Register 03
    volatile uint32 SRC02;               // [0xF0002FF4] : LTCA2 Service Request Control Register 02
    volatile uint32 SRC01;               // [0xF0002FF8] : LTCA2 Service Request Control Register 01
    volatile uint32 SRC00;               // [0xF0002FFC] : LTCA2 Service Request Control Register 00
} LTCA2_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern LTCA2_RegMap_t LTCA2 __attribute__ ((asection (".zbss.label_only","f=awz")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/

/* LTCA2_LTCCTR63_OSM (rw) */
#define LTCA2_LTCCTR63_OSM_POS         _LTCA2_UL(1)
#define LTCA2_LTCCTR63_OSM_LEN         _LTCA2_UL(1)

/* LTCA2_LTCCTR63_REN (rw) */
#define LTCA2_LTCCTR63_REN_POS         _LTCA2_UL(2)
#define LTCA2_LTCCTR63_REN_LEN         _LTCA2_UL(2)

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

/* LTCA2_ID_Mod_Number (r) */
#define LTCA2_ID_Mod_Number_POS        _LTCA2_UL(16)
#define LTCA2_ID_Mod_Number_LEN        _LTCA2_UL(16)

/* LTCA2_ID_Mod_Rev (r) */
#define LTCA2_ID_Mod_Rev_POS           _LTCA2_UL(0)
#define LTCA2_ID_Mod_Rev_LEN           _LTCA2_UL(8)

/* LTCA2_ID_Mod_Type (r) */
#define LTCA2_ID_Mod_Type_POS          _LTCA2_UL(8)
#define LTCA2_ID_Mod_Type_LEN          _LTCA2_UL(8)

/* LTCA2_LTCCTR_BRM (rw) */
#define LTCA2_LTCCTR_BRM_POS           _LTCA2_UL(0)
#define LTCA2_LTCCTR_BRM_LEN           _LTCA2_UL(1)

/* LTCA2_LTCCTR_CEN (rh) */
#define LTCA2_LTCCTR_CEN_POS           _LTCA2_UL(10)
#define LTCA2_LTCCTR_CEN_LEN           _LTCA2_UL(1)

/* LTCA2_LTCCTR_CUD (rwh) */
#define LTCA2_LTCCTR_CUD_POS           _LTCA2_UL(9)
#define LTCA2_LTCCTR_CUD_LEN           _LTCA2_UL(1)

/* LTCA2_LTCCTR_FED (rw) */
#define LTCA2_LTCCTR_FED_POS           _LTCA2_UL(5)
#define LTCA2_LTCCTR_FED_LEN           _LTCA2_UL(1)

/* LTCA2_LTCCTR_ILM (rw) */
#define LTCA2_LTCCTR_ILM_POS           _LTCA2_UL(8)
#define LTCA2_LTCCTR_ILM_LEN           _LTCA2_UL(1)

/* LTCA2_LTCCTR_MOD (rw) */
#define LTCA2_LTCCTR_MOD_POS           _LTCA2_UL(0)
#define LTCA2_LTCCTR_MOD_LEN           _LTCA2_UL(2)

/* LTCA2_LTCCTR_NE (rw) */
#define LTCA2_LTCCTR_NE_POS            _LTCA2_UL(7)
#define LTCA2_LTCCTR_NE_LEN            _LTCA2_UL(1)

/* LTCA2_LTCCTR_OCM (rw) */
#define LTCA2_LTCCTR_OCM_POS           _LTCA2_UL(11)
#define LTCA2_LTCCTR_OCM_LEN           _LTCA2_UL(3)

/* LTCA2_LTCCTR_OIA (rw) */
#define LTCA2_LTCCTR_OIA_POS           _LTCA2_UL(14)
#define LTCA2_LTCCTR_OIA_LEN           _LTCA2_UL(1)

/* LTCA2_LTCCTR_OSM (rw) */
#define LTCA2_LTCCTR_OSM_POS           _LTCA2_UL(2)
#define LTCA2_LTCCTR_OSM_LEN           _LTCA2_UL(1)

/* LTCA2_LTCCTR_OUT (rh) */
#define LTCA2_LTCCTR_OUT_POS           _LTCA2_UL(15)
#define LTCA2_LTCCTR_OUT_LEN           _LTCA2_UL(1)

/* LTCA2_LTCCTR_RED (rw) */
#define LTCA2_LTCCTR_RED_POS           _LTCA2_UL(4)
#define LTCA2_LTCCTR_RED_LEN           _LTCA2_UL(1)

/* LTCA2_LTCCTR_REN (rw) */
#define LTCA2_LTCCTR_REN_POS           _LTCA2_UL(3)
#define LTCA2_LTCCTR_REN_LEN           _LTCA2_UL(1)

/* LTCA2_LTCCTR_SLO (rwh) */
#define LTCA2_LTCCTR_SLO_POS           _LTCA2_UL(6)
#define LTCA2_LTCCTR_SLO_LEN           _LTCA2_UL(1)

/* LTCA2_LTCXR_X (rwh) */
#define LTCA2_LTCXR_X_POS              _LTCA2_UL(0)
#define LTCA2_LTCXR_X_LEN              _LTCA2_UL(16)

/* LTCA2_LTCXR_XS (rw) */
#define LTCA2_LTCXR_XS_POS             _LTCA2_UL(16)
#define LTCA2_LTCXR_XS_LEN             _LTCA2_UL(16)

/* LTCA2_MRACTL_FIFOFILLCNT (r) */
#define LTCA2_MRACTL_FIFOFILLCNT_POS   _LTCA2_UL(8)
#define LTCA2_MRACTL_FIFOFILLCNT_LEN   _LTCA2_UL(6)

/* LTCA2_MRACTL_FIFOFULL (r) */
#define LTCA2_MRACTL_FIFOFULL_POS      _LTCA2_UL(2)
#define LTCA2_MRACTL_FIFOFULL_LEN      _LTCA2_UL(1)

/* LTCA2_MRACTL_MAEN (rw) */
#define LTCA2_MRACTL_MAEN_POS          _LTCA2_UL(0)
#define LTCA2_MRACTL_MAEN_LEN          _LTCA2_UL(1)

/* LTCA2_MRACTL_WCRES (w) */
#define LTCA2_MRACTL_WCRES_POS         _LTCA2_UL(1)
#define LTCA2_MRACTL_WCRES_LEN         _LTCA2_UL(1)

/* LTCA2_MRADIN_DATAIN (w) */
#define LTCA2_MRADIN_DATAIN_POS        _LTCA2_UL(0)
#define LTCA2_MRADIN_DATAIN_LEN        _LTCA2_UL(32)

/* LTCA2_MRADOUT_DATAOUT (rh) */
#define LTCA2_MRADOUT_DATAOUT_POS      _LTCA2_UL(0)
#define LTCA2_MRADOUT_DATAOUT_LEN      _LTCA2_UL(32)

/* LTCA2_SRC00_CLRR (w) */
#define LTCA2_SRC00_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC00_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC00_SETR (w) */
#define LTCA2_SRC00_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC00_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC00_SRE (rw) */
#define LTCA2_SRC00_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC00_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC00_SRPN (rw) */
#define LTCA2_SRC00_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC00_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC00_SRR (rh) */
#define LTCA2_SRC00_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC00_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC00_TOS (rw) */
#define LTCA2_SRC00_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC00_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC01_CLRR (w) */
#define LTCA2_SRC01_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC01_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC01_SETR (w) */
#define LTCA2_SRC01_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC01_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC01_SRE (rw) */
#define LTCA2_SRC01_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC01_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC01_SRPN (rw) */
#define LTCA2_SRC01_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC01_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC01_SRR (rh) */
#define LTCA2_SRC01_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC01_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC01_TOS (rw) */
#define LTCA2_SRC01_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC01_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC02_CLRR (w) */
#define LTCA2_SRC02_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC02_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC02_SETR (w) */
#define LTCA2_SRC02_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC02_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC02_SRE (rw) */
#define LTCA2_SRC02_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC02_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC02_SRPN (rw) */
#define LTCA2_SRC02_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC02_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC02_SRR (rh) */
#define LTCA2_SRC02_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC02_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC02_TOS (rw) */
#define LTCA2_SRC02_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC02_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC03_CLRR (w) */
#define LTCA2_SRC03_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC03_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC03_SETR (w) */
#define LTCA2_SRC03_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC03_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC03_SRE (rw) */
#define LTCA2_SRC03_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC03_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC03_SRPN (rw) */
#define LTCA2_SRC03_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC03_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC03_SRR (rh) */
#define LTCA2_SRC03_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC03_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC03_TOS (rw) */
#define LTCA2_SRC03_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC03_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC04_CLRR (w) */
#define LTCA2_SRC04_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC04_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC04_SETR (w) */
#define LTCA2_SRC04_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC04_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC04_SRE (rw) */
#define LTCA2_SRC04_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC04_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC04_SRPN (rw) */
#define LTCA2_SRC04_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC04_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC04_SRR (rh) */
#define LTCA2_SRC04_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC04_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC04_TOS (rw) */
#define LTCA2_SRC04_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC04_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC05_CLRR (w) */
#define LTCA2_SRC05_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC05_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC05_SETR (w) */
#define LTCA2_SRC05_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC05_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC05_SRE (rw) */
#define LTCA2_SRC05_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC05_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC05_SRPN (rw) */
#define LTCA2_SRC05_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC05_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC05_SRR (rh) */
#define LTCA2_SRC05_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC05_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC05_TOS (rw) */
#define LTCA2_SRC05_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC05_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC06_CLRR (w) */
#define LTCA2_SRC06_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC06_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC06_SETR (w) */
#define LTCA2_SRC06_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC06_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC06_SRE (rw) */
#define LTCA2_SRC06_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC06_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC06_SRPN (rw) */
#define LTCA2_SRC06_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC06_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC06_SRR (rh) */
#define LTCA2_SRC06_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC06_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC06_TOS (rw) */
#define LTCA2_SRC06_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC06_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC07_CLRR (w) */
#define LTCA2_SRC07_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC07_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC07_SETR (w) */
#define LTCA2_SRC07_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC07_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC07_SRE (rw) */
#define LTCA2_SRC07_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC07_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC07_SRPN (rw) */
#define LTCA2_SRC07_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC07_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC07_SRR (rh) */
#define LTCA2_SRC07_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC07_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC07_TOS (rw) */
#define LTCA2_SRC07_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC07_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC08_CLRR (w) */
#define LTCA2_SRC08_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC08_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC08_SETR (w) */
#define LTCA2_SRC08_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC08_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC08_SRE (rw) */
#define LTCA2_SRC08_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC08_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC08_SRPN (rw) */
#define LTCA2_SRC08_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC08_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC08_SRR (rh) */
#define LTCA2_SRC08_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC08_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC08_TOS (rw) */
#define LTCA2_SRC08_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC08_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC09_CLRR (w) */
#define LTCA2_SRC09_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC09_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC09_SETR (w) */
#define LTCA2_SRC09_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC09_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC09_SRE (rw) */
#define LTCA2_SRC09_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC09_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC09_SRPN (rw) */
#define LTCA2_SRC09_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC09_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC09_SRR (rh) */
#define LTCA2_SRC09_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC09_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC09_TOS (rw) */
#define LTCA2_SRC09_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC09_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC10_CLRR (w) */
#define LTCA2_SRC10_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC10_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC10_SETR (w) */
#define LTCA2_SRC10_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC10_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC10_SRE (rw) */
#define LTCA2_SRC10_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC10_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC10_SRPN (rw) */
#define LTCA2_SRC10_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC10_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC10_SRR (rh) */
#define LTCA2_SRC10_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC10_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC10_TOS (rw) */
#define LTCA2_SRC10_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC10_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC11_CLRR (w) */
#define LTCA2_SRC11_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC11_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC11_SETR (w) */
#define LTCA2_SRC11_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC11_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC11_SRE (rw) */
#define LTCA2_SRC11_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC11_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC11_SRPN (rw) */
#define LTCA2_SRC11_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC11_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC11_SRR (rh) */
#define LTCA2_SRC11_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC11_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC11_TOS (rw) */
#define LTCA2_SRC11_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC11_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC12_CLRR (w) */
#define LTCA2_SRC12_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC12_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC12_SETR (w) */
#define LTCA2_SRC12_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC12_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC12_SRE (rw) */
#define LTCA2_SRC12_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC12_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC12_SRPN (rw) */
#define LTCA2_SRC12_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC12_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC12_SRR (rh) */
#define LTCA2_SRC12_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC12_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC12_TOS (rw) */
#define LTCA2_SRC12_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC12_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC13_CLRR (w) */
#define LTCA2_SRC13_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC13_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC13_SETR (w) */
#define LTCA2_SRC13_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC13_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC13_SRE (rw) */
#define LTCA2_SRC13_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC13_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC13_SRPN (rw) */
#define LTCA2_SRC13_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC13_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC13_SRR (rh) */
#define LTCA2_SRC13_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC13_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC13_TOS (rw) */
#define LTCA2_SRC13_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC13_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC14_CLRR (w) */
#define LTCA2_SRC14_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC14_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC14_SETR (w) */
#define LTCA2_SRC14_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC14_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC14_SRE (rw) */
#define LTCA2_SRC14_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC14_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC14_SRPN (rw) */
#define LTCA2_SRC14_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC14_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC14_SRR (rh) */
#define LTCA2_SRC14_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC14_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC14_TOS (rw) */
#define LTCA2_SRC14_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC14_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRC15_CLRR (w) */
#define LTCA2_SRC15_CLRR_POS           _LTCA2_UL(14)
#define LTCA2_SRC15_CLRR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC15_SETR (w) */
#define LTCA2_SRC15_SETR_POS           _LTCA2_UL(15)
#define LTCA2_SRC15_SETR_LEN           _LTCA2_UL(1)

/* LTCA2_SRC15_SRE (rw) */
#define LTCA2_SRC15_SRE_POS            _LTCA2_UL(12)
#define LTCA2_SRC15_SRE_LEN            _LTCA2_UL(1)

/* LTCA2_SRC15_SRPN (rw) */
#define LTCA2_SRC15_SRPN_POS           _LTCA2_UL(0)
#define LTCA2_SRC15_SRPN_LEN           _LTCA2_UL(8)

/* LTCA2_SRC15_SRR (rh) */
#define LTCA2_SRC15_SRR_POS            _LTCA2_UL(13)
#define LTCA2_SRC15_SRR_LEN            _LTCA2_UL(1)

/* LTCA2_SRC15_TOS (rw) */
#define LTCA2_SRC15_TOS_POS            _LTCA2_UL(10)
#define LTCA2_SRC15_TOS_LEN            _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC00 (rwh) */
#define LTCA2_SRSC2_LTC00_POS          _LTCA2_UL(0)
#define LTCA2_SRSC2_LTC00_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC01 (rwh) */
#define LTCA2_SRSC2_LTC01_POS          _LTCA2_UL(1)
#define LTCA2_SRSC2_LTC01_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC02 (rwh) */
#define LTCA2_SRSC2_LTC02_POS          _LTCA2_UL(2)
#define LTCA2_SRSC2_LTC02_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC03 (rwh) */
#define LTCA2_SRSC2_LTC03_POS          _LTCA2_UL(3)
#define LTCA2_SRSC2_LTC03_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC04 (rwh) */
#define LTCA2_SRSC2_LTC04_POS          _LTCA2_UL(4)
#define LTCA2_SRSC2_LTC04_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC05 (rwh) */
#define LTCA2_SRSC2_LTC05_POS          _LTCA2_UL(5)
#define LTCA2_SRSC2_LTC05_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC06 (rwh) */
#define LTCA2_SRSC2_LTC06_POS          _LTCA2_UL(6)
#define LTCA2_SRSC2_LTC06_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC07 (rwh) */
#define LTCA2_SRSC2_LTC07_POS          _LTCA2_UL(7)
#define LTCA2_SRSC2_LTC07_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC08 (rwh) */
#define LTCA2_SRSC2_LTC08_POS          _LTCA2_UL(8)
#define LTCA2_SRSC2_LTC08_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC09 (rwh) */
#define LTCA2_SRSC2_LTC09_POS          _LTCA2_UL(9)
#define LTCA2_SRSC2_LTC09_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC10 (rwh) */
#define LTCA2_SRSC2_LTC10_POS          _LTCA2_UL(10)
#define LTCA2_SRSC2_LTC10_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC11 (rwh) */
#define LTCA2_SRSC2_LTC11_POS          _LTCA2_UL(11)
#define LTCA2_SRSC2_LTC11_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC12 (rwh) */
#define LTCA2_SRSC2_LTC12_POS          _LTCA2_UL(12)
#define LTCA2_SRSC2_LTC12_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC13 (rwh) */
#define LTCA2_SRSC2_LTC13_POS          _LTCA2_UL(13)
#define LTCA2_SRSC2_LTC13_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC14 (rwh) */
#define LTCA2_SRSC2_LTC14_POS          _LTCA2_UL(14)
#define LTCA2_SRSC2_LTC14_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC15 (rwh) */
#define LTCA2_SRSC2_LTC15_POS          _LTCA2_UL(15)
#define LTCA2_SRSC2_LTC15_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC16 (rwh) */
#define LTCA2_SRSC2_LTC16_POS          _LTCA2_UL(16)
#define LTCA2_SRSC2_LTC16_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC17 (rwh) */
#define LTCA2_SRSC2_LTC17_POS          _LTCA2_UL(17)
#define LTCA2_SRSC2_LTC17_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC18 (rwh) */
#define LTCA2_SRSC2_LTC18_POS          _LTCA2_UL(18)
#define LTCA2_SRSC2_LTC18_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC19 (rwh) */
#define LTCA2_SRSC2_LTC19_POS          _LTCA2_UL(19)
#define LTCA2_SRSC2_LTC19_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC20 (rwh) */
#define LTCA2_SRSC2_LTC20_POS          _LTCA2_UL(20)
#define LTCA2_SRSC2_LTC20_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC21 (rwh) */
#define LTCA2_SRSC2_LTC21_POS          _LTCA2_UL(21)
#define LTCA2_SRSC2_LTC21_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC22 (rwh) */
#define LTCA2_SRSC2_LTC22_POS          _LTCA2_UL(22)
#define LTCA2_SRSC2_LTC22_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC23 (rwh) */
#define LTCA2_SRSC2_LTC23_POS          _LTCA2_UL(23)
#define LTCA2_SRSC2_LTC23_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC24 (rwh) */
#define LTCA2_SRSC2_LTC24_POS          _LTCA2_UL(24)
#define LTCA2_SRSC2_LTC24_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC25 (rwh) */
#define LTCA2_SRSC2_LTC25_POS          _LTCA2_UL(25)
#define LTCA2_SRSC2_LTC25_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC26 (rwh) */
#define LTCA2_SRSC2_LTC26_POS          _LTCA2_UL(26)
#define LTCA2_SRSC2_LTC26_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC27 (rwh) */
#define LTCA2_SRSC2_LTC27_POS          _LTCA2_UL(27)
#define LTCA2_SRSC2_LTC27_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC28 (rwh) */
#define LTCA2_SRSC2_LTC28_POS          _LTCA2_UL(28)
#define LTCA2_SRSC2_LTC28_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC29 (rwh) */
#define LTCA2_SRSC2_LTC29_POS          _LTCA2_UL(29)
#define LTCA2_SRSC2_LTC29_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC30 (rwh) */
#define LTCA2_SRSC2_LTC30_POS          _LTCA2_UL(30)
#define LTCA2_SRSC2_LTC30_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC31 (rwh) */
#define LTCA2_SRSC2_LTC31_POS          _LTCA2_UL(31)
#define LTCA2_SRSC2_LTC31_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC32 (rwh) */
#define LTCA2_SRSC3_LTC32_POS          _LTCA2_UL(0)
#define LTCA2_SRSC3_LTC32_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC33 (rwh) */
#define LTCA2_SRSC3_LTC33_POS          _LTCA2_UL(1)
#define LTCA2_SRSC3_LTC33_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC34 (rwh) */
#define LTCA2_SRSC3_LTC34_POS          _LTCA2_UL(2)
#define LTCA2_SRSC3_LTC34_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC35 (rwh) */
#define LTCA2_SRSC3_LTC35_POS          _LTCA2_UL(3)
#define LTCA2_SRSC3_LTC35_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC36 (rwh) */
#define LTCA2_SRSC3_LTC36_POS          _LTCA2_UL(4)
#define LTCA2_SRSC3_LTC36_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC37 (rwh) */
#define LTCA2_SRSC3_LTC37_POS          _LTCA2_UL(5)
#define LTCA2_SRSC3_LTC37_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC38 (rwh) */
#define LTCA2_SRSC3_LTC38_POS          _LTCA2_UL(6)
#define LTCA2_SRSC3_LTC38_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC39 (rwh) */
#define LTCA2_SRSC3_LTC39_POS          _LTCA2_UL(7)
#define LTCA2_SRSC3_LTC39_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC40 (rwh) */
#define LTCA2_SRSC3_LTC40_POS          _LTCA2_UL(8)
#define LTCA2_SRSC3_LTC40_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC41 (rwh) */
#define LTCA2_SRSC3_LTC41_POS          _LTCA2_UL(9)
#define LTCA2_SRSC3_LTC41_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC42 (rwh) */
#define LTCA2_SRSC3_LTC42_POS          _LTCA2_UL(10)
#define LTCA2_SRSC3_LTC42_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC43 (rwh) */
#define LTCA2_SRSC3_LTC43_POS          _LTCA2_UL(11)
#define LTCA2_SRSC3_LTC43_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC44 (rwh) */
#define LTCA2_SRSC3_LTC44_POS          _LTCA2_UL(12)
#define LTCA2_SRSC3_LTC44_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC45 (rwh) */
#define LTCA2_SRSC3_LTC45_POS          _LTCA2_UL(13)
#define LTCA2_SRSC3_LTC45_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC46 (rwh) */
#define LTCA2_SRSC3_LTC46_POS          _LTCA2_UL(14)
#define LTCA2_SRSC3_LTC46_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC47 (rwh) */
#define LTCA2_SRSC3_LTC47_POS          _LTCA2_UL(15)
#define LTCA2_SRSC3_LTC47_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC48 (rwh) */
#define LTCA2_SRSC3_LTC48_POS          _LTCA2_UL(16)
#define LTCA2_SRSC3_LTC48_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC49 (rwh) */
#define LTCA2_SRSC3_LTC49_POS          _LTCA2_UL(17)
#define LTCA2_SRSC3_LTC49_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC50 (rwh) */
#define LTCA2_SRSC3_LTC50_POS          _LTCA2_UL(18)
#define LTCA2_SRSC3_LTC50_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC51 (rwh) */
#define LTCA2_SRSC3_LTC51_POS          _LTCA2_UL(19)
#define LTCA2_SRSC3_LTC51_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC52 (rwh) */
#define LTCA2_SRSC3_LTC52_POS          _LTCA2_UL(20)
#define LTCA2_SRSC3_LTC52_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC53 (rwh) */
#define LTCA2_SRSC3_LTC53_POS          _LTCA2_UL(21)
#define LTCA2_SRSC3_LTC53_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC54 (rwh) */
#define LTCA2_SRSC3_LTC54_POS          _LTCA2_UL(22)
#define LTCA2_SRSC3_LTC54_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC55 (rwh) */
#define LTCA2_SRSC3_LTC55_POS          _LTCA2_UL(23)
#define LTCA2_SRSC3_LTC55_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC56 (rwh) */
#define LTCA2_SRSC3_LTC56_POS          _LTCA2_UL(24)
#define LTCA2_SRSC3_LTC56_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC57 (rwh) */
#define LTCA2_SRSC3_LTC57_POS          _LTCA2_UL(25)
#define LTCA2_SRSC3_LTC57_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC58 (rwh) */
#define LTCA2_SRSC3_LTC58_POS          _LTCA2_UL(26)
#define LTCA2_SRSC3_LTC58_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC59 (rwh) */
#define LTCA2_SRSC3_LTC59_POS          _LTCA2_UL(27)
#define LTCA2_SRSC3_LTC59_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC60 (rwh) */
#define LTCA2_SRSC3_LTC60_POS          _LTCA2_UL(28)
#define LTCA2_SRSC3_LTC60_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC61 (rwh) */
#define LTCA2_SRSC3_LTC61_POS          _LTCA2_UL(29)
#define LTCA2_SRSC3_LTC61_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC62 (rwh) */
#define LTCA2_SRSC3_LTC62_POS          _LTCA2_UL(30)
#define LTCA2_SRSC3_LTC62_LEN          _LTCA2_UL(1)

/* LTCA2_SRSC3_LTC63 (rwh) */
#define LTCA2_SRSC3_LTC63_POS          _LTCA2_UL(31)
#define LTCA2_SRSC3_LTC63_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC00 (rwh) */
#define LTCA2_SRSS2_LTC00_POS          _LTCA2_UL(0)
#define LTCA2_SRSS2_LTC00_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC01 (rwh) */
#define LTCA2_SRSS2_LTC01_POS          _LTCA2_UL(1)
#define LTCA2_SRSS2_LTC01_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC02 (rwh) */
#define LTCA2_SRSS2_LTC02_POS          _LTCA2_UL(2)
#define LTCA2_SRSS2_LTC02_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC03 (rwh) */
#define LTCA2_SRSS2_LTC03_POS          _LTCA2_UL(3)
#define LTCA2_SRSS2_LTC03_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC04 (rwh) */
#define LTCA2_SRSS2_LTC04_POS          _LTCA2_UL(4)
#define LTCA2_SRSS2_LTC04_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC05 (rwh) */
#define LTCA2_SRSS2_LTC05_POS          _LTCA2_UL(5)
#define LTCA2_SRSS2_LTC05_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC06 (rwh) */
#define LTCA2_SRSS2_LTC06_POS          _LTCA2_UL(6)
#define LTCA2_SRSS2_LTC06_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC07 (rwh) */
#define LTCA2_SRSS2_LTC07_POS          _LTCA2_UL(7)
#define LTCA2_SRSS2_LTC07_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC08 (rwh) */
#define LTCA2_SRSS2_LTC08_POS          _LTCA2_UL(8)
#define LTCA2_SRSS2_LTC08_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC09 (rwh) */
#define LTCA2_SRSS2_LTC09_POS          _LTCA2_UL(9)
#define LTCA2_SRSS2_LTC09_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC10 (rwh) */
#define LTCA2_SRSS2_LTC10_POS          _LTCA2_UL(10)
#define LTCA2_SRSS2_LTC10_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC11 (rwh) */
#define LTCA2_SRSS2_LTC11_POS          _LTCA2_UL(11)
#define LTCA2_SRSS2_LTC11_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC12 (rwh) */
#define LTCA2_SRSS2_LTC12_POS          _LTCA2_UL(12)
#define LTCA2_SRSS2_LTC12_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC13 (rwh) */
#define LTCA2_SRSS2_LTC13_POS          _LTCA2_UL(13)
#define LTCA2_SRSS2_LTC13_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC14 (rwh) */
#define LTCA2_SRSS2_LTC14_POS          _LTCA2_UL(14)
#define LTCA2_SRSS2_LTC14_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC15 (rwh) */
#define LTCA2_SRSS2_LTC15_POS          _LTCA2_UL(15)
#define LTCA2_SRSS2_LTC15_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC16 (rwh) */
#define LTCA2_SRSS2_LTC16_POS          _LTCA2_UL(16)
#define LTCA2_SRSS2_LTC16_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC17 (rwh) */
#define LTCA2_SRSS2_LTC17_POS          _LTCA2_UL(17)
#define LTCA2_SRSS2_LTC17_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC18 (rwh) */
#define LTCA2_SRSS2_LTC18_POS          _LTCA2_UL(18)
#define LTCA2_SRSS2_LTC18_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC19 (rwh) */
#define LTCA2_SRSS2_LTC19_POS          _LTCA2_UL(19)
#define LTCA2_SRSS2_LTC19_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC20 (rwh) */
#define LTCA2_SRSS2_LTC20_POS          _LTCA2_UL(20)
#define LTCA2_SRSS2_LTC20_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC21 (rwh) */
#define LTCA2_SRSS2_LTC21_POS          _LTCA2_UL(21)
#define LTCA2_SRSS2_LTC21_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC22 (rwh) */
#define LTCA2_SRSS2_LTC22_POS          _LTCA2_UL(22)
#define LTCA2_SRSS2_LTC22_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC23 (rwh) */
#define LTCA2_SRSS2_LTC23_POS          _LTCA2_UL(23)
#define LTCA2_SRSS2_LTC23_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC24 (rwh) */
#define LTCA2_SRSS2_LTC24_POS          _LTCA2_UL(24)
#define LTCA2_SRSS2_LTC24_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC25 (rwh) */
#define LTCA2_SRSS2_LTC25_POS          _LTCA2_UL(25)
#define LTCA2_SRSS2_LTC25_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC26 (rwh) */
#define LTCA2_SRSS2_LTC26_POS          _LTCA2_UL(26)
#define LTCA2_SRSS2_LTC26_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC27 (rwh) */
#define LTCA2_SRSS2_LTC27_POS          _LTCA2_UL(27)
#define LTCA2_SRSS2_LTC27_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC28 (rwh) */
#define LTCA2_SRSS2_LTC28_POS          _LTCA2_UL(28)
#define LTCA2_SRSS2_LTC28_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC29 (rwh) */
#define LTCA2_SRSS2_LTC29_POS          _LTCA2_UL(29)
#define LTCA2_SRSS2_LTC29_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC30 (rwh) */
#define LTCA2_SRSS2_LTC30_POS          _LTCA2_UL(30)
#define LTCA2_SRSS2_LTC30_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC31 (rwh) */
#define LTCA2_SRSS2_LTC31_POS          _LTCA2_UL(31)
#define LTCA2_SRSS2_LTC31_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC32 (rwh) */
#define LTCA2_SRSS3_LTC32_POS          _LTCA2_UL(0)
#define LTCA2_SRSS3_LTC32_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC33 (rwh) */
#define LTCA2_SRSS3_LTC33_POS          _LTCA2_UL(1)
#define LTCA2_SRSS3_LTC33_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC34 (rwh) */
#define LTCA2_SRSS3_LTC34_POS          _LTCA2_UL(2)
#define LTCA2_SRSS3_LTC34_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC35 (rwh) */
#define LTCA2_SRSS3_LTC35_POS          _LTCA2_UL(3)
#define LTCA2_SRSS3_LTC35_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC36 (rwh) */
#define LTCA2_SRSS3_LTC36_POS          _LTCA2_UL(4)
#define LTCA2_SRSS3_LTC36_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC37 (rwh) */
#define LTCA2_SRSS3_LTC37_POS          _LTCA2_UL(5)
#define LTCA2_SRSS3_LTC37_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC38 (rwh) */
#define LTCA2_SRSS3_LTC38_POS          _LTCA2_UL(6)
#define LTCA2_SRSS3_LTC38_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC39 (rwh) */
#define LTCA2_SRSS3_LTC39_POS          _LTCA2_UL(7)
#define LTCA2_SRSS3_LTC39_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC40 (rwh) */
#define LTCA2_SRSS3_LTC40_POS          _LTCA2_UL(8)
#define LTCA2_SRSS3_LTC40_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC41 (rwh) */
#define LTCA2_SRSS3_LTC41_POS          _LTCA2_UL(9)
#define LTCA2_SRSS3_LTC41_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC42 (rwh) */
#define LTCA2_SRSS3_LTC42_POS          _LTCA2_UL(10)
#define LTCA2_SRSS3_LTC42_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC43 (rwh) */
#define LTCA2_SRSS3_LTC43_POS          _LTCA2_UL(11)
#define LTCA2_SRSS3_LTC43_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC44 (rwh) */
#define LTCA2_SRSS3_LTC44_POS          _LTCA2_UL(12)
#define LTCA2_SRSS3_LTC44_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC45 (rwh) */
#define LTCA2_SRSS3_LTC45_POS          _LTCA2_UL(13)
#define LTCA2_SRSS3_LTC45_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC46 (rwh) */
#define LTCA2_SRSS3_LTC46_POS          _LTCA2_UL(14)
#define LTCA2_SRSS3_LTC46_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC47 (rwh) */
#define LTCA2_SRSS3_LTC47_POS          _LTCA2_UL(15)
#define LTCA2_SRSS3_LTC47_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC48 (rwh) */
#define LTCA2_SRSS3_LTC48_POS          _LTCA2_UL(16)
#define LTCA2_SRSS3_LTC48_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC49 (rwh) */
#define LTCA2_SRSS3_LTC49_POS          _LTCA2_UL(17)
#define LTCA2_SRSS3_LTC49_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC50 (rwh) */
#define LTCA2_SRSS3_LTC50_POS          _LTCA2_UL(18)
#define LTCA2_SRSS3_LTC50_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC51 (rwh) */
#define LTCA2_SRSS3_LTC51_POS          _LTCA2_UL(19)
#define LTCA2_SRSS3_LTC51_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC52 (rwh) */
#define LTCA2_SRSS3_LTC52_POS          _LTCA2_UL(20)
#define LTCA2_SRSS3_LTC52_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC53 (rwh) */
#define LTCA2_SRSS3_LTC53_POS          _LTCA2_UL(21)
#define LTCA2_SRSS3_LTC53_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC54 (rwh) */
#define LTCA2_SRSS3_LTC54_POS          _LTCA2_UL(22)
#define LTCA2_SRSS3_LTC54_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC55 (rwh) */
#define LTCA2_SRSS3_LTC55_POS          _LTCA2_UL(23)
#define LTCA2_SRSS3_LTC55_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC56 (rwh) */
#define LTCA2_SRSS3_LTC56_POS          _LTCA2_UL(24)
#define LTCA2_SRSS3_LTC56_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC57 (rwh) */
#define LTCA2_SRSS3_LTC57_POS          _LTCA2_UL(25)
#define LTCA2_SRSS3_LTC57_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC58 (rwh) */
#define LTCA2_SRSS3_LTC58_POS          _LTCA2_UL(26)
#define LTCA2_SRSS3_LTC58_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC59 (rwh) */
#define LTCA2_SRSS3_LTC59_POS          _LTCA2_UL(27)
#define LTCA2_SRSS3_LTC59_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC60 (rwh) */
#define LTCA2_SRSS3_LTC60_POS          _LTCA2_UL(28)
#define LTCA2_SRSS3_LTC60_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC61 (rwh) */
#define LTCA2_SRSS3_LTC61_POS          _LTCA2_UL(29)
#define LTCA2_SRSS3_LTC61_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC62 (rwh) */
#define LTCA2_SRSS3_LTC62_POS          _LTCA2_UL(30)
#define LTCA2_SRSS3_LTC62_LEN          _LTCA2_UL(1)

/* LTCA2_SRSS3_LTC63 (rwh) */
#define LTCA2_SRSS3_LTC63_POS          _LTCA2_UL(31)
#define LTCA2_SRSS3_LTC63_LEN          _LTCA2_UL(1)

#endif
