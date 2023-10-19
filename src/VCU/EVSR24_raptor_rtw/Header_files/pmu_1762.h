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
 * $Filename__:pmu_1762.h$ 
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
 * $Name______:pmu_1762$ 
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
 *      File name: pmu_1762.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PMU_1762_H
#define _PMU_1762_H

/* add ul suffix if file is used in C context */
#define _PMU_UL(x) x##UL

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module PMU on TC1762
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* sub-structure for overlay registers */
typedef struct {
    volatile uint32 RABR;                // Redirect Address Base Registers
    volatile uint32 OTAR;                // Overlay Target Address Registers
    volatile uint32 OMASK;               // Overlay Mask Registers
} PMU_OvrReg_t;

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF0000500...0xF0000507] : reserved space
    volatile uint32 ID;                  // [0xF8000508] : PMU Module Identification Register (LL)
    volatile uint32 RESERVED1[5];        // [0xF000050C...0xF000051F] : reserved space
    PMU_OvrReg_t    OVR[8];              // [0xF8000520...0xF800057F]: PMU Overlay Registers
    volatile uint32 RESERVED2[28];       // [0xF0000580...0xF00005EF] : reserved space
    volatile uint32 CSCACTL;             // [0xF80005F0] : CPU SRAM Control Array Control Register
    volatile uint32 RESERVED3[1];        // [0xF00005F4...0xF00005F7] : reserved space
    volatile uint32 CSCADIN;             // [0xF80005F8] : CPU SRAM Control Array Data In Register
    volatile uint32 CSCADOUT;            // [0xF80005FC] : CPU SRAM Control Array Data Out Register
} PMU_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern PMU_RegMap_t PMU;

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

/* PMU_CSCACTL_BCCH0 (rwh) */
#define PMU_CSCACTL_BCCH0_POS          _PMU_UL(16)
#define PMU_CSCACTL_BCCH0_LEN          _PMU_UL(8)

/* PMU_CSCACTL_BCCH1 (rwh) */
#define PMU_CSCACTL_BCCH1_POS          _PMU_UL(24)
#define PMU_CSCACTL_BCCH1_LEN          _PMU_UL(8)

/* PMU_CSCACTL_CA0EN (rw) */
#define PMU_CSCACTL_CA0EN_POS          _PMU_UL(0)
#define PMU_CSCACTL_CA0EN_LEN          _PMU_UL(1)

/* PMU_CSCACTL_CA1EN (rw) */
#define PMU_CSCACTL_CA1EN_POS          _PMU_UL(1)
#define PMU_CSCACTL_CA1EN_LEN          _PMU_UL(1)

/* PMU_CSCADIN_DICH0 (w) */
#define PMU_CSCADIN_DICH0_POS          _PMU_UL(0)
#define PMU_CSCADIN_DICH0_LEN          _PMU_UL(16)

/* PMU_CSCADIN_DICH1 (w) */
#define PMU_CSCADIN_DICH1_POS          _PMU_UL(16)
#define PMU_CSCADIN_DICH1_LEN          _PMU_UL(16)

/* PMU_CSCADOUT_DOCH0 (r) */
#define PMU_CSCADOUT_DOCH0_POS         _PMU_UL(0)
#define PMU_CSCADOUT_DOCH0_LEN         _PMU_UL(16)

/* PMU_CSCADOUT_DOCH1 (r) */
#define PMU_CSCADOUT_DOCH1_POS         _PMU_UL(16)
#define PMU_CSCADOUT_DOCH1_LEN         _PMU_UL(16)

/* PMU_ID_Mod_Number (r) */
#define PMU_ID_Mod_Number_POS          _PMU_UL(16)
#define PMU_ID_Mod_Number_LEN          _PMU_UL(16)

/* PMU_ID_Mod_Rev (r) */
#define PMU_ID_Mod_Rev_POS             _PMU_UL(0)
#define PMU_ID_Mod_Rev_LEN             _PMU_UL(8)

/* PMU_ID_Mod_Type (r) */
#define PMU_ID_Mod_Type_POS            _PMU_UL(8)
#define PMU_ID_Mod_Type_LEN            _PMU_UL(8)

/* PMU_OMASK0_OMASK (rw) */
#define PMU_OMASK0_OMASK_POS           _PMU_UL(1)
#define PMU_OMASK0_OMASK_LEN           _PMU_UL(8)

/* PMU_OMASK0_ONE (r) */
#define PMU_OMASK0_ONE_POS             _PMU_UL(9)
#define PMU_OMASK0_ONE_LEN             _PMU_UL(19)

/* PMU_OMASK1_OMASK (rw) */
#define PMU_OMASK1_OMASK_POS           _PMU_UL(1)
#define PMU_OMASK1_OMASK_LEN           _PMU_UL(8)

/* PMU_OMASK1_ONE (r) */
#define PMU_OMASK1_ONE_POS             _PMU_UL(9)
#define PMU_OMASK1_ONE_LEN             _PMU_UL(19)

/* PMU_OMASK2_OMASK (rw) */
#define PMU_OMASK2_OMASK_POS           _PMU_UL(1)
#define PMU_OMASK2_OMASK_LEN           _PMU_UL(8)

/* PMU_OMASK2_ONE (r) */
#define PMU_OMASK2_ONE_POS             _PMU_UL(9)
#define PMU_OMASK2_ONE_LEN             _PMU_UL(19)

/* PMU_OMASK3_OMASK (rw) */
#define PMU_OMASK3_OMASK_POS           _PMU_UL(1)
#define PMU_OMASK3_OMASK_LEN           _PMU_UL(8)

/* PMU_OMASK3_ONE (r) */
#define PMU_OMASK3_ONE_POS             _PMU_UL(9)
#define PMU_OMASK3_ONE_LEN             _PMU_UL(19)

/* PMU_OMASK4_OMASK (rw) */
#define PMU_OMASK4_OMASK_POS           _PMU_UL(1)
#define PMU_OMASK4_OMASK_LEN           _PMU_UL(8)

/* PMU_OMASK4_ONE (r) */
#define PMU_OMASK4_ONE_POS             _PMU_UL(9)
#define PMU_OMASK4_ONE_LEN             _PMU_UL(19)

/* PMU_OMASK5_OMASK (rw) */
#define PMU_OMASK5_OMASK_POS           _PMU_UL(1)
#define PMU_OMASK5_OMASK_LEN           _PMU_UL(8)

/* PMU_OMASK5_ONE (r) */
#define PMU_OMASK5_ONE_POS             _PMU_UL(9)
#define PMU_OMASK5_ONE_LEN             _PMU_UL(19)

/* PMU_OMASK6_OMASK (rw) */
#define PMU_OMASK6_OMASK_POS           _PMU_UL(1)
#define PMU_OMASK6_OMASK_LEN           _PMU_UL(8)

/* PMU_OMASK6_ONE (r) */
#define PMU_OMASK6_ONE_POS             _PMU_UL(9)
#define PMU_OMASK6_ONE_LEN             _PMU_UL(19)

/* PMU_OMASK7_OMASK (rw) */
#define PMU_OMASK7_OMASK_POS           _PMU_UL(1)
#define PMU_OMASK7_OMASK_LEN           _PMU_UL(8)

/* PMU_OMASK7_ONE (r) */
#define PMU_OMASK7_ONE_POS             _PMU_UL(9)
#define PMU_OMASK7_ONE_LEN             _PMU_UL(19)

/* PMU_OTAR0_TBASE (rw) */
#define PMU_OTAR0_TBASE_POS            _PMU_UL(1)
#define PMU_OTAR0_TBASE_LEN            _PMU_UL(27)

/* PMU_OTAR0_TSEG (rw) */
#define PMU_OTAR0_TSEG_POS             _PMU_UL(28)
#define PMU_OTAR0_TSEG_LEN             _PMU_UL(4)

/* PMU_OTAR1_TBASE (rw) */
#define PMU_OTAR1_TBASE_POS            _PMU_UL(1)
#define PMU_OTAR1_TBASE_LEN            _PMU_UL(27)

/* PMU_OTAR1_TSEG (rw) */
#define PMU_OTAR1_TSEG_POS             _PMU_UL(28)
#define PMU_OTAR1_TSEG_LEN             _PMU_UL(4)

/* PMU_OTAR2_TBASE (rw) */
#define PMU_OTAR2_TBASE_POS            _PMU_UL(1)
#define PMU_OTAR2_TBASE_LEN            _PMU_UL(27)

/* PMU_OTAR2_TSEG (rw) */
#define PMU_OTAR2_TSEG_POS             _PMU_UL(28)
#define PMU_OTAR2_TSEG_LEN             _PMU_UL(4)

/* PMU_OTAR3_TBASE (rw) */
#define PMU_OTAR3_TBASE_POS            _PMU_UL(1)
#define PMU_OTAR3_TBASE_LEN            _PMU_UL(27)

/* PMU_OTAR3_TSEG (rw) */
#define PMU_OTAR3_TSEG_POS             _PMU_UL(28)
#define PMU_OTAR3_TSEG_LEN             _PMU_UL(4)

/* PMU_OTAR4_TBASE (rw) */
#define PMU_OTAR4_TBASE_POS            _PMU_UL(1)
#define PMU_OTAR4_TBASE_LEN            _PMU_UL(27)

/* PMU_OTAR4_TSEG (rw) */
#define PMU_OTAR4_TSEG_POS             _PMU_UL(28)
#define PMU_OTAR4_TSEG_LEN             _PMU_UL(4)

/* PMU_OTAR5_TBASE (rw) */
#define PMU_OTAR5_TBASE_POS            _PMU_UL(1)
#define PMU_OTAR5_TBASE_LEN            _PMU_UL(27)

/* PMU_OTAR5_TSEG (rw) */
#define PMU_OTAR5_TSEG_POS             _PMU_UL(28)
#define PMU_OTAR5_TSEG_LEN             _PMU_UL(4)

/* PMU_OTAR6_TBASE (rw) */
#define PMU_OTAR6_TBASE_POS            _PMU_UL(1)
#define PMU_OTAR6_TBASE_LEN            _PMU_UL(27)

/* PMU_OTAR6_TSEG (rw) */
#define PMU_OTAR6_TSEG_POS             _PMU_UL(28)
#define PMU_OTAR6_TSEG_LEN             _PMU_UL(4)

/* PMU_OTAR7_TBASE (rw) */
#define PMU_OTAR7_TBASE_POS            _PMU_UL(1)
#define PMU_OTAR7_TBASE_LEN            _PMU_UL(27)

/* PMU_OTAR7_TSEG (rw) */
#define PMU_OTAR7_TSEG_POS             _PMU_UL(28)
#define PMU_OTAR7_TSEG_LEN             _PMU_UL(4)

/* PMU_RABR0_IEMS (r) */
#define PMU_RABR0_IEMS_POS             _PMU_UL(30)
#define PMU_RABR0_IEMS_LEN             _PMU_UL(1)

/* PMU_RABR0_OBASE (rw) */
#define PMU_RABR0_OBASE_POS            _PMU_UL(1)
#define PMU_RABR0_OBASE_LEN            _PMU_UL(12)

/* PMU_RABR0_OVEN (rw) */
#define PMU_RABR0_OVEN_POS             _PMU_UL(31)
#define PMU_RABR0_OVEN_LEN             _PMU_UL(1)

/* PMU_RABR0_RC0 (r) */
#define PMU_RABR0_RC0_POS              _PMU_UL(28)
#define PMU_RABR0_RC0_LEN              _PMU_UL(1)

/* PMU_RABR0_RC1 (r) */
#define PMU_RABR0_RC1_POS              _PMU_UL(29)
#define PMU_RABR0_RC1_LEN              _PMU_UL(1)

/* PMU_RABR1_IEMS (r) */
#define PMU_RABR1_IEMS_POS             _PMU_UL(30)
#define PMU_RABR1_IEMS_LEN             _PMU_UL(1)

/* PMU_RABR1_OBASE (rw) */
#define PMU_RABR1_OBASE_POS            _PMU_UL(1)
#define PMU_RABR1_OBASE_LEN            _PMU_UL(12)

/* PMU_RABR1_OVEN (rw) */
#define PMU_RABR1_OVEN_POS             _PMU_UL(31)
#define PMU_RABR1_OVEN_LEN             _PMU_UL(1)

/* PMU_RABR1_RC0 (r) */
#define PMU_RABR1_RC0_POS              _PMU_UL(28)
#define PMU_RABR1_RC0_LEN              _PMU_UL(1)

/* PMU_RABR1_RC1 (r) */
#define PMU_RABR1_RC1_POS              _PMU_UL(29)
#define PMU_RABR1_RC1_LEN              _PMU_UL(1)

/* PMU_RABR2_IEMS (r) */
#define PMU_RABR2_IEMS_POS             _PMU_UL(30)
#define PMU_RABR2_IEMS_LEN             _PMU_UL(1)

/* PMU_RABR2_OBASE (rw) */
#define PMU_RABR2_OBASE_POS            _PMU_UL(1)
#define PMU_RABR2_OBASE_LEN            _PMU_UL(12)

/* PMU_RABR2_OVEN (rw) */
#define PMU_RABR2_OVEN_POS             _PMU_UL(31)
#define PMU_RABR2_OVEN_LEN             _PMU_UL(1)

/* PMU_RABR2_RC0 (r) */
#define PMU_RABR2_RC0_POS              _PMU_UL(28)
#define PMU_RABR2_RC0_LEN              _PMU_UL(1)

/* PMU_RABR2_RC1 (r) */
#define PMU_RABR2_RC1_POS              _PMU_UL(29)
#define PMU_RABR2_RC1_LEN              _PMU_UL(1)

/* PMU_RABR3_IEMS (r) */
#define PMU_RABR3_IEMS_POS             _PMU_UL(30)
#define PMU_RABR3_IEMS_LEN             _PMU_UL(1)

/* PMU_RABR3_OBASE (rw) */
#define PMU_RABR3_OBASE_POS            _PMU_UL(1)
#define PMU_RABR3_OBASE_LEN            _PMU_UL(12)

/* PMU_RABR3_OVEN (rw) */
#define PMU_RABR3_OVEN_POS             _PMU_UL(31)
#define PMU_RABR3_OVEN_LEN             _PMU_UL(1)

/* PMU_RABR3_RC0 (r) */
#define PMU_RABR3_RC0_POS              _PMU_UL(28)
#define PMU_RABR3_RC0_LEN              _PMU_UL(1)

/* PMU_RABR3_RC1 (r) */
#define PMU_RABR3_RC1_POS              _PMU_UL(29)
#define PMU_RABR3_RC1_LEN              _PMU_UL(1)

/* PMU_RABR4_IEMS (r) */
#define PMU_RABR4_IEMS_POS             _PMU_UL(30)
#define PMU_RABR4_IEMS_LEN             _PMU_UL(1)

/* PMU_RABR4_OBASE (rw) */
#define PMU_RABR4_OBASE_POS            _PMU_UL(1)
#define PMU_RABR4_OBASE_LEN            _PMU_UL(12)

/* PMU_RABR4_OVEN (rw) */
#define PMU_RABR4_OVEN_POS             _PMU_UL(31)
#define PMU_RABR4_OVEN_LEN             _PMU_UL(1)

/* PMU_RABR4_RC0 (r) */
#define PMU_RABR4_RC0_POS              _PMU_UL(28)
#define PMU_RABR4_RC0_LEN              _PMU_UL(1)

/* PMU_RABR4_RC1 (r) */
#define PMU_RABR4_RC1_POS              _PMU_UL(29)
#define PMU_RABR4_RC1_LEN              _PMU_UL(1)

/* PMU_RABR5_IEMS (r) */
#define PMU_RABR5_IEMS_POS             _PMU_UL(30)
#define PMU_RABR5_IEMS_LEN             _PMU_UL(1)

/* PMU_RABR5_OBASE (rw) */
#define PMU_RABR5_OBASE_POS            _PMU_UL(1)
#define PMU_RABR5_OBASE_LEN            _PMU_UL(12)

/* PMU_RABR5_OVEN (rw) */
#define PMU_RABR5_OVEN_POS             _PMU_UL(31)
#define PMU_RABR5_OVEN_LEN             _PMU_UL(1)

/* PMU_RABR5_RC0 (r) */
#define PMU_RABR5_RC0_POS              _PMU_UL(28)
#define PMU_RABR5_RC0_LEN              _PMU_UL(1)

/* PMU_RABR5_RC1 (r) */
#define PMU_RABR5_RC1_POS              _PMU_UL(29)
#define PMU_RABR5_RC1_LEN              _PMU_UL(1)

/* PMU_RABR6_IEMS (r) */
#define PMU_RABR6_IEMS_POS             _PMU_UL(30)
#define PMU_RABR6_IEMS_LEN             _PMU_UL(1)

/* PMU_RABR6_OBASE (rw) */
#define PMU_RABR6_OBASE_POS            _PMU_UL(1)
#define PMU_RABR6_OBASE_LEN            _PMU_UL(12)

/* PMU_RABR6_OVEN (rw) */
#define PMU_RABR6_OVEN_POS             _PMU_UL(31)
#define PMU_RABR6_OVEN_LEN             _PMU_UL(1)

/* PMU_RABR6_RC0 (r) */
#define PMU_RABR6_RC0_POS              _PMU_UL(28)
#define PMU_RABR6_RC0_LEN              _PMU_UL(1)

/* PMU_RABR6_RC1 (r) */
#define PMU_RABR6_RC1_POS              _PMU_UL(29)
#define PMU_RABR6_RC1_LEN              _PMU_UL(1)

/* PMU_RABR7_IEMS (r) */
#define PMU_RABR7_IEMS_POS             _PMU_UL(30)
#define PMU_RABR7_IEMS_LEN             _PMU_UL(1)

/* PMU_RABR7_OBASE (rw) */
#define PMU_RABR7_OBASE_POS            _PMU_UL(1)
#define PMU_RABR7_OBASE_LEN            _PMU_UL(12)

/* PMU_RABR7_OVEN (rw) */
#define PMU_RABR7_OVEN_POS             _PMU_UL(31)
#define PMU_RABR7_OVEN_LEN             _PMU_UL(1)

/* PMU_RABR7_RC0 (r) */
#define PMU_RABR7_RC0_POS              _PMU_UL(28)
#define PMU_RABR7_RC0_LEN              _PMU_UL(1)

/* PMU_RABR7_RC1 (r) */
#define PMU_RABR7_RC1_POS              _PMU_UL(29)
#define PMU_RABR7_RC1_LEN              _PMU_UL(1)

#endif
