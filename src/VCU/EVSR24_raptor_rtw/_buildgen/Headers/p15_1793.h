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
 * $Filename__:p15_1793.h$ 
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
 * $Name______:p15_1793$ 
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

#ifndef _P15_1793_H
#define _P15_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _P15_UL(x) x
#else
    #define _P15_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module P15 on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 OUT;                 // [0xF0300300] : Port 15 Output Register
    volatile uint32 OMR;                 // [0xF0300304] : Port 15 Output Modification Register
    volatile uint32 RESERVED0[2];        // [0xF0300308...0xF030030F] : reserved space
    volatile uint32 IOCR0;               // [0xF0300310] : Port 15 Input/Output Control Register 0
    volatile uint32 IOCR4;               // [0xF0300314] : Port 15 Input/Output Control Register 4
    volatile uint32 IOCR8;               // [0xF0300318] : Port 15 Input/Output Control Register 8
    volatile uint32 IOCR12;              // [0xF030031C] : Port 15 Input/Output Control Register 12
    volatile uint32 RESERVED1[1];        // [0xF0300320...0xF0300323] : reserved space
    volatile uint32 IN;                  // [0xF0300324] : Port 15 Input Register
    volatile uint32 RESERVED2[6];        // [0xF0300328...0xF030033F] : reserved space
    volatile uint32 PDR0;                // [0xF0300340] : Port 15 Pad Driver Mode 0 Register
    volatile uint32 PDR1;                // [0xF0300344] : Port 15 Pad Driver Mode 1 Register
} P15_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern P15_RegMap_t P15 __attribute__ ((asection (".bss.label_only")));


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

/* P15_ID_MOD_NUMBER (r) */
#define P15_ID_MOD_NUMBER_POS                _P15_UL(16)
#define P15_ID_MOD_NUMBER_LEN                _P15_UL(16)

/* P15_ID_MOD_REV (r) */
#define P15_ID_MOD_REV_POS                   _P15_UL(0)
#define P15_ID_MOD_REV_LEN                   _P15_UL(8)

/* P15_ID_MOD_TYPE (r) */
#define P15_ID_MOD_TYPE_POS                  _P15_UL(8)
#define P15_ID_MOD_TYPE_LEN                  _P15_UL(8)

/* P15_OUT_P0 (rwh) */
#define P15_OUT_P0_POS                       _P15_UL(0)
#define P15_OUT_P0_LEN                       _P15_UL(1)

/* P15_OUT_P1 (rwh) */
#define P15_OUT_P1_POS                       _P15_UL(1)
#define P15_OUT_P1_LEN                       _P15_UL(1)

/* P15_OUT_P2 (rwh) */
#define P15_OUT_P2_POS                       _P15_UL(2)
#define P15_OUT_P2_LEN                       _P15_UL(1)

/* P15_OUT_P3 (rwh) */
#define P15_OUT_P3_POS                       _P15_UL(3)
#define P15_OUT_P3_LEN                       _P15_UL(1)

/* P15_OUT_P4 (rwh) */
#define P15_OUT_P4_POS                       _P15_UL(4)
#define P15_OUT_P4_LEN                       _P15_UL(1)

/* P15_OUT_P5 (rwh) */
#define P15_OUT_P5_POS                       _P15_UL(5)
#define P15_OUT_P5_LEN                       _P15_UL(1)

/* P15_OUT_P6 (rwh) */
#define P15_OUT_P6_POS                       _P15_UL(6)
#define P15_OUT_P6_LEN                       _P15_UL(1)

/* P15_OUT_P7 (rwh) */
#define P15_OUT_P7_POS                       _P15_UL(7)
#define P15_OUT_P7_LEN                       _P15_UL(1)

/* P15_OUT_P8 (rwh) */
#define P15_OUT_P8_POS                       _P15_UL(8)
#define P15_OUT_P8_LEN                       _P15_UL(1)

/* P15_OUT_P9 (rwh) */
#define P15_OUT_P9_POS                       _P15_UL(9)
#define P15_OUT_P9_LEN                       _P15_UL(1)

/* P15_OUT_P10 (rwh) */
#define P15_OUT_P10_POS                      _P15_UL(10)
#define P15_OUT_P10_LEN                      _P15_UL(1)

/* P15_OUT_P11 (rwh) */
#define P15_OUT_P11_POS                      _P15_UL(11)
#define P15_OUT_P11_LEN                      _P15_UL(1)

/* P15_OUT_P12 (rwh) */
#define P15_OUT_P12_POS                      _P15_UL(12)
#define P15_OUT_P12_LEN                      _P15_UL(1)

/* P15_OUT_P13 (rwh) */
#define P15_OUT_P13_POS                      _P15_UL(13)
#define P15_OUT_P13_LEN                      _P15_UL(1)

/* P15_OUT_P14 (rwh) */
#define P15_OUT_P14_POS                      _P15_UL(14)
#define P15_OUT_P14_LEN                      _P15_UL(1)

/* P15_OUT_P15 (rwh) */
#define P15_OUT_P15_POS                      _P15_UL(15)
#define P15_OUT_P15_LEN                      _P15_UL(1)

/* P15_IOCR0_PC0 (rw) */
#define P15_IOCR0_PC0_POS                    _P15_UL(4)
#define P15_IOCR0_PC0_LEN                    _P15_UL(4)

/* P15_IOCR0_PC1 (rw) */
#define P15_IOCR0_PC1_POS                    _P15_UL(12)
#define P15_IOCR0_PC1_LEN                    _P15_UL(4)

/* P15_IOCR0_PC2 (rw) */
#define P15_IOCR0_PC2_POS                    _P15_UL(20)
#define P15_IOCR0_PC2_LEN                    _P15_UL(4)

/* P15_IOCR0_PC3 (rw) */
#define P15_IOCR0_PC3_POS                    _P15_UL(28)
#define P15_IOCR0_PC3_LEN                    _P15_UL(4)

/* P15_IOCR4_PC4 (rw) */
#define P15_IOCR4_PC4_POS                    _P15_UL(4)
#define P15_IOCR4_PC4_LEN                    _P15_UL(4)

/* P15_IOCR4_PC5 (rw) */
#define P15_IOCR4_PC5_POS                    _P15_UL(12)
#define P15_IOCR4_PC5_LEN                    _P15_UL(4)

/* P15_IOCR4_PC6 (rw) */
#define P15_IOCR4_PC6_POS                    _P15_UL(20)
#define P15_IOCR4_PC6_LEN                    _P15_UL(4)

/* P15_IOCR4_PC7 (rw) */
#define P15_IOCR4_PC7_POS                    _P15_UL(28)
#define P15_IOCR4_PC7_LEN                    _P15_UL(4)

/* P15_IOCR8_PC8 (rw) */
#define P15_IOCR8_PC8_POS                    _P15_UL(4)
#define P15_IOCR8_PC8_LEN                    _P15_UL(4)

/* P15_IOCR8_PC9 (rw) */
#define P15_IOCR8_PC9_POS                    _P15_UL(12)
#define P15_IOCR8_PC9_LEN                    _P15_UL(4)

/* P15_IOCR8_PC10 (rw) */
#define P15_IOCR8_PC10_POS                   _P15_UL(20)
#define P15_IOCR8_PC10_LEN                   _P15_UL(4)

/* P15_IOCR8_PC11 (rw) */
#define P15_IOCR8_PC11_POS                   _P15_UL(28)
#define P15_IOCR8_PC11_LEN                   _P15_UL(4)

/* P15_IOCR12_PC12 (rw) */
#define P15_IOCR12_PC12_POS                  _P15_UL(4)
#define P15_IOCR12_PC12_LEN                  _P15_UL(4)

/* P15_IOCR12_PC13 (rw) */
#define P15_IOCR12_PC13_POS                  _P15_UL(12)
#define P15_IOCR12_PC13_LEN                  _P15_UL(4)

/* P15_IOCR12_PC14 (rw) */
#define P15_IOCR12_PC14_POS                  _P15_UL(20)
#define P15_IOCR12_PC14_LEN                  _P15_UL(4)

/* P15_IOCR12_PC15 (rw) */
#define P15_IOCR12_PC15_POS                  _P15_UL(28)
#define P15_IOCR12_PC15_LEN                  _P15_UL(4)

/* P15_IN_P0 (rh) */
#define P15_IN_P0_POS                        _P15_UL(0)
#define P15_IN_P0_LEN                        _P15_UL(1)

/* P15_IN_P1 (rh) */
#define P15_IN_P1_POS                        _P15_UL(1)
#define P15_IN_P1_LEN                        _P15_UL(1)

/* P15_IN_P2 (rh) */
#define P15_IN_P2_POS                        _P15_UL(2)
#define P15_IN_P2_LEN                        _P15_UL(1)

/* P15_IN_P3 (rh) */
#define P15_IN_P3_POS                        _P15_UL(3)
#define P15_IN_P3_LEN                        _P15_UL(1)

/* P15_IN_P4 (rh) */
#define P15_IN_P4_POS                        _P15_UL(4)
#define P15_IN_P4_LEN                        _P15_UL(1)

/* P15_IN_P5 (rh) */
#define P15_IN_P5_POS                        _P15_UL(5)
#define P15_IN_P5_LEN                        _P15_UL(1)

/* P15_IN_P6 (rh) */
#define P15_IN_P6_POS                        _P15_UL(6)
#define P15_IN_P6_LEN                        _P15_UL(1)

/* P15_IN_P7 (rh) */
#define P15_IN_P7_POS                        _P15_UL(7)
#define P15_IN_P7_LEN                        _P15_UL(1)

/* P15_IN_P8 (rh) */
#define P15_IN_P8_POS                        _P15_UL(8)
#define P15_IN_P8_LEN                        _P15_UL(1)

/* P15_IN_P9 (rh) */
#define P15_IN_P9_POS                        _P15_UL(9)
#define P15_IN_P9_LEN                        _P15_UL(1)

/* P15_IN_P10 (rh) */
#define P15_IN_P10_POS                       _P15_UL(10)
#define P15_IN_P10_LEN                       _P15_UL(1)

/* P15_IN_P11 (rh) */
#define P15_IN_P11_POS                       _P15_UL(11)
#define P15_IN_P11_LEN                       _P15_UL(1)

/* P15_IN_P12 (rh) */
#define P15_IN_P12_POS                       _P15_UL(12)
#define P15_IN_P12_LEN                       _P15_UL(1)

/* P15_IN_P13 (rh) */
#define P15_IN_P13_POS                       _P15_UL(13)
#define P15_IN_P13_LEN                       _P15_UL(1)

/* P15_IN_P14 (rh) */
#define P15_IN_P14_POS                       _P15_UL(14)
#define P15_IN_P14_LEN                       _P15_UL(1)

/* P15_IN_P15 (rh) */
#define P15_IN_P15_POS                       _P15_UL(15)
#define P15_IN_P15_LEN                       _P15_UL(1)

/* P15_PDR0_PD0 (rw) */
#define P15_PDR0_PD0_POS                     _P15_UL(0)
#define P15_PDR0_PD0_LEN                     _P15_UL(3)

/* P15_PDR0_PD1 (rw) */
#define P15_PDR0_PD1_POS                     _P15_UL(4)
#define P15_PDR0_PD1_LEN                     _P15_UL(3)

/* P15_PDR0_PD2 (rw) */
#define P15_PDR0_PD2_POS                     _P15_UL(8)
#define P15_PDR0_PD2_LEN                     _P15_UL(3)

/* P15_PDR0_PD3 (rw) */
#define P15_PDR0_PD3_POS                     _P15_UL(12)
#define P15_PDR0_PD3_LEN                     _P15_UL(3)

/* P15_PDR0_PD4 (rw) */
#define P15_PDR0_PD4_POS                     _P15_UL(16)
#define P15_PDR0_PD4_LEN                     _P15_UL(3)

/* P15_PDR0_PD5 (rw) */
#define P15_PDR0_PD5_POS                     _P15_UL(20)
#define P15_PDR0_PD5_LEN                     _P15_UL(3)

/* P15_PDR0_PD6 (rw) */
#define P15_PDR0_PD6_POS                     _P15_UL(24)
#define P15_PDR0_PD6_LEN                     _P15_UL(3)

/* P15_PDR0_PD7 (rw) */
#define P15_PDR0_PD7_POS                     _P15_UL(28)
#define P15_PDR0_PD7_LEN                     _P15_UL(3)

/* P15_PDR1_PD8 (rw) */
#define P15_PDR1_PD8_POS                     _P15_UL(0)
#define P15_PDR1_PD8_LEN                     _P15_UL(3)

/* P15_PDR1_PD9 (rw) */
#define P15_PDR1_PD9_POS                     _P15_UL(4)
#define P15_PDR1_PD9_LEN                     _P15_UL(3)

/* P15_PDR1_PD10 (rw) */
#define P15_PDR1_PD10_POS                    _P15_UL(8)
#define P15_PDR1_PD10_LEN                    _P15_UL(3)

/* P15_PDR1_PD11 (rw) */
#define P15_PDR1_PD11_POS                    _P15_UL(12)
#define P15_PDR1_PD11_LEN                    _P15_UL(3)

/* P15_PDR1_PD12 (rw) */
#define P15_PDR1_PD12_POS                    _P15_UL(16)
#define P15_PDR1_PD12_LEN                    _P15_UL(3)

/* P15_PDR1_PD13 (rw) */
#define P15_PDR1_PD13_POS                    _P15_UL(20)
#define P15_PDR1_PD13_LEN                    _P15_UL(3)

/* P15_PDR1_PD14 (rw) */
#define P15_PDR1_PD14_POS                    _P15_UL(24)
#define P15_PDR1_PD14_LEN                    _P15_UL(3)

/* P15_PDR1_PD15 (rw) */
#define P15_PDR1_PD15_POS                    _P15_UL(28)
#define P15_PDR1_PD15_LEN                    _P15_UL(3)

#endif
