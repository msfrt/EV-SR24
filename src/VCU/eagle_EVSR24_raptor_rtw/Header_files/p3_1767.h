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
 * $Filename__:p3_1767.h$ 
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
 * $Name______:p3_1767$ 
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
 *      File name: p3_1767.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _P3_1767_H
#define _P3_1767_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _P3_UL(x) x
#else
    #define _P3_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module P3 on TC1767
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 OUT;                 // [0xF0000F00] : Port 3 Output Register
    volatile uint32 OMR;                 // [0xF0000F04] : Port 3 Output Modification Register
    volatile uint32 RESERVED0[2];        // [0xF0000F08...0xF0000F0F] : reserved space
    volatile uint32 IOCR0;               // [0xF0000F10] : Port 3 Input/Output Control Register 0
    volatile uint32 IOCR4;               // [0xF0000F14] : Port 3 Input/Output Control Register 4
    volatile uint32 IOCR8;               // [0xF0000F18] : Port 3 Input/Output Control Register 8
    volatile uint32 IOCR12;              // [0xF0000F1C] : Port 3 Input/Output Control Register 12
    volatile uint32 RESERVED1[1];        // [0xF0000F20...0xF0000F23] : reserved space
    volatile uint32 IN;                  // [0xF0000F24] : Port 3 Input Register
    volatile uint32 RESERVED2[6];        // [0xF0000F28...0xF0000F3F] : reserved space
    volatile uint32 PDR;                 // [0xF0000F40] : Port 3 Pad Driver Mode Register
    volatile uint32 RESERVED3[3];        // [0xF0000F44...0xF0000F4F] : reserved space
    volatile uint32 ESR;                 // [0xF0000F50] : Port 3 Emergency Stop Register
} P3_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern P3_RegMap_t P3 __attribute__ ((asection (".zbss.label_only","f=awz")));


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

/* P3_ID_MOD_NUMBER (r) */
#define P3_ID_MOD_NUMBER_POS                 _P3_UL(16)
#define P3_ID_MOD_NUMBER_LEN                 _P3_UL(16)

/* P3_ID_MOD_REV (r) */
#define P3_ID_MOD_REV_POS                    _P3_UL(0)
#define P3_ID_MOD_REV_LEN                    _P3_UL(8)

/* P3_ID_MOD_TYPE (r) */
#define P3_ID_MOD_TYPE_POS                   _P3_UL(8)
#define P3_ID_MOD_TYPE_LEN                   _P3_UL(8)

/* P3_OUT_P0 (rwh) */
#define P3_OUT_P0_POS                        _P3_UL(0)
#define P3_OUT_P0_LEN                        _P3_UL(1)

/* P3_OUT_P1 (rwh) */
#define P3_OUT_P1_POS                        _P3_UL(1)
#define P3_OUT_P1_LEN                        _P3_UL(1)

/* P3_OUT_P2 (rwh) */
#define P3_OUT_P2_POS                        _P3_UL(2)
#define P3_OUT_P2_LEN                        _P3_UL(1)

/* P3_OUT_P3 (rwh) */
#define P3_OUT_P3_POS                        _P3_UL(3)
#define P3_OUT_P3_LEN                        _P3_UL(1)

/* P3_OUT_P4 (rwh) */
#define P3_OUT_P4_POS                        _P3_UL(4)
#define P3_OUT_P4_LEN                        _P3_UL(1)

/* P3_OUT_P5 (rwh) */
#define P3_OUT_P5_POS                        _P3_UL(5)
#define P3_OUT_P5_LEN                        _P3_UL(1)

/* P3_OUT_P6 (rwh) */
#define P3_OUT_P6_POS                        _P3_UL(6)
#define P3_OUT_P6_LEN                        _P3_UL(1)

/* P3_OUT_P7 (rwh) */
#define P3_OUT_P7_POS                        _P3_UL(7)
#define P3_OUT_P7_LEN                        _P3_UL(1)

/* P3_OUT_P8 (rwh) */
#define P3_OUT_P8_POS                        _P3_UL(8)
#define P3_OUT_P8_LEN                        _P3_UL(1)

/* P3_OUT_P9 (rwh) */
#define P3_OUT_P9_POS                        _P3_UL(9)
#define P3_OUT_P9_LEN                        _P3_UL(1)

/* P3_OUT_P10 (rwh) */
#define P3_OUT_P10_POS                       _P3_UL(10)
#define P3_OUT_P10_LEN                       _P3_UL(1)

/* P3_OUT_P11 (rwh) */
#define P3_OUT_P11_POS                       _P3_UL(11)
#define P3_OUT_P11_LEN                       _P3_UL(1)

/* P3_OUT_P12 (rwh) */
#define P3_OUT_P12_POS                       _P3_UL(12)
#define P3_OUT_P12_LEN                       _P3_UL(1)

/* P3_OUT_P13 (rwh) */
#define P3_OUT_P13_POS                       _P3_UL(13)
#define P3_OUT_P13_LEN                       _P3_UL(1)

/* P3_OUT_P14 (rwh) */
#define P3_OUT_P14_POS                       _P3_UL(14)
#define P3_OUT_P14_LEN                       _P3_UL(1)

/* P3_OUT_P15 (rwh) */
#define P3_OUT_P15_POS                       _P3_UL(15)
#define P3_OUT_P15_LEN                       _P3_UL(1)

/* P3_IOCR0_PC0 (rw) */
#define P3_IOCR0_PC0_POS                     _P3_UL(4)
#define P3_IOCR0_PC0_LEN                     _P3_UL(4)

/* P3_IOCR0_PC1 (rw) */
#define P3_IOCR0_PC1_POS                     _P3_UL(12)
#define P3_IOCR0_PC1_LEN                     _P3_UL(4)

/* P3_IOCR0_PC2 (rw) */
#define P3_IOCR0_PC2_POS                     _P3_UL(20)
#define P3_IOCR0_PC2_LEN                     _P3_UL(4)

/* P3_IOCR0_PC3 (rw) */
#define P3_IOCR0_PC3_POS                     _P3_UL(28)
#define P3_IOCR0_PC3_LEN                     _P3_UL(4)

/* P3_IOCR4_PC4 (rw) */
#define P3_IOCR4_PC4_POS                     _P3_UL(4)
#define P3_IOCR4_PC4_LEN                     _P3_UL(4)

/* P3_IOCR4_PC5 (rw) */
#define P3_IOCR4_PC5_POS                     _P3_UL(12)
#define P3_IOCR4_PC5_LEN                     _P3_UL(4)

/* P3_IOCR4_PC6 (rw) */
#define P3_IOCR4_PC6_POS                     _P3_UL(20)
#define P3_IOCR4_PC6_LEN                     _P3_UL(4)

/* P3_IOCR4_PC7 (rw) */
#define P3_IOCR4_PC7_POS                     _P3_UL(28)
#define P3_IOCR4_PC7_LEN                     _P3_UL(4)

/* P3_IOCR8_PC8 (rw) */
#define P3_IOCR8_PC8_POS                     _P3_UL(4)
#define P3_IOCR8_PC8_LEN                     _P3_UL(4)

/* P3_IOCR8_PC9 (rw) */
#define P3_IOCR8_PC9_POS                     _P3_UL(12)
#define P3_IOCR8_PC9_LEN                     _P3_UL(4)

/* P3_IOCR8_PC10 (rw) */
#define P3_IOCR8_PC10_POS                    _P3_UL(20)
#define P3_IOCR8_PC10_LEN                    _P3_UL(4)

/* P3_IOCR8_PC11 (rw) */
#define P3_IOCR8_PC11_POS                    _P3_UL(28)
#define P3_IOCR8_PC11_LEN                    _P3_UL(4)

/* P3_IOCR12_PC12 (rw) */
#define P3_IOCR12_PC12_POS                   _P3_UL(4)
#define P3_IOCR12_PC12_LEN                   _P3_UL(4)

/* P3_IOCR12_PC13 (rw) */
#define P3_IOCR12_PC13_POS                   _P3_UL(12)
#define P3_IOCR12_PC13_LEN                   _P3_UL(4)

/* P3_IOCR12_PC14 (rw) */
#define P3_IOCR12_PC14_POS                   _P3_UL(20)
#define P3_IOCR12_PC14_LEN                   _P3_UL(4)

/* P3_IOCR12_PC15 (rw) */
#define P3_IOCR12_PC15_POS                   _P3_UL(28)
#define P3_IOCR12_PC15_LEN                   _P3_UL(4)

/* P3_IN_P0 (rh) */
#define P3_IN_P0_POS                         _P3_UL(0)
#define P3_IN_P0_LEN                         _P3_UL(1)

/* P3_IN_P1 (rh) */
#define P3_IN_P1_POS                         _P3_UL(1)
#define P3_IN_P1_LEN                         _P3_UL(1)

/* P3_IN_P2 (rh) */
#define P3_IN_P2_POS                         _P3_UL(2)
#define P3_IN_P2_LEN                         _P3_UL(1)

/* P3_IN_P3 (rh) */
#define P3_IN_P3_POS                         _P3_UL(3)
#define P3_IN_P3_LEN                         _P3_UL(1)

/* P3_IN_P4 (rh) */
#define P3_IN_P4_POS                         _P3_UL(4)
#define P3_IN_P4_LEN                         _P3_UL(1)

/* P3_IN_P5 (rh) */
#define P3_IN_P5_POS                         _P3_UL(5)
#define P3_IN_P5_LEN                         _P3_UL(1)

/* P3_IN_P6 (rh) */
#define P3_IN_P6_POS                         _P3_UL(6)
#define P3_IN_P6_LEN                         _P3_UL(1)

/* P3_IN_P7 (rh) */
#define P3_IN_P7_POS                         _P3_UL(7)
#define P3_IN_P7_LEN                         _P3_UL(1)

/* P3_IN_P8 (rh) */
#define P3_IN_P8_POS                         _P3_UL(8)
#define P3_IN_P8_LEN                         _P3_UL(1)

/* P3_IN_P9 (rh) */
#define P3_IN_P9_POS                         _P3_UL(9)
#define P3_IN_P9_LEN                         _P3_UL(1)

/* P3_IN_P10 (rh) */
#define P3_IN_P10_POS                        _P3_UL(10)
#define P3_IN_P10_LEN                        _P3_UL(1)

/* P3_IN_P11 (rh) */
#define P3_IN_P11_POS                        _P3_UL(11)
#define P3_IN_P11_LEN                        _P3_UL(1)

/* P3_IN_P12 (rh) */
#define P3_IN_P12_POS                        _P3_UL(12)
#define P3_IN_P12_LEN                        _P3_UL(1)

/* P3_IN_P13 (rh) */
#define P3_IN_P13_POS                        _P3_UL(13)
#define P3_IN_P13_LEN                        _P3_UL(1)

/* P3_IN_P14 (rh) */
#define P3_IN_P14_POS                        _P3_UL(14)
#define P3_IN_P14_LEN                        _P3_UL(1)

/* P3_IN_P15 (rh) */
#define P3_IN_P15_POS                        _P3_UL(15)
#define P3_IN_P15_LEN                        _P3_UL(1)

/* P3_PDR_PD0 (rw) */
#define P3_PDR_PD0_POS                       _P3_UL(0)
#define P3_PDR_PD0_LEN                       _P3_UL(3)

/* P3_PDR_PDASC0 (rw) */
#define P3_PDR_PDASC0_POS                    _P3_UL(16)
#define P3_PDR_PDASC0_LEN                    _P3_UL(3)

/* P3_PDR_PDSSC0 (rw) */
#define P3_PDR_PDSSC0_POS                    _P3_UL(20)
#define P3_PDR_PDSSC0_LEN                    _P3_UL(3)

/* P3_PDR_PDASC1 (rw) */
#define P3_PDR_PDASC1_POS                    _P3_UL(24)
#define P3_PDR_PDASC1_LEN                    _P3_UL(3)

/* P3_PDR_PDCAN (rw) */
#define P3_PDR_PDCAN_POS                     _P3_UL(28)
#define P3_PDR_PDCAN_LEN                     _P3_UL(3)

/* P3_PDR_PD1 (rw) */
#define P3_PDR_PD1_POS                       _P3_UL(4)
#define P3_PDR_PD1_LEN                       _P3_UL(3)

/* P3_ESR_EN0 (rw) */
#define P3_ESR_EN0_POS                       _P3_UL(0)
#define P3_ESR_EN0_LEN                       _P3_UL(1)

/* P3_ESR_EN1 (rw) */
#define P3_ESR_EN1_POS                       _P3_UL(1)
#define P3_ESR_EN1_LEN                       _P3_UL(1)

/* P3_ESR_EN2 (rw) */
#define P3_ESR_EN2_POS                       _P3_UL(2)
#define P3_ESR_EN2_LEN                       _P3_UL(1)

/* P3_ESR_EN3 (rw) */
#define P3_ESR_EN3_POS                       _P3_UL(3)
#define P3_ESR_EN3_LEN                       _P3_UL(1)

/* P3_ESR_EN4 (rw) */
#define P3_ESR_EN4_POS                       _P3_UL(4)
#define P3_ESR_EN4_LEN                       _P3_UL(1)

/* P3_ESR_EN5 (rw) */
#define P3_ESR_EN5_POS                       _P3_UL(5)
#define P3_ESR_EN5_LEN                       _P3_UL(1)

/* P3_ESR_EN6 (rw) */
#define P3_ESR_EN6_POS                       _P3_UL(6)
#define P3_ESR_EN6_LEN                       _P3_UL(1)

/* P3_ESR_EN7 (rw) */
#define P3_ESR_EN7_POS                       _P3_UL(7)
#define P3_ESR_EN7_LEN                       _P3_UL(1)

/* P3_ESR_EN8 (rw) */
#define P3_ESR_EN8_POS                       _P3_UL(8)
#define P3_ESR_EN8_LEN                       _P3_UL(1)

/* P3_ESR_EN9 (rw) */
#define P3_ESR_EN9_POS                       _P3_UL(9)
#define P3_ESR_EN9_LEN                       _P3_UL(1)

/* P3_ESR_EN10 (rw) */
#define P3_ESR_EN10_POS                      _P3_UL(10)
#define P3_ESR_EN10_LEN                      _P3_UL(1)

/* P3_ESR_EN11 (rw) */
#define P3_ESR_EN11_POS                      _P3_UL(11)
#define P3_ESR_EN11_LEN                      _P3_UL(1)

/* P3_ESR_EN12 (rw) */
#define P3_ESR_EN12_POS                      _P3_UL(12)
#define P3_ESR_EN12_LEN                      _P3_UL(1)

/* P3_ESR_EN13 (rw) */
#define P3_ESR_EN13_POS                      _P3_UL(13)
#define P3_ESR_EN13_LEN                      _P3_UL(1)

/* P3_ESR_EN14 (rw) */
#define P3_ESR_EN14_POS                      _P3_UL(14)
#define P3_ESR_EN14_LEN                      _P3_UL(1)

/* P3_ESR_EN15 (rw) */
#define P3_ESR_EN15_POS                      _P3_UL(15)
#define P3_ESR_EN15_LEN                      _P3_UL(1)

#endif
