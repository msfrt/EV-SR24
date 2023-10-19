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
 * $Filename__:pmi_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:20.10.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:pmi_1793$ 
 * $Variant___:1.12.0$ 
 * $Revision__:2$ 
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
 * 1.12.0; 2     20.10.2010 RAT1COB
 *   TC1793 update
 * 
 * 1.12.0; 1     16.04.2010 AHT2FE
 *   Added TC_1793 header
 * 
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PMI_1793_H
#define _PMI_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _PMI_UL(x) x
#else
    #define _PMI_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module PMI on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* This defines can only be used with _mtcr() _mfcr(). They are NOT usable with __mtcr __mfcr */

#define PMI_STR_MXCR_OFFSET 	0x9200
#define PMI_CON1_MXCR_OFFSET 	0x9204
#define PMI_CON2_MXCR_OFFSET 	0x9208
#define PMI_CON0_MXCR_OFFSET 	0x920C

/* C-structure definition for hardware module */
#if 0
typedef struct {
    volatile uint32 STR;                 // [0xF7E19200] : Program Synchronous Trap Register
    volatile uint32 CON1;                // [0xF7E19204] : Program Control 1
    volatile uint32 CON2;                // [0xF7E19208] : Program Control 2
    volatile uint32 CON0;                // [0xF7E1920C] : Program Control 0
} PMI_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern PMI_RegMap_t PMI __attribute__ ((asection (".bss.label_only")));
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

/* PMI_STR_FRE (rwh) */
#define PMI_STR_FRE_POS                      _PMI_UL(0)
#define PMI_STR_FRE_LEN                      _PMI_UL(1)

/* PMI_STR_FGAE (rwh) */
#define PMI_STR_FGAE_POS                     _PMI_UL(1)
#define PMI_STR_FGAE_LEN                     _PMI_UL(1)

/* PMI_STR_FBE (rwh) */
#define PMI_STR_FBE_POS                      _PMI_UL(2)
#define PMI_STR_FBE_LEN                      _PMI_UL(1)

/* PMI_STR_RES (r) */
#define PMI_STR_RES_POS                      _PMI_UL(3)
#define PMI_STR_RES_LEN                      _PMI_UL(9)

/* PMI_STR_FPE (rwh) */
#define PMI_STR_FPE_POS                      _PMI_UL(12)
#define PMI_STR_FPE_LEN                      _PMI_UL(1)

/* PMI_STR_FME (rwh) */
#define PMI_STR_FME_POS                      _PMI_UL(14)
#define PMI_STR_FME_LEN                      _PMI_UL(1)

/* PMI_CON1_PCINV (rw) */
#define PMI_CON1_PCINV_POS                   _PMI_UL(0)
#define PMI_CON1_PCINV_LEN                   _PMI_UL(1)

/* PMI_CON1_PBINV (rw) */
#define PMI_CON1_PBINV_POS                   _PMI_UL(1)
#define PMI_CON1_PBINV_LEN                   _PMI_UL(1)

/* PMI_CON1_RES (r) */
#define PMI_CON1_RES_POS                     _PMI_UL(2)
#define PMI_CON1_RES_LEN                     _PMI_UL(30)

/* PMI_CON2_PCACHE_SZE (r) */
#define PMI_CON2_PCACHE_SZE_POS              _PMI_UL(0)
#define PMI_CON2_PCACHE_SZE_LEN              _PMI_UL(16)

/* PMI_CON2_PSCRATCH_SZE (r) */
#define PMI_CON2_PSCRATCH_SZE_POS            _PMI_UL(16)
#define PMI_CON2_PSCRATCH_SZE_LEN            _PMI_UL(16)

/* PMI_CON0_RES (r) */
#define PMI_CON0_RES_POS                     _PMI_UL(0)
#define PMI_CON0_RES_LEN                     _PMI_UL(1)

/* PMI_CON0_PCBYP (rw) */
#define PMI_CON0_PCBYP_POS                   _PMI_UL(1)
#define PMI_CON0_PCBYP_LEN                   _PMI_UL(1)

#endif
