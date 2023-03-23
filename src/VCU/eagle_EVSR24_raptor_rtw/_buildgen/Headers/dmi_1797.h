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
 * $Filename__:dmi_1797.h$ 
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
 * $Name______:dmi_1797$ 
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
 *      File name: dmi_1797.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DMI_1797_H
#define _DMI_1797_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _DMI_UL(x) x
#else
    #define _DMI_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module DMI on TC1797
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF87FFC08] : DMI Identification Register
    volatile uint32 RESERVED0[1];        // [0xF87FFC0C...0xF87FFC0F] : reserved space
    volatile uint32 CON;                 // [0xF87FFC10] : DMI Control Register
    volatile uint32 RESERVED1[1];        // [0xF87FFC14...0xF87FFC17] : reserved space
    volatile uint32 STR;                 // [0xF87FFC18] : DMI Synchronous Trap Flag Register
    volatile uint32 RESERVED2[1];        // [0xF87FFC1C...0xF87FFC1F] : reserved space
    volatile uint32 ATR;                 // [0xF87FFC20] : DMI Asynchronous Trap Flag Register
} DMI_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern DMI_RegMap_t DMI __attribute__ ((asection (".bss.label_only")));


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

/* DMI_ID_MOD (rh) */
#define DMI_ID_MOD_POS                       _DMI_UL(16)
#define DMI_ID_MOD_LEN                       _DMI_UL(16)

/* DMI_ID_MOD_32B (rh) */
#define DMI_ID_MOD_32B_POS                   _DMI_UL(8)
#define DMI_ID_MOD_32B_LEN                   _DMI_UL(8)

/* DMI_ID_MOD_REV (rh) */
#define DMI_ID_MOD_REV_POS                   _DMI_UL(0)
#define DMI_ID_MOD_REV_LEN                   _DMI_UL(8)

/* DMI_CON_DC_SZ_AV (rh) */
#define DMI_CON_DC_SZ_AV_POS                 _DMI_UL(0)
#define DMI_CON_DC_SZ_AV_LEN                 _DMI_UL(4)

/* DMI_CON_DMEM_SZ_AV (rh) */
#define DMI_CON_DMEM_SZ_AV_POS               _DMI_UL(4)
#define DMI_CON_DMEM_SZ_AV_LEN               _DMI_UL(12)

/* DMI_CON_DC_SZ_CFG (rwh) */
#define DMI_CON_DC_SZ_CFG_POS                _DMI_UL(16)
#define DMI_CON_DC_SZ_CFG_LEN                _DMI_UL(4)

/* DMI_CON_DMEM_SZ_CFG (rwh) */
#define DMI_CON_DMEM_SZ_CFG_POS              _DMI_UL(20)
#define DMI_CON_DMEM_SZ_CFG_LEN              _DMI_UL(12)

/* DMI_STR_LRESTF (rh) */
#define DMI_STR_LRESTF_POS                   _DMI_UL(0)
#define DMI_STR_LRESTF_LEN                   _DMI_UL(1)

/* DMI_STR_LBESTF (rh) */
#define DMI_STR_LBESTF_POS                   _DMI_UL(2)
#define DMI_STR_LBESTF_LEN                   _DMI_UL(1)

/* DMI_STR_CRLESTF (rh) */
#define DMI_STR_CRLESTF_POS                  _DMI_UL(6)
#define DMI_STR_CRLESTF_LEN                  _DMI_UL(1)

/* DMI_STR_CWLESTF (rh) */
#define DMI_STR_CWLESTF_POS                  _DMI_UL(8)
#define DMI_STR_CWLESTF_LEN                  _DMI_UL(1)

/* DMI_STR_LMESTF (rh) */
#define DMI_STR_LMESTF_POS                   _DMI_UL(14)
#define DMI_STR_LMESTF_LEN                   _DMI_UL(1)

/* DMI_ATR_SREATF (rh) */
#define DMI_ATR_SREATF_POS                   _DMI_UL(1)
#define DMI_ATR_SREATF_LEN                   _DMI_UL(1)

/* DMI_ATR_SBEATF (rh) */
#define DMI_ATR_SBEATF_POS                   _DMI_UL(3)
#define DMI_ATR_SBEATF_LEN                   _DMI_UL(1)

/* DMI_ATR_CRSEATF (rh) */
#define DMI_ATR_CRSEATF_POS                  _DMI_UL(7)
#define DMI_ATR_CRSEATF_LEN                  _DMI_UL(1)

/* DMI_ATR_CWSEATF (rh) */
#define DMI_ATR_CWSEATF_POS                  _DMI_UL(9)
#define DMI_ATR_CWSEATF_LEN                  _DMI_UL(1)

/* DMI_ATR_CFEATF (rh) */
#define DMI_ATR_CFEATF_POS                   _DMI_UL(10)
#define DMI_ATR_CFEATF_LEN                   _DMI_UL(1)

/* DMI_ATR_CMEATF (rh) */
#define DMI_ATR_CMEATF_POS                   _DMI_UL(11)
#define DMI_ATR_CMEATF_LEN                   _DMI_UL(1)

/* DMI_ATR_SMEATF (rh) */
#define DMI_ATR_SMEATF_POS                   _DMI_UL(15)
#define DMI_ATR_SMEATF_LEN                   _DMI_UL(1)

#endif
