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
 * $Filename__:pmu_1796.h$ 
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
 * $Name______:pmu_1796$ 
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
 *      File name: pmu_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PMU_1796_H
#define _PMU_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _PMU_UL(x) x
#else
    #define _PMU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module PMU on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF8000500...0xF8000507] : reserved space
    volatile uint32 ID;                  // [0xF8000508] : PMU Module Identification Register
    volatile uint32 RESERVED1[1];        // [0xF800050C...0xF800050F] : reserved space
    volatile uint32 TPCON;               // [0xF8000510] : PMU Tuning Protection Control Register
} PMU_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern PMU_RegMap_t PMU __attribute__ ((asection (".bss.label_only")));

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

/* PMU_ID_Mod_Number (r) */
#define PMU_ID_Mod_Number_POS          _PMU_UL(16)
#define PMU_ID_Mod_Number_LEN          _PMU_UL(16)

/* PMU_ID_Mod_Rev (r) */
#define PMU_ID_Mod_Rev_POS             _PMU_UL(0)
#define PMU_ID_Mod_Rev_LEN             _PMU_UL(8)

/* PMU_ID_Mod_Type (r) */
#define PMU_ID_Mod_Type_POS            _PMU_UL(8)
#define PMU_ID_Mod_Type_LEN            _PMU_UL(8)

/* PMU_TPCON_FRF (rh) */
#define PMU_TPCON_FRF_POS              _PMU_UL(7)
#define PMU_TPCON_FRF_LEN              _PMU_UL(1)

/* PMU_TPCON_SFRF (rw) */
#define PMU_TPCON_SFRF_POS             _PMU_UL(0)
#define PMU_TPCON_SFRF_LEN             _PMU_UL(7)

/* PMU_TPCON_SORC (rwh) */
#define PMU_TPCON_SORC_POS             _PMU_UL(16)
#define PMU_TPCON_SORC_LEN             _PMU_UL(4)

/* PMU_TPCON_STPTRF (rw) */
#define PMU_TPCON_STPTRF_POS           _PMU_UL(8)
#define PMU_TPCON_STPTRF_LEN           _PMU_UL(7)

/* PMU_TPCON_TPTRF (rh) */
#define PMU_TPCON_TPTRF_POS            _PMU_UL(15)
#define PMU_TPCON_TPTRF_LEN            _PMU_UL(1)

#endif
