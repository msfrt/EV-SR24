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
 * $Filename__:p12_1724.h$ 
 * 
 * $Author____:RAT1COB$ 
 * 
 * $Function__:Register header TC1724 update$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NAS4COB$ 
 * $Date______:19.10.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:p12_1724$ 
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
 * 1.12.0; 0     17.05.2010 RAT1COB
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _P12_1724_H
#define _P12_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _P12_UL(x) x
#else
    #define _P12_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module P12 on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[4];        // [0xF0300000...0xF030000F] Reserved Space
    volatile uint32 IOCR0;               // [0xF0300010] : Port 12 Input/Output Control Register 0
    volatile uint32 RESERVED1[4];        // [0xF0300014...0xF0300023] : reserved space
    volatile uint32 IN;                  // [0xF0300024] : Port 12 Input Register
    volatile uint32 RESERVED2[14];       // [0xF0300028...0xF030005F] : reserved space
    volatile uint32 PDISC;               // [0xF0300060] : Port 12 Pin Function Decision Control Register
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

/* P12_PDISC_PDIS0 (rw) */
#define P12_PDISC_PDIS0_POS                  _P12_UL(0)
#define P12_PDISC_PDIS0_LEN                  _P12_UL(1)

/* P12_PDISC_PDIS1 (rw) */
#define P12_PDISC_PDIS1_POS                  _P12_UL(1)
#define P12_PDISC_PDIS1_LEN                  _P12_UL(1)

/* P12_PDISC_PDIS2 (rw) */
#define P12_PDISC_PDIS2_POS                  _P12_UL(2)
#define P12_PDISC_PDIS2_LEN                  _P12_UL(1)

/* P12_PDISC_PDIS3 (rw) */
#define P12_PDISC_PDIS3_POS                  _P12_UL(3)
#define P12_PDISC_PDIS3_LEN                  _P12_UL(1)

#endif
