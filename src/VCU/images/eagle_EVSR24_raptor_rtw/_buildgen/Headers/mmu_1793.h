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
 * $Filename__:mmu_1793.h$ 
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
 * $Name______:mmu_1793$ 
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

#ifndef _MMU_1793_H
#define _MMU_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _MMU_UL(x) x
#else
    #define _MMU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module MMU on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* This defines can only be used with _mtcr() _mfcr(). They are NOT usable with __mtcr __mfcr */
#define MMU_CON_MXCR_OFFSET		0x8000
#define MMU_ASI_MXCR_OFFSET		0x8004
#if 0 
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CON;                 // [0xF7E18000] : MMU Control Register
    volatile uint32 ASI;                 // [0xF7E18004] : Address Space Identifier Register
} MMU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern MMU_RegMap_t MMU __attribute__ ((asection (".bss.label_only")));
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

/* MMU_ID_MOD_NUMBER (r) */
#define MMU_ID_MOD_NUMBER_POS                _MMU_UL(16)
#define MMU_ID_MOD_NUMBER_LEN                _MMU_UL(16)

/* MMU_ID_MOD_REV (r) */
#define MMU_ID_MOD_REV_POS                   _MMU_UL(0)
#define MMU_ID_MOD_REV_LEN                   _MMU_UL(8)

/* MMU_ID_MOD_TYPE (r) */
#define MMU_ID_MOD_TYPE_POS                  _MMU_UL(8)
#define MMU_ID_MOD_TYPE_LEN                  _MMU_UL(8)

/* MMU_CON_RES (r) */
#define MMU_CON_RES_POS                      _MMU_UL(0)
#define MMU_CON_RES_LEN                      _MMU_UL(15)

/* MMU_CON_NOMMU (r) */
#define MMU_CON_NOMMU_POS                    _MMU_UL(15)
#define MMU_CON_NOMMU_LEN                    _MMU_UL(1)

/* MMU_ASI_ASI (rw) */
#define MMU_ASI_ASI_POS                      _MMU_UL(0)
#define MMU_ASI_ASI_LEN                      _MMU_UL(5)

/* MMU_ASI_RES (r) */
#define MMU_ASI_RES_POS                      _MMU_UL(5)
#define MMU_ASI_RES_LEN                      _MMU_UL(27)

#endif
