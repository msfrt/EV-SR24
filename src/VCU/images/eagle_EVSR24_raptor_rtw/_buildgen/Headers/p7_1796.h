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
 * $Filename__:p7_1796.h$ 
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
 * $Name______:p7_1796$ 
 * $Variant___:1.4.0$ 
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
 * 1.4.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: p7_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _P7_1796_H
#define _P7_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _P7_UL(x) x
#else
    #define _P7_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module P7 on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 OUT;                 // [0xF0001300] : Output Register
    volatile uint32 OMR;                 // [0xF0001304] : Port 7 Output Modification Register
    volatile uint32 RESERVED0[2];        // [0xF0001308...0xF000130F] : reserved space
    volatile uint32 IOCR0;               // [0xF0001310] : Input/Output Control Register 0
    volatile uint32 IOCR4;               // [0xF0001314] : Input/Output Control Register 4
    volatile uint32 RESERVED1[3];        // [0xF0001318...0xF0001323] : reserved space
    volatile uint32 IN;                  // [0xF0001324] : Port 7 Input Register
    volatile uint32 RESERVED2[6];        // [0xF0001328...0xF000133F] : reserved space
    volatile uint32 PDR;                 // [0xF0001340] : Port 7 Pad Driver Mode Register
} P7_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern P7_RegMap_t P7 __attribute__ ((asection (".zbss.label_only","f=awz")));

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

/* P7_IN_P0 (r) */
#define P7_IN_P0_POS                   _P7_UL(0)
#define P7_IN_P0_LEN                   _P7_UL(1)

/* P7_IN_P1 (r) */
#define P7_IN_P1_POS                   _P7_UL(1)
#define P7_IN_P1_LEN                   _P7_UL(1)

/* P7_IN_P10 (r) */
#define P7_IN_P10_POS                  _P7_UL(10)
#define P7_IN_P10_LEN                  _P7_UL(1)

/* P7_IN_P11 (r) */
#define P7_IN_P11_POS                  _P7_UL(11)
#define P7_IN_P11_LEN                  _P7_UL(1)

/* P7_IN_P12 (r) */
#define P7_IN_P12_POS                  _P7_UL(12)
#define P7_IN_P12_LEN                  _P7_UL(1)

/* P7_IN_P13 (r) */
#define P7_IN_P13_POS                  _P7_UL(13)
#define P7_IN_P13_LEN                  _P7_UL(1)

/* P7_IN_P14 (r) */
#define P7_IN_P14_POS                  _P7_UL(14)
#define P7_IN_P14_LEN                  _P7_UL(1)

/* P7_IN_P15 (r) */
#define P7_IN_P15_POS                  _P7_UL(15)
#define P7_IN_P15_LEN                  _P7_UL(1)

/* P7_IN_P2 (r) */
#define P7_IN_P2_POS                   _P7_UL(2)
#define P7_IN_P2_LEN                   _P7_UL(1)

/* P7_IN_P3 (r) */
#define P7_IN_P3_POS                   _P7_UL(3)
#define P7_IN_P3_LEN                   _P7_UL(1)

/* P7_IN_P4 (r) */
#define P7_IN_P4_POS                   _P7_UL(4)
#define P7_IN_P4_LEN                   _P7_UL(1)

/* P7_IN_P5 (r) */
#define P7_IN_P5_POS                   _P7_UL(5)
#define P7_IN_P5_LEN                   _P7_UL(1)

/* P7_IN_P6 (r) */
#define P7_IN_P6_POS                   _P7_UL(6)
#define P7_IN_P6_LEN                   _P7_UL(1)

/* P7_IN_P7 (r) */
#define P7_IN_P7_POS                   _P7_UL(7)
#define P7_IN_P7_LEN                   _P7_UL(1)

/* P7_IN_P8 (r) */
#define P7_IN_P8_POS                   _P7_UL(8)
#define P7_IN_P8_LEN                   _P7_UL(1)

/* P7_IN_P9 (r) */
#define P7_IN_P9_POS                   _P7_UL(9)
#define P7_IN_P9_LEN                   _P7_UL(1)

/* P7_IOCR0_PC0 (rw) */
#define P7_IOCR0_PC0_POS               _P7_UL(4)
#define P7_IOCR0_PC0_LEN               _P7_UL(4)

/* P7_IOCR0_PC1 (rw) */
#define P7_IOCR0_PC1_POS               _P7_UL(12)
#define P7_IOCR0_PC1_LEN               _P7_UL(4)

/* P7_IOCR0_PC2 (rw) */
#define P7_IOCR0_PC2_POS               _P7_UL(20)
#define P7_IOCR0_PC2_LEN               _P7_UL(4)

/* P7_IOCR0_PC3 (rw) */
#define P7_IOCR0_PC3_POS               _P7_UL(28)
#define P7_IOCR0_PC3_LEN               _P7_UL(4)

/* P7_IOCR4_PC4 (rw) */
#define P7_IOCR4_PC4_POS               _P7_UL(4)
#define P7_IOCR4_PC4_LEN               _P7_UL(4)

/* P7_IOCR4_PC5 (rw) */
#define P7_IOCR4_PC5_POS               _P7_UL(12)
#define P7_IOCR4_PC5_LEN               _P7_UL(4)

/* P7_IOCR4_PC6 (rw) */
#define P7_IOCR4_PC6_POS               _P7_UL(20)
#define P7_IOCR4_PC6_LEN               _P7_UL(4)

/* P7_IOCR4_PC7 (rw) */
#define P7_IOCR4_PC7_POS               _P7_UL(28)
#define P7_IOCR4_PC7_LEN               _P7_UL(4)

/* P7_OUT_P0 (rwh) */
#define P7_OUT_P0_POS                  _P7_UL(0)
#define P7_OUT_P0_LEN                  _P7_UL(1)

/* P7_OUT_P1 (rwh) */
#define P7_OUT_P1_POS                  _P7_UL(1)
#define P7_OUT_P1_LEN                  _P7_UL(1)

/* P7_OUT_P10 (rwh) */
#define P7_OUT_P10_POS                 _P7_UL(10)
#define P7_OUT_P10_LEN                 _P7_UL(1)

/* P7_OUT_P11 (rwh) */
#define P7_OUT_P11_POS                 _P7_UL(11)
#define P7_OUT_P11_LEN                 _P7_UL(1)

/* P7_OUT_P12 (rwh) */
#define P7_OUT_P12_POS                 _P7_UL(12)
#define P7_OUT_P12_LEN                 _P7_UL(1)

/* P7_OUT_P13 (rwh) */
#define P7_OUT_P13_POS                 _P7_UL(13)
#define P7_OUT_P13_LEN                 _P7_UL(1)

/* P7_OUT_P14 (rwh) */
#define P7_OUT_P14_POS                 _P7_UL(14)
#define P7_OUT_P14_LEN                 _P7_UL(1)

/* P7_OUT_P15 (rwh) */
#define P7_OUT_P15_POS                 _P7_UL(15)
#define P7_OUT_P15_LEN                 _P7_UL(1)

/* P7_OUT_P2 (rwh) */
#define P7_OUT_P2_POS                  _P7_UL(2)
#define P7_OUT_P2_LEN                  _P7_UL(1)

/* P7_OUT_P3 (rwh) */
#define P7_OUT_P3_POS                  _P7_UL(3)
#define P7_OUT_P3_LEN                  _P7_UL(1)

/* P7_OUT_P4 (rwh) */
#define P7_OUT_P4_POS                  _P7_UL(4)
#define P7_OUT_P4_LEN                  _P7_UL(1)

/* P7_OUT_P5 (rwh) */
#define P7_OUT_P5_POS                  _P7_UL(5)
#define P7_OUT_P5_LEN                  _P7_UL(1)

/* P7_OUT_P6 (rwh) */
#define P7_OUT_P6_POS                  _P7_UL(6)
#define P7_OUT_P6_LEN                  _P7_UL(1)

/* P7_OUT_P7 (rwh) */
#define P7_OUT_P7_POS                  _P7_UL(7)
#define P7_OUT_P7_LEN                  _P7_UL(1)

/* P7_OUT_P8 (rwh) */
#define P7_OUT_P8_POS                  _P7_UL(8)
#define P7_OUT_P8_LEN                  _P7_UL(1)

/* P7_OUT_P9 (rwh) */
#define P7_OUT_P9_POS                  _P7_UL(9)
#define P7_OUT_P9_LEN                  _P7_UL(1)

/* P7_PDR_PD0 (rw) */
#define P7_PDR_PD0_POS                 _P7_UL(0)
#define P7_PDR_PD0_LEN                 _P7_UL(3)

#endif
