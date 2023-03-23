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
 * $Filename__:lbcu_1387.h$ 
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
 * $Name______:lbcu_1387$ 
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
 *      File name: lbcu_1387.h
 *      Version: \main\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _LBCU_1387_H
#define _LBCU_1387_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _LBCU_UL(x) x
#else
    #define _LBCU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module LBCU on TC1387
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF87FFE08] : Module Identification Register
    volatile uint32 RESERVED0[5];        // [0xF87FFE0C...0xF87FFE1F] : reserved space
    volatile uint32 LEATT;               // [0xF87FFE20] : LBCU LMB Error Attribute Register
    volatile uint32 LEADDR;              // [0xF87FFE24] : LBCU LMB Error Address Register
    volatile uint32 LEDATL;              // [0xF87FFE28] : LBCU LMB Error Data Low Register
    volatile uint32 LEDATH;              // [0xF87FFE2C] : LBCU LMB Error Data High Register
    volatile uint32 RESERVED1[1];        // [0xF87FFE30...0xF87FFE33] : reserved space
    volatile uint32 LERESED;             // [0xF87FFE34] : LMB Error Response Error Detection Register
    volatile uint32 LEDATED;             // [0xF87FFE38] : LMB Error Data Error Detection Register
    volatile uint32 RESERVED2[1];        // [0xF87FFE3C...0xF87FFE3F] : reserved space
    volatile uint32 LSEADS;              // [0xF87FFE40] : LMB Soft Error Address Source Register
    volatile uint32 LSEABS;              // [0xF87FFE44] : LMB Soft Error Abort Source Register
    volatile uint32 LSERDS;              // [0xF87FFE48] : LMB Soft Error Read Source Register
    volatile uint32 LSEWRS;              // [0xF87FFE4C] : LMB Soft Error Write Source Register
    volatile uint32 LSERES;              // [0xF87FFE50] : LMB Soft Error Response Register
    volatile uint32 RESERVED3[42];       // [0xF87FFE54...0xF87FFEFB] : reserved space
    volatile uint32 SRC;                 // [0xF87FFEFC] : LBCU Service Request Control Register
} LBCU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern LBCU_RegMap_t LBCU __attribute__ ((asection (".bss.label_only")));


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

/* LBCU_ID_MOD_NUMBER (r) */
#define LBCU_ID_MOD_NUMBER_POS                _LBCU_UL(16)
#define LBCU_ID_MOD_NUMBER_LEN                _LBCU_UL(16)

/* LBCU_ID_MOD_REV (r) */
#define LBCU_ID_MOD_REV_POS                   _LBCU_UL(0)
#define LBCU_ID_MOD_REV_LEN                   _LBCU_UL(8)

/* LBCU_ID_MOD_TYPE (r) */
#define LBCU_ID_MOD_TYPE_POS                  _LBCU_UL(8)
#define LBCU_ID_MOD_TYPE_LEN                  _LBCU_UL(8)

/* LBCU_ID_MOD_REV (r) */
#define LBCU_ID_MOD_REV_POS                  _LBCU_UL(0)
#define LBCU_ID_MOD_REV_LEN                  _LBCU_UL(8)

/* LBCU_ID_MOD_TYPE (r) */
#define LBCU_ID_MOD_TYPE_POS                 _LBCU_UL(8)
#define LBCU_ID_MOD_TYPE_LEN                 _LBCU_UL(8)

/* LBCU_ID_MOD_NUMBER (r) */
#define LBCU_ID_MOD_NUMBER_POS               _LBCU_UL(16)
#define LBCU_ID_MOD_NUMBER_LEN               _LBCU_UL(16)

/* LBCU_LEATT_LEC (rwh) */
#define LBCU_LEATT_LEC_POS                   _LBCU_UL(0)
#define LBCU_LEATT_LEC_LEN                   _LBCU_UL(1)

/* LBCU_LEATT_FPITAG (rh) */
#define LBCU_LEATT_FPITAG_POS                _LBCU_UL(4)
#define LBCU_LEATT_FPITAG_LEN                _LBCU_UL(4)

/* LBCU_LEATT_NOS (rh) */
#define LBCU_LEATT_NOS_POS                   _LBCU_UL(14)
#define LBCU_LEATT_NOS_LEN                   _LBCU_UL(1)

/* LBCU_LEATT_LOC (rh) */
#define LBCU_LEATT_LOC_POS                   _LBCU_UL(15)
#define LBCU_LEATT_LOC_LEN                   _LBCU_UL(1)

/* LBCU_LEATT_ACK (rh) */
#define LBCU_LEATT_ACK_POS                   _LBCU_UL(16)
#define LBCU_LEATT_ACK_LEN                   _LBCU_UL(3)

/* LBCU_LEATT_UIS (rh) */
#define LBCU_LEATT_UIS_POS                   _LBCU_UL(19)
#define LBCU_LEATT_UIS_LEN                   _LBCU_UL(1)

/* LBCU_LEATT_SVM (rh) */
#define LBCU_LEATT_SVM_POS                   _LBCU_UL(21)
#define LBCU_LEATT_SVM_LEN                   _LBCU_UL(1)

/* LBCU_LEATT_WR (rh) */
#define LBCU_LEATT_WR_POS                    _LBCU_UL(22)
#define LBCU_LEATT_WR_LEN                    _LBCU_UL(1)

/* LBCU_LEATT_RD (rh) */
#define LBCU_LEATT_RD_POS                    _LBCU_UL(23)
#define LBCU_LEATT_RD_LEN                    _LBCU_UL(1)

/* LBCU_LEATT_TAG (rh) */
#define LBCU_LEATT_TAG_POS                   _LBCU_UL(24)
#define LBCU_LEATT_TAG_LEN                   _LBCU_UL(3)

/* LBCU_LEATT_OPC (rh) */
#define LBCU_LEATT_OPC_POS                   _LBCU_UL(28)
#define LBCU_LEATT_OPC_LEN                   _LBCU_UL(4)

/* LBCU_LEADDR_LEADDR (rh) */
#define LBCU_LEADDR_LEADDR_POS               _LBCU_UL(0)
#define LBCU_LEADDR_LEADDR_LEN               _LBCU_UL(32)

/* LBCU_LEDATL_LEDAT_31_0 (rh) */
#define LBCU_LEDATL_LEDAT_31_0_POS           _LBCU_UL(0)
#define LBCU_LEDATL_LEDAT_31_0_LEN           _LBCU_UL(32)

/* LBCU_LEDATH_LEDAT_63_32 (rh) */
#define LBCU_LEDATH_LEDAT_63_32_POS          _LBCU_UL(0)
#define LBCU_LEDATH_LEDAT_63_32_LEN          _LBCU_UL(32)

/* LBCU_LEADDED_ADDR_ED (rh) */
#define LBCU_LEADDED_ADDR_ED_POS             _LBCU_UL(0)
#define LBCU_LEADDED_ADDR_ED_LEN             _LBCU_UL(8)

/* LBCU_LERESED_RESP_ED (rh) */
#define LBCU_LERESED_RESP_ED_POS             _LBCU_UL(0)
#define LBCU_LERESED_RESP_ED_LEN             _LBCU_UL(5)

/* LBCU_LEDATED_DATA_ED (rh) */
#define LBCU_LEDATED_DATA_ED_POS             _LBCU_UL(0)
#define LBCU_LEDATED_DATA_ED_LEN             _LBCU_UL(8)

/* LBCU_LSEADS_LMB_Module (rh) */
#define LBCU_LSEADS_LMB_Module_POS           _LBCU_UL(0)
#define LBCU_LSEADS_LMB_Module_LEN           _LBCU_UL(16)

/* LBCU_LSEABS_LMB_Module (rh) */
#define LBCU_LSEABS_LMB_Module_POS           _LBCU_UL(0)
#define LBCU_LSEABS_LMB_Module_LEN           _LBCU_UL(16)

/* LBCU_LSERDS_LMB_Module (rh) */
#define LBCU_LSERDS_LMB_Module_POS           _LBCU_UL(0)
#define LBCU_LSERDS_LMB_Module_LEN           _LBCU_UL(16)

/* LBCU_LSEWRS_LMB_Module (rh) */
#define LBCU_LSEWRS_LMB_Module_POS           _LBCU_UL(0)
#define LBCU_LSEWRS_LMB_Module_LEN           _LBCU_UL(16)

/* LBCU_LSERES_LMB_Module (rh) */
#define LBCU_LSERES_LMB_Module_POS           _LBCU_UL(0)
#define LBCU_LSERES_LMB_Module_LEN           _LBCU_UL(16)

/* LBCU_SRC_SRPN (rw) */
#define LBCU_SRC_SRPN_POS                    _LBCU_UL(0)
#define LBCU_SRC_SRPN_LEN                    _LBCU_UL(8)

/* LBCU_SRC_TOS (r) */
#define LBCU_SRC_TOS_POS                     _LBCU_UL(10)
#define LBCU_SRC_TOS_LEN                     _LBCU_UL(2)

/* LBCU_SRC_SRE (rw) */
#define LBCU_SRC_SRE_POS                     _LBCU_UL(12)
#define LBCU_SRC_SRE_LEN                     _LBCU_UL(1)

/* LBCU_SRC_SRR (rh) */
#define LBCU_SRC_SRR_POS                     _LBCU_UL(13)
#define LBCU_SRC_SRR_LEN                     _LBCU_UL(1)

/* LBCU_SRC_CLRR (w) */
#define LBCU_SRC_CLRR_POS                    _LBCU_UL(14)
#define LBCU_SRC_CLRR_LEN                    _LBCU_UL(1)

/* LBCU_SRC_SETR (w) */
#define LBCU_SRC_SETR_POS                    _LBCU_UL(15)
#define LBCU_SRC_SETR_LEN                    _LBCU_UL(1)

#endif
