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
 * $Filename__:p10_1796.h$ 
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
 * $Name______:p10_1796$ 
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
 *      File name: p10_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _P10_1796_H
#define _P10_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _P10_UL(x) x
#else
    #define _P10_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module P10 on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[9];        // [0xF0001600...0xF0001623] : reserved space
    volatile uint32 IN;                  // [0xF0001624] : Port 10 Input Register
} P10_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern P10_RegMap_t P10 __attribute__ ((asection (".zbss.label_only","f=awz")));

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

/* P10_IN_P0 (r) */
#define P10_IN_P0_POS                  _P10_UL(0)
#define P10_IN_P0_LEN                  _P10_UL(1)

/* P10_IN_P1 (r) */
#define P10_IN_P1_POS                  _P10_UL(1)
#define P10_IN_P1_LEN                  _P10_UL(1)

/* P10_IN_P10 (r) */
#define P10_IN_P10_POS                 _P10_UL(10)
#define P10_IN_P10_LEN                 _P10_UL(1)

/* P10_IN_P11 (r) */
#define P10_IN_P11_POS                 _P10_UL(11)
#define P10_IN_P11_LEN                 _P10_UL(1)

/* P10_IN_P12 (r) */
#define P10_IN_P12_POS                 _P10_UL(12)
#define P10_IN_P12_LEN                 _P10_UL(1)

/* P10_IN_P13 (r) */
#define P10_IN_P13_POS                 _P10_UL(13)
#define P10_IN_P13_LEN                 _P10_UL(1)

/* P10_IN_P14 (r) */
#define P10_IN_P14_POS                 _P10_UL(14)
#define P10_IN_P14_LEN                 _P10_UL(1)

/* P10_IN_P15 (r) */
#define P10_IN_P15_POS                 _P10_UL(15)
#define P10_IN_P15_LEN                 _P10_UL(1)

/* P10_IN_P2 (r) */
#define P10_IN_P2_POS                  _P10_UL(2)
#define P10_IN_P2_LEN                  _P10_UL(1)

/* P10_IN_P3 (r) */
#define P10_IN_P3_POS                  _P10_UL(3)
#define P10_IN_P3_LEN                  _P10_UL(1)

/* P10_IN_P4 (r) */
#define P10_IN_P4_POS                  _P10_UL(4)
#define P10_IN_P4_LEN                  _P10_UL(1)

/* P10_IN_P5 (r) */
#define P10_IN_P5_POS                  _P10_UL(5)
#define P10_IN_P5_LEN                  _P10_UL(1)

/* P10_IN_P6 (r) */
#define P10_IN_P6_POS                  _P10_UL(6)
#define P10_IN_P6_LEN                  _P10_UL(1)

/* P10_IN_P7 (r) */
#define P10_IN_P7_POS                  _P10_UL(7)
#define P10_IN_P7_LEN                  _P10_UL(1)

/* P10_IN_P8 (r) */
#define P10_IN_P8_POS                  _P10_UL(8)
#define P10_IN_P8_LEN                  _P10_UL(1)

/* P10_IN_P9 (r) */
#define P10_IN_P9_POS                  _P10_UL(9)
#define P10_IN_P9_LEN                  _P10_UL(1)

#endif
