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
 * $Filename__:dbcu_1796.h$ 
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
 * $Name______:dbcu_1796$ 
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
 *      File name: dbcu_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DBCU_1796_H
#define _DBCU_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _DBCU_UL(x) x
#else
    #define _DBCU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module DBCU on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF07FFA00...0xF07FFA07] : reserved space
    volatile uint32 ID;                  // [0xF87FFA08] : DBCU Module Identification Register
    volatile uint32 RESERVED1[5];        // [0xF07FFA0C...0xF07FFA1F] : reserved space
    volatile uint32 LEATT;               // [0xF87FFA20] : LMB Error Attributes Register
    volatile uint32 LEADDR;              // [0xF87FFA24] : LMB Error Addres Register
    volatile uint32 LEDATL;              // [0xF87FFA28] : LMB Error Data Register (32 LSB's)
    volatile uint32 LEDATH;              // [0xF87FFA2C] : LMB Error Data Register (32 MSB's)
    volatile uint32 RESERVED2[51];       // [0xF07FFA30...0xF07FFAFB] : reserved space
    volatile uint32 SRC;                 // [0xF87FFAFC] : DBCU Service Request Control Register
} DBCU_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern DBCU_RegMap_t DBCU __attribute__ ((asection (".bss.label_only")));

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

/* DBCU_ID_MOD (r) */
#define DBCU_ID_MOD_POS                _DBCU_UL(16)
#define DBCU_ID_MOD_LEN                _DBCU_UL(16)

/* DBCU_ID_MOD_32B (r) */
#define DBCU_ID_MOD_32B_POS            _DBCU_UL(8)
#define DBCU_ID_MOD_32B_LEN            _DBCU_UL(8)

/* DBCU_ID_REV (r) */
#define DBCU_ID_REV_POS                _DBCU_UL(0)
#define DBCU_ID_REV_LEN                _DBCU_UL(8)

/* DBCU_LEADDR_LEADDR (rh) */
#define DBCU_LEADDR_LEADDR_POS         _DBCU_UL(0)
#define DBCU_LEADDR_LEADDR_LEN         _DBCU_UL(32)

/* DBCU_LEATT_ACK (rh) */
#define DBCU_LEATT_ACK_POS             _DBCU_UL(16)
#define DBCU_LEATT_ACK_LEN             _DBCU_UL(3)

/* DBCU_LEATT_LEC (rwh) */
#define DBCU_LEATT_LEC_POS             _DBCU_UL(0)
#define DBCU_LEATT_LEC_LEN             _DBCU_UL(1)

/* DBCU_LEATT_LOC (rh) */
#define DBCU_LEATT_LOC_POS             _DBCU_UL(15)
#define DBCU_LEATT_LOC_LEN             _DBCU_UL(1)

/* DBCU_LEATT_NOS (rh) */
#define DBCU_LEATT_NOS_POS             _DBCU_UL(14)
#define DBCU_LEATT_NOS_LEN             _DBCU_UL(1)

/* DBCU_LEATT_OPC (rh) */
#define DBCU_LEATT_OPC_POS             _DBCU_UL(28)
#define DBCU_LEATT_OPC_LEN             _DBCU_UL(4)

/* DBCU_LEATT_RD (rh) */
#define DBCU_LEATT_RD_POS              _DBCU_UL(23)
#define DBCU_LEATT_RD_LEN              _DBCU_UL(1)

/* DBCU_LEATT_SVM (rh) */
#define DBCU_LEATT_SVM_POS             _DBCU_UL(21)
#define DBCU_LEATT_SVM_LEN             _DBCU_UL(1)

/* DBCU_LEATT_TAG (rh) */
#define DBCU_LEATT_TAG_POS             _DBCU_UL(24)
#define DBCU_LEATT_TAG_LEN             _DBCU_UL(3)

/* DBCU_LEATT_UIS (rh) */
#define DBCU_LEATT_UIS_POS             _DBCU_UL(19)
#define DBCU_LEATT_UIS_LEN             _DBCU_UL(1)

/* DBCU_LEATT_USER_ATT (rh) */
#define DBCU_LEATT_USER_ATT_POS        _DBCU_UL(4)
#define DBCU_LEATT_USER_ATT_LEN        _DBCU_UL(8)

/* DBCU_LEATT_WR (rh) */
#define DBCU_LEATT_WR_POS              _DBCU_UL(22)
#define DBCU_LEATT_WR_LEN              _DBCU_UL(1)

/* DBCU_LEDATH_LEDAT (rh) */
#define DBCU_LEDATH_LEDAT_POS          _DBCU_UL(0)
#define DBCU_LEDATH_LEDAT_LEN          _DBCU_UL(32)

/* DBCU_LEDATL_LEDAT (rh) */
#define DBCU_LEDATL_LEDAT_POS          _DBCU_UL(0)
#define DBCU_LEDATL_LEDAT_LEN          _DBCU_UL(32)

/* DBCU_SRC_CLRR (w) */
#define DBCU_SRC_CLRR_POS              _DBCU_UL(14)
#define DBCU_SRC_CLRR_LEN              _DBCU_UL(1)

/* DBCU_SRC_SETR (w) */
#define DBCU_SRC_SETR_POS              _DBCU_UL(15)
#define DBCU_SRC_SETR_LEN              _DBCU_UL(1)

/* DBCU_SRC_SRE (rw) */
#define DBCU_SRC_SRE_POS               _DBCU_UL(12)
#define DBCU_SRC_SRE_LEN               _DBCU_UL(1)

/* DBCU_SRC_SRPN (rw) */
#define DBCU_SRC_SRPN_POS              _DBCU_UL(0)
#define DBCU_SRC_SRPN_LEN              _DBCU_UL(8)

/* DBCU_SRC_SRR (rh) */
#define DBCU_SRC_SRR_POS               _DBCU_UL(13)
#define DBCU_SRC_SRR_LEN               _DBCU_UL(1)

/* DBCU_SRC_TOS (r) */
#define DBCU_SRC_TOS_POS               _DBCU_UL(10)
#define DBCU_SRC_TOS_LEN               _DBCU_UL(1)

#endif
