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
 * $Filename__:p12_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:10.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:p12_1793$ 
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
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _P12_1793_H
#define _P12_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _P12_UL(x) x
#else
    #define _P12_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module P12 on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 OUT;                 // [0xF0300000] : Port 12 Output Register
    volatile uint32 OMR;                 // [0xF0300004] : Port 12 Output Modification Register
    volatile uint32 RESERVED0[2];        // [0xF0300008...0xF030000F] : reserved space
    volatile uint32 IOCR0;               // [0xF0300010] : Port 12 Input/Output Control Register 0
    volatile uint32 IOCR4;               // [0xF0300014] : Port 12 Input/Output Control Register 4
    volatile uint32 RESERVED1[3];        // [0xF0300018...0xF0300023] : reserved space
    volatile uint32 IN;                  // [0xF0300024] : Port 12 Input Register
    volatile uint32 RESERVED2[6];        // [0xF0300028...0xF030003F] : reserved space
    volatile uint32 PDR0;                // [0xF0300040] : Port 12 Pad Driver Mode 0 Register
} P12_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern P12_RegMap_t P12 __attribute__ ((asection (".bss.label_only")));


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

/* P12_ID_MOD_NUMBER (r) */
#define P12_ID_MOD_NUMBER_POS                _P12_UL(16)
#define P12_ID_MOD_NUMBER_LEN                _P12_UL(16)

/* P12_ID_MOD_REV (r) */
#define P12_ID_MOD_REV_POS                   _P12_UL(0)
#define P12_ID_MOD_REV_LEN                   _P12_UL(8)

/* P12_ID_MOD_TYPE (r) */
#define P12_ID_MOD_TYPE_POS                  _P12_UL(8)
#define P12_ID_MOD_TYPE_LEN                  _P12_UL(8)

/* P12_OUT_P0 (rwh) */
#define P12_OUT_P0_POS                       _P12_UL(0)
#define P12_OUT_P0_LEN                       _P12_UL(1)

/* P12_OUT_P1 (rwh) */
#define P12_OUT_P1_POS                       _P12_UL(1)
#define P12_OUT_P1_LEN                       _P12_UL(1)

/* P12_OUT_P2 (rwh) */
#define P12_OUT_P2_POS                       _P12_UL(2)
#define P12_OUT_P2_LEN                       _P12_UL(1)

/* P12_OUT_P3 (rwh) */
#define P12_OUT_P3_POS                       _P12_UL(3)
#define P12_OUT_P3_LEN                       _P12_UL(1)

/* P12_OUT_P4 (rwh) */
#define P12_OUT_P4_POS                       _P12_UL(4)
#define P12_OUT_P4_LEN                       _P12_UL(1)

/* P12_OUT_P5 (rwh) */
#define P12_OUT_P5_POS                       _P12_UL(5)
#define P12_OUT_P5_LEN                       _P12_UL(1)

/* P12_OUT_P6 (rwh) */
#define P12_OUT_P6_POS                       _P12_UL(6)
#define P12_OUT_P6_LEN                       _P12_UL(1)

/* P12_OUT_P7 (rwh) */
#define P12_OUT_P7_POS                       _P12_UL(7)
#define P12_OUT_P7_LEN                       _P12_UL(1)

/* P12_OUT_P8 (rwh) */
#define P12_OUT_P8_POS                       _P12_UL(8)
#define P12_OUT_P8_LEN                       _P12_UL(1)

/* P12_OUT_P9 (rwh) */
#define P12_OUT_P9_POS                       _P12_UL(9)
#define P12_OUT_P9_LEN                       _P12_UL(1)

/* P12_OUT_P10 (rwh) */
#define P12_OUT_P10_POS                      _P12_UL(10)
#define P12_OUT_P10_LEN                      _P12_UL(1)

/* P12_OUT_P11 (rwh) */
#define P12_OUT_P11_POS                      _P12_UL(11)
#define P12_OUT_P11_LEN                      _P12_UL(1)

/* P12_OUT_P12 (rwh) */
#define P12_OUT_P12_POS                      _P12_UL(12)
#define P12_OUT_P12_LEN                      _P12_UL(1)

/* P12_OUT_P13 (rwh) */
#define P12_OUT_P13_POS                      _P12_UL(13)
#define P12_OUT_P13_LEN                      _P12_UL(1)

/* P12_OUT_P14 (rwh) */
#define P12_OUT_P14_POS                      _P12_UL(14)
#define P12_OUT_P14_LEN                      _P12_UL(1)

/* P12_OUT_P15 (rwh) */
#define P12_OUT_P15_POS                      _P12_UL(15)
#define P12_OUT_P15_LEN                      _P12_UL(1)

/* P12_IOCR0_PC0 (rw) */
#define P12_IOCR0_PC0_POS                    _P12_UL(4)
#define P12_IOCR0_PC0_LEN                    _P12_UL(4)

/* P12_IOCR0_PC1 (rw) */
#define P12_IOCR0_PC1_POS                    _P12_UL(12)
#define P12_IOCR0_PC1_LEN                    _P12_UL(4)

/* P12_IOCR0_PC2 (rw) */
#define P12_IOCR0_PC2_POS                    _P12_UL(20)
#define P12_IOCR0_PC2_LEN                    _P12_UL(4)

/* P12_IOCR0_PC3 (rw) */
#define P12_IOCR0_PC3_POS                    _P12_UL(28)
#define P12_IOCR0_PC3_LEN                    _P12_UL(4)

/* P12_IOCR4_PC4 (rw) */
#define P12_IOCR4_PC4_POS                    _P12_UL(4)
#define P12_IOCR4_PC4_LEN                    _P12_UL(4)

/* P12_IOCR4_PC5 (rw) */
#define P12_IOCR4_PC5_POS                    _P12_UL(12)
#define P12_IOCR4_PC5_LEN                    _P12_UL(4)

/* P12_IOCR4_PC6 (rw) */
#define P12_IOCR4_PC6_POS                    _P12_UL(20)
#define P12_IOCR4_PC6_LEN                    _P12_UL(4)

/* P12_IOCR4_PC7 (rw) */
#define P12_IOCR4_PC7_POS                    _P12_UL(28)
#define P12_IOCR4_PC7_LEN                    _P12_UL(4)

/* P12_IN_P0 (rh) */
#define P12_IN_P0_POS                        _P12_UL(0)
#define P12_IN_P0_LEN                        _P12_UL(1)

/* P12_IN_P1 (rh) */
#define P12_IN_P1_POS                        _P12_UL(1)
#define P12_IN_P1_LEN                        _P12_UL(1)

/* P12_IN_P2 (rh) */
#define P12_IN_P2_POS                        _P12_UL(2)
#define P12_IN_P2_LEN                        _P12_UL(1)

/* P12_IN_P3 (rh) */
#define P12_IN_P3_POS                        _P12_UL(3)
#define P12_IN_P3_LEN                        _P12_UL(1)

/* P12_IN_P4 (rh) */
#define P12_IN_P4_POS                        _P12_UL(4)
#define P12_IN_P4_LEN                        _P12_UL(1)

/* P12_IN_P5 (rh) */
#define P12_IN_P5_POS                        _P12_UL(5)
#define P12_IN_P5_LEN                        _P12_UL(1)

/* P12_IN_P6 (rh) */
#define P12_IN_P6_POS                        _P12_UL(6)
#define P12_IN_P6_LEN                        _P12_UL(1)

/* P12_IN_P7 (rh) */
#define P12_IN_P7_POS                        _P12_UL(7)
#define P12_IN_P7_LEN                        _P12_UL(1)

/* P12_IN_P8 (rh) */
#define P12_IN_P8_POS                        _P12_UL(8)
#define P12_IN_P8_LEN                        _P12_UL(1)

/* P12_IN_P9 (rh) */
#define P12_IN_P9_POS                        _P12_UL(9)
#define P12_IN_P9_LEN                        _P12_UL(1)

/* P12_IN_P10 (rh) */
#define P12_IN_P10_POS                       _P12_UL(10)
#define P12_IN_P10_LEN                       _P12_UL(1)

/* P12_IN_P11 (rh) */
#define P12_IN_P11_POS                       _P12_UL(11)
#define P12_IN_P11_LEN                       _P12_UL(1)

/* P12_IN_P12 (rh) */
#define P12_IN_P12_POS                       _P12_UL(12)
#define P12_IN_P12_LEN                       _P12_UL(1)

/* P12_IN_P13 (rh) */
#define P12_IN_P13_POS                       _P12_UL(13)
#define P12_IN_P13_LEN                       _P12_UL(1)

/* P12_IN_P14 (rh) */
#define P12_IN_P14_POS                       _P12_UL(14)
#define P12_IN_P14_LEN                       _P12_UL(1)

/* P12_IN_P15 (rh) */
#define P12_IN_P15_POS                       _P12_UL(15)
#define P12_IN_P15_LEN                       _P12_UL(1)

/* P12_PDR0_PD0 (rw) */
#define P12_PDR0_PD0_POS                     _P12_UL(0)
#define P12_PDR0_PD0_LEN                     _P12_UL(3)

/* P12_PDR0_PD1 (rw) */
#define P12_PDR0_PD1_POS                     _P12_UL(4)
#define P12_PDR0_PD1_LEN                     _P12_UL(3)

/* P12_PDR0_PD2 (rw) */
#define P12_PDR0_PD2_POS                     _P12_UL(8)
#define P12_PDR0_PD2_LEN                     _P12_UL(3)

/* P12_PDR0_PD3 (rw) */
#define P12_PDR0_PD3_POS                     _P12_UL(12)
#define P12_PDR0_PD3_LEN                     _P12_UL(3)

/* P12_PDR0_PD4 (rw) */
#define P12_PDR0_PD4_POS                     _P12_UL(16)
#define P12_PDR0_PD4_LEN                     _P12_UL(3)

/* P12_PDR0_PD5 (rw) */
#define P12_PDR0_PD5_POS                     _P12_UL(20)
#define P12_PDR0_PD5_LEN                     _P12_UL(3)

/* P12_PDR0_PD6 (rw) */
#define P12_PDR0_PD6_POS                     _P12_UL(24)
#define P12_PDR0_PD6_LEN                     _P12_UL(3)

/* P12_PDR0_PD7 (rw) */
#define P12_PDR0_PD7_POS                     _P12_UL(28)
#define P12_PDR0_PD7_LEN                     _P12_UL(3)

#endif
