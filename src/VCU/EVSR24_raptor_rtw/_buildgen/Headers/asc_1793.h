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
 * $Filename__:asc_1793.h$ 
 * 
 * $Author____:AHT2FE$ 
 * 
 * $Function__:added reg header for TC_1793$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:10.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:asc_1793$ 
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
 * 1.12.0; 0     10.03.2010 AHT2FE
 *   added support for TC_1793
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _ASC_1793_H
#define _ASC_1793_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _ASC_UL(x) x
#else
    #define _ASC_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module ASC on TC1793
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0000A00] : ASC0 Clock Control Register
    volatile uint32 PISEL;               // [0xF0000A04] : ASC0 Peripheral Input Select Register
    volatile uint32 ID;                  // [0xF0000A08] : Module Identification Register
    volatile uint32 RESERVED0[1];        // [0xF0000A0C...0xF0000A0F] : reserved space
    volatile uint32 CON;                 // [0xF0000A10] : Control Register
    volatile uint32 BG;                  // [0xF0000A14] : Baud Rate Timer/Reload Register
    volatile uint32 FDV;                 // [0xF0000A18] : Fractional Divider Register
    volatile uint32 RESERVED1[1];        // [0xF0000A1C...0xF0000A1F] : reserved space
    volatile uint32 TBUF;                // [0xF0000A20] : Transmit Buffer Register
    volatile uint32 RBUF;                // [0xF0000A24] : Receive Buffer Register
    volatile uint32 RESERVED2[10];       // [0xF0000A28...0xF0000A4F] : reserved space
    volatile uint32 WHBCON;              // [0xF0000A50] : Write Hardware Bits Control Register
    volatile uint32 RESERVED3[39];       // [0xF0000A54...0xF0000AEF] : reserved space
    volatile uint32 TSRC;                // [0xF0000AF0] : Transmit Interrupt Service Request Control Register
    volatile uint32 RSRC;                // [0xF0000AF4] : Receive Interrupt Service Request Control Register
    volatile uint32 ESRC;                // [0xF0000AF8] : Error Interrupt Service Request Control Register
    volatile uint32 TBSRC;               // [0xF0000AFC] : Transmit Buffer Interrupt Service Request Control Register
} ASC_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern ASC_RegMap_t ASC0 __attribute__ ((asection (".zbss.label_only","f=awz")));
extern ASC_RegMap_t ASC1 __attribute__ ((asection (".zbss.label_only","f=awz")));
extern ASC_RegMap_t ASC[2] __attribute__ ((asection (".zbss.label_only","f=awz")));


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

/* ASC_ID_MOD_NUMBER (r) */
#define ASC_ID_MOD_NUMBER_POS                _ASC_UL(16)
#define ASC_ID_MOD_NUMBER_LEN                _ASC_UL(16)

/* ASC_ID_MOD_REV (r) */
#define ASC_ID_MOD_REV_POS                   _ASC_UL(0)
#define ASC_ID_MOD_REV_LEN                   _ASC_UL(8)

/* ASC_ID_MOD_TYPE (r) */
#define ASC_ID_MOD_TYPE_POS                  _ASC_UL(8)
#define ASC_ID_MOD_TYPE_LEN                  _ASC_UL(8)

/* ASC0_ID_MOD_NUMBER (r) */
#define ASC0_ID_MOD_NUMBER_POS               _ASC_UL(16)
#define ASC0_ID_MOD_NUMBER_LEN               _ASC_UL(16)

/* ASC0_ID_MOD_REV (r) */
#define ASC0_ID_MOD_REV_POS                  _ASC_UL(0)
#define ASC0_ID_MOD_REV_LEN                  _ASC_UL(8)

/* ASC0_ID_MOD_TYPE (r) */
#define ASC0_ID_MOD_TYPE_POS                 _ASC_UL(8)
#define ASC0_ID_MOD_TYPE_LEN                 _ASC_UL(8)

/* ASC1_ID_MOD_NUMBER (r) */
#define ASC1_ID_MOD_NUMBER_POS               _ASC_UL(16)
#define ASC1_ID_MOD_NUMBER_LEN               _ASC_UL(16)

/* ASC1_ID_MOD_REV (r) */
#define ASC1_ID_MOD_REV_POS                  _ASC_UL(0)
#define ASC1_ID_MOD_REV_LEN                  _ASC_UL(8)

/* ASC1_ID_MOD_TYPE (r) */
#define ASC1_ID_MOD_TYPE_POS                 _ASC_UL(8)
#define ASC1_ID_MOD_TYPE_LEN                 _ASC_UL(8)

/* ASC_CLC_DISR (rw) */
#define ASC_CLC_DISR_POS                     _ASC_UL(0)
#define ASC_CLC_DISR_LEN                     _ASC_UL(1)

/* ASC_CLC_DISS (r) */
#define ASC_CLC_DISS_POS                     _ASC_UL(1)
#define ASC_CLC_DISS_LEN                     _ASC_UL(1)

/* ASC_CLC_SPEN (rw) */
#define ASC_CLC_SPEN_POS                     _ASC_UL(2)
#define ASC_CLC_SPEN_LEN                     _ASC_UL(1)

/* ASC_CLC_EDIS (rw) */
#define ASC_CLC_EDIS_POS                     _ASC_UL(3)
#define ASC_CLC_EDIS_LEN                     _ASC_UL(1)

/* ASC_CLC_SBWE (w) */
#define ASC_CLC_SBWE_POS                     _ASC_UL(4)
#define ASC_CLC_SBWE_LEN                     _ASC_UL(1)

/* ASC_CLC_FSOE (rw) */
#define ASC_CLC_FSOE_POS                     _ASC_UL(5)
#define ASC_CLC_FSOE_LEN                     _ASC_UL(1)

/* ASC_CLC_RMC (rw) */
#define ASC_CLC_RMC_POS                      _ASC_UL(8)
#define ASC_CLC_RMC_LEN                      _ASC_UL(8)

/* ASC_PISEL_RIS (rw) */
#define ASC_PISEL_RIS_POS                    _ASC_UL(0)
#define ASC_PISEL_RIS_LEN                    _ASC_UL(1)

/* ASC_ID_MODREV (r) */
#define ASC_ID_MODREV_POS                    _ASC_UL(0)
#define ASC_ID_MODREV_LEN                    _ASC_UL(8)

/* ASC_ID_MODNUM (r) */
#define ASC_ID_MODNUM_POS                    _ASC_UL(8)
#define ASC_ID_MODNUM_LEN                    _ASC_UL(8)

/* ASC_CON_M (rw) */
#define ASC_CON_M_POS                        _ASC_UL(0)
#define ASC_CON_M_LEN                        _ASC_UL(3)

/* ASC_CON_STP (rw) */
#define ASC_CON_STP_POS                      _ASC_UL(3)
#define ASC_CON_STP_LEN                      _ASC_UL(1)

/* ASC_CON_REN (rwh) */
#define ASC_CON_REN_POS                      _ASC_UL(4)
#define ASC_CON_REN_LEN                      _ASC_UL(1)

/* ASC_CON_PEN (rw) */
#define ASC_CON_PEN_POS                      _ASC_UL(5)
#define ASC_CON_PEN_LEN                      _ASC_UL(1)

/* ASC_CON_FEN (rw) */
#define ASC_CON_FEN_POS                      _ASC_UL(6)
#define ASC_CON_FEN_LEN                      _ASC_UL(1)

/* ASC_CON_OEN (rw) */
#define ASC_CON_OEN_POS                      _ASC_UL(7)
#define ASC_CON_OEN_LEN                      _ASC_UL(1)

/* ASC_CON_PE (rwh) */
#define ASC_CON_PE_POS                       _ASC_UL(8)
#define ASC_CON_PE_LEN                       _ASC_UL(1)

/* ASC_CON_FE (rwh) */
#define ASC_CON_FE_POS                       _ASC_UL(9)
#define ASC_CON_FE_LEN                       _ASC_UL(1)

/* ASC_CON_OE (rwh) */
#define ASC_CON_OE_POS                       _ASC_UL(10)
#define ASC_CON_OE_LEN                       _ASC_UL(1)

/* ASC_CON_FDE (rw) */
#define ASC_CON_FDE_POS                      _ASC_UL(11)
#define ASC_CON_FDE_LEN                      _ASC_UL(1)

/* ASC_CON_ODD (rw) */
#define ASC_CON_ODD_POS                      _ASC_UL(12)
#define ASC_CON_ODD_LEN                      _ASC_UL(1)

/* ASC_CON_BRS (rw) */
#define ASC_CON_BRS_POS                      _ASC_UL(13)
#define ASC_CON_BRS_LEN                      _ASC_UL(1)

/* ASC_CON_LB (rw) */
#define ASC_CON_LB_POS                       _ASC_UL(14)
#define ASC_CON_LB_LEN                       _ASC_UL(1)

/* ASC_CON_R (rw) */
#define ASC_CON_R_POS                        _ASC_UL(15)
#define ASC_CON_R_LEN                        _ASC_UL(1)

/* ASC_BG_BR_VALUE (rwh) */
#define ASC_BG_BR_VALUE_POS                  _ASC_UL(0)
#define ASC_BG_BR_VALUE_LEN                  _ASC_UL(13)

/* ASC_FDV_FD_VALUE (rw) */
#define ASC_FDV_FD_VALUE_POS                 _ASC_UL(0)
#define ASC_FDV_FD_VALUE_LEN                 _ASC_UL(9)

/* ASC_TBUF_TD_VALUE (rw) */
#define ASC_TBUF_TD_VALUE_POS                _ASC_UL(0)
#define ASC_TBUF_TD_VALUE_LEN                _ASC_UL(9)

/* ASC_RBUF_RD_VALUE (rh) */
#define ASC_RBUF_RD_VALUE_POS                _ASC_UL(0)
#define ASC_RBUF_RD_VALUE_LEN                _ASC_UL(9)

/* ASC_WHBCON_CLRREN (w) */
#define ASC_WHBCON_CLRREN_POS                _ASC_UL(4)
#define ASC_WHBCON_CLRREN_LEN                _ASC_UL(1)

/* ASC_WHBCON_SETREN (w) */
#define ASC_WHBCON_SETREN_POS                _ASC_UL(5)
#define ASC_WHBCON_SETREN_LEN                _ASC_UL(1)

/* ASC_WHBCON_CLRPE (w) */
#define ASC_WHBCON_CLRPE_POS                 _ASC_UL(8)
#define ASC_WHBCON_CLRPE_LEN                 _ASC_UL(1)

/* ASC_WHBCON_CLRFE (w) */
#define ASC_WHBCON_CLRFE_POS                 _ASC_UL(9)
#define ASC_WHBCON_CLRFE_LEN                 _ASC_UL(1)

/* ASC_WHBCON_CLROE (w) */
#define ASC_WHBCON_CLROE_POS                 _ASC_UL(10)
#define ASC_WHBCON_CLROE_LEN                 _ASC_UL(1)

/* ASC_WHBCON_SETPE (w) */
#define ASC_WHBCON_SETPE_POS                 _ASC_UL(11)
#define ASC_WHBCON_SETPE_LEN                 _ASC_UL(1)

/* ASC_WHBCON_SETFE (w) */
#define ASC_WHBCON_SETFE_POS                 _ASC_UL(12)
#define ASC_WHBCON_SETFE_LEN                 _ASC_UL(1)

/* ASC_WHBCON_SETOE (w) */
#define ASC_WHBCON_SETOE_POS                 _ASC_UL(13)
#define ASC_WHBCON_SETOE_LEN                 _ASC_UL(1)

/* ASC_TSRC_SRPN (rw) */
#define ASC_TSRC_SRPN_POS                    _ASC_UL(0)
#define ASC_TSRC_SRPN_LEN                    _ASC_UL(8)

/* ASC_TSRC_TOS (rw) */
#define ASC_TSRC_TOS_POS                     _ASC_UL(10)
#define ASC_TSRC_TOS_LEN                     _ASC_UL(1)

/* ASC_TSRC_SRE (rw) */
#define ASC_TSRC_SRE_POS                     _ASC_UL(12)
#define ASC_TSRC_SRE_LEN                     _ASC_UL(1)

/* ASC_TSRC_SRR (rh) */
#define ASC_TSRC_SRR_POS                     _ASC_UL(13)
#define ASC_TSRC_SRR_LEN                     _ASC_UL(1)

/* ASC_TSRC_CLRR (w) */
#define ASC_TSRC_CLRR_POS                    _ASC_UL(14)
#define ASC_TSRC_CLRR_LEN                    _ASC_UL(1)

/* ASC_TSRC_SETR (w) */
#define ASC_TSRC_SETR_POS                    _ASC_UL(15)
#define ASC_TSRC_SETR_LEN                    _ASC_UL(1)

/* ASC_RSRC_SRPN (rw) */
#define ASC_RSRC_SRPN_POS                    _ASC_UL(0)
#define ASC_RSRC_SRPN_LEN                    _ASC_UL(8)

/* ASC_RSRC_TOS (rw) */
#define ASC_RSRC_TOS_POS                     _ASC_UL(10)
#define ASC_RSRC_TOS_LEN                     _ASC_UL(1)

/* ASC_RSRC_SRE (rw) */
#define ASC_RSRC_SRE_POS                     _ASC_UL(12)
#define ASC_RSRC_SRE_LEN                     _ASC_UL(1)

/* ASC_RSRC_SRR (rh) */
#define ASC_RSRC_SRR_POS                     _ASC_UL(13)
#define ASC_RSRC_SRR_LEN                     _ASC_UL(1)

/* ASC_RSRC_CLRR (w) */
#define ASC_RSRC_CLRR_POS                    _ASC_UL(14)
#define ASC_RSRC_CLRR_LEN                    _ASC_UL(1)

/* ASC_RSRC_SETR (w) */
#define ASC_RSRC_SETR_POS                    _ASC_UL(15)
#define ASC_RSRC_SETR_LEN                    _ASC_UL(1)

/* ASC_ESRC_SRPN (rw) */
#define ASC_ESRC_SRPN_POS                    _ASC_UL(0)
#define ASC_ESRC_SRPN_LEN                    _ASC_UL(8)

/* ASC_ESRC_TOS (rw) */
#define ASC_ESRC_TOS_POS                     _ASC_UL(10)
#define ASC_ESRC_TOS_LEN                     _ASC_UL(1)

/* ASC_ESRC_SRE (rw) */
#define ASC_ESRC_SRE_POS                     _ASC_UL(12)
#define ASC_ESRC_SRE_LEN                     _ASC_UL(1)

/* ASC_ESRC_SRR (rh) */
#define ASC_ESRC_SRR_POS                     _ASC_UL(13)
#define ASC_ESRC_SRR_LEN                     _ASC_UL(1)

/* ASC_ESRC_CLRR (w) */
#define ASC_ESRC_CLRR_POS                    _ASC_UL(14)
#define ASC_ESRC_CLRR_LEN                    _ASC_UL(1)

/* ASC_ESRC_SETR (w) */
#define ASC_ESRC_SETR_POS                    _ASC_UL(15)
#define ASC_ESRC_SETR_LEN                    _ASC_UL(1)

/* ASC_TBSRC_SRPN (rw) */
#define ASC_TBSRC_SRPN_POS                   _ASC_UL(0)
#define ASC_TBSRC_SRPN_LEN                   _ASC_UL(8)

/* ASC_TBSRC_TOS (rw) */
#define ASC_TBSRC_TOS_POS                    _ASC_UL(10)
#define ASC_TBSRC_TOS_LEN                    _ASC_UL(1)

/* ASC_TBSRC_SRE (rw) */
#define ASC_TBSRC_SRE_POS                    _ASC_UL(12)
#define ASC_TBSRC_SRE_LEN                    _ASC_UL(1)

/* ASC_TBSRC_SRR (rh) */
#define ASC_TBSRC_SRR_POS                    _ASC_UL(13)
#define ASC_TBSRC_SRR_LEN                    _ASC_UL(1)

/* ASC_TBSRC_CLRR (w) */
#define ASC_TBSRC_CLRR_POS                   _ASC_UL(14)
#define ASC_TBSRC_CLRR_LEN                   _ASC_UL(1)

/* ASC_TBSRC_SETR (w) */
#define ASC_TBSRC_SETR_POS                   _ASC_UL(15)
#define ASC_TBSRC_SETR_LEN                   _ASC_UL(1)

/* ASC0_CLC_DISR (rw) */
#define ASC0_CLC_DISR_POS                    _ASC_UL(0)
#define ASC0_CLC_DISR_LEN                    _ASC_UL(1)

/* ASC0_CLC_DISS (r) */
#define ASC0_CLC_DISS_POS                    _ASC_UL(1)
#define ASC0_CLC_DISS_LEN                    _ASC_UL(1)

/* ASC0_CLC_SPEN (rw) */
#define ASC0_CLC_SPEN_POS                    _ASC_UL(2)
#define ASC0_CLC_SPEN_LEN                    _ASC_UL(1)

/* ASC0_CLC_EDIS (rw) */
#define ASC0_CLC_EDIS_POS                    _ASC_UL(3)
#define ASC0_CLC_EDIS_LEN                    _ASC_UL(1)

/* ASC0_CLC_SBWE (w) */
#define ASC0_CLC_SBWE_POS                    _ASC_UL(4)
#define ASC0_CLC_SBWE_LEN                    _ASC_UL(1)

/* ASC0_CLC_FSOE (rw) */
#define ASC0_CLC_FSOE_POS                    _ASC_UL(5)
#define ASC0_CLC_FSOE_LEN                    _ASC_UL(1)

/* ASC0_CLC_RMC (rw) */
#define ASC0_CLC_RMC_POS                     _ASC_UL(8)
#define ASC0_CLC_RMC_LEN                     _ASC_UL(8)

/* ASC0_PISEL_RIS (rw) */
#define ASC0_PISEL_RIS_POS                   _ASC_UL(0)
#define ASC0_PISEL_RIS_LEN                   _ASC_UL(1)

/* ASC0_ID_MODREV (r) */
#define ASC0_ID_MODREV_POS                   _ASC_UL(0)
#define ASC0_ID_MODREV_LEN                   _ASC_UL(8)

/* ASC0_ID_MODNUM (r) */
#define ASC0_ID_MODNUM_POS                   _ASC_UL(8)
#define ASC0_ID_MODNUM_LEN                   _ASC_UL(8)

/* ASC0_CON_M (rw) */
#define ASC0_CON_M_POS                       _ASC_UL(0)
#define ASC0_CON_M_LEN                       _ASC_UL(3)

/* ASC0_CON_STP (rw) */
#define ASC0_CON_STP_POS                     _ASC_UL(3)
#define ASC0_CON_STP_LEN                     _ASC_UL(1)

/* ASC0_CON_REN (rwh) */
#define ASC0_CON_REN_POS                     _ASC_UL(4)
#define ASC0_CON_REN_LEN                     _ASC_UL(1)

/* ASC0_CON_PEN (rw) */
#define ASC0_CON_PEN_POS                     _ASC_UL(5)
#define ASC0_CON_PEN_LEN                     _ASC_UL(1)

/* ASC0_CON_FEN (rw) */
#define ASC0_CON_FEN_POS                     _ASC_UL(6)
#define ASC0_CON_FEN_LEN                     _ASC_UL(1)

/* ASC0_CON_OEN (rw) */
#define ASC0_CON_OEN_POS                     _ASC_UL(7)
#define ASC0_CON_OEN_LEN                     _ASC_UL(1)

/* ASC0_CON_PE (rwh) */
#define ASC0_CON_PE_POS                      _ASC_UL(8)
#define ASC0_CON_PE_LEN                      _ASC_UL(1)

/* ASC0_CON_FE (rwh) */
#define ASC0_CON_FE_POS                      _ASC_UL(9)
#define ASC0_CON_FE_LEN                      _ASC_UL(1)

/* ASC0_CON_OE (rwh) */
#define ASC0_CON_OE_POS                      _ASC_UL(10)
#define ASC0_CON_OE_LEN                      _ASC_UL(1)

/* ASC0_CON_FDE (rw) */
#define ASC0_CON_FDE_POS                     _ASC_UL(11)
#define ASC0_CON_FDE_LEN                     _ASC_UL(1)

/* ASC0_CON_ODD (rw) */
#define ASC0_CON_ODD_POS                     _ASC_UL(12)
#define ASC0_CON_ODD_LEN                     _ASC_UL(1)

/* ASC0_CON_BRS (rw) */
#define ASC0_CON_BRS_POS                     _ASC_UL(13)
#define ASC0_CON_BRS_LEN                     _ASC_UL(1)

/* ASC0_CON_LB (rw) */
#define ASC0_CON_LB_POS                      _ASC_UL(14)
#define ASC0_CON_LB_LEN                      _ASC_UL(1)

/* ASC0_CON_R (rw) */
#define ASC0_CON_R_POS                       _ASC_UL(15)
#define ASC0_CON_R_LEN                       _ASC_UL(1)

/* ASC0_BG_BR_VALUE (rwh) */
#define ASC0_BG_BR_VALUE_POS                 _ASC_UL(0)
#define ASC0_BG_BR_VALUE_LEN                 _ASC_UL(13)

/* ASC0_FDV_FD_VALUE (rw) */
#define ASC0_FDV_FD_VALUE_POS                _ASC_UL(0)
#define ASC0_FDV_FD_VALUE_LEN                _ASC_UL(9)

/* ASC0_TBUF_TD_VALUE (rw) */
#define ASC0_TBUF_TD_VALUE_POS               _ASC_UL(0)
#define ASC0_TBUF_TD_VALUE_LEN               _ASC_UL(9)

/* ASC0_RBUF_RD_VALUE (rh) */
#define ASC0_RBUF_RD_VALUE_POS               _ASC_UL(0)
#define ASC0_RBUF_RD_VALUE_LEN               _ASC_UL(9)

/* ASC0_WHBCON_CLRREN (w) */
#define ASC0_WHBCON_CLRREN_POS               _ASC_UL(4)
#define ASC0_WHBCON_CLRREN_LEN               _ASC_UL(1)

/* ASC0_WHBCON_SETREN (w) */
#define ASC0_WHBCON_SETREN_POS               _ASC_UL(5)
#define ASC0_WHBCON_SETREN_LEN               _ASC_UL(1)

/* ASC0_WHBCON_CLRPE (w) */
#define ASC0_WHBCON_CLRPE_POS                _ASC_UL(8)
#define ASC0_WHBCON_CLRPE_LEN                _ASC_UL(1)

/* ASC0_WHBCON_CLRFE (w) */
#define ASC0_WHBCON_CLRFE_POS                _ASC_UL(9)
#define ASC0_WHBCON_CLRFE_LEN                _ASC_UL(1)

/* ASC0_WHBCON_CLROE (w) */
#define ASC0_WHBCON_CLROE_POS                _ASC_UL(10)
#define ASC0_WHBCON_CLROE_LEN                _ASC_UL(1)

/* ASC0_WHBCON_SETPE (w) */
#define ASC0_WHBCON_SETPE_POS                _ASC_UL(11)
#define ASC0_WHBCON_SETPE_LEN                _ASC_UL(1)

/* ASC0_WHBCON_SETFE (w) */
#define ASC0_WHBCON_SETFE_POS                _ASC_UL(12)
#define ASC0_WHBCON_SETFE_LEN                _ASC_UL(1)

/* ASC0_WHBCON_SETOE (w) */
#define ASC0_WHBCON_SETOE_POS                _ASC_UL(13)
#define ASC0_WHBCON_SETOE_LEN                _ASC_UL(1)

/* ASC0_TSRC_SRPN (rw) */
#define ASC0_TSRC_SRPN_POS                   _ASC_UL(0)
#define ASC0_TSRC_SRPN_LEN                   _ASC_UL(8)

/* ASC0_TSRC_TOS (rw) */
#define ASC0_TSRC_TOS_POS                    _ASC_UL(10)
#define ASC0_TSRC_TOS_LEN                    _ASC_UL(1)

/* ASC0_TSRC_SRE (rw) */
#define ASC0_TSRC_SRE_POS                    _ASC_UL(12)
#define ASC0_TSRC_SRE_LEN                    _ASC_UL(1)

/* ASC0_TSRC_SRR (rh) */
#define ASC0_TSRC_SRR_POS                    _ASC_UL(13)
#define ASC0_TSRC_SRR_LEN                    _ASC_UL(1)

/* ASC0_TSRC_CLRR (w) */
#define ASC0_TSRC_CLRR_POS                   _ASC_UL(14)
#define ASC0_TSRC_CLRR_LEN                   _ASC_UL(1)

/* ASC0_TSRC_SETR (w) */
#define ASC0_TSRC_SETR_POS                   _ASC_UL(15)
#define ASC0_TSRC_SETR_LEN                   _ASC_UL(1)

/* ASC0_RSRC_SRPN (rw) */
#define ASC0_RSRC_SRPN_POS                   _ASC_UL(0)
#define ASC0_RSRC_SRPN_LEN                   _ASC_UL(8)

/* ASC0_RSRC_TOS (rw) */
#define ASC0_RSRC_TOS_POS                    _ASC_UL(10)
#define ASC0_RSRC_TOS_LEN                    _ASC_UL(1)

/* ASC0_RSRC_SRE (rw) */
#define ASC0_RSRC_SRE_POS                    _ASC_UL(12)
#define ASC0_RSRC_SRE_LEN                    _ASC_UL(1)

/* ASC0_RSRC_SRR (rh) */
#define ASC0_RSRC_SRR_POS                    _ASC_UL(13)
#define ASC0_RSRC_SRR_LEN                    _ASC_UL(1)

/* ASC0_RSRC_CLRR (w) */
#define ASC0_RSRC_CLRR_POS                   _ASC_UL(14)
#define ASC0_RSRC_CLRR_LEN                   _ASC_UL(1)

/* ASC0_RSRC_SETR (w) */
#define ASC0_RSRC_SETR_POS                   _ASC_UL(15)
#define ASC0_RSRC_SETR_LEN                   _ASC_UL(1)

/* ASC0_ESRC_SRPN (rw) */
#define ASC0_ESRC_SRPN_POS                   _ASC_UL(0)
#define ASC0_ESRC_SRPN_LEN                   _ASC_UL(8)

/* ASC0_ESRC_TOS (rw) */
#define ASC0_ESRC_TOS_POS                    _ASC_UL(10)
#define ASC0_ESRC_TOS_LEN                    _ASC_UL(1)

/* ASC0_ESRC_SRE (rw) */
#define ASC0_ESRC_SRE_POS                    _ASC_UL(12)
#define ASC0_ESRC_SRE_LEN                    _ASC_UL(1)

/* ASC0_ESRC_SRR (rh) */
#define ASC0_ESRC_SRR_POS                    _ASC_UL(13)
#define ASC0_ESRC_SRR_LEN                    _ASC_UL(1)

/* ASC0_ESRC_CLRR (w) */
#define ASC0_ESRC_CLRR_POS                   _ASC_UL(14)
#define ASC0_ESRC_CLRR_LEN                   _ASC_UL(1)

/* ASC0_ESRC_SETR (w) */
#define ASC0_ESRC_SETR_POS                   _ASC_UL(15)
#define ASC0_ESRC_SETR_LEN                   _ASC_UL(1)

/* ASC0_TBSRC_SRPN (rw) */
#define ASC0_TBSRC_SRPN_POS                  _ASC_UL(0)
#define ASC0_TBSRC_SRPN_LEN                  _ASC_UL(8)

/* ASC0_TBSRC_TOS (rw) */
#define ASC0_TBSRC_TOS_POS                   _ASC_UL(10)
#define ASC0_TBSRC_TOS_LEN                   _ASC_UL(1)

/* ASC0_TBSRC_SRE (rw) */
#define ASC0_TBSRC_SRE_POS                   _ASC_UL(12)
#define ASC0_TBSRC_SRE_LEN                   _ASC_UL(1)

/* ASC0_TBSRC_SRR (rh) */
#define ASC0_TBSRC_SRR_POS                   _ASC_UL(13)
#define ASC0_TBSRC_SRR_LEN                   _ASC_UL(1)

/* ASC0_TBSRC_CLRR (w) */
#define ASC0_TBSRC_CLRR_POS                  _ASC_UL(14)
#define ASC0_TBSRC_CLRR_LEN                  _ASC_UL(1)

/* ASC0_TBSRC_SETR (w) */
#define ASC0_TBSRC_SETR_POS                  _ASC_UL(15)
#define ASC0_TBSRC_SETR_LEN                  _ASC_UL(1)

/* ASC1_PISEL_RIS (rw) */
#define ASC1_PISEL_RIS_POS                   _ASC_UL(0)
#define ASC1_PISEL_RIS_LEN                   _ASC_UL(1)

/* ASC1_ID_MODREV (r) */
#define ASC1_ID_MODREV_POS                   _ASC_UL(0)
#define ASC1_ID_MODREV_LEN                   _ASC_UL(8)

/* ASC1_ID_MODNUM (r) */
#define ASC1_ID_MODNUM_POS                   _ASC_UL(8)
#define ASC1_ID_MODNUM_LEN                   _ASC_UL(8)

/* ASC1_CON_M (rw) */
#define ASC1_CON_M_POS                       _ASC_UL(0)
#define ASC1_CON_M_LEN                       _ASC_UL(3)

/* ASC1_CON_STP (rw) */
#define ASC1_CON_STP_POS                     _ASC_UL(3)
#define ASC1_CON_STP_LEN                     _ASC_UL(1)

/* ASC1_CON_REN (rwh) */
#define ASC1_CON_REN_POS                     _ASC_UL(4)
#define ASC1_CON_REN_LEN                     _ASC_UL(1)

/* ASC1_CON_PEN (rw) */
#define ASC1_CON_PEN_POS                     _ASC_UL(5)
#define ASC1_CON_PEN_LEN                     _ASC_UL(1)

/* ASC1_CON_FEN (rw) */
#define ASC1_CON_FEN_POS                     _ASC_UL(6)
#define ASC1_CON_FEN_LEN                     _ASC_UL(1)

/* ASC1_CON_OEN (rw) */
#define ASC1_CON_OEN_POS                     _ASC_UL(7)
#define ASC1_CON_OEN_LEN                     _ASC_UL(1)

/* ASC1_CON_PE (rwh) */
#define ASC1_CON_PE_POS                      _ASC_UL(8)
#define ASC1_CON_PE_LEN                      _ASC_UL(1)

/* ASC1_CON_FE (rwh) */
#define ASC1_CON_FE_POS                      _ASC_UL(9)
#define ASC1_CON_FE_LEN                      _ASC_UL(1)

/* ASC1_CON_OE (rwh) */
#define ASC1_CON_OE_POS                      _ASC_UL(10)
#define ASC1_CON_OE_LEN                      _ASC_UL(1)

/* ASC1_CON_FDE (rw) */
#define ASC1_CON_FDE_POS                     _ASC_UL(11)
#define ASC1_CON_FDE_LEN                     _ASC_UL(1)

/* ASC1_CON_ODD (rw) */
#define ASC1_CON_ODD_POS                     _ASC_UL(12)
#define ASC1_CON_ODD_LEN                     _ASC_UL(1)

/* ASC1_CON_BRS (rw) */
#define ASC1_CON_BRS_POS                     _ASC_UL(13)
#define ASC1_CON_BRS_LEN                     _ASC_UL(1)

/* ASC1_CON_LB (rw) */
#define ASC1_CON_LB_POS                      _ASC_UL(14)
#define ASC1_CON_LB_LEN                      _ASC_UL(1)

/* ASC1_CON_R (rw) */
#define ASC1_CON_R_POS                       _ASC_UL(15)
#define ASC1_CON_R_LEN                       _ASC_UL(1)

/* ASC1_BG_BR_VALUE (rwh) */
#define ASC1_BG_BR_VALUE_POS                 _ASC_UL(0)
#define ASC1_BG_BR_VALUE_LEN                 _ASC_UL(13)

/* ASC1_FDV_FD_VALUE (rw) */
#define ASC1_FDV_FD_VALUE_POS                _ASC_UL(0)
#define ASC1_FDV_FD_VALUE_LEN                _ASC_UL(9)

/* ASC1_TBUF_TD_VALUE (rw) */
#define ASC1_TBUF_TD_VALUE_POS               _ASC_UL(0)
#define ASC1_TBUF_TD_VALUE_LEN               _ASC_UL(9)

/* ASC1_RBUF_RD_VALUE (rh) */
#define ASC1_RBUF_RD_VALUE_POS               _ASC_UL(0)
#define ASC1_RBUF_RD_VALUE_LEN               _ASC_UL(9)

/* ASC1_WHBCON_CLRREN (w) */
#define ASC1_WHBCON_CLRREN_POS               _ASC_UL(4)
#define ASC1_WHBCON_CLRREN_LEN               _ASC_UL(1)

/* ASC1_WHBCON_SETREN (w) */
#define ASC1_WHBCON_SETREN_POS               _ASC_UL(5)
#define ASC1_WHBCON_SETREN_LEN               _ASC_UL(1)

/* ASC1_WHBCON_CLRPE (w) */
#define ASC1_WHBCON_CLRPE_POS                _ASC_UL(8)
#define ASC1_WHBCON_CLRPE_LEN                _ASC_UL(1)

/* ASC1_WHBCON_CLRFE (w) */
#define ASC1_WHBCON_CLRFE_POS                _ASC_UL(9)
#define ASC1_WHBCON_CLRFE_LEN                _ASC_UL(1)

/* ASC1_WHBCON_CLROE (w) */
#define ASC1_WHBCON_CLROE_POS                _ASC_UL(10)
#define ASC1_WHBCON_CLROE_LEN                _ASC_UL(1)

/* ASC1_WHBCON_SETPE (w) */
#define ASC1_WHBCON_SETPE_POS                _ASC_UL(11)
#define ASC1_WHBCON_SETPE_LEN                _ASC_UL(1)

/* ASC1_WHBCON_SETFE (w) */
#define ASC1_WHBCON_SETFE_POS                _ASC_UL(12)
#define ASC1_WHBCON_SETFE_LEN                _ASC_UL(1)

/* ASC1_WHBCON_SETOE (w) */
#define ASC1_WHBCON_SETOE_POS                _ASC_UL(13)
#define ASC1_WHBCON_SETOE_LEN                _ASC_UL(1)

/* ASC1_TSRC_SRPN (rw) */
#define ASC1_TSRC_SRPN_POS                   _ASC_UL(0)
#define ASC1_TSRC_SRPN_LEN                   _ASC_UL(8)

/* ASC1_TSRC_TOS (rw) */
#define ASC1_TSRC_TOS_POS                    _ASC_UL(10)
#define ASC1_TSRC_TOS_LEN                    _ASC_UL(1)

/* ASC1_TSRC_SRE (rw) */
#define ASC1_TSRC_SRE_POS                    _ASC_UL(12)
#define ASC1_TSRC_SRE_LEN                    _ASC_UL(1)

/* ASC1_TSRC_SRR (rh) */
#define ASC1_TSRC_SRR_POS                    _ASC_UL(13)
#define ASC1_TSRC_SRR_LEN                    _ASC_UL(1)

/* ASC1_TSRC_CLRR (w) */
#define ASC1_TSRC_CLRR_POS                   _ASC_UL(14)
#define ASC1_TSRC_CLRR_LEN                   _ASC_UL(1)

/* ASC1_TSRC_SETR (w) */
#define ASC1_TSRC_SETR_POS                   _ASC_UL(15)
#define ASC1_TSRC_SETR_LEN                   _ASC_UL(1)

/* ASC1_RSRC_SRPN (rw) */
#define ASC1_RSRC_SRPN_POS                   _ASC_UL(0)
#define ASC1_RSRC_SRPN_LEN                   _ASC_UL(8)

/* ASC1_RSRC_TOS (rw) */
#define ASC1_RSRC_TOS_POS                    _ASC_UL(10)
#define ASC1_RSRC_TOS_LEN                    _ASC_UL(1)

/* ASC1_RSRC_SRE (rw) */
#define ASC1_RSRC_SRE_POS                    _ASC_UL(12)
#define ASC1_RSRC_SRE_LEN                    _ASC_UL(1)

/* ASC1_RSRC_SRR (rh) */
#define ASC1_RSRC_SRR_POS                    _ASC_UL(13)
#define ASC1_RSRC_SRR_LEN                    _ASC_UL(1)

/* ASC1_RSRC_CLRR (w) */
#define ASC1_RSRC_CLRR_POS                   _ASC_UL(14)
#define ASC1_RSRC_CLRR_LEN                   _ASC_UL(1)

/* ASC1_RSRC_SETR (w) */
#define ASC1_RSRC_SETR_POS                   _ASC_UL(15)
#define ASC1_RSRC_SETR_LEN                   _ASC_UL(1)

/* ASC1_ESRC_SRPN (rw) */
#define ASC1_ESRC_SRPN_POS                   _ASC_UL(0)
#define ASC1_ESRC_SRPN_LEN                   _ASC_UL(8)

/* ASC1_ESRC_TOS (rw) */
#define ASC1_ESRC_TOS_POS                    _ASC_UL(10)
#define ASC1_ESRC_TOS_LEN                    _ASC_UL(1)

/* ASC1_ESRC_SRE (rw) */
#define ASC1_ESRC_SRE_POS                    _ASC_UL(12)
#define ASC1_ESRC_SRE_LEN                    _ASC_UL(1)

/* ASC1_ESRC_SRR (rh) */
#define ASC1_ESRC_SRR_POS                    _ASC_UL(13)
#define ASC1_ESRC_SRR_LEN                    _ASC_UL(1)

/* ASC1_ESRC_CLRR (w) */
#define ASC1_ESRC_CLRR_POS                   _ASC_UL(14)
#define ASC1_ESRC_CLRR_LEN                   _ASC_UL(1)

/* ASC1_ESRC_SETR (w) */
#define ASC1_ESRC_SETR_POS                   _ASC_UL(15)
#define ASC1_ESRC_SETR_LEN                   _ASC_UL(1)

/* ASC1_TBSRC_SRPN (rw) */
#define ASC1_TBSRC_SRPN_POS                  _ASC_UL(0)
#define ASC1_TBSRC_SRPN_LEN                  _ASC_UL(8)

/* ASC1_TBSRC_TOS (rw) */
#define ASC1_TBSRC_TOS_POS                   _ASC_UL(10)
#define ASC1_TBSRC_TOS_LEN                   _ASC_UL(1)

/* ASC1_TBSRC_SRE (rw) */
#define ASC1_TBSRC_SRE_POS                   _ASC_UL(12)
#define ASC1_TBSRC_SRE_LEN                   _ASC_UL(1)

/* ASC1_TBSRC_SRR (rh) */
#define ASC1_TBSRC_SRR_POS                   _ASC_UL(13)
#define ASC1_TBSRC_SRR_LEN                   _ASC_UL(1)

/* ASC1_TBSRC_CLRR (w) */
#define ASC1_TBSRC_CLRR_POS                  _ASC_UL(14)
#define ASC1_TBSRC_CLRR_LEN                  _ASC_UL(1)

/* ASC1_TBSRC_SETR (w) */
#define ASC1_TBSRC_SETR_POS                  _ASC_UL(15)
#define ASC1_TBSRC_SETR_LEN                  _ASC_UL(1)

#endif
