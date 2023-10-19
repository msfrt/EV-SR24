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
 * $Filename__:fpu_1387.h$ 
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
 * $Name______:fpu_1387$ 
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
 *      File name: fpu_1387.h
 *      Version: \main\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _FPU_1387_H
#define _FPU_1387_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _FPU_UL(x) x
#else
    #define _FPU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module FPU on TC1387
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 TRAP_CON;            // [0xF7E1A000] : Trap Control Register
    volatile uint32 TRAP_PC;             // [0xF7E1A004] : Trapping Instruction Program Counter Register
    volatile uint32 TRAP_OPC;            // [0xF7E1A008] : Trapping Instruction Opcode Register
    volatile uint32 RESERVED0[1];        // [0xF7E1A00C...0xF7E1A00F] : reserved space
    volatile uint32 TRAP_SRC1;           // [0xF7E1A010] : Trapping Instruction Operand Register
    volatile uint32 TRAP_SRC2;           // [0xF7E1A014] : Trapping Instruction Operand Register
    volatile uint32 TRAP_SRC3;           // [0xF7E1A018] : Trapping Instruction Operand Register
    volatile uint32 RESERVED1[1];        // [0xF7E1A01C...0xF7E1A01F] : reserved space
    volatile uint32 ID;                  // [0xF7E1A020] : Trapping Identification Register
} FPU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern FPU_RegMap_t FPU __attribute__ ((asection (".bss.label_only")));


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

/* FPU_ID_MOD_NUMBER (r) */
#define FPU_ID_MOD_NUMBER_POS                _FPU_UL(16)
#define FPU_ID_MOD_NUMBER_LEN                _FPU_UL(16)

/* FPU_ID_MOD_REV (r) */
#define FPU_ID_MOD_REV_POS                   _FPU_UL(0)
#define FPU_ID_MOD_REV_LEN                   _FPU_UL(8)

/* FPU_ID_MOD_TYPE (r) */
#define FPU_ID_MOD_TYPE_POS                  _FPU_UL(8)
#define FPU_ID_MOD_TYPE_LEN                  _FPU_UL(8)

/* FPU_TRAP_CON_TST (rh) */
#define FPU_TRAP_CON_TST_POS                 _FPU_UL(0)
#define FPU_TRAP_CON_TST_LEN                 _FPU_UL(1)

/* FPU_TRAP_CON_TCL (w) */
#define FPU_TRAP_CON_TCL_POS                 _FPU_UL(1)
#define FPU_TRAP_CON_TCL_LEN                 _FPU_UL(1)

/* FPU_TRAP_CON_RM (rh) */
#define FPU_TRAP_CON_RM_POS                  _FPU_UL(8)
#define FPU_TRAP_CON_RM_LEN                  _FPU_UL(2)

/* FPU_TRAP_CON_FXE (rw) */
#define FPU_TRAP_CON_FXE_POS                 _FPU_UL(18)
#define FPU_TRAP_CON_FXE_LEN                 _FPU_UL(1)

/* FPU_TRAP_CON_FUE (rw) */
#define FPU_TRAP_CON_FUE_POS                 _FPU_UL(19)
#define FPU_TRAP_CON_FUE_LEN                 _FPU_UL(1)

/* FPU_TRAP_CON_FZE (rw) */
#define FPU_TRAP_CON_FZE_POS                 _FPU_UL(20)
#define FPU_TRAP_CON_FZE_LEN                 _FPU_UL(1)

/* FPU_TRAP_CON_FVE (rw) */
#define FPU_TRAP_CON_FVE_POS                 _FPU_UL(21)
#define FPU_TRAP_CON_FVE_LEN                 _FPU_UL(1)

/* FPU_TRAP_CON_FIE (rw) */
#define FPU_TRAP_CON_FIE_POS                 _FPU_UL(22)
#define FPU_TRAP_CON_FIE_LEN                 _FPU_UL(1)

/* FPU_TRAP_CON_FX (rh) */
#define FPU_TRAP_CON_FX_POS                  _FPU_UL(26)
#define FPU_TRAP_CON_FX_LEN                  _FPU_UL(1)

/* FPU_TRAP_CON_FU (rh) */
#define FPU_TRAP_CON_FU_POS                  _FPU_UL(27)
#define FPU_TRAP_CON_FU_LEN                  _FPU_UL(1)

/* FPU_TRAP_CON_FZ (rh) */
#define FPU_TRAP_CON_FZ_POS                  _FPU_UL(28)
#define FPU_TRAP_CON_FZ_LEN                  _FPU_UL(1)

/* FPU_TRAP_CON_FV (rh) */
#define FPU_TRAP_CON_FV_POS                  _FPU_UL(29)
#define FPU_TRAP_CON_FV_LEN                  _FPU_UL(1)

/* FPU_TRAP_CON_FI (rh) */
#define FPU_TRAP_CON_FI_POS                  _FPU_UL(30)
#define FPU_TRAP_CON_FI_LEN                  _FPU_UL(1)

/* FPU_TRAP_PC_PC (rh) */
#define FPU_TRAP_PC_PC_POS                   _FPU_UL(0)
#define FPU_TRAP_PC_PC_LEN                   _FPU_UL(32)

/* FPU_TRAP_OPC_OPC (rh) */
#define FPU_TRAP_OPC_OPC_POS                 _FPU_UL(0)
#define FPU_TRAP_OPC_OPC_LEN                 _FPU_UL(8)

/* FPU_TRAP_OPC_FMT (rh) */
#define FPU_TRAP_OPC_FMT_POS                 _FPU_UL(8)
#define FPU_TRAP_OPC_FMT_LEN                 _FPU_UL(1)

/* FPU_TRAP_OPC_DREG (rh) */
#define FPU_TRAP_OPC_DREG_POS                _FPU_UL(16)
#define FPU_TRAP_OPC_DREG_LEN                _FPU_UL(4)

/* FPU_TRAP_SRC1_PC (rh) */
#define FPU_TRAP_SRC1_PC_POS                 _FPU_UL(0)
#define FPU_TRAP_SRC1_PC_LEN                 _FPU_UL(32)

/* FPU_TRAP_SRC2_PC (rh) */
#define FPU_TRAP_SRC2_PC_POS                 _FPU_UL(0)
#define FPU_TRAP_SRC2_PC_LEN                 _FPU_UL(32)

/* FPU_TRAP_SRC3_PC (rh) */
#define FPU_TRAP_SRC3_PC_POS                 _FPU_UL(0)
#define FPU_TRAP_SRC3_PC_LEN                 _FPU_UL(32)

/* FPU_ID_MOD (rh) */
#define FPU_ID_MOD_POS                       _FPU_UL(16)
#define FPU_ID_MOD_LEN                       _FPU_UL(16)

/* FPU_ID_MOD_REV (rh) */
#define FPU_ID_MOD_REV_POS                   _FPU_UL(0)
#define FPU_ID_MOD_REV_LEN                   _FPU_UL(8)

/* FPU_ID_MOD_32B (rh) */
#define FPU_ID_MOD_32B_POS                   _FPU_UL(8)
#define FPU_ID_MOD_32B_LEN                   _FPU_UL(8)

#endif
