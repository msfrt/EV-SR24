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
 * $Filename__:mchk_1797.h$ 
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
 * $Name______:mchk_1797$ 
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
 *      File name: mchk_1797.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MCHK_1797_H
#define _MCHK_1797_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _MCHK_UL(x) x
#else
    #define _MCHK_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module MCHK on TC1797
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF010C208] : Module Identification Register
    volatile uint32 RESERVED0[1];        // [0xF010C20C...0xF010C20F] : reserved space
    volatile uint32 IR;                  // [0xF010C210] : Memory Checker Input Register
    volatile uint32 RR;                  // [0xF010C214] : Memory Checker Result Register
    volatile uint32 RESERVED1[2];        // [0xF010C218...0xF010C21F] : reserved space
    volatile uint32 WR;                  // [0xF010C220] : Memory Checker Write Register
} MCHK_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern MCHK_RegMap_t MCHK __attribute__ ((asection (".bss.label_only")));


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

/* MCHK_ID_MOD_NUMBER (r) */
#define MCHK_ID_MOD_NUMBER_POS               _MCHK_UL(16)
#define MCHK_ID_MOD_NUMBER_LEN               _MCHK_UL(16)

/* MCHK_ID_MOD_REV (r) */
#define MCHK_ID_MOD_REV_POS                  _MCHK_UL(0)
#define MCHK_ID_MOD_REV_LEN                  _MCHK_UL(8)

/* MCHK_ID_MOD_TYPE (r) */
#define MCHK_ID_MOD_TYPE_POS                 _MCHK_UL(8)
#define MCHK_ID_MOD_TYPE_LEN                 _MCHK_UL(8)

/* MCHK_ID_MOD_REV (r) */
#define MCHK_ID_MOD_REV_POS                  _MCHK_UL(0)
#define MCHK_ID_MOD_REV_LEN                  _MCHK_UL(8)

/* MCHK_ID_MOD_TYPE (r) */
#define MCHK_ID_MOD_TYPE_POS                 _MCHK_UL(8)
#define MCHK_ID_MOD_TYPE_LEN                 _MCHK_UL(8)

/* MCHK_ID_MOD_NUMBER (r) */
#define MCHK_ID_MOD_NUMBER_POS               _MCHK_UL(16)
#define MCHK_ID_MOD_NUMBER_LEN               _MCHK_UL(16)

/* MCHK_IR_MCHKIN (w) */
#define MCHK_IR_MCHKIN_POS                   _MCHK_UL(0)
#define MCHK_IR_MCHKIN_LEN                   _MCHK_UL(32)

/* MCHK_RR_MCHKR (rwh) */
#define MCHK_RR_MCHKR_POS                    _MCHK_UL(0)
#define MCHK_RR_MCHKR_LEN                    _MCHK_UL(32)

/* MCHK_WR_WO (w) */
#define MCHK_WR_WO_POS                       _MCHK_UL(0)
#define MCHK_WR_WO_LEN                       _MCHK_UL(32)

#endif
