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
 * $Filename__:lfi_1796.h$ 
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
 * $Name______:lfi_1796$ 
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
 *      File name: lfi_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _LFI_1796_H
#define _LFI_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _LFI_UL(x) x
#else
    #define _LFI_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module LFI on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF07FFF00...0xF07FFF07] : reserved space
    volatile uint32 ID;                  // [0xF87FFF08] : LFI Identification Register
    volatile uint32 RESERVED1[1];        // [0xF07FFF0C...0xF07FFF0F] : reserved space
    volatile uint32 CON;                 // [0xF87FFF10] : LFI Configuration Register
} LFI_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern LFI_RegMap_t LFI __attribute__ ((asection (".bss.label_only")));

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

/* LFI_CON_EBF (r) */
#define LFI_CON_EBF_POS                _LFI_UL(2)
#define LFI_CON_EBF_LEN                _LFI_UL(1)

/* LFI_CON_EBL (r) */
#define LFI_CON_EBL_POS                _LFI_UL(1)
#define LFI_CON_EBL_LEN                _LFI_UL(1)

/* LFI_CON_FTAG (r) */
#define LFI_CON_FTAG_POS               _LFI_UL(8)
#define LFI_CON_FTAG_LEN               _LFI_UL(4)

/* LFI_CON_LTAG (r) */
#define LFI_CON_LTAG_POS               _LFI_UL(4)
#define LFI_CON_LTAG_LEN               _LFI_UL(3)

/* LFI_CON_SPT (rw) */
#define LFI_CON_SPT_POS                _LFI_UL(0)
#define LFI_CON_SPT_LEN                _LFI_UL(1)

/* LFI_ID_MOD (r) */
#define LFI_ID_MOD_POS                 _LFI_UL(16)
#define LFI_ID_MOD_LEN                 _LFI_UL(16)

/* LFI_ID_MOD_32B (r) */
#define LFI_ID_MOD_32B_POS             _LFI_UL(8)
#define LFI_ID_MOD_32B_LEN             _LFI_UL(8)

/* LFI_ID_REV (r) */
#define LFI_ID_REV_POS                 _LFI_UL(0)
#define LFI_ID_REV_LEN                 _LFI_UL(8)

#endif
