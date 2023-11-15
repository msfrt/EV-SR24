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
 * $Filename__:gpta0_1766.h$ 
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
 * $Name______:gpta0_1766$ 
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
 *      File name: gpta0_1766.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _GPTA0_1766_H
#define _GPTA0_1766_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _GPTA0_UL(x) x
#else
    #define _GPTA0_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module GPTA0 on TC1766
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* sub-structure for local timer cell (LTC) */
typedef struct {
    volatile uint32 LTCCTR;        // GPTA Local Timer Cell Control Register
    volatile uint32 LTCXR;         // GPTA Local Timer Cell X Register
} GPTA0_LTC_t;

/* sub-structure for global timer cell (GTC) */
typedef struct {
    volatile uint32 GTCCTR;        // GPTA Global Timer Cell Control Register
    volatile uint32 GTCXR;         // GPTA Global Timer Cell X Register
} GPTA0_GTC_t;

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0001800] : GPTA Clock Control Register
    volatile uint32 DBGCTR;              // [0xF0001804] : GPTA Debug Clock Control Register
    volatile uint32 ID;                  // [0xF0001808] : GPTA Module Identification Register
    volatile uint32 FDR;                 // [0xF000180C] : GPTA Fractional Divider Register
    volatile uint32 SRSC0;               // [0xF0001810] : GPTA Service Request Clear Register 0
    volatile uint32 SRSS0;               // [0xF0001814] : GPTA Service Request Set Register 0
    volatile uint32 SRSC1;               // [0xF0001818] : GPTA Service Request Clear Register 1
    volatile uint32 SRSS1;               // [0xF000181C] : GPTA Service Request Set Register 1
    volatile uint32 SRSC2;               // [0xF0001820] : GPTA Service Request Clear Register 2
    volatile uint32 SRSS2;               // [0xF0001824] : GPTA Service Request Set Register 2
    volatile uint32 SRSC3;               // [0xF0001828] : GPTA Service Request Clear Register 3
    volatile uint32 SRSS3;               // [0xF000182C] : GPTA Service Request Set Register 3
    volatile uint32 SRNR;                // [0xF0001830] : Service Request Node Redirection Register
    volatile uint32 RESERVED0[1];        // [0xF0001834...0xF0001837] : reserved space
    volatile uint32 MRACTL;              // [0xF0001838] : GPTA Multiplexer Register Array Control Register
    volatile uint32 MRADIN;              // [0xF000183C] : GPTA Multiplexer Register Array Data In Register
    volatile uint32 MRADOUT;             // [0xF0001840] : GPTA Multiplexer Register Array Data Out Register
    volatile uint32 FPCSTAT;             // [0xF0001844] : GPTA Filter and Prescaler Cell Status Register
    volatile uint32 FPCCTR0;             // [0xF0001848] : GPTA Filter and Prescaler Cell Control Register 0
    volatile uint32 FPCTIM0;             // [0xF000184C] : GPTA Filter and Prescaler Cell Timer Register 0
    volatile uint32 FPCCTR1;             // [0xF0001850] : GPTA Filter and Prescaler Cell Control Register 1
    volatile uint32 FPCTIM1;             // [0xF0001854] : GPTA Filter and Prescaler Cell Timer Register 1
    volatile uint32 FPCCTR2;             // [0xF0001858] : GPTA Filter and Prescaler Cell Control Register 2
    volatile uint32 FPCTIM2;             // [0xF000185C] : GPTA Filter and Prescaler Cell Timer Register 2
    volatile uint32 FPCCTR3;             // [0xF0001860] : GPTA Filter and Prescaler Cell Control Register 3
    volatile uint32 FPCTIM3;             // [0xF0001864] : GPTA Filter and Prescaler Cell Timer Register 3
    volatile uint32 FPCCTR4;             // [0xF0001868] : GPTA Filter and Prescaler Cell Control Register 4
    volatile uint32 FPCTIM4;             // [0xF000186C] : GPTA Filter and Prescaler Cell Timer Register 4
    volatile uint32 FPCCTR5;             // [0xF0001870] : GPTA Filter and Prescaler Cell Control Register 5
    volatile uint32 FPCTIM5;             // [0xF0001874] : GPTA Filter and Prescaler Cell Timer Register 5
    volatile uint32 PDLCTR;              // [0xF0001878] : GPTA Phase Discrimination Logic Control Register
    volatile uint32 RESERVED1[1];        // [0xF000187C...0xF000187F] : reserved space
    volatile uint32 DCMCTR0;             // [0xF0001880] : GPTA Duty Cycle Measurement Control Register 0
    volatile uint32 DCMTIM0;             // [0xF0001884] : GPTA Duty Cycle Measurement Timer Register 0
    volatile uint32 DCMCAV0;             // [0xF0001888] : GPTA Duty Cycle Measurement Capture Register 0
    volatile uint32 DCMCOV0;             // [0xF000188C] : GPTA Duty Cycle Measurement Capture/Compare Register 0
    volatile uint32 DCMCTR1;             // [0xF0001890] : GPTA Duty Cycle Measurement Control Register 1
    volatile uint32 DCMTIM1;             // [0xF0001894] : GPTA Duty Cycle Measurement Timer Register 1
    volatile uint32 DCMCAV1;             // [0xF0001898] : GPTA Duty Cycle Measurement Capture Register 1
    volatile uint32 DCMCOV1;             // [0xF000189C] : GPTA Duty Cycle Measurement Capture/Compare Register 1
    volatile uint32 DCMCTR2;             // [0xF00018A0] : GPTA Duty Cycle Measurement Control Register 2
    volatile uint32 DCMTIM2;             // [0xF00018A4] : GPTA Duty Cycle Measurement Timer Register 2
    volatile uint32 DCMCAV2;             // [0xF00018A8] : GPTA Duty Cycle Measurement Capture Register 2
    volatile uint32 DCMCOV2;             // [0xF00018AC] : GPTA Duty Cycle Measurement Capture/Compare Register 2
    volatile uint32 DCMCTR3;             // [0xF00018B0] : GPTA Duty Cycle Measurement Control Register 3
    volatile uint32 DCMTIM3;             // [0xF00018B4] : GPTA Duty Cycle Measurement Timer Register 3
    volatile uint32 DCMCAV3;             // [0xF00018B8] : GPTA Duty Cycle Measurement Capture Register 3
    volatile uint32 DCMCOV3;             // [0xF00018BC] : GPTA Duty Cycle Measurement Capture/Compare Register 3
    volatile uint32 PLLCTR;              // [0xF00018C0] : GPTA Phase Locked Loop Control Register
    volatile uint32 PLLMTI;              // [0xF00018C4] : GPTA Phase Locked Loop Micro Tick Register
    volatile uint32 PLLCNT;              // [0xF00018C8] : GPTA Phase Locked Loop Counter Register
    volatile uint32 PLLSTP;              // [0xF00018CC] : GPTA Phase Locked Loop Step Register
    volatile uint32 PLLREV;              // [0xF00018D0] : GPTA Phase Locked Loop Reload Register
    volatile uint32 PLLDTR;              // [0xF00018D4] : GPTA Phase Locked Loop Delta Register
    volatile uint32 CKBCTR;              // [0xF00018D8] : GPTA Clock Bus Control Register
    volatile uint32 RESERVED2[1];        // [0xF00018DC...0xF00018DF] : reserved space
    volatile uint32 GTCTR0;              // [0xF00018E0] : GPTA Global Timer Control Register 0
    volatile uint32 GTREV0;              // [0xF00018E4] : GPTA Global Timer Reload Value Register 0
    volatile uint32 GTTIM0;              // [0xF00018E8] : GPTA Global Timer Register 0
    volatile uint32 RESERVED3[1];        // [0xF00018EC...0xF00018EF] : reserved space
    volatile uint32 GTCTR1;              // [0xF00018F0] : GPTA Global Timer Control Register 1
    volatile uint32 GTREV1;              // [0xF00018F4] : GPTA Global Timer Reload Value Register 1
    volatile uint32 GTTIM1;              // [0xF00018F8] : GPTA Global Timer Register 1
    volatile uint32 RESERVED4[1];        // [0xF00018FC...0xF00018FF] : reserved space
    GPTA0_GTC_t     GTC[32];             // [0xF0001900] : GPTA Global Timer Cells
    GPTA0_LTC_t     LTC[64];             // [0xF0001980] : GPTA Local  Timer Cells
    volatile uint32 EDCTR;               // [0xF0001C00] : GPTA Clock Enable/Disable Control Register
    volatile uint32 RESERVED5[217];      // [0xF0001C04...0xF0001F67] : reserved space
    volatile uint32 SRC37;               // [0xF0001F68] : GPTA Service Request Control Register 37
    volatile uint32 SRC36;               // [0xF0001F6C] : GPTA Service Request Control Register 36
    volatile uint32 SRC35;               // [0xF0001F70] : GPTA Service Request Control Register 35
    volatile uint32 SRC34;               // [0xF0001F74] : GPTA Service Request Control Register 34
    volatile uint32 SRC33;               // [0xF0001F78] : GPTA Service Request Control Register 33
    volatile uint32 SRC32;               // [0xF0001F7C] : GPTA Service Request Control Register 32
    volatile uint32 SRC31;               // [0xF0001F80] : GPTA Service Request Control Register 31
    volatile uint32 SRC30;               // [0xF0001F84] : GPTA Service Request Control Register 30
    volatile uint32 SRC29;               // [0xF0001F88] : GPTA Service Request Control Register 29
    volatile uint32 SRC28;               // [0xF0001F8C] : GPTA Service Request Control Register 28
    volatile uint32 SRC27;               // [0xF0001F90] : GPTA Service Request Control Register 27
    volatile uint32 SRC26;               // [0xF0001F94] : GPTA Service Request Control Register 26
    volatile uint32 SRC25;               // [0xF0001F98] : GPTA Service Request Control Register 25
    volatile uint32 SRC24;               // [0xF0001F9C] : GPTA Service Request Control Register 24
    volatile uint32 SRC23;               // [0xF0001FA0] : GPTA Service Request Control Register 23
    volatile uint32 SRC22;               // [0xF0001FA4] : GPTA Service Request Control Register 22
    volatile uint32 SRC21;               // [0xF0001FA8] : GPTA Service Request Control Register 21
    volatile uint32 SRC20;               // [0xF0001FAC] : GPTA Service Request Control Register 20
    volatile uint32 SRC19;               // [0xF0001FB0] : GPTA Service Request Control Register 19
    volatile uint32 SRC18;               // [0xF0001FB4] : GPTA Service Request Control Register 18
    volatile uint32 SRC17;               // [0xF0001FB8] : GPTA Service Request Control Register 17
    volatile uint32 SRC16;               // [0xF0001FBC] : GPTA Service Request Control Register 16
    volatile uint32 SRC15;               // [0xF0001FC0] : GPTA Service Request Control Register 15
    volatile uint32 SRC14;               // [0xF0001FC4] : GPTA Service Request Control Register 14
    volatile uint32 SRC13;               // [0xF0001FC8] : GPTA Service Request Control Register 13
    volatile uint32 SRC12;               // [0xF0001FCC] : GPTA Service Request Control Register 12
    volatile uint32 SRC11;               // [0xF0001FD0] : GPTA Service Request Control Register 11
    volatile uint32 SRC10;               // [0xF0001FD4] : GPTA Service Request Control Register 10
    volatile uint32 SRC09;               // [0xF0001FD8] : GPTA Service Request Control Register 09
    volatile uint32 SRC08;               // [0xF0001FDC] : GPTA Service Request Control Register 08
    volatile uint32 SRC07;               // [0xF0001FE0] : GPTA Service Request Control Register 07
    volatile uint32 SRC06;               // [0xF0001FE4] : GPTA Service Request Control Register 06
    volatile uint32 SRC05;               // [0xF0001FE8] : GPTA Service Request Control Register 05
    volatile uint32 SRC04;               // [0xF0001FEC] : GPTA Service Request Control Register 04
    volatile uint32 SRC03;               // [0xF0001FF0] : GPTA Service Request Control Register 03
    volatile uint32 SRC02;               // [0xF0001FF4] : GPTA Service Request Control Register 02
    volatile uint32 SRC01;               // [0xF0001FF8] : GPTA Service Request Control Register 01
    volatile uint32 SRC00;               // [0xF0001FFC] : GPTA Service Request Control Register 00
} GPTA0_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern GPTA0_RegMap_t GPTA0 __attribute__ ((asection (".zbss.label_only","f=awz")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/

/* these are bit definitions which are missing in the current sourcefile revision */

/* GPTA0_GTCCTR_CAC (rw) */
#define GPTA0_GTCCTR_CAC_POS           _GPTA0_UL(5)
#define GPTA0_GTCCTR_CAC_LEN           _GPTA0_UL(1)

/* GPTA0_GTCCTR_CAT (rw) */
#define GPTA0_GTCCTR_CAT_POS           _GPTA0_UL(6)
#define GPTA0_GTCCTR_CAT_LEN           _GPTA0_UL(1)

/* GPTA0_GTCCTR_GES (rw) */
#define GPTA0_GTCCTR_GES_POS           _GPTA0_UL(4)
#define GPTA0_GTCCTR_GES_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_SLL (rh) */
#define GPTA0_LTCCTR_SLL_POS           _GPTA0_UL(9)
#define GPTA0_LTCCTR_SLL_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_EOA (rwh) */
#define GPTA0_LTCCTR_EOA_POS           _GPTA0_UL(7)
#define GPTA0_LTCCTR_EOA_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_CUDCLR (rwh) */
#define GPTA0_LTCCTR_CUDCLR_POS        _GPTA0_UL(7)
#define GPTA0_LTCCTR_CUDCLR_LEN        _GPTA0_UL(1)

/* GPTA0_LTCCTR_BYP (rw) */
#define GPTA0_LTCCTR_BYP_POS           _GPTA0_UL(6)
#define GPTA0_LTCCTR_BYP_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_SOH (rw) */
#define GPTA0_LTCCTR_SOH_POS           _GPTA0_UL(5)
#define GPTA0_LTCCTR_SOH_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_SOL (rw) */
#define GPTA0_LTCCTR_SOL_POS           _GPTA0_UL(4)
#define GPTA0_LTCCTR_SOL_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR63_OSM (rw) */
#define GPTA0_LTCCTR63_OSM_POS         _GPTA0_UL(1)
#define GPTA0_LTCCTR63_OSM_LEN         _GPTA0_UL(1)

/* GPTA0_LTCCTR63_REN (rw) */
#define GPTA0_LTCCTR63_REN_POS         _GPTA0_UL(2)
#define GPTA0_LTCCTR63_REN_LEN         _GPTA0_UL(2)

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

/* GPTA0_CKBCTR_DFA02 (rw) */
#define GPTA0_CKBCTR_DFA02_POS         _GPTA0_UL(0)
#define GPTA0_CKBCTR_DFA02_LEN         _GPTA0_UL(4)

/* GPTA0_CKBCTR_DFA03 (rw) */
#define GPTA0_CKBCTR_DFA03_POS         _GPTA0_UL(16)
#define GPTA0_CKBCTR_DFA03_LEN         _GPTA0_UL(2)

/* GPTA0_CKBCTR_DFA04 (rw) */
#define GPTA0_CKBCTR_DFA04_POS         _GPTA0_UL(4)
#define GPTA0_CKBCTR_DFA04_LEN         _GPTA0_UL(4)

/* GPTA0_CKBCTR_DFA06 (rw) */
#define GPTA0_CKBCTR_DFA06_POS         _GPTA0_UL(8)
#define GPTA0_CKBCTR_DFA06_LEN         _GPTA0_UL(4)

/* GPTA0_CKBCTR_DFA07 (rw) */
#define GPTA0_CKBCTR_DFA07_POS         _GPTA0_UL(12)
#define GPTA0_CKBCTR_DFA07_LEN         _GPTA0_UL(4)

/* GPTA0_CLC_DISR (rw) */
#define GPTA0_CLC_DISR_POS             _GPTA0_UL(0)
#define GPTA0_CLC_DISR_LEN             _GPTA0_UL(1)

/* GPTA0_CLC_DISS (r) */
#define GPTA0_CLC_DISS_POS             _GPTA0_UL(1)
#define GPTA0_CLC_DISS_LEN             _GPTA0_UL(1)

/* GPTA0_CLC_EDIS (rw) */
#define GPTA0_CLC_EDIS_POS             _GPTA0_UL(3)
#define GPTA0_CLC_EDIS_LEN             _GPTA0_UL(1)

/* GPTA0_CLC_FSOE (rw) */
#define GPTA0_CLC_FSOE_POS             _GPTA0_UL(5)
#define GPTA0_CLC_FSOE_LEN             _GPTA0_UL(1)

/* GPTA0_CLC_SBWE (w) */
#define GPTA0_CLC_SBWE_POS             _GPTA0_UL(4)
#define GPTA0_CLC_SBWE_LEN             _GPTA0_UL(1)

/* GPTA0_CLC_SPEN (rw) */
#define GPTA0_CLC_SPEN_POS             _GPTA0_UL(2)
#define GPTA0_CLC_SPEN_LEN             _GPTA0_UL(1)

/* GPTA0_DBGCTR_CLKCNT (rw) */
#define GPTA0_DBGCTR_CLKCNT_POS        _GPTA0_UL(0)
#define GPTA0_DBGCTR_CLKCNT_LEN        _GPTA0_UL(16)

/* GPTA0_DBGCTR_DBGCEN (rw) */
#define GPTA0_DBGCTR_DBGCEN_POS        _GPTA0_UL(31)
#define GPTA0_DBGCTR_DBGCEN_LEN        _GPTA0_UL(1)

/* GPTA0_DCMCAV0_CAV (rwh) */
#define GPTA0_DCMCAV0_CAV_POS          _GPTA0_UL(0)
#define GPTA0_DCMCAV0_CAV_LEN          _GPTA0_UL(24)

/* GPTA0_DCMCAV1_CAV (rwh) */
#define GPTA0_DCMCAV1_CAV_POS          _GPTA0_UL(0)
#define GPTA0_DCMCAV1_CAV_LEN          _GPTA0_UL(24)

/* GPTA0_DCMCAV2_CAV (rwh) */
#define GPTA0_DCMCAV2_CAV_POS          _GPTA0_UL(0)
#define GPTA0_DCMCAV2_CAV_LEN          _GPTA0_UL(24)

/* GPTA0_DCMCAV3_CAV (rwh) */
#define GPTA0_DCMCAV3_CAV_POS          _GPTA0_UL(0)
#define GPTA0_DCMCAV3_CAV_LEN          _GPTA0_UL(24)

/* GPTA0_DCMCOV0_COV (rwh) */
#define GPTA0_DCMCOV0_COV_POS          _GPTA0_UL(0)
#define GPTA0_DCMCOV0_COV_LEN          _GPTA0_UL(24)

/* GPTA0_DCMCOV1_COV (rwh) */
#define GPTA0_DCMCOV1_COV_POS          _GPTA0_UL(0)
#define GPTA0_DCMCOV1_COV_LEN          _GPTA0_UL(24)

/* GPTA0_DCMCOV2_COV (rwh) */
#define GPTA0_DCMCOV2_COV_POS          _GPTA0_UL(0)
#define GPTA0_DCMCOV2_COV_LEN          _GPTA0_UL(24)

/* GPTA0_DCMCOV3_COV (rwh) */
#define GPTA0_DCMCOV3_COV_POS          _GPTA0_UL(0)
#define GPTA0_DCMCOV3_COV_LEN          _GPTA0_UL(24)

/* GPTA0_DCMCTR0_CRE (rw) */
#define GPTA0_DCMCTR0_CRE_POS          _GPTA0_UL(9)
#define GPTA0_DCMCTR0_CRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR0_FCK (rw) */
#define GPTA0_DCMCTR0_FCK_POS          _GPTA0_UL(5)
#define GPTA0_DCMCTR0_FCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR0_FRE (rw) */
#define GPTA0_DCMCTR0_FRE_POS          _GPTA0_UL(8)
#define GPTA0_DCMCTR0_FRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR0_FZE (rw) */
#define GPTA0_DCMCTR0_FZE_POS          _GPTA0_UL(3)
#define GPTA0_DCMCTR0_FZE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR0_OCA (rw) */
#define GPTA0_DCMCTR0_OCA_POS          _GPTA0_UL(1)
#define GPTA0_DCMCTR0_OCA_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR0_QCK (rw) */
#define GPTA0_DCMCTR0_QCK_POS          _GPTA0_UL(6)
#define GPTA0_DCMCTR0_QCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR0_RCA (rw) */
#define GPTA0_DCMCTR0_RCA_POS          _GPTA0_UL(0)
#define GPTA0_DCMCTR0_RCA_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR0_RCK (rw) */
#define GPTA0_DCMCTR0_RCK_POS          _GPTA0_UL(4)
#define GPTA0_DCMCTR0_RCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR0_RRE (rw) */
#define GPTA0_DCMCTR0_RRE_POS          _GPTA0_UL(7)
#define GPTA0_DCMCTR0_RRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR0_RZE (rw) */
#define GPTA0_DCMCTR0_RZE_POS          _GPTA0_UL(2)
#define GPTA0_DCMCTR0_RZE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR1_CRE (rw) */
#define GPTA0_DCMCTR1_CRE_POS          _GPTA0_UL(9)
#define GPTA0_DCMCTR1_CRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR1_FCK (rw) */
#define GPTA0_DCMCTR1_FCK_POS          _GPTA0_UL(5)
#define GPTA0_DCMCTR1_FCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR1_FRE (rw) */
#define GPTA0_DCMCTR1_FRE_POS          _GPTA0_UL(8)
#define GPTA0_DCMCTR1_FRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR1_FZE (rw) */
#define GPTA0_DCMCTR1_FZE_POS          _GPTA0_UL(3)
#define GPTA0_DCMCTR1_FZE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR1_OCA (rw) */
#define GPTA0_DCMCTR1_OCA_POS          _GPTA0_UL(1)
#define GPTA0_DCMCTR1_OCA_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR1_QCK (rw) */
#define GPTA0_DCMCTR1_QCK_POS          _GPTA0_UL(6)
#define GPTA0_DCMCTR1_QCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR1_RCA (rw) */
#define GPTA0_DCMCTR1_RCA_POS          _GPTA0_UL(0)
#define GPTA0_DCMCTR1_RCA_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR1_RCK (rw) */
#define GPTA0_DCMCTR1_RCK_POS          _GPTA0_UL(4)
#define GPTA0_DCMCTR1_RCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR1_RRE (rw) */
#define GPTA0_DCMCTR1_RRE_POS          _GPTA0_UL(7)
#define GPTA0_DCMCTR1_RRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR1_RZE (rw) */
#define GPTA0_DCMCTR1_RZE_POS          _GPTA0_UL(2)
#define GPTA0_DCMCTR1_RZE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR2_CRE (rw) */
#define GPTA0_DCMCTR2_CRE_POS          _GPTA0_UL(9)
#define GPTA0_DCMCTR2_CRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR2_FCK (rw) */
#define GPTA0_DCMCTR2_FCK_POS          _GPTA0_UL(5)
#define GPTA0_DCMCTR2_FCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR2_FRE (rw) */
#define GPTA0_DCMCTR2_FRE_POS          _GPTA0_UL(8)
#define GPTA0_DCMCTR2_FRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR2_FZE (rw) */
#define GPTA0_DCMCTR2_FZE_POS          _GPTA0_UL(3)
#define GPTA0_DCMCTR2_FZE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR2_OCA (rw) */
#define GPTA0_DCMCTR2_OCA_POS          _GPTA0_UL(1)
#define GPTA0_DCMCTR2_OCA_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR2_QCK (rw) */
#define GPTA0_DCMCTR2_QCK_POS          _GPTA0_UL(6)
#define GPTA0_DCMCTR2_QCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR2_RCA (rw) */
#define GPTA0_DCMCTR2_RCA_POS          _GPTA0_UL(0)
#define GPTA0_DCMCTR2_RCA_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR2_RCK (rw) */
#define GPTA0_DCMCTR2_RCK_POS          _GPTA0_UL(4)
#define GPTA0_DCMCTR2_RCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR2_RRE (rw) */
#define GPTA0_DCMCTR2_RRE_POS          _GPTA0_UL(7)
#define GPTA0_DCMCTR2_RRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR2_RZE (rw) */
#define GPTA0_DCMCTR2_RZE_POS          _GPTA0_UL(2)
#define GPTA0_DCMCTR2_RZE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR3_CRE (rw) */
#define GPTA0_DCMCTR3_CRE_POS          _GPTA0_UL(9)
#define GPTA0_DCMCTR3_CRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR3_FCK (rw) */
#define GPTA0_DCMCTR3_FCK_POS          _GPTA0_UL(5)
#define GPTA0_DCMCTR3_FCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR3_FRE (rw) */
#define GPTA0_DCMCTR3_FRE_POS          _GPTA0_UL(8)
#define GPTA0_DCMCTR3_FRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR3_FZE (rw) */
#define GPTA0_DCMCTR3_FZE_POS          _GPTA0_UL(3)
#define GPTA0_DCMCTR3_FZE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR3_OCA (rw) */
#define GPTA0_DCMCTR3_OCA_POS          _GPTA0_UL(1)
#define GPTA0_DCMCTR3_OCA_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR3_QCK (rw) */
#define GPTA0_DCMCTR3_QCK_POS          _GPTA0_UL(6)
#define GPTA0_DCMCTR3_QCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR3_RCA (rw) */
#define GPTA0_DCMCTR3_RCA_POS          _GPTA0_UL(0)
#define GPTA0_DCMCTR3_RCA_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR3_RCK (rw) */
#define GPTA0_DCMCTR3_RCK_POS          _GPTA0_UL(4)
#define GPTA0_DCMCTR3_RCK_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR3_RRE (rw) */
#define GPTA0_DCMCTR3_RRE_POS          _GPTA0_UL(7)
#define GPTA0_DCMCTR3_RRE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMCTR3_RZE (rw) */
#define GPTA0_DCMCTR3_RZE_POS          _GPTA0_UL(2)
#define GPTA0_DCMCTR3_RZE_LEN          _GPTA0_UL(1)

/* GPTA0_DCMTIM0_TIM (rwh) */
#define GPTA0_DCMTIM0_TIM_POS          _GPTA0_UL(0)
#define GPTA0_DCMTIM0_TIM_LEN          _GPTA0_UL(24)

/* GPTA0_DCMTIM1_TIM (rwh) */
#define GPTA0_DCMTIM1_TIM_POS          _GPTA0_UL(0)
#define GPTA0_DCMTIM1_TIM_LEN          _GPTA0_UL(24)

/* GPTA0_DCMTIM2_TIM (rwh) */
#define GPTA0_DCMTIM2_TIM_POS          _GPTA0_UL(0)
#define GPTA0_DCMTIM2_TIM_LEN          _GPTA0_UL(24)

/* GPTA0_DCMTIM3_TIM (rwh) */
#define GPTA0_DCMTIM3_TIM_POS          _GPTA0_UL(0)
#define GPTA0_DCMTIM3_TIM_LEN          _GPTA0_UL(24)

/* GPTA0_EDCTR_G0EN (rw) */
#define GPTA0_EDCTR_G0EN_POS           _GPTA0_UL(8)
#define GPTA0_EDCTR_G0EN_LEN           _GPTA0_UL(1)

/* GPTA0_EDCTR_G1EN (rw) */
#define GPTA0_EDCTR_G1EN_POS           _GPTA0_UL(9)
#define GPTA0_EDCTR_G1EN_LEN           _GPTA0_UL(1)

/* GPTA0_EDCTR_GT00RUN (rw) */
#define GPTA0_EDCTR_GT00RUN_POS        _GPTA0_UL(0)
#define GPTA0_EDCTR_GT00RUN_LEN        _GPTA0_UL(1)

/* GPTA0_EDCTR_GT01RUN (rw) */
#define GPTA0_EDCTR_GT01RUN_POS        _GPTA0_UL(1)
#define GPTA0_EDCTR_GT01RUN_LEN        _GPTA0_UL(1)

/* GPTA0_EDCTR_GT10RUN (rw) */
#define GPTA0_EDCTR_GT10RUN_POS        _GPTA0_UL(2)
#define GPTA0_EDCTR_GT10RUN_LEN        _GPTA0_UL(1)

/* GPTA0_EDCTR_GT11RUN (rw) */
#define GPTA0_EDCTR_GT11RUN_POS        _GPTA0_UL(3)
#define GPTA0_EDCTR_GT11RUN_LEN        _GPTA0_UL(1)

/* GPTA0_EDCTR_L2EN (rw) */
#define GPTA0_EDCTR_L2EN_POS           _GPTA0_UL(10)
#define GPTA0_EDCTR_L2EN_LEN           _GPTA0_UL(1)

/* GPTA0_FDR_DISCLK (rwh) */
#define GPTA0_FDR_DISCLK_POS           _GPTA0_UL(31)
#define GPTA0_FDR_DISCLK_LEN           _GPTA0_UL(1)

/* GPTA0_FDR_DM (rw) */
#define GPTA0_FDR_DM_POS               _GPTA0_UL(14)
#define GPTA0_FDR_DM_LEN               _GPTA0_UL(2)

/* GPTA0_FDR_ENHW (rw) */
#define GPTA0_FDR_ENHW_POS             _GPTA0_UL(30)
#define GPTA0_FDR_ENHW_LEN             _GPTA0_UL(1)

/* GPTA0_FDR_RESULT (rh) */
#define GPTA0_FDR_RESULT_POS           _GPTA0_UL(16)
#define GPTA0_FDR_RESULT_LEN           _GPTA0_UL(10)

/* GPTA0_FDR_SC (rw) */
#define GPTA0_FDR_SC_POS               _GPTA0_UL(12)
#define GPTA0_FDR_SC_LEN               _GPTA0_UL(2)

/* GPTA0_FDR_SM (rw) */
#define GPTA0_FDR_SM_POS               _GPTA0_UL(11)
#define GPTA0_FDR_SM_LEN               _GPTA0_UL(1)

/* GPTA0_FDR_STEP (rw) */
#define GPTA0_FDR_STEP_POS             _GPTA0_UL(0)
#define GPTA0_FDR_STEP_LEN             _GPTA0_UL(10)

/* GPTA0_FDR_SUSACK (rh) */
#define GPTA0_FDR_SUSACK_POS           _GPTA0_UL(28)
#define GPTA0_FDR_SUSACK_LEN           _GPTA0_UL(1)

/* GPTA0_FDR_SUSREQ (rh) */
#define GPTA0_FDR_SUSREQ_POS           _GPTA0_UL(29)
#define GPTA0_FDR_SUSREQ_LEN           _GPTA0_UL(1)

/* GPTA0_FPCCTR0_CLK (rw) */
#define GPTA0_FPCCTR0_CLK_POS          _GPTA0_UL(22)
#define GPTA0_FPCCTR0_CLK_LEN          _GPTA0_UL(2)

/* GPTA0_FPCCTR0_CMP (rw) */
#define GPTA0_FPCCTR0_CMP_POS          _GPTA0_UL(0)
#define GPTA0_FPCCTR0_CMP_LEN          _GPTA0_UL(16)

/* GPTA0_FPCCTR0_IPS (rw) */
#define GPTA0_FPCCTR0_IPS_POS          _GPTA0_UL(19)
#define GPTA0_FPCCTR0_IPS_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR0_MOD (rw) */
#define GPTA0_FPCCTR0_MOD_POS          _GPTA0_UL(16)
#define GPTA0_FPCCTR0_MOD_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR0_RTG (rw) */
#define GPTA0_FPCCTR0_RTG_POS          _GPTA0_UL(24)
#define GPTA0_FPCCTR0_RTG_LEN          _GPTA0_UL(1)

/* GPTA0_FPCCTR1_CLK (rw) */
#define GPTA0_FPCCTR1_CLK_POS          _GPTA0_UL(22)
#define GPTA0_FPCCTR1_CLK_LEN          _GPTA0_UL(2)

/* GPTA0_FPCCTR1_CMP (rw) */
#define GPTA0_FPCCTR1_CMP_POS          _GPTA0_UL(0)
#define GPTA0_FPCCTR1_CMP_LEN          _GPTA0_UL(16)

/* GPTA0_FPCCTR1_IPS (rw) */
#define GPTA0_FPCCTR1_IPS_POS          _GPTA0_UL(19)
#define GPTA0_FPCCTR1_IPS_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR1_MOD (rw) */
#define GPTA0_FPCCTR1_MOD_POS          _GPTA0_UL(16)
#define GPTA0_FPCCTR1_MOD_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR1_RTG (rw) */
#define GPTA0_FPCCTR1_RTG_POS          _GPTA0_UL(24)
#define GPTA0_FPCCTR1_RTG_LEN          _GPTA0_UL(1)

/* GPTA0_FPCCTR2_CLK (rw) */
#define GPTA0_FPCCTR2_CLK_POS          _GPTA0_UL(22)
#define GPTA0_FPCCTR2_CLK_LEN          _GPTA0_UL(2)

/* GPTA0_FPCCTR2_CMP (rw) */
#define GPTA0_FPCCTR2_CMP_POS          _GPTA0_UL(0)
#define GPTA0_FPCCTR2_CMP_LEN          _GPTA0_UL(16)

/* GPTA0_FPCCTR2_IPS (rw) */
#define GPTA0_FPCCTR2_IPS_POS          _GPTA0_UL(19)
#define GPTA0_FPCCTR2_IPS_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR2_MOD (rw) */
#define GPTA0_FPCCTR2_MOD_POS          _GPTA0_UL(16)
#define GPTA0_FPCCTR2_MOD_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR2_RTG (rw) */
#define GPTA0_FPCCTR2_RTG_POS          _GPTA0_UL(24)
#define GPTA0_FPCCTR2_RTG_LEN          _GPTA0_UL(1)

/* GPTA0_FPCCTR3_CLK (rw) */
#define GPTA0_FPCCTR3_CLK_POS          _GPTA0_UL(22)
#define GPTA0_FPCCTR3_CLK_LEN          _GPTA0_UL(2)

/* GPTA0_FPCCTR3_CMP (rw) */
#define GPTA0_FPCCTR3_CMP_POS          _GPTA0_UL(0)
#define GPTA0_FPCCTR3_CMP_LEN          _GPTA0_UL(16)

/* GPTA0_FPCCTR3_IPS (rw) */
#define GPTA0_FPCCTR3_IPS_POS          _GPTA0_UL(19)
#define GPTA0_FPCCTR3_IPS_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR3_MOD (rw) */
#define GPTA0_FPCCTR3_MOD_POS          _GPTA0_UL(16)
#define GPTA0_FPCCTR3_MOD_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR3_RTG (rw) */
#define GPTA0_FPCCTR3_RTG_POS          _GPTA0_UL(24)
#define GPTA0_FPCCTR3_RTG_LEN          _GPTA0_UL(1)

/* GPTA0_FPCCTR4_CLK (rw) */
#define GPTA0_FPCCTR4_CLK_POS          _GPTA0_UL(22)
#define GPTA0_FPCCTR4_CLK_LEN          _GPTA0_UL(2)

/* GPTA0_FPCCTR4_CMP (rw) */
#define GPTA0_FPCCTR4_CMP_POS          _GPTA0_UL(0)
#define GPTA0_FPCCTR4_CMP_LEN          _GPTA0_UL(16)

/* GPTA0_FPCCTR4_IPS (rw) */
#define GPTA0_FPCCTR4_IPS_POS          _GPTA0_UL(19)
#define GPTA0_FPCCTR4_IPS_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR4_MOD (rw) */
#define GPTA0_FPCCTR4_MOD_POS          _GPTA0_UL(16)
#define GPTA0_FPCCTR4_MOD_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR4_RTG (rw) */
#define GPTA0_FPCCTR4_RTG_POS          _GPTA0_UL(24)
#define GPTA0_FPCCTR4_RTG_LEN          _GPTA0_UL(1)

/* GPTA0_FPCCTR5_CLK (rw) */
#define GPTA0_FPCCTR5_CLK_POS          _GPTA0_UL(22)
#define GPTA0_FPCCTR5_CLK_LEN          _GPTA0_UL(2)

/* GPTA0_FPCCTR5_CMP (rw) */
#define GPTA0_FPCCTR5_CMP_POS          _GPTA0_UL(0)
#define GPTA0_FPCCTR5_CMP_LEN          _GPTA0_UL(16)

/* GPTA0_FPCCTR5_IPS (rw) */
#define GPTA0_FPCCTR5_IPS_POS          _GPTA0_UL(19)
#define GPTA0_FPCCTR5_IPS_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR5_MOD (rw) */
#define GPTA0_FPCCTR5_MOD_POS          _GPTA0_UL(16)
#define GPTA0_FPCCTR5_MOD_LEN          _GPTA0_UL(3)

/* GPTA0_FPCCTR5_RTG (rw) */
#define GPTA0_FPCCTR5_RTG_POS          _GPTA0_UL(24)
#define GPTA0_FPCCTR5_RTG_LEN          _GPTA0_UL(1)

/* GPTA0_FPCSTAT_FEG0 (rwh) */
#define GPTA0_FPCSTAT_FEG0_POS         _GPTA0_UL(8)
#define GPTA0_FPCSTAT_FEG0_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_FEG1 (rwh) */
#define GPTA0_FPCSTAT_FEG1_POS         _GPTA0_UL(9)
#define GPTA0_FPCSTAT_FEG1_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_FEG2 (rwh) */
#define GPTA0_FPCSTAT_FEG2_POS         _GPTA0_UL(10)
#define GPTA0_FPCSTAT_FEG2_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_FEG3 (rwh) */
#define GPTA0_FPCSTAT_FEG3_POS         _GPTA0_UL(11)
#define GPTA0_FPCSTAT_FEG3_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_FEG4 (rwh) */
#define GPTA0_FPCSTAT_FEG4_POS         _GPTA0_UL(12)
#define GPTA0_FPCSTAT_FEG4_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_FEG5 (rwh) */
#define GPTA0_FPCSTAT_FEG5_POS         _GPTA0_UL(13)
#define GPTA0_FPCSTAT_FEG5_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_REG0 (rwh) */
#define GPTA0_FPCSTAT_REG0_POS         _GPTA0_UL(0)
#define GPTA0_FPCSTAT_REG0_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_REG1 (rwh) */
#define GPTA0_FPCSTAT_REG1_POS         _GPTA0_UL(1)
#define GPTA0_FPCSTAT_REG1_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_REG2 (rwh) */
#define GPTA0_FPCSTAT_REG2_POS         _GPTA0_UL(2)
#define GPTA0_FPCSTAT_REG2_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_REG3 (rwh) */
#define GPTA0_FPCSTAT_REG3_POS         _GPTA0_UL(3)
#define GPTA0_FPCSTAT_REG3_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_REG4 (rwh) */
#define GPTA0_FPCSTAT_REG4_POS         _GPTA0_UL(4)
#define GPTA0_FPCSTAT_REG4_LEN         _GPTA0_UL(1)

/* GPTA0_FPCSTAT_REG5 (rwh) */
#define GPTA0_FPCSTAT_REG5_POS         _GPTA0_UL(5)
#define GPTA0_FPCSTAT_REG5_LEN         _GPTA0_UL(1)

/* GPTA0_FPCTIM0_TIM (rwh) */
#define GPTA0_FPCTIM0_TIM_POS          _GPTA0_UL(0)
#define GPTA0_FPCTIM0_TIM_LEN          _GPTA0_UL(16)

/* GPTA0_FPCTIM1_TIM (rwh) */
#define GPTA0_FPCTIM1_TIM_POS          _GPTA0_UL(0)
#define GPTA0_FPCTIM1_TIM_LEN          _GPTA0_UL(16)

/* GPTA0_FPCTIM2_TIM (rwh) */
#define GPTA0_FPCTIM2_TIM_POS          _GPTA0_UL(0)
#define GPTA0_FPCTIM2_TIM_LEN          _GPTA0_UL(16)

/* GPTA0_FPCTIM3_TIM (rwh) */
#define GPTA0_FPCTIM3_TIM_POS          _GPTA0_UL(0)
#define GPTA0_FPCTIM3_TIM_LEN          _GPTA0_UL(16)

/* GPTA0_FPCTIM4_TIM (rwh) */
#define GPTA0_FPCTIM4_TIM_POS          _GPTA0_UL(0)
#define GPTA0_FPCTIM4_TIM_LEN          _GPTA0_UL(16)

/* GPTA0_FPCTIM5_TIM (rwh) */
#define GPTA0_FPCTIM5_TIM_POS          _GPTA0_UL(0)
#define GPTA0_FPCTIM5_TIM_LEN          _GPTA0_UL(16)

/* GPTA0_GTCCTR_BYP (rw) */
#define GPTA0_GTCCTR_BYP_POS           _GPTA0_UL(7)
#define GPTA0_GTCCTR_BYP_LEN           _GPTA0_UL(1)

/* GPTA0_GTCCTR_CEN (rh) */
#define GPTA0_GTCCTR_CEN_POS           _GPTA0_UL(10)
#define GPTA0_GTCCTR_CEN_LEN           _GPTA0_UL(1)

/* GPTA0_GTCCTR_EOA (rwh) */
#define GPTA0_GTCCTR_EOA_POS           _GPTA0_UL(8)
#define GPTA0_GTCCTR_EOA_LEN           _GPTA0_UL(1)

/* GPTA0_GTCCTR_FED (rw) */
#define GPTA0_GTCCTR_FED_POS           _GPTA0_UL(5)
#define GPTA0_GTCCTR_FED_LEN           _GPTA0_UL(1)

/* GPTA0_GTCCTR_MOD (rw) */
#define GPTA0_GTCCTR_MOD_POS           _GPTA0_UL(0)
#define GPTA0_GTCCTR_MOD_LEN           _GPTA0_UL(2)

/* GPTA0_GTCCTR_NE (rw) */
#define GPTA0_GTCCTR_NE_POS            _GPTA0_UL(6)
#define GPTA0_GTCCTR_NE_LEN            _GPTA0_UL(1)

/* GPTA0_GTCCTR_OCM (rw) */
#define GPTA0_GTCCTR_OCM_POS           _GPTA0_UL(11)
#define GPTA0_GTCCTR_OCM_LEN           _GPTA0_UL(3)

/* GPTA0_GTCCTR_OIA (rw) */
#define GPTA0_GTCCTR_OIA_POS           _GPTA0_UL(14)
#define GPTA0_GTCCTR_OIA_LEN           _GPTA0_UL(1)

/* GPTA0_GTCCTR_OSM (rw) */
#define GPTA0_GTCCTR_OSM_POS           _GPTA0_UL(2)
#define GPTA0_GTCCTR_OSM_LEN           _GPTA0_UL(1)

/* GPTA0_GTCCTR_OUT (rh) */
#define GPTA0_GTCCTR_OUT_POS           _GPTA0_UL(15)
#define GPTA0_GTCCTR_OUT_LEN           _GPTA0_UL(1)

/* GPTA0_GTCCTR_RED (rw) */
#define GPTA0_GTCCTR_RED_POS           _GPTA0_UL(4)
#define GPTA0_GTCCTR_RED_LEN           _GPTA0_UL(1)

/* GPTA0_GTCCTR_REN (rw) */
#define GPTA0_GTCCTR_REN_POS           _GPTA0_UL(3)
#define GPTA0_GTCCTR_REN_LEN           _GPTA0_UL(1)

/* GPTA0_GTCTR0_MUX (rw) */
#define GPTA0_GTCTR0_MUX_POS           _GPTA0_UL(4)
#define GPTA0_GTCTR0_MUX_LEN           _GPTA0_UL(3)

/* GPTA0_GTCTR0_REN (rw) */
#define GPTA0_GTCTR0_REN_POS           _GPTA0_UL(7)
#define GPTA0_GTCTR0_REN_LEN           _GPTA0_UL(1)

/* GPTA0_GTCTR0_SCO (rw) */
#define GPTA0_GTCTR0_SCO_POS           _GPTA0_UL(0)
#define GPTA0_GTCTR0_SCO_LEN           _GPTA0_UL(4)

/* GPTA0_GTCTR1_MUX (rw) */
#define GPTA0_GTCTR1_MUX_POS           _GPTA0_UL(4)
#define GPTA0_GTCTR1_MUX_LEN           _GPTA0_UL(3)

/* GPTA0_GTCTR1_REN (rw) */
#define GPTA0_GTCTR1_REN_POS           _GPTA0_UL(7)
#define GPTA0_GTCTR1_REN_LEN           _GPTA0_UL(1)

/* GPTA0_GTCTR1_SCO (rw) */
#define GPTA0_GTCTR1_SCO_POS           _GPTA0_UL(0)
#define GPTA0_GTCTR1_SCO_LEN           _GPTA0_UL(4)

/* GPTA0_GTCXR_X (rwh) */
#define GPTA0_GTCXR_X_POS              _GPTA0_UL(0)
#define GPTA0_GTCXR_X_LEN              _GPTA0_UL(24)

/* GPTA0_GTREV0_REV (rw) */
#define GPTA0_GTREV0_REV_POS           _GPTA0_UL(0)
#define GPTA0_GTREV0_REV_LEN           _GPTA0_UL(24)

/* GPTA0_GTREV1_REV (rw) */
#define GPTA0_GTREV1_REV_POS           _GPTA0_UL(0)
#define GPTA0_GTREV1_REV_LEN           _GPTA0_UL(24)

/* GPTA0_GTTIM0_TIM (rwh) */
#define GPTA0_GTTIM0_TIM_POS           _GPTA0_UL(0)
#define GPTA0_GTTIM0_TIM_LEN           _GPTA0_UL(24)

/* GPTA0_GTTIM1_TIM (rwh) */
#define GPTA0_GTTIM1_TIM_POS           _GPTA0_UL(0)
#define GPTA0_GTTIM1_TIM_LEN           _GPTA0_UL(24)

/* GPTA0_ID_MOD_NUMBER (r) */
#define GPTA0_ID_MOD_NUMBER_POS        _GPTA0_UL(16)
#define GPTA0_ID_MOD_NUMBER_LEN        _GPTA0_UL(16)

/* GPTA0_ID_MOD_REV (r) */
#define GPTA0_ID_MOD_REV_POS           _GPTA0_UL(0)
#define GPTA0_ID_MOD_REV_LEN           _GPTA0_UL(8)

/* GPTA0_ID_MOD_TYPE (r) */
#define GPTA0_ID_MOD_TYPE_POS          _GPTA0_UL(8)
#define GPTA0_ID_MOD_TYPE_LEN          _GPTA0_UL(8)

/* GPTA0_LTCCTR_BRM (rw) */
#define GPTA0_LTCCTR_BRM_POS           _GPTA0_UL(0)
#define GPTA0_LTCCTR_BRM_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_CEN (rh) */
#define GPTA0_LTCCTR_CEN_POS           _GPTA0_UL(10)
#define GPTA0_LTCCTR_CEN_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_CUD (rwh) */
#define GPTA0_LTCCTR_CUD_POS           _GPTA0_UL(9)
#define GPTA0_LTCCTR_CUD_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_FED (rw) */
#define GPTA0_LTCCTR_FED_POS           _GPTA0_UL(5)
#define GPTA0_LTCCTR_FED_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_ILM (rw) */
#define GPTA0_LTCCTR_ILM_POS           _GPTA0_UL(8)
#define GPTA0_LTCCTR_ILM_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_MOD (rw) */
#define GPTA0_LTCCTR_MOD_POS           _GPTA0_UL(0)
#define GPTA0_LTCCTR_MOD_LEN           _GPTA0_UL(2)

/* GPTA0_LTCCTR_NE (rw) */
#define GPTA0_LTCCTR_NE_POS            _GPTA0_UL(7)
#define GPTA0_LTCCTR_NE_LEN            _GPTA0_UL(1)

/* GPTA0_LTCCTR_OCM (rw) */
#define GPTA0_LTCCTR_OCM_POS           _GPTA0_UL(11)
#define GPTA0_LTCCTR_OCM_LEN           _GPTA0_UL(3)

/* GPTA0_LTCCTR_OIA (rw) */
#define GPTA0_LTCCTR_OIA_POS           _GPTA0_UL(14)
#define GPTA0_LTCCTR_OIA_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_OSM (rw) */
#define GPTA0_LTCCTR_OSM_POS           _GPTA0_UL(2)
#define GPTA0_LTCCTR_OSM_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_OUT (rh) */
#define GPTA0_LTCCTR_OUT_POS           _GPTA0_UL(15)
#define GPTA0_LTCCTR_OUT_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_RED (rw) */
#define GPTA0_LTCCTR_RED_POS           _GPTA0_UL(4)
#define GPTA0_LTCCTR_RED_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_REN (rw) */
#define GPTA0_LTCCTR_REN_POS           _GPTA0_UL(3)
#define GPTA0_LTCCTR_REN_LEN           _GPTA0_UL(1)

/* GPTA0_LTCCTR_SLO (rwh) */
#define GPTA0_LTCCTR_SLO_POS           _GPTA0_UL(6)
#define GPTA0_LTCCTR_SLO_LEN           _GPTA0_UL(1)

/* GPTA0_LTCXR_X (rwh) */
#define GPTA0_LTCXR_X_POS              _GPTA0_UL(0)
#define GPTA0_LTCXR_X_LEN              _GPTA0_UL(16)

/* GPTA0_LTCXR_XS (rw) */
#define GPTA0_LTCXR_XS_POS             _GPTA0_UL(16)
#define GPTA0_LTCXR_XS_LEN             _GPTA0_UL(16)

/* GPTA0_MRACTL_FIFOFILLCNT (r) */
#define GPTA0_MRACTL_FIFOFILLCNT_POS   _GPTA0_UL(8)
#define GPTA0_MRACTL_FIFOFILLCNT_LEN   _GPTA0_UL(6)

/* GPTA0_MRACTL_FIFOFULL (r) */
#define GPTA0_MRACTL_FIFOFULL_POS      _GPTA0_UL(2)
#define GPTA0_MRACTL_FIFOFULL_LEN      _GPTA0_UL(1)

/* GPTA0_MRACTL_MAEN (rw) */
#define GPTA0_MRACTL_MAEN_POS          _GPTA0_UL(0)
#define GPTA0_MRACTL_MAEN_LEN          _GPTA0_UL(1)

/* GPTA0_MRACTL_WCRES (w) */
#define GPTA0_MRACTL_WCRES_POS         _GPTA0_UL(1)
#define GPTA0_MRACTL_WCRES_LEN         _GPTA0_UL(1)

/* GPTA0_MRADIN_DATAIN (w) */
#define GPTA0_MRADIN_DATAIN_POS        _GPTA0_UL(0)
#define GPTA0_MRADIN_DATAIN_LEN        _GPTA0_UL(32)

/* GPTA0_MRADOUT_DATAOUT (rh) */
#define GPTA0_MRADOUT_DATAOUT_POS      _GPTA0_UL(0)
#define GPTA0_MRADOUT_DATAOUT_LEN      _GPTA0_UL(32)

/* GPTA0_PDLCTR_ERR0 (rwh) */
#define GPTA0_PDLCTR_ERR0_POS          _GPTA0_UL(2)
#define GPTA0_PDLCTR_ERR0_LEN          _GPTA0_UL(1)

/* GPTA0_PDLCTR_ERR1 (rwh) */
#define GPTA0_PDLCTR_ERR1_POS          _GPTA0_UL(6)
#define GPTA0_PDLCTR_ERR1_LEN          _GPTA0_UL(1)

/* GPTA0_PDLCTR_MUX0 (rw) */
#define GPTA0_PDLCTR_MUX0_POS          _GPTA0_UL(0)
#define GPTA0_PDLCTR_MUX0_LEN          _GPTA0_UL(1)

/* GPTA0_PDLCTR_MUX1 (rw) */
#define GPTA0_PDLCTR_MUX1_POS          _GPTA0_UL(4)
#define GPTA0_PDLCTR_MUX1_LEN          _GPTA0_UL(1)

/* GPTA0_PDLCTR_TSE0 (rw) */
#define GPTA0_PDLCTR_TSE0_POS          _GPTA0_UL(1)
#define GPTA0_PDLCTR_TSE0_LEN          _GPTA0_UL(1)

/* GPTA0_PDLCTR_TSE1 (rw) */
#define GPTA0_PDLCTR_TSE1_POS          _GPTA0_UL(5)
#define GPTA0_PDLCTR_TSE1_LEN          _GPTA0_UL(1)

/* GPTA0_PLLCNT_CNT (rwh) */
#define GPTA0_PLLCNT_CNT_POS           _GPTA0_UL(0)
#define GPTA0_PLLCNT_CNT_LEN           _GPTA0_UL(16)

/* GPTA0_PLLCTR_AEN (rw) */
#define GPTA0_PLLCTR_AEN_POS           _GPTA0_UL(2)
#define GPTA0_PLLCTR_AEN_LEN           _GPTA0_UL(1)

/* GPTA0_PLLCTR_MUX (rw) */
#define GPTA0_PLLCTR_MUX_POS           _GPTA0_UL(0)
#define GPTA0_PLLCTR_MUX_LEN           _GPTA0_UL(2)

/* GPTA0_PLLCTR_PEN (rwh) */
#define GPTA0_PLLCTR_PEN_POS           _GPTA0_UL(3)
#define GPTA0_PLLCTR_PEN_LEN           _GPTA0_UL(1)

/* GPTA0_PLLCTR_REN (rw) */
#define GPTA0_PLLCTR_REN_POS           _GPTA0_UL(4)
#define GPTA0_PLLCTR_REN_LEN           _GPTA0_UL(1)

/* GPTA0_PLLDTR_DTR (rwh) */
#define GPTA0_PLLDTR_DTR_POS           _GPTA0_UL(0)
#define GPTA0_PLLDTR_DTR_LEN           _GPTA0_UL(24)

/* GPTA0_PLLMTI_MTI (rw) */
#define GPTA0_PLLMTI_MTI_POS           _GPTA0_UL(0)
#define GPTA0_PLLMTI_MTI_LEN           _GPTA0_UL(16)

/* GPTA0_PLLREV_REV (rw) */
#define GPTA0_PLLREV_REV_POS           _GPTA0_UL(0)
#define GPTA0_PLLREV_REV_LEN           _GPTA0_UL(24)

/* GPTA0_PLLSTP_STP (rw) */
#define GPTA0_PLLSTP_STP_POS           _GPTA0_UL(0)
#define GPTA0_PLLSTP_STP_LEN           _GPTA0_UL(16)

/* GPTA0_SRC00_CLRR (w) */
#define GPTA0_SRC00_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC00_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC00_SETR (w) */
#define GPTA0_SRC00_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC00_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC00_SRE (rw) */
#define GPTA0_SRC00_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC00_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC00_SRPN (rw) */
#define GPTA0_SRC00_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC00_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC00_SRR (rh) */
#define GPTA0_SRC00_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC00_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC00_TOS (rw) */
#define GPTA0_SRC00_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC00_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC01_CLRR (w) */
#define GPTA0_SRC01_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC01_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC01_SETR (w) */
#define GPTA0_SRC01_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC01_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC01_SRE (rw) */
#define GPTA0_SRC01_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC01_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC01_SRPN (rw) */
#define GPTA0_SRC01_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC01_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC01_SRR (rh) */
#define GPTA0_SRC01_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC01_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC01_TOS (rw) */
#define GPTA0_SRC01_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC01_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC02_CLRR (w) */
#define GPTA0_SRC02_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC02_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC02_SETR (w) */
#define GPTA0_SRC02_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC02_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC02_SRE (rw) */
#define GPTA0_SRC02_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC02_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC02_SRPN (rw) */
#define GPTA0_SRC02_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC02_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC02_SRR (rh) */
#define GPTA0_SRC02_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC02_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC02_TOS (rw) */
#define GPTA0_SRC02_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC02_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC03_CLRR (w) */
#define GPTA0_SRC03_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC03_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC03_SETR (w) */
#define GPTA0_SRC03_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC03_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC03_SRE (rw) */
#define GPTA0_SRC03_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC03_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC03_SRPN (rw) */
#define GPTA0_SRC03_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC03_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC03_SRR (rh) */
#define GPTA0_SRC03_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC03_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC03_TOS (rw) */
#define GPTA0_SRC03_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC03_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC04_CLRR (w) */
#define GPTA0_SRC04_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC04_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC04_SETR (w) */
#define GPTA0_SRC04_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC04_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC04_SRE (rw) */
#define GPTA0_SRC04_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC04_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC04_SRPN (rw) */
#define GPTA0_SRC04_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC04_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC04_SRR (rh) */
#define GPTA0_SRC04_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC04_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC04_TOS (rw) */
#define GPTA0_SRC04_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC04_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC05_CLRR (w) */
#define GPTA0_SRC05_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC05_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC05_SETR (w) */
#define GPTA0_SRC05_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC05_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC05_SRE (rw) */
#define GPTA0_SRC05_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC05_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC05_SRPN (rw) */
#define GPTA0_SRC05_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC05_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC05_SRR (rh) */
#define GPTA0_SRC05_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC05_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC05_TOS (rw) */
#define GPTA0_SRC05_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC05_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC06_CLRR (w) */
#define GPTA0_SRC06_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC06_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC06_SETR (w) */
#define GPTA0_SRC06_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC06_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC06_SRE (rw) */
#define GPTA0_SRC06_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC06_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC06_SRPN (rw) */
#define GPTA0_SRC06_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC06_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC06_SRR (rh) */
#define GPTA0_SRC06_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC06_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC06_TOS (rw) */
#define GPTA0_SRC06_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC06_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC07_CLRR (w) */
#define GPTA0_SRC07_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC07_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC07_SETR (w) */
#define GPTA0_SRC07_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC07_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC07_SRE (rw) */
#define GPTA0_SRC07_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC07_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC07_SRPN (rw) */
#define GPTA0_SRC07_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC07_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC07_SRR (rh) */
#define GPTA0_SRC07_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC07_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC07_TOS (rw) */
#define GPTA0_SRC07_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC07_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC08_CLRR (w) */
#define GPTA0_SRC08_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC08_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC08_SETR (w) */
#define GPTA0_SRC08_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC08_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC08_SRE (rw) */
#define GPTA0_SRC08_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC08_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC08_SRPN (rw) */
#define GPTA0_SRC08_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC08_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC08_SRR (rh) */
#define GPTA0_SRC08_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC08_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC08_TOS (rw) */
#define GPTA0_SRC08_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC08_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC09_CLRR (w) */
#define GPTA0_SRC09_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC09_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC09_SETR (w) */
#define GPTA0_SRC09_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC09_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC09_SRE (rw) */
#define GPTA0_SRC09_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC09_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC09_SRPN (rw) */
#define GPTA0_SRC09_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC09_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC09_SRR (rh) */
#define GPTA0_SRC09_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC09_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC09_TOS (rw) */
#define GPTA0_SRC09_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC09_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC10_CLRR (w) */
#define GPTA0_SRC10_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC10_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC10_SETR (w) */
#define GPTA0_SRC10_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC10_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC10_SRE (rw) */
#define GPTA0_SRC10_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC10_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC10_SRPN (rw) */
#define GPTA0_SRC10_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC10_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC10_SRR (rh) */
#define GPTA0_SRC10_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC10_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC10_TOS (rw) */
#define GPTA0_SRC10_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC10_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC11_CLRR (w) */
#define GPTA0_SRC11_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC11_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC11_SETR (w) */
#define GPTA0_SRC11_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC11_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC11_SRE (rw) */
#define GPTA0_SRC11_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC11_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC11_SRPN (rw) */
#define GPTA0_SRC11_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC11_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC11_SRR (rh) */
#define GPTA0_SRC11_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC11_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC11_TOS (rw) */
#define GPTA0_SRC11_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC11_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC12_CLRR (w) */
#define GPTA0_SRC12_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC12_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC12_SETR (w) */
#define GPTA0_SRC12_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC12_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC12_SRE (rw) */
#define GPTA0_SRC12_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC12_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC12_SRPN (rw) */
#define GPTA0_SRC12_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC12_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC12_SRR (rh) */
#define GPTA0_SRC12_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC12_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC12_TOS (rw) */
#define GPTA0_SRC12_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC12_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC13_CLRR (w) */
#define GPTA0_SRC13_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC13_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC13_SETR (w) */
#define GPTA0_SRC13_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC13_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC13_SRE (rw) */
#define GPTA0_SRC13_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC13_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC13_SRPN (rw) */
#define GPTA0_SRC13_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC13_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC13_SRR (rh) */
#define GPTA0_SRC13_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC13_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC13_TOS (rw) */
#define GPTA0_SRC13_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC13_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC14_CLRR (w) */
#define GPTA0_SRC14_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC14_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC14_SETR (w) */
#define GPTA0_SRC14_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC14_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC14_SRE (rw) */
#define GPTA0_SRC14_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC14_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC14_SRPN (rw) */
#define GPTA0_SRC14_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC14_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC14_SRR (rh) */
#define GPTA0_SRC14_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC14_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC14_TOS (rw) */
#define GPTA0_SRC14_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC14_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC15_CLRR (w) */
#define GPTA0_SRC15_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC15_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC15_SETR (w) */
#define GPTA0_SRC15_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC15_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC15_SRE (rw) */
#define GPTA0_SRC15_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC15_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC15_SRPN (rw) */
#define GPTA0_SRC15_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC15_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC15_SRR (rh) */
#define GPTA0_SRC15_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC15_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC15_TOS (rw) */
#define GPTA0_SRC15_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC15_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC16_CLRR (w) */
#define GPTA0_SRC16_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC16_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC16_SETR (w) */
#define GPTA0_SRC16_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC16_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC16_SRE (rw) */
#define GPTA0_SRC16_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC16_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC16_SRPN (rw) */
#define GPTA0_SRC16_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC16_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC16_SRR (rh) */
#define GPTA0_SRC16_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC16_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC16_TOS (rw) */
#define GPTA0_SRC16_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC16_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC17_CLRR (w) */
#define GPTA0_SRC17_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC17_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC17_SETR (w) */
#define GPTA0_SRC17_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC17_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC17_SRE (rw) */
#define GPTA0_SRC17_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC17_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC17_SRPN (rw) */
#define GPTA0_SRC17_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC17_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC17_SRR (rh) */
#define GPTA0_SRC17_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC17_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC17_TOS (rw) */
#define GPTA0_SRC17_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC17_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC18_CLRR (w) */
#define GPTA0_SRC18_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC18_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC18_SETR (w) */
#define GPTA0_SRC18_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC18_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC18_SRE (rw) */
#define GPTA0_SRC18_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC18_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC18_SRPN (rw) */
#define GPTA0_SRC18_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC18_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC18_SRR (rh) */
#define GPTA0_SRC18_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC18_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC18_TOS (rw) */
#define GPTA0_SRC18_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC18_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC19_CLRR (w) */
#define GPTA0_SRC19_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC19_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC19_SETR (w) */
#define GPTA0_SRC19_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC19_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC19_SRE (rw) */
#define GPTA0_SRC19_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC19_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC19_SRPN (rw) */
#define GPTA0_SRC19_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC19_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC19_SRR (rh) */
#define GPTA0_SRC19_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC19_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC19_TOS (rw) */
#define GPTA0_SRC19_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC19_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC20_CLRR (w) */
#define GPTA0_SRC20_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC20_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC20_SETR (w) */
#define GPTA0_SRC20_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC20_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC20_SRE (rw) */
#define GPTA0_SRC20_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC20_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC20_SRPN (rw) */
#define GPTA0_SRC20_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC20_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC20_SRR (rh) */
#define GPTA0_SRC20_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC20_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC20_TOS (rw) */
#define GPTA0_SRC20_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC20_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC21_CLRR (w) */
#define GPTA0_SRC21_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC21_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC21_SETR (w) */
#define GPTA0_SRC21_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC21_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC21_SRE (rw) */
#define GPTA0_SRC21_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC21_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC21_SRPN (rw) */
#define GPTA0_SRC21_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC21_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC21_SRR (rh) */
#define GPTA0_SRC21_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC21_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC21_TOS (rw) */
#define GPTA0_SRC21_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC21_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC22_CLRR (w) */
#define GPTA0_SRC22_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC22_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC22_SETR (w) */
#define GPTA0_SRC22_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC22_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC22_SRE (rw) */
#define GPTA0_SRC22_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC22_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC22_SRPN (rw) */
#define GPTA0_SRC22_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC22_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC22_SRR (rh) */
#define GPTA0_SRC22_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC22_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC22_TOS (rw) */
#define GPTA0_SRC22_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC22_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC23_CLRR (w) */
#define GPTA0_SRC23_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC23_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC23_SETR (w) */
#define GPTA0_SRC23_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC23_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC23_SRE (rw) */
#define GPTA0_SRC23_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC23_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC23_SRPN (rw) */
#define GPTA0_SRC23_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC23_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC23_SRR (rh) */
#define GPTA0_SRC23_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC23_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC23_TOS (rw) */
#define GPTA0_SRC23_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC23_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC24_CLRR (w) */
#define GPTA0_SRC24_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC24_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC24_SETR (w) */
#define GPTA0_SRC24_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC24_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC24_SRE (rw) */
#define GPTA0_SRC24_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC24_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC24_SRPN (rw) */
#define GPTA0_SRC24_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC24_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC24_SRR (rh) */
#define GPTA0_SRC24_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC24_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC24_TOS (rw) */
#define GPTA0_SRC24_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC24_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC25_CLRR (w) */
#define GPTA0_SRC25_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC25_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC25_SETR (w) */
#define GPTA0_SRC25_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC25_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC25_SRE (rw) */
#define GPTA0_SRC25_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC25_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC25_SRPN (rw) */
#define GPTA0_SRC25_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC25_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC25_SRR (rh) */
#define GPTA0_SRC25_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC25_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC25_TOS (rw) */
#define GPTA0_SRC25_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC25_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC26_CLRR (w) */
#define GPTA0_SRC26_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC26_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC26_SETR (w) */
#define GPTA0_SRC26_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC26_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC26_SRE (rw) */
#define GPTA0_SRC26_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC26_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC26_SRPN (rw) */
#define GPTA0_SRC26_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC26_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC26_SRR (rh) */
#define GPTA0_SRC26_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC26_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC26_TOS (rw) */
#define GPTA0_SRC26_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC26_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC27_CLRR (w) */
#define GPTA0_SRC27_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC27_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC27_SETR (w) */
#define GPTA0_SRC27_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC27_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC27_SRE (rw) */
#define GPTA0_SRC27_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC27_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC27_SRPN (rw) */
#define GPTA0_SRC27_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC27_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC27_SRR (rh) */
#define GPTA0_SRC27_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC27_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC27_TOS (rw) */
#define GPTA0_SRC27_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC27_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC28_CLRR (w) */
#define GPTA0_SRC28_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC28_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC28_SETR (w) */
#define GPTA0_SRC28_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC28_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC28_SRE (rw) */
#define GPTA0_SRC28_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC28_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC28_SRPN (rw) */
#define GPTA0_SRC28_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC28_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC28_SRR (rh) */
#define GPTA0_SRC28_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC28_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC28_TOS (rw) */
#define GPTA0_SRC28_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC28_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC29_CLRR (w) */
#define GPTA0_SRC29_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC29_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC29_SETR (w) */
#define GPTA0_SRC29_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC29_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC29_SRE (rw) */
#define GPTA0_SRC29_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC29_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC29_SRPN (rw) */
#define GPTA0_SRC29_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC29_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC29_SRR (rh) */
#define GPTA0_SRC29_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC29_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC29_TOS (rw) */
#define GPTA0_SRC29_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC29_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC30_CLRR (w) */
#define GPTA0_SRC30_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC30_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC30_SETR (w) */
#define GPTA0_SRC30_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC30_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC30_SRE (rw) */
#define GPTA0_SRC30_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC30_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC30_SRPN (rw) */
#define GPTA0_SRC30_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC30_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC30_SRR (rh) */
#define GPTA0_SRC30_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC30_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC30_TOS (rw) */
#define GPTA0_SRC30_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC30_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC31_CLRR (w) */
#define GPTA0_SRC31_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC31_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC31_SETR (w) */
#define GPTA0_SRC31_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC31_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC31_SRE (rw) */
#define GPTA0_SRC31_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC31_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC31_SRPN (rw) */
#define GPTA0_SRC31_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC31_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC31_SRR (rh) */
#define GPTA0_SRC31_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC31_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC31_TOS (rw) */
#define GPTA0_SRC31_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC31_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC32_CLRR (w) */
#define GPTA0_SRC32_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC32_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC32_SETR (w) */
#define GPTA0_SRC32_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC32_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC32_SRE (rw) */
#define GPTA0_SRC32_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC32_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC32_SRPN (rw) */
#define GPTA0_SRC32_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC32_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC32_SRR (rh) */
#define GPTA0_SRC32_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC32_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC32_TOS (rw) */
#define GPTA0_SRC32_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC32_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC33_CLRR (w) */
#define GPTA0_SRC33_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC33_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC33_SETR (w) */
#define GPTA0_SRC33_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC33_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC33_SRE (rw) */
#define GPTA0_SRC33_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC33_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC33_SRPN (rw) */
#define GPTA0_SRC33_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC33_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC33_SRR (rh) */
#define GPTA0_SRC33_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC33_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC33_TOS (rw) */
#define GPTA0_SRC33_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC33_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC34_CLRR (w) */
#define GPTA0_SRC34_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC34_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC34_SETR (w) */
#define GPTA0_SRC34_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC34_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC34_SRE (rw) */
#define GPTA0_SRC34_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC34_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC34_SRPN (rw) */
#define GPTA0_SRC34_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC34_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC34_SRR (rh) */
#define GPTA0_SRC34_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC34_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC34_TOS (rw) */
#define GPTA0_SRC34_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC34_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC35_CLRR (w) */
#define GPTA0_SRC35_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC35_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC35_SETR (w) */
#define GPTA0_SRC35_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC35_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC35_SRE (rw) */
#define GPTA0_SRC35_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC35_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC35_SRPN (rw) */
#define GPTA0_SRC35_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC35_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC35_SRR (rh) */
#define GPTA0_SRC35_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC35_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC35_TOS (rw) */
#define GPTA0_SRC35_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC35_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC36_CLRR (w) */
#define GPTA0_SRC36_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC36_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC36_SETR (w) */
#define GPTA0_SRC36_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC36_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC36_SRE (rw) */
#define GPTA0_SRC36_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC36_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC36_SRPN (rw) */
#define GPTA0_SRC36_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC36_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC36_SRR (rh) */
#define GPTA0_SRC36_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC36_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC36_TOS (rw) */
#define GPTA0_SRC36_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC36_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRC37_CLRR (w) */
#define GPTA0_SRC37_CLRR_POS           _GPTA0_UL(14)
#define GPTA0_SRC37_CLRR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC37_SETR (w) */
#define GPTA0_SRC37_SETR_POS           _GPTA0_UL(15)
#define GPTA0_SRC37_SETR_LEN           _GPTA0_UL(1)

/* GPTA0_SRC37_SRE (rw) */
#define GPTA0_SRC37_SRE_POS            _GPTA0_UL(12)
#define GPTA0_SRC37_SRE_LEN            _GPTA0_UL(1)

/* GPTA0_SRC37_SRPN (rw) */
#define GPTA0_SRC37_SRPN_POS           _GPTA0_UL(0)
#define GPTA0_SRC37_SRPN_LEN           _GPTA0_UL(8)

/* GPTA0_SRC37_SRR (rh) */
#define GPTA0_SRC37_SRR_POS            _GPTA0_UL(13)
#define GPTA0_SRC37_SRR_LEN            _GPTA0_UL(1)

/* GPTA0_SRC37_TOS (rw) */
#define GPTA0_SRC37_TOS_POS            _GPTA0_UL(10)
#define GPTA0_SRC37_TOS_LEN            _GPTA0_UL(1)

/* GPTA0_SRNR_GTC01R (rw) */
#define GPTA0_SRNR_GTC01R_POS          _GPTA0_UL(0)
#define GPTA0_SRNR_GTC01R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC03R (rw) */
#define GPTA0_SRNR_GTC03R_POS          _GPTA0_UL(1)
#define GPTA0_SRNR_GTC03R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC05R (rw) */
#define GPTA0_SRNR_GTC05R_POS          _GPTA0_UL(2)
#define GPTA0_SRNR_GTC05R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC07R (rw) */
#define GPTA0_SRNR_GTC07R_POS          _GPTA0_UL(3)
#define GPTA0_SRNR_GTC07R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC09R (rw) */
#define GPTA0_SRNR_GTC09R_POS          _GPTA0_UL(4)
#define GPTA0_SRNR_GTC09R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC11R (rw) */
#define GPTA0_SRNR_GTC11R_POS          _GPTA0_UL(5)
#define GPTA0_SRNR_GTC11R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC13R (rw) */
#define GPTA0_SRNR_GTC13R_POS          _GPTA0_UL(6)
#define GPTA0_SRNR_GTC13R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC15R (rw) */
#define GPTA0_SRNR_GTC15R_POS          _GPTA0_UL(7)
#define GPTA0_SRNR_GTC15R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC17R (rw) */
#define GPTA0_SRNR_GTC17R_POS          _GPTA0_UL(8)
#define GPTA0_SRNR_GTC17R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC19R (rw) */
#define GPTA0_SRNR_GTC19R_POS          _GPTA0_UL(9)
#define GPTA0_SRNR_GTC19R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC21R (rw) */
#define GPTA0_SRNR_GTC21R_POS          _GPTA0_UL(10)
#define GPTA0_SRNR_GTC21R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC23R (rw) */
#define GPTA0_SRNR_GTC23R_POS          _GPTA0_UL(11)
#define GPTA0_SRNR_GTC23R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC25R (rw) */
#define GPTA0_SRNR_GTC25R_POS          _GPTA0_UL(12)
#define GPTA0_SRNR_GTC25R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC27R (rw) */
#define GPTA0_SRNR_GTC27R_POS          _GPTA0_UL(13)
#define GPTA0_SRNR_GTC27R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC29R (rw) */
#define GPTA0_SRNR_GTC29R_POS          _GPTA0_UL(14)
#define GPTA0_SRNR_GTC29R_LEN          _GPTA0_UL(1)

/* GPTA0_SRNR_GTC31R (rw) */
#define GPTA0_SRNR_GTC31R_POS          _GPTA0_UL(15)
#define GPTA0_SRNR_GTC31R_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM00C (rwh) */
#define GPTA0_SRSC0_DCM00C_POS         _GPTA0_UL(2)
#define GPTA0_SRSC0_DCM00C_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM00F (rwh) */
#define GPTA0_SRSC0_DCM00F_POS         _GPTA0_UL(1)
#define GPTA0_SRSC0_DCM00F_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM00R (rwh) */
#define GPTA0_SRSC0_DCM00R_POS         _GPTA0_UL(0)
#define GPTA0_SRSC0_DCM00R_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM01C (rwh) */
#define GPTA0_SRSC0_DCM01C_POS         _GPTA0_UL(5)
#define GPTA0_SRSC0_DCM01C_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM01F (rwh) */
#define GPTA0_SRSC0_DCM01F_POS         _GPTA0_UL(4)
#define GPTA0_SRSC0_DCM01F_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM01R (rwh) */
#define GPTA0_SRSC0_DCM01R_POS         _GPTA0_UL(3)
#define GPTA0_SRSC0_DCM01R_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM02C (rwh) */
#define GPTA0_SRSC0_DCM02C_POS         _GPTA0_UL(8)
#define GPTA0_SRSC0_DCM02C_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM02F (rwh) */
#define GPTA0_SRSC0_DCM02F_POS         _GPTA0_UL(7)
#define GPTA0_SRSC0_DCM02F_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM02R (rwh) */
#define GPTA0_SRSC0_DCM02R_POS         _GPTA0_UL(6)
#define GPTA0_SRSC0_DCM02R_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM03C (rwh) */
#define GPTA0_SRSC0_DCM03C_POS         _GPTA0_UL(11)
#define GPTA0_SRSC0_DCM03C_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM03F (rwh) */
#define GPTA0_SRSC0_DCM03F_POS         _GPTA0_UL(10)
#define GPTA0_SRSC0_DCM03F_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_DCM03R (rwh) */
#define GPTA0_SRSC0_DCM03R_POS         _GPTA0_UL(9)
#define GPTA0_SRSC0_DCM03R_LEN         _GPTA0_UL(1)

/* GPTA0_SRSC0_GT00 (rwh) */
#define GPTA0_SRSC0_GT00_POS           _GPTA0_UL(13)
#define GPTA0_SRSC0_GT00_LEN           _GPTA0_UL(1)

/* GPTA0_SRSC0_GT01 (rwh) */
#define GPTA0_SRSC0_GT01_POS           _GPTA0_UL(14)
#define GPTA0_SRSC0_GT01_LEN           _GPTA0_UL(1)

/* GPTA0_SRSC0_PLL (rwh) */
#define GPTA0_SRSC0_PLL_POS            _GPTA0_UL(12)
#define GPTA0_SRSC0_PLL_LEN            _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC00 (rwh) */
#define GPTA0_SRSC1_GTC00_POS          _GPTA0_UL(0)
#define GPTA0_SRSC1_GTC00_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC01 (rwh) */
#define GPTA0_SRSC1_GTC01_POS          _GPTA0_UL(1)
#define GPTA0_SRSC1_GTC01_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC02 (rwh) */
#define GPTA0_SRSC1_GTC02_POS          _GPTA0_UL(2)
#define GPTA0_SRSC1_GTC02_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC03 (rwh) */
#define GPTA0_SRSC1_GTC03_POS          _GPTA0_UL(3)
#define GPTA0_SRSC1_GTC03_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC04 (rwh) */
#define GPTA0_SRSC1_GTC04_POS          _GPTA0_UL(4)
#define GPTA0_SRSC1_GTC04_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC05 (rwh) */
#define GPTA0_SRSC1_GTC05_POS          _GPTA0_UL(5)
#define GPTA0_SRSC1_GTC05_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC06 (rwh) */
#define GPTA0_SRSC1_GTC06_POS          _GPTA0_UL(6)
#define GPTA0_SRSC1_GTC06_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC07 (rwh) */
#define GPTA0_SRSC1_GTC07_POS          _GPTA0_UL(7)
#define GPTA0_SRSC1_GTC07_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC08 (rwh) */
#define GPTA0_SRSC1_GTC08_POS          _GPTA0_UL(8)
#define GPTA0_SRSC1_GTC08_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC09 (rwh) */
#define GPTA0_SRSC1_GTC09_POS          _GPTA0_UL(9)
#define GPTA0_SRSC1_GTC09_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC10 (rwh) */
#define GPTA0_SRSC1_GTC10_POS          _GPTA0_UL(10)
#define GPTA0_SRSC1_GTC10_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC11 (rwh) */
#define GPTA0_SRSC1_GTC11_POS          _GPTA0_UL(11)
#define GPTA0_SRSC1_GTC11_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC12 (rwh) */
#define GPTA0_SRSC1_GTC12_POS          _GPTA0_UL(12)
#define GPTA0_SRSC1_GTC12_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC13 (rwh) */
#define GPTA0_SRSC1_GTC13_POS          _GPTA0_UL(13)
#define GPTA0_SRSC1_GTC13_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC14 (rwh) */
#define GPTA0_SRSC1_GTC14_POS          _GPTA0_UL(14)
#define GPTA0_SRSC1_GTC14_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC15 (rwh) */
#define GPTA0_SRSC1_GTC15_POS          _GPTA0_UL(15)
#define GPTA0_SRSC1_GTC15_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC16 (rwh) */
#define GPTA0_SRSC1_GTC16_POS          _GPTA0_UL(16)
#define GPTA0_SRSC1_GTC16_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC17 (rwh) */
#define GPTA0_SRSC1_GTC17_POS          _GPTA0_UL(17)
#define GPTA0_SRSC1_GTC17_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC18 (rwh) */
#define GPTA0_SRSC1_GTC18_POS          _GPTA0_UL(18)
#define GPTA0_SRSC1_GTC18_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC19 (rwh) */
#define GPTA0_SRSC1_GTC19_POS          _GPTA0_UL(19)
#define GPTA0_SRSC1_GTC19_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC20 (rwh) */
#define GPTA0_SRSC1_GTC20_POS          _GPTA0_UL(20)
#define GPTA0_SRSC1_GTC20_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC21 (rwh) */
#define GPTA0_SRSC1_GTC21_POS          _GPTA0_UL(21)
#define GPTA0_SRSC1_GTC21_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC22 (rwh) */
#define GPTA0_SRSC1_GTC22_POS          _GPTA0_UL(22)
#define GPTA0_SRSC1_GTC22_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC23 (rwh) */
#define GPTA0_SRSC1_GTC23_POS          _GPTA0_UL(23)
#define GPTA0_SRSC1_GTC23_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC24 (rwh) */
#define GPTA0_SRSC1_GTC24_POS          _GPTA0_UL(24)
#define GPTA0_SRSC1_GTC24_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC25 (rwh) */
#define GPTA0_SRSC1_GTC25_POS          _GPTA0_UL(25)
#define GPTA0_SRSC1_GTC25_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC26 (rwh) */
#define GPTA0_SRSC1_GTC26_POS          _GPTA0_UL(26)
#define GPTA0_SRSC1_GTC26_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC27 (rwh) */
#define GPTA0_SRSC1_GTC27_POS          _GPTA0_UL(27)
#define GPTA0_SRSC1_GTC27_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC28 (rwh) */
#define GPTA0_SRSC1_GTC28_POS          _GPTA0_UL(28)
#define GPTA0_SRSC1_GTC28_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC29 (rwh) */
#define GPTA0_SRSC1_GTC29_POS          _GPTA0_UL(29)
#define GPTA0_SRSC1_GTC29_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC30 (rwh) */
#define GPTA0_SRSC1_GTC30_POS          _GPTA0_UL(30)
#define GPTA0_SRSC1_GTC30_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC1_GTC31 (rwh) */
#define GPTA0_SRSC1_GTC31_POS          _GPTA0_UL(31)
#define GPTA0_SRSC1_GTC31_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC00 (rwh) */
#define GPTA0_SRSC2_LTC00_POS          _GPTA0_UL(0)
#define GPTA0_SRSC2_LTC00_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC01 (rwh) */
#define GPTA0_SRSC2_LTC01_POS          _GPTA0_UL(1)
#define GPTA0_SRSC2_LTC01_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC02 (rwh) */
#define GPTA0_SRSC2_LTC02_POS          _GPTA0_UL(2)
#define GPTA0_SRSC2_LTC02_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC03 (rwh) */
#define GPTA0_SRSC2_LTC03_POS          _GPTA0_UL(3)
#define GPTA0_SRSC2_LTC03_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC04 (rwh) */
#define GPTA0_SRSC2_LTC04_POS          _GPTA0_UL(4)
#define GPTA0_SRSC2_LTC04_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC05 (rwh) */
#define GPTA0_SRSC2_LTC05_POS          _GPTA0_UL(5)
#define GPTA0_SRSC2_LTC05_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC06 (rwh) */
#define GPTA0_SRSC2_LTC06_POS          _GPTA0_UL(6)
#define GPTA0_SRSC2_LTC06_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC07 (rwh) */
#define GPTA0_SRSC2_LTC07_POS          _GPTA0_UL(7)
#define GPTA0_SRSC2_LTC07_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC08 (rwh) */
#define GPTA0_SRSC2_LTC08_POS          _GPTA0_UL(8)
#define GPTA0_SRSC2_LTC08_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC09 (rwh) */
#define GPTA0_SRSC2_LTC09_POS          _GPTA0_UL(9)
#define GPTA0_SRSC2_LTC09_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC10 (rwh) */
#define GPTA0_SRSC2_LTC10_POS          _GPTA0_UL(10)
#define GPTA0_SRSC2_LTC10_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC11 (rwh) */
#define GPTA0_SRSC2_LTC11_POS          _GPTA0_UL(11)
#define GPTA0_SRSC2_LTC11_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC12 (rwh) */
#define GPTA0_SRSC2_LTC12_POS          _GPTA0_UL(12)
#define GPTA0_SRSC2_LTC12_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC13 (rwh) */
#define GPTA0_SRSC2_LTC13_POS          _GPTA0_UL(13)
#define GPTA0_SRSC2_LTC13_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC14 (rwh) */
#define GPTA0_SRSC2_LTC14_POS          _GPTA0_UL(14)
#define GPTA0_SRSC2_LTC14_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC15 (rwh) */
#define GPTA0_SRSC2_LTC15_POS          _GPTA0_UL(15)
#define GPTA0_SRSC2_LTC15_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC16 (rwh) */
#define GPTA0_SRSC2_LTC16_POS          _GPTA0_UL(16)
#define GPTA0_SRSC2_LTC16_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC17 (rwh) */
#define GPTA0_SRSC2_LTC17_POS          _GPTA0_UL(17)
#define GPTA0_SRSC2_LTC17_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC18 (rwh) */
#define GPTA0_SRSC2_LTC18_POS          _GPTA0_UL(18)
#define GPTA0_SRSC2_LTC18_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC19 (rwh) */
#define GPTA0_SRSC2_LTC19_POS          _GPTA0_UL(19)
#define GPTA0_SRSC2_LTC19_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC20 (rwh) */
#define GPTA0_SRSC2_LTC20_POS          _GPTA0_UL(20)
#define GPTA0_SRSC2_LTC20_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC21 (rwh) */
#define GPTA0_SRSC2_LTC21_POS          _GPTA0_UL(21)
#define GPTA0_SRSC2_LTC21_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC22 (rwh) */
#define GPTA0_SRSC2_LTC22_POS          _GPTA0_UL(22)
#define GPTA0_SRSC2_LTC22_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC23 (rwh) */
#define GPTA0_SRSC2_LTC23_POS          _GPTA0_UL(23)
#define GPTA0_SRSC2_LTC23_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC24 (rwh) */
#define GPTA0_SRSC2_LTC24_POS          _GPTA0_UL(24)
#define GPTA0_SRSC2_LTC24_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC25 (rwh) */
#define GPTA0_SRSC2_LTC25_POS          _GPTA0_UL(25)
#define GPTA0_SRSC2_LTC25_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC26 (rwh) */
#define GPTA0_SRSC2_LTC26_POS          _GPTA0_UL(26)
#define GPTA0_SRSC2_LTC26_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC27 (rwh) */
#define GPTA0_SRSC2_LTC27_POS          _GPTA0_UL(27)
#define GPTA0_SRSC2_LTC27_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC28 (rwh) */
#define GPTA0_SRSC2_LTC28_POS          _GPTA0_UL(28)
#define GPTA0_SRSC2_LTC28_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC29 (rwh) */
#define GPTA0_SRSC2_LTC29_POS          _GPTA0_UL(29)
#define GPTA0_SRSC2_LTC29_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC30 (rwh) */
#define GPTA0_SRSC2_LTC30_POS          _GPTA0_UL(30)
#define GPTA0_SRSC2_LTC30_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC2_LTC31 (rwh) */
#define GPTA0_SRSC2_LTC31_POS          _GPTA0_UL(31)
#define GPTA0_SRSC2_LTC31_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC32 (rwh) */
#define GPTA0_SRSC3_LTC32_POS          _GPTA0_UL(0)
#define GPTA0_SRSC3_LTC32_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC33 (rwh) */
#define GPTA0_SRSC3_LTC33_POS          _GPTA0_UL(1)
#define GPTA0_SRSC3_LTC33_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC34 (rwh) */
#define GPTA0_SRSC3_LTC34_POS          _GPTA0_UL(2)
#define GPTA0_SRSC3_LTC34_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC35 (rwh) */
#define GPTA0_SRSC3_LTC35_POS          _GPTA0_UL(3)
#define GPTA0_SRSC3_LTC35_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC36 (rwh) */
#define GPTA0_SRSC3_LTC36_POS          _GPTA0_UL(4)
#define GPTA0_SRSC3_LTC36_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC37 (rwh) */
#define GPTA0_SRSC3_LTC37_POS          _GPTA0_UL(5)
#define GPTA0_SRSC3_LTC37_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC38 (rwh) */
#define GPTA0_SRSC3_LTC38_POS          _GPTA0_UL(6)
#define GPTA0_SRSC3_LTC38_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC39 (rwh) */
#define GPTA0_SRSC3_LTC39_POS          _GPTA0_UL(7)
#define GPTA0_SRSC3_LTC39_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC40 (rwh) */
#define GPTA0_SRSC3_LTC40_POS          _GPTA0_UL(8)
#define GPTA0_SRSC3_LTC40_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC41 (rwh) */
#define GPTA0_SRSC3_LTC41_POS          _GPTA0_UL(9)
#define GPTA0_SRSC3_LTC41_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC42 (rwh) */
#define GPTA0_SRSC3_LTC42_POS          _GPTA0_UL(10)
#define GPTA0_SRSC3_LTC42_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC43 (rwh) */
#define GPTA0_SRSC3_LTC43_POS          _GPTA0_UL(11)
#define GPTA0_SRSC3_LTC43_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC44 (rwh) */
#define GPTA0_SRSC3_LTC44_POS          _GPTA0_UL(12)
#define GPTA0_SRSC3_LTC44_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC45 (rwh) */
#define GPTA0_SRSC3_LTC45_POS          _GPTA0_UL(13)
#define GPTA0_SRSC3_LTC45_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC46 (rwh) */
#define GPTA0_SRSC3_LTC46_POS          _GPTA0_UL(14)
#define GPTA0_SRSC3_LTC46_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC47 (rwh) */
#define GPTA0_SRSC3_LTC47_POS          _GPTA0_UL(15)
#define GPTA0_SRSC3_LTC47_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC48 (rwh) */
#define GPTA0_SRSC3_LTC48_POS          _GPTA0_UL(16)
#define GPTA0_SRSC3_LTC48_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC49 (rwh) */
#define GPTA0_SRSC3_LTC49_POS          _GPTA0_UL(17)
#define GPTA0_SRSC3_LTC49_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC50 (rwh) */
#define GPTA0_SRSC3_LTC50_POS          _GPTA0_UL(18)
#define GPTA0_SRSC3_LTC50_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC51 (rwh) */
#define GPTA0_SRSC3_LTC51_POS          _GPTA0_UL(19)
#define GPTA0_SRSC3_LTC51_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC52 (rwh) */
#define GPTA0_SRSC3_LTC52_POS          _GPTA0_UL(20)
#define GPTA0_SRSC3_LTC52_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC53 (rwh) */
#define GPTA0_SRSC3_LTC53_POS          _GPTA0_UL(21)
#define GPTA0_SRSC3_LTC53_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC54 (rwh) */
#define GPTA0_SRSC3_LTC54_POS          _GPTA0_UL(22)
#define GPTA0_SRSC3_LTC54_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC55 (rwh) */
#define GPTA0_SRSC3_LTC55_POS          _GPTA0_UL(23)
#define GPTA0_SRSC3_LTC55_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC56 (rwh) */
#define GPTA0_SRSC3_LTC56_POS          _GPTA0_UL(24)
#define GPTA0_SRSC3_LTC56_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC57 (rwh) */
#define GPTA0_SRSC3_LTC57_POS          _GPTA0_UL(25)
#define GPTA0_SRSC3_LTC57_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC58 (rwh) */
#define GPTA0_SRSC3_LTC58_POS          _GPTA0_UL(26)
#define GPTA0_SRSC3_LTC58_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC59 (rwh) */
#define GPTA0_SRSC3_LTC59_POS          _GPTA0_UL(27)
#define GPTA0_SRSC3_LTC59_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC60 (rwh) */
#define GPTA0_SRSC3_LTC60_POS          _GPTA0_UL(28)
#define GPTA0_SRSC3_LTC60_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC61 (rwh) */
#define GPTA0_SRSC3_LTC61_POS          _GPTA0_UL(29)
#define GPTA0_SRSC3_LTC61_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC62 (rwh) */
#define GPTA0_SRSC3_LTC62_POS          _GPTA0_UL(30)
#define GPTA0_SRSC3_LTC62_LEN          _GPTA0_UL(1)

/* GPTA0_SRSC3_LTC63 (rwh) */
#define GPTA0_SRSC3_LTC63_POS          _GPTA0_UL(31)
#define GPTA0_SRSC3_LTC63_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM00C (rwh) */
#define GPTA0_SRSS0_DCM00C_POS         _GPTA0_UL(2)
#define GPTA0_SRSS0_DCM00C_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM00F (rwh) */
#define GPTA0_SRSS0_DCM00F_POS         _GPTA0_UL(1)
#define GPTA0_SRSS0_DCM00F_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM00R (rwh) */
#define GPTA0_SRSS0_DCM00R_POS         _GPTA0_UL(0)
#define GPTA0_SRSS0_DCM00R_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM01C (rwh) */
#define GPTA0_SRSS0_DCM01C_POS         _GPTA0_UL(5)
#define GPTA0_SRSS0_DCM01C_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM01F (rwh) */
#define GPTA0_SRSS0_DCM01F_POS         _GPTA0_UL(4)
#define GPTA0_SRSS0_DCM01F_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM01R (rwh) */
#define GPTA0_SRSS0_DCM01R_POS         _GPTA0_UL(3)
#define GPTA0_SRSS0_DCM01R_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM02C (rwh) */
#define GPTA0_SRSS0_DCM02C_POS         _GPTA0_UL(8)
#define GPTA0_SRSS0_DCM02C_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM02F (rwh) */
#define GPTA0_SRSS0_DCM02F_POS         _GPTA0_UL(7)
#define GPTA0_SRSS0_DCM02F_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM02R (rwh) */
#define GPTA0_SRSS0_DCM02R_POS         _GPTA0_UL(6)
#define GPTA0_SRSS0_DCM02R_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM03C (rwh) */
#define GPTA0_SRSS0_DCM03C_POS         _GPTA0_UL(11)
#define GPTA0_SRSS0_DCM03C_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM03F (rwh) */
#define GPTA0_SRSS0_DCM03F_POS         _GPTA0_UL(10)
#define GPTA0_SRSS0_DCM03F_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_DCM03R (rwh) */
#define GPTA0_SRSS0_DCM03R_POS         _GPTA0_UL(9)
#define GPTA0_SRSS0_DCM03R_LEN         _GPTA0_UL(1)

/* GPTA0_SRSS0_GT00 (rwh) */
#define GPTA0_SRSS0_GT00_POS           _GPTA0_UL(13)
#define GPTA0_SRSS0_GT00_LEN           _GPTA0_UL(1)

/* GPTA0_SRSS0_GT01 (rwh) */
#define GPTA0_SRSS0_GT01_POS           _GPTA0_UL(14)
#define GPTA0_SRSS0_GT01_LEN           _GPTA0_UL(1)

/* GPTA0_SRSS0_PLL (rwh) */
#define GPTA0_SRSS0_PLL_POS            _GPTA0_UL(12)
#define GPTA0_SRSS0_PLL_LEN            _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC00 (rwh) */
#define GPTA0_SRSS1_GTC00_POS          _GPTA0_UL(0)
#define GPTA0_SRSS1_GTC00_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC01 (rwh) */
#define GPTA0_SRSS1_GTC01_POS          _GPTA0_UL(1)
#define GPTA0_SRSS1_GTC01_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC02 (rwh) */
#define GPTA0_SRSS1_GTC02_POS          _GPTA0_UL(2)
#define GPTA0_SRSS1_GTC02_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC03 (rwh) */
#define GPTA0_SRSS1_GTC03_POS          _GPTA0_UL(3)
#define GPTA0_SRSS1_GTC03_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC04 (rwh) */
#define GPTA0_SRSS1_GTC04_POS          _GPTA0_UL(4)
#define GPTA0_SRSS1_GTC04_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC05 (rwh) */
#define GPTA0_SRSS1_GTC05_POS          _GPTA0_UL(5)
#define GPTA0_SRSS1_GTC05_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC06 (rwh) */
#define GPTA0_SRSS1_GTC06_POS          _GPTA0_UL(6)
#define GPTA0_SRSS1_GTC06_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC07 (rwh) */
#define GPTA0_SRSS1_GTC07_POS          _GPTA0_UL(7)
#define GPTA0_SRSS1_GTC07_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC08 (rwh) */
#define GPTA0_SRSS1_GTC08_POS          _GPTA0_UL(8)
#define GPTA0_SRSS1_GTC08_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC09 (rwh) */
#define GPTA0_SRSS1_GTC09_POS          _GPTA0_UL(9)
#define GPTA0_SRSS1_GTC09_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC10 (rwh) */
#define GPTA0_SRSS1_GTC10_POS          _GPTA0_UL(10)
#define GPTA0_SRSS1_GTC10_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC11 (rwh) */
#define GPTA0_SRSS1_GTC11_POS          _GPTA0_UL(11)
#define GPTA0_SRSS1_GTC11_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC12 (rwh) */
#define GPTA0_SRSS1_GTC12_POS          _GPTA0_UL(12)
#define GPTA0_SRSS1_GTC12_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC13 (rwh) */
#define GPTA0_SRSS1_GTC13_POS          _GPTA0_UL(13)
#define GPTA0_SRSS1_GTC13_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC14 (rwh) */
#define GPTA0_SRSS1_GTC14_POS          _GPTA0_UL(14)
#define GPTA0_SRSS1_GTC14_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC15 (rwh) */
#define GPTA0_SRSS1_GTC15_POS          _GPTA0_UL(15)
#define GPTA0_SRSS1_GTC15_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC16 (rwh) */
#define GPTA0_SRSS1_GTC16_POS          _GPTA0_UL(16)
#define GPTA0_SRSS1_GTC16_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC17 (rwh) */
#define GPTA0_SRSS1_GTC17_POS          _GPTA0_UL(17)
#define GPTA0_SRSS1_GTC17_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC18 (rwh) */
#define GPTA0_SRSS1_GTC18_POS          _GPTA0_UL(18)
#define GPTA0_SRSS1_GTC18_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC19 (rwh) */
#define GPTA0_SRSS1_GTC19_POS          _GPTA0_UL(19)
#define GPTA0_SRSS1_GTC19_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC20 (rwh) */
#define GPTA0_SRSS1_GTC20_POS          _GPTA0_UL(20)
#define GPTA0_SRSS1_GTC20_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC21 (rwh) */
#define GPTA0_SRSS1_GTC21_POS          _GPTA0_UL(21)
#define GPTA0_SRSS1_GTC21_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC22 (rwh) */
#define GPTA0_SRSS1_GTC22_POS          _GPTA0_UL(22)
#define GPTA0_SRSS1_GTC22_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC23 (rwh) */
#define GPTA0_SRSS1_GTC23_POS          _GPTA0_UL(23)
#define GPTA0_SRSS1_GTC23_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC24 (rwh) */
#define GPTA0_SRSS1_GTC24_POS          _GPTA0_UL(24)
#define GPTA0_SRSS1_GTC24_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC25 (rwh) */
#define GPTA0_SRSS1_GTC25_POS          _GPTA0_UL(25)
#define GPTA0_SRSS1_GTC25_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC26 (rwh) */
#define GPTA0_SRSS1_GTC26_POS          _GPTA0_UL(26)
#define GPTA0_SRSS1_GTC26_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC27 (rwh) */
#define GPTA0_SRSS1_GTC27_POS          _GPTA0_UL(27)
#define GPTA0_SRSS1_GTC27_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC28 (rwh) */
#define GPTA0_SRSS1_GTC28_POS          _GPTA0_UL(28)
#define GPTA0_SRSS1_GTC28_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC29 (rwh) */
#define GPTA0_SRSS1_GTC29_POS          _GPTA0_UL(29)
#define GPTA0_SRSS1_GTC29_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC30 (rwh) */
#define GPTA0_SRSS1_GTC30_POS          _GPTA0_UL(30)
#define GPTA0_SRSS1_GTC30_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS1_GTC31 (rwh) */
#define GPTA0_SRSS1_GTC31_POS          _GPTA0_UL(31)
#define GPTA0_SRSS1_GTC31_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC00 (rwh) */
#define GPTA0_SRSS2_LTC00_POS          _GPTA0_UL(0)
#define GPTA0_SRSS2_LTC00_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC01 (rwh) */
#define GPTA0_SRSS2_LTC01_POS          _GPTA0_UL(1)
#define GPTA0_SRSS2_LTC01_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC02 (rwh) */
#define GPTA0_SRSS2_LTC02_POS          _GPTA0_UL(2)
#define GPTA0_SRSS2_LTC02_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC03 (rwh) */
#define GPTA0_SRSS2_LTC03_POS          _GPTA0_UL(3)
#define GPTA0_SRSS2_LTC03_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC04 (rwh) */
#define GPTA0_SRSS2_LTC04_POS          _GPTA0_UL(4)
#define GPTA0_SRSS2_LTC04_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC05 (rwh) */
#define GPTA0_SRSS2_LTC05_POS          _GPTA0_UL(5)
#define GPTA0_SRSS2_LTC05_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC06 (rwh) */
#define GPTA0_SRSS2_LTC06_POS          _GPTA0_UL(6)
#define GPTA0_SRSS2_LTC06_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC07 (rwh) */
#define GPTA0_SRSS2_LTC07_POS          _GPTA0_UL(7)
#define GPTA0_SRSS2_LTC07_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC08 (rwh) */
#define GPTA0_SRSS2_LTC08_POS          _GPTA0_UL(8)
#define GPTA0_SRSS2_LTC08_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC09 (rwh) */
#define GPTA0_SRSS2_LTC09_POS          _GPTA0_UL(9)
#define GPTA0_SRSS2_LTC09_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC10 (rwh) */
#define GPTA0_SRSS2_LTC10_POS          _GPTA0_UL(10)
#define GPTA0_SRSS2_LTC10_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC11 (rwh) */
#define GPTA0_SRSS2_LTC11_POS          _GPTA0_UL(11)
#define GPTA0_SRSS2_LTC11_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC12 (rwh) */
#define GPTA0_SRSS2_LTC12_POS          _GPTA0_UL(12)
#define GPTA0_SRSS2_LTC12_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC13 (rwh) */
#define GPTA0_SRSS2_LTC13_POS          _GPTA0_UL(13)
#define GPTA0_SRSS2_LTC13_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC14 (rwh) */
#define GPTA0_SRSS2_LTC14_POS          _GPTA0_UL(14)
#define GPTA0_SRSS2_LTC14_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC15 (rwh) */
#define GPTA0_SRSS2_LTC15_POS          _GPTA0_UL(15)
#define GPTA0_SRSS2_LTC15_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC16 (rwh) */
#define GPTA0_SRSS2_LTC16_POS          _GPTA0_UL(16)
#define GPTA0_SRSS2_LTC16_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC17 (rwh) */
#define GPTA0_SRSS2_LTC17_POS          _GPTA0_UL(17)
#define GPTA0_SRSS2_LTC17_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC18 (rwh) */
#define GPTA0_SRSS2_LTC18_POS          _GPTA0_UL(18)
#define GPTA0_SRSS2_LTC18_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC19 (rwh) */
#define GPTA0_SRSS2_LTC19_POS          _GPTA0_UL(19)
#define GPTA0_SRSS2_LTC19_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC20 (rwh) */
#define GPTA0_SRSS2_LTC20_POS          _GPTA0_UL(20)
#define GPTA0_SRSS2_LTC20_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC21 (rwh) */
#define GPTA0_SRSS2_LTC21_POS          _GPTA0_UL(21)
#define GPTA0_SRSS2_LTC21_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC22 (rwh) */
#define GPTA0_SRSS2_LTC22_POS          _GPTA0_UL(22)
#define GPTA0_SRSS2_LTC22_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC23 (rwh) */
#define GPTA0_SRSS2_LTC23_POS          _GPTA0_UL(23)
#define GPTA0_SRSS2_LTC23_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC24 (rwh) */
#define GPTA0_SRSS2_LTC24_POS          _GPTA0_UL(24)
#define GPTA0_SRSS2_LTC24_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC25 (rwh) */
#define GPTA0_SRSS2_LTC25_POS          _GPTA0_UL(25)
#define GPTA0_SRSS2_LTC25_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC26 (rwh) */
#define GPTA0_SRSS2_LTC26_POS          _GPTA0_UL(26)
#define GPTA0_SRSS2_LTC26_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC27 (rwh) */
#define GPTA0_SRSS2_LTC27_POS          _GPTA0_UL(27)
#define GPTA0_SRSS2_LTC27_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC28 (rwh) */
#define GPTA0_SRSS2_LTC28_POS          _GPTA0_UL(28)
#define GPTA0_SRSS2_LTC28_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC29 (rwh) */
#define GPTA0_SRSS2_LTC29_POS          _GPTA0_UL(29)
#define GPTA0_SRSS2_LTC29_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC30 (rwh) */
#define GPTA0_SRSS2_LTC30_POS          _GPTA0_UL(30)
#define GPTA0_SRSS2_LTC30_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS2_LTC31 (rwh) */
#define GPTA0_SRSS2_LTC31_POS          _GPTA0_UL(31)
#define GPTA0_SRSS2_LTC31_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC32 (rwh) */
#define GPTA0_SRSS3_LTC32_POS          _GPTA0_UL(0)
#define GPTA0_SRSS3_LTC32_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC33 (rwh) */
#define GPTA0_SRSS3_LTC33_POS          _GPTA0_UL(1)
#define GPTA0_SRSS3_LTC33_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC34 (rwh) */
#define GPTA0_SRSS3_LTC34_POS          _GPTA0_UL(2)
#define GPTA0_SRSS3_LTC34_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC35 (rwh) */
#define GPTA0_SRSS3_LTC35_POS          _GPTA0_UL(3)
#define GPTA0_SRSS3_LTC35_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC36 (rwh) */
#define GPTA0_SRSS3_LTC36_POS          _GPTA0_UL(4)
#define GPTA0_SRSS3_LTC36_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC37 (rwh) */
#define GPTA0_SRSS3_LTC37_POS          _GPTA0_UL(5)
#define GPTA0_SRSS3_LTC37_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC38 (rwh) */
#define GPTA0_SRSS3_LTC38_POS          _GPTA0_UL(6)
#define GPTA0_SRSS3_LTC38_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC39 (rwh) */
#define GPTA0_SRSS3_LTC39_POS          _GPTA0_UL(7)
#define GPTA0_SRSS3_LTC39_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC40 (rwh) */
#define GPTA0_SRSS3_LTC40_POS          _GPTA0_UL(8)
#define GPTA0_SRSS3_LTC40_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC41 (rwh) */
#define GPTA0_SRSS3_LTC41_POS          _GPTA0_UL(9)
#define GPTA0_SRSS3_LTC41_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC42 (rwh) */
#define GPTA0_SRSS3_LTC42_POS          _GPTA0_UL(10)
#define GPTA0_SRSS3_LTC42_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC43 (rwh) */
#define GPTA0_SRSS3_LTC43_POS          _GPTA0_UL(11)
#define GPTA0_SRSS3_LTC43_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC44 (rwh) */
#define GPTA0_SRSS3_LTC44_POS          _GPTA0_UL(12)
#define GPTA0_SRSS3_LTC44_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC45 (rwh) */
#define GPTA0_SRSS3_LTC45_POS          _GPTA0_UL(13)
#define GPTA0_SRSS3_LTC45_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC46 (rwh) */
#define GPTA0_SRSS3_LTC46_POS          _GPTA0_UL(14)
#define GPTA0_SRSS3_LTC46_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC47 (rwh) */
#define GPTA0_SRSS3_LTC47_POS          _GPTA0_UL(15)
#define GPTA0_SRSS3_LTC47_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC48 (rwh) */
#define GPTA0_SRSS3_LTC48_POS          _GPTA0_UL(16)
#define GPTA0_SRSS3_LTC48_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC49 (rwh) */
#define GPTA0_SRSS3_LTC49_POS          _GPTA0_UL(17)
#define GPTA0_SRSS3_LTC49_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC50 (rwh) */
#define GPTA0_SRSS3_LTC50_POS          _GPTA0_UL(18)
#define GPTA0_SRSS3_LTC50_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC51 (rwh) */
#define GPTA0_SRSS3_LTC51_POS          _GPTA0_UL(19)
#define GPTA0_SRSS3_LTC51_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC52 (rwh) */
#define GPTA0_SRSS3_LTC52_POS          _GPTA0_UL(20)
#define GPTA0_SRSS3_LTC52_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC53 (rwh) */
#define GPTA0_SRSS3_LTC53_POS          _GPTA0_UL(21)
#define GPTA0_SRSS3_LTC53_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC54 (rwh) */
#define GPTA0_SRSS3_LTC54_POS          _GPTA0_UL(22)
#define GPTA0_SRSS3_LTC54_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC55 (rwh) */
#define GPTA0_SRSS3_LTC55_POS          _GPTA0_UL(23)
#define GPTA0_SRSS3_LTC55_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC56 (rwh) */
#define GPTA0_SRSS3_LTC56_POS          _GPTA0_UL(24)
#define GPTA0_SRSS3_LTC56_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC57 (rwh) */
#define GPTA0_SRSS3_LTC57_POS          _GPTA0_UL(25)
#define GPTA0_SRSS3_LTC57_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC58 (rwh) */
#define GPTA0_SRSS3_LTC58_POS          _GPTA0_UL(26)
#define GPTA0_SRSS3_LTC58_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC59 (rwh) */
#define GPTA0_SRSS3_LTC59_POS          _GPTA0_UL(27)
#define GPTA0_SRSS3_LTC59_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC60 (rwh) */
#define GPTA0_SRSS3_LTC60_POS          _GPTA0_UL(28)
#define GPTA0_SRSS3_LTC60_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC61 (rwh) */
#define GPTA0_SRSS3_LTC61_POS          _GPTA0_UL(29)
#define GPTA0_SRSS3_LTC61_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC62 (rwh) */
#define GPTA0_SRSS3_LTC62_POS          _GPTA0_UL(30)
#define GPTA0_SRSS3_LTC62_LEN          _GPTA0_UL(1)

/* GPTA0_SRSS3_LTC63 (rwh) */
#define GPTA0_SRSS3_LTC63_POS          _GPTA0_UL(31)
#define GPTA0_SRSS3_LTC63_LEN          _GPTA0_UL(1)

#endif
