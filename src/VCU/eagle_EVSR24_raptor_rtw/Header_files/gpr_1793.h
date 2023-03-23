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
 * $Filename__:gpr_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:03.06.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:gpr_1793$ 
 * $Variant___:1.15.0$ 
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
 * 1.15.0; 0     03.06.2011 RAT1COB
 *   TC1793 update
 * 
 * 1.12.0; 1     20.10.2010 RAT1COB
 *   TC1793 update
 * 
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _GPR_1793_H
#define _GPR_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _GPR_UL(x) x
#else
    #define _GPR_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module GPR on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* This defines can only be used with _mtcr() _mfcr(). They are NOT usable with __mtcr __mfcr */
#define GPR_D0_MXCR_OFFSET		0xFF00
#define GPR_D1_MXCR_OFFSET		0xFF04
#define GPR_D2_MXCR_OFFSET		0xFF08
#define GPR_D3_MXCR_OFFSET		0xFF0C
#define GPR_D4_MXCR_OFFSET		0xFF10
#define GPR_D5_MXCR_OFFSET		0xFF14
#define GPR_D6_MXCR_OFFSET		0xFF18
#define GPR_D7_MXCR_OFFSET		0xFF1C
#define GPR_D8_MXCR_OFFSET		0xFF20
#define GPR_D9_MXCR_OFFSET		0xFF24
#define GPR_D10_MXCR_OFFSET		0xFF28
#define GPR_D11_MXCR_OFFSET		0xFF2C
#define GPR_D12_MXCR_OFFSET		0xFF30
#define GPR_D13_MXCR_OFFSET		0xFF34
#define GPR_D14_MXCR_OFFSET		0xFF38
#define GPR_D15_MXCR_OFFSET		0xFF3C
#define GPR_A0_MXCR_OFFSET		0xFF80
#define GPR_A1_MXCR_OFFSET		0xFF84
#define GPR_A2_MXCR_OFFSET		0xFF88
#define GPR_A3_MXCR_OFFSET		0xFF8C
#define GPR_A4_MXCR_OFFSET		0xFF90
#define GPR_A5_MXCR_OFFSET		0xFF94
#define GPR_A6_MXCR_OFFSET		0xFF98
#define GPR_A7_MXCR_OFFSET		0xFF9C
#define GPR_A8_MXCR_OFFSET		0xFFA0
#define GPR_A9_MXCR_OFFSET		0xFFA4
#define GPR_A10_MXCR_OFFSET		0xFFA8
#define GPR_A11_MXCR_OFFSET		0xFFAC
#define GPR_A12_MXCR_OFFSET		0xFFB0
#define GPR_A13_MXCR_OFFSET		0xFFB4
#define GPR_A14_MXCR_OFFSET		0xFFB8
#define GPR_A15_MXCR_OFFSET		0xFFBC
#if 0 
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 D0;                  // [0xF7E1FF00] : Data General Purpose Register 0
    volatile uint32 D1;                  // [0xF7E1FF04] : Data General Purpose Register 1
    volatile uint32 D2;                  // [0xF7E1FF08] : Data General Purpose Register 2
    volatile uint32 D3;                  // [0xF7E1FF0C] : Data General Purpose Register 3
    volatile uint32 D4;                  // [0xF7E1FF10] : Data General Purpose Register 4
    volatile uint32 D5;                  // [0xF7E1FF14] : Data General Purpose Register 5
    volatile uint32 D6;                  // [0xF7E1FF18] : Data General Purpose Register 6
    volatile uint32 D7;                  // [0xF7E1FF1C] : Data General Purpose Register 7
    volatile uint32 D8;                  // [0xF7E1FF20] : Data General Purpose Register 8
    volatile uint32 D9;                  // [0xF7E1FF24] : Data General Purpose Register 9
    volatile uint32 D10;                 // [0xF7E1FF28] : Data General Purpose Register 10
    volatile uint32 D11;                 // [0xF7E1FF2C] : Data General Purpose Register 11
    volatile uint32 D12;                 // [0xF7E1FF30] : Data General Purpose Register 12
    volatile uint32 D13;                 // [0xF7E1FF34] : Data General Purpose Register 13
    volatile uint32 D14;                 // [0xF7E1FF38] : Data General Purpose Register 14
    volatile uint32 D15;                 // [0xF7E1FF3C] : Data General Purpose Register 15
    volatile uint32 RESERVED0[16];       // [0xF7E1FF40...0xF7E1FF7F] : reserved space
    volatile uint32 A0;                  // [0xF7E1FF80] : Address General Purpose Register 0
    volatile uint32 A1;                  // [0xF7E1FF84] : Address General Purpose Register 1
    volatile uint32 A2;                  // [0xF7E1FF88] : Address General Purpose Register 2
    volatile uint32 A3;                  // [0xF7E1FF8C] : Address General Purpose Register 3
    volatile uint32 A4;                  // [0xF7E1FF90] : Address General Purpose Register 4
    volatile uint32 A5;                  // [0xF7E1FF94] : Address General Purpose Register 5
    volatile uint32 A6;                  // [0xF7E1FF98] : Address General Purpose Register 6
    volatile uint32 A7;                  // [0xF7E1FF9C] : Address General Purpose Register 7
    volatile uint32 A8;                  // [0xF7E1FFA0] : Address General Purpose Register 8
    volatile uint32 A9;                  // [0xF7E1FFA4] : Address General Purpose Register 9
    volatile uint32 A10;                 // [0xF7E1FFA8] : Address General Purpose Register 10
    volatile uint32 A11;                 // [0xF7E1FFAC] : Address General Purpose Register 11
    volatile uint32 A12;                 // [0xF7E1FFB0] : Address General Purpose Register 12
    volatile uint32 A13;                 // [0xF7E1FFB4] : Address General Purpose Register 13
    volatile uint32 A14;                 // [0xF7E1FFB8] : Address General Purpose Register 14
    volatile uint32 A15;                 // [0xF7E1FFBC] : Address General Purpose Register 15
} GPR_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern GPR_RegMap_t GPR __attribute__ ((asection (".bss.label_only")));
#endif 


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
