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
 * $Filename__:pmi_1782.h$ 
 * 
 * $Author____:JWI2SI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:30.10.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:pmi_1782$ 
 * $Variant___:1.16.0$ 
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
 * 1.16.0; 0     30.10.2011 RAT1COB
 *   TC1782 update and TPROT register details
 *   updated in pmu_1782.h and flash_1782.h
 * 
 * 1.11.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: pmi_1782.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PMI_1782_H
#define _PMI_1782_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _PMI_UL(x) x
#else
    #define _PMI_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module PMI on TC1782
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF87FFD08] : PMI Identification Register
    volatile uint32 RESERVED0[1];        // [0xF87FFD0C...0xF87FFD0F] : reserved space
    volatile uint32 CON0;                // [0xF87FFD10] : PMI Control Register 0
    volatile uint32 CON1;                // [0xF87FFD14] : PMI Control Register 1
    volatile uint32 CON2;                // [0xF87FFD18] : PMI Control Register 2
    volatile uint32 RESERVED1[1];        // [0xF87FFD1C...0xF87FFD1F] : reserved space
    volatile uint32 STR;                 // [0xF87FFD20] : PMI Synchronous Trap Register
} PMI_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern PMI_RegMap_t PMI __attribute__ ((asection (".bss.label_only")));


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

/* PMI_ID_MOD_NUMBER (r) */
#define PMI_ID_MOD_NUMBER_POS                _PMI_UL(16)
#define PMI_ID_MOD_NUMBER_LEN                _PMI_UL(16)

/* PMI_ID_MOD_REV (r) */
#define PMI_ID_MOD_REV_POS                   _PMI_UL(0)
#define PMI_ID_MOD_REV_LEN                   _PMI_UL(8)

/* PMI_ID_MOD_TYPE (r) */
#define PMI_ID_MOD_TYPE_POS                  _PMI_UL(8)
#define PMI_ID_MOD_TYPE_LEN                  _PMI_UL(8)

/* PMI_ID_MOD_REV (rh) */
#define PMI_ID_MOD_REV_POS                   _PMI_UL(0)
#define PMI_ID_MOD_REV_LEN                   _PMI_UL(8)

/* PMI_ID_MOD_32B (rh) */
#define PMI_ID_MOD_32B_POS                   _PMI_UL(8)
#define PMI_ID_MOD_32B_LEN                   _PMI_UL(8)

/* PMI_ID_MOD (rh) */
#define PMI_ID_MOD_POS                       _PMI_UL(16)
#define PMI_ID_MOD_LEN                       _PMI_UL(16)

/* PMI_CON0_PCBYP (rw) */
#define PMI_CON0_PCBYP_POS                   _PMI_UL(1)
#define PMI_CON0_PCBYP_LEN                   _PMI_UL(1)

/* PMI_CON1_PCINV (rwh) */
#define PMI_CON1_PCINV_POS                   _PMI_UL(0)
#define PMI_CON1_PCINV_LEN                   _PMI_UL(1)

/* PMI_CON1_PBINV (rw) */
#define PMI_CON1_PBINV_POS                   _PMI_UL(1)
#define PMI_CON1_PBINV_LEN                   _PMI_UL(1)

/* PMI_CON2_PC_SZ_AV (rh) */
#define PMI_CON2_PC_SZ_AV_POS                _PMI_UL(0)
#define PMI_CON2_PC_SZ_AV_LEN                _PMI_UL(4)

/* PMI_CON2_PMEM_SZ_AV (rh) */
#define PMI_CON2_PMEM_SZ_AV_POS              _PMI_UL(4)
#define PMI_CON2_PMEM_SZ_AV_LEN              _PMI_UL(12)

/* PMI_CON2_PC_SZ_CFG (rwh) */
#define PMI_CON2_PC_SZ_CFG_POS               _PMI_UL(16)
#define PMI_CON2_PC_SZ_CFG_LEN               _PMI_UL(4)

/* PMI_CON2_PMEM_SZ_CFG (rwh) */
#define PMI_CON2_PMEM_SZ_CFG_POS             _PMI_UL(20)
#define PMI_CON2_PMEM_SZ_CFG_LEN             _PMI_UL(12)

/* PMI_STR_FRESTF (rh) */
#define PMI_STR_FRESTF_POS                   _PMI_UL(0)
#define PMI_STR_FRESTF_LEN                   _PMI_UL(1)

/* PMI_STR_FBESTF (rh) */
#define PMI_STR_FBESTF_POS                   _PMI_UL(2)
#define PMI_STR_FBESTF_LEN                   _PMI_UL(1)

/* PMI_STR_FPESTF (rh) */
#define PMI_STR_FPESTF_POS                   _PMI_UL(12)
#define PMI_STR_FPESTF_LEN                   _PMI_UL(1)

/* PMI_STR_FMESTF (rh) */
#define PMI_STR_FMESTF_POS                   _PMI_UL(14)
#define PMI_STR_FMESTF_LEN                   _PMI_UL(1)

#endif
