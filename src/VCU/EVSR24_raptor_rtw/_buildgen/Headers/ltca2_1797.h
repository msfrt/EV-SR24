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
 * $Filename__:ltca2_1797.h$ 
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
 * $Name______:ltca2_1797$ 
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
 *      File name: ltca2_1797.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _LTCA2_1797_H
#define _LTCA2_1797_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _LTCA2_UL(x) x
#else
    #define _LTCA2_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module LTCA2 on TC1797
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* sub-structure for local timer cell (LTC) */
typedef struct {
    volatile uint32 LTCCTR;        // LTCA Local Timer Cell Control Register
    volatile uint32 LTCXR;         // LTCA Local Timer Cell X Register
} LTCA2_LTC_t;

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF0002808] : LTCA2 Identification Register
    volatile uint32 RESERVED0[5];        // [0xF000280C...0xF000281F] : reserved space
    volatile uint32 SRSC2;               // [0xF0002820] : LTCA2 Service Request State Clear Register 2
    volatile uint32 SRSS2;               // [0xF0002824] : LTCA2 Service Request State Set Register 2
    volatile uint32 RESERVED1[4];        // [0xF0002828...0xF0002837] : reserved space
    volatile uint32 MRACTL;              // [0xF0002838] : Multiplexer Register Array Control Register
    volatile uint32 MRADIN;              // [0xF000283C] : Multiplexer Register Array Data In Register
    volatile uint32 MRADOUT;             // [0xF0002840] : Multiplexer Register Array Data Out Register
    volatile uint32 RESERVED2[111];      // [0xF0002844...0xF00029FF] : reserved space
    LTCA2_LTC_t     LTC[32];             // [0xF0002A00...0xF0002AFF] : LTCA2 Local Timer Cells
    volatile uint32 RESERVED3[312];      // [0xF0002B00...0xF0002FDF] : reserved space
    volatile uint32 SRC07;               // [0xF0002FE0] : LTCA2 Interrupt Service Request Control Register 07
    volatile uint32 SRC06;               // [0xF0002FE4] : LTCA2 Interrupt Service Request Control Register 06
    volatile uint32 SRC05;               // [0xF0002FE8] : LTCA2 Interrupt Service Request Control Register 05
    volatile uint32 SRC04;               // [0xF0002FEC] : LTCA2 Interrupt Service Request Control Register 04
    volatile uint32 SRC03;               // [0xF0002FF0] : LTCA2 Interrupt Service Request Control Register 03
    volatile uint32 SRC02;               // [0xF0002FF4] : LTCA2 Interrupt Service Request Control Register 02
    volatile uint32 SRC01;               // [0xF0002FF8] : LTCA2 Interrupt Service Request Control Register 01
    volatile uint32 SRC00;               // [0xF0002FFC] : LTCA2 Interrupt Service Request Control Register 00
} LTCA2_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern LTCA2_RegMap_t LTCA2 __attribute__ ((asection (".zbss.label_only","f=awz")));


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

/* LTCA2_ID_MOD_NUMBER (r) */
#define LTCA2_ID_MOD_NUMBER_POS              _LTCA2_UL(16)
#define LTCA2_ID_MOD_NUMBER_LEN              _LTCA2_UL(16)

/* LTCA2_ID_MOD_REV (r) */
#define LTCA2_ID_MOD_REV_POS                 _LTCA2_UL(0)
#define LTCA2_ID_MOD_REV_LEN                 _LTCA2_UL(8)

/* LTCA2_ID_MOD_TYPE (r) */
#define LTCA2_ID_MOD_TYPE_POS                _LTCA2_UL(8)
#define LTCA2_ID_MOD_TYPE_LEN                _LTCA2_UL(8)

/* LTCA2_ID_MOD_REV (r) */
#define LTCA2_ID_MOD_REV_POS                 _LTCA2_UL(0)
#define LTCA2_ID_MOD_REV_LEN                 _LTCA2_UL(8)

/* LTCA2_ID_MOD_TYPE (r) */
#define LTCA2_ID_MOD_TYPE_POS                _LTCA2_UL(8)
#define LTCA2_ID_MOD_TYPE_LEN                _LTCA2_UL(8)

/* LTCA2_ID_MOD_NUM (r) */
#define LTCA2_ID_MOD_NUM_POS                 _LTCA2_UL(16)
#define LTCA2_ID_MOD_NUM_LEN                 _LTCA2_UL(16)

/* LTCA2_SRSC2_LTC0 (rwh) */
#define LTCA2_SRSC2_LTC0_POS                 _LTCA2_UL(0)
#define LTCA2_SRSC2_LTC0_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC1 (rwh) */
#define LTCA2_SRSC2_LTC1_POS                 _LTCA2_UL(1)
#define LTCA2_SRSC2_LTC1_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC2 (rwh) */
#define LTCA2_SRSC2_LTC2_POS                 _LTCA2_UL(2)
#define LTCA2_SRSC2_LTC2_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC3 (rwh) */
#define LTCA2_SRSC2_LTC3_POS                 _LTCA2_UL(3)
#define LTCA2_SRSC2_LTC3_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC4 (rwh) */
#define LTCA2_SRSC2_LTC4_POS                 _LTCA2_UL(4)
#define LTCA2_SRSC2_LTC4_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC5 (rwh) */
#define LTCA2_SRSC2_LTC5_POS                 _LTCA2_UL(5)
#define LTCA2_SRSC2_LTC5_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC6 (rwh) */
#define LTCA2_SRSC2_LTC6_POS                 _LTCA2_UL(6)
#define LTCA2_SRSC2_LTC6_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC7 (rwh) */
#define LTCA2_SRSC2_LTC7_POS                 _LTCA2_UL(7)
#define LTCA2_SRSC2_LTC7_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC8 (rwh) */
#define LTCA2_SRSC2_LTC8_POS                 _LTCA2_UL(8)
#define LTCA2_SRSC2_LTC8_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC9 (rwh) */
#define LTCA2_SRSC2_LTC9_POS                 _LTCA2_UL(9)
#define LTCA2_SRSC2_LTC9_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC10 (rwh) */
#define LTCA2_SRSC2_LTC10_POS                _LTCA2_UL(10)
#define LTCA2_SRSC2_LTC10_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC11 (rwh) */
#define LTCA2_SRSC2_LTC11_POS                _LTCA2_UL(11)
#define LTCA2_SRSC2_LTC11_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC12 (rwh) */
#define LTCA2_SRSC2_LTC12_POS                _LTCA2_UL(12)
#define LTCA2_SRSC2_LTC12_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC13 (rwh) */
#define LTCA2_SRSC2_LTC13_POS                _LTCA2_UL(13)
#define LTCA2_SRSC2_LTC13_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC14 (rwh) */
#define LTCA2_SRSC2_LTC14_POS                _LTCA2_UL(14)
#define LTCA2_SRSC2_LTC14_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC15 (rwh) */
#define LTCA2_SRSC2_LTC15_POS                _LTCA2_UL(15)
#define LTCA2_SRSC2_LTC15_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC16 (rwh) */
#define LTCA2_SRSC2_LTC16_POS                _LTCA2_UL(16)
#define LTCA2_SRSC2_LTC16_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC17 (rwh) */
#define LTCA2_SRSC2_LTC17_POS                _LTCA2_UL(17)
#define LTCA2_SRSC2_LTC17_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC18 (rwh) */
#define LTCA2_SRSC2_LTC18_POS                _LTCA2_UL(18)
#define LTCA2_SRSC2_LTC18_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC19 (rwh) */
#define LTCA2_SRSC2_LTC19_POS                _LTCA2_UL(19)
#define LTCA2_SRSC2_LTC19_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC20 (rwh) */
#define LTCA2_SRSC2_LTC20_POS                _LTCA2_UL(20)
#define LTCA2_SRSC2_LTC20_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC21 (rwh) */
#define LTCA2_SRSC2_LTC21_POS                _LTCA2_UL(21)
#define LTCA2_SRSC2_LTC21_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC22 (rwh) */
#define LTCA2_SRSC2_LTC22_POS                _LTCA2_UL(22)
#define LTCA2_SRSC2_LTC22_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC23 (rwh) */
#define LTCA2_SRSC2_LTC23_POS                _LTCA2_UL(23)
#define LTCA2_SRSC2_LTC23_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC24 (rwh) */
#define LTCA2_SRSC2_LTC24_POS                _LTCA2_UL(24)
#define LTCA2_SRSC2_LTC24_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC25 (rwh) */
#define LTCA2_SRSC2_LTC25_POS                _LTCA2_UL(25)
#define LTCA2_SRSC2_LTC25_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC26 (rwh) */
#define LTCA2_SRSC2_LTC26_POS                _LTCA2_UL(26)
#define LTCA2_SRSC2_LTC26_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC27 (rwh) */
#define LTCA2_SRSC2_LTC27_POS                _LTCA2_UL(27)
#define LTCA2_SRSC2_LTC27_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC28 (rwh) */
#define LTCA2_SRSC2_LTC28_POS                _LTCA2_UL(28)
#define LTCA2_SRSC2_LTC28_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC29 (rwh) */
#define LTCA2_SRSC2_LTC29_POS                _LTCA2_UL(29)
#define LTCA2_SRSC2_LTC29_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC30 (rwh) */
#define LTCA2_SRSC2_LTC30_POS                _LTCA2_UL(30)
#define LTCA2_SRSC2_LTC30_LEN                _LTCA2_UL(1)

/* LTCA2_SRSC2_LTC31 (rwh) */
#define LTCA2_SRSC2_LTC31_POS                _LTCA2_UL(31)
#define LTCA2_SRSC2_LTC31_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC0 (rwh) */
#define LTCA2_SRSS2_LTC0_POS                 _LTCA2_UL(0)
#define LTCA2_SRSS2_LTC0_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC1 (rwh) */
#define LTCA2_SRSS2_LTC1_POS                 _LTCA2_UL(1)
#define LTCA2_SRSS2_LTC1_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC2 (rwh) */
#define LTCA2_SRSS2_LTC2_POS                 _LTCA2_UL(2)
#define LTCA2_SRSS2_LTC2_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC3 (rwh) */
#define LTCA2_SRSS2_LTC3_POS                 _LTCA2_UL(3)
#define LTCA2_SRSS2_LTC3_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC4 (rwh) */
#define LTCA2_SRSS2_LTC4_POS                 _LTCA2_UL(4)
#define LTCA2_SRSS2_LTC4_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC5 (rwh) */
#define LTCA2_SRSS2_LTC5_POS                 _LTCA2_UL(5)
#define LTCA2_SRSS2_LTC5_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC6 (rwh) */
#define LTCA2_SRSS2_LTC6_POS                 _LTCA2_UL(6)
#define LTCA2_SRSS2_LTC6_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC7 (rwh) */
#define LTCA2_SRSS2_LTC7_POS                 _LTCA2_UL(7)
#define LTCA2_SRSS2_LTC7_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC8 (rwh) */
#define LTCA2_SRSS2_LTC8_POS                 _LTCA2_UL(8)
#define LTCA2_SRSS2_LTC8_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC9 (rwh) */
#define LTCA2_SRSS2_LTC9_POS                 _LTCA2_UL(9)
#define LTCA2_SRSS2_LTC9_LEN                 _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC10 (rwh) */
#define LTCA2_SRSS2_LTC10_POS                _LTCA2_UL(10)
#define LTCA2_SRSS2_LTC10_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC11 (rwh) */
#define LTCA2_SRSS2_LTC11_POS                _LTCA2_UL(11)
#define LTCA2_SRSS2_LTC11_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC12 (rwh) */
#define LTCA2_SRSS2_LTC12_POS                _LTCA2_UL(12)
#define LTCA2_SRSS2_LTC12_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC13 (rwh) */
#define LTCA2_SRSS2_LTC13_POS                _LTCA2_UL(13)
#define LTCA2_SRSS2_LTC13_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC14 (rwh) */
#define LTCA2_SRSS2_LTC14_POS                _LTCA2_UL(14)
#define LTCA2_SRSS2_LTC14_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC15 (rwh) */
#define LTCA2_SRSS2_LTC15_POS                _LTCA2_UL(15)
#define LTCA2_SRSS2_LTC15_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC16 (rwh) */
#define LTCA2_SRSS2_LTC16_POS                _LTCA2_UL(16)
#define LTCA2_SRSS2_LTC16_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC17 (rwh) */
#define LTCA2_SRSS2_LTC17_POS                _LTCA2_UL(17)
#define LTCA2_SRSS2_LTC17_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC18 (rwh) */
#define LTCA2_SRSS2_LTC18_POS                _LTCA2_UL(18)
#define LTCA2_SRSS2_LTC18_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC19 (rwh) */
#define LTCA2_SRSS2_LTC19_POS                _LTCA2_UL(19)
#define LTCA2_SRSS2_LTC19_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC20 (rwh) */
#define LTCA2_SRSS2_LTC20_POS                _LTCA2_UL(20)
#define LTCA2_SRSS2_LTC20_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC21 (rwh) */
#define LTCA2_SRSS2_LTC21_POS                _LTCA2_UL(21)
#define LTCA2_SRSS2_LTC21_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC22 (rwh) */
#define LTCA2_SRSS2_LTC22_POS                _LTCA2_UL(22)
#define LTCA2_SRSS2_LTC22_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC23 (rwh) */
#define LTCA2_SRSS2_LTC23_POS                _LTCA2_UL(23)
#define LTCA2_SRSS2_LTC23_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC24 (rwh) */
#define LTCA2_SRSS2_LTC24_POS                _LTCA2_UL(24)
#define LTCA2_SRSS2_LTC24_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC25 (rwh) */
#define LTCA2_SRSS2_LTC25_POS                _LTCA2_UL(25)
#define LTCA2_SRSS2_LTC25_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC26 (rwh) */
#define LTCA2_SRSS2_LTC26_POS                _LTCA2_UL(26)
#define LTCA2_SRSS2_LTC26_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC27 (rwh) */
#define LTCA2_SRSS2_LTC27_POS                _LTCA2_UL(27)
#define LTCA2_SRSS2_LTC27_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC28 (rwh) */
#define LTCA2_SRSS2_LTC28_POS                _LTCA2_UL(28)
#define LTCA2_SRSS2_LTC28_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC29 (rwh) */
#define LTCA2_SRSS2_LTC29_POS                _LTCA2_UL(29)
#define LTCA2_SRSS2_LTC29_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC30 (rwh) */
#define LTCA2_SRSS2_LTC30_POS                _LTCA2_UL(30)
#define LTCA2_SRSS2_LTC30_LEN                _LTCA2_UL(1)

/* LTCA2_SRSS2_LTC31 (rwh) */
#define LTCA2_SRSS2_LTC31_POS                _LTCA2_UL(31)
#define LTCA2_SRSS2_LTC31_LEN                _LTCA2_UL(1)

/* LTCA2_MRACTL_MAEN (rw) */
#define LTCA2_MRACTL_MAEN_POS                _LTCA2_UL(0)
#define LTCA2_MRACTL_MAEN_LEN                _LTCA2_UL(1)

/* LTCA2_MRACTL_WCRES (w) */
#define LTCA2_MRACTL_WCRES_POS               _LTCA2_UL(1)
#define LTCA2_MRACTL_WCRES_LEN               _LTCA2_UL(1)

/* LTCA2_MRACTL_FIFOFULL (r) */
#define LTCA2_MRACTL_FIFOFULL_POS            _LTCA2_UL(2)
#define LTCA2_MRACTL_FIFOFULL_LEN            _LTCA2_UL(1)

/* LTCA2_MRACTL_FIFOFILLCNT (r) */
#define LTCA2_MRACTL_FIFOFILLCNT_POS         _LTCA2_UL(8)
#define LTCA2_MRACTL_FIFOFILLCNT_LEN         _LTCA2_UL(6)

/* LTCA2_MRADIN_DATAIN (w) */
#define LTCA2_MRADIN_DATAIN_POS              _LTCA2_UL(0)
#define LTCA2_MRADIN_DATAIN_LEN              _LTCA2_UL(32)

/* LTCA2_MRADOUT_DATAOUT (rh) */
#define LTCA2_MRADOUT_DATAOUT_POS            _LTCA2_UL(0)
#define LTCA2_MRADOUT_DATAOUT_LEN            _LTCA2_UL(32)

/* LTCA2_LTCCTR_MOD (rw) */
#define LTCA2_LTCCTR_MOD_POS                 _LTCA2_UL(0)
#define LTCA2_LTCCTR_MOD_LEN                 _LTCA2_UL(2)

/* LTCA2_LTCCTR_OSM (rw) */
#define LTCA2_LTCCTR_OSM_POS                 _LTCA2_UL(2)
#define LTCA2_LTCCTR_OSM_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_REN (rw) */
#define LTCA2_LTCCTR_REN_POS                 _LTCA2_UL(3)
#define LTCA2_LTCCTR_REN_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_RED (rw) */
#define LTCA2_LTCCTR_RED_POS                 _LTCA2_UL(4)
#define LTCA2_LTCCTR_RED_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_PEN (rw) */
#define LTCA2_LTCCTR_PEN_POS                 _LTCA2_UL(4)
#define LTCA2_LTCCTR_PEN_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_FED (rw) */
#define LTCA2_LTCCTR_FED_POS                 _LTCA2_UL(5)
#define LTCA2_LTCCTR_FED_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_AIL (rw) */
#define LTCA2_LTCCTR_AIL_POS                 _LTCA2_UL(5)
#define LTCA2_LTCCTR_AIL_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_SLO (rwh) */
#define LTCA2_LTCCTR_SLO_POS                 _LTCA2_UL(6)
#define LTCA2_LTCCTR_SLO_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_CUDCLR (w) */
#define LTCA2_LTCCTR_CUDCLR_POS              _LTCA2_UL(7)
#define LTCA2_LTCCTR_CUDCLR_LEN              _LTCA2_UL(1)

/* LTCA2_LTCCTR_ILM (rw) */
#define LTCA2_LTCCTR_ILM_POS                 _LTCA2_UL(8)
#define LTCA2_LTCCTR_ILM_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_CUD (rwh) */
#define LTCA2_LTCCTR_CUD_POS                 _LTCA2_UL(9)
#define LTCA2_LTCCTR_CUD_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_CEN (rh) */
#define LTCA2_LTCCTR_CEN_POS                 _LTCA2_UL(10)
#define LTCA2_LTCCTR_CEN_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_OCM (rw) */
#define LTCA2_LTCCTR_OCM_POS                 _LTCA2_UL(11)
#define LTCA2_LTCCTR_OCM_LEN                 _LTCA2_UL(3)

/* LTCA2_LTCCTR_OIA (rw) */
#define LTCA2_LTCCTR_OIA_POS                 _LTCA2_UL(14)
#define LTCA2_LTCCTR_OIA_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_OUT (rh) */
#define LTCA2_LTCCTR_OUT_POS                 _LTCA2_UL(15)
#define LTCA2_LTCCTR_OUT_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_GBYP (rw) */
#define LTCA2_LTCCTR_GBYP_POS                _LTCA2_UL(16)
#define LTCA2_LTCCTR_GBYP_LEN                _LTCA2_UL(1)

/* LTCA2_LTCCTR_BYP (rw) */
#define LTCA2_LTCCTR_BYP_POS                 _LTCA2_UL(6)
#define LTCA2_LTCCTR_BYP_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_EOA (rwh) */
#define LTCA2_LTCCTR_EOA_POS                 _LTCA2_UL(7)
#define LTCA2_LTCCTR_EOA_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_SLL (rh) */
#define LTCA2_LTCCTR_SLL_POS                 _LTCA2_UL(9)
#define LTCA2_LTCCTR_SLL_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_SOL (rw) */
#define LTCA2_LTCCTR_SOL_POS                 _LTCA2_UL(4)
#define LTCA2_LTCCTR_SOL_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCCTR_SOH (rw) */
#define LTCA2_LTCCTR_SOH_POS                 _LTCA2_UL(5)
#define LTCA2_LTCCTR_SOH_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCXR_X (rwh) */
#define LTCA2_LTCXR_X_POS                    _LTCA2_UL(0)
#define LTCA2_LTCXR_X_LEN                    _LTCA2_UL(16)

/* LTCA2_LTCCTR_BRM (rw) */
#define LTCA2_LTCCTR_BRM_POS                 _LTCA2_UL(0)
#define LTCA2_LTCCTR_BRM_LEN                 _LTCA2_UL(1)

/* LTCA2_LTCXR_XS (rw) */
#define LTCA2_LTCXR_XS_POS                   _LTCA2_UL(16)
#define LTCA2_LTCXR_XS_LEN                   _LTCA2_UL(16)

/* LTCA2_SRC07_SRPN (rw) */
#define LTCA2_SRC07_SRPN_POS                 _LTCA2_UL(0)
#define LTCA2_SRC07_SRPN_LEN                 _LTCA2_UL(8)

/* LTCA2_SRC07_TOS (rw) */
#define LTCA2_SRC07_TOS_POS                  _LTCA2_UL(10)
#define LTCA2_SRC07_TOS_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC07_SRE (rw) */
#define LTCA2_SRC07_SRE_POS                  _LTCA2_UL(12)
#define LTCA2_SRC07_SRE_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC07_SRR (rh) */
#define LTCA2_SRC07_SRR_POS                  _LTCA2_UL(13)
#define LTCA2_SRC07_SRR_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC07_CLRR (w) */
#define LTCA2_SRC07_CLRR_POS                 _LTCA2_UL(14)
#define LTCA2_SRC07_CLRR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC07_SETR (w) */
#define LTCA2_SRC07_SETR_POS                 _LTCA2_UL(15)
#define LTCA2_SRC07_SETR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC06_SRPN (rw) */
#define LTCA2_SRC06_SRPN_POS                 _LTCA2_UL(0)
#define LTCA2_SRC06_SRPN_LEN                 _LTCA2_UL(8)

/* LTCA2_SRC06_TOS (rw) */
#define LTCA2_SRC06_TOS_POS                  _LTCA2_UL(10)
#define LTCA2_SRC06_TOS_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC06_SRE (rw) */
#define LTCA2_SRC06_SRE_POS                  _LTCA2_UL(12)
#define LTCA2_SRC06_SRE_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC06_SRR (rh) */
#define LTCA2_SRC06_SRR_POS                  _LTCA2_UL(13)
#define LTCA2_SRC06_SRR_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC06_CLRR (w) */
#define LTCA2_SRC06_CLRR_POS                 _LTCA2_UL(14)
#define LTCA2_SRC06_CLRR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC06_SETR (w) */
#define LTCA2_SRC06_SETR_POS                 _LTCA2_UL(15)
#define LTCA2_SRC06_SETR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC05_SRPN (rw) */
#define LTCA2_SRC05_SRPN_POS                 _LTCA2_UL(0)
#define LTCA2_SRC05_SRPN_LEN                 _LTCA2_UL(8)

/* LTCA2_SRC05_TOS (rw) */
#define LTCA2_SRC05_TOS_POS                  _LTCA2_UL(10)
#define LTCA2_SRC05_TOS_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC05_SRE (rw) */
#define LTCA2_SRC05_SRE_POS                  _LTCA2_UL(12)
#define LTCA2_SRC05_SRE_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC05_SRR (rh) */
#define LTCA2_SRC05_SRR_POS                  _LTCA2_UL(13)
#define LTCA2_SRC05_SRR_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC05_CLRR (w) */
#define LTCA2_SRC05_CLRR_POS                 _LTCA2_UL(14)
#define LTCA2_SRC05_CLRR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC05_SETR (w) */
#define LTCA2_SRC05_SETR_POS                 _LTCA2_UL(15)
#define LTCA2_SRC05_SETR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC04_SRPN (rw) */
#define LTCA2_SRC04_SRPN_POS                 _LTCA2_UL(0)
#define LTCA2_SRC04_SRPN_LEN                 _LTCA2_UL(8)

/* LTCA2_SRC04_TOS (rw) */
#define LTCA2_SRC04_TOS_POS                  _LTCA2_UL(10)
#define LTCA2_SRC04_TOS_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC04_SRE (rw) */
#define LTCA2_SRC04_SRE_POS                  _LTCA2_UL(12)
#define LTCA2_SRC04_SRE_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC04_SRR (rh) */
#define LTCA2_SRC04_SRR_POS                  _LTCA2_UL(13)
#define LTCA2_SRC04_SRR_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC04_CLRR (w) */
#define LTCA2_SRC04_CLRR_POS                 _LTCA2_UL(14)
#define LTCA2_SRC04_CLRR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC04_SETR (w) */
#define LTCA2_SRC04_SETR_POS                 _LTCA2_UL(15)
#define LTCA2_SRC04_SETR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC03_SRPN (rw) */
#define LTCA2_SRC03_SRPN_POS                 _LTCA2_UL(0)
#define LTCA2_SRC03_SRPN_LEN                 _LTCA2_UL(8)

/* LTCA2_SRC03_TOS (rw) */
#define LTCA2_SRC03_TOS_POS                  _LTCA2_UL(10)
#define LTCA2_SRC03_TOS_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC03_SRE (rw) */
#define LTCA2_SRC03_SRE_POS                  _LTCA2_UL(12)
#define LTCA2_SRC03_SRE_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC03_SRR (rh) */
#define LTCA2_SRC03_SRR_POS                  _LTCA2_UL(13)
#define LTCA2_SRC03_SRR_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC03_CLRR (w) */
#define LTCA2_SRC03_CLRR_POS                 _LTCA2_UL(14)
#define LTCA2_SRC03_CLRR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC03_SETR (w) */
#define LTCA2_SRC03_SETR_POS                 _LTCA2_UL(15)
#define LTCA2_SRC03_SETR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC02_SRPN (rw) */
#define LTCA2_SRC02_SRPN_POS                 _LTCA2_UL(0)
#define LTCA2_SRC02_SRPN_LEN                 _LTCA2_UL(8)

/* LTCA2_SRC02_TOS (rw) */
#define LTCA2_SRC02_TOS_POS                  _LTCA2_UL(10)
#define LTCA2_SRC02_TOS_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC02_SRE (rw) */
#define LTCA2_SRC02_SRE_POS                  _LTCA2_UL(12)
#define LTCA2_SRC02_SRE_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC02_SRR (rh) */
#define LTCA2_SRC02_SRR_POS                  _LTCA2_UL(13)
#define LTCA2_SRC02_SRR_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC02_CLRR (w) */
#define LTCA2_SRC02_CLRR_POS                 _LTCA2_UL(14)
#define LTCA2_SRC02_CLRR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC02_SETR (w) */
#define LTCA2_SRC02_SETR_POS                 _LTCA2_UL(15)
#define LTCA2_SRC02_SETR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC01_SRPN (rw) */
#define LTCA2_SRC01_SRPN_POS                 _LTCA2_UL(0)
#define LTCA2_SRC01_SRPN_LEN                 _LTCA2_UL(8)

/* LTCA2_SRC01_TOS (rw) */
#define LTCA2_SRC01_TOS_POS                  _LTCA2_UL(10)
#define LTCA2_SRC01_TOS_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC01_SRE (rw) */
#define LTCA2_SRC01_SRE_POS                  _LTCA2_UL(12)
#define LTCA2_SRC01_SRE_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC01_SRR (rh) */
#define LTCA2_SRC01_SRR_POS                  _LTCA2_UL(13)
#define LTCA2_SRC01_SRR_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC01_CLRR (w) */
#define LTCA2_SRC01_CLRR_POS                 _LTCA2_UL(14)
#define LTCA2_SRC01_CLRR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC01_SETR (w) */
#define LTCA2_SRC01_SETR_POS                 _LTCA2_UL(15)
#define LTCA2_SRC01_SETR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC00_SRPN (rw) */
#define LTCA2_SRC00_SRPN_POS                 _LTCA2_UL(0)
#define LTCA2_SRC00_SRPN_LEN                 _LTCA2_UL(8)

/* LTCA2_SRC00_TOS (rw) */
#define LTCA2_SRC00_TOS_POS                  _LTCA2_UL(10)
#define LTCA2_SRC00_TOS_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC00_SRE (rw) */
#define LTCA2_SRC00_SRE_POS                  _LTCA2_UL(12)
#define LTCA2_SRC00_SRE_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC00_SRR (rh) */
#define LTCA2_SRC00_SRR_POS                  _LTCA2_UL(13)
#define LTCA2_SRC00_SRR_LEN                  _LTCA2_UL(1)

/* LTCA2_SRC00_CLRR (w) */
#define LTCA2_SRC00_CLRR_POS                 _LTCA2_UL(14)
#define LTCA2_SRC00_CLRR_LEN                 _LTCA2_UL(1)

/* LTCA2_SRC00_SETR (w) */
#define LTCA2_SRC00_SETR_POS                 _LTCA2_UL(15)
#define LTCA2_SRC00_SETR_LEN                 _LTCA2_UL(1)

#endif
