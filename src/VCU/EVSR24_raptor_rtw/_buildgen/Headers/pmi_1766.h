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
 * $Filename__:pmi_1766.h$ 
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
 * $Name______:pmi_1766$ 
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
 *      File name: pmi_1766.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PMI_1766_H
#define _PMI_1766_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _PMI_UL(x) x
#else
    #define _PMI_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module PMI on TC1766
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF07FFD00...0xF07FFD07] : reserved space
    volatile uint32 ID;                  // [0xF87FFD08] : PMI Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF07FFD0C...0xF07FFD0F] : reserved space
    volatile uint32 CON0;                // [0xF87FFD10] : PMI Control Register 0
    volatile uint32 CON1;                // [0xF87FFD14] : PMI Control Register 1
    volatile uint32 CON2;                // [0xF87FFD18] : PMI Control Register 2
} PMI_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern PMI_RegMap_t PMI __attribute__ ((asection (".bss.label_only")));

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

/* PMI_CON0_CC2SPR (rw) */
#define PMI_CON0_CC2SPR_POS            _PMI_UL(0)
#define PMI_CON0_CC2SPR_LEN            _PMI_UL(1)

/* PMI_CON0_CCBYP (rw) */
#define PMI_CON0_CCBYP_POS             _PMI_UL(1)
#define PMI_CON0_CCBYP_LEN             _PMI_UL(1)

/* PMI_CON1_CCINV (rw) */
#define PMI_CON1_CCINV_POS             _PMI_UL(0)
#define PMI_CON1_CCINV_LEN             _PMI_UL(1)

/* PMI_CON2_PCSZ (rh) */
#define PMI_CON2_PCSZ_POS              _PMI_UL(0)
#define PMI_CON2_PCSZ_LEN              _PMI_UL(2)

/* PMI_CON2_PMEMSZ (rh) */
#define PMI_CON2_PMEMSZ_POS            _PMI_UL(4)
#define PMI_CON2_PMEMSZ_LEN            _PMI_UL(3)

/* PMI_ID_MOD_NUMBER (r) */
#define PMI_ID_MOD_NUMBER_POS          _PMI_UL(16)
#define PMI_ID_MOD_NUMBER_LEN          _PMI_UL(16)

/* PMI_ID_MOD_REV (r) */
#define PMI_ID_MOD_REV_POS             _PMI_UL(0)
#define PMI_ID_MOD_REV_LEN             _PMI_UL(8)

/* PMI_ID_MOD_TYPE (r) */
#define PMI_ID_MOD_TYPE_POS            _PMI_UL(8)
#define PMI_ID_MOD_TYPE_LEN            _PMI_UL(8)

#endif
