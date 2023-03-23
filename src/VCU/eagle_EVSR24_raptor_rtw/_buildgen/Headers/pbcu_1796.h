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
 * $Filename__:pbcu_1796.h$ 
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
 * $Name______:pbcu_1796$ 
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
 *      File name: pbcu_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PBCU_1796_H
#define _PBCU_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _PBCU_UL(x) x
#else
    #define _PBCU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module PBCU on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF07FFE00...0xF07FFE07] : reserved space
    volatile uint32 ID;                  // [0xF87FFE08] : PBCU Module Identification Register
    volatile uint32 RESERVED1[5];        // [0xF07FFE0C...0xF07FFE1F] : reserved space
    volatile uint32 LEATT;               // [0xF87FFE20] : LMB Error Attributes Register
    volatile uint32 LEADDR;              // [0xF87FFE24] : LMB Error Addres Register
    volatile uint32 LEDATL;              // [0xF87FFE28] : LMB Error Data Register (32 LSB's)
    volatile uint32 LEDATH;              // [0xF87FFE2C] : LMB Error Data Register (32 MSB's)
    volatile uint32 RESERVED2[51];       // [0xF07FFE30...0xF07FFEFB] : reserved space
    volatile uint32 SRC;                 // [0xF87FFEFC] : PBCU Service Request Control Register
} PBCU_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern PBCU_RegMap_t PBCU __attribute__ ((asection (".bss.label_only")));

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

/* PBCU_ID_MOD (r) */
#define PBCU_ID_MOD_POS                _PBCU_UL(16)
#define PBCU_ID_MOD_LEN                _PBCU_UL(16)

/* PBCU_ID_MOD_32B (r) */
#define PBCU_ID_MOD_32B_POS            _PBCU_UL(8)
#define PBCU_ID_MOD_32B_LEN            _PBCU_UL(8)

/* PBCU_ID_REV (r) */
#define PBCU_ID_REV_POS                _PBCU_UL(0)
#define PBCU_ID_REV_LEN                _PBCU_UL(8)

/* PBCU_LEADDR_LEADDR (rh) */
#define PBCU_LEADDR_LEADDR_POS         _PBCU_UL(0)
#define PBCU_LEADDR_LEADDR_LEN         _PBCU_UL(32)

/* PBCU_LEATT_ACK (rh) */
#define PBCU_LEATT_ACK_POS             _PBCU_UL(16)
#define PBCU_LEATT_ACK_LEN             _PBCU_UL(3)

/* PBCU_LEATT_LEC (rwh) */
#define PBCU_LEATT_LEC_POS             _PBCU_UL(0)
#define PBCU_LEATT_LEC_LEN             _PBCU_UL(1)

/* PBCU_LEATT_LOC (rh) */
#define PBCU_LEATT_LOC_POS             _PBCU_UL(15)
#define PBCU_LEATT_LOC_LEN             _PBCU_UL(1)

/* PBCU_LEATT_NOS (rh) */
#define PBCU_LEATT_NOS_POS             _PBCU_UL(14)
#define PBCU_LEATT_NOS_LEN             _PBCU_UL(1)

/* PBCU_LEATT_OPC (rh) */
#define PBCU_LEATT_OPC_POS             _PBCU_UL(28)
#define PBCU_LEATT_OPC_LEN             _PBCU_UL(4)

/* PBCU_LEATT_RD (rh) */
#define PBCU_LEATT_RD_POS              _PBCU_UL(23)
#define PBCU_LEATT_RD_LEN              _PBCU_UL(1)

/* PBCU_LEATT_SVM (rh) */
#define PBCU_LEATT_SVM_POS             _PBCU_UL(21)
#define PBCU_LEATT_SVM_LEN             _PBCU_UL(1)

/* PBCU_LEATT_TAG (rh) */
#define PBCU_LEATT_TAG_POS             _PBCU_UL(24)
#define PBCU_LEATT_TAG_LEN             _PBCU_UL(3)

/* PBCU_LEATT_UIS (rh) */
#define PBCU_LEATT_UIS_POS             _PBCU_UL(19)
#define PBCU_LEATT_UIS_LEN             _PBCU_UL(1)

/* PBCU_LEATT_USER_ATT (rh) */
#define PBCU_LEATT_USER_ATT_POS        _PBCU_UL(4)
#define PBCU_LEATT_USER_ATT_LEN        _PBCU_UL(8)

/* PBCU_LEATT_WR (rh) */
#define PBCU_LEATT_WR_POS              _PBCU_UL(22)
#define PBCU_LEATT_WR_LEN              _PBCU_UL(1)

/* PBCU_LEDATH_LEDAT (rh) */
#define PBCU_LEDATH_LEDAT_POS          _PBCU_UL(0)
#define PBCU_LEDATH_LEDAT_LEN          _PBCU_UL(32)

/* PBCU_LEDATL_LEDAT (rh) */
#define PBCU_LEDATL_LEDAT_POS          _PBCU_UL(0)
#define PBCU_LEDATL_LEDAT_LEN          _PBCU_UL(32)

/* PBCU_SRC_CLRR (w) */
#define PBCU_SRC_CLRR_POS              _PBCU_UL(14)
#define PBCU_SRC_CLRR_LEN              _PBCU_UL(1)

/* PBCU_SRC_SETR (w) */
#define PBCU_SRC_SETR_POS              _PBCU_UL(15)
#define PBCU_SRC_SETR_LEN              _PBCU_UL(1)

/* PBCU_SRC_SRE (rw) */
#define PBCU_SRC_SRE_POS               _PBCU_UL(12)
#define PBCU_SRC_SRE_LEN               _PBCU_UL(1)

/* PBCU_SRC_SRPN (rw) */
#define PBCU_SRC_SRPN_POS              _PBCU_UL(0)
#define PBCU_SRC_SRPN_LEN              _PBCU_UL(8)

/* PBCU_SRC_SRR (rh) */
#define PBCU_SRC_SRR_POS               _PBCU_UL(13)
#define PBCU_SRC_SRR_LEN               _PBCU_UL(1)

/* PBCU_SRC_TOS (r) */
#define PBCU_SRC_TOS_POS               _PBCU_UL(10)
#define PBCU_SRC_TOS_LEN               _PBCU_UL(1)

#endif
