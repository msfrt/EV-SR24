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
 * $Filename__:ovc_1767.h$ 
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
 * $Name______:ovc_1767$ 
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
 *      File name: ovc_1767.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _OVC_1767_H
#define _OVC_1767_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _OVC_UL(x) x
#else
    #define _OVC_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module OVC on TC1767
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* sub-structure for overlay area registers */
typedef struct {
    volatile uint32 RABR;                // Redirect Address Base Registers
    volatile uint32 OTAR;                // Overlay Target Address Registers
    volatile uint32 OMASK;               // Overlay Mask Registers
} OVC_OvrReg_t;

/* C-structure definition for hardware module */
typedef struct {
    OVC_OvrReg_t    OVR[16];             // [0xF87FFB20...0xF87FFBDF]: Overlay Area Registers
    volatile uint32 OCON;                // [0xF87FFBE0] : Overlay Control Register
} OVC_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern OVC_RegMap_t OVC __attribute__ ((asection (".bss.label_only")));


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

/* OVC_ID_MOD_NUMBER (r) */
#define OVC_ID_MOD_NUMBER_POS                _OVC_UL(16)
#define OVC_ID_MOD_NUMBER_LEN                _OVC_UL(16)

/* OVC_ID_MOD_REV (r) */
#define OVC_ID_MOD_REV_POS                   _OVC_UL(0)
#define OVC_ID_MOD_REV_LEN                   _OVC_UL(8)

/* OVC_ID_MOD_TYPE (r) */
#define OVC_ID_MOD_TYPE_POS                  _OVC_UL(8)
#define OVC_ID_MOD_TYPE_LEN                  _OVC_UL(8)

/* OVC_RABR0_OBASE (rw) */
#define OVC_RABR0_OBASE_POS                  _OVC_UL(4)
#define OVC_RABR0_OBASE_LEN                  _OVC_UL(9)

/* OVC_RABR0_FIXVAL (r) */
#define OVC_RABR0_FIXVAL_POS                 _OVC_UL(16)
#define OVC_RABR0_FIXVAL_LEN                 _OVC_UL(12)

/* OVC_RABR0_RC0 (r) */
#define OVC_RABR0_RC0_POS                    _OVC_UL(28)
#define OVC_RABR0_RC0_LEN                    _OVC_UL(1)

/* OVC_RABR0_EXOMS (rw) */
#define OVC_RABR0_EXOMS_POS                  _OVC_UL(29)
#define OVC_RABR0_EXOMS_LEN                  _OVC_UL(1)

/* OVC_RABR0_IEMS (rw) */
#define OVC_RABR0_IEMS_POS                   _OVC_UL(30)
#define OVC_RABR0_IEMS_LEN                   _OVC_UL(1)

/* OVC_RABR0_OVEN (rwh) */
#define OVC_RABR0_OVEN_POS                   _OVC_UL(31)
#define OVC_RABR0_OVEN_LEN                   _OVC_UL(1)

/* OVC_OTAR0_TBASE (rw) */
#define OVC_OTAR0_TBASE_POS                  _OVC_UL(4)
#define OVC_OTAR0_TBASE_LEN                  _OVC_UL(24)

/* OVC_OTAR0_TSEG (rw) */
#define OVC_OTAR0_TSEG_POS                   _OVC_UL(28)
#define OVC_OTAR0_TSEG_LEN                   _OVC_UL(4)

/* OVC_OMASK0_OMASK (rw) */
#define OVC_OMASK0_OMASK_POS                 _OVC_UL(4)
#define OVC_OMASK0_OMASK_LEN                 _OVC_UL(7)

/* OVC_OMASK0_ONE (r) */
#define OVC_OMASK0_ONE_POS                   _OVC_UL(11)
#define OVC_OMASK0_ONE_LEN                   _OVC_UL(17)

/* OVC_RABR1_OBASE (rw) */
#define OVC_RABR1_OBASE_POS                  _OVC_UL(4)
#define OVC_RABR1_OBASE_LEN                  _OVC_UL(9)

/* OVC_RABR1_FIXVAL (r) */
#define OVC_RABR1_FIXVAL_POS                 _OVC_UL(16)
#define OVC_RABR1_FIXVAL_LEN                 _OVC_UL(12)

/* OVC_RABR1_RC0 (r) */
#define OVC_RABR1_RC0_POS                    _OVC_UL(28)
#define OVC_RABR1_RC0_LEN                    _OVC_UL(1)

/* OVC_RABR1_EXOMS (rw) */
#define OVC_RABR1_EXOMS_POS                  _OVC_UL(29)
#define OVC_RABR1_EXOMS_LEN                  _OVC_UL(1)

/* OVC_RABR1_IEMS (rw) */
#define OVC_RABR1_IEMS_POS                   _OVC_UL(30)
#define OVC_RABR1_IEMS_LEN                   _OVC_UL(1)

/* OVC_RABR1_OVEN (rwh) */
#define OVC_RABR1_OVEN_POS                   _OVC_UL(31)
#define OVC_RABR1_OVEN_LEN                   _OVC_UL(1)

/* OVC_OTAR1_TBASE (rw) */
#define OVC_OTAR1_TBASE_POS                  _OVC_UL(4)
#define OVC_OTAR1_TBASE_LEN                  _OVC_UL(24)

/* OVC_OTAR1_TSEG (rw) */
#define OVC_OTAR1_TSEG_POS                   _OVC_UL(28)
#define OVC_OTAR1_TSEG_LEN                   _OVC_UL(4)

/* OVC_OMASK1_OMASK (rw) */
#define OVC_OMASK1_OMASK_POS                 _OVC_UL(4)
#define OVC_OMASK1_OMASK_LEN                 _OVC_UL(7)

/* OVC_OMASK1_ONE (r) */
#define OVC_OMASK1_ONE_POS                   _OVC_UL(11)
#define OVC_OMASK1_ONE_LEN                   _OVC_UL(17)

/* OVC_RABR2_OBASE (rw) */
#define OVC_RABR2_OBASE_POS                  _OVC_UL(4)
#define OVC_RABR2_OBASE_LEN                  _OVC_UL(9)

/* OVC_RABR2_FIXVAL (r) */
#define OVC_RABR2_FIXVAL_POS                 _OVC_UL(16)
#define OVC_RABR2_FIXVAL_LEN                 _OVC_UL(12)

/* OVC_RABR2_RC0 (r) */
#define OVC_RABR2_RC0_POS                    _OVC_UL(28)
#define OVC_RABR2_RC0_LEN                    _OVC_UL(1)

/* OVC_RABR2_EXOMS (rw) */
#define OVC_RABR2_EXOMS_POS                  _OVC_UL(29)
#define OVC_RABR2_EXOMS_LEN                  _OVC_UL(1)

/* OVC_RABR2_IEMS (rw) */
#define OVC_RABR2_IEMS_POS                   _OVC_UL(30)
#define OVC_RABR2_IEMS_LEN                   _OVC_UL(1)

/* OVC_RABR2_OVEN (rwh) */
#define OVC_RABR2_OVEN_POS                   _OVC_UL(31)
#define OVC_RABR2_OVEN_LEN                   _OVC_UL(1)

/* OVC_OTAR2_TBASE (rw) */
#define OVC_OTAR2_TBASE_POS                  _OVC_UL(4)
#define OVC_OTAR2_TBASE_LEN                  _OVC_UL(24)

/* OVC_OTAR2_TSEG (rw) */
#define OVC_OTAR2_TSEG_POS                   _OVC_UL(28)
#define OVC_OTAR2_TSEG_LEN                   _OVC_UL(4)

/* OVC_OMASK2_OMASK (rw) */
#define OVC_OMASK2_OMASK_POS                 _OVC_UL(4)
#define OVC_OMASK2_OMASK_LEN                 _OVC_UL(7)

/* OVC_OMASK2_ONE (r) */
#define OVC_OMASK2_ONE_POS                   _OVC_UL(11)
#define OVC_OMASK2_ONE_LEN                   _OVC_UL(17)

/* OVC_RABR3_OBASE (rw) */
#define OVC_RABR3_OBASE_POS                  _OVC_UL(4)
#define OVC_RABR3_OBASE_LEN                  _OVC_UL(9)

/* OVC_RABR3_FIXVAL (r) */
#define OVC_RABR3_FIXVAL_POS                 _OVC_UL(16)
#define OVC_RABR3_FIXVAL_LEN                 _OVC_UL(12)

/* OVC_RABR3_RC0 (r) */
#define OVC_RABR3_RC0_POS                    _OVC_UL(28)
#define OVC_RABR3_RC0_LEN                    _OVC_UL(1)

/* OVC_RABR3_EXOMS (rw) */
#define OVC_RABR3_EXOMS_POS                  _OVC_UL(29)
#define OVC_RABR3_EXOMS_LEN                  _OVC_UL(1)

/* OVC_RABR3_IEMS (rw) */
#define OVC_RABR3_IEMS_POS                   _OVC_UL(30)
#define OVC_RABR3_IEMS_LEN                   _OVC_UL(1)

/* OVC_RABR3_OVEN (rwh) */
#define OVC_RABR3_OVEN_POS                   _OVC_UL(31)
#define OVC_RABR3_OVEN_LEN                   _OVC_UL(1)

/* OVC_OTAR3_TBASE (rw) */
#define OVC_OTAR3_TBASE_POS                  _OVC_UL(4)
#define OVC_OTAR3_TBASE_LEN                  _OVC_UL(24)

/* OVC_OTAR3_TSEG (rw) */
#define OVC_OTAR3_TSEG_POS                   _OVC_UL(28)
#define OVC_OTAR3_TSEG_LEN                   _OVC_UL(4)

/* OVC_OMASK3_OMASK (rw) */
#define OVC_OMASK3_OMASK_POS                 _OVC_UL(4)
#define OVC_OMASK3_OMASK_LEN                 _OVC_UL(7)

/* OVC_OMASK3_ONE (r) */
#define OVC_OMASK3_ONE_POS                   _OVC_UL(11)
#define OVC_OMASK3_ONE_LEN                   _OVC_UL(17)

/* OVC_RABR4_OBASE (rw) */
#define OVC_RABR4_OBASE_POS                  _OVC_UL(4)
#define OVC_RABR4_OBASE_LEN                  _OVC_UL(9)

/* OVC_RABR4_FIXVAL (r) */
#define OVC_RABR4_FIXVAL_POS                 _OVC_UL(16)
#define OVC_RABR4_FIXVAL_LEN                 _OVC_UL(12)

/* OVC_RABR4_RC0 (r) */
#define OVC_RABR4_RC0_POS                    _OVC_UL(28)
#define OVC_RABR4_RC0_LEN                    _OVC_UL(1)

/* OVC_RABR4_EXOMS (rw) */
#define OVC_RABR4_EXOMS_POS                  _OVC_UL(29)
#define OVC_RABR4_EXOMS_LEN                  _OVC_UL(1)

/* OVC_RABR4_IEMS (rw) */
#define OVC_RABR4_IEMS_POS                   _OVC_UL(30)
#define OVC_RABR4_IEMS_LEN                   _OVC_UL(1)

/* OVC_RABR4_OVEN (rwh) */
#define OVC_RABR4_OVEN_POS                   _OVC_UL(31)
#define OVC_RABR4_OVEN_LEN                   _OVC_UL(1)

/* OVC_OTAR4_TBASE (rw) */
#define OVC_OTAR4_TBASE_POS                  _OVC_UL(4)
#define OVC_OTAR4_TBASE_LEN                  _OVC_UL(24)

/* OVC_OTAR4_TSEG (rw) */
#define OVC_OTAR4_TSEG_POS                   _OVC_UL(28)
#define OVC_OTAR4_TSEG_LEN                   _OVC_UL(4)

/* OVC_OMASK4_OMASK (rw) */
#define OVC_OMASK4_OMASK_POS                 _OVC_UL(4)
#define OVC_OMASK4_OMASK_LEN                 _OVC_UL(7)

/* OVC_OMASK4_ONE (r) */
#define OVC_OMASK4_ONE_POS                   _OVC_UL(11)
#define OVC_OMASK4_ONE_LEN                   _OVC_UL(17)

/* OVC_RABR5_OBASE (rw) */
#define OVC_RABR5_OBASE_POS                  _OVC_UL(4)
#define OVC_RABR5_OBASE_LEN                  _OVC_UL(9)

/* OVC_RABR5_FIXVAL (r) */
#define OVC_RABR5_FIXVAL_POS                 _OVC_UL(16)
#define OVC_RABR5_FIXVAL_LEN                 _OVC_UL(12)

/* OVC_RABR5_RC0 (r) */
#define OVC_RABR5_RC0_POS                    _OVC_UL(28)
#define OVC_RABR5_RC0_LEN                    _OVC_UL(1)

/* OVC_RABR5_EXOMS (rw) */
#define OVC_RABR5_EXOMS_POS                  _OVC_UL(29)
#define OVC_RABR5_EXOMS_LEN                  _OVC_UL(1)

/* OVC_RABR5_IEMS (rw) */
#define OVC_RABR5_IEMS_POS                   _OVC_UL(30)
#define OVC_RABR5_IEMS_LEN                   _OVC_UL(1)

/* OVC_RABR5_OVEN (rwh) */
#define OVC_RABR5_OVEN_POS                   _OVC_UL(31)
#define OVC_RABR5_OVEN_LEN                   _OVC_UL(1)

/* OVC_OTAR5_TBASE (rw) */
#define OVC_OTAR5_TBASE_POS                  _OVC_UL(4)
#define OVC_OTAR5_TBASE_LEN                  _OVC_UL(24)

/* OVC_OTAR5_TSEG (rw) */
#define OVC_OTAR5_TSEG_POS                   _OVC_UL(28)
#define OVC_OTAR5_TSEG_LEN                   _OVC_UL(4)

/* OVC_OMASK5_OMASK (rw) */
#define OVC_OMASK5_OMASK_POS                 _OVC_UL(4)
#define OVC_OMASK5_OMASK_LEN                 _OVC_UL(7)

/* OVC_OMASK5_ONE (r) */
#define OVC_OMASK5_ONE_POS                   _OVC_UL(11)
#define OVC_OMASK5_ONE_LEN                   _OVC_UL(17)

/* OVC_RABR6_OBASE (rw) */
#define OVC_RABR6_OBASE_POS                  _OVC_UL(4)
#define OVC_RABR6_OBASE_LEN                  _OVC_UL(9)

/* OVC_RABR6_FIXVAL (r) */
#define OVC_RABR6_FIXVAL_POS                 _OVC_UL(16)
#define OVC_RABR6_FIXVAL_LEN                 _OVC_UL(12)

/* OVC_RABR6_RC0 (r) */
#define OVC_RABR6_RC0_POS                    _OVC_UL(28)
#define OVC_RABR6_RC0_LEN                    _OVC_UL(1)

/* OVC_RABR6_EXOMS (rw) */
#define OVC_RABR6_EXOMS_POS                  _OVC_UL(29)
#define OVC_RABR6_EXOMS_LEN                  _OVC_UL(1)

/* OVC_RABR6_IEMS (rw) */
#define OVC_RABR6_IEMS_POS                   _OVC_UL(30)
#define OVC_RABR6_IEMS_LEN                   _OVC_UL(1)

/* OVC_RABR6_OVEN (rwh) */
#define OVC_RABR6_OVEN_POS                   _OVC_UL(31)
#define OVC_RABR6_OVEN_LEN                   _OVC_UL(1)

/* OVC_OTAR6_TBASE (rw) */
#define OVC_OTAR6_TBASE_POS                  _OVC_UL(4)
#define OVC_OTAR6_TBASE_LEN                  _OVC_UL(24)

/* OVC_OTAR6_TSEG (rw) */
#define OVC_OTAR6_TSEG_POS                   _OVC_UL(28)
#define OVC_OTAR6_TSEG_LEN                   _OVC_UL(4)

/* OVC_OMASK6_OMASK (rw) */
#define OVC_OMASK6_OMASK_POS                 _OVC_UL(4)
#define OVC_OMASK6_OMASK_LEN                 _OVC_UL(7)

/* OVC_OMASK6_ONE (r) */
#define OVC_OMASK6_ONE_POS                   _OVC_UL(11)
#define OVC_OMASK6_ONE_LEN                   _OVC_UL(17)

/* OVC_RABR7_OBASE (rw) */
#define OVC_RABR7_OBASE_POS                  _OVC_UL(4)
#define OVC_RABR7_OBASE_LEN                  _OVC_UL(9)

/* OVC_RABR7_FIXVAL (r) */
#define OVC_RABR7_FIXVAL_POS                 _OVC_UL(16)
#define OVC_RABR7_FIXVAL_LEN                 _OVC_UL(12)

/* OVC_RABR7_RC0 (r) */
#define OVC_RABR7_RC0_POS                    _OVC_UL(28)
#define OVC_RABR7_RC0_LEN                    _OVC_UL(1)

/* OVC_RABR7_EXOMS (rw) */
#define OVC_RABR7_EXOMS_POS                  _OVC_UL(29)
#define OVC_RABR7_EXOMS_LEN                  _OVC_UL(1)

/* OVC_RABR7_IEMS (rw) */
#define OVC_RABR7_IEMS_POS                   _OVC_UL(30)
#define OVC_RABR7_IEMS_LEN                   _OVC_UL(1)

/* OVC_RABR7_OVEN (rwh) */
#define OVC_RABR7_OVEN_POS                   _OVC_UL(31)
#define OVC_RABR7_OVEN_LEN                   _OVC_UL(1)

/* OVC_OTAR7_TBASE (rw) */
#define OVC_OTAR7_TBASE_POS                  _OVC_UL(4)
#define OVC_OTAR7_TBASE_LEN                  _OVC_UL(24)

/* OVC_OTAR7_TSEG (rw) */
#define OVC_OTAR7_TSEG_POS                   _OVC_UL(28)
#define OVC_OTAR7_TSEG_LEN                   _OVC_UL(4)

/* OVC_OMASK7_OMASK (rw) */
#define OVC_OMASK7_OMASK_POS                 _OVC_UL(4)
#define OVC_OMASK7_OMASK_LEN                 _OVC_UL(7)

/* OVC_OMASK7_ONE (r) */
#define OVC_OMASK7_ONE_POS                   _OVC_UL(11)
#define OVC_OMASK7_ONE_LEN                   _OVC_UL(17)

/* OVC_RABR8_OBASE (rw) */
#define OVC_RABR8_OBASE_POS                  _OVC_UL(4)
#define OVC_RABR8_OBASE_LEN                  _OVC_UL(9)

/* OVC_RABR8_FIXVAL (r) */
#define OVC_RABR8_FIXVAL_POS                 _OVC_UL(16)
#define OVC_RABR8_FIXVAL_LEN                 _OVC_UL(12)

/* OVC_RABR8_RC0 (r) */
#define OVC_RABR8_RC0_POS                    _OVC_UL(28)
#define OVC_RABR8_RC0_LEN                    _OVC_UL(1)

/* OVC_RABR8_EXOMS (rw) */
#define OVC_RABR8_EXOMS_POS                  _OVC_UL(29)
#define OVC_RABR8_EXOMS_LEN                  _OVC_UL(1)

/* OVC_RABR8_IEMS (rw) */
#define OVC_RABR8_IEMS_POS                   _OVC_UL(30)
#define OVC_RABR8_IEMS_LEN                   _OVC_UL(1)

/* OVC_RABR8_OVEN (rwh) */
#define OVC_RABR8_OVEN_POS                   _OVC_UL(31)
#define OVC_RABR8_OVEN_LEN                   _OVC_UL(1)

/* OVC_OTAR8_TBASE (rw) */
#define OVC_OTAR8_TBASE_POS                  _OVC_UL(4)
#define OVC_OTAR8_TBASE_LEN                  _OVC_UL(24)

/* OVC_OTAR8_TSEG (rw) */
#define OVC_OTAR8_TSEG_POS                   _OVC_UL(28)
#define OVC_OTAR8_TSEG_LEN                   _OVC_UL(4)

/* OVC_OMASK8_OMASK (rw) */
#define OVC_OMASK8_OMASK_POS                 _OVC_UL(4)
#define OVC_OMASK8_OMASK_LEN                 _OVC_UL(7)

/* OVC_OMASK8_ONE (r) */
#define OVC_OMASK8_ONE_POS                   _OVC_UL(11)
#define OVC_OMASK8_ONE_LEN                   _OVC_UL(17)

/* OVC_RABR9_OBASE (rw) */
#define OVC_RABR9_OBASE_POS                  _OVC_UL(4)
#define OVC_RABR9_OBASE_LEN                  _OVC_UL(9)

/* OVC_RABR9_FIXVAL (r) */
#define OVC_RABR9_FIXVAL_POS                 _OVC_UL(16)
#define OVC_RABR9_FIXVAL_LEN                 _OVC_UL(12)

/* OVC_RABR9_RC0 (r) */
#define OVC_RABR9_RC0_POS                    _OVC_UL(28)
#define OVC_RABR9_RC0_LEN                    _OVC_UL(1)

/* OVC_RABR9_EXOMS (rw) */
#define OVC_RABR9_EXOMS_POS                  _OVC_UL(29)
#define OVC_RABR9_EXOMS_LEN                  _OVC_UL(1)

/* OVC_RABR9_IEMS (rw) */
#define OVC_RABR9_IEMS_POS                   _OVC_UL(30)
#define OVC_RABR9_IEMS_LEN                   _OVC_UL(1)

/* OVC_RABR9_OVEN (rwh) */
#define OVC_RABR9_OVEN_POS                   _OVC_UL(31)
#define OVC_RABR9_OVEN_LEN                   _OVC_UL(1)

/* OVC_OTAR9_TBASE (rw) */
#define OVC_OTAR9_TBASE_POS                  _OVC_UL(4)
#define OVC_OTAR9_TBASE_LEN                  _OVC_UL(24)

/* OVC_OTAR9_TSEG (rw) */
#define OVC_OTAR9_TSEG_POS                   _OVC_UL(28)
#define OVC_OTAR9_TSEG_LEN                   _OVC_UL(4)

/* OVC_OMASK9_OMASK (rw) */
#define OVC_OMASK9_OMASK_POS                 _OVC_UL(4)
#define OVC_OMASK9_OMASK_LEN                 _OVC_UL(7)

/* OVC_OMASK9_ONE (r) */
#define OVC_OMASK9_ONE_POS                   _OVC_UL(11)
#define OVC_OMASK9_ONE_LEN                   _OVC_UL(17)

/* OVC_RABR10_OBASE (rw) */
#define OVC_RABR10_OBASE_POS                 _OVC_UL(4)
#define OVC_RABR10_OBASE_LEN                 _OVC_UL(9)

/* OVC_RABR10_FIXVAL (r) */
#define OVC_RABR10_FIXVAL_POS                _OVC_UL(16)
#define OVC_RABR10_FIXVAL_LEN                _OVC_UL(12)

/* OVC_RABR10_RC0 (r) */
#define OVC_RABR10_RC0_POS                   _OVC_UL(28)
#define OVC_RABR10_RC0_LEN                   _OVC_UL(1)

/* OVC_RABR10_EXOMS (rw) */
#define OVC_RABR10_EXOMS_POS                 _OVC_UL(29)
#define OVC_RABR10_EXOMS_LEN                 _OVC_UL(1)

/* OVC_RABR10_IEMS (rw) */
#define OVC_RABR10_IEMS_POS                  _OVC_UL(30)
#define OVC_RABR10_IEMS_LEN                  _OVC_UL(1)

/* OVC_RABR10_OVEN (rwh) */
#define OVC_RABR10_OVEN_POS                  _OVC_UL(31)
#define OVC_RABR10_OVEN_LEN                  _OVC_UL(1)

/* OVC_OTAR10_TBASE (rw) */
#define OVC_OTAR10_TBASE_POS                 _OVC_UL(4)
#define OVC_OTAR10_TBASE_LEN                 _OVC_UL(24)

/* OVC_OTAR10_TSEG (rw) */
#define OVC_OTAR10_TSEG_POS                  _OVC_UL(28)
#define OVC_OTAR10_TSEG_LEN                  _OVC_UL(4)

/* OVC_OMASK10_OMASK (rw) */
#define OVC_OMASK10_OMASK_POS                _OVC_UL(4)
#define OVC_OMASK10_OMASK_LEN                _OVC_UL(7)

/* OVC_OMASK10_ONE (r) */
#define OVC_OMASK10_ONE_POS                  _OVC_UL(11)
#define OVC_OMASK10_ONE_LEN                  _OVC_UL(17)

/* OVC_RABR11_OBASE (rw) */
#define OVC_RABR11_OBASE_POS                 _OVC_UL(4)
#define OVC_RABR11_OBASE_LEN                 _OVC_UL(9)

/* OVC_RABR11_FIXVAL (r) */
#define OVC_RABR11_FIXVAL_POS                _OVC_UL(16)
#define OVC_RABR11_FIXVAL_LEN                _OVC_UL(12)

/* OVC_RABR11_RC0 (r) */
#define OVC_RABR11_RC0_POS                   _OVC_UL(28)
#define OVC_RABR11_RC0_LEN                   _OVC_UL(1)

/* OVC_RABR11_EXOMS (rw) */
#define OVC_RABR11_EXOMS_POS                 _OVC_UL(29)
#define OVC_RABR11_EXOMS_LEN                 _OVC_UL(1)

/* OVC_RABR11_IEMS (rw) */
#define OVC_RABR11_IEMS_POS                  _OVC_UL(30)
#define OVC_RABR11_IEMS_LEN                  _OVC_UL(1)

/* OVC_RABR11_OVEN (rwh) */
#define OVC_RABR11_OVEN_POS                  _OVC_UL(31)
#define OVC_RABR11_OVEN_LEN                  _OVC_UL(1)

/* OVC_OTAR11_TBASE (rw) */
#define OVC_OTAR11_TBASE_POS                 _OVC_UL(4)
#define OVC_OTAR11_TBASE_LEN                 _OVC_UL(24)

/* OVC_OTAR11_TSEG (rw) */
#define OVC_OTAR11_TSEG_POS                  _OVC_UL(28)
#define OVC_OTAR11_TSEG_LEN                  _OVC_UL(4)

/* OVC_OMASK11_OMASK (rw) */
#define OVC_OMASK11_OMASK_POS                _OVC_UL(4)
#define OVC_OMASK11_OMASK_LEN                _OVC_UL(7)

/* OVC_OMASK11_ONE (r) */
#define OVC_OMASK11_ONE_POS                  _OVC_UL(11)
#define OVC_OMASK11_ONE_LEN                  _OVC_UL(17)

/* OVC_RABR12_OBASE (rw) */
#define OVC_RABR12_OBASE_POS                 _OVC_UL(4)
#define OVC_RABR12_OBASE_LEN                 _OVC_UL(9)

/* OVC_RABR12_FIXVAL (r) */
#define OVC_RABR12_FIXVAL_POS                _OVC_UL(16)
#define OVC_RABR12_FIXVAL_LEN                _OVC_UL(12)

/* OVC_RABR12_RC0 (r) */
#define OVC_RABR12_RC0_POS                   _OVC_UL(28)
#define OVC_RABR12_RC0_LEN                   _OVC_UL(1)

/* OVC_RABR12_EXOMS (rw) */
#define OVC_RABR12_EXOMS_POS                 _OVC_UL(29)
#define OVC_RABR12_EXOMS_LEN                 _OVC_UL(1)

/* OVC_RABR12_IEMS (rw) */
#define OVC_RABR12_IEMS_POS                  _OVC_UL(30)
#define OVC_RABR12_IEMS_LEN                  _OVC_UL(1)

/* OVC_RABR12_OVEN (rwh) */
#define OVC_RABR12_OVEN_POS                  _OVC_UL(31)
#define OVC_RABR12_OVEN_LEN                  _OVC_UL(1)

/* OVC_OTAR12_TBASE (rw) */
#define OVC_OTAR12_TBASE_POS                 _OVC_UL(4)
#define OVC_OTAR12_TBASE_LEN                 _OVC_UL(24)

/* OVC_OTAR12_TSEG (rw) */
#define OVC_OTAR12_TSEG_POS                  _OVC_UL(28)
#define OVC_OTAR12_TSEG_LEN                  _OVC_UL(4)

/* OVC_OMASK12_OMASK (rw) */
#define OVC_OMASK12_OMASK_POS                _OVC_UL(4)
#define OVC_OMASK12_OMASK_LEN                _OVC_UL(7)

/* OVC_OMASK12_ONE (r) */
#define OVC_OMASK12_ONE_POS                  _OVC_UL(11)
#define OVC_OMASK12_ONE_LEN                  _OVC_UL(17)

/* OVC_RABR13_OBASE (rw) */
#define OVC_RABR13_OBASE_POS                 _OVC_UL(4)
#define OVC_RABR13_OBASE_LEN                 _OVC_UL(9)

/* OVC_RABR13_FIXVAL (r) */
#define OVC_RABR13_FIXVAL_POS                _OVC_UL(16)
#define OVC_RABR13_FIXVAL_LEN                _OVC_UL(12)

/* OVC_RABR13_RC0 (r) */
#define OVC_RABR13_RC0_POS                   _OVC_UL(28)
#define OVC_RABR13_RC0_LEN                   _OVC_UL(1)

/* OVC_RABR13_EXOMS (rw) */
#define OVC_RABR13_EXOMS_POS                 _OVC_UL(29)
#define OVC_RABR13_EXOMS_LEN                 _OVC_UL(1)

/* OVC_RABR13_IEMS (rw) */
#define OVC_RABR13_IEMS_POS                  _OVC_UL(30)
#define OVC_RABR13_IEMS_LEN                  _OVC_UL(1)

/* OVC_RABR13_OVEN (rwh) */
#define OVC_RABR13_OVEN_POS                  _OVC_UL(31)
#define OVC_RABR13_OVEN_LEN                  _OVC_UL(1)

/* OVC_OTAR13_TBASE (rw) */
#define OVC_OTAR13_TBASE_POS                 _OVC_UL(4)
#define OVC_OTAR13_TBASE_LEN                 _OVC_UL(24)

/* OVC_OTAR13_TSEG (rw) */
#define OVC_OTAR13_TSEG_POS                  _OVC_UL(28)
#define OVC_OTAR13_TSEG_LEN                  _OVC_UL(4)

/* OVC_OMASK13_OMASK (rw) */
#define OVC_OMASK13_OMASK_POS                _OVC_UL(4)
#define OVC_OMASK13_OMASK_LEN                _OVC_UL(7)

/* OVC_OMASK13_ONE (r) */
#define OVC_OMASK13_ONE_POS                  _OVC_UL(11)
#define OVC_OMASK13_ONE_LEN                  _OVC_UL(17)

/* OVC_RABR14_OBASE (rw) */
#define OVC_RABR14_OBASE_POS                 _OVC_UL(4)
#define OVC_RABR14_OBASE_LEN                 _OVC_UL(9)

/* OVC_RABR14_FIXVAL (r) */
#define OVC_RABR14_FIXVAL_POS                _OVC_UL(16)
#define OVC_RABR14_FIXVAL_LEN                _OVC_UL(12)

/* OVC_RABR14_RC0 (r) */
#define OVC_RABR14_RC0_POS                   _OVC_UL(28)
#define OVC_RABR14_RC0_LEN                   _OVC_UL(1)

/* OVC_RABR14_EXOMS (rw) */
#define OVC_RABR14_EXOMS_POS                 _OVC_UL(29)
#define OVC_RABR14_EXOMS_LEN                 _OVC_UL(1)

/* OVC_RABR14_IEMS (rw) */
#define OVC_RABR14_IEMS_POS                  _OVC_UL(30)
#define OVC_RABR14_IEMS_LEN                  _OVC_UL(1)

/* OVC_RABR14_OVEN (rwh) */
#define OVC_RABR14_OVEN_POS                  _OVC_UL(31)
#define OVC_RABR14_OVEN_LEN                  _OVC_UL(1)

/* OVC_OTAR14_TBASE (rw) */
#define OVC_OTAR14_TBASE_POS                 _OVC_UL(4)
#define OVC_OTAR14_TBASE_LEN                 _OVC_UL(24)

/* OVC_OTAR14_TSEG (rw) */
#define OVC_OTAR14_TSEG_POS                  _OVC_UL(28)
#define OVC_OTAR14_TSEG_LEN                  _OVC_UL(4)

/* OVC_OMASK14_OMASK (rw) */
#define OVC_OMASK14_OMASK_POS                _OVC_UL(4)
#define OVC_OMASK14_OMASK_LEN                _OVC_UL(7)

/* OVC_OMASK14_ONE (r) */
#define OVC_OMASK14_ONE_POS                  _OVC_UL(11)
#define OVC_OMASK14_ONE_LEN                  _OVC_UL(17)

/* OVC_RABR15_OBASE (rw) */
#define OVC_RABR15_OBASE_POS                 _OVC_UL(4)
#define OVC_RABR15_OBASE_LEN                 _OVC_UL(9)

/* OVC_RABR15_FIXVAL (r) */
#define OVC_RABR15_FIXVAL_POS                _OVC_UL(16)
#define OVC_RABR15_FIXVAL_LEN                _OVC_UL(12)

/* OVC_RABR15_RC0 (r) */
#define OVC_RABR15_RC0_POS                   _OVC_UL(28)
#define OVC_RABR15_RC0_LEN                   _OVC_UL(1)

/* OVC_RABR15_EXOMS (rw) */
#define OVC_RABR15_EXOMS_POS                 _OVC_UL(29)
#define OVC_RABR15_EXOMS_LEN                 _OVC_UL(1)

/* OVC_RABR15_IEMS (rw) */
#define OVC_RABR15_IEMS_POS                  _OVC_UL(30)
#define OVC_RABR15_IEMS_LEN                  _OVC_UL(1)

/* OVC_RABR15_OVEN (rwh) */
#define OVC_RABR15_OVEN_POS                  _OVC_UL(31)
#define OVC_RABR15_OVEN_LEN                  _OVC_UL(1)

/* OVC_OTAR15_TBASE (rw) */
#define OVC_OTAR15_TBASE_POS                 _OVC_UL(4)
#define OVC_OTAR15_TBASE_LEN                 _OVC_UL(24)

/* OVC_OTAR15_TSEG (rw) */
#define OVC_OTAR15_TSEG_POS                  _OVC_UL(28)
#define OVC_OTAR15_TSEG_LEN                  _OVC_UL(4)

/* OVC_OMASK15_OMASK (rw) */
#define OVC_OMASK15_OMASK_POS                _OVC_UL(4)
#define OVC_OMASK15_OMASK_LEN                _OVC_UL(7)

/* OVC_OMASK15_ONE (r) */
#define OVC_OMASK15_ONE_POS                  _OVC_UL(11)
#define OVC_OMASK15_ONE_LEN                  _OVC_UL(17)

/* OVC_OCON_SHOVEN0 (rw) */
#define OVC_OCON_SHOVEN0_POS                 _OVC_UL(0)
#define OVC_OCON_SHOVEN0_LEN                 _OVC_UL(1)

/* OVC_OCON_SHOVEN1 (rw) */
#define OVC_OCON_SHOVEN1_POS                 _OVC_UL(1)
#define OVC_OCON_SHOVEN1_LEN                 _OVC_UL(1)

/* OVC_OCON_SHOVEN2 (rw) */
#define OVC_OCON_SHOVEN2_POS                 _OVC_UL(2)
#define OVC_OCON_SHOVEN2_LEN                 _OVC_UL(1)

/* OVC_OCON_SHOVEN3 (rw) */
#define OVC_OCON_SHOVEN3_POS                 _OVC_UL(3)
#define OVC_OCON_SHOVEN3_LEN                 _OVC_UL(1)

/* OVC_OCON_SHOVEN4 (rw) */
#define OVC_OCON_SHOVEN4_POS                 _OVC_UL(4)
#define OVC_OCON_SHOVEN4_LEN                 _OVC_UL(1)

/* OVC_OCON_SHOVEN5 (rw) */
#define OVC_OCON_SHOVEN5_POS                 _OVC_UL(5)
#define OVC_OCON_SHOVEN5_LEN                 _OVC_UL(1)

/* OVC_OCON_SHOVEN6 (rw) */
#define OVC_OCON_SHOVEN6_POS                 _OVC_UL(6)
#define OVC_OCON_SHOVEN6_LEN                 _OVC_UL(1)

/* OVC_OCON_SHOVEN7 (rw) */
#define OVC_OCON_SHOVEN7_POS                 _OVC_UL(7)
#define OVC_OCON_SHOVEN7_LEN                 _OVC_UL(1)

/* OVC_OCON_SHOVEN8 (rw) */
#define OVC_OCON_SHOVEN8_POS                 _OVC_UL(8)
#define OVC_OCON_SHOVEN8_LEN                 _OVC_UL(1)

/* OVC_OCON_SHOVEN9 (rw) */
#define OVC_OCON_SHOVEN9_POS                 _OVC_UL(9)
#define OVC_OCON_SHOVEN9_LEN                 _OVC_UL(1)

/* OVC_OCON_SHOVEN10 (rw) */
#define OVC_OCON_SHOVEN10_POS                _OVC_UL(10)
#define OVC_OCON_SHOVEN10_LEN                _OVC_UL(1)

/* OVC_OCON_SHOVEN11 (rw) */
#define OVC_OCON_SHOVEN11_POS                _OVC_UL(11)
#define OVC_OCON_SHOVEN11_LEN                _OVC_UL(1)

/* OVC_OCON_SHOVEN12 (rw) */
#define OVC_OCON_SHOVEN12_POS                _OVC_UL(12)
#define OVC_OCON_SHOVEN12_LEN                _OVC_UL(1)

/* OVC_OCON_SHOVEN13 (rw) */
#define OVC_OCON_SHOVEN13_POS                _OVC_UL(13)
#define OVC_OCON_SHOVEN13_LEN                _OVC_UL(1)

/* OVC_OCON_SHOVEN14 (rw) */
#define OVC_OCON_SHOVEN14_POS                _OVC_UL(14)
#define OVC_OCON_SHOVEN14_LEN                _OVC_UL(1)

/* OVC_OCON_SHOVEN15 (rw) */
#define OVC_OCON_SHOVEN15_POS                _OVC_UL(15)
#define OVC_OCON_SHOVEN15_LEN                _OVC_UL(1)

/* OVC_OCON_OVSTRT (w) */
#define OVC_OCON_OVSTRT_POS                  _OVC_UL(16)
#define OVC_OCON_OVSTRT_LEN                  _OVC_UL(1)

/* OVC_OCON_OVSTP (w) */
#define OVC_OCON_OVSTP_POS                   _OVC_UL(17)
#define OVC_OCON_OVSTP_LEN                   _OVC_UL(1)

/* OVC_OCON_DCINVAL (w) */
#define OVC_OCON_DCINVAL_POS                 _OVC_UL(18)
#define OVC_OCON_DCINVAL_LEN                 _OVC_UL(1)

/* OVC_OCON_OVCONF (rw) */
#define OVC_OCON_OVCONF_POS                  _OVC_UL(24)
#define OVC_OCON_OVCONF_LEN                  _OVC_UL(1)

/* OVC_OCON_POVCONF (w) */
#define OVC_OCON_POVCONF_POS                 _OVC_UL(25)
#define OVC_OCON_POVCONF_LEN                 _OVC_UL(1)

#endif
