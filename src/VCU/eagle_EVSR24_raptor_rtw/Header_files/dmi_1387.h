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
 * $Filename__:dmi_1387.h$ 
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
 * $Name______:dmi_1387$ 
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
 *      File name: dmi_1387.h
 *      Version: \main\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DMI_1387_H
#define _DMI_1387_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _DMI_UL(x) x
#else
    #define _DMI_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module DMI on TC1387
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
    volatile uint32 RESERVED3[3];        // [0xF87FFC24...0xF87FFC2F] : reserved space
    volatile uint32 ADEDCTL;             // [0xF87FFC30] : Address Error Detection Control Register
    volatile uint32 RESERVED4[1];        // [0xF87FFC34...0xF87FFC37] : reserved space
    volatile uint32 WREDCTL;             // [0xF87FFC38] : Write Data Error Detection Control Register
    volatile uint32 RESERVED5[1];        // [0xF87FFC3C...0xF87FFC3F] : reserved space
    volatile uint32 RDEDCTL;             // [0xF87FFC40] : Read Data Error Detection Control Register
    volatile uint32 RESERVED6[1];        // [0xF87FFC44...0xF87FFC47] : reserved space
    volatile uint32 REEDCTL;             // [0xF87FFC48] : Response Error Detection Control Register
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

/* DMI_ID_MOD_REV (rh) */
#define DMI_ID_MOD_REV_POS                   _DMI_UL(0)
#define DMI_ID_MOD_REV_LEN                   _DMI_UL(8)

/* DMI_ID_MOD_32B (rh) */
#define DMI_ID_MOD_32B_POS                   _DMI_UL(8)
#define DMI_ID_MOD_32B_LEN                   _DMI_UL(8)

/* DMI_ID_MOD (rh) */
#define DMI_ID_MOD_POS                       _DMI_UL(16)
#define DMI_ID_MOD_LEN                       _DMI_UL(16)

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

/* DMI_ADEDCTL_ADFLIP (rw) */
#define DMI_ADEDCTL_ADFLIP_POS               _DMI_UL(0)
#define DMI_ADEDCTL_ADFLIP_LEN               _DMI_UL(8)

/* DMI_ADEDCTL_ABTFLIP (rw) */
#define DMI_ADEDCTL_ABTFLIP_POS              _DMI_UL(8)
#define DMI_ADEDCTL_ABTFLIP_LEN              _DMI_UL(1)

/* DMI_ADEDCTL_IENABLE (rwh) */
#define DMI_ADEDCTL_IENABLE_POS              _DMI_UL(30)
#define DMI_ADEDCTL_IENABLE_LEN              _DMI_UL(1)

/* DMI_ADEDCTL_AENABLE (rwh) */
#define DMI_ADEDCTL_AENABLE_POS              _DMI_UL(31)
#define DMI_ADEDCTL_AENABLE_LEN              _DMI_UL(1)

/* DMI_WREDCTL_WDFLIP (rh) */
#define DMI_WREDCTL_WDFLIP_POS               _DMI_UL(0)
#define DMI_WREDCTL_WDFLIP_LEN               _DMI_UL(8)

/* DMI_WREDCTL_WENABLE (rwh) */
#define DMI_WREDCTL_WENABLE_POS              _DMI_UL(31)
#define DMI_WREDCTL_WENABLE_LEN              _DMI_UL(1)

/* DMI_RDEDCTL_RDFLIP (rw) */
#define DMI_RDEDCTL_RDFLIP_POS               _DMI_UL(0)
#define DMI_RDEDCTL_RDFLIP_LEN               _DMI_UL(8)

/* DMI_RDEDCTL_RENABLE (rwh) */
#define DMI_RDEDCTL_RENABLE_POS              _DMI_UL(31)
#define DMI_RDEDCTL_RENABLE_LEN              _DMI_UL(1)

/* DMI_REEDCTL_RSPFLIP (rw) */
#define DMI_REEDCTL_RSPFLIP_POS              _DMI_UL(0)
#define DMI_REEDCTL_RSPFLIP_LEN              _DMI_UL(5)

/* DMI_REEDCTL_RSENABLE (rwh) */
#define DMI_REEDCTL_RSENABLE_POS             _DMI_UL(31)
#define DMI_REEDCTL_RSENABLE_LEN             _DMI_UL(1)

#endif
