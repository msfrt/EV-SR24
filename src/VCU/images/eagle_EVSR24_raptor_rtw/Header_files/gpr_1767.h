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
 * $Filename__:gpr_1767.h$ 
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
 * $Name______:gpr_1767$ 
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
 *      File name: gpr_1767.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _GPR_1767_H
#define _GPR_1767_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _GPR_UL(x) x
#else
    #define _GPR_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module GPR on TC1767
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 D0;                  // [0xF7E1FF00] : Data Register 0
    volatile uint32 D1;                  // [0xF7E1FF04] : Data Register 1
    volatile uint32 D2;                  // [0xF7E1FF08] : Data Register 2
    volatile uint32 D3;                  // [0xF7E1FF0C] : Data Register 3
    volatile uint32 D4;                  // [0xF7E1FF10] : Data Register 4
    volatile uint32 D5;                  // [0xF7E1FF14] : Data Register 5
    volatile uint32 D6;                  // [0xF7E1FF18] : Data Register 6
    volatile uint32 D7;                  // [0xF7E1FF1C] : Data Register 7
    volatile uint32 D8;                  // [0xF7E1FF20] : Data Register 8
    volatile uint32 D9;                  // [0xF7E1FF24] : Data Register 9
    volatile uint32 D10;                 // [0xF7E1FF28] : Data Register 10
    volatile uint32 D11;                 // [0xF7E1FF2C] : Data Register 11
    volatile uint32 D12;                 // [0xF7E1FF30] : Data Register 12
    volatile uint32 D13;                 // [0xF7E1FF34] : Data Register 13
    volatile uint32 D14;                 // [0xF7E1FF38] : Data Register 14
    volatile uint32 D15;                 // [0xF7E1FF3C] : Data Register 15
    volatile uint32 RESERVED0[16];       // [0xF7E1FF40...0xF7E1FF7F] : reserved space
    volatile uint32 A0;                  // [0xF7E1FF80] : Address Register 0
    volatile uint32 A1;                  // [0xF7E1FF84] : Address Register 1
    volatile uint32 A2;                  // [0xF7E1FF88] : Address Register 2
    volatile uint32 A3;                  // [0xF7E1FF8C] : Address Register 3
    volatile uint32 A4;                  // [0xF7E1FF90] : Address Register 4
    volatile uint32 A5;                  // [0xF7E1FF94] : Address Register 5
    volatile uint32 A6;                  // [0xF7E1FF98] : Address Register 6
    volatile uint32 A7;                  // [0xF7E1FF9C] : Address Register 7
    volatile uint32 A8;                  // [0xF7E1FFA0] : Address Register 8
    volatile uint32 A9;                  // [0xF7E1FFA4] : Address Register 9
    volatile uint32 A10;                 // [0xF7E1FFA8] : Address Register 10
    volatile uint32 A11;                 // [0xF7E1FFAC] : Address Register 11
    volatile uint32 A12;                 // [0xF7E1FFB0] : Address Register 12
    volatile uint32 A13;                 // [0xF7E1FFB4] : Address Register 13
    volatile uint32 A14;                 // [0xF7E1FFB8] : Address Register 14
    volatile uint32 A15;                 // [0xF7E1FFBC] : Address Register 15
} GPR_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern GPR_RegMap_t GPR __attribute__ ((asection (".bss.label_only")));


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

#endif
