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
 * $Filename__:mli_1762.h$ 
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
 * $Name______:mli_1762$ 
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
 *      File name: mli_1762.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MLI_1762_H
#define _MLI_1762_H

/* add ul suffix if file is used in C context */
#define _MLI_UL(x) x##UL

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module MLI on TC1762
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF010C000...0xF010C007] : reserved space
    volatile uint32 ID;                  // [0xF010C008] : MLI Module Identification Register
    volatile uint32 FDR;                 // [0xF010C00C] : MLI Fractional Divider Register
    volatile uint32 TCR;                 // [0xF010C010] : Transmitter Control Register
    volatile uint32 TSTATR;              // [0xF010C014] : Transmitter Status Register
    volatile uint32 TP0STATR;            // [0xF010C018] : Transmitter Pipe 0 Status Register
    volatile uint32 TP1STATR;            // [0xF010C01C] : Transmitter Pipe 1 Status Register
    volatile uint32 TP2STATR;            // [0xF010C020] : Transmitter Pipe 2 Status Register
    volatile uint32 TP3STATR;            // [0xF010C024] : Transmitter Pipe 3 Status Register
    volatile uint32 TCMDR;               // [0xF010C028] : Transmitter Command Register
    volatile uint32 TRSTATR;             // [0xF010C02C] : Transmitter Registers Status Register
    volatile uint32 TP0AOFR;             // [0xF010C030] : Transmitter Pipe 0 Address Offset Register
    volatile uint32 TP1AOFR;             // [0xF010C034] : Transmitter Pipe 1 Address Offset Register
    volatile uint32 TP2AOFR;             // [0xF010C038] : Transmitter Pipe 2 Address Offset Register
    volatile uint32 TP3AOFR;             // [0xF010C03C] : Transmitter Pipe 3 Address Offset Register
    volatile uint32 TP0DATAR;            // [0xF010C040] : Transmitter Pipe 0 Data Register
    volatile uint32 TP1DATAR;            // [0xF010C044] : Transmitter Pipe 1 Data Register
    volatile uint32 TP2DATAR;            // [0xF010C048] : Transmitter Pipe 2 Data Register
    volatile uint32 TP3DATAR;            // [0xF010C04C] : Transmitter Pipe 3 Data Register
    volatile uint32 TDRAR;               // [0xF010C050] : Transmitter Data Read Answer Register
    volatile uint32 TP0BAR;              // [0xF010C054] : Transmitter Pipe 0 Base Address Register
    volatile uint32 TP1BAR;              // [0xF010C058] : Transmitter Pipe 1 Base Address Register
    volatile uint32 TP2BAR;              // [0xF010C05C] : Transmitter Pipe 2 Base Address Register
    volatile uint32 TP3BAR;              // [0xF010C060] : Transmitter Pipe 3 Base Address Register
    volatile uint32 TCBAR;               // [0xF010C064] : Transmitter Copy Base Address Register
    volatile uint32 RCR;                 // [0xF010C068] : Receiver Control Register
    volatile uint32 RP0BAR;              // [0xF010C06C] : Receiver Pipe 0 Base Address Register
    volatile uint32 RP1BAR;              // [0xF010C070] : Receiver Pipe 1 Base Address Register
    volatile uint32 RP2BAR;              // [0xF010C074] : Receiver Pipe 2 Base Address Register
    volatile uint32 RP3BAR;              // [0xF010C078] : Receiver Pipe 3 Base Address Register
    volatile uint32 RP0STATR;            // [0xF010C07C] : Receiver Pipe 0 Status Register
    volatile uint32 RP1STATR;            // [0xF010C080] : Receiver Pipe 1 Status Register
    volatile uint32 RP2STATR;            // [0xF010C084] : Receiver Pipe 2 Status Register
    volatile uint32 RP3STATR;            // [0xF010C088] : Receiver Pipe 3 Status Register
    volatile uint32 RADRR;               // [0xF010C08C] : Receiver Address Register
    volatile uint32 RDATAR;              // [0xF010C090] : Receiver Data Register
    volatile uint32 SCR;                 // [0xF010C094] : Set Clear Register
    volatile uint32 TIER;                // [0xF010C098] : Transmitter Interrupt Enable Register
    volatile uint32 TISR;                // [0xF010C09C] : Transmitter Interrupt Status Register
    volatile uint32 TINPR;               // [0xF010C0A0] : Transmitter Interrupt Node Pointer Register
    volatile uint32 RIER;                // [0xF010C0A4] : Receiver Interrupt Enable Register
    volatile uint32 RISR;                // [0xF010C0A8] : Receiver Interrupt Status Register
    volatile uint32 RINPR;               // [0xF010C0AC] : Receiver Interrupt Node Pointer Register
    volatile uint32 GINTR;               // [0xF010C0B0] : MLI Global Interrupt Set Register
    volatile uint32 OICR;                // [0xF010C0B4] : Output Input Control Register
    volatile uint32 AER;                 // [0xF010C0B8] : Access Enable Register
    volatile uint32 ARR;                 // [0xF010C0BC] : Access Range Register
} MLI_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern MLI_RegMap_t MLI0;

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

/* MLI0_AER_AEN0 (rw) */
#define MLI0_AER_AEN0_POS              _MLI_UL(0)
#define MLI0_AER_AEN0_LEN              _MLI_UL(1)

/* MLI0_AER_AEN1 (rw) */
#define MLI0_AER_AEN1_POS              _MLI_UL(1)
#define MLI0_AER_AEN1_LEN              _MLI_UL(1)

/* MLI0_AER_AEN10 (rw) */
#define MLI0_AER_AEN10_POS             _MLI_UL(10)
#define MLI0_AER_AEN10_LEN             _MLI_UL(1)

/* MLI0_AER_AEN11 (rw) */
#define MLI0_AER_AEN11_POS             _MLI_UL(11)
#define MLI0_AER_AEN11_LEN             _MLI_UL(1)

/* MLI0_AER_AEN12 (rw) */
#define MLI0_AER_AEN12_POS             _MLI_UL(12)
#define MLI0_AER_AEN12_LEN             _MLI_UL(1)

/* MLI0_AER_AEN13 (rw) */
#define MLI0_AER_AEN13_POS             _MLI_UL(13)
#define MLI0_AER_AEN13_LEN             _MLI_UL(1)

/* MLI0_AER_AEN14 (rw) */
#define MLI0_AER_AEN14_POS             _MLI_UL(14)
#define MLI0_AER_AEN14_LEN             _MLI_UL(1)

/* MLI0_AER_AEN15 (rw) */
#define MLI0_AER_AEN15_POS             _MLI_UL(15)
#define MLI0_AER_AEN15_LEN             _MLI_UL(1)

/* MLI0_AER_AEN16 (rw) */
#define MLI0_AER_AEN16_POS             _MLI_UL(16)
#define MLI0_AER_AEN16_LEN             _MLI_UL(1)

/* MLI0_AER_AEN17 (rw) */
#define MLI0_AER_AEN17_POS             _MLI_UL(17)
#define MLI0_AER_AEN17_LEN             _MLI_UL(1)

/* MLI0_AER_AEN18 (rw) */
#define MLI0_AER_AEN18_POS             _MLI_UL(18)
#define MLI0_AER_AEN18_LEN             _MLI_UL(1)

/* MLI0_AER_AEN19 (rw) */
#define MLI0_AER_AEN19_POS             _MLI_UL(19)
#define MLI0_AER_AEN19_LEN             _MLI_UL(1)

/* MLI0_AER_AEN2 (rw) */
#define MLI0_AER_AEN2_POS              _MLI_UL(2)
#define MLI0_AER_AEN2_LEN              _MLI_UL(1)

/* MLI0_AER_AEN20 (rw) */
#define MLI0_AER_AEN20_POS             _MLI_UL(20)
#define MLI0_AER_AEN20_LEN             _MLI_UL(1)

/* MLI0_AER_AEN21 (rw) */
#define MLI0_AER_AEN21_POS             _MLI_UL(21)
#define MLI0_AER_AEN21_LEN             _MLI_UL(1)

/* MLI0_AER_AEN22 (rw) */
#define MLI0_AER_AEN22_POS             _MLI_UL(22)
#define MLI0_AER_AEN22_LEN             _MLI_UL(1)

/* MLI0_AER_AEN23 (rw) */
#define MLI0_AER_AEN23_POS             _MLI_UL(23)
#define MLI0_AER_AEN23_LEN             _MLI_UL(1)

/* MLI0_AER_AEN24 (rw) */
#define MLI0_AER_AEN24_POS             _MLI_UL(24)
#define MLI0_AER_AEN24_LEN             _MLI_UL(1)

/* MLI0_AER_AEN25 (rw) */
#define MLI0_AER_AEN25_POS             _MLI_UL(25)
#define MLI0_AER_AEN25_LEN             _MLI_UL(1)

/* MLI0_AER_AEN26 (rw) */
#define MLI0_AER_AEN26_POS             _MLI_UL(26)
#define MLI0_AER_AEN26_LEN             _MLI_UL(1)

/* MLI0_AER_AEN27 (rw) */
#define MLI0_AER_AEN27_POS             _MLI_UL(27)
#define MLI0_AER_AEN27_LEN             _MLI_UL(1)

/* MLI0_AER_AEN28 (rw) */
#define MLI0_AER_AEN28_POS             _MLI_UL(28)
#define MLI0_AER_AEN28_LEN             _MLI_UL(1)

/* MLI0_AER_AEN29 (rw) */
#define MLI0_AER_AEN29_POS             _MLI_UL(29)
#define MLI0_AER_AEN29_LEN             _MLI_UL(1)

/* MLI0_AER_AEN3 (rw) */
#define MLI0_AER_AEN3_POS              _MLI_UL(3)
#define MLI0_AER_AEN3_LEN              _MLI_UL(1)

/* MLI0_AER_AEN30 (rw) */
#define MLI0_AER_AEN30_POS             _MLI_UL(30)
#define MLI0_AER_AEN30_LEN             _MLI_UL(1)

/* MLI0_AER_AEN31 (rw) */
#define MLI0_AER_AEN31_POS             _MLI_UL(31)
#define MLI0_AER_AEN31_LEN             _MLI_UL(1)

/* MLI0_AER_AEN4 (rw) */
#define MLI0_AER_AEN4_POS              _MLI_UL(4)
#define MLI0_AER_AEN4_LEN              _MLI_UL(1)

/* MLI0_AER_AEN5 (rw) */
#define MLI0_AER_AEN5_POS              _MLI_UL(5)
#define MLI0_AER_AEN5_LEN              _MLI_UL(1)

/* MLI0_AER_AEN6 (rw) */
#define MLI0_AER_AEN6_POS              _MLI_UL(6)
#define MLI0_AER_AEN6_LEN              _MLI_UL(1)

/* MLI0_AER_AEN7 (rw) */
#define MLI0_AER_AEN7_POS              _MLI_UL(7)
#define MLI0_AER_AEN7_LEN              _MLI_UL(1)

/* MLI0_AER_AEN8 (rw) */
#define MLI0_AER_AEN8_POS              _MLI_UL(8)
#define MLI0_AER_AEN8_LEN              _MLI_UL(1)

/* MLI0_AER_AEN9 (rw) */
#define MLI0_AER_AEN9_POS              _MLI_UL(9)
#define MLI0_AER_AEN9_LEN              _MLI_UL(1)

/* MLI0_ARR_SIZE0 (rw) */
#define MLI0_ARR_SIZE0_POS             _MLI_UL(5)
#define MLI0_ARR_SIZE0_LEN             _MLI_UL(3)

/* MLI0_ARR_SIZE1 (rw) */
#define MLI0_ARR_SIZE1_POS             _MLI_UL(13)
#define MLI0_ARR_SIZE1_LEN             _MLI_UL(3)

/* MLI0_ARR_SIZE2 (rw) */
#define MLI0_ARR_SIZE2_POS             _MLI_UL(21)
#define MLI0_ARR_SIZE2_LEN             _MLI_UL(3)

/* MLI0_ARR_SIZE3 (rw) */
#define MLI0_ARR_SIZE3_POS             _MLI_UL(29)
#define MLI0_ARR_SIZE3_LEN             _MLI_UL(3)

/* MLI0_ARR_SLICE0 (rw) */
#define MLI0_ARR_SLICE0_POS            _MLI_UL(0)
#define MLI0_ARR_SLICE0_LEN            _MLI_UL(5)

/* MLI0_ARR_SLICE1 (rw) */
#define MLI0_ARR_SLICE1_POS            _MLI_UL(8)
#define MLI0_ARR_SLICE1_LEN            _MLI_UL(5)

/* MLI0_ARR_SLICE2 (rw) */
#define MLI0_ARR_SLICE2_POS            _MLI_UL(16)
#define MLI0_ARR_SLICE2_LEN            _MLI_UL(5)

/* MLI0_ARR_SLICE3 (rw) */
#define MLI0_ARR_SLICE3_POS            _MLI_UL(24)
#define MLI0_ARR_SLICE3_LEN            _MLI_UL(5)

/* MLI0_FDR_DISCLK (rwh) */
#define MLI0_FDR_DISCLK_POS            _MLI_UL(31)
#define MLI0_FDR_DISCLK_LEN            _MLI_UL(1)

/* MLI0_FDR_DM (rw) */
#define MLI0_FDR_DM_POS                _MLI_UL(14)
#define MLI0_FDR_DM_LEN                _MLI_UL(2)

/* MLI0_FDR_ENHW (rw) */
#define MLI0_FDR_ENHW_POS              _MLI_UL(30)
#define MLI0_FDR_ENHW_LEN              _MLI_UL(1)

/* MLI0_FDR_RESULT (rh) */
#define MLI0_FDR_RESULT_POS            _MLI_UL(16)
#define MLI0_FDR_RESULT_LEN            _MLI_UL(10)

/* MLI0_FDR_SC (rw) */
#define MLI0_FDR_SC_POS                _MLI_UL(12)
#define MLI0_FDR_SC_LEN                _MLI_UL(2)

/* MLI0_FDR_SM (rw) */
#define MLI0_FDR_SM_POS                _MLI_UL(11)
#define MLI0_FDR_SM_LEN                _MLI_UL(1)

/* MLI0_FDR_STEP (rw) */
#define MLI0_FDR_STEP_POS              _MLI_UL(0)
#define MLI0_FDR_STEP_LEN              _MLI_UL(10)

/* MLI0_FDR_SUSACK (rh) */
#define MLI0_FDR_SUSACK_POS            _MLI_UL(28)
#define MLI0_FDR_SUSACK_LEN            _MLI_UL(1)

/* MLI0_FDR_SUSREQ (rh) */
#define MLI0_FDR_SUSREQ_POS            _MLI_UL(29)
#define MLI0_FDR_SUSREQ_LEN            _MLI_UL(1)

/* MLI0_GINTR_SIMLI0 (w) */
#define MLI0_GINTR_SIMLI0_POS          _MLI_UL(0)
#define MLI0_GINTR_SIMLI0_LEN          _MLI_UL(1)

/* MLI0_GINTR_SIMLI1 (w) */
#define MLI0_GINTR_SIMLI1_POS          _MLI_UL(1)
#define MLI0_GINTR_SIMLI1_LEN          _MLI_UL(1)

/* MLI0_GINTR_SIMLI2 (w) */
#define MLI0_GINTR_SIMLI2_POS          _MLI_UL(2)
#define MLI0_GINTR_SIMLI2_LEN          _MLI_UL(1)

/* MLI0_GINTR_SIMLI3 (w) */
#define MLI0_GINTR_SIMLI3_POS          _MLI_UL(3)
#define MLI0_GINTR_SIMLI3_LEN          _MLI_UL(1)

/* MLI0_GINTR_SIMLI4 (w) */
#define MLI0_GINTR_SIMLI4_POS          _MLI_UL(4)
#define MLI0_GINTR_SIMLI4_LEN          _MLI_UL(1)

/* MLI0_GINTR_SIMLI5 (w) */
#define MLI0_GINTR_SIMLI5_POS          _MLI_UL(5)
#define MLI0_GINTR_SIMLI5_LEN          _MLI_UL(1)

/* MLI0_GINTR_SIMLI6 (w) */
#define MLI0_GINTR_SIMLI6_POS          _MLI_UL(6)
#define MLI0_GINTR_SIMLI6_LEN          _MLI_UL(1)

/* MLI0_GINTR_SIMLI7 (w) */
#define MLI0_GINTR_SIMLI7_POS          _MLI_UL(7)
#define MLI0_GINTR_SIMLI7_LEN          _MLI_UL(1)

/* MLI0_ID_MOD_NUMBER (r) */
#define MLI0_ID_MOD_NUMBER_POS         _MLI_UL(16)
#define MLI0_ID_MOD_NUMBER_LEN         _MLI_UL(16)

/* MLI0_ID_MOD_REV (r) */
#define MLI0_ID_MOD_REV_POS            _MLI_UL(0)
#define MLI0_ID_MOD_REV_LEN            _MLI_UL(8)

/* MLI0_ID_MOD_TYPE (r) */
#define MLI0_ID_MOD_TYPE_POS           _MLI_UL(8)
#define MLI0_ID_MOD_TYPE_LEN           _MLI_UL(8)

/* MLI0_OICR_RCE (rw) */
#define MLI0_OICR_RCE_POS              _MLI_UL(28)
#define MLI0_OICR_RCE_LEN              _MLI_UL(1)

/* MLI0_OICR_RCP (rw) */
#define MLI0_OICR_RCP_POS              _MLI_UL(27)
#define MLI0_OICR_RCP_LEN              _MLI_UL(1)

/* MLI0_OICR_RCS (rw) */
#define MLI0_OICR_RCS_POS              _MLI_UL(25)
#define MLI0_OICR_RCS_LEN              _MLI_UL(2)

/* MLI0_OICR_RDP (rw) */
#define MLI0_OICR_RDP_POS              _MLI_UL(31)
#define MLI0_OICR_RDP_LEN              _MLI_UL(1)

/* MLI0_OICR_RDS (rw) */
#define MLI0_OICR_RDS_POS              _MLI_UL(29)
#define MLI0_OICR_RDS_LEN              _MLI_UL(2)

/* MLI0_OICR_RRPA (rw) */
#define MLI0_OICR_RRPA_POS             _MLI_UL(18)
#define MLI0_OICR_RRPA_LEN             _MLI_UL(1)

/* MLI0_OICR_RRPB (rw) */
#define MLI0_OICR_RRPB_POS             _MLI_UL(19)
#define MLI0_OICR_RRPB_LEN             _MLI_UL(1)

/* MLI0_OICR_RRPC (rw) */
#define MLI0_OICR_RRPC_POS             _MLI_UL(20)
#define MLI0_OICR_RRPC_LEN             _MLI_UL(1)

/* MLI0_OICR_RRPD (rw) */
#define MLI0_OICR_RRPD_POS             _MLI_UL(21)
#define MLI0_OICR_RRPD_LEN             _MLI_UL(1)

/* MLI0_OICR_RRS (rw) */
#define MLI0_OICR_RRS_POS              _MLI_UL(16)
#define MLI0_OICR_RRS_LEN              _MLI_UL(2)

/* MLI0_OICR_RVE (rw) */
#define MLI0_OICR_RVE_POS              _MLI_UL(15)
#define MLI0_OICR_RVE_LEN              _MLI_UL(1)

/* MLI0_OICR_RVP (rw) */
#define MLI0_OICR_RVP_POS              _MLI_UL(24)
#define MLI0_OICR_RVP_LEN              _MLI_UL(1)

/* MLI0_OICR_RVS (rw) */
#define MLI0_OICR_RVS_POS              _MLI_UL(22)
#define MLI0_OICR_RVS_LEN              _MLI_UL(2)

/* MLI0_OICR_TCE (rw) */
#define MLI0_OICR_TCE_POS              _MLI_UL(12)
#define MLI0_OICR_TCE_LEN              _MLI_UL(1)

/* MLI0_OICR_TCP (rw) */
#define MLI0_OICR_TCP_POS              _MLI_UL(13)
#define MLI0_OICR_TCP_LEN              _MLI_UL(1)

/* MLI0_OICR_TDP (rw) */
#define MLI0_OICR_TDP_POS              _MLI_UL(14)
#define MLI0_OICR_TDP_LEN              _MLI_UL(1)

/* MLI0_OICR_TRE (rw) */
#define MLI0_OICR_TRE_POS              _MLI_UL(11)
#define MLI0_OICR_TRE_LEN              _MLI_UL(1)

/* MLI0_OICR_TRP (rw) */
#define MLI0_OICR_TRP_POS              _MLI_UL(10)
#define MLI0_OICR_TRP_LEN              _MLI_UL(1)

/* MLI0_OICR_TRS (rw) */
#define MLI0_OICR_TRS_POS              _MLI_UL(8)
#define MLI0_OICR_TRS_LEN              _MLI_UL(2)

/* MLI0_OICR_TVEA (rw) */
#define MLI0_OICR_TVEA_POS             _MLI_UL(0)
#define MLI0_OICR_TVEA_LEN             _MLI_UL(1)

/* MLI0_OICR_TVEB (rw) */
#define MLI0_OICR_TVEB_POS             _MLI_UL(1)
#define MLI0_OICR_TVEB_LEN             _MLI_UL(1)

/* MLI0_OICR_TVEC (rw) */
#define MLI0_OICR_TVEC_POS             _MLI_UL(2)
#define MLI0_OICR_TVEC_LEN             _MLI_UL(1)

/* MLI0_OICR_TVED (rw) */
#define MLI0_OICR_TVED_POS             _MLI_UL(3)
#define MLI0_OICR_TVED_LEN             _MLI_UL(1)

/* MLI0_OICR_TVPA (rw) */
#define MLI0_OICR_TVPA_POS             _MLI_UL(4)
#define MLI0_OICR_TVPA_LEN             _MLI_UL(1)

/* MLI0_OICR_TVPB (rw) */
#define MLI0_OICR_TVPB_POS             _MLI_UL(5)
#define MLI0_OICR_TVPB_LEN             _MLI_UL(1)

/* MLI0_OICR_TVPC (rw) */
#define MLI0_OICR_TVPC_POS             _MLI_UL(6)
#define MLI0_OICR_TVPC_LEN             _MLI_UL(1)

/* MLI0_OICR_TVPD (rw) */
#define MLI0_OICR_TVPD_POS             _MLI_UL(7)
#define MLI0_OICR_TVPD_LEN             _MLI_UL(1)

/* MLI0_RADRR_ADDR (rh) */
#define MLI0_RADRR_ADDR_POS            _MLI_UL(0)
#define MLI0_RADRR_ADDR_LEN            _MLI_UL(32)

/* MLI0_RCR_BEN (rw) */
#define MLI0_RCR_BEN_POS               _MLI_UL(20)
#define MLI0_RCR_BEN_LEN               _MLI_UL(1)

/* MLI0_RCR_CMDP3 (rh) */
#define MLI0_RCR_CMDP3_POS             _MLI_UL(4)
#define MLI0_RCR_CMDP3_LEN             _MLI_UL(4)

/* MLI0_RCR_DPE (rh) */
#define MLI0_RCR_DPE_POS               _MLI_UL(0)
#define MLI0_RCR_DPE_LEN               _MLI_UL(4)

/* MLI0_RCR_DW (rh) */
#define MLI0_RCR_DW_POS                _MLI_UL(9)
#define MLI0_RCR_DW_LEN                _MLI_UL(2)

/* MLI0_RCR_MOD (rh) */
#define MLI0_RCR_MOD_POS               _MLI_UL(8)
#define MLI0_RCR_MOD_LEN               _MLI_UL(1)

/* MLI0_RCR_MPE (rwh) */
#define MLI0_RCR_MPE_POS               _MLI_UL(16)
#define MLI0_RCR_MPE_LEN               _MLI_UL(4)

/* MLI0_RCR_PE (rh) */
#define MLI0_RCR_PE_POS                _MLI_UL(13)
#define MLI0_RCR_PE_LEN                _MLI_UL(1)

/* MLI0_RCR_RCVRST (rw) */
#define MLI0_RCR_RCVRST_POS            _MLI_UL(24)
#define MLI0_RCR_RCVRST_LEN            _MLI_UL(1)

/* MLI0_RCR_RPN (rh) */
#define MLI0_RCR_RPN_POS               _MLI_UL(14)
#define MLI0_RCR_RPN_LEN               _MLI_UL(2)

/* MLI0_RCR_TF (rh) */
#define MLI0_RCR_TF_POS                _MLI_UL(11)
#define MLI0_RCR_TF_LEN                _MLI_UL(2)

/* MLI0_RDATAR_DATA (rh) */
#define MLI0_RDATAR_DATA_POS           _MLI_UL(0)
#define MLI0_RDATAR_DATA_LEN           _MLI_UL(32)

/* MLI0_RIER_CFRIE0 (rw) */
#define MLI0_RIER_CFRIE0_POS           _MLI_UL(2)
#define MLI0_RIER_CFRIE0_LEN           _MLI_UL(1)

/* MLI0_RIER_CFRIE1 (rw) */
#define MLI0_RIER_CFRIE1_POS           _MLI_UL(3)
#define MLI0_RIER_CFRIE1_LEN           _MLI_UL(1)

/* MLI0_RIER_CFRIE2 (rw) */
#define MLI0_RIER_CFRIE2_POS           _MLI_UL(4)
#define MLI0_RIER_CFRIE2_LEN           _MLI_UL(1)

/* MLI0_RIER_CFRIE3 (rw) */
#define MLI0_RIER_CFRIE3_POS           _MLI_UL(5)
#define MLI0_RIER_CFRIE3_LEN           _MLI_UL(1)

/* MLI0_RIER_CFRIR0 (w) */
#define MLI0_RIER_CFRIR0_POS           _MLI_UL(18)
#define MLI0_RIER_CFRIR0_LEN           _MLI_UL(1)

/* MLI0_RIER_CFRIR1 (w) */
#define MLI0_RIER_CFRIR1_POS           _MLI_UL(19)
#define MLI0_RIER_CFRIR1_LEN           _MLI_UL(1)

/* MLI0_RIER_CFRIR2 (w) */
#define MLI0_RIER_CFRIR2_POS           _MLI_UL(20)
#define MLI0_RIER_CFRIR2_LEN           _MLI_UL(1)

/* MLI0_RIER_CFRIR3 (w) */
#define MLI0_RIER_CFRIR3_POS           _MLI_UL(21)
#define MLI0_RIER_CFRIR3_LEN           _MLI_UL(1)

/* MLI0_RIER_DRAIE (rw) */
#define MLI0_RIER_DRAIE_POS            _MLI_UL(9)
#define MLI0_RIER_DRAIE_LEN            _MLI_UL(1)

/* MLI0_RIER_DRAIR (w) */
#define MLI0_RIER_DRAIR_POS            _MLI_UL(25)
#define MLI0_RIER_DRAIR_LEN            _MLI_UL(1)

/* MLI0_RIER_ICE (rw) */
#define MLI0_RIER_ICE_POS              _MLI_UL(6)
#define MLI0_RIER_ICE_LEN              _MLI_UL(1)

/* MLI0_RIER_ICER (w) */
#define MLI0_RIER_ICER_POS             _MLI_UL(22)
#define MLI0_RIER_ICER_LEN             _MLI_UL(1)

/* MLI0_RIER_MEIR (w) */
#define MLI0_RIER_MEIR_POS             _MLI_UL(17)
#define MLI0_RIER_MEIR_LEN             _MLI_UL(1)

/* MLI0_RIER_MPEIE (rw) */
#define MLI0_RIER_MPEIE_POS            _MLI_UL(8)
#define MLI0_RIER_MPEIE_LEN            _MLI_UL(1)

/* MLI0_RIER_MPEIR (w) */
#define MLI0_RIER_MPEIR_POS            _MLI_UL(24)
#define MLI0_RIER_MPEIR_LEN            _MLI_UL(1)

/* MLI0_RIER_NFRIE (rw) */
#define MLI0_RIER_NFRIE_POS            _MLI_UL(0)
#define MLI0_RIER_NFRIE_LEN            _MLI_UL(2)

/* MLI0_RIER_NFRIR (w) */
#define MLI0_RIER_NFRIR_POS            _MLI_UL(16)
#define MLI0_RIER_NFRIR_LEN            _MLI_UL(1)

/* MLI0_RIER_PEIE (rw) */
#define MLI0_RIER_PEIE_POS             _MLI_UL(7)
#define MLI0_RIER_PEIE_LEN             _MLI_UL(1)

/* MLI0_RIER_PEIR (w) */
#define MLI0_RIER_PEIR_POS             _MLI_UL(23)
#define MLI0_RIER_PEIR_LEN             _MLI_UL(1)

/* MLI0_RINPR_CFRIP (rw) */
#define MLI0_RINPR_CFRIP_POS           _MLI_UL(4)
#define MLI0_RINPR_CFRIP_LEN           _MLI_UL(3)

/* MLI0_RINPR_DRAIP (rw) */
#define MLI0_RINPR_DRAIP_POS           _MLI_UL(12)
#define MLI0_RINPR_DRAIP_LEN           _MLI_UL(3)

/* MLI0_RINPR_MPPEIP (rw) */
#define MLI0_RINPR_MPPEIP_POS          _MLI_UL(8)
#define MLI0_RINPR_MPPEIP_LEN          _MLI_UL(3)

/* MLI0_RINPR_NFRIP (rw) */
#define MLI0_RINPR_NFRIP_POS           _MLI_UL(0)
#define MLI0_RINPR_NFRIP_LEN           _MLI_UL(3)

/* MLI0_RISR_CFRI0 (rh) */
#define MLI0_RISR_CFRI0_POS            _MLI_UL(2)
#define MLI0_RISR_CFRI0_LEN            _MLI_UL(1)

/* MLI0_RISR_CFRI1 (rh) */
#define MLI0_RISR_CFRI1_POS            _MLI_UL(3)
#define MLI0_RISR_CFRI1_LEN            _MLI_UL(1)

/* MLI0_RISR_CFRI2 (rh) */
#define MLI0_RISR_CFRI2_POS            _MLI_UL(4)
#define MLI0_RISR_CFRI2_LEN            _MLI_UL(1)

/* MLI0_RISR_CFRI3 (rh) */
#define MLI0_RISR_CFRI3_POS            _MLI_UL(5)
#define MLI0_RISR_CFRI3_LEN            _MLI_UL(1)

/* MLI0_RISR_DRAI (rh) */
#define MLI0_RISR_DRAI_POS             _MLI_UL(9)
#define MLI0_RISR_DRAI_LEN             _MLI_UL(1)

/* MLI0_RISR_IC (rh) */
#define MLI0_RISR_IC_POS               _MLI_UL(6)
#define MLI0_RISR_IC_LEN               _MLI_UL(1)

/* MLI0_RISR_MEI (rh) */
#define MLI0_RISR_MEI_POS              _MLI_UL(1)
#define MLI0_RISR_MEI_LEN              _MLI_UL(1)

/* MLI0_RISR_MPEI (rh) */
#define MLI0_RISR_MPEI_POS             _MLI_UL(8)
#define MLI0_RISR_MPEI_LEN             _MLI_UL(1)

/* MLI0_RISR_NFRI (rh) */
#define MLI0_RISR_NFRI_POS             _MLI_UL(0)
#define MLI0_RISR_NFRI_LEN             _MLI_UL(1)

/* MLI0_RISR_PEI (rh) */
#define MLI0_RISR_PEI_POS              _MLI_UL(7)
#define MLI0_RISR_PEI_LEN              _MLI_UL(1)

/* MLI0_RP0BAR_ADDR (rh) */
#define MLI0_RP0BAR_ADDR_POS           _MLI_UL(4)
#define MLI0_RP0BAR_ADDR_LEN           _MLI_UL(28)

/* MLI0_RP0STATR_AP (rh) */
#define MLI0_RP0STATR_AP_POS           _MLI_UL(6)
#define MLI0_RP0STATR_AP_LEN           _MLI_UL(10)

/* MLI0_RP0STATR_BS (rh) */
#define MLI0_RP0STATR_BS_POS           _MLI_UL(0)
#define MLI0_RP0STATR_BS_LEN           _MLI_UL(4)

/* MLI0_RP1BAR_ADDR (rh) */
#define MLI0_RP1BAR_ADDR_POS           _MLI_UL(4)
#define MLI0_RP1BAR_ADDR_LEN           _MLI_UL(28)

/* MLI0_RP1STATR_AP (rh) */
#define MLI0_RP1STATR_AP_POS           _MLI_UL(6)
#define MLI0_RP1STATR_AP_LEN           _MLI_UL(10)

/* MLI0_RP1STATR_BS (rh) */
#define MLI0_RP1STATR_BS_POS           _MLI_UL(0)
#define MLI0_RP1STATR_BS_LEN           _MLI_UL(4)

/* MLI0_RP2BAR_ADDR (rh) */
#define MLI0_RP2BAR_ADDR_POS           _MLI_UL(4)
#define MLI0_RP2BAR_ADDR_LEN           _MLI_UL(28)

/* MLI0_RP2STATR_AP (rh) */
#define MLI0_RP2STATR_AP_POS           _MLI_UL(6)
#define MLI0_RP2STATR_AP_LEN           _MLI_UL(10)

/* MLI0_RP2STATR_BS (rh) */
#define MLI0_RP2STATR_BS_POS           _MLI_UL(0)
#define MLI0_RP2STATR_BS_LEN           _MLI_UL(4)

/* MLI0_RP3BAR_ADDR (rh) */
#define MLI0_RP3BAR_ADDR_POS           _MLI_UL(4)
#define MLI0_RP3BAR_ADDR_LEN           _MLI_UL(28)

/* MLI0_RP3STATR_AP (rh) */
#define MLI0_RP3STATR_AP_POS           _MLI_UL(6)
#define MLI0_RP3STATR_AP_LEN           _MLI_UL(10)

/* MLI0_RP3STATR_BS (rh) */
#define MLI0_RP3STATR_BS_POS           _MLI_UL(0)
#define MLI0_RP3STATR_BS_LEN           _MLI_UL(4)

/* MLI0_SCR_CAV (w) */
#define MLI0_SCR_CAV_POS               _MLI_UL(24)
#define MLI0_SCR_CAV_LEN               _MLI_UL(1)

/* MLI0_SCR_CBAV (w) */
#define MLI0_SCR_CBAV_POS              _MLI_UL(17)
#define MLI0_SCR_CBAV_LEN              _MLI_UL(1)

/* MLI0_SCR_CCIV0 (w) */
#define MLI0_SCR_CCIV0_POS             _MLI_UL(28)
#define MLI0_SCR_CCIV0_LEN             _MLI_UL(1)

/* MLI0_SCR_CCIV1 (w) */
#define MLI0_SCR_CCIV1_POS             _MLI_UL(29)
#define MLI0_SCR_CCIV1_LEN             _MLI_UL(1)

/* MLI0_SCR_CCIV2 (w) */
#define MLI0_SCR_CCIV2_POS             _MLI_UL(30)
#define MLI0_SCR_CCIV2_LEN             _MLI_UL(1)

/* MLI0_SCR_CCIV3 (w) */
#define MLI0_SCR_CCIV3_POS             _MLI_UL(31)
#define MLI0_SCR_CCIV3_LEN             _MLI_UL(1)

/* MLI0_SCR_CCV0 (w) */
#define MLI0_SCR_CCV0_POS              _MLI_UL(12)
#define MLI0_SCR_CCV0_LEN              _MLI_UL(1)

/* MLI0_SCR_CCV1 (w) */
#define MLI0_SCR_CCV1_POS              _MLI_UL(13)
#define MLI0_SCR_CCV1_LEN              _MLI_UL(1)

/* MLI0_SCR_CCV2 (w) */
#define MLI0_SCR_CCV2_POS              _MLI_UL(14)
#define MLI0_SCR_CCV2_LEN              _MLI_UL(1)

/* MLI0_SCR_CCV3 (w) */
#define MLI0_SCR_CCV3_POS              _MLI_UL(15)
#define MLI0_SCR_CCV3_LEN              _MLI_UL(1)

/* MLI0_SCR_CDV0 (w) */
#define MLI0_SCR_CDV0_POS              _MLI_UL(8)
#define MLI0_SCR_CDV0_LEN              _MLI_UL(1)

/* MLI0_SCR_CDV1 (w) */
#define MLI0_SCR_CDV1_POS              _MLI_UL(9)
#define MLI0_SCR_CDV1_LEN              _MLI_UL(1)

/* MLI0_SCR_CDV2 (w) */
#define MLI0_SCR_CDV2_POS              _MLI_UL(10)
#define MLI0_SCR_CDV2_LEN              _MLI_UL(1)

/* MLI0_SCR_CDV3 (w) */
#define MLI0_SCR_CDV3_POS              _MLI_UL(11)
#define MLI0_SCR_CDV3_LEN              _MLI_UL(1)

/* MLI0_SCR_CMOD (w) */
#define MLI0_SCR_CMOD_POS              _MLI_UL(16)
#define MLI0_SCR_CMOD_LEN              _MLI_UL(1)

/* MLI0_SCR_CNAE (w) */
#define MLI0_SCR_CNAE_POS              _MLI_UL(27)
#define MLI0_SCR_CNAE_LEN              _MLI_UL(1)

/* MLI0_SCR_CRPE (w) */
#define MLI0_SCR_CRPE_POS              _MLI_UL(25)
#define MLI0_SCR_CRPE_LEN              _MLI_UL(1)

/* MLI0_SCR_CTPE (w) */
#define MLI0_SCR_CTPE_POS              _MLI_UL(26)
#define MLI0_SCR_CTPE_LEN              _MLI_UL(1)

/* MLI0_SCR_SCV0 (w) */
#define MLI0_SCR_SCV0_POS              _MLI_UL(0)
#define MLI0_SCR_SCV0_LEN              _MLI_UL(1)

/* MLI0_SCR_SCV1 (w) */
#define MLI0_SCR_SCV1_POS              _MLI_UL(1)
#define MLI0_SCR_SCV1_LEN              _MLI_UL(1)

/* MLI0_SCR_SCV2 (w) */
#define MLI0_SCR_SCV2_POS              _MLI_UL(2)
#define MLI0_SCR_SCV2_LEN              _MLI_UL(1)

/* MLI0_SCR_SCV3 (w) */
#define MLI0_SCR_SCV3_POS              _MLI_UL(3)
#define MLI0_SCR_SCV3_LEN              _MLI_UL(1)

/* MLI0_SCR_SMOD (w) */
#define MLI0_SCR_SMOD_POS              _MLI_UL(4)
#define MLI0_SCR_SMOD_LEN              _MLI_UL(1)

/* MLI0_TCBAR_ADDR (rh) */
#define MLI0_TCBAR_ADDR_POS            _MLI_UL(4)
#define MLI0_TCBAR_ADDR_LEN            _MLI_UL(28)

/* MLI0_TCMDR_CMDP0 (rw) */
#define MLI0_TCMDR_CMDP0_POS           _MLI_UL(0)
#define MLI0_TCMDR_CMDP0_LEN           _MLI_UL(4)

/* MLI0_TCMDR_CMDP1 (rw) */
#define MLI0_TCMDR_CMDP1_POS           _MLI_UL(8)
#define MLI0_TCMDR_CMDP1_LEN           _MLI_UL(4)

/* MLI0_TCMDR_CMDP2 (rw) */
#define MLI0_TCMDR_CMDP2_POS           _MLI_UL(16)
#define MLI0_TCMDR_CMDP2_LEN           _MLI_UL(4)

/* MLI0_TCMDR_CMDP3 (rw) */
#define MLI0_TCMDR_CMDP3_POS           _MLI_UL(24)
#define MLI0_TCMDR_CMDP3_LEN           _MLI_UL(4)

/* MLI0_TCR_DNT (rw) */
#define MLI0_TCR_DNT_POS               _MLI_UL(1)
#define MLI0_TCR_DNT_LEN               _MLI_UL(1)

/* MLI0_TCR_MDP (rw) */
#define MLI0_TCR_MDP_POS               _MLI_UL(10)
#define MLI0_TCR_MDP_LEN               _MLI_UL(4)

/* MLI0_TCR_MNAE (rwh) */
#define MLI0_TCR_MNAE_POS              _MLI_UL(8)
#define MLI0_TCR_MNAE_LEN              _MLI_UL(2)

/* MLI0_TCR_MOD (rw) */
#define MLI0_TCR_MOD_POS               _MLI_UL(0)
#define MLI0_TCR_MOD_LEN               _MLI_UL(1)

/* MLI0_TCR_MPE (rwh) */
#define MLI0_TCR_MPE_POS               _MLI_UL(4)
#define MLI0_TCR_MPE_LEN               _MLI_UL(4)

/* MLI0_TCR_NO (rw) */
#define MLI0_TCR_NO_POS                _MLI_UL(14)
#define MLI0_TCR_NO_LEN                _MLI_UL(1)

/* MLI0_TCR_RTY (rw) */
#define MLI0_TCR_RTY_POS               _MLI_UL(2)
#define MLI0_TCR_RTY_LEN               _MLI_UL(1)

/* MLI0_TCR_TP (rw) */
#define MLI0_TCR_TP_POS                _MLI_UL(15)
#define MLI0_TCR_TP_LEN                _MLI_UL(1)

/* MLI0_TDRAR_DATA (rwh) */
#define MLI0_TDRAR_DATA_POS            _MLI_UL(0)
#define MLI0_TDRAR_DATA_LEN            _MLI_UL(32)

/* MLI0_TIER_CFSIE0 (rw) */
#define MLI0_TIER_CFSIE0_POS           _MLI_UL(4)
#define MLI0_TIER_CFSIE0_LEN           _MLI_UL(1)

/* MLI0_TIER_CFSIE1 (rw) */
#define MLI0_TIER_CFSIE1_POS           _MLI_UL(5)
#define MLI0_TIER_CFSIE1_LEN           _MLI_UL(1)

/* MLI0_TIER_CFSIE2 (rw) */
#define MLI0_TIER_CFSIE2_POS           _MLI_UL(6)
#define MLI0_TIER_CFSIE2_LEN           _MLI_UL(1)

/* MLI0_TIER_CFSIE3 (rw) */
#define MLI0_TIER_CFSIE3_POS           _MLI_UL(7)
#define MLI0_TIER_CFSIE3_LEN           _MLI_UL(1)

/* MLI0_TIER_CFSIR0 (w) */
#define MLI0_TIER_CFSIR0_POS           _MLI_UL(20)
#define MLI0_TIER_CFSIR0_LEN           _MLI_UL(1)

/* MLI0_TIER_CFSIR1 (w) */
#define MLI0_TIER_CFSIR1_POS           _MLI_UL(21)
#define MLI0_TIER_CFSIR1_LEN           _MLI_UL(1)

/* MLI0_TIER_CFSIR2 (w) */
#define MLI0_TIER_CFSIR2_POS           _MLI_UL(22)
#define MLI0_TIER_CFSIR2_LEN           _MLI_UL(1)

/* MLI0_TIER_CFSIR3 (w) */
#define MLI0_TIER_CFSIR3_POS           _MLI_UL(23)
#define MLI0_TIER_CFSIR3_LEN           _MLI_UL(1)

/* MLI0_TIER_NFSIE0 (rw) */
#define MLI0_TIER_NFSIE0_POS           _MLI_UL(0)
#define MLI0_TIER_NFSIE0_LEN           _MLI_UL(1)

/* MLI0_TIER_NFSIE1 (rw) */
#define MLI0_TIER_NFSIE1_POS           _MLI_UL(1)
#define MLI0_TIER_NFSIE1_LEN           _MLI_UL(1)

/* MLI0_TIER_NFSIE2 (rw) */
#define MLI0_TIER_NFSIE2_POS           _MLI_UL(2)
#define MLI0_TIER_NFSIE2_LEN           _MLI_UL(1)

/* MLI0_TIER_NFSIE3 (rw) */
#define MLI0_TIER_NFSIE3_POS           _MLI_UL(3)
#define MLI0_TIER_NFSIE3_LEN           _MLI_UL(1)

/* MLI0_TIER_NFSIR0 (w) */
#define MLI0_TIER_NFSIR0_POS           _MLI_UL(16)
#define MLI0_TIER_NFSIR0_LEN           _MLI_UL(1)

/* MLI0_TIER_NFSIR1 (w) */
#define MLI0_TIER_NFSIR1_POS           _MLI_UL(17)
#define MLI0_TIER_NFSIR1_LEN           _MLI_UL(1)

/* MLI0_TIER_NFSIR2 (w) */
#define MLI0_TIER_NFSIR2_POS           _MLI_UL(18)
#define MLI0_TIER_NFSIR2_LEN           _MLI_UL(1)

/* MLI0_TIER_NFSIR3 (w) */
#define MLI0_TIER_NFSIR3_POS           _MLI_UL(19)
#define MLI0_TIER_NFSIR3_LEN           _MLI_UL(1)

/* MLI0_TIER_PEIE (rw) */
#define MLI0_TIER_PEIE_POS             _MLI_UL(8)
#define MLI0_TIER_PEIE_LEN             _MLI_UL(1)

/* MLI0_TIER_PEIR (w) */
#define MLI0_TIER_PEIR_POS             _MLI_UL(24)
#define MLI0_TIER_PEIR_LEN             _MLI_UL(1)

/* MLI0_TIER_TEIE (rw) */
#define MLI0_TIER_TEIE_POS             _MLI_UL(9)
#define MLI0_TIER_TEIE_LEN             _MLI_UL(1)

/* MLI0_TIER_TEIR (w) */
#define MLI0_TIER_TEIR_POS             _MLI_UL(25)
#define MLI0_TIER_TEIR_LEN             _MLI_UL(1)

/* MLI0_TINPR_CFSIP (rw) */
#define MLI0_TINPR_CFSIP_POS           _MLI_UL(16)
#define MLI0_TINPR_CFSIP_LEN           _MLI_UL(3)

/* MLI0_TINPR_NFSIP0 (rw) */
#define MLI0_TINPR_NFSIP0_POS          _MLI_UL(0)
#define MLI0_TINPR_NFSIP0_LEN          _MLI_UL(3)

/* MLI0_TINPR_NFSIP1 (rw) */
#define MLI0_TINPR_NFSIP1_POS          _MLI_UL(4)
#define MLI0_TINPR_NFSIP1_LEN          _MLI_UL(3)

/* MLI0_TINPR_NFSIP2 (rw) */
#define MLI0_TINPR_NFSIP2_POS          _MLI_UL(8)
#define MLI0_TINPR_NFSIP2_LEN          _MLI_UL(3)

/* MLI0_TINPR_NFSIP3 (rw) */
#define MLI0_TINPR_NFSIP3_POS          _MLI_UL(12)
#define MLI0_TINPR_NFSIP3_LEN          _MLI_UL(3)

/* MLI0_TINPR_PTEIP (rw) */
#define MLI0_TINPR_PTEIP_POS           _MLI_UL(20)
#define MLI0_TINPR_PTEIP_LEN           _MLI_UL(3)

/* MLI0_TISR_CFSI0 (rh) */
#define MLI0_TISR_CFSI0_POS            _MLI_UL(4)
#define MLI0_TISR_CFSI0_LEN            _MLI_UL(1)

/* MLI0_TISR_CFSI1 (rh) */
#define MLI0_TISR_CFSI1_POS            _MLI_UL(5)
#define MLI0_TISR_CFSI1_LEN            _MLI_UL(1)

/* MLI0_TISR_CFSI2 (rh) */
#define MLI0_TISR_CFSI2_POS            _MLI_UL(6)
#define MLI0_TISR_CFSI2_LEN            _MLI_UL(1)

/* MLI0_TISR_CFSI3 (rh) */
#define MLI0_TISR_CFSI3_POS            _MLI_UL(7)
#define MLI0_TISR_CFSI3_LEN            _MLI_UL(1)

/* MLI0_TISR_NFSI0 (rh) */
#define MLI0_TISR_NFSI0_POS            _MLI_UL(0)
#define MLI0_TISR_NFSI0_LEN            _MLI_UL(1)

/* MLI0_TISR_NFSI1 (rh) */
#define MLI0_TISR_NFSI1_POS            _MLI_UL(1)
#define MLI0_TISR_NFSI1_LEN            _MLI_UL(1)

/* MLI0_TISR_NFSI2 (rh) */
#define MLI0_TISR_NFSI2_POS            _MLI_UL(2)
#define MLI0_TISR_NFSI2_LEN            _MLI_UL(1)

/* MLI0_TISR_NFSI3 (rh) */
#define MLI0_TISR_NFSI3_POS            _MLI_UL(3)
#define MLI0_TISR_NFSI3_LEN            _MLI_UL(1)

/* MLI0_TISR_PEI (rh) */
#define MLI0_TISR_PEI_POS              _MLI_UL(8)
#define MLI0_TISR_PEI_LEN              _MLI_UL(1)

/* MLI0_TISR_TEI (rh) */
#define MLI0_TISR_TEI_POS              _MLI_UL(9)
#define MLI0_TISR_TEI_LEN              _MLI_UL(1)

/* MLI0_TP0AOFR_AOFF (rh) */
#define MLI0_TP0AOFR_AOFF_POS          _MLI_UL(0)
#define MLI0_TP0AOFR_AOFF_LEN          _MLI_UL(16)

/* MLI0_TP0BAR_ADDR (w) */
#define MLI0_TP0BAR_ADDR_POS           _MLI_UL(4)
#define MLI0_TP0BAR_ADDR_LEN           _MLI_UL(28)

/* MLI0_TP0BAR_BS (w) */
#define MLI0_TP0BAR_BS_POS             _MLI_UL(0)
#define MLI0_TP0BAR_BS_LEN             _MLI_UL(4)

/* MLI0_TP0DATAR_DATA (rh) */
#define MLI0_TP0DATAR_DATA_POS         _MLI_UL(0)
#define MLI0_TP0DATAR_DATA_LEN         _MLI_UL(32)

/* MLI0_TP0STATR_AP (rh) */
#define MLI0_TP0STATR_AP_POS           _MLI_UL(6)
#define MLI0_TP0STATR_AP_LEN           _MLI_UL(10)

/* MLI0_TP0STATR_BS (rh) */
#define MLI0_TP0STATR_BS_POS           _MLI_UL(0)
#define MLI0_TP0STATR_BS_LEN           _MLI_UL(4)

/* MLI0_TP0STATR_DW (rh) */
#define MLI0_TP0STATR_DW_POS           _MLI_UL(4)
#define MLI0_TP0STATR_DW_LEN           _MLI_UL(2)

/* MLI0_TP0STATR_OP (rh) */
#define MLI0_TP0STATR_OP_POS           _MLI_UL(16)
#define MLI0_TP0STATR_OP_LEN           _MLI_UL(1)

/* MLI0_TP1AOFR_AOFF (rh) */
#define MLI0_TP1AOFR_AOFF_POS          _MLI_UL(0)
#define MLI0_TP1AOFR_AOFF_LEN          _MLI_UL(16)

/* MLI0_TP1BAR_ADDR (w) */
#define MLI0_TP1BAR_ADDR_POS           _MLI_UL(4)
#define MLI0_TP1BAR_ADDR_LEN           _MLI_UL(28)

/* MLI0_TP1BAR_BS (w) */
#define MLI0_TP1BAR_BS_POS             _MLI_UL(0)
#define MLI0_TP1BAR_BS_LEN             _MLI_UL(4)

/* MLI0_TP1DATAR_DATA (rh) */
#define MLI0_TP1DATAR_DATA_POS         _MLI_UL(0)
#define MLI0_TP1DATAR_DATA_LEN         _MLI_UL(32)

/* MLI0_TP1STATR_AP (rh) */
#define MLI0_TP1STATR_AP_POS           _MLI_UL(6)
#define MLI0_TP1STATR_AP_LEN           _MLI_UL(10)

/* MLI0_TP1STATR_BS (rh) */
#define MLI0_TP1STATR_BS_POS           _MLI_UL(0)
#define MLI0_TP1STATR_BS_LEN           _MLI_UL(4)

/* MLI0_TP1STATR_DW (rh) */
#define MLI0_TP1STATR_DW_POS           _MLI_UL(4)
#define MLI0_TP1STATR_DW_LEN           _MLI_UL(2)

/* MLI0_TP1STATR_OP (rh) */
#define MLI0_TP1STATR_OP_POS           _MLI_UL(16)
#define MLI0_TP1STATR_OP_LEN           _MLI_UL(1)

/* MLI0_TP2AOFR_AOFF (rh) */
#define MLI0_TP2AOFR_AOFF_POS          _MLI_UL(0)
#define MLI0_TP2AOFR_AOFF_LEN          _MLI_UL(16)

/* MLI0_TP2BAR_ADDR (w) */
#define MLI0_TP2BAR_ADDR_POS           _MLI_UL(4)
#define MLI0_TP2BAR_ADDR_LEN           _MLI_UL(28)

/* MLI0_TP2BAR_BS (w) */
#define MLI0_TP2BAR_BS_POS             _MLI_UL(0)
#define MLI0_TP2BAR_BS_LEN             _MLI_UL(4)

/* MLI0_TP2DATAR_DATA (rh) */
#define MLI0_TP2DATAR_DATA_POS         _MLI_UL(0)
#define MLI0_TP2DATAR_DATA_LEN         _MLI_UL(32)

/* MLI0_TP2STATR_AP (rh) */
#define MLI0_TP2STATR_AP_POS           _MLI_UL(6)
#define MLI0_TP2STATR_AP_LEN           _MLI_UL(10)

/* MLI0_TP2STATR_BS (rh) */
#define MLI0_TP2STATR_BS_POS           _MLI_UL(0)
#define MLI0_TP2STATR_BS_LEN           _MLI_UL(4)

/* MLI0_TP2STATR_DW (rh) */
#define MLI0_TP2STATR_DW_POS           _MLI_UL(4)
#define MLI0_TP2STATR_DW_LEN           _MLI_UL(2)

/* MLI0_TP2STATR_OP (rh) */
#define MLI0_TP2STATR_OP_POS           _MLI_UL(16)
#define MLI0_TP2STATR_OP_LEN           _MLI_UL(1)

/* MLI0_TP3AOFR_AOFF (rh) */
#define MLI0_TP3AOFR_AOFF_POS          _MLI_UL(0)
#define MLI0_TP3AOFR_AOFF_LEN          _MLI_UL(16)

/* MLI0_TP3BAR_ADDR (w) */
#define MLI0_TP3BAR_ADDR_POS           _MLI_UL(4)
#define MLI0_TP3BAR_ADDR_LEN           _MLI_UL(28)

/* MLI0_TP3BAR_BS (w) */
#define MLI0_TP3BAR_BS_POS             _MLI_UL(0)
#define MLI0_TP3BAR_BS_LEN             _MLI_UL(4)

/* MLI0_TP3DATAR_DATA (rh) */
#define MLI0_TP3DATAR_DATA_POS         _MLI_UL(0)
#define MLI0_TP3DATAR_DATA_LEN         _MLI_UL(32)

/* MLI0_TP3STATR_AP (rh) */
#define MLI0_TP3STATR_AP_POS           _MLI_UL(6)
#define MLI0_TP3STATR_AP_LEN           _MLI_UL(10)

/* MLI0_TP3STATR_BS (rh) */
#define MLI0_TP3STATR_BS_POS           _MLI_UL(0)
#define MLI0_TP3STATR_BS_LEN           _MLI_UL(4)

/* MLI0_TP3STATR_DW (rh) */
#define MLI0_TP3STATR_DW_POS           _MLI_UL(4)
#define MLI0_TP3STATR_DW_LEN           _MLI_UL(2)

/* MLI0_TP3STATR_OP (rh) */
#define MLI0_TP3STATR_OP_POS           _MLI_UL(16)
#define MLI0_TP3STATR_OP_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_AV (rh) */
#define MLI0_TRSTATR_AV_POS            _MLI_UL(8)
#define MLI0_TRSTATR_AV_LEN            _MLI_UL(1)

/* MLI0_TRSTATR_BAV (rh) */
#define MLI0_TRSTATR_BAV_POS           _MLI_UL(9)
#define MLI0_TRSTATR_BAV_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_CIV0 (rh) */
#define MLI0_TRSTATR_CIV0_POS          _MLI_UL(0)
#define MLI0_TRSTATR_CIV0_LEN          _MLI_UL(1)

/* MLI0_TRSTATR_CIV1 (rh) */
#define MLI0_TRSTATR_CIV1_POS          _MLI_UL(1)
#define MLI0_TRSTATR_CIV1_LEN          _MLI_UL(1)

/* MLI0_TRSTATR_CIV2 (rh) */
#define MLI0_TRSTATR_CIV2_POS          _MLI_UL(2)
#define MLI0_TRSTATR_CIV2_LEN          _MLI_UL(1)

/* MLI0_TRSTATR_CIV3 (rh) */
#define MLI0_TRSTATR_CIV3_POS          _MLI_UL(3)
#define MLI0_TRSTATR_CIV3_LEN          _MLI_UL(1)

/* MLI0_TRSTATR_CV0 (rh) */
#define MLI0_TRSTATR_CV0_POS           _MLI_UL(4)
#define MLI0_TRSTATR_CV0_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_CV1 (rh) */
#define MLI0_TRSTATR_CV1_POS           _MLI_UL(5)
#define MLI0_TRSTATR_CV1_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_CV2 (rh) */
#define MLI0_TRSTATR_CV2_POS           _MLI_UL(6)
#define MLI0_TRSTATR_CV2_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_CV3 (rh) */
#define MLI0_TRSTATR_CV3_POS           _MLI_UL(7)
#define MLI0_TRSTATR_CV3_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_DV0 (rh) */
#define MLI0_TRSTATR_DV0_POS           _MLI_UL(16)
#define MLI0_TRSTATR_DV0_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_DV1 (rh) */
#define MLI0_TRSTATR_DV1_POS           _MLI_UL(17)
#define MLI0_TRSTATR_DV1_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_DV2 (rh) */
#define MLI0_TRSTATR_DV2_POS           _MLI_UL(18)
#define MLI0_TRSTATR_DV2_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_DV3 (rh) */
#define MLI0_TRSTATR_DV3_POS           _MLI_UL(19)
#define MLI0_TRSTATR_DV3_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_PN (rh) */
#define MLI0_TRSTATR_PN_POS            _MLI_UL(24)
#define MLI0_TRSTATR_PN_LEN            _MLI_UL(2)

/* MLI0_TRSTATR_RP0 (rh) */
#define MLI0_TRSTATR_RP0_POS           _MLI_UL(20)
#define MLI0_TRSTATR_RP0_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_RP1 (rh) */
#define MLI0_TRSTATR_RP1_POS           _MLI_UL(21)
#define MLI0_TRSTATR_RP1_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_RP2 (rh) */
#define MLI0_TRSTATR_RP2_POS           _MLI_UL(22)
#define MLI0_TRSTATR_RP2_LEN           _MLI_UL(1)

/* MLI0_TRSTATR_RP3 (rh) */
#define MLI0_TRSTATR_RP3_POS           _MLI_UL(23)
#define MLI0_TRSTATR_RP3_LEN           _MLI_UL(1)

/* MLI0_TSTATR_APN (rh) */
#define MLI0_TSTATR_APN_POS            _MLI_UL(5)
#define MLI0_TSTATR_APN_LEN            _MLI_UL(2)

/* MLI0_TSTATR_NAE (rh) */
#define MLI0_TSTATR_NAE_POS            _MLI_UL(8)
#define MLI0_TSTATR_NAE_LEN            _MLI_UL(1)

/* MLI0_TSTATR_PE (rh) */
#define MLI0_TSTATR_PE_POS             _MLI_UL(7)
#define MLI0_TSTATR_PE_LEN             _MLI_UL(1)

/* MLI0_TSTATR_RDC (rh) */
#define MLI0_TSTATR_RDC_POS            _MLI_UL(0)
#define MLI0_TSTATR_RDC_LEN            _MLI_UL(5)

#endif
