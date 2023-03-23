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
 * $Filename__:cps_1797.h$ 
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
 * $Name______:cps_1797$ 
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
 *      File name: cps_1797.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CPS_1797_H
#define _CPS_1797_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CPS_UL(x) x
#else
    #define _CPS_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CPS on TC1797
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF7E0FF08] : CPS Module Identification Register
    volatile uint32 RESERVED0[44];       // [0xF7E0FF0C...0xF7E0FFBB] : reserved space
    volatile uint32 CPU_SBSRC;           // [0xF7E0FFBC] : CPU Software Breakpoint Service Request Control Register
    volatile uint32 RESERVED1[12];       // [0xF7E0FFC0...0xF7E0FFEF] : reserved space
    volatile uint32 CPU_SRC3;            // [0xF7E0FFF0] : CPU Service Request Control Register 3
    volatile uint32 CPU_SRC2;            // [0xF7E0FFF4] : CPU Service Request Control Register 2
    volatile uint32 CPU_SRC1;            // [0xF7E0FFF8] : CPU Service Request Control Register 1
    volatile uint32 CPU_SRC0;            // [0xF7E0FFFC] : CPU Service Request Control Register 0
} CPS_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CPS_RegMap_t CPS __attribute__ ((asection (".bss.label_only")));


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

/* CPS_ID_MOD_NUMBER (r) */
#define CPS_ID_MOD_NUMBER_POS                _CPS_UL(16)
#define CPS_ID_MOD_NUMBER_LEN                _CPS_UL(16)

/* CPS_ID_MOD_REV (r) */
#define CPS_ID_MOD_REV_POS                   _CPS_UL(0)
#define CPS_ID_MOD_REV_LEN                   _CPS_UL(8)

/* CPS_ID_MOD_TYPE (r) */
#define CPS_ID_MOD_TYPE_POS                  _CPS_UL(8)
#define CPS_ID_MOD_TYPE_LEN                  _CPS_UL(8)

/* CPS_ID_MOD (rh) */
#define CPS_ID_MOD_POS                       _CPS_UL(16)
#define CPS_ID_MOD_LEN                       _CPS_UL(16)

/* CPS_ID_MOD_32B (rh) */
#define CPS_ID_MOD_32B_POS                   _CPS_UL(8)
#define CPS_ID_MOD_32B_LEN                   _CPS_UL(8)

/* CPS_ID_MOD_REV (rh) */
#define CPS_ID_MOD_REV_POS                   _CPS_UL(0)
#define CPS_ID_MOD_REV_LEN                   _CPS_UL(8)

/* CPS_CPU_SBSRC_SRPN (rw) */
#define CPS_CPU_SBSRC_SRPN_POS               _CPS_UL(0)
#define CPS_CPU_SBSRC_SRPN_LEN               _CPS_UL(8)

/* CPS_CPU_SBSRC_TOS (rw) */
#define CPS_CPU_SBSRC_TOS_POS                _CPS_UL(10)
#define CPS_CPU_SBSRC_TOS_LEN                _CPS_UL(1)

/* CPS_CPU_SBSRC_SRE (rw) */
#define CPS_CPU_SBSRC_SRE_POS                _CPS_UL(12)
#define CPS_CPU_SBSRC_SRE_LEN                _CPS_UL(1)

/* CPS_CPU_SBSRC_SRR (rh) */
#define CPS_CPU_SBSRC_SRR_POS                _CPS_UL(13)
#define CPS_CPU_SBSRC_SRR_LEN                _CPS_UL(1)

/* CPS_CPU_SBSRC_CLRR (w) */
#define CPS_CPU_SBSRC_CLRR_POS               _CPS_UL(14)
#define CPS_CPU_SBSRC_CLRR_LEN               _CPS_UL(1)

/* CPS_CPU_SBSRC_SETR (w) */
#define CPS_CPU_SBSRC_SETR_POS               _CPS_UL(15)
#define CPS_CPU_SBSRC_SETR_LEN               _CPS_UL(1)

/* CPS_CPU_SRC3_SRPN (rw) */
#define CPS_CPU_SRC3_SRPN_POS                _CPS_UL(0)
#define CPS_CPU_SRC3_SRPN_LEN                _CPS_UL(8)

/* CPS_CPU_SRC3_TOS (rw) */
#define CPS_CPU_SRC3_TOS_POS                 _CPS_UL(10)
#define CPS_CPU_SRC3_TOS_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC3_SRE (rw) */
#define CPS_CPU_SRC3_SRE_POS                 _CPS_UL(12)
#define CPS_CPU_SRC3_SRE_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC3_SRR (rh) */
#define CPS_CPU_SRC3_SRR_POS                 _CPS_UL(13)
#define CPS_CPU_SRC3_SRR_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC3_CLRR (w) */
#define CPS_CPU_SRC3_CLRR_POS                _CPS_UL(14)
#define CPS_CPU_SRC3_CLRR_LEN                _CPS_UL(1)

/* CPS_CPU_SRC3_SETR (w) */
#define CPS_CPU_SRC3_SETR_POS                _CPS_UL(15)
#define CPS_CPU_SRC3_SETR_LEN                _CPS_UL(1)

/* CPS_CPU_SRC2_SRPN (rw) */
#define CPS_CPU_SRC2_SRPN_POS                _CPS_UL(0)
#define CPS_CPU_SRC2_SRPN_LEN                _CPS_UL(8)

/* CPS_CPU_SRC2_TOS (rw) */
#define CPS_CPU_SRC2_TOS_POS                 _CPS_UL(10)
#define CPS_CPU_SRC2_TOS_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC2_SRE (rw) */
#define CPS_CPU_SRC2_SRE_POS                 _CPS_UL(12)
#define CPS_CPU_SRC2_SRE_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC2_SRR (rh) */
#define CPS_CPU_SRC2_SRR_POS                 _CPS_UL(13)
#define CPS_CPU_SRC2_SRR_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC2_CLRR (w) */
#define CPS_CPU_SRC2_CLRR_POS                _CPS_UL(14)
#define CPS_CPU_SRC2_CLRR_LEN                _CPS_UL(1)

/* CPS_CPU_SRC2_SETR (w) */
#define CPS_CPU_SRC2_SETR_POS                _CPS_UL(15)
#define CPS_CPU_SRC2_SETR_LEN                _CPS_UL(1)

/* CPS_CPU_SRC1_SRPN (rw) */
#define CPS_CPU_SRC1_SRPN_POS                _CPS_UL(0)
#define CPS_CPU_SRC1_SRPN_LEN                _CPS_UL(8)

/* CPS_CPU_SRC1_TOS (rw) */
#define CPS_CPU_SRC1_TOS_POS                 _CPS_UL(10)
#define CPS_CPU_SRC1_TOS_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC1_SRE (rw) */
#define CPS_CPU_SRC1_SRE_POS                 _CPS_UL(12)
#define CPS_CPU_SRC1_SRE_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC1_SRR (rh) */
#define CPS_CPU_SRC1_SRR_POS                 _CPS_UL(13)
#define CPS_CPU_SRC1_SRR_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC1_CLRR (w) */
#define CPS_CPU_SRC1_CLRR_POS                _CPS_UL(14)
#define CPS_CPU_SRC1_CLRR_LEN                _CPS_UL(1)

/* CPS_CPU_SRC1_SETR (w) */
#define CPS_CPU_SRC1_SETR_POS                _CPS_UL(15)
#define CPS_CPU_SRC1_SETR_LEN                _CPS_UL(1)

/* CPS_CPU_SRC0_SRPN (rw) */
#define CPS_CPU_SRC0_SRPN_POS                _CPS_UL(0)
#define CPS_CPU_SRC0_SRPN_LEN                _CPS_UL(8)

/* CPS_CPU_SRC0_TOS (rw) */
#define CPS_CPU_SRC0_TOS_POS                 _CPS_UL(10)
#define CPS_CPU_SRC0_TOS_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC0_SRE (rw) */
#define CPS_CPU_SRC0_SRE_POS                 _CPS_UL(12)
#define CPS_CPU_SRC0_SRE_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC0_SRR (rh) */
#define CPS_CPU_SRC0_SRR_POS                 _CPS_UL(13)
#define CPS_CPU_SRC0_SRR_LEN                 _CPS_UL(1)

/* CPS_CPU_SRC0_CLRR (w) */
#define CPS_CPU_SRC0_CLRR_POS                _CPS_UL(14)
#define CPS_CPU_SRC0_CLRR_LEN                _CPS_UL(1)

/* CPS_CPU_SRC0_SETR (w) */
#define CPS_CPU_SRC0_SETR_POS                _CPS_UL(15)
#define CPS_CPU_SRC0_SETR_LEN                _CPS_UL(1)

#endif
