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
 * $Filename__:p11_1724.h$ 
 * 
 * $Author____:RAT1COB$ 
 * 
 * $Function__:TC1724 Header files are added$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NAS4COB$ 
 * $Date______:19.10.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:p11_1724$ 
 * $Variant___:1.17.1$ 
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
 * 1.17.1; 0     19.10.2012 NAS4COB
 *   Port6, Port10 are not available in 1724 controller.
 *   
 *   but the respective headers present in Reg:1.17.0.
 *   
 *   Headers removed in 1.17.1
 *   
 *   Fix for Offset in P11 and P12 of TC1724
 * 
 * 1.12.0; 0     11.05.2010 RAT1COB
 *   TC1724 Header files are added
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _P11_1724_H
#define _P11_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _P11_UL(x) x
#else
    #define _P11_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module P11 on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[4];         // [0xF0001700...0xF000170F] Reserved Space
    volatile uint32 IOCR0;               // [0xF0001710] : Port 11 Input/Output Control Register 0
    volatile uint32 IOCR4;               // [0xF0001714] : Port 11 Input/Output Control Register 4
    volatile uint32 IOCR8;               // [0xF0001718] : Port 11 Input/Output Control Register 8
    volatile uint32 IOCR12;              // [0xF000171C] : Port 11 Input/Output Control Register 12
    volatile uint32 RESERVED1[1];        // [0xF0001720...0xF0001723] : reserved space
    volatile uint32 IN;                  // [0xF0001724] : Port 11 Input Register
    volatile uint32 RESERVED2[14];       // [0xF0001728...0xF000175F] : reserved space
    volatile uint32 PDISC;               // [0xF0001760] : Port 11 Pin Function Decision Control Register
} P11_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern P11_RegMap_t P11 __attribute__ ((asection (".zbss.label_only","f=awz")));


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

/* P11_ID_MOD_NUMBER (r) */
#define P11_ID_MOD_NUMBER_POS                _P11_UL(16)
#define P11_ID_MOD_NUMBER_LEN                _P11_UL(16)

/* P11_ID_MOD_REV (r) */
#define P11_ID_MOD_REV_POS                   _P11_UL(0)
#define P11_ID_MOD_REV_LEN                   _P11_UL(8)

/* P11_ID_MOD_TYPE (r) */
#define P11_ID_MOD_TYPE_POS                  _P11_UL(8)
#define P11_ID_MOD_TYPE_LEN                  _P11_UL(8)

/* P11_IOCR0_PC0 (rw) */
#define P11_IOCR0_PC0_POS                    _P11_UL(4)
#define P11_IOCR0_PC0_LEN                    _P11_UL(4)

/* P11_IOCR0_PC1 (rw) */
#define P11_IOCR0_PC1_POS                    _P11_UL(12)
#define P11_IOCR0_PC1_LEN                    _P11_UL(4)

/* P11_IOCR0_PC2 (rw) */
#define P11_IOCR0_PC2_POS                    _P11_UL(20)
#define P11_IOCR0_PC2_LEN                    _P11_UL(4)

/* P11_IOCR0_PC3 (rw) */
#define P11_IOCR0_PC3_POS                    _P11_UL(28)
#define P11_IOCR0_PC3_LEN                    _P11_UL(4)

/* P11_IOCR4_PC4 (rw) */
#define P11_IOCR4_PC4_POS                    _P11_UL(4)
#define P11_IOCR4_PC4_LEN                    _P11_UL(4)

/* P11_IOCR4_PC5 (rw) */
#define P11_IOCR4_PC5_POS                    _P11_UL(12)
#define P11_IOCR4_PC5_LEN                    _P11_UL(4)

/* P11_IOCR4_PC6 (rw) */
#define P11_IOCR4_PC6_POS                    _P11_UL(20)
#define P11_IOCR4_PC6_LEN                    _P11_UL(4)

/* P11_IOCR4_PC7 (rw) */
#define P11_IOCR4_PC7_POS                    _P11_UL(28)
#define P11_IOCR4_PC7_LEN                    _P11_UL(4)

/* P11_IOCR8_PC8 (rw) */
#define P11_IOCR8_PC8_POS                    _P11_UL(4)
#define P11_IOCR8_PC8_LEN                    _P11_UL(4)

/* P11_IOCR8_PC9 (rw) */
#define P11_IOCR8_PC9_POS                    _P11_UL(12)
#define P11_IOCR8_PC9_LEN                    _P11_UL(4)

/* P11_IOCR8_PC10 (rw) */
#define P11_IOCR8_PC10_POS                   _P11_UL(20)
#define P11_IOCR8_PC10_LEN                   _P11_UL(4)

/* P11_IOCR8_PC11 (rw) */
#define P11_IOCR8_PC11_POS                   _P11_UL(28)
#define P11_IOCR8_PC11_LEN                   _P11_UL(4)

/* P11_IOCR12_PC12 (rw) */
#define P11_IOCR12_PC12_POS                  _P11_UL(4)
#define P11_IOCR12_PC12_LEN                  _P11_UL(4)

/* P11_IOCR12_PC13 (rw) */
#define P11_IOCR12_PC13_POS                  _P11_UL(12)
#define P11_IOCR12_PC13_LEN                  _P11_UL(4)

/* P11_IOCR12_PC14 (rw) */
#define P11_IOCR12_PC14_POS                  _P11_UL(20)
#define P11_IOCR12_PC14_LEN                  _P11_UL(4)

/* P11_IOCR12_PC15 (rw) */
#define P11_IOCR12_PC15_POS                  _P11_UL(28)
#define P11_IOCR12_PC15_LEN                  _P11_UL(4)

/* P11_IN_P0 (rh) */
#define P11_IN_P0_POS                        _P11_UL(0)
#define P11_IN_P0_LEN                        _P11_UL(1)

/* P11_IN_P1 (rh) */
#define P11_IN_P1_POS                        _P11_UL(1)
#define P11_IN_P1_LEN                        _P11_UL(1)

/* P11_IN_P2 (rh) */
#define P11_IN_P2_POS                        _P11_UL(2)
#define P11_IN_P2_LEN                        _P11_UL(1)

/* P11_IN_P3 (rh) */
#define P11_IN_P3_POS                        _P11_UL(3)
#define P11_IN_P3_LEN                        _P11_UL(1)

/* P11_IN_P4 (rh) */
#define P11_IN_P4_POS                        _P11_UL(4)
#define P11_IN_P4_LEN                        _P11_UL(1)

/* P11_IN_P5 (rh) */
#define P11_IN_P5_POS                        _P11_UL(5)
#define P11_IN_P5_LEN                        _P11_UL(1)

/* P11_IN_P6 (rh) */
#define P11_IN_P6_POS                        _P11_UL(6)
#define P11_IN_P6_LEN                        _P11_UL(1)

/* P11_IN_P7 (rh) */
#define P11_IN_P7_POS                        _P11_UL(7)
#define P11_IN_P7_LEN                        _P11_UL(1)

/* P11_IN_P8 (rh) */
#define P11_IN_P8_POS                        _P11_UL(8)
#define P11_IN_P8_LEN                        _P11_UL(1)

/* P11_IN_P9 (rh) */
#define P11_IN_P9_POS                        _P11_UL(9)
#define P11_IN_P9_LEN                        _P11_UL(1)

/* P11_IN_P10 (rh) */
#define P11_IN_P10_POS                       _P11_UL(10)
#define P11_IN_P10_LEN                       _P11_UL(1)

/* P11_IN_P11 (rh) */
#define P11_IN_P11_POS                       _P11_UL(11)
#define P11_IN_P11_LEN                       _P11_UL(1)

/* P11_IN_P12 (rh) */
#define P11_IN_P12_POS                       _P11_UL(12)
#define P11_IN_P12_LEN                       _P11_UL(1)

/* P11_IN_P13 (rh) */
#define P11_IN_P13_POS                       _P11_UL(13)
#define P11_IN_P13_LEN                       _P11_UL(1)

/* P11_IN_P14 (rh) */
#define P11_IN_P14_POS                       _P11_UL(14)
#define P11_IN_P14_LEN                       _P11_UL(1)

/* P11_IN_P15 (rh) */
#define P11_IN_P15_POS                       _P11_UL(15)
#define P11_IN_P15_LEN                       _P11_UL(1)

/* P11_PDISC_PDIS0 (rw) */
#define P11_PDISC_PDIS0_POS                  _P11_UL(0)
#define P11_PDISC_PDIS0_LEN                  _P11_UL(1)

/* P11_PDISC_PDIS1 (rw) */
#define P11_PDISC_PDIS1_POS                  _P11_UL(1)
#define P11_PDISC_PDIS1_LEN                  _P11_UL(1)

/* P11_PDISC_PDIS2 (rw) */
#define P11_PDISC_PDIS2_POS                  _P11_UL(2)
#define P11_PDISC_PDIS2_LEN                  _P11_UL(1)

/* P11_PDISC_PDIS3 (rw) */
#define P11_PDISC_PDIS3_POS                  _P11_UL(3)
#define P11_PDISC_PDIS3_LEN                  _P11_UL(1)

/* P11_PDISC_PDIS4 (rw) */
#define P11_PDISC_PDIS4_POS                  _P11_UL(4)
#define P11_PDISC_PDIS4_LEN                  _P11_UL(1)

/* P11_PDISC_PDIS5 (rw) */
#define P11_PDISC_PDIS5_POS                  _P11_UL(5)
#define P11_PDISC_PDIS5_LEN                  _P11_UL(1)

/* P11_PDISC_PDIS6 (rw) */
#define P11_PDISC_PDIS6_POS                  _P11_UL(6)
#define P11_PDISC_PDIS6_LEN                  _P11_UL(1)

/* P11_PDISC_PDIS7 (rw) */
#define P11_PDISC_PDIS7_POS                  _P11_UL(7)
#define P11_PDISC_PDIS7_LEN                  _P11_UL(1)

/* P11_PDISC_PDIS8 (rw) */
#define P11_PDISC_PDIS8_POS                  _P11_UL(8)
#define P11_PDISC_PDIS8_LEN                  _P11_UL(1)

/* P11_PDISC_PDIS9 (rw) */
#define P11_PDISC_PDIS9_POS                  _P11_UL(9)
#define P11_PDISC_PDIS9_LEN                  _P11_UL(1)

/* P11_PDISC_PDIS10 (rw) */
#define P11_PDISC_PDIS10_POS                 _P11_UL(10)
#define P11_PDISC_PDIS10_LEN                 _P11_UL(1)

/* P11_PDISC_PDIS11 (rw) */
#define P11_PDISC_PDIS11_POS                 _P11_UL(11)
#define P11_PDISC_PDIS11_LEN                 _P11_UL(1)

/* P11_PDISC_PDIS12 (rw) */
#define P11_PDISC_PDIS12_POS                 _P11_UL(12)
#define P11_PDISC_PDIS12_LEN                 _P11_UL(1)

/* P11_PDISC_PDIS13 (rw) */
#define P11_PDISC_PDIS13_POS                 _P11_UL(13)
#define P11_PDISC_PDIS13_LEN                 _P11_UL(1)

/* P11_PDISC_PDIS14 (rw) */
#define P11_PDISC_PDIS14_POS                 _P11_UL(14)
#define P11_PDISC_PDIS14_LEN                 _P11_UL(1)

/* P11_PDISC_PDIS15 (rw) */
#define P11_PDISC_PDIS15_POS                 _P11_UL(15)
#define P11_PDISC_PDIS15_LEN                 _P11_UL(1)

#endif
