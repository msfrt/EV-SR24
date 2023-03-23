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
 * $Filename__:lmu_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:10.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:lmu_1793$ 
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
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _LMU_1793_H
#define _LMU_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _LMU_UL(x) x
#else
    #define _LMU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module LMU on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF8700800] : LMU Clock Control Register
    volatile uint32 MEMCON;              // [0xF8700804] : LMU Memory Control Register
    volatile uint32 MODID;               // [0xF8700808] : LMU Module ID Register
} LMU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern LMU_RegMap_t LMU __attribute__ ((asection (".bss.label_only")));


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

/* LMU_ID_MOD_NUMBER (r) */
#define LMU_ID_MOD_NUMBER_POS                _LMU_UL(16)
#define LMU_ID_MOD_NUMBER_LEN                _LMU_UL(16)

/* LMU_ID_MOD_REV (r) */
#define LMU_ID_MOD_REV_POS                   _LMU_UL(0)
#define LMU_ID_MOD_REV_LEN                   _LMU_UL(8)

/* LMU_ID_MOD_TYPE (r) */
#define LMU_ID_MOD_TYPE_POS                  _LMU_UL(8)
#define LMU_ID_MOD_TYPE_LEN                  _LMU_UL(8)

/* LMU_CLC_DISR (rw) */
#define LMU_CLC_DISR_POS                     _LMU_UL(0)
#define LMU_CLC_DISR_LEN                     _LMU_UL(1)

/* LMU_CLC_DISS (rh) */
#define LMU_CLC_DISS_POS                     _LMU_UL(1)
#define LMU_CLC_DISS_LEN                     _LMU_UL(1)

/* LMU_CLC_RES (r) */
#define LMU_CLC_RES_POS                      _LMU_UL(2)
#define LMU_CLC_RES_LEN                      _LMU_UL(30)

/* LMU_MEMCON_OLDAEN (rw) */
#define LMU_MEMCON_OLDAEN_POS                _LMU_UL(0)
#define LMU_MEMCON_OLDAEN_LEN                _LMU_UL(1)

/* LMU_MEMCON_POLDAEN (w) */
#define LMU_MEMCON_POLDAEN_POS               _LMU_UL(1)
#define LMU_MEMCON_POLDAEN_LEN               _LMU_UL(1)

/* LMU_MEMCON_RES0 (r) */
#define LMU_MEMCON_RES0_POS                  _LMU_UL(2)
#define LMU_MEMCON_RES0_LEN                  _LMU_UL(5)

/* LMU_MEMCON_ADDERR (rwh) */
#define LMU_MEMCON_ADDERR_POS                _LMU_UL(7)
#define LMU_MEMCON_ADDERR_LEN                _LMU_UL(1)

/* LMU_MEMCON_PMIC (w) */
#define LMU_MEMCON_PMIC_POS                  _LMU_UL(8)
#define LMU_MEMCON_PMIC_LEN                  _LMU_UL(1)

/* LMU_MEMCON_RES1 (r) */
#define LMU_MEMCON_RES1_POS                  _LMU_UL(9)
#define LMU_MEMCON_RES1_LEN                  _LMU_UL(1)

/* LMU_MEMCON_DED_EN (rw) */
#define LMU_MEMCON_DED_EN_POS                _LMU_UL(10)
#define LMU_MEMCON_DED_EN_LEN                _LMU_UL(1)

/* LMU_MEMCON_RES2 (r) */
#define LMU_MEMCON_RES2_POS                  _LMU_UL(11)
#define LMU_MEMCON_RES2_LEN                  _LMU_UL(1)

/* LMU_MEMCON_ERRDIS (rw) */
#define LMU_MEMCON_ERRDIS_POS                _LMU_UL(12)
#define LMU_MEMCON_ERRDIS_LEN                _LMU_UL(1)

/* LMU_MEMCON_RES (r) */
#define LMU_MEMCON_RES_POS                   _LMU_UL(13)
#define LMU_MEMCON_RES_LEN                   _LMU_UL(1)

/* LMU_MEMCON_RES3 (r) */
#define LMU_MEMCON_RES3_POS                  _LMU_UL(14)
#define LMU_MEMCON_RES3_LEN                  _LMU_UL(1)

/* LMU_MEMCON_DBERR (rwh) */
#define LMU_MEMCON_DBERR_POS                 _LMU_UL(15)
#define LMU_MEMCON_DBERR_LEN                 _LMU_UL(1)

/* LMU_MEMCON_RES4 (r) */
#define LMU_MEMCON_RES4_POS                  _LMU_UL(16)
#define LMU_MEMCON_RES4_LEN                  _LMU_UL(8)

/* LMU_MEMCON_ECCR (rh) */
#define LMU_MEMCON_ECCR_POS                  _LMU_UL(24)
#define LMU_MEMCON_ECCR_LEN                  _LMU_UL(8)

/* LMU_MODID_ID_VALUE (r) */
#define LMU_MODID_ID_VALUE_POS               _LMU_UL(0)
#define LMU_MODID_ID_VALUE_LEN               _LMU_UL(32)

#endif
