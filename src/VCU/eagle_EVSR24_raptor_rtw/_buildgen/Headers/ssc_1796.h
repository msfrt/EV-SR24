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
 * $Filename__:ssc_1796.h$ 
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
 * $Name______:ssc_1796$ 
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
 *      File name: ssc_1796.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SSC_1796_H
#define _SSC_1796_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _SSC_UL(x) x
#else
    #define _SSC_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module SSC0 on Metis
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0100100] : SSC Clock Control Register
    volatile uint32 PISEL;               // [0xF0100104] : SSC Port Input Select Register
    volatile uint32 ID;                  // [0xF0100108] : SSC0 Module Identification Register
    volatile uint32 FDR;                 // [0xF010010C] : SSC Fractional Divider Register
    volatile uint32 CON;                 // [0xF0100110] : SSC Control Register
    volatile uint32 BR;                  // [0xF0100114] : SSC Baudrate Timer Reload Register
    volatile uint32 SSOC;                // [0xF0100118] : Slave Select Output Control Register
    volatile uint32 SSOTC;               // [0xF010011C] : Slave Select Output Control Register
    volatile uint32 TB;                  // [0xF0100120] : SSC Transmit Buffer Register
    volatile uint32 RB;                  // [0xF0100124] : SSC Receive Buffer Register
    volatile uint32 STAT;                // [0xF0100128] : SSC Status Register
    volatile uint32 EFM;                 // [0xF010012C] : SSC Error Flag Modification Register
    volatile uint32 RXFCON;              // [0xF0100130] : SSC0 Receive FIFO Control Register
                                         //                reserved on SSC1
    volatile uint32 TXFCON;              // [0xF0100134] : SSC0 Transmit FIFO Control Register
                                         //                reserved on SSC1
    volatile uint32 FSTAT;               // [0xF0100138] : SSC0 FIFO Status Register
                                         //                reserved on SSC1
    volatile uint32 RESERVED0[46];       // [0xF010013C...0xF01001F3] : reserved space
    volatile uint32 TSRC;                // [0xF01001F4] : SSC Transmit Interrupt Service Request
                                         //                Control Register
    volatile uint32 RSRC;                // [0xF01001F8] : SSC Receive Interrupt Service Request
                                         //                Control Register
    volatile uint32 ESRC;                // [0xF01001FC] : SSC Error Interrupt Service Request
                                         //                Control Register
} SSC_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern SSC_RegMap_t SSC0 __attribute__ ((asection (".bss.label_only")));
extern SSC_RegMap_t SSC1 __attribute__ ((asection (".bss.label_only")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
/*!!! the following macros must be consistant to the structure SSC_RegMap_t above              !!!*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
#define SSCX_CON_TO_BR_OFS              _SSC_UL(4)
#define SSCX_CON_TO_SSOC_OFS            _SSC_UL(8)
#define SSCX_CON_TO_SSOTC_OFS           _SSC_UL(12)
#define SSCX_CON_TO_TB_OFS              _SSC_UL(16)
#define SSCX_CON_TO_RB_OFS              _SSC_UL(20)
#define SSCX_CON_TO_STAT_OFS            _SSC_UL(24)

/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
/*!!! the following macros must be consistant to the corresponding SSC0 AND SSC1 macros below  !!!*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
/* SSCX_CON_EN (rw) */
#define SSCX_CON_EN_POS                 _SSC_UL(15)
#define SSCX_CON_EN_LEN                 _SSC_UL(1)

/* SSCX_CON_BM (rw) */
#define SSCX_CON_BM_POS                 _SSC_UL(0)
#define SSCX_CON_BM_LEN                 _SSC_UL(4)

/* SSCX_STAT_BSY (rh) */
#define SSCX_STAT_BSY_POS               _SSC_UL(12)
#define SSCX_STAT_BSY_LEN               _SSC_UL(1)

/* SSCX_PISEL_MRIS (rw) */
#define SSCX_PISEL_MRIS_POS             _SSC_UL(0)
#define SSCX_PISEL_MRIS_LEN             _SSC_UL(1)


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

/* SSC0_BR_BR_VALUE (rw) */
#define SSC0_BR_BR_VALUE_POS           _SSC_UL(0)
#define SSC0_BR_BR_VALUE_LEN           _SSC_UL(16)

/* SSC0_CLC_DISR (rw) */
#define SSC0_CLC_DISR_POS              _SSC_UL(0)
#define SSC0_CLC_DISR_LEN              _SSC_UL(1)

/* SSC0_CLC_DISS (r) */
#define SSC0_CLC_DISS_POS              _SSC_UL(1)
#define SSC0_CLC_DISS_LEN              _SSC_UL(1)

/* SSC0_CLC_EDIS (rw) */
#define SSC0_CLC_EDIS_POS              _SSC_UL(3)
#define SSC0_CLC_EDIS_LEN              _SSC_UL(1)

/* SSC0_CLC_FSOE (rw) */
#define SSC0_CLC_FSOE_POS              _SSC_UL(5)
#define SSC0_CLC_FSOE_LEN              _SSC_UL(1)

/* SSC0_CLC_SBWE (w) */
#define SSC0_CLC_SBWE_POS              _SSC_UL(4)
#define SSC0_CLC_SBWE_LEN              _SSC_UL(1)

/* SSC0_CLC_SPEN (rw) */
#define SSC0_CLC_SPEN_POS              _SSC_UL(2)
#define SSC0_CLC_SPEN_LEN              _SSC_UL(1)

/* SSC0_CON_AREN (rw) */
#define SSC0_CON_AREN_POS              _SSC_UL(12)
#define SSC0_CON_AREN_LEN              _SSC_UL(1)

/* SSC0_CON_BEN (rw) */
#define SSC0_CON_BEN_POS               _SSC_UL(11)
#define SSC0_CON_BEN_LEN               _SSC_UL(1)

/* SSC0_CON_BM (rw) */
#define SSC0_CON_BM_POS                _SSC_UL(0)
#define SSC0_CON_BM_LEN                _SSC_UL(4)

/* SSC0_CON_EN (rw) */
#define SSC0_CON_EN_POS                _SSC_UL(15)
#define SSC0_CON_EN_LEN                _SSC_UL(1)

/* SSC0_CON_HB (rw) */
#define SSC0_CON_HB_POS                _SSC_UL(4)
#define SSC0_CON_HB_LEN                _SSC_UL(1)

/* SSC0_CON_LB (rw) */
#define SSC0_CON_LB_POS                _SSC_UL(7)
#define SSC0_CON_LB_LEN                _SSC_UL(1)

/* SSC0_CON_MS (rw) */
#define SSC0_CON_MS_POS                _SSC_UL(14)
#define SSC0_CON_MS_LEN                _SSC_UL(1)

/* SSC0_CON_PEN (rw) */
#define SSC0_CON_PEN_POS               _SSC_UL(10)
#define SSC0_CON_PEN_LEN               _SSC_UL(1)

/* SSC0_CON_PH (rw) */
#define SSC0_CON_PH_POS                _SSC_UL(5)
#define SSC0_CON_PH_LEN                _SSC_UL(1)

/* SSC0_CON_PO (rw) */
#define SSC0_CON_PO_POS                _SSC_UL(6)
#define SSC0_CON_PO_LEN                _SSC_UL(1)

/* SSC0_CON_REN (rw) */
#define SSC0_CON_REN_POS               _SSC_UL(9)
#define SSC0_CON_REN_LEN               _SSC_UL(1)

/* SSC0_CON_TEN (rw) */
#define SSC0_CON_TEN_POS               _SSC_UL(8)
#define SSC0_CON_TEN_LEN               _SSC_UL(1)

/* SSC0_EFM_CLRBE (w) */
#define SSC0_EFM_CLRBE_POS             _SSC_UL(11)
#define SSC0_EFM_CLRBE_LEN             _SSC_UL(1)

/* SSC0_EFM_CLRPE (w) */
#define SSC0_EFM_CLRPE_POS             _SSC_UL(10)
#define SSC0_EFM_CLRPE_LEN             _SSC_UL(1)

/* SSC0_EFM_CLRRE (w) */
#define SSC0_EFM_CLRRE_POS             _SSC_UL(9)
#define SSC0_EFM_CLRRE_LEN             _SSC_UL(1)

/* SSC0_EFM_CLRTE (w) */
#define SSC0_EFM_CLRTE_POS             _SSC_UL(8)
#define SSC0_EFM_CLRTE_LEN             _SSC_UL(1)

/* SSC0_EFM_SETBE (w) */
#define SSC0_EFM_SETBE_POS             _SSC_UL(15)
#define SSC0_EFM_SETBE_LEN             _SSC_UL(1)

/* SSC0_EFM_SETPE (w) */
#define SSC0_EFM_SETPE_POS             _SSC_UL(14)
#define SSC0_EFM_SETPE_LEN             _SSC_UL(1)

/* SSC0_EFM_SETRE (w) */
#define SSC0_EFM_SETRE_POS             _SSC_UL(13)
#define SSC0_EFM_SETRE_LEN             _SSC_UL(1)

/* SSC0_EFM_SETTE (w) */
#define SSC0_EFM_SETTE_POS             _SSC_UL(12)
#define SSC0_EFM_SETTE_LEN             _SSC_UL(1)

/* SSC0_ESRC_CLRR (w) */
#define SSC0_ESRC_CLRR_POS             _SSC_UL(14)
#define SSC0_ESRC_CLRR_LEN             _SSC_UL(1)

/* SSC0_ESRC_SETR (w) */
#define SSC0_ESRC_SETR_POS             _SSC_UL(15)
#define SSC0_ESRC_SETR_LEN             _SSC_UL(1)

/* SSC0_ESRC_SRE (rw) */
#define SSC0_ESRC_SRE_POS              _SSC_UL(12)
#define SSC0_ESRC_SRE_LEN              _SSC_UL(1)

/* SSC0_ESRC_SRPN (rw) */
#define SSC0_ESRC_SRPN_POS             _SSC_UL(0)
#define SSC0_ESRC_SRPN_LEN             _SSC_UL(8)

/* SSC0_ESRC_SRR (rh) */
#define SSC0_ESRC_SRR_POS              _SSC_UL(13)
#define SSC0_ESRC_SRR_LEN              _SSC_UL(1)

/* SSC0_ESRC_TOS (rw) */
#define SSC0_ESRC_TOS_POS              _SSC_UL(10)
#define SSC0_ESRC_TOS_LEN              _SSC_UL(1)

/* SSC0_FDR_DISCLK (rwh) */
#define SSC0_FDR_DISCLK_POS            _SSC_UL(31)
#define SSC0_FDR_DISCLK_LEN            _SSC_UL(1)

/* SSC0_FDR_DM (rw) */
#define SSC0_FDR_DM_POS                _SSC_UL(14)
#define SSC0_FDR_DM_LEN                _SSC_UL(2)

/* SSC0_FDR_ENHW (rw) */
#define SSC0_FDR_ENHW_POS              _SSC_UL(30)
#define SSC0_FDR_ENHW_LEN              _SSC_UL(1)

/* SSC0_FDR_RESULT (rh) */
#define SSC0_FDR_RESULT_POS            _SSC_UL(16)
#define SSC0_FDR_RESULT_LEN            _SSC_UL(10)

/* SSC0_FDR_SC (rw) */
#define SSC0_FDR_SC_POS                _SSC_UL(12)
#define SSC0_FDR_SC_LEN                _SSC_UL(2)

/* SSC0_FDR_STEP (rw) */
#define SSC0_FDR_STEP_POS              _SSC_UL(0)
#define SSC0_FDR_STEP_LEN              _SSC_UL(10)

/* SSC0_FDR_SUSACK (rh) */
#define SSC0_FDR_SUSACK_POS            _SSC_UL(28)
#define SSC0_FDR_SUSACK_LEN            _SSC_UL(1)

/* SSC0_FDR_SUSREQ (rh) */
#define SSC0_FDR_SUSREQ_POS            _SSC_UL(29)
#define SSC0_FDR_SUSREQ_LEN            _SSC_UL(1)

/* SSC0_FSTAT_RXFFL (rh) */
#define SSC0_FSTAT_RXFFL_POS           _SSC_UL(0)
#define SSC0_FSTAT_RXFFL_LEN           _SSC_UL(4)

/* SSC0_FSTAT_TXFFL (rh) */
#define SSC0_FSTAT_TXFFL_POS           _SSC_UL(8)
#define SSC0_FSTAT_TXFFL_LEN           _SSC_UL(4)

/* SSC0_ID_MOD_NUMBER (r) */
#define SSC0_ID_MOD_NUMBER_POS         _SSC_UL(16)
#define SSC0_ID_MOD_NUMBER_LEN         _SSC_UL(16)

/* SSC0_ID_MOD_REV (r) */
#define SSC0_ID_MOD_REV_POS            _SSC_UL(0)
#define SSC0_ID_MOD_REV_LEN            _SSC_UL(8)

/* SSC0_ID_MOD_TYPE (r) */
#define SSC0_ID_MOD_TYPE_POS           _SSC_UL(8)
#define SSC0_ID_MOD_TYPE_LEN           _SSC_UL(8)

/* SSC0_PISEL_MRIS (rw) */
#define SSC0_PISEL_MRIS_POS            _SSC_UL(0)
#define SSC0_PISEL_MRIS_LEN            _SSC_UL(1)

/* SSC0_PISEL_SCIS (rw) */
#define SSC0_PISEL_SCIS_POS            _SSC_UL(2)
#define SSC0_PISEL_SCIS_LEN            _SSC_UL(1)

/* SSC0_PISEL_SLSIS (rw) */
#define SSC0_PISEL_SLSIS_POS           _SSC_UL(3)
#define SSC0_PISEL_SLSIS_LEN           _SSC_UL(3)

/* SSC0_PISEL_SRIS (rw) */
#define SSC0_PISEL_SRIS_POS            _SSC_UL(1)
#define SSC0_PISEL_SRIS_LEN            _SSC_UL(1)

/* SSC0_PISEL_STIP (rw) */
#define SSC0_PISEL_STIP_POS            _SSC_UL(8)
#define SSC0_PISEL_STIP_LEN            _SSC_UL(1)

/* SSC0_RB_RB_VALUE (rh) */
#define SSC0_RB_RB_VALUE_POS           _SSC_UL(0)
#define SSC0_RB_RB_VALUE_LEN           _SSC_UL(16)

/* SSC0_RSRC_CLRR (w) */
#define SSC0_RSRC_CLRR_POS             _SSC_UL(14)
#define SSC0_RSRC_CLRR_LEN             _SSC_UL(1)

/* SSC0_RSRC_SETR (w) */
#define SSC0_RSRC_SETR_POS             _SSC_UL(15)
#define SSC0_RSRC_SETR_LEN             _SSC_UL(1)

/* SSC0_RSRC_SRE (rw) */
#define SSC0_RSRC_SRE_POS              _SSC_UL(12)
#define SSC0_RSRC_SRE_LEN              _SSC_UL(1)

/* SSC0_RSRC_SRPN (rw) */
#define SSC0_RSRC_SRPN_POS             _SSC_UL(0)
#define SSC0_RSRC_SRPN_LEN             _SSC_UL(8)

/* SSC0_RSRC_SRR (rh) */
#define SSC0_RSRC_SRR_POS              _SSC_UL(13)
#define SSC0_RSRC_SRR_LEN              _SSC_UL(1)

/* SSC0_RSRC_TOS (rw) */
#define SSC0_RSRC_TOS_POS              _SSC_UL(10)
#define SSC0_RSRC_TOS_LEN              _SSC_UL(1)

/* SSC0_RXFCON_RXFEN (rw) */
#define SSC0_RXFCON_RXFEN_POS          _SSC_UL(0)
#define SSC0_RXFCON_RXFEN_LEN          _SSC_UL(1)

/* SSC0_RXFCON_RXFFLU (w) */
#define SSC0_RXFCON_RXFFLU_POS         _SSC_UL(1)
#define SSC0_RXFCON_RXFFLU_LEN         _SSC_UL(1)

/* SSC0_RXFCON_RXFITL (rw) */
#define SSC0_RXFCON_RXFITL_POS         _SSC_UL(8)
#define SSC0_RXFCON_RXFITL_LEN         _SSC_UL(4)

/* SSC0_RXFCON_RXTMEN (rw) */
#define SSC0_RXFCON_RXTMEN_POS         _SSC_UL(2)
#define SSC0_RXFCON_RXTMEN_LEN         _SSC_UL(1)

/* SSC0_SSOC_AOL0 (rw) */
#define SSC0_SSOC_AOL0_POS             _SSC_UL(0)
#define SSC0_SSOC_AOL0_LEN             _SSC_UL(1)

/* SSC0_SSOC_AOL1 (rw) */
#define SSC0_SSOC_AOL1_POS             _SSC_UL(1)
#define SSC0_SSOC_AOL1_LEN             _SSC_UL(1)

/* SSC0_SSOC_AOL2 (rw) */
#define SSC0_SSOC_AOL2_POS             _SSC_UL(2)
#define SSC0_SSOC_AOL2_LEN             _SSC_UL(1)

/* SSC0_SSOC_AOL3 (rw) */
#define SSC0_SSOC_AOL3_POS             _SSC_UL(3)
#define SSC0_SSOC_AOL3_LEN             _SSC_UL(1)

/* SSC0_SSOC_AOL4 (rw) */
#define SSC0_SSOC_AOL4_POS             _SSC_UL(4)
#define SSC0_SSOC_AOL4_LEN             _SSC_UL(1)

/* SSC0_SSOC_AOL5 (rw) */
#define SSC0_SSOC_AOL5_POS             _SSC_UL(5)
#define SSC0_SSOC_AOL5_LEN             _SSC_UL(1)

/* SSC0_SSOC_AOL6 (rw) */
#define SSC0_SSOC_AOL6_POS             _SSC_UL(6)
#define SSC0_SSOC_AOL6_LEN             _SSC_UL(1)

/* SSC0_SSOC_AOL7 (rw) */
#define SSC0_SSOC_AOL7_POS             _SSC_UL(7)
#define SSC0_SSOC_AOL7_LEN             _SSC_UL(1)

/* SSC0_SSOC_OEN0 (rw) */
#define SSC0_SSOC_OEN0_POS             _SSC_UL(8)
#define SSC0_SSOC_OEN0_LEN             _SSC_UL(1)

/* SSC0_SSOC_OEN1 (rw) */
#define SSC0_SSOC_OEN1_POS             _SSC_UL(9)
#define SSC0_SSOC_OEN1_LEN             _SSC_UL(1)

/* SSC0_SSOC_OEN2 (rw) */
#define SSC0_SSOC_OEN2_POS             _SSC_UL(10)
#define SSC0_SSOC_OEN2_LEN             _SSC_UL(1)

/* SSC0_SSOC_OEN3 (rw) */
#define SSC0_SSOC_OEN3_POS             _SSC_UL(11)
#define SSC0_SSOC_OEN3_LEN             _SSC_UL(1)

/* SSC0_SSOC_OEN4 (rw) */
#define SSC0_SSOC_OEN4_POS             _SSC_UL(12)
#define SSC0_SSOC_OEN4_LEN             _SSC_UL(1)

/* SSC0_SSOC_OEN5 (rw) */
#define SSC0_SSOC_OEN5_POS             _SSC_UL(13)
#define SSC0_SSOC_OEN5_LEN             _SSC_UL(1)

/* SSC0_SSOC_OEN6 (rw) */
#define SSC0_SSOC_OEN6_POS             _SSC_UL(14)
#define SSC0_SSOC_OEN6_LEN             _SSC_UL(1)

/* SSC0_SSOC_OEN7 (rw) */
#define SSC0_SSOC_OEN7_POS             _SSC_UL(15)
#define SSC0_SSOC_OEN7_LEN             _SSC_UL(1)

/* SSC0_SSOTC_INACT (rw) */
#define SSC0_SSOTC_INACT_POS           _SSC_UL(4)
#define SSC0_SSOTC_INACT_LEN           _SSC_UL(2)

/* SSC0_SSOTC_LEAD (rw) */
#define SSC0_SSOTC_LEAD_POS            _SSC_UL(0)
#define SSC0_SSOTC_LEAD_LEN            _SSC_UL(2)

/* SSC0_SSOTC_SLSO7MOD (rw) */
#define SSC0_SSOTC_SLSO7MOD_POS        _SSC_UL(8)
#define SSC0_SSOTC_SLSO7MOD_LEN        _SSC_UL(1)

/* SSC0_SSOTC_TRAIL (rw) */
#define SSC0_SSOTC_TRAIL_POS           _SSC_UL(2)
#define SSC0_SSOTC_TRAIL_LEN           _SSC_UL(2)

/* SSC0_STAT_BC (rh) */
#define SSC0_STAT_BC_POS               _SSC_UL(0)
#define SSC0_STAT_BC_LEN               _SSC_UL(4)

/* SSC0_STAT_BE (rh) */
#define SSC0_STAT_BE_POS               _SSC_UL(11)
#define SSC0_STAT_BE_LEN               _SSC_UL(1)

/* SSC0_STAT_BSY (rh) */
#define SSC0_STAT_BSY_POS              _SSC_UL(12)
#define SSC0_STAT_BSY_LEN              _SSC_UL(1)

/* SSC0_STAT_PE (rh) */
#define SSC0_STAT_PE_POS               _SSC_UL(10)
#define SSC0_STAT_PE_LEN               _SSC_UL(1)

/* SSC0_STAT_RE (rh) */
#define SSC0_STAT_RE_POS               _SSC_UL(9)
#define SSC0_STAT_RE_LEN               _SSC_UL(1)

/* SSC0_STAT_TE (rh) */
#define SSC0_STAT_TE_POS               _SSC_UL(8)
#define SSC0_STAT_TE_LEN               _SSC_UL(1)

/* SSC0_TB_TB_VALUE (rw) */
#define SSC0_TB_TB_VALUE_POS           _SSC_UL(0)
#define SSC0_TB_TB_VALUE_LEN           _SSC_UL(16)

/* SSC0_TSRC_CLRR (w) */
#define SSC0_TSRC_CLRR_POS             _SSC_UL(14)
#define SSC0_TSRC_CLRR_LEN             _SSC_UL(1)

/* SSC0_TSRC_SETR (w) */
#define SSC0_TSRC_SETR_POS             _SSC_UL(15)
#define SSC0_TSRC_SETR_LEN             _SSC_UL(1)

/* SSC0_TSRC_SRE (rw) */
#define SSC0_TSRC_SRE_POS              _SSC_UL(12)
#define SSC0_TSRC_SRE_LEN              _SSC_UL(1)

/* SSC0_TSRC_SRPN (rw) */
#define SSC0_TSRC_SRPN_POS             _SSC_UL(0)
#define SSC0_TSRC_SRPN_LEN             _SSC_UL(8)

/* SSC0_TSRC_SRR (rh) */
#define SSC0_TSRC_SRR_POS              _SSC_UL(13)
#define SSC0_TSRC_SRR_LEN              _SSC_UL(1)

/* SSC0_TSRC_TOS (rw) */
#define SSC0_TSRC_TOS_POS              _SSC_UL(10)
#define SSC0_TSRC_TOS_LEN              _SSC_UL(1)

/* SSC0_TXFCON_TXFEN (rw) */
#define SSC0_TXFCON_TXFEN_POS          _SSC_UL(0)
#define SSC0_TXFCON_TXFEN_LEN          _SSC_UL(1)

/* SSC0_TXFCON_TXFFLU (w) */
#define SSC0_TXFCON_TXFFLU_POS         _SSC_UL(1)
#define SSC0_TXFCON_TXFFLU_LEN         _SSC_UL(1)

/* SSC0_TXFCON_TXFITL (rw) */
#define SSC0_TXFCON_TXFITL_POS         _SSC_UL(8)
#define SSC0_TXFCON_TXFITL_LEN         _SSC_UL(4)

/* SSC0_TXFCON_TXTMEN (rw) */
#define SSC0_TXFCON_TXTMEN_POS         _SSC_UL(2)
#define SSC0_TXFCON_TXTMEN_LEN         _SSC_UL(1)

/* SSC1_BR_BR_VALUE (rw) */
#define SSC1_BR_BR_VALUE_POS           _SSC_UL(0)
#define SSC1_BR_BR_VALUE_LEN           _SSC_UL(16)

/* SSC1_CLC_DISR (rw) */
#define SSC1_CLC_DISR_POS              _SSC_UL(0)
#define SSC1_CLC_DISR_LEN              _SSC_UL(1)

/* SSC1_CLC_DISS (r) */
#define SSC1_CLC_DISS_POS              _SSC_UL(1)
#define SSC1_CLC_DISS_LEN              _SSC_UL(1)

/* SSC1_CLC_EDIS (rw) */
#define SSC1_CLC_EDIS_POS              _SSC_UL(3)
#define SSC1_CLC_EDIS_LEN              _SSC_UL(1)

/* SSC1_CLC_FSOE (rw) */
#define SSC1_CLC_FSOE_POS              _SSC_UL(5)
#define SSC1_CLC_FSOE_LEN              _SSC_UL(1)

/* SSC1_CLC_SBWE (w) */
#define SSC1_CLC_SBWE_POS              _SSC_UL(4)
#define SSC1_CLC_SBWE_LEN              _SSC_UL(1)

/* SSC1_CLC_SPEN (rw) */
#define SSC1_CLC_SPEN_POS              _SSC_UL(2)
#define SSC1_CLC_SPEN_LEN              _SSC_UL(1)

/* SSC1_CON_AREN (rw) */
#define SSC1_CON_AREN_POS              _SSC_UL(12)
#define SSC1_CON_AREN_LEN              _SSC_UL(1)

/* SSC1_CON_BEN (rw) */
#define SSC1_CON_BEN_POS               _SSC_UL(11)
#define SSC1_CON_BEN_LEN               _SSC_UL(1)

/* SSC1_CON_BM (rw) */
#define SSC1_CON_BM_POS                _SSC_UL(0)
#define SSC1_CON_BM_LEN                _SSC_UL(4)

/* SSC1_CON_EN (rw) */
#define SSC1_CON_EN_POS                _SSC_UL(15)
#define SSC1_CON_EN_LEN                _SSC_UL(1)

/* SSC1_CON_HB (rw) */
#define SSC1_CON_HB_POS                _SSC_UL(4)
#define SSC1_CON_HB_LEN                _SSC_UL(1)

/* SSC1_CON_LB (rw) */
#define SSC1_CON_LB_POS                _SSC_UL(7)
#define SSC1_CON_LB_LEN                _SSC_UL(1)

/* SSC1_CON_MS (rw) */
#define SSC1_CON_MS_POS                _SSC_UL(14)
#define SSC1_CON_MS_LEN                _SSC_UL(1)

/* SSC1_CON_PEN (rw) */
#define SSC1_CON_PEN_POS               _SSC_UL(10)
#define SSC1_CON_PEN_LEN               _SSC_UL(1)

/* SSC1_CON_PH (rw) */
#define SSC1_CON_PH_POS                _SSC_UL(5)
#define SSC1_CON_PH_LEN                _SSC_UL(1)

/* SSC1_CON_PO (rw) */
#define SSC1_CON_PO_POS                _SSC_UL(6)
#define SSC1_CON_PO_LEN                _SSC_UL(1)

/* SSC1_CON_REN (rw) */
#define SSC1_CON_REN_POS               _SSC_UL(9)
#define SSC1_CON_REN_LEN               _SSC_UL(1)

/* SSC1_CON_TEN (rw) */
#define SSC1_CON_TEN_POS               _SSC_UL(8)
#define SSC1_CON_TEN_LEN               _SSC_UL(1)

/* SSC1_EFM_CLRBE (w) */
#define SSC1_EFM_CLRBE_POS             _SSC_UL(11)
#define SSC1_EFM_CLRBE_LEN             _SSC_UL(1)

/* SSC1_EFM_CLRPE (w) */
#define SSC1_EFM_CLRPE_POS             _SSC_UL(10)
#define SSC1_EFM_CLRPE_LEN             _SSC_UL(1)

/* SSC1_EFM_CLRRE (w) */
#define SSC1_EFM_CLRRE_POS             _SSC_UL(9)
#define SSC1_EFM_CLRRE_LEN             _SSC_UL(1)

/* SSC1_EFM_CLRTE (w) */
#define SSC1_EFM_CLRTE_POS             _SSC_UL(8)
#define SSC1_EFM_CLRTE_LEN             _SSC_UL(1)

/* SSC1_EFM_SETBE (w) */
#define SSC1_EFM_SETBE_POS             _SSC_UL(15)
#define SSC1_EFM_SETBE_LEN             _SSC_UL(1)

/* SSC1_EFM_SETPE (w) */
#define SSC1_EFM_SETPE_POS             _SSC_UL(14)
#define SSC1_EFM_SETPE_LEN             _SSC_UL(1)

/* SSC1_EFM_SETRE (w) */
#define SSC1_EFM_SETRE_POS             _SSC_UL(13)
#define SSC1_EFM_SETRE_LEN             _SSC_UL(1)

/* SSC1_EFM_SETTE (w) */
#define SSC1_EFM_SETTE_POS             _SSC_UL(12)
#define SSC1_EFM_SETTE_LEN             _SSC_UL(1)

/* SSC1_ESRC_CLRR (w) */
#define SSC1_ESRC_CLRR_POS             _SSC_UL(14)
#define SSC1_ESRC_CLRR_LEN             _SSC_UL(1)

/* SSC1_ESRC_SETR (w) */
#define SSC1_ESRC_SETR_POS             _SSC_UL(15)
#define SSC1_ESRC_SETR_LEN             _SSC_UL(1)

/* SSC1_ESRC_SRE (rw) */
#define SSC1_ESRC_SRE_POS              _SSC_UL(12)
#define SSC1_ESRC_SRE_LEN              _SSC_UL(1)

/* SSC1_ESRC_SRPN (rw) */
#define SSC1_ESRC_SRPN_POS             _SSC_UL(0)
#define SSC1_ESRC_SRPN_LEN             _SSC_UL(8)

/* SSC1_ESRC_SRR (rh) */
#define SSC1_ESRC_SRR_POS              _SSC_UL(13)
#define SSC1_ESRC_SRR_LEN              _SSC_UL(1)

/* SSC1_ESRC_TOS (rw) */
#define SSC1_ESRC_TOS_POS              _SSC_UL(10)
#define SSC1_ESRC_TOS_LEN              _SSC_UL(1)

/* SSC1_FDR_DISCLK (rwh) */
#define SSC1_FDR_DISCLK_POS            _SSC_UL(31)
#define SSC1_FDR_DISCLK_LEN            _SSC_UL(1)

/* SSC1_FDR_DM (rw) */
#define SSC1_FDR_DM_POS                _SSC_UL(14)
#define SSC1_FDR_DM_LEN                _SSC_UL(2)

/* SSC1_FDR_ENHW (rw) */
#define SSC1_FDR_ENHW_POS              _SSC_UL(30)
#define SSC1_FDR_ENHW_LEN              _SSC_UL(1)

/* SSC1_FDR_RESULT (rh) */
#define SSC1_FDR_RESULT_POS            _SSC_UL(16)
#define SSC1_FDR_RESULT_LEN            _SSC_UL(10)

/* SSC1_FDR_SC (rw) */
#define SSC1_FDR_SC_POS                _SSC_UL(12)
#define SSC1_FDR_SC_LEN                _SSC_UL(2)

/* SSC1_FDR_STEP (rw) */
#define SSC1_FDR_STEP_POS              _SSC_UL(0)
#define SSC1_FDR_STEP_LEN              _SSC_UL(10)

/* SSC1_FDR_SUSACK (rh) */
#define SSC1_FDR_SUSACK_POS            _SSC_UL(28)
#define SSC1_FDR_SUSACK_LEN            _SSC_UL(1)

/* SSC1_FDR_SUSREQ (rh) */
#define SSC1_FDR_SUSREQ_POS            _SSC_UL(29)
#define SSC1_FDR_SUSREQ_LEN            _SSC_UL(1)

/* SSC1_ID_MOD_NUMBER (r) */
#define SSC1_ID_MOD_NUMBER_POS         _SSC_UL(16)
#define SSC1_ID_MOD_NUMBER_LEN         _SSC_UL(16)

/* SSC1_ID_MOD_REV (r) */
#define SSC1_ID_MOD_REV_POS            _SSC_UL(0)
#define SSC1_ID_MOD_REV_LEN            _SSC_UL(8)

/* SSC1_ID_MOD_TYPE (r) */
#define SSC1_ID_MOD_TYPE_POS           _SSC_UL(8)
#define SSC1_ID_MOD_TYPE_LEN           _SSC_UL(8)

/* SSC1_PISEL_MRIS (rw) */
#define SSC1_PISEL_MRIS_POS            _SSC_UL(0)
#define SSC1_PISEL_MRIS_LEN            _SSC_UL(1)

/* SSC1_PISEL_SCIS (rw) */
#define SSC1_PISEL_SCIS_POS            _SSC_UL(2)
#define SSC1_PISEL_SCIS_LEN            _SSC_UL(1)

/* SSC1_PISEL_SLSIS (rw) */
#define SSC1_PISEL_SLSIS_POS           _SSC_UL(3)
#define SSC1_PISEL_SLSIS_LEN           _SSC_UL(3)

/* SSC1_PISEL_SRIS (rw) */
#define SSC1_PISEL_SRIS_POS            _SSC_UL(1)
#define SSC1_PISEL_SRIS_LEN            _SSC_UL(1)

/* SSC1_PISEL_STIP (rw) */
#define SSC1_PISEL_STIP_POS            _SSC_UL(8)
#define SSC1_PISEL_STIP_LEN            _SSC_UL(1)

/* SSC1_RB_RB_VALUE (rh) */
#define SSC1_RB_RB_VALUE_POS           _SSC_UL(0)
#define SSC1_RB_RB_VALUE_LEN           _SSC_UL(16)

/* SSC1_RSRC_CLRR (w) */
#define SSC1_RSRC_CLRR_POS             _SSC_UL(14)
#define SSC1_RSRC_CLRR_LEN             _SSC_UL(1)

/* SSC1_RSRC_SETR (w) */
#define SSC1_RSRC_SETR_POS             _SSC_UL(15)
#define SSC1_RSRC_SETR_LEN             _SSC_UL(1)

/* SSC1_RSRC_SRE (rw) */
#define SSC1_RSRC_SRE_POS              _SSC_UL(12)
#define SSC1_RSRC_SRE_LEN              _SSC_UL(1)

/* SSC1_RSRC_SRPN (rw) */
#define SSC1_RSRC_SRPN_POS             _SSC_UL(0)
#define SSC1_RSRC_SRPN_LEN             _SSC_UL(8)

/* SSC1_RSRC_SRR (rh) */
#define SSC1_RSRC_SRR_POS              _SSC_UL(13)
#define SSC1_RSRC_SRR_LEN              _SSC_UL(1)

/* SSC1_RSRC_TOS (rw) */
#define SSC1_RSRC_TOS_POS              _SSC_UL(10)
#define SSC1_RSRC_TOS_LEN              _SSC_UL(1)

/* SSC1_SSOC_AOL0 (rw) */
#define SSC1_SSOC_AOL0_POS             _SSC_UL(0)
#define SSC1_SSOC_AOL0_LEN             _SSC_UL(1)

/* SSC1_SSOC_AOL1 (rw) */
#define SSC1_SSOC_AOL1_POS             _SSC_UL(1)
#define SSC1_SSOC_AOL1_LEN             _SSC_UL(1)

/* SSC1_SSOC_AOL2 (rw) */
#define SSC1_SSOC_AOL2_POS             _SSC_UL(2)
#define SSC1_SSOC_AOL2_LEN             _SSC_UL(1)

/* SSC1_SSOC_AOL3 (rw) */
#define SSC1_SSOC_AOL3_POS             _SSC_UL(3)
#define SSC1_SSOC_AOL3_LEN             _SSC_UL(1)

/* SSC1_SSOC_AOL4 (rw) */
#define SSC1_SSOC_AOL4_POS             _SSC_UL(4)
#define SSC1_SSOC_AOL4_LEN             _SSC_UL(1)

/* SSC1_SSOC_AOL5 (rw) */
#define SSC1_SSOC_AOL5_POS             _SSC_UL(5)
#define SSC1_SSOC_AOL5_LEN             _SSC_UL(1)

/* SSC1_SSOC_AOL6 (rw) */
#define SSC1_SSOC_AOL6_POS             _SSC_UL(6)
#define SSC1_SSOC_AOL6_LEN             _SSC_UL(1)

/* SSC1_SSOC_AOL7 (rw) */
#define SSC1_SSOC_AOL7_POS             _SSC_UL(7)
#define SSC1_SSOC_AOL7_LEN             _SSC_UL(1)

/* SSC1_SSOC_OEN0 (rw) */
#define SSC1_SSOC_OEN0_POS             _SSC_UL(8)
#define SSC1_SSOC_OEN0_LEN             _SSC_UL(1)

/* SSC1_SSOC_OEN1 (rw) */
#define SSC1_SSOC_OEN1_POS             _SSC_UL(9)
#define SSC1_SSOC_OEN1_LEN             _SSC_UL(1)

/* SSC1_SSOC_OEN2 (rw) */
#define SSC1_SSOC_OEN2_POS             _SSC_UL(10)
#define SSC1_SSOC_OEN2_LEN             _SSC_UL(1)

/* SSC1_SSOC_OEN3 (rw) */
#define SSC1_SSOC_OEN3_POS             _SSC_UL(11)
#define SSC1_SSOC_OEN3_LEN             _SSC_UL(1)

/* SSC1_SSOC_OEN4 (rw) */
#define SSC1_SSOC_OEN4_POS             _SSC_UL(12)
#define SSC1_SSOC_OEN4_LEN             _SSC_UL(1)

/* SSC1_SSOC_OEN5 (rw) */
#define SSC1_SSOC_OEN5_POS             _SSC_UL(13)
#define SSC1_SSOC_OEN5_LEN             _SSC_UL(1)

/* SSC1_SSOC_OEN6 (rw) */
#define SSC1_SSOC_OEN6_POS             _SSC_UL(14)
#define SSC1_SSOC_OEN6_LEN             _SSC_UL(1)

/* SSC1_SSOC_OEN7 (rw) */
#define SSC1_SSOC_OEN7_POS             _SSC_UL(15)
#define SSC1_SSOC_OEN7_LEN             _SSC_UL(1)

/* SSC1_SSOTC_INACT (rw) */
#define SSC1_SSOTC_INACT_POS           _SSC_UL(4)
#define SSC1_SSOTC_INACT_LEN           _SSC_UL(2)

/* SSC1_SSOTC_LEAD (rw) */
#define SSC1_SSOTC_LEAD_POS            _SSC_UL(0)
#define SSC1_SSOTC_LEAD_LEN            _SSC_UL(2)

/* SSC1_SSOTC_SLSO7MOD (rw) */
#define SSC1_SSOTC_SLSO7MOD_POS        _SSC_UL(8)
#define SSC1_SSOTC_SLSO7MOD_LEN        _SSC_UL(1)

/* SSC1_SSOTC_TRAIL (rw) */
#define SSC1_SSOTC_TRAIL_POS           _SSC_UL(2)
#define SSC1_SSOTC_TRAIL_LEN           _SSC_UL(2)

/* SSC1_STAT_BC (rh) */
#define SSC1_STAT_BC_POS               _SSC_UL(0)
#define SSC1_STAT_BC_LEN               _SSC_UL(4)

/* SSC1_STAT_BE (rh) */
#define SSC1_STAT_BE_POS               _SSC_UL(11)
#define SSC1_STAT_BE_LEN               _SSC_UL(1)

/* SSC1_STAT_BSY (rh) */
#define SSC1_STAT_BSY_POS              _SSC_UL(12)
#define SSC1_STAT_BSY_LEN              _SSC_UL(1)

/* SSC1_STAT_PE (rh) */
#define SSC1_STAT_PE_POS               _SSC_UL(10)
#define SSC1_STAT_PE_LEN               _SSC_UL(1)

/* SSC1_STAT_RE (rh) */
#define SSC1_STAT_RE_POS               _SSC_UL(9)
#define SSC1_STAT_RE_LEN               _SSC_UL(1)

/* SSC1_STAT_TE (rh) */
#define SSC1_STAT_TE_POS               _SSC_UL(8)
#define SSC1_STAT_TE_LEN               _SSC_UL(1)

/* SSC1_TB_TB_VALUE (rw) */
#define SSC1_TB_TB_VALUE_POS           _SSC_UL(0)
#define SSC1_TB_TB_VALUE_LEN           _SSC_UL(16)

/* SSC1_TSRC_CLRR (w) */
#define SSC1_TSRC_CLRR_POS             _SSC_UL(14)
#define SSC1_TSRC_CLRR_LEN             _SSC_UL(1)

/* SSC1_TSRC_SETR (w) */
#define SSC1_TSRC_SETR_POS             _SSC_UL(15)
#define SSC1_TSRC_SETR_LEN             _SSC_UL(1)

/* SSC1_TSRC_SRE (rw) */
#define SSC1_TSRC_SRE_POS              _SSC_UL(12)
#define SSC1_TSRC_SRE_LEN              _SSC_UL(1)

/* SSC1_TSRC_SRPN (rw) */
#define SSC1_TSRC_SRPN_POS             _SSC_UL(0)
#define SSC1_TSRC_SRPN_LEN             _SSC_UL(8)

/* SSC1_TSRC_SRR (rh) */
#define SSC1_TSRC_SRR_POS              _SSC_UL(13)
#define SSC1_TSRC_SRR_LEN              _SSC_UL(1)

/* SSC1_TSRC_TOS (rw) */
#define SSC1_TSRC_TOS_POS              _SSC_UL(10)
#define SSC1_TSRC_TOS_LEN              _SSC_UL(1)

#endif
