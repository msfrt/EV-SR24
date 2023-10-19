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
 * $Filename__:core_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:03.06.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:core_1793$ 
 * $Variant___:1.15.0$ 
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
 * 1.15.0; 0     03.06.2011 RAT1COB
 *   TC1793 update
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

#ifndef _CORE_1793_H
#define _CORE_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CORE_UL(x) x
#else
    #define _CORE_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CORE on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* This defines can only be used with _mtcr() _mfcr(). They are NOT usable with __mtcr __mfcr */
#define CORE_DBGSR_MXCR_OFFSET		0xFD00
#define CORE_EXEVT_MXCR_OFFSET		0xFD08
#define CORE_CREVT_MXCR_OFFSET		0xFD0C
#define CORE_SWEVT_MXCR_OFFSET		0xFD10
#define CORE_TR0EVT_MXCR_OFFSET		0xF000
#define CORE_TR1EVT_MXCR_OFFSET		0xF008
#define CORE_TR2EVT_MXCR_OFFSET		0xF010
#define CORE_TR3EVT_MXCR_OFFSET		0xF018
#define CORE_TR4EVT_MXCR_OFFSET		0xF020
#define CORE_TR5EVT_MXCR_OFFSET		0xF028
#define CORE_TR6EVT_MXCR_OFFSET		0xF030
#define CORE_TR7EVT_MXCR_OFFSET		0xF038
#define CORE_TR0ADR_MXCR_OFFSET		0xF004
#define CORE_TR1ADR_MXCR_OFFSET		0xF00C
#define CORE_TR2ADR_MXCR_OFFSET		0xF014
#define CORE_TR3ADR_MXCR_OFFSET		0xF01C
#define CORE_TR4ADR_MXCR_OFFSET		0xF024
#define CORE_TR5ADR_MXCR_OFFSET		0xF02C
#define CORE_TR6ADR_MXCR_OFFSET		0xF034
#define CORE_TR7ADR_MXCR_OFFSET		0xF03C
#define CORE_TRIG_ACC_MXCR_OFFSET		0xFD30
#define CORE_DMS_MXCR_OFFSET		0xFD40
#define CORE_DCX_MXCR_OFFSET		0xFD44
#define CORE_DBGTCR_MXCR_OFFSET		0xFD48
#define CORE_CCTRL_MXCR_OFFSET		0xFC00
#define CORE_CCNT_MXCR_OFFSET		0xFC04
#define CORE_ICNT_MXCR_OFFSET		0xFC08
#define CORE_M1CNT_MXCR_OFFSET		0xFC0C
#define CORE_M2CNT_MXCR_OFFSET		0xFC10
#define CORE_M3CNT_MXCR_OFFSET		0xFC14
#if 0 
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 TR0EVT;              // [0xF7E1F000] : Trigger Event 0
    volatile uint32 TR0ADR;              // [0xF7E1F004] : Trigger Address 0
    volatile uint32 TR1EVT;              // [0xF7E1F008] : Trigger Event 1
    volatile uint32 TR1ADR;              // [0xF7E1F00C] : Trigger Address 1
    volatile uint32 TR2EVT;              // [0xF7E1F010] : Trigger Event 2
    volatile uint32 TR2ADR;              // [0xF7E1F014] : Trigger Address 2
    volatile uint32 TR3EVT;              // [0xF7E1F018] : Trigger Event 3
    volatile uint32 TR3ADR;              // [0xF7E1F01C] : Trigger Address 3
    volatile uint32 TR4EVT;              // [0xF7E1F020] : Trigger Event 4
    volatile uint32 TR4ADR;              // [0xF7E1F024] : Trigger Address 4
    volatile uint32 TR5EVT;              // [0xF7E1F028] : Trigger Event 5
    volatile uint32 TR5ADR;              // [0xF7E1F02C] : Trigger Address 5
    volatile uint32 TR6EVT;              // [0xF7E1F030] : Trigger Event 6
    volatile uint32 TR6ADR;              // [0xF7E1F034] : Trigger Address 6
    volatile uint32 TR7EVT;              // [0xF7E1F038] : Trigger Event 7
    volatile uint32 TR7ADR;              // [0xF7E1F03C] : Trigger Address 7
    volatile uint32 RESERVED0[752];      // [0xF7E1F040...0xF7E1FBFF] : reserved space
    volatile uint32 CCTRL;               // [0xF7E1FC00] : Counter Control
    volatile uint32 CCNT;                // [0xF7E1FC04] : CPU Clock Cycle Count
    volatile uint32 ICNT;                // [0xF7E1FC08] : Instruction Count
    volatile uint32 M1CNT;               // [0xF7E1FC0C] : Multi-Count Register 1
    volatile uint32 M2CNT;               // [0xF7E1FC10] : Multi-Count Register 2
    volatile uint32 M3CNT;               // [0xF7E1FC14] : Multi-Count Register 3
    volatile uint32 RESERVED1[58];       // [0xF7E1FC18...0xF7E1FCFF] : reserved space
    volatile uint32 DBGSR;               // [0xF7E1FD00] : Debug Status Register
    volatile uint32 RESERVED2[1];        // [0xF7E1FD04...0xF7E1FD07] : reserved space
    volatile uint32 EXEVT;               // [0xF7E1FD08] : External Event Register
    volatile uint32 CREVT;               // [0xF7E1FD0C] : Core Register Access Event
    volatile uint32 SWEVT;               // [0xF7E1FD10] : Software Debug Event
    volatile uint32 RESERVED3[7];        // [0xF7E1FD14...0xF7E1FD2F] : reserved space
    volatile uint32 TRIG_ACC;            // [0xF7E1FD30] : Trigger Address x
    volatile uint32 RESERVED4[3];        // [0xF7E1FD34...0xF7E1FD3F] : reserved space
    volatile uint32 DMS;                 // [0xF7E1FD40] : Debug Monitor Start Address
    volatile uint32 DCX;                 // [0xF7E1FD44] : Debug Context Save Area Pointer
    volatile uint32 DBGTCR;              // [0xF7E1FD48] : Debug Trap Control Register
} CORE_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CORE_RegMap_t CORE __attribute__ ((asection (".bss.label_only")));
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

/* CORE_ID_MOD_NUMBER (r) */
#define CORE_ID_MOD_NUMBER_POS                _CORE_UL(16)
#define CORE_ID_MOD_NUMBER_LEN                _CORE_UL(16)

/* CORE_ID_MOD_REV (r) */
#define CORE_ID_MOD_REV_POS                   _CORE_UL(0)
#define CORE_ID_MOD_REV_LEN                   _CORE_UL(8)

/* CORE_ID_MOD_TYPE (r) */
#define CORE_ID_MOD_TYPE_POS                  _CORE_UL(8)
#define CORE_ID_MOD_TYPE_LEN                  _CORE_UL(8)

/* CORE_TR0EVT_EVTA (rw) */
#define CORE_TR0EVT_EVTA_POS                 _CORE_UL(0)
#define CORE_TR0EVT_EVTA_LEN                 _CORE_UL(3)

/* CORE_TR0EVT_BBM (rw) */
#define CORE_TR0EVT_BBM_POS                  _CORE_UL(3)
#define CORE_TR0EVT_BBM_LEN                  _CORE_UL(1)

/* CORE_TR0EVT_BOD (rw) */
#define CORE_TR0EVT_BOD_POS                  _CORE_UL(4)
#define CORE_TR0EVT_BOD_LEN                  _CORE_UL(1)

/* CORE_TR0EVT_SUSP (rw) */
#define CORE_TR0EVT_SUSP_POS                 _CORE_UL(5)
#define CORE_TR0EVT_SUSP_LEN                 _CORE_UL(1)

/* CORE_TR0EVT_CNT (rw) */
#define CORE_TR0EVT_CNT_POS                  _CORE_UL(6)
#define CORE_TR0EVT_CNT_LEN                  _CORE_UL(2)

/* CORE_TR0EVT_RES (r) */
#define CORE_TR0EVT_RES_POS                  _CORE_UL(8)
#define CORE_TR0EVT_RES_LEN                  _CORE_UL(4)

/* CORE_TR0EVT_TYP (rw) */
#define CORE_TR0EVT_TYP_POS                  _CORE_UL(12)
#define CORE_TR0EVT_TYP_LEN                  _CORE_UL(1)

/* CORE_TR0EVT_RNG (rw) */
#define CORE_TR0EVT_RNG_POS                  _CORE_UL(13)
#define CORE_TR0EVT_RNG_LEN                  _CORE_UL(1)

/* CORE_TR0EVT_ASI_EN (rw) */
#define CORE_TR0EVT_ASI_EN_POS               _CORE_UL(15)
#define CORE_TR0EVT_ASI_EN_LEN               _CORE_UL(1)

/* CORE_TR0EVT_ASI (rw) */
#define CORE_TR0EVT_ASI_POS                  _CORE_UL(16)
#define CORE_TR0EVT_ASI_LEN                  _CORE_UL(5)

/* CORE_TR0EVT_AST (rw) */
#define CORE_TR0EVT_AST_POS                  _CORE_UL(27)
#define CORE_TR0EVT_AST_LEN                  _CORE_UL(1)

/* CORE_TR0EVT_ALD (rw) */
#define CORE_TR0EVT_ALD_POS                  _CORE_UL(28)
#define CORE_TR0EVT_ALD_LEN                  _CORE_UL(1)

/* CORE_TR0ADR_ADDR (rw) */
#define CORE_TR0ADR_ADDR_POS                 _CORE_UL(0)
#define CORE_TR0ADR_ADDR_LEN                 _CORE_UL(32)

/* CORE_TR1EVT_EVTA (rw) */
#define CORE_TR1EVT_EVTA_POS                 _CORE_UL(0)
#define CORE_TR1EVT_EVTA_LEN                 _CORE_UL(3)

/* CORE_TR1EVT_BBM (rw) */
#define CORE_TR1EVT_BBM_POS                  _CORE_UL(3)
#define CORE_TR1EVT_BBM_LEN                  _CORE_UL(1)

/* CORE_TR1EVT_BOD (rw) */
#define CORE_TR1EVT_BOD_POS                  _CORE_UL(4)
#define CORE_TR1EVT_BOD_LEN                  _CORE_UL(1)

/* CORE_TR1EVT_SUSP (rw) */
#define CORE_TR1EVT_SUSP_POS                 _CORE_UL(5)
#define CORE_TR1EVT_SUSP_LEN                 _CORE_UL(1)

/* CORE_TR1EVT_CNT (rw) */
#define CORE_TR1EVT_CNT_POS                  _CORE_UL(6)
#define CORE_TR1EVT_CNT_LEN                  _CORE_UL(2)

/* CORE_TR1EVT_RES (r) */
#define CORE_TR1EVT_RES_POS                  _CORE_UL(8)
#define CORE_TR1EVT_RES_LEN                  _CORE_UL(4)

/* CORE_TR1EVT_TYP (rw) */
#define CORE_TR1EVT_TYP_POS                  _CORE_UL(12)
#define CORE_TR1EVT_TYP_LEN                  _CORE_UL(1)

/* CORE_TR1EVT_RNG (rw) */
#define CORE_TR1EVT_RNG_POS                  _CORE_UL(13)
#define CORE_TR1EVT_RNG_LEN                  _CORE_UL(1)

/* CORE_TR1EVT_ASI_EN (rw) */
#define CORE_TR1EVT_ASI_EN_POS               _CORE_UL(15)
#define CORE_TR1EVT_ASI_EN_LEN               _CORE_UL(1)

/* CORE_TR1EVT_ASI (rw) */
#define CORE_TR1EVT_ASI_POS                  _CORE_UL(16)
#define CORE_TR1EVT_ASI_LEN                  _CORE_UL(5)

/* CORE_TR1EVT_AST (rw) */
#define CORE_TR1EVT_AST_POS                  _CORE_UL(27)
#define CORE_TR1EVT_AST_LEN                  _CORE_UL(1)

/* CORE_TR1EVT_ALD (rw) */
#define CORE_TR1EVT_ALD_POS                  _CORE_UL(28)
#define CORE_TR1EVT_ALD_LEN                  _CORE_UL(1)

/* CORE_TR1ADR_ADDR (rw) */
#define CORE_TR1ADR_ADDR_POS                 _CORE_UL(0)
#define CORE_TR1ADR_ADDR_LEN                 _CORE_UL(32)

/* CORE_TR2EVT_EVTA (rw) */
#define CORE_TR2EVT_EVTA_POS                 _CORE_UL(0)
#define CORE_TR2EVT_EVTA_LEN                 _CORE_UL(3)

/* CORE_TR2EVT_BBM (rw) */
#define CORE_TR2EVT_BBM_POS                  _CORE_UL(3)
#define CORE_TR2EVT_BBM_LEN                  _CORE_UL(1)

/* CORE_TR2EVT_BOD (rw) */
#define CORE_TR2EVT_BOD_POS                  _CORE_UL(4)
#define CORE_TR2EVT_BOD_LEN                  _CORE_UL(1)

/* CORE_TR2EVT_SUSP (rw) */
#define CORE_TR2EVT_SUSP_POS                 _CORE_UL(5)
#define CORE_TR2EVT_SUSP_LEN                 _CORE_UL(1)

/* CORE_TR2EVT_CNT (rw) */
#define CORE_TR2EVT_CNT_POS                  _CORE_UL(6)
#define CORE_TR2EVT_CNT_LEN                  _CORE_UL(2)

/* CORE_TR2EVT_RES (r) */
#define CORE_TR2EVT_RES_POS                  _CORE_UL(8)
#define CORE_TR2EVT_RES_LEN                  _CORE_UL(4)

/* CORE_TR2EVT_TYP (rw) */
#define CORE_TR2EVT_TYP_POS                  _CORE_UL(12)
#define CORE_TR2EVT_TYP_LEN                  _CORE_UL(1)

/* CORE_TR2EVT_RNG (rw) */
#define CORE_TR2EVT_RNG_POS                  _CORE_UL(13)
#define CORE_TR2EVT_RNG_LEN                  _CORE_UL(1)

/* CORE_TR2EVT_ASI_EN (rw) */
#define CORE_TR2EVT_ASI_EN_POS               _CORE_UL(15)
#define CORE_TR2EVT_ASI_EN_LEN               _CORE_UL(1)

/* CORE_TR2EVT_ASI (rw) */
#define CORE_TR2EVT_ASI_POS                  _CORE_UL(16)
#define CORE_TR2EVT_ASI_LEN                  _CORE_UL(5)

/* CORE_TR2EVT_AST (rw) */
#define CORE_TR2EVT_AST_POS                  _CORE_UL(27)
#define CORE_TR2EVT_AST_LEN                  _CORE_UL(1)

/* CORE_TR2EVT_ALD (rw) */
#define CORE_TR2EVT_ALD_POS                  _CORE_UL(28)
#define CORE_TR2EVT_ALD_LEN                  _CORE_UL(1)

/* CORE_TR2ADR_ADDR (rw) */
#define CORE_TR2ADR_ADDR_POS                 _CORE_UL(0)
#define CORE_TR2ADR_ADDR_LEN                 _CORE_UL(32)

/* CORE_TR3EVT_EVTA (rw) */
#define CORE_TR3EVT_EVTA_POS                 _CORE_UL(0)
#define CORE_TR3EVT_EVTA_LEN                 _CORE_UL(3)

/* CORE_TR3EVT_BBM (rw) */
#define CORE_TR3EVT_BBM_POS                  _CORE_UL(3)
#define CORE_TR3EVT_BBM_LEN                  _CORE_UL(1)

/* CORE_TR3EVT_BOD (rw) */
#define CORE_TR3EVT_BOD_POS                  _CORE_UL(4)
#define CORE_TR3EVT_BOD_LEN                  _CORE_UL(1)

/* CORE_TR3EVT_SUSP (rw) */
#define CORE_TR3EVT_SUSP_POS                 _CORE_UL(5)
#define CORE_TR3EVT_SUSP_LEN                 _CORE_UL(1)

/* CORE_TR3EVT_CNT (rw) */
#define CORE_TR3EVT_CNT_POS                  _CORE_UL(6)
#define CORE_TR3EVT_CNT_LEN                  _CORE_UL(2)

/* CORE_TR3EVT_RES (r) */
#define CORE_TR3EVT_RES_POS                  _CORE_UL(8)
#define CORE_TR3EVT_RES_LEN                  _CORE_UL(4)

/* CORE_TR3EVT_TYP (rw) */
#define CORE_TR3EVT_TYP_POS                  _CORE_UL(12)
#define CORE_TR3EVT_TYP_LEN                  _CORE_UL(1)

/* CORE_TR3EVT_RNG (rw) */
#define CORE_TR3EVT_RNG_POS                  _CORE_UL(13)
#define CORE_TR3EVT_RNG_LEN                  _CORE_UL(1)

/* CORE_TR3EVT_ASI_EN (rw) */
#define CORE_TR3EVT_ASI_EN_POS               _CORE_UL(15)
#define CORE_TR3EVT_ASI_EN_LEN               _CORE_UL(1)

/* CORE_TR3EVT_ASI (rw) */
#define CORE_TR3EVT_ASI_POS                  _CORE_UL(16)
#define CORE_TR3EVT_ASI_LEN                  _CORE_UL(5)

/* CORE_TR3EVT_AST (rw) */
#define CORE_TR3EVT_AST_POS                  _CORE_UL(27)
#define CORE_TR3EVT_AST_LEN                  _CORE_UL(1)

/* CORE_TR3EVT_ALD (rw) */
#define CORE_TR3EVT_ALD_POS                  _CORE_UL(28)
#define CORE_TR3EVT_ALD_LEN                  _CORE_UL(1)

/* CORE_TR3ADR_ADDR (rw) */
#define CORE_TR3ADR_ADDR_POS                 _CORE_UL(0)
#define CORE_TR3ADR_ADDR_LEN                 _CORE_UL(32)

/* CORE_TR4EVT_EVTA (rw) */
#define CORE_TR4EVT_EVTA_POS                 _CORE_UL(0)
#define CORE_TR4EVT_EVTA_LEN                 _CORE_UL(3)

/* CORE_TR4EVT_BBM (rw) */
#define CORE_TR4EVT_BBM_POS                  _CORE_UL(3)
#define CORE_TR4EVT_BBM_LEN                  _CORE_UL(1)

/* CORE_TR4EVT_BOD (rw) */
#define CORE_TR4EVT_BOD_POS                  _CORE_UL(4)
#define CORE_TR4EVT_BOD_LEN                  _CORE_UL(1)

/* CORE_TR4EVT_SUSP (rw) */
#define CORE_TR4EVT_SUSP_POS                 _CORE_UL(5)
#define CORE_TR4EVT_SUSP_LEN                 _CORE_UL(1)

/* CORE_TR4EVT_CNT (rw) */
#define CORE_TR4EVT_CNT_POS                  _CORE_UL(6)
#define CORE_TR4EVT_CNT_LEN                  _CORE_UL(2)

/* CORE_TR4EVT_RES (r) */
#define CORE_TR4EVT_RES_POS                  _CORE_UL(8)
#define CORE_TR4EVT_RES_LEN                  _CORE_UL(4)

/* CORE_TR4EVT_TYP (rw) */
#define CORE_TR4EVT_TYP_POS                  _CORE_UL(12)
#define CORE_TR4EVT_TYP_LEN                  _CORE_UL(1)

/* CORE_TR4EVT_RNG (rw) */
#define CORE_TR4EVT_RNG_POS                  _CORE_UL(13)
#define CORE_TR4EVT_RNG_LEN                  _CORE_UL(1)

/* CORE_TR4EVT_ASI_EN (rw) */
#define CORE_TR4EVT_ASI_EN_POS               _CORE_UL(15)
#define CORE_TR4EVT_ASI_EN_LEN               _CORE_UL(1)

/* CORE_TR4EVT_ASI (rw) */
#define CORE_TR4EVT_ASI_POS                  _CORE_UL(16)
#define CORE_TR4EVT_ASI_LEN                  _CORE_UL(5)

/* CORE_TR4EVT_AST (rw) */
#define CORE_TR4EVT_AST_POS                  _CORE_UL(27)
#define CORE_TR4EVT_AST_LEN                  _CORE_UL(1)

/* CORE_TR4EVT_ALD (rw) */
#define CORE_TR4EVT_ALD_POS                  _CORE_UL(28)
#define CORE_TR4EVT_ALD_LEN                  _CORE_UL(1)

/* CORE_TR4ADR_ADDR (rw) */
#define CORE_TR4ADR_ADDR_POS                 _CORE_UL(0)
#define CORE_TR4ADR_ADDR_LEN                 _CORE_UL(32)

/* CORE_TR5EVT_EVTA (rw) */
#define CORE_TR5EVT_EVTA_POS                 _CORE_UL(0)
#define CORE_TR5EVT_EVTA_LEN                 _CORE_UL(3)

/* CORE_TR5EVT_BBM (rw) */
#define CORE_TR5EVT_BBM_POS                  _CORE_UL(3)
#define CORE_TR5EVT_BBM_LEN                  _CORE_UL(1)

/* CORE_TR5EVT_BOD (rw) */
#define CORE_TR5EVT_BOD_POS                  _CORE_UL(4)
#define CORE_TR5EVT_BOD_LEN                  _CORE_UL(1)

/* CORE_TR5EVT_SUSP (rw) */
#define CORE_TR5EVT_SUSP_POS                 _CORE_UL(5)
#define CORE_TR5EVT_SUSP_LEN                 _CORE_UL(1)

/* CORE_TR5EVT_CNT (rw) */
#define CORE_TR5EVT_CNT_POS                  _CORE_UL(6)
#define CORE_TR5EVT_CNT_LEN                  _CORE_UL(2)

/* CORE_TR5EVT_RES (r) */
#define CORE_TR5EVT_RES_POS                  _CORE_UL(8)
#define CORE_TR5EVT_RES_LEN                  _CORE_UL(4)

/* CORE_TR5EVT_TYP (rw) */
#define CORE_TR5EVT_TYP_POS                  _CORE_UL(12)
#define CORE_TR5EVT_TYP_LEN                  _CORE_UL(1)

/* CORE_TR5EVT_RNG (rw) */
#define CORE_TR5EVT_RNG_POS                  _CORE_UL(13)
#define CORE_TR5EVT_RNG_LEN                  _CORE_UL(1)

/* CORE_TR5EVT_ASI_EN (rw) */
#define CORE_TR5EVT_ASI_EN_POS               _CORE_UL(15)
#define CORE_TR5EVT_ASI_EN_LEN               _CORE_UL(1)

/* CORE_TR5EVT_ASI (rw) */
#define CORE_TR5EVT_ASI_POS                  _CORE_UL(16)
#define CORE_TR5EVT_ASI_LEN                  _CORE_UL(5)

/* CORE_TR5EVT_AST (rw) */
#define CORE_TR5EVT_AST_POS                  _CORE_UL(27)
#define CORE_TR5EVT_AST_LEN                  _CORE_UL(1)

/* CORE_TR5EVT_ALD (rw) */
#define CORE_TR5EVT_ALD_POS                  _CORE_UL(28)
#define CORE_TR5EVT_ALD_LEN                  _CORE_UL(1)

/* CORE_TR5ADR_ADDR (rw) */
#define CORE_TR5ADR_ADDR_POS                 _CORE_UL(0)
#define CORE_TR5ADR_ADDR_LEN                 _CORE_UL(32)

/* CORE_TR6EVT_EVTA (rw) */
#define CORE_TR6EVT_EVTA_POS                 _CORE_UL(0)
#define CORE_TR6EVT_EVTA_LEN                 _CORE_UL(3)

/* CORE_TR6EVT_BBM (rw) */
#define CORE_TR6EVT_BBM_POS                  _CORE_UL(3)
#define CORE_TR6EVT_BBM_LEN                  _CORE_UL(1)

/* CORE_TR6EVT_BOD (rw) */
#define CORE_TR6EVT_BOD_POS                  _CORE_UL(4)
#define CORE_TR6EVT_BOD_LEN                  _CORE_UL(1)

/* CORE_TR6EVT_SUSP (rw) */
#define CORE_TR6EVT_SUSP_POS                 _CORE_UL(5)
#define CORE_TR6EVT_SUSP_LEN                 _CORE_UL(1)

/* CORE_TR6EVT_CNT (rw) */
#define CORE_TR6EVT_CNT_POS                  _CORE_UL(6)
#define CORE_TR6EVT_CNT_LEN                  _CORE_UL(2)

/* CORE_TR6EVT_RES (r) */
#define CORE_TR6EVT_RES_POS                  _CORE_UL(8)
#define CORE_TR6EVT_RES_LEN                  _CORE_UL(4)

/* CORE_TR6EVT_TYP (rw) */
#define CORE_TR6EVT_TYP_POS                  _CORE_UL(12)
#define CORE_TR6EVT_TYP_LEN                  _CORE_UL(1)

/* CORE_TR6EVT_RNG (rw) */
#define CORE_TR6EVT_RNG_POS                  _CORE_UL(13)
#define CORE_TR6EVT_RNG_LEN                  _CORE_UL(1)

/* CORE_TR6EVT_ASI_EN (rw) */
#define CORE_TR6EVT_ASI_EN_POS               _CORE_UL(15)
#define CORE_TR6EVT_ASI_EN_LEN               _CORE_UL(1)

/* CORE_TR6EVT_ASI (rw) */
#define CORE_TR6EVT_ASI_POS                  _CORE_UL(16)
#define CORE_TR6EVT_ASI_LEN                  _CORE_UL(5)

/* CORE_TR6EVT_AST (rw) */
#define CORE_TR6EVT_AST_POS                  _CORE_UL(27)
#define CORE_TR6EVT_AST_LEN                  _CORE_UL(1)

/* CORE_TR6EVT_ALD (rw) */
#define CORE_TR6EVT_ALD_POS                  _CORE_UL(28)
#define CORE_TR6EVT_ALD_LEN                  _CORE_UL(1)

/* CORE_TR6ADR_ADDR (rw) */
#define CORE_TR6ADR_ADDR_POS                 _CORE_UL(0)
#define CORE_TR6ADR_ADDR_LEN                 _CORE_UL(32)

/* CORE_TR7EVT_EVTA (rw) */
#define CORE_TR7EVT_EVTA_POS                 _CORE_UL(0)
#define CORE_TR7EVT_EVTA_LEN                 _CORE_UL(3)

/* CORE_TR7EVT_BBM (rw) */
#define CORE_TR7EVT_BBM_POS                  _CORE_UL(3)
#define CORE_TR7EVT_BBM_LEN                  _CORE_UL(1)

/* CORE_TR7EVT_BOD (rw) */
#define CORE_TR7EVT_BOD_POS                  _CORE_UL(4)
#define CORE_TR7EVT_BOD_LEN                  _CORE_UL(1)

/* CORE_TR7EVT_SUSP (rw) */
#define CORE_TR7EVT_SUSP_POS                 _CORE_UL(5)
#define CORE_TR7EVT_SUSP_LEN                 _CORE_UL(1)

/* CORE_TR7EVT_CNT (rw) */
#define CORE_TR7EVT_CNT_POS                  _CORE_UL(6)
#define CORE_TR7EVT_CNT_LEN                  _CORE_UL(2)

/* CORE_TR7EVT_RES (r) */
#define CORE_TR7EVT_RES_POS                  _CORE_UL(8)
#define CORE_TR7EVT_RES_LEN                  _CORE_UL(4)

/* CORE_TR7EVT_TYP (rw) */
#define CORE_TR7EVT_TYP_POS                  _CORE_UL(12)
#define CORE_TR7EVT_TYP_LEN                  _CORE_UL(1)

/* CORE_TR7EVT_RNG (rw) */
#define CORE_TR7EVT_RNG_POS                  _CORE_UL(13)
#define CORE_TR7EVT_RNG_LEN                  _CORE_UL(1)

/* CORE_TR7EVT_ASI_EN (rw) */
#define CORE_TR7EVT_ASI_EN_POS               _CORE_UL(15)
#define CORE_TR7EVT_ASI_EN_LEN               _CORE_UL(1)

/* CORE_TR7EVT_ASI (rw) */
#define CORE_TR7EVT_ASI_POS                  _CORE_UL(16)
#define CORE_TR7EVT_ASI_LEN                  _CORE_UL(5)

/* CORE_TR7EVT_AST (rw) */
#define CORE_TR7EVT_AST_POS                  _CORE_UL(27)
#define CORE_TR7EVT_AST_LEN                  _CORE_UL(1)

/* CORE_TR7EVT_ALD (rw) */
#define CORE_TR7EVT_ALD_POS                  _CORE_UL(28)
#define CORE_TR7EVT_ALD_LEN                  _CORE_UL(1)

/* CORE_TR7ADR_ADDR (rw) */
#define CORE_TR7ADR_ADDR_POS                 _CORE_UL(0)
#define CORE_TR7ADR_ADDR_LEN                 _CORE_UL(32)

/* CORE_CCTRL_CM (rw) */
#define CORE_CCTRL_CM_POS                    _CORE_UL(0)
#define CORE_CCTRL_CM_LEN                    _CORE_UL(1)

/* CORE_CCTRL_CE (rw) */
#define CORE_CCTRL_CE_POS                    _CORE_UL(1)
#define CORE_CCTRL_CE_LEN                    _CORE_UL(1)

/* CORE_CCTRL_M1 (rw) */
#define CORE_CCTRL_M1_POS                    _CORE_UL(2)
#define CORE_CCTRL_M1_LEN                    _CORE_UL(3)

/* CORE_CCTRL_M2 (rw) */
#define CORE_CCTRL_M2_POS                    _CORE_UL(5)
#define CORE_CCTRL_M2_LEN                    _CORE_UL(3)

/* CORE_CCTRL_M3 (rw) */
#define CORE_CCTRL_M3_POS                    _CORE_UL(8)
#define CORE_CCTRL_M3_LEN                    _CORE_UL(3)

/* CORE_CCTRL_RES (r) */
#define CORE_CCTRL_RES_POS                   _CORE_UL(11)
#define CORE_CCTRL_RES_LEN                   _CORE_UL(21)

/* CORE_CCNT_CountValue (rw) */
#define CORE_CCNT_CountValue_POS             _CORE_UL(0)
#define CORE_CCNT_CountValue_LEN             _CORE_UL(31)

/* CORE_CCNT_SOvf (rw) */
#define CORE_CCNT_SOvf_POS                   _CORE_UL(31)
#define CORE_CCNT_SOvf_LEN                   _CORE_UL(1)

/* CORE_ICNT_CountValue (rw) */
#define CORE_ICNT_CountValue_POS             _CORE_UL(0)
#define CORE_ICNT_CountValue_LEN             _CORE_UL(31)

/* CORE_ICNT_SOvf (rw) */
#define CORE_ICNT_SOvf_POS                   _CORE_UL(31)
#define CORE_ICNT_SOvf_LEN                   _CORE_UL(1)

/* CORE_M1CNT_CountValue (rw) */
#define CORE_M1CNT_CountValue_POS            _CORE_UL(0)
#define CORE_M1CNT_CountValue_LEN            _CORE_UL(31)

/* CORE_M1CNT_SOvf (rw) */
#define CORE_M1CNT_SOvf_POS                  _CORE_UL(31)
#define CORE_M1CNT_SOvf_LEN                  _CORE_UL(1)

/* CORE_M2CNT_CountValue (rw) */
#define CORE_M2CNT_CountValue_POS            _CORE_UL(0)
#define CORE_M2CNT_CountValue_LEN            _CORE_UL(31)

/* CORE_M2CNT_SOvf (rw) */
#define CORE_M2CNT_SOvf_POS                  _CORE_UL(31)
#define CORE_M2CNT_SOvf_LEN                  _CORE_UL(1)

/* CORE_M3CNT_CountValue (rw) */
#define CORE_M3CNT_CountValue_POS            _CORE_UL(0)
#define CORE_M3CNT_CountValue_LEN            _CORE_UL(31)

/* CORE_M3CNT_SOvf (rw) */
#define CORE_M3CNT_SOvf_POS                  _CORE_UL(31)
#define CORE_M3CNT_SOvf_LEN                  _CORE_UL(1)

/* CORE_DBGSR_DE (rh) */
#define CORE_DBGSR_DE_POS                    _CORE_UL(0)
#define CORE_DBGSR_DE_LEN                    _CORE_UL(1)

/* CORE_DBGSR_HALT (rwh) */
#define CORE_DBGSR_HALT_POS                  _CORE_UL(1)
#define CORE_DBGSR_HALT_LEN                  _CORE_UL(2)

/* CORE_DBGSR_SIH (rh) */
#define CORE_DBGSR_SIH_POS                   _CORE_UL(3)
#define CORE_DBGSR_SIH_LEN                   _CORE_UL(1)

/* CORE_DBGSR_SUSP (rwh) */
#define CORE_DBGSR_SUSP_POS                  _CORE_UL(4)
#define CORE_DBGSR_SUSP_LEN                  _CORE_UL(1)

/* CORE_DBGSR_RES (r) */
#define CORE_DBGSR_RES_POS                   _CORE_UL(5)
#define CORE_DBGSR_RES_LEN                   _CORE_UL(1)

/* CORE_DBGSR_PREVSUSP (rh) */
#define CORE_DBGSR_PREVSUSP_POS              _CORE_UL(6)
#define CORE_DBGSR_PREVSUSP_LEN              _CORE_UL(1)

/* CORE_DBGSR_PEVT (rwh) */
#define CORE_DBGSR_PEVT_POS                  _CORE_UL(7)
#define CORE_DBGSR_PEVT_LEN                  _CORE_UL(1)

/* CORE_DBGSR_EVTSRC (rh) */
#define CORE_DBGSR_EVTSRC_POS                _CORE_UL(8)
#define CORE_DBGSR_EVTSRC_LEN                _CORE_UL(5)

/* CORE_EXEVT_EVTA (rw) */
#define CORE_EXEVT_EVTA_POS                  _CORE_UL(0)
#define CORE_EXEVT_EVTA_LEN                  _CORE_UL(3)

/* CORE_EXEVT_BBM (rw) */
#define CORE_EXEVT_BBM_POS                   _CORE_UL(3)
#define CORE_EXEVT_BBM_LEN                   _CORE_UL(1)

/* CORE_EXEVT_BOD (rw) */
#define CORE_EXEVT_BOD_POS                   _CORE_UL(4)
#define CORE_EXEVT_BOD_LEN                   _CORE_UL(1)

/* CORE_EXEVT_SUSP (rw) */
#define CORE_EXEVT_SUSP_POS                  _CORE_UL(5)
#define CORE_EXEVT_SUSP_LEN                  _CORE_UL(1)

/* CORE_EXEVT_CNT (rw) */
#define CORE_EXEVT_CNT_POS                   _CORE_UL(6)
#define CORE_EXEVT_CNT_LEN                   _CORE_UL(2)

/* CORE_EXEVT_RES (r) */
#define CORE_EXEVT_RES_POS                   _CORE_UL(8)
#define CORE_EXEVT_RES_LEN                   _CORE_UL(24)

/* CORE_CREVT_EVTA (rw) */
#define CORE_CREVT_EVTA_POS                  _CORE_UL(0)
#define CORE_CREVT_EVTA_LEN                  _CORE_UL(3)

/* CORE_CREVT_BBM (rw) */
#define CORE_CREVT_BBM_POS                   _CORE_UL(3)
#define CORE_CREVT_BBM_LEN                   _CORE_UL(1)

/* CORE_CREVT_BOD (rw) */
#define CORE_CREVT_BOD_POS                   _CORE_UL(4)
#define CORE_CREVT_BOD_LEN                   _CORE_UL(1)

/* CORE_CREVT_SUSP (rw) */
#define CORE_CREVT_SUSP_POS                  _CORE_UL(5)
#define CORE_CREVT_SUSP_LEN                  _CORE_UL(1)

/* CORE_CREVT_CNT (rw) */
#define CORE_CREVT_CNT_POS                   _CORE_UL(6)
#define CORE_CREVT_CNT_LEN                   _CORE_UL(2)

/* CORE_CREVT_RES (r) */
#define CORE_CREVT_RES_POS                   _CORE_UL(8)
#define CORE_CREVT_RES_LEN                   _CORE_UL(24)

/* CORE_SWEVT_EVTA (rw) */
#define CORE_SWEVT_EVTA_POS                  _CORE_UL(0)
#define CORE_SWEVT_EVTA_LEN                  _CORE_UL(3)

/* CORE_SWEVT_BBM (rw) */
#define CORE_SWEVT_BBM_POS                   _CORE_UL(3)
#define CORE_SWEVT_BBM_LEN                   _CORE_UL(1)

/* CORE_SWEVT_BOD (rw) */
#define CORE_SWEVT_BOD_POS                   _CORE_UL(4)
#define CORE_SWEVT_BOD_LEN                   _CORE_UL(1)

/* CORE_SWEVT_SUSP (rw) */
#define CORE_SWEVT_SUSP_POS                  _CORE_UL(5)
#define CORE_SWEVT_SUSP_LEN                  _CORE_UL(1)

/* CORE_SWEVT_CNT (rw) */
#define CORE_SWEVT_CNT_POS                   _CORE_UL(6)
#define CORE_SWEVT_CNT_LEN                   _CORE_UL(2)

/* CORE_SWEVT_RES (r) */
#define CORE_SWEVT_RES_POS                   _CORE_UL(8)
#define CORE_SWEVT_RES_LEN                   _CORE_UL(24)

/* CORE_TRIG_ACC_T0 (rh) */
#define CORE_TRIG_ACC_T0_POS                 _CORE_UL(0)
#define CORE_TRIG_ACC_T0_LEN                 _CORE_UL(1)

/* CORE_TRIG_ACC_T1 (rh) */
#define CORE_TRIG_ACC_T1_POS                 _CORE_UL(1)
#define CORE_TRIG_ACC_T1_LEN                 _CORE_UL(1)

/* CORE_TRIG_ACC_T2 (rh) */
#define CORE_TRIG_ACC_T2_POS                 _CORE_UL(2)
#define CORE_TRIG_ACC_T2_LEN                 _CORE_UL(1)

/* CORE_TRIG_ACC_T3 (rh) */
#define CORE_TRIG_ACC_T3_POS                 _CORE_UL(3)
#define CORE_TRIG_ACC_T3_LEN                 _CORE_UL(1)

/* CORE_TRIG_ACC_T4 (rh) */
#define CORE_TRIG_ACC_T4_POS                 _CORE_UL(4)
#define CORE_TRIG_ACC_T4_LEN                 _CORE_UL(1)

/* CORE_TRIG_ACC_T5 (rh) */
#define CORE_TRIG_ACC_T5_POS                 _CORE_UL(5)
#define CORE_TRIG_ACC_T5_LEN                 _CORE_UL(1)

/* CORE_TRIG_ACC_T6 (rh) */
#define CORE_TRIG_ACC_T6_POS                 _CORE_UL(6)
#define CORE_TRIG_ACC_T6_LEN                 _CORE_UL(1)

/* CORE_TRIG_ACC_T7 (rh) */
#define CORE_TRIG_ACC_T7_POS                 _CORE_UL(7)
#define CORE_TRIG_ACC_T7_LEN                 _CORE_UL(1)

/* CORE_TRIG_ACC_RES (r) */
#define CORE_TRIG_ACC_RES_POS                _CORE_UL(8)
#define CORE_TRIG_ACC_RES_LEN                _CORE_UL(24)

/* CORE_DMS_RES (r) */
#define CORE_DMS_RES_POS                     _CORE_UL(0)
#define CORE_DMS_RES_LEN                     _CORE_UL(1)

/* CORE_DMS_DMSValue (rw) */
#define CORE_DMS_DMSValue_POS                _CORE_UL(1)
#define CORE_DMS_DMSValue_LEN                _CORE_UL(31)

/* CORE_DCX_RES (r) */
#define CORE_DCX_RES_POS                     _CORE_UL(0)
#define CORE_DCX_RES_LEN                     _CORE_UL(6)

/* CORE_DCX_DCXValue (rw) */
#define CORE_DCX_DCXValue_POS                _CORE_UL(6)
#define CORE_DCX_DCXValue_LEN                _CORE_UL(26)

/* CORE_DBGTCR_DTA (rwh) */
#define CORE_DBGTCR_DTA_POS                  _CORE_UL(0)
#define CORE_DBGTCR_DTA_LEN                  _CORE_UL(1)

/* CORE_DBGTCR_RES (r) */
#define CORE_DBGTCR_RES_POS                  _CORE_UL(1)
#define CORE_DBGTCR_RES_LEN                  _CORE_UL(31)

#endif
