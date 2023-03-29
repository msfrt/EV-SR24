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
 * $Filename__:pmu_1797.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:19.01.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:pmu_1797$ 
 * $Variant___:1.8.0$ 
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
 * 1.8.0; 0     19.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pmu_1797.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PMU_1797_H
#define _PMU_1797_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _PMU_UL(x) x
#else
    #define _PMU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module PMU on TC1797
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF8000508]              : PMU0 Identification Register
    volatile uint32 RESERVED0[1];        // [0xF800050C...0xF800050F] : reserved space
    volatile uint32 TPCON;               // [0xF8000510]              : PMU Tuning Protection Control Register
    volatile uint32 RESERVED1[3];        // [0xF8000514...0xF800051F] : reserved space
    volatile uint32 OVRCON;              // [0xF8000520]              : Overlay RAM Control Register
} PMU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern PMU_RegMap_t PMU __attribute__ ((asection (".bss.label_only")));


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

/* PMU_ID_MOD_NUMBER (r) */
#define PMU_ID_MOD_NUMBER_POS                _PMU_UL(16)
#define PMU_ID_MOD_NUMBER_LEN                _PMU_UL(16)

/* PMU_ID_MOD_REV (r) */
#define PMU_ID_MOD_REV_POS                   _PMU_UL(0)
#define PMU_ID_MOD_REV_LEN                   _PMU_UL(8)

/* PMU_ID_MOD_TYPE (r) */
#define PMU_ID_MOD_TYPE_POS                  _PMU_UL(8)
#define PMU_ID_MOD_TYPE_LEN                  _PMU_UL(8)

/* PMU_ID_MOD_REV (r) */
#define PMU_ID_MOD_REV_POS                   _PMU_UL(0)
#define PMU_ID_MOD_REV_LEN                   _PMU_UL(8)

/* PMU_ID_MOD_TYPE (r) */
#define PMU_ID_MOD_TYPE_POS                  _PMU_UL(8)
#define PMU_ID_MOD_TYPE_LEN                  _PMU_UL(8)

/* PMU_ID_MOD_NUMBER (r) */
#define PMU_ID_MOD_NUMBER_POS                _PMU_UL(16)
#define PMU_ID_MOD_NUMBER_LEN                _PMU_UL(16)

/* PMU_TPCON_FRF (rh) */
#define PMU_TPCON_FRF_POS                    _PMU_UL(7)
#define PMU_TPCON_FRF_LEN                    _PMU_UL(1)

/* PMU_TPCON_SFRF (rw) */
#define PMU_TPCON_SFRF_POS                   _PMU_UL(0)
#define PMU_TPCON_SFRF_LEN                   _PMU_UL(7)

/* PMU_TPCON_SORC (rwh) */
#define PMU_TPCON_SORC_POS                   _PMU_UL(16)
#define PMU_TPCON_SORC_LEN                   _PMU_UL(4)

/* PMU_TPCON_STPTRF (rw) */
#define PMU_TPCON_STPTRF_POS                 _PMU_UL(8)
#define PMU_TPCON_STPTRF_LEN                 _PMU_UL(7)

/* PMU_TPCON_TPTRF (rh) */
#define PMU_TPCON_TPTRF_POS                  _PMU_UL(15)
#define PMU_TPCON_TPTRF_LEN                  _PMU_UL(1)

/* PMU_OVRCON_OLDAEN (rw) */
#define PMU_OVRCON_OLDAEN_POS                _PMU_UL(0)
#define PMU_OVRCON_OLDAEN_LEN                _PMU_UL(1)

/* PMU_OVRCON_POLDAEN (w) */
#define PMU_OVRCON_POLDAEN_POS               _PMU_UL(1)
#define PMU_OVRCON_POLDAEN_LEN               _PMU_UL(1)

/* PMU_OVRCON_PPERCTR (w) */
#define PMU_OVRCON_PPERCTR_POS               _PMU_UL(8)
#define PMU_OVRCON_PPERCTR_LEN               _PMU_UL(1)

/* PMU_OVRCON_PEREN (rw) */
#define PMU_OVRCON_PEREN_POS                 _PMU_UL(9)
#define PMU_OVRCON_PEREN_LEN                 _PMU_UL(1)

/* PMU_OVRCON_UN (r) */
#define PMU_OVRCON_UN_POS                    _PMU_UL(12)
#define PMU_OVRCON_UN_LEN                    _PMU_UL(4)

/* PMU0_ID_MOD_REV (r) */
#define PMU0_ID_MOD_REV_POS                  _PMU_UL(0)
#define PMU0_ID_MOD_REV_LEN                  _PMU_UL(8)

/* PMU0_ID_MOD_TYPE (r) */
#define PMU0_ID_MOD_TYPE_POS                 _PMU_UL(8)
#define PMU0_ID_MOD_TYPE_LEN                 _PMU_UL(8)

/* PMU0_ID_MOD_NUMBER (r) */
#define PMU0_ID_MOD_NUMBER_POS               _PMU_UL(16)
#define PMU0_ID_MOD_NUMBER_LEN               _PMU_UL(16)

/* PMU0_OVRCON_OLDAEN (rw) */
#define PMU0_OVRCON_OLDAEN_POS               _PMU_UL(0)
#define PMU0_OVRCON_OLDAEN_LEN               _PMU_UL(1)

/* PMU0_OVRCON_POLDAEN (w) */
#define PMU0_OVRCON_POLDAEN_POS              _PMU_UL(1)
#define PMU0_OVRCON_POLDAEN_LEN              _PMU_UL(1)

/* PMU0_OVRCON_PPERCTR (w) */
#define PMU0_OVRCON_PPERCTR_POS              _PMU_UL(8)
#define PMU0_OVRCON_PPERCTR_LEN              _PMU_UL(1)

/* PMU0_OVRCON_PEREN (rw) */
#define PMU0_OVRCON_PEREN_POS                _PMU_UL(9)
#define PMU0_OVRCON_PEREN_LEN                _PMU_UL(1)

/* PMU0_OVRCON_UN (r) */
#define PMU0_OVRCON_UN_POS                   _PMU_UL(12)
#define PMU0_OVRCON_UN_LEN                   _PMU_UL(4)

/* PMU1_ID_MOD_REV (r) */
#define PMU1_ID_MOD_REV_POS                  _PMU_UL(0)
#define PMU1_ID_MOD_REV_LEN                  _PMU_UL(8)

/* PMU1_ID_MOD_TYPE (r) */
#define PMU1_ID_MOD_TYPE_POS                 _PMU_UL(8)
#define PMU1_ID_MOD_TYPE_LEN                 _PMU_UL(8)

/* PMU1_ID_MOD_NUMBER (r) */
#define PMU1_ID_MOD_NUMBER_POS               _PMU_UL(16)
#define PMU1_ID_MOD_NUMBER_LEN               _PMU_UL(16)

#endif
