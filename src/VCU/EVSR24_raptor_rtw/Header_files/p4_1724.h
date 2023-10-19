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
 * $Filename__:p4_1724.h$ 
 * 
 * $Author____:RAT1COB$ 
 * 
 * $Function__:TC1724 Header files are added$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:11.05.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:p4_1724$ 
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
 * 1.12.0; 0     11.05.2010 RAT1COB
 *   TC1724 Header files are added
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _P4_1724_H
#define _P4_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _P4_UL(x) x
#else
    #define _P4_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module P4 on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 OUT;                 // [0xF0001000] : Port 4 Output Register
    volatile uint32 OMR;                 // [0xF0001004] : Port 4 Output Modification Register
    volatile uint32 RESERVED0[2];        // [0xF0001008...0xF000100F] : reserved space
    volatile uint32 IOCR0;               // [0xF0001010] : Port 4 Input/Output Control Register 0
    volatile uint32 RESERVED1[4];        // [0xF0001014...0xF0001023] : reserved space
    volatile uint32 IN;                  // [0xF0001024] : Port 4 Input Register
    volatile uint32 RESERVED2[6];        // [0xF0001028...0xF000103F] : reserved space
    volatile uint32 PDR0;                // [0xF0001040] : Port 4 Pad Driver Mode 0 Register
    volatile uint32 RESERVED3[3];        // [0xF0001044...0xF000104F] : reserved space
    volatile uint32 ESR;                 // [0xF0001050] : Port 4 Emergency Stop Register
} P4_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern P4_RegMap_t P4 __attribute__ ((asection (".zbss.label_only","f=awz")));


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

/* P4_ID_MOD_NUMBER (r) */
#define P4_ID_MOD_NUMBER_POS                _P4_UL(16)
#define P4_ID_MOD_NUMBER_LEN                _P4_UL(16)

/* P4_ID_MOD_REV (r) */
#define P4_ID_MOD_REV_POS                   _P4_UL(0)
#define P4_ID_MOD_REV_LEN                   _P4_UL(8)

/* P4_ID_MOD_TYPE (r) */
#define P4_ID_MOD_TYPE_POS                  _P4_UL(8)
#define P4_ID_MOD_TYPE_LEN                  _P4_UL(8)

/* P4_OUT_P0 (rwh) */
#define P4_OUT_P0_POS                        _P4_UL(0)
#define P4_OUT_P0_LEN                        _P4_UL(1)

/* P4_OUT_P1 (rwh) */
#define P4_OUT_P1_POS                        _P4_UL(1)
#define P4_OUT_P1_LEN                        _P4_UL(1)

/* P4_OUT_P2 (rwh) */
#define P4_OUT_P2_POS                        _P4_UL(2)
#define P4_OUT_P2_LEN                        _P4_UL(1)

/* P4_OUT_P3 (rwh) */
#define P4_OUT_P3_POS                        _P4_UL(3)
#define P4_OUT_P3_LEN                        _P4_UL(1)

/* P4_OUT_P4 (rwh) */
#define P4_OUT_P4_POS                        _P4_UL(4)
#define P4_OUT_P4_LEN                        _P4_UL(1)

/* P4_OUT_P5 (rwh) */
#define P4_OUT_P5_POS                        _P4_UL(5)
#define P4_OUT_P5_LEN                        _P4_UL(1)

/* P4_OUT_P6 (rwh) */
#define P4_OUT_P6_POS                        _P4_UL(6)
#define P4_OUT_P6_LEN                        _P4_UL(1)

/* P4_OUT_P7 (rwh) */
#define P4_OUT_P7_POS                        _P4_UL(7)
#define P4_OUT_P7_LEN                        _P4_UL(1)

/* P4_OUT_P8 (rwh) */
#define P4_OUT_P8_POS                        _P4_UL(8)
#define P4_OUT_P8_LEN                        _P4_UL(1)

/* P4_OUT_P9 (rwh) */
#define P4_OUT_P9_POS                        _P4_UL(9)
#define P4_OUT_P9_LEN                        _P4_UL(1)

/* P4_OUT_P10 (rwh) */
#define P4_OUT_P10_POS                       _P4_UL(10)
#define P4_OUT_P10_LEN                       _P4_UL(1)

/* P4_OUT_P11 (rwh) */
#define P4_OUT_P11_POS                       _P4_UL(11)
#define P4_OUT_P11_LEN                       _P4_UL(1)

/* P4_OUT_P12 (rwh) */
#define P4_OUT_P12_POS                       _P4_UL(12)
#define P4_OUT_P12_LEN                       _P4_UL(1)

/* P4_OUT_P13 (rwh) */
#define P4_OUT_P13_POS                       _P4_UL(13)
#define P4_OUT_P13_LEN                       _P4_UL(1)

/* P4_OUT_P14 (rwh) */
#define P4_OUT_P14_POS                       _P4_UL(14)
#define P4_OUT_P14_LEN                       _P4_UL(1)

/* P4_OUT_P15 (rwh) */
#define P4_OUT_P15_POS                       _P4_UL(15)
#define P4_OUT_P15_LEN                       _P4_UL(1)

/* P4_IOCR0_PC0 (rw) */
#define P4_IOCR0_PC0_POS                     _P4_UL(4)
#define P4_IOCR0_PC0_LEN                     _P4_UL(4)

/* P4_IOCR0_PC1 (rw) */
#define P4_IOCR0_PC1_POS                     _P4_UL(12)
#define P4_IOCR0_PC1_LEN                     _P4_UL(4)

/* P4_IOCR0_PC2 (rw) */
#define P4_IOCR0_PC2_POS                     _P4_UL(20)
#define P4_IOCR0_PC2_LEN                     _P4_UL(4)

/* P4_IOCR0_PC3 (rw) */
#define P4_IOCR0_PC3_POS                     _P4_UL(28)
#define P4_IOCR0_PC3_LEN                     _P4_UL(4)

/* P4_IN_P0 (rh) */
#define P4_IN_P0_POS                         _P4_UL(0)
#define P4_IN_P0_LEN                         _P4_UL(1)

/* P4_IN_P1 (rh) */
#define P4_IN_P1_POS                         _P4_UL(1)
#define P4_IN_P1_LEN                         _P4_UL(1)

/* P4_IN_P2 (rh) */
#define P4_IN_P2_POS                         _P4_UL(2)
#define P4_IN_P2_LEN                         _P4_UL(1)

/* P4_IN_P3 (rh) */
#define P4_IN_P3_POS                         _P4_UL(3)
#define P4_IN_P3_LEN                         _P4_UL(1)

/* P4_IN_P4 (rh) */
#define P4_IN_P4_POS                         _P4_UL(4)
#define P4_IN_P4_LEN                         _P4_UL(1)

/* P4_IN_P5 (rh) */
#define P4_IN_P5_POS                         _P4_UL(5)
#define P4_IN_P5_LEN                         _P4_UL(1)

/* P4_IN_P6 (rh) */
#define P4_IN_P6_POS                         _P4_UL(6)
#define P4_IN_P6_LEN                         _P4_UL(1)

/* P4_IN_P7 (rh) */
#define P4_IN_P7_POS                         _P4_UL(7)
#define P4_IN_P7_LEN                         _P4_UL(1)

/* P4_IN_P8 (rh) */
#define P4_IN_P8_POS                         _P4_UL(8)
#define P4_IN_P8_LEN                         _P4_UL(1)

/* P4_IN_P9 (rh) */
#define P4_IN_P9_POS                         _P4_UL(9)
#define P4_IN_P9_LEN                         _P4_UL(1)

/* P4_IN_P10 (rh) */
#define P4_IN_P10_POS                        _P4_UL(10)
#define P4_IN_P10_LEN                        _P4_UL(1)

/* P4_IN_P11 (rh) */
#define P4_IN_P11_POS                        _P4_UL(11)
#define P4_IN_P11_LEN                        _P4_UL(1)

/* P4_IN_P12 (rh) */
#define P4_IN_P12_POS                        _P4_UL(12)
#define P4_IN_P12_LEN                        _P4_UL(1)

/* P4_IN_P13 (rh) */
#define P4_IN_P13_POS                        _P4_UL(13)
#define P4_IN_P13_LEN                        _P4_UL(1)

/* P4_IN_P14 (rh) */
#define P4_IN_P14_POS                        _P4_UL(14)
#define P4_IN_P14_LEN                        _P4_UL(1)

/* P4_IN_P15 (rh) */
#define P4_IN_P15_POS                        _P4_UL(15)
#define P4_IN_P15_LEN                        _P4_UL(1)

/* P4_PDR0_PD0 (rw) */
#define P4_PDR0_PD0_POS                      _P4_UL(0)
#define P4_PDR0_PD0_LEN                      _P4_UL(3)

/* P4_PDR0_PD1 (rw) */
#define P4_PDR0_PD1_POS                      _P4_UL(4)
#define P4_PDR0_PD1_LEN                      _P4_UL(3)

/* P4_PDR0_PD2 (rw) */
#define P4_PDR0_PD2_POS                      _P4_UL(8)
#define P4_PDR0_PD2_LEN                      _P4_UL(3)

/* P4_PDR0_PD3 (rw) */
#define P4_PDR0_PD3_POS                      _P4_UL(12)
#define P4_PDR0_PD3_LEN                      _P4_UL(3)

/* P4_ESR_EN0 (rw) */
#define P4_ESR_EN0_POS                       _P4_UL(0)
#define P4_ESR_EN0_LEN                       _P4_UL(1)

/* P4_ESR_EN1 (rw) */
#define P4_ESR_EN1_POS                       _P4_UL(1)
#define P4_ESR_EN1_LEN                       _P4_UL(1)

/* P4_ESR_EN2 (rw) */
#define P4_ESR_EN2_POS                       _P4_UL(2)
#define P4_ESR_EN2_LEN                       _P4_UL(1)

/* P4_ESR_EN3 (rw) */
#define P4_ESR_EN3_POS                       _P4_UL(3)
#define P4_ESR_EN3_LEN                       _P4_UL(1)

/* P4_ESR_EN4 (rw) */
#define P4_ESR_EN4_POS                       _P4_UL(4)
#define P4_ESR_EN4_LEN                       _P4_UL(1)

/* P4_ESR_EN5 (rw) */
#define P4_ESR_EN5_POS                       _P4_UL(5)
#define P4_ESR_EN5_LEN                       _P4_UL(1)

/* P4_ESR_EN6 (rw) */
#define P4_ESR_EN6_POS                       _P4_UL(6)
#define P4_ESR_EN6_LEN                       _P4_UL(1)

/* P4_ESR_EN7 (rw) */
#define P4_ESR_EN7_POS                       _P4_UL(7)
#define P4_ESR_EN7_LEN                       _P4_UL(1)

/* P4_ESR_EN8 (rw) */
#define P4_ESR_EN8_POS                       _P4_UL(8)
#define P4_ESR_EN8_LEN                       _P4_UL(1)

/* P4_ESR_EN9 (rw) */
#define P4_ESR_EN9_POS                       _P4_UL(9)
#define P4_ESR_EN9_LEN                       _P4_UL(1)

/* P4_ESR_EN10 (rw) */
#define P4_ESR_EN10_POS                      _P4_UL(10)
#define P4_ESR_EN10_LEN                      _P4_UL(1)

/* P4_ESR_EN11 (rw) */
#define P4_ESR_EN11_POS                      _P4_UL(11)
#define P4_ESR_EN11_LEN                      _P4_UL(1)

/* P4_ESR_EN12 (rw) */
#define P4_ESR_EN12_POS                      _P4_UL(12)
#define P4_ESR_EN12_LEN                      _P4_UL(1)

/* P4_ESR_EN13 (rw) */
#define P4_ESR_EN13_POS                      _P4_UL(13)
#define P4_ESR_EN13_LEN                      _P4_UL(1)

/* P4_ESR_EN14 (rw) */
#define P4_ESR_EN14_POS                      _P4_UL(14)
#define P4_ESR_EN14_LEN                      _P4_UL(1)

/* P4_ESR_EN15 (rw) */
#define P4_ESR_EN15_POS                      _P4_UL(15)
#define P4_ESR_EN15_LEN                      _P4_UL(1)

#endif
