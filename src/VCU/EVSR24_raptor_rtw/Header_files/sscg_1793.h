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
 * $Filename__:sscg_1793.h$ 
 * 
 * $Author____:RAT1COB$ 
 * 
 * $Function__:Update of TC1793 header files$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:12.05.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:sscg_1793$ 
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
 * 1.12.0; 0     12.05.2010 RAT1COB
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _SSCG_1793_H
#define _SSCG_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _SSCG_UL(x) x
#else
    #define _SSCG_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module SSCG on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0310800] : Clock Control Register
    volatile uint32 PISEL;               // [0xF0310804] : Port Input Select Register
    volatile uint32 ID;                  // [0xF0310808] : Module Identification Register
    volatile uint32 FDR;                 // [0xF031080C] : Fractional Divider Register
    volatile uint32 CON;                 // [0xF0310810] : Control Register
    volatile uint32 BR;                  // [0xF0310814] : Baud Rate Timer Reload Register
    volatile uint32 SSOC;                // [0xF0310818] : Slave Select Output Control Register
    volatile uint32 SSOTC;               // [0xF031081C] : Slave Select Output Timing Control Register
    volatile uint32 TB;                  // [0xF0310820] : Transmit Buffer Register
    volatile uint32 RB;                  // [0xF0310824] : Receive Buffer Register
    volatile uint32 STAT;                // [0xF0310828] : Status Register
    volatile uint32 EFM;                 // [0xF031082C] : Error Flag Modification Register
    volatile uint32 RESERVED0[52];       // [0xF0310830...0xF03108FF] : reserved space
    volatile uint32 TB1;                 // [0xF0310900] : Transmit Buffer Compare Register
    volatile uint32 TB1SNAP;             // [0xF0310904] : Transmit Buffer Snapshot Register
    volatile uint32 RBSNAP;              // [0xF0310908] : Receive Buffer Snapshot Register
    volatile uint32 GSTAT;               // [0xF031090C] : Guardian Status Register
    volatile uint32 GEFM;                // [0xF0310910] : Guardian Error Flag Modification Register
    volatile uint32 GEN;                 // [0xF0310914] : Guardian Enable Register
    volatile uint32 RESERVED1[57];       // [0xF0310918...0xF03109FB] : reserved space
    volatile uint32 GSRC;                // [0xF03109FC] : Guardian Interrupt Service Request Control Register
} SSCG_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern SSCG_RegMap_t SSCG0 __attribute__ ((asection (".bss.label_only")));
extern SSCG_RegMap_t SSCG1 __attribute__ ((asection (".bss.label_only")));
extern SSCG_RegMap_t SSCG2 __attribute__ ((asection (".bss.label_only")));
extern SSCG_RegMap_t SSCG3 __attribute__ ((asection (".bss.label_only")));
extern SSCG_RegMap_t SSCG[4] __attribute__ ((asection (".bss.label_only")));


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

/* SSCG_ID_MOD_NUMBER (r) */
#define SSCG_ID_MOD_NUMBER_POS                _SSCG_UL(16)
#define SSCG_ID_MOD_NUMBER_LEN                _SSCG_UL(16)

/* SSCG_ID_MOD_REV (r) */
#define SSCG_ID_MOD_REV_POS                   _SSCG_UL(0)
#define SSCG_ID_MOD_REV_LEN                   _SSCG_UL(8)

/* SSCG_ID_MOD_TYPE (r) */
#define SSCG_ID_MOD_TYPE_POS                  _SSCG_UL(8)
#define SSCG_ID_MOD_TYPE_LEN                  _SSCG_UL(8)

/* SSCG0_ID_MOD_NUMBER (r) */
#define SSCG0_ID_MOD_NUMBER_POS               _SSCG_UL(16)
#define SSCG0_ID_MOD_NUMBER_LEN               _SSCG_UL(16)

/* SSCG0_ID_MOD_REV (r) */
#define SSCG0_ID_MOD_REV_POS                  _SSCG_UL(0)
#define SSCG0_ID_MOD_REV_LEN                  _SSCG_UL(8)

/* SSCG0_ID_MOD_TYPE (r) */
#define SSCG0_ID_MOD_TYPE_POS                 _SSCG_UL(8)
#define SSCG0_ID_MOD_TYPE_LEN                 _SSCG_UL(8)

/* SSCG1_ID_MOD_NUMBER (r) */
#define SSCG1_ID_MOD_NUMBER_POS               _SSCG_UL(16)
#define SSCG1_ID_MOD_NUMBER_LEN               _SSCG_UL(16)

/* SSCG1_ID_MOD_REV (r) */
#define SSCG1_ID_MOD_REV_POS                  _SSCG_UL(0)
#define SSCG1_ID_MOD_REV_LEN                  _SSCG_UL(8)

/* SSCG1_ID_MOD_TYPE (r) */
#define SSCG1_ID_MOD_TYPE_POS                 _SSCG_UL(8)
#define SSCG1_ID_MOD_TYPE_LEN                 _SSCG_UL(8)

/* SSCG2_ID_MOD_NUMBER (r) */
#define SSCG2_ID_MOD_NUMBER_POS               _SSCG_UL(16)
#define SSCG2_ID_MOD_NUMBER_LEN               _SSCG_UL(16)

/* SSCG2_ID_MOD_REV (r) */
#define SSCG2_ID_MOD_REV_POS                  _SSCG_UL(0)
#define SSCG2_ID_MOD_REV_LEN                  _SSCG_UL(8)

/* SSCG2_ID_MOD_TYPE (r) */
#define SSCG2_ID_MOD_TYPE_POS                 _SSCG_UL(8)
#define SSCG2_ID_MOD_TYPE_LEN                 _SSCG_UL(8)

/* SSCG3_ID_MOD_NUMBER (r) */
#define SSCG3_ID_MOD_NUMBER_POS               _SSCG_UL(16)
#define SSCG3_ID_MOD_NUMBER_LEN               _SSCG_UL(16)

/* SSCG3_ID_MOD_REV (r) */
#define SSCG3_ID_MOD_REV_POS                  _SSCG_UL(0)
#define SSCG3_ID_MOD_REV_LEN                  _SSCG_UL(8)

/* SSCG3_ID_MOD_TYPE (r) */
#define SSCG3_ID_MOD_TYPE_POS                 _SSCG_UL(8)
#define SSCG3_ID_MOD_TYPE_LEN                 _SSCG_UL(8)

/* SSCG_CLC_DISR (rw) */
#define SSCG_CLC_DISR_POS                    _SSCG_UL(0)
#define SSCG_CLC_DISR_LEN                    _SSCG_UL(1)

/* SSCG_CLC_DISS (r) */
#define SSCG_CLC_DISS_POS                    _SSCG_UL(1)
#define SSCG_CLC_DISS_LEN                    _SSCG_UL(1)

/* SSCG_CLC_SPEN (rw) */
#define SSCG_CLC_SPEN_POS                    _SSCG_UL(2)
#define SSCG_CLC_SPEN_LEN                    _SSCG_UL(1)

/* SSCG_CLC_EDIS (rw) */
#define SSCG_CLC_EDIS_POS                    _SSCG_UL(3)
#define SSCG_CLC_EDIS_LEN                    _SSCG_UL(1)

/* SSCG_CLC_SBWE (w) */
#define SSCG_CLC_SBWE_POS                    _SSCG_UL(4)
#define SSCG_CLC_SBWE_LEN                    _SSCG_UL(1)

/* SSCG_CLC_FSOE (rw) */
#define SSCG_CLC_FSOE_POS                    _SSCG_UL(5)
#define SSCG_CLC_FSOE_LEN                    _SSCG_UL(1)

/* SSCG_PISEL_MRIS (rw) */
#define SSCG_PISEL_MRIS_POS                  _SSCG_UL(0)
#define SSCG_PISEL_MRIS_LEN                  _SSCG_UL(1)

/* SSCG_PISEL_SRIS (rw) */
#define SSCG_PISEL_SRIS_POS                  _SSCG_UL(1)
#define SSCG_PISEL_SRIS_LEN                  _SSCG_UL(1)

/* SSCG_PISEL_SCIS (rw) */
#define SSCG_PISEL_SCIS_POS                  _SSCG_UL(2)
#define SSCG_PISEL_SCIS_LEN                  _SSCG_UL(1)

/* SSCG_PISEL_SLSIS (rw) */
#define SSCG_PISEL_SLSIS_POS                 _SSCG_UL(3)
#define SSCG_PISEL_SLSIS_LEN                 _SSCG_UL(3)

/* SSCG_PISEL_STIP (rw) */
#define SSCG_PISEL_STIP_POS                  _SSCG_UL(8)
#define SSCG_PISEL_STIP_LEN                  _SSCG_UL(1)

/* SSCG_ID_MODREV (r) */
#define SSCG_ID_MODREV_POS                   _SSCG_UL(0)
#define SSCG_ID_MODREV_LEN                   _SSCG_UL(8)

/* SSCG_ID_MODTYPE (r) */
#define SSCG_ID_MODTYPE_POS                  _SSCG_UL(8)
#define SSCG_ID_MODTYPE_LEN                  _SSCG_UL(8)

/* SSCG_ID_MODNUM (r) */
#define SSCG_ID_MODNUM_POS                   _SSCG_UL(16)
#define SSCG_ID_MODNUM_LEN                   _SSCG_UL(16)

/* SSCG_FDR_STEP (rw) */
#define SSCG_FDR_STEP_POS                    _SSCG_UL(0)
#define SSCG_FDR_STEP_LEN                    _SSCG_UL(10)

/* SSCG_FDR_FDIS (rw) */
#define SSCG_FDR_FDIS_POS                    _SSCG_UL(10)
#define SSCG_FDR_FDIS_LEN                    _SSCG_UL(1)

/* SSCG_FDR_SM (rw) */
#define SSCG_FDR_SM_POS                      _SSCG_UL(11)
#define SSCG_FDR_SM_LEN                      _SSCG_UL(1)

/* SSCG_FDR_SC (rw) */
#define SSCG_FDR_SC_POS                      _SSCG_UL(12)
#define SSCG_FDR_SC_LEN                      _SSCG_UL(2)

/* SSCG_FDR_DM (rw) */
#define SSCG_FDR_DM_POS                      _SSCG_UL(14)
#define SSCG_FDR_DM_LEN                      _SSCG_UL(2)

/* SSCG_FDR_RESULT (rh) */
#define SSCG_FDR_RESULT_POS                  _SSCG_UL(16)
#define SSCG_FDR_RESULT_LEN                  _SSCG_UL(10)

/* SSCG_FDR_SUSACK (rh) */
#define SSCG_FDR_SUSACK_POS                  _SSCG_UL(28)
#define SSCG_FDR_SUSACK_LEN                  _SSCG_UL(1)

/* SSCG_FDR_SUSREQ (rh) */
#define SSCG_FDR_SUSREQ_POS                  _SSCG_UL(29)
#define SSCG_FDR_SUSREQ_LEN                  _SSCG_UL(1)

/* SSCG_FDR_ENHW (rw) */
#define SSCG_FDR_ENHW_POS                    _SSCG_UL(30)
#define SSCG_FDR_ENHW_LEN                    _SSCG_UL(1)

/* SSCG_FDR_DISCLK (rwh) */
#define SSCG_FDR_DISCLK_POS                  _SSCG_UL(31)
#define SSCG_FDR_DISCLK_LEN                  _SSCG_UL(1)

/* SSCG_CON_BM (rw) */
#define SSCG_CON_BM_POS                      _SSCG_UL(0)
#define SSCG_CON_BM_LEN                      _SSCG_UL(4)

/* SSCG_CON_HB (rw) */
#define SSCG_CON_HB_POS                      _SSCG_UL(4)
#define SSCG_CON_HB_LEN                      _SSCG_UL(1)

/* SSCG_CON_PH (rw) */
#define SSCG_CON_PH_POS                      _SSCG_UL(5)
#define SSCG_CON_PH_LEN                      _SSCG_UL(1)

/* SSCG_CON_PO (rw) */
#define SSCG_CON_PO_POS                      _SSCG_UL(6)
#define SSCG_CON_PO_LEN                      _SSCG_UL(1)

/* SSCG_CON_LB (rw) */
#define SSCG_CON_LB_POS                      _SSCG_UL(7)
#define SSCG_CON_LB_LEN                      _SSCG_UL(1)

/* SSCG_CON_TEN (rw) */
#define SSCG_CON_TEN_POS                     _SSCG_UL(8)
#define SSCG_CON_TEN_LEN                     _SSCG_UL(1)

/* SSCG_CON_REN (rw) */
#define SSCG_CON_REN_POS                     _SSCG_UL(9)
#define SSCG_CON_REN_LEN                     _SSCG_UL(1)

/* SSCG_CON_PEN (rw) */
#define SSCG_CON_PEN_POS                     _SSCG_UL(10)
#define SSCG_CON_PEN_LEN                     _SSCG_UL(1)

/* SSCG_CON_BEN (rw) */
#define SSCG_CON_BEN_POS                     _SSCG_UL(11)
#define SSCG_CON_BEN_LEN                     _SSCG_UL(1)

/* SSCG_CON_AREN (rw) */
#define SSCG_CON_AREN_POS                    _SSCG_UL(12)
#define SSCG_CON_AREN_LEN                    _SSCG_UL(1)

/* SSCG_CON_MS (rw) */
#define SSCG_CON_MS_POS                      _SSCG_UL(14)
#define SSCG_CON_MS_LEN                      _SSCG_UL(1)

/* SSCG_CON_EN (rw) */
#define SSCG_CON_EN_POS                      _SSCG_UL(15)
#define SSCG_CON_EN_LEN                      _SSCG_UL(1)

/* SSCG_CON_PARTEN (rw) */
#define SSCG_CON_PARTEN_POS                  _SSCG_UL(16)
#define SSCG_CON_PARTEN_LEN                  _SSCG_UL(1)

/* SSCG_CON_PARREN (rw) */
#define SSCG_CON_PARREN_POS                  _SSCG_UL(17)
#define SSCG_CON_PARREN_LEN                  _SSCG_UL(1)

/* SSCG_CON_PARTYP (rw) */
#define SSCG_CON_PARTYP_POS                  _SSCG_UL(18)
#define SSCG_CON_PARTYP_LEN                  _SSCG_UL(1)

/* SSCG_CON_PAREEN (rw) */
#define SSCG_CON_PAREEN_POS                  _SSCG_UL(19)
#define SSCG_CON_PAREEN_LEN                  _SSCG_UL(1)

/* SSCG_BR_BR_VALUE (rw) */
#define SSCG_BR_BR_VALUE_POS                 _SSCG_UL(0)
#define SSCG_BR_BR_VALUE_LEN                 _SSCG_UL(16)

/* SSCG_SSOC_AOL0 (rw) */
#define SSCG_SSOC_AOL0_POS                   _SSCG_UL(0)
#define SSCG_SSOC_AOL0_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_AOL1 (rw) */
#define SSCG_SSOC_AOL1_POS                   _SSCG_UL(1)
#define SSCG_SSOC_AOL1_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_AOL2 (rw) */
#define SSCG_SSOC_AOL2_POS                   _SSCG_UL(2)
#define SSCG_SSOC_AOL2_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_AOL3 (rw) */
#define SSCG_SSOC_AOL3_POS                   _SSCG_UL(3)
#define SSCG_SSOC_AOL3_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_AOL4 (rw) */
#define SSCG_SSOC_AOL4_POS                   _SSCG_UL(4)
#define SSCG_SSOC_AOL4_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_AOL5 (rw) */
#define SSCG_SSOC_AOL5_POS                   _SSCG_UL(5)
#define SSCG_SSOC_AOL5_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_AOL6 (rw) */
#define SSCG_SSOC_AOL6_POS                   _SSCG_UL(6)
#define SSCG_SSOC_AOL6_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_AOL7 (rw) */
#define SSCG_SSOC_AOL7_POS                   _SSCG_UL(7)
#define SSCG_SSOC_AOL7_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_OEN0 (rw) */
#define SSCG_SSOC_OEN0_POS                   _SSCG_UL(8)
#define SSCG_SSOC_OEN0_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_OEN1 (rw) */
#define SSCG_SSOC_OEN1_POS                   _SSCG_UL(9)
#define SSCG_SSOC_OEN1_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_OEN2 (rw) */
#define SSCG_SSOC_OEN2_POS                   _SSCG_UL(10)
#define SSCG_SSOC_OEN2_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_OEN3 (rw) */
#define SSCG_SSOC_OEN3_POS                   _SSCG_UL(11)
#define SSCG_SSOC_OEN3_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_OEN4 (rw) */
#define SSCG_SSOC_OEN4_POS                   _SSCG_UL(12)
#define SSCG_SSOC_OEN4_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_OEN5 (rw) */
#define SSCG_SSOC_OEN5_POS                   _SSCG_UL(13)
#define SSCG_SSOC_OEN5_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_OEN6 (rw) */
#define SSCG_SSOC_OEN6_POS                   _SSCG_UL(14)
#define SSCG_SSOC_OEN6_LEN                   _SSCG_UL(1)

/* SSCG_SSOC_OEN7 (rw) */
#define SSCG_SSOC_OEN7_POS                   _SSCG_UL(15)
#define SSCG_SSOC_OEN7_LEN                   _SSCG_UL(1)

/* SSCG_SSOTC_LEAD (rw) */
#define SSCG_SSOTC_LEAD_POS                  _SSCG_UL(0)
#define SSCG_SSOTC_LEAD_LEN                  _SSCG_UL(2)

/* SSCG_SSOTC_TRAIL (rw) */
#define SSCG_SSOTC_TRAIL_POS                 _SSCG_UL(2)
#define SSCG_SSOTC_TRAIL_LEN                 _SSCG_UL(2)

/* SSCG_SSOTC_INACT (rw) */
#define SSCG_SSOTC_INACT_POS                 _SSCG_UL(4)
#define SSCG_SSOTC_INACT_LEN                 _SSCG_UL(2)

/* SSCG_SSOTC_SLSO7MOD (rw) */
#define SSCG_SSOTC_SLSO7MOD_POS              _SSCG_UL(8)
#define SSCG_SSOTC_SLSO7MOD_LEN              _SSCG_UL(1)

/* SSCG_SSOTC_QSMEN (w) */
#define SSCG_SSOTC_QSMEN_POS                 _SSCG_UL(14)
#define SSCG_SSOTC_QSMEN_LEN                 _SSCG_UL(1)

/* SSCG_SSOTC_EN (rw) */
#define SSCG_SSOTC_EN_POS                    _SSCG_UL(15)
#define SSCG_SSOTC_EN_LEN                    _SSCG_UL(1)

/* SSCG_TB_TB_VALUE (rw) */
#define SSCG_TB_TB_VALUE_POS                 _SSCG_UL(0)
#define SSCG_TB_TB_VALUE_LEN                 _SSCG_UL(16)

/* SSCG_RB_RB_VALUE (rh) */
#define SSCG_RB_RB_VALUE_POS                 _SSCG_UL(0)
#define SSCG_RB_RB_VALUE_LEN                 _SSCG_UL(16)

/* SSCG_STAT_BC (rh) */
#define SSCG_STAT_BC_POS                     _SSCG_UL(0)
#define SSCG_STAT_BC_LEN                     _SSCG_UL(4)

/* SSCG_STAT_PARE (rh) */
#define SSCG_STAT_PARE_POS                   _SSCG_UL(4)
#define SSCG_STAT_PARE_LEN                   _SSCG_UL(1)

/* SSCG_STAT_PARTVAL (rh) */
#define SSCG_STAT_PARTVAL_POS                _SSCG_UL(5)
#define SSCG_STAT_PARTVAL_LEN                _SSCG_UL(1)

/* SSCG_STAT_PARRVAL (rh) */
#define SSCG_STAT_PARRVAL_POS                _SSCG_UL(6)
#define SSCG_STAT_PARRVAL_LEN                _SSCG_UL(1)

/* SSCG_STAT_TE (rh) */
#define SSCG_STAT_TE_POS                     _SSCG_UL(8)
#define SSCG_STAT_TE_LEN                     _SSCG_UL(1)

/* SSCG_STAT_RE (rh) */
#define SSCG_STAT_RE_POS                     _SSCG_UL(9)
#define SSCG_STAT_RE_LEN                     _SSCG_UL(1)

/* SSCG_STAT_PE (rh) */
#define SSCG_STAT_PE_POS                     _SSCG_UL(10)
#define SSCG_STAT_PE_LEN                     _SSCG_UL(1)

/* SSCG_STAT_BE (rh) */
#define SSCG_STAT_BE_POS                     _SSCG_UL(11)
#define SSCG_STAT_BE_LEN                     _SSCG_UL(1)

/* SSCG_STAT_BSY (rh) */
#define SSCG_STAT_BSY_POS                    _SSCG_UL(12)
#define SSCG_STAT_BSY_LEN                    _SSCG_UL(1)

/* SSCG_EFM_CLRPARE (w) */
#define SSCG_EFM_CLRPARE_POS                 _SSCG_UL(0)
#define SSCG_EFM_CLRPARE_LEN                 _SSCG_UL(1)

/* SSCG_EFM_SETPARE (w) */
#define SSCG_EFM_SETPARE_POS                 _SSCG_UL(4)
#define SSCG_EFM_SETPARE_LEN                 _SSCG_UL(1)

/* SSCG_EFM_CLRTE (w) */
#define SSCG_EFM_CLRTE_POS                   _SSCG_UL(8)
#define SSCG_EFM_CLRTE_LEN                   _SSCG_UL(1)

/* SSCG_EFM_CLRRE (w) */
#define SSCG_EFM_CLRRE_POS                   _SSCG_UL(9)
#define SSCG_EFM_CLRRE_LEN                   _SSCG_UL(1)

/* SSCG_EFM_CLRPE (w) */
#define SSCG_EFM_CLRPE_POS                   _SSCG_UL(10)
#define SSCG_EFM_CLRPE_LEN                   _SSCG_UL(1)

/* SSCG_EFM_CLRBE (w) */
#define SSCG_EFM_CLRBE_POS                   _SSCG_UL(11)
#define SSCG_EFM_CLRBE_LEN                   _SSCG_UL(1)

/* SSCG_EFM_SETTE (w) */
#define SSCG_EFM_SETTE_POS                   _SSCG_UL(12)
#define SSCG_EFM_SETTE_LEN                   _SSCG_UL(1)

/* SSCG_EFM_SETRE (w) */
#define SSCG_EFM_SETRE_POS                   _SSCG_UL(13)
#define SSCG_EFM_SETRE_LEN                   _SSCG_UL(1)

/* SSCG_EFM_SETPE (w) */
#define SSCG_EFM_SETPE_POS                   _SSCG_UL(14)
#define SSCG_EFM_SETPE_LEN                   _SSCG_UL(1)

/* SSCG_EFM_SETBE (w) */
#define SSCG_EFM_SETBE_POS                   _SSCG_UL(15)
#define SSCG_EFM_SETBE_LEN                   _SSCG_UL(1)

/* SSCG_TB1_TB_VALUE (rwh) */
#define SSCG_TB1_TB_VALUE_POS                _SSCG_UL(0)
#define SSCG_TB1_TB_VALUE_LEN                _SSCG_UL(16)

/* SSCG_TB1SNAP_TB_VALUE (rw) */
#define SSCG_TB1SNAP_TB_VALUE_POS            _SSCG_UL(0)
#define SSCG_TB1SNAP_TB_VALUE_LEN            _SSCG_UL(16)

/* SSCG_RBSNAP_RB_VALUE (rh) */
#define SSCG_RBSNAP_RB_VALUE_POS             _SSCG_UL(0)
#define SSCG_RBSNAP_RB_VALUE_LEN             _SSCG_UL(16)

/* SSCG_GSTAT_CE (rh) */
#define SSCG_GSTAT_CE_POS                    _SSCG_UL(0)
#define SSCG_GSTAT_CE_LEN                    _SSCG_UL(1)

/* SSCG_GSTAT_SCLK (rh) */
#define SSCG_GSTAT_SCLK_POS                  _SSCG_UL(2)
#define SSCG_GSTAT_SCLK_LEN                  _SSCG_UL(1)

/* SSCG_GSTAT_S0 (rh) */
#define SSCG_GSTAT_S0_POS                    _SSCG_UL(16)
#define SSCG_GSTAT_S0_LEN                    _SSCG_UL(1)

/* SSCG_GSTAT_S1 (rh) */
#define SSCG_GSTAT_S1_POS                    _SSCG_UL(17)
#define SSCG_GSTAT_S1_LEN                    _SSCG_UL(1)

/* SSCG_GSTAT_S2 (rh) */
#define SSCG_GSTAT_S2_POS                    _SSCG_UL(18)
#define SSCG_GSTAT_S2_LEN                    _SSCG_UL(1)

/* SSCG_GSTAT_S3 (rh) */
#define SSCG_GSTAT_S3_POS                    _SSCG_UL(19)
#define SSCG_GSTAT_S3_LEN                    _SSCG_UL(1)

/* SSCG_GSTAT_S4 (rh) */
#define SSCG_GSTAT_S4_POS                    _SSCG_UL(20)
#define SSCG_GSTAT_S4_LEN                    _SSCG_UL(1)

/* SSCG_GSTAT_S5 (rh) */
#define SSCG_GSTAT_S5_POS                    _SSCG_UL(21)
#define SSCG_GSTAT_S5_LEN                    _SSCG_UL(1)

/* SSCG_GSTAT_S6 (rh) */
#define SSCG_GSTAT_S6_POS                    _SSCG_UL(22)
#define SSCG_GSTAT_S6_LEN                    _SSCG_UL(1)

/* SSCG_GSTAT_S7 (rh) */
#define SSCG_GSTAT_S7_POS                    _SSCG_UL(23)
#define SSCG_GSTAT_S7_LEN                    _SSCG_UL(1)

/* SSCG_GEFM_CLRCE (w) */
#define SSCG_GEFM_CLRCE_POS                  _SSCG_UL(0)
#define SSCG_GEFM_CLRCE_LEN                  _SSCG_UL(1)

/* SSCG_GEFM_SCTC (w) */
#define SSCG_GEFM_SCTC_POS                   _SSCG_UL(2)
#define SSCG_GEFM_SCTC_LEN                   _SSCG_UL(2)

/* SSCG_GEFM_SETCE (w) */
#define SSCG_GEFM_SETCE_POS                  _SSCG_UL(8)
#define SSCG_GEFM_SETCE_LEN                  _SSCG_UL(1)

/* SSCG_GEFM_SCT0 (w) */
#define SSCG_GEFM_SCT0_POS                   _SSCG_UL(16)
#define SSCG_GEFM_SCT0_LEN                   _SSCG_UL(2)

/* SSCG_GEFM_SCT1 (w) */
#define SSCG_GEFM_SCT1_POS                   _SSCG_UL(18)
#define SSCG_GEFM_SCT1_LEN                   _SSCG_UL(2)

/* SSCG_GEFM_SCT2 (w) */
#define SSCG_GEFM_SCT2_POS                   _SSCG_UL(20)
#define SSCG_GEFM_SCT2_LEN                   _SSCG_UL(2)

/* SSCG_GEFM_SCT3 (w) */
#define SSCG_GEFM_SCT3_POS                   _SSCG_UL(22)
#define SSCG_GEFM_SCT3_LEN                   _SSCG_UL(2)

/* SSCG_GEFM_SCT4 (w) */
#define SSCG_GEFM_SCT4_POS                   _SSCG_UL(24)
#define SSCG_GEFM_SCT4_LEN                   _SSCG_UL(2)

/* SSCG_GEFM_SCT5 (w) */
#define SSCG_GEFM_SCT5_POS                   _SSCG_UL(26)
#define SSCG_GEFM_SCT5_LEN                   _SSCG_UL(2)

/* SSCG_GEFM_SCT6 (w) */
#define SSCG_GEFM_SCT6_POS                   _SSCG_UL(28)
#define SSCG_GEFM_SCT6_LEN                   _SSCG_UL(2)

/* SSCG_GEFM_SCT7 (w) */
#define SSCG_GEFM_SCT7_POS                   _SSCG_UL(30)
#define SSCG_GEFM_SCT7_LEN                   _SSCG_UL(2)

/* SSCG_GEN_SEN0 (rw) */
#define SSCG_GEN_SEN0_POS                    _SSCG_UL(0)
#define SSCG_GEN_SEN0_LEN                    _SSCG_UL(1)

/* SSCG_GEN_SEN1 (rw) */
#define SSCG_GEN_SEN1_POS                    _SSCG_UL(1)
#define SSCG_GEN_SEN1_LEN                    _SSCG_UL(1)

/* SSCG_GEN_SEN2 (rw) */
#define SSCG_GEN_SEN2_POS                    _SSCG_UL(2)
#define SSCG_GEN_SEN2_LEN                    _SSCG_UL(1)

/* SSCG_GEN_SEN3 (rw) */
#define SSCG_GEN_SEN3_POS                    _SSCG_UL(3)
#define SSCG_GEN_SEN3_LEN                    _SSCG_UL(1)

/* SSCG_GEN_SEN4 (rw) */
#define SSCG_GEN_SEN4_POS                    _SSCG_UL(4)
#define SSCG_GEN_SEN4_LEN                    _SSCG_UL(1)

/* SSCG_GEN_SEN5 (rw) */
#define SSCG_GEN_SEN5_POS                    _SSCG_UL(5)
#define SSCG_GEN_SEN5_LEN                    _SSCG_UL(1)

/* SSCG_GEN_SEN6 (rw) */
#define SSCG_GEN_SEN6_POS                    _SSCG_UL(6)
#define SSCG_GEN_SEN6_LEN                    _SSCG_UL(1)

/* SSCG_GEN_SEN7 (rw) */
#define SSCG_GEN_SEN7_POS                    _SSCG_UL(7)
#define SSCG_GEN_SEN7_LEN                    _SSCG_UL(1)

/* SSCG_GEN_CEN (w) */
#define SSCG_GEN_CEN_POS                     _SSCG_UL(8)
#define SSCG_GEN_CEN_LEN                     _SSCG_UL(1)

/* SSCG_GSRC_SRPN (rw) */
#define SSCG_GSRC_SRPN_POS                   _SSCG_UL(0)
#define SSCG_GSRC_SRPN_LEN                   _SSCG_UL(8)

/* SSCG_GSRC_TOS (rw) */
#define SSCG_GSRC_TOS_POS                    _SSCG_UL(10)
#define SSCG_GSRC_TOS_LEN                    _SSCG_UL(1)

/* SSCG_GSRC_SRE (rw) */
#define SSCG_GSRC_SRE_POS                    _SSCG_UL(12)
#define SSCG_GSRC_SRE_LEN                    _SSCG_UL(1)

/* SSCG_GSRC_SRR (rh) */
#define SSCG_GSRC_SRR_POS                    _SSCG_UL(13)
#define SSCG_GSRC_SRR_LEN                    _SSCG_UL(1)

/* SSCG_GSRC_CLRR (w) */
#define SSCG_GSRC_CLRR_POS                   _SSCG_UL(14)
#define SSCG_GSRC_CLRR_LEN                   _SSCG_UL(1)

/* SSCG_GSRC_SETR (w) */
#define SSCG_GSRC_SETR_POS                   _SSCG_UL(15)
#define SSCG_GSRC_SETR_LEN                   _SSCG_UL(1)

/* SSCG0_CLC_DISR (rw) */
#define SSCG0_CLC_DISR_POS                   _SSCG_UL(0)
#define SSCG0_CLC_DISR_LEN                   _SSCG_UL(1)

/* SSCG0_CLC_DISS (r) */
#define SSCG0_CLC_DISS_POS                   _SSCG_UL(1)
#define SSCG0_CLC_DISS_LEN                   _SSCG_UL(1)

/* SSCG0_CLC_SPEN (rw) */
#define SSCG0_CLC_SPEN_POS                   _SSCG_UL(2)
#define SSCG0_CLC_SPEN_LEN                   _SSCG_UL(1)

/* SSCG0_CLC_EDIS (rw) */
#define SSCG0_CLC_EDIS_POS                   _SSCG_UL(3)
#define SSCG0_CLC_EDIS_LEN                   _SSCG_UL(1)

/* SSCG0_CLC_SBWE (w) */
#define SSCG0_CLC_SBWE_POS                   _SSCG_UL(4)
#define SSCG0_CLC_SBWE_LEN                   _SSCG_UL(1)

/* SSCG0_CLC_FSOE (rw) */
#define SSCG0_CLC_FSOE_POS                   _SSCG_UL(5)
#define SSCG0_CLC_FSOE_LEN                   _SSCG_UL(1)

/* SSCG0_PISEL_MRIS (rw) */
#define SSCG0_PISEL_MRIS_POS                 _SSCG_UL(0)
#define SSCG0_PISEL_MRIS_LEN                 _SSCG_UL(1)

/* SSCG0_PISEL_SRIS (rw) */
#define SSCG0_PISEL_SRIS_POS                 _SSCG_UL(1)
#define SSCG0_PISEL_SRIS_LEN                 _SSCG_UL(1)

/* SSCG0_PISEL_SCIS (rw) */
#define SSCG0_PISEL_SCIS_POS                 _SSCG_UL(2)
#define SSCG0_PISEL_SCIS_LEN                 _SSCG_UL(1)

/* SSCG0_PISEL_SLSIS (rw) */
#define SSCG0_PISEL_SLSIS_POS                _SSCG_UL(3)
#define SSCG0_PISEL_SLSIS_LEN                _SSCG_UL(3)

/* SSCG0_PISEL_STIP (rw) */
#define SSCG0_PISEL_STIP_POS                 _SSCG_UL(8)
#define SSCG0_PISEL_STIP_LEN                 _SSCG_UL(1)

/* SSCG0_ID_MODREV (r) */
#define SSCG0_ID_MODREV_POS                  _SSCG_UL(0)
#define SSCG0_ID_MODREV_LEN                  _SSCG_UL(8)

/* SSCG0_ID_MODTYPE (r) */
#define SSCG0_ID_MODTYPE_POS                 _SSCG_UL(8)
#define SSCG0_ID_MODTYPE_LEN                 _SSCG_UL(8)

/* SSCG0_ID_MODNUM (r) */
#define SSCG0_ID_MODNUM_POS                  _SSCG_UL(16)
#define SSCG0_ID_MODNUM_LEN                  _SSCG_UL(16)

/* SSCG0_FDR_STEP (rw) */
#define SSCG0_FDR_STEP_POS                   _SSCG_UL(0)
#define SSCG0_FDR_STEP_LEN                   _SSCG_UL(10)

/* SSCG0_FDR_FDIS (rw) */
#define SSCG0_FDR_FDIS_POS                   _SSCG_UL(10)
#define SSCG0_FDR_FDIS_LEN                   _SSCG_UL(1)

/* SSCG0_FDR_SM (rw) */
#define SSCG0_FDR_SM_POS                     _SSCG_UL(11)
#define SSCG0_FDR_SM_LEN                     _SSCG_UL(1)

/* SSCG0_FDR_SC (rw) */
#define SSCG0_FDR_SC_POS                     _SSCG_UL(12)
#define SSCG0_FDR_SC_LEN                     _SSCG_UL(2)

/* SSCG0_FDR_DM (rw) */
#define SSCG0_FDR_DM_POS                     _SSCG_UL(14)
#define SSCG0_FDR_DM_LEN                     _SSCG_UL(2)

/* SSCG0_FDR_RESULT (rh) */
#define SSCG0_FDR_RESULT_POS                 _SSCG_UL(16)
#define SSCG0_FDR_RESULT_LEN                 _SSCG_UL(10)

/* SSCG0_FDR_SUSACK (rh) */
#define SSCG0_FDR_SUSACK_POS                 _SSCG_UL(28)
#define SSCG0_FDR_SUSACK_LEN                 _SSCG_UL(1)

/* SSCG0_FDR_SUSREQ (rh) */
#define SSCG0_FDR_SUSREQ_POS                 _SSCG_UL(29)
#define SSCG0_FDR_SUSREQ_LEN                 _SSCG_UL(1)

/* SSCG0_FDR_ENHW (rw) */
#define SSCG0_FDR_ENHW_POS                   _SSCG_UL(30)
#define SSCG0_FDR_ENHW_LEN                   _SSCG_UL(1)

/* SSCG0_FDR_DISCLK (rwh) */
#define SSCG0_FDR_DISCLK_POS                 _SSCG_UL(31)
#define SSCG0_FDR_DISCLK_LEN                 _SSCG_UL(1)

/* SSCG0_CON_BM (rw) */
#define SSCG0_CON_BM_POS                     _SSCG_UL(0)
#define SSCG0_CON_BM_LEN                     _SSCG_UL(4)

/* SSCG0_CON_HB (rw) */
#define SSCG0_CON_HB_POS                     _SSCG_UL(4)
#define SSCG0_CON_HB_LEN                     _SSCG_UL(1)

/* SSCG0_CON_PH (rw) */
#define SSCG0_CON_PH_POS                     _SSCG_UL(5)
#define SSCG0_CON_PH_LEN                     _SSCG_UL(1)

/* SSCG0_CON_PO (rw) */
#define SSCG0_CON_PO_POS                     _SSCG_UL(6)
#define SSCG0_CON_PO_LEN                     _SSCG_UL(1)

/* SSCG0_CON_LB (rw) */
#define SSCG0_CON_LB_POS                     _SSCG_UL(7)
#define SSCG0_CON_LB_LEN                     _SSCG_UL(1)

/* SSCG0_CON_TEN (rw) */
#define SSCG0_CON_TEN_POS                    _SSCG_UL(8)
#define SSCG0_CON_TEN_LEN                    _SSCG_UL(1)

/* SSCG0_CON_REN (rw) */
#define SSCG0_CON_REN_POS                    _SSCG_UL(9)
#define SSCG0_CON_REN_LEN                    _SSCG_UL(1)

/* SSCG0_CON_PEN (rw) */
#define SSCG0_CON_PEN_POS                    _SSCG_UL(10)
#define SSCG0_CON_PEN_LEN                    _SSCG_UL(1)

/* SSCG0_CON_BEN (rw) */
#define SSCG0_CON_BEN_POS                    _SSCG_UL(11)
#define SSCG0_CON_BEN_LEN                    _SSCG_UL(1)

/* SSCG0_CON_AREN (rw) */
#define SSCG0_CON_AREN_POS                   _SSCG_UL(12)
#define SSCG0_CON_AREN_LEN                   _SSCG_UL(1)

/* SSCG0_CON_MS (rw) */
#define SSCG0_CON_MS_POS                     _SSCG_UL(14)
#define SSCG0_CON_MS_LEN                     _SSCG_UL(1)

/* SSCG0_CON_EN (rw) */
#define SSCG0_CON_EN_POS                     _SSCG_UL(15)
#define SSCG0_CON_EN_LEN                     _SSCG_UL(1)

/* SSCG0_CON_PARTEN (rw) */
#define SSCG0_CON_PARTEN_POS                 _SSCG_UL(16)
#define SSCG0_CON_PARTEN_LEN                 _SSCG_UL(1)

/* SSCG0_CON_PARREN (rw) */
#define SSCG0_CON_PARREN_POS                 _SSCG_UL(17)
#define SSCG0_CON_PARREN_LEN                 _SSCG_UL(1)

/* SSCG0_CON_PARTYP (rw) */
#define SSCG0_CON_PARTYP_POS                 _SSCG_UL(18)
#define SSCG0_CON_PARTYP_LEN                 _SSCG_UL(1)

/* SSCG0_CON_PAREEN (rw) */
#define SSCG0_CON_PAREEN_POS                 _SSCG_UL(19)
#define SSCG0_CON_PAREEN_LEN                 _SSCG_UL(1)

/* SSCG0_BR_BR_VALUE (rw) */
#define SSCG0_BR_BR_VALUE_POS                _SSCG_UL(0)
#define SSCG0_BR_BR_VALUE_LEN                _SSCG_UL(16)

/* SSCG0_SSOC_AOL0 (rw) */
#define SSCG0_SSOC_AOL0_POS                  _SSCG_UL(0)
#define SSCG0_SSOC_AOL0_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_AOL1 (rw) */
#define SSCG0_SSOC_AOL1_POS                  _SSCG_UL(1)
#define SSCG0_SSOC_AOL1_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_AOL2 (rw) */
#define SSCG0_SSOC_AOL2_POS                  _SSCG_UL(2)
#define SSCG0_SSOC_AOL2_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_AOL3 (rw) */
#define SSCG0_SSOC_AOL3_POS                  _SSCG_UL(3)
#define SSCG0_SSOC_AOL3_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_AOL4 (rw) */
#define SSCG0_SSOC_AOL4_POS                  _SSCG_UL(4)
#define SSCG0_SSOC_AOL4_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_AOL5 (rw) */
#define SSCG0_SSOC_AOL5_POS                  _SSCG_UL(5)
#define SSCG0_SSOC_AOL5_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_AOL6 (rw) */
#define SSCG0_SSOC_AOL6_POS                  _SSCG_UL(6)
#define SSCG0_SSOC_AOL6_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_AOL7 (rw) */
#define SSCG0_SSOC_AOL7_POS                  _SSCG_UL(7)
#define SSCG0_SSOC_AOL7_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_OEN0 (rw) */
#define SSCG0_SSOC_OEN0_POS                  _SSCG_UL(8)
#define SSCG0_SSOC_OEN0_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_OEN1 (rw) */
#define SSCG0_SSOC_OEN1_POS                  _SSCG_UL(9)
#define SSCG0_SSOC_OEN1_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_OEN2 (rw) */
#define SSCG0_SSOC_OEN2_POS                  _SSCG_UL(10)
#define SSCG0_SSOC_OEN2_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_OEN3 (rw) */
#define SSCG0_SSOC_OEN3_POS                  _SSCG_UL(11)
#define SSCG0_SSOC_OEN3_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_OEN4 (rw) */
#define SSCG0_SSOC_OEN4_POS                  _SSCG_UL(12)
#define SSCG0_SSOC_OEN4_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_OEN5 (rw) */
#define SSCG0_SSOC_OEN5_POS                  _SSCG_UL(13)
#define SSCG0_SSOC_OEN5_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_OEN6 (rw) */
#define SSCG0_SSOC_OEN6_POS                  _SSCG_UL(14)
#define SSCG0_SSOC_OEN6_LEN                  _SSCG_UL(1)

/* SSCG0_SSOC_OEN7 (rw) */
#define SSCG0_SSOC_OEN7_POS                  _SSCG_UL(15)
#define SSCG0_SSOC_OEN7_LEN                  _SSCG_UL(1)

/* SSCG0_SSOTC_LEAD (rw) */
#define SSCG0_SSOTC_LEAD_POS                 _SSCG_UL(0)
#define SSCG0_SSOTC_LEAD_LEN                 _SSCG_UL(2)

/* SSCG0_SSOTC_TRAIL (rw) */
#define SSCG0_SSOTC_TRAIL_POS                _SSCG_UL(2)
#define SSCG0_SSOTC_TRAIL_LEN                _SSCG_UL(2)

/* SSCG0_SSOTC_INACT (rw) */
#define SSCG0_SSOTC_INACT_POS                _SSCG_UL(4)
#define SSCG0_SSOTC_INACT_LEN                _SSCG_UL(2)

/* SSCG0_SSOTC_SLSO7MOD (rw) */
#define SSCG0_SSOTC_SLSO7MOD_POS             _SSCG_UL(8)
#define SSCG0_SSOTC_SLSO7MOD_LEN             _SSCG_UL(1)

/* SSCG0_SSOTC_QSMEN (w) */
#define SSCG0_SSOTC_QSMEN_POS                _SSCG_UL(14)
#define SSCG0_SSOTC_QSMEN_LEN                _SSCG_UL(1)

/* SSCG0_SSOTC_EN (rw) */
#define SSCG0_SSOTC_EN_POS                   _SSCG_UL(15)
#define SSCG0_SSOTC_EN_LEN                   _SSCG_UL(1)

/* SSCG0_TB_TB_VALUE (rw) */
#define SSCG0_TB_TB_VALUE_POS                _SSCG_UL(0)
#define SSCG0_TB_TB_VALUE_LEN                _SSCG_UL(16)

/* SSCG0_RB_RB_VALUE (rh) */
#define SSCG0_RB_RB_VALUE_POS                _SSCG_UL(0)
#define SSCG0_RB_RB_VALUE_LEN                _SSCG_UL(16)

/* SSCG0_STAT_BC (rh) */
#define SSCG0_STAT_BC_POS                    _SSCG_UL(0)
#define SSCG0_STAT_BC_LEN                    _SSCG_UL(4)

/* SSCG0_STAT_PARE (rh) */
#define SSCG0_STAT_PARE_POS                  _SSCG_UL(4)
#define SSCG0_STAT_PARE_LEN                  _SSCG_UL(1)

/* SSCG0_STAT_PARTVAL (rh) */
#define SSCG0_STAT_PARTVAL_POS               _SSCG_UL(5)
#define SSCG0_STAT_PARTVAL_LEN               _SSCG_UL(1)

/* SSCG0_STAT_PARRVAL (rh) */
#define SSCG0_STAT_PARRVAL_POS               _SSCG_UL(6)
#define SSCG0_STAT_PARRVAL_LEN               _SSCG_UL(1)

/* SSCG0_STAT_TE (rh) */
#define SSCG0_STAT_TE_POS                    _SSCG_UL(8)
#define SSCG0_STAT_TE_LEN                    _SSCG_UL(1)

/* SSCG0_STAT_RE (rh) */
#define SSCG0_STAT_RE_POS                    _SSCG_UL(9)
#define SSCG0_STAT_RE_LEN                    _SSCG_UL(1)

/* SSCG0_STAT_PE (rh) */
#define SSCG0_STAT_PE_POS                    _SSCG_UL(10)
#define SSCG0_STAT_PE_LEN                    _SSCG_UL(1)

/* SSCG0_STAT_BE (rh) */
#define SSCG0_STAT_BE_POS                    _SSCG_UL(11)
#define SSCG0_STAT_BE_LEN                    _SSCG_UL(1)

/* SSCG0_STAT_BSY (rh) */
#define SSCG0_STAT_BSY_POS                   _SSCG_UL(12)
#define SSCG0_STAT_BSY_LEN                   _SSCG_UL(1)

/* SSCG0_EFM_CLRPARE (w) */
#define SSCG0_EFM_CLRPARE_POS                _SSCG_UL(0)
#define SSCG0_EFM_CLRPARE_LEN                _SSCG_UL(1)

/* SSCG0_EFM_SETPARE (w) */
#define SSCG0_EFM_SETPARE_POS                _SSCG_UL(4)
#define SSCG0_EFM_SETPARE_LEN                _SSCG_UL(1)

/* SSCG0_EFM_CLRTE (w) */
#define SSCG0_EFM_CLRTE_POS                  _SSCG_UL(8)
#define SSCG0_EFM_CLRTE_LEN                  _SSCG_UL(1)

/* SSCG0_EFM_CLRRE (w) */
#define SSCG0_EFM_CLRRE_POS                  _SSCG_UL(9)
#define SSCG0_EFM_CLRRE_LEN                  _SSCG_UL(1)

/* SSCG0_EFM_CLRPE (w) */
#define SSCG0_EFM_CLRPE_POS                  _SSCG_UL(10)
#define SSCG0_EFM_CLRPE_LEN                  _SSCG_UL(1)

/* SSCG0_EFM_CLRBE (w) */
#define SSCG0_EFM_CLRBE_POS                  _SSCG_UL(11)
#define SSCG0_EFM_CLRBE_LEN                  _SSCG_UL(1)

/* SSCG0_EFM_SETTE (w) */
#define SSCG0_EFM_SETTE_POS                  _SSCG_UL(12)
#define SSCG0_EFM_SETTE_LEN                  _SSCG_UL(1)

/* SSCG0_EFM_SETRE (w) */
#define SSCG0_EFM_SETRE_POS                  _SSCG_UL(13)
#define SSCG0_EFM_SETRE_LEN                  _SSCG_UL(1)

/* SSCG0_EFM_SETPE (w) */
#define SSCG0_EFM_SETPE_POS                  _SSCG_UL(14)
#define SSCG0_EFM_SETPE_LEN                  _SSCG_UL(1)

/* SSCG0_EFM_SETBE (w) */
#define SSCG0_EFM_SETBE_POS                  _SSCG_UL(15)
#define SSCG0_EFM_SETBE_LEN                  _SSCG_UL(1)

/* SSCG0_TB1_TB_VALUE (rwh) */
#define SSCG0_TB1_TB_VALUE_POS               _SSCG_UL(0)
#define SSCG0_TB1_TB_VALUE_LEN               _SSCG_UL(16)

/* SSCG0_TB1SNAP_TB_VALUE (rw) */
#define SSCG0_TB1SNAP_TB_VALUE_POS           _SSCG_UL(0)
#define SSCG0_TB1SNAP_TB_VALUE_LEN           _SSCG_UL(16)

/* SSCG0_RBSNAP_RB_VALUE (rh) */
#define SSCG0_RBSNAP_RB_VALUE_POS            _SSCG_UL(0)
#define SSCG0_RBSNAP_RB_VALUE_LEN            _SSCG_UL(16)

/* SSCG0_GSTAT_CE (rh) */
#define SSCG0_GSTAT_CE_POS                   _SSCG_UL(0)
#define SSCG0_GSTAT_CE_LEN                   _SSCG_UL(1)

/* SSCG0_GSTAT_SCLK (rh) */
#define SSCG0_GSTAT_SCLK_POS                 _SSCG_UL(2)
#define SSCG0_GSTAT_SCLK_LEN                 _SSCG_UL(1)

/* SSCG0_GSTAT_S0 (rh) */
#define SSCG0_GSTAT_S0_POS                   _SSCG_UL(16)
#define SSCG0_GSTAT_S0_LEN                   _SSCG_UL(1)

/* SSCG0_GSTAT_S1 (rh) */
#define SSCG0_GSTAT_S1_POS                   _SSCG_UL(17)
#define SSCG0_GSTAT_S1_LEN                   _SSCG_UL(1)

/* SSCG0_GSTAT_S2 (rh) */
#define SSCG0_GSTAT_S2_POS                   _SSCG_UL(18)
#define SSCG0_GSTAT_S2_LEN                   _SSCG_UL(1)

/* SSCG0_GSTAT_S3 (rh) */
#define SSCG0_GSTAT_S3_POS                   _SSCG_UL(19)
#define SSCG0_GSTAT_S3_LEN                   _SSCG_UL(1)

/* SSCG0_GSTAT_S4 (rh) */
#define SSCG0_GSTAT_S4_POS                   _SSCG_UL(20)
#define SSCG0_GSTAT_S4_LEN                   _SSCG_UL(1)

/* SSCG0_GSTAT_S5 (rh) */
#define SSCG0_GSTAT_S5_POS                   _SSCG_UL(21)
#define SSCG0_GSTAT_S5_LEN                   _SSCG_UL(1)

/* SSCG0_GSTAT_S6 (rh) */
#define SSCG0_GSTAT_S6_POS                   _SSCG_UL(22)
#define SSCG0_GSTAT_S6_LEN                   _SSCG_UL(1)

/* SSCG0_GSTAT_S7 (rh) */
#define SSCG0_GSTAT_S7_POS                   _SSCG_UL(23)
#define SSCG0_GSTAT_S7_LEN                   _SSCG_UL(1)

/* SSCG0_GEFM_CLRCE (w) */
#define SSCG0_GEFM_CLRCE_POS                 _SSCG_UL(0)
#define SSCG0_GEFM_CLRCE_LEN                 _SSCG_UL(1)

/* SSCG0_GEFM_SCTC (w) */
#define SSCG0_GEFM_SCTC_POS                  _SSCG_UL(2)
#define SSCG0_GEFM_SCTC_LEN                  _SSCG_UL(2)

/* SSCG0_GEFM_SETCE (w) */
#define SSCG0_GEFM_SETCE_POS                 _SSCG_UL(8)
#define SSCG0_GEFM_SETCE_LEN                 _SSCG_UL(1)

/* SSCG0_GEFM_SCT0 (w) */
#define SSCG0_GEFM_SCT0_POS                  _SSCG_UL(16)
#define SSCG0_GEFM_SCT0_LEN                  _SSCG_UL(2)

/* SSCG0_GEFM_SCT1 (w) */
#define SSCG0_GEFM_SCT1_POS                  _SSCG_UL(18)
#define SSCG0_GEFM_SCT1_LEN                  _SSCG_UL(2)

/* SSCG0_GEFM_SCT2 (w) */
#define SSCG0_GEFM_SCT2_POS                  _SSCG_UL(20)
#define SSCG0_GEFM_SCT2_LEN                  _SSCG_UL(2)

/* SSCG0_GEFM_SCT3 (w) */
#define SSCG0_GEFM_SCT3_POS                  _SSCG_UL(22)
#define SSCG0_GEFM_SCT3_LEN                  _SSCG_UL(2)

/* SSCG0_GEFM_SCT4 (w) */
#define SSCG0_GEFM_SCT4_POS                  _SSCG_UL(24)
#define SSCG0_GEFM_SCT4_LEN                  _SSCG_UL(2)

/* SSCG0_GEFM_SCT5 (w) */
#define SSCG0_GEFM_SCT5_POS                  _SSCG_UL(26)
#define SSCG0_GEFM_SCT5_LEN                  _SSCG_UL(2)

/* SSCG0_GEFM_SCT6 (w) */
#define SSCG0_GEFM_SCT6_POS                  _SSCG_UL(28)
#define SSCG0_GEFM_SCT6_LEN                  _SSCG_UL(2)

/* SSCG0_GEFM_SCT7 (w) */
#define SSCG0_GEFM_SCT7_POS                  _SSCG_UL(30)
#define SSCG0_GEFM_SCT7_LEN                  _SSCG_UL(2)

/* SSCG0_GEN_SEN0 (rw) */
#define SSCG0_GEN_SEN0_POS                   _SSCG_UL(0)
#define SSCG0_GEN_SEN0_LEN                   _SSCG_UL(1)

/* SSCG0_GEN_SEN1 (rw) */
#define SSCG0_GEN_SEN1_POS                   _SSCG_UL(1)
#define SSCG0_GEN_SEN1_LEN                   _SSCG_UL(1)

/* SSCG0_GEN_SEN2 (rw) */
#define SSCG0_GEN_SEN2_POS                   _SSCG_UL(2)
#define SSCG0_GEN_SEN2_LEN                   _SSCG_UL(1)

/* SSCG0_GEN_SEN3 (rw) */
#define SSCG0_GEN_SEN3_POS                   _SSCG_UL(3)
#define SSCG0_GEN_SEN3_LEN                   _SSCG_UL(1)

/* SSCG0_GEN_SEN4 (rw) */
#define SSCG0_GEN_SEN4_POS                   _SSCG_UL(4)
#define SSCG0_GEN_SEN4_LEN                   _SSCG_UL(1)

/* SSCG0_GEN_SEN5 (rw) */
#define SSCG0_GEN_SEN5_POS                   _SSCG_UL(5)
#define SSCG0_GEN_SEN5_LEN                   _SSCG_UL(1)

/* SSCG0_GEN_SEN6 (rw) */
#define SSCG0_GEN_SEN6_POS                   _SSCG_UL(6)
#define SSCG0_GEN_SEN6_LEN                   _SSCG_UL(1)

/* SSCG0_GEN_SEN7 (rw) */
#define SSCG0_GEN_SEN7_POS                   _SSCG_UL(7)
#define SSCG0_GEN_SEN7_LEN                   _SSCG_UL(1)

/* SSCG0_GEN_CEN (w) */
#define SSCG0_GEN_CEN_POS                    _SSCG_UL(8)
#define SSCG0_GEN_CEN_LEN                    _SSCG_UL(1)

/* SSCG0_GSRC_SRPN (rw) */
#define SSCG0_GSRC_SRPN_POS                  _SSCG_UL(0)
#define SSCG0_GSRC_SRPN_LEN                  _SSCG_UL(8)

/* SSCG0_GSRC_TOS (rw) */
#define SSCG0_GSRC_TOS_POS                   _SSCG_UL(10)
#define SSCG0_GSRC_TOS_LEN                   _SSCG_UL(1)

/* SSCG0_GSRC_SRE (rw) */
#define SSCG0_GSRC_SRE_POS                   _SSCG_UL(12)
#define SSCG0_GSRC_SRE_LEN                   _SSCG_UL(1)

/* SSCG0_GSRC_SRR (rh) */
#define SSCG0_GSRC_SRR_POS                   _SSCG_UL(13)
#define SSCG0_GSRC_SRR_LEN                   _SSCG_UL(1)

/* SSCG0_GSRC_CLRR (w) */
#define SSCG0_GSRC_CLRR_POS                  _SSCG_UL(14)
#define SSCG0_GSRC_CLRR_LEN                  _SSCG_UL(1)

/* SSCG0_GSRC_SETR (w) */
#define SSCG0_GSRC_SETR_POS                  _SSCG_UL(15)
#define SSCG0_GSRC_SETR_LEN                  _SSCG_UL(1)

/* SSCG1_CLC_DISR (rw) */
#define SSCG1_CLC_DISR_POS                   _SSCG_UL(0)
#define SSCG1_CLC_DISR_LEN                   _SSCG_UL(1)

/* SSCG1_CLC_DISS (r) */
#define SSCG1_CLC_DISS_POS                   _SSCG_UL(1)
#define SSCG1_CLC_DISS_LEN                   _SSCG_UL(1)

/* SSCG1_CLC_SPEN (rw) */
#define SSCG1_CLC_SPEN_POS                   _SSCG_UL(2)
#define SSCG1_CLC_SPEN_LEN                   _SSCG_UL(1)

/* SSCG1_CLC_EDIS (rw) */
#define SSCG1_CLC_EDIS_POS                   _SSCG_UL(3)
#define SSCG1_CLC_EDIS_LEN                   _SSCG_UL(1)

/* SSCG1_CLC_SBWE (w) */
#define SSCG1_CLC_SBWE_POS                   _SSCG_UL(4)
#define SSCG1_CLC_SBWE_LEN                   _SSCG_UL(1)

/* SSCG1_CLC_FSOE (rw) */
#define SSCG1_CLC_FSOE_POS                   _SSCG_UL(5)
#define SSCG1_CLC_FSOE_LEN                   _SSCG_UL(1)

/* SSCG1_PISEL_MRIS (rw) */
#define SSCG1_PISEL_MRIS_POS                 _SSCG_UL(0)
#define SSCG1_PISEL_MRIS_LEN                 _SSCG_UL(1)

/* SSCG1_PISEL_SRIS (rw) */
#define SSCG1_PISEL_SRIS_POS                 _SSCG_UL(1)
#define SSCG1_PISEL_SRIS_LEN                 _SSCG_UL(1)

/* SSCG1_PISEL_SCIS (rw) */
#define SSCG1_PISEL_SCIS_POS                 _SSCG_UL(2)
#define SSCG1_PISEL_SCIS_LEN                 _SSCG_UL(1)

/* SSCG1_PISEL_SLSIS (rw) */
#define SSCG1_PISEL_SLSIS_POS                _SSCG_UL(3)
#define SSCG1_PISEL_SLSIS_LEN                _SSCG_UL(3)

/* SSCG1_PISEL_STIP (rw) */
#define SSCG1_PISEL_STIP_POS                 _SSCG_UL(8)
#define SSCG1_PISEL_STIP_LEN                 _SSCG_UL(1)

/* SSCG1_ID_MODREV (r) */
#define SSCG1_ID_MODREV_POS                  _SSCG_UL(0)
#define SSCG1_ID_MODREV_LEN                  _SSCG_UL(8)

/* SSCG1_ID_MODTYPE (r) */
#define SSCG1_ID_MODTYPE_POS                 _SSCG_UL(8)
#define SSCG1_ID_MODTYPE_LEN                 _SSCG_UL(8)

/* SSCG1_ID_MODNUM (r) */
#define SSCG1_ID_MODNUM_POS                  _SSCG_UL(16)
#define SSCG1_ID_MODNUM_LEN                  _SSCG_UL(16)

/* SSCG1_FDR_STEP (rw) */
#define SSCG1_FDR_STEP_POS                   _SSCG_UL(0)
#define SSCG1_FDR_STEP_LEN                   _SSCG_UL(10)

/* SSCG1_FDR_FDIS (rw) */
#define SSCG1_FDR_FDIS_POS                   _SSCG_UL(10)
#define SSCG1_FDR_FDIS_LEN                   _SSCG_UL(1)

/* SSCG1_FDR_SM (rw) */
#define SSCG1_FDR_SM_POS                     _SSCG_UL(11)
#define SSCG1_FDR_SM_LEN                     _SSCG_UL(1)

/* SSCG1_FDR_SC (rw) */
#define SSCG1_FDR_SC_POS                     _SSCG_UL(12)
#define SSCG1_FDR_SC_LEN                     _SSCG_UL(2)

/* SSCG1_FDR_DM (rw) */
#define SSCG1_FDR_DM_POS                     _SSCG_UL(14)
#define SSCG1_FDR_DM_LEN                     _SSCG_UL(2)

/* SSCG1_FDR_RESULT (rh) */
#define SSCG1_FDR_RESULT_POS                 _SSCG_UL(16)
#define SSCG1_FDR_RESULT_LEN                 _SSCG_UL(10)

/* SSCG1_FDR_SUSACK (rh) */
#define SSCG1_FDR_SUSACK_POS                 _SSCG_UL(28)
#define SSCG1_FDR_SUSACK_LEN                 _SSCG_UL(1)

/* SSCG1_FDR_SUSREQ (rh) */
#define SSCG1_FDR_SUSREQ_POS                 _SSCG_UL(29)
#define SSCG1_FDR_SUSREQ_LEN                 _SSCG_UL(1)

/* SSCG1_FDR_ENHW (rw) */
#define SSCG1_FDR_ENHW_POS                   _SSCG_UL(30)
#define SSCG1_FDR_ENHW_LEN                   _SSCG_UL(1)

/* SSCG1_FDR_DISCLK (rwh) */
#define SSCG1_FDR_DISCLK_POS                 _SSCG_UL(31)
#define SSCG1_FDR_DISCLK_LEN                 _SSCG_UL(1)

/* SSCG1_CON_BM (rw) */
#define SSCG1_CON_BM_POS                     _SSCG_UL(0)
#define SSCG1_CON_BM_LEN                     _SSCG_UL(4)

/* SSCG1_CON_HB (rw) */
#define SSCG1_CON_HB_POS                     _SSCG_UL(4)
#define SSCG1_CON_HB_LEN                     _SSCG_UL(1)

/* SSCG1_CON_PH (rw) */
#define SSCG1_CON_PH_POS                     _SSCG_UL(5)
#define SSCG1_CON_PH_LEN                     _SSCG_UL(1)

/* SSCG1_CON_PO (rw) */
#define SSCG1_CON_PO_POS                     _SSCG_UL(6)
#define SSCG1_CON_PO_LEN                     _SSCG_UL(1)

/* SSCG1_CON_LB (rw) */
#define SSCG1_CON_LB_POS                     _SSCG_UL(7)
#define SSCG1_CON_LB_LEN                     _SSCG_UL(1)

/* SSCG1_CON_TEN (rw) */
#define SSCG1_CON_TEN_POS                    _SSCG_UL(8)
#define SSCG1_CON_TEN_LEN                    _SSCG_UL(1)

/* SSCG1_CON_REN (rw) */
#define SSCG1_CON_REN_POS                    _SSCG_UL(9)
#define SSCG1_CON_REN_LEN                    _SSCG_UL(1)

/* SSCG1_CON_PEN (rw) */
#define SSCG1_CON_PEN_POS                    _SSCG_UL(10)
#define SSCG1_CON_PEN_LEN                    _SSCG_UL(1)

/* SSCG1_CON_BEN (rw) */
#define SSCG1_CON_BEN_POS                    _SSCG_UL(11)
#define SSCG1_CON_BEN_LEN                    _SSCG_UL(1)

/* SSCG1_CON_AREN (rw) */
#define SSCG1_CON_AREN_POS                   _SSCG_UL(12)
#define SSCG1_CON_AREN_LEN                   _SSCG_UL(1)

/* SSCG1_CON_MS (rw) */
#define SSCG1_CON_MS_POS                     _SSCG_UL(14)
#define SSCG1_CON_MS_LEN                     _SSCG_UL(1)

/* SSCG1_CON_EN (rw) */
#define SSCG1_CON_EN_POS                     _SSCG_UL(15)
#define SSCG1_CON_EN_LEN                     _SSCG_UL(1)

/* SSCG1_CON_PARTEN (rw) */
#define SSCG1_CON_PARTEN_POS                 _SSCG_UL(16)
#define SSCG1_CON_PARTEN_LEN                 _SSCG_UL(1)

/* SSCG1_CON_PARREN (rw) */
#define SSCG1_CON_PARREN_POS                 _SSCG_UL(17)
#define SSCG1_CON_PARREN_LEN                 _SSCG_UL(1)

/* SSCG1_CON_PARTYP (rw) */
#define SSCG1_CON_PARTYP_POS                 _SSCG_UL(18)
#define SSCG1_CON_PARTYP_LEN                 _SSCG_UL(1)

/* SSCG1_CON_PAREEN (rw) */
#define SSCG1_CON_PAREEN_POS                 _SSCG_UL(19)
#define SSCG1_CON_PAREEN_LEN                 _SSCG_UL(1)

/* SSCG1_BR_BR_VALUE (rw) */
#define SSCG1_BR_BR_VALUE_POS                _SSCG_UL(0)
#define SSCG1_BR_BR_VALUE_LEN                _SSCG_UL(16)

/* SSCG1_SSOC_AOL0 (rw) */
#define SSCG1_SSOC_AOL0_POS                  _SSCG_UL(0)
#define SSCG1_SSOC_AOL0_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_AOL1 (rw) */
#define SSCG1_SSOC_AOL1_POS                  _SSCG_UL(1)
#define SSCG1_SSOC_AOL1_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_AOL2 (rw) */
#define SSCG1_SSOC_AOL2_POS                  _SSCG_UL(2)
#define SSCG1_SSOC_AOL2_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_AOL3 (rw) */
#define SSCG1_SSOC_AOL3_POS                  _SSCG_UL(3)
#define SSCG1_SSOC_AOL3_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_AOL4 (rw) */
#define SSCG1_SSOC_AOL4_POS                  _SSCG_UL(4)
#define SSCG1_SSOC_AOL4_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_AOL5 (rw) */
#define SSCG1_SSOC_AOL5_POS                  _SSCG_UL(5)
#define SSCG1_SSOC_AOL5_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_AOL6 (rw) */
#define SSCG1_SSOC_AOL6_POS                  _SSCG_UL(6)
#define SSCG1_SSOC_AOL6_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_AOL7 (rw) */
#define SSCG1_SSOC_AOL7_POS                  _SSCG_UL(7)
#define SSCG1_SSOC_AOL7_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_OEN0 (rw) */
#define SSCG1_SSOC_OEN0_POS                  _SSCG_UL(8)
#define SSCG1_SSOC_OEN0_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_OEN1 (rw) */
#define SSCG1_SSOC_OEN1_POS                  _SSCG_UL(9)
#define SSCG1_SSOC_OEN1_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_OEN2 (rw) */
#define SSCG1_SSOC_OEN2_POS                  _SSCG_UL(10)
#define SSCG1_SSOC_OEN2_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_OEN3 (rw) */
#define SSCG1_SSOC_OEN3_POS                  _SSCG_UL(11)
#define SSCG1_SSOC_OEN3_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_OEN4 (rw) */
#define SSCG1_SSOC_OEN4_POS                  _SSCG_UL(12)
#define SSCG1_SSOC_OEN4_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_OEN5 (rw) */
#define SSCG1_SSOC_OEN5_POS                  _SSCG_UL(13)
#define SSCG1_SSOC_OEN5_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_OEN6 (rw) */
#define SSCG1_SSOC_OEN6_POS                  _SSCG_UL(14)
#define SSCG1_SSOC_OEN6_LEN                  _SSCG_UL(1)

/* SSCG1_SSOC_OEN7 (rw) */
#define SSCG1_SSOC_OEN7_POS                  _SSCG_UL(15)
#define SSCG1_SSOC_OEN7_LEN                  _SSCG_UL(1)

/* SSCG1_SSOTC_LEAD (rw) */
#define SSCG1_SSOTC_LEAD_POS                 _SSCG_UL(0)
#define SSCG1_SSOTC_LEAD_LEN                 _SSCG_UL(2)

/* SSCG1_SSOTC_TRAIL (rw) */
#define SSCG1_SSOTC_TRAIL_POS                _SSCG_UL(2)
#define SSCG1_SSOTC_TRAIL_LEN                _SSCG_UL(2)

/* SSCG1_SSOTC_INACT (rw) */
#define SSCG1_SSOTC_INACT_POS                _SSCG_UL(4)
#define SSCG1_SSOTC_INACT_LEN                _SSCG_UL(2)

/* SSCG1_SSOTC_SLSO7MOD (rw) */
#define SSCG1_SSOTC_SLSO7MOD_POS             _SSCG_UL(8)
#define SSCG1_SSOTC_SLSO7MOD_LEN             _SSCG_UL(1)

/* SSCG1_SSOTC_QSMEN (w) */
#define SSCG1_SSOTC_QSMEN_POS                _SSCG_UL(14)
#define SSCG1_SSOTC_QSMEN_LEN                _SSCG_UL(1)

/* SSCG1_SSOTC_EN (rw) */
#define SSCG1_SSOTC_EN_POS                   _SSCG_UL(15)
#define SSCG1_SSOTC_EN_LEN                   _SSCG_UL(1)

/* SSCG1_TB_TB_VALUE (rw) */
#define SSCG1_TB_TB_VALUE_POS                _SSCG_UL(0)
#define SSCG1_TB_TB_VALUE_LEN                _SSCG_UL(16)

/* SSCG1_RB_RB_VALUE (rh) */
#define SSCG1_RB_RB_VALUE_POS                _SSCG_UL(0)
#define SSCG1_RB_RB_VALUE_LEN                _SSCG_UL(16)

/* SSCG1_STAT_BC (rh) */
#define SSCG1_STAT_BC_POS                    _SSCG_UL(0)
#define SSCG1_STAT_BC_LEN                    _SSCG_UL(4)

/* SSCG1_STAT_PARE (rh) */
#define SSCG1_STAT_PARE_POS                  _SSCG_UL(4)
#define SSCG1_STAT_PARE_LEN                  _SSCG_UL(1)

/* SSCG1_STAT_PARTVAL (rh) */
#define SSCG1_STAT_PARTVAL_POS               _SSCG_UL(5)
#define SSCG1_STAT_PARTVAL_LEN               _SSCG_UL(1)

/* SSCG1_STAT_PARRVAL (rh) */
#define SSCG1_STAT_PARRVAL_POS               _SSCG_UL(6)
#define SSCG1_STAT_PARRVAL_LEN               _SSCG_UL(1)

/* SSCG1_STAT_TE (rh) */
#define SSCG1_STAT_TE_POS                    _SSCG_UL(8)
#define SSCG1_STAT_TE_LEN                    _SSCG_UL(1)

/* SSCG1_STAT_RE (rh) */
#define SSCG1_STAT_RE_POS                    _SSCG_UL(9)
#define SSCG1_STAT_RE_LEN                    _SSCG_UL(1)

/* SSCG1_STAT_PE (rh) */
#define SSCG1_STAT_PE_POS                    _SSCG_UL(10)
#define SSCG1_STAT_PE_LEN                    _SSCG_UL(1)

/* SSCG1_STAT_BE (rh) */
#define SSCG1_STAT_BE_POS                    _SSCG_UL(11)
#define SSCG1_STAT_BE_LEN                    _SSCG_UL(1)

/* SSCG1_STAT_BSY (rh) */
#define SSCG1_STAT_BSY_POS                   _SSCG_UL(12)
#define SSCG1_STAT_BSY_LEN                   _SSCG_UL(1)

/* SSCG1_EFM_CLRPARE (w) */
#define SSCG1_EFM_CLRPARE_POS                _SSCG_UL(0)
#define SSCG1_EFM_CLRPARE_LEN                _SSCG_UL(1)

/* SSCG1_EFM_SETPARE (w) */
#define SSCG1_EFM_SETPARE_POS                _SSCG_UL(4)
#define SSCG1_EFM_SETPARE_LEN                _SSCG_UL(1)

/* SSCG1_EFM_CLRTE (w) */
#define SSCG1_EFM_CLRTE_POS                  _SSCG_UL(8)
#define SSCG1_EFM_CLRTE_LEN                  _SSCG_UL(1)

/* SSCG1_EFM_CLRRE (w) */
#define SSCG1_EFM_CLRRE_POS                  _SSCG_UL(9)
#define SSCG1_EFM_CLRRE_LEN                  _SSCG_UL(1)

/* SSCG1_EFM_CLRPE (w) */
#define SSCG1_EFM_CLRPE_POS                  _SSCG_UL(10)
#define SSCG1_EFM_CLRPE_LEN                  _SSCG_UL(1)

/* SSCG1_EFM_CLRBE (w) */
#define SSCG1_EFM_CLRBE_POS                  _SSCG_UL(11)
#define SSCG1_EFM_CLRBE_LEN                  _SSCG_UL(1)

/* SSCG1_EFM_SETTE (w) */
#define SSCG1_EFM_SETTE_POS                  _SSCG_UL(12)
#define SSCG1_EFM_SETTE_LEN                  _SSCG_UL(1)

/* SSCG1_EFM_SETRE (w) */
#define SSCG1_EFM_SETRE_POS                  _SSCG_UL(13)
#define SSCG1_EFM_SETRE_LEN                  _SSCG_UL(1)

/* SSCG1_EFM_SETPE (w) */
#define SSCG1_EFM_SETPE_POS                  _SSCG_UL(14)
#define SSCG1_EFM_SETPE_LEN                  _SSCG_UL(1)

/* SSCG1_EFM_SETBE (w) */
#define SSCG1_EFM_SETBE_POS                  _SSCG_UL(15)
#define SSCG1_EFM_SETBE_LEN                  _SSCG_UL(1)

/* SSCG1_TB1_TB_VALUE (rwh) */
#define SSCG1_TB1_TB_VALUE_POS               _SSCG_UL(0)
#define SSCG1_TB1_TB_VALUE_LEN               _SSCG_UL(16)

/* SSCG1_TB1SNAP_TB_VALUE (rw) */
#define SSCG1_TB1SNAP_TB_VALUE_POS           _SSCG_UL(0)
#define SSCG1_TB1SNAP_TB_VALUE_LEN           _SSCG_UL(16)

/* SSCG1_RBSNAP_RB_VALUE (rh) */
#define SSCG1_RBSNAP_RB_VALUE_POS            _SSCG_UL(0)
#define SSCG1_RBSNAP_RB_VALUE_LEN            _SSCG_UL(16)

/* SSCG1_GSTAT_CE (rh) */
#define SSCG1_GSTAT_CE_POS                   _SSCG_UL(0)
#define SSCG1_GSTAT_CE_LEN                   _SSCG_UL(1)

/* SSCG1_GSTAT_SCLK (rh) */
#define SSCG1_GSTAT_SCLK_POS                 _SSCG_UL(2)
#define SSCG1_GSTAT_SCLK_LEN                 _SSCG_UL(1)

/* SSCG1_GSTAT_S0 (rh) */
#define SSCG1_GSTAT_S0_POS                   _SSCG_UL(16)
#define SSCG1_GSTAT_S0_LEN                   _SSCG_UL(1)

/* SSCG1_GSTAT_S1 (rh) */
#define SSCG1_GSTAT_S1_POS                   _SSCG_UL(17)
#define SSCG1_GSTAT_S1_LEN                   _SSCG_UL(1)

/* SSCG1_GSTAT_S2 (rh) */
#define SSCG1_GSTAT_S2_POS                   _SSCG_UL(18)
#define SSCG1_GSTAT_S2_LEN                   _SSCG_UL(1)

/* SSCG1_GSTAT_S3 (rh) */
#define SSCG1_GSTAT_S3_POS                   _SSCG_UL(19)
#define SSCG1_GSTAT_S3_LEN                   _SSCG_UL(1)

/* SSCG1_GSTAT_S4 (rh) */
#define SSCG1_GSTAT_S4_POS                   _SSCG_UL(20)
#define SSCG1_GSTAT_S4_LEN                   _SSCG_UL(1)

/* SSCG1_GSTAT_S5 (rh) */
#define SSCG1_GSTAT_S5_POS                   _SSCG_UL(21)
#define SSCG1_GSTAT_S5_LEN                   _SSCG_UL(1)

/* SSCG1_GSTAT_S6 (rh) */
#define SSCG1_GSTAT_S6_POS                   _SSCG_UL(22)
#define SSCG1_GSTAT_S6_LEN                   _SSCG_UL(1)

/* SSCG1_GSTAT_S7 (rh) */
#define SSCG1_GSTAT_S7_POS                   _SSCG_UL(23)
#define SSCG1_GSTAT_S7_LEN                   _SSCG_UL(1)

/* SSCG1_GEFM_CLRCE (w) */
#define SSCG1_GEFM_CLRCE_POS                 _SSCG_UL(0)
#define SSCG1_GEFM_CLRCE_LEN                 _SSCG_UL(1)

/* SSCG1_GEFM_SCTC (w) */
#define SSCG1_GEFM_SCTC_POS                  _SSCG_UL(2)
#define SSCG1_GEFM_SCTC_LEN                  _SSCG_UL(2)

/* SSCG1_GEFM_SETCE (w) */
#define SSCG1_GEFM_SETCE_POS                 _SSCG_UL(8)
#define SSCG1_GEFM_SETCE_LEN                 _SSCG_UL(1)

/* SSCG1_GEFM_SCT0 (w) */
#define SSCG1_GEFM_SCT0_POS                  _SSCG_UL(16)
#define SSCG1_GEFM_SCT0_LEN                  _SSCG_UL(2)

/* SSCG1_GEFM_SCT1 (w) */
#define SSCG1_GEFM_SCT1_POS                  _SSCG_UL(18)
#define SSCG1_GEFM_SCT1_LEN                  _SSCG_UL(2)

/* SSCG1_GEFM_SCT2 (w) */
#define SSCG1_GEFM_SCT2_POS                  _SSCG_UL(20)
#define SSCG1_GEFM_SCT2_LEN                  _SSCG_UL(2)

/* SSCG1_GEFM_SCT3 (w) */
#define SSCG1_GEFM_SCT3_POS                  _SSCG_UL(22)
#define SSCG1_GEFM_SCT3_LEN                  _SSCG_UL(2)

/* SSCG1_GEFM_SCT4 (w) */
#define SSCG1_GEFM_SCT4_POS                  _SSCG_UL(24)
#define SSCG1_GEFM_SCT4_LEN                  _SSCG_UL(2)

/* SSCG1_GEFM_SCT5 (w) */
#define SSCG1_GEFM_SCT5_POS                  _SSCG_UL(26)
#define SSCG1_GEFM_SCT5_LEN                  _SSCG_UL(2)

/* SSCG1_GEFM_SCT6 (w) */
#define SSCG1_GEFM_SCT6_POS                  _SSCG_UL(28)
#define SSCG1_GEFM_SCT6_LEN                  _SSCG_UL(2)

/* SSCG1_GEFM_SCT7 (w) */
#define SSCG1_GEFM_SCT7_POS                  _SSCG_UL(30)
#define SSCG1_GEFM_SCT7_LEN                  _SSCG_UL(2)

/* SSCG1_GEN_SEN0 (rw) */
#define SSCG1_GEN_SEN0_POS                   _SSCG_UL(0)
#define SSCG1_GEN_SEN0_LEN                   _SSCG_UL(1)

/* SSCG1_GEN_SEN1 (rw) */
#define SSCG1_GEN_SEN1_POS                   _SSCG_UL(1)
#define SSCG1_GEN_SEN1_LEN                   _SSCG_UL(1)

/* SSCG1_GEN_SEN2 (rw) */
#define SSCG1_GEN_SEN2_POS                   _SSCG_UL(2)
#define SSCG1_GEN_SEN2_LEN                   _SSCG_UL(1)

/* SSCG1_GEN_SEN3 (rw) */
#define SSCG1_GEN_SEN3_POS                   _SSCG_UL(3)
#define SSCG1_GEN_SEN3_LEN                   _SSCG_UL(1)

/* SSCG1_GEN_SEN4 (rw) */
#define SSCG1_GEN_SEN4_POS                   _SSCG_UL(4)
#define SSCG1_GEN_SEN4_LEN                   _SSCG_UL(1)

/* SSCG1_GEN_SEN5 (rw) */
#define SSCG1_GEN_SEN5_POS                   _SSCG_UL(5)
#define SSCG1_GEN_SEN5_LEN                   _SSCG_UL(1)

/* SSCG1_GEN_SEN6 (rw) */
#define SSCG1_GEN_SEN6_POS                   _SSCG_UL(6)
#define SSCG1_GEN_SEN6_LEN                   _SSCG_UL(1)

/* SSCG1_GEN_SEN7 (rw) */
#define SSCG1_GEN_SEN7_POS                   _SSCG_UL(7)
#define SSCG1_GEN_SEN7_LEN                   _SSCG_UL(1)

/* SSCG1_GEN_CEN (w) */
#define SSCG1_GEN_CEN_POS                    _SSCG_UL(8)
#define SSCG1_GEN_CEN_LEN                    _SSCG_UL(1)

/* SSCG1_GSRC_SRPN (rw) */
#define SSCG1_GSRC_SRPN_POS                  _SSCG_UL(0)
#define SSCG1_GSRC_SRPN_LEN                  _SSCG_UL(8)

/* SSCG1_GSRC_TOS (rw) */
#define SSCG1_GSRC_TOS_POS                   _SSCG_UL(10)
#define SSCG1_GSRC_TOS_LEN                   _SSCG_UL(1)

/* SSCG1_GSRC_SRE (rw) */
#define SSCG1_GSRC_SRE_POS                   _SSCG_UL(12)
#define SSCG1_GSRC_SRE_LEN                   _SSCG_UL(1)

/* SSCG1_GSRC_SRR (rh) */
#define SSCG1_GSRC_SRR_POS                   _SSCG_UL(13)
#define SSCG1_GSRC_SRR_LEN                   _SSCG_UL(1)

/* SSCG1_GSRC_CLRR (w) */
#define SSCG1_GSRC_CLRR_POS                  _SSCG_UL(14)
#define SSCG1_GSRC_CLRR_LEN                  _SSCG_UL(1)

/* SSCG1_GSRC_SETR (w) */
#define SSCG1_GSRC_SETR_POS                  _SSCG_UL(15)
#define SSCG1_GSRC_SETR_LEN                  _SSCG_UL(1)

/* SSCG2_CLC_DISR (rw) */
#define SSCG2_CLC_DISR_POS                   _SSCG_UL(0)
#define SSCG2_CLC_DISR_LEN                   _SSCG_UL(1)

/* SSCG2_CLC_DISS (r) */
#define SSCG2_CLC_DISS_POS                   _SSCG_UL(1)
#define SSCG2_CLC_DISS_LEN                   _SSCG_UL(1)

/* SSCG2_CLC_SPEN (rw) */
#define SSCG2_CLC_SPEN_POS                   _SSCG_UL(2)
#define SSCG2_CLC_SPEN_LEN                   _SSCG_UL(1)

/* SSCG2_CLC_EDIS (rw) */
#define SSCG2_CLC_EDIS_POS                   _SSCG_UL(3)
#define SSCG2_CLC_EDIS_LEN                   _SSCG_UL(1)

/* SSCG2_CLC_SBWE (w) */
#define SSCG2_CLC_SBWE_POS                   _SSCG_UL(4)
#define SSCG2_CLC_SBWE_LEN                   _SSCG_UL(1)

/* SSCG2_CLC_FSOE (rw) */
#define SSCG2_CLC_FSOE_POS                   _SSCG_UL(5)
#define SSCG2_CLC_FSOE_LEN                   _SSCG_UL(1)

/* SSCG2_PISEL_MRIS (rw) */
#define SSCG2_PISEL_MRIS_POS                 _SSCG_UL(0)
#define SSCG2_PISEL_MRIS_LEN                 _SSCG_UL(1)

/* SSCG2_PISEL_SRIS (rw) */
#define SSCG2_PISEL_SRIS_POS                 _SSCG_UL(1)
#define SSCG2_PISEL_SRIS_LEN                 _SSCG_UL(1)

/* SSCG2_PISEL_SCIS (rw) */
#define SSCG2_PISEL_SCIS_POS                 _SSCG_UL(2)
#define SSCG2_PISEL_SCIS_LEN                 _SSCG_UL(1)

/* SSCG2_PISEL_SLSIS (rw) */
#define SSCG2_PISEL_SLSIS_POS                _SSCG_UL(3)
#define SSCG2_PISEL_SLSIS_LEN                _SSCG_UL(3)

/* SSCG2_PISEL_STIP (rw) */
#define SSCG2_PISEL_STIP_POS                 _SSCG_UL(8)
#define SSCG2_PISEL_STIP_LEN                 _SSCG_UL(1)

/* SSCG2_ID_MODREV (r) */
#define SSCG2_ID_MODREV_POS                  _SSCG_UL(0)
#define SSCG2_ID_MODREV_LEN                  _SSCG_UL(8)

/* SSCG2_ID_MODTYPE (r) */
#define SSCG2_ID_MODTYPE_POS                 _SSCG_UL(8)
#define SSCG2_ID_MODTYPE_LEN                 _SSCG_UL(8)

/* SSCG2_ID_MODNUM (r) */
#define SSCG2_ID_MODNUM_POS                  _SSCG_UL(16)
#define SSCG2_ID_MODNUM_LEN                  _SSCG_UL(16)

/* SSCG2_FDR_STEP (rw) */
#define SSCG2_FDR_STEP_POS                   _SSCG_UL(0)
#define SSCG2_FDR_STEP_LEN                   _SSCG_UL(10)

/* SSCG2_FDR_FDIS (rw) */
#define SSCG2_FDR_FDIS_POS                   _SSCG_UL(10)
#define SSCG2_FDR_FDIS_LEN                   _SSCG_UL(1)

/* SSCG2_FDR_SM (rw) */
#define SSCG2_FDR_SM_POS                     _SSCG_UL(11)
#define SSCG2_FDR_SM_LEN                     _SSCG_UL(1)

/* SSCG2_FDR_SC (rw) */
#define SSCG2_FDR_SC_POS                     _SSCG_UL(12)
#define SSCG2_FDR_SC_LEN                     _SSCG_UL(2)

/* SSCG2_FDR_DM (rw) */
#define SSCG2_FDR_DM_POS                     _SSCG_UL(14)
#define SSCG2_FDR_DM_LEN                     _SSCG_UL(2)

/* SSCG2_FDR_RESULT (rh) */
#define SSCG2_FDR_RESULT_POS                 _SSCG_UL(16)
#define SSCG2_FDR_RESULT_LEN                 _SSCG_UL(10)

/* SSCG2_FDR_SUSACK (rh) */
#define SSCG2_FDR_SUSACK_POS                 _SSCG_UL(28)
#define SSCG2_FDR_SUSACK_LEN                 _SSCG_UL(1)

/* SSCG2_FDR_SUSREQ (rh) */
#define SSCG2_FDR_SUSREQ_POS                 _SSCG_UL(29)
#define SSCG2_FDR_SUSREQ_LEN                 _SSCG_UL(1)

/* SSCG2_FDR_ENHW (rw) */
#define SSCG2_FDR_ENHW_POS                   _SSCG_UL(30)
#define SSCG2_FDR_ENHW_LEN                   _SSCG_UL(1)

/* SSCG2_FDR_DISCLK (rwh) */
#define SSCG2_FDR_DISCLK_POS                 _SSCG_UL(31)
#define SSCG2_FDR_DISCLK_LEN                 _SSCG_UL(1)

/* SSCG2_CON_BM (rw) */
#define SSCG2_CON_BM_POS                     _SSCG_UL(0)
#define SSCG2_CON_BM_LEN                     _SSCG_UL(4)

/* SSCG2_CON_HB (rw) */
#define SSCG2_CON_HB_POS                     _SSCG_UL(4)
#define SSCG2_CON_HB_LEN                     _SSCG_UL(1)

/* SSCG2_CON_PH (rw) */
#define SSCG2_CON_PH_POS                     _SSCG_UL(5)
#define SSCG2_CON_PH_LEN                     _SSCG_UL(1)

/* SSCG2_CON_PO (rw) */
#define SSCG2_CON_PO_POS                     _SSCG_UL(6)
#define SSCG2_CON_PO_LEN                     _SSCG_UL(1)

/* SSCG2_CON_LB (rw) */
#define SSCG2_CON_LB_POS                     _SSCG_UL(7)
#define SSCG2_CON_LB_LEN                     _SSCG_UL(1)

/* SSCG2_CON_TEN (rw) */
#define SSCG2_CON_TEN_POS                    _SSCG_UL(8)
#define SSCG2_CON_TEN_LEN                    _SSCG_UL(1)

/* SSCG2_CON_REN (rw) */
#define SSCG2_CON_REN_POS                    _SSCG_UL(9)
#define SSCG2_CON_REN_LEN                    _SSCG_UL(1)

/* SSCG2_CON_PEN (rw) */
#define SSCG2_CON_PEN_POS                    _SSCG_UL(10)
#define SSCG2_CON_PEN_LEN                    _SSCG_UL(1)

/* SSCG2_CON_BEN (rw) */
#define SSCG2_CON_BEN_POS                    _SSCG_UL(11)
#define SSCG2_CON_BEN_LEN                    _SSCG_UL(1)

/* SSCG2_CON_AREN (rw) */
#define SSCG2_CON_AREN_POS                   _SSCG_UL(12)
#define SSCG2_CON_AREN_LEN                   _SSCG_UL(1)

/* SSCG2_CON_MS (rw) */
#define SSCG2_CON_MS_POS                     _SSCG_UL(14)
#define SSCG2_CON_MS_LEN                     _SSCG_UL(1)

/* SSCG2_CON_EN (rw) */
#define SSCG2_CON_EN_POS                     _SSCG_UL(15)
#define SSCG2_CON_EN_LEN                     _SSCG_UL(1)

/* SSCG2_CON_PARTEN (rw) */
#define SSCG2_CON_PARTEN_POS                 _SSCG_UL(16)
#define SSCG2_CON_PARTEN_LEN                 _SSCG_UL(1)

/* SSCG2_CON_PARREN (rw) */
#define SSCG2_CON_PARREN_POS                 _SSCG_UL(17)
#define SSCG2_CON_PARREN_LEN                 _SSCG_UL(1)

/* SSCG2_CON_PARTYP (rw) */
#define SSCG2_CON_PARTYP_POS                 _SSCG_UL(18)
#define SSCG2_CON_PARTYP_LEN                 _SSCG_UL(1)

/* SSCG2_CON_PAREEN (rw) */
#define SSCG2_CON_PAREEN_POS                 _SSCG_UL(19)
#define SSCG2_CON_PAREEN_LEN                 _SSCG_UL(1)

/* SSCG2_BR_BR_VALUE (rw) */
#define SSCG2_BR_BR_VALUE_POS                _SSCG_UL(0)
#define SSCG2_BR_BR_VALUE_LEN                _SSCG_UL(16)

/* SSCG2_SSOC_AOL0 (rw) */
#define SSCG2_SSOC_AOL0_POS                  _SSCG_UL(0)
#define SSCG2_SSOC_AOL0_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_AOL1 (rw) */
#define SSCG2_SSOC_AOL1_POS                  _SSCG_UL(1)
#define SSCG2_SSOC_AOL1_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_AOL2 (rw) */
#define SSCG2_SSOC_AOL2_POS                  _SSCG_UL(2)
#define SSCG2_SSOC_AOL2_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_AOL3 (rw) */
#define SSCG2_SSOC_AOL3_POS                  _SSCG_UL(3)
#define SSCG2_SSOC_AOL3_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_AOL4 (rw) */
#define SSCG2_SSOC_AOL4_POS                  _SSCG_UL(4)
#define SSCG2_SSOC_AOL4_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_AOL5 (rw) */
#define SSCG2_SSOC_AOL5_POS                  _SSCG_UL(5)
#define SSCG2_SSOC_AOL5_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_AOL6 (rw) */
#define SSCG2_SSOC_AOL6_POS                  _SSCG_UL(6)
#define SSCG2_SSOC_AOL6_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_AOL7 (rw) */
#define SSCG2_SSOC_AOL7_POS                  _SSCG_UL(7)
#define SSCG2_SSOC_AOL7_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_OEN0 (rw) */
#define SSCG2_SSOC_OEN0_POS                  _SSCG_UL(8)
#define SSCG2_SSOC_OEN0_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_OEN1 (rw) */
#define SSCG2_SSOC_OEN1_POS                  _SSCG_UL(9)
#define SSCG2_SSOC_OEN1_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_OEN2 (rw) */
#define SSCG2_SSOC_OEN2_POS                  _SSCG_UL(10)
#define SSCG2_SSOC_OEN2_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_OEN3 (rw) */
#define SSCG2_SSOC_OEN3_POS                  _SSCG_UL(11)
#define SSCG2_SSOC_OEN3_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_OEN4 (rw) */
#define SSCG2_SSOC_OEN4_POS                  _SSCG_UL(12)
#define SSCG2_SSOC_OEN4_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_OEN5 (rw) */
#define SSCG2_SSOC_OEN5_POS                  _SSCG_UL(13)
#define SSCG2_SSOC_OEN5_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_OEN6 (rw) */
#define SSCG2_SSOC_OEN6_POS                  _SSCG_UL(14)
#define SSCG2_SSOC_OEN6_LEN                  _SSCG_UL(1)

/* SSCG2_SSOC_OEN7 (rw) */
#define SSCG2_SSOC_OEN7_POS                  _SSCG_UL(15)
#define SSCG2_SSOC_OEN7_LEN                  _SSCG_UL(1)

/* SSCG2_SSOTC_LEAD (rw) */
#define SSCG2_SSOTC_LEAD_POS                 _SSCG_UL(0)
#define SSCG2_SSOTC_LEAD_LEN                 _SSCG_UL(2)

/* SSCG2_SSOTC_TRAIL (rw) */
#define SSCG2_SSOTC_TRAIL_POS                _SSCG_UL(2)
#define SSCG2_SSOTC_TRAIL_LEN                _SSCG_UL(2)

/* SSCG2_SSOTC_INACT (rw) */
#define SSCG2_SSOTC_INACT_POS                _SSCG_UL(4)
#define SSCG2_SSOTC_INACT_LEN                _SSCG_UL(2)

/* SSCG2_SSOTC_SLSO7MOD (rw) */
#define SSCG2_SSOTC_SLSO7MOD_POS             _SSCG_UL(8)
#define SSCG2_SSOTC_SLSO7MOD_LEN             _SSCG_UL(1)

/* SSCG2_SSOTC_QSMEN (w) */
#define SSCG2_SSOTC_QSMEN_POS                _SSCG_UL(14)
#define SSCG2_SSOTC_QSMEN_LEN                _SSCG_UL(1)

/* SSCG2_SSOTC_EN (rw) */
#define SSCG2_SSOTC_EN_POS                   _SSCG_UL(15)
#define SSCG2_SSOTC_EN_LEN                   _SSCG_UL(1)

/* SSCG2_TB_TB_VALUE (rw) */
#define SSCG2_TB_TB_VALUE_POS                _SSCG_UL(0)
#define SSCG2_TB_TB_VALUE_LEN                _SSCG_UL(16)

/* SSCG2_RB_RB_VALUE (rh) */
#define SSCG2_RB_RB_VALUE_POS                _SSCG_UL(0)
#define SSCG2_RB_RB_VALUE_LEN                _SSCG_UL(16)

/* SSCG2_STAT_BC (rh) */
#define SSCG2_STAT_BC_POS                    _SSCG_UL(0)
#define SSCG2_STAT_BC_LEN                    _SSCG_UL(4)

/* SSCG2_STAT_PARE (rh) */
#define SSCG2_STAT_PARE_POS                  _SSCG_UL(4)
#define SSCG2_STAT_PARE_LEN                  _SSCG_UL(1)

/* SSCG2_STAT_PARTVAL (rh) */
#define SSCG2_STAT_PARTVAL_POS               _SSCG_UL(5)
#define SSCG2_STAT_PARTVAL_LEN               _SSCG_UL(1)

/* SSCG2_STAT_PARRVAL (rh) */
#define SSCG2_STAT_PARRVAL_POS               _SSCG_UL(6)
#define SSCG2_STAT_PARRVAL_LEN               _SSCG_UL(1)

/* SSCG2_STAT_TE (rh) */
#define SSCG2_STAT_TE_POS                    _SSCG_UL(8)
#define SSCG2_STAT_TE_LEN                    _SSCG_UL(1)

/* SSCG2_STAT_RE (rh) */
#define SSCG2_STAT_RE_POS                    _SSCG_UL(9)
#define SSCG2_STAT_RE_LEN                    _SSCG_UL(1)

/* SSCG2_STAT_PE (rh) */
#define SSCG2_STAT_PE_POS                    _SSCG_UL(10)
#define SSCG2_STAT_PE_LEN                    _SSCG_UL(1)

/* SSCG2_STAT_BE (rh) */
#define SSCG2_STAT_BE_POS                    _SSCG_UL(11)
#define SSCG2_STAT_BE_LEN                    _SSCG_UL(1)

/* SSCG2_STAT_BSY (rh) */
#define SSCG2_STAT_BSY_POS                   _SSCG_UL(12)
#define SSCG2_STAT_BSY_LEN                   _SSCG_UL(1)

/* SSCG2_EFM_CLRPARE (w) */
#define SSCG2_EFM_CLRPARE_POS                _SSCG_UL(0)
#define SSCG2_EFM_CLRPARE_LEN                _SSCG_UL(1)

/* SSCG2_EFM_SETPARE (w) */
#define SSCG2_EFM_SETPARE_POS                _SSCG_UL(4)
#define SSCG2_EFM_SETPARE_LEN                _SSCG_UL(1)

/* SSCG2_EFM_CLRTE (w) */
#define SSCG2_EFM_CLRTE_POS                  _SSCG_UL(8)
#define SSCG2_EFM_CLRTE_LEN                  _SSCG_UL(1)

/* SSCG2_EFM_CLRRE (w) */
#define SSCG2_EFM_CLRRE_POS                  _SSCG_UL(9)
#define SSCG2_EFM_CLRRE_LEN                  _SSCG_UL(1)

/* SSCG2_EFM_CLRPE (w) */
#define SSCG2_EFM_CLRPE_POS                  _SSCG_UL(10)
#define SSCG2_EFM_CLRPE_LEN                  _SSCG_UL(1)

/* SSCG2_EFM_CLRBE (w) */
#define SSCG2_EFM_CLRBE_POS                  _SSCG_UL(11)
#define SSCG2_EFM_CLRBE_LEN                  _SSCG_UL(1)

/* SSCG2_EFM_SETTE (w) */
#define SSCG2_EFM_SETTE_POS                  _SSCG_UL(12)
#define SSCG2_EFM_SETTE_LEN                  _SSCG_UL(1)

/* SSCG2_EFM_SETRE (w) */
#define SSCG2_EFM_SETRE_POS                  _SSCG_UL(13)
#define SSCG2_EFM_SETRE_LEN                  _SSCG_UL(1)

/* SSCG2_EFM_SETPE (w) */
#define SSCG2_EFM_SETPE_POS                  _SSCG_UL(14)
#define SSCG2_EFM_SETPE_LEN                  _SSCG_UL(1)

/* SSCG2_EFM_SETBE (w) */
#define SSCG2_EFM_SETBE_POS                  _SSCG_UL(15)
#define SSCG2_EFM_SETBE_LEN                  _SSCG_UL(1)

/* SSCG2_TB1_TB_VALUE (rwh) */
#define SSCG2_TB1_TB_VALUE_POS               _SSCG_UL(0)
#define SSCG2_TB1_TB_VALUE_LEN               _SSCG_UL(16)

/* SSCG2_TB1SNAP_TB_VALUE (rw) */
#define SSCG2_TB1SNAP_TB_VALUE_POS           _SSCG_UL(0)
#define SSCG2_TB1SNAP_TB_VALUE_LEN           _SSCG_UL(16)

/* SSCG2_RBSNAP_RB_VALUE (rh) */
#define SSCG2_RBSNAP_RB_VALUE_POS            _SSCG_UL(0)
#define SSCG2_RBSNAP_RB_VALUE_LEN            _SSCG_UL(16)

/* SSCG2_GSTAT_CE (rh) */
#define SSCG2_GSTAT_CE_POS                   _SSCG_UL(0)
#define SSCG2_GSTAT_CE_LEN                   _SSCG_UL(1)

/* SSCG2_GSTAT_SCLK (rh) */
#define SSCG2_GSTAT_SCLK_POS                 _SSCG_UL(2)
#define SSCG2_GSTAT_SCLK_LEN                 _SSCG_UL(1)

/* SSCG2_GSTAT_S0 (rh) */
#define SSCG2_GSTAT_S0_POS                   _SSCG_UL(16)
#define SSCG2_GSTAT_S0_LEN                   _SSCG_UL(1)

/* SSCG2_GSTAT_S1 (rh) */
#define SSCG2_GSTAT_S1_POS                   _SSCG_UL(17)
#define SSCG2_GSTAT_S1_LEN                   _SSCG_UL(1)

/* SSCG2_GSTAT_S2 (rh) */
#define SSCG2_GSTAT_S2_POS                   _SSCG_UL(18)
#define SSCG2_GSTAT_S2_LEN                   _SSCG_UL(1)

/* SSCG2_GSTAT_S3 (rh) */
#define SSCG2_GSTAT_S3_POS                   _SSCG_UL(19)
#define SSCG2_GSTAT_S3_LEN                   _SSCG_UL(1)

/* SSCG2_GSTAT_S4 (rh) */
#define SSCG2_GSTAT_S4_POS                   _SSCG_UL(20)
#define SSCG2_GSTAT_S4_LEN                   _SSCG_UL(1)

/* SSCG2_GSTAT_S5 (rh) */
#define SSCG2_GSTAT_S5_POS                   _SSCG_UL(21)
#define SSCG2_GSTAT_S5_LEN                   _SSCG_UL(1)

/* SSCG2_GSTAT_S6 (rh) */
#define SSCG2_GSTAT_S6_POS                   _SSCG_UL(22)
#define SSCG2_GSTAT_S6_LEN                   _SSCG_UL(1)

/* SSCG2_GSTAT_S7 (rh) */
#define SSCG2_GSTAT_S7_POS                   _SSCG_UL(23)
#define SSCG2_GSTAT_S7_LEN                   _SSCG_UL(1)

/* SSCG2_GEFM_CLRCE (w) */
#define SSCG2_GEFM_CLRCE_POS                 _SSCG_UL(0)
#define SSCG2_GEFM_CLRCE_LEN                 _SSCG_UL(1)

/* SSCG2_GEFM_SCTC (w) */
#define SSCG2_GEFM_SCTC_POS                  _SSCG_UL(2)
#define SSCG2_GEFM_SCTC_LEN                  _SSCG_UL(2)

/* SSCG2_GEFM_SETCE (w) */
#define SSCG2_GEFM_SETCE_POS                 _SSCG_UL(8)
#define SSCG2_GEFM_SETCE_LEN                 _SSCG_UL(1)

/* SSCG2_GEFM_SCT0 (w) */
#define SSCG2_GEFM_SCT0_POS                  _SSCG_UL(16)
#define SSCG2_GEFM_SCT0_LEN                  _SSCG_UL(2)

/* SSCG2_GEFM_SCT1 (w) */
#define SSCG2_GEFM_SCT1_POS                  _SSCG_UL(18)
#define SSCG2_GEFM_SCT1_LEN                  _SSCG_UL(2)

/* SSCG2_GEFM_SCT2 (w) */
#define SSCG2_GEFM_SCT2_POS                  _SSCG_UL(20)
#define SSCG2_GEFM_SCT2_LEN                  _SSCG_UL(2)

/* SSCG2_GEFM_SCT3 (w) */
#define SSCG2_GEFM_SCT3_POS                  _SSCG_UL(22)
#define SSCG2_GEFM_SCT3_LEN                  _SSCG_UL(2)

/* SSCG2_GEFM_SCT4 (w) */
#define SSCG2_GEFM_SCT4_POS                  _SSCG_UL(24)
#define SSCG2_GEFM_SCT4_LEN                  _SSCG_UL(2)

/* SSCG2_GEFM_SCT5 (w) */
#define SSCG2_GEFM_SCT5_POS                  _SSCG_UL(26)
#define SSCG2_GEFM_SCT5_LEN                  _SSCG_UL(2)

/* SSCG2_GEFM_SCT6 (w) */
#define SSCG2_GEFM_SCT6_POS                  _SSCG_UL(28)
#define SSCG2_GEFM_SCT6_LEN                  _SSCG_UL(2)

/* SSCG2_GEFM_SCT7 (w) */
#define SSCG2_GEFM_SCT7_POS                  _SSCG_UL(30)
#define SSCG2_GEFM_SCT7_LEN                  _SSCG_UL(2)

/* SSCG2_GEN_SEN0 (rw) */
#define SSCG2_GEN_SEN0_POS                   _SSCG_UL(0)
#define SSCG2_GEN_SEN0_LEN                   _SSCG_UL(1)

/* SSCG2_GEN_SEN1 (rw) */
#define SSCG2_GEN_SEN1_POS                   _SSCG_UL(1)
#define SSCG2_GEN_SEN1_LEN                   _SSCG_UL(1)

/* SSCG2_GEN_SEN2 (rw) */
#define SSCG2_GEN_SEN2_POS                   _SSCG_UL(2)
#define SSCG2_GEN_SEN2_LEN                   _SSCG_UL(1)

/* SSCG2_GEN_SEN3 (rw) */
#define SSCG2_GEN_SEN3_POS                   _SSCG_UL(3)
#define SSCG2_GEN_SEN3_LEN                   _SSCG_UL(1)

/* SSCG2_GEN_SEN4 (rw) */
#define SSCG2_GEN_SEN4_POS                   _SSCG_UL(4)
#define SSCG2_GEN_SEN4_LEN                   _SSCG_UL(1)

/* SSCG2_GEN_SEN5 (rw) */
#define SSCG2_GEN_SEN5_POS                   _SSCG_UL(5)
#define SSCG2_GEN_SEN5_LEN                   _SSCG_UL(1)

/* SSCG2_GEN_SEN6 (rw) */
#define SSCG2_GEN_SEN6_POS                   _SSCG_UL(6)
#define SSCG2_GEN_SEN6_LEN                   _SSCG_UL(1)

/* SSCG2_GEN_SEN7 (rw) */
#define SSCG2_GEN_SEN7_POS                   _SSCG_UL(7)
#define SSCG2_GEN_SEN7_LEN                   _SSCG_UL(1)

/* SSCG2_GEN_CEN (w) */
#define SSCG2_GEN_CEN_POS                    _SSCG_UL(8)
#define SSCG2_GEN_CEN_LEN                    _SSCG_UL(1)

/* SSCG2_GSRC_SRPN (rw) */
#define SSCG2_GSRC_SRPN_POS                  _SSCG_UL(0)
#define SSCG2_GSRC_SRPN_LEN                  _SSCG_UL(8)

/* SSCG2_GSRC_TOS (rw) */
#define SSCG2_GSRC_TOS_POS                   _SSCG_UL(10)
#define SSCG2_GSRC_TOS_LEN                   _SSCG_UL(1)

/* SSCG2_GSRC_SRE (rw) */
#define SSCG2_GSRC_SRE_POS                   _SSCG_UL(12)
#define SSCG2_GSRC_SRE_LEN                   _SSCG_UL(1)

/* SSCG2_GSRC_SRR (rh) */
#define SSCG2_GSRC_SRR_POS                   _SSCG_UL(13)
#define SSCG2_GSRC_SRR_LEN                   _SSCG_UL(1)

/* SSCG2_GSRC_CLRR (w) */
#define SSCG2_GSRC_CLRR_POS                  _SSCG_UL(14)
#define SSCG2_GSRC_CLRR_LEN                  _SSCG_UL(1)

/* SSCG2_GSRC_SETR (w) */
#define SSCG2_GSRC_SETR_POS                  _SSCG_UL(15)
#define SSCG2_GSRC_SETR_LEN                  _SSCG_UL(1)

/* SSCG3_CLC_DISR (rw) */
#define SSCG3_CLC_DISR_POS                   _SSCG_UL(0)
#define SSCG3_CLC_DISR_LEN                   _SSCG_UL(1)

/* SSCG3_CLC_DISS (r) */
#define SSCG3_CLC_DISS_POS                   _SSCG_UL(1)
#define SSCG3_CLC_DISS_LEN                   _SSCG_UL(1)

/* SSCG3_CLC_SPEN (rw) */
#define SSCG3_CLC_SPEN_POS                   _SSCG_UL(2)
#define SSCG3_CLC_SPEN_LEN                   _SSCG_UL(1)

/* SSCG3_CLC_EDIS (rw) */
#define SSCG3_CLC_EDIS_POS                   _SSCG_UL(3)
#define SSCG3_CLC_EDIS_LEN                   _SSCG_UL(1)

/* SSCG3_CLC_SBWE (w) */
#define SSCG3_CLC_SBWE_POS                   _SSCG_UL(4)
#define SSCG3_CLC_SBWE_LEN                   _SSCG_UL(1)

/* SSCG3_CLC_FSOE (rw) */
#define SSCG3_CLC_FSOE_POS                   _SSCG_UL(5)
#define SSCG3_CLC_FSOE_LEN                   _SSCG_UL(1)

/* SSCG3_PISEL_MRIS (rw) */
#define SSCG3_PISEL_MRIS_POS                 _SSCG_UL(0)
#define SSCG3_PISEL_MRIS_LEN                 _SSCG_UL(1)

/* SSCG3_PISEL_SRIS (rw) */
#define SSCG3_PISEL_SRIS_POS                 _SSCG_UL(1)
#define SSCG3_PISEL_SRIS_LEN                 _SSCG_UL(1)

/* SSCG3_PISEL_SCIS (rw) */
#define SSCG3_PISEL_SCIS_POS                 _SSCG_UL(2)
#define SSCG3_PISEL_SCIS_LEN                 _SSCG_UL(1)

/* SSCG3_PISEL_SLSIS (rw) */
#define SSCG3_PISEL_SLSIS_POS                _SSCG_UL(3)
#define SSCG3_PISEL_SLSIS_LEN                _SSCG_UL(3)

/* SSCG3_PISEL_STIP (rw) */
#define SSCG3_PISEL_STIP_POS                 _SSCG_UL(8)
#define SSCG3_PISEL_STIP_LEN                 _SSCG_UL(1)

/* SSCG3_ID_MODREV (r) */
#define SSCG3_ID_MODREV_POS                  _SSCG_UL(0)
#define SSCG3_ID_MODREV_LEN                  _SSCG_UL(8)

/* SSCG3_ID_MODTYPE (r) */
#define SSCG3_ID_MODTYPE_POS                 _SSCG_UL(8)
#define SSCG3_ID_MODTYPE_LEN                 _SSCG_UL(8)

/* SSCG3_ID_MODNUM (r) */
#define SSCG3_ID_MODNUM_POS                  _SSCG_UL(16)
#define SSCG3_ID_MODNUM_LEN                  _SSCG_UL(16)

/* SSCG3_FDR_STEP (rw) */
#define SSCG3_FDR_STEP_POS                   _SSCG_UL(0)
#define SSCG3_FDR_STEP_LEN                   _SSCG_UL(10)

/* SSCG3_FDR_FDIS (rw) */
#define SSCG3_FDR_FDIS_POS                   _SSCG_UL(10)
#define SSCG3_FDR_FDIS_LEN                   _SSCG_UL(1)

/* SSCG3_FDR_SM (rw) */
#define SSCG3_FDR_SM_POS                     _SSCG_UL(11)
#define SSCG3_FDR_SM_LEN                     _SSCG_UL(1)

/* SSCG3_FDR_SC (rw) */
#define SSCG3_FDR_SC_POS                     _SSCG_UL(12)
#define SSCG3_FDR_SC_LEN                     _SSCG_UL(2)

/* SSCG3_FDR_DM (rw) */
#define SSCG3_FDR_DM_POS                     _SSCG_UL(14)
#define SSCG3_FDR_DM_LEN                     _SSCG_UL(2)

/* SSCG3_FDR_RESULT (rh) */
#define SSCG3_FDR_RESULT_POS                 _SSCG_UL(16)
#define SSCG3_FDR_RESULT_LEN                 _SSCG_UL(10)

/* SSCG3_FDR_SUSACK (rh) */
#define SSCG3_FDR_SUSACK_POS                 _SSCG_UL(28)
#define SSCG3_FDR_SUSACK_LEN                 _SSCG_UL(1)

/* SSCG3_FDR_SUSREQ (rh) */
#define SSCG3_FDR_SUSREQ_POS                 _SSCG_UL(29)
#define SSCG3_FDR_SUSREQ_LEN                 _SSCG_UL(1)

/* SSCG3_FDR_ENHW (rw) */
#define SSCG3_FDR_ENHW_POS                   _SSCG_UL(30)
#define SSCG3_FDR_ENHW_LEN                   _SSCG_UL(1)

/* SSCG3_FDR_DISCLK (rwh) */
#define SSCG3_FDR_DISCLK_POS                 _SSCG_UL(31)
#define SSCG3_FDR_DISCLK_LEN                 _SSCG_UL(1)

/* SSCG3_CON_BM (rw) */
#define SSCG3_CON_BM_POS                     _SSCG_UL(0)
#define SSCG3_CON_BM_LEN                     _SSCG_UL(4)

/* SSCG3_CON_HB (rw) */
#define SSCG3_CON_HB_POS                     _SSCG_UL(4)
#define SSCG3_CON_HB_LEN                     _SSCG_UL(1)

/* SSCG3_CON_PH (rw) */
#define SSCG3_CON_PH_POS                     _SSCG_UL(5)
#define SSCG3_CON_PH_LEN                     _SSCG_UL(1)

/* SSCG3_CON_PO (rw) */
#define SSCG3_CON_PO_POS                     _SSCG_UL(6)
#define SSCG3_CON_PO_LEN                     _SSCG_UL(1)

/* SSCG3_CON_LB (rw) */
#define SSCG3_CON_LB_POS                     _SSCG_UL(7)
#define SSCG3_CON_LB_LEN                     _SSCG_UL(1)

/* SSCG3_CON_TEN (rw) */
#define SSCG3_CON_TEN_POS                    _SSCG_UL(8)
#define SSCG3_CON_TEN_LEN                    _SSCG_UL(1)

/* SSCG3_CON_REN (rw) */
#define SSCG3_CON_REN_POS                    _SSCG_UL(9)
#define SSCG3_CON_REN_LEN                    _SSCG_UL(1)

/* SSCG3_CON_PEN (rw) */
#define SSCG3_CON_PEN_POS                    _SSCG_UL(10)
#define SSCG3_CON_PEN_LEN                    _SSCG_UL(1)

/* SSCG3_CON_BEN (rw) */
#define SSCG3_CON_BEN_POS                    _SSCG_UL(11)
#define SSCG3_CON_BEN_LEN                    _SSCG_UL(1)

/* SSCG3_CON_AREN (rw) */
#define SSCG3_CON_AREN_POS                   _SSCG_UL(12)
#define SSCG3_CON_AREN_LEN                   _SSCG_UL(1)

/* SSCG3_CON_MS (rw) */
#define SSCG3_CON_MS_POS                     _SSCG_UL(14)
#define SSCG3_CON_MS_LEN                     _SSCG_UL(1)

/* SSCG3_CON_EN (rw) */
#define SSCG3_CON_EN_POS                     _SSCG_UL(15)
#define SSCG3_CON_EN_LEN                     _SSCG_UL(1)

/* SSCG3_CON_PARTEN (rw) */
#define SSCG3_CON_PARTEN_POS                 _SSCG_UL(16)
#define SSCG3_CON_PARTEN_LEN                 _SSCG_UL(1)

/* SSCG3_CON_PARREN (rw) */
#define SSCG3_CON_PARREN_POS                 _SSCG_UL(17)
#define SSCG3_CON_PARREN_LEN                 _SSCG_UL(1)

/* SSCG3_CON_PARTYP (rw) */
#define SSCG3_CON_PARTYP_POS                 _SSCG_UL(18)
#define SSCG3_CON_PARTYP_LEN                 _SSCG_UL(1)

/* SSCG3_CON_PAREEN (rw) */
#define SSCG3_CON_PAREEN_POS                 _SSCG_UL(19)
#define SSCG3_CON_PAREEN_LEN                 _SSCG_UL(1)

/* SSCG3_BR_BR_VALUE (rw) */
#define SSCG3_BR_BR_VALUE_POS                _SSCG_UL(0)
#define SSCG3_BR_BR_VALUE_LEN                _SSCG_UL(16)

/* SSCG3_SSOC_AOL0 (rw) */
#define SSCG3_SSOC_AOL0_POS                  _SSCG_UL(0)
#define SSCG3_SSOC_AOL0_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_AOL1 (rw) */
#define SSCG3_SSOC_AOL1_POS                  _SSCG_UL(1)
#define SSCG3_SSOC_AOL1_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_AOL2 (rw) */
#define SSCG3_SSOC_AOL2_POS                  _SSCG_UL(2)
#define SSCG3_SSOC_AOL2_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_AOL3 (rw) */
#define SSCG3_SSOC_AOL3_POS                  _SSCG_UL(3)
#define SSCG3_SSOC_AOL3_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_AOL4 (rw) */
#define SSCG3_SSOC_AOL4_POS                  _SSCG_UL(4)
#define SSCG3_SSOC_AOL4_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_AOL5 (rw) */
#define SSCG3_SSOC_AOL5_POS                  _SSCG_UL(5)
#define SSCG3_SSOC_AOL5_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_AOL6 (rw) */
#define SSCG3_SSOC_AOL6_POS                  _SSCG_UL(6)
#define SSCG3_SSOC_AOL6_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_AOL7 (rw) */
#define SSCG3_SSOC_AOL7_POS                  _SSCG_UL(7)
#define SSCG3_SSOC_AOL7_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_OEN0 (rw) */
#define SSCG3_SSOC_OEN0_POS                  _SSCG_UL(8)
#define SSCG3_SSOC_OEN0_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_OEN1 (rw) */
#define SSCG3_SSOC_OEN1_POS                  _SSCG_UL(9)
#define SSCG3_SSOC_OEN1_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_OEN2 (rw) */
#define SSCG3_SSOC_OEN2_POS                  _SSCG_UL(10)
#define SSCG3_SSOC_OEN2_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_OEN3 (rw) */
#define SSCG3_SSOC_OEN3_POS                  _SSCG_UL(11)
#define SSCG3_SSOC_OEN3_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_OEN4 (rw) */
#define SSCG3_SSOC_OEN4_POS                  _SSCG_UL(12)
#define SSCG3_SSOC_OEN4_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_OEN5 (rw) */
#define SSCG3_SSOC_OEN5_POS                  _SSCG_UL(13)
#define SSCG3_SSOC_OEN5_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_OEN6 (rw) */
#define SSCG3_SSOC_OEN6_POS                  _SSCG_UL(14)
#define SSCG3_SSOC_OEN6_LEN                  _SSCG_UL(1)

/* SSCG3_SSOC_OEN7 (rw) */
#define SSCG3_SSOC_OEN7_POS                  _SSCG_UL(15)
#define SSCG3_SSOC_OEN7_LEN                  _SSCG_UL(1)

/* SSCG3_SSOTC_LEAD (rw) */
#define SSCG3_SSOTC_LEAD_POS                 _SSCG_UL(0)
#define SSCG3_SSOTC_LEAD_LEN                 _SSCG_UL(2)

/* SSCG3_SSOTC_TRAIL (rw) */
#define SSCG3_SSOTC_TRAIL_POS                _SSCG_UL(2)
#define SSCG3_SSOTC_TRAIL_LEN                _SSCG_UL(2)

/* SSCG3_SSOTC_INACT (rw) */
#define SSCG3_SSOTC_INACT_POS                _SSCG_UL(4)
#define SSCG3_SSOTC_INACT_LEN                _SSCG_UL(2)

/* SSCG3_SSOTC_SLSO7MOD (rw) */
#define SSCG3_SSOTC_SLSO7MOD_POS             _SSCG_UL(8)
#define SSCG3_SSOTC_SLSO7MOD_LEN             _SSCG_UL(1)

/* SSCG3_SSOTC_QSMEN (w) */
#define SSCG3_SSOTC_QSMEN_POS                _SSCG_UL(14)
#define SSCG3_SSOTC_QSMEN_LEN                _SSCG_UL(1)

/* SSCG3_SSOTC_EN (rw) */
#define SSCG3_SSOTC_EN_POS                   _SSCG_UL(15)
#define SSCG3_SSOTC_EN_LEN                   _SSCG_UL(1)

/* SSCG3_TB_TB_VALUE (rw) */
#define SSCG3_TB_TB_VALUE_POS                _SSCG_UL(0)
#define SSCG3_TB_TB_VALUE_LEN                _SSCG_UL(16)

/* SSCG3_RB_RB_VALUE (rh) */
#define SSCG3_RB_RB_VALUE_POS                _SSCG_UL(0)
#define SSCG3_RB_RB_VALUE_LEN                _SSCG_UL(16)

/* SSCG3_STAT_BC (rh) */
#define SSCG3_STAT_BC_POS                    _SSCG_UL(0)
#define SSCG3_STAT_BC_LEN                    _SSCG_UL(4)

/* SSCG3_STAT_PARE (rh) */
#define SSCG3_STAT_PARE_POS                  _SSCG_UL(4)
#define SSCG3_STAT_PARE_LEN                  _SSCG_UL(1)

/* SSCG3_STAT_PARTVAL (rh) */
#define SSCG3_STAT_PARTVAL_POS               _SSCG_UL(5)
#define SSCG3_STAT_PARTVAL_LEN               _SSCG_UL(1)

/* SSCG3_STAT_PARRVAL (rh) */
#define SSCG3_STAT_PARRVAL_POS               _SSCG_UL(6)
#define SSCG3_STAT_PARRVAL_LEN               _SSCG_UL(1)

/* SSCG3_STAT_TE (rh) */
#define SSCG3_STAT_TE_POS                    _SSCG_UL(8)
#define SSCG3_STAT_TE_LEN                    _SSCG_UL(1)

/* SSCG3_STAT_RE (rh) */
#define SSCG3_STAT_RE_POS                    _SSCG_UL(9)
#define SSCG3_STAT_RE_LEN                    _SSCG_UL(1)

/* SSCG3_STAT_PE (rh) */
#define SSCG3_STAT_PE_POS                    _SSCG_UL(10)
#define SSCG3_STAT_PE_LEN                    _SSCG_UL(1)

/* SSCG3_STAT_BE (rh) */
#define SSCG3_STAT_BE_POS                    _SSCG_UL(11)
#define SSCG3_STAT_BE_LEN                    _SSCG_UL(1)

/* SSCG3_STAT_BSY (rh) */
#define SSCG3_STAT_BSY_POS                   _SSCG_UL(12)
#define SSCG3_STAT_BSY_LEN                   _SSCG_UL(1)

/* SSCG3_EFM_CLRPARE (w) */
#define SSCG3_EFM_CLRPARE_POS                _SSCG_UL(0)
#define SSCG3_EFM_CLRPARE_LEN                _SSCG_UL(1)

/* SSCG3_EFM_SETPARE (w) */
#define SSCG3_EFM_SETPARE_POS                _SSCG_UL(4)
#define SSCG3_EFM_SETPARE_LEN                _SSCG_UL(1)

/* SSCG3_EFM_CLRTE (w) */
#define SSCG3_EFM_CLRTE_POS                  _SSCG_UL(8)
#define SSCG3_EFM_CLRTE_LEN                  _SSCG_UL(1)

/* SSCG3_EFM_CLRRE (w) */
#define SSCG3_EFM_CLRRE_POS                  _SSCG_UL(9)
#define SSCG3_EFM_CLRRE_LEN                  _SSCG_UL(1)

/* SSCG3_EFM_CLRPE (w) */
#define SSCG3_EFM_CLRPE_POS                  _SSCG_UL(10)
#define SSCG3_EFM_CLRPE_LEN                  _SSCG_UL(1)

/* SSCG3_EFM_CLRBE (w) */
#define SSCG3_EFM_CLRBE_POS                  _SSCG_UL(11)
#define SSCG3_EFM_CLRBE_LEN                  _SSCG_UL(1)

/* SSCG3_EFM_SETTE (w) */
#define SSCG3_EFM_SETTE_POS                  _SSCG_UL(12)
#define SSCG3_EFM_SETTE_LEN                  _SSCG_UL(1)

/* SSCG3_EFM_SETRE (w) */
#define SSCG3_EFM_SETRE_POS                  _SSCG_UL(13)
#define SSCG3_EFM_SETRE_LEN                  _SSCG_UL(1)

/* SSCG3_EFM_SETPE (w) */
#define SSCG3_EFM_SETPE_POS                  _SSCG_UL(14)
#define SSCG3_EFM_SETPE_LEN                  _SSCG_UL(1)

/* SSCG3_EFM_SETBE (w) */
#define SSCG3_EFM_SETBE_POS                  _SSCG_UL(15)
#define SSCG3_EFM_SETBE_LEN                  _SSCG_UL(1)

/* SSCG3_TB1_TB_VALUE (rwh) */
#define SSCG3_TB1_TB_VALUE_POS               _SSCG_UL(0)
#define SSCG3_TB1_TB_VALUE_LEN               _SSCG_UL(16)

/* SSCG3_TB1SNAP_TB_VALUE (rw) */
#define SSCG3_TB1SNAP_TB_VALUE_POS           _SSCG_UL(0)
#define SSCG3_TB1SNAP_TB_VALUE_LEN           _SSCG_UL(16)

/* SSCG3_RBSNAP_RB_VALUE (rh) */
#define SSCG3_RBSNAP_RB_VALUE_POS            _SSCG_UL(0)
#define SSCG3_RBSNAP_RB_VALUE_LEN            _SSCG_UL(16)

/* SSCG3_GSTAT_CE (rh) */
#define SSCG3_GSTAT_CE_POS                   _SSCG_UL(0)
#define SSCG3_GSTAT_CE_LEN                   _SSCG_UL(1)

/* SSCG3_GSTAT_SCLK (rh) */
#define SSCG3_GSTAT_SCLK_POS                 _SSCG_UL(2)
#define SSCG3_GSTAT_SCLK_LEN                 _SSCG_UL(1)

/* SSCG3_GSTAT_S0 (rh) */
#define SSCG3_GSTAT_S0_POS                   _SSCG_UL(16)
#define SSCG3_GSTAT_S0_LEN                   _SSCG_UL(1)

/* SSCG3_GSTAT_S1 (rh) */
#define SSCG3_GSTAT_S1_POS                   _SSCG_UL(17)
#define SSCG3_GSTAT_S1_LEN                   _SSCG_UL(1)

/* SSCG3_GSTAT_S2 (rh) */
#define SSCG3_GSTAT_S2_POS                   _SSCG_UL(18)
#define SSCG3_GSTAT_S2_LEN                   _SSCG_UL(1)

/* SSCG3_GSTAT_S3 (rh) */
#define SSCG3_GSTAT_S3_POS                   _SSCG_UL(19)
#define SSCG3_GSTAT_S3_LEN                   _SSCG_UL(1)

/* SSCG3_GSTAT_S4 (rh) */
#define SSCG3_GSTAT_S4_POS                   _SSCG_UL(20)
#define SSCG3_GSTAT_S4_LEN                   _SSCG_UL(1)

/* SSCG3_GSTAT_S5 (rh) */
#define SSCG3_GSTAT_S5_POS                   _SSCG_UL(21)
#define SSCG3_GSTAT_S5_LEN                   _SSCG_UL(1)

/* SSCG3_GSTAT_S6 (rh) */
#define SSCG3_GSTAT_S6_POS                   _SSCG_UL(22)
#define SSCG3_GSTAT_S6_LEN                   _SSCG_UL(1)

/* SSCG3_GSTAT_S7 (rh) */
#define SSCG3_GSTAT_S7_POS                   _SSCG_UL(23)
#define SSCG3_GSTAT_S7_LEN                   _SSCG_UL(1)

/* SSCG3_GEFM_CLRCE (w) */
#define SSCG3_GEFM_CLRCE_POS                 _SSCG_UL(0)
#define SSCG3_GEFM_CLRCE_LEN                 _SSCG_UL(1)

/* SSCG3_GEFM_SCTC (w) */
#define SSCG3_GEFM_SCTC_POS                  _SSCG_UL(2)
#define SSCG3_GEFM_SCTC_LEN                  _SSCG_UL(2)

/* SSCG3_GEFM_SETCE (w) */
#define SSCG3_GEFM_SETCE_POS                 _SSCG_UL(8)
#define SSCG3_GEFM_SETCE_LEN                 _SSCG_UL(1)

/* SSCG3_GEFM_SCT0 (w) */
#define SSCG3_GEFM_SCT0_POS                  _SSCG_UL(16)
#define SSCG3_GEFM_SCT0_LEN                  _SSCG_UL(2)

/* SSCG3_GEFM_SCT1 (w) */
#define SSCG3_GEFM_SCT1_POS                  _SSCG_UL(18)
#define SSCG3_GEFM_SCT1_LEN                  _SSCG_UL(2)

/* SSCG3_GEFM_SCT2 (w) */
#define SSCG3_GEFM_SCT2_POS                  _SSCG_UL(20)
#define SSCG3_GEFM_SCT2_LEN                  _SSCG_UL(2)

/* SSCG3_GEFM_SCT3 (w) */
#define SSCG3_GEFM_SCT3_POS                  _SSCG_UL(22)
#define SSCG3_GEFM_SCT3_LEN                  _SSCG_UL(2)

/* SSCG3_GEFM_SCT4 (w) */
#define SSCG3_GEFM_SCT4_POS                  _SSCG_UL(24)
#define SSCG3_GEFM_SCT4_LEN                  _SSCG_UL(2)

/* SSCG3_GEFM_SCT5 (w) */
#define SSCG3_GEFM_SCT5_POS                  _SSCG_UL(26)
#define SSCG3_GEFM_SCT5_LEN                  _SSCG_UL(2)

/* SSCG3_GEFM_SCT6 (w) */
#define SSCG3_GEFM_SCT6_POS                  _SSCG_UL(28)
#define SSCG3_GEFM_SCT6_LEN                  _SSCG_UL(2)

/* SSCG3_GEFM_SCT7 (w) */
#define SSCG3_GEFM_SCT7_POS                  _SSCG_UL(30)
#define SSCG3_GEFM_SCT7_LEN                  _SSCG_UL(2)

/* SSCG3_GEN_SEN0 (rw) */
#define SSCG3_GEN_SEN0_POS                   _SSCG_UL(0)
#define SSCG3_GEN_SEN0_LEN                   _SSCG_UL(1)

/* SSCG3_GEN_SEN1 (rw) */
#define SSCG3_GEN_SEN1_POS                   _SSCG_UL(1)
#define SSCG3_GEN_SEN1_LEN                   _SSCG_UL(1)

/* SSCG3_GEN_SEN2 (rw) */
#define SSCG3_GEN_SEN2_POS                   _SSCG_UL(2)
#define SSCG3_GEN_SEN2_LEN                   _SSCG_UL(1)

/* SSCG3_GEN_SEN3 (rw) */
#define SSCG3_GEN_SEN3_POS                   _SSCG_UL(3)
#define SSCG3_GEN_SEN3_LEN                   _SSCG_UL(1)

/* SSCG3_GEN_SEN4 (rw) */
#define SSCG3_GEN_SEN4_POS                   _SSCG_UL(4)
#define SSCG3_GEN_SEN4_LEN                   _SSCG_UL(1)

/* SSCG3_GEN_SEN5 (rw) */
#define SSCG3_GEN_SEN5_POS                   _SSCG_UL(5)
#define SSCG3_GEN_SEN5_LEN                   _SSCG_UL(1)

/* SSCG3_GEN_SEN6 (rw) */
#define SSCG3_GEN_SEN6_POS                   _SSCG_UL(6)
#define SSCG3_GEN_SEN6_LEN                   _SSCG_UL(1)

/* SSCG3_GEN_SEN7 (rw) */
#define SSCG3_GEN_SEN7_POS                   _SSCG_UL(7)
#define SSCG3_GEN_SEN7_LEN                   _SSCG_UL(1)

/* SSCG3_GEN_CEN (w) */
#define SSCG3_GEN_CEN_POS                    _SSCG_UL(8)
#define SSCG3_GEN_CEN_LEN                    _SSCG_UL(1)

/* SSCG3_GSRC_SRPN (rw) */
#define SSCG3_GSRC_SRPN_POS                  _SSCG_UL(0)
#define SSCG3_GSRC_SRPN_LEN                  _SSCG_UL(8)

/* SSCG3_GSRC_TOS (rw) */
#define SSCG3_GSRC_TOS_POS                   _SSCG_UL(10)
#define SSCG3_GSRC_TOS_LEN                   _SSCG_UL(1)

/* SSCG3_GSRC_SRE (rw) */
#define SSCG3_GSRC_SRE_POS                   _SSCG_UL(12)
#define SSCG3_GSRC_SRE_LEN                   _SSCG_UL(1)

/* SSCG3_GSRC_SRR (rh) */
#define SSCG3_GSRC_SRR_POS                   _SSCG_UL(13)
#define SSCG3_GSRC_SRR_LEN                   _SSCG_UL(1)

/* SSCG3_GSRC_CLRR (w) */
#define SSCG3_GSRC_CLRR_POS                  _SSCG_UL(14)
#define SSCG3_GSRC_CLRR_LEN                  _SSCG_UL(1)

/* SSCG3_GSRC_SETR (w) */
#define SSCG3_GSRC_SETR_POS                  _SSCG_UL(15)
#define SSCG3_GSRC_SETR_LEN                  _SSCG_UL(1)

#endif
