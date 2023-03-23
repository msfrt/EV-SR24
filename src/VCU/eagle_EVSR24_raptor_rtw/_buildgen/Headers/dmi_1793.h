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
 * $Filename__:dmi_1793.h$ 
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
 * $Name______:dmi_1793$ 
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

#ifndef _DMI_1793_H
#define _DMI_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _DMI_UL(x) x
#else
    #define _DMI_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module DMI on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* This defines can only be used with _mtcr() _mfcr(). They are NOT usable with __mtcr __mfcr */

#define DMI_CON2_MXCR_OFFSET 	0x9000
#define DMI_STR_MXCR_OFFSET 	0x9010
#define DMI_ATR_MXCR_OFFSET 	0x9018
#define DMI_EADD_MXCR_OFFSET 	0x901C
#define DMI_CON0_MXCR_OFFSET 	0x9040

#if 0
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CON2;                // [0xF7E19000] : Data Control Register 2
    volatile uint32 RESERVED0[3];        // [0xF7E19004...0xF7E1900F] : reserved space
    volatile uint32 STR;                 // [0xF7E19010] : Data Synchronous Trap Register
    volatile uint32 RESERVED1[1];        // [0xF7E19014...0xF7E19017] : reserved space
    volatile uint32 ATR;                 // [0xF7E19018] : Data Asynchronous Trap Register
    volatile uint32 EADD;                // [0xF7E1901C] : Data Error Address Register
    volatile uint32 RESERVED2[8];        // [0xF7E19020...0xF7E1903F] : reserved space
    volatile uint32 CON0;                // [0xF7E19040] : Data Memory Control Register
} DMI_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern DMI_RegMap_t DMI __attribute__ ((asection (".bss.label_only")));
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

/* DMI_ID_MOD_NUMBER (r) */
#define DMI_ID_MOD_NUMBER_POS                _DMI_UL(16)
#define DMI_ID_MOD_NUMBER_LEN                _DMI_UL(16)

/* DMI_ID_MOD_REV (r) */
#define DMI_ID_MOD_REV_POS                   _DMI_UL(0)
#define DMI_ID_MOD_REV_LEN                   _DMI_UL(8)

/* DMI_ID_MOD_TYPE (r) */
#define DMI_ID_MOD_TYPE_POS                  _DMI_UL(8)
#define DMI_ID_MOD_TYPE_LEN                  _DMI_UL(8)

/* DMI_STR_SRE (rwh) */
#define DMI_STR_SRE_POS                      _DMI_UL(0)
#define DMI_STR_SRE_LEN                      _DMI_UL(1)

/* DMI_STR_GAE (rwh) */
#define DMI_STR_GAE_POS                      _DMI_UL(1)
#define DMI_STR_GAE_LEN                      _DMI_UL(1)

/* DMI_STR_LBE (rwh) */
#define DMI_STR_LBE_POS                      _DMI_UL(2)
#define DMI_STR_LBE_LEN                      _DMI_UL(1)

/* DMI_STR_RES (r) */
#define DMI_STR_RES_POS                      _DMI_UL(3)
#define DMI_STR_RES_LEN                      _DMI_UL(3)

/* DMI_STR_CRE (rwh) */
#define DMI_STR_CRE_POS                      _DMI_UL(6)
#define DMI_STR_CRE_LEN                      _DMI_UL(1)

/* DMI_STR_DTME (rwh) */
#define DMI_STR_DTME_POS                     _DMI_UL(14)
#define DMI_STR_DTME_LEN                     _DMI_UL(1)

/* DMI_STR_LOE (rwh) */
#define DMI_STR_LOE_POS                      _DMI_UL(15)
#define DMI_STR_LOE_LEN                      _DMI_UL(1)

/* DMI_STR_SDE (rwh) */
#define DMI_STR_SDE_POS                      _DMI_UL(16)
#define DMI_STR_SDE_LEN                      _DMI_UL(1)

/* DMI_STR_SCE (rwh) */
#define DMI_STR_SCE_POS                      _DMI_UL(17)
#define DMI_STR_SCE_LEN                      _DMI_UL(1)

/* DMI_STR_CAC (rwh) */
#define DMI_STR_CAC_POS                      _DMI_UL(18)
#define DMI_STR_CAC_LEN                      _DMI_UL(1)

/* DMI_STR_ALN (rwh) */
#define DMI_STR_ALN_POS                      _DMI_UL(24)
#define DMI_STR_ALN_LEN                      _DMI_UL(1)

/* DMI_ATR_RES (r) */
#define DMI_ATR_RES_POS                      _DMI_UL(0)
#define DMI_ATR_RES_LEN                      _DMI_UL(3)

/* DMI_ATR_SBE (rwh) */
#define DMI_ATR_SBE_POS                      _DMI_UL(3)
#define DMI_ATR_SBE_LEN                      _DMI_UL(1)

/* DMI_ATR_CWSE (rwh) */
#define DMI_ATR_CWSE_POS                     _DMI_UL(9)
#define DMI_ATR_CWSE_LEN                     _DMI_UL(1)

/* DMI_ATR_CFSE (rwh) */
#define DMI_ATR_CFSE_POS                     _DMI_UL(10)
#define DMI_ATR_CFSE_LEN                     _DMI_UL(1)

/* DMI_ATR_SOE (rwh) */
#define DMI_ATR_SOE_POS                      _DMI_UL(14)
#define DMI_ATR_SOE_LEN                      _DMI_UL(1)

/* DMI_ATR_SME (rwh) */
#define DMI_ATR_SME_POS                      _DMI_UL(15)
#define DMI_ATR_SME_LEN                      _DMI_UL(1)

/* DMI_EADD_ERROR_ADDRESS (rh) */
#define DMI_EADD_ERROR_ADDRESS_POS           _DMI_UL(0)
#define DMI_EADD_ERROR_ADDRESS_LEN           _DMI_UL(32)

/* DMI_CON0_RES (r) */
#define DMI_CON0_RES_POS                     _DMI_UL(0)
#define DMI_CON0_RES_LEN                     _DMI_UL(1)

/* DMI_CON0_DCBYP (rw) */
#define DMI_CON0_DCBYP_POS                   _DMI_UL(1)
#define DMI_CON0_DCBYP_LEN                   _DMI_UL(1)

#endif
