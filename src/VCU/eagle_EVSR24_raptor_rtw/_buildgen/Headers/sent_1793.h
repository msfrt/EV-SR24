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
 * $Filename__:sent_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:22.10.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:sent_1793$ 
 * $Variant___:1.12.0$ 
 * $Revision__:1$ 
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
 * 1.12.0; 1     22.10.2010 RAT1COB
 *   TC1793 Update
 * 
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SENT_1793_H
#define _SENT_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _SENT_UL(x) x
#else
    #define _SENT_UL(x) x##UL
#endif

/* Channel specific registers */
typedef struct
{
    volatile uint32 CPDR;               // [0xF032xx00] : Channel Pre Divider Register
    volatile uint32 CFDR;               // [0xF032xx04] : Channel Fractional Divider Register
    volatile uint32 RCR;                // [0xF032xx08] : Receiver Control Register
    volatile uint32 RSR;                // [0xF032xx0C] : Receive Status Register
    volatile uint32 SDS;                // [0xF032xx10] : Serial Data and Status Register
    volatile uint32 IOCR;               // [0xF032xx14] : Input and Output Control Register
    volatile uint32 SCR;                // [0xF032xx18] : SPC Control Register
    volatile uint32 VIEW;               // [0xF032xx1C] : Receive Data View Register
    volatile uint32 INTSTAT;            // [0xF032xx20] : Interrupt Status Register
    volatile uint32 INTSET;             // [0xF032xx24] : Interrupt Set Register
    volatile uint32 INTCLR;             // [0xF032xx28] : Interrupt Clear Register
    volatile uint32 INTEN;              // [0xF032xx2C] : Interrupt Enable Register
    volatile uint32 INP;                // [0xF032xx30] : Interrupt Node Pointer Register
    volatile uint32 RESERVED[3];        // [0xF032xx34...0xF032xx3F] : reserved space
} SENT_ChannelRegMap_t;

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module SENT on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0321000] : SENT Clock Control Register
    volatile uint32 RESERVED0[1];        // [0xF0321004...0xF0321007] : reserved space
    volatile uint32 ID;                  // [0xF0321008] : Module Identification Register
    volatile uint32 FDR;                 // [0xF032100C] : SENT Fractional Divider Register
    volatile uint32 RESERVED1[1];        // [0xF0321010...0xF0321013] : reserved space
    volatile uint32 INTOV;               // [0xF0321014] : Interrupt Overview Register
    volatile uint32 RESERVED2[26];       // [0xF0321018...0xF032107F] : reserved space
    volatile uint32 RDR0;                // [0xF0321080] : Receive Data Register 0
    volatile uint32 RDR1;                // [0xF0321084] : Receive Data Register 1
    volatile uint32 RDR2;                // [0xF0321088] : Receive Data Register 2
    volatile uint32 RDR3;                // [0xF032108C] : Receive Data Register 3
    volatile uint32 RDR4;                // [0xF0321090] : Receive Data Register 4
    volatile uint32 RDR5;                // [0xF0321094] : Receive Data Register 5
    volatile uint32 RDR6;                // [0xF0321098] : Receive Data Register 6
    volatile uint32 RDR7;                // [0xF032109C] : Receive Data Register 7
    volatile uint32 RESERVED3[24];       // [0xF03210A0...0xF03210FF] : reserved space
    SENT_ChannelRegMap_t CHANNEL[8];     // 0xF0321100...0xF03212FF]  : channel specific registers 0-7
    volatile uint32 RESERVED4[444];     // [0xF0321300...0xF03219EF] : reserved space
    volatile uint32 SRC3;                // [0xF03219F0] : Service Request Control 3 Register
    volatile uint32 SRC2;                // [0xF03219F4] : Service Request Control 2 Register
    volatile uint32 SRC1;                // [0xF03219F8] : Service Request Control 1 Register
    volatile uint32 SRC0;                // [0xF03219FC] : Service Request Control 0 Register
} SENT_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern SENT_RegMap_t SENT __attribute__ ((asection (".bss.label_only")));


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

/* SENT_ID_MOD_NUMBER (r) */
#define SENT_ID_MOD_NUMBER_POS                _SENT_UL(16)
#define SENT_ID_MOD_NUMBER_LEN                _SENT_UL(16)

/* SENT_ID_MOD_REV (r) */
#define SENT_ID_MOD_REV_POS                   _SENT_UL(0)
#define SENT_ID_MOD_REV_LEN                   _SENT_UL(8)

/* SENT_ID_MOD_TYPE (r) */
#define SENT_ID_MOD_TYPE_POS                  _SENT_UL(8)
#define SENT_ID_MOD_TYPE_LEN                  _SENT_UL(8)

/* SENT_CLC_DISR (rw) */
#define SENT_CLC_DISR_POS                    _SENT_UL(0)
#define SENT_CLC_DISR_LEN                    _SENT_UL(1)

/* SENT_CLC_DISS (r) */
#define SENT_CLC_DISS_POS                    _SENT_UL(1)
#define SENT_CLC_DISS_LEN                    _SENT_UL(1)

/* SENT_CLC_SPEN (rw) */
#define SENT_CLC_SPEN_POS                    _SENT_UL(2)
#define SENT_CLC_SPEN_LEN                    _SENT_UL(1)

/* SENT_CLC_EDIS (rw) */
#define SENT_CLC_EDIS_POS                    _SENT_UL(3)
#define SENT_CLC_EDIS_LEN                    _SENT_UL(1)

/* SENT_CLC_SBWE (w) */
#define SENT_CLC_SBWE_POS                    _SENT_UL(4)
#define SENT_CLC_SBWE_LEN                    _SENT_UL(1)

/* SENT_CLC_FSOE (rw) */
#define SENT_CLC_FSOE_POS                    _SENT_UL(5)
#define SENT_CLC_FSOE_LEN                    _SENT_UL(1)

/* SENT_ID_MODREV (r) */
#define SENT_ID_MODREV_POS                   _SENT_UL(0)
#define SENT_ID_MODREV_LEN                   _SENT_UL(8)

/* SENT_ID_MODTYPE (r) */
#define SENT_ID_MODTYPE_POS                  _SENT_UL(8)
#define SENT_ID_MODTYPE_LEN                  _SENT_UL(8)

/* SENT_ID_MODNUM (r) */
#define SENT_ID_MODNUM_POS                   _SENT_UL(16)
#define SENT_ID_MODNUM_LEN                   _SENT_UL(16)

/* SENT_FDR_STEP (rw) */
#define SENT_FDR_STEP_POS                    _SENT_UL(0)
#define SENT_FDR_STEP_LEN                    _SENT_UL(10)

/* SENT_FDR_FDIS (rw) */
#define SENT_FDR_FDIS_POS                    _SENT_UL(10)
#define SENT_FDR_FDIS_LEN                    _SENT_UL(1)

/* SENT_FDR_DM (rw) */
#define SENT_FDR_DM_POS                      _SENT_UL(14)
#define SENT_FDR_DM_LEN                      _SENT_UL(2)

/* SENT_FDR_RESULT (rh) */
#define SENT_FDR_RESULT_POS                  _SENT_UL(16)
#define SENT_FDR_RESULT_LEN                  _SENT_UL(10)

/* SENT_INTOV_IPC0 (rh) */
#define SENT_INTOV_IPC0_POS                  _SENT_UL(0)
#define SENT_INTOV_IPC0_LEN                  _SENT_UL(1)

/* SENT_INTOV_IPC1 (rh) */
#define SENT_INTOV_IPC1_POS                  _SENT_UL(1)
#define SENT_INTOV_IPC1_LEN                  _SENT_UL(1)

/* SENT_INTOV_IPC2 (rh) */
#define SENT_INTOV_IPC2_POS                  _SENT_UL(2)
#define SENT_INTOV_IPC2_LEN                  _SENT_UL(1)

/* SENT_INTOV_IPC3 (rh) */
#define SENT_INTOV_IPC3_POS                  _SENT_UL(3)
#define SENT_INTOV_IPC3_LEN                  _SENT_UL(1)

/* SENT_INTOV_IPC4 (rh) */
#define SENT_INTOV_IPC4_POS                  _SENT_UL(4)
#define SENT_INTOV_IPC4_LEN                  _SENT_UL(1)

/* SENT_INTOV_IPC5 (rh) */
#define SENT_INTOV_IPC5_POS                  _SENT_UL(5)
#define SENT_INTOV_IPC5_LEN                  _SENT_UL(1)

/* SENT_INTOV_IPC6 (rh) */
#define SENT_INTOV_IPC6_POS                  _SENT_UL(6)
#define SENT_INTOV_IPC6_LEN                  _SENT_UL(1)

/* SENT_INTOV_IPC7 (rh) */
#define SENT_INTOV_IPC7_POS                  _SENT_UL(7)
#define SENT_INTOV_IPC7_LEN                  _SENT_UL(1)

/* SENT_RDR0_RD0 (rh) */
#define SENT_RDR0_RD0_POS                    _SENT_UL(0)
#define SENT_RDR0_RD0_LEN                    _SENT_UL(4)

/* SENT_RDR0_RD1 (rh) */
#define SENT_RDR0_RD1_POS                    _SENT_UL(4)
#define SENT_RDR0_RD1_LEN                    _SENT_UL(4)

/* SENT_RDR0_RD2 (rh) */
#define SENT_RDR0_RD2_POS                    _SENT_UL(8)
#define SENT_RDR0_RD2_LEN                    _SENT_UL(4)

/* SENT_RDR0_RD3 (rh) */
#define SENT_RDR0_RD3_POS                    _SENT_UL(12)
#define SENT_RDR0_RD3_LEN                    _SENT_UL(4)

/* SENT_RDR0_RD4 (rh) */
#define SENT_RDR0_RD4_POS                    _SENT_UL(16)
#define SENT_RDR0_RD4_LEN                    _SENT_UL(4)

/* SENT_RDR0_RD5 (rh) */
#define SENT_RDR0_RD5_POS                    _SENT_UL(20)
#define SENT_RDR0_RD5_LEN                    _SENT_UL(4)

/* SENT_RDR0_RD6 (rh) */
#define SENT_RDR0_RD6_POS                    _SENT_UL(24)
#define SENT_RDR0_RD6_LEN                    _SENT_UL(4)

/* SENT_RDR0_RD7 (rh) */
#define SENT_RDR0_RD7_POS                    _SENT_UL(28)
#define SENT_RDR0_RD7_LEN                    _SENT_UL(4)

/* SENT_RDR1_RD0 (rh) */
#define SENT_RDR1_RD0_POS                    _SENT_UL(0)
#define SENT_RDR1_RD0_LEN                    _SENT_UL(4)

/* SENT_RDR1_RD1 (rh) */
#define SENT_RDR1_RD1_POS                    _SENT_UL(4)
#define SENT_RDR1_RD1_LEN                    _SENT_UL(4)

/* SENT_RDR1_RD2 (rh) */
#define SENT_RDR1_RD2_POS                    _SENT_UL(8)
#define SENT_RDR1_RD2_LEN                    _SENT_UL(4)

/* SENT_RDR1_RD3 (rh) */
#define SENT_RDR1_RD3_POS                    _SENT_UL(12)
#define SENT_RDR1_RD3_LEN                    _SENT_UL(4)

/* SENT_RDR1_RD4 (rh) */
#define SENT_RDR1_RD4_POS                    _SENT_UL(16)
#define SENT_RDR1_RD4_LEN                    _SENT_UL(4)

/* SENT_RDR1_RD5 (rh) */
#define SENT_RDR1_RD5_POS                    _SENT_UL(20)
#define SENT_RDR1_RD5_LEN                    _SENT_UL(4)

/* SENT_RDR1_RD6 (rh) */
#define SENT_RDR1_RD6_POS                    _SENT_UL(24)
#define SENT_RDR1_RD6_LEN                    _SENT_UL(4)

/* SENT_RDR1_RD7 (rh) */
#define SENT_RDR1_RD7_POS                    _SENT_UL(28)
#define SENT_RDR1_RD7_LEN                    _SENT_UL(4)

/* SENT_RDR2_RD0 (rh) */
#define SENT_RDR2_RD0_POS                    _SENT_UL(0)
#define SENT_RDR2_RD0_LEN                    _SENT_UL(4)

/* SENT_RDR2_RD1 (rh) */
#define SENT_RDR2_RD1_POS                    _SENT_UL(4)
#define SENT_RDR2_RD1_LEN                    _SENT_UL(4)

/* SENT_RDR2_RD2 (rh) */
#define SENT_RDR2_RD2_POS                    _SENT_UL(8)
#define SENT_RDR2_RD2_LEN                    _SENT_UL(4)

/* SENT_RDR2_RD3 (rh) */
#define SENT_RDR2_RD3_POS                    _SENT_UL(12)
#define SENT_RDR2_RD3_LEN                    _SENT_UL(4)

/* SENT_RDR2_RD4 (rh) */
#define SENT_RDR2_RD4_POS                    _SENT_UL(16)
#define SENT_RDR2_RD4_LEN                    _SENT_UL(4)

/* SENT_RDR2_RD5 (rh) */
#define SENT_RDR2_RD5_POS                    _SENT_UL(20)
#define SENT_RDR2_RD5_LEN                    _SENT_UL(4)

/* SENT_RDR2_RD6 (rh) */
#define SENT_RDR2_RD6_POS                    _SENT_UL(24)
#define SENT_RDR2_RD6_LEN                    _SENT_UL(4)

/* SENT_RDR2_RD7 (rh) */
#define SENT_RDR2_RD7_POS                    _SENT_UL(28)
#define SENT_RDR2_RD7_LEN                    _SENT_UL(4)

/* SENT_RDR3_RD0 (rh) */
#define SENT_RDR3_RD0_POS                    _SENT_UL(0)
#define SENT_RDR3_RD0_LEN                    _SENT_UL(4)

/* SENT_RDR3_RD1 (rh) */
#define SENT_RDR3_RD1_POS                    _SENT_UL(4)
#define SENT_RDR3_RD1_LEN                    _SENT_UL(4)

/* SENT_RDR3_RD2 (rh) */
#define SENT_RDR3_RD2_POS                    _SENT_UL(8)
#define SENT_RDR3_RD2_LEN                    _SENT_UL(4)

/* SENT_RDR3_RD3 (rh) */
#define SENT_RDR3_RD3_POS                    _SENT_UL(12)
#define SENT_RDR3_RD3_LEN                    _SENT_UL(4)

/* SENT_RDR3_RD4 (rh) */
#define SENT_RDR3_RD4_POS                    _SENT_UL(16)
#define SENT_RDR3_RD4_LEN                    _SENT_UL(4)

/* SENT_RDR3_RD5 (rh) */
#define SENT_RDR3_RD5_POS                    _SENT_UL(20)
#define SENT_RDR3_RD5_LEN                    _SENT_UL(4)

/* SENT_RDR3_RD6 (rh) */
#define SENT_RDR3_RD6_POS                    _SENT_UL(24)
#define SENT_RDR3_RD6_LEN                    _SENT_UL(4)

/* SENT_RDR3_RD7 (rh) */
#define SENT_RDR3_RD7_POS                    _SENT_UL(28)
#define SENT_RDR3_RD7_LEN                    _SENT_UL(4)

/* SENT_RDR4_RD0 (rh) */
#define SENT_RDR4_RD0_POS                    _SENT_UL(0)
#define SENT_RDR4_RD0_LEN                    _SENT_UL(4)

/* SENT_RDR4_RD1 (rh) */
#define SENT_RDR4_RD1_POS                    _SENT_UL(4)
#define SENT_RDR4_RD1_LEN                    _SENT_UL(4)

/* SENT_RDR4_RD2 (rh) */
#define SENT_RDR4_RD2_POS                    _SENT_UL(8)
#define SENT_RDR4_RD2_LEN                    _SENT_UL(4)

/* SENT_RDR4_RD3 (rh) */
#define SENT_RDR4_RD3_POS                    _SENT_UL(12)
#define SENT_RDR4_RD3_LEN                    _SENT_UL(4)

/* SENT_RDR4_RD4 (rh) */
#define SENT_RDR4_RD4_POS                    _SENT_UL(16)
#define SENT_RDR4_RD4_LEN                    _SENT_UL(4)

/* SENT_RDR4_RD5 (rh) */
#define SENT_RDR4_RD5_POS                    _SENT_UL(20)
#define SENT_RDR4_RD5_LEN                    _SENT_UL(4)

/* SENT_RDR4_RD6 (rh) */
#define SENT_RDR4_RD6_POS                    _SENT_UL(24)
#define SENT_RDR4_RD6_LEN                    _SENT_UL(4)

/* SENT_RDR4_RD7 (rh) */
#define SENT_RDR4_RD7_POS                    _SENT_UL(28)
#define SENT_RDR4_RD7_LEN                    _SENT_UL(4)

/* SENT_RDR5_RD0 (rh) */
#define SENT_RDR5_RD0_POS                    _SENT_UL(0)
#define SENT_RDR5_RD0_LEN                    _SENT_UL(4)

/* SENT_RDR5_RD1 (rh) */
#define SENT_RDR5_RD1_POS                    _SENT_UL(4)
#define SENT_RDR5_RD1_LEN                    _SENT_UL(4)

/* SENT_RDR5_RD2 (rh) */
#define SENT_RDR5_RD2_POS                    _SENT_UL(8)
#define SENT_RDR5_RD2_LEN                    _SENT_UL(4)

/* SENT_RDR5_RD3 (rh) */
#define SENT_RDR5_RD3_POS                    _SENT_UL(12)
#define SENT_RDR5_RD3_LEN                    _SENT_UL(4)

/* SENT_RDR5_RD4 (rh) */
#define SENT_RDR5_RD4_POS                    _SENT_UL(16)
#define SENT_RDR5_RD4_LEN                    _SENT_UL(4)

/* SENT_RDR5_RD5 (rh) */
#define SENT_RDR5_RD5_POS                    _SENT_UL(20)
#define SENT_RDR5_RD5_LEN                    _SENT_UL(4)

/* SENT_RDR5_RD6 (rh) */
#define SENT_RDR5_RD6_POS                    _SENT_UL(24)
#define SENT_RDR5_RD6_LEN                    _SENT_UL(4)

/* SENT_RDR5_RD7 (rh) */
#define SENT_RDR5_RD7_POS                    _SENT_UL(28)
#define SENT_RDR5_RD7_LEN                    _SENT_UL(4)

/* SENT_RDR6_RD0 (rh) */
#define SENT_RDR6_RD0_POS                    _SENT_UL(0)
#define SENT_RDR6_RD0_LEN                    _SENT_UL(4)

/* SENT_RDR6_RD1 (rh) */
#define SENT_RDR6_RD1_POS                    _SENT_UL(4)
#define SENT_RDR6_RD1_LEN                    _SENT_UL(4)

/* SENT_RDR6_RD2 (rh) */
#define SENT_RDR6_RD2_POS                    _SENT_UL(8)
#define SENT_RDR6_RD2_LEN                    _SENT_UL(4)

/* SENT_RDR6_RD3 (rh) */
#define SENT_RDR6_RD3_POS                    _SENT_UL(12)
#define SENT_RDR6_RD3_LEN                    _SENT_UL(4)

/* SENT_RDR6_RD4 (rh) */
#define SENT_RDR6_RD4_POS                    _SENT_UL(16)
#define SENT_RDR6_RD4_LEN                    _SENT_UL(4)

/* SENT_RDR6_RD5 (rh) */
#define SENT_RDR6_RD5_POS                    _SENT_UL(20)
#define SENT_RDR6_RD5_LEN                    _SENT_UL(4)

/* SENT_RDR6_RD6 (rh) */
#define SENT_RDR6_RD6_POS                    _SENT_UL(24)
#define SENT_RDR6_RD6_LEN                    _SENT_UL(4)

/* SENT_RDR6_RD7 (rh) */
#define SENT_RDR6_RD7_POS                    _SENT_UL(28)
#define SENT_RDR6_RD7_LEN                    _SENT_UL(4)

/* SENT_RDR7_RD0 (rh) */
#define SENT_RDR7_RD0_POS                    _SENT_UL(0)
#define SENT_RDR7_RD0_LEN                    _SENT_UL(4)

/* SENT_RDR7_RD1 (rh) */
#define SENT_RDR7_RD1_POS                    _SENT_UL(4)
#define SENT_RDR7_RD1_LEN                    _SENT_UL(4)

/* SENT_RDR7_RD2 (rh) */
#define SENT_RDR7_RD2_POS                    _SENT_UL(8)
#define SENT_RDR7_RD2_LEN                    _SENT_UL(4)

/* SENT_RDR7_RD3 (rh) */
#define SENT_RDR7_RD3_POS                    _SENT_UL(12)
#define SENT_RDR7_RD3_LEN                    _SENT_UL(4)

/* SENT_RDR7_RD4 (rh) */
#define SENT_RDR7_RD4_POS                    _SENT_UL(16)
#define SENT_RDR7_RD4_LEN                    _SENT_UL(4)

/* SENT_RDR7_RD5 (rh) */
#define SENT_RDR7_RD5_POS                    _SENT_UL(20)
#define SENT_RDR7_RD5_LEN                    _SENT_UL(4)

/* SENT_RDR7_RD6 (rh) */
#define SENT_RDR7_RD6_POS                    _SENT_UL(24)
#define SENT_RDR7_RD6_LEN                    _SENT_UL(4)

/* SENT_RDR7_RD7 (rh) */
#define SENT_RDR7_RD7_POS                    _SENT_UL(28)
#define SENT_RDR7_RD7_LEN                    _SENT_UL(4)


/* SENT_SRC3_SRPN (rw) */
#define SENT_SRC3_SRPN_POS                   _SENT_UL(0)
#define SENT_SRC3_SRPN_LEN                   _SENT_UL(8)

/* SENT_SRC3_TOS (rw) */
#define SENT_SRC3_TOS_POS                    _SENT_UL(10)
#define SENT_SRC3_TOS_LEN                    _SENT_UL(1)

/* SENT_SRC3_SRE (rw) */
#define SENT_SRC3_SRE_POS                    _SENT_UL(12)
#define SENT_SRC3_SRE_LEN                    _SENT_UL(1)

/* SENT_SRC3_SRR (rh) */
#define SENT_SRC3_SRR_POS                    _SENT_UL(13)
#define SENT_SRC3_SRR_LEN                    _SENT_UL(1)

/* SENT_SRC3_CLRR (w) */
#define SENT_SRC3_CLRR_POS                   _SENT_UL(14)
#define SENT_SRC3_CLRR_LEN                   _SENT_UL(1)

/* SENT_SRC3_SETR (w) */
#define SENT_SRC3_SETR_POS                   _SENT_UL(15)
#define SENT_SRC3_SETR_LEN                   _SENT_UL(1)

/* SENT_SRC2_SRPN (rw) */
#define SENT_SRC2_SRPN_POS                   _SENT_UL(0)
#define SENT_SRC2_SRPN_LEN                   _SENT_UL(8)

/* SENT_SRC2_TOS (rw) */
#define SENT_SRC2_TOS_POS                    _SENT_UL(10)
#define SENT_SRC2_TOS_LEN                    _SENT_UL(1)

/* SENT_SRC2_SRE (rw) */
#define SENT_SRC2_SRE_POS                    _SENT_UL(12)
#define SENT_SRC2_SRE_LEN                    _SENT_UL(1)

/* SENT_SRC2_SRR (rh) */
#define SENT_SRC2_SRR_POS                    _SENT_UL(13)
#define SENT_SRC2_SRR_LEN                    _SENT_UL(1)

/* SENT_SRC2_CLRR (w) */
#define SENT_SRC2_CLRR_POS                   _SENT_UL(14)
#define SENT_SRC2_CLRR_LEN                   _SENT_UL(1)

/* SENT_SRC2_SETR (w) */
#define SENT_SRC2_SETR_POS                   _SENT_UL(15)
#define SENT_SRC2_SETR_LEN                   _SENT_UL(1)

/* SENT_SRC1_SRPN (rw) */
#define SENT_SRC1_SRPN_POS                   _SENT_UL(0)
#define SENT_SRC1_SRPN_LEN                   _SENT_UL(8)

/* SENT_SRC1_TOS (rw) */
#define SENT_SRC1_TOS_POS                    _SENT_UL(10)
#define SENT_SRC1_TOS_LEN                    _SENT_UL(1)

/* SENT_SRC1_SRE (rw) */
#define SENT_SRC1_SRE_POS                    _SENT_UL(12)
#define SENT_SRC1_SRE_LEN                    _SENT_UL(1)

/* SENT_SRC1_SRR (rh) */
#define SENT_SRC1_SRR_POS                    _SENT_UL(13)
#define SENT_SRC1_SRR_LEN                    _SENT_UL(1)

/* SENT_SRC1_CLRR (w) */
#define SENT_SRC1_CLRR_POS                   _SENT_UL(14)
#define SENT_SRC1_CLRR_LEN                   _SENT_UL(1)

/* SENT_SRC1_SETR (w) */
#define SENT_SRC1_SETR_POS                   _SENT_UL(15)
#define SENT_SRC1_SETR_LEN                   _SENT_UL(1)

/* SENT_SRC0_SRPN (rw) */
#define SENT_SRC0_SRPN_POS                   _SENT_UL(0)
#define SENT_SRC0_SRPN_LEN                   _SENT_UL(8)

/* SENT_SRC0_TOS (rw) */
#define SENT_SRC0_TOS_POS                    _SENT_UL(10)
#define SENT_SRC0_TOS_LEN                    _SENT_UL(1)

/* SENT_SRC0_SRE (rw) */
#define SENT_SRC0_SRE_POS                    _SENT_UL(12)
#define SENT_SRC0_SRE_LEN                    _SENT_UL(1)

/* SENT_SRC0_SRR (rh) */
#define SENT_SRC0_SRR_POS                    _SENT_UL(13)
#define SENT_SRC0_SRR_LEN                    _SENT_UL(1)

/* SENT_SRC0_CLRR (w) */
#define SENT_SRC0_CLRR_POS                   _SENT_UL(14)
#define SENT_SRC0_CLRR_LEN                   _SENT_UL(1)

/* SENT_SRC0_SETR (w) */
#define SENT_SRC0_SETR_POS                   _SENT_UL(15)
#define SENT_SRC0_SETR_LEN                   _SENT_UL(1)


/* modified defines for channel array usage */

/* SENT_CPDR_PDIV (rw) */
#define SENT_CPDR_PDIV_POS                  _SENT_UL(0)
#define SENT_CPDR_PDIV_LEN                  _SENT_UL(12)

/* SENT_CFDR_DIV (rw) */
#define SENT_CFDR_DIV_POS                   _SENT_UL(0)
#define SENT_CFDR_DIV_LEN                   _SENT_UL(12)

/* SENT_CFDR_DIVM (rh) */
#define SENT_CFDR_DIVM_POS                  _SENT_UL(16)
#define SENT_CFDR_DIVM_LEN                  _SENT_UL(12)

/* SENT_RCR_CEN (rw) */
#define SENT_RCR_CEN_POS                    _SENT_UL(0)
#define SENT_RCR_CEN_LEN                    _SENT_UL(1)

/* SENT_RCR_IEP (rw) */
#define SENT_RCR_IEP_POS                    _SENT_UL(1)
#define SENT_RCR_IEP_LEN                    _SENT_UL(1)

/* SENT_RCR_ACE (rw) */
#define SENT_RCR_ACE_POS                    _SENT_UL(2)
#define SENT_RCR_ACE_LEN                    _SENT_UL(1)

/* SENT_RCR_SNI (rw) */
#define SENT_RCR_SNI_POS                    _SENT_UL(3)
#define SENT_RCR_SNI_LEN                    _SENT_UL(1)

/* SENT_RCR_SDP (rw) */
#define SENT_RCR_SDP_POS                    _SENT_UL(4)
#define SENT_RCR_SDP_LEN                    _SENT_UL(1)

/* SENT_RCR_SCDIS (rw) */
#define SENT_RCR_SCDIS_POS                  _SENT_UL(5)
#define SENT_RCR_SCDIS_LEN                  _SENT_UL(1)

/* SENT_RCR_CDIS (rw) */
#define SENT_RCR_CDIS_POS                   _SENT_UL(6)
#define SENT_RCR_CDIS_LEN                   _SENT_UL(1)

/* SENT_RCR_CFC (rw) */
#define SENT_RCR_CFC_POS                    _SENT_UL(7)
#define SENT_RCR_CFC_LEN                    _SENT_UL(1)

/* SENT_RCR_FRL (rw) */
#define SENT_RCR_FRL_POS                    _SENT_UL(8)
#define SENT_RCR_FRL_LEN                    _SENT_UL(8)

/* SENT_RCR_CRZ (rw) */
#define SENT_RCR_CRZ_POS                    _SENT_UL(16)
#define SENT_RCR_CRZ_LEN                    _SENT_UL(1)

/* SENT_RCR_ESF (rw) */
#define SENT_RCR_ESF_POS                    _SENT_UL(17)
#define SENT_RCR_ESF_LEN                    _SENT_UL(1)

/* SENT_RCR_IDE (rw) */
#define SENT_RCR_IDE_POS                    _SENT_UL(18)
#define SENT_RCR_IDE_LEN                    _SENT_UL(1)

/* SENT_RSR_CRC (r) */
#define SENT_RSR_CRC_POS                    _SENT_UL(0)
#define SENT_RSR_CRC_LEN                    _SENT_UL(4)

/* SENT_RSR_CST (r) */
#define SENT_RSR_CST_POS                    _SENT_UL(4)
#define SENT_RSR_CST_LEN                    _SENT_UL(2)

/* SENT_RSR_SCN (r) */
#define SENT_RSR_SCN_POS                    _SENT_UL(8)
#define SENT_RSR_SCN_LEN                    _SENT_UL(4)

/* SENT_SDS_SD (r) */
#define SENT_SDS_SD_POS                     _SENT_UL(0)
#define SENT_SDS_SD_LEN                     _SENT_UL(16)

/* SENT_SDS_MID (r) */
#define SENT_SDS_MID_POS                    _SENT_UL(16)
#define SENT_SDS_MID_LEN                    _SENT_UL(8)

/* SENT_SDS_SCRC (r) */
#define SENT_SDS_SCRC_POS                   _SENT_UL(24)
#define SENT_SDS_SCRC_LEN                   _SENT_UL(6)

/* SENT_SDS_CON (r) */
#define SENT_SDS_CON_POS                    _SENT_UL(31)
#define SENT_SDS_CON_LEN                    _SENT_UL(1)

/* SENT_IOCR_ALTI (rw) */
#define SENT_IOCR_ALTI_POS                  _SENT_UL(0)
#define SENT_IOCR_ALTI_LEN                  _SENT_UL(2)

/* SENT_IOCR_DEPTH (rw) */
#define SENT_IOCR_DEPTH_POS                 _SENT_UL(4)
#define SENT_IOCR_DEPTH_LEN                 _SENT_UL(4)

/* SENT_IOCR_OIE (rw) */
#define SENT_IOCR_OIE_POS                   _SENT_UL(8)
#define SENT_IOCR_OIE_LEN                   _SENT_UL(1)

/* SENT_IOCR_IIE (rw) */
#define SENT_IOCR_IIE_POS                   _SENT_UL(9)
#define SENT_IOCR_IIE_LEN                   _SENT_UL(1)

/* SENT_IOCR_REG (rh) */
#define SENT_IOCR_REG_POS                   _SENT_UL(12)
#define SENT_IOCR_REG_LEN                   _SENT_UL(1)

/* SENT_IOCR_FEG (rh) */
#define SENT_IOCR_FEG_POS                   _SENT_UL(13)
#define SENT_IOCR_FEG_LEN                   _SENT_UL(1)

/* SENT_IOCR_CREG (rw) */
#define SENT_IOCR_CREG_POS                  _SENT_UL(14)
#define SENT_IOCR_CREG_LEN                  _SENT_UL(1)

/* SENT_IOCR_CFEG (rw) */
#define SENT_IOCR_CFEG_POS                  _SENT_UL(15)
#define SENT_IOCR_CFEG_LEN                  _SENT_UL(1)

/* SENT_IOCR_ETS (rw) */
#define SENT_IOCR_ETS_POS                   _SENT_UL(16)
#define SENT_IOCR_ETS_LEN                   _SENT_UL(3)

/* SENT_IOCR_CTR (rw) */
#define SENT_IOCR_CTR_POS                   _SENT_UL(28)
#define SENT_IOCR_CTR_LEN                   _SENT_UL(1)

/* SENT_IOCR_TRM (rh) */
#define SENT_IOCR_TRM_POS                   _SENT_UL(29)
#define SENT_IOCR_TRM_LEN                   _SENT_UL(1)

/* SENT_IOCR_RXM (rh) */
#define SENT_IOCR_RXM_POS                   _SENT_UL(30)
#define SENT_IOCR_RXM_LEN                   _SENT_UL(1)

/* SENT_IOCR_TXM (rh) */
#define SENT_IOCR_TXM_POS                   _SENT_UL(31)
#define SENT_IOCR_TXM_LEN                   _SENT_UL(1)

/* SENT_SCR_PLEN (rw) */
#define SENT_SCR_PLEN_POS                   _SENT_UL(0)
#define SENT_SCR_PLEN_LEN                   _SENT_UL(6)

/* SENT_SCR_TRIG (rw) */
#define SENT_SCR_TRIG_POS                   _SENT_UL(6)
#define SENT_SCR_TRIG_LEN                   _SENT_UL(2)

/* SENT_SCR_DEL (rw) */
#define SENT_SCR_DEL_POS                    _SENT_UL(8)
#define SENT_SCR_DEL_LEN                    _SENT_UL(6)

/* SENT_SCR_BASE (rw) */
#define SENT_SCR_BASE_POS                   _SENT_UL(14)
#define SENT_SCR_BASE_LEN                   _SENT_UL(1)

/* SENT_SCR_TRQ (r) */
#define SENT_SCR_TRQ_POS                    _SENT_UL(15)
#define SENT_SCR_TRQ_LEN                    _SENT_UL(1)

/* SENT_VIEW_RDNP0 (rw) */
#define SENT_VIEW_RDNP_POS                 _SENT_UL(0)
#define SENT_VIEW_RDNP_LEN                 _SENT_UL(3)

/* SENT_VIEW_RDNP1 (rw) */
#define SENT_VIEW_RDNP1_POS                 _SENT_UL(4)
#define SENT_VIEW_RDNP1_LEN                 _SENT_UL(3)

/* SENT_VIEW_RDNP2 (rw) */
#define SENT_VIEW_RDNP2_POS                 _SENT_UL(8)
#define SENT_VIEW_RDNP2_LEN                 _SENT_UL(3)

/* SENT_VIEW_RDNP3 (rw) */
#define SENT_VIEW_RDNP3_POS                 _SENT_UL(12)
#define SENT_VIEW_RDNP3_LEN                 _SENT_UL(3)

/* SENT_VIEW_RDNP4 (rw) */
#define SENT_VIEW_RDNP4_POS                 _SENT_UL(16)
#define SENT_VIEW_RDNP4_LEN                 _SENT_UL(3)

/* SENT_VIEW_RDNP5 (rw) */
#define SENT_VIEW_RDNP5_POS                 _SENT_UL(20)
#define SENT_VIEW_RDNP5_LEN                 _SENT_UL(3)

/* SENT_VIEW_RDNP6 (rw) */
#define SENT_VIEW_RDNP6_POS                 _SENT_UL(24)
#define SENT_VIEW_RDNP6_LEN                 _SENT_UL(3)

/* SENT_VIEW_RDNP7 (rw) */
#define SENT_VIEW_RDNP7_POS                 _SENT_UL(28)
#define SENT_VIEW_RDNP7_LEN                 _SENT_UL(3)

/* SENT_INTSTAT_RSI (rh) */
#define SENT_INTSTAT_RSI_POS                _SENT_UL(0)
#define SENT_INTSTAT_RSI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_RDI (rh) */
#define SENT_INTSTAT_RDI_POS                _SENT_UL(1)
#define SENT_INTSTAT_RDI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_RBI (rh) */
#define SENT_INTSTAT_RBI_POS                _SENT_UL(2)
#define SENT_INTSTAT_RBI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_TDI (rh) */
#define SENT_INTSTAT_TDI_POS                _SENT_UL(3)
#define SENT_INTSTAT_TDI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_TBI (rh) */
#define SENT_INTSTAT_TBI_POS                _SENT_UL(4)
#define SENT_INTSTAT_TBI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_FRI (rh) */
#define SENT_INTSTAT_FRI_POS                _SENT_UL(5)
#define SENT_INTSTAT_FRI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_FDI (rh) */
#define SENT_INTSTAT_FDI_POS                _SENT_UL(6)
#define SENT_INTSTAT_FDI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_NNI (rh) */
#define SENT_INTSTAT_NNI_POS                _SENT_UL(7)
#define SENT_INTSTAT_NNI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_NVI (rh) */
#define SENT_INTSTAT_NVI_POS                _SENT_UL(8)
#define SENT_INTSTAT_NVI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_CRCI (rh) */
#define SENT_INTSTAT_CRCI_POS               _SENT_UL(9)
#define SENT_INTSTAT_CRCI_LEN               _SENT_UL(1)

/* SENT_INTSTAT_WSI (rh) */
#define SENT_INTSTAT_WSI_POS                _SENT_UL(10)
#define SENT_INTSTAT_WSI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_SDI (rh) */
#define SENT_INTSTAT_SDI_POS                _SENT_UL(11)
#define SENT_INTSTAT_SDI_LEN                _SENT_UL(1)

/* SENT_INTSTAT_SCRI (rh) */
#define SENT_INTSTAT_SCRI_POS               _SENT_UL(12)
#define SENT_INTSTAT_SCRI_LEN               _SENT_UL(1)

/* SENT_INTSET_RSI (w) */
#define SENT_INTSET_RSI_POS                 _SENT_UL(0)
#define SENT_INTSET_RSI_LEN                 _SENT_UL(1)

/* SENT_INTSET_RDI (w) */
#define SENT_INTSET_RDI_POS                 _SENT_UL(1)
#define SENT_INTSET_RDI_LEN                 _SENT_UL(1)

/* SENT_INTSET_RBI (w) */
#define SENT_INTSET_RBI_POS                 _SENT_UL(2)
#define SENT_INTSET_RBI_LEN                 _SENT_UL(1)

/* SENT_INTSET_TDI (w) */
#define SENT_INTSET_TDI_POS                 _SENT_UL(3)
#define SENT_INTSET_TDI_LEN                 _SENT_UL(1)

/* SENT_INTSET_TBI (w) */
#define SENT_INTSET_TBI_POS                 _SENT_UL(4)
#define SENT_INTSET_TBI_LEN                 _SENT_UL(1)

/* SENT_INTSET_FRI (w) */
#define SENT_INTSET_FRI_POS                 _SENT_UL(5)
#define SENT_INTSET_FRI_LEN                 _SENT_UL(1)

/* SENT_INTSET_FDI (w) */
#define SENT_INTSET_FDI_POS                 _SENT_UL(6)
#define SENT_INTSET_FDI_LEN                 _SENT_UL(1)

/* SENT_INTSET_NNI (w) */
#define SENT_INTSET_NNI_POS                 _SENT_UL(7)
#define SENT_INTSET_NNI_LEN                 _SENT_UL(1)

/* SENT_INTSET_NVI (w) */
#define SENT_INTSET_NVI_POS                 _SENT_UL(8)
#define SENT_INTSET_NVI_LEN                 _SENT_UL(1)

/* SENT_INTSET_CRCI (w) */
#define SENT_INTSET_CRCI_POS                _SENT_UL(9)
#define SENT_INTSET_CRCI_LEN                _SENT_UL(1)

/* SENT_INTSET_WSI (w) */
#define SENT_INTSET_WSI_POS                 _SENT_UL(10)
#define SENT_INTSET_WSI_LEN                 _SENT_UL(1)

/* SENT_INTSET_SDI (w) */
#define SENT_INTSET_SDI_POS                 _SENT_UL(11)
#define SENT_INTSET_SDI_LEN                 _SENT_UL(1)

/* SENT_INTSET_SCRI (w) */
#define SENT_INTSET_SCRI_POS                _SENT_UL(12)
#define SENT_INTSET_SCRI_LEN                _SENT_UL(1)

/* SENT_INTCLR_RSI (w) */
#define SENT_INTCLR_RSI_POS                 _SENT_UL(0)
#define SENT_INTCLR_RSI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_RDI (w) */
#define SENT_INTCLR_RDI_POS                 _SENT_UL(1)
#define SENT_INTCLR_RDI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_RBI (w) */
#define SENT_INTCLR_RBI_POS                 _SENT_UL(2)
#define SENT_INTCLR_RBI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_TDI (w) */
#define SENT_INTCLR_TDI_POS                 _SENT_UL(3)
#define SENT_INTCLR_TDI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_TBI (w) */
#define SENT_INTCLR_TBI_POS                 _SENT_UL(4)
#define SENT_INTCLR_TBI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_FRI (w) */
#define SENT_INTCLR_FRI_POS                 _SENT_UL(5)
#define SENT_INTCLR_FRI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_FDI (w) */
#define SENT_INTCLR_FDI_POS                 _SENT_UL(6)
#define SENT_INTCLR_FDI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_NNI (w) */
#define SENT_INTCLR_NNI_POS                 _SENT_UL(7)
#define SENT_INTCLR_NNI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_NVI (w) */
#define SENT_INTCLR_NVI_POS                 _SENT_UL(8)
#define SENT_INTCLR_NVI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_CRCI (w) */
#define SENT_INTCLR_CRCI_POS                _SENT_UL(9)
#define SENT_INTCLR_CRCI_LEN                _SENT_UL(1)

/* SENT_INTCLR_WSI (w) */
#define SENT_INTCLR_WSI_POS                 _SENT_UL(10)
#define SENT_INTCLR_WSI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_SDI (w) */
#define SENT_INTCLR_SDI_POS                 _SENT_UL(11)
#define SENT_INTCLR_SDI_LEN                 _SENT_UL(1)

/* SENT_INTCLR_SCRI (w) */
#define SENT_INTCLR_SCRI_POS                _SENT_UL(12)
#define SENT_INTCLR_SCRI_LEN                _SENT_UL(1)

/* SENT_INTEN_RSI (rw) */
#define SENT_INTEN_RSI_POS                  _SENT_UL(0)
#define SENT_INTEN_RSI_LEN                  _SENT_UL(1)

/* SENT_INTEN_RDI (rw) */
#define SENT_INTEN_RDI_POS                  _SENT_UL(1)
#define SENT_INTEN_RDI_LEN                  _SENT_UL(1)

/* SENT_INTEN_RBI (rw) */
#define SENT_INTEN_RBI_POS                  _SENT_UL(2)
#define SENT_INTEN_RBI_LEN                  _SENT_UL(1)

/* SENT_INTEN_TDI (rw) */
#define SENT_INTEN_TDI_POS                  _SENT_UL(3)
#define SENT_INTEN_TDI_LEN                  _SENT_UL(1)

/* SENT_INTEN_TBI (rw) */
#define SENT_INTEN_TBI_POS                  _SENT_UL(4)
#define SENT_INTEN_TBI_LEN                  _SENT_UL(1)

/* SENT_INTEN_FRI (rw) */
#define SENT_INTEN_FRI_POS                  _SENT_UL(5)
#define SENT_INTEN_FRI_LEN                  _SENT_UL(1)

/* SENT_INTEN_FDI (rw) */
#define SENT_INTEN_FDI_POS                  _SENT_UL(6)
#define SENT_INTEN_FDI_LEN                  _SENT_UL(1)

/* SENT_INTEN_NNI (rw) */
#define SENT_INTEN_NNI_POS                  _SENT_UL(7)
#define SENT_INTEN_NNI_LEN                  _SENT_UL(1)

/* SENT_INTEN_NVI (rw) */
#define SENT_INTEN_NVI_POS                  _SENT_UL(8)
#define SENT_INTEN_NVI_LEN                  _SENT_UL(1)

/* SENT_INTEN_CRCI (rw) */
#define SENT_INTEN_CRCI_POS                 _SENT_UL(9)
#define SENT_INTEN_CRCI_LEN                 _SENT_UL(1)

/* SENT_INTEN_WSI (rw) */
#define SENT_INTEN_WSI_POS                  _SENT_UL(10)
#define SENT_INTEN_WSI_LEN                  _SENT_UL(1)

/* SENT_INTEN_SDI (rw) */
#define SENT_INTEN_SDI_POS                  _SENT_UL(11)
#define SENT_INTEN_SDI_LEN                  _SENT_UL(1)

/* SENT_INTEN_SCRI (rw) */
#define SENT_INTEN_SCRI_POS                 _SENT_UL(12)
#define SENT_INTEN_SCRI_LEN                 _SENT_UL(1)

/* SENT_INP_RSI (rw) */
#define SENT_INP_RSI_POS                    _SENT_UL(0)
#define SENT_INP_RSI_LEN                    _SENT_UL(4)

/* SENT_INP_RDI (rw) */
#define SENT_INP_RDI_POS                    _SENT_UL(4)
#define SENT_INP_RDI_LEN                    _SENT_UL(4)

/* SENT_INP_RBI (rw) */
#define SENT_INP_RBI_POS                    _SENT_UL(8)
#define SENT_INP_RBI_LEN                    _SENT_UL(4)

/* SENT_INP_TDI (rw) */
#define SENT_INP_TDI_POS                    _SENT_UL(12)
#define SENT_INP_TDI_LEN                    _SENT_UL(4)

/* SENT_INP_TBI (rw) */
#define SENT_INP_TBI_POS                    _SENT_UL(16)
#define SENT_INP_TBI_LEN                    _SENT_UL(4)

/* SENT_INP_ERRI (rw) */
#define SENT_INP_ERRI_POS                   _SENT_UL(20)
#define SENT_INP_ERRI_LEN                   _SENT_UL(4)

/* SENT_INP_SDI (rw) */
#define SENT_INP_SDI_POS                    _SENT_UL(24)
#define SENT_INP_SDI_LEN                    _SENT_UL(4)




#endif
