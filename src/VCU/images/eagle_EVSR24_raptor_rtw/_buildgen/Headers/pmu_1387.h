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
 * $Filename__:pmu_1387.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:16.04.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:pmu_1387$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     16.04.2010 AHT2FE
 *   Update TC1387 header files
 * 
 * 1.10.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pmu_1387.h
 *      Version: \main\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PMU_1387_H
#define _PMU_1387_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _PMU_UL(x) x
#else
    #define _PMU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module PMU on TC1387
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF8000508] : PMU0 Identification Register
    volatile uint32 RESERVED0[5];        // [0xF800050C...0xF800051F] : reserved space
    volatile uint32 OVRCON;              // [0xF8000520] : Overlay RAM Control Register
} PMU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern PMU_RegMap_t PMU0 __attribute__ ((asection (".bss.label_only")));
extern PMU_RegMap_t PMU1 __attribute__ ((asection (".bss.label_only")));
extern PMU_RegMap_t PMU[2] __attribute__ ((asection (".bss.label_only")));


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

/* PMU0_ID_MOD_NUMBER (r) */
#define PMU0_ID_MOD_NUMBER_POS               _PMU_UL(16)
#define PMU0_ID_MOD_NUMBER_LEN               _PMU_UL(16)

/* PMU0_ID_MOD_REV (r) */
#define PMU0_ID_MOD_REV_POS                  _PMU_UL(0)
#define PMU0_ID_MOD_REV_LEN                  _PMU_UL(8)

/* PMU0_ID_MOD_TYPE (r) */
#define PMU0_ID_MOD_TYPE_POS                 _PMU_UL(8)
#define PMU0_ID_MOD_TYPE_LEN                 _PMU_UL(8)

/* PMU1_ID_MOD_NUMBER (r) */
#define PMU1_ID_MOD_NUMBER_POS               _PMU_UL(16)
#define PMU1_ID_MOD_NUMBER_LEN               _PMU_UL(16)

/* PMU1_ID_MOD_REV (r) */
#define PMU1_ID_MOD_REV_POS                  _PMU_UL(0)
#define PMU1_ID_MOD_REV_LEN                  _PMU_UL(8)

/* PMU1_ID_MOD_TYPE (r) */
#define PMU1_ID_MOD_TYPE_POS                 _PMU_UL(8)
#define PMU1_ID_MOD_TYPE_LEN                 _PMU_UL(8)

/* PMU_ID_MOD_REV (r) */
#define PMU_ID_MOD_REV_POS                   _PMU_UL(0)
#define PMU_ID_MOD_REV_LEN                   _PMU_UL(8)

/* PMU_ID_MOD_TYPE (r) */
#define PMU_ID_MOD_TYPE_POS                  _PMU_UL(8)
#define PMU_ID_MOD_TYPE_LEN                  _PMU_UL(8)

/* PMU_ID_MOD_NUMBER (r) */
#define PMU_ID_MOD_NUMBER_POS                _PMU_UL(16)
#define PMU_ID_MOD_NUMBER_LEN                _PMU_UL(16)

/* PMU_OVRCON_OLDAEN (rw) */
#define PMU_OVRCON_OLDAEN_POS                _PMU_UL(0)
#define PMU_OVRCON_OLDAEN_LEN                _PMU_UL(1)

/* PMU_OVRCON_POLDAEN (w) */
#define PMU_OVRCON_POLDAEN_POS               _PMU_UL(1)
#define PMU_OVRCON_POLDAEN_LEN               _PMU_UL(1)

/* PMU_OVRCON_PECCCTR (w) */
#define PMU_OVRCON_PECCCTR_POS               _PMU_UL(8)
#define PMU_OVRCON_PECCCTR_LEN               _PMU_UL(1)

/* PMU_OVRCON_ECCGENDIS (rw) */
#define PMU_OVRCON_ECCGENDIS_POS             _PMU_UL(9)
#define PMU_OVRCON_ECCGENDIS_LEN             _PMU_UL(1)

/* PMU_OVRCON_DBERINTDIS (rw) */
#define PMU_OVRCON_DBERINTDIS_POS            _PMU_UL(13)
#define PMU_OVRCON_DBERINTDIS_LEN            _PMU_UL(1)

/* PMU_OVRCON_ECCDBER (rwh) */
#define PMU_OVRCON_ECCDBER_POS               _PMU_UL(15)
#define PMU_OVRCON_ECCDBER_LEN               _PMU_UL(1)

/* PMU_OVRCON_ECCW (rw) */
#define PMU_OVRCON_ECCW_POS                  _PMU_UL(16)
#define PMU_OVRCON_ECCW_LEN                  _PMU_UL(8)

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

/* PMU0_OVRCON_PECCCTR (w) */
#define PMU0_OVRCON_PECCCTR_POS              _PMU_UL(8)
#define PMU0_OVRCON_PECCCTR_LEN              _PMU_UL(1)

/* PMU0_OVRCON_ECCGENDIS (rw) */
#define PMU0_OVRCON_ECCGENDIS_POS            _PMU_UL(9)
#define PMU0_OVRCON_ECCGENDIS_LEN            _PMU_UL(1)

/* PMU0_OVRCON_DBERINTDIS (rw) */
#define PMU0_OVRCON_DBERINTDIS_POS           _PMU_UL(13)
#define PMU0_OVRCON_DBERINTDIS_LEN           _PMU_UL(1)

/* PMU0_OVRCON_ECCDBER (rwh) */
#define PMU0_OVRCON_ECCDBER_POS              _PMU_UL(15)
#define PMU0_OVRCON_ECCDBER_LEN              _PMU_UL(1)

/* PMU0_OVRCON_ECCW (rw) */
#define PMU0_OVRCON_ECCW_POS                 _PMU_UL(16)
#define PMU0_OVRCON_ECCW_LEN                 _PMU_UL(8)

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
