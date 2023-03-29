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
 * $Filename__:p4_1766.h$ 
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
 * $Name______:p4_1766$ 
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
 *      File name: p4_1766.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _P4_1766_H
#define _P4_1766_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _P4_UL(x) x
#else
    #define _P4_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module P4 on TC1766
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 OUT;                 // [0xF0001000] : Output Register
    volatile uint32 OMR;                 // [0xF0001004] : Port 4 Output Modification Register
    volatile uint32 RESERVED0[2];        // [0xF0001008...0xF000100F] : reserved space
    volatile uint32 IOCR0;               // [0xF0001010] : Input/Output Control Register 0
    volatile uint32 RESERVED1[4];        // [0xF0001014...0xF0001023] : reserved space
    volatile uint32 IN;                  // [0xF0001024] : Port 4 Input Register
    volatile uint32 RESERVED2[6];        // [0xF0001028...0xF000103F] : reserved space
    volatile uint32 PDR;                 // [0xF0001040] : Port 4 Pad Driver Mode Register
    volatile uint32 RESERVED3[3];        // [0xF0001044...0xF000104F] : reserved space
    volatile uint32 ESR;                 // [0xF0001050] : Port 4 Emergency Stop Register
} P4_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern P4_RegMap_t P4 __attribute__ ((asection (".zbss.label_only","f=awz")));

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

/* P4_ESR_EN0 (rw) */
#define P4_ESR_EN0_POS                 _P4_UL(0)
#define P4_ESR_EN0_LEN                 _P4_UL(1)

/* P4_ESR_EN1 (rw) */
#define P4_ESR_EN1_POS                 _P4_UL(1)
#define P4_ESR_EN1_LEN                 _P4_UL(1)

/* P4_ESR_EN2 (rw) */
#define P4_ESR_EN2_POS                 _P4_UL(2)
#define P4_ESR_EN2_LEN                 _P4_UL(1)

/* P4_ESR_EN3 (rw) */
#define P4_ESR_EN3_POS                 _P4_UL(3)
#define P4_ESR_EN3_LEN                 _P4_UL(1)

/* P4_IN_P0 (r) */
#define P4_IN_P0_POS                   _P4_UL(0)
#define P4_IN_P0_LEN                   _P4_UL(1)

/* P4_IN_P1 (r) */
#define P4_IN_P1_POS                   _P4_UL(1)
#define P4_IN_P1_LEN                   _P4_UL(1)

/* P4_IN_P2 (r) */
#define P4_IN_P2_POS                   _P4_UL(2)
#define P4_IN_P2_LEN                   _P4_UL(1)

/* P4_IN_P3 (r) */
#define P4_IN_P3_POS                   _P4_UL(3)
#define P4_IN_P3_LEN                   _P4_UL(1)

/* P4_IOCR0_PC0 (rw) */
#define P4_IOCR0_PC0_POS               _P4_UL(4)
#define P4_IOCR0_PC0_LEN               _P4_UL(4)

/* P4_IOCR0_PC1 (rw) */
#define P4_IOCR0_PC1_POS               _P4_UL(12)
#define P4_IOCR0_PC1_LEN               _P4_UL(4)

/* P4_IOCR0_PC2 (rw) */
#define P4_IOCR0_PC2_POS               _P4_UL(20)
#define P4_IOCR0_PC2_LEN               _P4_UL(4)

/* P4_IOCR0_PC3 (rw) */
#define P4_IOCR0_PC3_POS               _P4_UL(28)
#define P4_IOCR0_PC3_LEN               _P4_UL(4)

/* P4_OUT_P0 (rwh) */
#define P4_OUT_P0_POS                  _P4_UL(0)
#define P4_OUT_P0_LEN                  _P4_UL(1)

/* P4_OUT_P1 (rwh) */
#define P4_OUT_P1_POS                  _P4_UL(1)
#define P4_OUT_P1_LEN                  _P4_UL(1)

/* P4_OUT_P2 (rwh) */
#define P4_OUT_P2_POS                  _P4_UL(2)
#define P4_OUT_P2_LEN                  _P4_UL(1)

/* P4_OUT_P3 (rwh) */
#define P4_OUT_P3_POS                  _P4_UL(3)
#define P4_OUT_P3_LEN                  _P4_UL(1)

/* P4_PDR_PD0 (rw) */
#define P4_PDR_PD0_POS                 _P4_UL(0)
#define P4_PDR_PD0_LEN                 _P4_UL(3)

/* P4_PDR_PD1 (rw) */
#define P4_PDR_PD1_POS                 _P4_UL(4)
#define P4_PDR_PD1_LEN                 _P4_UL(3)

/* P4_PDR_PDSYSCLK (rw) */
#define P4_PDR_PDSYSCLK_POS            _P4_UL(16)
#define P4_PDR_PDSYSCLK_LEN            _P4_UL(3)

#endif
